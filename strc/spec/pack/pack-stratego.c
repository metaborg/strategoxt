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
ATerm term_r_45;
ATerm term_l_45;
ATerm term_k_45;
ATerm term_j_45;
ATerm term_q_44;
ATerm term_p_44;
ATerm term_o_44;
ATerm term_b_44;
ATerm term_a_44;
ATerm term_z_43;
ATerm term_d_43;
ATerm term_s_42;
ATerm term_r_42;
ATerm term_q_42;
ATerm term_n_42;
ATerm term_m_42;
ATerm term_k_42;
ATerm term_j_42;
ATerm term_c_42;
ATerm term_b_42;
ATerm term_y_41;
ATerm term_x_41;
ATerm term_u_41;
ATerm term_f_41;
ATerm term_c_41;
ATerm term_r_39;
ATerm term_q_39;
ATerm term_p_39;
ATerm term_j_39;
ATerm term_i_39;
ATerm term_h_39;
ATerm term_f_39;
ATerm term_d_39;
ATerm term_c_39;
ATerm term_b_39;
ATerm term_a_39;
ATerm term_z_38;
ATerm term_b_38;
ATerm term_a_38;
ATerm term_x_37;
ATerm term_w_37;
ATerm term_p_37;
ATerm term_o_37;
ATerm term_k_37;
ATerm term_j_37;
ATerm term_i_37;
ATerm term_h_37;
ATerm term_g_37;
ATerm term_f_37;
ATerm term_b_37;
ATerm term_a_37;
ATerm term_z_36;
ATerm term_u_36;
ATerm term_q_36;
ATerm term_j_36;
ATerm term_g_34;
ATerm term_e_34;
ATerm term_x_33;
ATerm term_n_31;
ATerm term_m_31;
ATerm term_l_31;
ATerm term_k_31;
ATerm term_i_31;
ATerm term_h_31;
ATerm term_g_31;
ATerm term_s_30;
ATerm term_a_30;
ATerm term_o_29;
ATerm term_n_29;
ATerm term_b_29;
ATerm term_e_28;
ATerm term_d_28;
ATerm term_x_27;
ATerm term_u_27;
ATerm term_r_27;
ATerm term_q_27;
ATerm term_j_27;
ATerm term_f_27;
ATerm term_d_27;
ATerm term_c_27;
ATerm term_w_26;
ATerm term_p_26;
ATerm term_m_26;
ATerm term_c_26;
ATerm term_v_25;
ATerm term_h_25;
ATerm term_g_25;
ATerm term_a_25;
ATerm term_v_24;
ATerm term_m_24;
ATerm term_l_24;
ATerm term_j_24;
ATerm term_h_24;
ATerm term_e_24;
ATerm term_d_24;
ATerm term_w_23;
ATerm term_t_23;
ATerm term_s_23;
ATerm term_o_23;
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
ATerm term_b_21;
ATerm term_y_20;
ATerm term_v_20;
ATerm term_u_20;
ATerm term_q_20;
ATerm term_p_20;
ATerm term_o_20;
ATerm term_m_20;
ATerm term_l_20;
ATerm term_i_20;
ATerm term_g_20;
ATerm term_f_20;
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
ATerm term_s_19;
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
ATerm term_t_18;
ATerm term_s_18;
ATerm term_r_18;
ATerm term_q_18;
ATerm term_p_18;
ATerm term_o_18;
ATerm term_k_18;
ATerm term_j_18;
ATerm term_i_18;
ATerm term_g_18;
ATerm term_e_18;
ATerm term_c_18;
ATerm term_a_18;
ATerm term_z_17;
ATerm term_v_17;
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
ATerm term_j_17;
ATerm term_h_17;
ATerm term_g_17;
ATerm term_e_17;
ATerm term_c_17;
ATerm term_b_17;
ATerm term_a_17;
ATerm term_z_16;
ATerm term_x_16;
ATerm term_w_16;
ATerm term_v_16;
ATerm term_u_16;
ATerm term_s_16;
ATerm term_r_16;
ATerm term_p_16;
ATerm term_m_16;
ATerm term_k_16;
ATerm term_j_16;
ATerm term_i_16;
ATerm term_h_16;
ATerm term_g_16;
ATerm term_e_16;
ATerm term_d_16;
ATerm term_z_15;
ATerm term_y_15;
ATerm term_w_15;
ATerm term_v_15;
ATerm term_u_15;
ATerm term_t_15;
ATerm term_r_15;
ATerm term_q_15;
ATerm term_m_15;
ATerm term_l_15;
ATerm term_k_15;
ATerm term_j_15;
ATerm term_i_15;
ATerm term_g_15;
ATerm term_f_15;
ATerm term_e_15;
ATerm term_y_14;
ATerm term_x_14;
ATerm term_w_14;
ATerm term_v_14;
ATerm term_r_14;
ATerm term_o_14;
ATerm term_j_14;
ATerm term_h_14;
ATerm term_g_14;
ATerm term_r_13;
ATerm term_j_13;
ATerm term_n_12;
ATerm term_k_12;
ATerm term_j_12;
ATerm term_f_12;
ATerm term_d_12;
ATerm term_a_12;
ATerm term_z_11;
ATerm term_v_11;
ATerm term_r_11;
void init_constant_terms (void)
{
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--dep", 0, ATtrue));
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--nodep", 0, ATtrue));
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeAppl(ATmakeSymbol(".", 0, ATtrue));
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeAppl(ATmakeSymbol("dep", 0, ATtrue));
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeAppl(ATmakeSymbol(" \\\n	", 0, ATtrue));
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeAppl(ATmakeSymbol(" :", 0, ATtrue));
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeInt(10);
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
  ATprotect(&(term_o_14));
  term_o_14 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
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
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_15, term_o_14, term_f_15);
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
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_15, term_q_15, term_r_15);
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_15, term_v_15, term_w_15);
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_15, term_d_16, term_e_16);
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
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_16, term_p_16, term_r_16);
  ATprotect(&(term_u_16));
  term_u_16 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_16, term_v_16, term_w_16);
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_a_17));
  term_a_17 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_b_17));
  term_b_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_c_17));
  term_c_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_16, term_a_17, term_b_17);
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
  ATprotect(&(term_t_17));
  term_t_17 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_v_17));
  term_v_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_z_17));
  term_z_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_17, term_t_17, term_v_17);
  ATprotect(&(term_a_18));
  term_a_18 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_e_18));
  term_e_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_g_18));
  term_g_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_18, term_c_18, term_e_18);
  ATprotect(&(term_i_18));
  term_i_18 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_j_18));
  term_j_18 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_k_18));
  term_k_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_o_18));
  term_o_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_18, term_j_18, term_k_18);
  ATprotect(&(term_p_18));
  term_p_18 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_q_18));
  term_q_18 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_r_18));
  term_r_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_s_18));
  term_s_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_18, term_q_18, term_r_18);
  ATprotect(&(term_t_18));
  term_t_18 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_u_18));
  term_u_18 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_v_18));
  term_v_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_w_18));
  term_w_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_18, term_u_18, term_v_18);
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
  term_o_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_19, term_n_12, term_l_19);
  ATprotect(&(term_q_19));
  term_q_19 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_s_19));
  term_s_19 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_t_19));
  term_t_19 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_u_19));
  term_u_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_19, term_s_19, term_t_19);
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
  ATprotect(&(term_f_20));
  term_f_20 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_g_20));
  term_g_20 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_i_20));
  term_i_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_l_20));
  term_l_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_20, term_g_20, term_i_20);
  ATprotect(&(term_m_20));
  term_m_20 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_o_20));
  term_o_20 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_p_20));
  term_p_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_q_20));
  term_q_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_20, term_o_20, term_p_20);
  ATprotect(&(term_u_20));
  term_u_20 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_v_20));
  term_v_20 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_y_20));
  term_y_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_b_21));
  term_b_21 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_20, term_v_20, term_y_20);
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
  ATprotect(&(term_o_23));
  term_o_23 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_s_23));
  term_s_23 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_t_23));
  term_t_23 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_w_23));
  term_w_23 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_d_24));
  term_d_24 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_e_24));
  term_e_24 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_h_24));
  term_h_24 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_j_24));
  term_j_24 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_l_24));
  term_l_24 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_m_24));
  term_m_24 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_v_24));
  term_v_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_a_25));
  term_a_25 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_g_25));
  term_g_25 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_h_25));
  term_h_25 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_v_25));
  term_v_25 = (ATerm) ATmakeAppl(sym__2, term_l_24, term_h_25);
  ATprotect(&(term_c_26));
  term_c_26 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_m_26));
  term_m_26 = (ATerm) ATmakeAppl(sym__2, term_l_24, term_m_24);
  ATprotect(&(term_p_26));
  term_p_26 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_w_26));
  term_w_26 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_c_27));
  term_c_27 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_d_27));
  term_d_27 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_f_27));
  term_f_27 = (ATerm) ATmakeInt(-1);
  ATprotect(&(term_j_27));
  term_j_27 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_q_27));
  term_q_27 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file> (file, mode)", 0, ATtrue));
  ATprotect(&(term_r_27));
  term_r_27 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_u_27));
  term_u_27 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_x_27));
  term_x_27 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_d_28));
  term_d_28 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_e_28));
  term_e_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_b_29));
  term_b_29 = (ATerm) ATmakeAppl(ATmakeSymbol("parse error in ", 0, ATtrue));
  ATprotect(&(term_n_29));
  term_n_29 = (ATerm) ATmakeAppl(ATmakeSymbol("parse-stratego", 0, ATtrue));
  ATprotect(&(term_o_29));
  term_o_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--asfix", 0, ATtrue));
  ATprotect(&(term_a_30));
  term_a_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue));
  ATprotect(&(term_s_30));
  term_s_30 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
  ATprotect(&(term_g_31));
  term_g_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--slack", 0, ATtrue));
  ATprotect(&(term_h_31));
  term_h_31 = (ATerm) ATmakeAppl(ATmakeSymbol("*** module ", 0, ATtrue));
  ATprotect(&(term_i_31));
  term_i_31 = (ATerm) ATmakeAppl(ATmakeSymbol(" not found", 0, ATtrue));
  ATprotect(&(term_k_31));
  term_k_31 = (ATerm) ATmakeAppl(ATmakeSymbol(" reading ", 0, ATtrue));
  ATprotect(&(term_l_31));
  term_l_31 = (ATerm) ATmakeAppl(ATmakeSymbol("rtree", 0, ATtrue));
  ATprotect(&(term_m_31));
  term_m_31 = (ATerm) ATmakeAppl(ATmakeSymbol("str", 0, ATtrue));
  ATprotect(&(term_n_31));
  term_n_31 = (ATerm) ATmakeAppl(ATmakeSymbol("cr", 0, ATtrue));
  ATprotect(&(term_x_33));
  term_x_33 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_e_34));
  term_e_34 = (ATerm) ATmakeAppl(ATmakeSymbol("list-cons", 0, ATtrue));
  ATprotect(&(term_g_34));
  term_g_34 = (ATerm) ATmakeAppl(ATmakeSymbol("tuple-cons", 0, ATtrue));
  ATprotect(&(term_j_36));
  term_j_36 = (ATerm) ATmakeAppl(sym__2, term_d_28, term_j_27);
  ATprotect(&(term_q_36));
  term_q_36 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_u_36));
  term_u_36 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_z_36));
  term_z_36 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_a_37));
  term_a_37 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_b_37));
  term_b_37 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_f_37));
  term_f_37 = (ATerm) ATmakeAppl(sym__2, term_r_14, term_b_37);
  ATprotect(&(term_g_37));
  term_g_37 = (ATerm) ATmakeAppl(sym_Verbose_1, term_b_37);
  ATprotect(&(term_h_37));
  term_h_37 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_i_37));
  term_i_37 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_j_37));
  term_j_37 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_k_37));
  term_k_37 = (ATerm) ATmakeAppl(sym__2, term_j_37, term_u_27);
  ATprotect(&(term_o_37));
  term_o_37 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_p_37));
  term_p_37 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_w_37));
  term_w_37 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_x_37));
  term_x_37 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_a_38));
  term_a_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_b_38));
  term_b_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_z_38));
  term_z_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-I d | --Include d   Include modules from directory d", 0, ATtrue));
  ATprotect(&(term_a_39));
  term_a_39 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_b_39));
  term_b_39 = (ATerm) ATmakeAppl(sym__2, term_z_11, term_a_39);
  ATprotect(&(term_c_39));
  term_c_39 = (ATerm) ATmakeAppl(ATmakeSymbol("--nodep              Don't create dependency file", 0, ATtrue));
  ATprotect(&(term_d_39));
  term_d_39 = (ATerm) ATmakeAppl(ATmakeSymbol("--dep f | -d f       Write dependency to file f", 0, ATtrue));
  ATprotect(&(term_f_39));
  term_f_39 = (ATerm) ATmakeAppl(ATmakeSymbol("--imports", 0, ATtrue));
  ATprotect(&(term_h_39));
  term_h_39 = (ATerm) ATmakeAppl(sym__2, term_f_39, term_u_27);
  ATprotect(&(term_i_39));
  term_i_39 = (ATerm) ATmakeAppl(ATmakeSymbol("--imports            Produce a list of imported modules only", 0, ATtrue));
  ATprotect(&(term_j_39));
  term_j_39 = (ATerm) ATmakeAppl(sym__2, term_g_31, term_u_27);
  ATprotect(&(term_p_39));
  term_p_39 = (ATerm) ATmakeAppl(ATmakeSymbol("--slack              Continue when module is not found", 0, ATtrue));
  ATprotect(&(term_q_39));
  term_q_39 = (ATerm) ATmakeAppl(sym__2, term_o_29, term_a_39);
  ATprotect(&(term_r_39));
  term_r_39 = (ATerm) ATmakeAppl(ATmakeSymbol("--asfix              Do not implode the concrete syntax parts", 0, ATtrue));
  ATprotect(&(term_c_41));
  term_c_41 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_f_41));
  term_f_41 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_u_41));
  term_u_41 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_x_41));
  term_x_41 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_y_41));
  term_y_41 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_b_42));
  term_b_42 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_c_42));
  term_c_42 = (ATerm) ATmakeAppl(sym__2, term_w_37, term_x_37);
  ATprotect(&(term_j_42));
  term_j_42 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_k_42));
  term_k_42 = (ATerm) ATmakeAppl(sym__2, term_j_42, term_u_27);
  ATprotect(&(term_m_42));
  term_m_42 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_n_42));
  term_n_42 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_q_42));
  term_q_42 = (ATerm) ATmakeAppl(sym__2, term_n_42, term_u_27);
  ATprotect(&(term_r_42));
  term_r_42 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_s_42));
  term_s_42 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_d_43));
  term_d_43 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_z_43));
  term_z_43 = (ATerm) ATmakeAppl(sym__2, term_x_41, term_u_27);
  ATprotect(&(term_a_44));
  term_a_44 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_b_44));
  term_b_44 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_o_44));
  term_o_44 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_p_44));
  term_p_44 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_q_44));
  term_q_44 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_j_45));
  term_j_45 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_k_45));
  term_k_45 = (ATerm) ATmakeAppl(sym__2, term_j_45, term_u_27);
  ATprotect(&(term_l_45));
  term_l_45 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_r_45));
  term_r_45 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
}
ATerm z_7 (ATerm a_43, ATerm b_43, ATerm);
ATerm a_0 (ATerm);
ATerm write_to_0_0 (ATerm);
ATerm a_8 (ATerm z_20, ATerm a_21, ATerm);
ATerm create_dep_file_0_0 (ATerm);
ATerm c_8 (ATerm f_35, ATerm g_35, ATerm);
ATerm d_8 (ATerm e_43, ATerm f_43, ATerm);
ATerm e_8 (ATerm j_96 (ATerm), ATerm u_431, ATerm i_43, ATerm);
ATerm f_0 (ATerm);
ATerm write_to_text_0_0 (ATerm);
ATerm basename_1_0 (ATerm k_93 (ATerm), ATerm);
ATerm at_suffix_rev_1_0 (ATerm k_84 (ATerm), ATerm);
ATerm get_filename_0_0 (ATerm);
ATerm map_1_0 (ATerm m_83 (ATerm), ATerm);
ATerm u_0 (ATerm);
ATerm v_0 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm z_0 (ATerm);
ATerm c_1 (ATerm);
ATerm flatten_stratego_0_0 (ATerm);
ATerm genzip_4_0 (ATerm p_85 (ATerm), ATerm q_85 (ATerm), ATerm r_85 (ATerm), ATerm s_85 (ATerm), ATerm);
ATerm e_1 (ATerm);
ATerm i_8 (ATerm z_127, ATerm);
ATerm read_from_0_0 (ATerm);
ATerm pass_keep_0_0 (ATerm);
ATerm j_8 (ATerm y_37, ATerm z_37, ATerm);
ATerm pass_verbose_0_0 (ATerm);
ATerm xtc_transform_term_2_0 (ATerm w_105 (ATerm), ATerm x_105 (ATerm), ATerm);
ATerm k_8 (ATerm t_44, ATerm u_44, ATerm);
ATerm signal_to_descr_0_0 (ATerm);
ATerm signal_from_number_0_0 (ATerm);
ATerm warn_ifsignaled_0_0 (ATerm);
ATerm fork_0_0 (ATerm);
ATerm fork_and_wait_1_0 (ATerm e_98 (ATerm), ATerm);
ATerm table_getlist_0_0 (ATerm);
ATerm if_verbose5_1_0 (ATerm x_97 (ATerm), ATerm);
ATerm if_verbose4_1_0 (ATerm w_97 (ATerm), ATerm);
ATerm if_verbose6_1_0 (ATerm y_97 (ATerm), ATerm);
ATerm n_8 (ATerm q_87 (ATerm), ATerm k_26, ATerm j_26, ATerm);
ATerm k_1 (ATerm);
ATerm o_8 (ATerm m_49, ATerm n_49, ATerm o_49, ATerm);
ATerm p_8 (ATerm b_102 (ATerm), ATerm w_49, ATerm v_49, ATerm);
ATerm n_20 (ATerm e_20, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm q_8 (ATerm g_43, ATerm);
ATerm r_8 (ATerm h_35, ATerm i_35, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm r_23 (ATerm u_21, ATerm);
ATerm a_24 (ATerm c_22, ATerm d_22, ATerm e_22, ATerm);
ATerm b_24 (ATerm v_22, ATerm w_22, ATerm z_22, ATerm);
ATerm s_8 (ATerm);
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
ATerm repeat_2_0 (ATerm v_76 (ATerm), ATerm w_76 (ATerm), ATerm);
ATerm xtc_location_0_0 (ATerm);
ATerm l_2 (ATerm);
ATerm m_2 (ATerm);
ATerm n_2 (ATerm);
ATerm o_2 (ATerm);
ATerm q_2 (ATerm);
ATerm xtc_load_0_0 (ATerm);
ATerm r_2 (ATerm);
ATerm u_2 (ATerm);
ATerm l_28 (ATerm e_27, ATerm);
ATerm f_3 (ATerm);
ATerm g_3 (ATerm);
ATerm h_3 (ATerm);
ATerm i_3 (ATerm);
ATerm xtc_find_0_0 (ATerm);
ATerm xtc_command_1_0 (ATerm n_105 (ATerm), ATerm);
ATerm t_8 (ATerm w_94 (ATerm), ATerm g_39, ATerm e_39, ATerm);
ATerm s_29 (ATerm g_29, ATerm);
ATerm t_29 (ATerm i_29, ATerm j_29, ATerm m_29, ATerm);
ATerm l_3 (ATerm);
ATerm open_file_0_0 (ATerm);
ATerm u_8 (ATerm z_33, ATerm a_34, ATerm);
ATerm new_0_0 (ATerm);
ATerm new_file_0_0 (ATerm);
ATerm m_3 (ATerm);
ATerm xtc_new_file_0_0 (ATerm);
ATerm xtc_transform_file_2_0 (ATerm m_0 (ATerm), ATerm n_0 (ATerm), ATerm);
ATerm f_33 (ATerm z_30, ATerm a_31, ATerm c_31, ATerm);
ATerm g_33 (ATerm v_32, ATerm x_32, ATerm);
ATerm p_3 (ATerm);
ATerm q_3 (ATerm);
ATerm r_3 (ATerm);
ATerm t_3 (ATerm);
ATerm parse_module_0_0 (ATerm);
ATerm debug_1_0 (ATerm h_96 (ATerm), ATerm);
ATerm if_verbose3_1_0 (ATerm v_97 (ATerm), ATerm);
ATerm fetch_elem_1_0 (ATerm y_83 (ATerm), ATerm);
ATerm v_8 (ATerm z_34, ATerm a_35, ATerm);
ATerm is_relpath_0_0 (ATerm);
ATerm w_8 (ATerm b_76 (ATerm), ATerm n_19, ATerm m_19, ATerm);
ATerm f_4 (ATerm);
ATerm get_module_1_0 (ATerm a_76 (ATerm), ATerm);
ATerm y_8 (ATerm t_87 (ATerm), ATerm u_87 (ATerm), ATerm o_26, ATerm n_26, ATerm);
ATerm z_8 (ATerm l_87 (ATerm), ATerm i_26, ATerm h_26, ATerm);
ATerm l_4 (ATerm);
ATerm m_4 (ATerm);
ATerm o_4 (ATerm);
ATerm e_9 (ATerm k_573, ATerm p_573, ATerm b_53, ATerm);
ATerm p_4 (ATerm);
ATerm t_4 (ATerm);
ATerm u_4 (ATerm);
ATerm y_39 (ATerm h_38, ATerm i_38, ATerm j_38, ATerm);
ATerm w_4 (ATerm);
ATerm diff_0_0 (ATerm);
ATerm g_9 (ATerm v_106 (ATerm), ATerm w_106 (ATerm), ATerm x_106 (ATerm), ATerm s_55, ATerm p_55, ATerm w_55, ATerm t_55, ATerm q_55, ATerm r_55, ATerm);
ATerm GnNext_3_0 (ATerm v_106 (ATerm), ATerm w_106 (ATerm), ATerm x_106 (ATerm), ATerm);
ATerm while_not_2_0 (ATerm m_77 (ATerm), ATerm n_77 (ATerm), ATerm);
ATerm for_3_0 (ATerm p_77 (ATerm), ATerm q_77 (ATerm), ATerm r_77 (ATerm), ATerm);
ATerm b_5 (ATerm);
ATerm c_5 (ATerm);
ATerm graph_nodes_roots_3_0 (ATerm s_106 (ATerm), ATerm t_106 (ATerm), ATerm u_106 (ATerm), ATerm);
ATerm filter_1_0 (ATerm t_90 (ATerm), ATerm);
ATerm f_5 (ATerm);
ATerm i_5 (ATerm);
ATerm j_5 (ATerm);
ATerm m_5 (ATerm);
ATerm o_5 (ATerm);
ATerm p_5 (ATerm);
ATerm j_9 (ATerm d_19, ATerm);
ATerm l_9 (ATerm a_40, ATerm b_40, ATerm);
ATerm copy_to_1_0 (ATerm l_0 (ATerm), ATerm);
ATerm m_9 (ATerm u_48, ATerm v_48, ATerm);
ATerm end_scope_1_0 (ATerm t_94 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm r_76 (ATerm), ATerm s_76 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm s_94 (ATerm), ATerm);
ATerm t_5 (ATerm);
ATerm w_5 (ATerm);
ATerm x_5 (ATerm);
ATerm xtc_temp_files_1_0 (ATerm z_104 (ATerm), ATerm);
ATerm j_6 (ATerm);
ATerm xtc_io_1_0 (ATerm a_105 (ATerm), ATerm);
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
ATerm t_9 (ATerm u_56, ATerm v_56, ATerm);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm);
ATerm y_6 (ATerm);
ATerm d_7 (ATerm);
ATerm e_7 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm f_7 (ATerm);
ATerm g_7 (ATerm);
ATerm h_7 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm r_9 (ATerm p_48, ATerm q_48, ATerm o_48, ATerm);
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm);
ATerm at_end_1_0 (ATerm c_84 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm d_53 (ATerm q_52, ATerm);
ATerm conc_0_0 (ATerm);
ATerm k_9 (ATerm a_57, ATerm z_56, ATerm);
ATerm k_7 (ATerm);
ATerm l_7 (ATerm);
ATerm m_7 (ATerm);
ATerm n_7 (ATerm);
ATerm o_7 (ATerm);
ATerm q_7 (ATerm);
ATerm s_7 (ATerm);
ATerm u_7 (ATerm);
ATerm v_7 (ATerm);
ATerm w_7 (ATerm);
ATerm x_7 (ATerm);
ATerm y_7 (ATerm);
ATerm b_8 (ATerm);
ATerm f_8 (ATerm);
ATerm g_8 (ATerm);
ATerm h_8 (ATerm);
ATerm l_8 (ATerm);
ATerm m_8 (ATerm);
ATerm pack_stratego_options_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm n_9 (ATerm s_37, ATerm t_37, ATerm);
ATerm foldr_2_0 (ATerm p_89 (ATerm), ATerm q_89 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm x_8 (ATerm);
ATerm a_9 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm t_97 (ATerm), ATerm);
ATerm f_9 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm h_9 (ATerm);
ATerm need_help_1_0 (ATerm h_99 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm);
ATerm q_9 (ATerm g_50, ATerm h_50, ATerm);
ATerm s_9 (ATerm);
ATerm w_9 (ATerm);
ATerm x_9 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm fetch_1_0 (ATerm w_83 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm y_9 (ATerm);
ATerm z_9 (ATerm);
ATerm a_10 (ATerm);
ATerm b_10 (ATerm);
ATerm e_10 (ATerm);
ATerm i_10 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm y_61 (ATerm), ATerm z_61 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm y_101 (ATerm), ATerm);
ATerm k_10 (ATerm);
ATerm n_10 (ATerm);
ATerm o_10 (ATerm);
ATerm q_10 (ATerm);
ATerm parse_options_1_0 (ATerm x_101 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm j_99 (ATerm), ATerm k_99 (ATerm), ATerm l_99 (ATerm), ATerm m_99 (ATerm), ATerm);
ATerm v_10 (ATerm);
ATerm b_11 (ATerm);
ATerm f_11 (ATerm);
ATerm k_11 (ATerm);
ATerm m_11 (ATerm);
ATerm pack_stratego_0_0 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm z_7 (ATerm a_43, ATerm b_43, ATerm t)
{
  ATerm b_0 = NULL;
  t = SSL_write_term_to_stream_baf(a_43, b_43);
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
  t = z_7(r_0, s_0, t);
  return(t);
}
ATerm write_to_0_0 (ATerm t)
{
  ATerm o_0 = NULL,q_0 = NULL;
  o_0 = t;
  t = xtc_new_file_0_0(t);
  q_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_0, o_0);
  t = e_8(a_0, q_0, o_0, t);
  t = SSL_close_file(q_0);
  t = (ATerm) ATmakeAppl(sym_FILE_1, q_0);
  return(t);
}
ATerm a_8 (ATerm z_20, ATerm a_21, ATerm t)
{
  ATerm o_1 = NULL,p_1 = NULL;
  t = a_21;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = a_21;
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
      t = SSLgetAnnotations(a_21);
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
                t = (ATerm) ATinsert(CheckATermList(y_0), z_20);
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
          ATerm x_11 = t;
          if((PushChoice() == 0))
            {
              t = term_z_11;
              t = get_config_0_0(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = x_11;
            }
        }
      }
    t_1 = t;
    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_d_12), term_a_12), t_1);
    s_2 = t;
    t = SSL_concat_strings(s_2);
    e_2 = t;
    t = (ATerm) ATmakeAppl(sym__2, e_2, term_f_12);
    t = open_file_0_0(t);
    v_1 = t;
    t = term_j_12;
    c_2 = t;
    t = (ATerm) ATinsert(CheckATermList(u_1), term_k_12);
    d_2 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_j_12, (ATerm) ATinsert(CheckATermList(u_1), term_k_12));
    t = a_8(c_2, d_2, t);
    w_1 = t;
    t = (ATerm) ATinsert(CheckATermList(w_1), t_1);
    a_2 = t;
    t = SSL_printnl(v_1, a_2);
    t = SSL_close_file(v_1);
    t = (ATerm) ATmakeAppl(sym_FILE_1, e_2);
  }
  return(t);
}
ATerm c_8 (ATerm f_35, ATerm g_35, ATerm t)
{
  ATerm t_2 = NULL;
  t = SSL_fputc(f_35, g_35);
  t_2 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, t_2);
  return(t);
}
ATerm d_8 (ATerm e_43, ATerm f_43, ATerm t)
{
  ATerm v_2 = NULL;
  t = SSL_write_term_to_stream_text(e_43, f_43);
  v_2 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, v_2);
  return(t);
}
ATerm e_8 (ATerm j_96 (ATerm), ATerm u_431, ATerm i_43, ATerm t)
{
  ATerm w_2 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, u_431, term_f_12);
  t = s_8(t);
  w_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_2, i_43);
  t = j_96(t);
  t = fclose_0_0(t);
  t = i_43;
  return(t);
}
ATerm f_0 (ATerm t)
{
  ATerm z_2 = NULL,a_3 = NULL,b_3 = NULL,c_3 = NULL,d_3 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm l_12 = ATgetArgument(t, 0);
      if(match_cons(l_12, sym_Stream_1))
        {
          c_3 = ATgetArgument(l_12, 0);
        }
      else
        _fail(t);
      d_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_8(c_3, d_3, t);
  z_2 = t;
  t = term_n_12;
  a_3 = t;
  t = z_2;
  if(match_cons(t, sym_Stream_1))
    {
      b_3 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_n_12, z_2);
  t = c_8(a_3, b_3, t);
  return(t);
}
ATerm write_to_text_0_0 (ATerm t)
{
  ATerm x_2 = NULL,y_2 = NULL;
  x_2 = t;
  t = xtc_new_file_0_0(t);
  y_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_2, x_2);
  t = e_8(f_0, y_2, x_2, t);
  t = SSL_close_file(y_2);
  t = (ATerm) ATmakeAppl(sym_FILE_1, y_2);
  return(t);
}
ATerm basename_1_0 (ATerm k_93 (ATerm), ATerm t)
{
  ATerm o_3 = NULL,s_3 = NULL;
  s_3 = t;
  t = SSL_explode_string(s_3);
  {
    ATerm t_12 = t;
    int u_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_5 (ATerm t)
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
                t = d_5(t);
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
                  ATerm z_12 = t;
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
                      t = z_12;
                      {
                        ATerm k_3 = NULL,n_3 = NULL,h_1 = NULL;
                        t = SSLgetAnnotations(y_4);
                        k_3 = t;
                        t = z_4;
                        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 46)))
                          _fail(t);
                        t = a_5;
                        t = k_93(t);
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
        t = d_5(t);
        ;
        LocalPopChoice(u_12);
      }
    else
      {
        t = t_12;
      }
    o_3 = t;
    t = SSL_implode_string(o_3);
  }
  return(t);
}
ATerm at_suffix_rev_1_0 (ATerm k_84 (ATerm), ATerm t)
{
  ATerm c_6 (ATerm t)
  {
    ATerm c_13 = t;
    int d_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_5 = NULL,z_5 = NULL,b_6 = NULL,i_4 = NULL,s_4 = NULL,l_1 = NULL;
        y_5 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            z_5 = ATgetFirst((ATermList) t);
            b_6 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(y_5);
        i_4 = t;
        t = b_6;
        t = c_6(t);
        s_4 = t;
        t = (ATerm) ATinsert(CheckATermList(s_4), z_5);
        l_1 = t;
        t = SSLsetAnnotations(l_1, i_4);
        ;
        LocalPopChoice(d_13);
      }
    else
      {
        t = c_13;
        t = k_84(t);
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
ATerm map_1_0 (ATerm m_83 (ATerm), ATerm t)
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
        ATerm u_5 = NULL,e_6 = NULL,f_6 = NULL,q_1 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            a_7 = ATgetFirst((ATermList) t);
            b_7 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(z_6);
        u_5 = t;
        t = a_7;
        t = m_83(t);
        e_6 = t;
        t = b_7;
        t = c_7(t);
        f_6 = t;
        t = (ATerm) ATinsert(CheckATermList(f_6), e_6);
        q_1 = t;
        t = SSLsetAnnotations(q_1, u_5);
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
  ATerm k_13 = t;
  int m_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_7 = NULL;
      p_7 = t;
      t = SSL_is_string(p_7);
      ;
      LocalPopChoice(m_13);
    }
  else
    {
      t = k_13;
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
              ATerm b_9 = NULL,c_9 = NULL,d_9 = NULL;
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
                          d_9 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = c_9;
                      t = eval_config_0_0(t);
                      u_9 = t;
                      t = d_9;
                      t = eval_config_0_0(t);
                      v_9 = t;
                      t = (ATerm) ATmakeAppl(sym__2, u_9, v_9);
                      t = u_8(u_9, v_9, t);
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
  ATerm d_10 = NULL,g_10 = NULL;
  d_10 = t;
  t = term_r_13;
  g_10 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_13, d_10);
  t = q_9(g_10, d_10, t);
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
        t = SSL_table_put(m_10, d_10, l_10);
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
  ATerm u_13 = t;
  if((PushChoice() == 0))
    {
      ATerm u_10 = NULL,w_10 = NULL,y_10 = NULL,u_3 = NULL;
      y_10 = t;
      if(match_cons(t, sym_Imports_1))
        {
          w_10 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(y_10);
      u_10 = t;
      t = (ATerm) ATmakeAppl(sym_Imports_1, w_10);
      u_3 = t;
      t = SSLsetAnnotations(u_3, u_10);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = u_13;
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
ATerm genzip_4_0 (ATerm p_85 (ATerm), ATerm q_85 (ATerm), ATerm r_85 (ATerm), ATerm s_85 (ATerm), ATerm t)
{
  ATerm i_11 (ATerm t)
  {
    ATerm w_13 = t;
    int e_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_85(t);
        ;
        LocalPopChoice(e_14);
      }
    else
      {
        t = w_13;
        {
          ATerm z_10 = NULL,c_11 = NULL,d_11 = NULL,e_11 = NULL,g_11 = NULL,h_11 = NULL,x_3 = NULL;
          t = q_85(t);
          h_11 = t;
          if(match_cons(t, sym__2))
            {
              c_11 = ATgetArgument(t, 0);
              d_11 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(h_11);
          z_10 = t;
          t = c_11;
          t = s_85(t);
          e_11 = t;
          t = d_11;
          t = i_11(t);
          g_11 = t;
          t = (ATerm) ATmakeAppl(sym__2, e_11, g_11);
          x_3 = t;
          t = SSLsetAnnotations(x_3, z_10);
          t = r_85(t);
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
ATerm i_8 (ATerm z_127, ATerm t)
{
  t = z_127;
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
      t = v_8(o_11, t_11, t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
ATerm pass_keep_0_0 (ATerm t)
{
  ATerm w_11 = NULL,y_11 = NULL,e_12 = NULL,g_12 = NULL;
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
        t = term_o_14;
      }
    y_11 = t;
    t = term_o_14;
    g_12 = t;
    t = (ATerm) ATmakeAppl(sym__2, y_11, term_o_14);
    t = j_8(y_11, g_12, t);
    e_12 = t;
    t = SSL_int_to_string(e_12);
    w_11 = t;
    t = (ATerm) ATinsert(ATinsert(ATempty, w_11), term_j_14);
  }
  return(t);
}
ATerm j_8 (ATerm y_37, ATerm z_37, ATerm t)
{
  ATerm p_14 = t;
  int q_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(y_37, z_37);
      ;
      LocalPopChoice(q_14);
    }
  else
    {
      t = p_14;
      t = SSL_subtr(y_37, z_37);
    }
  return(t);
}
ATerm pass_verbose_0_0 (ATerm t)
{
  ATerm m_12 = NULL,p_12 = NULL,q_12 = NULL,s_12 = NULL;
  t = term_r_14;
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
        t = term_o_14;
      }
    p_12 = t;
    t = term_o_14;
    s_12 = t;
    t = (ATerm) ATmakeAppl(sym__2, p_12, term_o_14);
    t = j_8(p_12, s_12, t);
    q_12 = t;
    t = SSL_int_to_string(q_12);
    m_12 = t;
    t = (ATerm) ATinsert(ATinsert(ATempty, m_12), term_r_14);
  }
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm w_105 (ATerm), ATerm x_105 (ATerm), ATerm t)
{
  t = write_to_0_0(t);
  t = xtc_transform_file_2_0(w_105, x_105, t);
  t = read_from_0_0(t);
  return(t);
}
ATerm k_8 (ATerm t_44, ATerm u_44, ATerm t)
{
  t = SSL_execvp(t_44, u_44);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm x_13 = NULL,y_13 = NULL,z_13 = NULL,a_14 = NULL;
  x_13 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      y_13 = ATgetArgument(t, 0);
      {
        ATerm r_7 = NULL,t_7 = NULL;
        t = SSL_int_to_string(y_13);
        r_7 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_w_14), r_7), term_v_14);
        t_7 = t;
        t = SSL_concat_strings(t_7);
      }
    }
  else
    {
      ATerm i_9 = NULL,o_9 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          y_13 = ATgetArgument(t, 0);
          z_13 = ATgetArgument(t, 1);
          a_14 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(z_13);
      i_9 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, a_14), term_y_14), i_9), term_x_14), y_13);
      o_9 = t;
      t = SSL_concat_strings(o_9);
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
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_k_21), term_g_21), term_b_21), term_q_20), term_l_20), term_d_20), term_z_19), term_u_19), term_o_19), term_h_19), term_b_19), term_w_18), term_s_18), term_o_18), term_g_18), term_z_17), term_r_17), term_n_17), term_j_17), term_c_17), term_x_16), term_s_16), term_k_16), term_g_16), term_y_15), term_t_15), term_l_15), term_g_15);
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
  ATerm m_14 = NULL,c_15 = NULL;
  m_14 = t;
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
              ATerm c_10 = NULL,f_10 = NULL,h_10 = NULL;
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
                f_10 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, c_10), term_t_21);
                h_10 = t;
                t = SSL_printnl(f_10, h_10);
                t = (ATerm) ATmakeAppl(sym__2, term_s_21, (ATerm) ATinsert(ATinsert(ATempty, c_10), term_t_21));
              }
              ;
              LocalPopChoice(q_21);
            }
          else
            {
              t = p_21;
              t = m_14;
            }
        }
      }
    else
      {
        t = l_21;
        t = m_14;
      }
    t = m_14;
  }
  return(t);
}
ATerm fork_0_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_and_wait_1_0 (ATerm e_98 (ATerm), ATerm t)
{
  ATerm p_15 = NULL,s_15 = NULL;
  s_15 = t;
  t = fork_0_0(t);
  p_15 = t;
  {
    ATerm v_21 = t;
    int w_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = s_15;
        t = e_98(t);
        ;
        LocalPopChoice(w_21);
      }
    else
      {
        t = v_21;
        t = SSL_waitpid(p_15);
        t = warn_ifsignaled_0_0(t);
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm x_21 = ATgetArgument(t, 0);
            if(((ATgetType(x_21) != AT_INT) || (ATgetInt((ATermInt) x_21) != 0)))
              _fail(t);
            {
              ATerm z_21 = ATgetArgument(t, 1);
            }
            {
              ATerm a_22 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = s_15;
      }
  }
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm x_15 = NULL;
  ATerm i_1 (ATerm t)
  {
    ATerm a_16 = NULL,b_16 = NULL;
    a_16 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(x_15), a_16);
    t = q_9(not_null(x_15), a_16, t);
    b_16 = t;
    t = (ATerm) ATmakeAppl(sym__2, a_16, b_16);
    return(t);
  }
  if(((x_15 != NULL) && (x_15 != t)))
    _fail(t);
  else
    x_15 = t;
  t = SSL_table_keys(x_15);
  t = map_1_0(i_1, t);
  return(t);
}
ATerm if_verbose5_1_0 (ATerm x_97 (ATerm), ATerm t)
{
  ATerm f_16 = NULL;
  f_16 = t;
  {
    ATerm b_22 = t;
    int f_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_16 = NULL;
        t = term_r_14;
        t = get_config_0_0(t);
        l_16 = t;
        t = (ATerm) ATmakeAppl(sym__2, l_16, term_o_20);
        t = geq_0_0(t);
        t = f_16;
        t = x_97(t);
        ;
        LocalPopChoice(f_22);
      }
    else
      {
        t = b_22;
        t = f_16;
      }
  }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm w_97 (ATerm), ATerm t)
{
  ATerm o_16 = NULL;
  o_16 = t;
  {
    ATerm g_22 = t;
    int k_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_16 = NULL;
        t = term_r_14;
        t = get_config_0_0(t);
        t_16 = t;
        t = (ATerm) ATmakeAppl(sym__2, t_16, term_p_17);
        t = geq_0_0(t);
        t = o_16;
        t = w_97(t);
        ;
        LocalPopChoice(k_22);
      }
    else
      {
        t = g_22;
        t = o_16;
      }
  }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm y_97 (ATerm), ATerm t)
{
  ATerm y_16 = NULL;
  y_16 = t;
  {
    ATerm l_22 = t;
    int m_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_17 = NULL;
        t = term_r_14;
        t = get_config_0_0(t);
        f_17 = t;
        t = (ATerm) ATmakeAppl(sym__2, f_17, term_v_15);
        t = geq_0_0(t);
        t = y_16;
        t = y_97(t);
        ;
        LocalPopChoice(m_22);
      }
    else
      {
        t = l_22;
        t = y_16;
      }
  }
  return(t);
}
ATerm n_8 (ATerm q_87 (ATerm), ATerm k_26, ATerm j_26, ATerm t)
{
  ATerm d_18 (ATerm t)
  {
    ATerm w_17 = NULL,x_17 = NULL,y_17 = NULL;
    w_17 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = j_26;
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
                  t = j_26;
                  return(t);
                }
                t = y_8(q_87, j_1, x_17, y_17, t);
                t = d_18(t);
              }
              ;
              LocalPopChoice(o_22);
            }
          else
            {
              t = n_22;
              {
                ATerm p_10 = NULL,x_10 = NULL,z_3 = NULL;
                t = SSLgetAnnotations(w_17);
                p_10 = t;
                t = y_17;
                t = d_18(t);
                x_10 = t;
                t = (ATerm) ATinsert(CheckATermList(x_10), x_17);
                z_3 = t;
                t = SSLsetAnnotations(z_3, p_10);
              }
            }
        }
      }
    return(t);
  }
  t = k_26;
  t = d_18(t);
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
ATerm o_8 (ATerm m_49, ATerm n_49, ATerm o_49, ATerm t)
{
  ATerm l_18 = NULL,m_18 = NULL,n_18 = NULL;
  l_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_49, n_49);
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
        t = (ATerm) ATmakeAppl(sym__2, m_49, n_49);
        t = q_9(m_49, n_49, t);
        ;
        LocalPopChoice(q_22);
      }
    else
      {
        t = p_22;
        t = (ATerm) ATempty;
      }
    n_18 = t;
    t = (ATerm) ATmakeAppl(sym__2, n_18, o_49);
    t = n_8(k_1, n_18, o_49, t);
    m_18 = t;
    t = SSL_table_put(m_49, n_49, m_18);
    t = l_18;
  }
  return(t);
}
ATerm p_8 (ATerm b_102 (ATerm), ATerm w_49, ATerm v_49, ATerm t)
{
  ATerm m_1 (ATerm t)
  {
    ATerm j_19 = NULL,r_19 = NULL;
    if(match_cons(t, sym__2))
      {
        j_19 = ATgetArgument(t, 0);
        r_19 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, w_49, j_19, r_19);
    t = b_102(t);
    return(t);
  }
  t = v_49;
  t = map_1_0(m_1, t);
  return(t);
}
ATerm n_20 (ATerm e_20, ATerm t)
{
  t = SSL_fclose(e_20);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm h_20 = NULL,k_20 = NULL;
  k_20 = t;
  if(match_cons(t, sym_Stream_1))
    {
      h_20 = ATgetArgument(t, 0);
      {
        ATerm u_22 = t;
        int x_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(h_20);
            ;
            LocalPopChoice(x_22);
          }
        else
          {
            t = u_22;
            t = n_20(k_20, t);
          }
      }
    }
  else
    {
      t = n_20(k_20, t);
    }
  return(t);
}
ATerm q_8 (ATerm g_43, ATerm t)
{
  t = SSL_read_term_from_stream(g_43);
  return(t);
}
ATerm r_8 (ATerm h_35, ATerm i_35, ATerm t)
{
  ATerm r_20 = NULL;
  t = SSL_fopen(h_35, i_35);
  r_20 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, r_20);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm s_20 = NULL;
  t = SSL_stdin_stream();
  s_20 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, s_20);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm t_20 = NULL;
  t = SSL_stdout_stream();
  t_20 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, t_20);
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
ATerm r_23 (ATerm u_21, ATerm t)
{
  ATerm y_21 = NULL;
  t = SSL_explode_term(u_21);
  if(match_cons(t, sym__2))
    {
      ATerm y_22 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) y_22) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm c_23 = ATgetArgument(t, 1);
        if(((ATgetType(c_23) == AT_LIST) && !(ATisEmpty(c_23))))
          {
            y_21 = ATgetFirst((ATermList) c_23);
            {
              ATerm d_23 = (ATerm) ATgetNext((ATermList) c_23);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = y_21;
  if(match_cons(t, sym_stderr_0))
    {
      t = y_21;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = y_21;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = y_21;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm a_24 (ATerm c_22, ATerm d_22, ATerm e_22, ATerm t)
{
  ATerm h_22 = NULL,i_22 = NULL,j_22 = NULL,t_22 = NULL,c_4 = NULL;
  t = SSLgetAnnotations(e_22);
  j_22 = t;
  t = c_22;
  if(match_cons(t, sym_Path_1))
    {
      t_22 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, t_22, d_22);
  c_4 = t;
  t = SSLsetAnnotations(c_4, j_22);
  if(match_cons(t, sym__2))
    {
      h_22 = ATgetArgument(t, 0);
      i_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_8(h_22, i_22, t);
  return(t);
}
ATerm b_24 (ATerm v_22, ATerm w_22, ATerm z_22, ATerm t)
{
  ATerm a_23 = NULL,b_23 = NULL,f_23 = NULL,k_23 = NULL,d_4 = NULL;
  t = SSLgetAnnotations(z_22);
  f_23 = t;
  t = SSL_is_string(v_22);
  k_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_23, w_22);
  d_4 = t;
  t = SSLsetAnnotations(d_4, f_23);
  if(match_cons(t, sym__2))
    {
      a_23 = ATgetArgument(t, 0);
      b_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_8(a_23, b_23, t);
  return(t);
}
ATerm s_8 (ATerm t)
{
  ATerm m_23 = NULL,p_23 = NULL,q_23 = NULL;
  m_23 = t;
  if(match_cons(t, sym__2))
    {
      p_23 = ATgetArgument(t, 0);
      q_23 = ATgetArgument(t, 1);
      {
        ATerm e_23 = t;
        int g_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = r_23(m_23, t);
            ;
            LocalPopChoice(g_23);
          }
        else
          {
            t = e_23;
            {
              ATerm h_23 = t;
              int i_23 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = a_24(p_23, q_23, m_23, t);
                  ;
                  LocalPopChoice(i_23);
                }
              else
                {
                  t = h_23;
                  t = b_24(p_23, q_23, m_23, t);
                }
            }
          }
      }
    }
  else
    {
      t = r_23(m_23, t);
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
  ATerm c_24 = NULL,f_24 = NULL,g_24 = NULL;
  ATerm l_23 = t;
  int n_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_24 = NULL;
      i_24 = t;
      t = (ATerm) ATmakeAppl(sym__2, i_24, term_o_23);
      t = s_8(t);
      ;
      LocalPopChoice(n_23);
    }
  else
    {
      t = l_23;
      t = debug_1_0(n_1, t);
      _fail(t);
    }
  f_24 = t;
  if(match_cons(t, sym_Stream_1))
    {
      g_24 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_8(g_24, t);
  c_24 = t;
  t = f_24;
  t = fclose_0_0(t);
  t = c_24;
  return(t);
}
ATerm r_1 (ATerm t)
{
  t = term_s_23;
  return(t);
}
ATerm s_1 (ATerm t)
{
  t = term_t_23;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm u_23 = t;
  int v_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_24 = NULL,q_24 = NULL;
      p_24 = t;
      t = (ATerm) ATinsert(ATempty, term_w_23);
      q_24 = t;
      t = (ATerm) ATmakeAppl(sym__2, p_24, (ATerm) ATinsert(ATempty, term_w_23));
      t = v_8(p_24, q_24, t);
      LocalPopChoice(v_23);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = u_23;
      {
        ATerm x_23 = t;
        int y_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_23 = t;
            if((PushChoice() == 0))
              {
                ATerm r_24 = NULL,s_24 = NULL;
                r_24 = t;
                t = (ATerm) ATinsert(ATempty, term_h_14);
                s_24 = t;
                t = (ATerm) ATmakeAppl(sym__2, r_24, (ATerm) ATinsert(ATempty, term_h_14));
                t = v_8(r_24, s_24, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = z_23;
              }
            t = debug_1_0(r_1, t);
            ;
            LocalPopChoice(y_23);
          }
        else
          {
            t = x_23;
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
  t = term_d_24;
  return(t);
}
ATerm z_1 (ATerm t)
{
  t = debug_1_0(f_2, t);
  return(t);
}
ATerm f_2 (ATerm t)
{
  t = term_e_24;
  return(t);
}
ATerm g_2 (ATerm t)
{
  ATerm n_25 = NULL,o_25 = NULL,p_25 = NULL;
  n_25 = t;
  t = term_s_21;
  o_25 = t;
  t = (ATerm) ATinsert(ATempty, term_h_24);
  p_25 = t;
  t = SSL_printnl(o_25, p_25);
  t = n_25;
  return(t);
}
ATerm i_2 (ATerm t)
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
  t = o_8(q_25, r_25, s_25, t);
  return(t);
}
ATerm j_2 (ATerm t)
{
  ATerm t_25 = NULL,u_25 = NULL,w_25 = NULL;
  t_25 = t;
  t = term_s_21;
  u_25 = t;
  t = (ATerm) ATinsert(ATempty, term_j_24);
  w_25 = t;
  t = SSL_printnl(u_25, w_25);
  t = t_25;
  return(t);
}
ATerm k_2 (ATerm t)
{
  ATerm x_25 = NULL,y_25 = NULL,z_25 = NULL;
  x_25 = t;
  t = term_s_21;
  y_25 = t;
  t = (ATerm) ATinsert(ATempty, term_h_24);
  z_25 = t;
  t = SSL_printnl(y_25, z_25);
  t = x_25;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm w_24 = NULL,y_24 = NULL,b_25 = NULL,c_25 = NULL,d_25 = NULL,e_25 = NULL,f_25 = NULL,i_25 = NULL,j_25 = NULL,k_25 = NULL;
  w_24 = t;
  t = if_verbose5_1_0(x_1, t);
  {
    ATerm k_24 = t;
    if((PushChoice() == 0))
      {
        ATerm l_25 = NULL,m_25 = NULL;
        t = term_l_24;
        l_25 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, w_24);
        m_25 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_l_24, (ATerm) ATmakeAppl(sym_Imported_1, w_24));
        t = q_9(l_25, m_25, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = k_24;
      }
    b_25 = t;
    t = term_l_24;
    i_25 = t;
    t = term_m_24;
    j_25 = t;
    t = (ATerm) ATinsert(ATempty, w_24);
    k_25 = t;
    t = SSL_table_put(i_25, j_25, k_25);
    t = b_25;
    t = if_verbose4_1_0(z_1, t);
    t = read_repository_file_0_0(t);
    t = if_verbose6_1_0(g_2, t);
    y_24 = t;
    t = term_l_24;
    f_25 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_l_24, y_24);
    t = p_8(i_2, f_25, y_24, t);
    t = if_verbose6_1_0(j_2, t);
    t = term_l_24;
    c_25 = t;
    t = (ATerm) ATmakeAppl(sym_Imported_1, w_24);
    d_25 = t;
    t = (ATerm) ATempty;
    e_25 = t;
    t = SSL_table_put(c_25, d_25, e_25);
    t = (ATerm) ATmakeAppl(sym__3, term_l_24, (ATerm)ATmakeAppl(sym_Imported_1, w_24), (ATerm) ATempty);
    t = if_verbose4_1_0(k_2, t);
  }
  return(t);
}
ATerm repeat_2_0 (ATerm v_76 (ATerm), ATerm w_76 (ATerm), ATerm t)
{
  ATerm b_26 (ATerm t)
  {
    ATerm n_24 = t;
    int o_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_76(t);
        t = b_26(t);
        ;
        LocalPopChoice(o_24);
      }
    else
      {
        t = n_24;
        t = w_76(t);
      }
    return(t);
  }
  t = b_26(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm t_24 = t;
  int u_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_v_24;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(u_24);
    }
  else
    {
      t = t_24;
      {
        ATerm x_24 = t;
        int z_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_26 = NULL;
            t = term_a_25;
            e_26 = t;
            t = SSL_getenv(e_26);
            ;
            LocalPopChoice(z_24);
          }
        else
          {
            t = x_24;
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
  t = term_g_25;
  return(t);
}
ATerm n_2 (ATerm t)
{
  ATerm v_26 = NULL,x_26 = NULL;
  t = term_l_24;
  v_26 = t;
  t = term_h_25;
  x_26 = t;
  t = term_v_25;
  t = q_9(v_26, x_26, t);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm a_26 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = a_26;
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
  t = term_c_26;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm g_26 = NULL;
  t = if_verbose5_1_0(l_2, t);
  g_26 = t;
  {
    ATerm d_26 = t;
    int f_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_26 = NULL,q_26 = NULL;
        t = term_l_24;
        l_26 = t;
        t = term_m_24;
        q_26 = t;
        t = term_m_26;
        t = q_9(l_26, q_26, t);
        ;
        LocalPopChoice(f_26);
      }
    else
      {
        t = d_26;
        {
          ATerm t_26 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          t_26 = t;
          t = repeat_2_0(n_2, _id, t);
          t = t_26;
        }
      }
    t = g_26;
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
  t = term_p_26;
  return(t);
}
ATerm l_28 (ATerm e_27, ATerm t)
{
  ATerm g_27 = NULL,n_27 = NULL,o_27 = NULL;
  t = term_l_24;
  n_27 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, e_27);
  o_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_24, (ATerm) ATmakeAppl(sym_Tool_1, e_27));
  t = q_9(n_27, o_27, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm r_26 = ATgetFirst((ATermList) t);
      if(match_cons(r_26, sym__2))
        {
          ATerm u_26 = ATgetArgument(r_26, 0);
          g_27 = ATgetArgument(r_26, 1);
        }
      else
        _fail(t);
      {
        ATerm s_26 = (ATerm) ATgetNext((ATermList) t);
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
  t = term_p_26;
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
  t = term_w_26;
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm y_26 = t;
  int z_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_27 = NULL,v_27 = NULL,w_27 = NULL;
      t = if_verbose5_1_0(r_2, t);
      t = xtc_load_0_0(t);
      w_27 = t;
      if(match_cons(t, sym__2))
        {
          p_27 = ATgetArgument(t, 0);
          v_27 = ATgetArgument(t, 1);
          {
            ATerm a_27 = t;
            int b_27 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm a_28 = NULL,b_28 = NULL,c_28 = NULL;
                t = term_l_24;
                b_28 = t;
                t = (ATerm) ATmakeAppl(sym_Tool_1, p_27);
                c_28 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_l_24, (ATerm) ATmakeAppl(sym_Tool_1, p_27));
                t = q_9(b_28, c_28, t);
                {
                  ATerm e_3 (ATerm t)
                  {
                    if(match_cons(t, sym__2))
                      {
                        if((v_27 != ATgetArgument(t, 0)))
                          {
                            _fail(ATgetArgument(t, 0));
                          }
                        if(((a_28 != NULL) && (a_28 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          a_28 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = fetch_1_0(e_3, t);
                  t = not_null(a_28);
                }
                ;
                LocalPopChoice(b_27);
              }
            else
              {
                t = a_27;
                t = l_28(w_27, t);
              }
          }
        }
      else
        {
          t = l_28(w_27, t);
        }
      t = if_verbose5_1_0(f_3, t);
      ;
      LocalPopChoice(z_26);
    }
  else
    {
      t = y_26;
      {
        ATerm j_28 = NULL,b_12 = NULL,c_12 = NULL;
        j_28 = t;
        t = term_s_21;
        b_12 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_d_27), j_28), term_c_27);
        c_12 = t;
        t = SSL_printnl(b_12, c_12);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_d_27), j_28), term_c_27);
        t = if_verbose5_1_0(h_3, t);
        _fail(t);
      }
    }
  return(t);
}
ATerm xtc_command_1_0 (ATerm n_105 (ATerm), ATerm t)
{
  ATerm n_28 = NULL,o_28 = NULL;
  o_28 = t;
  t = n_105(t);
  t = xtc_find_0_0(t);
  n_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_28, o_28);
  {
    ATerm j_3 (ATerm t)
    {
      ATerm p_28 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, n_28, o_28);
      t = k_8(n_28, o_28, t);
      t = term_f_27;
      p_28 = t;
      t = SSL_exit(p_28);
      return(t);
    }
    t = fork_and_wait_1_0(j_3, t);
    t = o_28;
  }
  return(t);
}
ATerm t_8 (ATerm w_94 (ATerm), ATerm g_39, ATerm e_39, ATerm t)
{
  ATerm q_28 = NULL,t_28 = NULL,u_28 = NULL,v_28 = NULL,x_28 = NULL,y_28 = NULL;
  v_28 = t;
  t = w_94(t);
  q_28 = t;
  t = (ATerm) ATmakeAppl(sym__3, q_28, g_39, e_39);
  t = r_9(q_28, g_39, e_39, t);
  {
    ATerm h_27 = t;
    int i_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_28 = NULL;
        t = term_j_27;
        z_28 = t;
        t = (ATerm) ATmakeAppl(sym__2, q_28, term_j_27);
        t = q_9(q_28, z_28, t);
        ;
        LocalPopChoice(i_27);
      }
    else
      {
        t = h_27;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        t_28 = ATgetFirst((ATermList) t);
        u_28 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_j_27;
    x_28 = t;
    t = (ATerm) ATinsert(CheckATermList(u_28), (ATerm) ATinsert(CheckATermList(t_28), g_39));
    y_28 = t;
    t = SSL_table_put(q_28, x_28, y_28);
    t = v_28;
  }
  return(t);
}
ATerm s_29 (ATerm g_29, ATerm t)
{
  t = g_29;
  {
    ATerm k_27 = t;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm l_27 = ATgetArgument(t, 0);
            ATerm m_27 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = k_27;
      }
    t = term_q_27;
    t = debug_1_0(l_3, t);
    t = (ATerm) ATmakeAppl(sym__2, g_29, term_f_12);
    t = open_file_0_0(t);
  }
  return(t);
}
ATerm t_29 (ATerm i_29, ATerm j_29, ATerm m_29, ATerm t)
{
  t = SSL_open_file(i_29, j_29);
  return(t);
}
ATerm l_3 (ATerm t)
{
  t = term_r_27;
  return(t);
}
ATerm open_file_0_0 (ATerm t)
{
  ATerm p_29 = NULL,q_29 = NULL,r_29 = NULL;
  p_29 = t;
  if(match_cons(t, sym__2))
    {
      q_29 = ATgetArgument(t, 0);
      r_29 = ATgetArgument(t, 1);
      {
        ATerm s_27 = t;
        int t_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = s_29(p_29, t);
            ;
            LocalPopChoice(t_27);
          }
        else
          {
            t = s_27;
            t = t_29(q_29, r_29, p_29, t);
          }
      }
    }
  else
    {
      t = s_29(p_29, t);
    }
  return(t);
}
ATerm u_8 (ATerm z_33, ATerm a_34, ATerm t)
{
  t = SSL_strcat(z_33, a_34);
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm new_file_0_0 (ATerm t)
{
  ATerm v_29 = NULL,w_29 = NULL,x_29 = NULL;
  t = term_u_27;
  t = new_0_0(t);
  v_29 = t;
  t = term_x_27;
  w_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_29, term_x_27);
  t = u_8(v_29, w_29, t);
  x_29 = t;
  {
    ATerm y_27 = t;
    int z_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_29 = NULL;
        t = (ATerm) ATinsert(ATempty, term_h_14);
        z_29 = t;
        t = (ATerm) ATmakeAppl(sym__2, x_29, (ATerm) ATinsert(ATempty, term_h_14));
        t = v_8(x_29, z_29, t);
        t = new_file_0_0(t);
        ;
        LocalPopChoice(z_27);
      }
    else
      {
        t = y_27;
        t = x_29;
      }
  }
  return(t);
}
ATerm m_3 (ATerm t)
{
  t = term_d_28;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm c_30 = NULL,d_30 = NULL;
  t = new_file_0_0(t);
  c_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_30, term_f_12);
  t = open_file_0_0(t);
  t = term_u_27;
  d_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_30, term_u_27);
  t = t_8(m_3, c_30, d_30, t);
  t = c_30;
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm m_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm p_30 = NULL,q_30 = NULL;
  p_30 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm h_12 = NULL,i_12 = NULL;
      t = p_30;
      t = xtc_new_file_0_0(t);
      h_12 = t;
      t = n_0(t);
      i_12 = t;
      t = (ATerm) ATmakeAppl(sym__2, i_12, (ATerm) ATinsert(ATinsert(ATempty, h_12), term_r_11));
      t = conc_0_0(t);
      t = xtc_command_1_0(m_0, t);
      t = SSL_close_file(h_12);
      t = (ATerm) ATmakeAppl(sym_FILE_1, h_12);
    }
  else
    {
      ATerm o_12 = NULL,r_12 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          q_30 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = q_30;
      t = xtc_new_file_0_0(t);
      o_12 = t;
      t = n_0(t);
      r_12 = t;
      t = (ATerm) ATmakeAppl(sym__2, r_12, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, o_12), term_r_11), q_30), term_e_28));
      t = conc_0_0(t);
      t = xtc_command_1_0(m_0, t);
      t = SSL_close_file(o_12);
      t = (ATerm) ATmakeAppl(sym_FILE_1, o_12);
    }
  return(t);
}
ATerm f_33 (ATerm z_30, ATerm a_31, ATerm c_31, ATerm t)
{
  ATerm e_31 = NULL,j_31 = NULL,v_12 = NULL,w_12 = NULL,h_4 = NULL;
  t = SSLgetAnnotations(c_31);
  e_31 = t;
  t = z_30;
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
    j_31 = t;
    t = (ATerm) ATmakeAppl(sym__2, j_31, a_31);
    h_4 = t;
    t = SSLsetAnnotations(h_4, e_31);
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
              ATerm k_28 = (ATerm) ATgetNext((ATermList) h_28);
              if(((ATgetType(k_28) == AT_LIST) && !(ATisEmpty(k_28))))
                {
                  v_12 = ATgetFirst((ATermList) k_28);
                  {
                    ATerm m_28 = (ATerm) ATgetNext((ATermList) k_28);
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
      ATerm r_28 = t;
      int s_28 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm w_28 = t;
          int a_29 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm b_32 = NULL;
              if(match_cons(t, sym_FILE_1))
                {
                  b_32 = ATgetArgument(t, 0);
                  {
                    ATerm a_13 = NULL,j_4 = NULL;
                    t = SSLgetAnnotations(v_12);
                    a_13 = t;
                    t = (ATerm) ATmakeAppl(sym_FILE_1, b_32);
                    j_4 = t;
                    t = SSLsetAnnotations(j_4, a_13);
                  }
                }
              else
                {
                  if(!(match_cons(t, sym_stdin_0)))
                    _fail(t);
                  t = v_12;
                }
              LocalPopChoice(a_29);
              t = xtc_transform_file_2_0(p_3, q_3, t);
            }
          else
            {
              t = w_28;
              t = xtc_transform_term_2_0(r_3, t_3, t);
            }
          t = read_from_0_0(t);
          ;
          LocalPopChoice(s_28);
        }
      else
        {
          t = r_28;
          {
            ATerm r_32 = NULL,s_32 = NULL,t_32 = NULL;
            t = term_s_21;
            s_32 = t;
            t = (ATerm) ATinsert(ATinsert(ATempty, a_31), term_b_29);
            t_32 = t;
            t = SSL_printnl(s_32, t_32);
            t = term_o_14;
            r_32 = t;
            t = SSL_exit(r_32);
            t = (ATerm) ATinsert(ATinsert(ATempty, a_31), term_b_29);
          }
        }
    }
  }
  return(t);
}
ATerm g_33 (ATerm v_32, ATerm x_32, ATerm t)
{
  ATerm l_13 = NULL;
  t = SSL_explode_term(x_32);
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
                l_13 = ATgetFirst((ATermList) f_29);
                {
                  ATerm h_29 = (ATerm) ATgetNext((ATermList) f_29);
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
  t = l_13;
  {
    ATerm k_29 = t;
    int l_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = read_from_0_0(t);
        ;
        LocalPopChoice(l_29);
      }
    else
      {
        t = k_29;
        {
          ATerm z_32 = NULL,a_33 = NULL,b_33 = NULL;
          t = term_s_21;
          a_33 = t;
          t = (ATerm) ATinsert(ATinsert(ATempty, v_32), term_b_29);
          b_33 = t;
          t = SSL_printnl(a_33, b_33);
          t = term_o_14;
          z_32 = t;
          t = SSL_exit(z_32);
          t = (ATerm) ATinsert(ATinsert(ATempty, v_32), term_b_29);
        }
      }
  }
  return(t);
}
ATerm p_3 (ATerm t)
{
  t = term_n_29;
  return(t);
}
ATerm q_3 (ATerm t)
{
  ATerm d_32 = NULL,g_32 = NULL,h_32 = NULL,i_32 = NULL,j_32 = NULL;
  j_32 = t;
  t = pass_verbose_0_0(t);
  d_32 = t;
  t = j_32;
  t = pass_keep_0_0(t);
  g_32 = t;
  t = term_o_29;
  {
    ATerm u_29 = t;
    int y_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        LocalPopChoice(y_29);
        t = (ATerm) ATinsert(ATempty, term_o_29);
      }
    else
      {
        t = u_29;
        t = (ATerm) ATempty;
      }
    h_32 = t;
    t = term_a_30;
    t = get_config_0_0(t);
    i_32 = t;
    t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, i_32), g_32), d_32), h_32);
    t = concat_0_0(t);
  }
  return(t);
}
ATerm r_3 (ATerm t)
{
  t = term_n_29;
  return(t);
}
ATerm t_3 (ATerm t)
{
  ATerm k_32 = NULL,l_32 = NULL,m_32 = NULL,n_32 = NULL,o_32 = NULL;
  o_32 = t;
  t = pass_verbose_0_0(t);
  k_32 = t;
  t = o_32;
  t = pass_keep_0_0(t);
  l_32 = t;
  t = term_o_29;
  {
    ATerm b_30 = t;
    int e_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        LocalPopChoice(e_30);
        t = (ATerm) ATinsert(ATempty, term_o_29);
      }
    else
      {
        t = b_30;
        t = (ATerm) ATempty;
      }
    m_32 = t;
    t = term_a_30;
    t = get_config_0_0(t);
    n_32 = t;
    t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, n_32), l_32), k_32), m_32);
    t = concat_0_0(t);
  }
  return(t);
}
ATerm parse_module_0_0 (ATerm t)
{
  ATerm c_33 = NULL,d_33 = NULL,e_33 = NULL;
  c_33 = t;
  if(match_cons(t, sym__2))
    {
      d_33 = ATgetArgument(t, 0);
      e_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_33;
  if(match_string(t, "rtree"))
    {
      ATerm f_30 = t;
      int g_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = f_33(d_33, e_33, c_33, t);
          ;
          LocalPopChoice(g_30);
        }
      else
        {
          t = f_30;
          t = g_33(e_33, c_33, t);
        }
    }
  else
    {
      t = f_33(d_33, e_33, c_33, t);
    }
  return(t);
}
ATerm debug_1_0 (ATerm h_96 (ATerm), ATerm t)
{
  ATerm i_33 = NULL,j_33 = NULL,m_33 = NULL,n_33 = NULL;
  i_33 = t;
  t = h_96(t);
  j_33 = t;
  t = term_s_21;
  m_33 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, i_33), j_33);
  n_33 = t;
  t = SSL_printnl(m_33, n_33);
  t = i_33;
  return(t);
}
ATerm if_verbose3_1_0 (ATerm v_97 (ATerm), ATerm t)
{
  ATerm p_33 = NULL;
  p_33 = t;
  {
    ATerm h_30 = t;
    int i_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_33 = NULL;
        t = term_r_14;
        t = get_config_0_0(t);
        r_33 = t;
        t = (ATerm) ATmakeAppl(sym__2, r_33, term_q_15);
        t = geq_0_0(t);
        t = p_33;
        t = v_97(t);
        ;
        LocalPopChoice(i_30);
      }
    else
      {
        t = h_30;
        t = p_33;
      }
  }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm y_83 (ATerm), ATerm t)
{
  ATerm t_33 = NULL;
  ATerm v_3 (ATerm t)
  {
    t = y_83(t);
    if(((t_33 != NULL) && (t_33 != t)))
      _fail(t);
    else
      t_33 = t;
    return(t);
  }
  t = fetch_1_0(v_3, t);
  t = not_null(t_33);
  return(t);
}
ATerm v_8 (ATerm z_34, ATerm a_35, ATerm t)
{
  t = SSL_access(z_34, a_35);
  return(t);
}
ATerm is_relpath_0_0 (ATerm t)
{
  ATerm j_30 = t;
  if((PushChoice() == 0))
    {
      ATerm u_33 = NULL;
      u_33 = t;
      t = SSL_explode_string(u_33);
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
      t = u_33;
      PopChoice();
      _fail(t);
    }
  else
    {
      t = j_30;
    }
  return(t);
}
ATerm w_8 (ATerm b_76 (ATerm), ATerm n_19, ATerm m_19, ATerm t)
{
  t = b_76(t);
  {
    ATerm m_30 = t;
    int n_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_3 (ATerm t)
        {
          ATerm f_34 = NULL;
          f_34 = t;
          {
            ATerm o_30 = t;
            int r_30 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm y_3 (ATerm t)
                {
                  ATerm h_34 = NULL,j_34 = NULL,k_34 = NULL,l_34 = NULL,p_34 = NULL;
                  j_34 = t;
                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, j_34), term_a_12), n_19), term_s_30), f_34);
                  p_34 = t;
                  t = SSL_concat_strings(p_34);
                  k_34 = t;
                  t = (ATerm) ATinsert(ATempty, term_h_14);
                  l_34 = t;
                  t = (ATerm) ATmakeAppl(sym__2, k_34, (ATerm) ATinsert(ATempty, term_h_14));
                  t = v_8(k_34, l_34, t);
                  h_34 = t;
                  t = (ATerm) ATmakeAppl(sym__2, j_34, (ATerm) ATmakeAppl(sym_FILE_1, h_34));
                  return(t);
                }
                t = n_19;
                t = is_relpath_0_0(t);
                t = m_19;
                t = fetch_elem_1_0(y_3, t);
                ;
                LocalPopChoice(r_30);
              }
            else
              {
                t = o_30;
                {
                  ATerm a_4 (ATerm t)
                  {
                    ATerm v_13 = NULL,b_14 = NULL,c_14 = NULL,d_14 = NULL,f_14 = NULL;
                    b_14 = t;
                    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, b_14), term_a_12), n_19);
                    f_14 = t;
                    t = SSL_concat_strings(f_14);
                    c_14 = t;
                    t = (ATerm) ATinsert(ATempty, term_h_14);
                    d_14 = t;
                    t = (ATerm) ATmakeAppl(sym__2, c_14, (ATerm) ATinsert(ATempty, term_h_14));
                    t = v_8(c_14, d_14, t);
                    v_13 = t;
                    t = (ATerm) ATmakeAppl(sym__2, b_14, (ATerm) ATmakeAppl(sym_FILE_1, v_13));
                    return(t);
                  }
                  t = SSL_explode_string(n_19);
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
                  t = m_19;
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
                ATerm q_34 = NULL,r_34 = NULL,s_34 = NULL,t_34 = NULL,u_34 = NULL,v_34 = NULL;
                q_34 = t;
                t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, q_34), term_a_12), n_19);
                v_34 = t;
                t = SSL_concat_strings(v_34);
                r_34 = t;
                t = term_l_24;
                t_34 = t;
                t = (ATerm) ATmakeAppl(sym_Tool_1, r_34);
                u_34 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_l_24, (ATerm) ATmakeAppl(sym_Tool_1, r_34));
                t = q_9(t_34, u_34, t);
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    ATerm x_30 = ATgetFirst((ATermList) t);
                    if(match_cons(x_30, sym__2))
                      {
                        ATerm b_31 = ATgetArgument(x_30, 0);
                        s_34 = ATgetArgument(x_30, 1);
                      }
                    else
                      _fail(t);
                    {
                      ATerm y_30 = (ATerm) ATgetNext((ATermList) t);
                    }
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym__2, q_34, (ATerm) ATmakeAppl(sym_FILE_1, s_34));
                return(t);
              }
              t = m_19;
              t = fetch_elem_1_0(b_4, t);
              ;
              LocalPopChoice(w_30);
            }
          else
            {
              t = v_30;
              {
                ATerm d_31 = t;
                int f_31 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_g_31;
                    t = get_config_0_0(t);
                    LocalPopChoice(f_31);
                    {
                      ATerm w_34 = NULL,x_34 = NULL,y_34 = NULL,b_35 = NULL,c_35 = NULL;
                      w_34 = t;
                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_i_31), n_19), term_h_31);
                      c_35 = t;
                      t = SSL_concat_strings(c_35);
                      x_34 = t;
                      t = term_s_21;
                      y_34 = t;
                      t = (ATerm) ATinsert(ATempty, x_34);
                      b_35 = t;
                      t = SSL_printnl(y_34, b_35);
                      t = w_34;
                      _fail(t);
                    }
                  }
                else
                  {
                    t = d_31;
                    {
                      ATerm d_35 = NULL,e_35 = NULL,l_35 = NULL;
                      t = term_s_21;
                      e_35 = t;
                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_i_31), n_19), term_h_31);
                      l_35 = t;
                      t = SSL_printnl(e_35, l_35);
                      t = term_o_14;
                      d_35 = t;
                      t = SSL_exit(d_35);
                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_i_31), n_19), term_h_31);
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
  t = term_k_31;
  return(t);
}
ATerm get_module_1_0 (ATerm a_76 (ATerm), ATerm t)
{
  ATerm q_35 = NULL,r_35 = NULL,s_35 = NULL,t_35 = NULL;
  t = basename_1_0(_id, t);
  s_35 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_o_23), term_n_31), term_m_31), term_l_31);
  t_35 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_35, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_o_23), term_n_31), term_m_31), term_l_31));
  t = w_8(a_76, s_35, t_35, t);
  if(match_cons(t, sym__2))
    {
      ATerm o_31 = ATgetArgument(t, 0);
      ATerm p_31 = ATgetArgument(t, 1);
      if(match_cons(p_31, sym_FILE_1))
        {
          q_35 = ATgetArgument(p_31, 0);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  {
    ATerm e_4 (ATerm t)
    {
      ATerm v_35 = NULL;
      v_35 = t;
      t = q_35;
      t = debug_1_0(f_4, t);
      t = v_35;
      return(t);
    }
    t = if_verbose3_1_0(e_4, t);
    t = parse_module_0_0(t);
    r_35 = t;
    t = (ATerm) ATmakeAppl(sym__2, q_35, r_35);
  }
  return(t);
}
ATerm y_8 (ATerm t_87 (ATerm), ATerm u_87 (ATerm), ATerm o_26, ATerm n_26, ATerm t)
{
  t = u_87(t);
  {
    ATerm g_4 (ATerm t)
    {
      ATerm w_35 = NULL;
      w_35 = t;
      t = (ATerm) ATmakeAppl(sym__2, o_26, w_35);
      t = t_87(t);
      return(t);
    }
    t = fetch_1_0(g_4, t);
    t = n_26;
  }
  return(t);
}
ATerm z_8 (ATerm l_87 (ATerm), ATerm i_26, ATerm h_26, ATerm t)
{
  ATerm s_36 (ATerm t)
  {
    ATerm n_36 = NULL,o_36 = NULL,p_36 = NULL;
    n_36 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = n_36;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            o_36 = ATgetFirst((ATermList) t);
            p_36 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm q_31 = t;
          int r_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = n_36;
              {
                ATerm k_4 (ATerm t)
                {
                  t = h_26;
                  return(t);
                }
                t = y_8(l_87, k_4, o_36, p_36, t);
                t = s_36(t);
              }
              ;
              LocalPopChoice(r_31);
            }
          else
            {
              t = q_31;
              {
                ATerm n_14 = NULL,s_14 = NULL,n_4 = NULL;
                t = SSLgetAnnotations(n_36);
                n_14 = t;
                t = p_36;
                t = s_36(t);
                s_14 = t;
                t = (ATerm) ATinsert(CheckATermList(s_14), o_36);
                n_4 = t;
                t = SSLsetAnnotations(n_4, n_14);
              }
            }
        }
      }
    return(t);
  }
  t = i_26;
  t = s_36(t);
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
  ATerm c_37 = NULL,d_37 = NULL,e_37 = NULL,l_37 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm u_31 = ATgetArgument(t, 0);
      if(((ATgetType(u_31) == AT_LIST) && !(ATisEmpty(u_31))))
        {
          c_37 = ATgetFirst((ATermList) u_31);
          d_37 = (ATerm) ATgetNext((ATermList) u_31);
        }
      else
        _fail(t);
      {
        ATerm v_31 = ATgetArgument(t, 1);
        if(((ATgetType(v_31) == AT_LIST) && !(ATisEmpty(v_31))))
          {
            e_37 = ATgetFirst((ATermList) v_31);
            l_37 = (ATerm) ATgetNext((ATermList) v_31);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, c_37, e_37), (ATerm) ATmakeAppl(sym__2, d_37, l_37));
  return(t);
}
ATerm o_4 (ATerm t)
{
  ATerm m_37 = NULL,n_37 = NULL;
  if(match_cons(t, sym__2))
    {
      m_37 = ATgetArgument(t, 0);
      n_37 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(n_37), m_37);
  return(t);
}
ATerm e_9 (ATerm k_573, ATerm p_573, ATerm b_53, ATerm t)
{
  ATerm v_36 = NULL,w_36 = NULL,x_36 = NULL,y_36 = NULL;
  t = SSL_explode_term(p_573);
  if(match_cons(t, sym__2))
    {
      v_36 = ATgetArgument(t, 0);
      x_36 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(k_573);
  if(match_cons(t, sym__2))
    {
      if((v_36 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      w_36 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, w_36, x_36);
  t = genzip_4_0(l_4, m_4, o_4, _id, t);
  y_36 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_36, b_53);
  t = conc_0_0(t);
  return(t);
}
ATerm p_4 (ATerm t)
{
  ATerm c_38 = NULL;
  c_38 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, c_38);
  return(t);
}
ATerm t_4 (ATerm t)
{
  ATerm d_38 = NULL,e_38 = NULL,f_38 = NULL,g_38 = NULL,q_4 = NULL;
  g_38 = t;
  if(match_cons(t, sym__2))
    {
      e_38 = ATgetArgument(t, 0);
      f_38 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_38);
  d_38 = t;
  t = f_38;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, e_38, f_38);
  q_4 = t;
  t = SSLsetAnnotations(q_4, d_38);
  return(t);
}
ATerm u_4 (ATerm t)
{
  ATerm k_39 = NULL,l_39 = NULL,m_39 = NULL,n_39 = NULL,o_39 = NULL;
  k_39 = t;
  if(match_cons(t, sym__2))
    {
      l_39 = ATgetArgument(t, 0);
      m_39 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_39;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_39 = ATgetFirst((ATermList) t);
      o_39 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm w_31 = t;
        int x_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = y_39(l_39, m_39, k_39, t);
            ;
            LocalPopChoice(x_31);
          }
        else
          {
            t = w_31;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(l_39), n_39), o_39);
          }
      }
    }
  else
    {
      t = y_39(l_39, m_39, k_39, t);
    }
  return(t);
}
ATerm y_39 (ATerm h_38, ATerm i_38, ATerm j_38, ATerm t)
{
  ATerm k_38 = NULL,n_38 = NULL,r_4 = NULL,q_38 = NULL,r_38 = NULL,s_38 = NULL,t_38 = NULL;
  t = SSLgetAnnotations(j_38);
  k_38 = t;
  t = i_38;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_38 = ATgetFirst((ATermList) t);
      t_38 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = q_38;
  if(match_cons(t, sym__2))
    {
      r_38 = ATgetArgument(t, 0);
      s_38 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm y_31 = t;
    int z_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = s_38;
        if((r_38 != t))
          {
            _fail(t);
          }
        t = t_38;
        ;
        LocalPopChoice(z_31);
      }
    else
      {
        t = y_31;
        t = i_38;
        t = e_9(r_38, s_38, t_38, t);
      }
    n_38 = t;
    t = (ATerm) ATmakeAppl(sym__2, h_38, n_38);
    r_4 = t;
    t = SSLsetAnnotations(r_4, k_38);
  }
  return(t);
}
ATerm w_4 (ATerm t)
{
  ATerm x_39 = NULL;
  if(match_cons(t, sym__2))
    {
      x_39 = ATgetArgument(t, 0);
      if((x_39 != ATgetArgument(t, 1)))
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
  int c_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(p_4, t_4, u_4, t);
      ;
      LocalPopChoice(c_32);
    }
  else
    {
      t = a_32;
      {
        ATerm s_39 = NULL,t_39 = NULL,u_39 = NULL;
        s_39 = t;
        if(match_cons(t, sym__2))
          {
            t_39 = ATgetArgument(t, 0);
            u_39 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = s_39;
        t = z_8(w_4, t_39, u_39, t);
      }
    }
  return(t);
}
ATerm g_9 (ATerm v_106 (ATerm), ATerm w_106 (ATerm), ATerm x_106 (ATerm), ATerm s_55, ATerm p_55, ATerm w_55, ATerm t_55, ATerm q_55, ATerm r_55, ATerm t)
{
  ATerm z_39 = NULL,c_40 = NULL,d_40 = NULL,e_40 = NULL,f_40 = NULL,g_40 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, s_55, t_55);
  t = v_106(t);
  z_39 = t;
  t = w_106(t);
  c_40 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_40, w_55);
  t = diff_0_0(t);
  d_40 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_40, p_55);
  t = conc_0_0(t);
  e_40 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_40, w_55);
  t = conc_0_0(t);
  f_40 = t;
  t = (ATerm) ATmakeAppl(sym__3, s_55, z_39, q_55);
  t = x_106(t);
  g_40 = t;
  t = (ATerm) ATmakeAppl(sym__5, e_40, f_40, t_55, g_40, r_55);
  return(t);
}
ATerm GnNext_3_0 (ATerm v_106 (ATerm), ATerm w_106 (ATerm), ATerm x_106 (ATerm), ATerm t)
{
  ATerm i_40 = NULL,j_40 = NULL,k_40 = NULL,l_40 = NULL,m_40 = NULL,n_40 = NULL;
  if(match_cons(t, sym__5))
    {
      ATerm e_32 = ATgetArgument(t, 0);
      if(((ATgetType(e_32) == AT_LIST) && !(ATisEmpty(e_32))))
        {
          i_40 = ATgetFirst((ATermList) e_32);
          j_40 = (ATerm) ATgetNext((ATermList) e_32);
        }
      else
        _fail(t);
      k_40 = ATgetArgument(t, 1);
      l_40 = ATgetArgument(t, 2);
      m_40 = ATgetArgument(t, 3);
      n_40 = ATgetArgument(t, 4);
    }
  else
    _fail(t);
  t = g_9(v_106, w_106, x_106, i_40, j_40, k_40, l_40, m_40, n_40, t);
  return(t);
}
ATerm while_not_2_0 (ATerm m_77 (ATerm), ATerm n_77 (ATerm), ATerm t)
{
  ATerm o_40 (ATerm t)
  {
    ATerm f_32 = t;
    int p_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_77(t);
        ;
        LocalPopChoice(p_32);
      }
    else
      {
        t = f_32;
        t = n_77(t);
        t = o_40(t);
      }
    return(t);
  }
  t = o_40(t);
  return(t);
}
ATerm for_3_0 (ATerm p_77 (ATerm), ATerm q_77 (ATerm), ATerm r_77 (ATerm), ATerm t)
{
  t = p_77(t);
  t = while_not_2_0(q_77, r_77, t);
  return(t);
}
ATerm b_5 (ATerm t)
{
  ATerm s_40 = NULL,t_40 = NULL,u_40 = NULL;
  if(match_cons(t, sym__3))
    {
      s_40 = ATgetArgument(t, 0);
      t_40 = ATgetArgument(t, 1);
      u_40 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__5, s_40, s_40, t_40, u_40, (ATerm) ATempty);
  return(t);
}
ATerm c_5 (ATerm t)
{
  ATerm a_41 = NULL,b_41 = NULL;
  if(match_cons(t, sym__5))
    {
      ATerm q_32 = ATgetArgument(t, 0);
      if(((ATgetType(q_32) != AT_LIST) || !(ATisEmpty(q_32))))
        _fail(t);
      {
        ATerm u_32 = ATgetArgument(t, 1);
      }
      {
        ATerm w_32 = ATgetArgument(t, 2);
      }
      a_41 = ATgetArgument(t, 3);
      b_41 = ATgetArgument(t, 4);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, a_41, b_41);
  return(t);
}
ATerm graph_nodes_roots_3_0 (ATerm s_106 (ATerm), ATerm t_106 (ATerm), ATerm u_106 (ATerm), ATerm t)
{
  ATerm r_40 = NULL;
  ATerm e_5 (ATerm t)
  {
    ATerm y_32 = t;
    int h_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = GnNext_3_0(s_106, t_106, u_106, t);
        ;
        LocalPopChoice(h_33);
      }
    else
      {
        t = y_32;
        {
          ATerm d_41 = NULL,e_41 = NULL,j_41 = NULL,k_41 = NULL,l_41 = NULL,m_41 = NULL,n_41 = NULL;
          if(match_cons(t, sym__5))
            {
              d_41 = ATgetArgument(t, 0);
              k_41 = ATgetArgument(t, 1);
              l_41 = ATgetArgument(t, 2);
              m_41 = ATgetArgument(t, 3);
              n_41 = ATgetArgument(t, 4);
            }
          else
            _fail(t);
          t = d_41;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              e_41 = ATgetFirst((ATermList) t);
              j_41 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__5, j_41, k_41, l_41, m_41, (ATerm) ATinsert(CheckATermList(n_41), e_41));
        }
      }
    return(t);
  }
  t = for_3_0(b_5, c_5, e_5, t);
  if(match_cons(t, sym__2))
    {
      r_40 = ATgetArgument(t, 0);
      {
        ATerm k_33 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = r_40;
  return(t);
}
ATerm filter_1_0 (ATerm t_90 (ATerm), ATerm t)
{
  ATerm l_42 = NULL,o_42 = NULL,p_42 = NULL;
  l_42 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = l_42;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          o_42 = ATgetFirst((ATermList) t);
          p_42 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm l_33 = t;
        int o_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_15 = NULL,n_15 = NULL,o_15 = NULL,v_4 = NULL;
            t = SSLgetAnnotations(l_42);
            h_15 = t;
            t = o_42;
            t = t_90(t);
            n_15 = t;
            t = p_42;
            t = filter_1_0(t_90, t);
            o_15 = t;
            t = (ATerm) ATinsert(CheckATermList(o_15), n_15);
            v_4 = t;
            t = SSLsetAnnotations(v_4, h_15);
            ;
            LocalPopChoice(o_33);
          }
        else
          {
            t = l_33;
            t = p_42;
            t = filter_1_0(t_90, t);
          }
      }
    }
  return(t);
}
ATerm f_5 (ATerm t)
{
  ATerm q_33 = t;
  if((PushChoice() == 0))
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-I", 0, ATtrue)))
        _fail(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = q_33;
    }
  return(t);
}
ATerm i_5 (ATerm t)
{
  ATerm p_43 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm s_33 = ATgetArgument(t, 0);
      ATerm v_33 = ATgetArgument(t, 1);
      if(match_cons(v_33, sym_Specification_1))
        {
          p_43 = ATgetArgument(v_33, 0);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  t = i_8(p_43, t);
  return(t);
}
ATerm j_5 (ATerm t)
{
  ATerm q_43 = NULL,r_43 = NULL;
  if(match_cons(t, sym__3))
    {
      ATerm w_33 = ATgetArgument(t, 0);
      q_43 = ATgetArgument(t, 1);
      r_43 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(r_43), q_43);
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
  ATerm s_43 = NULL,t_43 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_43 = ATgetFirst((ATermList) t);
      t_43 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, s_43, t_43);
  return(t);
}
ATerm p_5 (ATerm t)
{
  ATerm u_43 = NULL,v_43 = NULL,w_43 = NULL,y_43 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm y_33 = ATgetArgument(t, 0);
      if(match_cons(y_33, sym__2))
        {
          u_43 = ATgetArgument(y_33, 0);
          v_43 = ATgetArgument(y_33, 1);
        }
      else
        _fail(t);
      {
        ATerm b_34 = ATgetArgument(t, 1);
        if(match_cons(b_34, sym__2))
          {
            w_43 = ATgetArgument(b_34, 0);
            y_43 = ATgetArgument(b_34, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(w_43), u_43), (ATerm) ATinsert(CheckATermList(y_43), v_43));
  return(t);
}
ATerm j_9 (ATerm d_19, ATerm t)
{
  ATerm w_42 = NULL,x_42 = NULL,y_42 = NULL,z_42 = NULL,l_43 = NULL,m_43 = NULL,x_4 = NULL;
  ATerm c_34 = t;
  int d_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_a_30;
      t = get_config_0_0(t);
      t = filter_1_0(f_5, t);
      ;
      LocalPopChoice(d_34);
    }
  else
    {
      t = c_34;
      t = (ATerm) ATempty;
    }
  w_42 = t;
  t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATinsert(ATinsert(ATinsert(ATempty, d_19), term_g_34), term_e_34), term_u_27, (ATerm) ATempty);
  {
    ATerm h_5 (ATerm t)
    {
      ATerm n_43 = NULL,o_43 = NULL;
      ATerm k_5 (ATerm t)
      {
        t = (ATerm) ATinsert(CheckATermList(w_42), term_a_12);
        return(t);
      }
      o_43 = t;
      t = SSL_explode_term(o_43);
      if(match_cons(t, sym__2))
        {
          ATerm i_34 = ATgetArgument(t, 0);
          if((ATgetSymbol((ATermAppl) i_34) != ATmakeSymbol("", 0, ATtrue)))
            _fail(t);
          {
            ATerm m_34 = ATgetArgument(t, 1);
            if(((ATgetType(m_34) == AT_LIST) && !(ATisEmpty(m_34))))
              {
                n_43 = ATgetFirst((ATermList) m_34);
                {
                  ATerm n_34 = (ATerm) ATgetNext((ATermList) m_34);
                }
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = n_43;
      t = get_module_1_0(k_5, t);
      return(t);
    }
    t = graph_nodes_roots_3_0(h_5, i_5, j_5, t);
    t = genzip_4_0(m_5, o_5, p_5, _id, t);
    m_43 = t;
    if(match_cons(t, sym__2))
      {
        y_42 = ATgetArgument(t, 0);
        z_42 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(m_43);
    x_42 = t;
    t = z_42;
    t = flatten_stratego_0_0(t);
    l_43 = t;
    t = (ATerm) ATmakeAppl(sym__2, y_42, l_43);
    x_4 = t;
    t = SSLsetAnnotations(x_4, x_42);
  }
  return(t);
}
ATerm l_9 (ATerm a_40, ATerm b_40, ATerm t)
{
  t = SSL_copy(a_40, b_40);
  return(t);
}
ATerm copy_to_1_0 (ATerm l_0 (ATerm), ATerm t)
{
  ATerm h_45 = NULL,i_45 = NULL;
  h_45 = t;
  if(match_cons(t, sym_FILE_1))
    {
      i_45 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm o_34 = t;
    int j_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_16 = NULL;
        t = h_45;
        t = l_0(t);
        c_16 = t;
        if(match_cons(t, sym_stdout_0))
          {
            t = c_16;
          }
        else
          {
            if(!(match_cons(t, sym_stderr_0)))
              _fail(t);
            t = c_16;
          }
        t = (ATerm) ATmakeAppl(sym__2, i_45, c_16);
        t = l_9(i_45, c_16, t);
        t = (ATerm) ATmakeAppl(sym_FILE_1, i_45);
        ;
        LocalPopChoice(j_35);
      }
    else
      {
        t = o_34;
        {
          ATerm k_35 = t;
          int m_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm n_16 = NULL;
              t = h_45;
              t = l_0(t);
              n_16 = t;
              {
                ATerm n_35 = t;
                if((PushChoice() == 0))
                  {
                    ATerm q_16 = NULL;
                    q_16 = t;
                    if(match_cons(t, sym_stdout_0))
                      {
                        t = q_16;
                      }
                    else
                      {
                        if(match_cons(t, sym_stderr_0))
                          {
                            t = q_16;
                          }
                        else
                          {
                            t = q_16;
                            if((i_45 != t))
                              {
                                _fail(t);
                              }
                            t = q_16;
                          }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = n_35;
                  }
                t = (ATerm) ATmakeAppl(sym__2, i_45, n_16);
                t = l_9(i_45, n_16, t);
                t = (ATerm) ATmakeAppl(sym_FILE_1, i_45);
              }
              ;
              LocalPopChoice(m_35);
            }
          else
            {
              t = k_35;
              t = h_45;
              t = l_0(t);
              if((i_45 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, i_45);
            }
        }
      }
  }
  return(t);
}
ATerm m_9 (ATerm u_48, ATerm v_48, ATerm t)
{
  ATerm m_45 = NULL,n_45 = NULL;
  n_45 = t;
  {
    ATerm o_35 = t;
    int p_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, u_48, v_48);
        t = q_9(u_48, v_48, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm u_35 = ATgetFirst((ATermList) t);
            m_45 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(p_35);
        t = SSL_table_put(u_48, v_48, m_45);
        t = (ATerm) ATmakeAppl(sym__3, u_48, v_48, m_45);
      }
    else
      {
        t = o_35;
        t = SSL_table_remove(u_48, v_48);
        t = (ATerm) ATmakeAppl(sym__2, u_48, v_48);
      }
    t = n_45;
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm t_94 (ATerm), ATerm t)
{
  ATerm o_45 = NULL,p_45 = NULL,q_45 = NULL,s_45 = NULL,u_45 = NULL;
  s_45 = t;
  t = t_94(t);
  q_45 = t;
  {
    ATerm x_35 = t;
    int y_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_45 = NULL;
        t = term_j_27;
        v_45 = t;
        t = (ATerm) ATmakeAppl(sym__2, q_45, term_j_27);
        t = q_9(q_45, v_45, t);
        ;
        LocalPopChoice(y_35);
      }
    else
      {
        t = x_35;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        p_45 = ATgetFirst((ATermList) t);
        o_45 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_j_27;
    u_45 = t;
    t = SSL_table_put(q_45, u_45, o_45);
    t = p_45;
    {
      ATerm r_5 (ATerm t)
      {
        ATerm w_45 = NULL;
        w_45 = t;
        t = (ATerm) ATmakeAppl(sym__2, q_45, w_45);
        t = m_9(q_45, w_45, t);
        return(t);
      }
      t = map_1_0(r_5, t);
      t = s_45;
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm r_76 (ATerm), ATerm s_76 (ATerm), ATerm t)
{
  ATerm z_35 = t;
  int a_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = r_76(t);
      t = s_76(t);
      ;
      LocalPopChoice(a_36);
    }
  else
    {
      t = z_35;
      t = s_76(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm s_94 (ATerm), ATerm t)
{
  ATerm y_45 = NULL,a_46 = NULL,d_46 = NULL,g_46 = NULL,i_46 = NULL;
  a_46 = t;
  t = s_94(t);
  y_45 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_45, term_j_27);
  {
    ATerm b_36 = t;
    int c_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_46 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm d_36 = ATgetArgument(t, 0);
            ATerm e_36 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_j_27;
        t_46 = t;
        t = (ATerm) ATmakeAppl(sym__2, y_45, term_j_27);
        t = q_9(y_45, t_46, t);
        ;
        LocalPopChoice(c_36);
      }
    else
      {
        t = b_36;
        t = (ATerm) ATempty;
      }
    d_46 = t;
    t = term_j_27;
    g_46 = t;
    t = (ATerm) ATinsert(CheckATermList(d_46), (ATerm) ATempty);
    i_46 = t;
    t = SSL_table_put(y_45, g_46, i_46);
    t = a_46;
  }
  return(t);
}
ATerm t_5 (ATerm t)
{
  t = term_d_28;
  return(t);
}
ATerm w_5 (ATerm t)
{
  ATerm g_47 = NULL;
  g_47 = t;
  {
    ATerm f_36 = t;
    int g_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(g_47);
        ;
        LocalPopChoice(g_36);
      }
    else
      {
        t = f_36;
        t = g_47;
      }
  }
  return(t);
}
ATerm x_5 (ATerm t)
{
  t = term_d_28;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm z_104 (ATerm), ATerm t)
{
  ATerm x_46 = NULL;
  ATerm v_5 (ATerm t)
  {
    ATerm y_46 = NULL;
    y_46 = t;
    {
      ATerm h_36 = t;
      int i_36 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm b_47 = NULL,d_47 = NULL;
          t = term_d_28;
          b_47 = t;
          t = term_j_27;
          d_47 = t;
          t = term_j_36;
          t = q_9(b_47, d_47, t);
          ;
          LocalPopChoice(i_36);
        }
      else
        {
          t = h_36;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
        }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          if(((x_46 != NULL) && (x_46 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            x_46 = ATgetFirst((ATermList) t);
          {
            ATerm k_36 = (ATerm) ATgetNext((ATermList) t);
          }
        }
      else
        _fail(t);
      t = x_46;
      t = map_1_0(w_5, t);
      t = y_46;
      t = end_scope_1_0(x_5, t);
    }
    return(t);
  }
  t = begin_scope_1_0(t_5, t);
  t = restore_always_2_0(z_104, v_5, t);
  return(t);
}
ATerm j_6 (ATerm t)
{
  ATerm l_36 = t;
  int m_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_r_11;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(m_36);
    }
  else
    {
      t = l_36;
      t = term_q_36;
    }
  return(t);
}
ATerm xtc_io_1_0 (ATerm a_105 (ATerm), ATerm t)
{
  ATerm a_6 (ATerm t)
  {
    ATerm r_36 = t;
    int t_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_47 = NULL;
        t = term_e_28;
        t = get_config_0_0(t);
        l_47 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, l_47);
        ;
        LocalPopChoice(t_36);
      }
    else
      {
        t = r_36;
        t = term_g_14;
      }
    t = a_105(t);
    t = copy_to_1_0(j_6, t);
    return(t);
  }
  t = xtc_temp_files_1_0(a_6, t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm m_47 = NULL,n_47 = NULL,p_47 = NULL,q_47 = NULL,t_47 = NULL;
  m_47 = t;
  t = term_u_27;
  t = whoami_0_0(t);
  n_47 = t;
  t = term_s_21;
  q_47 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_z_36), n_47), term_u_36);
  t_47 = t;
  t = SSL_printnl(q_47, t_47);
  t = term_o_14;
  p_47 = t;
  t = SSL_exit(p_47);
  t = m_47;
  return(t);
}
ATerm k_6 (ATerm t)
{
  ATerm v_47 = NULL;
  v_47 = t;
  if(match_string(t, "-k"))
    {
      t = v_47;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = v_47;
    }
  return(t);
}
ATerm l_6 (ATerm t)
{
  ATerm f_48 = NULL,g_48 = NULL,h_48 = NULL;
  f_48 = t;
  t = SSL_string_to_int(f_48);
  g_48 = t;
  t = term_j_14;
  h_48 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_14, g_48);
  t = t_9(h_48, g_48, t);
  t = f_48;
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
  ATerm j_48 = NULL;
  j_48 = t;
  if(match_string(t, "-S"))
    {
      t = j_48;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = j_48;
    }
  return(t);
}
ATerm o_6 (ATerm t)
{
  ATerm k_48 = NULL,l_48 = NULL;
  t = term_r_14;
  k_48 = t;
  t = term_b_37;
  l_48 = t;
  t = term_f_37;
  t = t_9(k_48, l_48, t);
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
  ATerm n_48 = NULL,w_48 = NULL,x_48 = NULL;
  n_48 = t;
  t = SSL_string_to_int(n_48);
  w_48 = t;
  t = term_r_14;
  x_48 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_14, w_48);
  t = t_9(x_48, w_48, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, n_48);
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
  ATerm y_48 = NULL,z_48 = NULL;
  t = term_j_37;
  y_48 = t;
  t = term_u_27;
  z_48 = t;
  t = term_k_37;
  t = t_9(y_48, z_48, t);
  t = term_o_37;
  return(t);
}
ATerm x_6 (ATerm t)
{
  t = term_p_37;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm q_37 = t;
  int r_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(n_6, o_6, p_6, t);
      ;
      LocalPopChoice(r_37);
    }
  else
    {
      t = q_37;
      {
        ATerm u_37 = t;
        int v_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(r_6, t_6, u_6, t);
            ;
            LocalPopChoice(v_37);
          }
        else
          {
            t = u_37;
            t = Option_3_0(v_6, w_6, x_6, t);
          }
      }
    }
  return(t);
}
ATerm t_9 (ATerm u_56, ATerm v_56, ATerm t)
{
  ATerm a_49 = NULL;
  t = term_r_13;
  a_49 = t;
  t = SSL_table_put(a_49, u_56, v_56);
  t = (ATerm) ATmakeAppl(sym__3, term_r_13, u_56, v_56);
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm f_49 = NULL,g_49 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm j_49 = NULL,k_49 = NULL,l_49 = NULL;
      t = term_u_27;
      t = e_0(t);
      j_49 = t;
      t = term_w_37;
      k_49 = t;
      t = term_x_37;
      l_49 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_w_37, term_x_37, j_49);
      t = r_9(k_49, l_49, j_49, t);
      _fail(t);
    }
  else
    {
      ATerm u_49 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          f_49 = ATgetFirst((ATermList) t);
          g_49 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = f_49;
      t = c_0(t);
      t = term_u_27;
      t = d_0(t);
      u_49 = t;
      t = (ATerm) ATinsert(CheckATermList(g_49), u_49);
    }
  return(t);
}
ATerm y_6 (ATerm t)
{
  ATerm a_50 = NULL;
  a_50 = t;
  if(match_string(t, "-o"))
    {
      t = a_50;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = a_50;
    }
  return(t);
}
ATerm d_7 (ATerm t)
{
  ATerm b_50 = NULL,c_50 = NULL;
  b_50 = t;
  t = term_r_11;
  c_50 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_11, b_50);
  t = t_9(c_50, b_50, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, b_50);
  return(t);
}
ATerm e_7 (ATerm t)
{
  t = term_a_38;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(y_6, d_7, e_7, t);
  return(t);
}
ATerm f_7 (ATerm t)
{
  ATerm e_50 = NULL;
  e_50 = t;
  if(match_string(t, "-i"))
    {
      t = e_50;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = e_50;
    }
  return(t);
}
ATerm g_7 (ATerm t)
{
  ATerm f_50 = NULL,i_50 = NULL;
  f_50 = t;
  t = term_e_28;
  i_50 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_28, f_50);
  t = t_9(i_50, f_50, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, f_50);
  return(t);
}
ATerm h_7 (ATerm t)
{
  t = term_b_38;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(f_7, g_7, h_7, t);
  return(t);
}
ATerm r_9 (ATerm p_48, ATerm q_48, ATerm o_48, ATerm t)
{
  ATerm k_50 = NULL,l_50 = NULL,m_50 = NULL;
  k_50 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_48, q_48);
  {
    ATerm l_38 = t;
    int m_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm o_38 = ATgetArgument(t, 0);
            ATerm p_38 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, p_48, q_48);
        t = q_9(p_48, q_48, t);
        ;
        LocalPopChoice(m_38);
      }
    else
      {
        t = l_38;
        t = (ATerm) ATempty;
      }
    l_50 = t;
    t = (ATerm) ATinsert(CheckATermList(l_50), o_48);
    m_50 = t;
    t = SSL_table_put(p_48, q_48, m_50);
    t = k_50;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm t)
{
  ATerm v_50 = NULL,w_50 = NULL,x_50 = NULL,y_50 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm z_50 = NULL,a_51 = NULL,b_51 = NULL;
      t = term_u_27;
      t = k_0(t);
      z_50 = t;
      t = term_w_37;
      a_51 = t;
      t = term_x_37;
      b_51 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_w_37, term_x_37, z_50);
      t = r_9(a_51, b_51, z_50, t);
      _fail(t);
    }
  else
    {
      ATerm f_51 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_50 = ATgetFirst((ATermList) t);
          w_50 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = w_50;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_50 = ATgetFirst((ATermList) t);
          y_50 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = v_50;
      t = i_0(t);
      t = x_50;
      t = j_0(t);
      f_51 = t;
      t = (ATerm) ATinsert(CheckATermList(y_50), f_51);
    }
  return(t);
}
ATerm at_end_1_0 (ATerm c_84 (ATerm), ATerm t)
{
  ATerm l_52 (ATerm t)
  {
    ATerm i_52 = NULL,j_52 = NULL,k_52 = NULL;
    k_52 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        i_52 = ATgetFirst((ATermList) t);
        j_52 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm d_17 = NULL,i_17 = NULL,g_5 = NULL;
          t = SSLgetAnnotations(k_52);
          d_17 = t;
          t = j_52;
          t = l_52(t);
          i_17 = t;
          t = (ATerm) ATinsert(CheckATermList(i_17), i_52);
          g_5 = t;
          t = SSLsetAnnotations(g_5, d_17);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = k_52;
        t = c_84(t);
      }
    return(t);
  }
  t = l_52(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm h_51 = NULL,j_51 = NULL,k_51 = NULL;
  h_51 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = h_51;
    }
  else
    {
      ATerm i_7 (ATerm t)
      {
        t = not_null(k_51);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          j_51 = ATgetFirst((ATermList) t);
          if(((k_51 != NULL) && (k_51 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            k_51 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = j_51;
      t = at_end_1_0(i_7, t);
    }
  return(t);
}
ATerm d_53 (ATerm q_52, ATerm t)
{
  ATerm r_52 = NULL;
  t = SSL_explode_term(q_52);
  if(match_cons(t, sym__2))
    {
      ATerm u_38 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) u_38) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      r_52 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_52;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm t_52 = NULL,u_52 = NULL,w_52 = NULL;
  w_52 = t;
  if(match_cons(t, sym__2))
    {
      t_52 = ATgetArgument(t, 0);
      u_52 = ATgetArgument(t, 1);
      {
        ATerm v_38 = t;
        int w_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_7 (ATerm t)
            {
              t = u_52;
              return(t);
            }
            t = t_52;
            t = at_end_1_0(j_7, t);
            ;
            LocalPopChoice(w_38);
          }
        else
          {
            t = v_38;
            t = d_53(w_52, t);
          }
      }
    }
  else
    {
      t = d_53(w_52, t);
    }
  return(t);
}
ATerm k_9 (ATerm a_57, ATerm z_56, ATerm t)
{
  ATerm e_53 = NULL,f_53 = NULL,h_53 = NULL;
  t = a_57;
  {
    ATerm x_38 = t;
    int y_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        ;
        LocalPopChoice(y_38);
      }
    else
      {
        t = x_38;
        t = (ATerm) ATempty;
      }
    f_53 = t;
    t = (ATerm) ATmakeAppl(sym__2, z_56, f_53);
    t = conc_0_0(t);
    e_53 = t;
    t = term_r_13;
    h_53 = t;
    t = SSL_table_put(h_53, a_57, e_53);
    t = (ATerm) ATmakeAppl(sym__3, term_r_13, a_57, e_53);
  }
  return(t);
}
ATerm k_7 (ATerm t)
{
  ATerm n_53 = NULL;
  n_53 = t;
  if(match_string(t, "-I"))
    {
      t = n_53;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--Include", 0, ATtrue)))
        _fail(t);
      t = n_53;
    }
  return(t);
}
ATerm l_7 (ATerm t)
{
  ATerm q_53 = NULL,x_53 = NULL,y_53 = NULL;
  q_53 = t;
  t = term_a_30;
  x_53 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, q_53), term_a_30);
  y_53 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_30, (ATerm) ATinsert(ATinsert(ATempty, q_53), term_a_30));
  t = k_9(x_53, y_53, t);
  t = term_u_27;
  return(t);
}
ATerm m_7 (ATerm t)
{
  t = term_z_38;
  return(t);
}
ATerm n_7 (ATerm t)
{
  ATerm d_54 = NULL;
  d_54 = t;
  if(match_string(t, "--nodep"))
    {
      t = d_54;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-nodep", 0, ATtrue)))
        _fail(t);
      t = d_54;
    }
  return(t);
}
ATerm o_7 (ATerm t)
{
  ATerm e_54 = NULL,g_54 = NULL;
  t = term_z_11;
  e_54 = t;
  t = term_a_39;
  g_54 = t;
  t = term_b_39;
  t = t_9(e_54, g_54, t);
  t = term_u_27;
  return(t);
}
ATerm q_7 (ATerm t)
{
  t = term_c_39;
  return(t);
}
ATerm s_7 (ATerm t)
{
  ATerm h_54 = NULL;
  h_54 = t;
  if(match_string(t, "--dep"))
    {
      t = h_54;
    }
  else
    {
      if(match_string(t, "-d"))
        {
          t = h_54;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-dep", 0, ATtrue)))
            _fail(t);
          t = h_54;
        }
    }
  return(t);
}
ATerm u_7 (ATerm t)
{
  ATerm n_54 = NULL,t_54 = NULL;
  n_54 = t;
  t = term_v_11;
  t_54 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_11, n_54);
  t = t_9(t_54, n_54, t);
  t = term_u_27;
  return(t);
}
ATerm v_7 (ATerm t)
{
  t = term_d_39;
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
  ATerm u_54 = NULL,v_54 = NULL;
  t = term_f_39;
  u_54 = t;
  t = term_u_27;
  v_54 = t;
  t = term_h_39;
  t = t_9(u_54, v_54, t);
  t = term_u_27;
  return(t);
}
ATerm y_7 (ATerm t)
{
  t = term_i_39;
  return(t);
}
ATerm b_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--slack", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm f_8 (ATerm t)
{
  ATerm w_54 = NULL,x_54 = NULL;
  t = term_g_31;
  w_54 = t;
  t = term_u_27;
  x_54 = t;
  t = term_j_39;
  t = t_9(w_54, x_54, t);
  t = term_u_27;
  return(t);
}
ATerm g_8 (ATerm t)
{
  t = term_p_39;
  return(t);
}
ATerm h_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--asfix", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm l_8 (ATerm t)
{
  ATerm y_54 = NULL,z_54 = NULL;
  t = term_o_29;
  y_54 = t;
  t = term_a_39;
  z_54 = t;
  t = term_q_39;
  t = t_9(y_54, z_54, t);
  t = term_u_27;
  return(t);
}
ATerm m_8 (ATerm t)
{
  t = term_r_39;
  return(t);
}
ATerm pack_stratego_options_0_0 (ATerm t)
{
  ATerm v_39 = t;
  int w_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ArgOption_3_0(k_7, l_7, m_7, t);
      ;
      LocalPopChoice(w_39);
    }
  else
    {
      t = v_39;
      {
        ATerm h_40 = t;
        int p_40 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Option_3_0(n_7, o_7, q_7, t);
            ;
            LocalPopChoice(p_40);
          }
        else
          {
            t = h_40;
            {
              ATerm q_40 = t;
              int v_40 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = ArgOption_3_0(s_7, u_7, v_7, t);
                  ;
                  LocalPopChoice(v_40);
                }
              else
                {
                  t = q_40;
                  {
                    ATerm w_40 = t;
                    int x_40 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Option_3_0(w_7, x_7, y_7, t);
                        ;
                        LocalPopChoice(x_40);
                      }
                    else
                      {
                        t = w_40;
                        {
                          ATerm y_40 = t;
                          int z_40 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Option_3_0(b_8, f_8, g_8, t);
                              ;
                              LocalPopChoice(z_40);
                            }
                          else
                            {
                              t = y_40;
                              t = Option_3_0(h_8, l_8, m_8, t);
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
  ATerm c_55 = NULL,f_55 = NULL,g_55 = NULL,i_55 = NULL;
  t = report_run_time_0_0(t);
  t = term_u_27;
  t = whoami_0_0(t);
  c_55 = t;
  t = term_s_21;
  g_55 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_c_41), c_55);
  i_55 = t;
  t = SSL_printnl(g_55, i_55);
  t = term_o_14;
  f_55 = t;
  t = SSL_exit(f_55);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_f_41;
  t = get_config_0_0(t);
  return(t);
}
ATerm n_9 (ATerm s_37, ATerm t_37, ATerm t)
{
  ATerm g_41 = t;
  int h_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(s_37, t_37);
      ;
      LocalPopChoice(h_41);
    }
  else
    {
      t = g_41;
      t = SSL_addr(s_37, t_37);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm p_89 (ATerm), ATerm q_89 (ATerm), ATerm t)
{
  ATerm k_55 = NULL,m_55 = NULL,n_55 = NULL;
  k_55 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = k_55;
      t = p_89(t);
    }
  else
    {
      ATerm a_56 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_55 = ATgetFirst((ATermList) t);
          n_55 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = n_55;
      t = foldr_2_0(p_89, q_89, t);
      a_56 = t;
      t = (ATerm) ATmakeAppl(sym__2, m_55, a_56);
      t = q_89(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm x_8 (ATerm t)
{
  t = term_b_37;
  return(t);
}
ATerm a_9 (ATerm t)
{
  ATerm f_18 = NULL,h_18 = NULL;
  if(match_cons(t, sym__2))
    {
      f_18 = ATgetArgument(t, 0);
      h_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_9(f_18, h_18, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm i_56 = NULL,u_17 = NULL,b_18 = NULL;
  t = times_0_0(t);
  b_18 = t;
  t = SSL_explode_term(b_18);
  if(match_cons(t, sym__2))
    {
      ATerm i_41 = ATgetArgument(t, 0);
      u_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_17;
  t = foldr_2_0(x_8, a_9, t);
  i_56 = t;
  t = SSL_TicksToSeconds(i_56);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm w_56 = NULL,x_56 = NULL,y_56 = NULL;
  w_56 = t;
  if(match_cons(t, sym__2))
    {
      x_56 = ATgetArgument(t, 0);
      y_56 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm o_41 = t;
    int p_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_56;
        if((x_56 != t))
          {
            _fail(t);
          }
        t = w_56;
        ;
        LocalPopChoice(p_41);
      }
    else
      {
        t = o_41;
        t = (ATerm) ATmakeAppl(sym__2, x_56, y_56);
        {
          ATerm q_41 = t;
          int r_41 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(x_56, y_56);
              ;
              LocalPopChoice(r_41);
            }
          else
            {
              t = q_41;
              t = SSL_gtr(x_56, y_56);
            }
          t = (ATerm) ATmakeAppl(sym__2, x_56, y_56);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm t_97 (ATerm), ATerm t)
{
  ATerm j_57 = NULL;
  j_57 = t;
  {
    ATerm s_41 = t;
    int t_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_57 = NULL;
        t = term_r_14;
        t = get_config_0_0(t);
        l_57 = t;
        t = (ATerm) ATmakeAppl(sym__2, l_57, term_o_14);
        t = geq_0_0(t);
        t = j_57;
        t = t_97(t);
        ;
        LocalPopChoice(t_41);
      }
    else
      {
        t = s_41;
        t = j_57;
      }
  }
  return(t);
}
ATerm f_9 (ATerm t)
{
  ATerm n_57 = NULL,o_57 = NULL,q_57 = NULL,r_57 = NULL;
  t = run_time_0_0(t);
  n_57 = t;
  t = term_u_27;
  t = whoami_0_0(t);
  o_57 = t;
  t = term_s_21;
  q_57 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_u_41), n_57), term_x_14), o_57);
  r_57 = t;
  t = SSL_printnl(q_57, r_57);
  t = (ATerm) ATmakeAppl(sym__2, term_s_21, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_u_41), n_57), term_x_14), o_57));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(f_9, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm s_57 = NULL;
  t = report_run_time_0_0(t);
  t = term_b_37;
  s_57 = t;
  t = SSL_exit(s_57);
  return(t);
}
ATerm h_9 (ATerm t)
{
  ATerm d_58 = NULL,e_58 = NULL;
  e_58 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = e_58;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          d_58 = ATgetArgument(t, 0);
          {
            ATerm x_18 = NULL,l_5 = NULL;
            t = SSLgetAnnotations(e_58);
            x_18 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, d_58);
            l_5 = t;
            t = SSLsetAnnotations(l_5, x_18);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = e_58;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm h_99 (ATerm), ATerm t)
{
  ATerm v_41 = t;
  int w_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_x_41;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(w_41);
    }
  else
    {
      t = v_41;
      t = fetch_1_0(h_9, t);
    }
  t = h_99(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t)
{
  ATerm h_58 = NULL,i_58 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_58 = ATgetFirst((ATermList) t);
      i_58 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm m_58 = NULL,n_58 = NULL;
        ATerm p_9 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(m_58)), not_null(n_58));
          return(t);
        }
        t = i_58;
        t = h_0(t);
        if(((m_58 != NULL) && (m_58 != t)))
          _fail(t);
        else
          m_58 = t;
        t = h_58;
        t = g_0(t);
        if(((n_58 != NULL) && (n_58 != t)))
          _fail(t);
        else
          n_58 = t;
        t = i_58;
        t = reverse_acc_2_0(g_0, p_9, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_u_27;
      t = h_0(t);
    }
  return(t);
}
ATerm q_9 (ATerm g_50, ATerm h_50, ATerm t)
{
  t = SSL_table_get(g_50, h_50);
  return(t);
}
ATerm s_9 (ATerm t)
{
  ATerm r_58 = NULL,s_58 = NULL,t_58 = NULL,n_5 = NULL;
  t_58 = t;
  if(match_cons(t, sym_Program_1))
    {
      s_58 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_58);
  r_58 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, s_58);
  n_5 = t;
  t = SSLsetAnnotations(n_5, r_58);
  return(t);
}
ATerm w_9 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm x_9 (ATerm t)
{
  ATerm v_58 = NULL;
  v_58 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, v_58), term_y_41);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm p_58 = NULL,q_58 = NULL;
  ATerm z_41 = t;
  int a_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_f_41;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(a_42);
    }
  else
    {
      t = z_41;
      t = fetch_1_0(s_9, t);
    }
  t = term_b_42;
  t = echo_0_0(t);
  t = term_w_37;
  p_58 = t;
  t = term_x_37;
  q_58 = t;
  t = term_c_42;
  t = q_9(p_58, q_58, t);
  t = reverse_acc_2_0(_id, w_9, t);
  t = map_1_0(x_9, t);
  return(t);
}
ATerm fetch_1_0 (ATerm w_83 (ATerm), ATerm t)
{
  ATerm s_59 (ATerm t)
  {
    ATerm p_59 = NULL,q_59 = NULL,r_59 = NULL;
    p_59 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        q_59 = ATgetFirst((ATermList) t);
        r_59 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm d_42 = t;
      int e_42 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm k_19 = NULL,p_19 = NULL,q_5 = NULL;
          t = SSLgetAnnotations(p_59);
          k_19 = t;
          t = q_59;
          t = w_83(t);
          p_19 = t;
          t = (ATerm) ATinsert(CheckATermList(r_59), p_19);
          q_5 = t;
          t = SSLsetAnnotations(q_5, k_19);
          ;
          LocalPopChoice(e_42);
        }
      else
        {
          t = d_42;
          {
            ATerm y_19 = NULL,j_20 = NULL,s_5 = NULL;
            t = SSLgetAnnotations(p_59);
            y_19 = t;
            t = r_59;
            t = s_59(t);
            j_20 = t;
            t = (ATerm) ATinsert(CheckATermList(j_20), q_59);
            s_5 = t;
            t = SSLsetAnnotations(s_5, y_19);
          }
        }
    }
    return(t);
  }
  t = s_59(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm w_59 = NULL,x_59 = NULL,y_59 = NULL;
  w_59 = t;
  {
    ATerm f_42 = t;
    int g_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = w_59;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm h_42 = ATgetFirst((ATermList) t);
                ATerm i_42 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = w_59;
          }
        ;
        LocalPopChoice(g_42);
      }
    else
      {
        t = f_42;
        t = (ATerm) ATinsert(ATempty, w_59);
      }
    x_59 = t;
    t = term_q_36;
    y_59 = t;
    t = SSL_printnl(y_59, x_59);
    t = w_59;
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
  ATerm c_60 = NULL,d_60 = NULL;
  t = term_j_42;
  c_60 = t;
  t = term_u_27;
  d_60 = t;
  t = term_k_42;
  t = t_9(c_60, d_60, t);
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
ATerm e_10 (ATerm t)
{
  ATerm e_60 = NULL,f_60 = NULL,g_60 = NULL,h_60 = NULL;
  t = term_j_42;
  g_60 = t;
  t = term_u_27;
  h_60 = t;
  t = term_k_42;
  t = t_9(g_60, h_60, t);
  t = term_n_42;
  e_60 = t;
  t = term_u_27;
  f_60 = t;
  t = term_q_42;
  t = t_9(e_60, f_60, t);
  t = term_r_42;
  return(t);
}
ATerm i_10 (ATerm t)
{
  t = term_s_42;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm t_42 = t;
  int u_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(y_9, z_9, a_10, t);
      ;
      LocalPopChoice(u_42);
    }
  else
    {
      t = t_42;
      t = Option_3_0(b_10, e_10, i_10, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm y_61 (ATerm), ATerm z_61 (ATerm), ATerm t)
{
  ATerm i_60 = NULL,j_60 = NULL,k_60 = NULL,l_60 = NULL,m_60 = NULL,n_60 = NULL,d_6 = NULL;
  n_60 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      j_60 = ATgetFirst((ATermList) t);
      k_60 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_60);
  i_60 = t;
  t = j_60;
  t = y_61(t);
  l_60 = t;
  t = k_60;
  t = z_61(t);
  m_60 = t;
  t = (ATerm) ATinsert(CheckATermList(m_60), l_60);
  d_6 = t;
  t = SSLsetAnnotations(d_6, i_60);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm y_101 (ATerm), ATerm t)
{
  ATerm s_60 = NULL,t_60 = NULL,u_60 = NULL,v_60 = NULL,x_60 = NULL,y_60 = NULL,q_6 = NULL;
  s_60 = t;
  {
    ATerm v_42 = t;
    int c_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_d_43;
        t = y_101(t);
        ;
        LocalPopChoice(c_43);
      }
    else
      {
        t = v_42;
      }
    t = s_60;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        u_60 = ATgetFirst((ATermList) t);
        v_60 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(s_60);
    t_60 = t;
    t = term_f_41;
    y_60 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_f_41, u_60);
    t = t_9(y_60, u_60, t);
    t = v_60;
    {
      ATerm i_61 (ATerm t)
      {
        ATerm h_43 = t;
        int j_43 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_43 = t;
            int x_43 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm b_61 = NULL;
                b_61 = t;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = b_61;
                ;
                LocalPopChoice(x_43);
              }
            else
              {
                t = k_43;
                t = y_101(t);
                t = Cons_2_0(_id, i_61, t);
              }
            ;
            LocalPopChoice(j_43);
          }
        else
          {
            t = h_43;
            {
              ATerm e_61 = NULL,f_61 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  e_61 = ATgetFirst((ATermList) t);
                  f_61 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(f_61), (ATerm) ATmakeAppl(sym_Undefined_1, e_61));
            }
          }
        return(t);
      }
      t = i_61(t);
      x_60 = t;
      t = (ATerm) ATinsert(CheckATermList(x_60), (ATerm) ATmakeAppl(sym_Program_1, u_60));
      q_6 = t;
      t = SSLsetAnnotations(q_6, t_60);
    }
  }
  return(t);
}
ATerm k_10 (ATerm t)
{
  ATerm u_61 = NULL;
  u_61 = t;
  if(match_string(t, "--help"))
    {
      t = u_61;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = u_61;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = u_61;
        }
    }
  return(t);
}
ATerm n_10 (ATerm t)
{
  ATerm v_61 = NULL,w_61 = NULL;
  t = term_x_41;
  v_61 = t;
  t = term_u_27;
  w_61 = t;
  t = term_z_43;
  t = t_9(v_61, w_61, t);
  t = term_a_44;
  return(t);
}
ATerm o_10 (ATerm t)
{
  t = term_b_44;
  return(t);
}
ATerm q_10 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm x_101 (ATerm), ATerm t)
{
  ATerm n_61 = NULL,o_61 = NULL,p_61 = NULL,q_61 = NULL,r_61 = NULL,s_61 = NULL,t_61 = NULL;
  p_61 = t;
  t = term_w_37;
  r_61 = t;
  t = term_x_37;
  s_61 = t;
  t = (ATerm) ATempty;
  t_61 = t;
  t = SSL_table_put(r_61, s_61, t_61);
  t = p_61;
  {
    ATerm j_10 (ATerm t)
    {
      ATerm c_44 = t;
      int d_44 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = x_101(t);
          ;
          LocalPopChoice(d_44);
        }
      else
        {
          t = c_44;
          {
            ATerm e_44 = t;
            int f_44 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(k_10, n_10, o_10, t);
                ;
                LocalPopChoice(f_44);
              }
            else
              {
                t = e_44;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(j_10, t);
    {
      ATerm g_44 = t;
      int h_44 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm f_62 = NULL;
          f_62 = t;
          {
            ATerm i_44 = t;
            int j_44 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm w_20 = NULL;
                t = f_62;
                {
                  ATerm k_44 = t;
                  int l_44 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_x_41;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(l_44);
                    }
                  else
                    {
                      t = k_44;
                      t = fetch_1_0(q_10, t);
                    }
                  t = f_62;
                  t = default_system_usage_0_0(t);
                  t = term_b_37;
                  w_20 = t;
                  t = SSL_exit(w_20);
                }
                ;
                LocalPopChoice(j_44);
              }
            else
              {
                t = i_44;
                {
                  ATerm d_21 = NULL;
                  t = term_j_42;
                  t = get_config_0_0(t);
                  t = f_62;
                  t = default_system_about_0_0(t);
                  t = term_b_37;
                  d_21 = t;
                  t = SSL_exit(d_21);
                }
              }
          }
          ;
          LocalPopChoice(h_44);
        }
      else
        {
          t = g_44;
          {
            ATerm m_44 = t;
            int n_44 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm g_62 = NULL,h_62 = NULL,i_62 = NULL;
                ATerm r_10 (ATerm t)
                {
                  ATerm j_62 = NULL,k_62 = NULL,l_62 = NULL,s_6 = NULL;
                  l_62 = t;
                  if(match_cons(t, sym_Undefined_1))
                    {
                      k_62 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(l_62);
                  j_62 = t;
                  t = k_62;
                  if(((n_61 != NULL) && (n_61 != t)))
                    _fail(t);
                  else
                    n_61 = t;
                  t = (ATerm) ATmakeAppl(sym_Undefined_1, k_62);
                  s_6 = t;
                  t = SSLsetAnnotations(s_6, j_62);
                  return(t);
                }
                t = fetch_1_0(r_10, t);
                t = term_s_21;
                h_62 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(n_61)), term_o_44);
                i_62 = t;
                t = SSL_printnl(h_62, i_62);
                t = (ATerm) ATmakeAppl(sym__2, term_s_21, (ATerm) ATinsert(ATinsert(ATempty, not_null(n_61)), term_o_44));
                t = default_system_usage_0_0(t);
                t = term_o_14;
                g_62 = t;
                t = SSL_exit(g_62);
                ;
                LocalPopChoice(n_44);
              }
            else
              {
                t = m_44;
              }
          }
        }
      o_61 = t;
      t = term_w_37;
      q_61 = t;
      t = SSL_table_destroy(q_61);
      t = o_61;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm j_99 (ATerm), ATerm k_99 (ATerm), ATerm l_99 (ATerm), ATerm m_99 (ATerm), ATerm t)
{
  ATerm q_62 = NULL,r_62 = NULL,s_62 = NULL,t_62 = NULL;
  t = parse_options_1_0(j_99, t);
  q_62 = t;
  t = term_p_44;
  t_62 = t;
  t = SSL_table_create(t_62);
  t = term_p_44;
  r_62 = t;
  t = term_q_44;
  s_62 = t;
  t = SSL_table_put(r_62, s_62, q_62);
  t = q_62;
  t = l_99(t);
  {
    ATerm r_44 = t;
    int s_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(k_99, t);
        ;
        LocalPopChoice(s_44);
      }
    else
      {
        t = r_44;
        {
          ATerm v_44 = t;
          int w_44 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = m_99(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(w_44);
            }
          else
            {
              t = v_44;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm v_10 (ATerm t)
{
  ATerm x_44 = t;
  int y_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = pack_stratego_options_0_0(t);
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
            t = input_option_0_0(t);
            ;
            LocalPopChoice(a_45);
          }
        else
          {
            t = z_44;
            {
              ATerm b_45 = t;
              int c_45 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = output_option_0_0(t);
                  ;
                  LocalPopChoice(c_45);
                }
              else
                {
                  t = b_45;
                  {
                    ATerm d_45 = t;
                    int e_45 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Option_3_0(b_11, f_11, k_11, t);
                        ;
                        LocalPopChoice(e_45);
                      }
                    else
                      {
                        t = d_45;
                        {
                          ATerm f_45 = t;
                          int g_45 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = verbose_option_0_0(t);
                              ;
                              LocalPopChoice(g_45);
                            }
                          else
                            {
                              t = f_45;
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
ATerm b_11 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm f_11 (ATerm t)
{
  ATerm z_62 = NULL,a_63 = NULL;
  t = term_j_45;
  z_62 = t;
  t = term_u_27;
  a_63 = t;
  t = term_k_45;
  t = t_9(z_62, a_63, t);
  t = term_l_45;
  return(t);
}
ATerm k_11 (ATerm t)
{
  t = term_r_45;
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
  ATerm x_62 = NULL,y_62 = NULL;
  ATerm a_11 (ATerm t)
  {
    ATerm l_11 (ATerm t)
    {
      ATerm c_63 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          c_63 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = j_9(c_63, t);
      if(match_cons(t, sym__2))
        {
          if(((x_62 != NULL) && (x_62 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            x_62 = ATgetArgument(t, 0);
          if(((y_62 != NULL) && (y_62 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            y_62 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm t_45 = t;
        int x_45 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_f_39;
            t = get_config_0_0(t);
            t = x_62;
            t = map_1_0(m_11, t);
            t = write_to_text_0_0(t);
            ;
            LocalPopChoice(x_45);
          }
        else
          {
            t = t_45;
            {
              ATerm z_45 = t;
              int b_46 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = x_62;
                  t = create_dep_file_0_0(t);
                  ;
                  LocalPopChoice(b_46);
                }
              else
                {
                  t = z_45;
                }
              t = y_62;
              t = write_to_0_0(t);
            }
          }
      }
      return(t);
    }
    t = xtc_io_1_0(l_11, t);
    return(t);
  }
  t = option_wrap_4_0(v_10, default_usage_0_0, _id, a_11, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = pack_stratego_0_0(t);
  return(t);
}
