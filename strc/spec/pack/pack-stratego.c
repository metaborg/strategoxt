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
ATerm term_e_45;
ATerm term_y_44;
ATerm term_x_44;
ATerm term_w_44;
ATerm term_c_44;
ATerm term_b_44;
ATerm term_a_44;
ATerm term_m_43;
ATerm term_l_43;
ATerm term_k_43;
ATerm term_j_42;
ATerm term_e_42;
ATerm term_d_42;
ATerm term_a_42;
ATerm term_z_41;
ATerm term_x_41;
ATerm term_w_41;
ATerm term_v_41;
ATerm term_o_41;
ATerm term_n_41;
ATerm term_k_41;
ATerm term_j_41;
ATerm term_g_41;
ATerm term_p_40;
ATerm term_o_40;
ATerm term_r_39;
ATerm term_j_39;
ATerm term_y_38;
ATerm term_x_38;
ATerm term_w_38;
ATerm term_v_38;
ATerm term_u_38;
ATerm term_q_38;
ATerm term_p_38;
ATerm term_o_38;
ATerm term_i_38;
ATerm term_h_38;
ATerm term_v_37;
ATerm term_u_37;
ATerm term_t_37;
ATerm term_o_37;
ATerm term_z_36;
ATerm term_y_36;
ATerm term_x_36;
ATerm term_w_36;
ATerm term_v_36;
ATerm term_s_36;
ATerm term_r_36;
ATerm term_q_36;
ATerm term_p_36;
ATerm term_g_36;
ATerm term_f_36;
ATerm term_e_36;
ATerm term_b_36;
ATerm term_t_35;
ATerm term_o_33;
ATerm term_m_33;
ATerm term_s_32;
ATerm term_v_30;
ATerm term_u_30;
ATerm term_t_30;
ATerm term_s_30;
ATerm term_r_30;
ATerm term_q_30;
ATerm term_n_30;
ATerm term_f_30;
ATerm term_i_29;
ATerm term_e_29;
ATerm term_c_29;
ATerm term_j_28;
ATerm term_p_27;
ATerm term_n_27;
ATerm term_k_27;
ATerm term_j_27;
ATerm term_g_27;
ATerm term_f_27;
ATerm term_z_26;
ATerm term_t_26;
ATerm term_q_26;
ATerm term_p_26;
ATerm term_d_26;
ATerm term_t_25;
ATerm term_r_25;
ATerm term_x_24;
ATerm term_r_24;
ATerm term_q_24;
ATerm term_o_24;
ATerm term_n_24;
ATerm term_k_24;
ATerm term_a_24;
ATerm term_z_23;
ATerm term_u_23;
ATerm term_s_23;
ATerm term_r_23;
ATerm term_q_23;
ATerm term_m_23;
ATerm term_i_23;
ATerm term_h_23;
ATerm term_g_23;
ATerm term_y_22;
ATerm term_n_21;
ATerm term_m_21;
ATerm term_d_21;
ATerm term_c_21;
ATerm term_b_21;
ATerm term_a_21;
ATerm term_w_20;
ATerm term_u_20;
ATerm term_s_20;
ATerm term_q_20;
ATerm term_o_20;
ATerm term_n_20;
ATerm term_k_20;
ATerm term_j_20;
ATerm term_i_20;
ATerm term_h_20;
ATerm term_g_20;
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
ATerm term_p_19;
ATerm term_o_19;
ATerm term_k_19;
ATerm term_j_19;
ATerm term_i_19;
ATerm term_h_19;
ATerm term_g_19;
ATerm term_f_19;
ATerm term_e_19;
ATerm term_c_19;
ATerm term_b_19;
ATerm term_z_18;
ATerm term_x_18;
ATerm term_w_18;
ATerm term_s_18;
ATerm term_r_18;
ATerm term_q_18;
ATerm term_p_18;
ATerm term_o_18;
ATerm term_n_18;
ATerm term_m_18;
ATerm term_l_18;
ATerm term_j_18;
ATerm term_i_18;
ATerm term_g_18;
ATerm term_f_18;
ATerm term_e_18;
ATerm term_c_18;
ATerm term_b_18;
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
ATerm term_k_17;
ATerm term_i_17;
ATerm term_h_17;
ATerm term_f_17;
ATerm term_d_17;
ATerm term_a_17;
ATerm term_y_16;
ATerm term_x_16;
ATerm term_w_16;
ATerm term_v_16;
ATerm term_u_16;
ATerm term_r_16;
ATerm term_q_16;
ATerm term_p_16;
ATerm term_m_16;
ATerm term_l_16;
ATerm term_k_16;
ATerm term_j_16;
ATerm term_h_16;
ATerm term_g_16;
ATerm term_d_16;
ATerm term_c_16;
ATerm term_b_16;
ATerm term_y_15;
ATerm term_v_15;
ATerm term_t_15;
ATerm term_s_15;
ATerm term_r_15;
ATerm term_q_15;
ATerm term_p_15;
ATerm term_o_15;
ATerm term_n_15;
ATerm term_l_15;
ATerm term_k_15;
ATerm term_j_15;
ATerm term_i_15;
ATerm term_h_15;
ATerm term_g_15;
ATerm term_f_15;
ATerm term_e_15;
ATerm term_c_15;
ATerm term_b_15;
ATerm term_a_15;
ATerm term_v_14;
ATerm term_r_14;
ATerm term_q_14;
ATerm term_o_14;
ATerm term_l_14;
ATerm term_h_14;
ATerm term_z_13;
ATerm term_y_13;
ATerm term_x_13;
ATerm term_q_13;
ATerm term_j_13;
ATerm term_h_12;
ATerm term_f_12;
ATerm term_e_12;
ATerm term_b_12;
ATerm term_a_12;
ATerm term_z_11;
ATerm term_v_11;
ATerm term_t_11;
ATerm term_p_11;
void init_constant_terms (void)
{
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--dep", 0, ATtrue));
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--nodep", 0, ATtrue));
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeAppl(ATmakeSymbol(".", 0, ATtrue));
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeAppl(ATmakeSymbol("dep", 0, ATtrue));
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeAppl(ATmakeSymbol(" \\\n	", 0, ATtrue));
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeAppl(ATmakeSymbol(" :", 0, ATtrue));
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_o_14));
  term_o_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_15, term_h_14, term_b_15);
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_15, term_f_15, term_g_15);
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_15, term_j_15, term_k_15);
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_15, term_o_15, term_p_15);
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_15, term_s_15, term_t_15);
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_15, term_b_16, term_c_16);
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_16, term_h_16, term_j_16);
  ATprotect(&(term_l_16));
  term_l_16 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_16, term_m_16, term_p_16);
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_u_16));
  term_u_16 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_16, term_u_16, term_v_16);
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_a_17));
  term_a_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_16, term_y_16, term_a_17);
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_h_17));
  term_h_17 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_i_17));
  term_i_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_k_17));
  term_k_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_17, term_h_17, term_i_17);
  ATprotect(&(term_m_17));
  term_m_17 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_n_17));
  term_n_17 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_17, term_n_17, term_o_17);
  ATprotect(&(term_q_17));
  term_q_17 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_r_17));
  term_r_17 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_s_17));
  term_s_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_t_17));
  term_t_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_17, term_r_17, term_s_17);
  ATprotect(&(term_u_17));
  term_u_17 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_v_17));
  term_v_17 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_w_17));
  term_w_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_17, term_v_17, term_w_17);
  ATprotect(&(term_y_17));
  term_y_17 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_e_18));
  term_e_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_17, term_b_18, term_c_18);
  ATprotect(&(term_f_18));
  term_f_18 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_g_18));
  term_g_18 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_i_18));
  term_i_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_j_18));
  term_j_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_18, term_g_18, term_i_18);
  ATprotect(&(term_l_18));
  term_l_18 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_m_18));
  term_m_18 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_n_18));
  term_n_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_o_18));
  term_o_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_18, term_m_18, term_n_18);
  ATprotect(&(term_p_18));
  term_p_18 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_q_18));
  term_q_18 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_r_18));
  term_r_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_s_18));
  term_s_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_18, term_q_18, term_r_18);
  ATprotect(&(term_w_18));
  term_w_18 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_x_18));
  term_x_18 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_z_18));
  term_z_18 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_b_19));
  term_b_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_18, term_x_18, term_z_18);
  ATprotect(&(term_c_19));
  term_c_19 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_e_19));
  term_e_19 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_f_19));
  term_f_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_19, term_h_12, term_e_19);
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_h_19));
  term_h_19 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_i_19));
  term_i_19 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_j_19));
  term_j_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_19, term_h_19, term_i_19);
  ATprotect(&(term_k_19));
  term_k_19 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_o_19));
  term_o_19 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_p_19));
  term_p_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_u_19));
  term_u_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_19, term_o_19, term_p_19);
  ATprotect(&(term_v_19));
  term_v_19 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_w_19));
  term_w_19 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_x_19));
  term_x_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_y_19));
  term_y_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_19, term_w_19, term_x_19);
  ATprotect(&(term_z_19));
  term_z_19 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_a_20));
  term_a_20 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_b_20));
  term_b_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_c_20));
  term_c_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_19, term_a_20, term_b_20);
  ATprotect(&(term_e_20));
  term_e_20 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_g_20));
  term_g_20 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_h_20));
  term_h_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_i_20));
  term_i_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_20, term_g_20, term_h_20);
  ATprotect(&(term_j_20));
  term_j_20 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_k_20));
  term_k_20 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_n_20));
  term_n_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_o_20));
  term_o_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_20, term_k_20, term_n_20);
  ATprotect(&(term_q_20));
  term_q_20 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_s_20));
  term_s_20 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_u_20));
  term_u_20 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_w_20));
  term_w_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_20, term_s_20, term_u_20);
  ATprotect(&(term_a_21));
  term_a_21 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_b_21));
  term_b_21 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_c_21));
  term_c_21 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_d_21));
  term_d_21 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_21, term_b_21, term_c_21);
  ATprotect(&(term_m_21));
  term_m_21 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_n_21));
  term_n_21 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_y_22));
  term_y_22 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_g_23));
  term_g_23 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_h_23));
  term_h_23 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_i_23));
  term_i_23 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_m_23));
  term_m_23 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_q_23));
  term_q_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_r_23));
  term_r_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_s_23));
  term_s_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_u_23));
  term_u_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_z_23));
  term_z_23 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_a_24));
  term_a_24 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_k_24));
  term_k_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_n_24));
  term_n_24 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_o_24));
  term_o_24 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_q_24));
  term_q_24 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_r_24));
  term_r_24 = (ATerm) ATmakeAppl(sym__2, term_z_23, term_q_24);
  ATprotect(&(term_x_24));
  term_x_24 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_r_25));
  term_r_25 = (ATerm) ATmakeAppl(sym__2, term_z_23, term_a_24);
  ATprotect(&(term_t_25));
  term_t_25 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_d_26));
  term_d_26 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_p_26));
  term_p_26 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_q_26));
  term_q_26 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_t_26));
  term_t_26 = (ATerm) ATmakeInt(-1);
  ATprotect(&(term_z_26));
  term_z_26 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_f_27));
  term_f_27 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file> (file, mode)", 0, ATtrue));
  ATprotect(&(term_g_27));
  term_g_27 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_j_27));
  term_j_27 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_k_27));
  term_k_27 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_n_27));
  term_n_27 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_p_27));
  term_p_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_j_28));
  term_j_28 = (ATerm) ATmakeAppl(ATmakeSymbol("parse error in ", 0, ATtrue));
  ATprotect(&(term_c_29));
  term_c_29 = (ATerm) ATmakeAppl(ATmakeSymbol("parse-stratego", 0, ATtrue));
  ATprotect(&(term_e_29));
  term_e_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--asfix", 0, ATtrue));
  ATprotect(&(term_i_29));
  term_i_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue));
  ATprotect(&(term_f_30));
  term_f_30 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
  ATprotect(&(term_n_30));
  term_n_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--slack", 0, ATtrue));
  ATprotect(&(term_q_30));
  term_q_30 = (ATerm) ATmakeAppl(ATmakeSymbol("*** module ", 0, ATtrue));
  ATprotect(&(term_r_30));
  term_r_30 = (ATerm) ATmakeAppl(ATmakeSymbol(" not found", 0, ATtrue));
  ATprotect(&(term_s_30));
  term_s_30 = (ATerm) ATmakeAppl(ATmakeSymbol(" reading ", 0, ATtrue));
  ATprotect(&(term_t_30));
  term_t_30 = (ATerm) ATmakeAppl(ATmakeSymbol("rtree", 0, ATtrue));
  ATprotect(&(term_u_30));
  term_u_30 = (ATerm) ATmakeAppl(ATmakeSymbol("str", 0, ATtrue));
  ATprotect(&(term_v_30));
  term_v_30 = (ATerm) ATmakeAppl(ATmakeSymbol("cr", 0, ATtrue));
  ATprotect(&(term_s_32));
  term_s_32 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_m_33));
  term_m_33 = (ATerm) ATmakeAppl(ATmakeSymbol("list-cons", 0, ATtrue));
  ATprotect(&(term_o_33));
  term_o_33 = (ATerm) ATmakeAppl(ATmakeSymbol("tuple-cons", 0, ATtrue));
  ATprotect(&(term_t_35));
  term_t_35 = (ATerm) ATmakeAppl(sym__2, term_n_27, term_z_26);
  ATprotect(&(term_b_36));
  term_b_36 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_e_36));
  term_e_36 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_f_36));
  term_f_36 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_g_36));
  term_g_36 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_p_36));
  term_p_36 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_q_36));
  term_q_36 = (ATerm) ATmakeAppl(sym__2, term_l_14, term_p_36);
  ATprotect(&(term_r_36));
  term_r_36 = (ATerm) ATmakeAppl(sym_Verbose_1, term_p_36);
  ATprotect(&(term_s_36));
  term_s_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_v_36));
  term_v_36 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_w_36));
  term_w_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_x_36));
  term_x_36 = (ATerm) ATmakeAppl(sym__2, term_w_36, term_j_27);
  ATprotect(&(term_y_36));
  term_y_36 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_z_36));
  term_z_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_o_37));
  term_o_37 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_t_37));
  term_t_37 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_u_37));
  term_u_37 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_v_37));
  term_v_37 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_h_38));
  term_h_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-I d | --Include d   Include modules from directory d", 0, ATtrue));
  ATprotect(&(term_i_38));
  term_i_38 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_o_38));
  term_o_38 = (ATerm) ATmakeAppl(sym__2, term_v_11, term_i_38);
  ATprotect(&(term_p_38));
  term_p_38 = (ATerm) ATmakeAppl(ATmakeSymbol("--nodep              Don't create dependency file", 0, ATtrue));
  ATprotect(&(term_q_38));
  term_q_38 = (ATerm) ATmakeAppl(ATmakeSymbol("--dep f | -d f       Write dependency to file f", 0, ATtrue));
  ATprotect(&(term_u_38));
  term_u_38 = (ATerm) ATmakeAppl(ATmakeSymbol("--imports", 0, ATtrue));
  ATprotect(&(term_v_38));
  term_v_38 = (ATerm) ATmakeAppl(sym__2, term_u_38, term_j_27);
  ATprotect(&(term_w_38));
  term_w_38 = (ATerm) ATmakeAppl(ATmakeSymbol("--imports            Produce a list of imported modules only", 0, ATtrue));
  ATprotect(&(term_x_38));
  term_x_38 = (ATerm) ATmakeAppl(sym__2, term_n_30, term_j_27);
  ATprotect(&(term_y_38));
  term_y_38 = (ATerm) ATmakeAppl(ATmakeSymbol("--slack              Continue when module is not found", 0, ATtrue));
  ATprotect(&(term_j_39));
  term_j_39 = (ATerm) ATmakeAppl(sym__2, term_e_29, term_i_38);
  ATprotect(&(term_r_39));
  term_r_39 = (ATerm) ATmakeAppl(ATmakeSymbol("--asfix              Do not implode the concrete syntax parts", 0, ATtrue));
  ATprotect(&(term_o_40));
  term_o_40 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_p_40));
  term_p_40 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_g_41));
  term_g_41 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_j_41));
  term_j_41 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_k_41));
  term_k_41 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_n_41));
  term_n_41 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_o_41));
  term_o_41 = (ATerm) ATmakeAppl(sym__2, term_o_37, term_t_37);
  ATprotect(&(term_v_41));
  term_v_41 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_w_41));
  term_w_41 = (ATerm) ATmakeAppl(sym__2, term_v_41, term_j_27);
  ATprotect(&(term_x_41));
  term_x_41 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_z_41));
  term_z_41 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_a_42));
  term_a_42 = (ATerm) ATmakeAppl(sym__2, term_z_41, term_j_27);
  ATprotect(&(term_d_42));
  term_d_42 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_e_42));
  term_e_42 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_j_42));
  term_j_42 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_k_43));
  term_k_43 = (ATerm) ATmakeAppl(sym__2, term_j_41, term_j_27);
  ATprotect(&(term_l_43));
  term_l_43 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_m_43));
  term_m_43 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_a_44));
  term_a_44 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_b_44));
  term_b_44 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_c_44));
  term_c_44 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_w_44));
  term_w_44 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_x_44));
  term_x_44 = (ATerm) ATmakeAppl(sym__2, term_w_44, term_j_27);
  ATprotect(&(term_y_44));
  term_y_44 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_e_45));
  term_e_45 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
}
ATerm s_7 (ATerm x_42, ATerm y_42, ATerm);
ATerm a_0 (ATerm);
ATerm write_to_0_0 (ATerm);
ATerm t_7 (ATerm y_20, ATerm z_20, ATerm);
ATerm create_dep_file_0_0 (ATerm);
ATerm v_7 (ATerm n_39, ATerm o_39, ATerm);
ATerm w_7 (ATerm b_43, ATerm c_43, ATerm);
ATerm x_7 (ATerm h_96 (ATerm), ATerm o_427, ATerm f_43, ATerm);
ATerm f_0 (ATerm);
ATerm write_to_text_0_0 (ATerm);
ATerm basename_1_0 (ATerm k_92 (ATerm), ATerm);
ATerm at_suffix_rev_1_0 (ATerm i_84 (ATerm), ATerm);
ATerm get_filename_0_0 (ATerm);
ATerm map_1_0 (ATerm k_83 (ATerm), ATerm);
ATerm u_0 (ATerm);
ATerm v_0 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm z_0 (ATerm);
ATerm c_1 (ATerm);
ATerm flatten_stratego_0_0 (ATerm);
ATerm genzip_4_0 (ATerm n_85 (ATerm), ATerm o_85 (ATerm), ATerm p_85 (ATerm), ATerm q_85 (ATerm), ATerm);
ATerm e_1 (ATerm);
ATerm b_8 (ATerm q_125, ATerm);
ATerm read_from_0_0 (ATerm);
ATerm pass_keep_0_0 (ATerm);
ATerm c_8 (ATerm t_36, ATerm u_36, ATerm);
ATerm pass_verbose_0_0 (ATerm);
ATerm xtc_transform_term_2_0 (ATerm u_105 (ATerm), ATerm v_105 (ATerm), ATerm);
ATerm d_8 (ATerm q_44, ATerm r_44, ATerm);
ATerm signal_to_descr_0_0 (ATerm);
ATerm signal_from_number_0_0 (ATerm);
ATerm warn_ifsignaled_0_0 (ATerm);
ATerm fork_0_0 (ATerm);
ATerm fork_and_wait_1_0 (ATerm c_98 (ATerm), ATerm);
ATerm table_getlist_0_0 (ATerm);
ATerm if_verbose5_1_0 (ATerm v_97 (ATerm), ATerm);
ATerm if_verbose4_1_0 (ATerm u_97 (ATerm), ATerm);
ATerm if_verbose6_1_0 (ATerm w_97 (ATerm), ATerm);
ATerm g_8 (ATerm o_87 (ATerm), ATerm j_26, ATerm i_26, ATerm);
ATerm k_1 (ATerm);
ATerm h_8 (ATerm j_49, ATerm k_49, ATerm l_49, ATerm);
ATerm i_8 (ATerm z_101 (ATerm), ATerm t_49, ATerm s_49, ATerm);
ATerm r_20 (ATerm d_20, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm j_8 (ATerm d_43, ATerm);
ATerm k_8 (ATerm p_39, ATerm q_39, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm x_23 (ATerm t_21, ATerm);
ATerm b_24 (ATerm b_22, ATerm d_22, ATerm k_22, ATerm);
ATerm f_24 (ATerm x_22, ATerm a_23, ATerm b_23, ATerm);
ATerm l_8 (ATerm);
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
ATerm repeat_1_0 (ATerm v_76 (ATerm), ATerm);
ATerm xtc_location_0_0 (ATerm);
ATerm l_2 (ATerm);
ATerm m_2 (ATerm);
ATerm n_2 (ATerm);
ATerm o_2 (ATerm);
ATerm q_2 (ATerm);
ATerm xtc_load_0_0 (ATerm);
ATerm r_2 (ATerm);
ATerm u_2 (ATerm);
ATerm m_28 (ATerm o_27, ATerm);
ATerm f_3 (ATerm);
ATerm g_3 (ATerm);
ATerm h_3 (ATerm);
ATerm i_3 (ATerm);
ATerm xtc_find_0_0 (ATerm);
ATerm xtc_command_1_0 (ATerm l_105 (ATerm), ATerm);
ATerm m_8 (ATerm o_94 (ATerm), ATerm b_38, ATerm z_37, ATerm);
ATerm r_29 (ATerm h_29, ATerm);
ATerm s_29 (ATerm j_29, ATerm k_29, ATerm l_29, ATerm);
ATerm l_3 (ATerm);
ATerm open_file_0_0 (ATerm);
ATerm n_8 (ATerm c_34, ATerm d_34, ATerm);
ATerm new_0_0 (ATerm);
ATerm new_file_0_0 (ATerm);
ATerm m_3 (ATerm);
ATerm xtc_new_file_0_0 (ATerm);
ATerm xtc_transform_file_2_0 (ATerm m_0 (ATerm), ATerm n_0 (ATerm), ATerm);
ATerm d_33 (ATerm j_31, ATerm k_31, ATerm n_31, ATerm);
ATerm e_33 (ATerm u_32, ATerm v_32, ATerm);
ATerm p_3 (ATerm);
ATerm q_3 (ATerm);
ATerm r_3 (ATerm);
ATerm t_3 (ATerm);
ATerm parse_module_0_0 (ATerm);
ATerm debug_1_0 (ATerm f_96 (ATerm), ATerm);
ATerm if_verbose3_1_0 (ATerm t_97 (ATerm), ATerm);
ATerm fetch_elem_1_0 (ATerm w_83 (ATerm), ATerm);
ATerm o_8 (ATerm h_39, ATerm i_39, ATerm);
ATerm p_8 (ATerm y_75 (ATerm), ATerm n_19, ATerm m_19, ATerm);
ATerm d_4 (ATerm);
ATerm get_module_1_0 (ATerm x_75 (ATerm), ATerm);
ATerm r_8 (ATerm r_87 (ATerm), ATerm s_87 (ATerm), ATerm n_26, ATerm m_26, ATerm);
ATerm s_8 (ATerm j_87 (ATerm), ATerm h_26, ATerm g_26, ATerm);
ATerm k_4 (ATerm);
ATerm l_4 (ATerm);
ATerm m_4 (ATerm);
ATerm x_8 (ATerm e_569, ATerm j_569, ATerm y_52, ATerm);
ATerm o_4 (ATerm);
ATerm r_4 (ATerm);
ATerm s_4 (ATerm);
ATerm a_39 (ATerm g_37, ATerm h_37, ATerm i_37, ATerm);
ATerm u_4 (ATerm);
ATerm diff_0_0 (ATerm);
ATerm z_8 (ATerm t_106 (ATerm), ATerm u_106 (ATerm), ATerm v_106 (ATerm), ATerm p_55, ATerm m_55, ATerm t_55, ATerm q_55, ATerm n_55, ATerm o_55, ATerm);
ATerm GnNext_3_0 (ATerm t_106 (ATerm), ATerm u_106 (ATerm), ATerm v_106 (ATerm), ATerm);
ATerm while_not_2_0 (ATerm k_77 (ATerm), ATerm l_77 (ATerm), ATerm);
ATerm for_3_0 (ATerm n_77 (ATerm), ATerm o_77 (ATerm), ATerm p_77 (ATerm), ATerm);
ATerm x_4 (ATerm);
ATerm b_5 (ATerm);
ATerm graph_nodes_roots_3_0 (ATerm q_106 (ATerm), ATerm r_106 (ATerm), ATerm s_106 (ATerm), ATerm);
ATerm filter_1_0 (ATerm r_90 (ATerm), ATerm);
ATerm e_5 (ATerm);
ATerm h_5 (ATerm);
ATerm i_5 (ATerm);
ATerm k_5 (ATerm);
ATerm l_5 (ATerm);
ATerm m_5 (ATerm);
ATerm c_9 (ATerm d_19, ATerm);
ATerm e_9 (ATerm z_39, ATerm a_40, ATerm);
ATerm copy_to_1_0 (ATerm l_0 (ATerm), ATerm);
ATerm f_9 (ATerm r_48, ATerm s_48, ATerm);
ATerm end_scope_1_0 (ATerm l_94 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm o_76 (ATerm), ATerm p_76 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm k_94 (ATerm), ATerm);
ATerm p_5 (ATerm);
ATerm t_5 (ATerm);
ATerm w_5 (ATerm);
ATerm xtc_temp_files_1_0 (ATerm x_104 (ATerm), ATerm);
ATerm y_5 (ATerm);
ATerm xtc_io_1_0 (ATerm y_104 (ATerm), ATerm);
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
ATerm m_9 (ATerm r_56, ATerm s_56, ATerm);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm);
ATerm x_6 (ATerm);
ATerm y_6 (ATerm);
ATerm c_7 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm e_7 (ATerm);
ATerm f_7 (ATerm);
ATerm g_7 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm k_9 (ATerm m_48, ATerm n_48, ATerm l_48, ATerm);
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm);
ATerm at_end_1_0 (ATerm a_84 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm m_52 (ATerm a_52, ATerm);
ATerm conc_0_0 (ATerm);
ATerm d_9 (ATerm x_56, ATerm w_56, ATerm);
ATerm j_7 (ATerm);
ATerm k_7 (ATerm);
ATerm l_7 (ATerm);
ATerm m_7 (ATerm);
ATerm n_7 (ATerm);
ATerm q_7 (ATerm);
ATerm r_7 (ATerm);
ATerm u_7 (ATerm);
ATerm y_7 (ATerm);
ATerm z_7 (ATerm);
ATerm a_8 (ATerm);
ATerm e_8 (ATerm);
ATerm f_8 (ATerm);
ATerm q_8 (ATerm);
ATerm t_8 (ATerm);
ATerm v_8 (ATerm);
ATerm w_8 (ATerm);
ATerm y_8 (ATerm);
ATerm pack_stratego_options_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm g_9 (ATerm n_36, ATerm o_36, ATerm);
ATerm foldr_2_0 (ATerm n_89 (ATerm), ATerm o_89 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm a_9 (ATerm);
ATerm b_9 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm r_97 (ATerm), ATerm);
ATerm h_9 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm q_9 (ATerm);
ATerm need_help_1_0 (ATerm f_99 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm);
ATerm j_9 (ATerm d_50, ATerm e_50, ATerm);
ATerm s_9 (ATerm);
ATerm t_9 (ATerm);
ATerm u_9 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm fetch_1_0 (ATerm u_83 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm v_9 (ATerm);
ATerm x_9 (ATerm);
ATerm y_9 (ATerm);
ATerm b_10 (ATerm);
ATerm e_10 (ATerm);
ATerm f_10 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm v_61 (ATerm), ATerm w_61 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm w_101 (ATerm), ATerm);
ATerm h_10 (ATerm);
ATerm i_10 (ATerm);
ATerm j_10 (ATerm);
ATerm p_10 (ATerm);
ATerm parse_options_1_0 (ATerm v_101 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm h_99 (ATerm), ATerm i_99 (ATerm), ATerm j_99 (ATerm), ATerm k_99 (ATerm), ATerm);
ATerm r_10 (ATerm);
ATerm y_10 (ATerm);
ATerm d_11 (ATerm);
ATerm f_11 (ATerm);
ATerm k_11 (ATerm);
ATerm pack_stratego_0_0 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm s_7 (ATerm x_42, ATerm y_42, ATerm t)
{
  ATerm b_0 = NULL;
  t = SSL_write_term_to_stream_baf(x_42, y_42);
  b_0 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, b_0);
  return(t);
}
ATerm a_0 (ATerm t)
{
  ATerm r_0 = NULL,s_0 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm l_11 = ATgetArgument(t, 0);
      if(match_cons(l_11, sym_Stream_1))
        {
          r_0 = ATgetArgument(l_11, 0);
        }
      else
        _fail(t);
      s_0 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_7(r_0, s_0, t);
  return(t);
}
ATerm write_to_0_0 (ATerm t)
{
  ATerm o_0 = NULL,q_0 = NULL;
  o_0 = t;
  t = xtc_new_file_0_0(t);
  q_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_0, o_0);
  t = x_7(a_0, q_0, o_0, t);
  t = SSL_close_file(q_0);
  t = (ATerm) ATmakeAppl(sym_FILE_1, q_0);
  return(t);
}
ATerm t_7 (ATerm y_20, ATerm z_20, ATerm t)
{
  ATerm o_1 = NULL,p_1 = NULL;
  t = z_20;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = z_20;
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
      t = SSLgetAnnotations(z_20);
      t_0 = t;
      t = p_1;
      {
        ATerm a_1 (ATerm t)
        {
          ATerm m_11 = t;
          int o_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm x_0 = NULL;
              x_0 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = x_0;
              ;
              LocalPopChoice(o_11);
            }
          else
            {
              t = m_11;
              {
                ATerm y_0 = NULL;
                t = Cons_2_0(_id, a_1, t);
                y_0 = t;
                t = (ATerm) ATinsert(CheckATermList(y_0), y_20);
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
  t = term_p_11;
  t = get_config_0_0(t);
  {
    ATerm r_11 = t;
    int s_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_t_11;
        t = get_config_0_0(t);
        ;
        LocalPopChoice(s_11);
      }
    else
      {
        t = r_11;
        {
          ATerm u_11 = t;
          if((PushChoice() == 0))
            {
              t = term_v_11;
              t = get_config_0_0(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = u_11;
            }
        }
      }
    t_1 = t;
    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_a_12), term_z_11), t_1);
    s_2 = t;
    t = SSL_concat_strings(s_2);
    e_2 = t;
    t = (ATerm) ATmakeAppl(sym__2, e_2, term_b_12);
    t = open_file_0_0(t);
    v_1 = t;
    t = term_e_12;
    c_2 = t;
    t = (ATerm) ATinsert(CheckATermList(u_1), term_f_12);
    d_2 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_e_12, (ATerm) ATinsert(CheckATermList(u_1), term_f_12));
    t = t_7(c_2, d_2, t);
    w_1 = t;
    t = (ATerm) ATinsert(CheckATermList(w_1), t_1);
    a_2 = t;
    t = SSL_printnl(v_1, a_2);
    t = SSL_close_file(v_1);
    t = (ATerm) ATmakeAppl(sym_FILE_1, e_2);
  }
  return(t);
}
ATerm v_7 (ATerm n_39, ATerm o_39, ATerm t)
{
  ATerm t_2 = NULL;
  t = SSL_fputc(n_39, o_39);
  t_2 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, t_2);
  return(t);
}
ATerm w_7 (ATerm b_43, ATerm c_43, ATerm t)
{
  ATerm v_2 = NULL;
  t = SSL_write_term_to_stream_text(b_43, c_43);
  v_2 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, v_2);
  return(t);
}
ATerm x_7 (ATerm h_96 (ATerm), ATerm o_427, ATerm f_43, ATerm t)
{
  ATerm w_2 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, o_427, term_b_12);
  t = l_8(t);
  w_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_2, f_43);
  t = h_96(t);
  t = fclose_0_0(t);
  t = f_43;
  return(t);
}
ATerm f_0 (ATerm t)
{
  ATerm z_2 = NULL,a_3 = NULL,b_3 = NULL,c_3 = NULL,d_3 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm g_12 = ATgetArgument(t, 0);
      if(match_cons(g_12, sym_Stream_1))
        {
          c_3 = ATgetArgument(g_12, 0);
        }
      else
        _fail(t);
      d_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_7(c_3, d_3, t);
  z_2 = t;
  t = term_h_12;
  a_3 = t;
  t = z_2;
  if(match_cons(t, sym_Stream_1))
    {
      b_3 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_h_12, z_2);
  t = v_7(a_3, b_3, t);
  return(t);
}
ATerm write_to_text_0_0 (ATerm t)
{
  ATerm x_2 = NULL,y_2 = NULL;
  x_2 = t;
  t = xtc_new_file_0_0(t);
  y_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_2, x_2);
  t = x_7(f_0, y_2, x_2, t);
  t = SSL_close_file(y_2);
  t = (ATerm) ATmakeAppl(sym_FILE_1, y_2);
  return(t);
}
ATerm basename_1_0 (ATerm k_92 (ATerm), ATerm t)
{
  ATerm o_3 = NULL,s_3 = NULL;
  s_3 = t;
  t = SSL_explode_string(s_3);
  {
    ATerm i_12 = t;
    int p_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_5 (ATerm t)
        {
          ATerm w_4 = NULL,y_4 = NULL,z_4 = NULL;
          w_4 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              y_4 = ATgetFirst((ATermList) t);
              z_4 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          {
            ATerm t_12 = t;
            int x_12 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm b_2 = NULL,h_2 = NULL,d_1 = NULL;
                t = SSLgetAnnotations(w_4);
                b_2 = t;
                t = z_4;
                t = d_5(t);
                h_2 = t;
                t = (ATerm) ATinsert(CheckATermList(h_2), y_4);
                d_1 = t;
                t = SSLsetAnnotations(d_1, b_2);
                ;
                LocalPopChoice(x_12);
              }
            else
              {
                t = t_12;
                {
                  ATerm y_12 = t;
                  int a_13 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm p_2 = NULL,g_1 = NULL;
                      t = SSLgetAnnotations(w_4);
                      p_2 = t;
                      t = y_4;
                      if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 47)))
                        _fail(t);
                      t = (ATerm) ATinsert(CheckATermList(z_4), y_4);
                      g_1 = t;
                      t = SSLsetAnnotations(g_1, p_2);
                      ;
                      LocalPopChoice(a_13);
                    }
                  else
                    {
                      t = y_12;
                      {
                        ATerm k_3 = NULL,n_3 = NULL,h_1 = NULL;
                        t = SSLgetAnnotations(w_4);
                        k_3 = t;
                        t = y_4;
                        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 46)))
                          _fail(t);
                        t = z_4;
                        t = k_92(t);
                        n_3 = t;
                        t = (ATerm) ATinsert(CheckATermList(n_3), y_4);
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
        t = d_5(t);
        ;
        LocalPopChoice(p_12);
      }
    else
      {
        t = i_12;
      }
    o_3 = t;
    t = SSL_implode_string(o_3);
  }
  return(t);
}
ATerm at_suffix_rev_1_0 (ATerm i_84 (ATerm), ATerm t)
{
  ATerm c_6 (ATerm t)
  {
    ATerm b_13 = t;
    int c_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_5 = NULL,a_6 = NULL,b_6 = NULL,h_4 = NULL,a_5 = NULL,l_1 = NULL;
        z_5 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            a_6 = ATgetFirst((ATermList) t);
            b_6 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(z_5);
        h_4 = t;
        t = b_6;
        t = c_6(t);
        a_5 = t;
        t = (ATerm) ATinsert(CheckATermList(a_5), a_6);
        l_1 = t;
        t = SSLsetAnnotations(l_1, h_4);
        ;
        LocalPopChoice(c_13);
      }
    else
      {
        t = b_13;
        t = i_84(t);
      }
    return(t);
  }
  t = c_6(t);
  return(t);
}
ATerm get_filename_0_0 (ATerm t)
{
  ATerm h_6 = NULL,i_6 = NULL,j_6 = NULL;
  j_6 = t;
  t = SSL_explode_string(j_6);
  {
    ATerm d_13 = t;
    int e_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_0 (ATerm t)
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm f_13 = ATgetFirst((ATermList) t);
              if(((ATgetType(f_13) != AT_INT) || (ATgetInt((ATermInt) f_13) != 47)))
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
        t = at_suffix_rev_1_0(p_0, t);
        t = not_null(h_6);
        ;
        LocalPopChoice(e_13);
      }
    else
      {
        t = d_13;
      }
    i_6 = t;
    t = SSL_implode_string(i_6);
  }
  return(t);
}
ATerm map_1_0 (ATerm k_83 (ATerm), ATerm t)
{
  ATerm d_7 (ATerm t)
  {
    ATerm z_6 = NULL,a_7 = NULL,b_7 = NULL;
    z_6 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = z_6;
      }
    else
      {
        ATerm q_5 = NULL,d_6 = NULL,f_6 = NULL,q_1 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            a_7 = ATgetFirst((ATermList) t);
            b_7 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(z_6);
        q_5 = t;
        t = a_7;
        t = k_83(t);
        d_6 = t;
        t = b_7;
        t = d_7(t);
        f_6 = t;
        t = (ATerm) ATinsert(CheckATermList(f_6), d_6);
        q_1 = t;
        t = SSLsetAnnotations(q_1, q_5);
      }
    return(t);
  }
  t = d_7(t);
  return(t);
}
ATerm u_0 (ATerm t)
{
  ATerm g_13 = t;
  int i_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(i_13);
    }
  else
    {
      t = g_13;
    }
  return(t);
}
ATerm v_0 (ATerm t)
{
  t = term_j_13;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm k_13 = t;
  int l_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_8 = NULL;
      u_8 = t;
      t = SSL_is_string(u_8);
      ;
      LocalPopChoice(l_13);
    }
  else
    {
      t = k_13;
      {
        ATerm m_13 = t;
        int n_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(u_0, t);
            ;
            LocalPopChoice(n_13);
          }
        else
          {
            t = m_13;
            {
              ATerm l_9 = NULL,o_9 = NULL,p_9 = NULL;
              l_9 = t;
              if(match_cons(t, sym_Path_1))
                {
                  o_9 = ATgetArgument(t, 0);
                  t = o_9;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      o_9 = ATgetArgument(t, 0);
                      t = o_9;
                      {
                        ATerm o_13 = t;
                        int p_13 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(p_13);
                          }
                        else
                          {
                            t = o_13;
                            t = debug_1_0(v_0, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm w_9 = NULL,z_9 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          o_9 = ATgetArgument(t, 0);
                          p_9 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = o_9;
                      t = eval_config_0_0(t);
                      w_9 = t;
                      t = p_9;
                      t = eval_config_0_0(t);
                      z_9 = t;
                      t = (ATerm) ATmakeAppl(sym__2, w_9, z_9);
                      t = n_8(w_9, z_9, t);
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
  ATerm k_10 = NULL,l_10 = NULL;
  k_10 = t;
  t = term_q_13;
  l_10 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_q_13, k_10);
  t = j_9(l_10, k_10, t);
  {
    ATerm r_13 = t;
    int s_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_10 = NULL,n_10 = NULL;
        t = eval_config_0_0(t);
        m_10 = t;
        t = term_q_13;
        n_10 = t;
        t = SSL_table_put(n_10, k_10, m_10);
        t = m_10;
        ;
        LocalPopChoice(s_13);
      }
    else
      {
        t = r_13;
      }
  }
  return(t);
}
ATerm z_0 (ATerm t)
{
  ATerm v_10 = NULL;
  if(match_cons(t, sym_Specification_1))
    {
      v_10 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = v_10;
  t = filter_1_0(c_1, t);
  return(t);
}
ATerm c_1 (ATerm t)
{
  ATerm t_13 = t;
  if((PushChoice() == 0))
    {
      ATerm w_10 = NULL,x_10 = NULL,z_10 = NULL,u_3 = NULL;
      z_10 = t;
      if(match_cons(t, sym_Imports_1))
        {
          x_10 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(z_10);
      w_10 = t;
      t = (ATerm) ATmakeAppl(sym_Imports_1, x_10);
      u_3 = t;
      t = SSLsetAnnotations(u_3, w_10);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = t_13;
    }
  return(t);
}
ATerm flatten_stratego_0_0 (ATerm t)
{
  ATerm s_10 = NULL;
  t = map_1_0(z_0, t);
  t = concat_0_0(t);
  s_10 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, s_10);
  return(t);
}
ATerm genzip_4_0 (ATerm n_85 (ATerm), ATerm o_85 (ATerm), ATerm p_85 (ATerm), ATerm q_85 (ATerm), ATerm t)
{
  ATerm j_11 (ATerm t)
  {
    ATerm u_13 = t;
    int v_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_85(t);
        ;
        LocalPopChoice(v_13);
      }
    else
      {
        t = u_13;
        {
          ATerm a_11 = NULL,b_11 = NULL,c_11 = NULL,e_11 = NULL,h_11 = NULL,i_11 = NULL,w_3 = NULL;
          t = o_85(t);
          i_11 = t;
          if(match_cons(t, sym__2))
            {
              b_11 = ATgetArgument(t, 0);
              c_11 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(i_11);
          a_11 = t;
          t = b_11;
          t = q_85(t);
          e_11 = t;
          t = c_11;
          t = j_11(t);
          h_11 = t;
          t = (ATerm) ATmakeAppl(sym__2, e_11, h_11);
          w_3 = t;
          t = SSLsetAnnotations(w_3, a_11);
          t = p_85(t);
        }
      }
    return(t);
  }
  t = j_11(t);
  return(t);
}
ATerm e_1 (ATerm t)
{
  ATerm n_11 = NULL;
  if(match_cons(t, sym_Imports_1))
    {
      n_11 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = n_11;
  return(t);
}
ATerm b_8 (ATerm q_125, ATerm t)
{
  t = q_125;
  t = filter_1_0(e_1, t);
  t = concat_0_0(t);
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm q_11 = NULL;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_x_13;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      ATerm x_11 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          q_11 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, term_y_13);
      x_11 = t;
      t = (ATerm) ATmakeAppl(sym__2, q_11, (ATerm) ATinsert(ATempty, term_y_13));
      t = o_8(q_11, x_11, t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
ATerm pass_keep_0_0 (ATerm t)
{
  ATerm j_12 = NULL,l_12 = NULL,n_12 = NULL,o_12 = NULL;
  t = term_z_13;
  {
    ATerm f_14 = t;
    int g_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        ;
        LocalPopChoice(g_14);
      }
    else
      {
        t = f_14;
        t = term_h_14;
      }
    l_12 = t;
    t = term_h_14;
    o_12 = t;
    t = (ATerm) ATmakeAppl(sym__2, l_12, term_h_14);
    t = c_8(l_12, o_12, t);
    n_12 = t;
    t = SSL_int_to_string(n_12);
    j_12 = t;
    t = (ATerm) ATinsert(ATinsert(ATempty, j_12), term_z_13);
  }
  return(t);
}
ATerm c_8 (ATerm t_36, ATerm u_36, ATerm t)
{
  ATerm i_14 = t;
  int j_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(t_36, u_36);
      ;
      LocalPopChoice(j_14);
    }
  else
    {
      t = i_14;
      t = SSL_subtr(t_36, u_36);
    }
  return(t);
}
ATerm pass_verbose_0_0 (ATerm t)
{
  ATerm q_12 = NULL,r_12 = NULL,s_12 = NULL,u_12 = NULL;
  t = term_l_14;
  {
    ATerm m_14 = t;
    int n_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        ;
        LocalPopChoice(n_14);
      }
    else
      {
        t = m_14;
        t = term_h_14;
      }
    r_12 = t;
    t = term_h_14;
    u_12 = t;
    t = (ATerm) ATmakeAppl(sym__2, r_12, term_h_14);
    t = c_8(r_12, u_12, t);
    s_12 = t;
    t = SSL_int_to_string(s_12);
    q_12 = t;
    t = (ATerm) ATinsert(ATinsert(ATempty, q_12), term_l_14);
  }
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm u_105 (ATerm), ATerm v_105 (ATerm), ATerm t)
{
  t = write_to_0_0(t);
  t = xtc_transform_file_2_0(u_105, v_105, t);
  t = read_from_0_0(t);
  return(t);
}
ATerm d_8 (ATerm q_44, ATerm r_44, ATerm t)
{
  t = SSL_execvp(q_44, r_44);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm b_14 = NULL,c_14 = NULL,d_14 = NULL,e_14 = NULL;
  b_14 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      c_14 = ATgetArgument(t, 0);
      {
        ATerm o_7 = NULL,p_7 = NULL;
        t = SSL_int_to_string(c_14);
        o_7 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_q_14), o_7), term_o_14);
        p_7 = t;
        t = SSL_concat_strings(p_7);
      }
    }
  else
    {
      ATerm i_9 = NULL,n_9 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          c_14 = ATgetArgument(t, 0);
          d_14 = ATgetArgument(t, 1);
          e_14 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(d_14);
      i_9 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, e_14), term_v_14), i_9), term_r_14), c_14);
      n_9 = t;
      t = SSL_concat_strings(n_9);
    }
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm k_14 = NULL;
  k_14 = t;
  {
    ATerm w_14 = t;
    int x_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_1 (ATerm t)
        {
          if(match_cons(t, sym_Signal_3))
            {
              ATerm y_14 = ATgetArgument(t, 0);
              if((k_14 != ATgetArgument(t, 1)))
                {
                  _fail(ATgetArgument(t, 1));
                }
              {
                ATerm z_14 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_d_21), term_w_20), term_o_20), term_i_20), term_c_20), term_y_19), term_u_19), term_j_19), term_f_19), term_b_19), term_s_18), term_o_18), term_j_18), term_e_18), term_x_17), term_t_17), term_p_17), term_k_17), term_d_17), term_w_16), term_q_16), term_k_16), term_d_16), term_v_15), term_q_15), term_l_15), term_h_15), term_c_15);
        t = fetch_elem_1_0(f_1, t);
        ;
        LocalPopChoice(x_14);
      }
    else
      {
        t = w_14;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, k_14);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm u_14 = NULL,d_15 = NULL;
  u_14 = t;
  {
    ATerm e_21 = t;
    int f_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm g_21 = ATgetArgument(t, 0);
            d_15 = ATgetArgument(t, 1);
            {
              ATerm h_21 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(f_21);
        {
          ATerm i_21 = t;
          int j_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm a_10 = NULL,c_10 = NULL,d_10 = NULL;
              t = d_15;
              {
                ATerm k_21 = t;
                if((PushChoice() == 0))
                  {
                    if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
                      _fail(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = k_21;
                  }
                t = signal_from_number_0_0(t);
                t = signal_to_descr_0_0(t);
                a_10 = t;
                t = term_m_21;
                c_10 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, a_10), term_n_21);
                d_10 = t;
                t = SSL_printnl(c_10, d_10);
                t = (ATerm) ATmakeAppl(sym__2, term_m_21, (ATerm) ATinsert(ATinsert(ATempty, a_10), term_n_21));
              }
              ;
              LocalPopChoice(j_21);
            }
          else
            {
              t = i_21;
              t = u_14;
            }
        }
      }
    else
      {
        t = e_21;
        t = u_14;
      }
    t = u_14;
  }
  return(t);
}
ATerm fork_0_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_and_wait_1_0 (ATerm c_98 (ATerm), ATerm t)
{
  ATerm u_15 = NULL,x_15 = NULL;
  x_15 = t;
  t = fork_0_0(t);
  u_15 = t;
  {
    ATerm o_21 = t;
    int p_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = x_15;
        t = c_98(t);
        ;
        LocalPopChoice(p_21);
      }
    else
      {
        t = o_21;
        t = SSL_waitpid(u_15);
        t = warn_ifsignaled_0_0(t);
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm q_21 = ATgetArgument(t, 0);
            if(((ATgetType(q_21) != AT_INT) || (ATgetInt((ATermInt) q_21) != 0)))
              _fail(t);
            {
              ATerm r_21 = ATgetArgument(t, 1);
            }
            {
              ATerm s_21 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = x_15;
      }
  }
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm z_15 = NULL;
  ATerm i_1 (ATerm t)
  {
    ATerm e_16 = NULL,f_16 = NULL;
    e_16 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(z_15), e_16);
    t = j_9(not_null(z_15), e_16, t);
    f_16 = t;
    t = (ATerm) ATmakeAppl(sym__2, e_16, f_16);
    return(t);
  }
  if(((z_15 != NULL) && (z_15 != t)))
    _fail(t);
  else
    z_15 = t;
  t = SSL_table_keys(z_15);
  t = map_1_0(i_1, t);
  return(t);
}
ATerm if_verbose5_1_0 (ATerm v_97 (ATerm), ATerm t)
{
  ATerm i_16 = NULL;
  i_16 = t;
  {
    ATerm u_21 = t;
    int v_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_16 = NULL;
        t = term_l_14;
        t = get_config_0_0(t);
        n_16 = t;
        t = (ATerm) ATmakeAppl(sym__2, n_16, term_g_20);
        t = geq_0_0(t);
        t = i_16;
        t = v_97(t);
        ;
        LocalPopChoice(v_21);
      }
    else
      {
        t = u_21;
        t = i_16;
      }
  }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm u_97 (ATerm), ATerm t)
{
  ATerm s_16 = NULL;
  s_16 = t;
  {
    ATerm w_21 = t;
    int y_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_16 = NULL;
        t = term_l_14;
        t = get_config_0_0(t);
        z_16 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_16, term_n_17);
        t = geq_0_0(t);
        t = s_16;
        t = u_97(t);
        ;
        LocalPopChoice(y_21);
      }
    else
      {
        t = w_21;
        t = s_16;
      }
  }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm w_97 (ATerm), ATerm t)
{
  ATerm c_17 = NULL;
  c_17 = t;
  {
    ATerm z_21 = t;
    int a_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_17 = NULL;
        t = term_l_14;
        t = get_config_0_0(t);
        e_17 = t;
        t = (ATerm) ATmakeAppl(sym__2, e_17, term_o_15);
        t = geq_0_0(t);
        t = c_17;
        t = w_97(t);
        ;
        LocalPopChoice(a_22);
      }
    else
      {
        t = z_21;
        t = c_17;
      }
  }
  return(t);
}
ATerm g_8 (ATerm o_87 (ATerm), ATerm j_26, ATerm i_26, ATerm t)
{
  ATerm h_18 (ATerm t)
  {
    ATerm z_17 = NULL,a_18 = NULL,d_18 = NULL;
    z_17 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = i_26;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            a_18 = ATgetFirst((ATermList) t);
            d_18 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm c_22 = t;
          int e_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = z_17;
              {
                ATerm j_1 (ATerm t)
                {
                  t = i_26;
                  return(t);
                }
                t = r_8(o_87, j_1, a_18, d_18, t);
                t = h_18(t);
              }
              ;
              LocalPopChoice(e_22);
            }
          else
            {
              t = c_22;
              {
                ATerm o_10 = NULL,u_10 = NULL,z_3 = NULL;
                t = SSLgetAnnotations(z_17);
                o_10 = t;
                t = d_18;
                t = h_18(t);
                u_10 = t;
                t = (ATerm) ATinsert(CheckATermList(u_10), a_18);
                z_3 = t;
                t = SSLsetAnnotations(z_3, o_10);
              }
            }
        }
      }
    return(t);
  }
  t = j_26;
  t = h_18(t);
  return(t);
}
ATerm k_1 (ATerm t)
{
  ATerm q_19 = NULL;
  if(match_cons(t, sym__2))
    {
      q_19 = ATgetArgument(t, 0);
      if((q_19 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm h_8 (ATerm j_49, ATerm k_49, ATerm l_49, ATerm t)
{
  ATerm u_18 = NULL,v_18 = NULL,y_18 = NULL;
  u_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_49, k_49);
  {
    ATerm f_22 = t;
    int g_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm h_22 = ATgetArgument(t, 0);
            ATerm i_22 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, j_49, k_49);
        t = j_9(j_49, k_49, t);
        ;
        LocalPopChoice(g_22);
      }
    else
      {
        t = f_22;
        t = (ATerm) ATempty;
      }
    y_18 = t;
    t = (ATerm) ATmakeAppl(sym__2, y_18, l_49);
    t = g_8(k_1, y_18, l_49, t);
    v_18 = t;
    t = SSL_table_put(j_49, k_49, v_18);
    t = u_18;
  }
  return(t);
}
ATerm i_8 (ATerm z_101 (ATerm), ATerm t_49, ATerm s_49, ATerm t)
{
  ATerm m_1 (ATerm t)
  {
    ATerm r_19 = NULL,s_19 = NULL;
    if(match_cons(t, sym__2))
      {
        r_19 = ATgetArgument(t, 0);
        s_19 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, t_49, r_19, s_19);
    t = z_101(t);
    return(t);
  }
  t = s_49;
  t = map_1_0(m_1, t);
  return(t);
}
ATerm r_20 (ATerm d_20, ATerm t)
{
  t = SSL_fclose(d_20);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm l_20 = NULL,p_20 = NULL;
  p_20 = t;
  if(match_cons(t, sym_Stream_1))
    {
      l_20 = ATgetArgument(t, 0);
      {
        ATerm j_22 = t;
        int o_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(l_20);
            ;
            LocalPopChoice(o_22);
          }
        else
          {
            t = j_22;
            t = r_20(p_20, t);
          }
      }
    }
  else
    {
      t = r_20(p_20, t);
    }
  return(t);
}
ATerm j_8 (ATerm d_43, ATerm t)
{
  t = SSL_read_term_from_stream(d_43);
  return(t);
}
ATerm k_8 (ATerm p_39, ATerm q_39, ATerm t)
{
  ATerm t_20 = NULL;
  t = SSL_fopen(p_39, q_39);
  t_20 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, t_20);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm v_20 = NULL;
  t = SSL_stdin_stream();
  v_20 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, v_20);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm x_20 = NULL;
  t = SSL_stdout_stream();
  x_20 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, x_20);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm l_21 = NULL;
  t = SSL_stderr_stream();
  l_21 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, l_21);
  return(t);
}
ATerm x_23 (ATerm t_21, ATerm t)
{
  ATerm x_21 = NULL;
  t = SSL_explode_term(t_21);
  if(match_cons(t, sym__2))
    {
      ATerm p_22 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) p_22) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm q_22 = ATgetArgument(t, 1);
        if(((ATgetType(q_22) == AT_LIST) && !(ATisEmpty(q_22))))
          {
            x_21 = ATgetFirst((ATermList) q_22);
            {
              ATerm r_22 = (ATerm) ATgetNext((ATermList) q_22);
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
ATerm b_24 (ATerm b_22, ATerm d_22, ATerm k_22, ATerm t)
{
  ATerm l_22 = NULL,m_22 = NULL,n_22 = NULL,s_22 = NULL,c_4 = NULL;
  t = SSLgetAnnotations(k_22);
  n_22 = t;
  t = b_22;
  if(match_cons(t, sym_Path_1))
    {
      s_22 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, s_22, d_22);
  c_4 = t;
  t = SSLsetAnnotations(c_4, n_22);
  if(match_cons(t, sym__2))
    {
      l_22 = ATgetArgument(t, 0);
      m_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_8(l_22, m_22, t);
  return(t);
}
ATerm f_24 (ATerm x_22, ATerm a_23, ATerm b_23, ATerm t)
{
  ATerm c_23 = NULL,d_23 = NULL,e_23 = NULL,j_23 = NULL,e_4 = NULL;
  t = SSLgetAnnotations(b_23);
  e_23 = t;
  t = SSL_is_string(x_22);
  j_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_23, a_23);
  e_4 = t;
  t = SSLsetAnnotations(e_4, e_23);
  if(match_cons(t, sym__2))
    {
      c_23 = ATgetArgument(t, 0);
      d_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_8(c_23, d_23, t);
  return(t);
}
ATerm l_8 (ATerm t)
{
  ATerm t_23 = NULL,v_23 = NULL,w_23 = NULL;
  t_23 = t;
  if(match_cons(t, sym__2))
    {
      v_23 = ATgetArgument(t, 0);
      w_23 = ATgetArgument(t, 1);
      {
        ATerm t_22 = t;
        int u_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = x_23(t_23, t);
            ;
            LocalPopChoice(u_22);
          }
        else
          {
            t = t_22;
            {
              ATerm v_22 = t;
              int w_22 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = b_24(v_23, w_23, t_23, t);
                  ;
                  LocalPopChoice(w_22);
                }
              else
                {
                  t = v_22;
                  t = f_24(v_23, w_23, t_23, t);
                }
            }
          }
      }
    }
  else
    {
      t = x_23(t_23, t);
    }
  return(t);
}
ATerm n_1 (ATerm t)
{
  t = term_y_22;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm h_24 = NULL,i_24 = NULL,j_24 = NULL;
  ATerm z_22 = t;
  int f_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_24 = NULL;
      p_24 = t;
      t = (ATerm) ATmakeAppl(sym__2, p_24, term_g_23);
      t = l_8(t);
      ;
      LocalPopChoice(f_23);
    }
  else
    {
      t = z_22;
      t = debug_1_0(n_1, t);
      _fail(t);
    }
  i_24 = t;
  if(match_cons(t, sym_Stream_1))
    {
      j_24 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = j_8(j_24, t);
  h_24 = t;
  t = i_24;
  t = fclose_0_0(t);
  t = h_24;
  return(t);
}
ATerm r_1 (ATerm t)
{
  t = term_h_23;
  return(t);
}
ATerm s_1 (ATerm t)
{
  t = term_i_23;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm k_23 = t;
  int l_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_24 = NULL,u_24 = NULL;
      t_24 = t;
      t = (ATerm) ATinsert(ATempty, term_m_23);
      u_24 = t;
      t = (ATerm) ATmakeAppl(sym__2, t_24, (ATerm) ATinsert(ATempty, term_m_23));
      t = o_8(t_24, u_24, t);
      LocalPopChoice(l_23);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = k_23;
      {
        ATerm n_23 = t;
        int o_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_23 = t;
            if((PushChoice() == 0))
              {
                ATerm v_24 = NULL,w_24 = NULL;
                v_24 = t;
                t = (ATerm) ATinsert(ATempty, term_y_13);
                w_24 = t;
                t = (ATerm) ATmakeAppl(sym__2, v_24, (ATerm) ATinsert(ATempty, term_y_13));
                t = o_8(v_24, w_24, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = p_23;
              }
            t = debug_1_0(r_1, t);
            ;
            LocalPopChoice(o_23);
          }
        else
          {
            t = n_23;
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
  t = term_q_23;
  return(t);
}
ATerm z_1 (ATerm t)
{
  t = debug_1_0(f_2, t);
  return(t);
}
ATerm f_2 (ATerm t)
{
  t = term_r_23;
  return(t);
}
ATerm g_2 (ATerm t)
{
  ATerm l_25 = NULL,n_25 = NULL,o_25 = NULL;
  l_25 = t;
  t = term_m_21;
  n_25 = t;
  t = (ATerm) ATinsert(ATempty, term_s_23);
  o_25 = t;
  t = SSL_printnl(n_25, o_25);
  t = l_25;
  return(t);
}
ATerm i_2 (ATerm t)
{
  ATerm p_25 = NULL,q_25 = NULL,s_25 = NULL;
  if(match_cons(t, sym__3))
    {
      p_25 = ATgetArgument(t, 0);
      q_25 = ATgetArgument(t, 1);
      s_25 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = h_8(p_25, q_25, s_25, t);
  return(t);
}
ATerm j_2 (ATerm t)
{
  ATerm v_25 = NULL,w_25 = NULL,x_25 = NULL;
  v_25 = t;
  t = term_m_21;
  w_25 = t;
  t = (ATerm) ATinsert(ATempty, term_u_23);
  x_25 = t;
  t = SSL_printnl(w_25, x_25);
  t = v_25;
  return(t);
}
ATerm k_2 (ATerm t)
{
  ATerm y_25 = NULL,z_25 = NULL,a_26 = NULL;
  y_25 = t;
  t = term_m_21;
  z_25 = t;
  t = (ATerm) ATinsert(ATempty, term_s_23);
  a_26 = t;
  t = SSL_printnl(z_25, a_26);
  t = y_25;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm z_24 = NULL,a_25 = NULL,b_25 = NULL,c_25 = NULL,d_25 = NULL,e_25 = NULL,f_25 = NULL,g_25 = NULL,h_25 = NULL,i_25 = NULL;
  z_24 = t;
  t = if_verbose5_1_0(x_1, t);
  {
    ATerm y_23 = t;
    if((PushChoice() == 0))
      {
        ATerm j_25 = NULL,k_25 = NULL;
        t = term_z_23;
        j_25 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, z_24);
        k_25 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_z_23, (ATerm) ATmakeAppl(sym_Imported_1, z_24));
        t = j_9(j_25, k_25, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = y_23;
      }
    b_25 = t;
    t = term_z_23;
    g_25 = t;
    t = term_a_24;
    h_25 = t;
    t = (ATerm) ATinsert(ATempty, z_24);
    i_25 = t;
    t = SSL_table_put(g_25, h_25, i_25);
    t = b_25;
    t = if_verbose4_1_0(z_1, t);
    t = read_repository_file_0_0(t);
    t = if_verbose6_1_0(g_2, t);
    a_25 = t;
    t = term_z_23;
    f_25 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_z_23, a_25);
    t = i_8(i_2, f_25, a_25, t);
    t = if_verbose6_1_0(j_2, t);
    t = term_z_23;
    c_25 = t;
    t = (ATerm) ATmakeAppl(sym_Imported_1, z_24);
    d_25 = t;
    t = (ATerm) ATempty;
    e_25 = t;
    t = SSL_table_put(c_25, d_25, e_25);
    t = (ATerm) ATmakeAppl(sym__3, term_z_23, (ATerm)ATmakeAppl(sym_Imported_1, z_24), (ATerm) ATempty);
    t = if_verbose4_1_0(k_2, t);
  }
  return(t);
}
ATerm repeat_1_0 (ATerm v_76 (ATerm), ATerm t)
{
  ATerm l_26 (ATerm t)
  {
    ATerm c_24 = t;
    int d_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_76(t);
        t = l_26(t);
        ;
        LocalPopChoice(d_24);
      }
    else
      {
        t = c_24;
      }
    return(t);
  }
  t = l_26(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm e_24 = t;
  int g_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_k_24;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(g_24);
    }
  else
    {
      t = e_24;
      {
        ATerm l_24 = t;
        int m_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_26 = NULL;
            t = term_n_24;
            r_26 = t;
            t = SSL_getenv(r_26);
            ;
            LocalPopChoice(m_24);
          }
        else
          {
            t = l_24;
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
  t = term_o_24;
  return(t);
}
ATerm n_2 (ATerm t)
{
  ATerm c_27 = NULL,d_27 = NULL;
  t = term_z_23;
  c_27 = t;
  t = term_q_24;
  d_27 = t;
  t = term_r_24;
  t = j_9(c_27, d_27, t);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm s_24 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = s_24;
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
  t = term_x_24;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm s_26 = NULL;
  t = if_verbose5_1_0(l_2, t);
  s_26 = t;
  {
    ATerm y_24 = t;
    int m_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_26 = NULL,w_26 = NULL;
        t = term_z_23;
        u_26 = t;
        t = term_a_24;
        w_26 = t;
        t = term_r_25;
        t = j_9(u_26, w_26, t);
        ;
        LocalPopChoice(m_25);
      }
    else
      {
        t = y_24;
        {
          ATerm x_26 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          x_26 = t;
          t = repeat_1_0(n_2, t);
          t = x_26;
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
  t = term_t_25;
  return(t);
}
ATerm m_28 (ATerm o_27, ATerm t)
{
  ATerm r_27 = NULL,s_27 = NULL,t_27 = NULL;
  t = term_z_23;
  s_27 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, o_27);
  t_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_23, (ATerm) ATmakeAppl(sym_Tool_1, o_27));
  t = j_9(s_27, t_27, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm u_25 = ATgetFirst((ATermList) t);
      if(match_cons(u_25, sym__2))
        {
          ATerm c_26 = ATgetArgument(u_25, 0);
          r_27 = ATgetArgument(u_25, 1);
        }
      else
        _fail(t);
      {
        ATerm b_26 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = r_27;
  return(t);
}
ATerm f_3 (ATerm t)
{
  t = debug_1_0(g_3, t);
  return(t);
}
ATerm g_3 (ATerm t)
{
  t = term_t_25;
  return(t);
}
ATerm h_3 (ATerm t)
{
  t = term_z_23;
  t = table_getlist_0_0(t);
  t = debug_1_0(i_3, t);
  return(t);
}
ATerm i_3 (ATerm t)
{
  t = term_d_26;
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm e_26 = t;
  int f_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_27 = NULL,v_27 = NULL,y_27 = NULL;
      t = if_verbose5_1_0(r_2, t);
      t = xtc_load_0_0(t);
      y_27 = t;
      if(match_cons(t, sym__2))
        {
          u_27 = ATgetArgument(t, 0);
          v_27 = ATgetArgument(t, 1);
          {
            ATerm k_26 = t;
            int o_26 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm c_28 = NULL,d_28 = NULL,e_28 = NULL;
                t = term_z_23;
                d_28 = t;
                t = (ATerm) ATmakeAppl(sym_Tool_1, u_27);
                e_28 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_z_23, (ATerm) ATmakeAppl(sym_Tool_1, u_27));
                t = j_9(d_28, e_28, t);
                {
                  ATerm e_3 (ATerm t)
                  {
                    if(match_cons(t, sym__2))
                      {
                        if((v_27 != ATgetArgument(t, 0)))
                          {
                            _fail(ATgetArgument(t, 0));
                          }
                        if(((c_28 != NULL) && (c_28 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          c_28 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = fetch_1_0(e_3, t);
                  t = not_null(c_28);
                }
                ;
                LocalPopChoice(o_26);
              }
            else
              {
                t = k_26;
                t = m_28(y_27, t);
              }
          }
        }
      else
        {
          t = m_28(y_27, t);
        }
      t = if_verbose5_1_0(f_3, t);
      ;
      LocalPopChoice(f_26);
    }
  else
    {
      t = e_26;
      {
        ATerm l_28 = NULL,w_11 = NULL,y_11 = NULL;
        l_28 = t;
        t = term_m_21;
        w_11 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_q_26), l_28), term_p_26);
        y_11 = t;
        t = SSL_printnl(w_11, y_11);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_q_26), l_28), term_p_26);
        t = if_verbose5_1_0(h_3, t);
        _fail(t);
      }
    }
  return(t);
}
ATerm xtc_command_1_0 (ATerm l_105 (ATerm), ATerm t)
{
  ATerm p_28 = NULL,s_28 = NULL;
  s_28 = t;
  t = l_105(t);
  t = xtc_find_0_0(t);
  p_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_28, s_28);
  {
    ATerm j_3 (ATerm t)
    {
      ATerm t_28 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, p_28, s_28);
      t = d_8(p_28, s_28, t);
      t = term_t_26;
      t_28 = t;
      t = SSL_exit(t_28);
      return(t);
    }
    t = fork_and_wait_1_0(j_3, t);
    t = s_28;
  }
  return(t);
}
ATerm m_8 (ATerm o_94 (ATerm), ATerm b_38, ATerm z_37, ATerm t)
{
  ATerm u_28 = NULL,v_28 = NULL,y_28 = NULL,z_28 = NULL,a_29 = NULL,b_29 = NULL;
  z_28 = t;
  t = o_94(t);
  u_28 = t;
  t = (ATerm) ATmakeAppl(sym__3, u_28, b_38, z_37);
  t = k_9(u_28, b_38, z_37, t);
  {
    ATerm v_26 = t;
    int y_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_29 = NULL;
        t = term_z_26;
        d_29 = t;
        t = (ATerm) ATmakeAppl(sym__2, u_28, term_z_26);
        t = j_9(u_28, d_29, t);
        ;
        LocalPopChoice(y_26);
      }
    else
      {
        t = v_26;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        v_28 = ATgetFirst((ATermList) t);
        y_28 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_z_26;
    a_29 = t;
    t = (ATerm) ATinsert(CheckATermList(y_28), (ATerm) ATinsert(CheckATermList(v_28), b_38));
    b_29 = t;
    t = SSL_table_put(u_28, a_29, b_29);
    t = z_28;
  }
  return(t);
}
ATerm r_29 (ATerm h_29, ATerm t)
{
  t = h_29;
  {
    ATerm a_27 = t;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm b_27 = ATgetArgument(t, 0);
            ATerm e_27 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = a_27;
      }
    t = term_f_27;
    t = debug_1_0(l_3, t);
    t = (ATerm) ATmakeAppl(sym__2, h_29, term_b_12);
    t = open_file_0_0(t);
  }
  return(t);
}
ATerm s_29 (ATerm j_29, ATerm k_29, ATerm l_29, ATerm t)
{
  t = SSL_open_file(j_29, k_29);
  return(t);
}
ATerm l_3 (ATerm t)
{
  t = term_g_27;
  return(t);
}
ATerm open_file_0_0 (ATerm t)
{
  ATerm o_29 = NULL,p_29 = NULL,q_29 = NULL;
  o_29 = t;
  if(match_cons(t, sym__2))
    {
      p_29 = ATgetArgument(t, 0);
      q_29 = ATgetArgument(t, 1);
      {
        ATerm h_27 = t;
        int i_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = r_29(o_29, t);
            ;
            LocalPopChoice(i_27);
          }
        else
          {
            t = h_27;
            t = s_29(p_29, q_29, o_29, t);
          }
      }
    }
  else
    {
      t = r_29(o_29, t);
    }
  return(t);
}
ATerm n_8 (ATerm c_34, ATerm d_34, ATerm t)
{
  t = SSL_strcat(c_34, d_34);
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm new_file_0_0 (ATerm t)
{
  ATerm u_29 = NULL,v_29 = NULL,w_29 = NULL;
  t = term_j_27;
  t = new_0_0(t);
  u_29 = t;
  t = term_k_27;
  v_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_29, term_k_27);
  t = n_8(u_29, v_29, t);
  w_29 = t;
  {
    ATerm l_27 = t;
    int m_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_29 = NULL;
        t = (ATerm) ATinsert(ATempty, term_y_13);
        y_29 = t;
        t = (ATerm) ATmakeAppl(sym__2, w_29, (ATerm) ATinsert(ATempty, term_y_13));
        t = o_8(w_29, y_29, t);
        t = new_file_0_0(t);
        ;
        LocalPopChoice(m_27);
      }
    else
      {
        t = l_27;
        t = w_29;
      }
  }
  return(t);
}
ATerm m_3 (ATerm t)
{
  t = term_n_27;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm b_30 = NULL,c_30 = NULL;
  t = new_file_0_0(t);
  b_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_30, term_b_12);
  t = open_file_0_0(t);
  t = term_j_27;
  c_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_30, term_j_27);
  t = m_8(m_3, b_30, c_30, t);
  t = b_30;
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm m_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm o_30 = NULL,p_30 = NULL;
  o_30 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm c_12 = NULL,d_12 = NULL;
      t = o_30;
      t = xtc_new_file_0_0(t);
      c_12 = t;
      t = n_0(t);
      d_12 = t;
      t = (ATerm) ATmakeAppl(sym__2, d_12, (ATerm) ATinsert(ATinsert(ATempty, c_12), term_p_11));
      t = conc_0_0(t);
      t = xtc_command_1_0(m_0, t);
      t = SSL_close_file(c_12);
      t = (ATerm) ATmakeAppl(sym_FILE_1, c_12);
    }
  else
    {
      ATerm k_12 = NULL,m_12 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          p_30 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = p_30;
      t = xtc_new_file_0_0(t);
      k_12 = t;
      t = n_0(t);
      m_12 = t;
      t = (ATerm) ATmakeAppl(sym__2, m_12, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, k_12), term_p_11), p_30), term_p_27));
      t = conc_0_0(t);
      t = xtc_command_1_0(m_0, t);
      t = SSL_close_file(k_12);
      t = (ATerm) ATmakeAppl(sym_FILE_1, k_12);
    }
  return(t);
}
ATerm d_33 (ATerm j_31, ATerm k_31, ATerm n_31, ATerm t)
{
  ATerm o_31 = NULL,r_31 = NULL,v_12 = NULL,w_12 = NULL,i_4 = NULL;
  t = SSLgetAnnotations(n_31);
  o_31 = t;
  t = j_31;
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
    r_31 = t;
    t = (ATerm) ATmakeAppl(sym__2, r_31, k_31);
    i_4 = t;
    t = SSLsetAnnotations(i_4, o_31);
    w_12 = t;
    t = SSL_explode_term(w_12);
    if(match_cons(t, sym__2))
      {
        ATerm w_27 = ATgetArgument(t, 0);
        if((ATgetSymbol((ATermAppl) w_27) != ATmakeSymbol("", 0, ATtrue)))
          _fail(t);
        {
          ATerm x_27 = ATgetArgument(t, 1);
          if(((ATgetType(x_27) == AT_LIST) && !(ATisEmpty(x_27))))
            {
              ATerm z_27 = ATgetFirst((ATermList) x_27);
              ATerm a_28 = (ATerm) ATgetNext((ATermList) x_27);
              if(((ATgetType(a_28) == AT_LIST) && !(ATisEmpty(a_28))))
                {
                  v_12 = ATgetFirst((ATermList) a_28);
                  {
                    ATerm b_28 = (ATerm) ATgetNext((ATermList) a_28);
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
    t = v_12;
    {
      ATerm f_28 = t;
      int g_28 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm h_28 = t;
          int i_28 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm a_32 = NULL;
              if(match_cons(t, sym_FILE_1))
                {
                  a_32 = ATgetArgument(t, 0);
                  {
                    ATerm z_12 = NULL,j_4 = NULL;
                    t = SSLgetAnnotations(v_12);
                    z_12 = t;
                    t = (ATerm) ATmakeAppl(sym_FILE_1, a_32);
                    j_4 = t;
                    t = SSLsetAnnotations(j_4, z_12);
                  }
                }
              else
                {
                  if(!(match_cons(t, sym_stdin_0)))
                    _fail(t);
                  t = v_12;
                }
              LocalPopChoice(i_28);
              t = xtc_transform_file_2_0(p_3, q_3, t);
            }
          else
            {
              t = h_28;
              t = xtc_transform_term_2_0(r_3, t_3, t);
            }
          t = read_from_0_0(t);
          ;
          LocalPopChoice(g_28);
        }
      else
        {
          t = f_28;
          {
            ATerm o_32 = NULL,p_32 = NULL,q_32 = NULL;
            t = term_m_21;
            p_32 = t;
            t = (ATerm) ATinsert(ATinsert(ATempty, k_31), term_j_28);
            q_32 = t;
            t = SSL_printnl(p_32, q_32);
            t = term_h_14;
            o_32 = t;
            t = SSL_exit(o_32);
            t = (ATerm) ATinsert(ATinsert(ATempty, k_31), term_j_28);
          }
        }
    }
  }
  return(t);
}
ATerm e_33 (ATerm u_32, ATerm v_32, ATerm t)
{
  ATerm h_13 = NULL;
  t = SSL_explode_term(v_32);
  if(match_cons(t, sym__2))
    {
      ATerm k_28 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) k_28) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm n_28 = ATgetArgument(t, 1);
        if(((ATgetType(n_28) == AT_LIST) && !(ATisEmpty(n_28))))
          {
            ATerm o_28 = ATgetFirst((ATermList) n_28);
            ATerm q_28 = (ATerm) ATgetNext((ATermList) n_28);
            if(((ATgetType(q_28) == AT_LIST) && !(ATisEmpty(q_28))))
              {
                h_13 = ATgetFirst((ATermList) q_28);
                {
                  ATerm r_28 = (ATerm) ATgetNext((ATermList) q_28);
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
  t = h_13;
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
          ATerm x_32 = NULL,y_32 = NULL,z_32 = NULL;
          t = term_m_21;
          y_32 = t;
          t = (ATerm) ATinsert(ATinsert(ATempty, u_32), term_j_28);
          z_32 = t;
          t = SSL_printnl(y_32, z_32);
          t = term_h_14;
          x_32 = t;
          t = SSL_exit(x_32);
          t = (ATerm) ATinsert(ATinsert(ATempty, u_32), term_j_28);
        }
      }
  }
  return(t);
}
ATerm p_3 (ATerm t)
{
  t = term_c_29;
  return(t);
}
ATerm q_3 (ATerm t)
{
  ATerm e_32 = NULL,f_32 = NULL,g_32 = NULL,h_32 = NULL,i_32 = NULL;
  i_32 = t;
  t = pass_verbose_0_0(t);
  e_32 = t;
  t = i_32;
  t = pass_keep_0_0(t);
  f_32 = t;
  t = term_e_29;
  {
    ATerm f_29 = t;
    int g_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        LocalPopChoice(g_29);
        t = (ATerm) ATinsert(ATempty, term_e_29);
      }
    else
      {
        t = f_29;
        t = (ATerm) ATempty;
      }
    g_32 = t;
    t = term_i_29;
    t = get_config_0_0(t);
    h_32 = t;
    t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, h_32), f_32), e_32), g_32);
    t = concat_0_0(t);
  }
  return(t);
}
ATerm r_3 (ATerm t)
{
  t = term_c_29;
  return(t);
}
ATerm t_3 (ATerm t)
{
  ATerm j_32 = NULL,k_32 = NULL,l_32 = NULL,m_32 = NULL,n_32 = NULL;
  n_32 = t;
  t = pass_verbose_0_0(t);
  j_32 = t;
  t = n_32;
  t = pass_keep_0_0(t);
  k_32 = t;
  t = term_e_29;
  {
    ATerm m_29 = t;
    int n_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        LocalPopChoice(n_29);
        t = (ATerm) ATinsert(ATempty, term_e_29);
      }
    else
      {
        t = m_29;
        t = (ATerm) ATempty;
      }
    l_32 = t;
    t = term_i_29;
    t = get_config_0_0(t);
    m_32 = t;
    t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, m_32), k_32), j_32), l_32);
    t = concat_0_0(t);
  }
  return(t);
}
ATerm parse_module_0_0 (ATerm t)
{
  ATerm a_33 = NULL,b_33 = NULL,c_33 = NULL;
  a_33 = t;
  if(match_cons(t, sym__2))
    {
      b_33 = ATgetArgument(t, 0);
      c_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_33;
  if(match_string(t, "rtree"))
    {
      ATerm t_29 = t;
      int x_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = d_33(b_33, c_33, a_33, t);
          ;
          LocalPopChoice(x_29);
        }
      else
        {
          t = t_29;
          t = e_33(c_33, a_33, t);
        }
    }
  else
    {
      t = d_33(b_33, c_33, a_33, t);
    }
  return(t);
}
ATerm debug_1_0 (ATerm f_96 (ATerm), ATerm t)
{
  ATerm g_33 = NULL,h_33 = NULL,i_33 = NULL,j_33 = NULL;
  g_33 = t;
  t = f_96(t);
  h_33 = t;
  t = term_m_21;
  i_33 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, g_33), h_33);
  j_33 = t;
  t = SSL_printnl(i_33, j_33);
  t = g_33;
  return(t);
}
ATerm if_verbose3_1_0 (ATerm t_97 (ATerm), ATerm t)
{
  ATerm l_33 = NULL;
  l_33 = t;
  {
    ATerm z_29 = t;
    int a_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_33 = NULL;
        t = term_l_14;
        t = get_config_0_0(t);
        n_33 = t;
        t = (ATerm) ATmakeAppl(sym__2, n_33, term_j_15);
        t = geq_0_0(t);
        t = l_33;
        t = t_97(t);
        ;
        LocalPopChoice(a_30);
      }
    else
      {
        t = z_29;
        t = l_33;
      }
  }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm w_83 (ATerm), ATerm t)
{
  ATerm p_33 = NULL;
  ATerm v_3 (ATerm t)
  {
    t = w_83(t);
    if(((p_33 != NULL) && (p_33 != t)))
      _fail(t);
    else
      p_33 = t;
    return(t);
  }
  t = fetch_1_0(v_3, t);
  t = not_null(p_33);
  return(t);
}
ATerm o_8 (ATerm h_39, ATerm i_39, ATerm t)
{
  t = SSL_access(h_39, i_39);
  return(t);
}
ATerm p_8 (ATerm y_75 (ATerm), ATerm n_19, ATerm m_19, ATerm t)
{
  t = y_75(t);
  {
    ATerm d_30 = t;
    int e_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_3 (ATerm t)
        {
          ATerm q_33 = NULL;
          ATerm y_3 (ATerm t)
          {
            ATerm r_33 = NULL,s_33 = NULL,t_33 = NULL,u_33 = NULL,v_33 = NULL;
            s_33 = t;
            t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, s_33), term_z_11), n_19), term_f_30), not_null(q_33));
            v_33 = t;
            t = SSL_concat_strings(v_33);
            t_33 = t;
            t = (ATerm) ATinsert(ATempty, term_y_13);
            u_33 = t;
            t = (ATerm) ATmakeAppl(sym__2, t_33, (ATerm) ATinsert(ATempty, term_y_13));
            t = o_8(t_33, u_33, t);
            r_33 = t;
            t = (ATerm) ATmakeAppl(sym__2, s_33, (ATerm) ATmakeAppl(sym_FILE_1, r_33));
            return(t);
          }
          if(((q_33 != NULL) && (q_33 != t)))
            _fail(t);
          else
            q_33 = t;
          t = m_19;
          t = fetch_elem_1_0(y_3, t);
          return(t);
        }
        t = fetch_elem_1_0(x_3, t);
        ;
        LocalPopChoice(e_30);
      }
    else
      {
        t = d_30;
        {
          ATerm g_30 = t;
          int h_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm a_4 (ATerm t)
              {
                ATerm w_33 = NULL,x_33 = NULL,y_33 = NULL,z_33 = NULL,a_34 = NULL,b_34 = NULL;
                w_33 = t;
                t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, w_33), term_z_11), n_19);
                b_34 = t;
                t = SSL_concat_strings(b_34);
                x_33 = t;
                t = term_z_23;
                z_33 = t;
                t = (ATerm) ATmakeAppl(sym_Tool_1, x_33);
                a_34 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_z_23, (ATerm) ATmakeAppl(sym_Tool_1, x_33));
                t = j_9(z_33, a_34, t);
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    ATerm i_30 = ATgetFirst((ATermList) t);
                    if(match_cons(i_30, sym__2))
                      {
                        ATerm k_30 = ATgetArgument(i_30, 0);
                        y_33 = ATgetArgument(i_30, 1);
                      }
                    else
                      _fail(t);
                    {
                      ATerm j_30 = (ATerm) ATgetNext((ATermList) t);
                    }
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym__2, w_33, (ATerm) ATmakeAppl(sym_FILE_1, y_33));
                return(t);
              }
              t = m_19;
              t = fetch_elem_1_0(a_4, t);
              ;
              LocalPopChoice(h_30);
            }
          else
            {
              t = g_30;
              {
                ATerm l_30 = t;
                int m_30 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_n_30;
                    t = get_config_0_0(t);
                    LocalPopChoice(m_30);
                    {
                      ATerm e_34 = NULL,f_34 = NULL,g_34 = NULL,h_34 = NULL,i_34 = NULL;
                      e_34 = t;
                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_r_30), n_19), term_q_30);
                      i_34 = t;
                      t = SSL_concat_strings(i_34);
                      f_34 = t;
                      t = term_m_21;
                      g_34 = t;
                      t = (ATerm) ATinsert(ATempty, f_34);
                      h_34 = t;
                      t = SSL_printnl(g_34, h_34);
                      t = e_34;
                      _fail(t);
                    }
                  }
                else
                  {
                    t = l_30;
                    {
                      ATerm k_34 = NULL,l_34 = NULL,m_34 = NULL;
                      t = term_m_21;
                      l_34 = t;
                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_r_30), n_19), term_q_30);
                      m_34 = t;
                      t = SSL_printnl(l_34, m_34);
                      t = term_h_14;
                      k_34 = t;
                      t = SSL_exit(k_34);
                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_r_30), n_19), term_q_30);
                    }
                  }
              }
            }
        }
      }
  }
  return(t);
}
ATerm d_4 (ATerm t)
{
  t = term_s_30;
  return(t);
}
ATerm get_module_1_0 (ATerm x_75 (ATerm), ATerm t)
{
  ATerm p_34 = NULL,q_34 = NULL,r_34 = NULL,s_34 = NULL;
  t = basename_1_0(_id, t);
  r_34 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_g_23), term_v_30), term_u_30), term_t_30);
  s_34 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_34, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_g_23), term_v_30), term_u_30), term_t_30));
  t = p_8(x_75, r_34, s_34, t);
  if(match_cons(t, sym__2))
    {
      ATerm w_30 = ATgetArgument(t, 0);
      ATerm x_30 = ATgetArgument(t, 1);
      if(match_cons(x_30, sym_FILE_1))
        {
          p_34 = ATgetArgument(x_30, 0);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  {
    ATerm b_4 (ATerm t)
    {
      ATerm y_34 = NULL;
      y_34 = t;
      t = p_34;
      t = debug_1_0(d_4, t);
      t = y_34;
      return(t);
    }
    t = if_verbose3_1_0(b_4, t);
    t = parse_module_0_0(t);
    q_34 = t;
    t = (ATerm) ATmakeAppl(sym__2, p_34, q_34);
  }
  return(t);
}
ATerm r_8 (ATerm r_87 (ATerm), ATerm s_87 (ATerm), ATerm n_26, ATerm m_26, ATerm t)
{
  t = s_87(t);
  {
    ATerm f_4 (ATerm t)
    {
      ATerm z_34 = NULL;
      z_34 = t;
      t = (ATerm) ATmakeAppl(sym__2, n_26, z_34);
      t = r_87(t);
      return(t);
    }
    t = fetch_1_0(f_4, t);
    t = m_26;
  }
  return(t);
}
ATerm s_8 (ATerm j_87 (ATerm), ATerm h_26, ATerm g_26, ATerm t)
{
  ATerm r_35 (ATerm t)
  {
    ATerm m_35 = NULL,n_35 = NULL,o_35 = NULL;
    m_35 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = m_35;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            n_35 = ATgetFirst((ATermList) t);
            o_35 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm y_30 = t;
          int z_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = m_35;
              {
                ATerm g_4 (ATerm t)
                {
                  t = g_26;
                  return(t);
                }
                t = r_8(j_87, g_4, n_35, o_35, t);
                t = r_35(t);
              }
              ;
              LocalPopChoice(z_30);
            }
          else
            {
              t = y_30;
              {
                ATerm w_13 = NULL,a_14 = NULL,n_4 = NULL;
                t = SSLgetAnnotations(m_35);
                w_13 = t;
                t = o_35;
                t = r_35(t);
                a_14 = t;
                t = (ATerm) ATinsert(CheckATermList(a_14), n_35);
                n_4 = t;
                t = SSLsetAnnotations(n_4, w_13);
              }
            }
        }
      }
    return(t);
  }
  t = h_26;
  t = r_35(t);
  return(t);
}
ATerm k_4 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm a_31 = ATgetArgument(t, 0);
      if(((ATgetType(a_31) != AT_LIST) || !(ATisEmpty(a_31))))
        _fail(t);
      {
        ATerm b_31 = ATgetArgument(t, 1);
        if(((ATgetType(b_31) != AT_LIST) || !(ATisEmpty(b_31))))
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
  ATerm h_36 = NULL,i_36 = NULL,j_36 = NULL,k_36 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm c_31 = ATgetArgument(t, 0);
      if(((ATgetType(c_31) == AT_LIST) && !(ATisEmpty(c_31))))
        {
          h_36 = ATgetFirst((ATermList) c_31);
          i_36 = (ATerm) ATgetNext((ATermList) c_31);
        }
      else
        _fail(t);
      {
        ATerm d_31 = ATgetArgument(t, 1);
        if(((ATgetType(d_31) == AT_LIST) && !(ATisEmpty(d_31))))
          {
            j_36 = ATgetFirst((ATermList) d_31);
            k_36 = (ATerm) ATgetNext((ATermList) d_31);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, h_36, j_36), (ATerm) ATmakeAppl(sym__2, i_36, k_36));
  return(t);
}
ATerm m_4 (ATerm t)
{
  ATerm l_36 = NULL,m_36 = NULL;
  if(match_cons(t, sym__2))
    {
      l_36 = ATgetArgument(t, 0);
      m_36 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(m_36), l_36);
  return(t);
}
ATerm x_8 (ATerm e_569, ATerm j_569, ATerm y_52, ATerm t)
{
  ATerm w_35 = NULL,x_35 = NULL,y_35 = NULL,z_35 = NULL;
  t = SSL_explode_term(j_569);
  if(match_cons(t, sym__2))
    {
      w_35 = ATgetArgument(t, 0);
      y_35 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(e_569);
  if(match_cons(t, sym__2))
    {
      if((w_35 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      x_35 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, x_35, y_35);
  t = genzip_4_0(k_4, l_4, m_4, _id, t);
  z_35 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_35, y_52);
  t = conc_0_0(t);
  return(t);
}
ATerm o_4 (ATerm t)
{
  ATerm b_37 = NULL;
  b_37 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, b_37);
  return(t);
}
ATerm r_4 (ATerm t)
{
  ATerm c_37 = NULL,d_37 = NULL,e_37 = NULL,f_37 = NULL,p_4 = NULL;
  f_37 = t;
  if(match_cons(t, sym__2))
    {
      d_37 = ATgetArgument(t, 0);
      e_37 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_37);
  c_37 = t;
  t = e_37;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, d_37, e_37);
  p_4 = t;
  t = SSLsetAnnotations(p_4, c_37);
  return(t);
}
ATerm s_4 (ATerm t)
{
  ATerm j_38 = NULL,k_38 = NULL,l_38 = NULL,m_38 = NULL,n_38 = NULL;
  j_38 = t;
  if(match_cons(t, sym__2))
    {
      k_38 = ATgetArgument(t, 0);
      l_38 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_38;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_38 = ATgetFirst((ATermList) t);
      n_38 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm e_31 = t;
        int f_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = a_39(k_38, l_38, j_38, t);
            ;
            LocalPopChoice(f_31);
          }
        else
          {
            t = e_31;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(k_38), m_38), n_38);
          }
      }
    }
  else
    {
      t = a_39(k_38, l_38, j_38, t);
    }
  return(t);
}
ATerm a_39 (ATerm g_37, ATerm h_37, ATerm i_37, ATerm t)
{
  ATerm j_37 = NULL,m_37 = NULL,q_4 = NULL,p_37 = NULL,q_37 = NULL,r_37 = NULL,s_37 = NULL;
  t = SSLgetAnnotations(i_37);
  j_37 = t;
  t = h_37;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_37 = ATgetFirst((ATermList) t);
      s_37 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = p_37;
  if(match_cons(t, sym__2))
    {
      q_37 = ATgetArgument(t, 0);
      r_37 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm g_31 = t;
    int h_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_37;
        if((q_37 != t))
          {
            _fail(t);
          }
        t = s_37;
        ;
        LocalPopChoice(h_31);
      }
    else
      {
        t = g_31;
        t = h_37;
        t = x_8(q_37, r_37, s_37, t);
      }
    m_37 = t;
    t = (ATerm) ATmakeAppl(sym__2, g_37, m_37);
    q_4 = t;
    t = SSLsetAnnotations(q_4, j_37);
  }
  return(t);
}
ATerm u_4 (ATerm t)
{
  ATerm z_38 = NULL;
  if(match_cons(t, sym__2))
    {
      z_38 = ATgetArgument(t, 0);
      if((z_38 != ATgetArgument(t, 1)))
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
  ATerm i_31 = t;
  int l_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(o_4, r_4, s_4, t);
      ;
      LocalPopChoice(l_31);
    }
  else
    {
      t = i_31;
      {
        ATerm r_38 = NULL,s_38 = NULL,t_38 = NULL;
        r_38 = t;
        if(match_cons(t, sym__2))
          {
            s_38 = ATgetArgument(t, 0);
            t_38 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = r_38;
        t = s_8(u_4, s_38, t_38, t);
      }
    }
  return(t);
}
ATerm z_8 (ATerm t_106 (ATerm), ATerm u_106 (ATerm), ATerm v_106 (ATerm), ATerm p_55, ATerm m_55, ATerm t_55, ATerm q_55, ATerm n_55, ATerm o_55, ATerm t)
{
  ATerm b_39 = NULL,c_39 = NULL,d_39 = NULL,e_39 = NULL,f_39 = NULL,g_39 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, p_55, q_55);
  t = t_106(t);
  b_39 = t;
  t = u_106(t);
  c_39 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_39, t_55);
  t = diff_0_0(t);
  d_39 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_39, m_55);
  t = conc_0_0(t);
  e_39 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_39, t_55);
  t = conc_0_0(t);
  f_39 = t;
  t = (ATerm) ATmakeAppl(sym__3, p_55, b_39, n_55);
  t = v_106(t);
  g_39 = t;
  t = (ATerm) ATmakeAppl(sym__5, e_39, f_39, q_55, g_39, o_55);
  return(t);
}
ATerm GnNext_3_0 (ATerm t_106 (ATerm), ATerm u_106 (ATerm), ATerm v_106 (ATerm), ATerm t)
{
  ATerm k_39 = NULL,l_39 = NULL,m_39 = NULL,t_39 = NULL,u_39 = NULL,v_39 = NULL;
  if(match_cons(t, sym__5))
    {
      ATerm m_31 = ATgetArgument(t, 0);
      if(((ATgetType(m_31) == AT_LIST) && !(ATisEmpty(m_31))))
        {
          k_39 = ATgetFirst((ATermList) m_31);
          l_39 = (ATerm) ATgetNext((ATermList) m_31);
        }
      else
        _fail(t);
      m_39 = ATgetArgument(t, 1);
      t_39 = ATgetArgument(t, 2);
      u_39 = ATgetArgument(t, 3);
      v_39 = ATgetArgument(t, 4);
    }
  else
    _fail(t);
  t = z_8(t_106, u_106, v_106, k_39, l_39, m_39, t_39, u_39, v_39, t);
  return(t);
}
ATerm while_not_2_0 (ATerm k_77 (ATerm), ATerm l_77 (ATerm), ATerm t)
{
  ATerm w_39 (ATerm t)
  {
    ATerm p_31 = t;
    int q_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = k_77(t);
        ;
        LocalPopChoice(q_31);
      }
    else
      {
        t = p_31;
        t = l_77(t);
        t = w_39(t);
      }
    return(t);
  }
  t = w_39(t);
  return(t);
}
ATerm for_3_0 (ATerm n_77 (ATerm), ATerm o_77 (ATerm), ATerm p_77 (ATerm), ATerm t)
{
  t = n_77(t);
  t = while_not_2_0(o_77, p_77, t);
  return(t);
}
ATerm x_4 (ATerm t)
{
  ATerm f_40 = NULL,g_40 = NULL,h_40 = NULL;
  if(match_cons(t, sym__3))
    {
      f_40 = ATgetArgument(t, 0);
      g_40 = ATgetArgument(t, 1);
      h_40 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__5, f_40, f_40, g_40, h_40, (ATerm) ATempty);
  return(t);
}
ATerm b_5 (ATerm t)
{
  ATerm k_40 = NULL,l_40 = NULL;
  if(match_cons(t, sym__5))
    {
      ATerm s_31 = ATgetArgument(t, 0);
      if(((ATgetType(s_31) != AT_LIST) || !(ATisEmpty(s_31))))
        _fail(t);
      {
        ATerm t_31 = ATgetArgument(t, 1);
      }
      {
        ATerm u_31 = ATgetArgument(t, 2);
      }
      k_40 = ATgetArgument(t, 3);
      l_40 = ATgetArgument(t, 4);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, k_40, l_40);
  return(t);
}
ATerm graph_nodes_roots_3_0 (ATerm q_106 (ATerm), ATerm r_106 (ATerm), ATerm s_106 (ATerm), ATerm t)
{
  ATerm e_40 = NULL;
  ATerm c_5 (ATerm t)
  {
    ATerm v_31 = t;
    int w_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = GnNext_3_0(q_106, r_106, s_106, t);
        ;
        LocalPopChoice(w_31);
      }
    else
      {
        t = v_31;
        {
          ATerm r_40 = NULL,s_40 = NULL,t_40 = NULL,u_40 = NULL,v_40 = NULL,w_40 = NULL,x_40 = NULL;
          if(match_cons(t, sym__5))
            {
              r_40 = ATgetArgument(t, 0);
              u_40 = ATgetArgument(t, 1);
              v_40 = ATgetArgument(t, 2);
              w_40 = ATgetArgument(t, 3);
              x_40 = ATgetArgument(t, 4);
            }
          else
            _fail(t);
          t = r_40;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              s_40 = ATgetFirst((ATermList) t);
              t_40 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__5, t_40, u_40, v_40, w_40, (ATerm) ATinsert(CheckATermList(x_40), s_40));
        }
      }
    return(t);
  }
  t = for_3_0(x_4, b_5, c_5, t);
  if(match_cons(t, sym__2))
    {
      e_40 = ATgetArgument(t, 0);
      {
        ATerm x_31 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = e_40;
  return(t);
}
ATerm filter_1_0 (ATerm r_90 (ATerm), ATerm t)
{
  ATerm y_41 = NULL,b_42 = NULL,c_42 = NULL;
  y_41 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = y_41;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          b_42 = ATgetFirst((ATermList) t);
          c_42 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm y_31 = t;
        int z_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_14 = NULL,s_14 = NULL,t_14 = NULL,t_4 = NULL;
            t = SSLgetAnnotations(y_41);
            p_14 = t;
            t = b_42;
            t = r_90(t);
            s_14 = t;
            t = c_42;
            t = filter_1_0(r_90, t);
            t_14 = t;
            t = (ATerm) ATinsert(CheckATermList(t_14), s_14);
            t_4 = t;
            t = SSLsetAnnotations(t_4, p_14);
            ;
            LocalPopChoice(z_31);
          }
        else
          {
            t = y_31;
            t = c_42;
            t = filter_1_0(r_90, t);
          }
      }
    }
  return(t);
}
ATerm e_5 (ATerm t)
{
  ATerm b_32 = t;
  if((PushChoice() == 0))
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-I", 0, ATtrue)))
        _fail(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = b_32;
    }
  return(t);
}
ATerm h_5 (ATerm t)
{
  ATerm s_42 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm c_32 = ATgetArgument(t, 0);
      ATerm d_32 = ATgetArgument(t, 1);
      if(match_cons(d_32, sym_Specification_1))
        {
          s_42 = ATgetArgument(d_32, 0);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  t = b_8(s_42, t);
  return(t);
}
ATerm i_5 (ATerm t)
{
  ATerm t_42 = NULL,u_42 = NULL;
  if(match_cons(t, sym__3))
    {
      ATerm r_32 = ATgetArgument(t, 0);
      t_42 = ATgetArgument(t, 1);
      u_42 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(u_42), t_42);
  return(t);
}
ATerm k_5 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_s_32;
  return(t);
}
ATerm l_5 (ATerm t)
{
  ATerm v_42 = NULL,w_42 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_42 = ATgetFirst((ATermList) t);
      w_42 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, v_42, w_42);
  return(t);
}
ATerm m_5 (ATerm t)
{
  ATerm a_43 = NULL,g_43 = NULL,h_43 = NULL,n_43 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm t_32 = ATgetArgument(t, 0);
      if(match_cons(t_32, sym__2))
        {
          a_43 = ATgetArgument(t_32, 0);
          g_43 = ATgetArgument(t_32, 1);
        }
      else
        _fail(t);
      {
        ATerm w_32 = ATgetArgument(t, 1);
        if(match_cons(w_32, sym__2))
          {
            h_43 = ATgetArgument(w_32, 0);
            n_43 = ATgetArgument(w_32, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(h_43), a_43), (ATerm) ATinsert(CheckATermList(n_43), g_43));
  return(t);
}
ATerm c_9 (ATerm d_19, ATerm t)
{
  ATerm k_42 = NULL,l_42 = NULL,m_42 = NULL,n_42 = NULL,o_42 = NULL,p_42 = NULL,v_4 = NULL;
  ATerm f_33 = t;
  int k_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_i_29;
      t = get_config_0_0(t);
      t = filter_1_0(e_5, t);
      ;
      LocalPopChoice(k_33);
    }
  else
    {
      t = f_33;
      t = (ATerm) ATempty;
    }
  k_42 = t;
  t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATinsert(ATinsert(ATinsert(ATempty, d_19), term_o_33), term_m_33), term_j_27, (ATerm) ATempty);
  {
    ATerm g_5 (ATerm t)
    {
      ATerm q_42 = NULL,r_42 = NULL;
      ATerm j_5 (ATerm t)
      {
        t = (ATerm) ATinsert(CheckATermList(k_42), term_z_11);
        return(t);
      }
      r_42 = t;
      t = SSL_explode_term(r_42);
      if(match_cons(t, sym__2))
        {
          ATerm j_34 = ATgetArgument(t, 0);
          if((ATgetSymbol((ATermAppl) j_34) != ATmakeSymbol("", 0, ATtrue)))
            _fail(t);
          {
            ATerm n_34 = ATgetArgument(t, 1);
            if(((ATgetType(n_34) == AT_LIST) && !(ATisEmpty(n_34))))
              {
                q_42 = ATgetFirst((ATermList) n_34);
                {
                  ATerm o_34 = (ATerm) ATgetNext((ATermList) n_34);
                }
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = q_42;
      t = get_module_1_0(j_5, t);
      return(t);
    }
    t = graph_nodes_roots_3_0(g_5, h_5, i_5, t);
    t = genzip_4_0(k_5, l_5, m_5, _id, t);
    p_42 = t;
    if(match_cons(t, sym__2))
      {
        m_42 = ATgetArgument(t, 0);
        n_42 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(p_42);
    l_42 = t;
    t = n_42;
    t = flatten_stratego_0_0(t);
    o_42 = t;
    t = (ATerm) ATmakeAppl(sym__2, m_42, o_42);
    v_4 = t;
    t = SSLsetAnnotations(v_4, l_42);
  }
  return(t);
}
ATerm e_9 (ATerm z_39, ATerm a_40, ATerm t)
{
  t = SSL_copy(z_39, a_40);
  return(t);
}
ATerm copy_to_1_0 (ATerm l_0 (ATerm), ATerm t)
{
  ATerm k_44 = NULL,l_44 = NULL;
  k_44 = t;
  if(match_cons(t, sym_FILE_1))
    {
      l_44 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm t_34 = t;
    int u_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_15 = NULL;
        t = k_44;
        t = l_0(t);
        m_15 = t;
        if(match_cons(t, sym_stdout_0))
          {
            t = m_15;
          }
        else
          {
            if(!(match_cons(t, sym_stderr_0)))
              _fail(t);
            t = m_15;
          }
        t = (ATerm) ATmakeAppl(sym__2, l_44, m_15);
        t = e_9(l_44, m_15, t);
        t = (ATerm) ATmakeAppl(sym_FILE_1, l_44);
        ;
        LocalPopChoice(u_34);
      }
    else
      {
        t = t_34;
        {
          ATerm v_34 = t;
          int w_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm w_15 = NULL;
              t = k_44;
              t = l_0(t);
              w_15 = t;
              {
                ATerm x_34 = t;
                if((PushChoice() == 0))
                  {
                    ATerm a_16 = NULL;
                    a_16 = t;
                    if(match_cons(t, sym_stdout_0))
                      {
                        t = a_16;
                      }
                    else
                      {
                        if(match_cons(t, sym_stderr_0))
                          {
                            t = a_16;
                          }
                        else
                          {
                            t = a_16;
                            if((l_44 != t))
                              {
                                _fail(t);
                              }
                            t = a_16;
                          }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = x_34;
                  }
                t = (ATerm) ATmakeAppl(sym__2, l_44, w_15);
                t = e_9(l_44, w_15, t);
                t = (ATerm) ATmakeAppl(sym_FILE_1, l_44);
              }
              ;
              LocalPopChoice(w_34);
            }
          else
            {
              t = v_34;
              t = k_44;
              t = l_0(t);
              if((l_44 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, l_44);
            }
        }
      }
  }
  return(t);
}
ATerm f_9 (ATerm r_48, ATerm s_48, ATerm t)
{
  ATerm t_44 = NULL,z_44 = NULL;
  z_44 = t;
  {
    ATerm a_35 = t;
    int b_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, r_48, s_48);
        t = j_9(r_48, s_48, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm c_35 = ATgetFirst((ATermList) t);
            t_44 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(b_35);
        t = SSL_table_put(r_48, s_48, t_44);
        t = (ATerm) ATmakeAppl(sym__3, r_48, s_48, t_44);
      }
    else
      {
        t = a_35;
        t = SSL_table_remove(r_48, s_48);
        t = (ATerm) ATmakeAppl(sym__2, r_48, s_48);
      }
    t = z_44;
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm l_94 (ATerm), ATerm t)
{
  ATerm a_45 = NULL,b_45 = NULL,c_45 = NULL,d_45 = NULL,f_45 = NULL;
  d_45 = t;
  t = l_94(t);
  c_45 = t;
  {
    ATerm d_35 = t;
    int e_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_45 = NULL;
        t = term_z_26;
        i_45 = t;
        t = (ATerm) ATmakeAppl(sym__2, c_45, term_z_26);
        t = j_9(c_45, i_45, t);
        ;
        LocalPopChoice(e_35);
      }
    else
      {
        t = d_35;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        b_45 = ATgetFirst((ATermList) t);
        a_45 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_z_26;
    f_45 = t;
    t = SSL_table_put(c_45, f_45, a_45);
    t = b_45;
    {
      ATerm n_5 (ATerm t)
      {
        ATerm j_45 = NULL;
        j_45 = t;
        t = (ATerm) ATmakeAppl(sym__2, c_45, j_45);
        t = f_9(c_45, j_45, t);
        return(t);
      }
      t = map_1_0(n_5, t);
      t = d_45;
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm o_76 (ATerm), ATerm p_76 (ATerm), ATerm t)
{
  ATerm f_35 = t;
  int g_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = o_76(t);
      t = p_76(t);
      ;
      LocalPopChoice(g_35);
    }
  else
    {
      t = f_35;
      t = p_76(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm k_94 (ATerm), ATerm t)
{
  ATerm n_45 = NULL,p_45 = NULL,r_45 = NULL,u_45 = NULL,w_45 = NULL;
  p_45 = t;
  t = k_94(t);
  n_45 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_45, term_z_26);
  {
    ATerm h_35 = t;
    int i_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_46 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm j_35 = ATgetArgument(t, 0);
            ATerm k_35 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_z_26;
        e_46 = t;
        t = (ATerm) ATmakeAppl(sym__2, n_45, term_z_26);
        t = j_9(n_45, e_46, t);
        ;
        LocalPopChoice(i_35);
      }
    else
      {
        t = h_35;
        t = (ATerm) ATempty;
      }
    r_45 = t;
    t = term_z_26;
    u_45 = t;
    t = (ATerm) ATinsert(CheckATermList(r_45), (ATerm) ATempty);
    w_45 = t;
    t = SSL_table_put(n_45, u_45, w_45);
    t = p_45;
  }
  return(t);
}
ATerm p_5 (ATerm t)
{
  t = term_n_27;
  return(t);
}
ATerm t_5 (ATerm t)
{
  ATerm s_46 = NULL;
  s_46 = t;
  {
    ATerm l_35 = t;
    int p_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(s_46);
        ;
        LocalPopChoice(p_35);
      }
    else
      {
        t = l_35;
        t = s_46;
      }
  }
  return(t);
}
ATerm w_5 (ATerm t)
{
  t = term_n_27;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm x_104 (ATerm), ATerm t)
{
  ATerm k_46 = NULL;
  ATerm s_5 (ATerm t)
  {
    ATerm l_46 = NULL;
    l_46 = t;
    {
      ATerm q_35 = t;
      int s_35 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm m_46 = NULL,n_46 = NULL;
          t = term_n_27;
          m_46 = t;
          t = term_z_26;
          n_46 = t;
          t = term_t_35;
          t = j_9(m_46, n_46, t);
          ;
          LocalPopChoice(s_35);
        }
      else
        {
          t = q_35;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
        }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          if(((k_46 != NULL) && (k_46 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            k_46 = ATgetFirst((ATermList) t);
          {
            ATerm u_35 = (ATerm) ATgetNext((ATermList) t);
          }
        }
      else
        _fail(t);
      t = k_46;
      t = map_1_0(t_5, t);
      t = l_46;
      t = end_scope_1_0(w_5, t);
    }
    return(t);
  }
  t = begin_scope_1_0(p_5, t);
  t = restore_always_2_0(x_104, s_5, t);
  return(t);
}
ATerm y_5 (ATerm t)
{
  ATerm v_35 = t;
  int a_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_p_11;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(a_36);
    }
  else
    {
      t = v_35;
      t = term_b_36;
    }
  return(t);
}
ATerm xtc_io_1_0 (ATerm y_104 (ATerm), ATerm t)
{
  ATerm x_5 (ATerm t)
  {
    ATerm c_36 = t;
    int d_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_46 = NULL;
        t = term_p_27;
        t = get_config_0_0(t);
        w_46 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, w_46);
        ;
        LocalPopChoice(d_36);
      }
    else
      {
        t = c_36;
        t = term_x_13;
      }
    t = y_104(t);
    t = copy_to_1_0(y_5, t);
    return(t);
  }
  t = xtc_temp_files_1_0(x_5, t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm x_46 = NULL,a_47 = NULL,b_47 = NULL,c_47 = NULL,h_47 = NULL;
  x_46 = t;
  t = term_j_27;
  t = whoami_0_0(t);
  a_47 = t;
  t = term_m_21;
  c_47 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_f_36), a_47), term_e_36);
  h_47 = t;
  t = SSL_printnl(c_47, h_47);
  t = term_h_14;
  b_47 = t;
  t = SSL_exit(b_47);
  t = x_46;
  return(t);
}
ATerm g_6 (ATerm t)
{
  ATerm j_47 = NULL;
  j_47 = t;
  if(match_string(t, "-k"))
    {
      t = j_47;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = j_47;
    }
  return(t);
}
ATerm k_6 (ATerm t)
{
  ATerm k_47 = NULL,l_47 = NULL,o_47 = NULL;
  k_47 = t;
  t = SSL_string_to_int(k_47);
  l_47 = t;
  t = term_z_13;
  o_47 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_13, l_47);
  t = m_9(o_47, l_47, t);
  t = k_47;
  return(t);
}
ATerm l_6 (ATerm t)
{
  t = term_g_36;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(g_6, k_6, l_6, t);
  return(t);
}
ATerm m_6 (ATerm t)
{
  ATerm q_47 = NULL;
  q_47 = t;
  if(match_string(t, "-S"))
    {
      t = q_47;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = q_47;
    }
  return(t);
}
ATerm n_6 (ATerm t)
{
  ATerm r_47 = NULL,s_47 = NULL;
  t = term_l_14;
  r_47 = t;
  t = term_p_36;
  s_47 = t;
  t = term_q_36;
  t = m_9(r_47, s_47, t);
  t = term_r_36;
  return(t);
}
ATerm o_6 (ATerm t)
{
  t = term_s_36;
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
  ATerm t_47 = NULL,b_48 = NULL,c_48 = NULL;
  t_47 = t;
  t = SSL_string_to_int(t_47);
  b_48 = t;
  t = term_l_14;
  c_48 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_14, b_48);
  t = m_9(c_48, b_48, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, t_47);
  return(t);
}
ATerm t_6 (ATerm t)
{
  t = term_v_36;
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
  ATerm d_48 = NULL,g_48 = NULL;
  t = term_w_36;
  d_48 = t;
  t = term_j_27;
  g_48 = t;
  t = term_x_36;
  t = m_9(d_48, g_48, t);
  t = term_y_36;
  return(t);
}
ATerm w_6 (ATerm t)
{
  t = term_z_36;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm a_37 = t;
  int k_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(m_6, n_6, o_6, t);
      ;
      LocalPopChoice(k_37);
    }
  else
    {
      t = a_37;
      {
        ATerm l_37 = t;
        int n_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(p_6, r_6, t_6, t);
            ;
            LocalPopChoice(n_37);
          }
        else
          {
            t = l_37;
            t = Option_3_0(u_6, v_6, w_6, t);
          }
      }
    }
  return(t);
}
ATerm m_9 (ATerm r_56, ATerm s_56, ATerm t)
{
  ATerm h_48 = NULL;
  t = term_q_13;
  h_48 = t;
  t = SSL_table_put(h_48, r_56, s_56);
  t = (ATerm) ATmakeAppl(sym__3, term_q_13, r_56, s_56);
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm o_48 = NULL,p_48 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm u_48 = NULL,v_48 = NULL,w_48 = NULL;
      t = term_j_27;
      t = e_0(t);
      u_48 = t;
      t = term_o_37;
      v_48 = t;
      t = term_t_37;
      w_48 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_o_37, term_t_37, u_48);
      t = k_9(v_48, w_48, u_48, t);
      _fail(t);
    }
  else
    {
      ATerm z_48 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          o_48 = ATgetFirst((ATermList) t);
          p_48 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = o_48;
      t = c_0(t);
      t = term_j_27;
      t = d_0(t);
      z_48 = t;
      t = (ATerm) ATinsert(CheckATermList(p_48), z_48);
    }
  return(t);
}
ATerm x_6 (ATerm t)
{
  ATerm b_49 = NULL;
  b_49 = t;
  if(match_string(t, "-o"))
    {
      t = b_49;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = b_49;
    }
  return(t);
}
ATerm y_6 (ATerm t)
{
  ATerm c_49 = NULL,d_49 = NULL;
  c_49 = t;
  t = term_p_11;
  d_49 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_11, c_49);
  t = m_9(d_49, c_49, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, c_49);
  return(t);
}
ATerm c_7 (ATerm t)
{
  t = term_u_37;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(x_6, y_6, c_7, t);
  return(t);
}
ATerm e_7 (ATerm t)
{
  ATerm h_49 = NULL;
  h_49 = t;
  if(match_string(t, "-i"))
    {
      t = h_49;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = h_49;
    }
  return(t);
}
ATerm f_7 (ATerm t)
{
  ATerm i_49 = NULL,o_49 = NULL;
  i_49 = t;
  t = term_p_27;
  o_49 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_27, i_49);
  t = m_9(o_49, i_49, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, i_49);
  return(t);
}
ATerm g_7 (ATerm t)
{
  t = term_v_37;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(e_7, f_7, g_7, t);
  return(t);
}
ATerm k_9 (ATerm m_48, ATerm n_48, ATerm l_48, ATerm t)
{
  ATerm q_49 = NULL,r_49 = NULL,w_49 = NULL;
  q_49 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_48, n_48);
  {
    ATerm w_37 = t;
    int x_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm y_37 = ATgetArgument(t, 0);
            ATerm a_38 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, m_48, n_48);
        t = j_9(m_48, n_48, t);
        ;
        LocalPopChoice(x_37);
      }
    else
      {
        t = w_37;
        t = (ATerm) ATempty;
      }
    r_49 = t;
    t = (ATerm) ATinsert(CheckATermList(r_49), l_48);
    w_49 = t;
    t = SSL_table_put(m_48, n_48, w_49);
    t = q_49;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm t)
{
  ATerm f_50 = NULL,g_50 = NULL,h_50 = NULL,i_50 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm j_50 = NULL,k_50 = NULL,l_50 = NULL;
      t = term_j_27;
      t = k_0(t);
      j_50 = t;
      t = term_o_37;
      k_50 = t;
      t = term_t_37;
      l_50 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_o_37, term_t_37, j_50);
      t = k_9(k_50, l_50, j_50, t);
      _fail(t);
    }
  else
    {
      ATerm q_50 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          f_50 = ATgetFirst((ATermList) t);
          g_50 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = g_50;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_50 = ATgetFirst((ATermList) t);
          i_50 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = f_50;
      t = i_0(t);
      t = h_50;
      t = j_0(t);
      q_50 = t;
      t = (ATerm) ATinsert(CheckATermList(i_50), q_50);
    }
  return(t);
}
ATerm at_end_1_0 (ATerm a_84 (ATerm), ATerm t)
{
  ATerm w_51 (ATerm t)
  {
    ATerm s_51 = NULL,t_51 = NULL,u_51 = NULL;
    u_51 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        s_51 = ATgetFirst((ATermList) t);
        t_51 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm o_16 = NULL,t_16 = NULL,f_5 = NULL;
          t = SSLgetAnnotations(u_51);
          o_16 = t;
          t = t_51;
          t = w_51(t);
          t_16 = t;
          t = (ATerm) ATinsert(CheckATermList(t_16), s_51);
          f_5 = t;
          t = SSLsetAnnotations(f_5, o_16);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = u_51;
        t = a_84(t);
      }
    return(t);
  }
  t = w_51(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm s_50 = NULL,t_50 = NULL,a_51 = NULL;
  s_50 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = s_50;
    }
  else
    {
      ATerm h_7 (ATerm t)
      {
        t = not_null(a_51);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          t_50 = ATgetFirst((ATermList) t);
          if(((a_51 != NULL) && (a_51 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            a_51 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = t_50;
      t = at_end_1_0(h_7, t);
    }
  return(t);
}
ATerm m_52 (ATerm a_52, ATerm t)
{
  ATerm b_52 = NULL;
  t = SSL_explode_term(a_52);
  if(match_cons(t, sym__2))
    {
      ATerm c_38 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) c_38) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      b_52 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_52;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm d_52 = NULL,e_52 = NULL,f_52 = NULL;
  f_52 = t;
  if(match_cons(t, sym__2))
    {
      d_52 = ATgetArgument(t, 0);
      e_52 = ATgetArgument(t, 1);
      {
        ATerm d_38 = t;
        int e_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_7 (ATerm t)
            {
              t = e_52;
              return(t);
            }
            t = d_52;
            t = at_end_1_0(i_7, t);
            ;
            LocalPopChoice(e_38);
          }
        else
          {
            t = d_38;
            t = m_52(f_52, t);
          }
      }
    }
  else
    {
      t = m_52(f_52, t);
    }
  return(t);
}
ATerm d_9 (ATerm x_56, ATerm w_56, ATerm t)
{
  ATerm n_52 = NULL,o_52 = NULL,p_52 = NULL;
  t = x_56;
  {
    ATerm f_38 = t;
    int g_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        ;
        LocalPopChoice(g_38);
      }
    else
      {
        t = f_38;
        t = (ATerm) ATempty;
      }
    o_52 = t;
    t = (ATerm) ATmakeAppl(sym__2, w_56, o_52);
    t = conc_0_0(t);
    n_52 = t;
    t = term_q_13;
    p_52 = t;
    t = SSL_table_put(p_52, x_56, n_52);
    t = (ATerm) ATmakeAppl(sym__3, term_q_13, x_56, n_52);
  }
  return(t);
}
ATerm j_7 (ATerm t)
{
  ATerm u_52 = NULL;
  u_52 = t;
  if(match_string(t, "-I"))
    {
      t = u_52;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--Include", 0, ATtrue)))
        _fail(t);
      t = u_52;
    }
  return(t);
}
ATerm k_7 (ATerm t)
{
  ATerm z_52 = NULL,e_53 = NULL,h_53 = NULL;
  z_52 = t;
  t = term_i_29;
  e_53 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, z_52), term_i_29);
  h_53 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_i_29, (ATerm) ATinsert(ATinsert(ATempty, z_52), term_i_29));
  t = d_9(e_53, h_53, t);
  t = term_j_27;
  return(t);
}
ATerm l_7 (ATerm t)
{
  t = term_h_38;
  return(t);
}
ATerm m_7 (ATerm t)
{
  ATerm k_53 = NULL;
  k_53 = t;
  if(match_string(t, "--nodep"))
    {
      t = k_53;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-nodep", 0, ATtrue)))
        _fail(t);
      t = k_53;
    }
  return(t);
}
ATerm n_7 (ATerm t)
{
  ATerm n_53 = NULL,u_53 = NULL;
  t = term_v_11;
  n_53 = t;
  t = term_i_38;
  u_53 = t;
  t = term_o_38;
  t = m_9(n_53, u_53, t);
  t = term_j_27;
  return(t);
}
ATerm q_7 (ATerm t)
{
  t = term_p_38;
  return(t);
}
ATerm r_7 (ATerm t)
{
  ATerm v_53 = NULL;
  v_53 = t;
  if(match_string(t, "--dep"))
    {
      t = v_53;
    }
  else
    {
      if(match_string(t, "-d"))
        {
          t = v_53;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-dep", 0, ATtrue)))
            _fail(t);
          t = v_53;
        }
    }
  return(t);
}
ATerm u_7 (ATerm t)
{
  ATerm a_54 = NULL,b_54 = NULL;
  a_54 = t;
  t = term_t_11;
  b_54 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_11, a_54);
  t = m_9(b_54, a_54, t);
  t = term_j_27;
  return(t);
}
ATerm y_7 (ATerm t)
{
  t = term_q_38;
  return(t);
}
ATerm z_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--imports", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm a_8 (ATerm t)
{
  ATerm d_54 = NULL,e_54 = NULL;
  t = term_u_38;
  d_54 = t;
  t = term_j_27;
  e_54 = t;
  t = term_v_38;
  t = m_9(d_54, e_54, t);
  t = term_j_27;
  return(t);
}
ATerm e_8 (ATerm t)
{
  t = term_w_38;
  return(t);
}
ATerm f_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--slack", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm q_8 (ATerm t)
{
  ATerm i_54 = NULL,k_54 = NULL;
  t = term_n_30;
  i_54 = t;
  t = term_j_27;
  k_54 = t;
  t = term_x_38;
  t = m_9(i_54, k_54, t);
  t = term_j_27;
  return(t);
}
ATerm t_8 (ATerm t)
{
  t = term_y_38;
  return(t);
}
ATerm v_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--asfix", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm w_8 (ATerm t)
{
  ATerm l_54 = NULL,r_54 = NULL;
  t = term_e_29;
  l_54 = t;
  t = term_i_38;
  r_54 = t;
  t = term_j_39;
  t = m_9(l_54, r_54, t);
  t = term_j_27;
  return(t);
}
ATerm y_8 (ATerm t)
{
  t = term_r_39;
  return(t);
}
ATerm pack_stratego_options_0_0 (ATerm t)
{
  ATerm s_39 = t;
  int x_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ArgOption_3_0(j_7, k_7, l_7, t);
      ;
      LocalPopChoice(x_39);
    }
  else
    {
      t = s_39;
      {
        ATerm y_39 = t;
        int b_40 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Option_3_0(m_7, n_7, q_7, t);
            ;
            LocalPopChoice(b_40);
          }
        else
          {
            t = y_39;
            {
              ATerm c_40 = t;
              int d_40 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = ArgOption_3_0(r_7, u_7, y_7, t);
                  ;
                  LocalPopChoice(d_40);
                }
              else
                {
                  t = c_40;
                  {
                    ATerm i_40 = t;
                    int j_40 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Option_3_0(z_7, a_8, e_8, t);
                        ;
                        LocalPopChoice(j_40);
                      }
                    else
                      {
                        t = i_40;
                        {
                          ATerm m_40 = t;
                          int n_40 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Option_3_0(f_8, q_8, t_8, t);
                              ;
                              LocalPopChoice(n_40);
                            }
                          else
                            {
                              t = m_40;
                              t = Option_3_0(v_8, w_8, y_8, t);
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
ATerm report_failure_0_0 (ATerm t)
{
  ATerm s_54 = NULL,t_54 = NULL,u_54 = NULL,v_54 = NULL;
  t = report_run_time_0_0(t);
  t = term_j_27;
  t = whoami_0_0(t);
  s_54 = t;
  t = term_m_21;
  u_54 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_o_40), s_54);
  v_54 = t;
  t = SSL_printnl(u_54, v_54);
  t = term_h_14;
  t_54 = t;
  t = SSL_exit(t_54);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_p_40;
  t = get_config_0_0(t);
  return(t);
}
ATerm g_9 (ATerm n_36, ATerm o_36, ATerm t)
{
  ATerm q_40 = t;
  int y_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(n_36, o_36);
      ;
      LocalPopChoice(y_40);
    }
  else
    {
      t = q_40;
      t = SSL_addr(n_36, o_36);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm n_89 (ATerm), ATerm o_89 (ATerm), ATerm t)
{
  ATerm y_54 = NULL,c_55 = NULL,d_55 = NULL;
  y_54 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = y_54;
      t = n_89(t);
    }
  else
    {
      ATerm h_55 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          c_55 = ATgetFirst((ATermList) t);
          d_55 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = d_55;
      t = foldr_2_0(n_89, o_89, t);
      h_55 = t;
      t = (ATerm) ATmakeAppl(sym__2, c_55, h_55);
      t = o_89(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm a_9 (ATerm t)
{
  t = term_p_36;
  return(t);
}
ATerm b_9 (ATerm t)
{
  ATerm j_17 = NULL,l_17 = NULL;
  if(match_cons(t, sym__2))
    {
      j_17 = ATgetArgument(t, 0);
      l_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_9(j_17, l_17, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm k_55 = NULL,b_17 = NULL,g_17 = NULL;
  t = times_0_0(t);
  g_17 = t;
  t = SSL_explode_term(g_17);
  if(match_cons(t, sym__2))
    {
      ATerm z_40 = ATgetArgument(t, 0);
      b_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_17;
  t = foldr_2_0(a_9, b_9, t);
  k_55 = t;
  t = SSL_TicksToSeconds(k_55);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm e_56 = NULL,f_56 = NULL,g_56 = NULL;
  e_56 = t;
  if(match_cons(t, sym__2))
    {
      f_56 = ATgetArgument(t, 0);
      g_56 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm a_41 = t;
    int b_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = g_56;
        if((f_56 != t))
          {
            _fail(t);
          }
        t = e_56;
        ;
        LocalPopChoice(b_41);
      }
    else
      {
        t = a_41;
        t = (ATerm) ATmakeAppl(sym__2, f_56, g_56);
        {
          ATerm c_41 = t;
          int d_41 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(f_56, g_56);
              ;
              LocalPopChoice(d_41);
            }
          else
            {
              t = c_41;
              t = SSL_gtr(f_56, g_56);
            }
          t = (ATerm) ATmakeAppl(sym__2, f_56, g_56);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm r_97 (ATerm), ATerm t)
{
  ATerm k_56 = NULL;
  k_56 = t;
  {
    ATerm e_41 = t;
    int f_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_56 = NULL;
        t = term_l_14;
        t = get_config_0_0(t);
        m_56 = t;
        t = (ATerm) ATmakeAppl(sym__2, m_56, term_h_14);
        t = geq_0_0(t);
        t = k_56;
        t = r_97(t);
        ;
        LocalPopChoice(f_41);
      }
    else
      {
        t = e_41;
        t = k_56;
      }
  }
  return(t);
}
ATerm h_9 (ATerm t)
{
  ATerm o_56 = NULL,p_56 = NULL,t_56 = NULL,u_56 = NULL;
  t = run_time_0_0(t);
  o_56 = t;
  t = term_j_27;
  t = whoami_0_0(t);
  p_56 = t;
  t = term_m_21;
  t_56 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_g_41), o_56), term_r_14), p_56);
  u_56 = t;
  t = SSL_printnl(t_56, u_56);
  t = (ATerm) ATmakeAppl(sym__2, term_m_21, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_g_41), o_56), term_r_14), p_56));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(h_9, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm v_56 = NULL;
  t = report_run_time_0_0(t);
  t = term_p_36;
  v_56 = t;
  t = SSL_exit(v_56);
  return(t);
}
ATerm q_9 (ATerm t)
{
  ATerm n_57 = NULL,o_57 = NULL;
  o_57 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = o_57;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          n_57 = ATgetArgument(t, 0);
          {
            ATerm k_18 = NULL,o_5 = NULL;
            t = SSLgetAnnotations(o_57);
            k_18 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, n_57);
            o_5 = t;
            t = SSLsetAnnotations(o_5, k_18);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = o_57;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm f_99 (ATerm), ATerm t)
{
  ATerm h_41 = t;
  int i_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_j_41;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(i_41);
    }
  else
    {
      t = h_41;
      t = fetch_1_0(q_9, t);
    }
  t = f_99(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t)
{
  ATerm r_57 = NULL,s_57 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_57 = ATgetFirst((ATermList) t);
      s_57 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm w_57 = NULL,x_57 = NULL;
        ATerm r_9 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(w_57)), not_null(x_57));
          return(t);
        }
        t = s_57;
        t = h_0(t);
        if(((w_57 != NULL) && (w_57 != t)))
          _fail(t);
        else
          w_57 = t;
        t = r_57;
        t = g_0(t);
        if(((x_57 != NULL) && (x_57 != t)))
          _fail(t);
        else
          x_57 = t;
        t = s_57;
        t = reverse_acc_2_0(g_0, r_9, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_j_27;
      t = h_0(t);
    }
  return(t);
}
ATerm j_9 (ATerm d_50, ATerm e_50, ATerm t)
{
  t = SSL_table_get(d_50, e_50);
  return(t);
}
ATerm s_9 (ATerm t)
{
  ATerm b_58 = NULL,c_58 = NULL,d_58 = NULL,r_5 = NULL;
  d_58 = t;
  if(match_cons(t, sym_Program_1))
    {
      c_58 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_58);
  b_58 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, c_58);
  r_5 = t;
  t = SSLsetAnnotations(r_5, b_58);
  return(t);
}
ATerm t_9 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm u_9 (ATerm t)
{
  ATerm f_58 = NULL;
  f_58 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, f_58), term_k_41);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm z_57 = NULL,a_58 = NULL;
  ATerm l_41 = t;
  int m_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_p_40;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(m_41);
    }
  else
    {
      t = l_41;
      t = fetch_1_0(s_9, t);
    }
  t = term_n_41;
  t = echo_0_0(t);
  t = term_o_37;
  z_57 = t;
  t = term_t_37;
  a_58 = t;
  t = term_o_41;
  t = j_9(z_57, a_58, t);
  t = reverse_acc_2_0(_id, t_9, t);
  t = map_1_0(u_9, t);
  return(t);
}
ATerm fetch_1_0 (ATerm u_83 (ATerm), ATerm t)
{
  ATerm c_59 (ATerm t)
  {
    ATerm z_58 = NULL,a_59 = NULL,b_59 = NULL;
    z_58 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        a_59 = ATgetFirst((ATermList) t);
        b_59 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm p_41 = t;
      int q_41 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm t_18 = NULL,a_19 = NULL,u_5 = NULL;
          t = SSLgetAnnotations(z_58);
          t_18 = t;
          t = a_59;
          t = u_83(t);
          a_19 = t;
          t = (ATerm) ATinsert(CheckATermList(b_59), a_19);
          u_5 = t;
          t = SSLsetAnnotations(u_5, t_18);
          ;
          LocalPopChoice(q_41);
        }
      else
        {
          t = p_41;
          {
            ATerm l_19 = NULL,t_19 = NULL,v_5 = NULL;
            t = SSLgetAnnotations(z_58);
            l_19 = t;
            t = b_59;
            t = c_59(t);
            t_19 = t;
            t = (ATerm) ATinsert(CheckATermList(t_19), a_59);
            v_5 = t;
            t = SSLsetAnnotations(v_5, l_19);
          }
        }
    }
    return(t);
  }
  t = c_59(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm g_59 = NULL,h_59 = NULL,i_59 = NULL;
  g_59 = t;
  {
    ATerm r_41 = t;
    int s_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = g_59;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm t_41 = ATgetFirst((ATermList) t);
                ATerm u_41 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = g_59;
          }
        ;
        LocalPopChoice(s_41);
      }
    else
      {
        t = r_41;
        t = (ATerm) ATinsert(ATempty, g_59);
      }
    h_59 = t;
    t = term_b_36;
    i_59 = t;
    t = SSL_printnl(i_59, h_59);
    t = g_59;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_p_40;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm v_9 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm x_9 (ATerm t)
{
  ATerm m_59 = NULL,n_59 = NULL;
  t = term_v_41;
  m_59 = t;
  t = term_j_27;
  n_59 = t;
  t = term_w_41;
  t = m_9(m_59, n_59, t);
  return(t);
}
ATerm y_9 (ATerm t)
{
  t = term_x_41;
  return(t);
}
ATerm b_10 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm e_10 (ATerm t)
{
  ATerm o_59 = NULL,p_59 = NULL,q_59 = NULL,r_59 = NULL;
  t = term_v_41;
  q_59 = t;
  t = term_j_27;
  r_59 = t;
  t = term_w_41;
  t = m_9(q_59, r_59, t);
  t = term_z_41;
  o_59 = t;
  t = term_j_27;
  p_59 = t;
  t = term_a_42;
  t = m_9(o_59, p_59, t);
  t = term_d_42;
  return(t);
}
ATerm f_10 (ATerm t)
{
  t = term_e_42;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm f_42 = t;
  int g_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(v_9, x_9, y_9, t);
      ;
      LocalPopChoice(g_42);
    }
  else
    {
      t = f_42;
      t = Option_3_0(b_10, e_10, f_10, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm v_61 (ATerm), ATerm w_61 (ATerm), ATerm t)
{
  ATerm s_59 = NULL,t_59 = NULL,u_59 = NULL,v_59 = NULL,w_59 = NULL,x_59 = NULL,e_6 = NULL;
  x_59 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_59 = ATgetFirst((ATermList) t);
      u_59 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_59);
  s_59 = t;
  t = t_59;
  t = v_61(t);
  v_59 = t;
  t = u_59;
  t = w_61(t);
  w_59 = t;
  t = (ATerm) ATinsert(CheckATermList(w_59), v_59);
  e_6 = t;
  t = SSLsetAnnotations(e_6, s_59);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm w_101 (ATerm), ATerm t)
{
  ATerm c_60 = NULL,d_60 = NULL,e_60 = NULL,f_60 = NULL,h_60 = NULL,i_60 = NULL,q_6 = NULL;
  c_60 = t;
  {
    ATerm h_42 = t;
    int i_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_j_42;
        t = w_101(t);
        ;
        LocalPopChoice(i_42);
      }
    else
      {
        t = h_42;
      }
    t = c_60;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        e_60 = ATgetFirst((ATermList) t);
        f_60 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(c_60);
    d_60 = t;
    t = term_p_40;
    i_60 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_p_40, e_60);
    t = m_9(i_60, e_60, t);
    t = f_60;
    {
      ATerm s_60 (ATerm t)
      {
        ATerm z_42 = t;
        int e_43 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_43 = t;
            int j_43 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm l_60 = NULL;
                l_60 = t;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = l_60;
                ;
                LocalPopChoice(j_43);
              }
            else
              {
                t = i_43;
                t = w_101(t);
                t = Cons_2_0(_id, s_60, t);
              }
            ;
            LocalPopChoice(e_43);
          }
        else
          {
            t = z_42;
            {
              ATerm o_60 = NULL,p_60 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  o_60 = ATgetFirst((ATermList) t);
                  p_60 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(p_60), (ATerm) ATmakeAppl(sym_Undefined_1, o_60));
            }
          }
        return(t);
      }
      t = s_60(t);
      h_60 = t;
      t = (ATerm) ATinsert(CheckATermList(h_60), (ATerm) ATmakeAppl(sym_Program_1, e_60));
      q_6 = t;
      t = SSLsetAnnotations(q_6, d_60);
    }
  }
  return(t);
}
ATerm h_10 (ATerm t)
{
  ATerm e_61 = NULL;
  e_61 = t;
  if(match_string(t, "--help"))
    {
      t = e_61;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = e_61;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = e_61;
        }
    }
  return(t);
}
ATerm i_10 (ATerm t)
{
  ATerm f_61 = NULL,g_61 = NULL;
  t = term_j_41;
  f_61 = t;
  t = term_j_27;
  g_61 = t;
  t = term_k_43;
  t = m_9(f_61, g_61, t);
  t = term_l_43;
  return(t);
}
ATerm j_10 (ATerm t)
{
  t = term_m_43;
  return(t);
}
ATerm p_10 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm v_101 (ATerm), ATerm t)
{
  ATerm x_60 = NULL,y_60 = NULL,z_60 = NULL,a_61 = NULL,b_61 = NULL,c_61 = NULL,d_61 = NULL;
  z_60 = t;
  t = term_o_37;
  b_61 = t;
  t = term_t_37;
  c_61 = t;
  t = (ATerm) ATempty;
  d_61 = t;
  t = SSL_table_put(b_61, c_61, d_61);
  t = z_60;
  {
    ATerm g_10 (ATerm t)
    {
      ATerm o_43 = t;
      int p_43 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = v_101(t);
          ;
          LocalPopChoice(p_43);
        }
      else
        {
          t = o_43;
          {
            ATerm q_43 = t;
            int r_43 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(h_10, i_10, j_10, t);
                ;
                LocalPopChoice(r_43);
              }
            else
              {
                t = q_43;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(g_10, t);
    {
      ATerm s_43 = t;
      int t_43 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm n_61 = NULL;
          n_61 = t;
          {
            ATerm u_43 = t;
            int v_43 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm f_20 = NULL;
                t = n_61;
                {
                  ATerm w_43 = t;
                  int x_43 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_j_41;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(x_43);
                    }
                  else
                    {
                      t = w_43;
                      t = fetch_1_0(p_10, t);
                    }
                  t = n_61;
                  t = default_system_usage_0_0(t);
                  t = term_p_36;
                  f_20 = t;
                  t = SSL_exit(f_20);
                }
                ;
                LocalPopChoice(v_43);
              }
            else
              {
                t = u_43;
                {
                  ATerm m_20 = NULL;
                  t = term_v_41;
                  t = get_config_0_0(t);
                  t = n_61;
                  t = default_system_about_0_0(t);
                  t = term_p_36;
                  m_20 = t;
                  t = SSL_exit(m_20);
                }
              }
          }
          ;
          LocalPopChoice(t_43);
        }
      else
        {
          t = s_43;
          {
            ATerm y_43 = t;
            int z_43 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm o_61 = NULL,p_61 = NULL,q_61 = NULL;
                ATerm q_10 (ATerm t)
                {
                  ATerm r_61 = NULL,s_61 = NULL,t_61 = NULL,s_6 = NULL;
                  t_61 = t;
                  if(match_cons(t, sym_Undefined_1))
                    {
                      s_61 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(t_61);
                  r_61 = t;
                  t = s_61;
                  if(((x_60 != NULL) && (x_60 != t)))
                    _fail(t);
                  else
                    x_60 = t;
                  t = (ATerm) ATmakeAppl(sym_Undefined_1, s_61);
                  s_6 = t;
                  t = SSLsetAnnotations(s_6, r_61);
                  return(t);
                }
                t = fetch_1_0(q_10, t);
                t = term_m_21;
                p_61 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(x_60)), term_a_44);
                q_61 = t;
                t = SSL_printnl(p_61, q_61);
                t = (ATerm) ATmakeAppl(sym__2, term_m_21, (ATerm) ATinsert(ATinsert(ATempty, not_null(x_60)), term_a_44));
                t = default_system_usage_0_0(t);
                t = term_h_14;
                o_61 = t;
                t = SSL_exit(o_61);
                ;
                LocalPopChoice(z_43);
              }
            else
              {
                t = y_43;
              }
          }
        }
      y_60 = t;
      t = term_o_37;
      a_61 = t;
      t = SSL_table_destroy(a_61);
      t = y_60;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm h_99 (ATerm), ATerm i_99 (ATerm), ATerm j_99 (ATerm), ATerm k_99 (ATerm), ATerm t)
{
  ATerm a_62 = NULL,b_62 = NULL,c_62 = NULL,d_62 = NULL;
  t = parse_options_1_0(h_99, t);
  a_62 = t;
  t = term_b_44;
  d_62 = t;
  t = SSL_table_create(d_62);
  t = term_b_44;
  b_62 = t;
  t = term_c_44;
  c_62 = t;
  t = SSL_table_put(b_62, c_62, a_62);
  t = a_62;
  t = j_99(t);
  {
    ATerm d_44 = t;
    int e_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(i_99, t);
        ;
        LocalPopChoice(e_44);
      }
    else
      {
        t = d_44;
        {
          ATerm f_44 = t;
          int g_44 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = k_99(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(g_44);
            }
          else
            {
              t = f_44;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm r_10 (ATerm t)
{
  ATerm h_44 = t;
  int i_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = pack_stratego_options_0_0(t);
      ;
      LocalPopChoice(i_44);
    }
  else
    {
      t = h_44;
      {
        ATerm j_44 = t;
        int m_44 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = input_option_0_0(t);
            ;
            LocalPopChoice(m_44);
          }
        else
          {
            t = j_44;
            {
              ATerm n_44 = t;
              int o_44 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = output_option_0_0(t);
                  ;
                  LocalPopChoice(o_44);
                }
              else
                {
                  t = n_44;
                  {
                    ATerm p_44 = t;
                    int s_44 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Option_3_0(y_10, d_11, f_11, t);
                        ;
                        LocalPopChoice(s_44);
                      }
                    else
                      {
                        t = p_44;
                        {
                          ATerm u_44 = t;
                          int v_44 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = verbose_option_0_0(t);
                              ;
                              LocalPopChoice(v_44);
                            }
                          else
                            {
                              t = u_44;
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
ATerm y_10 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm d_11 (ATerm t)
{
  ATerm j_62 = NULL,k_62 = NULL;
  t = term_w_44;
  j_62 = t;
  t = term_j_27;
  k_62 = t;
  t = term_x_44;
  t = m_9(j_62, k_62, t);
  t = term_y_44;
  return(t);
}
ATerm f_11 (ATerm t)
{
  t = term_e_45;
  return(t);
}
ATerm k_11 (ATerm t)
{
  t = get_filename_0_0(t);
  t = basename_1_0(_id, t);
  return(t);
}
ATerm pack_stratego_0_0 (ATerm t)
{
  ATerm h_62 = NULL,i_62 = NULL;
  ATerm t_10 (ATerm t)
  {
    ATerm g_11 (ATerm t)
    {
      ATerm m_62 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          m_62 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = c_9(m_62, t);
      if(match_cons(t, sym__2))
        {
          if(((h_62 != NULL) && (h_62 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            h_62 = ATgetArgument(t, 0);
          if(((i_62 != NULL) && (i_62 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            i_62 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm g_45 = t;
        int h_45 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_u_38;
            t = get_config_0_0(t);
            t = h_62;
            t = map_1_0(k_11, t);
            t = write_to_text_0_0(t);
            ;
            LocalPopChoice(h_45);
          }
        else
          {
            t = g_45;
            {
              ATerm k_45 = t;
              int l_45 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = h_62;
                  t = create_dep_file_0_0(t);
                  ;
                  LocalPopChoice(l_45);
                }
              else
                {
                  t = k_45;
                }
              t = i_62;
              t = write_to_0_0(t);
            }
          }
      }
      return(t);
    }
    t = xtc_io_1_0(g_11, t);
    return(t);
  }
  t = option_wrap_4_0(r_10, default_usage_0_0, _id, t_10, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = pack_stratego_0_0(t);
  return(t);
}
