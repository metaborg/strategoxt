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
ATerm term_q_45;
ATerm term_m_45;
ATerm term_l_45;
ATerm term_k_45;
ATerm term_r_44;
ATerm term_q_44;
ATerm term_p_44;
ATerm term_c_44;
ATerm term_b_44;
ATerm term_a_44;
ATerm term_d_43;
ATerm term_t_42;
ATerm term_s_42;
ATerm term_q_42;
ATerm term_n_42;
ATerm term_m_42;
ATerm term_l_42;
ATerm term_k_42;
ATerm term_d_42;
ATerm term_c_42;
ATerm term_z_41;
ATerm term_y_41;
ATerm term_v_41;
ATerm term_f_41;
ATerm term_d_41;
ATerm term_s_39;
ATerm term_r_39;
ATerm term_q_39;
ATerm term_k_39;
ATerm term_j_39;
ATerm term_i_39;
ATerm term_g_39;
ATerm term_e_39;
ATerm term_d_39;
ATerm term_c_39;
ATerm term_b_39;
ATerm term_a_39;
ATerm term_c_38;
ATerm term_b_38;
ATerm term_y_37;
ATerm term_x_37;
ATerm term_q_37;
ATerm term_p_37;
ATerm term_k_37;
ATerm term_j_37;
ATerm term_i_37;
ATerm term_h_37;
ATerm term_g_37;
ATerm term_f_37;
ATerm term_c_37;
ATerm term_a_37;
ATerm term_z_36;
ATerm term_v_36;
ATerm term_r_36;
ATerm term_k_36;
ATerm term_g_34;
ATerm term_f_34;
ATerm term_x_33;
ATerm term_n_31;
ATerm term_m_31;
ATerm term_k_31;
ATerm term_j_31;
ATerm term_i_31;
ATerm term_h_31;
ATerm term_f_31;
ATerm term_s_30;
ATerm term_z_29;
ATerm term_o_29;
ATerm term_l_29;
ATerm term_z_28;
ATerm term_e_28;
ATerm term_a_28;
ATerm term_u_27;
ATerm term_t_27;
ATerm term_q_27;
ATerm term_m_27;
ATerm term_i_27;
ATerm term_e_27;
ATerm term_d_27;
ATerm term_c_27;
ATerm term_u_26;
ATerm term_m_26;
ATerm term_g_26;
ATerm term_a_26;
ATerm term_h_25;
ATerm term_g_25;
ATerm term_a_25;
ATerm term_z_24;
ATerm term_u_24;
ATerm term_m_24;
ATerm term_l_24;
ATerm term_h_24;
ATerm term_e_24;
ATerm term_a_24;
ATerm term_z_23;
ATerm term_v_23;
ATerm term_s_23;
ATerm term_o_23;
ATerm term_n_23;
ATerm term_j_23;
ATerm term_t_21;
ATerm term_s_21;
ATerm term_k_21;
ATerm term_j_21;
ATerm term_i_21;
ATerm term_h_21;
ATerm term_g_21;
ATerm term_f_21;
ATerm term_e_21;
ATerm term_c_21;
ATerm term_z_20;
ATerm term_w_20;
ATerm term_u_20;
ATerm term_q_20;
ATerm term_p_20;
ATerm term_o_20;
ATerm term_n_20;
ATerm term_m_20;
ATerm term_j_20;
ATerm term_h_20;
ATerm term_g_20;
ATerm term_e_20;
ATerm term_d_20;
ATerm term_c_20;
ATerm term_b_20;
ATerm term_a_20;
ATerm term_z_19;
ATerm term_x_19;
ATerm term_w_19;
ATerm term_v_19;
ATerm term_u_19;
ATerm term_t_19;
ATerm term_r_19;
ATerm term_q_19;
ATerm term_o_19;
ATerm term_l_19;
ATerm term_i_19;
ATerm term_h_19;
ATerm term_g_19;
ATerm term_e_19;
ATerm term_c_19;
ATerm term_b_19;
ATerm term_a_19;
ATerm term_z_18;
ATerm term_y_18;
ATerm term_w_18;
ATerm term_v_18;
ATerm term_u_18;
ATerm term_s_18;
ATerm term_r_18;
ATerm term_q_18;
ATerm term_p_18;
ATerm term_o_18;
ATerm term_n_18;
ATerm term_k_18;
ATerm term_j_18;
ATerm term_i_18;
ATerm term_h_18;
ATerm term_d_18;
ATerm term_c_18;
ATerm term_b_18;
ATerm term_z_17;
ATerm term_v_17;
ATerm term_u_17;
ATerm term_s_17;
ATerm term_r_17;
ATerm term_q_17;
ATerm term_p_17;
ATerm term_o_17;
ATerm term_n_17;
ATerm term_m_17;
ATerm term_l_17;
ATerm term_k_17;
ATerm term_j_17;
ATerm term_h_17;
ATerm term_g_17;
ATerm term_e_17;
ATerm term_d_17;
ATerm term_a_17;
ATerm term_z_16;
ATerm term_y_16;
ATerm term_x_16;
ATerm term_w_16;
ATerm term_u_16;
ATerm term_t_16;
ATerm term_s_16;
ATerm term_r_16;
ATerm term_q_16;
ATerm term_m_16;
ATerm term_k_16;
ATerm term_j_16;
ATerm term_i_16;
ATerm term_h_16;
ATerm term_g_16;
ATerm term_e_16;
ATerm term_c_16;
ATerm term_y_15;
ATerm term_x_15;
ATerm term_w_15;
ATerm term_v_15;
ATerm term_u_15;
ATerm term_s_15;
ATerm term_q_15;
ATerm term_p_15;
ATerm term_m_15;
ATerm term_l_15;
ATerm term_k_15;
ATerm term_j_15;
ATerm term_i_15;
ATerm term_h_15;
ATerm term_f_15;
ATerm term_e_15;
ATerm term_y_14;
ATerm term_x_14;
ATerm term_w_14;
ATerm term_v_14;
ATerm term_s_14;
ATerm term_n_14;
ATerm term_j_14;
ATerm term_h_14;
ATerm term_g_14;
ATerm term_r_13;
ATerm term_j_13;
ATerm term_m_12;
ATerm term_j_12;
ATerm term_i_12;
ATerm term_e_12;
ATerm term_c_12;
ATerm term_z_11;
ATerm term_y_11;
ATerm term_v_11;
ATerm term_r_11;
void init_constant_terms (void)
{
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--dep", 0, ATtrue));
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--nodep", 0, ATtrue));
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeAppl(ATmakeSymbol(".", 0, ATtrue));
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeAppl(ATmakeSymbol("dep", 0, ATtrue));
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeAppl(ATmakeSymbol(" \\\n	", 0, ATtrue));
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeAppl(ATmakeSymbol(" :", 0, ATtrue));
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_g_14));
  term_g_14 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_15, term_n_14, term_f_15);
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_15, term_j_15, term_k_15);
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_15, term_p_15, term_q_15);
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_15, term_v_15, term_w_15);
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_15, term_c_16, term_e_16);
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_16, term_i_16, term_j_16);
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_16, term_q_16, term_r_16);
  ATprotect(&(term_t_16));
  term_t_16 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_u_16));
  term_u_16 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_16, term_u_16, term_w_16);
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_a_17));
  term_a_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_16, term_z_16, term_a_17);
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_g_17));
  term_g_17 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_h_17));
  term_h_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_j_17));
  term_j_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_17, term_g_17, term_h_17);
  ATprotect(&(term_k_17));
  term_k_17 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_l_17));
  term_l_17 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_m_17));
  term_m_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_n_17));
  term_n_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_17, term_l_17, term_m_17);
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_q_17));
  term_q_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_r_17));
  term_r_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_17, term_p_17, term_q_17);
  ATprotect(&(term_s_17));
  term_s_17 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_u_17));
  term_u_17 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_v_17));
  term_v_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_z_17));
  term_z_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_17, term_u_17, term_v_17);
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_d_18));
  term_d_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_h_18));
  term_h_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_18, term_c_18, term_d_18);
  ATprotect(&(term_i_18));
  term_i_18 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_j_18));
  term_j_18 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_k_18));
  term_k_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_n_18));
  term_n_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_18, term_j_18, term_k_18);
  ATprotect(&(term_o_18));
  term_o_18 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_p_18));
  term_p_18 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_q_18));
  term_q_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_r_18));
  term_r_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_18, term_p_18, term_q_18);
  ATprotect(&(term_s_18));
  term_s_18 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_u_18));
  term_u_18 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_v_18));
  term_v_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_w_18));
  term_w_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_18, term_u_18, term_v_18);
  ATprotect(&(term_y_18));
  term_y_18 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_z_18));
  term_z_18 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_a_19));
  term_a_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_b_19));
  term_b_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_18, term_z_18, term_a_19);
  ATprotect(&(term_c_19));
  term_c_19 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_e_19));
  term_e_19 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_h_19));
  term_h_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_19, term_e_19, term_g_19);
  ATprotect(&(term_i_19));
  term_i_19 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_l_19));
  term_l_19 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_o_19));
  term_o_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_19, term_m_12, term_l_19);
  ATprotect(&(term_q_19));
  term_q_19 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_r_19));
  term_r_19 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_t_19));
  term_t_19 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_u_19));
  term_u_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_19, term_r_19, term_t_19);
  ATprotect(&(term_v_19));
  term_v_19 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_w_19));
  term_w_19 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_x_19));
  term_x_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_z_19));
  term_z_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_19, term_w_19, term_x_19);
  ATprotect(&(term_a_20));
  term_a_20 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_b_20));
  term_b_20 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_c_20));
  term_c_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_d_20));
  term_d_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_20, term_b_20, term_c_20);
  ATprotect(&(term_e_20));
  term_e_20 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_g_20));
  term_g_20 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_h_20));
  term_h_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_j_20));
  term_j_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_20, term_g_20, term_h_20);
  ATprotect(&(term_m_20));
  term_m_20 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_n_20));
  term_n_20 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_o_20));
  term_o_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_p_20));
  term_p_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_20, term_n_20, term_o_20);
  ATprotect(&(term_q_20));
  term_q_20 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_u_20));
  term_u_20 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_w_20));
  term_w_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_z_20));
  term_z_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_20, term_u_20, term_w_20);
  ATprotect(&(term_c_21));
  term_c_21 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_e_21));
  term_e_21 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_f_21));
  term_f_21 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_g_21));
  term_g_21 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_21, term_e_21, term_f_21);
  ATprotect(&(term_h_21));
  term_h_21 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_i_21));
  term_i_21 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_j_21));
  term_j_21 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_21, term_i_21, term_j_21);
  ATprotect(&(term_s_21));
  term_s_21 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_t_21));
  term_t_21 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_j_23));
  term_j_23 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_n_23));
  term_n_23 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_o_23));
  term_o_23 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_s_23));
  term_s_23 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_v_23));
  term_v_23 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_z_23));
  term_z_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_a_24));
  term_a_24 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_e_24));
  term_e_24 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_h_24));
  term_h_24 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_l_24));
  term_l_24 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_m_24));
  term_m_24 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_u_24));
  term_u_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_z_24));
  term_z_24 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_a_25));
  term_a_25 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_g_25));
  term_g_25 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_h_25));
  term_h_25 = (ATerm) ATmakeAppl(sym__2, term_l_24, term_g_25);
  ATprotect(&(term_a_26));
  term_a_26 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_g_26));
  term_g_26 = (ATerm) ATmakeAppl(sym__2, term_l_24, term_m_24);
  ATprotect(&(term_m_26));
  term_m_26 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_u_26));
  term_u_26 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_c_27));
  term_c_27 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_d_27));
  term_d_27 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_e_27));
  term_e_27 = (ATerm) ATmakeInt(-1);
  ATprotect(&(term_i_27));
  term_i_27 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_m_27));
  term_m_27 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file> (file, mode)", 0, ATtrue));
  ATprotect(&(term_q_27));
  term_q_27 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_t_27));
  term_t_27 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_u_27));
  term_u_27 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_a_28));
  term_a_28 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_e_28));
  term_e_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_z_28));
  term_z_28 = (ATerm) ATmakeAppl(ATmakeSymbol("parse error in ", 0, ATtrue));
  ATprotect(&(term_l_29));
  term_l_29 = (ATerm) ATmakeAppl(ATmakeSymbol("parse-stratego", 0, ATtrue));
  ATprotect(&(term_o_29));
  term_o_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--asfix", 0, ATtrue));
  ATprotect(&(term_z_29));
  term_z_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue));
  ATprotect(&(term_s_30));
  term_s_30 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
  ATprotect(&(term_f_31));
  term_f_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--slack", 0, ATtrue));
  ATprotect(&(term_h_31));
  term_h_31 = (ATerm) ATmakeAppl(ATmakeSymbol("*** module ", 0, ATtrue));
  ATprotect(&(term_i_31));
  term_i_31 = (ATerm) ATmakeAppl(ATmakeSymbol(" not found", 0, ATtrue));
  ATprotect(&(term_j_31));
  term_j_31 = (ATerm) ATmakeAppl(ATmakeSymbol(" reading ", 0, ATtrue));
  ATprotect(&(term_k_31));
  term_k_31 = (ATerm) ATmakeAppl(ATmakeSymbol("rtree", 0, ATtrue));
  ATprotect(&(term_m_31));
  term_m_31 = (ATerm) ATmakeAppl(ATmakeSymbol("str", 0, ATtrue));
  ATprotect(&(term_n_31));
  term_n_31 = (ATerm) ATmakeAppl(ATmakeSymbol("cr", 0, ATtrue));
  ATprotect(&(term_x_33));
  term_x_33 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_f_34));
  term_f_34 = (ATerm) ATmakeAppl(ATmakeSymbol("list-cons", 0, ATtrue));
  ATprotect(&(term_g_34));
  term_g_34 = (ATerm) ATmakeAppl(ATmakeSymbol("tuple-cons", 0, ATtrue));
  ATprotect(&(term_k_36));
  term_k_36 = (ATerm) ATmakeAppl(sym__2, term_a_28, term_i_27);
  ATprotect(&(term_r_36));
  term_r_36 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_v_36));
  term_v_36 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_z_36));
  term_z_36 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_a_37));
  term_a_37 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_c_37));
  term_c_37 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_f_37));
  term_f_37 = (ATerm) ATmakeAppl(sym__2, term_s_14, term_c_37);
  ATprotect(&(term_g_37));
  term_g_37 = (ATerm) ATmakeAppl(sym_Verbose_1, term_c_37);
  ATprotect(&(term_h_37));
  term_h_37 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_i_37));
  term_i_37 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_j_37));
  term_j_37 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_k_37));
  term_k_37 = (ATerm) ATmakeAppl(sym__2, term_j_37, term_t_27);
  ATprotect(&(term_p_37));
  term_p_37 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_q_37));
  term_q_37 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_x_37));
  term_x_37 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_y_37));
  term_y_37 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_b_38));
  term_b_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_c_38));
  term_c_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_a_39));
  term_a_39 = (ATerm) ATmakeAppl(ATmakeSymbol("-I d | --Include d   Include modules from directory d", 0, ATtrue));
  ATprotect(&(term_b_39));
  term_b_39 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_c_39));
  term_c_39 = (ATerm) ATmakeAppl(sym__2, term_y_11, term_b_39);
  ATprotect(&(term_d_39));
  term_d_39 = (ATerm) ATmakeAppl(ATmakeSymbol("--nodep              Don't create dependency file", 0, ATtrue));
  ATprotect(&(term_e_39));
  term_e_39 = (ATerm) ATmakeAppl(ATmakeSymbol("--dep f | -d f       Write dependency to file f", 0, ATtrue));
  ATprotect(&(term_g_39));
  term_g_39 = (ATerm) ATmakeAppl(ATmakeSymbol("--imports", 0, ATtrue));
  ATprotect(&(term_i_39));
  term_i_39 = (ATerm) ATmakeAppl(sym__2, term_g_39, term_t_27);
  ATprotect(&(term_j_39));
  term_j_39 = (ATerm) ATmakeAppl(ATmakeSymbol("--imports            Produce a list of imported modules only", 0, ATtrue));
  ATprotect(&(term_k_39));
  term_k_39 = (ATerm) ATmakeAppl(sym__2, term_f_31, term_t_27);
  ATprotect(&(term_q_39));
  term_q_39 = (ATerm) ATmakeAppl(ATmakeSymbol("--slack              Continue when module is not found", 0, ATtrue));
  ATprotect(&(term_r_39));
  term_r_39 = (ATerm) ATmakeAppl(sym__2, term_o_29, term_b_39);
  ATprotect(&(term_s_39));
  term_s_39 = (ATerm) ATmakeAppl(ATmakeSymbol("--asfix              Do not implode the concrete syntax parts", 0, ATtrue));
  ATprotect(&(term_d_41));
  term_d_41 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_f_41));
  term_f_41 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_v_41));
  term_v_41 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_y_41));
  term_y_41 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_z_41));
  term_z_41 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_c_42));
  term_c_42 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_d_42));
  term_d_42 = (ATerm) ATmakeAppl(sym__2, term_x_37, term_y_37);
  ATprotect(&(term_k_42));
  term_k_42 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_l_42));
  term_l_42 = (ATerm) ATmakeAppl(sym__2, term_k_42, term_t_27);
  ATprotect(&(term_m_42));
  term_m_42 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_n_42));
  term_n_42 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_q_42));
  term_q_42 = (ATerm) ATmakeAppl(sym__2, term_n_42, term_t_27);
  ATprotect(&(term_s_42));
  term_s_42 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_t_42));
  term_t_42 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_d_43));
  term_d_43 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_a_44));
  term_a_44 = (ATerm) ATmakeAppl(sym__2, term_y_41, term_t_27);
  ATprotect(&(term_b_44));
  term_b_44 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_c_44));
  term_c_44 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_p_44));
  term_p_44 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_q_44));
  term_q_44 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_r_44));
  term_r_44 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_k_45));
  term_k_45 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_l_45));
  term_l_45 = (ATerm) ATmakeAppl(sym__2, term_k_45, term_t_27);
  ATprotect(&(term_m_45));
  term_m_45 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_q_45));
  term_q_45 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
}
ATerm y_7 (ATerm b_43, ATerm c_43, ATerm);
ATerm a_0 (ATerm);
ATerm write_to_0_0 (ATerm);
ATerm z_7 (ATerm a_21, ATerm b_21, ATerm);
ATerm create_dep_file_0_0 (ATerm);
ATerm b_8 (ATerm g_35, ATerm h_35, ATerm);
ATerm c_8 (ATerm f_43, ATerm g_43, ATerm);
ATerm d_8 (ATerm k_96 (ATerm), ATerm s_431, ATerm j_43, ATerm);
ATerm f_0 (ATerm);
ATerm write_to_text_0_0 (ATerm);
ATerm basename_1_0 (ATerm l_93 (ATerm), ATerm);
ATerm at_suffix_rev_1_0 (ATerm l_84 (ATerm), ATerm);
ATerm get_filename_0_0 (ATerm);
ATerm map_1_0 (ATerm n_83 (ATerm), ATerm);
ATerm u_0 (ATerm);
ATerm v_0 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm z_0 (ATerm);
ATerm c_1 (ATerm);
ATerm flatten_stratego_0_0 (ATerm);
ATerm genzip_4_0 (ATerm q_85 (ATerm), ATerm r_85 (ATerm), ATerm s_85 (ATerm), ATerm t_85 (ATerm), ATerm);
ATerm e_1 (ATerm);
ATerm h_8 (ATerm x_127, ATerm);
ATerm read_from_0_0 (ATerm);
ATerm pass_keep_0_0 (ATerm);
ATerm i_8 (ATerm z_37, ATerm a_38, ATerm);
ATerm pass_verbose_0_0 (ATerm);
ATerm xtc_transform_term_2_0 (ATerm x_105 (ATerm), ATerm y_105 (ATerm), ATerm);
ATerm j_8 (ATerm u_44, ATerm v_44, ATerm);
ATerm signal_to_descr_0_0 (ATerm);
ATerm signal_from_number_0_0 (ATerm);
ATerm warn_ifsignaled_0_0 (ATerm);
ATerm fork_0_0 (ATerm);
ATerm fork_and_wait_1_0 (ATerm f_98 (ATerm), ATerm);
ATerm table_getlist_0_0 (ATerm);
ATerm if_verbose5_1_0 (ATerm y_97 (ATerm), ATerm);
ATerm if_verbose4_1_0 (ATerm x_97 (ATerm), ATerm);
ATerm if_verbose6_1_0 (ATerm z_97 (ATerm), ATerm);
ATerm m_8 (ATerm r_87 (ATerm), ATerm l_26, ATerm k_26, ATerm);
ATerm k_1 (ATerm);
ATerm n_8 (ATerm n_49, ATerm o_49, ATerm p_49, ATerm);
ATerm o_8 (ATerm c_102 (ATerm), ATerm x_49, ATerm w_49, ATerm);
ATerm r_20 (ATerm f_20, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm p_8 (ATerm h_43, ATerm);
ATerm q_8 (ATerm i_35, ATerm j_35, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm b_24 (ATerm z_21, ATerm);
ATerm c_24 (ATerm d_22, ATerm e_22, ATerm h_22, ATerm);
ATerm d_24 (ATerm w_22, ATerm z_22, ATerm a_23, ATerm);
ATerm r_8 (ATerm);
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
ATerm repeat_2_0 (ATerm w_76 (ATerm), ATerm x_76 (ATerm), ATerm);
ATerm xtc_location_0_0 (ATerm);
ATerm l_2 (ATerm);
ATerm m_2 (ATerm);
ATerm n_2 (ATerm);
ATerm o_2 (ATerm);
ATerm q_2 (ATerm);
ATerm xtc_load_0_0 (ATerm);
ATerm r_2 (ATerm);
ATerm u_2 (ATerm);
ATerm m_28 (ATerm f_27, ATerm);
ATerm f_3 (ATerm);
ATerm g_3 (ATerm);
ATerm h_3 (ATerm);
ATerm i_3 (ATerm);
ATerm xtc_find_0_0 (ATerm);
ATerm xtc_command_1_0 (ATerm o_105 (ATerm), ATerm);
ATerm s_8 (ATerm x_94 (ATerm), ATerm h_39, ATerm f_39, ATerm);
ATerm t_29 (ATerm h_29, ATerm);
ATerm u_29 (ATerm j_29, ATerm m_29, ATerm n_29, ATerm);
ATerm l_3 (ATerm);
ATerm open_file_0_0 (ATerm);
ATerm t_8 (ATerm a_34, ATerm b_34, ATerm);
ATerm new_0_0 (ATerm);
ATerm new_file_0_0 (ATerm);
ATerm m_3 (ATerm);
ATerm xtc_new_file_0_0 (ATerm);
ATerm xtc_transform_file_2_0 (ATerm m_0 (ATerm), ATerm n_0 (ATerm), ATerm);
ATerm g_33 (ATerm a_31, ATerm c_31, ATerm e_31, ATerm);
ATerm h_33 (ATerm x_32, ATerm y_32, ATerm);
ATerm p_3 (ATerm);
ATerm q_3 (ATerm);
ATerm r_3 (ATerm);
ATerm t_3 (ATerm);
ATerm parse_module_0_0 (ATerm);
ATerm debug_1_0 (ATerm i_96 (ATerm), ATerm);
ATerm if_verbose3_1_0 (ATerm w_97 (ATerm), ATerm);
ATerm fetch_elem_1_0 (ATerm z_83 (ATerm), ATerm);
ATerm u_8 (ATerm a_35, ATerm b_35, ATerm);
ATerm is_relpath_0_0 (ATerm);
ATerm v_8 (ATerm c_76 (ATerm), ATerm m_19, ATerm n_19, ATerm);
ATerm f_4 (ATerm);
ATerm get_module_1_0 (ATerm b_76 (ATerm), ATerm);
ATerm x_8 (ATerm u_87 (ATerm), ATerm v_87 (ATerm), ATerm p_26, ATerm o_26, ATerm);
ATerm y_8 (ATerm m_87 (ATerm), ATerm j_26, ATerm i_26, ATerm);
ATerm l_4 (ATerm);
ATerm m_4 (ATerm);
ATerm n_4 (ATerm);
ATerm d_9 (ATerm i_573, ATerm n_573, ATerm c_53, ATerm);
ATerm p_4 (ATerm);
ATerm t_4 (ATerm);
ATerm u_4 (ATerm);
ATerm z_39 (ATerm i_38, ATerm j_38, ATerm k_38, ATerm);
ATerm w_4 (ATerm);
ATerm diff_0_0 (ATerm);
ATerm f_9 (ATerm w_106 (ATerm), ATerm x_106 (ATerm), ATerm y_106 (ATerm), ATerm t_55, ATerm q_55, ATerm x_55, ATerm u_55, ATerm r_55, ATerm s_55, ATerm);
ATerm GnNext_3_0 (ATerm w_106 (ATerm), ATerm x_106 (ATerm), ATerm y_106 (ATerm), ATerm);
ATerm while_not_2_0 (ATerm n_77 (ATerm), ATerm o_77 (ATerm), ATerm);
ATerm for_3_0 (ATerm q_77 (ATerm), ATerm r_77 (ATerm), ATerm s_77 (ATerm), ATerm);
ATerm b_5 (ATerm);
ATerm c_5 (ATerm);
ATerm graph_nodes_roots_3_0 (ATerm t_106 (ATerm), ATerm u_106 (ATerm), ATerm v_106 (ATerm), ATerm);
ATerm filter_1_0 (ATerm u_90 (ATerm), ATerm);
ATerm f_5 (ATerm);
ATerm i_5 (ATerm);
ATerm j_5 (ATerm);
ATerm m_5 (ATerm);
ATerm o_5 (ATerm);
ATerm p_5 (ATerm);
ATerm i_9 (ATerm d_19, ATerm);
ATerm k_9 (ATerm b_40, ATerm c_40, ATerm);
ATerm copy_to_1_0 (ATerm l_0 (ATerm), ATerm);
ATerm l_9 (ATerm v_48, ATerm w_48, ATerm);
ATerm end_scope_1_0 (ATerm u_94 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm s_76 (ATerm), ATerm t_76 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm t_94 (ATerm), ATerm);
ATerm s_5 (ATerm);
ATerm w_5 (ATerm);
ATerm x_5 (ATerm);
ATerm xtc_temp_files_1_0 (ATerm a_105 (ATerm), ATerm);
ATerm j_6 (ATerm);
ATerm xtc_io_1_0 (ATerm b_105 (ATerm), ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm k_6 (ATerm);
ATerm l_6 (ATerm);
ATerm m_6 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm n_6 (ATerm);
ATerm o_6 (ATerm);
ATerm p_6 (ATerm);
ATerm r_6 (ATerm);
ATerm t_6 (ATerm);
ATerm u_6 (ATerm);
ATerm v_6 (ATerm);
ATerm w_6 (ATerm);
ATerm x_6 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm s_9 (ATerm v_56, ATerm w_56, ATerm);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm);
ATerm y_6 (ATerm);
ATerm d_7 (ATerm);
ATerm e_7 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm f_7 (ATerm);
ATerm g_7 (ATerm);
ATerm h_7 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm q_9 (ATerm q_48, ATerm r_48, ATerm p_48, ATerm);
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm);
ATerm at_end_1_0 (ATerm d_84 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm e_53 (ATerm r_52, ATerm);
ATerm conc_0_0 (ATerm);
ATerm j_9 (ATerm b_57, ATerm a_57, ATerm);
ATerm k_7 (ATerm);
ATerm l_7 (ATerm);
ATerm m_7 (ATerm);
ATerm n_7 (ATerm);
ATerm o_7 (ATerm);
ATerm p_7 (ATerm);
ATerm t_7 (ATerm);
ATerm u_7 (ATerm);
ATerm v_7 (ATerm);
ATerm w_7 (ATerm);
ATerm x_7 (ATerm);
ATerm a_8 (ATerm);
ATerm e_8 (ATerm);
ATerm f_8 (ATerm);
ATerm g_8 (ATerm);
ATerm k_8 (ATerm);
ATerm l_8 (ATerm);
ATerm w_8 (ATerm);
ATerm pack_stratego_options_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm m_9 (ATerm t_37, ATerm u_37, ATerm);
ATerm foldr_2_0 (ATerm q_89 (ATerm), ATerm r_89 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm z_8 (ATerm);
ATerm a_9 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm u_97 (ATerm), ATerm);
ATerm g_9 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm o_9 (ATerm);
ATerm need_help_1_0 (ATerm i_99 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm);
ATerm p_9 (ATerm h_50, ATerm i_50, ATerm);
ATerm t_9 (ATerm);
ATerm w_9 (ATerm);
ATerm x_9 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm fetch_1_0 (ATerm x_83 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm y_9 (ATerm);
ATerm z_9 (ATerm);
ATerm a_10 (ATerm);
ATerm b_10 (ATerm);
ATerm d_10 (ATerm);
ATerm h_10 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm z_61 (ATerm), ATerm a_62 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm z_101 (ATerm), ATerm);
ATerm j_10 (ATerm);
ATerm n_10 (ATerm);
ATerm p_10 (ATerm);
ATerm q_10 (ATerm);
ATerm parse_options_1_0 (ATerm y_101 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm k_99 (ATerm), ATerm l_99 (ATerm), ATerm m_99 (ATerm), ATerm n_99 (ATerm), ATerm);
ATerm u_10 (ATerm);
ATerm a_11 (ATerm);
ATerm e_11 (ATerm);
ATerm k_11 (ATerm);
ATerm m_11 (ATerm);
ATerm pack_stratego_0_0 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm y_7 (ATerm b_43, ATerm c_43, ATerm t)
{
  ATerm b_0 = NULL;
  t = SSL_write_term_to_stream_baf(b_43, c_43);
  b_0 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, b_0);
  return(t);
}
ATerm a_0 (ATerm t)
{
  ATerm r_0 = NULL,s_0 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm n_11 = ATgetArgument(t, 0);
      if(match_cons(n_11, sym_Stream_1))
        {
          r_0 = ATgetArgument(n_11, 0);
        }
      else
        _fail(t);
      s_0 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_7(r_0, s_0, t);
  return(t);
}
ATerm write_to_0_0 (ATerm t)
{
  ATerm o_0 = NULL,q_0 = NULL;
  o_0 = t;
  t = xtc_new_file_0_0(t);
  q_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_0, o_0);
  t = d_8(a_0, q_0, o_0, t);
  t = SSL_close_file(q_0);
  t = (ATerm) ATmakeAppl(sym_FILE_1, q_0);
  return(t);
}
ATerm z_7 (ATerm a_21, ATerm b_21, ATerm t)
{
  ATerm o_1 = NULL,p_1 = NULL;
  t = b_21;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = b_21;
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
      t = SSLgetAnnotations(b_21);
      t_0 = t;
      t = p_1;
      {
        ATerm a_1 (ATerm t)
        {
          ATerm p_11 = t;
          int q_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm x_0 = NULL;
              x_0 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = x_0;
              ;
              LocalPopChoice(q_11);
            }
          else
            {
              t = p_11;
              {
                ATerm y_0 = NULL;
                t = Cons_2_0(_id, a_1, t);
                y_0 = t;
                t = (ATerm) ATinsert(CheckATermList(y_0), a_21);
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
  t = term_r_11;
  t = get_config_0_0(t);
  {
    ATerm s_11 = t;
    int u_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_v_11;
        t = get_config_0_0(t);
        ;
        LocalPopChoice(u_11);
      }
    else
      {
        t = s_11;
        {
          ATerm w_11 = t;
          if((PushChoice() == 0))
            {
              t = term_y_11;
              t = get_config_0_0(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = w_11;
            }
        }
      }
    t_1 = t;
    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_c_12), term_z_11), t_1);
    s_2 = t;
    t = SSL_concat_strings(s_2);
    e_2 = t;
    t = (ATerm) ATmakeAppl(sym__2, e_2, term_e_12);
    t = open_file_0_0(t);
    v_1 = t;
    t = term_i_12;
    c_2 = t;
    t = (ATerm) ATinsert(CheckATermList(u_1), term_j_12);
    d_2 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_i_12, (ATerm) ATinsert(CheckATermList(u_1), term_j_12));
    t = z_7(c_2, d_2, t);
    w_1 = t;
    t = (ATerm) ATinsert(CheckATermList(w_1), t_1);
    a_2 = t;
    t = SSL_printnl(v_1, a_2);
    t = SSL_close_file(v_1);
    t = (ATerm) ATmakeAppl(sym_FILE_1, e_2);
  }
  return(t);
}
ATerm b_8 (ATerm g_35, ATerm h_35, ATerm t)
{
  ATerm t_2 = NULL;
  t = SSL_fputc(g_35, h_35);
  t_2 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, t_2);
  return(t);
}
ATerm c_8 (ATerm f_43, ATerm g_43, ATerm t)
{
  ATerm v_2 = NULL;
  t = SSL_write_term_to_stream_text(f_43, g_43);
  v_2 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, v_2);
  return(t);
}
ATerm d_8 (ATerm k_96 (ATerm), ATerm s_431, ATerm j_43, ATerm t)
{
  ATerm w_2 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, s_431, term_e_12);
  t = r_8(t);
  w_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_2, j_43);
  t = k_96(t);
  t = fclose_0_0(t);
  t = j_43;
  return(t);
}
ATerm f_0 (ATerm t)
{
  ATerm z_2 = NULL,a_3 = NULL,b_3 = NULL,c_3 = NULL,d_3 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm k_12 = ATgetArgument(t, 0);
      if(match_cons(k_12, sym_Stream_1))
        {
          c_3 = ATgetArgument(k_12, 0);
        }
      else
        _fail(t);
      d_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_8(c_3, d_3, t);
  z_2 = t;
  t = term_m_12;
  a_3 = t;
  t = z_2;
  if(match_cons(t, sym_Stream_1))
    {
      b_3 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_m_12, z_2);
  t = b_8(a_3, b_3, t);
  return(t);
}
ATerm write_to_text_0_0 (ATerm t)
{
  ATerm x_2 = NULL,y_2 = NULL;
  x_2 = t;
  t = xtc_new_file_0_0(t);
  y_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_2, x_2);
  t = d_8(f_0, y_2, x_2, t);
  t = SSL_close_file(y_2);
  t = (ATerm) ATmakeAppl(sym_FILE_1, y_2);
  return(t);
}
ATerm basename_1_0 (ATerm l_93 (ATerm), ATerm t)
{
  ATerm o_3 = NULL,s_3 = NULL;
  s_3 = t;
  t = SSL_explode_string(s_3);
  {
    ATerm s_12 = t;
    int u_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_5 (ATerm t)
        {
          ATerm y_4 = NULL,z_4 = NULL,a_5 = NULL;
          y_4 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              z_4 = ATgetFirst((ATermList) t);
              a_5 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          {
            ATerm x_12 = t;
            int y_12 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm b_2 = NULL,h_2 = NULL,d_1 = NULL;
                t = SSLgetAnnotations(y_4);
                b_2 = t;
                t = a_5;
                t = e_5(t);
                h_2 = t;
                t = (ATerm) ATinsert(CheckATermList(h_2), z_4);
                d_1 = t;
                t = SSLsetAnnotations(d_1, b_2);
                ;
                LocalPopChoice(y_12);
              }
            else
              {
                t = x_12;
                {
                  ATerm a_13 = t;
                  int b_13 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm p_2 = NULL,g_1 = NULL;
                      t = SSLgetAnnotations(y_4);
                      p_2 = t;
                      t = z_4;
                      if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 47)))
                        _fail(t);
                      t = (ATerm) ATinsert(CheckATermList(a_5), z_4);
                      g_1 = t;
                      t = SSLsetAnnotations(g_1, p_2);
                      ;
                      LocalPopChoice(b_13);
                    }
                  else
                    {
                      t = a_13;
                      {
                        ATerm k_3 = NULL,n_3 = NULL,h_1 = NULL;
                        t = SSLgetAnnotations(y_4);
                        k_3 = t;
                        t = z_4;
                        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 46)))
                          _fail(t);
                        t = a_5;
                        t = l_93(t);
                        n_3 = t;
                        t = (ATerm) ATinsert(CheckATermList(n_3), z_4);
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
        LocalPopChoice(u_12);
      }
    else
      {
        t = s_12;
      }
    o_3 = t;
    t = SSL_implode_string(o_3);
  }
  return(t);
}
ATerm at_suffix_rev_1_0 (ATerm l_84 (ATerm), ATerm t)
{
  ATerm c_6 (ATerm t)
  {
    ATerm c_13 = t;
    int d_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_5 = NULL,a_6 = NULL,b_6 = NULL,h_4 = NULL,r_4 = NULL,l_1 = NULL;
        y_5 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            a_6 = ATgetFirst((ATermList) t);
            b_6 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(y_5);
        h_4 = t;
        t = b_6;
        t = c_6(t);
        r_4 = t;
        t = (ATerm) ATinsert(CheckATermList(r_4), a_6);
        l_1 = t;
        t = SSLsetAnnotations(l_1, h_4);
        ;
        LocalPopChoice(d_13);
      }
    else
      {
        t = c_13;
        t = l_84(t);
      }
    return(t);
  }
  t = c_6(t);
  return(t);
}
ATerm get_filename_0_0 (ATerm t)
{
  ATerm g_6 = NULL,h_6 = NULL,i_6 = NULL;
  i_6 = t;
  t = SSL_explode_string(i_6);
  {
    ATerm e_13 = t;
    int f_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_0 (ATerm t)
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm g_13 = ATgetFirst((ATermList) t);
              if(((ATgetType(g_13) != AT_INT) || (ATgetInt((ATermInt) g_13) != 47)))
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
        LocalPopChoice(f_13);
      }
    else
      {
        t = e_13;
      }
    h_6 = t;
    t = SSL_implode_string(h_6);
  }
  return(t);
}
ATerm map_1_0 (ATerm n_83 (ATerm), ATerm t)
{
  ATerm c_7 (ATerm t)
  {
    ATerm z_6 = NULL,a_7 = NULL,b_7 = NULL;
    z_6 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = z_6;
      }
    else
      {
        ATerm t_5 = NULL,d_6 = NULL,f_6 = NULL,q_1 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            a_7 = ATgetFirst((ATermList) t);
            b_7 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(z_6);
        t_5 = t;
        t = a_7;
        t = n_83(t);
        d_6 = t;
        t = b_7;
        t = c_7(t);
        f_6 = t;
        t = (ATerm) ATinsert(CheckATermList(f_6), d_6);
        q_1 = t;
        t = SSLsetAnnotations(q_1, t_5);
      }
    return(t);
  }
  t = c_7(t);
  return(t);
}
ATerm u_0 (ATerm t)
{
  ATerm h_13 = t;
  int i_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(i_13);
    }
  else
    {
      t = h_13;
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
  ATerm l_13 = t;
  int m_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_7 = NULL;
      r_7 = t;
      t = SSL_is_string(r_7);
      ;
      LocalPopChoice(m_13);
    }
  else
    {
      t = l_13;
      {
        ATerm n_13 = t;
        int o_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(u_0, t);
            ;
            LocalPopChoice(o_13);
          }
        else
          {
            t = n_13;
            {
              ATerm b_9 = NULL,c_9 = NULL,e_9 = NULL;
              b_9 = t;
              if(match_cons(t, sym_Path_1))
                {
                  c_9 = ATgetArgument(t, 0);
                  t = c_9;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      c_9 = ATgetArgument(t, 0);
                      t = c_9;
                      {
                        ATerm p_13 = t;
                        int q_13 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(q_13);
                          }
                        else
                          {
                            t = p_13;
                            t = debug_1_0(v_0, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm u_9 = NULL,v_9 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          c_9 = ATgetArgument(t, 0);
                          e_9 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = c_9;
                      t = eval_config_0_0(t);
                      u_9 = t;
                      t = e_9;
                      t = eval_config_0_0(t);
                      v_9 = t;
                      t = (ATerm) ATmakeAppl(sym__2, u_9, v_9);
                      t = t_8(u_9, v_9, t);
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
  ATerm f_10 = NULL,k_10 = NULL;
  f_10 = t;
  t = term_r_13;
  k_10 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_13, f_10);
  t = p_9(k_10, f_10, t);
  {
    ATerm s_13 = t;
    int t_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_10 = NULL,m_10 = NULL;
        t = eval_config_0_0(t);
        l_10 = t;
        t = term_r_13;
        m_10 = t;
        t = SSL_table_put(m_10, f_10, l_10);
        t = l_10;
        ;
        LocalPopChoice(t_13);
      }
    else
      {
        t = s_13;
      }
  }
  return(t);
}
ATerm z_0 (ATerm t)
{
  ATerm t_10 = NULL;
  if(match_cons(t, sym_Specification_1))
    {
      t_10 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_10;
  t = filter_1_0(c_1, t);
  return(t);
}
ATerm c_1 (ATerm t)
{
  ATerm v_13 = t;
  if((PushChoice() == 0))
    {
      ATerm v_10 = NULL,x_10 = NULL,y_10 = NULL,u_3 = NULL;
      y_10 = t;
      if(match_cons(t, sym_Imports_1))
        {
          x_10 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(y_10);
      v_10 = t;
      t = (ATerm) ATmakeAppl(sym_Imports_1, x_10);
      u_3 = t;
      t = SSLsetAnnotations(u_3, v_10);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = v_13;
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
ATerm genzip_4_0 (ATerm q_85 (ATerm), ATerm r_85 (ATerm), ATerm s_85 (ATerm), ATerm t_85 (ATerm), ATerm t)
{
  ATerm i_11 (ATerm t)
  {
    ATerm w_13 = t;
    int f_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = q_85(t);
        ;
        LocalPopChoice(f_14);
      }
    else
      {
        t = w_13;
        {
          ATerm b_11 = NULL,c_11 = NULL,d_11 = NULL,f_11 = NULL,g_11 = NULL,h_11 = NULL,x_3 = NULL;
          t = r_85(t);
          h_11 = t;
          if(match_cons(t, sym__2))
            {
              c_11 = ATgetArgument(t, 0);
              d_11 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(h_11);
          b_11 = t;
          t = c_11;
          t = t_85(t);
          f_11 = t;
          t = d_11;
          t = i_11(t);
          g_11 = t;
          t = (ATerm) ATmakeAppl(sym__2, f_11, g_11);
          x_3 = t;
          t = SSLsetAnnotations(x_3, b_11);
          t = s_85(t);
        }
      }
    return(t);
  }
  t = i_11(t);
  return(t);
}
ATerm e_1 (ATerm t)
{
  ATerm j_11 = NULL;
  if(match_cons(t, sym_Imports_1))
    {
      j_11 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = j_11;
  return(t);
}
ATerm h_8 (ATerm x_127, ATerm t)
{
  t = x_127;
  t = filter_1_0(e_1, t);
  t = concat_0_0(t);
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm o_11 = NULL;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_g_14;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      ATerm t_11 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          o_11 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, term_h_14);
      t_11 = t;
      t = (ATerm) ATmakeAppl(sym__2, o_11, (ATerm) ATinsert(ATempty, term_h_14));
      t = u_8(o_11, t_11, t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
ATerm pass_keep_0_0 (ATerm t)
{
  ATerm x_11 = NULL,d_12 = NULL,f_12 = NULL,l_12 = NULL;
  t = term_j_14;
  {
    ATerm k_14 = t;
    int l_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        ;
        LocalPopChoice(l_14);
      }
    else
      {
        t = k_14;
        t = term_n_14;
      }
    d_12 = t;
    t = term_n_14;
    l_12 = t;
    t = (ATerm) ATmakeAppl(sym__2, d_12, term_n_14);
    t = i_8(d_12, l_12, t);
    f_12 = t;
    t = SSL_int_to_string(f_12);
    x_11 = t;
    t = (ATerm) ATinsert(ATinsert(ATempty, x_11), term_j_14);
  }
  return(t);
}
ATerm i_8 (ATerm z_37, ATerm a_38, ATerm t)
{
  ATerm o_14 = t;
  int q_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(z_37, a_38);
      ;
      LocalPopChoice(q_14);
    }
  else
    {
      t = o_14;
      t = SSL_subtr(z_37, a_38);
    }
  return(t);
}
ATerm pass_verbose_0_0 (ATerm t)
{
  ATerm o_12 = NULL,p_12 = NULL,r_12 = NULL,t_12 = NULL;
  t = term_s_14;
  {
    ATerm t_14 = t;
    int u_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        ;
        LocalPopChoice(u_14);
      }
    else
      {
        t = t_14;
        t = term_n_14;
      }
    p_12 = t;
    t = term_n_14;
    t_12 = t;
    t = (ATerm) ATmakeAppl(sym__2, p_12, term_n_14);
    t = i_8(p_12, t_12, t);
    r_12 = t;
    t = SSL_int_to_string(r_12);
    o_12 = t;
    t = (ATerm) ATinsert(ATinsert(ATempty, o_12), term_s_14);
  }
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm x_105 (ATerm), ATerm y_105 (ATerm), ATerm t)
{
  t = write_to_0_0(t);
  t = xtc_transform_file_2_0(x_105, y_105, t);
  t = read_from_0_0(t);
  return(t);
}
ATerm j_8 (ATerm u_44, ATerm v_44, ATerm t)
{
  t = SSL_execvp(u_44, v_44);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm x_13 = NULL,y_13 = NULL,z_13 = NULL,d_14 = NULL;
  x_13 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      y_13 = ATgetArgument(t, 0);
      {
        ATerm q_7 = NULL,s_7 = NULL;
        t = SSL_int_to_string(y_13);
        q_7 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_w_14), q_7), term_v_14);
        s_7 = t;
        t = SSL_concat_strings(s_7);
      }
    }
  else
    {
      ATerm h_9 = NULL,n_9 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          y_13 = ATgetArgument(t, 0);
          z_13 = ATgetArgument(t, 1);
          d_14 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(z_13);
      h_9 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, d_14), term_y_14), h_9), term_x_14), y_13);
      n_9 = t;
      t = SSL_concat_strings(n_9);
    }
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm i_14 = NULL;
  i_14 = t;
  {
    ATerm z_14 = t;
    int a_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_1 (ATerm t)
        {
          if(match_cons(t, sym_Signal_3))
            {
              ATerm b_15 = ATgetArgument(t, 0);
              if((i_14 != ATgetArgument(t, 1)))
                {
                  _fail(ATgetArgument(t, 1));
                }
              {
                ATerm d_15 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_k_21), term_g_21), term_z_20), term_p_20), term_j_20), term_d_20), term_z_19), term_u_19), term_o_19), term_h_19), term_b_19), term_w_18), term_r_18), term_n_18), term_h_18), term_z_17), term_r_17), term_n_17), term_j_17), term_d_17), term_x_16), term_s_16), term_k_16), term_g_16), term_x_15), term_s_15), term_l_15), term_h_15);
        t = fetch_elem_1_0(f_1, t);
        ;
        LocalPopChoice(a_15);
      }
    else
      {
        t = z_14;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, i_14);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm p_14 = NULL,c_15 = NULL;
  p_14 = t;
  {
    ATerm l_21 = t;
    int m_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm n_21 = ATgetArgument(t, 0);
            c_15 = ATgetArgument(t, 1);
            {
              ATerm o_21 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(m_21);
        {
          ATerm p_21 = t;
          int q_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm c_10 = NULL,e_10 = NULL,g_10 = NULL;
              t = c_15;
              {
                ATerm r_21 = t;
                if((PushChoice() == 0))
                  {
                    if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
                      _fail(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = r_21;
                  }
                t = signal_from_number_0_0(t);
                t = signal_to_descr_0_0(t);
                c_10 = t;
                t = term_s_21;
                e_10 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, c_10), term_t_21);
                g_10 = t;
                t = SSL_printnl(e_10, g_10);
                t = (ATerm) ATmakeAppl(sym__2, term_s_21, (ATerm) ATinsert(ATinsert(ATempty, c_10), term_t_21));
              }
              ;
              LocalPopChoice(q_21);
            }
          else
            {
              t = p_21;
              t = p_14;
            }
        }
      }
    else
      {
        t = l_21;
        t = p_14;
      }
    t = p_14;
  }
  return(t);
}
ATerm fork_0_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_and_wait_1_0 (ATerm f_98 (ATerm), ATerm t)
{
  ATerm r_15 = NULL,t_15 = NULL;
  t_15 = t;
  t = fork_0_0(t);
  r_15 = t;
  {
    ATerm u_21 = t;
    int v_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = t_15;
        t = f_98(t);
        ;
        LocalPopChoice(v_21);
      }
    else
      {
        t = u_21;
        t = SSL_waitpid(r_15);
        t = warn_ifsignaled_0_0(t);
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm w_21 = ATgetArgument(t, 0);
            if(((ATgetType(w_21) != AT_INT) || (ATgetInt((ATermInt) w_21) != 0)))
              _fail(t);
            {
              ATerm x_21 = ATgetArgument(t, 1);
            }
            {
              ATerm y_21 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = t_15;
      }
  }
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm z_15 = NULL;
  ATerm i_1 (ATerm t)
  {
    ATerm a_16 = NULL,d_16 = NULL;
    a_16 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(z_15), a_16);
    t = p_9(not_null(z_15), a_16, t);
    d_16 = t;
    t = (ATerm) ATmakeAppl(sym__2, a_16, d_16);
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
ATerm if_verbose5_1_0 (ATerm y_97 (ATerm), ATerm t)
{
  ATerm f_16 = NULL;
  f_16 = t;
  {
    ATerm b_22 = t;
    int c_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_16 = NULL;
        t = term_s_14;
        t = get_config_0_0(t);
        l_16 = t;
        t = (ATerm) ATmakeAppl(sym__2, l_16, term_n_20);
        t = geq_0_0(t);
        t = f_16;
        t = y_97(t);
        ;
        LocalPopChoice(c_22);
      }
    else
      {
        t = b_22;
        t = f_16;
      }
  }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm x_97 (ATerm), ATerm t)
{
  ATerm o_16 = NULL;
  o_16 = t;
  {
    ATerm f_22 = t;
    int g_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_16 = NULL;
        t = term_s_14;
        t = get_config_0_0(t);
        v_16 = t;
        t = (ATerm) ATmakeAppl(sym__2, v_16, term_p_17);
        t = geq_0_0(t);
        t = o_16;
        t = x_97(t);
        ;
        LocalPopChoice(g_22);
      }
    else
      {
        t = f_22;
        t = o_16;
      }
  }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm z_97 (ATerm), ATerm t)
{
  ATerm b_17 = NULL;
  b_17 = t;
  {
    ATerm k_22 = t;
    int m_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_17 = NULL;
        t = term_s_14;
        t = get_config_0_0(t);
        f_17 = t;
        t = (ATerm) ATmakeAppl(sym__2, f_17, term_v_15);
        t = geq_0_0(t);
        t = b_17;
        t = z_97(t);
        ;
        LocalPopChoice(m_22);
      }
    else
      {
        t = k_22;
        t = b_17;
      }
  }
  return(t);
}
ATerm m_8 (ATerm r_87 (ATerm), ATerm l_26, ATerm k_26, ATerm t)
{
  ATerm f_18 (ATerm t)
  {
    ATerm w_17 = NULL,x_17 = NULL,y_17 = NULL;
    w_17 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = k_26;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            x_17 = ATgetFirst((ATermList) t);
            y_17 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm n_22 = t;
          int o_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = w_17;
              {
                ATerm j_1 (ATerm t)
                {
                  t = k_26;
                  return(t);
                }
                t = x_8(r_87, j_1, x_17, y_17, t);
                t = f_18(t);
              }
              ;
              LocalPopChoice(o_22);
            }
          else
            {
              t = n_22;
              {
                ATerm o_10 = NULL,w_10 = NULL,z_3 = NULL;
                t = SSLgetAnnotations(w_17);
                o_10 = t;
                t = y_17;
                t = f_18(t);
                w_10 = t;
                t = (ATerm) ATinsert(CheckATermList(w_10), x_17);
                z_3 = t;
                t = SSLsetAnnotations(z_3, o_10);
              }
            }
        }
      }
    return(t);
  }
  t = l_26;
  t = f_18(t);
  return(t);
}
ATerm k_1 (ATerm t)
{
  ATerm f_19 = NULL;
  if(match_cons(t, sym__2))
    {
      f_19 = ATgetArgument(t, 0);
      if((f_19 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm n_8 (ATerm n_49, ATerm o_49, ATerm p_49, ATerm t)
{
  ATerm l_18 = NULL,m_18 = NULL,t_18 = NULL;
  l_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_49, o_49);
  {
    ATerm p_22 = t;
    int q_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm r_22 = ATgetArgument(t, 0);
            ATerm s_22 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, n_49, o_49);
        t = p_9(n_49, o_49, t);
        ;
        LocalPopChoice(q_22);
      }
    else
      {
        t = p_22;
        t = (ATerm) ATempty;
      }
    t_18 = t;
    t = (ATerm) ATmakeAppl(sym__2, t_18, p_49);
    t = m_8(k_1, t_18, p_49, t);
    m_18 = t;
    t = SSL_table_put(n_49, o_49, m_18);
    t = l_18;
  }
  return(t);
}
ATerm o_8 (ATerm c_102 (ATerm), ATerm x_49, ATerm w_49, ATerm t)
{
  ATerm m_1 (ATerm t)
  {
    ATerm j_19 = NULL,s_19 = NULL;
    if(match_cons(t, sym__2))
      {
        j_19 = ATgetArgument(t, 0);
        s_19 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, x_49, j_19, s_19);
    t = c_102(t);
    return(t);
  }
  t = w_49;
  t = map_1_0(m_1, t);
  return(t);
}
ATerm r_20 (ATerm f_20, ATerm t)
{
  t = SSL_fclose(f_20);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm k_20 = NULL,l_20 = NULL;
  l_20 = t;
  if(match_cons(t, sym_Stream_1))
    {
      k_20 = ATgetArgument(t, 0);
      {
        ATerm t_22 = t;
        int v_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(k_20);
            ;
            LocalPopChoice(v_22);
          }
        else
          {
            t = t_22;
            t = r_20(l_20, t);
          }
      }
    }
  else
    {
      t = r_20(l_20, t);
    }
  return(t);
}
ATerm p_8 (ATerm h_43, ATerm t)
{
  t = SSL_read_term_from_stream(h_43);
  return(t);
}
ATerm q_8 (ATerm i_35, ATerm j_35, ATerm t)
{
  ATerm s_20 = NULL;
  t = SSL_fopen(i_35, j_35);
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
  ATerm x_20 = NULL;
  t = SSL_stdout_stream();
  x_20 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, x_20);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm y_20 = NULL;
  t = SSL_stderr_stream();
  y_20 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, y_20);
  return(t);
}
ATerm b_24 (ATerm z_21, ATerm t)
{
  ATerm a_22 = NULL;
  t = SSL_explode_term(z_21);
  if(match_cons(t, sym__2))
    {
      ATerm x_22 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) x_22) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm y_22 = ATgetArgument(t, 1);
        if(((ATgetType(y_22) == AT_LIST) && !(ATisEmpty(y_22))))
          {
            a_22 = ATgetFirst((ATermList) y_22);
            {
              ATerm c_23 = (ATerm) ATgetNext((ATermList) y_22);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = a_22;
  if(match_cons(t, sym_stderr_0))
    {
      t = a_22;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = a_22;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = a_22;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm c_24 (ATerm d_22, ATerm e_22, ATerm h_22, ATerm t)
{
  ATerm i_22 = NULL,j_22 = NULL,l_22 = NULL,u_22 = NULL,c_4 = NULL;
  t = SSLgetAnnotations(h_22);
  l_22 = t;
  t = d_22;
  if(match_cons(t, sym_Path_1))
    {
      u_22 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, u_22, e_22);
  c_4 = t;
  t = SSLsetAnnotations(c_4, l_22);
  if(match_cons(t, sym__2))
    {
      i_22 = ATgetArgument(t, 0);
      j_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_8(i_22, j_22, t);
  return(t);
}
ATerm d_24 (ATerm w_22, ATerm z_22, ATerm a_23, ATerm t)
{
  ATerm b_23 = NULL,f_23 = NULL,i_23 = NULL,l_23 = NULL,d_4 = NULL;
  t = SSLgetAnnotations(a_23);
  i_23 = t;
  t = SSL_is_string(w_22);
  l_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_23, z_22);
  d_4 = t;
  t = SSLsetAnnotations(d_4, i_23);
  if(match_cons(t, sym__2))
    {
      b_23 = ATgetArgument(t, 0);
      f_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_8(b_23, f_23, t);
  return(t);
}
ATerm r_8 (ATerm t)
{
  ATerm p_23 = NULL,q_23 = NULL,r_23 = NULL;
  p_23 = t;
  if(match_cons(t, sym__2))
    {
      q_23 = ATgetArgument(t, 0);
      r_23 = ATgetArgument(t, 1);
      {
        ATerm d_23 = t;
        int e_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = b_24(p_23, t);
            ;
            LocalPopChoice(e_23);
          }
        else
          {
            t = d_23;
            {
              ATerm g_23 = t;
              int h_23 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = c_24(q_23, r_23, p_23, t);
                  ;
                  LocalPopChoice(h_23);
                }
              else
                {
                  t = g_23;
                  t = d_24(q_23, r_23, p_23, t);
                }
            }
          }
      }
    }
  else
    {
      t = b_24(p_23, t);
    }
  return(t);
}
ATerm n_1 (ATerm t)
{
  t = term_j_23;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm f_24 = NULL,g_24 = NULL,i_24 = NULL;
  ATerm k_23 = t;
  int m_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_24 = NULL;
      j_24 = t;
      t = (ATerm) ATmakeAppl(sym__2, j_24, term_n_23);
      t = r_8(t);
      ;
      LocalPopChoice(m_23);
    }
  else
    {
      t = k_23;
      t = debug_1_0(n_1, t);
      _fail(t);
    }
  g_24 = t;
  if(match_cons(t, sym_Stream_1))
    {
      i_24 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = p_8(i_24, t);
  f_24 = t;
  t = g_24;
  t = fclose_0_0(t);
  t = f_24;
  return(t);
}
ATerm r_1 (ATerm t)
{
  t = term_o_23;
  return(t);
}
ATerm s_1 (ATerm t)
{
  t = term_s_23;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm t_23 = t;
  int u_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_24 = NULL,r_24 = NULL;
      q_24 = t;
      t = (ATerm) ATinsert(ATempty, term_v_23);
      r_24 = t;
      t = (ATerm) ATmakeAppl(sym__2, q_24, (ATerm) ATinsert(ATempty, term_v_23));
      t = u_8(q_24, r_24, t);
      LocalPopChoice(u_23);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = t_23;
      {
        ATerm w_23 = t;
        int x_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_23 = t;
            if((PushChoice() == 0))
              {
                ATerm s_24 = NULL,w_24 = NULL;
                s_24 = t;
                t = (ATerm) ATinsert(ATempty, term_h_14);
                w_24 = t;
                t = (ATerm) ATmakeAppl(sym__2, s_24, (ATerm) ATinsert(ATempty, term_h_14));
                t = u_8(s_24, w_24, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = y_23;
              }
            t = debug_1_0(r_1, t);
            ;
            LocalPopChoice(x_23);
          }
        else
          {
            t = w_23;
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
  t = term_z_23;
  return(t);
}
ATerm z_1 (ATerm t)
{
  t = debug_1_0(f_2, t);
  return(t);
}
ATerm f_2 (ATerm t)
{
  t = term_a_24;
  return(t);
}
ATerm g_2 (ATerm t)
{
  ATerm o_25 = NULL,p_25 = NULL,q_25 = NULL;
  o_25 = t;
  t = term_s_21;
  p_25 = t;
  t = (ATerm) ATinsert(ATempty, term_e_24);
  q_25 = t;
  t = SSL_printnl(p_25, q_25);
  t = o_25;
  return(t);
}
ATerm i_2 (ATerm t)
{
  ATerm r_25 = NULL,s_25 = NULL,t_25 = NULL;
  if(match_cons(t, sym__3))
    {
      r_25 = ATgetArgument(t, 0);
      s_25 = ATgetArgument(t, 1);
      t_25 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = n_8(r_25, s_25, t_25, t);
  return(t);
}
ATerm j_2 (ATerm t)
{
  ATerm u_25 = NULL,w_25 = NULL,x_25 = NULL;
  u_25 = t;
  t = term_s_21;
  w_25 = t;
  t = (ATerm) ATinsert(ATempty, term_h_24);
  x_25 = t;
  t = SSL_printnl(w_25, x_25);
  t = u_25;
  return(t);
}
ATerm k_2 (ATerm t)
{
  ATerm y_25 = NULL,z_25 = NULL,b_26 = NULL;
  y_25 = t;
  t = term_s_21;
  z_25 = t;
  t = (ATerm) ATinsert(ATempty, term_e_24);
  b_26 = t;
  t = SSL_printnl(z_25, b_26);
  t = y_25;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm y_24 = NULL,b_25 = NULL,c_25 = NULL,d_25 = NULL,e_25 = NULL,f_25 = NULL,i_25 = NULL,j_25 = NULL,k_25 = NULL,l_25 = NULL;
  y_24 = t;
  t = if_verbose5_1_0(x_1, t);
  {
    ATerm k_24 = t;
    if((PushChoice() == 0))
      {
        ATerm m_25 = NULL,n_25 = NULL;
        t = term_l_24;
        m_25 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, y_24);
        n_25 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_l_24, (ATerm) ATmakeAppl(sym_Imported_1, y_24));
        t = p_9(m_25, n_25, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = k_24;
      }
    c_25 = t;
    t = term_l_24;
    j_25 = t;
    t = term_m_24;
    k_25 = t;
    t = (ATerm) ATinsert(ATempty, y_24);
    l_25 = t;
    t = SSL_table_put(j_25, k_25, l_25);
    t = c_25;
    t = if_verbose4_1_0(z_1, t);
    t = read_repository_file_0_0(t);
    t = if_verbose6_1_0(g_2, t);
    b_25 = t;
    t = term_l_24;
    i_25 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_l_24, b_25);
    t = o_8(i_2, i_25, b_25, t);
    t = if_verbose6_1_0(j_2, t);
    t = term_l_24;
    d_25 = t;
    t = (ATerm) ATmakeAppl(sym_Imported_1, y_24);
    e_25 = t;
    t = (ATerm) ATempty;
    f_25 = t;
    t = SSL_table_put(d_25, e_25, f_25);
    t = (ATerm) ATmakeAppl(sym__3, term_l_24, (ATerm)ATmakeAppl(sym_Imported_1, y_24), (ATerm) ATempty);
    t = if_verbose4_1_0(k_2, t);
  }
  return(t);
}
ATerm repeat_2_0 (ATerm w_76 (ATerm), ATerm x_76 (ATerm), ATerm t)
{
  ATerm e_26 (ATerm t)
  {
    ATerm n_24 = t;
    int o_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_76(t);
        t = e_26(t);
        ;
        LocalPopChoice(o_24);
      }
    else
      {
        t = n_24;
        t = x_76(t);
      }
    return(t);
  }
  t = e_26(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm p_24 = t;
  int t_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_u_24;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(t_24);
    }
  else
    {
      t = p_24;
      {
        ATerm v_24 = t;
        int x_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_26 = NULL;
            t = term_z_24;
            f_26 = t;
            t = SSL_getenv(f_26);
            ;
            LocalPopChoice(x_24);
          }
        else
          {
            t = v_24;
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
  t = term_a_25;
  return(t);
}
ATerm n_2 (ATerm t)
{
  ATerm x_26 = NULL,z_26 = NULL;
  t = term_l_24;
  x_26 = t;
  t = term_g_25;
  z_26 = t;
  t = term_h_25;
  t = p_9(x_26, z_26, t);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm v_25 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = v_25;
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
  t = term_a_26;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm h_26 = NULL;
  t = if_verbose5_1_0(l_2, t);
  h_26 = t;
  {
    ATerm c_26 = t;
    int d_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_26 = NULL,t_26 = NULL;
        t = term_l_24;
        n_26 = t;
        t = term_m_24;
        t_26 = t;
        t = term_g_26;
        t = p_9(n_26, t_26, t);
        ;
        LocalPopChoice(d_26);
      }
    else
      {
        t = c_26;
        {
          ATerm v_26 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          v_26 = t;
          t = repeat_2_0(n_2, _id, t);
          t = v_26;
        }
      }
    t = h_26;
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
  t = term_m_26;
  return(t);
}
ATerm m_28 (ATerm f_27, ATerm t)
{
  ATerm n_27 = NULL,o_27 = NULL,p_27 = NULL;
  t = term_l_24;
  o_27 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, f_27);
  p_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_24, (ATerm) ATmakeAppl(sym_Tool_1, f_27));
  t = p_9(o_27, p_27, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm q_26 = ATgetFirst((ATermList) t);
      if(match_cons(q_26, sym__2))
        {
          ATerm s_26 = ATgetArgument(q_26, 0);
          n_27 = ATgetArgument(q_26, 1);
        }
      else
        _fail(t);
      {
        ATerm r_26 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = n_27;
  return(t);
}
ATerm f_3 (ATerm t)
{
  t = debug_1_0(g_3, t);
  return(t);
}
ATerm g_3 (ATerm t)
{
  t = term_m_26;
  return(t);
}
ATerm h_3 (ATerm t)
{
  t = term_l_24;
  t = table_getlist_0_0(t);
  t = debug_1_0(i_3, t);
  return(t);
}
ATerm i_3 (ATerm t)
{
  t = term_u_26;
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm w_26 = t;
  int y_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_27 = NULL,w_27 = NULL,x_27 = NULL;
      t = if_verbose5_1_0(r_2, t);
      t = xtc_load_0_0(t);
      x_27 = t;
      if(match_cons(t, sym__2))
        {
          v_27 = ATgetArgument(t, 0);
          w_27 = ATgetArgument(t, 1);
          {
            ATerm a_27 = t;
            int b_27 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm b_28 = NULL,c_28 = NULL,d_28 = NULL;
                t = term_l_24;
                c_28 = t;
                t = (ATerm) ATmakeAppl(sym_Tool_1, v_27);
                d_28 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_l_24, (ATerm) ATmakeAppl(sym_Tool_1, v_27));
                t = p_9(c_28, d_28, t);
                {
                  ATerm e_3 (ATerm t)
                  {
                    if(match_cons(t, sym__2))
                      {
                        if((w_27 != ATgetArgument(t, 0)))
                          {
                            _fail(ATgetArgument(t, 0));
                          }
                        if(((b_28 != NULL) && (b_28 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          b_28 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = fetch_1_0(e_3, t);
                  t = not_null(b_28);
                }
                ;
                LocalPopChoice(b_27);
              }
            else
              {
                t = a_27;
                t = m_28(x_27, t);
              }
          }
        }
      else
        {
          t = m_28(x_27, t);
        }
      t = if_verbose5_1_0(f_3, t);
      ;
      LocalPopChoice(y_26);
    }
  else
    {
      t = w_26;
      {
        ATerm l_28 = NULL,a_12 = NULL,b_12 = NULL;
        l_28 = t;
        t = term_s_21;
        a_12 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_d_27), l_28), term_c_27);
        b_12 = t;
        t = SSL_printnl(a_12, b_12);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_d_27), l_28), term_c_27);
        t = if_verbose5_1_0(h_3, t);
        _fail(t);
      }
    }
  return(t);
}
ATerm xtc_command_1_0 (ATerm o_105 (ATerm), ATerm t)
{
  ATerm o_28 = NULL,p_28 = NULL;
  p_28 = t;
  t = o_105(t);
  t = xtc_find_0_0(t);
  o_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_28, p_28);
  {
    ATerm j_3 (ATerm t)
    {
      ATerm q_28 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, o_28, p_28);
      t = j_8(o_28, p_28, t);
      t = term_e_27;
      q_28 = t;
      t = SSL_exit(q_28);
      return(t);
    }
    t = fork_and_wait_1_0(j_3, t);
    t = p_28;
  }
  return(t);
}
ATerm s_8 (ATerm x_94 (ATerm), ATerm h_39, ATerm f_39, ATerm t)
{
  ATerm t_28 = NULL,u_28 = NULL,v_28 = NULL,x_28 = NULL,y_28 = NULL,a_29 = NULL;
  x_28 = t;
  t = x_94(t);
  t_28 = t;
  t = (ATerm) ATmakeAppl(sym__3, t_28, h_39, f_39);
  t = q_9(t_28, h_39, f_39, t);
  {
    ATerm g_27 = t;
    int h_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_29 = NULL;
        t = term_i_27;
        b_29 = t;
        t = (ATerm) ATmakeAppl(sym__2, t_28, term_i_27);
        t = p_9(t_28, b_29, t);
        ;
        LocalPopChoice(h_27);
      }
    else
      {
        t = g_27;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        u_28 = ATgetFirst((ATermList) t);
        v_28 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_i_27;
    y_28 = t;
    t = (ATerm) ATinsert(CheckATermList(v_28), (ATerm) ATinsert(CheckATermList(u_28), h_39));
    a_29 = t;
    t = SSL_table_put(t_28, y_28, a_29);
    t = x_28;
  }
  return(t);
}
ATerm t_29 (ATerm h_29, ATerm t)
{
  t = h_29;
  {
    ATerm j_27 = t;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm k_27 = ATgetArgument(t, 0);
            ATerm l_27 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = j_27;
      }
    t = term_m_27;
    t = debug_1_0(l_3, t);
    t = (ATerm) ATmakeAppl(sym__2, h_29, term_e_12);
    t = open_file_0_0(t);
  }
  return(t);
}
ATerm u_29 (ATerm j_29, ATerm m_29, ATerm n_29, ATerm t)
{
  t = SSL_open_file(j_29, m_29);
  return(t);
}
ATerm l_3 (ATerm t)
{
  t = term_q_27;
  return(t);
}
ATerm open_file_0_0 (ATerm t)
{
  ATerm q_29 = NULL,r_29 = NULL,s_29 = NULL;
  q_29 = t;
  if(match_cons(t, sym__2))
    {
      r_29 = ATgetArgument(t, 0);
      s_29 = ATgetArgument(t, 1);
      {
        ATerm r_27 = t;
        int s_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = t_29(q_29, t);
            ;
            LocalPopChoice(s_27);
          }
        else
          {
            t = r_27;
            t = u_29(r_29, s_29, q_29, t);
          }
      }
    }
  else
    {
      t = t_29(q_29, t);
    }
  return(t);
}
ATerm t_8 (ATerm a_34, ATerm b_34, ATerm t)
{
  t = SSL_strcat(a_34, b_34);
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm new_file_0_0 (ATerm t)
{
  ATerm w_29 = NULL,x_29 = NULL,y_29 = NULL;
  t = term_t_27;
  t = new_0_0(t);
  w_29 = t;
  t = term_u_27;
  x_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_29, term_u_27);
  t = t_8(w_29, x_29, t);
  y_29 = t;
  {
    ATerm y_27 = t;
    int z_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_30 = NULL;
        t = (ATerm) ATinsert(ATempty, term_h_14);
        a_30 = t;
        t = (ATerm) ATmakeAppl(sym__2, y_29, (ATerm) ATinsert(ATempty, term_h_14));
        t = u_8(y_29, a_30, t);
        t = new_file_0_0(t);
        ;
        LocalPopChoice(z_27);
      }
    else
      {
        t = y_27;
        t = y_29;
      }
  }
  return(t);
}
ATerm m_3 (ATerm t)
{
  t = term_a_28;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm d_30 = NULL,e_30 = NULL;
  t = new_file_0_0(t);
  d_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_30, term_e_12);
  t = open_file_0_0(t);
  t = term_t_27;
  e_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_30, term_t_27);
  t = s_8(m_3, d_30, e_30, t);
  t = d_30;
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm m_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm q_30 = NULL,r_30 = NULL;
  q_30 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm g_12 = NULL,h_12 = NULL;
      t = q_30;
      t = xtc_new_file_0_0(t);
      g_12 = t;
      t = n_0(t);
      h_12 = t;
      t = (ATerm) ATmakeAppl(sym__2, h_12, (ATerm) ATinsert(ATinsert(ATempty, g_12), term_r_11));
      t = conc_0_0(t);
      t = xtc_command_1_0(m_0, t);
      t = SSL_close_file(g_12);
      t = (ATerm) ATmakeAppl(sym_FILE_1, g_12);
    }
  else
    {
      ATerm n_12 = NULL,q_12 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          r_30 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = r_30;
      t = xtc_new_file_0_0(t);
      n_12 = t;
      t = n_0(t);
      q_12 = t;
      t = (ATerm) ATmakeAppl(sym__2, q_12, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, n_12), term_r_11), r_30), term_e_28));
      t = conc_0_0(t);
      t = xtc_command_1_0(m_0, t);
      t = SSL_close_file(n_12);
      t = (ATerm) ATmakeAppl(sym_FILE_1, n_12);
    }
  return(t);
}
ATerm g_33 (ATerm a_31, ATerm c_31, ATerm e_31, ATerm t)
{
  ATerm g_31 = NULL,l_31 = NULL,v_12 = NULL,w_12 = NULL,i_4 = NULL;
  t = SSLgetAnnotations(e_31);
  g_31 = t;
  t = a_31;
  {
    ATerm f_28 = t;
    if((PushChoice() == 0))
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("rtree", 0, ATtrue)))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = f_28;
      }
    l_31 = t;
    t = (ATerm) ATmakeAppl(sym__2, l_31, c_31);
    i_4 = t;
    t = SSLsetAnnotations(i_4, g_31);
    w_12 = t;
    t = SSL_explode_term(w_12);
    if(match_cons(t, sym__2))
      {
        ATerm g_28 = ATgetArgument(t, 0);
        if((ATgetSymbol((ATermAppl) g_28) != ATmakeSymbol("", 0, ATtrue)))
          _fail(t);
        {
          ATerm h_28 = ATgetArgument(t, 1);
          if(((ATgetType(h_28) == AT_LIST) && !(ATisEmpty(h_28))))
            {
              ATerm i_28 = ATgetFirst((ATermList) h_28);
              ATerm j_28 = (ATerm) ATgetNext((ATermList) h_28);
              if(((ATgetType(j_28) == AT_LIST) && !(ATisEmpty(j_28))))
                {
                  v_12 = ATgetFirst((ATermList) j_28);
                  {
                    ATerm k_28 = (ATerm) ATgetNext((ATermList) j_28);
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
      ATerm n_28 = t;
      int r_28 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm s_28 = t;
          int w_28 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm c_32 = NULL;
              if(match_cons(t, sym_FILE_1))
                {
                  c_32 = ATgetArgument(t, 0);
                  {
                    ATerm z_12 = NULL,k_4 = NULL;
                    t = SSLgetAnnotations(v_12);
                    z_12 = t;
                    t = (ATerm) ATmakeAppl(sym_FILE_1, c_32);
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
              LocalPopChoice(w_28);
              t = xtc_transform_file_2_0(p_3, q_3, t);
            }
          else
            {
              t = s_28;
              t = xtc_transform_term_2_0(r_3, t_3, t);
            }
          t = read_from_0_0(t);
          ;
          LocalPopChoice(r_28);
        }
      else
        {
          t = n_28;
          {
            ATerm s_32 = NULL,t_32 = NULL,v_32 = NULL;
            t = term_s_21;
            t_32 = t;
            t = (ATerm) ATinsert(ATinsert(ATempty, c_31), term_z_28);
            v_32 = t;
            t = SSL_printnl(t_32, v_32);
            t = term_n_14;
            s_32 = t;
            t = SSL_exit(s_32);
            t = (ATerm) ATinsert(ATinsert(ATempty, c_31), term_z_28);
          }
        }
    }
  }
  return(t);
}
ATerm h_33 (ATerm x_32, ATerm y_32, ATerm t)
{
  ATerm k_13 = NULL;
  t = SSL_explode_term(y_32);
  if(match_cons(t, sym__2))
    {
      ATerm c_29 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) c_29) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm d_29 = ATgetArgument(t, 1);
        if(((ATgetType(d_29) == AT_LIST) && !(ATisEmpty(d_29))))
          {
            ATerm e_29 = ATgetFirst((ATermList) d_29);
            ATerm f_29 = (ATerm) ATgetNext((ATermList) d_29);
            if(((ATgetType(f_29) == AT_LIST) && !(ATisEmpty(f_29))))
              {
                k_13 = ATgetFirst((ATermList) f_29);
                {
                  ATerm g_29 = (ATerm) ATgetNext((ATermList) f_29);
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
  t = k_13;
  {
    ATerm i_29 = t;
    int k_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = read_from_0_0(t);
        ;
        LocalPopChoice(k_29);
      }
    else
      {
        t = i_29;
        {
          ATerm a_33 = NULL,b_33 = NULL,c_33 = NULL;
          t = term_s_21;
          b_33 = t;
          t = (ATerm) ATinsert(ATinsert(ATempty, x_32), term_z_28);
          c_33 = t;
          t = SSL_printnl(b_33, c_33);
          t = term_n_14;
          a_33 = t;
          t = SSL_exit(a_33);
          t = (ATerm) ATinsert(ATinsert(ATempty, x_32), term_z_28);
        }
      }
  }
  return(t);
}
ATerm p_3 (ATerm t)
{
  t = term_l_29;
  return(t);
}
ATerm q_3 (ATerm t)
{
  ATerm g_32 = NULL,h_32 = NULL,i_32 = NULL,j_32 = NULL,k_32 = NULL;
  k_32 = t;
  t = pass_verbose_0_0(t);
  g_32 = t;
  t = k_32;
  t = pass_keep_0_0(t);
  h_32 = t;
  t = term_o_29;
  {
    ATerm p_29 = t;
    int v_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        LocalPopChoice(v_29);
        t = (ATerm) ATinsert(ATempty, term_o_29);
      }
    else
      {
        t = p_29;
        t = (ATerm) ATempty;
      }
    i_32 = t;
    t = term_z_29;
    t = get_config_0_0(t);
    j_32 = t;
    t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, j_32), h_32), g_32), i_32);
    t = concat_0_0(t);
  }
  return(t);
}
ATerm r_3 (ATerm t)
{
  t = term_l_29;
  return(t);
}
ATerm t_3 (ATerm t)
{
  ATerm l_32 = NULL,m_32 = NULL,n_32 = NULL,o_32 = NULL,r_32 = NULL;
  r_32 = t;
  t = pass_verbose_0_0(t);
  l_32 = t;
  t = r_32;
  t = pass_keep_0_0(t);
  m_32 = t;
  t = term_o_29;
  {
    ATerm b_30 = t;
    int c_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        LocalPopChoice(c_30);
        t = (ATerm) ATinsert(ATempty, term_o_29);
      }
    else
      {
        t = b_30;
        t = (ATerm) ATempty;
      }
    n_32 = t;
    t = term_z_29;
    t = get_config_0_0(t);
    o_32 = t;
    t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, o_32), m_32), l_32), n_32);
    t = concat_0_0(t);
  }
  return(t);
}
ATerm parse_module_0_0 (ATerm t)
{
  ATerm d_33 = NULL,e_33 = NULL,f_33 = NULL;
  d_33 = t;
  if(match_cons(t, sym__2))
    {
      e_33 = ATgetArgument(t, 0);
      f_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_33;
  if(match_string(t, "rtree"))
    {
      ATerm f_30 = t;
      int g_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = g_33(e_33, f_33, d_33, t);
          ;
          LocalPopChoice(g_30);
        }
      else
        {
          t = f_30;
          t = h_33(f_33, d_33, t);
        }
    }
  else
    {
      t = g_33(e_33, f_33, d_33, t);
    }
  return(t);
}
ATerm debug_1_0 (ATerm i_96 (ATerm), ATerm t)
{
  ATerm j_33 = NULL,m_33 = NULL,n_33 = NULL,o_33 = NULL;
  j_33 = t;
  t = i_96(t);
  m_33 = t;
  t = term_s_21;
  n_33 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, j_33), m_33);
  o_33 = t;
  t = SSL_printnl(n_33, o_33);
  t = j_33;
  return(t);
}
ATerm if_verbose3_1_0 (ATerm w_97 (ATerm), ATerm t)
{
  ATerm q_33 = NULL;
  q_33 = t;
  {
    ATerm h_30 = t;
    int i_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_33 = NULL;
        t = term_s_14;
        t = get_config_0_0(t);
        s_33 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_33, term_p_15);
        t = geq_0_0(t);
        t = q_33;
        t = w_97(t);
        ;
        LocalPopChoice(i_30);
      }
    else
      {
        t = h_30;
        t = q_33;
      }
  }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm z_83 (ATerm), ATerm t)
{
  ATerm u_33 = NULL;
  ATerm v_3 (ATerm t)
  {
    t = z_83(t);
    if(((u_33 != NULL) && (u_33 != t)))
      _fail(t);
    else
      u_33 = t;
    return(t);
  }
  t = fetch_1_0(v_3, t);
  t = not_null(u_33);
  return(t);
}
ATerm u_8 (ATerm a_35, ATerm b_35, ATerm t)
{
  t = SSL_access(a_35, b_35);
  return(t);
}
ATerm is_relpath_0_0 (ATerm t)
{
  ATerm j_30 = t;
  if((PushChoice() == 0))
    {
      ATerm v_33 = NULL;
      v_33 = t;
      t = SSL_explode_string(v_33);
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          ATerm k_30 = ATgetFirst((ATermList) t);
          if(((ATgetType(k_30) != AT_INT) || (ATgetInt((ATermInt) k_30) != 47)))
            _fail(t);
          {
            ATerm l_30 = (ATerm) ATgetNext((ATermList) t);
          }
        }
      else
        _fail(t);
      t = v_33;
      PopChoice();
      _fail(t);
    }
  else
    {
      t = j_30;
    }
  return(t);
}
ATerm v_8 (ATerm c_76 (ATerm), ATerm m_19, ATerm n_19, ATerm t)
{
  ATerm y_33 = NULL;
  t = m_19;
  t = basename_1_0(_id, t);
  y_33 = t;
  t = c_76(t);
  {
    ATerm m_30 = t;
    int n_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_3 (ATerm t)
        {
          ATerm k_34 = NULL;
          k_34 = t;
          {
            ATerm o_30 = t;
            int p_30 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm y_3 (ATerm t)
                {
                  ATerm m_34 = NULL,q_34 = NULL,r_34 = NULL,s_34 = NULL,t_34 = NULL;
                  q_34 = t;
                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, q_34), term_z_11), y_33), term_s_30), k_34);
                  t_34 = t;
                  t = SSL_concat_strings(t_34);
                  r_34 = t;
                  t = (ATerm) ATinsert(ATempty, term_h_14);
                  s_34 = t;
                  t = (ATerm) ATmakeAppl(sym__2, r_34, (ATerm) ATinsert(ATempty, term_h_14));
                  t = u_8(r_34, s_34, t);
                  m_34 = t;
                  t = (ATerm) ATmakeAppl(sym__2, q_34, (ATerm) ATmakeAppl(sym_FILE_1, m_34));
                  return(t);
                }
                t = m_19;
                t = is_relpath_0_0(t);
                t = n_19;
                t = fetch_elem_1_0(y_3, t);
                ;
                LocalPopChoice(p_30);
              }
            else
              {
                t = o_30;
                {
                  ATerm a_4 (ATerm t)
                  {
                    ATerm u_13 = NULL,a_14 = NULL,b_14 = NULL,c_14 = NULL,e_14 = NULL;
                    a_14 = t;
                    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, a_14), term_z_11), y_33);
                    e_14 = t;
                    t = SSL_concat_strings(e_14);
                    b_14 = t;
                    t = (ATerm) ATinsert(ATempty, term_h_14);
                    c_14 = t;
                    t = (ATerm) ATmakeAppl(sym__2, b_14, (ATerm) ATinsert(ATempty, term_h_14));
                    t = u_8(b_14, c_14, t);
                    u_13 = t;
                    t = (ATerm) ATmakeAppl(sym__2, a_14, (ATerm) ATmakeAppl(sym_FILE_1, u_13));
                    return(t);
                  }
                  t = SSL_explode_string(m_19);
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      ATerm t_30 = ATgetFirst((ATermList) t);
                      if(((ATgetType(t_30) != AT_INT) || (ATgetInt((ATermInt) t_30) != 47)))
                        _fail(t);
                      {
                        ATerm u_30 = (ATerm) ATgetNext((ATermList) t);
                      }
                    }
                  else
                    _fail(t);
                  t = n_19;
                  t = fetch_elem_1_0(a_4, t);
                }
              }
          }
          return(t);
        }
        t = fetch_elem_1_0(w_3, t);
        ;
        LocalPopChoice(n_30);
      }
    else
      {
        t = m_30;
        {
          ATerm v_30 = t;
          int w_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm b_4 (ATerm t)
              {
                ATerm u_34 = NULL,v_34 = NULL,w_34 = NULL,x_34 = NULL,y_34 = NULL,z_34 = NULL;
                u_34 = t;
                t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, u_34), term_z_11), y_33);
                z_34 = t;
                t = SSL_concat_strings(z_34);
                v_34 = t;
                t = term_l_24;
                x_34 = t;
                t = (ATerm) ATmakeAppl(sym_Tool_1, v_34);
                y_34 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_l_24, (ATerm) ATmakeAppl(sym_Tool_1, v_34));
                t = p_9(x_34, y_34, t);
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    ATerm x_30 = ATgetFirst((ATermList) t);
                    if(match_cons(x_30, sym__2))
                      {
                        ATerm z_30 = ATgetArgument(x_30, 0);
                        w_34 = ATgetArgument(x_30, 1);
                      }
                    else
                      _fail(t);
                    {
                      ATerm y_30 = (ATerm) ATgetNext((ATermList) t);
                    }
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym__2, u_34, (ATerm) ATmakeAppl(sym_FILE_1, w_34));
                return(t);
              }
              t = n_19;
              t = fetch_elem_1_0(b_4, t);
              ;
              LocalPopChoice(w_30);
            }
          else
            {
              t = v_30;
              {
                ATerm b_31 = t;
                int d_31 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_f_31;
                    t = get_config_0_0(t);
                    LocalPopChoice(d_31);
                    {
                      ATerm c_35 = NULL,d_35 = NULL,e_35 = NULL,f_35 = NULL,m_35 = NULL;
                      c_35 = t;
                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_i_31), y_33), term_h_31);
                      m_35 = t;
                      t = SSL_concat_strings(m_35);
                      d_35 = t;
                      t = term_s_21;
                      e_35 = t;
                      t = (ATerm) ATinsert(ATempty, d_35);
                      f_35 = t;
                      t = SSL_printnl(e_35, f_35);
                      t = c_35;
                      _fail(t);
                    }
                  }
                else
                  {
                    t = b_31;
                    {
                      ATerm n_35 = NULL,o_35 = NULL,q_35 = NULL;
                      t = term_s_21;
                      o_35 = t;
                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_i_31), y_33), term_h_31);
                      q_35 = t;
                      t = SSL_printnl(o_35, q_35);
                      t = term_n_14;
                      n_35 = t;
                      t = SSL_exit(n_35);
                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_i_31), y_33), term_h_31);
                    }
                  }
              }
            }
        }
      }
  }
  return(t);
}
ATerm f_4 (ATerm t)
{
  t = term_j_31;
  return(t);
}
ATerm get_module_1_0 (ATerm b_76 (ATerm), ATerm t)
{
  ATerm s_35 = NULL,t_35 = NULL,u_35 = NULL,v_35 = NULL;
  s_35 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_n_23), term_n_31), term_m_31), term_k_31);
  v_35 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_35, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_n_23), term_n_31), term_m_31), term_k_31));
  t = v_8(b_76, s_35, v_35, t);
  if(match_cons(t, sym__2))
    {
      ATerm o_31 = ATgetArgument(t, 0);
      ATerm p_31 = ATgetArgument(t, 1);
      if(match_cons(p_31, sym_FILE_1))
        {
          t_35 = ATgetArgument(p_31, 0);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  {
    ATerm e_4 (ATerm t)
    {
      ATerm w_35 = NULL;
      w_35 = t;
      t = t_35;
      t = debug_1_0(f_4, t);
      t = w_35;
      return(t);
    }
    t = if_verbose3_1_0(e_4, t);
    t = parse_module_0_0(t);
    u_35 = t;
    t = (ATerm) ATmakeAppl(sym__2, t_35, u_35);
  }
  return(t);
}
ATerm x_8 (ATerm u_87 (ATerm), ATerm v_87 (ATerm), ATerm p_26, ATerm o_26, ATerm t)
{
  t = v_87(t);
  {
    ATerm g_4 (ATerm t)
    {
      ATerm x_35 = NULL;
      x_35 = t;
      t = (ATerm) ATmakeAppl(sym__2, p_26, x_35);
      t = u_87(t);
      return(t);
    }
    t = fetch_1_0(g_4, t);
    t = o_26;
  }
  return(t);
}
ATerm y_8 (ATerm m_87 (ATerm), ATerm j_26, ATerm i_26, ATerm t)
{
  ATerm t_36 (ATerm t)
  {
    ATerm o_36 = NULL,p_36 = NULL,q_36 = NULL;
    o_36 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = o_36;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            p_36 = ATgetFirst((ATermList) t);
            q_36 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm q_31 = t;
          int r_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = o_36;
              {
                ATerm j_4 (ATerm t)
                {
                  t = i_26;
                  return(t);
                }
                t = x_8(m_87, j_4, p_36, q_36, t);
                t = t_36(t);
              }
              ;
              LocalPopChoice(r_31);
            }
          else
            {
              t = q_31;
              {
                ATerm m_14 = NULL,r_14 = NULL,o_4 = NULL;
                t = SSLgetAnnotations(o_36);
                m_14 = t;
                t = q_36;
                t = t_36(t);
                r_14 = t;
                t = (ATerm) ATinsert(CheckATermList(r_14), p_36);
                o_4 = t;
                t = SSLsetAnnotations(o_4, m_14);
              }
            }
        }
      }
    return(t);
  }
  t = j_26;
  t = t_36(t);
  return(t);
}
ATerm l_4 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm s_31 = ATgetArgument(t, 0);
      if(((ATgetType(s_31) != AT_LIST) || !(ATisEmpty(s_31))))
        _fail(t);
      {
        ATerm t_31 = ATgetArgument(t, 1);
        if(((ATgetType(t_31) != AT_LIST) || !(ATisEmpty(t_31))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm m_4 (ATerm t)
{
  ATerm d_37 = NULL,e_37 = NULL,l_37 = NULL,m_37 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm u_31 = ATgetArgument(t, 0);
      if(((ATgetType(u_31) == AT_LIST) && !(ATisEmpty(u_31))))
        {
          d_37 = ATgetFirst((ATermList) u_31);
          e_37 = (ATerm) ATgetNext((ATermList) u_31);
        }
      else
        _fail(t);
      {
        ATerm v_31 = ATgetArgument(t, 1);
        if(((ATgetType(v_31) == AT_LIST) && !(ATisEmpty(v_31))))
          {
            l_37 = ATgetFirst((ATermList) v_31);
            m_37 = (ATerm) ATgetNext((ATermList) v_31);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, d_37, l_37), (ATerm) ATmakeAppl(sym__2, e_37, m_37));
  return(t);
}
ATerm n_4 (ATerm t)
{
  ATerm n_37 = NULL,o_37 = NULL;
  if(match_cons(t, sym__2))
    {
      n_37 = ATgetArgument(t, 0);
      o_37 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(o_37), n_37);
  return(t);
}
ATerm d_9 (ATerm i_573, ATerm n_573, ATerm c_53, ATerm t)
{
  ATerm w_36 = NULL,x_36 = NULL,y_36 = NULL,b_37 = NULL;
  t = SSL_explode_term(n_573);
  if(match_cons(t, sym__2))
    {
      w_36 = ATgetArgument(t, 0);
      y_36 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(i_573);
  if(match_cons(t, sym__2))
    {
      if((w_36 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      x_36 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, x_36, y_36);
  t = genzip_4_0(l_4, m_4, n_4, _id, t);
  b_37 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_37, c_53);
  t = conc_0_0(t);
  return(t);
}
ATerm p_4 (ATerm t)
{
  ATerm d_38 = NULL;
  d_38 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, d_38);
  return(t);
}
ATerm t_4 (ATerm t)
{
  ATerm e_38 = NULL,f_38 = NULL,g_38 = NULL,h_38 = NULL,q_4 = NULL;
  h_38 = t;
  if(match_cons(t, sym__2))
    {
      f_38 = ATgetArgument(t, 0);
      g_38 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_38);
  e_38 = t;
  t = g_38;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, f_38, g_38);
  q_4 = t;
  t = SSLsetAnnotations(q_4, e_38);
  return(t);
}
ATerm u_4 (ATerm t)
{
  ATerm l_39 = NULL,m_39 = NULL,n_39 = NULL,o_39 = NULL,p_39 = NULL;
  l_39 = t;
  if(match_cons(t, sym__2))
    {
      m_39 = ATgetArgument(t, 0);
      n_39 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_39;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_39 = ATgetFirst((ATermList) t);
      p_39 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm w_31 = t;
        int x_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = z_39(m_39, n_39, l_39, t);
            ;
            LocalPopChoice(x_31);
          }
        else
          {
            t = w_31;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(m_39), o_39), p_39);
          }
      }
    }
  else
    {
      t = z_39(m_39, n_39, l_39, t);
    }
  return(t);
}
ATerm z_39 (ATerm i_38, ATerm j_38, ATerm k_38, ATerm t)
{
  ATerm l_38 = NULL,o_38 = NULL,s_4 = NULL,r_38 = NULL,s_38 = NULL,t_38 = NULL,u_38 = NULL;
  t = SSLgetAnnotations(k_38);
  l_38 = t;
  t = j_38;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_38 = ATgetFirst((ATermList) t);
      u_38 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = r_38;
  if(match_cons(t, sym__2))
    {
      s_38 = ATgetArgument(t, 0);
      t_38 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm y_31 = t;
    int z_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = t_38;
        if((s_38 != t))
          {
            _fail(t);
          }
        t = u_38;
        ;
        LocalPopChoice(z_31);
      }
    else
      {
        t = y_31;
        t = j_38;
        t = d_9(s_38, t_38, u_38, t);
      }
    o_38 = t;
    t = (ATerm) ATmakeAppl(sym__2, i_38, o_38);
    s_4 = t;
    t = SSLsetAnnotations(s_4, l_38);
  }
  return(t);
}
ATerm w_4 (ATerm t)
{
  ATerm y_39 = NULL;
  if(match_cons(t, sym__2))
    {
      y_39 = ATgetArgument(t, 0);
      if((y_39 != ATgetArgument(t, 1)))
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
  ATerm a_32 = t;
  int b_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(p_4, t_4, u_4, t);
      ;
      LocalPopChoice(b_32);
    }
  else
    {
      t = a_32;
      {
        ATerm t_39 = NULL,u_39 = NULL,v_39 = NULL;
        t_39 = t;
        if(match_cons(t, sym__2))
          {
            u_39 = ATgetArgument(t, 0);
            v_39 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = t_39;
        t = y_8(w_4, u_39, v_39, t);
      }
    }
  return(t);
}
ATerm f_9 (ATerm w_106 (ATerm), ATerm x_106 (ATerm), ATerm y_106 (ATerm), ATerm t_55, ATerm q_55, ATerm x_55, ATerm u_55, ATerm r_55, ATerm s_55, ATerm t)
{
  ATerm a_40 = NULL,d_40 = NULL,e_40 = NULL,f_40 = NULL,g_40 = NULL,h_40 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, t_55, u_55);
  t = w_106(t);
  a_40 = t;
  t = x_106(t);
  d_40 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_40, x_55);
  t = diff_0_0(t);
  e_40 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_40, q_55);
  t = conc_0_0(t);
  f_40 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_40, x_55);
  t = conc_0_0(t);
  g_40 = t;
  t = (ATerm) ATmakeAppl(sym__3, t_55, a_40, r_55);
  t = y_106(t);
  h_40 = t;
  t = (ATerm) ATmakeAppl(sym__5, f_40, g_40, u_55, h_40, s_55);
  return(t);
}
ATerm GnNext_3_0 (ATerm w_106 (ATerm), ATerm x_106 (ATerm), ATerm y_106 (ATerm), ATerm t)
{
  ATerm j_40 = NULL,k_40 = NULL,l_40 = NULL,m_40 = NULL,n_40 = NULL,o_40 = NULL;
  if(match_cons(t, sym__5))
    {
      ATerm d_32 = ATgetArgument(t, 0);
      if(((ATgetType(d_32) == AT_LIST) && !(ATisEmpty(d_32))))
        {
          j_40 = ATgetFirst((ATermList) d_32);
          k_40 = (ATerm) ATgetNext((ATermList) d_32);
        }
      else
        _fail(t);
      l_40 = ATgetArgument(t, 1);
      m_40 = ATgetArgument(t, 2);
      n_40 = ATgetArgument(t, 3);
      o_40 = ATgetArgument(t, 4);
    }
  else
    _fail(t);
  t = f_9(w_106, x_106, y_106, j_40, k_40, l_40, m_40, n_40, o_40, t);
  return(t);
}
ATerm while_not_2_0 (ATerm n_77 (ATerm), ATerm o_77 (ATerm), ATerm t)
{
  ATerm p_40 (ATerm t)
  {
    ATerm e_32 = t;
    int f_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_77(t);
        ;
        LocalPopChoice(f_32);
      }
    else
      {
        t = e_32;
        t = o_77(t);
        t = p_40(t);
      }
    return(t);
  }
  t = p_40(t);
  return(t);
}
ATerm for_3_0 (ATerm q_77 (ATerm), ATerm r_77 (ATerm), ATerm s_77 (ATerm), ATerm t)
{
  t = q_77(t);
  t = while_not_2_0(r_77, s_77, t);
  return(t);
}
ATerm b_5 (ATerm t)
{
  ATerm t_40 = NULL,u_40 = NULL,v_40 = NULL;
  if(match_cons(t, sym__3))
    {
      t_40 = ATgetArgument(t, 0);
      u_40 = ATgetArgument(t, 1);
      v_40 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__5, t_40, t_40, u_40, v_40, (ATerm) ATempty);
  return(t);
}
ATerm c_5 (ATerm t)
{
  ATerm b_41 = NULL,c_41 = NULL;
  if(match_cons(t, sym__5))
    {
      ATerm p_32 = ATgetArgument(t, 0);
      if(((ATgetType(p_32) != AT_LIST) || !(ATisEmpty(p_32))))
        _fail(t);
      {
        ATerm q_32 = ATgetArgument(t, 1);
      }
      {
        ATerm u_32 = ATgetArgument(t, 2);
      }
      b_41 = ATgetArgument(t, 3);
      c_41 = ATgetArgument(t, 4);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, b_41, c_41);
  return(t);
}
ATerm graph_nodes_roots_3_0 (ATerm t_106 (ATerm), ATerm u_106 (ATerm), ATerm v_106 (ATerm), ATerm t)
{
  ATerm s_40 = NULL;
  ATerm d_5 (ATerm t)
  {
    ATerm w_32 = t;
    int z_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = GnNext_3_0(t_106, u_106, v_106, t);
        ;
        LocalPopChoice(z_32);
      }
    else
      {
        t = w_32;
        {
          ATerm e_41 = NULL,j_41 = NULL,k_41 = NULL,l_41 = NULL,m_41 = NULL,n_41 = NULL,o_41 = NULL;
          if(match_cons(t, sym__5))
            {
              e_41 = ATgetArgument(t, 0);
              l_41 = ATgetArgument(t, 1);
              m_41 = ATgetArgument(t, 2);
              n_41 = ATgetArgument(t, 3);
              o_41 = ATgetArgument(t, 4);
            }
          else
            _fail(t);
          t = e_41;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              j_41 = ATgetFirst((ATermList) t);
              k_41 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__5, k_41, l_41, m_41, n_41, (ATerm) ATinsert(CheckATermList(o_41), j_41));
        }
      }
    return(t);
  }
  t = for_3_0(b_5, c_5, d_5, t);
  if(match_cons(t, sym__2))
    {
      s_40 = ATgetArgument(t, 0);
      {
        ATerm i_33 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = s_40;
  return(t);
}
ATerm filter_1_0 (ATerm u_90 (ATerm), ATerm t)
{
  ATerm o_42 = NULL,p_42 = NULL,r_42 = NULL;
  o_42 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = o_42;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          p_42 = ATgetFirst((ATermList) t);
          r_42 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm k_33 = t;
        int l_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_15 = NULL,n_15 = NULL,o_15 = NULL,v_4 = NULL;
            t = SSLgetAnnotations(o_42);
            g_15 = t;
            t = p_42;
            t = u_90(t);
            n_15 = t;
            t = r_42;
            t = filter_1_0(u_90, t);
            o_15 = t;
            t = (ATerm) ATinsert(CheckATermList(o_15), n_15);
            v_4 = t;
            t = SSLsetAnnotations(v_4, g_15);
            ;
            LocalPopChoice(l_33);
          }
        else
          {
            t = k_33;
            t = r_42;
            t = filter_1_0(u_90, t);
          }
      }
    }
  return(t);
}
ATerm f_5 (ATerm t)
{
  ATerm p_33 = t;
  if((PushChoice() == 0))
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-I", 0, ATtrue)))
        _fail(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = p_33;
    }
  return(t);
}
ATerm i_5 (ATerm t)
{
  ATerm q_43 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm r_33 = ATgetArgument(t, 0);
      ATerm t_33 = ATgetArgument(t, 1);
      if(match_cons(t_33, sym_Specification_1))
        {
          q_43 = ATgetArgument(t_33, 0);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  t = h_8(q_43, t);
  return(t);
}
ATerm j_5 (ATerm t)
{
  ATerm r_43 = NULL,s_43 = NULL;
  if(match_cons(t, sym__3))
    {
      ATerm w_33 = ATgetArgument(t, 0);
      r_43 = ATgetArgument(t, 1);
      s_43 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(s_43), r_43);
  return(t);
}
ATerm m_5 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_x_33;
  return(t);
}
ATerm o_5 (ATerm t)
{
  ATerm t_43 = NULL,u_43 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_43 = ATgetFirst((ATermList) t);
      u_43 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, t_43, u_43);
  return(t);
}
ATerm p_5 (ATerm t)
{
  ATerm v_43 = NULL,w_43 = NULL,y_43 = NULL,z_43 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm z_33 = ATgetArgument(t, 0);
      if(match_cons(z_33, sym__2))
        {
          v_43 = ATgetArgument(z_33, 0);
          w_43 = ATgetArgument(z_33, 1);
        }
      else
        _fail(t);
      {
        ATerm c_34 = ATgetArgument(t, 1);
        if(match_cons(c_34, sym__2))
          {
            y_43 = ATgetArgument(c_34, 0);
            z_43 = ATgetArgument(c_34, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(y_43), v_43), (ATerm) ATinsert(CheckATermList(z_43), w_43));
  return(t);
}
ATerm i_9 (ATerm d_19, ATerm t)
{
  ATerm x_42 = NULL,z_42 = NULL,a_43 = NULL,l_43 = NULL,m_43 = NULL,n_43 = NULL,x_4 = NULL;
  ATerm d_34 = t;
  int e_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_z_29;
      t = get_config_0_0(t);
      t = filter_1_0(f_5, t);
      ;
      LocalPopChoice(e_34);
    }
  else
    {
      t = d_34;
      t = (ATerm) ATempty;
    }
  x_42 = t;
  t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATinsert(ATinsert(ATinsert(ATempty, d_19), term_g_34), term_f_34), term_t_27, (ATerm) ATempty);
  {
    ATerm g_5 (ATerm t)
    {
      ATerm o_43 = NULL,p_43 = NULL;
      ATerm k_5 (ATerm t)
      {
        t = (ATerm) ATinsert(CheckATermList(x_42), term_z_11);
        return(t);
      }
      p_43 = t;
      t = SSL_explode_term(p_43);
      if(match_cons(t, sym__2))
        {
          ATerm h_34 = ATgetArgument(t, 0);
          if((ATgetSymbol((ATermAppl) h_34) != ATmakeSymbol("", 0, ATtrue)))
            _fail(t);
          {
            ATerm i_34 = ATgetArgument(t, 1);
            if(((ATgetType(i_34) == AT_LIST) && !(ATisEmpty(i_34))))
              {
                o_43 = ATgetFirst((ATermList) i_34);
                {
                  ATerm j_34 = (ATerm) ATgetNext((ATermList) i_34);
                }
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = o_43;
      t = get_module_1_0(k_5, t);
      return(t);
    }
    t = graph_nodes_roots_3_0(g_5, i_5, j_5, t);
    t = genzip_4_0(m_5, o_5, p_5, _id, t);
    n_43 = t;
    if(match_cons(t, sym__2))
      {
        a_43 = ATgetArgument(t, 0);
        l_43 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(n_43);
    z_42 = t;
    t = l_43;
    t = flatten_stratego_0_0(t);
    m_43 = t;
    t = (ATerm) ATmakeAppl(sym__2, a_43, m_43);
    x_4 = t;
    t = SSLsetAnnotations(x_4, z_42);
  }
  return(t);
}
ATerm k_9 (ATerm b_40, ATerm c_40, ATerm t)
{
  t = SSL_copy(b_40, c_40);
  return(t);
}
ATerm copy_to_1_0 (ATerm l_0 (ATerm), ATerm t)
{
  ATerm i_45 = NULL,j_45 = NULL;
  i_45 = t;
  if(match_cons(t, sym_FILE_1))
    {
      j_45 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm l_34 = t;
    int n_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_16 = NULL;
        t = i_45;
        t = l_0(t);
        b_16 = t;
        if(match_cons(t, sym_stdout_0))
          {
            t = b_16;
          }
        else
          {
            if(!(match_cons(t, sym_stderr_0)))
              _fail(t);
            t = b_16;
          }
        t = (ATerm) ATmakeAppl(sym__2, j_45, b_16);
        t = k_9(j_45, b_16, t);
        t = (ATerm) ATmakeAppl(sym_FILE_1, j_45);
        ;
        LocalPopChoice(n_34);
      }
    else
      {
        t = l_34;
        {
          ATerm o_34 = t;
          int p_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm n_16 = NULL;
              t = i_45;
              t = l_0(t);
              n_16 = t;
              {
                ATerm k_35 = t;
                if((PushChoice() == 0))
                  {
                    ATerm p_16 = NULL;
                    p_16 = t;
                    if(match_cons(t, sym_stdout_0))
                      {
                        t = p_16;
                      }
                    else
                      {
                        if(match_cons(t, sym_stderr_0))
                          {
                            t = p_16;
                          }
                        else
                          {
                            t = p_16;
                            if((j_45 != t))
                              {
                                _fail(t);
                              }
                            t = p_16;
                          }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = k_35;
                  }
                t = (ATerm) ATmakeAppl(sym__2, j_45, n_16);
                t = k_9(j_45, n_16, t);
                t = (ATerm) ATmakeAppl(sym_FILE_1, j_45);
              }
              ;
              LocalPopChoice(p_34);
            }
          else
            {
              t = o_34;
              t = i_45;
              t = l_0(t);
              if((j_45 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, j_45);
            }
        }
      }
  }
  return(t);
}
ATerm l_9 (ATerm v_48, ATerm w_48, ATerm t)
{
  ATerm n_45 = NULL,o_45 = NULL;
  o_45 = t;
  {
    ATerm l_35 = t;
    int p_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, v_48, w_48);
        t = p_9(v_48, w_48, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm r_35 = ATgetFirst((ATermList) t);
            n_45 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(p_35);
        t = SSL_table_put(v_48, w_48, n_45);
        t = (ATerm) ATmakeAppl(sym__3, v_48, w_48, n_45);
      }
    else
      {
        t = l_35;
        t = SSL_table_remove(v_48, w_48);
        t = (ATerm) ATmakeAppl(sym__2, v_48, w_48);
      }
    t = o_45;
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm u_94 (ATerm), ATerm t)
{
  ATerm p_45 = NULL,r_45 = NULL,s_45 = NULL,u_45 = NULL,v_45 = NULL;
  u_45 = t;
  t = u_94(t);
  s_45 = t;
  {
    ATerm y_35 = t;
    int z_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_45 = NULL;
        t = term_i_27;
        w_45 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_45, term_i_27);
        t = p_9(s_45, w_45, t);
        ;
        LocalPopChoice(z_35);
      }
    else
      {
        t = y_35;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        r_45 = ATgetFirst((ATermList) t);
        p_45 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_i_27;
    v_45 = t;
    t = SSL_table_put(s_45, v_45, p_45);
    t = r_45;
    {
      ATerm q_5 (ATerm t)
      {
        ATerm x_45 = NULL;
        x_45 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_45, x_45);
        t = l_9(s_45, x_45, t);
        return(t);
      }
      t = map_1_0(q_5, t);
      t = u_45;
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm s_76 (ATerm), ATerm t_76 (ATerm), ATerm t)
{
  ATerm a_36 = t;
  int b_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = s_76(t);
      t = t_76(t);
      ;
      LocalPopChoice(b_36);
    }
  else
    {
      t = a_36;
      t = t_76(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm t_94 (ATerm), ATerm t)
{
  ATerm a_46 = NULL,d_46 = NULL,g_46 = NULL,i_46 = NULL,k_46 = NULL;
  d_46 = t;
  t = t_94(t);
  a_46 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_46, term_i_27);
  {
    ATerm c_36 = t;
    int d_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_46 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm e_36 = ATgetArgument(t, 0);
            ATerm f_36 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_i_27;
        u_46 = t;
        t = (ATerm) ATmakeAppl(sym__2, a_46, term_i_27);
        t = p_9(a_46, u_46, t);
        ;
        LocalPopChoice(d_36);
      }
    else
      {
        t = c_36;
        t = (ATerm) ATempty;
      }
    g_46 = t;
    t = term_i_27;
    i_46 = t;
    t = (ATerm) ATinsert(CheckATermList(g_46), (ATerm) ATempty);
    k_46 = t;
    t = SSL_table_put(a_46, i_46, k_46);
    t = d_46;
  }
  return(t);
}
ATerm s_5 (ATerm t)
{
  t = term_a_28;
  return(t);
}
ATerm w_5 (ATerm t)
{
  ATerm h_47 = NULL;
  h_47 = t;
  {
    ATerm g_36 = t;
    int h_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(h_47);
        ;
        LocalPopChoice(h_36);
      }
    else
      {
        t = g_36;
        t = h_47;
      }
  }
  return(t);
}
ATerm x_5 (ATerm t)
{
  t = term_a_28;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm a_105 (ATerm), ATerm t)
{
  ATerm y_46 = NULL;
  ATerm v_5 (ATerm t)
  {
    ATerm b_47 = NULL;
    b_47 = t;
    {
      ATerm i_36 = t;
      int j_36 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm d_47 = NULL,e_47 = NULL;
          t = term_a_28;
          d_47 = t;
          t = term_i_27;
          e_47 = t;
          t = term_k_36;
          t = p_9(d_47, e_47, t);
          ;
          LocalPopChoice(j_36);
        }
      else
        {
          t = i_36;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
        }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          if(((y_46 != NULL) && (y_46 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            y_46 = ATgetFirst((ATermList) t);
          {
            ATerm l_36 = (ATerm) ATgetNext((ATermList) t);
          }
        }
      else
        _fail(t);
      t = y_46;
      t = map_1_0(w_5, t);
      t = b_47;
      t = end_scope_1_0(x_5, t);
    }
    return(t);
  }
  t = begin_scope_1_0(s_5, t);
  t = restore_always_2_0(a_105, v_5, t);
  return(t);
}
ATerm j_6 (ATerm t)
{
  ATerm m_36 = t;
  int n_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_r_11;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(n_36);
    }
  else
    {
      t = m_36;
      t = term_r_36;
    }
  return(t);
}
ATerm xtc_io_1_0 (ATerm b_105 (ATerm), ATerm t)
{
  ATerm z_5 (ATerm t)
  {
    ATerm s_36 = t;
    int u_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_47 = NULL;
        t = term_e_28;
        t = get_config_0_0(t);
        m_47 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, m_47);
        ;
        LocalPopChoice(u_36);
      }
    else
      {
        t = s_36;
        t = term_g_14;
      }
    t = b_105(t);
    t = copy_to_1_0(j_6, t);
    return(t);
  }
  t = xtc_temp_files_1_0(z_5, t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm n_47 = NULL,p_47 = NULL,q_47 = NULL,t_47 = NULL,u_47 = NULL;
  n_47 = t;
  t = term_t_27;
  t = whoami_0_0(t);
  p_47 = t;
  t = term_s_21;
  t_47 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_z_36), p_47), term_v_36);
  u_47 = t;
  t = SSL_printnl(t_47, u_47);
  t = term_n_14;
  q_47 = t;
  t = SSL_exit(q_47);
  t = n_47;
  return(t);
}
ATerm k_6 (ATerm t)
{
  ATerm f_48 = NULL;
  f_48 = t;
  if(match_string(t, "-k"))
    {
      t = f_48;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = f_48;
    }
  return(t);
}
ATerm l_6 (ATerm t)
{
  ATerm g_48 = NULL,h_48 = NULL,i_48 = NULL;
  g_48 = t;
  t = SSL_string_to_int(g_48);
  h_48 = t;
  t = term_j_14;
  i_48 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_14, h_48);
  t = s_9(i_48, h_48, t);
  t = g_48;
  return(t);
}
ATerm m_6 (ATerm t)
{
  t = term_a_37;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(k_6, l_6, m_6, t);
  return(t);
}
ATerm n_6 (ATerm t)
{
  ATerm l_48 = NULL;
  l_48 = t;
  if(match_string(t, "-S"))
    {
      t = l_48;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = l_48;
    }
  return(t);
}
ATerm o_6 (ATerm t)
{
  ATerm m_48 = NULL,o_48 = NULL;
  t = term_s_14;
  m_48 = t;
  t = term_c_37;
  o_48 = t;
  t = term_f_37;
  t = s_9(m_48, o_48, t);
  t = term_g_37;
  return(t);
}
ATerm p_6 (ATerm t)
{
  t = term_h_37;
  return(t);
}
ATerm r_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm t_6 (ATerm t)
{
  ATerm t_48 = NULL,x_48 = NULL,y_48 = NULL;
  t_48 = t;
  t = SSL_string_to_int(t_48);
  x_48 = t;
  t = term_s_14;
  y_48 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_14, x_48);
  t = s_9(y_48, x_48, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, t_48);
  return(t);
}
ATerm u_6 (ATerm t)
{
  t = term_i_37;
  return(t);
}
ATerm v_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm w_6 (ATerm t)
{
  ATerm z_48 = NULL,a_49 = NULL;
  t = term_j_37;
  z_48 = t;
  t = term_t_27;
  a_49 = t;
  t = term_k_37;
  t = s_9(z_48, a_49, t);
  t = term_p_37;
  return(t);
}
ATerm x_6 (ATerm t)
{
  t = term_q_37;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm r_37 = t;
  int s_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(n_6, o_6, p_6, t);
      ;
      LocalPopChoice(s_37);
    }
  else
    {
      t = r_37;
      {
        ATerm v_37 = t;
        int w_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(r_6, t_6, u_6, t);
            ;
            LocalPopChoice(w_37);
          }
        else
          {
            t = v_37;
            t = Option_3_0(v_6, w_6, x_6, t);
          }
      }
    }
  return(t);
}
ATerm s_9 (ATerm v_56, ATerm w_56, ATerm t)
{
  ATerm b_49 = NULL;
  t = term_r_13;
  b_49 = t;
  t = SSL_table_put(b_49, v_56, w_56);
  t = (ATerm) ATmakeAppl(sym__3, term_r_13, v_56, w_56);
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm g_49 = NULL,j_49 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm k_49 = NULL,l_49 = NULL,s_49 = NULL;
      t = term_t_27;
      t = e_0(t);
      k_49 = t;
      t = term_x_37;
      l_49 = t;
      t = term_y_37;
      s_49 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_x_37, term_y_37, k_49);
      t = q_9(l_49, s_49, k_49, t);
      _fail(t);
    }
  else
    {
      ATerm v_49 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          g_49 = ATgetFirst((ATermList) t);
          j_49 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = g_49;
      t = c_0(t);
      t = term_t_27;
      t = d_0(t);
      v_49 = t;
      t = (ATerm) ATinsert(CheckATermList(j_49), v_49);
    }
  return(t);
}
ATerm y_6 (ATerm t)
{
  ATerm b_50 = NULL;
  b_50 = t;
  if(match_string(t, "-o"))
    {
      t = b_50;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = b_50;
    }
  return(t);
}
ATerm d_7 (ATerm t)
{
  ATerm c_50 = NULL,d_50 = NULL;
  c_50 = t;
  t = term_r_11;
  d_50 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_11, c_50);
  t = s_9(d_50, c_50, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, c_50);
  return(t);
}
ATerm e_7 (ATerm t)
{
  t = term_b_38;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(y_6, d_7, e_7, t);
  return(t);
}
ATerm f_7 (ATerm t)
{
  ATerm f_50 = NULL;
  f_50 = t;
  if(match_string(t, "-i"))
    {
      t = f_50;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = f_50;
    }
  return(t);
}
ATerm g_7 (ATerm t)
{
  ATerm g_50 = NULL,j_50 = NULL;
  g_50 = t;
  t = term_e_28;
  j_50 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_28, g_50);
  t = s_9(j_50, g_50, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, g_50);
  return(t);
}
ATerm h_7 (ATerm t)
{
  t = term_c_38;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(f_7, g_7, h_7, t);
  return(t);
}
ATerm q_9 (ATerm q_48, ATerm r_48, ATerm p_48, ATerm t)
{
  ATerm l_50 = NULL,m_50 = NULL,n_50 = NULL;
  l_50 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_48, r_48);
  {
    ATerm m_38 = t;
    int n_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm p_38 = ATgetArgument(t, 0);
            ATerm q_38 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, q_48, r_48);
        t = p_9(q_48, r_48, t);
        ;
        LocalPopChoice(n_38);
      }
    else
      {
        t = m_38;
        t = (ATerm) ATempty;
      }
    m_50 = t;
    t = (ATerm) ATinsert(CheckATermList(m_50), p_48);
    n_50 = t;
    t = SSL_table_put(q_48, r_48, n_50);
    t = l_50;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm t)
{
  ATerm w_50 = NULL,x_50 = NULL,y_50 = NULL,z_50 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm a_51 = NULL,b_51 = NULL,c_51 = NULL;
      t = term_t_27;
      t = k_0(t);
      a_51 = t;
      t = term_x_37;
      b_51 = t;
      t = term_y_37;
      c_51 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_x_37, term_y_37, a_51);
      t = q_9(b_51, c_51, a_51, t);
      _fail(t);
    }
  else
    {
      ATerm g_51 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          w_50 = ATgetFirst((ATermList) t);
          x_50 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = x_50;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          y_50 = ATgetFirst((ATermList) t);
          z_50 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = w_50;
      t = i_0(t);
      t = y_50;
      t = j_0(t);
      g_51 = t;
      t = (ATerm) ATinsert(CheckATermList(z_50), g_51);
    }
  return(t);
}
ATerm at_end_1_0 (ATerm d_84 (ATerm), ATerm t)
{
  ATerm m_52 (ATerm t)
  {
    ATerm j_52 = NULL,k_52 = NULL,l_52 = NULL;
    l_52 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        j_52 = ATgetFirst((ATermList) t);
        k_52 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm c_17 = NULL,i_17 = NULL,h_5 = NULL;
          t = SSLgetAnnotations(l_52);
          c_17 = t;
          t = k_52;
          t = m_52(t);
          i_17 = t;
          t = (ATerm) ATinsert(CheckATermList(i_17), j_52);
          h_5 = t;
          t = SSLsetAnnotations(h_5, c_17);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = l_52;
        t = d_84(t);
      }
    return(t);
  }
  t = m_52(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm j_51 = NULL,k_51 = NULL,l_51 = NULL;
  j_51 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = j_51;
    }
  else
    {
      ATerm i_7 (ATerm t)
      {
        t = not_null(l_51);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          k_51 = ATgetFirst((ATermList) t);
          if(((l_51 != NULL) && (l_51 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            l_51 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = k_51;
      t = at_end_1_0(i_7, t);
    }
  return(t);
}
ATerm e_53 (ATerm r_52, ATerm t)
{
  ATerm s_52 = NULL;
  t = SSL_explode_term(r_52);
  if(match_cons(t, sym__2))
    {
      ATerm v_38 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) v_38) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      s_52 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_52;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm u_52 = NULL,v_52 = NULL,x_52 = NULL;
  x_52 = t;
  if(match_cons(t, sym__2))
    {
      u_52 = ATgetArgument(t, 0);
      v_52 = ATgetArgument(t, 1);
      {
        ATerm w_38 = t;
        int x_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_7 (ATerm t)
            {
              t = v_52;
              return(t);
            }
            t = u_52;
            t = at_end_1_0(j_7, t);
            ;
            LocalPopChoice(x_38);
          }
        else
          {
            t = w_38;
            t = e_53(x_52, t);
          }
      }
    }
  else
    {
      t = e_53(x_52, t);
    }
  return(t);
}
ATerm j_9 (ATerm b_57, ATerm a_57, ATerm t)
{
  ATerm f_53 = NULL,g_53 = NULL,i_53 = NULL;
  t = b_57;
  {
    ATerm y_38 = t;
    int z_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        ;
        LocalPopChoice(z_38);
      }
    else
      {
        t = y_38;
        t = (ATerm) ATempty;
      }
    g_53 = t;
    t = (ATerm) ATmakeAppl(sym__2, a_57, g_53);
    t = conc_0_0(t);
    f_53 = t;
    t = term_r_13;
    i_53 = t;
    t = SSL_table_put(i_53, b_57, f_53);
    t = (ATerm) ATmakeAppl(sym__3, term_r_13, b_57, f_53);
  }
  return(t);
}
ATerm k_7 (ATerm t)
{
  ATerm q_53 = NULL;
  q_53 = t;
  if(match_string(t, "-I"))
    {
      t = q_53;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--Include", 0, ATtrue)))
        _fail(t);
      t = q_53;
    }
  return(t);
}
ATerm l_7 (ATerm t)
{
  ATerm r_53 = NULL,y_53 = NULL,z_53 = NULL;
  r_53 = t;
  t = term_z_29;
  y_53 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, r_53), term_z_29);
  z_53 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_29, (ATerm) ATinsert(ATinsert(ATempty, r_53), term_z_29));
  t = j_9(y_53, z_53, t);
  t = term_t_27;
  return(t);
}
ATerm m_7 (ATerm t)
{
  t = term_a_39;
  return(t);
}
ATerm n_7 (ATerm t)
{
  ATerm e_54 = NULL;
  e_54 = t;
  if(match_string(t, "--nodep"))
    {
      t = e_54;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-nodep", 0, ATtrue)))
        _fail(t);
      t = e_54;
    }
  return(t);
}
ATerm o_7 (ATerm t)
{
  ATerm f_54 = NULL,i_54 = NULL;
  t = term_y_11;
  f_54 = t;
  t = term_b_39;
  i_54 = t;
  t = term_c_39;
  t = s_9(f_54, i_54, t);
  t = term_t_27;
  return(t);
}
ATerm p_7 (ATerm t)
{
  t = term_d_39;
  return(t);
}
ATerm t_7 (ATerm t)
{
  ATerm m_54 = NULL;
  m_54 = t;
  if(match_string(t, "--dep"))
    {
      t = m_54;
    }
  else
    {
      if(match_string(t, "-d"))
        {
          t = m_54;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-dep", 0, ATtrue)))
            _fail(t);
          t = m_54;
        }
    }
  return(t);
}
ATerm u_7 (ATerm t)
{
  ATerm q_54 = NULL,v_54 = NULL;
  q_54 = t;
  t = term_v_11;
  v_54 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_11, q_54);
  t = s_9(v_54, q_54, t);
  t = term_t_27;
  return(t);
}
ATerm v_7 (ATerm t)
{
  t = term_e_39;
  return(t);
}
ATerm w_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--imports", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm x_7 (ATerm t)
{
  ATerm w_54 = NULL,x_54 = NULL;
  t = term_g_39;
  w_54 = t;
  t = term_t_27;
  x_54 = t;
  t = term_i_39;
  t = s_9(w_54, x_54, t);
  t = term_t_27;
  return(t);
}
ATerm a_8 (ATerm t)
{
  t = term_j_39;
  return(t);
}
ATerm e_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--slack", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm f_8 (ATerm t)
{
  ATerm y_54 = NULL,z_54 = NULL;
  t = term_f_31;
  y_54 = t;
  t = term_t_27;
  z_54 = t;
  t = term_k_39;
  t = s_9(y_54, z_54, t);
  t = term_t_27;
  return(t);
}
ATerm g_8 (ATerm t)
{
  t = term_q_39;
  return(t);
}
ATerm k_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--asfix", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm l_8 (ATerm t)
{
  ATerm a_55 = NULL,c_55 = NULL;
  t = term_o_29;
  a_55 = t;
  t = term_b_39;
  c_55 = t;
  t = term_r_39;
  t = s_9(a_55, c_55, t);
  t = term_t_27;
  return(t);
}
ATerm w_8 (ATerm t)
{
  t = term_s_39;
  return(t);
}
ATerm pack_stratego_options_0_0 (ATerm t)
{
  ATerm w_39 = t;
  int x_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ArgOption_3_0(k_7, l_7, m_7, t);
      ;
      LocalPopChoice(x_39);
    }
  else
    {
      t = w_39;
      {
        ATerm i_40 = t;
        int q_40 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Option_3_0(n_7, o_7, p_7, t);
            ;
            LocalPopChoice(q_40);
          }
        else
          {
            t = i_40;
            {
              ATerm r_40 = t;
              int w_40 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = ArgOption_3_0(t_7, u_7, v_7, t);
                  ;
                  LocalPopChoice(w_40);
                }
              else
                {
                  t = r_40;
                  {
                    ATerm x_40 = t;
                    int y_40 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Option_3_0(w_7, x_7, a_8, t);
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
                              t = Option_3_0(e_8, f_8, g_8, t);
                              ;
                              LocalPopChoice(a_41);
                            }
                          else
                            {
                              t = z_40;
                              t = Option_3_0(k_8, l_8, w_8, t);
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
  ATerm f_55 = NULL,g_55 = NULL,h_55 = NULL,j_55 = NULL;
  t = report_run_time_0_0(t);
  t = term_t_27;
  t = whoami_0_0(t);
  f_55 = t;
  t = term_s_21;
  h_55 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_d_41), f_55);
  j_55 = t;
  t = SSL_printnl(h_55, j_55);
  t = term_n_14;
  g_55 = t;
  t = SSL_exit(g_55);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_f_41;
  t = get_config_0_0(t);
  return(t);
}
ATerm m_9 (ATerm t_37, ATerm u_37, ATerm t)
{
  ATerm g_41 = t;
  int h_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(t_37, u_37);
      ;
      LocalPopChoice(h_41);
    }
  else
    {
      t = g_41;
      t = SSL_addr(t_37, u_37);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm q_89 (ATerm), ATerm r_89 (ATerm), ATerm t)
{
  ATerm n_55 = NULL,o_55 = NULL,p_55 = NULL;
  n_55 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = n_55;
      t = q_89(t);
    }
  else
    {
      ATerm b_56 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          o_55 = ATgetFirst((ATermList) t);
          p_55 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = p_55;
      t = foldr_2_0(q_89, r_89, t);
      b_56 = t;
      t = (ATerm) ATmakeAppl(sym__2, o_55, b_56);
      t = r_89(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm z_8 (ATerm t)
{
  t = term_c_37;
  return(t);
}
ATerm a_9 (ATerm t)
{
  ATerm e_18 = NULL,g_18 = NULL;
  if(match_cons(t, sym__2))
    {
      e_18 = ATgetArgument(t, 0);
      g_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_9(e_18, g_18, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm k_56 = NULL,t_17 = NULL,a_18 = NULL;
  t = times_0_0(t);
  a_18 = t;
  t = SSL_explode_term(a_18);
  if(match_cons(t, sym__2))
    {
      ATerm i_41 = ATgetArgument(t, 0);
      t_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_17;
  t = foldr_2_0(z_8, a_9, t);
  k_56 = t;
  t = SSL_TicksToSeconds(k_56);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm x_56 = NULL,y_56 = NULL,z_56 = NULL;
  x_56 = t;
  if(match_cons(t, sym__2))
    {
      y_56 = ATgetArgument(t, 0);
      z_56 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm p_41 = t;
    int q_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = z_56;
        if((y_56 != t))
          {
            _fail(t);
          }
        t = x_56;
        ;
        LocalPopChoice(q_41);
      }
    else
      {
        t = p_41;
        t = (ATerm) ATmakeAppl(sym__2, y_56, z_56);
        {
          ATerm r_41 = t;
          int s_41 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(y_56, z_56);
              ;
              LocalPopChoice(s_41);
            }
          else
            {
              t = r_41;
              t = SSL_gtr(y_56, z_56);
            }
          t = (ATerm) ATmakeAppl(sym__2, y_56, z_56);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm u_97 (ATerm), ATerm t)
{
  ATerm k_57 = NULL;
  k_57 = t;
  {
    ATerm t_41 = t;
    int u_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_57 = NULL;
        t = term_s_14;
        t = get_config_0_0(t);
        m_57 = t;
        t = (ATerm) ATmakeAppl(sym__2, m_57, term_n_14);
        t = geq_0_0(t);
        t = k_57;
        t = u_97(t);
        ;
        LocalPopChoice(u_41);
      }
    else
      {
        t = t_41;
        t = k_57;
      }
  }
  return(t);
}
ATerm g_9 (ATerm t)
{
  ATerm o_57 = NULL,p_57 = NULL,r_57 = NULL,s_57 = NULL;
  t = run_time_0_0(t);
  o_57 = t;
  t = term_t_27;
  t = whoami_0_0(t);
  p_57 = t;
  t = term_s_21;
  r_57 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_v_41), o_57), term_x_14), p_57);
  s_57 = t;
  t = SSL_printnl(r_57, s_57);
  t = (ATerm) ATmakeAppl(sym__2, term_s_21, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_v_41), o_57), term_x_14), p_57));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(g_9, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm t_57 = NULL;
  t = report_run_time_0_0(t);
  t = term_c_37;
  t_57 = t;
  t = SSL_exit(t_57);
  return(t);
}
ATerm o_9 (ATerm t)
{
  ATerm e_58 = NULL,f_58 = NULL;
  f_58 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = f_58;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          e_58 = ATgetArgument(t, 0);
          {
            ATerm x_18 = NULL,l_5 = NULL;
            t = SSLgetAnnotations(f_58);
            x_18 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, e_58);
            l_5 = t;
            t = SSLsetAnnotations(l_5, x_18);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = f_58;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm i_99 (ATerm), ATerm t)
{
  ATerm w_41 = t;
  int x_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_y_41;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(x_41);
    }
  else
    {
      t = w_41;
      t = fetch_1_0(o_9, t);
    }
  t = i_99(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t)
{
  ATerm i_58 = NULL,j_58 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_58 = ATgetFirst((ATermList) t);
      j_58 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm n_58 = NULL,o_58 = NULL;
        ATerm r_9 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(n_58)), not_null(o_58));
          return(t);
        }
        t = j_58;
        t = h_0(t);
        if(((n_58 != NULL) && (n_58 != t)))
          _fail(t);
        else
          n_58 = t;
        t = i_58;
        t = g_0(t);
        if(((o_58 != NULL) && (o_58 != t)))
          _fail(t);
        else
          o_58 = t;
        t = j_58;
        t = reverse_acc_2_0(g_0, r_9, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_t_27;
      t = h_0(t);
    }
  return(t);
}
ATerm p_9 (ATerm h_50, ATerm i_50, ATerm t)
{
  t = SSL_table_get(h_50, i_50);
  return(t);
}
ATerm t_9 (ATerm t)
{
  ATerm s_58 = NULL,t_58 = NULL,u_58 = NULL,n_5 = NULL;
  u_58 = t;
  if(match_cons(t, sym_Program_1))
    {
      t_58 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_58);
  s_58 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, t_58);
  n_5 = t;
  t = SSLsetAnnotations(n_5, s_58);
  return(t);
}
ATerm w_9 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm x_9 (ATerm t)
{
  ATerm w_58 = NULL;
  w_58 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, w_58), term_z_41);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm q_58 = NULL,r_58 = NULL;
  ATerm a_42 = t;
  int b_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_f_41;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(b_42);
    }
  else
    {
      t = a_42;
      t = fetch_1_0(t_9, t);
    }
  t = term_c_42;
  t = echo_0_0(t);
  t = term_x_37;
  q_58 = t;
  t = term_y_37;
  r_58 = t;
  t = term_d_42;
  t = p_9(q_58, r_58, t);
  t = reverse_acc_2_0(_id, w_9, t);
  t = map_1_0(x_9, t);
  return(t);
}
ATerm fetch_1_0 (ATerm x_83 (ATerm), ATerm t)
{
  ATerm t_59 (ATerm t)
  {
    ATerm q_59 = NULL,r_59 = NULL,s_59 = NULL;
    q_59 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        r_59 = ATgetFirst((ATermList) t);
        s_59 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm e_42 = t;
      int f_42 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm k_19 = NULL,p_19 = NULL,r_5 = NULL;
          t = SSLgetAnnotations(q_59);
          k_19 = t;
          t = r_59;
          t = x_83(t);
          p_19 = t;
          t = (ATerm) ATinsert(CheckATermList(s_59), p_19);
          r_5 = t;
          t = SSLsetAnnotations(r_5, k_19);
          ;
          LocalPopChoice(f_42);
        }
      else
        {
          t = e_42;
          {
            ATerm y_19 = NULL,i_20 = NULL,u_5 = NULL;
            t = SSLgetAnnotations(q_59);
            y_19 = t;
            t = s_59;
            t = t_59(t);
            i_20 = t;
            t = (ATerm) ATinsert(CheckATermList(i_20), r_59);
            u_5 = t;
            t = SSLsetAnnotations(u_5, y_19);
          }
        }
    }
    return(t);
  }
  t = t_59(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm x_59 = NULL,y_59 = NULL,z_59 = NULL;
  x_59 = t;
  {
    ATerm g_42 = t;
    int h_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = x_59;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm i_42 = ATgetFirst((ATermList) t);
                ATerm j_42 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = x_59;
          }
        ;
        LocalPopChoice(h_42);
      }
    else
      {
        t = g_42;
        t = (ATerm) ATinsert(ATempty, x_59);
      }
    y_59 = t;
    t = term_r_36;
    z_59 = t;
    t = SSL_printnl(z_59, y_59);
    t = x_59;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_f_41;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm y_9 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm z_9 (ATerm t)
{
  ATerm d_60 = NULL,e_60 = NULL;
  t = term_k_42;
  d_60 = t;
  t = term_t_27;
  e_60 = t;
  t = term_l_42;
  t = s_9(d_60, e_60, t);
  return(t);
}
ATerm a_10 (ATerm t)
{
  t = term_m_42;
  return(t);
}
ATerm b_10 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm d_10 (ATerm t)
{
  ATerm f_60 = NULL,g_60 = NULL,h_60 = NULL,i_60 = NULL;
  t = term_k_42;
  h_60 = t;
  t = term_t_27;
  i_60 = t;
  t = term_l_42;
  t = s_9(h_60, i_60, t);
  t = term_n_42;
  f_60 = t;
  t = term_t_27;
  g_60 = t;
  t = term_q_42;
  t = s_9(f_60, g_60, t);
  t = term_s_42;
  return(t);
}
ATerm h_10 (ATerm t)
{
  t = term_t_42;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm u_42 = t;
  int v_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(y_9, z_9, a_10, t);
      ;
      LocalPopChoice(v_42);
    }
  else
    {
      t = u_42;
      t = Option_3_0(b_10, d_10, h_10, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm z_61 (ATerm), ATerm a_62 (ATerm), ATerm t)
{
  ATerm j_60 = NULL,k_60 = NULL,l_60 = NULL,m_60 = NULL,n_60 = NULL,o_60 = NULL,e_6 = NULL;
  o_60 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_60 = ATgetFirst((ATermList) t);
      l_60 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_60);
  j_60 = t;
  t = k_60;
  t = z_61(t);
  m_60 = t;
  t = l_60;
  t = a_62(t);
  n_60 = t;
  t = (ATerm) ATinsert(CheckATermList(n_60), m_60);
  e_6 = t;
  t = SSLsetAnnotations(e_6, j_60);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm z_101 (ATerm), ATerm t)
{
  ATerm t_60 = NULL,u_60 = NULL,v_60 = NULL,w_60 = NULL,y_60 = NULL,z_60 = NULL,q_6 = NULL;
  t_60 = t;
  {
    ATerm w_42 = t;
    int y_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_d_43;
        t = z_101(t);
        ;
        LocalPopChoice(y_42);
      }
    else
      {
        t = w_42;
      }
    t = t_60;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        v_60 = ATgetFirst((ATermList) t);
        w_60 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(t_60);
    u_60 = t;
    t = term_f_41;
    z_60 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_f_41, v_60);
    t = s_9(z_60, v_60, t);
    t = w_60;
    {
      ATerm j_61 (ATerm t)
      {
        ATerm e_43 = t;
        int i_43 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_43 = t;
            int x_43 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm c_61 = NULL;
                c_61 = t;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = c_61;
                ;
                LocalPopChoice(x_43);
              }
            else
              {
                t = k_43;
                t = z_101(t);
                t = Cons_2_0(_id, j_61, t);
              }
            ;
            LocalPopChoice(i_43);
          }
        else
          {
            t = e_43;
            {
              ATerm f_61 = NULL,g_61 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  f_61 = ATgetFirst((ATermList) t);
                  g_61 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(g_61), (ATerm) ATmakeAppl(sym_Undefined_1, f_61));
            }
          }
        return(t);
      }
      t = j_61(t);
      y_60 = t;
      t = (ATerm) ATinsert(CheckATermList(y_60), (ATerm) ATmakeAppl(sym_Program_1, v_60));
      q_6 = t;
      t = SSLsetAnnotations(q_6, u_60);
    }
  }
  return(t);
}
ATerm j_10 (ATerm t)
{
  ATerm v_61 = NULL;
  v_61 = t;
  if(match_string(t, "--help"))
    {
      t = v_61;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = v_61;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = v_61;
        }
    }
  return(t);
}
ATerm n_10 (ATerm t)
{
  ATerm w_61 = NULL,x_61 = NULL;
  t = term_y_41;
  w_61 = t;
  t = term_t_27;
  x_61 = t;
  t = term_a_44;
  t = s_9(w_61, x_61, t);
  t = term_b_44;
  return(t);
}
ATerm p_10 (ATerm t)
{
  t = term_c_44;
  return(t);
}
ATerm q_10 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm y_101 (ATerm), ATerm t)
{
  ATerm o_61 = NULL,p_61 = NULL,q_61 = NULL,r_61 = NULL,s_61 = NULL,t_61 = NULL,u_61 = NULL;
  q_61 = t;
  t = term_x_37;
  s_61 = t;
  t = term_y_37;
  t_61 = t;
  t = (ATerm) ATempty;
  u_61 = t;
  t = SSL_table_put(s_61, t_61, u_61);
  t = q_61;
  {
    ATerm i_10 (ATerm t)
    {
      ATerm d_44 = t;
      int e_44 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = y_101(t);
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
                t = Option_3_0(j_10, n_10, p_10, t);
                ;
                LocalPopChoice(g_44);
              }
            else
              {
                t = f_44;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(i_10, t);
    {
      ATerm h_44 = t;
      int i_44 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm g_62 = NULL;
          g_62 = t;
          {
            ATerm j_44 = t;
            int k_44 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm v_20 = NULL;
                t = g_62;
                {
                  ATerm l_44 = t;
                  int m_44 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_y_41;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(m_44);
                    }
                  else
                    {
                      t = l_44;
                      t = fetch_1_0(q_10, t);
                    }
                  t = g_62;
                  t = default_system_usage_0_0(t);
                  t = term_c_37;
                  v_20 = t;
                  t = SSL_exit(v_20);
                }
                ;
                LocalPopChoice(k_44);
              }
            else
              {
                t = j_44;
                {
                  ATerm d_21 = NULL;
                  t = term_k_42;
                  t = get_config_0_0(t);
                  t = g_62;
                  t = default_system_about_0_0(t);
                  t = term_c_37;
                  d_21 = t;
                  t = SSL_exit(d_21);
                }
              }
          }
          ;
          LocalPopChoice(i_44);
        }
      else
        {
          t = h_44;
          {
            ATerm n_44 = t;
            int o_44 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm h_62 = NULL,i_62 = NULL,j_62 = NULL;
                ATerm r_10 (ATerm t)
                {
                  ATerm k_62 = NULL,l_62 = NULL,m_62 = NULL,s_6 = NULL;
                  m_62 = t;
                  if(match_cons(t, sym_Undefined_1))
                    {
                      l_62 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(m_62);
                  k_62 = t;
                  t = l_62;
                  if(((o_61 != NULL) && (o_61 != t)))
                    _fail(t);
                  else
                    o_61 = t;
                  t = (ATerm) ATmakeAppl(sym_Undefined_1, l_62);
                  s_6 = t;
                  t = SSLsetAnnotations(s_6, k_62);
                  return(t);
                }
                t = fetch_1_0(r_10, t);
                t = term_s_21;
                i_62 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(o_61)), term_p_44);
                j_62 = t;
                t = SSL_printnl(i_62, j_62);
                t = (ATerm) ATmakeAppl(sym__2, term_s_21, (ATerm) ATinsert(ATinsert(ATempty, not_null(o_61)), term_p_44));
                t = default_system_usage_0_0(t);
                t = term_n_14;
                h_62 = t;
                t = SSL_exit(h_62);
                ;
                LocalPopChoice(o_44);
              }
            else
              {
                t = n_44;
              }
          }
        }
      p_61 = t;
      t = term_x_37;
      r_61 = t;
      t = SSL_table_destroy(r_61);
      t = p_61;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm k_99 (ATerm), ATerm l_99 (ATerm), ATerm m_99 (ATerm), ATerm n_99 (ATerm), ATerm t)
{
  ATerm r_62 = NULL,s_62 = NULL,t_62 = NULL,u_62 = NULL;
  t = parse_options_1_0(k_99, t);
  r_62 = t;
  t = term_q_44;
  u_62 = t;
  t = SSL_table_create(u_62);
  t = term_q_44;
  s_62 = t;
  t = term_r_44;
  t_62 = t;
  t = SSL_table_put(s_62, t_62, r_62);
  t = r_62;
  t = m_99(t);
  {
    ATerm s_44 = t;
    int t_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(l_99, t);
        ;
        LocalPopChoice(t_44);
      }
    else
      {
        t = s_44;
        {
          ATerm w_44 = t;
          int x_44 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = n_99(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(x_44);
            }
          else
            {
              t = w_44;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm u_10 (ATerm t)
{
  ATerm y_44 = t;
  int z_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = pack_stratego_options_0_0(t);
      ;
      LocalPopChoice(z_44);
    }
  else
    {
      t = y_44;
      {
        ATerm a_45 = t;
        int b_45 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = input_option_0_0(t);
            ;
            LocalPopChoice(b_45);
          }
        else
          {
            t = a_45;
            {
              ATerm c_45 = t;
              int d_45 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = output_option_0_0(t);
                  ;
                  LocalPopChoice(d_45);
                }
              else
                {
                  t = c_45;
                  {
                    ATerm e_45 = t;
                    int f_45 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Option_3_0(a_11, e_11, k_11, t);
                        ;
                        LocalPopChoice(f_45);
                      }
                    else
                      {
                        t = e_45;
                        {
                          ATerm g_45 = t;
                          int h_45 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = verbose_option_0_0(t);
                              ;
                              LocalPopChoice(h_45);
                            }
                          else
                            {
                              t = g_45;
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
ATerm a_11 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm e_11 (ATerm t)
{
  ATerm a_63 = NULL,b_63 = NULL;
  t = term_k_45;
  a_63 = t;
  t = term_t_27;
  b_63 = t;
  t = term_l_45;
  t = s_9(a_63, b_63, t);
  t = term_m_45;
  return(t);
}
ATerm k_11 (ATerm t)
{
  t = term_q_45;
  return(t);
}
ATerm m_11 (ATerm t)
{
  t = get_filename_0_0(t);
  t = basename_1_0(_id, t);
  return(t);
}
ATerm pack_stratego_0_0 (ATerm t)
{
  ATerm y_62 = NULL,z_62 = NULL;
  ATerm z_10 (ATerm t)
  {
    ATerm l_11 (ATerm t)
    {
      ATerm d_63 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          d_63 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = i_9(d_63, t);
      if(match_cons(t, sym__2))
        {
          if(((y_62 != NULL) && (y_62 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            y_62 = ATgetArgument(t, 0);
          if(((z_62 != NULL) && (z_62 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            z_62 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm t_45 = t;
        int y_45 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_g_39;
            t = get_config_0_0(t);
            t = y_62;
            t = map_1_0(m_11, t);
            t = write_to_text_0_0(t);
            ;
            LocalPopChoice(y_45);
          }
        else
          {
            t = t_45;
            {
              ATerm z_45 = t;
              int b_46 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = y_62;
                  t = create_dep_file_0_0(t);
                  ;
                  LocalPopChoice(b_46);
                }
              else
                {
                  t = z_45;
                }
              t = z_62;
              t = write_to_0_0(t);
            }
          }
      }
      return(t);
    }
    t = xtc_io_1_0(l_11, t);
    return(t);
  }
  t = option_wrap_4_0(u_10, default_usage_0_0, _id, z_10, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = pack_stratego_0_0(t);
  return(t);
}
