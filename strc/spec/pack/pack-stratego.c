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
ATerm term_l_44;
ATerm term_k_44;
ATerm term_j_44;
ATerm term_i_44;
ATerm term_p_43;
ATerm term_o_43;
ATerm term_n_43;
ATerm term_d_42;
ATerm term_c_42;
ATerm term_b_42;
ATerm term_t_41;
ATerm term_o_41;
ATerm term_n_41;
ATerm term_m_41;
ATerm term_l_41;
ATerm term_k_41;
ATerm term_j_41;
ATerm term_i_41;
ATerm term_b_41;
ATerm term_a_41;
ATerm term_w_40;
ATerm term_v_40;
ATerm term_s_40;
ATerm term_x_39;
ATerm term_v_39;
ATerm term_m_38;
ATerm term_l_38;
ATerm term_k_38;
ATerm term_j_38;
ATerm term_d_38;
ATerm term_c_38;
ATerm term_b_38;
ATerm term_a_38;
ATerm term_z_37;
ATerm term_u_37;
ATerm term_i_37;
ATerm term_g_37;
ATerm term_f_37;
ATerm term_v_36;
ATerm term_q_36;
ATerm term_p_36;
ATerm term_o_36;
ATerm term_n_36;
ATerm term_m_36;
ATerm term_b_36;
ATerm term_a_36;
ATerm term_z_35;
ATerm term_y_35;
ATerm term_x_35;
ATerm term_v_35;
ATerm term_u_35;
ATerm term_o_35;
ATerm term_g_35;
ATerm term_r_32;
ATerm term_p_32;
ATerm term_x_31;
ATerm term_n_30;
ATerm term_l_30;
ATerm term_k_30;
ATerm term_j_30;
ATerm term_i_30;
ATerm term_h_30;
ATerm term_g_30;
ATerm term_w_29;
ATerm term_c_29;
ATerm term_b_29;
ATerm term_h_28;
ATerm term_n_27;
ATerm term_l_27;
ATerm term_i_27;
ATerm term_f_27;
ATerm term_c_27;
ATerm term_b_27;
ATerm term_v_26;
ATerm term_q_26;
ATerm term_n_26;
ATerm term_m_26;
ATerm term_g_26;
ATerm term_o_25;
ATerm term_j_25;
ATerm term_r_24;
ATerm term_n_24;
ATerm term_l_24;
ATerm term_j_24;
ATerm term_i_24;
ATerm term_f_24;
ATerm term_u_23;
ATerm term_t_23;
ATerm term_r_23;
ATerm term_q_23;
ATerm term_o_23;
ATerm term_n_23;
ATerm term_j_23;
ATerm term_g_23;
ATerm term_f_23;
ATerm term_d_23;
ATerm term_v_22;
ATerm term_g_21;
ATerm term_f_21;
ATerm term_v_20;
ATerm term_u_20;
ATerm term_t_20;
ATerm term_s_20;
ATerm term_p_20;
ATerm term_m_20;
ATerm term_l_20;
ATerm term_k_20;
ATerm term_i_20;
ATerm term_g_20;
ATerm term_f_20;
ATerm term_e_20;
ATerm term_c_20;
ATerm term_b_20;
ATerm term_a_20;
ATerm term_z_19;
ATerm term_y_19;
ATerm term_x_19;
ATerm term_w_19;
ATerm term_v_19;
ATerm term_u_19;
ATerm term_t_19;
ATerm term_q_19;
ATerm term_n_19;
ATerm term_m_19;
ATerm term_l_19;
ATerm term_j_19;
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
ATerm term_h_18;
ATerm term_g_18;
ATerm term_f_18;
ATerm term_e_18;
ATerm term_c_18;
ATerm term_a_18;
ATerm term_y_17;
ATerm term_x_17;
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
ATerm term_d_17;
ATerm term_z_16;
ATerm term_x_16;
ATerm term_w_16;
ATerm term_v_16;
ATerm term_t_16;
ATerm term_s_16;
ATerm term_q_16;
ATerm term_p_16;
ATerm term_n_16;
ATerm term_l_16;
ATerm term_k_16;
ATerm term_j_16;
ATerm term_i_16;
ATerm term_g_16;
ATerm term_e_16;
ATerm term_d_16;
ATerm term_c_16;
ATerm term_z_15;
ATerm term_w_15;
ATerm term_v_15;
ATerm term_s_15;
ATerm term_r_15;
ATerm term_q_15;
ATerm term_p_15;
ATerm term_o_15;
ATerm term_n_15;
ATerm term_m_15;
ATerm term_k_15;
ATerm term_j_15;
ATerm term_i_15;
ATerm term_h_15;
ATerm term_g_15;
ATerm term_f_15;
ATerm term_e_15;
ATerm term_d_15;
ATerm term_c_15;
ATerm term_a_15;
ATerm term_z_14;
ATerm term_y_14;
ATerm term_x_14;
ATerm term_w_14;
ATerm term_n_14;
ATerm term_m_14;
ATerm term_l_14;
ATerm term_k_14;
ATerm term_g_14;
ATerm term_z_13;
ATerm term_v_13;
ATerm term_t_13;
ATerm term_s_13;
ATerm term_m_13;
ATerm term_e_13;
ATerm term_d_12;
ATerm term_y_11;
ATerm term_x_11;
ATerm term_w_11;
ATerm term_t_11;
ATerm term_r_11;
ATerm term_q_11;
ATerm term_o_11;
ATerm term_j_11;
void init_constant_terms (void)
{
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--dep", 0, ATtrue));
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--nodep", 0, ATtrue));
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeAppl(ATmakeSymbol(".", 0, ATtrue));
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeAppl(ATmakeSymbol("dep", 0, ATtrue));
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeAppl(ATmakeSymbol(" \\\n	", 0, ATtrue));
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeAppl(ATmakeSymbol(" :", 0, ATtrue));
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_g_14));
  term_g_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_14, term_z_13, term_x_14);
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_14, term_a_15, term_c_15);
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_15, term_f_15, term_g_15);
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_15, term_j_15, term_k_15);
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_15, term_o_15, term_p_15);
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_15, term_s_15, term_v_15);
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_15, term_c_16, term_d_16);
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_16, term_i_16, term_j_16);
  ATprotect(&(term_l_16));
  term_l_16 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_16, term_n_16, term_p_16);
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_t_16));
  term_t_16 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_16, term_t_16, term_v_16);
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_16, term_z_16, term_d_17);
  ATprotect(&(term_g_17));
  term_g_17 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_h_17));
  term_h_17 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_k_17));
  term_k_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_l_17));
  term_l_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_17, term_h_17, term_k_17);
  ATprotect(&(term_m_17));
  term_m_17 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_n_17));
  term_n_17 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_17, term_n_17, term_o_17);
  ATprotect(&(term_q_17));
  term_q_17 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_r_17));
  term_r_17 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_s_17));
  term_s_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_t_17));
  term_t_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_17, term_r_17, term_s_17);
  ATprotect(&(term_u_17));
  term_u_17 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_v_17));
  term_v_17 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_w_17));
  term_w_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_17, term_v_17, term_w_17);
  ATprotect(&(term_y_17));
  term_y_17 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_a_18));
  term_a_18 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_e_18));
  term_e_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_17, term_a_18, term_c_18);
  ATprotect(&(term_f_18));
  term_f_18 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_g_18));
  term_g_18 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_h_18));
  term_h_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_j_18));
  term_j_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_18, term_g_18, term_h_18);
  ATprotect(&(term_k_18));
  term_k_18 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_l_18));
  term_l_18 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_n_18));
  term_n_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_o_18));
  term_o_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_18, term_l_18, term_n_18);
  ATprotect(&(term_p_18));
  term_p_18 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_q_18));
  term_q_18 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_r_18));
  term_r_18 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_t_18));
  term_t_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_18, term_q_18, term_r_18);
  ATprotect(&(term_u_18));
  term_u_18 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_y_18));
  term_y_18 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_z_18));
  term_z_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_18, term_d_12, term_y_18);
  ATprotect(&(term_a_19));
  term_a_19 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_c_19));
  term_c_19 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_d_19));
  term_d_19 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_19, term_c_19, term_d_19);
  ATprotect(&(term_h_19));
  term_h_19 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_j_19));
  term_j_19 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_l_19));
  term_l_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_m_19));
  term_m_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_19, term_j_19, term_l_19);
  ATprotect(&(term_n_19));
  term_n_19 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_q_19));
  term_q_19 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_t_19));
  term_t_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_u_19));
  term_u_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_19, term_q_19, term_t_19);
  ATprotect(&(term_v_19));
  term_v_19 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_w_19));
  term_w_19 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_x_19));
  term_x_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_y_19));
  term_y_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_19, term_w_19, term_x_19);
  ATprotect(&(term_z_19));
  term_z_19 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_a_20));
  term_a_20 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_b_20));
  term_b_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_c_20));
  term_c_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_19, term_a_20, term_b_20);
  ATprotect(&(term_e_20));
  term_e_20 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_f_20));
  term_f_20 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_g_20));
  term_g_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_i_20));
  term_i_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_20, term_f_20, term_g_20);
  ATprotect(&(term_k_20));
  term_k_20 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_l_20));
  term_l_20 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_m_20));
  term_m_20 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_p_20));
  term_p_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_20, term_l_20, term_m_20);
  ATprotect(&(term_s_20));
  term_s_20 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_t_20));
  term_t_20 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_u_20));
  term_u_20 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_v_20));
  term_v_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_20, term_t_20, term_u_20);
  ATprotect(&(term_f_21));
  term_f_21 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_g_21));
  term_g_21 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_v_22));
  term_v_22 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_d_23));
  term_d_23 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_f_23));
  term_f_23 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_g_23));
  term_g_23 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_j_23));
  term_j_23 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_n_23));
  term_n_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_o_23));
  term_o_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_q_23));
  term_q_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_r_23));
  term_r_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_t_23));
  term_t_23 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_u_23));
  term_u_23 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_f_24));
  term_f_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_i_24));
  term_i_24 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_j_24));
  term_j_24 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_l_24));
  term_l_24 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_n_24));
  term_n_24 = (ATerm) ATmakeAppl(sym__2, term_t_23, term_l_24);
  ATprotect(&(term_r_24));
  term_r_24 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_j_25));
  term_j_25 = (ATerm) ATmakeAppl(sym__2, term_t_23, term_u_23);
  ATprotect(&(term_o_25));
  term_o_25 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_g_26));
  term_g_26 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_m_26));
  term_m_26 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_n_26));
  term_n_26 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_q_26));
  term_q_26 = (ATerm) ATmakeInt(-1);
  ATprotect(&(term_v_26));
  term_v_26 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_b_27));
  term_b_27 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file> (file, mode)", 0, ATtrue));
  ATprotect(&(term_c_27));
  term_c_27 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_f_27));
  term_f_27 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_i_27));
  term_i_27 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_l_27));
  term_l_27 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_n_27));
  term_n_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_h_28));
  term_h_28 = (ATerm) ATmakeAppl(ATmakeSymbol("parse error in ", 0, ATtrue));
  ATprotect(&(term_b_29));
  term_b_29 = (ATerm) ATmakeAppl(ATmakeSymbol("parse-stratego", 0, ATtrue));
  ATprotect(&(term_c_29));
  term_c_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue));
  ATprotect(&(term_w_29));
  term_w_29 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
  ATprotect(&(term_g_30));
  term_g_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--slack", 0, ATtrue));
  ATprotect(&(term_h_30));
  term_h_30 = (ATerm) ATmakeAppl(ATmakeSymbol("*** module ", 0, ATtrue));
  ATprotect(&(term_i_30));
  term_i_30 = (ATerm) ATmakeAppl(ATmakeSymbol(" not found", 0, ATtrue));
  ATprotect(&(term_j_30));
  term_j_30 = (ATerm) ATmakeAppl(ATmakeSymbol(" reading ", 0, ATtrue));
  ATprotect(&(term_k_30));
  term_k_30 = (ATerm) ATmakeAppl(ATmakeSymbol("rtree", 0, ATtrue));
  ATprotect(&(term_l_30));
  term_l_30 = (ATerm) ATmakeAppl(ATmakeSymbol("str", 0, ATtrue));
  ATprotect(&(term_n_30));
  term_n_30 = (ATerm) ATmakeAppl(ATmakeSymbol("cr", 0, ATtrue));
  ATprotect(&(term_x_31));
  term_x_31 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_p_32));
  term_p_32 = (ATerm) ATmakeAppl(ATmakeSymbol("list-cons", 0, ATtrue));
  ATprotect(&(term_r_32));
  term_r_32 = (ATerm) ATmakeAppl(ATmakeSymbol("tuple-cons", 0, ATtrue));
  ATprotect(&(term_g_35));
  term_g_35 = (ATerm) ATmakeAppl(sym__2, term_l_27, term_v_26);
  ATprotect(&(term_o_35));
  term_o_35 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_u_35));
  term_u_35 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_v_35));
  term_v_35 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_x_35));
  term_x_35 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_y_35));
  term_y_35 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_z_35));
  term_z_35 = (ATerm) ATmakeAppl(sym__2, term_g_14, term_y_35);
  ATprotect(&(term_a_36));
  term_a_36 = (ATerm) ATmakeAppl(sym_Verbose_1, term_y_35);
  ATprotect(&(term_b_36));
  term_b_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_m_36));
  term_m_36 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_n_36));
  term_n_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_o_36));
  term_o_36 = (ATerm) ATmakeAppl(sym__2, term_n_36, term_f_27);
  ATprotect(&(term_p_36));
  term_p_36 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_q_36));
  term_q_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_v_36));
  term_v_36 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_f_37));
  term_f_37 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_g_37));
  term_g_37 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_i_37));
  term_i_37 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_u_37));
  term_u_37 = (ATerm) ATmakeAppl(ATmakeSymbol("-I d | --Include d   Include modules from directory d", 0, ATtrue));
  ATprotect(&(term_z_37));
  term_z_37 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_a_38));
  term_a_38 = (ATerm) ATmakeAppl(sym__2, term_q_11, term_z_37);
  ATprotect(&(term_b_38));
  term_b_38 = (ATerm) ATmakeAppl(ATmakeSymbol("--nodep              Don't create dependency file", 0, ATtrue));
  ATprotect(&(term_c_38));
  term_c_38 = (ATerm) ATmakeAppl(ATmakeSymbol("--dep f | -d f       Write dependency to file f", 0, ATtrue));
  ATprotect(&(term_d_38));
  term_d_38 = (ATerm) ATmakeAppl(ATmakeSymbol("--imports", 0, ATtrue));
  ATprotect(&(term_j_38));
  term_j_38 = (ATerm) ATmakeAppl(sym__2, term_d_38, term_f_27);
  ATprotect(&(term_k_38));
  term_k_38 = (ATerm) ATmakeAppl(ATmakeSymbol("--imports            Produce a list of imported modules only", 0, ATtrue));
  ATprotect(&(term_l_38));
  term_l_38 = (ATerm) ATmakeAppl(sym__2, term_g_30, term_f_27);
  ATprotect(&(term_m_38));
  term_m_38 = (ATerm) ATmakeAppl(ATmakeSymbol("--slack              Continue when module is not found", 0, ATtrue));
  ATprotect(&(term_v_39));
  term_v_39 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_x_39));
  term_x_39 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_s_40));
  term_s_40 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_v_40));
  term_v_40 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_w_40));
  term_w_40 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_a_41));
  term_a_41 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_b_41));
  term_b_41 = (ATerm) ATmakeAppl(sym__2, term_v_36, term_f_37);
  ATprotect(&(term_i_41));
  term_i_41 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_j_41));
  term_j_41 = (ATerm) ATmakeAppl(sym__2, term_i_41, term_f_27);
  ATprotect(&(term_k_41));
  term_k_41 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_l_41));
  term_l_41 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_m_41));
  term_m_41 = (ATerm) ATmakeAppl(sym__2, term_l_41, term_f_27);
  ATprotect(&(term_n_41));
  term_n_41 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_o_41));
  term_o_41 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_t_41));
  term_t_41 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_b_42));
  term_b_42 = (ATerm) ATmakeAppl(sym__2, term_v_40, term_f_27);
  ATprotect(&(term_c_42));
  term_c_42 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_d_42));
  term_d_42 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_n_43));
  term_n_43 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_o_43));
  term_o_43 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_p_43));
  term_p_43 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_i_44));
  term_i_44 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_j_44));
  term_j_44 = (ATerm) ATmakeAppl(sym__2, term_i_44, term_f_27);
  ATprotect(&(term_k_44));
  term_k_44 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_l_44));
  term_l_44 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
}
ATerm q_7 (ATerm m_42, ATerm n_42, ATerm);
ATerm a_0 (ATerm);
ATerm write_to_0_0 (ATerm);
ATerm r_7 (ATerm q_20, ATerm r_20, ATerm);
ATerm create_dep_file_0_0 (ATerm);
ATerm t_7 (ATerm c_39, ATerm d_39, ATerm);
ATerm u_7 (ATerm q_42, ATerm r_42, ATerm);
ATerm v_7 (ATerm o_95 (ATerm), ATerm q_421, ATerm u_42, ATerm);
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
ATerm y_7 (ATerm u_123, ATerm);
ATerm read_from_0_0 (ATerm);
ATerm pass_keep_0_0 (ATerm);
ATerm z_7 (ATerm i_36, ATerm j_36, ATerm);
ATerm pass_verbose_0_0 (ATerm);
ATerm xtc_transform_term_2_0 (ATerm b_105 (ATerm), ATerm c_105 (ATerm), ATerm);
ATerm a_8 (ATerm f_44, ATerm g_44, ATerm);
ATerm signal_to_descr_0_0 (ATerm);
ATerm signal_from_number_0_0 (ATerm);
ATerm warn_ifsignaled_0_0 (ATerm);
ATerm fork_0_0 (ATerm);
ATerm fork_and_wait_1_0 (ATerm j_97 (ATerm), ATerm);
ATerm table_getlist_0_0 (ATerm);
ATerm if_verbose5_1_0 (ATerm c_97 (ATerm), ATerm);
ATerm if_verbose4_1_0 (ATerm b_97 (ATerm), ATerm);
ATerm if_verbose6_1_0 (ATerm d_97 (ATerm), ATerm);
ATerm d_8 (ATerm v_86 (ATerm), ATerm b_26, ATerm a_26, ATerm);
ATerm k_1 (ATerm);
ATerm e_8 (ATerm y_48, ATerm z_48, ATerm a_49, ATerm);
ATerm f_8 (ATerm g_101 (ATerm), ATerm i_49, ATerm h_49, ATerm);
ATerm z_20 (ATerm h_20, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm g_8 (ATerm s_42, ATerm);
ATerm h_8 (ATerm e_39, ATerm f_39, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm a_24 (ATerm w_21, ATerm);
ATerm b_24 (ATerm b_22, ATerm h_22, ATerm i_22, ATerm);
ATerm c_24 (ATerm x_22, ATerm y_22, ATerm z_22, ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm n_1 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm r_1 (ATerm);
ATerm s_1 (ATerm);
ATerm read_repository_file_0_0 (ATerm);
ATerm x_1 (ATerm);
ATerm y_1 (ATerm);
ATerm z_1 (ATerm);
ATerm f_2 (ATerm);
ATerm g_2 (ATerm);
ATerm i_2 (ATerm);
ATerm j_2 (ATerm);
ATerm k_2 (ATerm);
ATerm xtc_read_0_0 (ATerm);
ATerm repeat_1_0 (ATerm c_76 (ATerm), ATerm);
ATerm xtc_location_0_0 (ATerm);
ATerm l_2 (ATerm);
ATerm m_2 (ATerm);
ATerm n_2 (ATerm);
ATerm o_2 (ATerm);
ATerm q_2 (ATerm);
ATerm xtc_load_0_0 (ATerm);
ATerm r_2 (ATerm);
ATerm u_2 (ATerm);
ATerm m_28 (ATerm m_27, ATerm);
ATerm f_3 (ATerm);
ATerm g_3 (ATerm);
ATerm h_3 (ATerm);
ATerm i_3 (ATerm);
ATerm xtc_find_0_0 (ATerm);
ATerm xtc_command_1_0 (ATerm s_104 (ATerm), ATerm);
ATerm i_8 (ATerm v_93 (ATerm), ATerm q_37, ATerm o_37, ATerm);
ATerm o_29 (ATerm e_29, ATerm);
ATerm p_29 (ATerm g_29, ATerm h_29, ATerm i_29, ATerm);
ATerm l_3 (ATerm);
ATerm open_file_0_0 (ATerm);
ATerm j_8 (ATerm s_33, ATerm t_33, ATerm);
ATerm new_0_0 (ATerm);
ATerm new_file_0_0 (ATerm);
ATerm m_3 (ATerm);
ATerm xtc_new_file_0_0 (ATerm);
ATerm xtc_transform_file_2_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm);
ATerm y_32 (ATerm i_31, ATerm j_31, ATerm k_31, ATerm);
ATerm z_32 (ATerm n_32, ATerm q_32, ATerm);
ATerm p_3 (ATerm);
ATerm q_3 (ATerm);
ATerm r_3 (ATerm);
ATerm s_3 (ATerm);
ATerm parse_module_0_0 (ATerm);
ATerm debug_1_0 (ATerm m_95 (ATerm), ATerm);
ATerm if_verbose3_1_0 (ATerm a_97 (ATerm), ATerm);
ATerm fetch_elem_1_0 (ATerm d_83 (ATerm), ATerm);
ATerm k_8 (ATerm w_38, ATerm x_38, ATerm);
ATerm l_8 (ATerm f_75 (ATerm), ATerm f_19, ATerm e_19, ATerm);
ATerm e_4 (ATerm);
ATerm get_module_1_0 (ATerm e_75 (ATerm), ATerm);
ATerm n_8 (ATerm y_86 (ATerm), ATerm z_86 (ATerm), ATerm f_26, ATerm e_26, ATerm);
ATerm o_8 (ATerm q_86 (ATerm), ATerm z_25, ATerm y_25, ATerm);
ATerm j_4 (ATerm);
ATerm l_4 (ATerm);
ATerm n_4 (ATerm);
ATerm s_8 (ATerm g_563, ATerm l_563, ATerm n_52, ATerm);
ATerm q_4 (ATerm);
ATerm r_4 (ATerm);
ATerm t_4 (ATerm);
ATerm v_38 (ATerm b_37, ATerm c_37, ATerm d_37, ATerm);
ATerm w_4 (ATerm);
ATerm diff_0_0 (ATerm);
ATerm u_8 (ATerm a_106 (ATerm), ATerm b_106 (ATerm), ATerm c_106 (ATerm), ATerm e_55, ATerm b_55, ATerm i_55, ATerm f_55, ATerm c_55, ATerm d_55, ATerm);
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
ATerm x_8 (ATerm v_18, ATerm);
ATerm z_8 (ATerm o_39, ATerm p_39, ATerm);
ATerm copy_to_1_0 (ATerm n_0 (ATerm), ATerm);
ATerm a_9 (ATerm g_48, ATerm h_48, ATerm);
ATerm end_scope_1_0 (ATerm s_93 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm v_75 (ATerm), ATerm w_75 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm r_93 (ATerm), ATerm);
ATerm p_5 (ATerm);
ATerm v_5 (ATerm);
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
ATerm h_9 (ATerm g_56, ATerm h_56, ATerm);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm);
ATerm x_6 (ATerm);
ATerm y_6 (ATerm);
ATerm a_7 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm d_7 (ATerm);
ATerm f_7 (ATerm);
ATerm g_7 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm f_9 (ATerm b_48, ATerm c_48, ATerm a_48, ATerm);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm);
ATerm at_end_1_0 (ATerm h_83 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm f_52 (ATerm t_51, ATerm);
ATerm conc_0_0 (ATerm);
ATerm y_8 (ATerm m_56, ATerm l_56, ATerm);
ATerm j_7 (ATerm);
ATerm k_7 (ATerm);
ATerm l_7 (ATerm);
ATerm m_7 (ATerm);
ATerm n_7 (ATerm);
ATerm s_7 (ATerm);
ATerm w_7 (ATerm);
ATerm x_7 (ATerm);
ATerm b_8 (ATerm);
ATerm c_8 (ATerm);
ATerm m_8 (ATerm);
ATerm p_8 (ATerm);
ATerm q_8 (ATerm);
ATerm r_8 (ATerm);
ATerm t_8 (ATerm);
ATerm pack_stratego_options_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm b_9 (ATerm c_36, ATerm d_36, ATerm);
ATerm foldr_2_0 (ATerm u_88 (ATerm), ATerm v_88 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm w_8 (ATerm);
ATerm c_9 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm y_96 (ATerm), ATerm);
ATerm d_9 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm g_9 (ATerm);
ATerm need_help_1_0 (ATerm m_98 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm e_9 (ATerm s_49, ATerm t_49, ATerm);
ATerm k_9 (ATerm);
ATerm p_9 (ATerm);
ATerm q_9 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm fetch_1_0 (ATerm b_83 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm r_9 (ATerm);
ATerm s_9 (ATerm);
ATerm t_9 (ATerm);
ATerm u_9 (ATerm);
ATerm w_9 (ATerm);
ATerm x_9 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm k_61 (ATerm), ATerm l_61 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm d_101 (ATerm), ATerm);
ATerm c_10 (ATerm);
ATerm e_10 (ATerm);
ATerm f_10 (ATerm);
ATerm g_10 (ATerm);
ATerm parse_options_1_0 (ATerm c_101 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm o_98 (ATerm), ATerm p_98 (ATerm), ATerm q_98 (ATerm), ATerm r_98 (ATerm), ATerm);
ATerm m_10 (ATerm);
ATerm o_10 (ATerm);
ATerm q_10 (ATerm);
ATerm u_10 (ATerm);
ATerm b_11 (ATerm);
ATerm pack_stratego_0_0 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm q_7 (ATerm m_42, ATerm n_42, ATerm t)
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
      ATerm d_11 = ATgetArgument(t, 0);
      if(match_cons(d_11, sym_Stream_1))
        {
          q_0 = ATgetArgument(d_11, 0);
        }
      else
        _fail(t);
      s_0 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_7(q_0, s_0, t);
  return(t);
}
ATerm write_to_0_0 (ATerm t)
{
  ATerm e_0 = NULL,o_0 = NULL;
  e_0 = t;
  t = xtc_new_file_0_0(t);
  o_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_0, e_0);
  t = v_7(a_0, o_0, e_0, t);
  t = SSL_close_file(o_0);
  t = (ATerm) ATmakeAppl(sym_FILE_1, o_0);
  return(t);
}
ATerm r_7 (ATerm q_20, ATerm r_20, ATerm t)
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
          ATerm e_11 = t;
          int i_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm x_0 = NULL;
              x_0 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = x_0;
              ;
              LocalPopChoice(i_11);
            }
          else
            {
              t = e_11;
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
  ATerm t_1 = NULL,u_1 = NULL,v_1 = NULL,w_1 = NULL,a_2 = NULL,c_2 = NULL,d_2 = NULL,e_2 = NULL,s_2 = NULL;
  u_1 = t;
  t = term_j_11;
  t = get_config_0_0(t);
  {
    ATerm m_11 = t;
    int n_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_o_11;
        t = get_config_0_0(t);
        ;
        LocalPopChoice(n_11);
      }
    else
      {
        t = m_11;
        {
          ATerm p_11 = t;
          if((PushChoice() == 0))
            {
              t = term_q_11;
              t = get_config_0_0(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = p_11;
            }
        }
      }
    t_1 = t;
    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_t_11), term_r_11), t_1);
    s_2 = t;
    t = SSL_concat_strings(s_2);
    e_2 = t;
    t = (ATerm) ATmakeAppl(sym__2, e_2, term_w_11);
    t = open_file_0_0(t);
    v_1 = t;
    t = term_x_11;
    c_2 = t;
    t = (ATerm) ATinsert(CheckATermList(u_1), term_y_11);
    d_2 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_x_11, (ATerm) ATinsert(CheckATermList(u_1), term_y_11));
    t = r_7(c_2, d_2, t);
    w_1 = t;
    t = (ATerm) ATinsert(CheckATermList(w_1), t_1);
    a_2 = t;
    t = SSL_printnl(v_1, a_2);
    t = SSL_close_file(v_1);
    t = (ATerm) ATmakeAppl(sym_FILE_1, e_2);
  }
  return(t);
}
ATerm t_7 (ATerm c_39, ATerm d_39, ATerm t)
{
  ATerm t_2 = NULL;
  t = SSL_fputc(c_39, d_39);
  t_2 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, t_2);
  return(t);
}
ATerm u_7 (ATerm q_42, ATerm r_42, ATerm t)
{
  ATerm v_2 = NULL;
  t = SSL_write_term_to_stream_text(q_42, r_42);
  v_2 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, v_2);
  return(t);
}
ATerm v_7 (ATerm o_95 (ATerm), ATerm q_421, ATerm u_42, ATerm t)
{
  ATerm w_2 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, q_421, term_w_11);
  t = open_stream_0_0(t);
  w_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_2, u_42);
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
      ATerm c_12 = ATgetArgument(t, 0);
      if(match_cons(c_12, sym_Stream_1))
        {
          c_3 = ATgetArgument(c_12, 0);
        }
      else
        _fail(t);
      d_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_7(c_3, d_3, t);
  z_2 = t;
  t = term_d_12;
  a_3 = t;
  t = z_2;
  if(match_cons(t, sym_Stream_1))
    {
      b_3 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_d_12, z_2);
  t = t_7(a_3, b_3, t);
  return(t);
}
ATerm write_to_text_0_0 (ATerm t)
{
  ATerm x_2 = NULL,y_2 = NULL;
  x_2 = t;
  t = xtc_new_file_0_0(t);
  y_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_2, x_2);
  t = v_7(c_0, y_2, x_2, t);
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
    ATerm e_12 = t;
    int f_12 = stack_ptr;
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
            ATerm g_12 = t;
            int j_12 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm b_2 = NULL,h_2 = NULL,d_1 = NULL;
                t = SSLgetAnnotations(v_4);
                b_2 = t;
                t = y_4;
                t = c_5(t);
                h_2 = t;
                t = (ATerm) ATinsert(CheckATermList(h_2), x_4);
                d_1 = t;
                t = SSLsetAnnotations(d_1, b_2);
                ;
                LocalPopChoice(j_12);
              }
            else
              {
                t = g_12;
                {
                  ATerm l_12 = t;
                  int p_12 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm p_2 = NULL,g_1 = NULL;
                      t = SSLgetAnnotations(v_4);
                      p_2 = t;
                      t = x_4;
                      if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 47)))
                        _fail(t);
                      t = (ATerm) ATinsert(CheckATermList(y_4), x_4);
                      g_1 = t;
                      t = SSLsetAnnotations(g_1, p_2);
                      ;
                      LocalPopChoice(p_12);
                    }
                  else
                    {
                      t = l_12;
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
        LocalPopChoice(f_12);
      }
    else
      {
        t = e_12;
      }
    o_3 = t;
    t = SSL_implode_string(o_3);
  }
  return(t);
}
ATerm at_suffix_rev_1_0 (ATerm p_83 (ATerm), ATerm t)
{
  ATerm d_6 (ATerm t)
  {
    ATerm w_12 = t;
    int x_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_5 = NULL,a_6 = NULL,c_6 = NULL,k_4 = NULL,f_5 = NULL,l_1 = NULL;
        z_5 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            a_6 = ATgetFirst((ATermList) t);
            c_6 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(z_5);
        k_4 = t;
        t = c_6;
        t = d_6(t);
        f_5 = t;
        t = (ATerm) ATinsert(CheckATermList(f_5), a_6);
        l_1 = t;
        t = SSLsetAnnotations(l_1, k_4);
        ;
        LocalPopChoice(x_12);
      }
    else
      {
        t = w_12;
        t = p_83(t);
      }
    return(t);
  }
  t = d_6(t);
  return(t);
}
ATerm get_filename_0_0 (ATerm t)
{
  ATerm h_6 = NULL,i_6 = NULL,j_6 = NULL;
  j_6 = t;
  t = SSL_explode_string(j_6);
  {
    ATerm z_12 = t;
    int a_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_0 (ATerm t)
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm b_13 = ATgetFirst((ATermList) t);
              if(((ATgetType(b_13) != AT_INT) || (ATgetInt((ATermInt) b_13) != 47)))
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
        LocalPopChoice(a_13);
      }
    else
      {
        t = z_12;
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
    ATerm z_6 = NULL,b_7 = NULL,c_7 = NULL;
    z_6 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = z_6;
      }
    else
      {
        ATerm r_5 = NULL,b_6 = NULL,e_6 = NULL,q_1 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            b_7 = ATgetFirst((ATermList) t);
            c_7 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(z_6);
        r_5 = t;
        t = b_7;
        t = r_82(t);
        b_6 = t;
        t = c_7;
        t = e_7(t);
        e_6 = t;
        t = (ATerm) ATinsert(CheckATermList(e_6), b_6);
        q_1 = t;
        t = SSLsetAnnotations(q_1, r_5);
      }
    return(t);
  }
  t = e_7(t);
  return(t);
}
ATerm u_0 (ATerm t)
{
  ATerm c_13 = t;
  int d_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(d_13);
    }
  else
    {
      t = c_13;
    }
  return(t);
}
ATerm v_0 (ATerm t)
{
  t = term_e_13;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm g_13 = t;
  int h_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_8 = NULL;
      v_8 = t;
      t = SSL_is_string(v_8);
      ;
      LocalPopChoice(h_13);
    }
  else
    {
      t = g_13;
      {
        ATerm i_13 = t;
        int j_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(u_0, t);
            ;
            LocalPopChoice(j_13);
          }
        else
          {
            t = i_13;
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
                            t = debug_1_0(v_0, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm v_9 = NULL,d_10 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          n_9 = ATgetArgument(t, 0);
                          o_9 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = n_9;
                      t = eval_config_0_0(t);
                      v_9 = t;
                      t = o_9;
                      t = eval_config_0_0(t);
                      d_10 = t;
                      t = (ATerm) ATmakeAppl(sym__2, v_9, d_10);
                      t = j_8(v_9, d_10, t);
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
  t = term_m_13;
  i_10 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_13, h_10);
  t = e_9(i_10, h_10, t);
  {
    ATerm n_13 = t;
    int o_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_10 = NULL,l_10 = NULL;
        t = eval_config_0_0(t);
        j_10 = t;
        t = term_m_13;
        l_10 = t;
        t = SSL_table_put(l_10, h_10, j_10);
        t = j_10;
        ;
        LocalPopChoice(o_13);
      }
    else
      {
        t = n_13;
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
  ATerm p_13 = t;
  if((PushChoice() == 0))
    {
      ATerm t_10 = NULL,v_10 = NULL,w_10 = NULL,u_3 = NULL;
      w_10 = t;
      if(match_cons(t, sym_Imports_1))
        {
          v_10 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(w_10);
      t_10 = t;
      t = (ATerm) ATmakeAppl(sym_Imports_1, v_10);
      u_3 = t;
      t = SSLsetAnnotations(u_3, t_10);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = p_13;
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
    ATerm q_13 = t;
    int r_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_84(t);
        ;
        LocalPopChoice(r_13);
      }
    else
      {
        t = q_13;
        {
          ATerm x_10 = NULL,y_10 = NULL,c_11 = NULL,f_11 = NULL,g_11 = NULL,h_11 = NULL,x_3 = NULL;
          t = v_84(t);
          h_11 = t;
          if(match_cons(t, sym__2))
            {
              y_10 = ATgetArgument(t, 0);
              c_11 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(h_11);
          x_10 = t;
          t = y_10;
          t = x_84(t);
          f_11 = t;
          t = c_11;
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
  ATerm l_11 = NULL;
  if(match_cons(t, sym_Imports_1))
    {
      l_11 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = l_11;
  return(t);
}
ATerm y_7 (ATerm u_123, ATerm t)
{
  t = u_123;
  t = filter_1_0(e_1, t);
  t = concat_0_0(t);
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm v_11 = NULL;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_s_13;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      ATerm z_11 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          v_11 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, term_t_13);
      z_11 = t;
      t = (ATerm) ATmakeAppl(sym__2, v_11, (ATerm) ATinsert(ATempty, term_t_13));
      t = k_8(v_11, z_11, t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
ATerm pass_keep_0_0 (ATerm t)
{
  ATerm k_12 = NULL,m_12 = NULL,n_12 = NULL,o_12 = NULL;
  t = term_v_13;
  {
    ATerm w_13 = t;
    int x_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        ;
        LocalPopChoice(x_13);
      }
    else
      {
        t = w_13;
        t = term_z_13;
      }
    m_12 = t;
    t = term_z_13;
    o_12 = t;
    t = (ATerm) ATmakeAppl(sym__2, m_12, term_z_13);
    t = z_7(m_12, o_12, t);
    n_12 = t;
    t = SSL_int_to_string(n_12);
    k_12 = t;
    t = (ATerm) ATinsert(ATinsert(ATempty, k_12), term_v_13);
  }
  return(t);
}
ATerm z_7 (ATerm i_36, ATerm j_36, ATerm t)
{
  ATerm e_14 = t;
  int f_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(i_36, j_36);
      ;
      LocalPopChoice(f_14);
    }
  else
    {
      t = e_14;
      t = SSL_subtr(i_36, j_36);
    }
  return(t);
}
ATerm pass_verbose_0_0 (ATerm t)
{
  ATerm q_12 = NULL,r_12 = NULL,t_12 = NULL,u_12 = NULL;
  t = term_g_14;
  {
    ATerm h_14 = t;
    int i_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        ;
        LocalPopChoice(i_14);
      }
    else
      {
        t = h_14;
        t = term_z_13;
      }
    r_12 = t;
    t = term_z_13;
    u_12 = t;
    t = (ATerm) ATmakeAppl(sym__2, r_12, term_z_13);
    t = z_7(r_12, u_12, t);
    t_12 = t;
    t = SSL_int_to_string(t_12);
    q_12 = t;
    t = (ATerm) ATinsert(ATinsert(ATempty, q_12), term_g_14);
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
ATerm a_8 (ATerm f_44, ATerm g_44, ATerm t)
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
        ATerm o_7 = NULL,p_7 = NULL;
        t = SSL_int_to_string(b_14);
        o_7 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_l_14), o_7), term_k_14);
        p_7 = t;
        t = SSL_concat_strings(p_7);
      }
    }
  else
    {
      ATerm j_9 = NULL,l_9 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          b_14 = ATgetArgument(t, 0);
          c_14 = ATgetArgument(t, 1);
          d_14 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(c_14);
      j_9 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, d_14), term_n_14), j_9), term_m_14), b_14);
      l_9 = t;
      t = SSL_concat_strings(l_9);
    }
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm j_14 = NULL;
  j_14 = t;
  {
    ATerm p_14 = t;
    int q_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_1 (ATerm t)
        {
          if(match_cons(t, sym_Signal_3))
            {
              ATerm u_14 = ATgetArgument(t, 0);
              if((j_14 != ATgetArgument(t, 1)))
                {
                  _fail(ATgetArgument(t, 1));
                }
              {
                ATerm v_14 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_v_20), term_p_20), term_i_20), term_c_20), term_y_19), term_u_19), term_m_19), term_g_19), term_z_18), term_t_18), term_o_18), term_j_18), term_e_18), term_x_17), term_t_17), term_p_17), term_l_17), term_e_17), term_w_16), term_q_16), term_k_16), term_e_16), term_w_15), term_q_15), term_m_15), term_h_15), term_d_15), term_y_14);
        t = fetch_elem_1_0(f_1, t);
        ;
        LocalPopChoice(q_14);
      }
    else
      {
        t = p_14;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, j_14);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm t_14 = NULL,b_15 = NULL;
  t_14 = t;
  {
    ATerm w_20 = t;
    int x_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm y_20 = ATgetArgument(t, 0);
            b_15 = ATgetArgument(t, 1);
            {
              ATerm a_21 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(x_20);
        {
          ATerm c_21 = t;
          int d_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm y_9 = NULL,a_10 = NULL,b_10 = NULL;
              t = b_15;
              {
                ATerm e_21 = t;
                if((PushChoice() == 0))
                  {
                    if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
                      _fail(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = e_21;
                  }
                t = signal_from_number_0_0(t);
                t = signal_to_descr_0_0(t);
                y_9 = t;
                t = term_f_21;
                a_10 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, y_9), term_g_21);
                b_10 = t;
                t = SSL_printnl(a_10, b_10);
                t = (ATerm) ATmakeAppl(sym__2, term_f_21, (ATerm) ATinsert(ATinsert(ATempty, y_9), term_g_21));
              }
              ;
              LocalPopChoice(d_21);
            }
          else
            {
              t = c_21;
              t = t_14;
            }
        }
      }
    else
      {
        t = w_20;
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
    ATerm h_21 = t;
    int i_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = u_15;
        t = j_97(t);
        ;
        LocalPopChoice(i_21);
      }
    else
      {
        t = h_21;
        t = SSL_waitpid(t_15);
        t = warn_ifsignaled_0_0(t);
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm k_21 = ATgetArgument(t, 0);
            if(((ATgetType(k_21) != AT_INT) || (ATgetInt((ATermInt) k_21) != 0)))
              _fail(t);
            {
              ATerm n_21 = ATgetArgument(t, 1);
            }
            {
              ATerm o_21 = ATgetArgument(t, 2);
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
    ATerm b_16 = NULL,f_16 = NULL;
    b_16 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(a_16), b_16);
    t = e_9(not_null(a_16), b_16, t);
    f_16 = t;
    t = (ATerm) ATmakeAppl(sym__2, b_16, f_16);
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
  ATerm h_16 = NULL;
  h_16 = t;
  {
    ATerm p_21 = t;
    int q_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_16 = NULL;
        t = term_g_14;
        t = get_config_0_0(t);
        o_16 = t;
        t = (ATerm) ATmakeAppl(sym__2, o_16, term_a_20);
        t = geq_0_0(t);
        t = h_16;
        t = c_97(t);
        ;
        LocalPopChoice(q_21);
      }
    else
      {
        t = p_21;
        t = h_16;
      }
  }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm b_97 (ATerm), ATerm t)
{
  ATerm u_16 = NULL;
  u_16 = t;
  {
    ATerm r_21 = t;
    int s_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_16 = NULL;
        t = term_g_14;
        t = get_config_0_0(t);
        y_16 = t;
        t = (ATerm) ATmakeAppl(sym__2, y_16, term_h_17);
        t = geq_0_0(t);
        t = u_16;
        t = b_97(t);
        ;
        LocalPopChoice(s_21);
      }
    else
      {
        t = r_21;
        t = u_16;
      }
  }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm d_97 (ATerm), ATerm t)
{
  ATerm b_17 = NULL;
  b_17 = t;
  {
    ATerm t_21 = t;
    int u_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_17 = NULL;
        t = term_g_14;
        t = get_config_0_0(t);
        f_17 = t;
        t = (ATerm) ATmakeAppl(sym__2, f_17, term_j_15);
        t = geq_0_0(t);
        t = b_17;
        t = d_97(t);
        ;
        LocalPopChoice(u_21);
      }
    else
      {
        t = t_21;
        t = b_17;
      }
  }
  return(t);
}
ATerm d_8 (ATerm v_86 (ATerm), ATerm b_26, ATerm a_26, ATerm t)
{
  ATerm m_18 (ATerm t)
  {
    ATerm z_17 = NULL,b_18 = NULL,d_18 = NULL;
    z_17 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = a_26;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            b_18 = ATgetFirst((ATermList) t);
            d_18 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm v_21 = t;
          int y_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = z_17;
              {
                ATerm j_1 (ATerm t)
                {
                  t = a_26;
                  return(t);
                }
                t = n_8(v_86, j_1, b_18, d_18, t);
                t = m_18(t);
              }
              ;
              LocalPopChoice(y_21);
            }
          else
            {
              t = v_21;
              {
                ATerm p_10 = NULL,z_10 = NULL,z_3 = NULL;
                t = SSLgetAnnotations(z_17);
                p_10 = t;
                t = d_18;
                t = m_18(t);
                z_10 = t;
                t = (ATerm) ATinsert(CheckATermList(z_10), b_18);
                z_3 = t;
                t = SSLsetAnnotations(z_3, p_10);
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
  ATerm o_19 = NULL;
  if(match_cons(t, sym__2))
    {
      o_19 = ATgetArgument(t, 0);
      if((o_19 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm e_8 (ATerm y_48, ATerm z_48, ATerm a_49, ATerm t)
{
  ATerm x_18 = NULL,b_19 = NULL,i_19 = NULL;
  x_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_48, z_48);
  {
    ATerm z_21 = t;
    int a_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm c_22 = ATgetArgument(t, 0);
            ATerm d_22 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, y_48, z_48);
        t = e_9(y_48, z_48, t);
        ;
        LocalPopChoice(a_22);
      }
    else
      {
        t = z_21;
        t = (ATerm) ATempty;
      }
    i_19 = t;
    t = (ATerm) ATmakeAppl(sym__2, i_19, a_49);
    t = d_8(k_1, i_19, a_49, t);
    b_19 = t;
    t = SSL_table_put(y_48, z_48, b_19);
    t = x_18;
  }
  return(t);
}
ATerm f_8 (ATerm g_101 (ATerm), ATerm i_49, ATerm h_49, ATerm t)
{
  ATerm m_1 (ATerm t)
  {
    ATerm p_19 = NULL,s_19 = NULL;
    if(match_cons(t, sym__2))
      {
        p_19 = ATgetArgument(t, 0);
        s_19 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, i_49, p_19, s_19);
    t = g_101(t);
    return(t);
  }
  t = h_49;
  t = map_1_0(m_1, t);
  return(t);
}
ATerm z_20 (ATerm h_20, ATerm t)
{
  t = SSL_fclose(h_20);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm n_20 = NULL,o_20 = NULL;
  o_20 = t;
  if(match_cons(t, sym_Stream_1))
    {
      n_20 = ATgetArgument(t, 0);
      {
        ATerm e_22 = t;
        int f_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(n_20);
            ;
            LocalPopChoice(f_22);
          }
        else
          {
            t = e_22;
            t = z_20(o_20, t);
          }
      }
    }
  else
    {
      t = z_20(o_20, t);
    }
  return(t);
}
ATerm g_8 (ATerm s_42, ATerm t)
{
  t = SSL_read_term_from_stream(s_42);
  return(t);
}
ATerm h_8 (ATerm e_39, ATerm f_39, ATerm t)
{
  ATerm b_21 = NULL;
  t = SSL_fopen(e_39, f_39);
  b_21 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, b_21);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm j_21 = NULL;
  t = SSL_stdin_stream();
  j_21 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, j_21);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm l_21 = NULL;
  t = SSL_stdout_stream();
  l_21 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, l_21);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm m_21 = NULL;
  t = SSL_stderr_stream();
  m_21 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, m_21);
  return(t);
}
ATerm a_24 (ATerm w_21, ATerm t)
{
  ATerm x_21 = NULL;
  t = SSL_explode_term(w_21);
  if(match_cons(t, sym__2))
    {
      ATerm g_22 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) g_22) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm m_22 = ATgetArgument(t, 1);
        if(((ATgetType(m_22) == AT_LIST) && !(ATisEmpty(m_22))))
          {
            x_21 = ATgetFirst((ATermList) m_22);
            {
              ATerm n_22 = (ATerm) ATgetNext((ATermList) m_22);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = x_21;
  if(match_cons(t, sym_stderr_0))
    {
      t = x_21;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = x_21;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = x_21;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm b_24 (ATerm b_22, ATerm h_22, ATerm i_22, ATerm t)
{
  ATerm j_22 = NULL,k_22 = NULL,l_22 = NULL,q_22 = NULL,c_4 = NULL;
  t = SSLgetAnnotations(i_22);
  l_22 = t;
  t = b_22;
  if(match_cons(t, sym_Path_1))
    {
      q_22 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, q_22, h_22);
  c_4 = t;
  t = SSLsetAnnotations(c_4, l_22);
  if(match_cons(t, sym__2))
    {
      j_22 = ATgetArgument(t, 0);
      k_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_8(j_22, k_22, t);
  return(t);
}
ATerm c_24 (ATerm x_22, ATerm y_22, ATerm z_22, ATerm t)
{
  ATerm a_23 = NULL,b_23 = NULL,e_23 = NULL,p_23 = NULL,d_4 = NULL;
  t = SSLgetAnnotations(z_22);
  e_23 = t;
  t = SSL_is_string(x_22);
  p_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_23, y_22);
  d_4 = t;
  t = SSLsetAnnotations(d_4, e_23);
  if(match_cons(t, sym__2))
    {
      a_23 = ATgetArgument(t, 0);
      b_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_8(a_23, b_23, t);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  ATerm w_23 = NULL,x_23 = NULL,y_23 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm o_22 = ATgetArgument(t, 0);
      ATerm p_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  w_23 = t;
  if(match_cons(t, sym__2))
    {
      x_23 = ATgetArgument(t, 0);
      y_23 = ATgetArgument(t, 1);
      {
        ATerm r_22 = t;
        int s_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = a_24(w_23, t);
            ;
            LocalPopChoice(s_22);
          }
        else
          {
            t = r_22;
            {
              ATerm t_22 = t;
              int u_22 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = b_24(x_23, y_23, w_23, t);
                  ;
                  LocalPopChoice(u_22);
                }
              else
                {
                  t = t_22;
                  t = c_24(x_23, y_23, w_23, t);
                }
            }
          }
      }
    }
  else
    {
      t = a_24(w_23, t);
    }
  return(t);
}
ATerm n_1 (ATerm t)
{
  t = term_v_22;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm k_24 = NULL,m_24 = NULL,p_24 = NULL;
  ATerm w_22 = t;
  int c_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_24 = NULL;
      q_24 = t;
      t = (ATerm) ATmakeAppl(sym__2, q_24, term_d_23);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(c_23);
    }
  else
    {
      t = w_22;
      t = debug_1_0(n_1, t);
      _fail(t);
    }
  m_24 = t;
  if(match_cons(t, sym_Stream_1))
    {
      p_24 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_8(p_24, t);
  k_24 = t;
  t = m_24;
  t = fclose_0_0(t);
  t = k_24;
  return(t);
}
ATerm r_1 (ATerm t)
{
  t = term_f_23;
  return(t);
}
ATerm s_1 (ATerm t)
{
  t = term_g_23;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm h_23 = t;
  int i_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_24 = NULL,t_24 = NULL;
      s_24 = t;
      t = (ATerm) ATinsert(ATempty, term_j_23);
      t_24 = t;
      t = (ATerm) ATmakeAppl(sym__2, s_24, (ATerm) ATinsert(ATempty, term_j_23));
      t = k_8(s_24, t_24, t);
      LocalPopChoice(i_23);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = h_23;
      {
        ATerm k_23 = t;
        int l_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_23 = t;
            if((PushChoice() == 0))
              {
                ATerm w_24 = NULL,x_24 = NULL;
                w_24 = t;
                t = (ATerm) ATinsert(ATempty, term_t_13);
                x_24 = t;
                t = (ATerm) ATmakeAppl(sym__2, w_24, (ATerm) ATinsert(ATempty, term_t_13));
                t = k_8(w_24, x_24, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = m_23;
              }
            t = debug_1_0(r_1, t);
            ;
            LocalPopChoice(l_23);
          }
        else
          {
            t = k_23;
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
  t = term_n_23;
  return(t);
}
ATerm z_1 (ATerm t)
{
  t = debug_1_0(f_2, t);
  return(t);
}
ATerm f_2 (ATerm t)
{
  t = term_o_23;
  return(t);
}
ATerm g_2 (ATerm t)
{
  ATerm l_25 = NULL,m_25 = NULL,n_25 = NULL;
  l_25 = t;
  t = term_f_21;
  m_25 = t;
  t = (ATerm) ATinsert(ATempty, term_q_23);
  n_25 = t;
  t = SSL_printnl(m_25, n_25);
  t = l_25;
  return(t);
}
ATerm i_2 (ATerm t)
{
  ATerm p_25 = NULL,s_25 = NULL,t_25 = NULL;
  if(match_cons(t, sym__3))
    {
      p_25 = ATgetArgument(t, 0);
      s_25 = ATgetArgument(t, 1);
      t_25 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = e_8(p_25, s_25, t_25, t);
  return(t);
}
ATerm j_2 (ATerm t)
{
  ATerm u_25 = NULL,v_25 = NULL,w_25 = NULL;
  u_25 = t;
  t = term_f_21;
  v_25 = t;
  t = (ATerm) ATinsert(ATempty, term_r_23);
  w_25 = t;
  t = SSL_printnl(v_25, w_25);
  t = u_25;
  return(t);
}
ATerm k_2 (ATerm t)
{
  ATerm x_25 = NULL,d_26 = NULL,h_26 = NULL;
  x_25 = t;
  t = term_f_21;
  d_26 = t;
  t = (ATerm) ATinsert(ATempty, term_q_23);
  h_26 = t;
  t = SSL_printnl(d_26, h_26);
  t = x_25;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm y_24 = NULL,z_24 = NULL,a_25 = NULL,b_25 = NULL,c_25 = NULL,d_25 = NULL,e_25 = NULL,f_25 = NULL,g_25 = NULL,h_25 = NULL;
  y_24 = t;
  t = if_verbose5_1_0(x_1, t);
  {
    ATerm s_23 = t;
    if((PushChoice() == 0))
      {
        ATerm i_25 = NULL,k_25 = NULL;
        t = term_t_23;
        i_25 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, y_24);
        k_25 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_t_23, (ATerm) ATmakeAppl(sym_Imported_1, y_24));
        t = e_9(i_25, k_25, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = s_23;
      }
    a_25 = t;
    t = term_t_23;
    f_25 = t;
    t = term_u_23;
    g_25 = t;
    t = (ATerm) ATinsert(ATempty, y_24);
    h_25 = t;
    t = SSL_table_put(f_25, g_25, h_25);
    t = a_25;
    t = if_verbose4_1_0(z_1, t);
    t = read_repository_file_0_0(t);
    t = if_verbose6_1_0(g_2, t);
    z_24 = t;
    t = term_t_23;
    e_25 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_t_23, z_24);
    t = f_8(i_2, e_25, z_24, t);
    t = if_verbose6_1_0(j_2, t);
    t = term_t_23;
    b_25 = t;
    t = (ATerm) ATmakeAppl(sym_Imported_1, y_24);
    c_25 = t;
    t = (ATerm) ATempty;
    d_25 = t;
    t = SSL_table_put(b_25, c_25, d_25);
    t = (ATerm) ATmakeAppl(sym__3, term_t_23, (ATerm)ATmakeAppl(sym_Imported_1, y_24), (ATerm) ATempty);
    t = if_verbose4_1_0(k_2, t);
  }
  return(t);
}
ATerm repeat_1_0 (ATerm c_76 (ATerm), ATerm t)
{
  ATerm o_26 (ATerm t)
  {
    ATerm v_23 = t;
    int z_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = c_76(t);
        t = o_26(t);
        ;
        LocalPopChoice(z_23);
      }
    else
      {
        t = v_23;
      }
    return(t);
  }
  t = o_26(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm d_24 = t;
  int e_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_f_24;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(e_24);
    }
  else
    {
      t = d_24;
      {
        ATerm g_24 = t;
        int h_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_26 = NULL;
            t = term_i_24;
            p_26 = t;
            t = SSL_getenv(p_26);
            ;
            LocalPopChoice(h_24);
          }
        else
          {
            t = g_24;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
ATerm l_2 (ATerm t)
{
  t = debug_1_0(m_2, t);
  return(t);
}
ATerm m_2 (ATerm t)
{
  t = term_j_24;
  return(t);
}
ATerm n_2 (ATerm t)
{
  ATerm g_27 = NULL,h_27 = NULL;
  t = term_t_23;
  g_27 = t;
  t = term_l_24;
  h_27 = t;
  t = term_n_24;
  t = e_9(g_27, h_27, t);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm o_24 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = o_24;
      }
  }
  return(t);
}
ATerm o_2 (ATerm t)
{
  t = debug_1_0(q_2, t);
  return(t);
}
ATerm q_2 (ATerm t)
{
  t = term_r_24;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm s_26 = NULL;
  t = if_verbose5_1_0(l_2, t);
  s_26 = t;
  {
    ATerm u_24 = t;
    int v_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_26 = NULL,y_26 = NULL;
        t = term_t_23;
        u_26 = t;
        t = term_u_23;
        y_26 = t;
        t = term_j_25;
        t = e_9(u_26, y_26, t);
        ;
        LocalPopChoice(v_24);
      }
    else
      {
        t = u_24;
        {
          ATerm z_26 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          z_26 = t;
          t = repeat_1_0(n_2, t);
          t = z_26;
        }
      }
    t = s_26;
    t = if_verbose5_1_0(o_2, t);
  }
  return(t);
}
ATerm r_2 (ATerm t)
{
  t = debug_1_0(u_2, t);
  return(t);
}
ATerm u_2 (ATerm t)
{
  t = term_o_25;
  return(t);
}
ATerm m_28 (ATerm m_27, ATerm t)
{
  ATerm o_27 = NULL,p_27 = NULL,s_27 = NULL;
  t = term_t_23;
  p_27 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, m_27);
  s_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_23, (ATerm) ATmakeAppl(sym_Tool_1, m_27));
  t = e_9(p_27, s_27, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm q_25 = ATgetFirst((ATermList) t);
      if(match_cons(q_25, sym__2))
        {
          ATerm c_26 = ATgetArgument(q_25, 0);
          o_27 = ATgetArgument(q_25, 1);
        }
      else
        _fail(t);
      {
        ATerm r_25 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = o_27;
  return(t);
}
ATerm f_3 (ATerm t)
{
  t = debug_1_0(g_3, t);
  return(t);
}
ATerm g_3 (ATerm t)
{
  t = term_o_25;
  return(t);
}
ATerm h_3 (ATerm t)
{
  t = term_t_23;
  t = table_getlist_0_0(t);
  t = debug_1_0(i_3, t);
  return(t);
}
ATerm i_3 (ATerm t)
{
  t = term_g_26;
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm i_26 = t;
  int j_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_27 = NULL,u_27 = NULL,w_27 = NULL;
      t = if_verbose5_1_0(r_2, t);
      t = xtc_load_0_0(t);
      w_27 = t;
      if(match_cons(t, sym__2))
        {
          t_27 = ATgetArgument(t, 0);
          u_27 = ATgetArgument(t, 1);
          {
            ATerm k_26 = t;
            int l_26 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm z_27 = NULL,a_28 = NULL,b_28 = NULL;
                t = term_t_23;
                a_28 = t;
                t = (ATerm) ATmakeAppl(sym_Tool_1, t_27);
                b_28 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_t_23, (ATerm) ATmakeAppl(sym_Tool_1, t_27));
                t = e_9(a_28, b_28, t);
                {
                  ATerm e_3 (ATerm t)
                  {
                    if(match_cons(t, sym__2))
                      {
                        if((u_27 != ATgetArgument(t, 0)))
                          {
                            _fail(ATgetArgument(t, 0));
                          }
                        if(((z_27 != NULL) && (z_27 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          z_27 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = fetch_1_0(e_3, t);
                  t = not_null(z_27);
                }
                ;
                LocalPopChoice(l_26);
              }
            else
              {
                t = k_26;
                t = m_28(w_27, t);
              }
          }
        }
      else
        {
          t = m_28(w_27, t);
        }
      t = if_verbose5_1_0(f_3, t);
      ;
      LocalPopChoice(j_26);
    }
  else
    {
      t = i_26;
      {
        ATerm j_28 = NULL,s_11 = NULL,u_11 = NULL;
        j_28 = t;
        t = term_f_21;
        s_11 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_n_26), j_28), term_m_26);
        u_11 = t;
        t = SSL_printnl(s_11, u_11);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_n_26), j_28), term_m_26);
        t = if_verbose5_1_0(h_3, t);
        _fail(t);
      }
    }
  return(t);
}
ATerm xtc_command_1_0 (ATerm s_104 (ATerm), ATerm t)
{
  ATerm o_28 = NULL,p_28 = NULL;
  p_28 = t;
  t = s_104(t);
  t = xtc_find_0_0(t);
  o_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_28, p_28);
  {
    ATerm j_3 (ATerm t)
    {
      ATerm q_28 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, o_28, p_28);
      t = a_8(o_28, p_28, t);
      t = term_q_26;
      q_28 = t;
      t = SSL_exit(q_28);
      return(t);
    }
    t = fork_and_wait_1_0(j_3, t);
    t = p_28;
  }
  return(t);
}
ATerm i_8 (ATerm v_93 (ATerm), ATerm q_37, ATerm o_37, ATerm t)
{
  ATerm r_28 = NULL,s_28 = NULL,u_28 = NULL,x_28 = NULL,y_28 = NULL,z_28 = NULL;
  x_28 = t;
  t = v_93(t);
  r_28 = t;
  t = (ATerm) ATmakeAppl(sym__3, r_28, q_37, o_37);
  t = f_9(r_28, q_37, o_37, t);
  {
    ATerm r_26 = t;
    int t_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_29 = NULL;
        t = term_v_26;
        a_29 = t;
        t = (ATerm) ATmakeAppl(sym__2, r_28, term_v_26);
        t = e_9(r_28, a_29, t);
        ;
        LocalPopChoice(t_26);
      }
    else
      {
        t = r_26;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        s_28 = ATgetFirst((ATermList) t);
        u_28 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_v_26;
    y_28 = t;
    t = (ATerm) ATinsert(CheckATermList(u_28), (ATerm) ATinsert(CheckATermList(s_28), q_37));
    z_28 = t;
    t = SSL_table_put(r_28, y_28, z_28);
    t = x_28;
  }
  return(t);
}
ATerm o_29 (ATerm e_29, ATerm t)
{
  t = e_29;
  {
    ATerm w_26 = t;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm x_26 = ATgetArgument(t, 0);
            ATerm a_27 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = w_26;
      }
    t = term_b_27;
    t = debug_1_0(l_3, t);
    t = (ATerm) ATmakeAppl(sym__2, e_29, term_w_11);
    t = open_file_0_0(t);
  }
  return(t);
}
ATerm p_29 (ATerm g_29, ATerm h_29, ATerm i_29, ATerm t)
{
  t = SSL_open_file(g_29, h_29);
  return(t);
}
ATerm l_3 (ATerm t)
{
  t = term_c_27;
  return(t);
}
ATerm open_file_0_0 (ATerm t)
{
  ATerm l_29 = NULL,m_29 = NULL,n_29 = NULL;
  l_29 = t;
  if(match_cons(t, sym__2))
    {
      m_29 = ATgetArgument(t, 0);
      n_29 = ATgetArgument(t, 1);
      {
        ATerm d_27 = t;
        int e_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = o_29(l_29, t);
            ;
            LocalPopChoice(e_27);
          }
        else
          {
            t = d_27;
            t = p_29(m_29, n_29, l_29, t);
          }
      }
    }
  else
    {
      t = o_29(l_29, t);
    }
  return(t);
}
ATerm j_8 (ATerm s_33, ATerm t_33, ATerm t)
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
  t = term_i_27;
  s_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_29, term_i_27);
  t = j_8(r_29, s_29, t);
  t_29 = t;
  {
    ATerm j_27 = t;
    int k_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_29 = NULL;
        t = (ATerm) ATinsert(ATempty, term_t_13);
        v_29 = t;
        t = (ATerm) ATmakeAppl(sym__2, t_29, (ATerm) ATinsert(ATempty, term_t_13));
        t = k_8(t_29, v_29, t);
        t = new_file_0_0(t);
        ;
        LocalPopChoice(k_27);
      }
    else
      {
        t = j_27;
        t = t_29;
      }
  }
  return(t);
}
ATerm m_3 (ATerm t)
{
  t = term_l_27;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm y_29 = NULL,z_29 = NULL;
  t = new_file_0_0(t);
  y_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_29, term_w_11);
  t = open_file_0_0(t);
  t = term_f_27;
  z_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_29, term_f_27);
  t = i_8(m_3, y_29, z_29, t);
  t = y_29;
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t)
{
  ATerm m_30 = NULL,o_30 = NULL;
  m_30 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm a_12 = NULL,b_12 = NULL;
      t = m_30;
      t = xtc_new_file_0_0(t);
      a_12 = t;
      t = r_0(t);
      b_12 = t;
      t = (ATerm) ATmakeAppl(sym__2, b_12, (ATerm) ATinsert(ATinsert(ATempty, a_12), term_j_11));
      t = conc_0_0(t);
      t = xtc_command_1_0(p_0, t);
      t = SSL_close_file(a_12);
      t = (ATerm) ATmakeAppl(sym_FILE_1, a_12);
    }
  else
    {
      ATerm h_12 = NULL,i_12 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          o_30 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = o_30;
      t = xtc_new_file_0_0(t);
      h_12 = t;
      t = r_0(t);
      i_12 = t;
      t = (ATerm) ATmakeAppl(sym__2, i_12, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, h_12), term_j_11), o_30), term_n_27));
      t = conc_0_0(t);
      t = xtc_command_1_0(p_0, t);
      t = SSL_close_file(h_12);
      t = (ATerm) ATmakeAppl(sym_FILE_1, h_12);
    }
  return(t);
}
ATerm y_32 (ATerm i_31, ATerm j_31, ATerm k_31, ATerm t)
{
  ATerm l_31 = NULL,o_31 = NULL,s_12 = NULL,v_12 = NULL,h_4 = NULL;
  t = SSLgetAnnotations(k_31);
  l_31 = t;
  t = i_31;
  {
    ATerm q_27 = t;
    if((PushChoice() == 0))
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("rtree", 0, ATtrue)))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = q_27;
      }
    o_31 = t;
    t = (ATerm) ATmakeAppl(sym__2, o_31, j_31);
    h_4 = t;
    t = SSLsetAnnotations(h_4, l_31);
    v_12 = t;
    t = SSL_explode_term(v_12);
    if(match_cons(t, sym__2))
      {
        ATerm r_27 = ATgetArgument(t, 0);
        if((ATgetSymbol((ATermAppl) r_27) != ATmakeSymbol("", 0, ATtrue)))
          _fail(t);
        {
          ATerm v_27 = ATgetArgument(t, 1);
          if(((ATgetType(v_27) == AT_LIST) && !(ATisEmpty(v_27))))
            {
              ATerm x_27 = ATgetFirst((ATermList) v_27);
              ATerm y_27 = (ATerm) ATgetNext((ATermList) v_27);
              if(((ATgetType(y_27) == AT_LIST) && !(ATisEmpty(y_27))))
                {
                  s_12 = ATgetFirst((ATermList) y_27);
                  {
                    ATerm c_28 = (ATerm) ATgetNext((ATermList) y_27);
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
    t = s_12;
    {
      ATerm d_28 = t;
      int e_28 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm f_28 = t;
          int g_28 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm z_31 = NULL;
              if(match_cons(t, sym_FILE_1))
                {
                  z_31 = ATgetArgument(t, 0);
                  {
                    ATerm y_12 = NULL,i_4 = NULL;
                    t = SSLgetAnnotations(s_12);
                    y_12 = t;
                    t = (ATerm) ATmakeAppl(sym_FILE_1, z_31);
                    i_4 = t;
                    t = SSLsetAnnotations(i_4, y_12);
                  }
                }
              else
                {
                  if(!(match_cons(t, sym_stdin_0)))
                    _fail(t);
                  t = s_12;
                }
              LocalPopChoice(g_28);
              t = xtc_transform_file_2_0(p_3, q_3, t);
            }
          else
            {
              t = f_28;
              t = xtc_transform_term_2_0(r_3, s_3, t);
            }
          t = read_from_0_0(t);
          ;
          LocalPopChoice(e_28);
        }
      else
        {
          t = d_28;
          {
            ATerm k_32 = NULL,l_32 = NULL,m_32 = NULL;
            t = term_f_21;
            l_32 = t;
            t = (ATerm) ATinsert(ATinsert(ATempty, j_31), term_h_28);
            m_32 = t;
            t = SSL_printnl(l_32, m_32);
            t = term_z_13;
            k_32 = t;
            t = SSL_exit(k_32);
            t = (ATerm) ATinsert(ATinsert(ATempty, j_31), term_h_28);
          }
        }
    }
  }
  return(t);
}
ATerm z_32 (ATerm n_32, ATerm q_32, ATerm t)
{
  ATerm f_13 = NULL;
  t = SSL_explode_term(q_32);
  if(match_cons(t, sym__2))
    {
      ATerm i_28 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) i_28) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm k_28 = ATgetArgument(t, 1);
        if(((ATgetType(k_28) == AT_LIST) && !(ATisEmpty(k_28))))
          {
            ATerm l_28 = ATgetFirst((ATermList) k_28);
            ATerm n_28 = (ATerm) ATgetNext((ATermList) k_28);
            if(((ATgetType(n_28) == AT_LIST) && !(ATisEmpty(n_28))))
              {
                f_13 = ATgetFirst((ATermList) n_28);
                {
                  ATerm t_28 = (ATerm) ATgetNext((ATermList) n_28);
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
  t = f_13;
  {
    ATerm v_28 = t;
    int w_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = read_from_0_0(t);
        ;
        LocalPopChoice(w_28);
      }
    else
      {
        t = v_28;
        {
          ATerm s_32 = NULL,t_32 = NULL,u_32 = NULL;
          t = term_f_21;
          t_32 = t;
          t = (ATerm) ATinsert(ATinsert(ATempty, n_32), term_h_28);
          u_32 = t;
          t = SSL_printnl(t_32, u_32);
          t = term_z_13;
          s_32 = t;
          t = SSL_exit(s_32);
          t = (ATerm) ATinsert(ATinsert(ATempty, n_32), term_h_28);
        }
      }
  }
  return(t);
}
ATerm p_3 (ATerm t)
{
  t = term_b_29;
  return(t);
}
ATerm q_3 (ATerm t)
{
  ATerm b_32 = NULL,c_32 = NULL,d_32 = NULL,e_32 = NULL;
  e_32 = t;
  t = pass_verbose_0_0(t);
  b_32 = t;
  t = e_32;
  t = pass_keep_0_0(t);
  c_32 = t;
  t = term_c_29;
  t = get_config_0_0(t);
  d_32 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, d_32), c_32), b_32);
  t = concat_0_0(t);
  return(t);
}
ATerm r_3 (ATerm t)
{
  t = term_b_29;
  return(t);
}
ATerm s_3 (ATerm t)
{
  ATerm f_32 = NULL,g_32 = NULL,h_32 = NULL,i_32 = NULL;
  i_32 = t;
  t = pass_verbose_0_0(t);
  f_32 = t;
  t = i_32;
  t = pass_keep_0_0(t);
  g_32 = t;
  t = term_c_29;
  t = get_config_0_0(t);
  h_32 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, h_32), g_32), f_32);
  t = concat_0_0(t);
  return(t);
}
ATerm parse_module_0_0 (ATerm t)
{
  ATerm v_32 = NULL,w_32 = NULL,x_32 = NULL;
  v_32 = t;
  if(match_cons(t, sym__2))
    {
      w_32 = ATgetArgument(t, 0);
      x_32 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_32;
  if(match_string(t, "rtree"))
    {
      ATerm d_29 = t;
      int f_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = y_32(w_32, x_32, v_32, t);
          ;
          LocalPopChoice(f_29);
        }
      else
        {
          t = d_29;
          t = z_32(x_32, v_32, t);
        }
    }
  else
    {
      t = y_32(w_32, x_32, v_32, t);
    }
  return(t);
}
ATerm debug_1_0 (ATerm m_95 (ATerm), ATerm t)
{
  ATerm b_33 = NULL,c_33 = NULL,d_33 = NULL,e_33 = NULL;
  b_33 = t;
  t = m_95(t);
  c_33 = t;
  t = term_f_21;
  d_33 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, b_33), c_33);
  e_33 = t;
  t = SSL_printnl(d_33, e_33);
  t = b_33;
  return(t);
}
ATerm if_verbose3_1_0 (ATerm a_97 (ATerm), ATerm t)
{
  ATerm g_33 = NULL;
  g_33 = t;
  {
    ATerm j_29 = t;
    int k_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_33 = NULL;
        t = term_g_14;
        t = get_config_0_0(t);
        i_33 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_33, term_f_15);
        t = geq_0_0(t);
        t = g_33;
        t = a_97(t);
        ;
        LocalPopChoice(k_29);
      }
    else
      {
        t = j_29;
        t = g_33;
      }
  }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm d_83 (ATerm), ATerm t)
{
  ATerm k_33 = NULL;
  ATerm v_3 (ATerm t)
  {
    t = d_83(t);
    if(((k_33 != NULL) && (k_33 != t)))
      _fail(t);
    else
      k_33 = t;
    return(t);
  }
  t = fetch_1_0(v_3, t);
  t = not_null(k_33);
  return(t);
}
ATerm k_8 (ATerm w_38, ATerm x_38, ATerm t)
{
  t = SSL_access(w_38, x_38);
  return(t);
}
ATerm l_8 (ATerm f_75 (ATerm), ATerm f_19, ATerm e_19, ATerm t)
{
  t = f_75(t);
  {
    ATerm q_29 = t;
    int u_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_3 (ATerm t)
        {
          ATerm l_33 = NULL;
          ATerm y_3 (ATerm t)
          {
            ATerm m_33 = NULL,n_33 = NULL,o_33 = NULL,p_33 = NULL,q_33 = NULL;
            n_33 = t;
            t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, n_33), term_r_11), f_19), term_w_29), not_null(l_33));
            q_33 = t;
            t = SSL_concat_strings(q_33);
            o_33 = t;
            t = (ATerm) ATinsert(ATempty, term_t_13);
            p_33 = t;
            t = (ATerm) ATmakeAppl(sym__2, o_33, (ATerm) ATinsert(ATempty, term_t_13));
            t = k_8(o_33, p_33, t);
            m_33 = t;
            t = (ATerm) ATmakeAppl(sym__2, n_33, (ATerm) ATmakeAppl(sym_FILE_1, m_33));
            return(t);
          }
          if(((l_33 != NULL) && (l_33 != t)))
            _fail(t);
          else
            l_33 = t;
          t = e_19;
          t = fetch_elem_1_0(y_3, t);
          return(t);
        }
        t = fetch_elem_1_0(w_3, t);
        ;
        LocalPopChoice(u_29);
      }
    else
      {
        t = q_29;
        {
          ATerm x_29 = t;
          int a_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm a_4 (ATerm t)
              {
                ATerm r_33 = NULL,u_33 = NULL,v_33 = NULL,w_33 = NULL,x_33 = NULL,y_33 = NULL;
                r_33 = t;
                t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, r_33), term_r_11), f_19);
                y_33 = t;
                t = SSL_concat_strings(y_33);
                u_33 = t;
                t = term_t_23;
                w_33 = t;
                t = (ATerm) ATmakeAppl(sym_Tool_1, u_33);
                x_33 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_t_23, (ATerm) ATmakeAppl(sym_Tool_1, u_33));
                t = e_9(w_33, x_33, t);
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    ATerm b_30 = ATgetFirst((ATermList) t);
                    if(match_cons(b_30, sym__2))
                      {
                        ATerm d_30 = ATgetArgument(b_30, 0);
                        v_33 = ATgetArgument(b_30, 1);
                      }
                    else
                      _fail(t);
                    {
                      ATerm c_30 = (ATerm) ATgetNext((ATermList) t);
                    }
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym__2, r_33, (ATerm) ATmakeAppl(sym_FILE_1, v_33));
                return(t);
              }
              t = e_19;
              t = fetch_elem_1_0(a_4, t);
              ;
              LocalPopChoice(a_30);
            }
          else
            {
              t = x_29;
              {
                ATerm e_30 = t;
                int f_30 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_g_30;
                    t = get_config_0_0(t);
                    LocalPopChoice(f_30);
                    {
                      ATerm a_34 = NULL,b_34 = NULL,c_34 = NULL,d_34 = NULL,e_34 = NULL;
                      a_34 = t;
                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_i_30), f_19), term_h_30);
                      e_34 = t;
                      t = SSL_concat_strings(e_34);
                      b_34 = t;
                      t = term_f_21;
                      c_34 = t;
                      t = (ATerm) ATinsert(ATempty, b_34);
                      d_34 = t;
                      t = SSL_printnl(c_34, d_34);
                      t = a_34;
                      _fail(t);
                    }
                  }
                else
                  {
                    t = e_30;
                    {
                      ATerm f_34 = NULL,g_34 = NULL,h_34 = NULL;
                      t = term_f_21;
                      g_34 = t;
                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_i_30), f_19), term_h_30);
                      h_34 = t;
                      t = SSL_printnl(g_34, h_34);
                      t = term_z_13;
                      f_34 = t;
                      t = SSL_exit(f_34);
                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_i_30), f_19), term_h_30);
                    }
                  }
              }
            }
        }
      }
  }
  return(t);
}
ATerm e_4 (ATerm t)
{
  t = term_j_30;
  return(t);
}
ATerm get_module_1_0 (ATerm e_75 (ATerm), ATerm t)
{
  ATerm k_34 = NULL,l_34 = NULL,m_34 = NULL,n_34 = NULL;
  t = basename_1_0(_id, t);
  m_34 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_d_23), term_n_30), term_l_30), term_k_30);
  n_34 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_34, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_d_23), term_n_30), term_l_30), term_k_30));
  t = l_8(e_75, m_34, n_34, t);
  if(match_cons(t, sym__2))
    {
      ATerm p_30 = ATgetArgument(t, 0);
      ATerm q_30 = ATgetArgument(t, 1);
      if(match_cons(q_30, sym_FILE_1))
        {
          k_34 = ATgetArgument(q_30, 0);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  {
    ATerm b_4 (ATerm t)
    {
      ATerm t_34 = NULL;
      t_34 = t;
      t = k_34;
      t = debug_1_0(e_4, t);
      t = t_34;
      return(t);
    }
    t = if_verbose3_1_0(b_4, t);
    t = parse_module_0_0(t);
    l_34 = t;
    t = (ATerm) ATmakeAppl(sym__2, k_34, l_34);
  }
  return(t);
}
ATerm n_8 (ATerm y_86 (ATerm), ATerm z_86 (ATerm), ATerm f_26, ATerm e_26, ATerm t)
{
  t = z_86(t);
  {
    ATerm f_4 (ATerm t)
    {
      ATerm u_34 = NULL;
      u_34 = t;
      t = (ATerm) ATmakeAppl(sym__2, f_26, u_34);
      t = y_86(t);
      return(t);
    }
    t = fetch_1_0(f_4, t);
    t = e_26;
  }
  return(t);
}
ATerm o_8 (ATerm q_86 (ATerm), ATerm z_25, ATerm y_25, ATerm t)
{
  ATerm m_35 (ATerm t)
  {
    ATerm h_35 = NULL,i_35 = NULL,j_35 = NULL;
    h_35 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = h_35;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            i_35 = ATgetFirst((ATermList) t);
            j_35 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm r_30 = t;
          int s_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = h_35;
              {
                ATerm g_4 (ATerm t)
                {
                  t = y_25;
                  return(t);
                }
                t = n_8(q_86, g_4, i_35, j_35, t);
                t = m_35(t);
              }
              ;
              LocalPopChoice(s_30);
            }
          else
            {
              t = r_30;
              {
                ATerm u_13 = NULL,y_13 = NULL,m_4 = NULL;
                t = SSLgetAnnotations(h_35);
                u_13 = t;
                t = j_35;
                t = m_35(t);
                y_13 = t;
                t = (ATerm) ATinsert(CheckATermList(y_13), i_35);
                m_4 = t;
                t = SSLsetAnnotations(m_4, u_13);
              }
            }
        }
      }
    return(t);
  }
  t = z_25;
  t = m_35(t);
  return(t);
}
ATerm j_4 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm t_30 = ATgetArgument(t, 0);
      if(((ATgetType(t_30) != AT_LIST) || !(ATisEmpty(t_30))))
        _fail(t);
      {
        ATerm u_30 = ATgetArgument(t, 1);
        if(((ATgetType(u_30) != AT_LIST) || !(ATisEmpty(u_30))))
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
  ATerm e_36 = NULL,f_36 = NULL,g_36 = NULL,h_36 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm v_30 = ATgetArgument(t, 0);
      if(((ATgetType(v_30) == AT_LIST) && !(ATisEmpty(v_30))))
        {
          e_36 = ATgetFirst((ATermList) v_30);
          f_36 = (ATerm) ATgetNext((ATermList) v_30);
        }
      else
        _fail(t);
      {
        ATerm w_30 = ATgetArgument(t, 1);
        if(((ATgetType(w_30) == AT_LIST) && !(ATisEmpty(w_30))))
          {
            g_36 = ATgetFirst((ATermList) w_30);
            h_36 = (ATerm) ATgetNext((ATermList) w_30);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, e_36, g_36), (ATerm) ATmakeAppl(sym__2, f_36, h_36));
  return(t);
}
ATerm n_4 (ATerm t)
{
  ATerm k_36 = NULL,l_36 = NULL;
  if(match_cons(t, sym__2))
    {
      k_36 = ATgetArgument(t, 0);
      l_36 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(l_36), k_36);
  return(t);
}
ATerm s_8 (ATerm g_563, ATerm l_563, ATerm n_52, ATerm t)
{
  ATerm r_35 = NULL,s_35 = NULL,t_35 = NULL,w_35 = NULL;
  t = SSL_explode_term(l_563);
  if(match_cons(t, sym__2))
    {
      r_35 = ATgetArgument(t, 0);
      t_35 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(g_563);
  if(match_cons(t, sym__2))
    {
      if((r_35 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      s_35 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, s_35, t_35);
  t = genzip_4_0(j_4, l_4, n_4, _id, t);
  w_35 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_35, n_52);
  t = conc_0_0(t);
  return(t);
}
ATerm q_4 (ATerm t)
{
  ATerm w_36 = NULL;
  w_36 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, w_36);
  return(t);
}
ATerm r_4 (ATerm t)
{
  ATerm x_36 = NULL,y_36 = NULL,z_36 = NULL,a_37 = NULL,o_4 = NULL;
  a_37 = t;
  if(match_cons(t, sym__2))
    {
      y_36 = ATgetArgument(t, 0);
      z_36 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_37);
  x_36 = t;
  t = z_36;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, y_36, z_36);
  o_4 = t;
  t = SSLsetAnnotations(o_4, x_36);
  return(t);
}
ATerm t_4 (ATerm t)
{
  ATerm e_38 = NULL,f_38 = NULL,g_38 = NULL,h_38 = NULL,i_38 = NULL;
  e_38 = t;
  if(match_cons(t, sym__2))
    {
      f_38 = ATgetArgument(t, 0);
      g_38 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_38;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_38 = ATgetFirst((ATermList) t);
      i_38 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm x_30 = t;
        int y_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = v_38(f_38, g_38, e_38, t);
            ;
            LocalPopChoice(y_30);
          }
        else
          {
            t = x_30;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(f_38), h_38), i_38);
          }
      }
    }
  else
    {
      t = v_38(f_38, g_38, e_38, t);
    }
  return(t);
}
ATerm v_38 (ATerm b_37, ATerm c_37, ATerm d_37, ATerm t)
{
  ATerm e_37 = NULL,h_37 = NULL,p_4 = NULL,v_37 = NULL,w_37 = NULL,x_37 = NULL,y_37 = NULL;
  t = SSLgetAnnotations(d_37);
  e_37 = t;
  t = c_37;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_37 = ATgetFirst((ATermList) t);
      y_37 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = v_37;
  if(match_cons(t, sym__2))
    {
      w_37 = ATgetArgument(t, 0);
      x_37 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm z_30 = t;
    int a_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_37;
        if((w_37 != t))
          {
            _fail(t);
          }
        t = y_37;
        ;
        LocalPopChoice(a_31);
      }
    else
      {
        t = z_30;
        t = c_37;
        t = s_8(w_37, x_37, y_37, t);
      }
    h_37 = t;
    t = (ATerm) ATmakeAppl(sym__2, b_37, h_37);
    p_4 = t;
    t = SSLsetAnnotations(p_4, e_37);
  }
  return(t);
}
ATerm w_4 (ATerm t)
{
  ATerm u_38 = NULL;
  if(match_cons(t, sym__2))
    {
      u_38 = ATgetArgument(t, 0);
      if((u_38 != ATgetArgument(t, 1)))
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
  ATerm b_31 = t;
  int c_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(q_4, r_4, t_4, t);
      ;
      LocalPopChoice(c_31);
    }
  else
    {
      t = b_31;
      {
        ATerm p_38 = NULL,q_38 = NULL,r_38 = NULL;
        p_38 = t;
        if(match_cons(t, sym__2))
          {
            q_38 = ATgetArgument(t, 0);
            r_38 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = p_38;
        t = o_8(w_4, q_38, r_38, t);
      }
    }
  return(t);
}
ATerm u_8 (ATerm a_106 (ATerm), ATerm b_106 (ATerm), ATerm c_106 (ATerm), ATerm e_55, ATerm b_55, ATerm i_55, ATerm f_55, ATerm c_55, ATerm d_55, ATerm t)
{
  ATerm y_38 = NULL,z_38 = NULL,a_39 = NULL,b_39 = NULL,i_39 = NULL,j_39 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, e_55, f_55);
  t = a_106(t);
  y_38 = t;
  t = b_106(t);
  z_38 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_38, i_55);
  t = diff_0_0(t);
  a_39 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_39, b_55);
  t = conc_0_0(t);
  b_39 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_39, i_55);
  t = conc_0_0(t);
  i_39 = t;
  t = (ATerm) ATmakeAppl(sym__3, e_55, y_38, c_55);
  t = c_106(t);
  j_39 = t;
  t = (ATerm) ATmakeAppl(sym__5, b_39, i_39, f_55, j_39, d_55);
  return(t);
}
ATerm GnNext_3_0 (ATerm a_106 (ATerm), ATerm b_106 (ATerm), ATerm c_106 (ATerm), ATerm t)
{
  ATerm l_39 = NULL,m_39 = NULL,n_39 = NULL,q_39 = NULL,r_39 = NULL,s_39 = NULL;
  if(match_cons(t, sym__5))
    {
      ATerm d_31 = ATgetArgument(t, 0);
      if(((ATgetType(d_31) == AT_LIST) && !(ATisEmpty(d_31))))
        {
          l_39 = ATgetFirst((ATermList) d_31);
          m_39 = (ATerm) ATgetNext((ATermList) d_31);
        }
      else
        _fail(t);
      n_39 = ATgetArgument(t, 1);
      q_39 = ATgetArgument(t, 2);
      r_39 = ATgetArgument(t, 3);
      s_39 = ATgetArgument(t, 4);
    }
  else
    _fail(t);
  t = u_8(a_106, b_106, c_106, l_39, m_39, n_39, q_39, r_39, s_39, t);
  return(t);
}
ATerm while_not_2_0 (ATerm r_76 (ATerm), ATerm s_76 (ATerm), ATerm t)
{
  ATerm t_39 (ATerm t)
  {
    ATerm e_31 = t;
    int f_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_76(t);
        ;
        LocalPopChoice(f_31);
      }
    else
      {
        t = e_31;
        t = s_76(t);
        t = t_39(t);
      }
    return(t);
  }
  t = t_39(t);
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
  ATerm a_40 = NULL,b_40 = NULL,c_40 = NULL;
  if(match_cons(t, sym__3))
    {
      a_40 = ATgetArgument(t, 0);
      b_40 = ATgetArgument(t, 1);
      c_40 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__5, a_40, a_40, b_40, c_40, (ATerm) ATempty);
  return(t);
}
ATerm a_5 (ATerm t)
{
  ATerm f_40 = NULL,k_40 = NULL;
  if(match_cons(t, sym__5))
    {
      ATerm g_31 = ATgetArgument(t, 0);
      if(((ATgetType(g_31) != AT_LIST) || !(ATisEmpty(g_31))))
        _fail(t);
      {
        ATerm h_31 = ATgetArgument(t, 1);
      }
      {
        ATerm m_31 = ATgetArgument(t, 2);
      }
      f_40 = ATgetArgument(t, 3);
      k_40 = ATgetArgument(t, 4);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, f_40, k_40);
  return(t);
}
ATerm graph_nodes_roots_3_0 (ATerm x_105 (ATerm), ATerm y_105 (ATerm), ATerm z_105 (ATerm), ATerm t)
{
  ATerm w_39 = NULL;
  ATerm b_5 (ATerm t)
  {
    ATerm n_31 = t;
    int p_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = GnNext_3_0(x_105, y_105, z_105, t);
        ;
        LocalPopChoice(p_31);
      }
    else
      {
        t = n_31;
        {
          ATerm m_40 = NULL,n_40 = NULL,o_40 = NULL,p_40 = NULL,q_40 = NULL,r_40 = NULL,y_40 = NULL;
          if(match_cons(t, sym__5))
            {
              m_40 = ATgetArgument(t, 0);
              p_40 = ATgetArgument(t, 1);
              q_40 = ATgetArgument(t, 2);
              r_40 = ATgetArgument(t, 3);
              y_40 = ATgetArgument(t, 4);
            }
          else
            _fail(t);
          t = m_40;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              n_40 = ATgetFirst((ATermList) t);
              o_40 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__5, o_40, p_40, q_40, r_40, (ATerm) ATinsert(CheckATermList(y_40), n_40));
        }
      }
    return(t);
  }
  t = for_3_0(z_4, a_5, b_5, t);
  if(match_cons(t, sym__2))
    {
      w_39 = ATgetArgument(t, 0);
      {
        ATerm q_31 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = w_39;
  return(t);
}
ATerm filter_1_0 (ATerm y_89 (ATerm), ATerm t)
{
  ATerm v_41 = NULL,w_41 = NULL,x_41 = NULL;
  v_41 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = v_41;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          w_41 = ATgetFirst((ATermList) t);
          x_41 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm r_31 = t;
        int s_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_14 = NULL,r_14 = NULL,s_14 = NULL,s_4 = NULL;
            t = SSLgetAnnotations(v_41);
            o_14 = t;
            t = w_41;
            t = y_89(t);
            r_14 = t;
            t = x_41;
            t = filter_1_0(y_89, t);
            s_14 = t;
            t = (ATerm) ATinsert(CheckATermList(s_14), r_14);
            s_4 = t;
            t = SSLsetAnnotations(s_4, o_14);
            ;
            LocalPopChoice(s_31);
          }
        else
          {
            t = r_31;
            t = x_41;
            t = filter_1_0(y_89, t);
          }
      }
    }
  return(t);
}
ATerm d_5 (ATerm t)
{
  ATerm t_31 = t;
  if((PushChoice() == 0))
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-I", 0, ATtrue)))
        _fail(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = t_31;
    }
  return(t);
}
ATerm h_5 (ATerm t)
{
  ATerm p_42 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm u_31 = ATgetArgument(t, 0);
      ATerm v_31 = ATgetArgument(t, 1);
      if(match_cons(v_31, sym_Specification_1))
        {
          p_42 = ATgetArgument(v_31, 0);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  t = y_7(p_42, t);
  return(t);
}
ATerm i_5 (ATerm t)
{
  ATerm v_42 = NULL,w_42 = NULL;
  if(match_cons(t, sym__3))
    {
      ATerm w_31 = ATgetArgument(t, 0);
      v_42 = ATgetArgument(t, 1);
      w_42 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(w_42), v_42);
  return(t);
}
ATerm k_5 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_x_31;
  return(t);
}
ATerm l_5 (ATerm t)
{
  ATerm x_42 = NULL,z_42 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_42 = ATgetFirst((ATermList) t);
      z_42 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, x_42, z_42);
  return(t);
}
ATerm m_5 (ATerm t)
{
  ATerm a_43 = NULL,b_43 = NULL,h_43 = NULL,m_43 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm y_31 = ATgetArgument(t, 0);
      if(match_cons(y_31, sym__2))
        {
          a_43 = ATgetArgument(y_31, 0);
          b_43 = ATgetArgument(y_31, 1);
        }
      else
        _fail(t);
      {
        ATerm a_32 = ATgetArgument(t, 1);
        if(match_cons(a_32, sym__2))
          {
            h_43 = ATgetArgument(a_32, 0);
            m_43 = ATgetArgument(a_32, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(h_43), a_43), (ATerm) ATinsert(CheckATermList(m_43), b_43));
  return(t);
}
ATerm x_8 (ATerm v_18, ATerm t)
{
  ATerm f_42 = NULL,g_42 = NULL,h_42 = NULL,i_42 = NULL,j_42 = NULL,k_42 = NULL,u_4 = NULL;
  ATerm j_32 = t;
  int o_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_c_29;
      t = get_config_0_0(t);
      t = filter_1_0(d_5, t);
      ;
      LocalPopChoice(o_32);
    }
  else
    {
      t = j_32;
      t = (ATerm) ATempty;
    }
  f_42 = t;
  t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATinsert(ATinsert(ATinsert(ATempty, v_18), term_r_32), term_p_32), term_f_27, (ATerm) ATempty);
  {
    ATerm g_5 (ATerm t)
    {
      ATerm l_42 = NULL,o_42 = NULL;
      ATerm j_5 (ATerm t)
      {
        t = (ATerm) ATinsert(CheckATermList(f_42), term_r_11);
        return(t);
      }
      o_42 = t;
      t = SSL_explode_term(o_42);
      if(match_cons(t, sym__2))
        {
          ATerm a_33 = ATgetArgument(t, 0);
          if((ATgetSymbol((ATermAppl) a_33) != ATmakeSymbol("", 0, ATtrue)))
            _fail(t);
          {
            ATerm f_33 = ATgetArgument(t, 1);
            if(((ATgetType(f_33) == AT_LIST) && !(ATisEmpty(f_33))))
              {
                l_42 = ATgetFirst((ATermList) f_33);
                {
                  ATerm h_33 = (ATerm) ATgetNext((ATermList) f_33);
                }
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = l_42;
      t = get_module_1_0(j_5, t);
      return(t);
    }
    t = graph_nodes_roots_3_0(g_5, h_5, i_5, t);
    t = genzip_4_0(k_5, l_5, m_5, _id, t);
    k_42 = t;
    if(match_cons(t, sym__2))
      {
        h_42 = ATgetArgument(t, 0);
        i_42 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(k_42);
    g_42 = t;
    t = i_42;
    t = flatten_stratego_0_0(t);
    j_42 = t;
    t = (ATerm) ATmakeAppl(sym__2, h_42, j_42);
    u_4 = t;
    t = SSLsetAnnotations(u_4, g_42);
  }
  return(t);
}
ATerm z_8 (ATerm o_39, ATerm p_39, ATerm t)
{
  t = SSL_copy(o_39, p_39);
  return(t);
}
ATerm copy_to_1_0 (ATerm n_0 (ATerm), ATerm t)
{
  ATerm d_44 = NULL,e_44 = NULL;
  d_44 = t;
  if(match_cons(t, sym_FILE_1))
    {
      e_44 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm j_33 = t;
    int z_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_15 = NULL;
        t = d_44;
        t = n_0(t);
        l_15 = t;
        if(match_cons(t, sym_stdout_0))
          {
            t = l_15;
          }
        else
          {
            if(!(match_cons(t, sym_stderr_0)))
              _fail(t);
            t = l_15;
          }
        t = (ATerm) ATmakeAppl(sym__2, e_44, l_15);
        t = z_8(e_44, l_15, t);
        t = (ATerm) ATmakeAppl(sym_FILE_1, e_44);
        ;
        LocalPopChoice(z_33);
      }
    else
      {
        t = j_33;
        {
          ATerm i_34 = t;
          int j_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm x_15 = NULL;
              t = d_44;
              t = n_0(t);
              x_15 = t;
              {
                ATerm o_34 = t;
                if((PushChoice() == 0))
                  {
                    ATerm y_15 = NULL;
                    y_15 = t;
                    if(match_cons(t, sym_stdout_0))
                      {
                        t = y_15;
                      }
                    else
                      {
                        if(match_cons(t, sym_stderr_0))
                          {
                            t = y_15;
                          }
                        else
                          {
                            t = y_15;
                            if((e_44 != t))
                              {
                                _fail(t);
                              }
                            t = y_15;
                          }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = o_34;
                  }
                t = (ATerm) ATmakeAppl(sym__2, e_44, x_15);
                t = z_8(e_44, x_15, t);
                t = (ATerm) ATmakeAppl(sym_FILE_1, e_44);
              }
              ;
              LocalPopChoice(j_34);
            }
          else
            {
              t = i_34;
              t = d_44;
              t = n_0(t);
              if((e_44 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, e_44);
            }
        }
      }
  }
  return(t);
}
ATerm a_9 (ATerm g_48, ATerm h_48, ATerm t)
{
  ATerm r_44 = NULL,s_44 = NULL;
  s_44 = t;
  {
    ATerm p_34 = t;
    int q_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, g_48, h_48);
        t = e_9(g_48, h_48, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm r_34 = ATgetFirst((ATermList) t);
            r_44 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(q_34);
        t = SSL_table_put(g_48, h_48, r_44);
        t = (ATerm) ATmakeAppl(sym__3, g_48, h_48, r_44);
      }
    else
      {
        t = p_34;
        t = SSL_table_remove(g_48, h_48);
        t = (ATerm) ATmakeAppl(sym__2, g_48, h_48);
      }
    t = s_44;
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm s_93 (ATerm), ATerm t)
{
  ATerm t_44 = NULL,u_44 = NULL,v_44 = NULL,x_44 = NULL,y_44 = NULL;
  x_44 = t;
  t = s_93(t);
  v_44 = t;
  {
    ATerm s_34 = t;
    int v_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_45 = NULL;
        t = term_v_26;
        b_45 = t;
        t = (ATerm) ATmakeAppl(sym__2, v_44, term_v_26);
        t = e_9(v_44, b_45, t);
        ;
        LocalPopChoice(v_34);
      }
    else
      {
        t = s_34;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        u_44 = ATgetFirst((ATermList) t);
        t_44 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_v_26;
    y_44 = t;
    t = SSL_table_put(v_44, y_44, t_44);
    t = u_44;
    {
      ATerm o_5 (ATerm t)
      {
        ATerm c_45 = NULL;
        c_45 = t;
        t = (ATerm) ATmakeAppl(sym__2, v_44, c_45);
        t = a_9(v_44, c_45, t);
        return(t);
      }
      t = map_1_0(o_5, t);
      t = x_44;
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm v_75 (ATerm), ATerm w_75 (ATerm), ATerm t)
{
  ATerm w_34 = t;
  int x_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = v_75(t);
      t = w_75(t);
      ;
      LocalPopChoice(x_34);
    }
  else
    {
      t = w_34;
      t = w_75(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm r_93 (ATerm), ATerm t)
{
  ATerm h_45 = NULL,j_45 = NULL,m_45 = NULL,o_45 = NULL,s_45 = NULL;
  j_45 = t;
  t = r_93(t);
  h_45 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_45, term_v_26);
  {
    ATerm y_34 = t;
    int z_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_45 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm a_35 = ATgetArgument(t, 0);
            ATerm b_35 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_v_26;
        x_45 = t;
        t = (ATerm) ATmakeAppl(sym__2, h_45, term_v_26);
        t = e_9(h_45, x_45, t);
        ;
        LocalPopChoice(z_34);
      }
    else
      {
        t = y_34;
        t = (ATerm) ATempty;
      }
    m_45 = t;
    t = term_v_26;
    o_45 = t;
    t = (ATerm) ATinsert(CheckATermList(m_45), (ATerm) ATempty);
    s_45 = t;
    t = SSL_table_put(h_45, o_45, s_45);
    t = j_45;
  }
  return(t);
}
ATerm p_5 (ATerm t)
{
  t = term_l_27;
  return(t);
}
ATerm v_5 (ATerm t)
{
  ATerm l_46 = NULL;
  l_46 = t;
  {
    ATerm c_35 = t;
    int d_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(l_46);
        ;
        LocalPopChoice(d_35);
      }
    else
      {
        t = c_35;
        t = l_46;
      }
  }
  return(t);
}
ATerm w_5 (ATerm t)
{
  t = term_l_27;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm e_104 (ATerm), ATerm t)
{
  ATerm d_46 = NULL;
  ATerm s_5 (ATerm t)
  {
    ATerm e_46 = NULL;
    e_46 = t;
    {
      ATerm e_35 = t;
      int f_35 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm f_46 = NULL,g_46 = NULL;
          t = term_l_27;
          f_46 = t;
          t = term_v_26;
          g_46 = t;
          t = term_g_35;
          t = e_9(f_46, g_46, t);
          ;
          LocalPopChoice(f_35);
        }
      else
        {
          t = e_35;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
        }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          if(((d_46 != NULL) && (d_46 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            d_46 = ATgetFirst((ATermList) t);
          {
            ATerm k_35 = (ATerm) ATgetNext((ATermList) t);
          }
        }
      else
        _fail(t);
      t = d_46;
      t = map_1_0(v_5, t);
      t = e_46;
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
  ATerm l_35 = t;
  int n_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_j_11;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(n_35);
    }
  else
    {
      t = l_35;
      t = term_o_35;
    }
  return(t);
}
ATerm xtc_io_1_0 (ATerm f_104 (ATerm), ATerm t)
{
  ATerm x_5 (ATerm t)
  {
    ATerm p_35 = t;
    int q_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_46 = NULL;
        t = term_n_27;
        t = get_config_0_0(t);
        p_46 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, p_46);
        ;
        LocalPopChoice(q_35);
      }
    else
      {
        t = p_35;
        t = term_s_13;
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
  ATerm s_46 = NULL,t_46 = NULL,u_46 = NULL,z_46 = NULL,a_47 = NULL;
  s_46 = t;
  t = term_f_27;
  t = whoami_0_0(t);
  t_46 = t;
  t = term_f_21;
  z_46 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_v_35), t_46), term_u_35);
  a_47 = t;
  t = SSL_printnl(z_46, a_47);
  t = term_z_13;
  u_46 = t;
  t = SSL_exit(u_46);
  t = s_46;
  return(t);
}
ATerm g_6 (ATerm t)
{
  ATerm c_47 = NULL;
  c_47 = t;
  if(match_string(t, "-k"))
    {
      t = c_47;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = c_47;
    }
  return(t);
}
ATerm k_6 (ATerm t)
{
  ATerm d_47 = NULL,g_47 = NULL,h_47 = NULL;
  d_47 = t;
  t = SSL_string_to_int(d_47);
  g_47 = t;
  t = term_v_13;
  h_47 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_13, g_47);
  t = h_9(h_47, g_47, t);
  t = d_47;
  return(t);
}
ATerm l_6 (ATerm t)
{
  t = term_x_35;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(g_6, k_6, l_6, t);
  return(t);
}
ATerm m_6 (ATerm t)
{
  ATerm o_47 = NULL;
  o_47 = t;
  if(match_string(t, "-S"))
    {
      t = o_47;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = o_47;
    }
  return(t);
}
ATerm n_6 (ATerm t)
{
  ATerm p_47 = NULL,q_47 = NULL;
  t = term_g_14;
  p_47 = t;
  t = term_y_35;
  q_47 = t;
  t = term_z_35;
  t = h_9(p_47, q_47, t);
  t = term_a_36;
  return(t);
}
ATerm o_6 (ATerm t)
{
  t = term_b_36;
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
  ATerm t_47 = NULL,u_47 = NULL,v_47 = NULL;
  t_47 = t;
  t = SSL_string_to_int(t_47);
  u_47 = t;
  t = term_g_14;
  v_47 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_14, u_47);
  t = h_9(v_47, u_47, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, t_47);
  return(t);
}
ATerm t_6 (ATerm t)
{
  t = term_m_36;
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
  ATerm w_47 = NULL,x_47 = NULL;
  t = term_n_36;
  w_47 = t;
  t = term_f_27;
  x_47 = t;
  t = term_o_36;
  t = h_9(w_47, x_47, t);
  t = term_p_36;
  return(t);
}
ATerm w_6 (ATerm t)
{
  t = term_q_36;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm r_36 = t;
  int s_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(m_6, n_6, o_6, t);
      ;
      LocalPopChoice(s_36);
    }
  else
    {
      t = r_36;
      {
        ATerm t_36 = t;
        int u_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(p_6, r_6, t_6, t);
            ;
            LocalPopChoice(u_36);
          }
        else
          {
            t = t_36;
            t = Option_3_0(u_6, v_6, w_6, t);
          }
      }
    }
  return(t);
}
ATerm h_9 (ATerm g_56, ATerm h_56, ATerm t)
{
  ATerm z_47 = NULL;
  t = term_m_13;
  z_47 = t;
  t = SSL_table_put(z_47, g_56, h_56);
  t = (ATerm) ATmakeAppl(sym__3, term_m_13, g_56, h_56);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t)
{
  ATerm k_48 = NULL,m_48 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm n_48 = NULL,o_48 = NULL,p_48 = NULL;
      t = term_f_27;
      t = h_0(t);
      n_48 = t;
      t = term_v_36;
      o_48 = t;
      t = term_f_37;
      p_48 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_v_36, term_f_37, n_48);
      t = f_9(o_48, p_48, n_48, t);
      _fail(t);
    }
  else
    {
      ATerm s_48 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          k_48 = ATgetFirst((ATermList) t);
          m_48 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = k_48;
      t = d_0(t);
      t = term_f_27;
      t = g_0(t);
      s_48 = t;
      t = (ATerm) ATinsert(CheckATermList(m_48), s_48);
    }
  return(t);
}
ATerm x_6 (ATerm t)
{
  ATerm u_48 = NULL;
  u_48 = t;
  if(match_string(t, "-o"))
    {
      t = u_48;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = u_48;
    }
  return(t);
}
ATerm y_6 (ATerm t)
{
  ATerm v_48 = NULL,w_48 = NULL;
  v_48 = t;
  t = term_j_11;
  w_48 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_11, v_48);
  t = h_9(w_48, v_48, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, v_48);
  return(t);
}
ATerm a_7 (ATerm t)
{
  t = term_g_37;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(x_6, y_6, a_7, t);
  return(t);
}
ATerm d_7 (ATerm t)
{
  ATerm f_49 = NULL;
  f_49 = t;
  if(match_string(t, "-i"))
    {
      t = f_49;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = f_49;
    }
  return(t);
}
ATerm f_7 (ATerm t)
{
  ATerm g_49 = NULL,l_49 = NULL;
  g_49 = t;
  t = term_n_27;
  l_49 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_27, g_49);
  t = h_9(l_49, g_49, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, g_49);
  return(t);
}
ATerm g_7 (ATerm t)
{
  t = term_i_37;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(d_7, f_7, g_7, t);
  return(t);
}
ATerm f_9 (ATerm b_48, ATerm c_48, ATerm a_48, ATerm t)
{
  ATerm n_49 = NULL,o_49 = NULL,p_49 = NULL;
  n_49 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_48, c_48);
  {
    ATerm j_37 = t;
    int k_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm l_37 = ATgetArgument(t, 0);
            ATerm m_37 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, b_48, c_48);
        t = e_9(b_48, c_48, t);
        ;
        LocalPopChoice(k_37);
      }
    else
      {
        t = j_37;
        t = (ATerm) ATempty;
      }
    o_49 = t;
    t = (ATerm) ATinsert(CheckATermList(o_49), a_48);
    p_49 = t;
    t = SSL_table_put(b_48, c_48, p_49);
    t = n_49;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm t)
{
  ATerm y_49 = NULL,z_49 = NULL,a_50 = NULL,b_50 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm c_50 = NULL,d_50 = NULL,e_50 = NULL;
      t = term_f_27;
      t = m_0(t);
      c_50 = t;
      t = term_v_36;
      d_50 = t;
      t = term_f_37;
      e_50 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_v_36, term_f_37, c_50);
      t = f_9(d_50, e_50, c_50, t);
      _fail(t);
    }
  else
    {
      ATerm j_50 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          y_49 = ATgetFirst((ATermList) t);
          z_49 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = z_49;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_50 = ATgetFirst((ATermList) t);
          b_50 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = y_49;
      t = k_0(t);
      t = a_50;
      t = l_0(t);
      j_50 = t;
      t = (ATerm) ATinsert(CheckATermList(b_50), j_50);
    }
  return(t);
}
ATerm at_end_1_0 (ATerm h_83 (ATerm), ATerm t)
{
  ATerm p_51 (ATerm t)
  {
    ATerm l_51 = NULL,m_51 = NULL,o_51 = NULL;
    o_51 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        l_51 = ATgetFirst((ATermList) t);
        m_51 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm m_16 = NULL,r_16 = NULL,e_5 = NULL;
          t = SSLgetAnnotations(o_51);
          m_16 = t;
          t = m_51;
          t = p_51(t);
          r_16 = t;
          t = (ATerm) ATinsert(CheckATermList(r_16), l_51);
          e_5 = t;
          t = SSLsetAnnotations(e_5, m_16);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = o_51;
        t = h_83(t);
      }
    return(t);
  }
  t = p_51(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm l_50 = NULL,s_50 = NULL,t_50 = NULL;
  l_50 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = l_50;
    }
  else
    {
      ATerm h_7 (ATerm t)
      {
        t = not_null(t_50);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          s_50 = ATgetFirst((ATermList) t);
          if(((t_50 != NULL) && (t_50 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            t_50 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = s_50;
      t = at_end_1_0(h_7, t);
    }
  return(t);
}
ATerm f_52 (ATerm t_51, ATerm t)
{
  ATerm u_51 = NULL;
  t = SSL_explode_term(t_51);
  if(match_cons(t, sym__2))
    {
      ATerm n_37 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) n_37) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      u_51 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_51;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm w_51 = NULL,x_51 = NULL,y_51 = NULL;
  y_51 = t;
  if(match_cons(t, sym__2))
    {
      w_51 = ATgetArgument(t, 0);
      x_51 = ATgetArgument(t, 1);
      {
        ATerm p_37 = t;
        int r_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_7 (ATerm t)
            {
              t = x_51;
              return(t);
            }
            t = w_51;
            t = at_end_1_0(i_7, t);
            ;
            LocalPopChoice(r_37);
          }
        else
          {
            t = p_37;
            t = f_52(y_51, t);
          }
      }
    }
  else
    {
      t = f_52(y_51, t);
    }
  return(t);
}
ATerm y_8 (ATerm m_56, ATerm l_56, ATerm t)
{
  ATerm g_52 = NULL,i_52 = NULL,j_52 = NULL;
  t = m_56;
  {
    ATerm s_37 = t;
    int t_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        ;
        LocalPopChoice(t_37);
      }
    else
      {
        t = s_37;
        t = (ATerm) ATempty;
      }
    i_52 = t;
    t = (ATerm) ATmakeAppl(sym__2, l_56, i_52);
    t = conc_0_0(t);
    g_52 = t;
    t = term_m_13;
    j_52 = t;
    t = SSL_table_put(j_52, m_56, g_52);
    t = (ATerm) ATmakeAppl(sym__3, term_m_13, m_56, g_52);
  }
  return(t);
}
ATerm j_7 (ATerm t)
{
  ATerm r_52 = NULL;
  r_52 = t;
  if(match_string(t, "-I"))
    {
      t = r_52;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--Include", 0, ATtrue)))
        _fail(t);
      t = r_52;
    }
  return(t);
}
ATerm k_7 (ATerm t)
{
  ATerm w_52 = NULL,z_52 = NULL,c_53 = NULL;
  w_52 = t;
  t = term_c_29;
  z_52 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, w_52), term_c_29);
  c_53 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_29, (ATerm) ATinsert(ATinsert(ATempty, w_52), term_c_29));
  t = y_8(z_52, c_53, t);
  t = term_f_27;
  return(t);
}
ATerm l_7 (ATerm t)
{
  t = term_u_37;
  return(t);
}
ATerm m_7 (ATerm t)
{
  ATerm j_53 = NULL;
  j_53 = t;
  if(match_string(t, "--nodep"))
    {
      t = j_53;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-nodep", 0, ATtrue)))
        _fail(t);
      t = j_53;
    }
  return(t);
}
ATerm n_7 (ATerm t)
{
  ATerm k_53 = NULL,s_53 = NULL;
  t = term_q_11;
  k_53 = t;
  t = term_z_37;
  s_53 = t;
  t = term_a_38;
  t = h_9(k_53, s_53, t);
  t = term_f_27;
  return(t);
}
ATerm s_7 (ATerm t)
{
  t = term_b_38;
  return(t);
}
ATerm w_7 (ATerm t)
{
  ATerm t_53 = NULL;
  t_53 = t;
  if(match_string(t, "--dep"))
    {
      t = t_53;
    }
  else
    {
      if(match_string(t, "-d"))
        {
          t = t_53;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-dep", 0, ATtrue)))
            _fail(t);
          t = t_53;
        }
    }
  return(t);
}
ATerm x_7 (ATerm t)
{
  ATerm v_53 = NULL,w_53 = NULL;
  v_53 = t;
  t = term_o_11;
  w_53 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_11, v_53);
  t = h_9(w_53, v_53, t);
  t = term_f_27;
  return(t);
}
ATerm b_8 (ATerm t)
{
  t = term_c_38;
  return(t);
}
ATerm c_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--imports", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm m_8 (ATerm t)
{
  ATerm x_53 = NULL,b_54 = NULL;
  t = term_d_38;
  x_53 = t;
  t = term_f_27;
  b_54 = t;
  t = term_j_38;
  t = h_9(x_53, b_54, t);
  t = term_f_27;
  return(t);
}
ATerm p_8 (ATerm t)
{
  t = term_k_38;
  return(t);
}
ATerm q_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--slack", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm r_8 (ATerm t)
{
  ATerm f_54 = NULL,g_54 = NULL;
  t = term_g_30;
  f_54 = t;
  t = term_f_27;
  g_54 = t;
  t = term_l_38;
  t = h_9(f_54, g_54, t);
  t = term_f_27;
  return(t);
}
ATerm t_8 (ATerm t)
{
  t = term_m_38;
  return(t);
}
ATerm pack_stratego_options_0_0 (ATerm t)
{
  ATerm n_38 = t;
  int o_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ArgOption_3_0(j_7, k_7, l_7, t);
      ;
      LocalPopChoice(o_38);
    }
  else
    {
      t = n_38;
      {
        ATerm s_38 = t;
        int t_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Option_3_0(m_7, n_7, s_7, t);
            ;
            LocalPopChoice(t_38);
          }
        else
          {
            t = s_38;
            {
              ATerm g_39 = t;
              int h_39 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = ArgOption_3_0(w_7, x_7, b_8, t);
                  ;
                  LocalPopChoice(h_39);
                }
              else
                {
                  t = g_39;
                  {
                    ATerm k_39 = t;
                    int u_39 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Option_3_0(c_8, m_8, p_8, t);
                        ;
                        LocalPopChoice(u_39);
                      }
                    else
                      {
                        t = k_39;
                        t = Option_3_0(q_8, r_8, t_8, t);
                      }
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
  ATerm h_54 = NULL,i_54 = NULL,j_54 = NULL,k_54 = NULL;
  t = report_run_time_0_0(t);
  t = term_f_27;
  t = whoami_0_0(t);
  h_54 = t;
  t = term_f_21;
  j_54 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_v_39), h_54);
  k_54 = t;
  t = SSL_printnl(j_54, k_54);
  t = term_z_13;
  i_54 = t;
  t = SSL_exit(i_54);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_x_39;
  t = get_config_0_0(t);
  return(t);
}
ATerm b_9 (ATerm c_36, ATerm d_36, ATerm t)
{
  ATerm y_39 = t;
  int z_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(c_36, d_36);
      ;
      LocalPopChoice(z_39);
    }
  else
    {
      t = y_39;
      t = SSL_addr(c_36, d_36);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm u_88 (ATerm), ATerm v_88 (ATerm), ATerm t)
{
  ATerm m_54 = NULL,q_54 = NULL,u_54 = NULL;
  m_54 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = m_54;
      t = u_88(t);
    }
  else
    {
      ATerm y_54 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          q_54 = ATgetFirst((ATermList) t);
          u_54 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = u_54;
      t = foldr_2_0(u_88, v_88, t);
      y_54 = t;
      t = (ATerm) ATmakeAppl(sym__2, q_54, y_54);
      t = v_88(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm w_8 (ATerm t)
{
  t = term_y_35;
  return(t);
}
ATerm c_9 (ATerm t)
{
  ATerm i_17 = NULL,j_17 = NULL;
  if(match_cons(t, sym__2))
    {
      i_17 = ATgetArgument(t, 0);
      j_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_9(i_17, j_17, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm k_55 = NULL,a_17 = NULL,c_17 = NULL;
  t = times_0_0(t);
  c_17 = t;
  t = SSL_explode_term(c_17);
  if(match_cons(t, sym__2))
    {
      ATerm d_40 = ATgetArgument(t, 0);
      a_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_17;
  t = foldr_2_0(w_8, c_9, t);
  k_55 = t;
  t = SSL_TicksToSeconds(k_55);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm v_55 = NULL,w_55 = NULL,x_55 = NULL;
  v_55 = t;
  if(match_cons(t, sym__2))
    {
      w_55 = ATgetArgument(t, 0);
      x_55 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm e_40 = t;
    int g_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_55;
        if((w_55 != t))
          {
            _fail(t);
          }
        t = v_55;
        ;
        LocalPopChoice(g_40);
      }
    else
      {
        t = e_40;
        t = (ATerm) ATmakeAppl(sym__2, w_55, x_55);
        {
          ATerm h_40 = t;
          int i_40 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(w_55, x_55);
              ;
              LocalPopChoice(i_40);
            }
          else
            {
              t = h_40;
              t = SSL_gtr(w_55, x_55);
            }
          t = (ATerm) ATmakeAppl(sym__2, w_55, x_55);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm y_96 (ATerm), ATerm t)
{
  ATerm b_56 = NULL;
  b_56 = t;
  {
    ATerm j_40 = t;
    int l_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_56 = NULL;
        t = term_g_14;
        t = get_config_0_0(t);
        d_56 = t;
        t = (ATerm) ATmakeAppl(sym__2, d_56, term_z_13);
        t = geq_0_0(t);
        t = b_56;
        t = y_96(t);
        ;
        LocalPopChoice(l_40);
      }
    else
      {
        t = j_40;
        t = b_56;
      }
  }
  return(t);
}
ATerm d_9 (ATerm t)
{
  ATerm f_56 = NULL,i_56 = NULL,k_56 = NULL,n_56 = NULL;
  t = run_time_0_0(t);
  f_56 = t;
  t = term_f_27;
  t = whoami_0_0(t);
  i_56 = t;
  t = term_f_21;
  k_56 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_s_40), f_56), term_m_14), i_56);
  n_56 = t;
  t = SSL_printnl(k_56, n_56);
  t = (ATerm) ATmakeAppl(sym__2, term_f_21, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_s_40), f_56), term_m_14), i_56));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(d_9, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm o_56 = NULL;
  t = report_run_time_0_0(t);
  t = term_y_35;
  o_56 = t;
  t = SSL_exit(o_56);
  return(t);
}
ATerm g_9 (ATerm t)
{
  ATerm e_57 = NULL,f_57 = NULL;
  f_57 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = f_57;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          e_57 = ATgetArgument(t, 0);
          {
            ATerm i_18 = NULL,n_5 = NULL;
            t = SSLgetAnnotations(f_57);
            i_18 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, e_57);
            n_5 = t;
            t = SSLsetAnnotations(n_5, i_18);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = f_57;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm m_98 (ATerm), ATerm t)
{
  ATerm t_40 = t;
  int u_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_v_40;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(u_40);
    }
  else
    {
      t = t_40;
      t = fetch_1_0(g_9, t);
    }
  t = m_98(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm i_57 = NULL,j_57 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_57 = ATgetFirst((ATermList) t);
      j_57 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm n_57 = NULL,o_57 = NULL;
        ATerm i_9 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(n_57)), not_null(o_57));
          return(t);
        }
        t = j_57;
        t = j_0(t);
        if(((n_57 != NULL) && (n_57 != t)))
          _fail(t);
        else
          n_57 = t;
        t = i_57;
        t = i_0(t);
        if(((o_57 != NULL) && (o_57 != t)))
          _fail(t);
        else
          o_57 = t;
        t = j_57;
        t = reverse_acc_2_0(i_0, i_9, t);
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
ATerm e_9 (ATerm s_49, ATerm t_49, ATerm t)
{
  t = SSL_table_get(s_49, t_49);
  return(t);
}
ATerm k_9 (ATerm t)
{
  ATerm s_57 = NULL,t_57 = NULL,u_57 = NULL,q_5 = NULL;
  u_57 = t;
  if(match_cons(t, sym_Program_1))
    {
      t_57 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_57);
  s_57 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, t_57);
  q_5 = t;
  t = SSLsetAnnotations(q_5, s_57);
  return(t);
}
ATerm p_9 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm q_9 (ATerm t)
{
  ATerm w_57 = NULL;
  w_57 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, w_57), term_w_40);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm q_57 = NULL,r_57 = NULL;
  ATerm x_40 = t;
  int z_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_x_39;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(z_40);
    }
  else
    {
      t = x_40;
      t = fetch_1_0(k_9, t);
    }
  t = term_a_41;
  t = echo_0_0(t);
  t = term_v_36;
  q_57 = t;
  t = term_f_37;
  r_57 = t;
  t = term_b_41;
  t = e_9(q_57, r_57, t);
  t = reverse_acc_2_0(_id, p_9, t);
  t = map_1_0(q_9, t);
  return(t);
}
ATerm fetch_1_0 (ATerm b_83 (ATerm), ATerm t)
{
  ATerm t_58 (ATerm t)
  {
    ATerm q_58 = NULL,r_58 = NULL,s_58 = NULL;
    q_58 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        r_58 = ATgetFirst((ATermList) t);
        s_58 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm c_41 = t;
      int d_41 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm s_18 = NULL,w_18 = NULL,t_5 = NULL;
          t = SSLgetAnnotations(q_58);
          s_18 = t;
          t = r_58;
          t = b_83(t);
          w_18 = t;
          t = (ATerm) ATinsert(CheckATermList(s_58), w_18);
          t_5 = t;
          t = SSLsetAnnotations(t_5, s_18);
          ;
          LocalPopChoice(d_41);
        }
      else
        {
          t = c_41;
          {
            ATerm k_19 = NULL,r_19 = NULL,u_5 = NULL;
            t = SSLgetAnnotations(q_58);
            k_19 = t;
            t = s_58;
            t = t_58(t);
            r_19 = t;
            t = (ATerm) ATinsert(CheckATermList(r_19), r_58);
            u_5 = t;
            t = SSLsetAnnotations(u_5, k_19);
          }
        }
    }
    return(t);
  }
  t = t_58(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm x_58 = NULL,y_58 = NULL,z_58 = NULL;
  x_58 = t;
  {
    ATerm e_41 = t;
    int f_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = x_58;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm g_41 = ATgetFirst((ATermList) t);
                ATerm h_41 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = x_58;
          }
        ;
        LocalPopChoice(f_41);
      }
    else
      {
        t = e_41;
        t = (ATerm) ATinsert(ATempty, x_58);
      }
    y_58 = t;
    t = term_o_35;
    z_58 = t;
    t = SSL_printnl(z_58, y_58);
    t = x_58;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_x_39;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm r_9 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm s_9 (ATerm t)
{
  ATerm d_59 = NULL,e_59 = NULL;
  t = term_i_41;
  d_59 = t;
  t = term_f_27;
  e_59 = t;
  t = term_j_41;
  t = h_9(d_59, e_59, t);
  return(t);
}
ATerm t_9 (ATerm t)
{
  t = term_k_41;
  return(t);
}
ATerm u_9 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm w_9 (ATerm t)
{
  ATerm f_59 = NULL,g_59 = NULL,h_59 = NULL,i_59 = NULL;
  t = term_i_41;
  h_59 = t;
  t = term_f_27;
  i_59 = t;
  t = term_j_41;
  t = h_9(h_59, i_59, t);
  t = term_l_41;
  f_59 = t;
  t = term_f_27;
  g_59 = t;
  t = term_m_41;
  t = h_9(f_59, g_59, t);
  t = term_n_41;
  return(t);
}
ATerm x_9 (ATerm t)
{
  t = term_o_41;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm p_41 = t;
  int q_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(r_9, s_9, t_9, t);
      ;
      LocalPopChoice(q_41);
    }
  else
    {
      t = p_41;
      t = Option_3_0(u_9, w_9, x_9, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm k_61 (ATerm), ATerm l_61 (ATerm), ATerm t)
{
  ATerm j_59 = NULL,k_59 = NULL,l_59 = NULL,m_59 = NULL,n_59 = NULL,o_59 = NULL,f_6 = NULL;
  o_59 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_59 = ATgetFirst((ATermList) t);
      l_59 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_59);
  j_59 = t;
  t = k_59;
  t = k_61(t);
  m_59 = t;
  t = l_59;
  t = l_61(t);
  n_59 = t;
  t = (ATerm) ATinsert(CheckATermList(n_59), m_59);
  f_6 = t;
  t = SSLsetAnnotations(f_6, j_59);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm d_101 (ATerm), ATerm t)
{
  ATerm t_59 = NULL,u_59 = NULL,v_59 = NULL,w_59 = NULL,y_59 = NULL,z_59 = NULL,q_6 = NULL;
  t_59 = t;
  {
    ATerm r_41 = t;
    int s_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_t_41;
        t = d_101(t);
        ;
        LocalPopChoice(s_41);
      }
    else
      {
        t = r_41;
      }
    t = t_59;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        v_59 = ATgetFirst((ATermList) t);
        w_59 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(t_59);
    u_59 = t;
    t = term_x_39;
    z_59 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_x_39, v_59);
    t = h_9(z_59, v_59, t);
    t = w_59;
    {
      ATerm j_60 (ATerm t)
      {
        ATerm u_41 = t;
        int y_41 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_41 = t;
            int a_42 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm c_60 = NULL;
                c_60 = t;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = c_60;
                ;
                LocalPopChoice(a_42);
              }
            else
              {
                t = z_41;
                t = d_101(t);
                t = Cons_2_0(_id, j_60, t);
              }
            ;
            LocalPopChoice(y_41);
          }
        else
          {
            t = u_41;
            {
              ATerm f_60 = NULL,g_60 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  f_60 = ATgetFirst((ATermList) t);
                  g_60 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(g_60), (ATerm) ATmakeAppl(sym_Undefined_1, f_60));
            }
          }
        return(t);
      }
      t = j_60(t);
      y_59 = t;
      t = (ATerm) ATinsert(CheckATermList(y_59), (ATerm) ATmakeAppl(sym_Program_1, v_59));
      q_6 = t;
      t = SSLsetAnnotations(q_6, u_59);
    }
  }
  return(t);
}
ATerm c_10 (ATerm t)
{
  ATerm v_60 = NULL;
  v_60 = t;
  if(match_string(t, "--help"))
    {
      t = v_60;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = v_60;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = v_60;
        }
    }
  return(t);
}
ATerm e_10 (ATerm t)
{
  ATerm w_60 = NULL,x_60 = NULL;
  t = term_v_40;
  w_60 = t;
  t = term_f_27;
  x_60 = t;
  t = term_b_42;
  t = h_9(w_60, x_60, t);
  t = term_c_42;
  return(t);
}
ATerm f_10 (ATerm t)
{
  t = term_d_42;
  return(t);
}
ATerm g_10 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm c_101 (ATerm), ATerm t)
{
  ATerm o_60 = NULL,p_60 = NULL,q_60 = NULL,r_60 = NULL,s_60 = NULL,t_60 = NULL,u_60 = NULL;
  q_60 = t;
  t = term_v_36;
  s_60 = t;
  t = term_f_37;
  t_60 = t;
  t = (ATerm) ATempty;
  u_60 = t;
  t = SSL_table_put(s_60, t_60, u_60);
  t = q_60;
  {
    ATerm z_9 (ATerm t)
    {
      ATerm e_42 = t;
      int t_42 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = c_101(t);
          ;
          LocalPopChoice(t_42);
        }
      else
        {
          t = e_42;
          {
            ATerm y_42 = t;
            int c_43 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(c_10, e_10, f_10, t);
                ;
                LocalPopChoice(c_43);
              }
            else
              {
                t = y_42;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(z_9, t);
    {
      ATerm d_43 = t;
      int e_43 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm e_61 = NULL;
          e_61 = t;
          {
            ATerm f_43 = t;
            int g_43 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm d_20 = NULL;
                t = e_61;
                {
                  ATerm i_43 = t;
                  int j_43 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_v_40;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(j_43);
                    }
                  else
                    {
                      t = i_43;
                      t = fetch_1_0(g_10, t);
                    }
                  t = e_61;
                  t = default_system_usage_0_0(t);
                  t = term_y_35;
                  d_20 = t;
                  t = SSL_exit(d_20);
                }
                ;
                LocalPopChoice(g_43);
              }
            else
              {
                t = f_43;
                {
                  ATerm j_20 = NULL;
                  t = term_i_41;
                  t = get_config_0_0(t);
                  t = e_61;
                  t = default_system_about_0_0(t);
                  t = term_y_35;
                  j_20 = t;
                  t = SSL_exit(j_20);
                }
              }
          }
          ;
          LocalPopChoice(e_43);
        }
      else
        {
          t = d_43;
          {
            ATerm k_43 = t;
            int l_43 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm f_61 = NULL,g_61 = NULL,h_61 = NULL;
                ATerm k_10 (ATerm t)
                {
                  ATerm i_61 = NULL,j_61 = NULL,m_61 = NULL,s_6 = NULL;
                  m_61 = t;
                  if(match_cons(t, sym_Undefined_1))
                    {
                      j_61 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(m_61);
                  i_61 = t;
                  t = j_61;
                  if(((o_60 != NULL) && (o_60 != t)))
                    _fail(t);
                  else
                    o_60 = t;
                  t = (ATerm) ATmakeAppl(sym_Undefined_1, j_61);
                  s_6 = t;
                  t = SSLsetAnnotations(s_6, i_61);
                  return(t);
                }
                t = fetch_1_0(k_10, t);
                t = term_f_21;
                g_61 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(o_60)), term_n_43);
                h_61 = t;
                t = SSL_printnl(g_61, h_61);
                t = (ATerm) ATmakeAppl(sym__2, term_f_21, (ATerm) ATinsert(ATinsert(ATempty, not_null(o_60)), term_n_43));
                t = default_system_usage_0_0(t);
                t = term_z_13;
                f_61 = t;
                t = SSL_exit(f_61);
                ;
                LocalPopChoice(l_43);
              }
            else
              {
                t = k_43;
              }
          }
        }
      p_60 = t;
      t = term_v_36;
      r_60 = t;
      t = SSL_table_destroy(r_60);
      t = p_60;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm o_98 (ATerm), ATerm p_98 (ATerm), ATerm q_98 (ATerm), ATerm r_98 (ATerm), ATerm t)
{
  ATerm r_61 = NULL,s_61 = NULL,t_61 = NULL,u_61 = NULL;
  t = parse_options_1_0(o_98, t);
  r_61 = t;
  t = term_o_43;
  u_61 = t;
  t = SSL_table_create(u_61);
  t = term_o_43;
  s_61 = t;
  t = term_p_43;
  t_61 = t;
  t = SSL_table_put(s_61, t_61, r_61);
  t = r_61;
  t = q_98(t);
  {
    ATerm q_43 = t;
    int r_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(p_98, t);
        ;
        LocalPopChoice(r_43);
      }
    else
      {
        t = q_43;
        {
          ATerm s_43 = t;
          int t_43 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = r_98(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(t_43);
            }
          else
            {
              t = s_43;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm m_10 (ATerm t)
{
  ATerm u_43 = t;
  int v_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = pack_stratego_options_0_0(t);
      ;
      LocalPopChoice(v_43);
    }
  else
    {
      t = u_43;
      {
        ATerm w_43 = t;
        int x_43 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = input_option_0_0(t);
            ;
            LocalPopChoice(x_43);
          }
        else
          {
            t = w_43;
            {
              ATerm y_43 = t;
              int z_43 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = output_option_0_0(t);
                  ;
                  LocalPopChoice(z_43);
                }
              else
                {
                  t = y_43;
                  {
                    ATerm a_44 = t;
                    int b_44 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Option_3_0(o_10, q_10, u_10, t);
                        ;
                        LocalPopChoice(b_44);
                      }
                    else
                      {
                        t = a_44;
                        {
                          ATerm c_44 = t;
                          int h_44 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = verbose_option_0_0(t);
                              ;
                              LocalPopChoice(h_44);
                            }
                          else
                            {
                              t = c_44;
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
ATerm o_10 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm q_10 (ATerm t)
{
  ATerm a_62 = NULL,b_62 = NULL;
  t = term_i_44;
  a_62 = t;
  t = term_f_27;
  b_62 = t;
  t = term_j_44;
  t = h_9(a_62, b_62, t);
  t = term_k_44;
  return(t);
}
ATerm u_10 (ATerm t)
{
  t = term_l_44;
  return(t);
}
ATerm b_11 (ATerm t)
{
  t = get_filename_0_0(t);
  t = basename_1_0(_id, t);
  return(t);
}
ATerm pack_stratego_0_0 (ATerm t)
{
  ATerm y_61 = NULL,z_61 = NULL;
  ATerm n_10 (ATerm t)
  {
    ATerm a_11 (ATerm t)
    {
      ATerm d_62 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          d_62 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = x_8(d_62, t);
      if(match_cons(t, sym__2))
        {
          if(((y_61 != NULL) && (y_61 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            y_61 = ATgetArgument(t, 0);
          if(((z_61 != NULL) && (z_61 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            z_61 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm m_44 = t;
        int n_44 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_d_38;
            t = get_config_0_0(t);
            t = y_61;
            t = map_1_0(b_11, t);
            t = write_to_text_0_0(t);
            ;
            LocalPopChoice(n_44);
          }
        else
          {
            t = m_44;
            {
              ATerm o_44 = t;
              int p_44 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = y_61;
                  t = create_dep_file_0_0(t);
                  ;
                  LocalPopChoice(p_44);
                }
              else
                {
                  t = o_44;
                }
              t = z_61;
              t = write_to_0_0(t);
            }
          }
      }
      return(t);
    }
    t = xtc_io_1_0(a_11, t);
    return(t);
  }
  t = option_wrap_4_0(m_10, default_usage_0_0, _id, n_10, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = pack_stratego_0_0(t);
  return(t);
}
