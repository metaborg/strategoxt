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
Symbol sym_F__OK_0;
Symbol sym_R__OK_0;
Symbol sym_Stream_1;
Symbol sym_Path_1;
Symbol sym_stdin_0;
Symbol sym_stdout_0;
Symbol sym_stderr_0;
Symbol sym_Undefined_0;
Symbol sym_Scopes_0;
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
  sym_Undefined_0 = ATmakeSymbol("Undefined", 0, ATfalse);
  ATprotectSymbol(sym_Undefined_0);
  sym_Scopes_0 = ATmakeSymbol("Scopes", 0, ATfalse);
  ATprotectSymbol(sym_Scopes_0);
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
ATerm term_o_45;
ATerm term_n_45;
ATerm term_k_45;
ATerm term_i_45;
ATerm term_g_44;
ATerm term_f_44;
ATerm term_e_44;
ATerm term_r_43;
ATerm term_q_43;
ATerm term_p_43;
ATerm term_k_43;
ATerm term_m_42;
ATerm term_l_42;
ATerm term_g_42;
ATerm term_f_42;
ATerm term_e_42;
ATerm term_d_42;
ATerm term_c_42;
ATerm term_s_41;
ATerm term_r_41;
ATerm term_o_41;
ATerm term_n_41;
ATerm term_k_41;
ATerm term_a_41;
ATerm term_z_40;
ATerm term_b_40;
ATerm term_y_39;
ATerm term_q_39;
ATerm term_h_39;
ATerm term_g_39;
ATerm term_e_39;
ATerm term_c_39;
ATerm term_b_39;
ATerm term_a_39;
ATerm term_z_38;
ATerm term_y_38;
ATerm term_x_38;
ATerm term_f_38;
ATerm term_a_38;
ATerm term_z_37;
ATerm term_v_37;
ATerm term_f_37;
ATerm term_e_37;
ATerm term_d_37;
ATerm term_c_37;
ATerm term_b_37;
ATerm term_a_37;
ATerm term_z_36;
ATerm term_x_36;
ATerm term_w_36;
ATerm term_v_36;
ATerm term_u_36;
ATerm term_t_36;
ATerm term_m_36;
ATerm term_c_36;
ATerm term_n_34;
ATerm term_m_34;
ATerm term_j_33;
ATerm term_y_30;
ATerm term_x_30;
ATerm term_w_30;
ATerm term_v_30;
ATerm term_u_30;
ATerm term_t_30;
ATerm term_s_30;
ATerm term_i_30;
ATerm term_l_29;
ATerm term_e_29;
ATerm term_d_29;
ATerm term_l_28;
ATerm term_s_27;
ATerm term_o_27;
ATerm term_l_27;
ATerm term_k_27;
ATerm term_h_27;
ATerm term_f_27;
ATerm term_b_27;
ATerm term_y_26;
ATerm term_w_26;
ATerm term_s_26;
ATerm term_f_26;
ATerm term_w_25;
ATerm term_u_25;
ATerm term_a_25;
ATerm term_t_24;
ATerm term_r_24;
ATerm term_p_24;
ATerm term_m_24;
ATerm term_j_24;
ATerm term_y_23;
ATerm term_x_23;
ATerm term_t_23;
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
ATerm term_e_21;
ATerm term_d_21;
ATerm term_c_21;
ATerm term_b_21;
ATerm term_a_21;
ATerm term_w_20;
ATerm term_u_20;
ATerm term_q_20;
ATerm term_p_20;
ATerm term_n_20;
ATerm term_k_20;
ATerm term_j_20;
ATerm term_i_20;
ATerm term_h_20;
ATerm term_f_20;
ATerm term_d_20;
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
ATerm term_t_18;
ATerm term_s_18;
ATerm term_q_18;
ATerm term_p_18;
ATerm term_o_18;
ATerm term_n_18;
ATerm term_m_18;
ATerm term_k_18;
ATerm term_j_18;
ATerm term_i_18;
ATerm term_g_18;
ATerm term_f_18;
ATerm term_e_18;
ATerm term_d_18;
ATerm term_c_18;
ATerm term_a_18;
ATerm term_z_17;
ATerm term_x_17;
ATerm term_w_17;
ATerm term_u_17;
ATerm term_t_17;
ATerm term_s_17;
ATerm term_r_17;
ATerm term_q_17;
ATerm term_p_17;
ATerm term_o_17;
ATerm term_n_17;
ATerm term_l_17;
ATerm term_k_17;
ATerm term_i_17;
ATerm term_h_17;
ATerm term_f_17;
ATerm term_d_17;
ATerm term_a_17;
ATerm term_z_16;
ATerm term_y_16;
ATerm term_w_16;
ATerm term_v_16;
ATerm term_t_16;
ATerm term_r_16;
ATerm term_q_16;
ATerm term_o_16;
ATerm term_n_16;
ATerm term_m_16;
ATerm term_l_16;
ATerm term_j_16;
ATerm term_h_16;
ATerm term_f_16;
ATerm term_e_16;
ATerm term_d_16;
ATerm term_c_16;
ATerm term_z_15;
ATerm term_u_15;
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
ATerm term_d_15;
ATerm term_c_15;
ATerm term_b_15;
ATerm term_a_15;
ATerm term_v_14;
ATerm term_r_14;
ATerm term_q_14;
ATerm term_o_14;
ATerm term_l_14;
ATerm term_i_14;
ATerm term_a_14;
ATerm term_y_13;
ATerm term_w_13;
ATerm term_q_13;
ATerm term_j_13;
ATerm term_i_12;
ATerm term_f_12;
ATerm term_c_12;
ATerm term_b_12;
ATerm term_a_12;
ATerm term_z_11;
ATerm term_w_11;
ATerm term_u_11;
ATerm term_p_11;
void init_constant_terms (void)
{
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--dep", 0, ATtrue));
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--nodep", 0, ATtrue));
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeAppl(ATmakeSymbol(".", 0, ATtrue));
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeAppl(ATmakeSymbol("dep", 0, ATtrue));
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeAppl(ATmakeSymbol(" \\\n	", 0, ATtrue));
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeAppl(ATmakeSymbol(" :", 0, ATtrue));
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeInt(1);
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
  term_c_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_15, term_i_14, term_b_15);
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_15, term_f_15, term_g_15);
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
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_15, term_s_15, term_t_15);
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_15, term_c_16, term_d_16);
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_l_16));
  term_l_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_16, term_h_16, term_j_16);
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_16, term_n_16, term_o_16);
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_t_16));
  term_t_16 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_16, term_t_16, term_v_16);
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_a_17));
  term_a_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_16, term_z_16, term_a_17);
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_h_17));
  term_h_17 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_i_17));
  term_i_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_k_17));
  term_k_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_17, term_h_17, term_i_17);
  ATprotect(&(term_l_17));
  term_l_17 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_n_17));
  term_n_17 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_17, term_n_17, term_o_17);
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
  ATprotect(&(term_w_17));
  term_w_17 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_z_17));
  term_z_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_17, term_w_17, term_x_17);
  ATprotect(&(term_a_18));
  term_a_18 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_d_18));
  term_d_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_e_18));
  term_e_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_18, term_c_18, term_d_18);
  ATprotect(&(term_f_18));
  term_f_18 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_g_18));
  term_g_18 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_i_18));
  term_i_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_j_18));
  term_j_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_18, term_g_18, term_i_18);
  ATprotect(&(term_k_18));
  term_k_18 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_m_18));
  term_m_18 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_n_18));
  term_n_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_o_18));
  term_o_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_18, term_m_18, term_n_18);
  ATprotect(&(term_p_18));
  term_p_18 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_q_18));
  term_q_18 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_s_18));
  term_s_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_t_18));
  term_t_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_18, term_q_18, term_s_18);
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
  term_f_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_19, term_i_12, term_e_19);
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
  ATprotect(&(term_d_20));
  term_d_20 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_f_20));
  term_f_20 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_h_20));
  term_h_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_i_20));
  term_i_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_20, term_f_20, term_h_20);
  ATprotect(&(term_j_20));
  term_j_20 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_k_20));
  term_k_20 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_n_20));
  term_n_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_p_20));
  term_p_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_20, term_k_20, term_n_20);
  ATprotect(&(term_q_20));
  term_q_20 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_u_20));
  term_u_20 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_w_20));
  term_w_20 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_a_21));
  term_a_21 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_20, term_u_20, term_w_20);
  ATprotect(&(term_b_21));
  term_b_21 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_c_21));
  term_c_21 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_d_21));
  term_d_21 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_e_21));
  term_e_21 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_21, term_c_21, term_d_21);
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
  ATprotect(&(term_t_23));
  term_t_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_x_23));
  term_x_23 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_y_23));
  term_y_23 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_j_24));
  term_j_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_m_24));
  term_m_24 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_p_24));
  term_p_24 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_r_24));
  term_r_24 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_t_24));
  term_t_24 = (ATerm) ATmakeAppl(sym__2, term_x_23, term_r_24);
  ATprotect(&(term_a_25));
  term_a_25 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_u_25));
  term_u_25 = (ATerm) ATmakeAppl(sym__2, term_x_23, term_y_23);
  ATprotect(&(term_w_25));
  term_w_25 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_f_26));
  term_f_26 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_s_26));
  term_s_26 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_w_26));
  term_w_26 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_y_26));
  term_y_26 = (ATerm) ATmakeInt(-1);
  ATprotect(&(term_b_27));
  term_b_27 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_f_27));
  term_f_27 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file> (file, mode)", 0, ATtrue));
  ATprotect(&(term_h_27));
  term_h_27 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_k_27));
  term_k_27 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_l_27));
  term_l_27 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_o_27));
  term_o_27 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_s_27));
  term_s_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_l_28));
  term_l_28 = (ATerm) ATmakeAppl(ATmakeSymbol("parse error in ", 0, ATtrue));
  ATprotect(&(term_d_29));
  term_d_29 = (ATerm) ATmakeAppl(ATmakeSymbol("parse-stratego", 0, ATtrue));
  ATprotect(&(term_e_29));
  term_e_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--asfix", 0, ATtrue));
  ATprotect(&(term_l_29));
  term_l_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue));
  ATprotect(&(term_i_30));
  term_i_30 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
  ATprotect(&(term_s_30));
  term_s_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--slack", 0, ATtrue));
  ATprotect(&(term_t_30));
  term_t_30 = (ATerm) ATmakeAppl(ATmakeSymbol("*** module ", 0, ATtrue));
  ATprotect(&(term_u_30));
  term_u_30 = (ATerm) ATmakeAppl(ATmakeSymbol(" not found", 0, ATtrue));
  ATprotect(&(term_v_30));
  term_v_30 = (ATerm) ATmakeAppl(ATmakeSymbol(" reading ", 0, ATtrue));
  ATprotect(&(term_w_30));
  term_w_30 = (ATerm) ATmakeAppl(ATmakeSymbol("rtree", 0, ATtrue));
  ATprotect(&(term_x_30));
  term_x_30 = (ATerm) ATmakeAppl(ATmakeSymbol("str", 0, ATtrue));
  ATprotect(&(term_y_30));
  term_y_30 = (ATerm) ATmakeAppl(ATmakeSymbol("cr", 0, ATtrue));
  ATprotect(&(term_j_33));
  term_j_33 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_m_34));
  term_m_34 = (ATerm) ATmakeAppl(ATmakeSymbol("list-cons", 0, ATtrue));
  ATprotect(&(term_n_34));
  term_n_34 = (ATerm) ATmakeAppl(ATmakeSymbol("tuple-cons", 0, ATtrue));
  ATprotect(&(term_c_36));
  term_c_36 = (ATerm) ATmakeAppl(sym__2, term_o_27, term_b_27);
  ATprotect(&(term_m_36));
  term_m_36 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_t_36));
  term_t_36 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_u_36));
  term_u_36 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_v_36));
  term_v_36 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_w_36));
  term_w_36 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_x_36));
  term_x_36 = (ATerm) ATmakeAppl(sym__2, term_l_14, term_w_36);
  ATprotect(&(term_z_36));
  term_z_36 = (ATerm) ATmakeAppl(sym_Verbose_1, term_w_36);
  ATprotect(&(term_a_37));
  term_a_37 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_b_37));
  term_b_37 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_c_37));
  term_c_37 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_d_37));
  term_d_37 = (ATerm) ATmakeAppl(sym__2, term_c_37, term_k_27);
  ATprotect(&(term_e_37));
  term_e_37 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_f_37));
  term_f_37 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_v_37));
  term_v_37 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_z_37));
  term_z_37 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_a_38));
  term_a_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_f_38));
  term_f_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_x_38));
  term_x_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-I d | --Include d   Include modules from directory d", 0, ATtrue));
  ATprotect(&(term_y_38));
  term_y_38 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_z_38));
  term_z_38 = (ATerm) ATmakeAppl(sym__2, term_w_11, term_y_38);
  ATprotect(&(term_a_39));
  term_a_39 = (ATerm) ATmakeAppl(ATmakeSymbol("--nodep              Don't create dependency file", 0, ATtrue));
  ATprotect(&(term_b_39));
  term_b_39 = (ATerm) ATmakeAppl(ATmakeSymbol("--dep f | -d f       Write dependency to file f", 0, ATtrue));
  ATprotect(&(term_c_39));
  term_c_39 = (ATerm) ATmakeAppl(ATmakeSymbol("--imports", 0, ATtrue));
  ATprotect(&(term_e_39));
  term_e_39 = (ATerm) ATmakeAppl(sym__2, term_c_39, term_k_27);
  ATprotect(&(term_g_39));
  term_g_39 = (ATerm) ATmakeAppl(ATmakeSymbol("--imports            Produce a list of imported modules only", 0, ATtrue));
  ATprotect(&(term_h_39));
  term_h_39 = (ATerm) ATmakeAppl(sym__2, term_s_30, term_k_27);
  ATprotect(&(term_q_39));
  term_q_39 = (ATerm) ATmakeAppl(ATmakeSymbol("--slack              Continue when module is not found", 0, ATtrue));
  ATprotect(&(term_y_39));
  term_y_39 = (ATerm) ATmakeAppl(sym__2, term_e_29, term_y_38);
  ATprotect(&(term_b_40));
  term_b_40 = (ATerm) ATmakeAppl(ATmakeSymbol("--asfix              Do not implode the concrete syntax parts", 0, ATtrue));
  ATprotect(&(term_z_40));
  term_z_40 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_a_41));
  term_a_41 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_k_41));
  term_k_41 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_n_41));
  term_n_41 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_o_41));
  term_o_41 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_r_41));
  term_r_41 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_s_41));
  term_s_41 = (ATerm) ATmakeAppl(sym__2, term_v_37, term_z_37);
  ATprotect(&(term_c_42));
  term_c_42 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_d_42));
  term_d_42 = (ATerm) ATmakeAppl(sym__2, term_c_42, term_k_27);
  ATprotect(&(term_e_42));
  term_e_42 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_f_42));
  term_f_42 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_g_42));
  term_g_42 = (ATerm) ATmakeAppl(sym__2, term_f_42, term_k_27);
  ATprotect(&(term_l_42));
  term_l_42 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_m_42));
  term_m_42 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_k_43));
  term_k_43 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_p_43));
  term_p_43 = (ATerm) ATmakeAppl(sym__2, term_n_41, term_k_27);
  ATprotect(&(term_q_43));
  term_q_43 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_r_43));
  term_r_43 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_e_44));
  term_e_44 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_f_44));
  term_f_44 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_g_44));
  term_g_44 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_i_45));
  term_i_45 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_k_45));
  term_k_45 = (ATerm) ATmakeAppl(sym__2, term_i_45, term_k_27);
  ATprotect(&(term_n_45));
  term_n_45 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_o_45));
  term_o_45 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
}
ATerm u_7 (ATerm z_42, ATerm a_43, ATerm);
ATerm a_0 (ATerm);
ATerm write_to_0_0 (ATerm);
ATerm v_7 (ATerm y_20, ATerm z_20, ATerm);
ATerm create_dep_file_0_0 (ATerm);
ATerm x_7 (ATerm e_35, ATerm f_35, ATerm);
ATerm y_7 (ATerm d_43, ATerm e_43, ATerm);
ATerm z_7 (ATerm i_96 (ATerm), ATerm q_429, ATerm h_43, ATerm);
ATerm f_0 (ATerm);
ATerm write_to_text_0_0 (ATerm);
ATerm basename_1_0 (ATerm j_93 (ATerm), ATerm);
ATerm at_suffix_rev_1_0 (ATerm j_84 (ATerm), ATerm);
ATerm get_filename_0_0 (ATerm);
ATerm map_1_0 (ATerm l_83 (ATerm), ATerm);
ATerm u_0 (ATerm);
ATerm v_0 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm z_0 (ATerm);
ATerm c_1 (ATerm);
ATerm flatten_stratego_0_0 (ATerm);
ATerm genzip_4_0 (ATerm o_85 (ATerm), ATerm p_85 (ATerm), ATerm q_85 (ATerm), ATerm r_85 (ATerm), ATerm);
ATerm e_1 (ATerm);
ATerm d_8 (ATerm v_125, ATerm);
ATerm read_from_0_0 (ATerm);
ATerm pass_keep_0_0 (ATerm);
ATerm e_8 (ATerm x_37, ATerm y_37, ATerm);
ATerm pass_verbose_0_0 (ATerm);
ATerm xtc_transform_term_2_0 (ATerm v_105 (ATerm), ATerm w_105 (ATerm), ATerm);
ATerm f_8 (ATerm s_44, ATerm t_44, ATerm);
ATerm signal_to_descr_0_0 (ATerm);
ATerm signal_from_number_0_0 (ATerm);
ATerm warn_ifsignaled_0_0 (ATerm);
ATerm fork_0_0 (ATerm);
ATerm fork_and_wait_1_0 (ATerm d_98 (ATerm), ATerm);
ATerm table_getlist_0_0 (ATerm);
ATerm if_verbose5_1_0 (ATerm w_97 (ATerm), ATerm);
ATerm if_verbose4_1_0 (ATerm v_97 (ATerm), ATerm);
ATerm if_verbose6_1_0 (ATerm x_97 (ATerm), ATerm);
ATerm i_8 (ATerm p_87 (ATerm), ATerm j_26, ATerm i_26, ATerm);
ATerm k_1 (ATerm);
ATerm j_8 (ATerm l_49, ATerm m_49, ATerm n_49, ATerm);
ATerm k_8 (ATerm a_102 (ATerm), ATerm v_49, ATerm u_49, ATerm);
ATerm r_20 (ATerm e_20, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm l_8 (ATerm f_43, ATerm);
ATerm m_8 (ATerm g_35, ATerm h_35, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm a_24 (ATerm u_21, ATerm);
ATerm b_24 (ATerm c_22, ATerm d_22, ATerm f_22, ATerm);
ATerm c_24 (ATerm v_22, ATerm z_22, ATerm c_23, ATerm);
ATerm n_8 (ATerm);
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
ATerm repeat_2_0 (ATerm u_76 (ATerm), ATerm v_76 (ATerm), ATerm);
ATerm xtc_location_0_0 (ATerm);
ATerm l_2 (ATerm);
ATerm m_2 (ATerm);
ATerm n_2 (ATerm);
ATerm o_2 (ATerm);
ATerm q_2 (ATerm);
ATerm xtc_load_0_0 (ATerm);
ATerm r_2 (ATerm);
ATerm u_2 (ATerm);
ATerm j_28 (ATerm g_27, ATerm);
ATerm f_3 (ATerm);
ATerm g_3 (ATerm);
ATerm h_3 (ATerm);
ATerm i_3 (ATerm);
ATerm xtc_find_0_0 (ATerm);
ATerm xtc_command_1_0 (ATerm m_105 (ATerm), ATerm);
ATerm o_8 (ATerm v_94 (ATerm), ATerm f_39, ATerm d_39, ATerm);
ATerm q_29 (ATerm g_29, ATerm);
ATerm r_29 (ATerm i_29, ATerm j_29, ATerm k_29, ATerm);
ATerm l_3 (ATerm);
ATerm open_file_0_0 (ATerm);
ATerm p_8 (ATerm y_33, ATerm z_33, ATerm);
ATerm new_0_0 (ATerm);
ATerm new_file_0_0 (ATerm);
ATerm m_3 (ATerm);
ATerm xtc_new_file_0_0 (ATerm);
ATerm xtc_transform_file_2_0 (ATerm m_0 (ATerm), ATerm n_0 (ATerm), ATerm);
ATerm c_33 (ATerm a_31, ATerm e_31, ATerm g_31, ATerm);
ATerm d_33 (ATerm r_32, ATerm s_32, ATerm);
ATerm p_3 (ATerm);
ATerm q_3 (ATerm);
ATerm r_3 (ATerm);
ATerm t_3 (ATerm);
ATerm parse_module_0_0 (ATerm);
ATerm debug_1_0 (ATerm g_96 (ATerm), ATerm);
ATerm if_verbose3_1_0 (ATerm u_97 (ATerm), ATerm);
ATerm fetch_elem_1_0 (ATerm x_83 (ATerm), ATerm);
ATerm q_8 (ATerm y_34, ATerm z_34, ATerm);
ATerm is_relpath_0_0 (ATerm);
ATerm r_8 (ATerm a_76 (ATerm), ATerm n_19, ATerm m_19, ATerm);
ATerm d_4 (ATerm);
ATerm get_module_1_0 (ATerm z_75 (ATerm), ATerm);
ATerm t_8 (ATerm s_87 (ATerm), ATerm t_87 (ATerm), ATerm n_26, ATerm m_26, ATerm);
ATerm u_8 (ATerm k_87 (ATerm), ATerm h_26, ATerm g_26, ATerm);
ATerm j_4 (ATerm);
ATerm l_4 (ATerm);
ATerm m_4 (ATerm);
ATerm z_8 (ATerm g_571, ATerm l_571, ATerm a_53, ATerm);
ATerm n_4 (ATerm);
ATerm p_4 (ATerm);
ATerm s_4 (ATerm);
ATerm j_39 (ATerm o_37, ATerm p_37, ATerm q_37, ATerm);
ATerm t_4 (ATerm);
ATerm diff_0_0 (ATerm);
ATerm b_9 (ATerm u_106 (ATerm), ATerm v_106 (ATerm), ATerm w_106 (ATerm), ATerm r_55, ATerm o_55, ATerm v_55, ATerm s_55, ATerm p_55, ATerm q_55, ATerm);
ATerm GnNext_3_0 (ATerm u_106 (ATerm), ATerm v_106 (ATerm), ATerm w_106 (ATerm), ATerm);
ATerm while_not_2_0 (ATerm l_77 (ATerm), ATerm m_77 (ATerm), ATerm);
ATerm for_3_0 (ATerm o_77 (ATerm), ATerm p_77 (ATerm), ATerm q_77 (ATerm), ATerm);
ATerm v_4 (ATerm);
ATerm b_5 (ATerm);
ATerm graph_nodes_roots_3_0 (ATerm r_106 (ATerm), ATerm s_106 (ATerm), ATerm t_106 (ATerm), ATerm);
ATerm filter_1_0 (ATerm s_90 (ATerm), ATerm);
ATerm d_5 (ATerm);
ATerm h_5 (ATerm);
ATerm i_5 (ATerm);
ATerm k_5 (ATerm);
ATerm m_5 (ATerm);
ATerm n_5 (ATerm);
ATerm e_9 (ATerm d_19, ATerm);
ATerm g_9 (ATerm z_39, ATerm a_40, ATerm);
ATerm copy_to_1_0 (ATerm l_0 (ATerm), ATerm);
ATerm h_9 (ATerm t_48, ATerm u_48, ATerm);
ATerm end_scope_1_0 (ATerm s_94 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm q_76 (ATerm), ATerm r_76 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm r_94 (ATerm), ATerm);
ATerm p_5 (ATerm);
ATerm v_5 (ATerm);
ATerm w_5 (ATerm);
ATerm xtc_temp_files_1_0 (ATerm y_104 (ATerm), ATerm);
ATerm z_5 (ATerm);
ATerm xtc_io_1_0 (ATerm z_104 (ATerm), ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm i_6 (ATerm);
ATerm k_6 (ATerm);
ATerm l_6 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm m_6 (ATerm);
ATerm n_6 (ATerm);
ATerm o_6 (ATerm);
ATerm q_6 (ATerm);
ATerm r_6 (ATerm);
ATerm t_6 (ATerm);
ATerm u_6 (ATerm);
ATerm v_6 (ATerm);
ATerm w_6 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm o_9 (ATerm t_56, ATerm u_56, ATerm);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm);
ATerm x_6 (ATerm);
ATerm z_6 (ATerm);
ATerm b_7 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm e_7 (ATerm);
ATerm f_7 (ATerm);
ATerm g_7 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm m_9 (ATerm o_48, ATerm p_48, ATerm n_48, ATerm);
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm);
ATerm at_end_1_0 (ATerm b_84 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm j_52 (ATerm a_52, ATerm);
ATerm conc_0_0 (ATerm);
ATerm f_9 (ATerm z_56, ATerm y_56, ATerm);
ATerm j_7 (ATerm);
ATerm k_7 (ATerm);
ATerm l_7 (ATerm);
ATerm m_7 (ATerm);
ATerm n_7 (ATerm);
ATerm q_7 (ATerm);
ATerm r_7 (ATerm);
ATerm s_7 (ATerm);
ATerm t_7 (ATerm);
ATerm a_8 (ATerm);
ATerm b_8 (ATerm);
ATerm c_8 (ATerm);
ATerm g_8 (ATerm);
ATerm h_8 (ATerm);
ATerm s_8 (ATerm);
ATerm v_8 (ATerm);
ATerm w_8 (ATerm);
ATerm x_8 (ATerm);
ATerm pack_stratego_options_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm i_9 (ATerm r_37, ATerm s_37, ATerm);
ATerm foldr_2_0 (ATerm o_89 (ATerm), ATerm p_89 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm y_8 (ATerm);
ATerm a_9 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm s_97 (ATerm), ATerm);
ATerm d_9 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm q_9 (ATerm);
ATerm need_help_1_0 (ATerm g_99 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm);
ATerm l_9 (ATerm f_50, ATerm g_50, ATerm);
ATerm s_9 (ATerm);
ATerm t_9 (ATerm);
ATerm u_9 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm fetch_1_0 (ATerm v_83 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm w_9 (ATerm);
ATerm x_9 (ATerm);
ATerm z_9 (ATerm);
ATerm b_10 (ATerm);
ATerm c_10 (ATerm);
ATerm f_10 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm x_61 (ATerm), ATerm y_61 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm x_101 (ATerm), ATerm);
ATerm h_10 (ATerm);
ATerm j_10 (ATerm);
ATerm k_10 (ATerm);
ATerm p_10 (ATerm);
ATerm parse_options_1_0 (ATerm w_101 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm i_99 (ATerm), ATerm j_99 (ATerm), ATerm k_99 (ATerm), ATerm l_99 (ATerm), ATerm);
ATerm r_10 (ATerm);
ATerm w_10 (ATerm);
ATerm a_11 (ATerm);
ATerm g_11 (ATerm);
ATerm l_11 (ATerm);
ATerm pack_stratego_0_0 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm u_7 (ATerm z_42, ATerm a_43, ATerm t)
{
  ATerm b_0 = NULL;
  t = SSL_write_term_to_stream_baf(z_42, a_43);
  b_0 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, b_0);
  return(t);
}
ATerm a_0 (ATerm t)
{
  ATerm r_0 = NULL,s_0 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm m_11 = ATgetArgument(t, 0);
      if(match_cons(m_11, sym_Stream_1))
        {
          r_0 = ATgetArgument(m_11, 0);
        }
      else
        _fail(t);
      s_0 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_7(r_0, s_0, t);
  return(t);
}
ATerm write_to_0_0 (ATerm t)
{
  ATerm o_0 = NULL,q_0 = NULL;
  o_0 = t;
  t = xtc_new_file_0_0(t);
  q_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_0, o_0);
  t = z_7(a_0, q_0, o_0, t);
  t = SSL_close_file(q_0);
  t = (ATerm) ATmakeAppl(sym_FILE_1, q_0);
  return(t);
}
ATerm v_7 (ATerm y_20, ATerm z_20, ATerm t)
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
          ATerm n_11 = t;
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
              t = n_11;
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
        t = term_u_11;
        t = get_config_0_0(t);
        ;
        LocalPopChoice(s_11);
      }
    else
      {
        t = r_11;
        {
          ATerm v_11 = t;
          if((PushChoice() == 0))
            {
              t = term_w_11;
              t = get_config_0_0(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = v_11;
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
    t = term_c_12;
    c_2 = t;
    t = (ATerm) ATinsert(CheckATermList(u_1), term_f_12);
    d_2 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_c_12, (ATerm) ATinsert(CheckATermList(u_1), term_f_12));
    t = v_7(c_2, d_2, t);
    w_1 = t;
    t = (ATerm) ATinsert(CheckATermList(w_1), t_1);
    a_2 = t;
    t = SSL_printnl(v_1, a_2);
    t = SSL_close_file(v_1);
    t = (ATerm) ATmakeAppl(sym_FILE_1, e_2);
  }
  return(t);
}
ATerm x_7 (ATerm e_35, ATerm f_35, ATerm t)
{
  ATerm t_2 = NULL;
  t = SSL_fputc(e_35, f_35);
  t_2 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, t_2);
  return(t);
}
ATerm y_7 (ATerm d_43, ATerm e_43, ATerm t)
{
  ATerm v_2 = NULL;
  t = SSL_write_term_to_stream_text(d_43, e_43);
  v_2 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, v_2);
  return(t);
}
ATerm z_7 (ATerm i_96 (ATerm), ATerm q_429, ATerm h_43, ATerm t)
{
  ATerm w_2 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, q_429, term_b_12);
  t = n_8(t);
  w_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_2, h_43);
  t = i_96(t);
  t = fclose_0_0(t);
  t = h_43;
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
  t = y_7(c_3, d_3, t);
  z_2 = t;
  t = term_i_12;
  a_3 = t;
  t = z_2;
  if(match_cons(t, sym_Stream_1))
    {
      b_3 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_i_12, z_2);
  t = x_7(a_3, b_3, t);
  return(t);
}
ATerm write_to_text_0_0 (ATerm t)
{
  ATerm x_2 = NULL,y_2 = NULL;
  x_2 = t;
  t = xtc_new_file_0_0(t);
  y_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_2, x_2);
  t = z_7(f_0, y_2, x_2, t);
  t = SSL_close_file(y_2);
  t = (ATerm) ATmakeAppl(sym_FILE_1, y_2);
  return(t);
}
ATerm basename_1_0 (ATerm j_93 (ATerm), ATerm t)
{
  ATerm o_3 = NULL,s_3 = NULL;
  s_3 = t;
  t = SSL_explode_string(s_3);
  {
    ATerm j_12 = t;
    int r_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_5 (ATerm t)
        {
          ATerm x_4 = NULL,y_4 = NULL,a_5 = NULL;
          x_4 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              y_4 = ATgetFirst((ATermList) t);
              a_5 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          {
            ATerm s_12 = t;
            int x_12 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm b_2 = NULL,h_2 = NULL,d_1 = NULL;
                t = SSLgetAnnotations(x_4);
                b_2 = t;
                t = a_5;
                t = e_5(t);
                h_2 = t;
                t = (ATerm) ATinsert(CheckATermList(h_2), y_4);
                d_1 = t;
                t = SSLsetAnnotations(d_1, b_2);
                ;
                LocalPopChoice(x_12);
              }
            else
              {
                t = s_12;
                {
                  ATerm y_12 = t;
                  int a_13 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm p_2 = NULL,g_1 = NULL;
                      t = SSLgetAnnotations(x_4);
                      p_2 = t;
                      t = y_4;
                      if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 47)))
                        _fail(t);
                      t = (ATerm) ATinsert(CheckATermList(a_5), y_4);
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
                        t = SSLgetAnnotations(x_4);
                        k_3 = t;
                        t = y_4;
                        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 46)))
                          _fail(t);
                        t = a_5;
                        t = j_93(t);
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
        t = e_5(t);
        ;
        LocalPopChoice(r_12);
      }
    else
      {
        t = j_12;
      }
    o_3 = t;
    t = SSL_implode_string(o_3);
  }
  return(t);
}
ATerm at_suffix_rev_1_0 (ATerm j_84 (ATerm), ATerm t)
{
  ATerm c_6 (ATerm t)
  {
    ATerm b_13 = t;
    int c_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_5 = NULL,a_6 = NULL,b_6 = NULL,f_4 = NULL,z_4 = NULL,l_1 = NULL;
        y_5 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            a_6 = ATgetFirst((ATermList) t);
            b_6 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(y_5);
        f_4 = t;
        t = b_6;
        t = c_6(t);
        z_4 = t;
        t = (ATerm) ATinsert(CheckATermList(z_4), a_6);
        l_1 = t;
        t = SSLsetAnnotations(l_1, f_4);
        ;
        LocalPopChoice(c_13);
      }
    else
      {
        t = b_13;
        t = j_84(t);
      }
    return(t);
  }
  t = c_6(t);
  return(t);
}
ATerm get_filename_0_0 (ATerm t)
{
  ATerm g_6 = NULL,h_6 = NULL,j_6 = NULL;
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
              if(((g_6 != NULL) && (g_6 != (ATerm) ATgetNext((ATermList) t))))
                _fail((ATerm) ATgetNext((ATermList) t));
              else
                g_6 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          return(t);
        }
        t = at_suffix_rev_1_0(p_0, t);
        t = not_null(g_6);
        ;
        LocalPopChoice(e_13);
      }
    else
      {
        t = d_13;
      }
    h_6 = t;
    t = SSL_implode_string(h_6);
  }
  return(t);
}
ATerm map_1_0 (ATerm l_83 (ATerm), ATerm t)
{
  ATerm d_7 (ATerm t)
  {
    ATerm y_6 = NULL,a_7 = NULL,c_7 = NULL;
    y_6 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = y_6;
      }
    else
      {
        ATerm s_5 = NULL,e_6 = NULL,f_6 = NULL,q_1 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            a_7 = ATgetFirst((ATermList) t);
            c_7 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(y_6);
        s_5 = t;
        t = a_7;
        t = l_83(t);
        e_6 = t;
        t = c_7;
        t = d_7(t);
        f_6 = t;
        t = (ATerm) ATinsert(CheckATermList(f_6), e_6);
        q_1 = t;
        t = SSLsetAnnotations(q_1, s_5);
      }
    return(t);
  }
  t = d_7(t);
  return(t);
}
ATerm u_0 (ATerm t)
{
  ATerm g_13 = t;
  int h_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(h_13);
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
      ATerm w_7 = NULL;
      w_7 = t;
      t = SSL_is_string(w_7);
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
              ATerm c_9 = NULL,k_9 = NULL,p_9 = NULL;
              c_9 = t;
              if(match_cons(t, sym_Path_1))
                {
                  k_9 = ATgetArgument(t, 0);
                  t = k_9;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      k_9 = ATgetArgument(t, 0);
                      t = k_9;
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
                      ATerm v_9 = NULL,y_9 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          k_9 = ATgetArgument(t, 0);
                          p_9 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = k_9;
                      t = eval_config_0_0(t);
                      v_9 = t;
                      t = p_9;
                      t = eval_config_0_0(t);
                      y_9 = t;
                      t = (ATerm) ATmakeAppl(sym__2, v_9, y_9);
                      t = p_8(v_9, y_9, t);
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
  ATerm i_10 = NULL,m_10 = NULL;
  i_10 = t;
  t = term_q_13;
  m_10 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_q_13, i_10);
  t = l_9(m_10, i_10, t);
  {
    ATerm r_13 = t;
    int s_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_10 = NULL,o_10 = NULL;
        t = eval_config_0_0(t);
        n_10 = t;
        t = term_q_13;
        o_10 = t;
        t = SSL_table_put(o_10, i_10, n_10);
        t = n_10;
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
  ATerm u_10 = NULL;
  if(match_cons(t, sym_Specification_1))
    {
      u_10 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_10;
  t = filter_1_0(c_1, t);
  return(t);
}
ATerm c_1 (ATerm t)
{
  ATerm t_13 = t;
  if((PushChoice() == 0))
    {
      ATerm x_10 = NULL,y_10 = NULL,z_10 = NULL,u_3 = NULL;
      z_10 = t;
      if(match_cons(t, sym_Imports_1))
        {
          y_10 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(z_10);
      x_10 = t;
      t = (ATerm) ATmakeAppl(sym_Imports_1, y_10);
      u_3 = t;
      t = SSLsetAnnotations(u_3, x_10);
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
  ATerm t_10 = NULL;
  t = map_1_0(z_0, t);
  t = concat_0_0(t);
  t_10 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, t_10);
  return(t);
}
ATerm genzip_4_0 (ATerm o_85 (ATerm), ATerm p_85 (ATerm), ATerm q_85 (ATerm), ATerm r_85 (ATerm), ATerm t)
{
  ATerm j_11 (ATerm t)
  {
    ATerm u_13 = t;
    int v_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_85(t);
        ;
        LocalPopChoice(v_13);
      }
    else
      {
        t = u_13;
        {
          ATerm b_11 = NULL,c_11 = NULL,d_11 = NULL,e_11 = NULL,f_11 = NULL,i_11 = NULL,x_3 = NULL;
          t = p_85(t);
          i_11 = t;
          if(match_cons(t, sym__2))
            {
              c_11 = ATgetArgument(t, 0);
              d_11 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(i_11);
          b_11 = t;
          t = c_11;
          t = r_85(t);
          e_11 = t;
          t = d_11;
          t = j_11(t);
          f_11 = t;
          t = (ATerm) ATmakeAppl(sym__2, e_11, f_11);
          x_3 = t;
          t = SSLsetAnnotations(x_3, b_11);
          t = q_85(t);
        }
      }
    return(t);
  }
  t = j_11(t);
  return(t);
}
ATerm e_1 (ATerm t)
{
  ATerm k_11 = NULL;
  if(match_cons(t, sym_Imports_1))
    {
      k_11 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = k_11;
  return(t);
}
ATerm d_8 (ATerm v_125, ATerm t)
{
  t = v_125;
  t = filter_1_0(e_1, t);
  t = concat_0_0(t);
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm q_11 = NULL;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_w_13;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      ATerm t_11 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          q_11 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, term_y_13);
      t_11 = t;
      t = (ATerm) ATmakeAppl(sym__2, q_11, (ATerm) ATinsert(ATempty, term_y_13));
      t = q_8(q_11, t_11, t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
ATerm pass_keep_0_0 (ATerm t)
{
  ATerm h_12 = NULL,k_12 = NULL,l_12 = NULL,n_12 = NULL;
  t = term_a_14;
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
        t = term_i_14;
      }
    k_12 = t;
    t = term_i_14;
    n_12 = t;
    t = (ATerm) ATmakeAppl(sym__2, k_12, term_i_14);
    t = e_8(k_12, n_12, t);
    l_12 = t;
    t = SSL_int_to_string(l_12);
    h_12 = t;
    t = (ATerm) ATinsert(ATinsert(ATempty, h_12), term_a_14);
  }
  return(t);
}
ATerm e_8 (ATerm x_37, ATerm y_37, ATerm t)
{
  ATerm j_14 = t;
  int k_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(x_37, y_37);
      ;
      LocalPopChoice(k_14);
    }
  else
    {
      t = j_14;
      t = SSL_subtr(x_37, y_37);
    }
  return(t);
}
ATerm pass_verbose_0_0 (ATerm t)
{
  ATerm p_12 = NULL,q_12 = NULL,t_12 = NULL,u_12 = NULL;
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
        t = term_i_14;
      }
    q_12 = t;
    t = term_i_14;
    u_12 = t;
    t = (ATerm) ATmakeAppl(sym__2, q_12, term_i_14);
    t = e_8(q_12, u_12, t);
    t_12 = t;
    t = SSL_int_to_string(t_12);
    p_12 = t;
    t = (ATerm) ATinsert(ATinsert(ATempty, p_12), term_l_14);
  }
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm v_105 (ATerm), ATerm w_105 (ATerm), ATerm t)
{
  t = write_to_0_0(t);
  t = xtc_transform_file_2_0(v_105, w_105, t);
  t = read_from_0_0(t);
  return(t);
}
ATerm f_8 (ATerm s_44, ATerm t_44, ATerm t)
{
  t = SSL_execvp(s_44, t_44);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm z_13 = NULL,c_14 = NULL,d_14 = NULL,e_14 = NULL;
  z_13 = t;
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
      ATerm j_9 = NULL,n_9 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          c_14 = ATgetArgument(t, 0);
          d_14 = ATgetArgument(t, 1);
          e_14 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(d_14);
      j_9 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, e_14), term_v_14), j_9), term_r_14), c_14);
      n_9 = t;
      t = SSL_concat_strings(n_9);
    }
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm h_14 = NULL;
  h_14 = t;
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
              if((h_14 != ATgetArgument(t, 1)))
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
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_e_21), term_a_21), term_p_20), term_i_20), term_c_20), term_y_19), term_u_19), term_j_19), term_f_19), term_b_19), term_t_18), term_o_18), term_j_18), term_e_18), term_z_17), term_t_17), term_p_17), term_k_17), term_d_17), term_w_16), term_q_16), term_l_16), term_e_16), term_u_15), term_q_15), term_l_15), term_h_15), term_c_15);
        t = fetch_elem_1_0(f_1, t);
        ;
        LocalPopChoice(x_14);
      }
    else
      {
        t = w_14;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, h_14);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm s_14 = NULL,e_15 = NULL;
  s_14 = t;
  {
    ATerm f_21 = t;
    int g_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm h_21 = ATgetArgument(t, 0);
            e_15 = ATgetArgument(t, 1);
            {
              ATerm i_21 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(g_21);
        {
          ATerm j_21 = t;
          int k_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm a_10 = NULL,d_10 = NULL,e_10 = NULL;
              t = e_15;
              {
                ATerm l_21 = t;
                if((PushChoice() == 0))
                  {
                    if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
                      _fail(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = l_21;
                  }
                t = signal_from_number_0_0(t);
                t = signal_to_descr_0_0(t);
                a_10 = t;
                t = term_m_21;
                d_10 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, a_10), term_n_21);
                e_10 = t;
                t = SSL_printnl(d_10, e_10);
                t = (ATerm) ATmakeAppl(sym__2, term_m_21, (ATerm) ATinsert(ATinsert(ATempty, a_10), term_n_21));
              }
              ;
              LocalPopChoice(k_21);
            }
          else
            {
              t = j_21;
              t = s_14;
            }
        }
      }
    else
      {
        t = f_21;
        t = s_14;
      }
    t = s_14;
  }
  return(t);
}
ATerm fork_0_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_and_wait_1_0 (ATerm d_98 (ATerm), ATerm t)
{
  ATerm v_15 = NULL,w_15 = NULL;
  w_15 = t;
  t = fork_0_0(t);
  v_15 = t;
  {
    ATerm o_21 = t;
    int p_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = w_15;
        t = d_98(t);
        ;
        LocalPopChoice(p_21);
      }
    else
      {
        t = o_21;
        t = SSL_waitpid(v_15);
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
        t = w_15;
      }
  }
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm a_16 = NULL;
  ATerm i_1 (ATerm t)
  {
    ATerm b_16 = NULL,g_16 = NULL;
    b_16 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(a_16), b_16);
    t = l_9(not_null(a_16), b_16, t);
    g_16 = t;
    t = (ATerm) ATmakeAppl(sym__2, b_16, g_16);
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
ATerm if_verbose5_1_0 (ATerm w_97 (ATerm), ATerm t)
{
  ATerm i_16 = NULL;
  i_16 = t;
  {
    ATerm t_21 = t;
    int v_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_16 = NULL;
        t = term_l_14;
        t = get_config_0_0(t);
        k_16 = t;
        t = (ATerm) ATmakeAppl(sym__2, k_16, term_f_20);
        t = geq_0_0(t);
        t = i_16;
        t = w_97(t);
        ;
        LocalPopChoice(v_21);
      }
    else
      {
        t = t_21;
        t = i_16;
      }
  }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm v_97 (ATerm), ATerm t)
{
  ATerm s_16 = NULL;
  s_16 = t;
  {
    ATerm w_21 = t;
    int y_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_16 = NULL;
        t = term_l_14;
        t = get_config_0_0(t);
        x_16 = t;
        t = (ATerm) ATmakeAppl(sym__2, x_16, term_n_17);
        t = geq_0_0(t);
        t = s_16;
        t = v_97(t);
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
ATerm if_verbose6_1_0 (ATerm x_97 (ATerm), ATerm t)
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
        t = x_97(t);
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
ATerm i_8 (ATerm p_87 (ATerm), ATerm j_26, ATerm i_26, ATerm t)
{
  ATerm h_18 (ATerm t)
  {
    ATerm v_17 = NULL,y_17 = NULL,b_18 = NULL;
    v_17 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = i_26;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            y_17 = ATgetFirst((ATermList) t);
            b_18 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm b_22 = t;
          int e_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = v_17;
              {
                ATerm j_1 (ATerm t)
                {
                  t = i_26;
                  return(t);
                }
                t = t_8(p_87, j_1, y_17, b_18, t);
                t = h_18(t);
              }
              ;
              LocalPopChoice(e_22);
            }
          else
            {
              t = b_22;
              {
                ATerm l_10 = NULL,v_10 = NULL,a_4 = NULL;
                t = SSLgetAnnotations(v_17);
                l_10 = t;
                t = b_18;
                t = h_18(t);
                v_10 = t;
                t = (ATerm) ATinsert(CheckATermList(v_10), y_17);
                a_4 = t;
                t = SSLsetAnnotations(a_4, l_10);
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
ATerm j_8 (ATerm l_49, ATerm m_49, ATerm n_49, ATerm t)
{
  ATerm r_18 = NULL,v_18 = NULL,y_18 = NULL;
  r_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_49, m_49);
  {
    ATerm g_22 = t;
    int h_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm i_22 = ATgetArgument(t, 0);
            ATerm j_22 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, l_49, m_49);
        t = l_9(l_49, m_49, t);
        ;
        LocalPopChoice(h_22);
      }
    else
      {
        t = g_22;
        t = (ATerm) ATempty;
      }
    y_18 = t;
    t = (ATerm) ATmakeAppl(sym__2, y_18, n_49);
    t = i_8(k_1, y_18, n_49, t);
    v_18 = t;
    t = SSL_table_put(l_49, m_49, v_18);
    t = r_18;
  }
  return(t);
}
ATerm k_8 (ATerm a_102 (ATerm), ATerm v_49, ATerm u_49, ATerm t)
{
  ATerm m_1 (ATerm t)
  {
    ATerm r_19 = NULL,t_19 = NULL;
    if(match_cons(t, sym__2))
      {
        r_19 = ATgetArgument(t, 0);
        t_19 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, v_49, r_19, t_19);
    t = a_102(t);
    return(t);
  }
  t = u_49;
  t = map_1_0(m_1, t);
  return(t);
}
ATerm r_20 (ATerm e_20, ATerm t)
{
  t = SSL_fclose(e_20);
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
        ATerm k_22 = t;
        int l_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(l_20);
            ;
            LocalPopChoice(l_22);
          }
        else
          {
            t = k_22;
            t = r_20(m_20, t);
          }
      }
    }
  else
    {
      t = r_20(m_20, t);
    }
  return(t);
}
ATerm l_8 (ATerm f_43, ATerm t)
{
  t = SSL_read_term_from_stream(f_43);
  return(t);
}
ATerm m_8 (ATerm g_35, ATerm h_35, ATerm t)
{
  ATerm s_20 = NULL;
  t = SSL_fopen(g_35, h_35);
  s_20 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, s_20);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm t_20 = NULL;
  t = SSL_stdin_stream();
  t_20 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, t_20);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm v_20 = NULL;
  t = SSL_stdout_stream();
  v_20 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, v_20);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm x_20 = NULL;
  t = SSL_stderr_stream();
  x_20 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, x_20);
  return(t);
}
ATerm a_24 (ATerm u_21, ATerm t)
{
  ATerm x_21 = NULL;
  t = SSL_explode_term(u_21);
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
ATerm b_24 (ATerm c_22, ATerm d_22, ATerm f_22, ATerm t)
{
  ATerm m_22 = NULL,n_22 = NULL,o_22 = NULL,t_22 = NULL,c_4 = NULL;
  t = SSLgetAnnotations(f_22);
  o_22 = t;
  t = c_22;
  if(match_cons(t, sym_Path_1))
    {
      t_22 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, t_22, d_22);
  c_4 = t;
  t = SSLsetAnnotations(c_4, o_22);
  if(match_cons(t, sym__2))
    {
      m_22 = ATgetArgument(t, 0);
      n_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_8(m_22, n_22, t);
  return(t);
}
ATerm c_24 (ATerm v_22, ATerm z_22, ATerm c_23, ATerm t)
{
  ATerm d_23 = NULL,e_23 = NULL,f_23 = NULL,k_23 = NULL,e_4 = NULL;
  t = SSLgetAnnotations(c_23);
  f_23 = t;
  t = SSL_is_string(v_22);
  k_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_23, z_22);
  e_4 = t;
  t = SSLsetAnnotations(e_4, f_23);
  if(match_cons(t, sym__2))
    {
      d_23 = ATgetArgument(t, 0);
      e_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_8(d_23, e_23, t);
  return(t);
}
ATerm n_8 (ATerm t)
{
  ATerm v_23 = NULL,w_23 = NULL,z_23 = NULL;
  v_23 = t;
  if(match_cons(t, sym__2))
    {
      w_23 = ATgetArgument(t, 0);
      z_23 = ATgetArgument(t, 1);
      {
        ATerm s_22 = t;
        int u_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = a_24(v_23, t);
            ;
            LocalPopChoice(u_22);
          }
        else
          {
            t = s_22;
            {
              ATerm w_22 = t;
              int x_22 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = b_24(w_23, z_23, v_23, t);
                  ;
                  LocalPopChoice(x_22);
                }
              else
                {
                  t = w_22;
                  t = c_24(w_23, z_23, v_23, t);
                }
            }
          }
      }
    }
  else
    {
      t = a_24(v_23, t);
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
  ATerm d_24 = NULL,e_24 = NULL,n_24 = NULL;
  ATerm a_23 = t;
  int b_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_24 = NULL;
      o_24 = t;
      t = (ATerm) ATmakeAppl(sym__2, o_24, term_g_23);
      t = n_8(t);
      ;
      LocalPopChoice(b_23);
    }
  else
    {
      t = a_23;
      t = debug_1_0(n_1, t);
      _fail(t);
    }
  e_24 = t;
  if(match_cons(t, sym_Stream_1))
    {
      n_24 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = l_8(n_24, t);
  d_24 = t;
  t = e_24;
  t = fclose_0_0(t);
  t = d_24;
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
  ATerm j_23 = t;
  int l_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_24 = NULL,s_24 = NULL;
      q_24 = t;
      t = (ATerm) ATinsert(ATempty, term_m_23);
      s_24 = t;
      t = (ATerm) ATmakeAppl(sym__2, q_24, (ATerm) ATinsert(ATempty, term_m_23));
      t = q_8(q_24, s_24, t);
      LocalPopChoice(l_23);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = j_23;
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
                t = q_8(v_24, w_24, t);
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
  ATerm l_25 = NULL,m_25 = NULL,n_25 = NULL;
  l_25 = t;
  t = term_m_21;
  m_25 = t;
  t = (ATerm) ATinsert(ATempty, term_s_23);
  n_25 = t;
  t = SSL_printnl(m_25, n_25);
  t = l_25;
  return(t);
}
ATerm i_2 (ATerm t)
{
  ATerm o_25 = NULL,q_25 = NULL,r_25 = NULL;
  if(match_cons(t, sym__3))
    {
      o_25 = ATgetArgument(t, 0);
      q_25 = ATgetArgument(t, 1);
      r_25 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = j_8(o_25, q_25, r_25, t);
  return(t);
}
ATerm j_2 (ATerm t)
{
  ATerm s_25 = NULL,t_25 = NULL,v_25 = NULL;
  s_25 = t;
  t = term_m_21;
  t_25 = t;
  t = (ATerm) ATinsert(ATempty, term_t_23);
  v_25 = t;
  t = SSL_printnl(t_25, v_25);
  t = s_25;
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
  ATerm x_24 = NULL,y_24 = NULL,z_24 = NULL,c_25 = NULL,d_25 = NULL,e_25 = NULL,f_25 = NULL,g_25 = NULL,h_25 = NULL,i_25 = NULL;
  x_24 = t;
  t = if_verbose5_1_0(x_1, t);
  {
    ATerm u_23 = t;
    if((PushChoice() == 0))
      {
        ATerm j_25 = NULL,k_25 = NULL;
        t = term_x_23;
        j_25 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, x_24);
        k_25 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_x_23, (ATerm) ATmakeAppl(sym_Imported_1, x_24));
        t = l_9(j_25, k_25, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = u_23;
      }
    z_24 = t;
    t = term_x_23;
    g_25 = t;
    t = term_y_23;
    h_25 = t;
    t = (ATerm) ATinsert(ATempty, x_24);
    i_25 = t;
    t = SSL_table_put(g_25, h_25, i_25);
    t = z_24;
    t = if_verbose4_1_0(z_1, t);
    t = read_repository_file_0_0(t);
    t = if_verbose6_1_0(g_2, t);
    y_24 = t;
    t = term_x_23;
    f_25 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_x_23, y_24);
    t = k_8(i_2, f_25, y_24, t);
    t = if_verbose6_1_0(j_2, t);
    t = term_x_23;
    c_25 = t;
    t = (ATerm) ATmakeAppl(sym_Imported_1, x_24);
    d_25 = t;
    t = (ATerm) ATempty;
    e_25 = t;
    t = SSL_table_put(c_25, d_25, e_25);
    t = (ATerm) ATmakeAppl(sym__3, term_x_23, (ATerm)ATmakeAppl(sym_Imported_1, x_24), (ATerm) ATempty);
    t = if_verbose4_1_0(k_2, t);
  }
  return(t);
}
ATerm repeat_2_0 (ATerm u_76 (ATerm), ATerm v_76 (ATerm), ATerm t)
{
  ATerm b_26 (ATerm t)
  {
    ATerm f_24 = t;
    int g_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_76(t);
        t = b_26(t);
        ;
        LocalPopChoice(g_24);
      }
    else
      {
        t = f_24;
        t = v_76(t);
      }
    return(t);
  }
  t = b_26(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm h_24 = t;
  int i_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_j_24;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(i_24);
    }
  else
    {
      t = h_24;
      {
        ATerm k_24 = t;
        int l_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_26 = NULL;
            t = term_m_24;
            d_26 = t;
            t = SSL_getenv(d_26);
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
ATerm l_2 (ATerm t)
{
  t = debug_1_0(m_2, t);
  return(t);
}
ATerm m_2 (ATerm t)
{
  t = term_p_24;
  return(t);
}
ATerm n_2 (ATerm t)
{
  ATerm v_26 = NULL,x_26 = NULL;
  t = term_x_23;
  v_26 = t;
  t = term_r_24;
  x_26 = t;
  t = term_t_24;
  t = l_9(v_26, x_26, t);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm u_24 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = u_24;
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
  t = term_a_25;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm p_26 = NULL;
  t = if_verbose5_1_0(l_2, t);
  p_26 = t;
  {
    ATerm b_25 = t;
    int p_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_26 = NULL,t_26 = NULL;
        t = term_x_23;
        r_26 = t;
        t = term_y_23;
        t_26 = t;
        t = term_u_25;
        t = l_9(r_26, t_26, t);
        ;
        LocalPopChoice(p_25);
      }
    else
      {
        t = b_25;
        {
          ATerm u_26 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          u_26 = t;
          t = repeat_2_0(n_2, _id, t);
          t = u_26;
        }
      }
    t = p_26;
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
  t = term_w_25;
  return(t);
}
ATerm j_28 (ATerm g_27, ATerm t)
{
  ATerm p_27 = NULL,q_27 = NULL,r_27 = NULL;
  t = term_x_23;
  q_27 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, g_27);
  r_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_23, (ATerm) ATmakeAppl(sym_Tool_1, g_27));
  t = l_9(q_27, r_27, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm x_25 = ATgetFirst((ATermList) t);
      if(match_cons(x_25, sym__2))
        {
          ATerm e_26 = ATgetArgument(x_25, 0);
          p_27 = ATgetArgument(x_25, 1);
        }
      else
        _fail(t);
      {
        ATerm c_26 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = p_27;
  return(t);
}
ATerm f_3 (ATerm t)
{
  t = debug_1_0(g_3, t);
  return(t);
}
ATerm g_3 (ATerm t)
{
  t = term_w_25;
  return(t);
}
ATerm h_3 (ATerm t)
{
  t = term_x_23;
  t = table_getlist_0_0(t);
  t = debug_1_0(i_3, t);
  return(t);
}
ATerm i_3 (ATerm t)
{
  t = term_f_26;
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm k_26 = t;
  int l_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_27 = NULL,u_27 = NULL,v_27 = NULL;
      t = if_verbose5_1_0(r_2, t);
      t = xtc_load_0_0(t);
      v_27 = t;
      if(match_cons(t, sym__2))
        {
          t_27 = ATgetArgument(t, 0);
          u_27 = ATgetArgument(t, 1);
          {
            ATerm o_26 = t;
            int q_26 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm y_27 = NULL,b_28 = NULL,c_28 = NULL;
                t = term_x_23;
                b_28 = t;
                t = (ATerm) ATmakeAppl(sym_Tool_1, t_27);
                c_28 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_x_23, (ATerm) ATmakeAppl(sym_Tool_1, t_27));
                t = l_9(b_28, c_28, t);
                {
                  ATerm e_3 (ATerm t)
                  {
                    if(match_cons(t, sym__2))
                      {
                        if((u_27 != ATgetArgument(t, 0)))
                          {
                            _fail(ATgetArgument(t, 0));
                          }
                        if(((y_27 != NULL) && (y_27 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          y_27 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = fetch_1_0(e_3, t);
                  t = not_null(y_27);
                }
                ;
                LocalPopChoice(q_26);
              }
            else
              {
                t = o_26;
                t = j_28(v_27, t);
              }
          }
        }
      else
        {
          t = j_28(v_27, t);
        }
      t = if_verbose5_1_0(f_3, t);
      ;
      LocalPopChoice(l_26);
    }
  else
    {
      t = k_26;
      {
        ATerm i_28 = NULL,x_11 = NULL,y_11 = NULL;
        i_28 = t;
        t = term_m_21;
        x_11 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_w_26), i_28), term_s_26);
        y_11 = t;
        t = SSL_printnl(x_11, y_11);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_w_26), i_28), term_s_26);
        t = if_verbose5_1_0(h_3, t);
        _fail(t);
      }
    }
  return(t);
}
ATerm xtc_command_1_0 (ATerm m_105 (ATerm), ATerm t)
{
  ATerm n_28 = NULL,o_28 = NULL;
  o_28 = t;
  t = m_105(t);
  t = xtc_find_0_0(t);
  n_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_28, o_28);
  {
    ATerm j_3 (ATerm t)
    {
      ATerm p_28 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, n_28, o_28);
      t = f_8(n_28, o_28, t);
      t = term_y_26;
      p_28 = t;
      t = SSL_exit(p_28);
      return(t);
    }
    t = fork_and_wait_1_0(j_3, t);
    t = o_28;
  }
  return(t);
}
ATerm o_8 (ATerm v_94 (ATerm), ATerm f_39, ATerm d_39, ATerm t)
{
  ATerm r_28 = NULL,s_28 = NULL,v_28 = NULL,w_28 = NULL,x_28 = NULL,y_28 = NULL;
  w_28 = t;
  t = v_94(t);
  r_28 = t;
  t = (ATerm) ATmakeAppl(sym__3, r_28, f_39, d_39);
  t = m_9(r_28, f_39, d_39, t);
  {
    ATerm z_26 = t;
    int a_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_28 = NULL;
        t = term_b_27;
        z_28 = t;
        t = (ATerm) ATmakeAppl(sym__2, r_28, term_b_27);
        t = l_9(r_28, z_28, t);
        ;
        LocalPopChoice(a_27);
      }
    else
      {
        t = z_26;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        s_28 = ATgetFirst((ATermList) t);
        v_28 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_b_27;
    x_28 = t;
    t = (ATerm) ATinsert(CheckATermList(v_28), (ATerm) ATinsert(CheckATermList(s_28), f_39));
    y_28 = t;
    t = SSL_table_put(r_28, x_28, y_28);
    t = w_28;
  }
  return(t);
}
ATerm q_29 (ATerm g_29, ATerm t)
{
  t = g_29;
  {
    ATerm c_27 = t;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm d_27 = ATgetArgument(t, 0);
            ATerm e_27 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = c_27;
      }
    t = term_f_27;
    t = debug_1_0(l_3, t);
    t = (ATerm) ATmakeAppl(sym__2, g_29, term_b_12);
    t = open_file_0_0(t);
  }
  return(t);
}
ATerm r_29 (ATerm i_29, ATerm j_29, ATerm k_29, ATerm t)
{
  t = SSL_open_file(i_29, j_29);
  return(t);
}
ATerm l_3 (ATerm t)
{
  t = term_h_27;
  return(t);
}
ATerm open_file_0_0 (ATerm t)
{
  ATerm n_29 = NULL,o_29 = NULL,p_29 = NULL;
  n_29 = t;
  if(match_cons(t, sym__2))
    {
      o_29 = ATgetArgument(t, 0);
      p_29 = ATgetArgument(t, 1);
      {
        ATerm i_27 = t;
        int j_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = q_29(n_29, t);
            ;
            LocalPopChoice(j_27);
          }
        else
          {
            t = i_27;
            t = r_29(o_29, p_29, n_29, t);
          }
      }
    }
  else
    {
      t = q_29(n_29, t);
    }
  return(t);
}
ATerm p_8 (ATerm y_33, ATerm z_33, ATerm t)
{
  t = SSL_strcat(y_33, z_33);
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm new_file_0_0 (ATerm t)
{
  ATerm t_29 = NULL,u_29 = NULL,v_29 = NULL;
  t = term_k_27;
  t = new_0_0(t);
  t_29 = t;
  t = term_l_27;
  u_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_29, term_l_27);
  t = p_8(t_29, u_29, t);
  v_29 = t;
  {
    ATerm m_27 = t;
    int n_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_29 = NULL;
        t = (ATerm) ATinsert(ATempty, term_y_13);
        x_29 = t;
        t = (ATerm) ATmakeAppl(sym__2, v_29, (ATerm) ATinsert(ATempty, term_y_13));
        t = q_8(v_29, x_29, t);
        t = new_file_0_0(t);
        ;
        LocalPopChoice(n_27);
      }
    else
      {
        t = m_27;
        t = v_29;
      }
  }
  return(t);
}
ATerm m_3 (ATerm t)
{
  t = term_o_27;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm a_30 = NULL,b_30 = NULL;
  t = new_file_0_0(t);
  a_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_30, term_b_12);
  t = open_file_0_0(t);
  t = term_k_27;
  b_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_30, term_k_27);
  t = o_8(m_3, a_30, b_30, t);
  t = a_30;
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm m_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm n_30 = NULL,o_30 = NULL;
  n_30 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm d_12 = NULL,e_12 = NULL;
      t = n_30;
      t = xtc_new_file_0_0(t);
      d_12 = t;
      t = n_0(t);
      e_12 = t;
      t = (ATerm) ATmakeAppl(sym__2, e_12, (ATerm) ATinsert(ATinsert(ATempty, d_12), term_p_11));
      t = conc_0_0(t);
      t = xtc_command_1_0(m_0, t);
      t = SSL_close_file(d_12);
      t = (ATerm) ATmakeAppl(sym_FILE_1, d_12);
    }
  else
    {
      ATerm m_12 = NULL,o_12 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          o_30 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = o_30;
      t = xtc_new_file_0_0(t);
      m_12 = t;
      t = n_0(t);
      o_12 = t;
      t = (ATerm) ATmakeAppl(sym__2, o_12, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, m_12), term_p_11), o_30), term_s_27));
      t = conc_0_0(t);
      t = xtc_command_1_0(m_0, t);
      t = SSL_close_file(m_12);
      t = (ATerm) ATmakeAppl(sym_FILE_1, m_12);
    }
  return(t);
}
ATerm c_33 (ATerm a_31, ATerm e_31, ATerm g_31, ATerm t)
{
  ATerm k_31 = NULL,p_31 = NULL,v_12 = NULL,w_12 = NULL,i_4 = NULL;
  t = SSLgetAnnotations(g_31);
  k_31 = t;
  t = a_31;
  {
    ATerm w_27 = t;
    if((PushChoice() == 0))
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("rtree", 0, ATtrue)))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = w_27;
      }
    p_31 = t;
    t = (ATerm) ATmakeAppl(sym__2, p_31, e_31);
    i_4 = t;
    t = SSLsetAnnotations(i_4, k_31);
    w_12 = t;
    t = SSL_explode_term(w_12);
    if(match_cons(t, sym__2))
      {
        ATerm x_27 = ATgetArgument(t, 0);
        if((ATgetSymbol((ATermAppl) x_27) != ATmakeSymbol("", 0, ATtrue)))
          _fail(t);
        {
          ATerm z_27 = ATgetArgument(t, 1);
          if(((ATgetType(z_27) == AT_LIST) && !(ATisEmpty(z_27))))
            {
              ATerm a_28 = ATgetFirst((ATermList) z_27);
              ATerm d_28 = (ATerm) ATgetNext((ATermList) z_27);
              if(((ATgetType(d_28) == AT_LIST) && !(ATisEmpty(d_28))))
                {
                  v_12 = ATgetFirst((ATermList) d_28);
                  {
                    ATerm e_28 = (ATerm) ATgetNext((ATermList) d_28);
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
          int k_28 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm y_31 = NULL;
              if(match_cons(t, sym_FILE_1))
                {
                  y_31 = ATgetArgument(t, 0);
                  {
                    ATerm z_12 = NULL,k_4 = NULL;
                    t = SSLgetAnnotations(v_12);
                    z_12 = t;
                    t = (ATerm) ATmakeAppl(sym_FILE_1, y_31);
                    k_4 = t;
                    t = SSLsetAnnotations(k_4, z_12);
                  }
                }
              else
                {
                  if(!(match_cons(t, sym_stdin_0)))
                    _fail(t);
                  t = v_12;
                }
              LocalPopChoice(k_28);
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
            t = (ATerm) ATinsert(ATinsert(ATempty, e_31), term_l_28);
            q_32 = t;
            t = SSL_printnl(p_32, q_32);
            t = term_i_14;
            o_32 = t;
            t = SSL_exit(o_32);
            t = (ATerm) ATinsert(ATinsert(ATempty, e_31), term_l_28);
          }
        }
    }
  }
  return(t);
}
ATerm d_33 (ATerm r_32, ATerm s_32, ATerm t)
{
  ATerm i_13 = NULL;
  t = SSL_explode_term(s_32);
  if(match_cons(t, sym__2))
    {
      ATerm m_28 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) m_28) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm q_28 = ATgetArgument(t, 1);
        if(((ATgetType(q_28) == AT_LIST) && !(ATisEmpty(q_28))))
          {
            ATerm t_28 = ATgetFirst((ATermList) q_28);
            ATerm u_28 = (ATerm) ATgetNext((ATermList) q_28);
            if(((ATgetType(u_28) == AT_LIST) && !(ATisEmpty(u_28))))
              {
                i_13 = ATgetFirst((ATermList) u_28);
                {
                  ATerm a_29 = (ATerm) ATgetNext((ATermList) u_28);
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
  t = i_13;
  {
    ATerm b_29 = t;
    int c_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = read_from_0_0(t);
        ;
        LocalPopChoice(c_29);
      }
    else
      {
        t = b_29;
        {
          ATerm u_32 = NULL,v_32 = NULL,w_32 = NULL;
          t = term_m_21;
          v_32 = t;
          t = (ATerm) ATinsert(ATinsert(ATempty, r_32), term_l_28);
          w_32 = t;
          t = SSL_printnl(v_32, w_32);
          t = term_i_14;
          u_32 = t;
          t = SSL_exit(u_32);
          t = (ATerm) ATinsert(ATinsert(ATempty, r_32), term_l_28);
        }
      }
  }
  return(t);
}
ATerm p_3 (ATerm t)
{
  t = term_d_29;
  return(t);
}
ATerm q_3 (ATerm t)
{
  ATerm a_32 = NULL,b_32 = NULL,e_32 = NULL,f_32 = NULL,g_32 = NULL;
  g_32 = t;
  t = pass_verbose_0_0(t);
  a_32 = t;
  t = g_32;
  t = pass_keep_0_0(t);
  b_32 = t;
  t = term_e_29;
  {
    ATerm f_29 = t;
    int h_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        LocalPopChoice(h_29);
        t = (ATerm) ATinsert(ATempty, term_e_29);
      }
    else
      {
        t = f_29;
        t = (ATerm) ATempty;
      }
    e_32 = t;
    t = term_l_29;
    t = get_config_0_0(t);
    f_32 = t;
    t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, f_32), b_32), a_32), e_32);
    t = concat_0_0(t);
  }
  return(t);
}
ATerm r_3 (ATerm t)
{
  t = term_d_29;
  return(t);
}
ATerm t_3 (ATerm t)
{
  ATerm i_32 = NULL,k_32 = NULL,l_32 = NULL,m_32 = NULL,n_32 = NULL;
  n_32 = t;
  t = pass_verbose_0_0(t);
  i_32 = t;
  t = n_32;
  t = pass_keep_0_0(t);
  k_32 = t;
  t = term_e_29;
  {
    ATerm m_29 = t;
    int s_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        LocalPopChoice(s_29);
        t = (ATerm) ATinsert(ATempty, term_e_29);
      }
    else
      {
        t = m_29;
        t = (ATerm) ATempty;
      }
    l_32 = t;
    t = term_l_29;
    t = get_config_0_0(t);
    m_32 = t;
    t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, m_32), k_32), i_32), l_32);
    t = concat_0_0(t);
  }
  return(t);
}
ATerm parse_module_0_0 (ATerm t)
{
  ATerm z_32 = NULL,a_33 = NULL,b_33 = NULL;
  z_32 = t;
  if(match_cons(t, sym__2))
    {
      a_33 = ATgetArgument(t, 0);
      b_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_33;
  if(match_string(t, "rtree"))
    {
      ATerm w_29 = t;
      int y_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = c_33(a_33, b_33, z_32, t);
          ;
          LocalPopChoice(y_29);
        }
      else
        {
          t = w_29;
          t = d_33(b_33, z_32, t);
        }
    }
  else
    {
      t = c_33(a_33, b_33, z_32, t);
    }
  return(t);
}
ATerm debug_1_0 (ATerm g_96 (ATerm), ATerm t)
{
  ATerm f_33 = NULL,g_33 = NULL,h_33 = NULL,i_33 = NULL;
  f_33 = t;
  t = g_96(t);
  g_33 = t;
  t = term_m_21;
  h_33 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, f_33), g_33);
  i_33 = t;
  t = SSL_printnl(h_33, i_33);
  t = f_33;
  return(t);
}
ATerm if_verbose3_1_0 (ATerm u_97 (ATerm), ATerm t)
{
  ATerm k_33 = NULL;
  k_33 = t;
  {
    ATerm z_29 = t;
    int c_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_33 = NULL;
        t = term_l_14;
        t = get_config_0_0(t);
        m_33 = t;
        t = (ATerm) ATmakeAppl(sym__2, m_33, term_j_15);
        t = geq_0_0(t);
        t = k_33;
        t = u_97(t);
        ;
        LocalPopChoice(c_30);
      }
    else
      {
        t = z_29;
        t = k_33;
      }
  }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm x_83 (ATerm), ATerm t)
{
  ATerm o_33 = NULL;
  ATerm v_3 (ATerm t)
  {
    t = x_83(t);
    if(((o_33 != NULL) && (o_33 != t)))
      _fail(t);
    else
      o_33 = t;
    return(t);
  }
  t = fetch_1_0(v_3, t);
  t = not_null(o_33);
  return(t);
}
ATerm q_8 (ATerm y_34, ATerm z_34, ATerm t)
{
  t = SSL_access(y_34, z_34);
  return(t);
}
ATerm is_relpath_0_0 (ATerm t)
{
  ATerm d_30 = t;
  if((PushChoice() == 0))
    {
      ATerm p_33 = NULL;
      p_33 = t;
      t = SSL_explode_string(p_33);
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          ATerm e_30 = ATgetFirst((ATermList) t);
          if(((ATgetType(e_30) != AT_INT) || (ATgetInt((ATermInt) e_30) != 47)))
            _fail(t);
          {
            ATerm f_30 = (ATerm) ATgetNext((ATermList) t);
          }
        }
      else
        _fail(t);
      t = p_33;
      PopChoice();
      _fail(t);
    }
  else
    {
      t = d_30;
    }
  return(t);
}
ATerm r_8 (ATerm a_76 (ATerm), ATerm n_19, ATerm m_19, ATerm t)
{
  t = a_76(t);
  {
    ATerm g_30 = t;
    int h_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_3 (ATerm t)
        {
          ATerm q_33 = NULL;
          ATerm y_3 (ATerm t)
          {
            ATerm r_33 = NULL,s_33 = NULL,t_33 = NULL,u_33 = NULL,v_33 = NULL;
            s_33 = t;
            t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, s_33), term_z_11), n_19), term_i_30), not_null(q_33));
            v_33 = t;
            t = SSL_concat_strings(v_33);
            t_33 = t;
            t = (ATerm) ATinsert(ATempty, term_y_13);
            u_33 = t;
            t = (ATerm) ATmakeAppl(sym__2, t_33, (ATerm) ATinsert(ATempty, term_y_13));
            t = q_8(t_33, u_33, t);
            r_33 = t;
            t = (ATerm) ATmakeAppl(sym__2, s_33, (ATerm) ATmakeAppl(sym_FILE_1, r_33));
            return(t);
          }
          if(((q_33 != NULL) && (q_33 != t)))
            _fail(t);
          else
            q_33 = t;
          t = n_19;
          t = is_relpath_0_0(t);
          t = m_19;
          t = fetch_elem_1_0(y_3, t);
          return(t);
        }
        t = fetch_elem_1_0(w_3, t);
        ;
        LocalPopChoice(h_30);
      }
    else
      {
        t = g_30;
        {
          ATerm j_30 = t;
          int k_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm z_3 (ATerm t)
              {
                ATerm w_33 = NULL,x_33 = NULL,a_34 = NULL,b_34 = NULL,c_34 = NULL,d_34 = NULL;
                w_33 = t;
                t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, w_33), term_z_11), n_19);
                d_34 = t;
                t = SSL_concat_strings(d_34);
                x_33 = t;
                t = term_x_23;
                b_34 = t;
                t = (ATerm) ATmakeAppl(sym_Tool_1, x_33);
                c_34 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_x_23, (ATerm) ATmakeAppl(sym_Tool_1, x_33));
                t = l_9(b_34, c_34, t);
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    ATerm l_30 = ATgetFirst((ATermList) t);
                    if(match_cons(l_30, sym__2))
                      {
                        ATerm p_30 = ATgetArgument(l_30, 0);
                        a_34 = ATgetArgument(l_30, 1);
                      }
                    else
                      _fail(t);
                    {
                      ATerm m_30 = (ATerm) ATgetNext((ATermList) t);
                    }
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym__2, w_33, (ATerm) ATmakeAppl(sym_FILE_1, a_34));
                return(t);
              }
              t = m_19;
              t = fetch_elem_1_0(z_3, t);
              ;
              LocalPopChoice(k_30);
            }
          else
            {
              t = j_30;
              {
                ATerm q_30 = t;
                int r_30 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_s_30;
                    t = get_config_0_0(t);
                    LocalPopChoice(r_30);
                    {
                      ATerm e_34 = NULL,f_34 = NULL,g_34 = NULL,i_34 = NULL,j_34 = NULL;
                      e_34 = t;
                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_u_30), n_19), term_t_30);
                      j_34 = t;
                      t = SSL_concat_strings(j_34);
                      f_34 = t;
                      t = term_m_21;
                      g_34 = t;
                      t = (ATerm) ATinsert(ATempty, f_34);
                      i_34 = t;
                      t = SSL_printnl(g_34, i_34);
                      t = e_34;
                      _fail(t);
                    }
                  }
                else
                  {
                    t = q_30;
                    {
                      ATerm k_34 = NULL,o_34 = NULL,p_34 = NULL;
                      t = term_m_21;
                      o_34 = t;
                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_u_30), n_19), term_t_30);
                      p_34 = t;
                      t = SSL_printnl(o_34, p_34);
                      t = term_i_14;
                      k_34 = t;
                      t = SSL_exit(k_34);
                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_u_30), n_19), term_t_30);
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
  t = term_v_30;
  return(t);
}
ATerm get_module_1_0 (ATerm z_75 (ATerm), ATerm t)
{
  ATerm s_34 = NULL,t_34 = NULL,u_34 = NULL,v_34 = NULL;
  t = basename_1_0(_id, t);
  u_34 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_g_23), term_y_30), term_x_30), term_w_30);
  v_34 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_34, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_g_23), term_y_30), term_x_30), term_w_30));
  t = r_8(z_75, u_34, v_34, t);
  if(match_cons(t, sym__2))
    {
      ATerm z_30 = ATgetArgument(t, 0);
      ATerm b_31 = ATgetArgument(t, 1);
      if(match_cons(b_31, sym_FILE_1))
        {
          s_34 = ATgetArgument(b_31, 0);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  {
    ATerm b_4 (ATerm t)
    {
      ATerm x_34 = NULL;
      x_34 = t;
      t = s_34;
      t = debug_1_0(d_4, t);
      t = x_34;
      return(t);
    }
    t = if_verbose3_1_0(b_4, t);
    t = parse_module_0_0(t);
    t_34 = t;
    t = (ATerm) ATmakeAppl(sym__2, s_34, t_34);
  }
  return(t);
}
ATerm t_8 (ATerm s_87 (ATerm), ATerm t_87 (ATerm), ATerm n_26, ATerm m_26, ATerm t)
{
  t = t_87(t);
  {
    ATerm g_4 (ATerm t)
    {
      ATerm a_35 = NULL;
      a_35 = t;
      t = (ATerm) ATmakeAppl(sym__2, n_26, a_35);
      t = s_87(t);
      return(t);
    }
    t = fetch_1_0(g_4, t);
    t = m_26;
  }
  return(t);
}
ATerm u_8 (ATerm k_87 (ATerm), ATerm h_26, ATerm g_26, ATerm t)
{
  ATerm d_36 (ATerm t)
  {
    ATerm w_35 = NULL,x_35 = NULL,a_36 = NULL;
    w_35 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = w_35;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            x_35 = ATgetFirst((ATermList) t);
            a_36 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm c_31 = t;
          int d_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = w_35;
              {
                ATerm h_4 (ATerm t)
                {
                  t = g_26;
                  return(t);
                }
                t = t_8(k_87, h_4, x_35, a_36, t);
                t = d_36(t);
              }
              ;
              LocalPopChoice(d_31);
            }
          else
            {
              t = c_31;
              {
                ATerm x_13 = NULL,b_14 = NULL,o_4 = NULL;
                t = SSLgetAnnotations(w_35);
                x_13 = t;
                t = a_36;
                t = d_36(t);
                b_14 = t;
                t = (ATerm) ATinsert(CheckATermList(b_14), x_35);
                o_4 = t;
                t = SSLsetAnnotations(o_4, x_13);
              }
            }
        }
      }
    return(t);
  }
  t = h_26;
  t = d_36(t);
  return(t);
}
ATerm j_4 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm f_31 = ATgetArgument(t, 0);
      if(((ATgetType(f_31) != AT_LIST) || !(ATisEmpty(f_31))))
        _fail(t);
      {
        ATerm h_31 = ATgetArgument(t, 1);
        if(((ATgetType(h_31) != AT_LIST) || !(ATisEmpty(h_31))))
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
  ATerm l_36 = NULL,o_36 = NULL,p_36 = NULL,q_36 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm i_31 = ATgetArgument(t, 0);
      if(((ATgetType(i_31) == AT_LIST) && !(ATisEmpty(i_31))))
        {
          l_36 = ATgetFirst((ATermList) i_31);
          o_36 = (ATerm) ATgetNext((ATermList) i_31);
        }
      else
        _fail(t);
      {
        ATerm j_31 = ATgetArgument(t, 1);
        if(((ATgetType(j_31) == AT_LIST) && !(ATisEmpty(j_31))))
          {
            p_36 = ATgetFirst((ATermList) j_31);
            q_36 = (ATerm) ATgetNext((ATermList) j_31);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, l_36, p_36), (ATerm) ATmakeAppl(sym__2, o_36, q_36));
  return(t);
}
ATerm m_4 (ATerm t)
{
  ATerm r_36 = NULL,y_36 = NULL;
  if(match_cons(t, sym__2))
    {
      r_36 = ATgetArgument(t, 0);
      y_36 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(y_36), r_36);
  return(t);
}
ATerm z_8 (ATerm g_571, ATerm l_571, ATerm a_53, ATerm t)
{
  ATerm g_36 = NULL,h_36 = NULL,i_36 = NULL,j_36 = NULL;
  t = SSL_explode_term(l_571);
  if(match_cons(t, sym__2))
    {
      g_36 = ATgetArgument(t, 0);
      i_36 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(g_571);
  if(match_cons(t, sym__2))
    {
      if((g_36 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      h_36 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, h_36, i_36);
  t = genzip_4_0(j_4, l_4, m_4, _id, t);
  j_36 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_36, a_53);
  t = conc_0_0(t);
  return(t);
}
ATerm n_4 (ATerm t)
{
  ATerm j_37 = NULL;
  j_37 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, j_37);
  return(t);
}
ATerm p_4 (ATerm t)
{
  ATerm k_37 = NULL,l_37 = NULL,m_37 = NULL,n_37 = NULL,q_4 = NULL;
  n_37 = t;
  if(match_cons(t, sym__2))
    {
      l_37 = ATgetArgument(t, 0);
      m_37 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_37);
  k_37 = t;
  t = m_37;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, l_37, m_37);
  q_4 = t;
  t = SSLsetAnnotations(q_4, k_37);
  return(t);
}
ATerm s_4 (ATerm t)
{
  ATerm k_38 = NULL,l_38 = NULL,m_38 = NULL,n_38 = NULL,o_38 = NULL;
  k_38 = t;
  if(match_cons(t, sym__2))
    {
      l_38 = ATgetArgument(t, 0);
      m_38 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_38;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_38 = ATgetFirst((ATermList) t);
      o_38 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm l_31 = t;
        int m_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = j_39(l_38, m_38, k_38, t);
            ;
            LocalPopChoice(m_31);
          }
        else
          {
            t = l_31;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(l_38), n_38), o_38);
          }
      }
    }
  else
    {
      t = j_39(l_38, m_38, k_38, t);
    }
  return(t);
}
ATerm j_39 (ATerm o_37, ATerm p_37, ATerm q_37, ATerm t)
{
  ATerm t_37 = NULL,w_37 = NULL,r_4 = NULL,b_38 = NULL,c_38 = NULL,d_38 = NULL,e_38 = NULL;
  t = SSLgetAnnotations(q_37);
  t_37 = t;
  t = p_37;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_38 = ATgetFirst((ATermList) t);
      e_38 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = b_38;
  if(match_cons(t, sym__2))
    {
      c_38 = ATgetArgument(t, 0);
      d_38 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm n_31 = t;
    int o_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_38;
        if((c_38 != t))
          {
            _fail(t);
          }
        t = e_38;
        ;
        LocalPopChoice(o_31);
      }
    else
      {
        t = n_31;
        t = p_37;
        t = z_8(c_38, d_38, e_38, t);
      }
    w_37 = t;
    t = (ATerm) ATmakeAppl(sym__2, o_37, w_37);
    r_4 = t;
    t = SSLsetAnnotations(r_4, t_37);
  }
  return(t);
}
ATerm t_4 (ATerm t)
{
  ATerm i_39 = NULL;
  if(match_cons(t, sym__2))
    {
      i_39 = ATgetArgument(t, 0);
      if((i_39 != ATgetArgument(t, 1)))
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
  ATerm q_31 = t;
  int r_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(n_4, p_4, s_4, t);
      ;
      LocalPopChoice(r_31);
    }
  else
    {
      t = q_31;
      {
        ATerm s_38 = NULL,t_38 = NULL,u_38 = NULL;
        s_38 = t;
        if(match_cons(t, sym__2))
          {
            t_38 = ATgetArgument(t, 0);
            u_38 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = s_38;
        t = u_8(t_4, t_38, u_38, t);
      }
    }
  return(t);
}
ATerm b_9 (ATerm u_106 (ATerm), ATerm v_106 (ATerm), ATerm w_106 (ATerm), ATerm r_55, ATerm o_55, ATerm v_55, ATerm s_55, ATerm p_55, ATerm q_55, ATerm t)
{
  ATerm k_39 = NULL,l_39 = NULL,m_39 = NULL,n_39 = NULL,o_39 = NULL,p_39 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, r_55, s_55);
  t = u_106(t);
  k_39 = t;
  t = v_106(t);
  l_39 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_39, v_55);
  t = diff_0_0(t);
  m_39 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_39, o_55);
  t = conc_0_0(t);
  n_39 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_39, v_55);
  t = conc_0_0(t);
  o_39 = t;
  t = (ATerm) ATmakeAppl(sym__3, r_55, k_39, p_55);
  t = w_106(t);
  p_39 = t;
  t = (ATerm) ATmakeAppl(sym__5, n_39, o_39, s_55, p_39, q_55);
  return(t);
}
ATerm GnNext_3_0 (ATerm u_106 (ATerm), ATerm v_106 (ATerm), ATerm w_106 (ATerm), ATerm t)
{
  ATerm r_39 = NULL,s_39 = NULL,t_39 = NULL,u_39 = NULL,v_39 = NULL,w_39 = NULL;
  if(match_cons(t, sym__5))
    {
      ATerm s_31 = ATgetArgument(t, 0);
      if(((ATgetType(s_31) == AT_LIST) && !(ATisEmpty(s_31))))
        {
          r_39 = ATgetFirst((ATermList) s_31);
          s_39 = (ATerm) ATgetNext((ATermList) s_31);
        }
      else
        _fail(t);
      t_39 = ATgetArgument(t, 1);
      u_39 = ATgetArgument(t, 2);
      v_39 = ATgetArgument(t, 3);
      w_39 = ATgetArgument(t, 4);
    }
  else
    _fail(t);
  t = b_9(u_106, v_106, w_106, r_39, s_39, t_39, u_39, v_39, w_39, t);
  return(t);
}
ATerm while_not_2_0 (ATerm l_77 (ATerm), ATerm m_77 (ATerm), ATerm t)
{
  ATerm x_39 (ATerm t)
  {
    ATerm t_31 = t;
    int u_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_77(t);
        ;
        LocalPopChoice(u_31);
      }
    else
      {
        t = t_31;
        t = m_77(t);
        t = x_39(t);
      }
    return(t);
  }
  t = x_39(t);
  return(t);
}
ATerm for_3_0 (ATerm o_77 (ATerm), ATerm p_77 (ATerm), ATerm q_77 (ATerm), ATerm t)
{
  t = o_77(t);
  t = while_not_2_0(p_77, q_77, t);
  return(t);
}
ATerm v_4 (ATerm t)
{
  ATerm d_40 = NULL,e_40 = NULL,f_40 = NULL;
  if(match_cons(t, sym__3))
    {
      d_40 = ATgetArgument(t, 0);
      e_40 = ATgetArgument(t, 1);
      f_40 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__5, d_40, d_40, e_40, f_40, (ATerm) ATempty);
  return(t);
}
ATerm b_5 (ATerm t)
{
  ATerm i_40 = NULL,m_40 = NULL;
  if(match_cons(t, sym__5))
    {
      ATerm v_31 = ATgetArgument(t, 0);
      if(((ATgetType(v_31) != AT_LIST) || !(ATisEmpty(v_31))))
        _fail(t);
      {
        ATerm w_31 = ATgetArgument(t, 1);
      }
      {
        ATerm x_31 = ATgetArgument(t, 2);
      }
      i_40 = ATgetArgument(t, 3);
      m_40 = ATgetArgument(t, 4);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, i_40, m_40);
  return(t);
}
ATerm graph_nodes_roots_3_0 (ATerm r_106 (ATerm), ATerm s_106 (ATerm), ATerm t_106 (ATerm), ATerm t)
{
  ATerm c_40 = NULL;
  ATerm c_5 (ATerm t)
  {
    ATerm z_31 = t;
    int c_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = GnNext_3_0(r_106, s_106, t_106, t);
        ;
        LocalPopChoice(c_32);
      }
    else
      {
        t = z_31;
        {
          ATerm o_40 = NULL,p_40 = NULL,q_40 = NULL,r_40 = NULL,w_40 = NULL,x_40 = NULL,y_40 = NULL;
          if(match_cons(t, sym__5))
            {
              o_40 = ATgetArgument(t, 0);
              r_40 = ATgetArgument(t, 1);
              w_40 = ATgetArgument(t, 2);
              x_40 = ATgetArgument(t, 3);
              y_40 = ATgetArgument(t, 4);
            }
          else
            _fail(t);
          t = o_40;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              p_40 = ATgetFirst((ATermList) t);
              q_40 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__5, q_40, r_40, w_40, x_40, (ATerm) ATinsert(CheckATermList(y_40), p_40));
        }
      }
    return(t);
  }
  t = for_3_0(v_4, b_5, c_5, t);
  if(match_cons(t, sym__2))
    {
      c_40 = ATgetArgument(t, 0);
      {
        ATerm d_32 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = c_40;
  return(t);
}
ATerm filter_1_0 (ATerm s_90 (ATerm), ATerm t)
{
  ATerm w_41 = NULL,x_41 = NULL,y_41 = NULL;
  w_41 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = w_41;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_41 = ATgetFirst((ATermList) t);
          y_41 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm h_32 = t;
        int j_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_14 = NULL,t_14 = NULL,u_14 = NULL,u_4 = NULL;
            t = SSLgetAnnotations(w_41);
            p_14 = t;
            t = x_41;
            t = s_90(t);
            t_14 = t;
            t = y_41;
            t = filter_1_0(s_90, t);
            u_14 = t;
            t = (ATerm) ATinsert(CheckATermList(u_14), t_14);
            u_4 = t;
            t = SSLsetAnnotations(u_4, p_14);
            ;
            LocalPopChoice(j_32);
          }
        else
          {
            t = h_32;
            t = y_41;
            t = filter_1_0(s_90, t);
          }
      }
    }
  return(t);
}
ATerm d_5 (ATerm t)
{
  ATerm t_32 = t;
  if((PushChoice() == 0))
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-I", 0, ATtrue)))
        _fail(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = t_32;
    }
  return(t);
}
ATerm h_5 (ATerm t)
{
  ATerm t_42 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm x_32 = ATgetArgument(t, 0);
      ATerm y_32 = ATgetArgument(t, 1);
      if(match_cons(y_32, sym_Specification_1))
        {
          t_42 = ATgetArgument(y_32, 0);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  t = d_8(t_42, t);
  return(t);
}
ATerm i_5 (ATerm t)
{
  ATerm u_42 = NULL,v_42 = NULL;
  if(match_cons(t, sym__3))
    {
      ATerm e_33 = ATgetArgument(t, 0);
      u_42 = ATgetArgument(t, 1);
      v_42 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(v_42), u_42);
  return(t);
}
ATerm k_5 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_j_33;
  return(t);
}
ATerm m_5 (ATerm t)
{
  ATerm w_42 = NULL,x_42 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_42 = ATgetFirst((ATermList) t);
      x_42 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, w_42, x_42);
  return(t);
}
ATerm n_5 (ATerm t)
{
  ATerm y_42 = NULL,b_43 = NULL,c_43 = NULL,i_43 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm l_33 = ATgetArgument(t, 0);
      if(match_cons(l_33, sym__2))
        {
          y_42 = ATgetArgument(l_33, 0);
          b_43 = ATgetArgument(l_33, 1);
        }
      else
        _fail(t);
      {
        ATerm n_33 = ATgetArgument(t, 1);
        if(match_cons(n_33, sym__2))
          {
            c_43 = ATgetArgument(n_33, 0);
            i_43 = ATgetArgument(n_33, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(c_43), y_42), (ATerm) ATinsert(CheckATermList(i_43), b_43));
  return(t);
}
ATerm e_9 (ATerm d_19, ATerm t)
{
  ATerm h_42 = NULL,i_42 = NULL,j_42 = NULL,k_42 = NULL,p_42 = NULL,q_42 = NULL,w_4 = NULL;
  ATerm h_34 = t;
  int l_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_l_29;
      t = get_config_0_0(t);
      t = filter_1_0(d_5, t);
      ;
      LocalPopChoice(l_34);
    }
  else
    {
      t = h_34;
      t = (ATerm) ATempty;
    }
  h_42 = t;
  t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATinsert(ATinsert(ATinsert(ATempty, d_19), term_n_34), term_m_34), term_k_27, (ATerm) ATempty);
  {
    ATerm f_5 (ATerm t)
    {
      ATerm r_42 = NULL,s_42 = NULL;
      ATerm j_5 (ATerm t)
      {
        t = (ATerm) ATinsert(CheckATermList(h_42), term_z_11);
        return(t);
      }
      s_42 = t;
      t = SSL_explode_term(s_42);
      if(match_cons(t, sym__2))
        {
          ATerm q_34 = ATgetArgument(t, 0);
          if((ATgetSymbol((ATermAppl) q_34) != ATmakeSymbol("", 0, ATtrue)))
            _fail(t);
          {
            ATerm r_34 = ATgetArgument(t, 1);
            if(((ATgetType(r_34) == AT_LIST) && !(ATisEmpty(r_34))))
              {
                r_42 = ATgetFirst((ATermList) r_34);
                {
                  ATerm w_34 = (ATerm) ATgetNext((ATermList) r_34);
                }
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = r_42;
      t = get_module_1_0(j_5, t);
      return(t);
    }
    t = graph_nodes_roots_3_0(f_5, h_5, i_5, t);
    t = genzip_4_0(k_5, m_5, n_5, _id, t);
    q_42 = t;
    if(match_cons(t, sym__2))
      {
        j_42 = ATgetArgument(t, 0);
        k_42 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(q_42);
    i_42 = t;
    t = k_42;
    t = flatten_stratego_0_0(t);
    p_42 = t;
    t = (ATerm) ATmakeAppl(sym__2, j_42, p_42);
    w_4 = t;
    t = SSLsetAnnotations(w_4, i_42);
  }
  return(t);
}
ATerm g_9 (ATerm z_39, ATerm a_40, ATerm t)
{
  t = SSL_copy(z_39, a_40);
  return(t);
}
ATerm copy_to_1_0 (ATerm l_0 (ATerm), ATerm t)
{
  ATerm l_44 = NULL,m_44 = NULL;
  l_44 = t;
  if(match_cons(t, sym_FILE_1))
    {
      m_44 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm b_35 = t;
    int c_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_15 = NULL;
        t = l_44;
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
        t = (ATerm) ATmakeAppl(sym__2, m_44, m_15);
        t = g_9(m_44, m_15, t);
        t = (ATerm) ATmakeAppl(sym_FILE_1, m_44);
        ;
        LocalPopChoice(c_35);
      }
    else
      {
        t = b_35;
        {
          ATerm d_35 = t;
          int i_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm x_15 = NULL;
              t = l_44;
              t = l_0(t);
              x_15 = t;
              {
                ATerm j_35 = t;
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
                            if((m_44 != t))
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
                    t = j_35;
                  }
                t = (ATerm) ATmakeAppl(sym__2, m_44, x_15);
                t = g_9(m_44, x_15, t);
                t = (ATerm) ATmakeAppl(sym_FILE_1, m_44);
              }
              ;
              LocalPopChoice(i_35);
            }
          else
            {
              t = d_35;
              t = l_44;
              t = l_0(t);
              if((m_44 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, m_44);
            }
        }
      }
  }
  return(t);
}
ATerm h_9 (ATerm t_48, ATerm u_48, ATerm t)
{
  ATerm q_44 = NULL,r_44 = NULL;
  r_44 = t;
  {
    ATerm k_35 = t;
    int l_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, t_48, u_48);
        t = l_9(t_48, u_48, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm m_35 = ATgetFirst((ATermList) t);
            q_44 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(l_35);
        t = SSL_table_put(t_48, u_48, q_44);
        t = (ATerm) ATmakeAppl(sym__3, t_48, u_48, q_44);
      }
    else
      {
        t = k_35;
        t = SSL_table_remove(t_48, u_48);
        t = (ATerm) ATmakeAppl(sym__2, t_48, u_48);
      }
    t = r_44;
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm s_94 (ATerm), ATerm t)
{
  ATerm v_44 = NULL,w_44 = NULL,b_45 = NULL,d_45 = NULL,f_45 = NULL;
  d_45 = t;
  t = s_94(t);
  b_45 = t;
  {
    ATerm n_35 = t;
    int o_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_45 = NULL;
        t = term_b_27;
        g_45 = t;
        t = (ATerm) ATmakeAppl(sym__2, b_45, term_b_27);
        t = l_9(b_45, g_45, t);
        ;
        LocalPopChoice(o_35);
      }
    else
      {
        t = n_35;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        w_44 = ATgetFirst((ATermList) t);
        v_44 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_b_27;
    f_45 = t;
    t = SSL_table_put(b_45, f_45, v_44);
    t = w_44;
    {
      ATerm o_5 (ATerm t)
      {
        ATerm h_45 = NULL;
        h_45 = t;
        t = (ATerm) ATmakeAppl(sym__2, b_45, h_45);
        t = h_9(b_45, h_45, t);
        return(t);
      }
      t = map_1_0(o_5, t);
      t = d_45;
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm q_76 (ATerm), ATerm r_76 (ATerm), ATerm t)
{
  ATerm p_35 = t;
  int q_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = q_76(t);
      t = r_76(t);
      ;
      LocalPopChoice(q_35);
    }
  else
    {
      t = p_35;
      t = r_76(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm r_94 (ATerm), ATerm t)
{
  ATerm j_45 = NULL,l_45 = NULL,m_45 = NULL,p_45 = NULL,q_45 = NULL;
  l_45 = t;
  t = r_94(t);
  j_45 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_45, term_b_27);
  {
    ATerm r_35 = t;
    int s_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_46 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm t_35 = ATgetArgument(t, 0);
            ATerm u_35 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_b_27;
        a_46 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_45, term_b_27);
        t = l_9(j_45, a_46, t);
        ;
        LocalPopChoice(s_35);
      }
    else
      {
        t = r_35;
        t = (ATerm) ATempty;
      }
    m_45 = t;
    t = term_b_27;
    p_45 = t;
    t = (ATerm) ATinsert(CheckATermList(m_45), (ATerm) ATempty);
    q_45 = t;
    t = SSL_table_put(j_45, p_45, q_45);
    t = l_45;
  }
  return(t);
}
ATerm p_5 (ATerm t)
{
  t = term_o_27;
  return(t);
}
ATerm v_5 (ATerm t)
{
  ATerm r_46 = NULL;
  r_46 = t;
  {
    ATerm v_35 = t;
    int y_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(r_46);
        ;
        LocalPopChoice(y_35);
      }
    else
      {
        t = v_35;
        t = r_46;
      }
  }
  return(t);
}
ATerm w_5 (ATerm t)
{
  t = term_o_27;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm y_104 (ATerm), ATerm t)
{
  ATerm h_46 = NULL;
  ATerm r_5 (ATerm t)
  {
    ATerm i_46 = NULL;
    i_46 = t;
    {
      ATerm z_35 = t;
      int b_36 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm k_46 = NULL,l_46 = NULL;
          t = term_o_27;
          k_46 = t;
          t = term_b_27;
          l_46 = t;
          t = term_c_36;
          t = l_9(k_46, l_46, t);
          ;
          LocalPopChoice(b_36);
        }
      else
        {
          t = z_35;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
        }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          if(((h_46 != NULL) && (h_46 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            h_46 = ATgetFirst((ATermList) t);
          {
            ATerm e_36 = (ATerm) ATgetNext((ATermList) t);
          }
        }
      else
        _fail(t);
      t = h_46;
      t = map_1_0(v_5, t);
      t = i_46;
      t = end_scope_1_0(w_5, t);
    }
    return(t);
  }
  t = begin_scope_1_0(p_5, t);
  t = restore_always_2_0(y_104, r_5, t);
  return(t);
}
ATerm z_5 (ATerm t)
{
  ATerm f_36 = t;
  int k_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_p_11;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(k_36);
    }
  else
    {
      t = f_36;
      t = term_m_36;
    }
  return(t);
}
ATerm xtc_io_1_0 (ATerm z_104 (ATerm), ATerm t)
{
  ATerm x_5 (ATerm t)
  {
    ATerm n_36 = t;
    int s_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_46 = NULL;
        t = term_s_27;
        t = get_config_0_0(t);
        u_46 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, u_46);
        ;
        LocalPopChoice(s_36);
      }
    else
      {
        t = n_36;
        t = term_w_13;
      }
    t = z_104(t);
    t = copy_to_1_0(z_5, t);
    return(t);
  }
  t = xtc_temp_files_1_0(x_5, t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm v_46 = NULL,y_46 = NULL,z_46 = NULL,a_47 = NULL,c_47 = NULL;
  v_46 = t;
  t = term_k_27;
  t = whoami_0_0(t);
  y_46 = t;
  t = term_m_21;
  a_47 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_u_36), y_46), term_t_36);
  c_47 = t;
  t = SSL_printnl(a_47, c_47);
  t = term_i_14;
  z_46 = t;
  t = SSL_exit(z_46);
  t = v_46;
  return(t);
}
ATerm i_6 (ATerm t)
{
  ATerm g_47 = NULL;
  g_47 = t;
  if(match_string(t, "-k"))
    {
      t = g_47;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = g_47;
    }
  return(t);
}
ATerm k_6 (ATerm t)
{
  ATerm h_47 = NULL,i_47 = NULL,n_47 = NULL;
  h_47 = t;
  t = SSL_string_to_int(h_47);
  i_47 = t;
  t = term_a_14;
  n_47 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_14, i_47);
  t = o_9(n_47, i_47, t);
  t = h_47;
  return(t);
}
ATerm l_6 (ATerm t)
{
  t = term_v_36;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(i_6, k_6, l_6, t);
  return(t);
}
ATerm m_6 (ATerm t)
{
  ATerm p_47 = NULL;
  p_47 = t;
  if(match_string(t, "-S"))
    {
      t = p_47;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = p_47;
    }
  return(t);
}
ATerm n_6 (ATerm t)
{
  ATerm q_47 = NULL,r_47 = NULL;
  t = term_l_14;
  q_47 = t;
  t = term_w_36;
  r_47 = t;
  t = term_x_36;
  t = o_9(q_47, r_47, t);
  t = term_z_36;
  return(t);
}
ATerm o_6 (ATerm t)
{
  t = term_a_37;
  return(t);
}
ATerm q_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm r_6 (ATerm t)
{
  ATerm u_47 = NULL,v_47 = NULL,b_48 = NULL;
  u_47 = t;
  t = SSL_string_to_int(u_47);
  v_47 = t;
  t = term_l_14;
  b_48 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_14, v_47);
  t = o_9(b_48, v_47, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, u_47);
  return(t);
}
ATerm t_6 (ATerm t)
{
  t = term_b_37;
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
  ATerm c_48 = NULL,d_48 = NULL;
  t = term_c_37;
  c_48 = t;
  t = term_k_27;
  d_48 = t;
  t = term_d_37;
  t = o_9(c_48, d_48, t);
  t = term_e_37;
  return(t);
}
ATerm w_6 (ATerm t)
{
  t = term_f_37;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm g_37 = t;
  int h_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(m_6, n_6, o_6, t);
      ;
      LocalPopChoice(h_37);
    }
  else
    {
      t = g_37;
      {
        ATerm i_37 = t;
        int u_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(q_6, r_6, t_6, t);
            ;
            LocalPopChoice(u_37);
          }
        else
          {
            t = i_37;
            t = Option_3_0(u_6, v_6, w_6, t);
          }
      }
    }
  return(t);
}
ATerm o_9 (ATerm t_56, ATerm u_56, ATerm t)
{
  ATerm e_48 = NULL;
  t = term_q_13;
  e_48 = t;
  t = SSL_table_put(e_48, t_56, u_56);
  t = (ATerm) ATmakeAppl(sym__3, term_q_13, t_56, u_56);
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm j_48 = NULL,k_48 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm m_48 = NULL,q_48 = NULL,w_48 = NULL;
      t = term_k_27;
      t = e_0(t);
      m_48 = t;
      t = term_v_37;
      q_48 = t;
      t = term_z_37;
      w_48 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_v_37, term_z_37, m_48);
      t = m_9(q_48, w_48, m_48, t);
      _fail(t);
    }
  else
    {
      ATerm a_49 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          j_48 = ATgetFirst((ATermList) t);
          k_48 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = j_48;
      t = c_0(t);
      t = term_k_27;
      t = d_0(t);
      a_49 = t;
      t = (ATerm) ATinsert(CheckATermList(k_48), a_49);
    }
  return(t);
}
ATerm x_6 (ATerm t)
{
  ATerm c_49 = NULL;
  c_49 = t;
  if(match_string(t, "-o"))
    {
      t = c_49;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = c_49;
    }
  return(t);
}
ATerm z_6 (ATerm t)
{
  ATerm d_49 = NULL,e_49 = NULL;
  d_49 = t;
  t = term_p_11;
  e_49 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_11, d_49);
  t = o_9(e_49, d_49, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, d_49);
  return(t);
}
ATerm b_7 (ATerm t)
{
  t = term_a_38;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(x_6, z_6, b_7, t);
  return(t);
}
ATerm e_7 (ATerm t)
{
  ATerm g_49 = NULL;
  g_49 = t;
  if(match_string(t, "-i"))
    {
      t = g_49;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = g_49;
    }
  return(t);
}
ATerm f_7 (ATerm t)
{
  ATerm h_49 = NULL,i_49 = NULL;
  h_49 = t;
  t = term_s_27;
  i_49 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_27, h_49);
  t = o_9(i_49, h_49, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, h_49);
  return(t);
}
ATerm g_7 (ATerm t)
{
  t = term_f_38;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(e_7, f_7, g_7, t);
  return(t);
}
ATerm m_9 (ATerm o_48, ATerm p_48, ATerm n_48, ATerm t)
{
  ATerm k_49 = NULL,s_49 = NULL,t_49 = NULL;
  k_49 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_48, p_48);
  {
    ATerm g_38 = t;
    int h_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm i_38 = ATgetArgument(t, 0);
            ATerm j_38 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, o_48, p_48);
        t = l_9(o_48, p_48, t);
        ;
        LocalPopChoice(h_38);
      }
    else
      {
        t = g_38;
        t = (ATerm) ATempty;
      }
    s_49 = t;
    t = (ATerm) ATinsert(CheckATermList(s_49), n_48);
    t_49 = t;
    t = SSL_table_put(o_48, p_48, t_49);
    t = k_49;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm t)
{
  ATerm e_50 = NULL,h_50 = NULL,i_50 = NULL,j_50 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm k_50 = NULL,l_50 = NULL,m_50 = NULL;
      t = term_k_27;
      t = k_0(t);
      k_50 = t;
      t = term_v_37;
      l_50 = t;
      t = term_z_37;
      m_50 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_v_37, term_z_37, k_50);
      t = m_9(l_50, m_50, k_50, t);
      _fail(t);
    }
  else
    {
      ATerm q_50 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          e_50 = ATgetFirst((ATermList) t);
          h_50 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = h_50;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          i_50 = ATgetFirst((ATermList) t);
          j_50 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = e_50;
      t = i_0(t);
      t = i_50;
      t = j_0(t);
      q_50 = t;
      t = (ATerm) ATinsert(CheckATermList(j_50), q_50);
    }
  return(t);
}
ATerm at_end_1_0 (ATerm b_84 (ATerm), ATerm t)
{
  ATerm w_51 (ATerm t)
  {
    ATerm r_51 = NULL,u_51 = NULL,v_51 = NULL;
    v_51 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        r_51 = ATgetFirst((ATermList) t);
        u_51 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm p_16 = NULL,u_16 = NULL,g_5 = NULL;
          t = SSLgetAnnotations(v_51);
          p_16 = t;
          t = u_51;
          t = w_51(t);
          u_16 = t;
          t = (ATerm) ATinsert(CheckATermList(u_16), r_51);
          g_5 = t;
          t = SSLsetAnnotations(g_5, p_16);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = v_51;
        t = b_84(t);
      }
    return(t);
  }
  t = w_51(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm s_50 = NULL,t_50 = NULL,u_50 = NULL;
  s_50 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = s_50;
    }
  else
    {
      ATerm h_7 (ATerm t)
      {
        t = not_null(u_50);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          t_50 = ATgetFirst((ATermList) t);
          if(((u_50 != NULL) && (u_50 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            u_50 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = t_50;
      t = at_end_1_0(h_7, t);
    }
  return(t);
}
ATerm j_52 (ATerm a_52, ATerm t)
{
  ATerm c_52 = NULL;
  t = SSL_explode_term(a_52);
  if(match_cons(t, sym__2))
    {
      ATerm p_38 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) p_38) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      c_52 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_52;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm e_52 = NULL,f_52 = NULL,g_52 = NULL;
  g_52 = t;
  if(match_cons(t, sym__2))
    {
      e_52 = ATgetArgument(t, 0);
      f_52 = ATgetArgument(t, 1);
      {
        ATerm q_38 = t;
        int r_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_7 (ATerm t)
            {
              t = f_52;
              return(t);
            }
            t = e_52;
            t = at_end_1_0(i_7, t);
            ;
            LocalPopChoice(r_38);
          }
        else
          {
            t = q_38;
            t = j_52(g_52, t);
          }
      }
    }
  else
    {
      t = j_52(g_52, t);
    }
  return(t);
}
ATerm f_9 (ATerm z_56, ATerm y_56, ATerm t)
{
  ATerm k_52 = NULL,l_52 = NULL,m_52 = NULL;
  t = z_56;
  {
    ATerm v_38 = t;
    int w_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        ;
        LocalPopChoice(w_38);
      }
    else
      {
        t = v_38;
        t = (ATerm) ATempty;
      }
    l_52 = t;
    t = (ATerm) ATmakeAppl(sym__2, y_56, l_52);
    t = conc_0_0(t);
    k_52 = t;
    t = term_q_13;
    m_52 = t;
    t = SSL_table_put(m_52, z_56, k_52);
    t = (ATerm) ATmakeAppl(sym__3, term_q_13, z_56, k_52);
  }
  return(t);
}
ATerm j_7 (ATerm t)
{
  ATerm t_52 = NULL;
  t_52 = t;
  if(match_string(t, "-I"))
    {
      t = t_52;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--Include", 0, ATtrue)))
        _fail(t);
      t = t_52;
    }
  return(t);
}
ATerm k_7 (ATerm t)
{
  ATerm v_52 = NULL,w_52 = NULL,c_53 = NULL;
  v_52 = t;
  t = term_l_29;
  w_52 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, v_52), term_l_29);
  c_53 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_29, (ATerm) ATinsert(ATinsert(ATempty, v_52), term_l_29));
  t = f_9(w_52, c_53, t);
  t = term_k_27;
  return(t);
}
ATerm l_7 (ATerm t)
{
  t = term_x_38;
  return(t);
}
ATerm m_7 (ATerm t)
{
  ATerm d_53 = NULL;
  d_53 = t;
  if(match_string(t, "--nodep"))
    {
      t = d_53;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-nodep", 0, ATtrue)))
        _fail(t);
      t = d_53;
    }
  return(t);
}
ATerm n_7 (ATerm t)
{
  ATerm e_53 = NULL,g_53 = NULL;
  t = term_w_11;
  e_53 = t;
  t = term_y_38;
  g_53 = t;
  t = term_z_38;
  t = o_9(e_53, g_53, t);
  t = term_k_27;
  return(t);
}
ATerm q_7 (ATerm t)
{
  t = term_a_39;
  return(t);
}
ATerm r_7 (ATerm t)
{
  ATerm k_53 = NULL;
  k_53 = t;
  if(match_string(t, "--dep"))
    {
      t = k_53;
    }
  else
    {
      if(match_string(t, "-d"))
        {
          t = k_53;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-dep", 0, ATtrue)))
            _fail(t);
          t = k_53;
        }
    }
  return(t);
}
ATerm s_7 (ATerm t)
{
  ATerm n_53 = NULL,w_53 = NULL;
  n_53 = t;
  t = term_u_11;
  w_53 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_11, n_53);
  t = o_9(w_53, n_53, t);
  t = term_k_27;
  return(t);
}
ATerm t_7 (ATerm t)
{
  t = term_b_39;
  return(t);
}
ATerm a_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--imports", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm b_8 (ATerm t)
{
  ATerm x_53 = NULL,c_54 = NULL;
  t = term_c_39;
  x_53 = t;
  t = term_k_27;
  c_54 = t;
  t = term_e_39;
  t = o_9(x_53, c_54, t);
  t = term_k_27;
  return(t);
}
ATerm c_8 (ATerm t)
{
  t = term_g_39;
  return(t);
}
ATerm g_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--slack", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm h_8 (ATerm t)
{
  ATerm g_54 = NULL,i_54 = NULL;
  t = term_s_30;
  g_54 = t;
  t = term_k_27;
  i_54 = t;
  t = term_h_39;
  t = o_9(g_54, i_54, t);
  t = term_k_27;
  return(t);
}
ATerm s_8 (ATerm t)
{
  t = term_q_39;
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
  ATerm j_54 = NULL,k_54 = NULL;
  t = term_e_29;
  j_54 = t;
  t = term_y_38;
  k_54 = t;
  t = term_y_39;
  t = o_9(j_54, k_54, t);
  t = term_k_27;
  return(t);
}
ATerm x_8 (ATerm t)
{
  t = term_b_40;
  return(t);
}
ATerm pack_stratego_options_0_0 (ATerm t)
{
  ATerm g_40 = t;
  int h_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ArgOption_3_0(j_7, k_7, l_7, t);
      ;
      LocalPopChoice(h_40);
    }
  else
    {
      t = g_40;
      {
        ATerm j_40 = t;
        int k_40 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Option_3_0(m_7, n_7, q_7, t);
            ;
            LocalPopChoice(k_40);
          }
        else
          {
            t = j_40;
            {
              ATerm l_40 = t;
              int n_40 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = ArgOption_3_0(r_7, s_7, t_7, t);
                  ;
                  LocalPopChoice(n_40);
                }
              else
                {
                  t = l_40;
                  {
                    ATerm s_40 = t;
                    int t_40 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Option_3_0(a_8, b_8, c_8, t);
                        ;
                        LocalPopChoice(t_40);
                      }
                    else
                      {
                        t = s_40;
                        {
                          ATerm u_40 = t;
                          int v_40 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Option_3_0(g_8, h_8, s_8, t);
                              ;
                              LocalPopChoice(v_40);
                            }
                          else
                            {
                              t = u_40;
                              t = Option_3_0(v_8, w_8, x_8, t);
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
  ATerm m_54 = NULL,s_54 = NULL,t_54 = NULL,u_54 = NULL;
  t = report_run_time_0_0(t);
  t = term_k_27;
  t = whoami_0_0(t);
  m_54 = t;
  t = term_m_21;
  t_54 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_z_40), m_54);
  u_54 = t;
  t = SSL_printnl(t_54, u_54);
  t = term_i_14;
  s_54 = t;
  t = SSL_exit(s_54);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_a_41;
  t = get_config_0_0(t);
  return(t);
}
ATerm i_9 (ATerm r_37, ATerm s_37, ATerm t)
{
  ATerm b_41 = t;
  int c_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(r_37, s_37);
      ;
      LocalPopChoice(c_41);
    }
  else
    {
      t = b_41;
      t = SSL_addr(r_37, s_37);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm o_89 (ATerm), ATerm p_89 (ATerm), ATerm t)
{
  ATerm w_54 = NULL,x_54 = NULL,y_54 = NULL;
  w_54 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = w_54;
      t = o_89(t);
    }
  else
    {
      ATerm e_55 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_54 = ATgetFirst((ATermList) t);
          y_54 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = y_54;
      t = foldr_2_0(o_89, p_89, t);
      e_55 = t;
      t = (ATerm) ATmakeAppl(sym__2, x_54, e_55);
      t = p_89(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm y_8 (ATerm t)
{
  t = term_w_36;
  return(t);
}
ATerm a_9 (ATerm t)
{
  ATerm j_17 = NULL,m_17 = NULL;
  if(match_cons(t, sym__2))
    {
      j_17 = ATgetArgument(t, 0);
      m_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_9(j_17, m_17, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm l_55 = NULL,b_17 = NULL,g_17 = NULL;
  t = times_0_0(t);
  g_17 = t;
  t = SSL_explode_term(g_17);
  if(match_cons(t, sym__2))
    {
      ATerm d_41 = ATgetArgument(t, 0);
      b_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_17;
  t = foldr_2_0(y_8, a_9, t);
  l_55 = t;
  t = SSL_TicksToSeconds(l_55);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm f_56 = NULL,g_56 = NULL,h_56 = NULL;
  f_56 = t;
  if(match_cons(t, sym__2))
    {
      g_56 = ATgetArgument(t, 0);
      h_56 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm e_41 = t;
    int f_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_56;
        if((g_56 != t))
          {
            _fail(t);
          }
        t = f_56;
        ;
        LocalPopChoice(f_41);
      }
    else
      {
        t = e_41;
        t = (ATerm) ATmakeAppl(sym__2, g_56, h_56);
        {
          ATerm g_41 = t;
          int h_41 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(g_56, h_56);
              ;
              LocalPopChoice(h_41);
            }
          else
            {
              t = g_41;
              t = SSL_gtr(g_56, h_56);
            }
          t = (ATerm) ATmakeAppl(sym__2, g_56, h_56);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm s_97 (ATerm), ATerm t)
{
  ATerm l_56 = NULL;
  l_56 = t;
  {
    ATerm i_41 = t;
    int j_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_56 = NULL;
        t = term_l_14;
        t = get_config_0_0(t);
        n_56 = t;
        t = (ATerm) ATmakeAppl(sym__2, n_56, term_i_14);
        t = geq_0_0(t);
        t = l_56;
        t = s_97(t);
        ;
        LocalPopChoice(j_41);
      }
    else
      {
        t = i_41;
        t = l_56;
      }
  }
  return(t);
}
ATerm d_9 (ATerm t)
{
  ATerm p_56 = NULL,q_56 = NULL,s_56 = NULL,v_56 = NULL;
  t = run_time_0_0(t);
  p_56 = t;
  t = term_k_27;
  t = whoami_0_0(t);
  q_56 = t;
  t = term_m_21;
  s_56 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_k_41), p_56), term_r_14), q_56);
  v_56 = t;
  t = SSL_printnl(s_56, v_56);
  t = (ATerm) ATmakeAppl(sym__2, term_m_21, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_k_41), p_56), term_r_14), q_56));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(d_9, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm w_56 = NULL;
  t = report_run_time_0_0(t);
  t = term_w_36;
  w_56 = t;
  t = SSL_exit(w_56);
  return(t);
}
ATerm q_9 (ATerm t)
{
  ATerm l_57 = NULL,p_57 = NULL;
  p_57 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = p_57;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          l_57 = ATgetArgument(t, 0);
          {
            ATerm l_18 = NULL,l_5 = NULL;
            t = SSLgetAnnotations(p_57);
            l_18 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, l_57);
            l_5 = t;
            t = SSLsetAnnotations(l_5, l_18);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = p_57;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm g_99 (ATerm), ATerm t)
{
  ATerm l_41 = t;
  int m_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_n_41;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(m_41);
    }
  else
    {
      t = l_41;
      t = fetch_1_0(q_9, t);
    }
  t = g_99(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t)
{
  ATerm s_57 = NULL,t_57 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_57 = ATgetFirst((ATermList) t);
      t_57 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm x_57 = NULL,y_57 = NULL;
        ATerm r_9 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(x_57)), not_null(y_57));
          return(t);
        }
        t = t_57;
        t = h_0(t);
        if(((x_57 != NULL) && (x_57 != t)))
          _fail(t);
        else
          x_57 = t;
        t = s_57;
        t = g_0(t);
        if(((y_57 != NULL) && (y_57 != t)))
          _fail(t);
        else
          y_57 = t;
        t = t_57;
        t = reverse_acc_2_0(g_0, r_9, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_k_27;
      t = h_0(t);
    }
  return(t);
}
ATerm l_9 (ATerm f_50, ATerm g_50, ATerm t)
{
  t = SSL_table_get(f_50, g_50);
  return(t);
}
ATerm s_9 (ATerm t)
{
  ATerm c_58 = NULL,d_58 = NULL,e_58 = NULL,q_5 = NULL;
  e_58 = t;
  if(match_cons(t, sym_Program_1))
    {
      d_58 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_58);
  c_58 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, d_58);
  q_5 = t;
  t = SSLsetAnnotations(q_5, c_58);
  return(t);
}
ATerm t_9 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm u_9 (ATerm t)
{
  ATerm g_58 = NULL;
  g_58 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, g_58), term_o_41);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm a_58 = NULL,b_58 = NULL;
  ATerm p_41 = t;
  int q_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_a_41;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(q_41);
    }
  else
    {
      t = p_41;
      t = fetch_1_0(s_9, t);
    }
  t = term_r_41;
  t = echo_0_0(t);
  t = term_v_37;
  a_58 = t;
  t = term_z_37;
  b_58 = t;
  t = term_s_41;
  t = l_9(a_58, b_58, t);
  t = reverse_acc_2_0(_id, t_9, t);
  t = map_1_0(u_9, t);
  return(t);
}
ATerm fetch_1_0 (ATerm v_83 (ATerm), ATerm t)
{
  ATerm d_59 (ATerm t)
  {
    ATerm a_59 = NULL,b_59 = NULL,c_59 = NULL;
    a_59 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        b_59 = ATgetFirst((ATermList) t);
        c_59 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm t_41 = t;
      int u_41 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm u_18 = NULL,a_19 = NULL,t_5 = NULL;
          t = SSLgetAnnotations(a_59);
          u_18 = t;
          t = b_59;
          t = v_83(t);
          a_19 = t;
          t = (ATerm) ATinsert(CheckATermList(c_59), a_19);
          t_5 = t;
          t = SSLsetAnnotations(t_5, u_18);
          ;
          LocalPopChoice(u_41);
        }
      else
        {
          t = t_41;
          {
            ATerm l_19 = NULL,s_19 = NULL,u_5 = NULL;
            t = SSLgetAnnotations(a_59);
            l_19 = t;
            t = c_59;
            t = d_59(t);
            s_19 = t;
            t = (ATerm) ATinsert(CheckATermList(s_19), b_59);
            u_5 = t;
            t = SSLsetAnnotations(u_5, l_19);
          }
        }
    }
    return(t);
  }
  t = d_59(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm h_59 = NULL,i_59 = NULL,j_59 = NULL;
  h_59 = t;
  {
    ATerm v_41 = t;
    int z_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = h_59;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm a_42 = ATgetFirst((ATermList) t);
                ATerm b_42 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = h_59;
          }
        ;
        LocalPopChoice(z_41);
      }
    else
      {
        t = v_41;
        t = (ATerm) ATinsert(ATempty, h_59);
      }
    i_59 = t;
    t = term_m_36;
    j_59 = t;
    t = SSL_printnl(j_59, i_59);
    t = h_59;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_a_41;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm w_9 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm x_9 (ATerm t)
{
  ATerm n_59 = NULL,o_59 = NULL;
  t = term_c_42;
  n_59 = t;
  t = term_k_27;
  o_59 = t;
  t = term_d_42;
  t = o_9(n_59, o_59, t);
  return(t);
}
ATerm z_9 (ATerm t)
{
  t = term_e_42;
  return(t);
}
ATerm b_10 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm c_10 (ATerm t)
{
  ATerm p_59 = NULL,q_59 = NULL,r_59 = NULL,s_59 = NULL;
  t = term_c_42;
  r_59 = t;
  t = term_k_27;
  s_59 = t;
  t = term_d_42;
  t = o_9(r_59, s_59, t);
  t = term_f_42;
  p_59 = t;
  t = term_k_27;
  q_59 = t;
  t = term_g_42;
  t = o_9(p_59, q_59, t);
  t = term_l_42;
  return(t);
}
ATerm f_10 (ATerm t)
{
  t = term_m_42;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm n_42 = t;
  int o_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(w_9, x_9, z_9, t);
      ;
      LocalPopChoice(o_42);
    }
  else
    {
      t = n_42;
      t = Option_3_0(b_10, c_10, f_10, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm x_61 (ATerm), ATerm y_61 (ATerm), ATerm t)
{
  ATerm t_59 = NULL,u_59 = NULL,v_59 = NULL,w_59 = NULL,x_59 = NULL,y_59 = NULL,d_6 = NULL;
  y_59 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_59 = ATgetFirst((ATermList) t);
      v_59 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_59);
  t_59 = t;
  t = u_59;
  t = x_61(t);
  w_59 = t;
  t = v_59;
  t = y_61(t);
  x_59 = t;
  t = (ATerm) ATinsert(CheckATermList(x_59), w_59);
  d_6 = t;
  t = SSLsetAnnotations(d_6, t_59);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm x_101 (ATerm), ATerm t)
{
  ATerm d_60 = NULL,e_60 = NULL,f_60 = NULL,g_60 = NULL,i_60 = NULL,j_60 = NULL,p_6 = NULL;
  d_60 = t;
  {
    ATerm g_43 = t;
    int j_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_k_43;
        t = x_101(t);
        ;
        LocalPopChoice(j_43);
      }
    else
      {
        t = g_43;
      }
    t = d_60;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        f_60 = ATgetFirst((ATermList) t);
        g_60 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(d_60);
    e_60 = t;
    t = term_a_41;
    j_60 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_a_41, f_60);
    t = o_9(j_60, f_60, t);
    t = g_60;
    {
      ATerm t_60 (ATerm t)
      {
        ATerm l_43 = t;
        int m_43 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_43 = t;
            int o_43 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm m_60 = NULL;
                m_60 = t;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = m_60;
                ;
                LocalPopChoice(o_43);
              }
            else
              {
                t = n_43;
                t = x_101(t);
                t = Cons_2_0(_id, t_60, t);
              }
            ;
            LocalPopChoice(m_43);
          }
        else
          {
            t = l_43;
            {
              ATerm p_60 = NULL,q_60 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  p_60 = ATgetFirst((ATermList) t);
                  q_60 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(q_60), (ATerm) ATmakeAppl(sym_Undefined_1, p_60));
            }
          }
        return(t);
      }
      t = t_60(t);
      i_60 = t;
      t = (ATerm) ATinsert(CheckATermList(i_60), (ATerm) ATmakeAppl(sym_Program_1, f_60));
      p_6 = t;
      t = SSLsetAnnotations(p_6, e_60);
    }
  }
  return(t);
}
ATerm h_10 (ATerm t)
{
  ATerm f_61 = NULL;
  f_61 = t;
  if(match_string(t, "--help"))
    {
      t = f_61;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = f_61;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = f_61;
        }
    }
  return(t);
}
ATerm j_10 (ATerm t)
{
  ATerm g_61 = NULL,h_61 = NULL;
  t = term_n_41;
  g_61 = t;
  t = term_k_27;
  h_61 = t;
  t = term_p_43;
  t = o_9(g_61, h_61, t);
  t = term_q_43;
  return(t);
}
ATerm k_10 (ATerm t)
{
  t = term_r_43;
  return(t);
}
ATerm p_10 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm w_101 (ATerm), ATerm t)
{
  ATerm y_60 = NULL,z_60 = NULL,a_61 = NULL,b_61 = NULL,c_61 = NULL,d_61 = NULL,e_61 = NULL;
  a_61 = t;
  t = term_v_37;
  c_61 = t;
  t = term_z_37;
  d_61 = t;
  t = (ATerm) ATempty;
  e_61 = t;
  t = SSL_table_put(c_61, d_61, e_61);
  t = a_61;
  {
    ATerm g_10 (ATerm t)
    {
      ATerm s_43 = t;
      int t_43 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = w_101(t);
          ;
          LocalPopChoice(t_43);
        }
      else
        {
          t = s_43;
          {
            ATerm u_43 = t;
            int v_43 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(h_10, j_10, k_10, t);
                ;
                LocalPopChoice(v_43);
              }
            else
              {
                t = u_43;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(g_10, t);
    {
      ATerm w_43 = t;
      int x_43 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm o_61 = NULL;
          o_61 = t;
          {
            ATerm y_43 = t;
            int z_43 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm g_20 = NULL;
                t = o_61;
                {
                  ATerm a_44 = t;
                  int b_44 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_n_41;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(b_44);
                    }
                  else
                    {
                      t = a_44;
                      t = fetch_1_0(p_10, t);
                    }
                  t = o_61;
                  t = default_system_usage_0_0(t);
                  t = term_w_36;
                  g_20 = t;
                  t = SSL_exit(g_20);
                }
                ;
                LocalPopChoice(z_43);
              }
            else
              {
                t = y_43;
                {
                  ATerm o_20 = NULL;
                  t = term_c_42;
                  t = get_config_0_0(t);
                  t = o_61;
                  t = default_system_about_0_0(t);
                  t = term_w_36;
                  o_20 = t;
                  t = SSL_exit(o_20);
                }
              }
          }
          ;
          LocalPopChoice(x_43);
        }
      else
        {
          t = w_43;
          {
            ATerm c_44 = t;
            int d_44 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm p_61 = NULL,q_61 = NULL,r_61 = NULL;
                ATerm q_10 (ATerm t)
                {
                  ATerm s_61 = NULL,t_61 = NULL,u_61 = NULL,s_6 = NULL;
                  u_61 = t;
                  if(match_cons(t, sym_Undefined_1))
                    {
                      t_61 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(u_61);
                  s_61 = t;
                  t = t_61;
                  if(((y_60 != NULL) && (y_60 != t)))
                    _fail(t);
                  else
                    y_60 = t;
                  t = (ATerm) ATmakeAppl(sym_Undefined_1, t_61);
                  s_6 = t;
                  t = SSLsetAnnotations(s_6, s_61);
                  return(t);
                }
                t = fetch_1_0(q_10, t);
                t = term_m_21;
                q_61 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(y_60)), term_e_44);
                r_61 = t;
                t = SSL_printnl(q_61, r_61);
                t = (ATerm) ATmakeAppl(sym__2, term_m_21, (ATerm) ATinsert(ATinsert(ATempty, not_null(y_60)), term_e_44));
                t = default_system_usage_0_0(t);
                t = term_i_14;
                p_61 = t;
                t = SSL_exit(p_61);
                ;
                LocalPopChoice(d_44);
              }
            else
              {
                t = c_44;
              }
          }
        }
      z_60 = t;
      t = term_v_37;
      b_61 = t;
      t = SSL_table_destroy(b_61);
      t = z_60;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm i_99 (ATerm), ATerm j_99 (ATerm), ATerm k_99 (ATerm), ATerm l_99 (ATerm), ATerm t)
{
  ATerm b_62 = NULL,c_62 = NULL,d_62 = NULL,e_62 = NULL;
  t = parse_options_1_0(i_99, t);
  b_62 = t;
  t = term_f_44;
  e_62 = t;
  t = SSL_table_create(e_62);
  t = term_f_44;
  c_62 = t;
  t = term_g_44;
  d_62 = t;
  t = SSL_table_put(c_62, d_62, b_62);
  t = b_62;
  t = k_99(t);
  {
    ATerm h_44 = t;
    int i_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(j_99, t);
        ;
        LocalPopChoice(i_44);
      }
    else
      {
        t = h_44;
        {
          ATerm j_44 = t;
          int k_44 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = l_99(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(k_44);
            }
          else
            {
              t = j_44;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm r_10 (ATerm t)
{
  ATerm n_44 = t;
  int o_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = pack_stratego_options_0_0(t);
      ;
      LocalPopChoice(o_44);
    }
  else
    {
      t = n_44;
      {
        ATerm p_44 = t;
        int u_44 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = input_option_0_0(t);
            ;
            LocalPopChoice(u_44);
          }
        else
          {
            t = p_44;
            {
              ATerm x_44 = t;
              int y_44 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = output_option_0_0(t);
                  ;
                  LocalPopChoice(y_44);
                }
              else
                {
                  t = x_44;
                  {
                    ATerm z_44 = t;
                    int a_45 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Option_3_0(w_10, a_11, g_11, t);
                        ;
                        LocalPopChoice(a_45);
                      }
                    else
                      {
                        t = z_44;
                        {
                          ATerm c_45 = t;
                          int e_45 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = verbose_option_0_0(t);
                              ;
                              LocalPopChoice(e_45);
                            }
                          else
                            {
                              t = c_45;
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
ATerm w_10 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm a_11 (ATerm t)
{
  ATerm k_62 = NULL,l_62 = NULL;
  t = term_i_45;
  k_62 = t;
  t = term_k_27;
  l_62 = t;
  t = term_k_45;
  t = o_9(k_62, l_62, t);
  t = term_n_45;
  return(t);
}
ATerm g_11 (ATerm t)
{
  t = term_o_45;
  return(t);
}
ATerm l_11 (ATerm t)
{
  t = get_filename_0_0(t);
  t = basename_1_0(_id, t);
  return(t);
}
ATerm pack_stratego_0_0 (ATerm t)
{
  ATerm i_62 = NULL,j_62 = NULL;
  ATerm s_10 (ATerm t)
  {
    ATerm h_11 (ATerm t)
    {
      ATerm n_62 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          n_62 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = e_9(n_62, t);
      if(match_cons(t, sym__2))
        {
          if(((i_62 != NULL) && (i_62 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            i_62 = ATgetArgument(t, 0);
          if(((j_62 != NULL) && (j_62 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            j_62 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm r_45 = t;
        int s_45 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_c_39;
            t = get_config_0_0(t);
            t = i_62;
            t = map_1_0(l_11, t);
            t = write_to_text_0_0(t);
            ;
            LocalPopChoice(s_45);
          }
        else
          {
            t = r_45;
            {
              ATerm t_45 = t;
              int u_45 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = i_62;
                  t = create_dep_file_0_0(t);
                  ;
                  LocalPopChoice(u_45);
                }
              else
                {
                  t = t_45;
                }
              t = j_62;
              t = write_to_0_0(t);
            }
          }
      }
      return(t);
    }
    t = xtc_io_1_0(h_11, t);
    return(t);
  }
  t = option_wrap_4_0(r_10, default_usage_0_0, _id, s_10, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = pack_stratego_0_0(t);
  return(t);
}
