#include <srts/stratego.h>
#include <srts/stratego-lib.h>
void init_constructors (void)
{
}
Symbol sym_Nil_0;
Symbol sym_Cons_2;
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
Symbol sym__16;
Symbol sym__17;
Symbol sym__18;
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
static void init_module_constructors (void)
{
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
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
  sym__16 = ATmakeSymbol("", 16, ATfalse);
  ATprotectSymbol(sym__16);
  sym__17 = ATmakeSymbol("", 17, ATfalse);
  ATprotectSymbol(sym__17);
  sym__18 = ATmakeSymbol("", 18, ATfalse);
  ATprotectSymbol(sym__18);
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
}
ATerm term_k_45;
ATerm term_h_45;
ATerm term_g_45;
ATerm term_f_45;
ATerm term_o_44;
ATerm term_n_44;
ATerm term_m_44;
ATerm term_y_43;
ATerm term_l_43;
ATerm term_k_43;
ATerm term_b_43;
ATerm term_s_42;
ATerm term_q_42;
ATerm term_p_42;
ATerm term_o_42;
ATerm term_n_42;
ATerm term_m_42;
ATerm term_l_42;
ATerm term_d_42;
ATerm term_b_42;
ATerm term_y_41;
ATerm term_x_41;
ATerm term_u_41;
ATerm term_k_41;
ATerm term_j_41;
ATerm term_h_40;
ATerm term_g_40;
ATerm term_y_39;
ATerm term_p_39;
ATerm term_o_39;
ATerm term_k_39;
ATerm term_j_39;
ATerm term_i_39;
ATerm term_c_39;
ATerm term_b_39;
ATerm term_a_39;
ATerm term_z_38;
ATerm term_b_38;
ATerm term_a_38;
ATerm term_z_37;
ATerm term_u_37;
ATerm term_n_37;
ATerm term_l_37;
ATerm term_k_37;
ATerm term_j_37;
ATerm term_i_37;
ATerm term_h_37;
ATerm term_g_37;
ATerm term_e_37;
ATerm term_d_37;
ATerm term_c_37;
ATerm term_y_36;
ATerm term_w_36;
ATerm term_n_36;
ATerm term_f_36;
ATerm term_d_34;
ATerm term_t_31;
ATerm term_s_31;
ATerm term_r_31;
ATerm term_q_31;
ATerm term_o_31;
ATerm term_n_31;
ATerm term_k_31;
ATerm term_y_30;
ATerm term_f_30;
ATerm term_x_29;
ATerm term_t_29;
ATerm term_h_29;
ATerm term_e_28;
ATerm term_d_28;
ATerm term_x_27;
ATerm term_w_27;
ATerm term_t_27;
ATerm term_s_27;
ATerm term_l_27;
ATerm term_e_27;
ATerm term_d_27;
ATerm term_c_27;
ATerm term_t_26;
ATerm term_l_26;
ATerm term_j_26;
ATerm term_f_26;
ATerm term_b_26;
ATerm term_a_26;
ATerm term_y_25;
ATerm term_t_25;
ATerm term_y_24;
ATerm term_s_24;
ATerm term_r_24;
ATerm term_k_24;
ATerm term_j_24;
ATerm term_h_24;
ATerm term_g_24;
ATerm term_b_24;
ATerm term_y_23;
ATerm term_u_23;
ATerm term_t_23;
ATerm term_q_23;
ATerm term_v_21;
ATerm term_s_21;
ATerm term_h_21;
ATerm term_g_21;
ATerm term_f_21;
ATerm term_d_21;
ATerm term_b_21;
ATerm term_a_21;
ATerm term_z_20;
ATerm term_x_20;
ATerm term_w_20;
ATerm term_v_20;
ATerm term_t_20;
ATerm term_s_20;
ATerm term_r_20;
ATerm term_p_20;
ATerm term_o_20;
ATerm term_n_20;
ATerm term_l_20;
ATerm term_k_20;
ATerm term_g_20;
ATerm term_e_20;
ATerm term_c_20;
ATerm term_a_20;
ATerm term_z_19;
ATerm term_y_19;
ATerm term_w_19;
ATerm term_v_19;
ATerm term_u_19;
ATerm term_t_19;
ATerm term_r_19;
ATerm term_q_19;
ATerm term_o_19;
ATerm term_m_19;
ATerm term_l_19;
ATerm term_k_19;
ATerm term_j_19;
ATerm term_i_19;
ATerm term_h_19;
ATerm term_g_19;
ATerm term_f_19;
ATerm term_b_19;
ATerm term_a_19;
ATerm term_z_18;
ATerm term_y_18;
ATerm term_w_18;
ATerm term_v_18;
ATerm term_t_18;
ATerm term_s_18;
ATerm term_r_18;
ATerm term_q_18;
ATerm term_p_18;
ATerm term_o_18;
ATerm term_l_18;
ATerm term_k_18;
ATerm term_j_18;
ATerm term_i_18;
ATerm term_h_18;
ATerm term_d_18;
ATerm term_c_18;
ATerm term_b_18;
ATerm term_a_18;
ATerm term_w_17;
ATerm term_v_17;
ATerm term_t_17;
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
ATerm term_f_17;
ATerm term_e_17;
ATerm term_d_17;
ATerm term_a_17;
ATerm term_z_16;
ATerm term_y_16;
ATerm term_x_16;
ATerm term_v_16;
ATerm term_u_16;
ATerm term_t_16;
ATerm term_s_16;
ATerm term_r_16;
ATerm term_q_16;
ATerm term_n_16;
ATerm term_l_16;
ATerm term_j_16;
ATerm term_i_16;
ATerm term_h_16;
ATerm term_f_16;
ATerm term_d_16;
ATerm term_c_16;
ATerm term_y_15;
ATerm term_x_15;
ATerm term_w_15;
ATerm term_v_15;
ATerm term_t_15;
ATerm term_r_15;
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
ATerm term_i_14;
ATerm term_h_14;
ATerm term_g_14;
ATerm term_r_13;
ATerm term_j_13;
ATerm term_l_12;
ATerm term_j_12;
ATerm term_i_12;
ATerm term_d_12;
ATerm term_c_12;
ATerm term_z_11;
ATerm term_x_11;
ATerm term_v_11;
ATerm term_r_11;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--dep", 0, ATtrue));
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--nodep", 0, ATtrue));
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeAppl(ATmakeSymbol(".", 0, ATtrue));
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeAppl(ATmakeSymbol("dep", 0, ATtrue));
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeAppl(ATmakeSymbol(" \\\n	", 0, ATtrue));
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeAppl(ATmakeSymbol(" :", 0, ATtrue));
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_g_14));
  term_g_14 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
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
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_15, term_p_15, term_q_15);
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_15, term_v_15, term_w_15);
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_15, term_c_16, term_d_16);
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_l_16));
  term_l_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_16, term_i_16, term_j_16);
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_16, term_q_16, term_r_16);
  ATprotect(&(term_t_16));
  term_t_16 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_u_16));
  term_u_16 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_16, term_u_16, term_v_16);
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
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_h_17));
  term_h_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_j_17));
  term_j_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_17, term_f_17, term_h_17);
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
  ATprotect(&(term_t_17));
  term_t_17 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_v_17));
  term_v_17 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_w_17));
  term_w_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_a_18));
  term_a_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_17, term_v_17, term_w_17);
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
  ATprotect(&(term_l_18));
  term_l_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_18, term_j_18, term_k_18);
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
  ATprotect(&(term_t_18));
  term_t_18 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_v_18));
  term_v_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_w_18));
  term_w_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_18, term_t_18, term_v_18);
  ATprotect(&(term_y_18));
  term_y_18 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_z_18));
  term_z_18 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_a_19));
  term_a_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_b_19));
  term_b_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_18, term_z_18, term_a_19);
  ATprotect(&(term_f_19));
  term_f_19 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_h_19));
  term_h_19 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_i_19));
  term_i_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_19, term_g_19, term_h_19);
  ATprotect(&(term_j_19));
  term_j_19 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_k_19));
  term_k_19 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_l_19));
  term_l_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_19, term_l_12, term_k_19);
  ATprotect(&(term_m_19));
  term_m_19 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_o_19));
  term_o_19 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_q_19));
  term_q_19 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_r_19));
  term_r_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_19, term_o_19, term_q_19);
  ATprotect(&(term_t_19));
  term_t_19 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_u_19));
  term_u_19 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_v_19));
  term_v_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_w_19));
  term_w_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_19, term_u_19, term_v_19);
  ATprotect(&(term_y_19));
  term_y_19 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_z_19));
  term_z_19 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_a_20));
  term_a_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_c_20));
  term_c_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_19, term_z_19, term_a_20);
  ATprotect(&(term_e_20));
  term_e_20 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_g_20));
  term_g_20 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_k_20));
  term_k_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_l_20));
  term_l_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_20, term_g_20, term_k_20);
  ATprotect(&(term_n_20));
  term_n_20 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_o_20));
  term_o_20 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_p_20));
  term_p_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_r_20));
  term_r_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_20, term_o_20, term_p_20);
  ATprotect(&(term_s_20));
  term_s_20 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_t_20));
  term_t_20 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_v_20));
  term_v_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_w_20));
  term_w_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_20, term_t_20, term_v_20);
  ATprotect(&(term_x_20));
  term_x_20 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_z_20));
  term_z_20 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_a_21));
  term_a_21 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_b_21));
  term_b_21 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_20, term_z_20, term_a_21);
  ATprotect(&(term_d_21));
  term_d_21 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_f_21));
  term_f_21 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_g_21));
  term_g_21 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_h_21));
  term_h_21 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_21, term_f_21, term_g_21);
  ATprotect(&(term_s_21));
  term_s_21 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_v_21));
  term_v_21 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_q_23));
  term_q_23 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_t_23));
  term_t_23 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_u_23));
  term_u_23 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_y_23));
  term_y_23 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_b_24));
  term_b_24 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_g_24));
  term_g_24 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_h_24));
  term_h_24 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_j_24));
  term_j_24 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_k_24));
  term_k_24 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_r_24));
  term_r_24 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_s_24));
  term_s_24 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_y_24));
  term_y_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_t_25));
  term_t_25 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_y_25));
  term_y_25 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_a_26));
  term_a_26 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_b_26));
  term_b_26 = (ATerm) ATmakeAppl(sym__2, term_r_24, term_a_26);
  ATprotect(&(term_f_26));
  term_f_26 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_j_26));
  term_j_26 = (ATerm) ATmakeAppl(sym__2, term_r_24, term_s_24);
  ATprotect(&(term_l_26));
  term_l_26 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_t_26));
  term_t_26 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_c_27));
  term_c_27 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_d_27));
  term_d_27 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_e_27));
  term_e_27 = (ATerm) ATmakeInt(-1);
  ATprotect(&(term_l_27));
  term_l_27 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_s_27));
  term_s_27 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file> (file, mode)", 0, ATtrue));
  ATprotect(&(term_t_27));
  term_t_27 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_w_27));
  term_w_27 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_x_27));
  term_x_27 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_d_28));
  term_d_28 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_e_28));
  term_e_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_h_29));
  term_h_29 = (ATerm) ATmakeAppl(ATmakeSymbol("parse error in ", 0, ATtrue));
  ATprotect(&(term_t_29));
  term_t_29 = (ATerm) ATmakeAppl(ATmakeSymbol("parse-stratego", 0, ATtrue));
  ATprotect(&(term_x_29));
  term_x_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--asfix", 0, ATtrue));
  ATprotect(&(term_f_30));
  term_f_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue));
  ATprotect(&(term_y_30));
  term_y_30 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
  ATprotect(&(term_k_31));
  term_k_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--slack", 0, ATtrue));
  ATprotect(&(term_n_31));
  term_n_31 = (ATerm) ATmakeAppl(ATmakeSymbol("*** module ", 0, ATtrue));
  ATprotect(&(term_o_31));
  term_o_31 = (ATerm) ATmakeAppl(ATmakeSymbol(" not found", 0, ATtrue));
  ATprotect(&(term_q_31));
  term_q_31 = (ATerm) ATmakeAppl(ATmakeSymbol(" reading ", 0, ATtrue));
  ATprotect(&(term_r_31));
  term_r_31 = (ATerm) ATmakeAppl(ATmakeSymbol("rtree", 0, ATtrue));
  ATprotect(&(term_s_31));
  term_s_31 = (ATerm) ATmakeAppl(ATmakeSymbol("str", 0, ATtrue));
  ATprotect(&(term_t_31));
  term_t_31 = (ATerm) ATmakeAppl(ATmakeSymbol("cr", 0, ATtrue));
  ATprotect(&(term_d_34));
  term_d_34 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_f_36));
  term_f_36 = (ATerm) ATmakeAppl(sym__2, term_d_28, term_l_27);
  ATprotect(&(term_n_36));
  term_n_36 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_w_36));
  term_w_36 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_y_36));
  term_y_36 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_c_37));
  term_c_37 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_d_37));
  term_d_37 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_e_37));
  term_e_37 = (ATerm) ATmakeAppl(sym__2, term_s_14, term_d_37);
  ATprotect(&(term_g_37));
  term_g_37 = (ATerm) ATmakeAppl(sym_Verbose_1, term_d_37);
  ATprotect(&(term_h_37));
  term_h_37 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_i_37));
  term_i_37 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_j_37));
  term_j_37 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_k_37));
  term_k_37 = (ATerm) ATmakeAppl(sym__2, term_j_37, term_w_27);
  ATprotect(&(term_l_37));
  term_l_37 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_n_37));
  term_n_37 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_u_37));
  term_u_37 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_z_37));
  term_z_37 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_a_38));
  term_a_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_b_38));
  term_b_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_z_38));
  term_z_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-I d | --Include d   Include modules from directory d", 0, ATtrue));
  ATprotect(&(term_a_39));
  term_a_39 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_b_39));
  term_b_39 = (ATerm) ATmakeAppl(sym__2, term_x_11, term_a_39);
  ATprotect(&(term_c_39));
  term_c_39 = (ATerm) ATmakeAppl(ATmakeSymbol("--nodep              Don't create dependency file", 0, ATtrue));
  ATprotect(&(term_i_39));
  term_i_39 = (ATerm) ATmakeAppl(ATmakeSymbol("--dep f | -d f       Write dependency to file f", 0, ATtrue));
  ATprotect(&(term_j_39));
  term_j_39 = (ATerm) ATmakeAppl(ATmakeSymbol("--imports", 0, ATtrue));
  ATprotect(&(term_k_39));
  term_k_39 = (ATerm) ATmakeAppl(sym__2, term_j_39, term_w_27);
  ATprotect(&(term_o_39));
  term_o_39 = (ATerm) ATmakeAppl(ATmakeSymbol("--imports            Produce a list of imported modules only", 0, ATtrue));
  ATprotect(&(term_p_39));
  term_p_39 = (ATerm) ATmakeAppl(sym__2, term_k_31, term_w_27);
  ATprotect(&(term_y_39));
  term_y_39 = (ATerm) ATmakeAppl(ATmakeSymbol("--slack              Continue when module is not found", 0, ATtrue));
  ATprotect(&(term_g_40));
  term_g_40 = (ATerm) ATmakeAppl(sym__2, term_x_29, term_a_39);
  ATprotect(&(term_h_40));
  term_h_40 = (ATerm) ATmakeAppl(ATmakeSymbol("--asfix              Do not implode the concrete syntax parts", 0, ATtrue));
  ATprotect(&(term_j_41));
  term_j_41 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_k_41));
  term_k_41 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_u_41));
  term_u_41 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_x_41));
  term_x_41 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_y_41));
  term_y_41 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_b_42));
  term_b_42 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_d_42));
  term_d_42 = (ATerm) ATmakeAppl(sym__2, term_u_37, term_z_37);
  ATprotect(&(term_l_42));
  term_l_42 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_m_42));
  term_m_42 = (ATerm) ATmakeAppl(sym__2, term_l_42, term_w_27);
  ATprotect(&(term_n_42));
  term_n_42 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_o_42));
  term_o_42 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_p_42));
  term_p_42 = (ATerm) ATmakeAppl(sym__2, term_o_42, term_w_27);
  ATprotect(&(term_q_42));
  term_q_42 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_s_42));
  term_s_42 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_b_43));
  term_b_43 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_k_43));
  term_k_43 = (ATerm) ATmakeAppl(sym__2, term_x_41, term_w_27);
  ATprotect(&(term_l_43));
  term_l_43 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_y_43));
  term_y_43 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_m_44));
  term_m_44 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_n_44));
  term_n_44 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_o_44));
  term_o_44 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_f_45));
  term_f_45 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_g_45));
  term_g_45 = (ATerm) ATmakeAppl(sym__2, term_f_45, term_w_27);
  ATprotect(&(term_h_45));
  term_h_45 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_k_45));
  term_k_45 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
static ATerm z_7 (ATerm a_23, ATerm b_23, ATerm t);
static ATerm a_0 (ATerm t);
ATerm write_to_0_0 (ATerm t);
static ATerm a_8 (ATerm m_23, ATerm n_23, ATerm t);
ATerm create_dep_file_0_0 (ATerm t);
static ATerm c_8 (ATerm v_37, ATerm w_37, ATerm t);
static ATerm d_8 (ATerm e_23, ATerm f_23, ATerm t);
static ATerm e_8 (ATerm l_88 (ATerm), ATerm x_165, ATerm i_23, ATerm t);
static ATerm f_0 (ATerm t);
ATerm write_to_text_0_0 (ATerm t);
ATerm basename_1_0 (ATerm w_98 (ATerm), ATerm t);
ATerm at_suffix_rev_1_0 (ATerm s_89 (ATerm), ATerm t);
ATerm get_filename_0_0 (ATerm t);
ATerm map_1_0 (ATerm u_88 (ATerm), ATerm t);
static ATerm t_0 (ATerm t);
static ATerm u_0 (ATerm t);
ATerm eval_config_0_0 (ATerm t);
ATerm get_config_0_0 (ATerm t);
static ATerm z_0 (ATerm t);
static ATerm b_1 (ATerm t);
ATerm flatten_stratego_0_0 (ATerm t);
ATerm genzip_4_0 (ATerm x_90 (ATerm), ATerm y_90 (ATerm), ATerm z_90 (ATerm), ATerm a_91 (ATerm), ATerm t);
static ATerm d_1 (ATerm t);
static ATerm i_8 (ATerm r_132, ATerm t);
ATerm read_from_0_0 (ATerm t);
ATerm pass_keep_0_0 (ATerm t);
static ATerm j_8 (ATerm w_40, ATerm x_40, ATerm t);
ATerm pass_verbose_0_0 (ATerm t);
ATerm xtc_transform_term_2_0 (ATerm n_112 (ATerm), ATerm o_112 (ATerm), ATerm t);
static ATerm k_8 (ATerm d_47, ATerm e_47, ATerm t);
ATerm signal_to_descr_0_0 (ATerm t);
ATerm signal_from_number_0_0 (ATerm t);
ATerm warn_ifsignaled_0_0 (ATerm t);
ATerm fork_0_0 (ATerm t);
ATerm fork_and_wait_1_0 (ATerm u_103 (ATerm), ATerm t);
ATerm table_getlist_0_0 (ATerm t);
ATerm if_verbose5_1_0 (ATerm n_103 (ATerm), ATerm t);
ATerm if_verbose4_1_0 (ATerm m_103 (ATerm), ATerm t);
ATerm if_verbose6_1_0 (ATerm o_103 (ATerm), ATerm t);
static ATerm n_8 (ATerm y_92 (ATerm), ATerm x_28, ATerm w_28, ATerm t);
static ATerm k_1 (ATerm t);
static ATerm o_8 (ATerm w_51, ATerm x_51, ATerm y_51, ATerm t);
static ATerm p_8 (ATerm r_107 (ATerm), ATerm g_52, ATerm f_52, ATerm t);
static ATerm d_20 (ATerm p_19, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm q_8 (ATerm g_23, ATerm t);
static ATerm r_8 (ATerm x_37, ATerm y_37, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm d_24 (ATerm e_21, ATerm t);
static ATerm i_24 (ATerm t_21, ATerm u_21, ATerm x_21, ATerm t);
static ATerm l_24 (ATerm m_22, ATerm p_22, ATerm q_22, ATerm t);
static ATerm s_8 (ATerm t);
static ATerm n_1 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
static ATerm o_1 (ATerm t);
static ATerm s_1 (ATerm t);
ATerm read_repository_file_0_0 (ATerm t);
static ATerm t_1 (ATerm t);
static ATerm x_1 (ATerm t);
static ATerm y_1 (ATerm t);
static ATerm b_2 (ATerm t);
static ATerm f_2 (ATerm t);
static ATerm h_2 (ATerm t);
static ATerm i_2 (ATerm t);
static ATerm j_2 (ATerm t);
ATerm xtc_read_0_0 (ATerm t);
ATerm repeat_2_0 (ATerm i_81 (ATerm), ATerm j_81 (ATerm), ATerm t);
ATerm xtc_location_0_0 (ATerm t);
static ATerm k_2 (ATerm t);
static ATerm l_2 (ATerm t);
static ATerm m_2 (ATerm t);
static ATerm n_2 (ATerm t);
static ATerm p_2 (ATerm t);
ATerm xtc_load_0_0 (ATerm t);
static ATerm q_2 (ATerm t);
static ATerm r_2 (ATerm t);
static ATerm j_28 (ATerm f_27, ATerm t);
static ATerm f_3 (ATerm t);
static ATerm g_3 (ATerm t);
static ATerm h_3 (ATerm t);
static ATerm i_3 (ATerm t);
ATerm xtc_find_0_0 (ATerm t);
ATerm xtc_command_1_0 (ATerm e_112 (ATerm), ATerm t);
static ATerm t_8 (ATerm h_101 (ATerm), ATerm e_42, ATerm c_42, ATerm t);
static ATerm z_29 (ATerm l_29, ATerm t);
static ATerm a_30 (ATerm p_29, ATerm q_29, ATerm r_29, ATerm t);
static ATerm l_3 (ATerm t);
ATerm open_file_0_0 (ATerm t);
static ATerm u_8 (ATerm p_36, ATerm q_36, ATerm t);
ATerm new_0_0 (ATerm t);
ATerm new_file_0_0 (ATerm t);
static ATerm m_3 (ATerm t);
ATerm xtc_new_file_0_0 (ATerm t);
ATerm xtc_transform_file_2_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t);
static ATerm n_33 (ATerm h_31, ATerm j_31, ATerm l_31, ATerm t);
static ATerm o_33 (ATerm c_33, ATerm d_33, ATerm t);
static ATerm o_3 (ATerm t);
static ATerm p_3 (ATerm t);
static ATerm q_3 (ATerm t);
static ATerm r_3 (ATerm t);
ATerm parse_module_0_0 (ATerm t);
ATerm debug_1_0 (ATerm j_88 (ATerm), ATerm t);
ATerm if_verbose3_1_0 (ATerm l_103 (ATerm), ATerm t);
ATerm fetch_elem_1_0 (ATerm g_89 (ATerm), ATerm t);
static ATerm v_8 (ATerm p_37, ATerm q_37, ATerm t);
ATerm is_relpath_0_0 (ATerm t);
static ATerm w_8 (ATerm o_80 (ATerm), ATerm m_21, ATerm l_21, ATerm t);
static ATerm g_4 (ATerm t);
ATerm get_module_1_0 (ATerm n_80 (ATerm), ATerm t);
static ATerm y_8 (ATerm b_93 (ATerm), ATerm c_93 (ATerm), ATerm b_29, ATerm a_29, ATerm t);
static ATerm z_8 (ATerm t_92 (ATerm), ATerm v_28, ATerm u_28, ATerm t);
static ATerm k_4 (ATerm t);
static ATerm m_4 (ATerm t);
static ATerm n_4 (ATerm t);
static ATerm e_9 (ATerm z_588, ATerm e_589, ATerm l_55, ATerm t);
static ATerm q_4 (ATerm t);
static ATerm s_4 (ATerm t);
static ATerm u_4 (ATerm t);
static ATerm r_39 (ATerm l_38, ATerm m_38, ATerm n_38, ATerm t);
static ATerm v_4 (ATerm t);
ATerm diff_0_0 (ATerm t);
static ATerm g_9 (ATerm m_113 (ATerm), ATerm n_113 (ATerm), ATerm o_113 (ATerm), ATerm g_58, ATerm d_58, ATerm k_58, ATerm h_58, ATerm e_58, ATerm f_58, ATerm t);
ATerm GnNext_3_0 (ATerm m_113 (ATerm), ATerm n_113 (ATerm), ATerm o_113 (ATerm), ATerm t);
ATerm while_not_2_0 (ATerm z_81 (ATerm), ATerm a_82 (ATerm), ATerm t);
ATerm for_3_0 (ATerm c_82 (ATerm), ATerm d_82 (ATerm), ATerm e_82 (ATerm), ATerm t);
static ATerm x_4 (ATerm t);
static ATerm c_5 (ATerm t);
ATerm graph_nodes_roots_3_0 (ATerm j_113 (ATerm), ATerm k_113 (ATerm), ATerm l_113 (ATerm), ATerm t);
ATerm filter_1_0 (ATerm b_96 (ATerm), ATerm t);
static ATerm e_5 (ATerm t);
static ATerm h_5 (ATerm t);
static ATerm j_5 (ATerm t);
static ATerm l_5 (ATerm t);
static ATerm n_5 (ATerm t);
static ATerm p_5 (ATerm t);
static ATerm j_9 (ATerm c_21, ATerm t);
static ATerm l_9 (ATerm y_42, ATerm z_42, ATerm t);
ATerm copy_to_1_0 (ATerm o_0 (ATerm), ATerm t);
static ATerm m_9 (ATerm e_51, ATerm f_51, ATerm t);
ATerm end_scope_1_0 (ATerm e_101 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm e_81 (ATerm), ATerm f_81 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm d_101 (ATerm), ATerm t);
static ATerm r_5 (ATerm t);
static ATerm w_5 (ATerm t);
static ATerm x_5 (ATerm t);
ATerm xtc_temp_files_1_0 (ATerm q_111 (ATerm), ATerm t);
static ATerm g_6 (ATerm t);
ATerm xtc_io_1_0 (ATerm r_111 (ATerm), ATerm t);
ATerm default_usage_0_0 (ATerm t);
static ATerm k_6 (ATerm t);
static ATerm l_6 (ATerm t);
static ATerm m_6 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm n_6 (ATerm t);
static ATerm o_6 (ATerm t);
static ATerm p_6 (ATerm t);
static ATerm q_6 (ATerm t);
static ATerm s_6 (ATerm t);
static ATerm u_6 (ATerm t);
static ATerm v_6 (ATerm t);
static ATerm w_6 (ATerm t);
static ATerm x_6 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm t_9 (ATerm i_59, ATerm j_59, ATerm t);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t);
static ATerm y_6 (ATerm t);
static ATerm z_6 (ATerm t);
static ATerm e_7 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm f_7 (ATerm t);
static ATerm g_7 (ATerm t);
static ATerm h_7 (ATerm t);
ATerm input_option_0_0 (ATerm t);
static ATerm r_9 (ATerm z_50, ATerm a_51, ATerm y_50, ATerm t);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t);
ATerm at_end_1_0 (ATerm k_89 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm z_52 (ATerm p_52, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm k_9 (ATerm o_59, ATerm n_59, ATerm t);
static ATerm k_7 (ATerm t);
static ATerm l_7 (ATerm t);
static ATerm m_7 (ATerm t);
static ATerm n_7 (ATerm t);
static ATerm o_7 (ATerm t);
static ATerm p_7 (ATerm t);
static ATerm t_7 (ATerm t);
static ATerm u_7 (ATerm t);
static ATerm v_7 (ATerm t);
static ATerm w_7 (ATerm t);
static ATerm x_7 (ATerm t);
static ATerm y_7 (ATerm t);
static ATerm b_8 (ATerm t);
static ATerm f_8 (ATerm t);
static ATerm g_8 (ATerm t);
static ATerm h_8 (ATerm t);
static ATerm l_8 (ATerm t);
static ATerm m_8 (ATerm t);
ATerm pack_stratego_options_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm n_9 (ATerm q_40, ATerm r_40, ATerm t);
ATerm foldr_2_0 (ATerm x_94 (ATerm), ATerm y_94 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm a_9 (ATerm t);
static ATerm b_9 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm j_103 (ATerm), ATerm t);
static ATerm h_9 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm o_9 (ATerm t);
ATerm need_help_1_0 (ATerm x_104 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
static ATerm q_9 (ATerm q_52, ATerm r_52, ATerm t);
static ATerm s_9 (ATerm t);
static ATerm u_9 (ATerm t);
static ATerm x_9 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm e_89 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm y_9 (ATerm t);
static ATerm z_9 (ATerm t);
static ATerm a_10 (ATerm t);
static ATerm b_10 (ATerm t);
static ATerm d_10 (ATerm t);
static ATerm h_10 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm w_59 (ATerm), ATerm x_59 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm o_107 (ATerm), ATerm t);
static ATerm j_10 (ATerm t);
static ATerm k_10 (ATerm t);
static ATerm p_10 (ATerm t);
static ATerm q_10 (ATerm t);
ATerm parse_options_1_0 (ATerm n_107 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm z_104 (ATerm), ATerm a_105 (ATerm), ATerm b_105 (ATerm), ATerm c_105 (ATerm), ATerm t);
static ATerm s_10 (ATerm t);
static ATerm a_11 (ATerm t);
static ATerm b_11 (ATerm t);
static ATerm f_11 (ATerm t);
static ATerm m_11 (ATerm t);
ATerm pack_stratego_0_0 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
static ATerm z_7 (ATerm a_23, ATerm b_23, ATerm t)
{
  ATerm b_0 = NULL;
  t = SSL_write_term_to_stream_baf(a_23, b_23);
  b_0 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, b_0);
  return(t);
}
static ATerm a_0 (ATerm t)
{
  ATerm s_0 = NULL,v_0 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm n_11 = ATgetArgument(t, 0);
      if(match_cons(n_11, sym_Stream_1))
        {
          s_0 = ATgetArgument(n_11, 0);
        }
      else
        _fail(t);
      v_0 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_7(s_0, v_0, t);
  return(t);
}
ATerm write_to_0_0 (ATerm t)
{
  ATerm m_0 = NULL,q_0 = NULL;
  m_0 = t;
  t = xtc_new_file_0_0(t);
  q_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_0, m_0);
  t = e_8(a_0, q_0, m_0, t);
  t = SSL_close_file(q_0);
  t = (ATerm) ATmakeAppl(sym_FILE_1, q_0);
  return(t);
}
static ATerm a_8 (ATerm m_23, ATerm n_23, ATerm t)
{
  ATerm p_1 = NULL,q_1 = NULL;
  t = n_23;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = n_23;
    }
  else
    {
      ATerm j_0 = NULL,w_0 = NULL,c_1 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          p_1 = ATgetFirst((ATermList) t);
          q_1 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(n_23);
      j_0 = t;
      t = q_1;
      {
        static ATerm a_1 (ATerm t)
        {
          ATerm o_11 = t;
          int q_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm x_0 = NULL;
              x_0 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = x_0;
              LocalPopChoice(q_11);
            }
          else
            {
              t = o_11;
              {
                ATerm y_0 = NULL;
                t = Cons_2_0(_id, a_1, t);
                y_0 = t;
                t = (ATerm) ATinsert(CheckATermList(y_0), m_23);
              }
            }
          return(t);
        }
        t = a_1(t);
      }
      w_0 = t;
      t = (ATerm) ATinsert(CheckATermList(w_0), p_1);
      c_1 = t;
      t = SSLsetAnnotations(c_1, j_0);
    }
  return(t);
}
ATerm create_dep_file_0_0 (ATerm t)
{
  ATerm u_1 = NULL,v_1 = NULL,w_1 = NULL,a_2 = NULL,c_2 = NULL,d_2 = NULL,e_2 = NULL,s_2 = NULL,t_2 = NULL;
  v_1 = t;
  t = term_r_11;
  t = get_config_0_0(t);
  {
    ATerm s_11 = t;
    int t_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_v_11;
        t = get_config_0_0(t);
        LocalPopChoice(t_11);
      }
    else
      {
        t = s_11;
        {
          ATerm w_11 = t;
          if((PushChoice() == 0))
            {
              t = term_x_11;
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
  }
  u_1 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_c_12), term_z_11), u_1);
  t_2 = t;
  t = SSL_concat_strings(t_2);
  s_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_2, term_d_12);
  t = open_file_0_0(t);
  w_1 = t;
  t = term_i_12;
  d_2 = t;
  t = (ATerm) ATinsert(CheckATermList(v_1), term_j_12);
  e_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_i_12, (ATerm) ATinsert(CheckATermList(v_1), term_j_12));
  t = a_8(d_2, e_2, t);
  a_2 = t;
  t = (ATerm) ATinsert(CheckATermList(a_2), u_1);
  c_2 = t;
  t = SSL_printnl(w_1, c_2);
  t = SSL_close_file(w_1);
  t = (ATerm) ATmakeAppl(sym_FILE_1, s_2);
  return(t);
}
static ATerm c_8 (ATerm v_37, ATerm w_37, ATerm t)
{
  ATerm v_2 = NULL;
  t = SSL_fputc(v_37, w_37);
  v_2 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, v_2);
  return(t);
}
static ATerm d_8 (ATerm e_23, ATerm f_23, ATerm t)
{
  ATerm w_2 = NULL;
  t = SSL_write_term_to_stream_text(e_23, f_23);
  w_2 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, w_2);
  return(t);
}
static ATerm e_8 (ATerm l_88 (ATerm), ATerm x_165, ATerm i_23, ATerm t)
{
  ATerm x_2 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, x_165, term_d_12);
  t = s_8(t);
  x_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_2, i_23);
  t = l_88(t);
  t = fclose_0_0(t);
  t = i_23;
  return(t);
}
static ATerm f_0 (ATerm t)
{
  ATerm a_3 = NULL,b_3 = NULL,c_3 = NULL,d_3 = NULL,e_3 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm k_12 = ATgetArgument(t, 0);
      if(match_cons(k_12, sym_Stream_1))
        {
          d_3 = ATgetArgument(k_12, 0);
        }
      else
        _fail(t);
      e_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_8(d_3, e_3, t);
  a_3 = t;
  t = term_l_12;
  b_3 = t;
  t = a_3;
  if(match_cons(t, sym_Stream_1))
    {
      c_3 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_l_12, a_3);
  t = c_8(b_3, c_3, t);
  return(t);
}
ATerm write_to_text_0_0 (ATerm t)
{
  ATerm y_2 = NULL,z_2 = NULL;
  y_2 = t;
  t = xtc_new_file_0_0(t);
  z_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_2, y_2);
  t = e_8(f_0, z_2, y_2, t);
  t = SSL_close_file(z_2);
  t = (ATerm) ATmakeAppl(sym_FILE_1, z_2);
  return(t);
}
ATerm basename_1_0 (ATerm w_98 (ATerm), ATerm t)
{
  ATerm s_3 = NULL,u_3 = NULL;
  u_3 = t;
  t = SSL_explode_string(u_3);
  {
    ATerm r_12 = t;
    int t_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm f_5 (ATerm t)
        {
          ATerm z_4 = NULL,a_5 = NULL,b_5 = NULL;
          z_4 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              a_5 = ATgetFirst((ATermList) t);
              b_5 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          {
            ATerm x_12 = t;
            int y_12 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm z_1 = NULL,g_2 = NULL,g_1 = NULL;
                t = SSLgetAnnotations(z_4);
                z_1 = t;
                t = b_5;
                t = f_5(t);
                g_2 = t;
                t = (ATerm) ATinsert(CheckATermList(g_2), a_5);
                g_1 = t;
                t = SSLsetAnnotations(g_1, z_1);
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
                      ATerm o_2 = NULL,h_1 = NULL;
                      t = SSLgetAnnotations(z_4);
                      o_2 = t;
                      t = a_5;
                      if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 47)))
                        _fail(t);
                      t = (ATerm) ATinsert(CheckATermList(b_5), a_5);
                      h_1 = t;
                      t = SSLsetAnnotations(h_1, o_2);
                      LocalPopChoice(b_13);
                    }
                  else
                    {
                      t = a_13;
                      {
                        ATerm k_3 = NULL,n_3 = NULL,i_1 = NULL;
                        t = SSLgetAnnotations(z_4);
                        k_3 = t;
                        t = a_5;
                        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 46)))
                          _fail(t);
                        t = b_5;
                        t = w_98(t);
                        n_3 = t;
                        t = (ATerm) ATinsert(CheckATermList(n_3), a_5);
                        i_1 = t;
                        t = SSLsetAnnotations(i_1, k_3);
                        t = (ATerm) ATempty;
                      }
                    }
                }
              }
          }
          return(t);
        }
        t = f_5(t);
        LocalPopChoice(t_12);
      }
    else
      {
        t = r_12;
      }
  }
  s_3 = t;
  t = SSL_implode_string(s_3);
  return(t);
}
ATerm at_suffix_rev_1_0 (ATerm s_89 (ATerm), ATerm t)
{
  static ATerm d_6 (ATerm t)
  {
    ATerm c_13 = t;
    int d_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_5 = NULL,b_6 = NULL,c_6 = NULL,e_4 = NULL,o_4 = NULL,m_1 = NULL;
        z_5 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            b_6 = ATgetFirst((ATermList) t);
            c_6 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(z_5);
        e_4 = t;
        t = c_6;
        t = d_6(t);
        o_4 = t;
        t = (ATerm) ATinsert(CheckATermList(o_4), b_6);
        m_1 = t;
        t = SSLsetAnnotations(m_1, e_4);
        LocalPopChoice(d_13);
      }
    else
      {
        t = c_13;
        t = s_89(t);
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
    ATerm e_13 = t;
    int f_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm h_0 (ATerm t)
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm g_13 = ATgetFirst((ATermList) t);
              if(((ATgetType(g_13) != AT_INT) || (ATgetInt((ATermInt) g_13) != 47)))
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
        t = at_suffix_rev_1_0(h_0, t);
        t = not_null(h_6);
        LocalPopChoice(f_13);
      }
    else
      {
        t = e_13;
      }
  }
  i_6 = t;
  t = SSL_implode_string(i_6);
  return(t);
}
ATerm map_1_0 (ATerm u_88 (ATerm), ATerm t)
{
  static ATerm d_7 (ATerm t)
  {
    ATerm a_7 = NULL,b_7 = NULL,c_7 = NULL;
    a_7 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = a_7;
      }
    else
      {
        ATerm t_5 = NULL,a_6 = NULL,e_6 = NULL,r_1 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            b_7 = ATgetFirst((ATermList) t);
            c_7 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(a_7);
        t_5 = t;
        t = b_7;
        t = u_88(t);
        a_6 = t;
        t = c_7;
        t = d_7(t);
        e_6 = t;
        t = (ATerm) ATinsert(CheckATermList(e_6), a_6);
        r_1 = t;
        t = SSLsetAnnotations(r_1, t_5);
      }
    return(t);
  }
  t = d_7(t);
  return(t);
}
static ATerm t_0 (ATerm t)
{
  ATerm h_13 = t;
  int i_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      LocalPopChoice(i_13);
    }
  else
    {
      t = h_13;
    }
  return(t);
}
static ATerm u_0 (ATerm t)
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
      ATerm s_7 = NULL;
      s_7 = t;
      t = SSL_is_string(s_7);
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
            t = map_1_0(t_0, t);
            LocalPopChoice(o_13);
          }
        else
          {
            t = n_13;
            {
              ATerm c_9 = NULL,d_9 = NULL,f_9 = NULL;
              c_9 = t;
              if(match_cons(t, sym_Path_1))
                {
                  d_9 = ATgetArgument(t, 0);
                  t = d_9;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      d_9 = ATgetArgument(t, 0);
                      t = d_9;
                      {
                        ATerm p_13 = t;
                        int q_13 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            LocalPopChoice(q_13);
                          }
                        else
                          {
                            t = p_13;
                            t = debug_1_0(u_0, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm v_9 = NULL,w_9 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          d_9 = ATgetArgument(t, 0);
                          f_9 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = d_9;
                      t = eval_config_0_0(t);
                      v_9 = t;
                      t = f_9;
                      t = eval_config_0_0(t);
                      w_9 = t;
                      t = (ATerm) ATmakeAppl(sym__2, v_9, w_9);
                      t = u_8(v_9, w_9, t);
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
  ATerm g_10 = NULL,l_10 = NULL;
  g_10 = t;
  t = term_r_13;
  l_10 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_13, g_10);
  t = q_9(l_10, g_10, t);
  {
    ATerm s_13 = t;
    int u_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_10 = NULL,n_10 = NULL;
        t = eval_config_0_0(t);
        m_10 = t;
        t = term_r_13;
        n_10 = t;
        t = SSL_table_put(n_10, g_10, m_10);
        t = m_10;
        LocalPopChoice(u_13);
      }
    else
      {
        t = s_13;
      }
  }
  return(t);
}
static ATerm z_0 (ATerm t)
{
  ATerm u_10 = NULL;
  if(match_cons(t, sym_Specification_1))
    {
      u_10 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_10;
  t = filter_1_0(b_1, t);
  return(t);
}
static ATerm b_1 (ATerm t)
{
  ATerm w_13 = t;
  if((PushChoice() == 0))
    {
      ATerm w_10 = NULL,y_10 = NULL,z_10 = NULL,w_3 = NULL;
      z_10 = t;
      if(match_cons(t, sym_Imports_1))
        {
          y_10 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(z_10);
      w_10 = t;
      t = (ATerm) ATmakeAppl(sym_Imports_1, y_10);
      w_3 = t;
      t = SSLsetAnnotations(w_3, w_10);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = w_13;
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
ATerm genzip_4_0 (ATerm x_90 (ATerm), ATerm y_90 (ATerm), ATerm z_90 (ATerm), ATerm a_91 (ATerm), ATerm t)
{
  static ATerm j_11 (ATerm t)
  {
    ATerm x_13 = t;
    int f_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_90(t);
        LocalPopChoice(f_14);
      }
    else
      {
        t = x_13;
        {
          ATerm c_11 = NULL,d_11 = NULL,e_11 = NULL,g_11 = NULL,h_11 = NULL,i_11 = NULL,y_3 = NULL;
          t = y_90(t);
          i_11 = t;
          if(match_cons(t, sym__2))
            {
              d_11 = ATgetArgument(t, 0);
              e_11 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(i_11);
          c_11 = t;
          t = d_11;
          t = a_91(t);
          g_11 = t;
          t = e_11;
          t = j_11(t);
          h_11 = t;
          t = (ATerm) ATmakeAppl(sym__2, g_11, h_11);
          y_3 = t;
          t = SSLsetAnnotations(y_3, c_11);
          t = z_90(t);
        }
      }
    return(t);
  }
  t = j_11(t);
  return(t);
}
static ATerm d_1 (ATerm t)
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
static ATerm i_8 (ATerm r_132, ATerm t)
{
  t = r_132;
  t = filter_1_0(d_1, t);
  t = concat_0_0(t);
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm p_11 = NULL;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_g_14;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      ATerm u_11 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          p_11 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, term_h_14);
      u_11 = t;
      t = (ATerm) ATmakeAppl(sym__2, p_11, (ATerm) ATinsert(ATempty, term_h_14));
      t = v_8(p_11, u_11, t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
ATerm pass_keep_0_0 (ATerm t)
{
  ATerm y_11 = NULL,e_12 = NULL,g_12 = NULL,m_12 = NULL;
  t = term_i_14;
  {
    ATerm k_14 = t;
    int l_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        LocalPopChoice(l_14);
      }
    else
      {
        t = k_14;
        t = term_n_14;
      }
  }
  e_12 = t;
  t = term_n_14;
  m_12 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_12, term_n_14);
  t = j_8(e_12, m_12, t);
  g_12 = t;
  t = SSL_int_to_string(g_12);
  y_11 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, y_11), term_i_14);
  return(t);
}
static ATerm j_8 (ATerm w_40, ATerm x_40, ATerm t)
{
  ATerm o_14 = t;
  int r_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(w_40, x_40);
      LocalPopChoice(r_14);
    }
  else
    {
      t = o_14;
      t = SSL_subtr(w_40, x_40);
    }
  return(t);
}
ATerm pass_verbose_0_0 (ATerm t)
{
  ATerm p_12 = NULL,q_12 = NULL,s_12 = NULL,u_12 = NULL;
  t = term_s_14;
  {
    ATerm t_14 = t;
    int u_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        LocalPopChoice(u_14);
      }
    else
      {
        t = t_14;
        t = term_n_14;
      }
  }
  q_12 = t;
  t = term_n_14;
  u_12 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_12, term_n_14);
  t = j_8(q_12, u_12, t);
  s_12 = t;
  t = SSL_int_to_string(s_12);
  p_12 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, p_12), term_s_14);
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm n_112 (ATerm), ATerm o_112 (ATerm), ATerm t)
{
  t = write_to_0_0(t);
  t = xtc_transform_file_2_0(n_112, o_112, t);
  t = read_from_0_0(t);
  return(t);
}
static ATerm k_8 (ATerm d_47, ATerm e_47, ATerm t)
{
  t = SSL_execvp(d_47, e_47);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm y_13 = NULL,z_13 = NULL,a_14 = NULL,e_14 = NULL;
  y_13 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      z_13 = ATgetArgument(t, 0);
      {
        ATerm q_7 = NULL,r_7 = NULL;
        t = SSL_int_to_string(z_13);
        q_7 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_w_14), q_7), term_v_14);
        r_7 = t;
        t = SSL_concat_strings(r_7);
      }
    }
  else
    {
      ATerm x_8 = NULL,i_9 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          z_13 = ATgetArgument(t, 0);
          a_14 = ATgetArgument(t, 1);
          e_14 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(a_14);
      x_8 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, e_14), term_y_14), x_8), term_x_14), z_13);
      i_9 = t;
      t = SSL_concat_strings(i_9);
    }
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm j_14 = NULL;
  j_14 = t;
  {
    ATerm z_14 = t;
    int a_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm e_1 (ATerm t)
        {
          if(match_cons(t, sym_Signal_3))
            {
              ATerm b_15 = ATgetArgument(t, 0);
              if((j_14 != ATgetArgument(t, 1)))
                {
                  _fail(ATgetArgument(t, 1));
                }
              {
                ATerm c_15 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_h_21), term_b_21), term_w_20), term_r_20), term_l_20), term_c_20), term_w_19), term_r_19), term_l_19), term_i_19), term_b_19), term_w_18), term_r_18), term_l_18), term_h_18), term_a_18), term_r_17), term_n_17), term_j_17), term_d_17), term_x_16), term_s_16), term_l_16), term_f_16), term_x_15), term_r_15), term_l_15), term_h_15);
        t = fetch_elem_1_0(e_1, t);
        LocalPopChoice(a_15);
      }
    else
      {
        t = z_14;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, j_14);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm q_14 = NULL,d_15 = NULL;
  q_14 = t;
  {
    ATerm j_21 = t;
    int k_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm n_21 = ATgetArgument(t, 0);
            d_15 = ATgetArgument(t, 1);
            {
              ATerm o_21 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(k_21);
        {
          ATerm p_21 = t;
          int q_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm c_10 = NULL,e_10 = NULL,f_10 = NULL;
              t = d_15;
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
              }
              t = signal_from_number_0_0(t);
              t = signal_to_descr_0_0(t);
              c_10 = t;
              t = term_s_21;
              e_10 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, c_10), term_v_21);
              f_10 = t;
              t = SSL_printnl(e_10, f_10);
              t = (ATerm) ATmakeAppl(sym__2, term_s_21, (ATerm) ATinsert(ATinsert(ATempty, c_10), term_v_21));
              LocalPopChoice(q_21);
            }
          else
            {
              t = p_21;
              t = q_14;
            }
        }
      }
    else
      {
        t = j_21;
        t = q_14;
      }
  }
  t = q_14;
  return(t);
}
ATerm fork_0_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_and_wait_1_0 (ATerm u_103 (ATerm), ATerm t)
{
  ATerm s_15 = NULL,u_15 = NULL;
  u_15 = t;
  t = fork_0_0(t);
  s_15 = t;
  {
    ATerm w_21 = t;
    int a_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = u_15;
        t = u_103(t);
        LocalPopChoice(a_22);
      }
    else
      {
        t = w_21;
        t = SSL_waitpid(s_15);
        t = warn_ifsignaled_0_0(t);
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm c_22 = ATgetArgument(t, 0);
            if(((ATgetType(c_22) != AT_INT) || (ATgetInt((ATermInt) c_22) != 0)))
              _fail(t);
            {
              ATerm d_22 = ATgetArgument(t, 1);
            }
            {
              ATerm e_22 = ATgetArgument(t, 2);
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
  static ATerm f_1 (ATerm t)
  {
    ATerm b_16 = NULL,e_16 = NULL;
    b_16 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(a_16), b_16);
    t = q_9(not_null(a_16), b_16, t);
    e_16 = t;
    t = (ATerm) ATmakeAppl(sym__2, b_16, e_16);
    return(t);
  }
  if(((a_16 != NULL) && (a_16 != t)))
    _fail(t);
  else
    a_16 = t;
  t = SSL_table_keys(a_16);
  t = map_1_0(f_1, t);
  return(t);
}
ATerm if_verbose5_1_0 (ATerm n_103 (ATerm), ATerm t)
{
  ATerm g_16 = NULL;
  g_16 = t;
  {
    ATerm f_22 = t;
    int g_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_16 = NULL;
        t = term_s_14;
        t = get_config_0_0(t);
        m_16 = t;
        t = (ATerm) ATmakeAppl(sym__2, m_16, term_o_20);
        t = geq_0_0(t);
        t = g_16;
        t = n_103(t);
        LocalPopChoice(g_22);
      }
    else
      {
        t = f_22;
        t = g_16;
      }
  }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm m_103 (ATerm), ATerm t)
{
  ATerm p_16 = NULL;
  p_16 = t;
  {
    ATerm h_22 = t;
    int i_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_16 = NULL;
        t = term_s_14;
        t = get_config_0_0(t);
        w_16 = t;
        t = (ATerm) ATmakeAppl(sym__2, w_16, term_p_17);
        t = geq_0_0(t);
        t = p_16;
        t = m_103(t);
        LocalPopChoice(i_22);
      }
    else
      {
        t = h_22;
        t = p_16;
      }
  }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm o_103 (ATerm), ATerm t)
{
  ATerm c_17 = NULL;
  c_17 = t;
  {
    ATerm j_22 = t;
    int l_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_17 = NULL;
        t = term_s_14;
        t = get_config_0_0(t);
        g_17 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_17, term_v_15);
        t = geq_0_0(t);
        t = c_17;
        t = o_103(t);
        LocalPopChoice(l_22);
      }
    else
      {
        t = j_22;
        t = c_17;
      }
  }
  return(t);
}
static ATerm n_8 (ATerm y_92 (ATerm), ATerm x_28, ATerm w_28, ATerm t)
{
  static ATerm g_18 (ATerm t)
  {
    ATerm x_17 = NULL,y_17 = NULL,z_17 = NULL;
    x_17 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = w_28;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            y_17 = ATgetFirst((ATermList) t);
            z_17 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm n_22 = t;
          int o_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = x_17;
              {
                static ATerm j_1 (ATerm t)
                {
                  t = w_28;
                  return(t);
                }
                t = y_8(y_92, j_1, y_17, z_17, t);
              }
              t = g_18(t);
              LocalPopChoice(o_22);
            }
          else
            {
              t = n_22;
              {
                ATerm o_10 = NULL,v_10 = NULL,b_4 = NULL;
                t = SSLgetAnnotations(x_17);
                o_10 = t;
                t = z_17;
                t = g_18(t);
                v_10 = t;
                t = (ATerm) ATinsert(CheckATermList(v_10), y_17);
                b_4 = t;
                t = SSLsetAnnotations(b_4, o_10);
              }
            }
        }
      }
    return(t);
  }
  t = x_28;
  t = g_18(t);
  return(t);
}
static ATerm k_1 (ATerm t)
{
  ATerm c_19 = NULL;
  if(match_cons(t, sym__2))
    {
      c_19 = ATgetArgument(t, 0);
      if((c_19 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm o_8 (ATerm w_51, ATerm x_51, ATerm y_51, ATerm t)
{
  ATerm m_18 = NULL,n_18 = NULL,u_18 = NULL;
  m_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_51, x_51);
  {
    ATerm s_22 = t;
    int t_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm u_22 = ATgetArgument(t, 0);
            ATerm w_22 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, w_51, x_51);
        t = q_9(w_51, x_51, t);
        LocalPopChoice(t_22);
      }
    else
      {
        t = s_22;
        t = (ATerm) ATempty;
      }
  }
  u_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_18, y_51);
  t = n_8(k_1, u_18, y_51, t);
  n_18 = t;
  t = SSL_table_put(w_51, x_51, n_18);
  t = m_18;
  return(t);
}
static ATerm p_8 (ATerm r_107 (ATerm), ATerm g_52, ATerm f_52, ATerm t)
{
  static ATerm l_1 (ATerm t)
  {
    ATerm d_19 = NULL,e_19 = NULL;
    if(match_cons(t, sym__2))
      {
        d_19 = ATgetArgument(t, 0);
        e_19 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, g_52, d_19, e_19);
    t = r_107(t);
    return(t);
  }
  t = f_52;
  t = map_1_0(l_1, t);
  return(t);
}
static ATerm d_20 (ATerm p_19, ATerm t)
{
  t = SSL_fclose(p_19);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm x_19 = NULL,b_20 = NULL;
  b_20 = t;
  if(match_cons(t, sym_Stream_1))
    {
      x_19 = ATgetArgument(t, 0);
      {
        ATerm x_22 = t;
        int y_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(x_19);
            LocalPopChoice(y_22);
          }
        else
          {
            t = x_22;
            t = d_20(b_20, t);
          }
      }
    }
  else
    {
      t = d_20(b_20, t);
    }
  return(t);
}
static ATerm q_8 (ATerm g_23, ATerm t)
{
  t = SSL_read_term_from_stream(g_23);
  return(t);
}
static ATerm r_8 (ATerm x_37, ATerm y_37, ATerm t)
{
  ATerm f_20 = NULL;
  t = SSL_fopen(x_37, y_37);
  f_20 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_20);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm h_20 = NULL;
  t = SSL_stdin_stream();
  h_20 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, h_20);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm j_20 = NULL;
  t = SSL_stdout_stream();
  j_20 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, j_20);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm q_20 = NULL;
  t = SSL_stderr_stream();
  q_20 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, q_20);
  return(t);
}
static ATerm d_24 (ATerm e_21, ATerm t)
{
  ATerm i_21 = NULL;
  t = SSL_explode_term(e_21);
  if(match_cons(t, sym__2))
    {
      ATerm z_22 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) z_22) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm d_23 = ATgetArgument(t, 1);
        if(((ATgetType(d_23) == AT_LIST) && !(ATisEmpty(d_23))))
          {
            i_21 = ATgetFirst((ATermList) d_23);
            {
              ATerm h_23 = (ATerm) ATgetNext((ATermList) d_23);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = i_21;
  if(match_cons(t, sym_stderr_0))
    {
      t = i_21;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = i_21;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = i_21;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm i_24 (ATerm t_21, ATerm u_21, ATerm x_21, ATerm t)
{
  ATerm y_21 = NULL,z_21 = NULL,b_22 = NULL,k_22 = NULL,d_4 = NULL;
  t = SSLgetAnnotations(x_21);
  b_22 = t;
  t = t_21;
  if(match_cons(t, sym_Path_1))
    {
      k_22 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, k_22, u_21);
  d_4 = t;
  t = SSLsetAnnotations(d_4, b_22);
  if(match_cons(t, sym__2))
    {
      y_21 = ATgetArgument(t, 0);
      z_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_8(y_21, z_21, t);
  return(t);
}
static ATerm l_24 (ATerm m_22, ATerm p_22, ATerm q_22, ATerm t)
{
  ATerm r_22 = NULL,v_22 = NULL,c_23 = NULL,k_23 = NULL,f_4 = NULL;
  t = SSLgetAnnotations(q_22);
  c_23 = t;
  t = SSL_is_string(m_22);
  k_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_23, p_22);
  f_4 = t;
  t = SSLsetAnnotations(f_4, c_23);
  if(match_cons(t, sym__2))
    {
      r_22 = ATgetArgument(t, 0);
      v_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_8(r_22, v_22, t);
  return(t);
}
static ATerm s_8 (ATerm t)
{
  ATerm v_23 = NULL,w_23 = NULL,x_23 = NULL;
  v_23 = t;
  if(match_cons(t, sym__2))
    {
      w_23 = ATgetArgument(t, 0);
      x_23 = ATgetArgument(t, 1);
      {
        ATerm j_23 = t;
        int l_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = d_24(v_23, t);
            LocalPopChoice(l_23);
          }
        else
          {
            t = j_23;
            {
              ATerm o_23 = t;
              int p_23 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = i_24(w_23, x_23, v_23, t);
                  LocalPopChoice(p_23);
                }
              else
                {
                  t = o_23;
                  t = l_24(w_23, x_23, v_23, t);
                }
            }
          }
      }
    }
  else
    {
      t = d_24(v_23, t);
    }
  return(t);
}
static ATerm n_1 (ATerm t)
{
  t = term_q_23;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm m_24 = NULL,o_24 = NULL,p_24 = NULL;
  ATerm r_23 = t;
  int s_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_24 = NULL;
      q_24 = t;
      t = (ATerm) ATmakeAppl(sym__2, q_24, term_t_23);
      t = s_8(t);
      LocalPopChoice(s_23);
    }
  else
    {
      t = r_23;
      t = debug_1_0(n_1, t);
      _fail(t);
    }
  o_24 = t;
  if(match_cons(t, sym_Stream_1))
    {
      p_24 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_8(p_24, t);
  m_24 = t;
  t = o_24;
  t = fclose_0_0(t);
  t = m_24;
  return(t);
}
static ATerm o_1 (ATerm t)
{
  t = term_u_23;
  return(t);
}
static ATerm s_1 (ATerm t)
{
  t = term_y_23;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm z_23 = t;
  int a_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_24 = NULL,z_24 = NULL;
      w_24 = t;
      t = (ATerm) ATinsert(ATempty, term_b_24);
      z_24 = t;
      t = (ATerm) ATmakeAppl(sym__2, w_24, (ATerm) ATinsert(ATempty, term_b_24));
      t = v_8(w_24, z_24, t);
      LocalPopChoice(a_24);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = z_23;
      {
        ATerm c_24 = t;
        int e_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_24 = t;
            if((PushChoice() == 0))
              {
                ATerm a_25 = NULL,b_25 = NULL;
                a_25 = t;
                t = (ATerm) ATinsert(ATempty, term_h_14);
                b_25 = t;
                t = (ATerm) ATmakeAppl(sym__2, a_25, (ATerm) ATinsert(ATempty, term_h_14));
                t = v_8(a_25, b_25, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = f_24;
              }
            t = debug_1_0(o_1, t);
            LocalPopChoice(e_24);
          }
        else
          {
            t = c_24;
            t = debug_1_0(s_1, t);
          }
      }
      t = (ATerm) ATempty;
    }
  return(t);
}
static ATerm t_1 (ATerm t)
{
  t = debug_1_0(x_1, t);
  return(t);
}
static ATerm x_1 (ATerm t)
{
  t = term_g_24;
  return(t);
}
static ATerm y_1 (ATerm t)
{
  t = debug_1_0(b_2, t);
  return(t);
}
static ATerm b_2 (ATerm t)
{
  t = term_h_24;
  return(t);
}
static ATerm f_2 (ATerm t)
{
  ATerm q_25 = NULL,r_25 = NULL,s_25 = NULL;
  q_25 = t;
  t = term_s_21;
  r_25 = t;
  t = (ATerm) ATinsert(ATempty, term_j_24);
  s_25 = t;
  t = SSL_printnl(r_25, s_25);
  t = q_25;
  return(t);
}
static ATerm h_2 (ATerm t)
{
  ATerm u_25 = NULL,v_25 = NULL,w_25 = NULL;
  if(match_cons(t, sym__3))
    {
      u_25 = ATgetArgument(t, 0);
      v_25 = ATgetArgument(t, 1);
      w_25 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = o_8(u_25, v_25, w_25, t);
  return(t);
}
static ATerm i_2 (ATerm t)
{
  ATerm x_25 = NULL,z_25 = NULL,c_26 = NULL;
  x_25 = t;
  t = term_s_21;
  z_25 = t;
  t = (ATerm) ATinsert(ATempty, term_k_24);
  c_26 = t;
  t = SSL_printnl(z_25, c_26);
  t = x_25;
  return(t);
}
static ATerm j_2 (ATerm t)
{
  ATerm d_26 = NULL,h_26 = NULL,k_26 = NULL;
  d_26 = t;
  t = term_s_21;
  h_26 = t;
  t = (ATerm) ATinsert(ATempty, term_j_24);
  k_26 = t;
  t = SSL_printnl(h_26, k_26);
  t = d_26;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm c_25 = NULL,d_25 = NULL,g_25 = NULL,h_25 = NULL,i_25 = NULL,j_25 = NULL,k_25 = NULL,l_25 = NULL,m_25 = NULL,n_25 = NULL;
  c_25 = t;
  t = if_verbose5_1_0(t_1, t);
  {
    ATerm n_24 = t;
    if((PushChoice() == 0))
      {
        ATerm o_25 = NULL,p_25 = NULL;
        t = term_r_24;
        o_25 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, c_25);
        p_25 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_r_24, (ATerm) ATmakeAppl(sym_Imported_1, c_25));
        t = q_9(o_25, p_25, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = n_24;
      }
  }
  g_25 = t;
  t = term_r_24;
  l_25 = t;
  t = term_s_24;
  m_25 = t;
  t = (ATerm) ATinsert(ATempty, c_25);
  n_25 = t;
  t = SSL_table_put(l_25, m_25, n_25);
  t = g_25;
  t = if_verbose4_1_0(y_1, t);
  t = read_repository_file_0_0(t);
  t = if_verbose6_1_0(f_2, t);
  d_25 = t;
  t = term_r_24;
  k_25 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_24, d_25);
  t = p_8(h_2, k_25, d_25, t);
  t = if_verbose6_1_0(i_2, t);
  t = term_r_24;
  h_25 = t;
  t = (ATerm) ATmakeAppl(sym_Imported_1, c_25);
  i_25 = t;
  t = (ATerm) ATempty;
  j_25 = t;
  t = SSL_table_put(h_25, i_25, j_25);
  t = (ATerm) ATmakeAppl(sym__3, term_r_24, (ATerm)ATmakeAppl(sym_Imported_1, c_25), (ATerm) ATempty);
  t = if_verbose4_1_0(j_2, t);
  return(t);
}
ATerm repeat_2_0 (ATerm i_81 (ATerm), ATerm j_81 (ATerm), ATerm t)
{
  static ATerm n_26 (ATerm t)
  {
    ATerm t_24 = t;
    int u_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = i_81(t);
        t = n_26(t);
        LocalPopChoice(u_24);
      }
    else
      {
        t = t_24;
        t = j_81(t);
      }
    return(t);
  }
  t = n_26(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm v_24 = t;
  int x_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_y_24;
      t = get_config_0_0(t);
      LocalPopChoice(x_24);
    }
  else
    {
      t = v_24;
      {
        ATerm e_25 = t;
        int f_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_26 = NULL;
            t = term_t_25;
            o_26 = t;
            t = SSL_getenv(o_26);
            LocalPopChoice(f_25);
          }
        else
          {
            t = e_25;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
static ATerm k_2 (ATerm t)
{
  t = debug_1_0(l_2, t);
  return(t);
}
static ATerm l_2 (ATerm t)
{
  t = term_y_25;
  return(t);
}
static ATerm m_2 (ATerm t)
{
  ATerm w_26 = NULL,x_26 = NULL;
  t = term_r_24;
  w_26 = t;
  t = term_a_26;
  x_26 = t;
  t = term_b_26;
  t = q_9(w_26, x_26, t);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm e_26 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = e_26;
      }
  }
  return(t);
}
static ATerm n_2 (ATerm t)
{
  t = debug_1_0(p_2, t);
  return(t);
}
static ATerm p_2 (ATerm t)
{
  t = term_f_26;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm q_26 = NULL;
  t = if_verbose5_1_0(k_2, t);
  q_26 = t;
  {
    ATerm g_26 = t;
    int i_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_26 = NULL,u_26 = NULL;
        t = term_r_24;
        s_26 = t;
        t = term_s_24;
        u_26 = t;
        t = term_j_26;
        t = q_9(s_26, u_26, t);
        LocalPopChoice(i_26);
      }
    else
      {
        t = g_26;
        {
          ATerm v_26 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          v_26 = t;
          t = repeat_2_0(m_2, _id, t);
          t = v_26;
        }
      }
  }
  t = q_26;
  t = if_verbose5_1_0(n_2, t);
  return(t);
}
static ATerm q_2 (ATerm t)
{
  t = debug_1_0(r_2, t);
  return(t);
}
static ATerm r_2 (ATerm t)
{
  t = term_l_26;
  return(t);
}
static ATerm j_28 (ATerm f_27, ATerm t)
{
  ATerm h_27 = NULL,i_27 = NULL,j_27 = NULL;
  t = term_r_24;
  i_27 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, f_27);
  j_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_24, (ATerm) ATmakeAppl(sym_Tool_1, f_27));
  t = q_9(i_27, j_27, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm m_26 = ATgetFirst((ATermList) t);
      if(match_cons(m_26, sym__2))
        {
          ATerm r_26 = ATgetArgument(m_26, 0);
          h_27 = ATgetArgument(m_26, 1);
        }
      else
        _fail(t);
      {
        ATerm p_26 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = h_27;
  return(t);
}
static ATerm f_3 (ATerm t)
{
  t = debug_1_0(g_3, t);
  return(t);
}
static ATerm g_3 (ATerm t)
{
  t = term_l_26;
  return(t);
}
static ATerm h_3 (ATerm t)
{
  t = term_r_24;
  t = table_getlist_0_0(t);
  t = debug_1_0(i_3, t);
  return(t);
}
static ATerm i_3 (ATerm t)
{
  t = term_t_26;
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm y_26 = t;
  int z_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_27 = NULL,p_27 = NULL,q_27 = NULL;
      t = if_verbose5_1_0(q_2, t);
      t = xtc_load_0_0(t);
      q_27 = t;
      if(match_cons(t, sym__2))
        {
          o_27 = ATgetArgument(t, 0);
          p_27 = ATgetArgument(t, 1);
          {
            ATerm a_27 = t;
            int b_27 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm y_27 = NULL,a_28 = NULL,b_28 = NULL;
                t = term_r_24;
                a_28 = t;
                t = (ATerm) ATmakeAppl(sym_Tool_1, o_27);
                b_28 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_r_24, (ATerm) ATmakeAppl(sym_Tool_1, o_27));
                t = q_9(a_28, b_28, t);
                {
                  static ATerm u_2 (ATerm t)
                  {
                    if(match_cons(t, sym__2))
                      {
                        if((p_27 != ATgetArgument(t, 0)))
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
                  t = fetch_1_0(u_2, t);
                }
                t = not_null(y_27);
                LocalPopChoice(b_27);
              }
            else
              {
                t = a_27;
                t = j_28(q_27, t);
              }
          }
        }
      else
        {
          t = j_28(q_27, t);
        }
      t = if_verbose5_1_0(f_3, t);
      LocalPopChoice(z_26);
    }
  else
    {
      t = y_26;
      {
        ATerm i_28 = NULL,a_12 = NULL,b_12 = NULL;
        i_28 = t;
        t = term_s_21;
        a_12 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_d_27), i_28), term_c_27);
        b_12 = t;
        t = SSL_printnl(a_12, b_12);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_d_27), i_28), term_c_27);
        t = if_verbose5_1_0(h_3, t);
        _fail(t);
      }
    }
  return(t);
}
ATerm xtc_command_1_0 (ATerm e_112 (ATerm), ATerm t)
{
  ATerm m_28 = NULL,n_28 = NULL;
  n_28 = t;
  t = e_112(t);
  t = xtc_find_0_0(t);
  m_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_28, n_28);
  {
    static ATerm j_3 (ATerm t)
    {
      ATerm o_28 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, m_28, n_28);
      t = k_8(m_28, n_28, t);
      t = term_e_27;
      o_28 = t;
      t = SSL_exit(o_28);
      return(t);
    }
    t = fork_and_wait_1_0(j_3, t);
  }
  t = n_28;
  return(t);
}
static ATerm t_8 (ATerm h_101 (ATerm), ATerm e_42, ATerm c_42, ATerm t)
{
  ATerm p_28 = NULL,q_28 = NULL,r_28 = NULL,y_28 = NULL,z_28 = NULL,d_29 = NULL;
  y_28 = t;
  t = h_101(t);
  p_28 = t;
  t = (ATerm) ATmakeAppl(sym__3, p_28, e_42, c_42);
  t = r_9(p_28, e_42, c_42, t);
  {
    ATerm g_27 = t;
    int k_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_29 = NULL;
        t = term_l_27;
        f_29 = t;
        t = (ATerm) ATmakeAppl(sym__2, p_28, term_l_27);
        t = q_9(p_28, f_29, t);
        LocalPopChoice(k_27);
      }
    else
      {
        t = g_27;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_28 = ATgetFirst((ATermList) t);
      r_28 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_l_27;
  z_28 = t;
  t = (ATerm) ATinsert(CheckATermList(r_28), (ATerm) ATinsert(CheckATermList(q_28), e_42));
  d_29 = t;
  t = SSL_table_put(p_28, z_28, d_29);
  t = y_28;
  return(t);
}
static ATerm z_29 (ATerm l_29, ATerm t)
{
  t = l_29;
  {
    ATerm m_27 = t;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm n_27 = ATgetArgument(t, 0);
            ATerm r_27 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = m_27;
      }
  }
  t = term_s_27;
  t = debug_1_0(l_3, t);
  t = (ATerm) ATmakeAppl(sym__2, l_29, term_d_12);
  t = open_file_0_0(t);
  return(t);
}
static ATerm a_30 (ATerm p_29, ATerm q_29, ATerm r_29, ATerm t)
{
  t = SSL_open_file(p_29, q_29);
  return(t);
}
static ATerm l_3 (ATerm t)
{
  t = term_t_27;
  return(t);
}
ATerm open_file_0_0 (ATerm t)
{
  ATerm u_29 = NULL,v_29 = NULL,w_29 = NULL;
  u_29 = t;
  if(match_cons(t, sym__2))
    {
      v_29 = ATgetArgument(t, 0);
      w_29 = ATgetArgument(t, 1);
      {
        ATerm u_27 = t;
        int v_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = z_29(u_29, t);
            LocalPopChoice(v_27);
          }
        else
          {
            t = u_27;
            t = a_30(v_29, w_29, u_29, t);
          }
      }
    }
  else
    {
      t = z_29(u_29, t);
    }
  return(t);
}
static ATerm u_8 (ATerm p_36, ATerm q_36, ATerm t)
{
  t = SSL_strcat(p_36, q_36);
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm new_file_0_0 (ATerm t)
{
  ATerm c_30 = NULL,d_30 = NULL,e_30 = NULL;
  t = term_w_27;
  t = new_0_0(t);
  c_30 = t;
  t = term_x_27;
  d_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_30, term_x_27);
  t = u_8(c_30, d_30, t);
  e_30 = t;
  {
    ATerm z_27 = t;
    int c_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_30 = NULL;
        t = (ATerm) ATinsert(ATempty, term_h_14);
        g_30 = t;
        t = (ATerm) ATmakeAppl(sym__2, e_30, (ATerm) ATinsert(ATempty, term_h_14));
        t = v_8(e_30, g_30, t);
        t = new_file_0_0(t);
        LocalPopChoice(c_28);
      }
    else
      {
        t = z_27;
        t = e_30;
      }
  }
  return(t);
}
static ATerm m_3 (ATerm t)
{
  t = term_d_28;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm j_30 = NULL,k_30 = NULL;
  t = new_file_0_0(t);
  j_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_30, term_d_12);
  t = open_file_0_0(t);
  t = term_w_27;
  k_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_30, term_w_27);
  t = t_8(m_3, j_30, k_30, t);
  t = j_30;
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t)
{
  ATerm w_30 = NULL,x_30 = NULL;
  w_30 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm f_12 = NULL,h_12 = NULL;
      t = w_30;
      t = xtc_new_file_0_0(t);
      f_12 = t;
      t = r_0(t);
      h_12 = t;
      t = (ATerm) ATmakeAppl(sym__2, h_12, (ATerm) ATinsert(ATinsert(ATempty, f_12), term_r_11));
      t = conc_0_0(t);
      t = xtc_command_1_0(p_0, t);
      t = SSL_close_file(f_12);
      t = (ATerm) ATmakeAppl(sym_FILE_1, f_12);
    }
  else
    {
      ATerm n_12 = NULL,o_12 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          x_30 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = x_30;
      t = xtc_new_file_0_0(t);
      n_12 = t;
      t = r_0(t);
      o_12 = t;
      t = (ATerm) ATmakeAppl(sym__2, o_12, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, n_12), term_r_11), x_30), term_e_28));
      t = conc_0_0(t);
      t = xtc_command_1_0(p_0, t);
      t = SSL_close_file(n_12);
      t = (ATerm) ATmakeAppl(sym_FILE_1, n_12);
    }
  return(t);
}
static ATerm n_33 (ATerm h_31, ATerm j_31, ATerm l_31, ATerm t)
{
  ATerm m_31 = NULL,p_31 = NULL,v_12 = NULL,w_12 = NULL,j_4 = NULL;
  t = SSLgetAnnotations(l_31);
  m_31 = t;
  t = h_31;
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
  }
  p_31 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_31, j_31);
  j_4 = t;
  t = SSLsetAnnotations(j_4, m_31);
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
            ATerm k_28 = ATgetFirst((ATermList) h_28);
            ATerm l_28 = (ATerm) ATgetNext((ATermList) h_28);
            if(((ATgetType(l_28) == AT_LIST) && !(ATisEmpty(l_28))))
              {
                v_12 = ATgetFirst((ATermList) l_28);
                {
                  ATerm s_28 = (ATerm) ATgetNext((ATermList) l_28);
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
    ATerm t_28 = t;
    int c_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_29 = t;
        int g_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_32 = NULL;
            if(match_cons(t, sym_FILE_1))
              {
                h_32 = ATgetArgument(t, 0);
                {
                  ATerm z_12 = NULL,l_4 = NULL;
                  t = SSLgetAnnotations(v_12);
                  z_12 = t;
                  t = (ATerm) ATmakeAppl(sym_FILE_1, h_32);
                  l_4 = t;
                  t = SSLsetAnnotations(l_4, z_12);
                }
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = v_12;
              }
            LocalPopChoice(g_29);
            t = xtc_transform_file_2_0(o_3, p_3, t);
          }
        else
          {
            t = e_29;
            t = xtc_transform_term_2_0(q_3, r_3, t);
          }
        t = read_from_0_0(t);
        LocalPopChoice(c_29);
      }
    else
      {
        t = t_28;
        {
          ATerm x_32 = NULL,y_32 = NULL,b_33 = NULL;
          t = term_s_21;
          y_32 = t;
          t = (ATerm) ATinsert(ATinsert(ATempty, j_31), term_h_29);
          b_33 = t;
          t = SSL_printnl(y_32, b_33);
          t = term_n_14;
          x_32 = t;
          t = SSL_exit(x_32);
          t = (ATerm) ATinsert(ATinsert(ATempty, j_31), term_h_29);
        }
      }
  }
  return(t);
}
static ATerm o_33 (ATerm c_33, ATerm d_33, ATerm t)
{
  ATerm k_13 = NULL;
  t = SSL_explode_term(d_33);
  if(match_cons(t, sym__2))
    {
      ATerm i_29 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) i_29) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm j_29 = ATgetArgument(t, 1);
        if(((ATgetType(j_29) == AT_LIST) && !(ATisEmpty(j_29))))
          {
            ATerm k_29 = ATgetFirst((ATermList) j_29);
            ATerm m_29 = (ATerm) ATgetNext((ATermList) j_29);
            if(((ATgetType(m_29) == AT_LIST) && !(ATisEmpty(m_29))))
              {
                k_13 = ATgetFirst((ATermList) m_29);
                {
                  ATerm n_29 = (ATerm) ATgetNext((ATermList) m_29);
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
    ATerm o_29 = t;
    int s_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = read_from_0_0(t);
        LocalPopChoice(s_29);
      }
    else
      {
        t = o_29;
        {
          ATerm h_33 = NULL,i_33 = NULL,j_33 = NULL;
          t = term_s_21;
          i_33 = t;
          t = (ATerm) ATinsert(ATinsert(ATempty, c_33), term_h_29);
          j_33 = t;
          t = SSL_printnl(i_33, j_33);
          t = term_n_14;
          h_33 = t;
          t = SSL_exit(h_33);
          t = (ATerm) ATinsert(ATinsert(ATempty, c_33), term_h_29);
        }
      }
  }
  return(t);
}
static ATerm o_3 (ATerm t)
{
  t = term_t_29;
  return(t);
}
static ATerm p_3 (ATerm t)
{
  ATerm l_32 = NULL,m_32 = NULL,n_32 = NULL,q_32 = NULL,r_32 = NULL;
  r_32 = t;
  t = pass_verbose_0_0(t);
  l_32 = t;
  t = r_32;
  t = pass_keep_0_0(t);
  m_32 = t;
  t = term_x_29;
  {
    ATerm y_29 = t;
    int b_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        LocalPopChoice(b_30);
        t = (ATerm) ATinsert(ATempty, term_x_29);
      }
    else
      {
        t = y_29;
        t = (ATerm) ATempty;
      }
  }
  n_32 = t;
  t = term_f_30;
  t = get_config_0_0(t);
  q_32 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, q_32), m_32), l_32), n_32);
  t = concat_0_0(t);
  return(t);
}
static ATerm q_3 (ATerm t)
{
  t = term_t_29;
  return(t);
}
static ATerm r_3 (ATerm t)
{
  ATerm s_32 = NULL,t_32 = NULL,u_32 = NULL,v_32 = NULL,w_32 = NULL;
  w_32 = t;
  t = pass_verbose_0_0(t);
  s_32 = t;
  t = w_32;
  t = pass_keep_0_0(t);
  t_32 = t;
  t = term_x_29;
  {
    ATerm h_30 = t;
    int i_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        LocalPopChoice(i_30);
        t = (ATerm) ATinsert(ATempty, term_x_29);
      }
    else
      {
        t = h_30;
        t = (ATerm) ATempty;
      }
  }
  u_32 = t;
  t = term_f_30;
  t = get_config_0_0(t);
  v_32 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, v_32), t_32), s_32), u_32);
  t = concat_0_0(t);
  return(t);
}
ATerm parse_module_0_0 (ATerm t)
{
  ATerm k_33 = NULL,l_33 = NULL,m_33 = NULL;
  k_33 = t;
  if(match_cons(t, sym__2))
    {
      l_33 = ATgetArgument(t, 0);
      m_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_33;
  if(match_string(t, "rtree"))
    {
      ATerm l_30 = t;
      int m_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = n_33(l_33, m_33, k_33, t);
          LocalPopChoice(m_30);
        }
      else
        {
          t = l_30;
          t = o_33(m_33, k_33, t);
        }
    }
  else
    {
      t = n_33(l_33, m_33, k_33, t);
    }
  return(t);
}
ATerm debug_1_0 (ATerm j_88 (ATerm), ATerm t)
{
  ATerm q_33 = NULL,r_33 = NULL,s_33 = NULL,t_33 = NULL;
  q_33 = t;
  t = j_88(t);
  r_33 = t;
  t = term_s_21;
  s_33 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, q_33), r_33);
  t_33 = t;
  t = SSL_printnl(s_33, t_33);
  t = q_33;
  return(t);
}
ATerm if_verbose3_1_0 (ATerm l_103 (ATerm), ATerm t)
{
  ATerm x_33 = NULL;
  x_33 = t;
  {
    ATerm n_30 = t;
    int o_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_33 = NULL;
        t = term_s_14;
        t = get_config_0_0(t);
        z_33 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_33, term_p_15);
        t = geq_0_0(t);
        t = x_33;
        t = l_103(t);
        LocalPopChoice(o_30);
      }
    else
      {
        t = n_30;
        t = x_33;
      }
  }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm g_89 (ATerm), ATerm t)
{
  ATerm b_34 = NULL;
  static ATerm t_3 (ATerm t)
  {
    t = g_89(t);
    if(((b_34 != NULL) && (b_34 != t)))
      _fail(t);
    else
      b_34 = t;
    return(t);
  }
  t = fetch_1_0(t_3, t);
  t = not_null(b_34);
  return(t);
}
static ATerm v_8 (ATerm p_37, ATerm q_37, ATerm t)
{
  t = SSL_access(p_37, q_37);
  return(t);
}
ATerm is_relpath_0_0 (ATerm t)
{
  ATerm p_30 = t;
  if((PushChoice() == 0))
    {
      ATerm c_34 = NULL;
      c_34 = t;
      t = SSL_explode_string(c_34);
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          ATerm q_30 = ATgetFirst((ATermList) t);
          if(((ATgetType(q_30) != AT_INT) || (ATgetInt((ATermInt) q_30) != 47)))
            _fail(t);
          {
            ATerm r_30 = (ATerm) ATgetNext((ATermList) t);
          }
        }
      else
        _fail(t);
      t = c_34;
      PopChoice();
      _fail(t);
    }
  else
    {
      t = p_30;
    }
  return(t);
}
static ATerm w_8 (ATerm o_80 (ATerm), ATerm m_21, ATerm l_21, ATerm t)
{
  t = o_80(t);
  {
    ATerm s_30 = t;
    int t_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm v_3 (ATerm t)
        {
          ATerm l_34 = NULL;
          l_34 = t;
          {
            ATerm u_30 = t;
            int v_30 = stack_ptr;
            if((PushChoice() == 0))
              {
                static ATerm x_3 (ATerm t)
                {
                  ATerm n_34 = NULL,o_34 = NULL,p_34 = NULL,q_34 = NULL,r_34 = NULL;
                  o_34 = t;
                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, o_34), term_z_11), m_21), term_y_30), l_34);
                  r_34 = t;
                  t = SSL_concat_strings(r_34);
                  p_34 = t;
                  t = (ATerm) ATinsert(ATempty, term_h_14);
                  q_34 = t;
                  t = (ATerm) ATmakeAppl(sym__2, p_34, (ATerm) ATinsert(ATempty, term_h_14));
                  t = v_8(p_34, q_34, t);
                  n_34 = t;
                  t = (ATerm) ATmakeAppl(sym__2, o_34, (ATerm) ATmakeAppl(sym_FILE_1, n_34));
                  return(t);
                }
                t = m_21;
                t = is_relpath_0_0(t);
                t = l_21;
                t = fetch_elem_1_0(x_3, t);
                LocalPopChoice(v_30);
              }
            else
              {
                t = u_30;
                {
                  static ATerm z_3 (ATerm t)
                  {
                    ATerm t_13 = NULL,v_13 = NULL,b_14 = NULL,c_14 = NULL,d_14 = NULL;
                    v_13 = t;
                    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, v_13), term_z_11), m_21);
                    d_14 = t;
                    t = SSL_concat_strings(d_14);
                    b_14 = t;
                    t = (ATerm) ATinsert(ATempty, term_h_14);
                    c_14 = t;
                    t = (ATerm) ATmakeAppl(sym__2, b_14, (ATerm) ATinsert(ATempty, term_h_14));
                    t = v_8(b_14, c_14, t);
                    t_13 = t;
                    t = (ATerm) ATmakeAppl(sym__2, v_13, (ATerm) ATmakeAppl(sym_FILE_1, t_13));
                    return(t);
                  }
                  t = SSL_explode_string(m_21);
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      ATerm z_30 = ATgetFirst((ATermList) t);
                      if(((ATgetType(z_30) != AT_INT) || (ATgetInt((ATermInt) z_30) != 47)))
                        _fail(t);
                      {
                        ATerm a_31 = (ATerm) ATgetNext((ATermList) t);
                      }
                    }
                  else
                    _fail(t);
                  t = l_21;
                  t = fetch_elem_1_0(z_3, t);
                }
              }
          }
          return(t);
        }
        t = fetch_elem_1_0(v_3, t);
        LocalPopChoice(t_30);
      }
    else
      {
        t = s_30;
        {
          ATerm b_31 = t;
          int c_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              static ATerm a_4 (ATerm t)
              {
                ATerm s_34 = NULL,t_34 = NULL,u_34 = NULL,v_34 = NULL,w_34 = NULL,x_34 = NULL;
                s_34 = t;
                t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, s_34), term_z_11), m_21);
                x_34 = t;
                t = SSL_concat_strings(x_34);
                t_34 = t;
                t = term_r_24;
                v_34 = t;
                t = (ATerm) ATmakeAppl(sym_Tool_1, t_34);
                w_34 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_r_24, (ATerm) ATmakeAppl(sym_Tool_1, t_34));
                t = q_9(v_34, w_34, t);
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    ATerm d_31 = ATgetFirst((ATermList) t);
                    if(match_cons(d_31, sym__2))
                      {
                        ATerm f_31 = ATgetArgument(d_31, 0);
                        u_34 = ATgetArgument(d_31, 1);
                      }
                    else
                      _fail(t);
                    {
                      ATerm e_31 = (ATerm) ATgetNext((ATermList) t);
                    }
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym__2, s_34, (ATerm) ATmakeAppl(sym_FILE_1, u_34));
                return(t);
              }
              t = l_21;
              t = fetch_elem_1_0(a_4, t);
              LocalPopChoice(c_31);
            }
          else
            {
              t = b_31;
              {
                ATerm g_31 = t;
                int i_31 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_k_31;
                    t = get_config_0_0(t);
                    LocalPopChoice(i_31);
                    {
                      ATerm y_34 = NULL,z_34 = NULL,a_35 = NULL,b_35 = NULL,c_35 = NULL;
                      y_34 = t;
                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_o_31), m_21), term_n_31);
                      c_35 = t;
                      t = SSL_concat_strings(c_35);
                      z_34 = t;
                      t = term_s_21;
                      a_35 = t;
                      t = (ATerm) ATinsert(ATempty, z_34);
                      b_35 = t;
                      t = SSL_printnl(a_35, b_35);
                      t = y_34;
                      _fail(t);
                    }
                  }
                else
                  {
                    t = g_31;
                    {
                      ATerm d_35 = NULL,e_35 = NULL,f_35 = NULL;
                      t = term_s_21;
                      e_35 = t;
                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_o_31), m_21), term_n_31);
                      f_35 = t;
                      t = SSL_printnl(e_35, f_35);
                      t = term_n_14;
                      d_35 = t;
                      t = SSL_exit(d_35);
                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_o_31), m_21), term_n_31);
                    }
                  }
              }
            }
        }
      }
  }
  return(t);
}
static ATerm g_4 (ATerm t)
{
  t = term_q_31;
  return(t);
}
ATerm get_module_1_0 (ATerm n_80 (ATerm), ATerm t)
{
  ATerm j_35 = NULL,k_35 = NULL,l_35 = NULL,m_35 = NULL;
  t = basename_1_0(_id, t);
  l_35 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_t_23), term_t_31), term_s_31), term_r_31);
  m_35 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_35, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_t_23), term_t_31), term_s_31), term_r_31));
  t = w_8(n_80, l_35, m_35, t);
  if(match_cons(t, sym__2))
    {
      ATerm u_31 = ATgetArgument(t, 0);
      ATerm v_31 = ATgetArgument(t, 1);
      if(match_cons(v_31, sym_FILE_1))
        {
          j_35 = ATgetArgument(v_31, 0);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  {
    static ATerm c_4 (ATerm t)
    {
      ATerm s_35 = NULL;
      s_35 = t;
      t = j_35;
      t = debug_1_0(g_4, t);
      t = s_35;
      return(t);
    }
    t = if_verbose3_1_0(c_4, t);
  }
  t = parse_module_0_0(t);
  k_35 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_35, k_35);
  return(t);
}
static ATerm y_8 (ATerm b_93 (ATerm), ATerm c_93 (ATerm), ATerm b_29, ATerm a_29, ATerm t)
{
  t = c_93(t);
  {
    static ATerm h_4 (ATerm t)
    {
      ATerm t_35 = NULL;
      t_35 = t;
      t = (ATerm) ATmakeAppl(sym__2, b_29, t_35);
      t = b_93(t);
      return(t);
    }
    t = fetch_1_0(h_4, t);
  }
  t = a_29;
  return(t);
}
static ATerm z_8 (ATerm t_92 (ATerm), ATerm v_28, ATerm u_28, ATerm t)
{
  static ATerm l_36 (ATerm t)
  {
    ATerm g_36 = NULL,h_36 = NULL,i_36 = NULL;
    g_36 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = g_36;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            h_36 = ATgetFirst((ATermList) t);
            i_36 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm w_31 = t;
          int x_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = g_36;
              {
                static ATerm i_4 (ATerm t)
                {
                  t = u_28;
                  return(t);
                }
                t = y_8(t_92, i_4, h_36, i_36, t);
              }
              t = l_36(t);
              LocalPopChoice(x_31);
            }
          else
            {
              t = w_31;
              {
                ATerm m_14 = NULL,p_14 = NULL,p_4 = NULL;
                t = SSLgetAnnotations(g_36);
                m_14 = t;
                t = i_36;
                t = l_36(t);
                p_14 = t;
                t = (ATerm) ATinsert(CheckATermList(p_14), h_36);
                p_4 = t;
                t = SSLsetAnnotations(p_4, m_14);
              }
            }
        }
      }
    return(t);
  }
  t = v_28;
  t = l_36(t);
  return(t);
}
static ATerm k_4 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm y_31 = ATgetArgument(t, 0);
      if(((ATgetType(y_31) != AT_LIST) || !(ATisEmpty(y_31))))
        _fail(t);
      {
        ATerm z_31 = ATgetArgument(t, 1);
        if(((ATgetType(z_31) != AT_LIST) || !(ATisEmpty(z_31))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm m_4 (ATerm t)
{
  ATerm x_36 = NULL,z_36 = NULL,a_37 = NULL,b_37 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm a_32 = ATgetArgument(t, 0);
      if(((ATgetType(a_32) == AT_LIST) && !(ATisEmpty(a_32))))
        {
          x_36 = ATgetFirst((ATermList) a_32);
          z_36 = (ATerm) ATgetNext((ATermList) a_32);
        }
      else
        _fail(t);
      {
        ATerm b_32 = ATgetArgument(t, 1);
        if(((ATgetType(b_32) == AT_LIST) && !(ATisEmpty(b_32))))
          {
            a_37 = ATgetFirst((ATermList) b_32);
            b_37 = (ATerm) ATgetNext((ATermList) b_32);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, x_36, a_37), (ATerm) ATmakeAppl(sym__2, z_36, b_37));
  return(t);
}
static ATerm n_4 (ATerm t)
{
  ATerm f_37 = NULL,m_37 = NULL;
  if(match_cons(t, sym__2))
    {
      f_37 = ATgetArgument(t, 0);
      m_37 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(m_37), f_37);
  return(t);
}
static ATerm e_9 (ATerm z_588, ATerm e_589, ATerm l_55, ATerm t)
{
  ATerm s_36 = NULL,t_36 = NULL,u_36 = NULL,v_36 = NULL;
  t = SSL_explode_term(e_589);
  if(match_cons(t, sym__2))
    {
      s_36 = ATgetArgument(t, 0);
      u_36 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(z_588);
  if(match_cons(t, sym__2))
    {
      if((s_36 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      t_36 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, t_36, u_36);
  t = genzip_4_0(k_4, m_4, n_4, _id, t);
  v_36 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_36, l_55);
  t = conc_0_0(t);
  return(t);
}
static ATerm q_4 (ATerm t)
{
  ATerm g_38 = NULL;
  g_38 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, g_38);
  return(t);
}
static ATerm s_4 (ATerm t)
{
  ATerm h_38 = NULL,i_38 = NULL,j_38 = NULL,k_38 = NULL,r_4 = NULL;
  k_38 = t;
  if(match_cons(t, sym__2))
    {
      i_38 = ATgetArgument(t, 0);
      j_38 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_38);
  h_38 = t;
  t = j_38;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, i_38, j_38);
  r_4 = t;
  t = SSLsetAnnotations(r_4, h_38);
  return(t);
}
static ATerm u_4 (ATerm t)
{
  ATerm d_39 = NULL,e_39 = NULL,f_39 = NULL,g_39 = NULL,h_39 = NULL;
  d_39 = t;
  if(match_cons(t, sym__2))
    {
      e_39 = ATgetArgument(t, 0);
      f_39 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_39;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_39 = ATgetFirst((ATermList) t);
      h_39 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm c_32 = t;
        int d_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = r_39(e_39, f_39, d_39, t);
            LocalPopChoice(d_32);
          }
        else
          {
            t = c_32;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(e_39), g_39), h_39);
          }
      }
    }
  else
    {
      t = r_39(e_39, f_39, d_39, t);
    }
  return(t);
}
static ATerm r_39 (ATerm l_38, ATerm m_38, ATerm n_38, ATerm t)
{
  ATerm o_38 = NULL,r_38 = NULL,t_4 = NULL,u_38 = NULL,v_38 = NULL,w_38 = NULL,x_38 = NULL;
  t = SSLgetAnnotations(n_38);
  o_38 = t;
  t = m_38;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_38 = ATgetFirst((ATermList) t);
      x_38 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = u_38;
  if(match_cons(t, sym__2))
    {
      v_38 = ATgetArgument(t, 0);
      w_38 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm e_32 = t;
    int f_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_38;
        if((v_38 != t))
          {
            _fail(t);
          }
        t = x_38;
        LocalPopChoice(f_32);
      }
    else
      {
        t = e_32;
        t = m_38;
        t = e_9(v_38, w_38, x_38, t);
      }
  }
  r_38 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_38, r_38);
  t_4 = t;
  t = SSLsetAnnotations(t_4, o_38);
  return(t);
}
static ATerm v_4 (ATerm t)
{
  ATerm q_39 = NULL;
  if(match_cons(t, sym__2))
    {
      q_39 = ATgetArgument(t, 0);
      if((q_39 != ATgetArgument(t, 1)))
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
  ATerm g_32 = t;
  int i_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(q_4, s_4, u_4, t);
      LocalPopChoice(i_32);
    }
  else
    {
      t = g_32;
      {
        ATerm l_39 = NULL,m_39 = NULL,n_39 = NULL;
        l_39 = t;
        if(match_cons(t, sym__2))
          {
            m_39 = ATgetArgument(t, 0);
            n_39 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = l_39;
        t = z_8(v_4, m_39, n_39, t);
      }
    }
  return(t);
}
static ATerm g_9 (ATerm m_113 (ATerm), ATerm n_113 (ATerm), ATerm o_113 (ATerm), ATerm g_58, ATerm d_58, ATerm k_58, ATerm h_58, ATerm e_58, ATerm f_58, ATerm t)
{
  ATerm s_39 = NULL,t_39 = NULL,u_39 = NULL,v_39 = NULL,w_39 = NULL,x_39 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, g_58, h_58);
  t = m_113(t);
  s_39 = t;
  t = n_113(t);
  t_39 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_39, k_58);
  t = diff_0_0(t);
  u_39 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_39, d_58);
  t = conc_0_0(t);
  v_39 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_39, k_58);
  t = conc_0_0(t);
  w_39 = t;
  t = (ATerm) ATmakeAppl(sym__3, g_58, s_39, e_58);
  t = o_113(t);
  x_39 = t;
  t = (ATerm) ATmakeAppl(sym__5, v_39, w_39, h_58, x_39, f_58);
  return(t);
}
ATerm GnNext_3_0 (ATerm m_113 (ATerm), ATerm n_113 (ATerm), ATerm o_113 (ATerm), ATerm t)
{
  ATerm z_39 = NULL,a_40 = NULL,b_40 = NULL,c_40 = NULL,d_40 = NULL,e_40 = NULL;
  if(match_cons(t, sym__5))
    {
      ATerm j_32 = ATgetArgument(t, 0);
      if(((ATgetType(j_32) == AT_LIST) && !(ATisEmpty(j_32))))
        {
          z_39 = ATgetFirst((ATermList) j_32);
          a_40 = (ATerm) ATgetNext((ATermList) j_32);
        }
      else
        _fail(t);
      b_40 = ATgetArgument(t, 1);
      c_40 = ATgetArgument(t, 2);
      d_40 = ATgetArgument(t, 3);
      e_40 = ATgetArgument(t, 4);
    }
  else
    _fail(t);
  t = g_9(m_113, n_113, o_113, z_39, a_40, b_40, c_40, d_40, e_40, t);
  return(t);
}
ATerm while_not_2_0 (ATerm z_81 (ATerm), ATerm a_82 (ATerm), ATerm t)
{
  static ATerm f_40 (ATerm t)
  {
    ATerm k_32 = t;
    int o_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = z_81(t);
        LocalPopChoice(o_32);
      }
    else
      {
        t = k_32;
        t = a_82(t);
        t = f_40(t);
      }
    return(t);
  }
  t = f_40(t);
  return(t);
}
ATerm for_3_0 (ATerm c_82 (ATerm), ATerm d_82 (ATerm), ATerm e_82 (ATerm), ATerm t)
{
  t = c_82(t);
  t = while_not_2_0(d_82, e_82, t);
  return(t);
}
static ATerm x_4 (ATerm t)
{
  ATerm k_40 = NULL,l_40 = NULL,o_40 = NULL;
  if(match_cons(t, sym__3))
    {
      k_40 = ATgetArgument(t, 0);
      l_40 = ATgetArgument(t, 1);
      o_40 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__5, k_40, k_40, l_40, o_40, (ATerm) ATempty);
  return(t);
}
static ATerm c_5 (ATerm t)
{
  ATerm t_40 = NULL,u_40 = NULL;
  if(match_cons(t, sym__5))
    {
      ATerm p_32 = ATgetArgument(t, 0);
      if(((ATgetType(p_32) != AT_LIST) || !(ATisEmpty(p_32))))
        _fail(t);
      {
        ATerm z_32 = ATgetArgument(t, 1);
      }
      {
        ATerm a_33 = ATgetArgument(t, 2);
      }
      t_40 = ATgetArgument(t, 3);
      u_40 = ATgetArgument(t, 4);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, t_40, u_40);
  return(t);
}
ATerm graph_nodes_roots_3_0 (ATerm j_113 (ATerm), ATerm k_113 (ATerm), ATerm l_113 (ATerm), ATerm t)
{
  ATerm i_40 = NULL;
  static ATerm d_5 (ATerm t)
  {
    ATerm e_33 = t;
    int f_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = GnNext_3_0(j_113, k_113, l_113, t);
        LocalPopChoice(f_33);
      }
    else
      {
        t = e_33;
        {
          ATerm c_41 = NULL,d_41 = NULL,e_41 = NULL,f_41 = NULL,g_41 = NULL,h_41 = NULL,i_41 = NULL;
          if(match_cons(t, sym__5))
            {
              c_41 = ATgetArgument(t, 0);
              f_41 = ATgetArgument(t, 1);
              g_41 = ATgetArgument(t, 2);
              h_41 = ATgetArgument(t, 3);
              i_41 = ATgetArgument(t, 4);
            }
          else
            _fail(t);
          t = c_41;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              d_41 = ATgetFirst((ATermList) t);
              e_41 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__5, e_41, f_41, g_41, h_41, (ATerm) ATinsert(CheckATermList(i_41), d_41));
        }
      }
    return(t);
  }
  t = for_3_0(x_4, c_5, d_5, t);
  if(match_cons(t, sym__2))
    {
      i_40 = ATgetArgument(t, 0);
      {
        ATerm g_33 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = i_40;
  return(t);
}
ATerm filter_1_0 (ATerm b_96 (ATerm), ATerm t)
{
  ATerm r_42 = NULL,u_42 = NULL,v_42 = NULL;
  r_42 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = r_42;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          u_42 = ATgetFirst((ATermList) t);
          v_42 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm p_33 = t;
        int u_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_15 = NULL,n_15 = NULL,o_15 = NULL,w_4 = NULL;
            t = SSLgetAnnotations(r_42);
            g_15 = t;
            t = u_42;
            t = b_96(t);
            n_15 = t;
            t = v_42;
            t = filter_1_0(b_96, t);
            o_15 = t;
            t = (ATerm) ATinsert(CheckATermList(o_15), n_15);
            w_4 = t;
            t = SSLsetAnnotations(w_4, g_15);
            LocalPopChoice(u_33);
          }
        else
          {
            t = p_33;
            t = v_42;
            t = filter_1_0(b_96, t);
          }
      }
    }
  return(t);
}
static ATerm e_5 (ATerm t)
{
  ATerm v_33 = t;
  if((PushChoice() == 0))
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-I", 0, ATtrue)))
        _fail(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = v_33;
    }
  return(t);
}
static ATerm h_5 (ATerm t)
{
  ATerm q_43 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm w_33 = ATgetArgument(t, 0);
      ATerm y_33 = ATgetArgument(t, 1);
      if(match_cons(y_33, sym_Specification_1))
        {
          q_43 = ATgetArgument(y_33, 0);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  t = i_8(q_43, t);
  return(t);
}
static ATerm j_5 (ATerm t)
{
  ATerm r_43 = NULL,s_43 = NULL;
  if(match_cons(t, sym__3))
    {
      ATerm a_34 = ATgetArgument(t, 0);
      r_43 = ATgetArgument(t, 1);
      s_43 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(s_43), r_43);
  return(t);
}
static ATerm l_5 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_d_34;
  return(t);
}
static ATerm n_5 (ATerm t)
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
static ATerm p_5 (ATerm t)
{
  ATerm v_43 = NULL,w_43 = NULL,x_43 = NULL,z_43 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm e_34 = ATgetArgument(t, 0);
      if(match_cons(e_34, sym__2))
        {
          v_43 = ATgetArgument(e_34, 0);
          w_43 = ATgetArgument(e_34, 1);
        }
      else
        _fail(t);
      {
        ATerm f_34 = ATgetArgument(t, 1);
        if(match_cons(f_34, sym__2))
          {
            x_43 = ATgetArgument(f_34, 0);
            z_43 = ATgetArgument(f_34, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(x_43), v_43), (ATerm) ATinsert(CheckATermList(z_43), w_43));
  return(t);
}
static ATerm j_9 (ATerm c_21, ATerm t)
{
  ATerm e_43 = NULL,f_43 = NULL,g_43 = NULL,h_43 = NULL,m_43 = NULL,n_43 = NULL,y_4 = NULL;
  ATerm g_34 = t;
  int h_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_f_30;
      t = get_config_0_0(t);
      t = filter_1_0(e_5, t);
      LocalPopChoice(h_34);
    }
  else
    {
      t = g_34;
      t = (ATerm) ATempty;
    }
  e_43 = t;
  t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATinsert(ATempty, c_21), term_w_27, (ATerm) ATempty);
  {
    static ATerm g_5 (ATerm t)
    {
      ATerm o_43 = NULL,p_43 = NULL;
      static ATerm k_5 (ATerm t)
      {
        t = (ATerm) ATinsert(CheckATermList(e_43), term_z_11);
        return(t);
      }
      p_43 = t;
      t = SSL_explode_term(p_43);
      if(match_cons(t, sym__2))
        {
          ATerm i_34 = ATgetArgument(t, 0);
          if((ATgetSymbol((ATermAppl) i_34) != ATmakeSymbol("", 0, ATtrue)))
            _fail(t);
          {
            ATerm j_34 = ATgetArgument(t, 1);
            if(((ATgetType(j_34) == AT_LIST) && !(ATisEmpty(j_34))))
              {
                o_43 = ATgetFirst((ATermList) j_34);
                {
                  ATerm k_34 = (ATerm) ATgetNext((ATermList) j_34);
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
    t = graph_nodes_roots_3_0(g_5, h_5, j_5, t);
  }
  t = genzip_4_0(l_5, n_5, p_5, _id, t);
  n_43 = t;
  if(match_cons(t, sym__2))
    {
      g_43 = ATgetArgument(t, 0);
      h_43 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_43);
  f_43 = t;
  t = h_43;
  t = flatten_stratego_0_0(t);
  m_43 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_43, m_43);
  y_4 = t;
  t = SSLsetAnnotations(y_4, f_43);
  return(t);
}
static ATerm l_9 (ATerm y_42, ATerm z_42, ATerm t)
{
  t = SSL_copy(y_42, z_42);
  return(t);
}
ATerm copy_to_1_0 (ATerm o_0 (ATerm), ATerm t)
{
  ATerm b_45 = NULL,d_45 = NULL;
  b_45 = t;
  if(match_cons(t, sym_FILE_1))
    {
      d_45 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm m_34 = t;
    int g_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_15 = NULL;
        t = b_45;
        t = o_0(t);
        z_15 = t;
        if(match_cons(t, sym_stdout_0))
          {
            t = z_15;
          }
        else
          {
            if(!(match_cons(t, sym_stderr_0)))
              _fail(t);
            t = z_15;
          }
        t = (ATerm) ATmakeAppl(sym__2, d_45, z_15);
        t = l_9(d_45, z_15, t);
        t = (ATerm) ATmakeAppl(sym_FILE_1, d_45);
        LocalPopChoice(g_35);
      }
    else
      {
        t = m_34;
        {
          ATerm h_35 = t;
          int i_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm k_16 = NULL;
              t = b_45;
              t = o_0(t);
              k_16 = t;
              {
                ATerm n_35 = t;
                if((PushChoice() == 0))
                  {
                    ATerm o_16 = NULL;
                    o_16 = t;
                    if(match_cons(t, sym_stdout_0))
                      {
                        t = o_16;
                      }
                    else
                      {
                        if(match_cons(t, sym_stderr_0))
                          {
                            t = o_16;
                          }
                        else
                          {
                            t = o_16;
                            if((d_45 != t))
                              {
                                _fail(t);
                              }
                            t = o_16;
                          }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = n_35;
                  }
              }
              t = (ATerm) ATmakeAppl(sym__2, d_45, k_16);
              t = l_9(d_45, k_16, t);
              t = (ATerm) ATmakeAppl(sym_FILE_1, d_45);
              LocalPopChoice(i_35);
            }
          else
            {
              t = h_35;
              t = b_45;
              t = o_0(t);
              if((d_45 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, d_45);
            }
        }
      }
  }
  return(t);
}
static ATerm m_9 (ATerm e_51, ATerm f_51, ATerm t)
{
  ATerm i_45 = NULL,j_45 = NULL;
  j_45 = t;
  {
    ATerm o_35 = t;
    int p_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, e_51, f_51);
        t = q_9(e_51, f_51, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm q_35 = ATgetFirst((ATermList) t);
            i_45 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(p_35);
        t = SSL_table_put(e_51, f_51, i_45);
        t = (ATerm) ATmakeAppl(sym__3, e_51, f_51, i_45);
      }
    else
      {
        t = o_35;
        t = SSL_table_remove(e_51, f_51);
        t = (ATerm) ATmakeAppl(sym__2, e_51, f_51);
      }
  }
  t = j_45;
  return(t);
}
ATerm end_scope_1_0 (ATerm e_101 (ATerm), ATerm t)
{
  ATerm l_45 = NULL,o_45 = NULL,r_45 = NULL,t_45 = NULL,v_45 = NULL;
  t_45 = t;
  t = e_101(t);
  r_45 = t;
  {
    ATerm r_35 = t;
    int u_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_45 = NULL;
        t = term_l_27;
        y_45 = t;
        t = (ATerm) ATmakeAppl(sym__2, r_45, term_l_27);
        t = q_9(r_45, y_45, t);
        LocalPopChoice(u_35);
      }
    else
      {
        t = r_35;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_45 = ATgetFirst((ATermList) t);
      l_45 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_l_27;
  v_45 = t;
  t = SSL_table_put(r_45, v_45, l_45);
  t = o_45;
  {
    static ATerm q_5 (ATerm t)
    {
      ATerm a_46 = NULL;
      a_46 = t;
      t = (ATerm) ATmakeAppl(sym__2, r_45, a_46);
      t = m_9(r_45, a_46, t);
      return(t);
    }
    t = map_1_0(q_5, t);
  }
  t = t_45;
  return(t);
}
ATerm restore_always_2_0 (ATerm e_81 (ATerm), ATerm f_81 (ATerm), ATerm t)
{
  ATerm v_35 = t;
  int w_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = e_81(t);
      t = f_81(t);
      LocalPopChoice(w_35);
    }
  else
    {
      t = v_35;
      t = f_81(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm d_101 (ATerm), ATerm t)
{
  ATerm f_46 = NULL,g_46 = NULL,i_46 = NULL,j_46 = NULL,m_46 = NULL;
  g_46 = t;
  t = d_101(t);
  f_46 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_46, term_l_27);
  {
    ATerm x_35 = t;
    int y_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_46 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm z_35 = ATgetArgument(t, 0);
            ATerm a_36 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_l_27;
        r_46 = t;
        t = (ATerm) ATmakeAppl(sym__2, f_46, term_l_27);
        t = q_9(f_46, r_46, t);
        LocalPopChoice(y_35);
      }
    else
      {
        t = x_35;
        t = (ATerm) ATempty;
      }
  }
  i_46 = t;
  t = term_l_27;
  j_46 = t;
  t = (ATerm) ATinsert(CheckATermList(i_46), (ATerm) ATempty);
  m_46 = t;
  t = SSL_table_put(f_46, j_46, m_46);
  t = g_46;
  return(t);
}
static ATerm r_5 (ATerm t)
{
  t = term_d_28;
  return(t);
}
static ATerm w_5 (ATerm t)
{
  ATerm c_47 = NULL;
  c_47 = t;
  {
    ATerm b_36 = t;
    int c_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(c_47);
        LocalPopChoice(c_36);
      }
    else
      {
        t = b_36;
        t = c_47;
      }
  }
  return(t);
}
static ATerm x_5 (ATerm t)
{
  t = term_d_28;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm q_111 (ATerm), ATerm t)
{
  ATerm u_46 = NULL;
  static ATerm u_5 (ATerm t)
  {
    ATerm v_46 = NULL;
    v_46 = t;
    {
      ATerm d_36 = t;
      int e_36 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm w_46 = NULL,x_46 = NULL;
          t = term_d_28;
          w_46 = t;
          t = term_l_27;
          x_46 = t;
          t = term_f_36;
          t = q_9(w_46, x_46, t);
          LocalPopChoice(e_36);
        }
      else
        {
          t = d_36;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
        }
    }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((u_46 != NULL) && (u_46 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          u_46 = ATgetFirst((ATermList) t);
        {
          ATerm j_36 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    t = u_46;
    t = map_1_0(w_5, t);
    t = v_46;
    t = end_scope_1_0(x_5, t);
    return(t);
  }
  t = begin_scope_1_0(r_5, t);
  t = restore_always_2_0(q_111, u_5, t);
  return(t);
}
static ATerm g_6 (ATerm t)
{
  ATerm k_36 = t;
  int m_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_r_11;
      t = get_config_0_0(t);
      LocalPopChoice(m_36);
    }
  else
    {
      t = k_36;
      t = term_n_36;
    }
  return(t);
}
ATerm xtc_io_1_0 (ATerm r_111 (ATerm), ATerm t)
{
  static ATerm y_5 (ATerm t)
  {
    ATerm o_36 = t;
    int r_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_47 = NULL;
        t = term_e_28;
        t = get_config_0_0(t);
        m_47 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, m_47);
        LocalPopChoice(r_36);
      }
    else
      {
        t = o_36;
        t = term_g_14;
      }
    t = r_111(t);
    t = copy_to_1_0(g_6, t);
    return(t);
  }
  t = xtc_temp_files_1_0(y_5, t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm o_47 = NULL,p_47 = NULL,s_47 = NULL,t_47 = NULL,u_47 = NULL;
  o_47 = t;
  t = term_w_27;
  t = whoami_0_0(t);
  p_47 = t;
  t = term_s_21;
  t_47 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_y_36), p_47), term_w_36);
  u_47 = t;
  t = SSL_printnl(t_47, u_47);
  t = term_n_14;
  s_47 = t;
  t = SSL_exit(s_47);
  t = o_47;
  return(t);
}
static ATerm k_6 (ATerm t)
{
  ATerm a_48 = NULL;
  a_48 = t;
  if(match_string(t, "-k"))
    {
      t = a_48;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = a_48;
    }
  return(t);
}
static ATerm l_6 (ATerm t)
{
  ATerm b_48 = NULL,c_48 = NULL,d_48 = NULL;
  b_48 = t;
  t = SSL_string_to_int(b_48);
  c_48 = t;
  t = term_i_14;
  d_48 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_i_14, c_48);
  t = t_9(d_48, c_48, t);
  t = b_48;
  return(t);
}
static ATerm m_6 (ATerm t)
{
  t = term_c_37;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(k_6, l_6, m_6, t);
  return(t);
}
static ATerm n_6 (ATerm t)
{
  ATerm f_48 = NULL;
  f_48 = t;
  if(match_string(t, "-S"))
    {
      t = f_48;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = f_48;
    }
  return(t);
}
static ATerm o_6 (ATerm t)
{
  ATerm i_48 = NULL,j_48 = NULL;
  t = term_s_14;
  i_48 = t;
  t = term_d_37;
  j_48 = t;
  t = term_e_37;
  t = t_9(i_48, j_48, t);
  t = term_g_37;
  return(t);
}
static ATerm p_6 (ATerm t)
{
  t = term_h_37;
  return(t);
}
static ATerm q_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm s_6 (ATerm t)
{
  ATerm k_48 = NULL,l_48 = NULL,m_48 = NULL;
  k_48 = t;
  t = SSL_string_to_int(k_48);
  l_48 = t;
  t = term_s_14;
  m_48 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_14, l_48);
  t = t_9(m_48, l_48, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, k_48);
  return(t);
}
static ATerm u_6 (ATerm t)
{
  t = term_i_37;
  return(t);
}
static ATerm v_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm w_6 (ATerm t)
{
  ATerm n_48 = NULL,q_48 = NULL;
  t = term_j_37;
  n_48 = t;
  t = term_w_27;
  q_48 = t;
  t = term_k_37;
  t = t_9(n_48, q_48, t);
  t = term_l_37;
  return(t);
}
static ATerm x_6 (ATerm t)
{
  t = term_n_37;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm o_37 = t;
  int r_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(n_6, o_6, p_6, t);
      LocalPopChoice(r_37);
    }
  else
    {
      t = o_37;
      {
        ATerm s_37 = t;
        int t_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(q_6, s_6, u_6, t);
            LocalPopChoice(t_37);
          }
        else
          {
            t = s_37;
            t = Option_3_0(v_6, w_6, x_6, t);
          }
      }
    }
  return(t);
}
static ATerm t_9 (ATerm i_59, ATerm j_59, ATerm t)
{
  ATerm r_48 = NULL;
  t = term_r_13;
  r_48 = t;
  t = SSL_table_put(r_48, i_59, j_59);
  t = (ATerm) ATmakeAppl(sym__3, term_r_13, i_59, j_59);
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm w_48 = NULL,x_48 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm z_48 = NULL,a_49 = NULL,b_49 = NULL;
      t = term_w_27;
      t = e_0(t);
      z_48 = t;
      t = term_u_37;
      a_49 = t;
      t = term_z_37;
      b_49 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_u_37, term_z_37, z_48);
      t = r_9(a_49, b_49, z_48, t);
      _fail(t);
    }
  else
    {
      ATerm e_49 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          w_48 = ATgetFirst((ATermList) t);
          x_48 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = w_48;
      t = c_0(t);
      t = term_w_27;
      t = d_0(t);
      e_49 = t;
      t = (ATerm) ATinsert(CheckATermList(x_48), e_49);
    }
  return(t);
}
static ATerm y_6 (ATerm t)
{
  ATerm g_49 = NULL;
  g_49 = t;
  if(match_string(t, "-o"))
    {
      t = g_49;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = g_49;
    }
  return(t);
}
static ATerm z_6 (ATerm t)
{
  ATerm h_49 = NULL,i_49 = NULL;
  h_49 = t;
  t = term_r_11;
  i_49 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_11, h_49);
  t = t_9(i_49, h_49, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, h_49);
  return(t);
}
static ATerm e_7 (ATerm t)
{
  t = term_a_38;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(y_6, z_6, e_7, t);
  return(t);
}
static ATerm f_7 (ATerm t)
{
  ATerm m_49 = NULL;
  m_49 = t;
  if(match_string(t, "-i"))
    {
      t = m_49;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = m_49;
    }
  return(t);
}
static ATerm g_7 (ATerm t)
{
  ATerm n_49 = NULL,o_49 = NULL;
  n_49 = t;
  t = term_e_28;
  o_49 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_28, n_49);
  t = t_9(o_49, n_49, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, n_49);
  return(t);
}
static ATerm h_7 (ATerm t)
{
  t = term_b_38;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(f_7, g_7, h_7, t);
  return(t);
}
static ATerm r_9 (ATerm z_50, ATerm a_51, ATerm y_50, ATerm t)
{
  ATerm q_49 = NULL,r_49 = NULL,s_49 = NULL;
  q_49 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_50, a_51);
  {
    ATerm c_38 = t;
    int d_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm e_38 = ATgetArgument(t, 0);
            ATerm f_38 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, z_50, a_51);
        t = q_9(z_50, a_51, t);
        LocalPopChoice(d_38);
      }
    else
      {
        t = c_38;
        t = (ATerm) ATempty;
      }
  }
  r_49 = t;
  t = (ATerm) ATinsert(CheckATermList(r_49), y_50);
  s_49 = t;
  t = SSL_table_put(z_50, a_51, s_49);
  t = q_49;
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm z_49 = NULL,a_50 = NULL,c_50 = NULL,d_50 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm e_50 = NULL,f_50 = NULL,r_50 = NULL;
      t = term_w_27;
      t = n_0(t);
      e_50 = t;
      t = term_u_37;
      f_50 = t;
      t = term_z_37;
      r_50 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_u_37, term_z_37, e_50);
      t = r_9(f_50, r_50, e_50, t);
      _fail(t);
    }
  else
    {
      ATerm v_50 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          z_49 = ATgetFirst((ATermList) t);
          a_50 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = a_50;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          c_50 = ATgetFirst((ATermList) t);
          d_50 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = z_49;
      t = k_0(t);
      t = c_50;
      t = l_0(t);
      v_50 = t;
      t = (ATerm) ATinsert(CheckATermList(d_50), v_50);
    }
  return(t);
}
ATerm at_end_1_0 (ATerm k_89 (ATerm), ATerm t)
{
  static ATerm l_52 (ATerm t)
  {
    ATerm e_52 = NULL,j_52 = NULL,k_52 = NULL;
    k_52 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        e_52 = ATgetFirst((ATermList) t);
        j_52 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm b_17 = NULL,i_17 = NULL,i_5 = NULL;
          t = SSLgetAnnotations(k_52);
          b_17 = t;
          t = j_52;
          t = l_52(t);
          i_17 = t;
          t = (ATerm) ATinsert(CheckATermList(i_17), e_52);
          i_5 = t;
          t = SSLsetAnnotations(i_5, b_17);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = k_52;
        t = k_89(t);
      }
    return(t);
  }
  t = l_52(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm b_51 = NULL,g_51 = NULL,h_51 = NULL;
  b_51 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = b_51;
    }
  else
    {
      static ATerm i_7 (ATerm t)
      {
        t = not_null(h_51);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          g_51 = ATgetFirst((ATermList) t);
          if(((h_51 != NULL) && (h_51 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            h_51 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = g_51;
      t = at_end_1_0(i_7, t);
    }
  return(t);
}
static ATerm z_52 (ATerm p_52, ATerm t)
{
  ATerm s_52 = NULL;
  t = SSL_explode_term(p_52);
  if(match_cons(t, sym__2))
    {
      ATerm p_38 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) p_38) != ATmakeSymbol("", 0, ATtrue)))
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
  ATerm u_52 = NULL,v_52 = NULL,w_52 = NULL;
  w_52 = t;
  if(match_cons(t, sym__2))
    {
      u_52 = ATgetArgument(t, 0);
      v_52 = ATgetArgument(t, 1);
      {
        ATerm q_38 = t;
        int s_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm j_7 (ATerm t)
            {
              t = v_52;
              return(t);
            }
            t = u_52;
            t = at_end_1_0(j_7, t);
            LocalPopChoice(s_38);
          }
        else
          {
            t = q_38;
            t = z_52(w_52, t);
          }
      }
    }
  else
    {
      t = z_52(w_52, t);
    }
  return(t);
}
static ATerm k_9 (ATerm o_59, ATerm n_59, ATerm t)
{
  ATerm a_53 = NULL,d_53 = NULL,g_53 = NULL;
  t = o_59;
  {
    ATerm t_38 = t;
    int y_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        LocalPopChoice(y_38);
      }
    else
      {
        t = t_38;
        t = (ATerm) ATempty;
      }
  }
  d_53 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_59, d_53);
  t = conc_0_0(t);
  a_53 = t;
  t = term_r_13;
  g_53 = t;
  t = SSL_table_put(g_53, o_59, a_53);
  t = (ATerm) ATmakeAppl(sym__3, term_r_13, o_59, a_53);
  return(t);
}
static ATerm k_7 (ATerm t)
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
static ATerm l_7 (ATerm t)
{
  ATerm q_53 = NULL,t_53 = NULL,w_53 = NULL;
  q_53 = t;
  t = term_f_30;
  t_53 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, q_53), term_f_30);
  w_53 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_30, (ATerm) ATinsert(ATinsert(ATempty, q_53), term_f_30));
  t = k_9(t_53, w_53, t);
  t = term_w_27;
  return(t);
}
static ATerm m_7 (ATerm t)
{
  t = term_z_38;
  return(t);
}
static ATerm n_7 (ATerm t)
{
  ATerm x_53 = NULL;
  x_53 = t;
  if(match_string(t, "--nodep"))
    {
      t = x_53;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-nodep", 0, ATtrue)))
        _fail(t);
      t = x_53;
    }
  return(t);
}
static ATerm o_7 (ATerm t)
{
  ATerm y_53 = NULL,z_53 = NULL;
  t = term_x_11;
  y_53 = t;
  t = term_a_39;
  z_53 = t;
  t = term_b_39;
  t = t_9(y_53, z_53, t);
  t = term_w_27;
  return(t);
}
static ATerm p_7 (ATerm t)
{
  t = term_c_39;
  return(t);
}
static ATerm t_7 (ATerm t)
{
  ATerm c_54 = NULL;
  c_54 = t;
  if(match_string(t, "--dep"))
    {
      t = c_54;
    }
  else
    {
      if(match_string(t, "-d"))
        {
          t = c_54;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-dep", 0, ATtrue)))
            _fail(t);
          t = c_54;
        }
    }
  return(t);
}
static ATerm u_7 (ATerm t)
{
  ATerm d_54 = NULL,e_54 = NULL;
  d_54 = t;
  t = term_v_11;
  e_54 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_11, d_54);
  t = t_9(e_54, d_54, t);
  t = term_w_27;
  return(t);
}
static ATerm v_7 (ATerm t)
{
  t = term_i_39;
  return(t);
}
static ATerm w_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--imports", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm x_7 (ATerm t)
{
  ATerm i_54 = NULL,m_54 = NULL;
  t = term_j_39;
  i_54 = t;
  t = term_w_27;
  m_54 = t;
  t = term_k_39;
  t = t_9(i_54, m_54, t);
  t = term_w_27;
  return(t);
}
static ATerm y_7 (ATerm t)
{
  t = term_o_39;
  return(t);
}
static ATerm b_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--slack", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm f_8 (ATerm t)
{
  ATerm n_54 = NULL,o_54 = NULL;
  t = term_k_31;
  n_54 = t;
  t = term_w_27;
  o_54 = t;
  t = term_p_39;
  t = t_9(n_54, o_54, t);
  t = term_w_27;
  return(t);
}
static ATerm g_8 (ATerm t)
{
  t = term_y_39;
  return(t);
}
static ATerm h_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--asfix", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm l_8 (ATerm t)
{
  ATerm p_54 = NULL,q_54 = NULL;
  t = term_x_29;
  p_54 = t;
  t = term_a_39;
  q_54 = t;
  t = term_g_40;
  t = t_9(p_54, q_54, t);
  t = term_w_27;
  return(t);
}
static ATerm m_8 (ATerm t)
{
  t = term_h_40;
  return(t);
}
ATerm pack_stratego_options_0_0 (ATerm t)
{
  ATerm j_40 = t;
  int m_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ArgOption_3_0(k_7, l_7, m_7, t);
      LocalPopChoice(m_40);
    }
  else
    {
      t = j_40;
      {
        ATerm n_40 = t;
        int p_40 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Option_3_0(n_7, o_7, p_7, t);
            LocalPopChoice(p_40);
          }
        else
          {
            t = n_40;
            {
              ATerm s_40 = t;
              int v_40 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = ArgOption_3_0(t_7, u_7, v_7, t);
                  LocalPopChoice(v_40);
                }
              else
                {
                  t = s_40;
                  {
                    ATerm y_40 = t;
                    int z_40 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Option_3_0(w_7, x_7, y_7, t);
                        LocalPopChoice(z_40);
                      }
                    else
                      {
                        t = y_40;
                        {
                          ATerm a_41 = t;
                          int b_41 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Option_3_0(b_8, f_8, g_8, t);
                              LocalPopChoice(b_41);
                            }
                          else
                            {
                              t = a_41;
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
  ATerm r_54 = NULL,s_54 = NULL,t_54 = NULL,u_54 = NULL;
  t = report_run_time_0_0(t);
  t = term_w_27;
  t = whoami_0_0(t);
  r_54 = t;
  t = term_s_21;
  t_54 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_j_41), r_54);
  u_54 = t;
  t = SSL_printnl(t_54, u_54);
  t = term_n_14;
  s_54 = t;
  t = SSL_exit(s_54);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_k_41;
  t = get_config_0_0(t);
  return(t);
}
static ATerm n_9 (ATerm q_40, ATerm r_40, ATerm t)
{
  ATerm l_41 = t;
  int m_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(q_40, r_40);
      LocalPopChoice(m_41);
    }
  else
    {
      t = l_41;
      t = SSL_addr(q_40, r_40);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm x_94 (ATerm), ATerm y_94 (ATerm), ATerm t)
{
  ATerm w_54 = NULL,x_54 = NULL,y_54 = NULL;
  w_54 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = w_54;
      t = x_94(t);
    }
  else
    {
      ATerm b_55 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_54 = ATgetFirst((ATermList) t);
          y_54 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = y_54;
      t = foldr_2_0(x_94, y_94, t);
      b_55 = t;
      t = (ATerm) ATmakeAppl(sym__2, x_54, b_55);
      t = y_94(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm a_9 (ATerm t)
{
  t = term_d_37;
  return(t);
}
static ATerm b_9 (ATerm t)
{
  ATerm e_18 = NULL,f_18 = NULL;
  if(match_cons(t, sym__2))
    {
      e_18 = ATgetArgument(t, 0);
      f_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_9(e_18, f_18, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm e_55 = NULL,s_17 = NULL,u_17 = NULL;
  t = times_0_0(t);
  u_17 = t;
  t = SSL_explode_term(u_17);
  if(match_cons(t, sym__2))
    {
      ATerm n_41 = ATgetArgument(t, 0);
      s_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_17;
  t = foldr_2_0(a_9, b_9, t);
  e_55 = t;
  t = SSL_TicksToSeconds(e_55);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm y_55 = NULL,z_55 = NULL,a_56 = NULL;
  y_55 = t;
  if(match_cons(t, sym__2))
    {
      z_55 = ATgetArgument(t, 0);
      a_56 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm o_41 = t;
    int p_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_56;
        if((z_55 != t))
          {
            _fail(t);
          }
        t = y_55;
        LocalPopChoice(p_41);
      }
    else
      {
        t = o_41;
        t = (ATerm) ATmakeAppl(sym__2, z_55, a_56);
        {
          ATerm q_41 = t;
          int r_41 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(z_55, a_56);
              LocalPopChoice(r_41);
            }
          else
            {
              t = q_41;
              t = SSL_gtr(z_55, a_56);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, z_55, a_56);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm j_103 (ATerm), ATerm t)
{
  ATerm e_56 = NULL;
  e_56 = t;
  {
    ATerm s_41 = t;
    int t_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_56 = NULL;
        t = term_s_14;
        t = get_config_0_0(t);
        m_56 = t;
        t = (ATerm) ATmakeAppl(sym__2, m_56, term_n_14);
        t = geq_0_0(t);
        t = e_56;
        t = j_103(t);
        LocalPopChoice(t_41);
      }
    else
      {
        t = s_41;
        t = e_56;
      }
  }
  return(t);
}
static ATerm h_9 (ATerm t)
{
  ATerm s_56 = NULL,u_56 = NULL,x_56 = NULL,y_56 = NULL;
  t = run_time_0_0(t);
  s_56 = t;
  t = term_w_27;
  t = whoami_0_0(t);
  u_56 = t;
  t = term_s_21;
  x_56 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_u_41), s_56), term_x_14), u_56);
  y_56 = t;
  t = SSL_printnl(x_56, y_56);
  t = (ATerm) ATmakeAppl(sym__2, term_s_21, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_u_41), s_56), term_x_14), u_56));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(h_9, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm z_56 = NULL;
  t = report_run_time_0_0(t);
  t = term_d_37;
  z_56 = t;
  t = SSL_exit(z_56);
  return(t);
}
static ATerm o_9 (ATerm t)
{
  ATerm l_57 = NULL,m_57 = NULL;
  m_57 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = m_57;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          l_57 = ATgetArgument(t, 0);
          {
            ATerm x_18 = NULL,m_5 = NULL;
            t = SSLgetAnnotations(m_57);
            x_18 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, l_57);
            m_5 = t;
            t = SSLsetAnnotations(m_5, x_18);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = m_57;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm x_104 (ATerm), ATerm t)
{
  ATerm v_41 = t;
  int w_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_x_41;
      t = get_config_0_0(t);
      LocalPopChoice(w_41);
    }
  else
    {
      t = v_41;
      t = fetch_1_0(o_9, t);
    }
  t = x_104(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm p_57 = NULL,q_57 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_57 = ATgetFirst((ATermList) t);
      q_57 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm u_57 = NULL,w_57 = NULL;
        static ATerm p_9 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(u_57)), not_null(w_57));
          return(t);
        }
        t = q_57;
        t = i_0(t);
        if(((u_57 != NULL) && (u_57 != t)))
          _fail(t);
        else
          u_57 = t;
        t = p_57;
        t = g_0(t);
        if(((w_57 != NULL) && (w_57 != t)))
          _fail(t);
        else
          w_57 = t;
        t = q_57;
        t = reverse_acc_2_0(g_0, p_9, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_w_27;
      t = i_0(t);
    }
  return(t);
}
static ATerm q_9 (ATerm q_52, ATerm r_52, ATerm t)
{
  t = SSL_table_get(q_52, r_52);
  return(t);
}
static ATerm s_9 (ATerm t)
{
  ATerm a_58 = NULL,b_58 = NULL,c_58 = NULL,o_5 = NULL;
  c_58 = t;
  if(match_cons(t, sym_Program_1))
    {
      b_58 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_58);
  a_58 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, b_58);
  o_5 = t;
  t = SSLsetAnnotations(o_5, a_58);
  return(t);
}
static ATerm u_9 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm x_9 (ATerm t)
{
  ATerm n_58 = NULL;
  n_58 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, n_58), term_y_41);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm y_57 = NULL,z_57 = NULL;
  ATerm z_41 = t;
  int a_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_k_41;
      t = get_config_0_0(t);
      LocalPopChoice(a_42);
    }
  else
    {
      t = z_41;
      t = fetch_1_0(s_9, t);
    }
  t = term_b_42;
  t = echo_0_0(t);
  t = term_u_37;
  y_57 = t;
  t = term_z_37;
  z_57 = t;
  t = term_d_42;
  t = q_9(y_57, z_57, t);
  t = reverse_acc_2_0(_id, u_9, t);
  t = map_1_0(x_9, t);
  return(t);
}
ATerm fetch_1_0 (ATerm e_89 (ATerm), ATerm t)
{
  static ATerm m_59 (ATerm t)
  {
    ATerm h_59 = NULL,k_59 = NULL,l_59 = NULL;
    h_59 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        k_59 = ATgetFirst((ATermList) t);
        l_59 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm f_42 = t;
      int g_42 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm n_19 = NULL,s_19 = NULL,s_5 = NULL;
          t = SSLgetAnnotations(h_59);
          n_19 = t;
          t = k_59;
          t = e_89(t);
          s_19 = t;
          t = (ATerm) ATinsert(CheckATermList(l_59), s_19);
          s_5 = t;
          t = SSLsetAnnotations(s_5, n_19);
          LocalPopChoice(g_42);
        }
      else
        {
          t = f_42;
          {
            ATerm i_20 = NULL,m_20 = NULL,v_5 = NULL;
            t = SSLgetAnnotations(h_59);
            i_20 = t;
            t = l_59;
            t = m_59(t);
            m_20 = t;
            t = (ATerm) ATinsert(CheckATermList(m_20), k_59);
            v_5 = t;
            t = SSLsetAnnotations(v_5, i_20);
          }
        }
    }
    return(t);
  }
  t = m_59(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm z_59 = NULL,a_60 = NULL,b_60 = NULL;
  z_59 = t;
  {
    ATerm h_42 = t;
    int i_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = z_59;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm j_42 = ATgetFirst((ATermList) t);
                ATerm k_42 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = z_59;
          }
        LocalPopChoice(i_42);
      }
    else
      {
        t = h_42;
        t = (ATerm) ATinsert(ATempty, z_59);
      }
  }
  a_60 = t;
  t = term_n_36;
  b_60 = t;
  t = SSL_printnl(b_60, a_60);
  t = z_59;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_k_41;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
static ATerm y_9 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm z_9 (ATerm t)
{
  ATerm f_60 = NULL,g_60 = NULL;
  t = term_l_42;
  f_60 = t;
  t = term_w_27;
  g_60 = t;
  t = term_m_42;
  t = t_9(f_60, g_60, t);
  return(t);
}
static ATerm a_10 (ATerm t)
{
  t = term_n_42;
  return(t);
}
static ATerm b_10 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm d_10 (ATerm t)
{
  ATerm h_60 = NULL,i_60 = NULL,j_60 = NULL,k_60 = NULL;
  t = term_l_42;
  j_60 = t;
  t = term_w_27;
  k_60 = t;
  t = term_m_42;
  t = t_9(j_60, k_60, t);
  t = term_o_42;
  h_60 = t;
  t = term_w_27;
  i_60 = t;
  t = term_p_42;
  t = t_9(h_60, i_60, t);
  t = term_q_42;
  return(t);
}
static ATerm h_10 (ATerm t)
{
  t = term_s_42;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm t_42 = t;
  int w_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(y_9, z_9, a_10, t);
      LocalPopChoice(w_42);
    }
  else
    {
      t = t_42;
      t = Option_3_0(b_10, d_10, h_10, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm w_59 (ATerm), ATerm x_59 (ATerm), ATerm t)
{
  ATerm l_60 = NULL,m_60 = NULL,n_60 = NULL,o_60 = NULL,p_60 = NULL,q_60 = NULL,f_6 = NULL;
  q_60 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_60 = ATgetFirst((ATermList) t);
      n_60 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_60);
  l_60 = t;
  t = m_60;
  t = w_59(t);
  o_60 = t;
  t = n_60;
  t = x_59(t);
  p_60 = t;
  t = (ATerm) ATinsert(CheckATermList(p_60), o_60);
  f_6 = t;
  t = SSLsetAnnotations(f_6, l_60);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm o_107 (ATerm), ATerm t)
{
  ATerm v_60 = NULL,w_60 = NULL,x_60 = NULL,y_60 = NULL,a_61 = NULL,b_61 = NULL,r_6 = NULL;
  v_60 = t;
  {
    ATerm x_42 = t;
    int a_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_b_43;
        t = o_107(t);
        LocalPopChoice(a_43);
      }
    else
      {
        t = x_42;
      }
  }
  t = v_60;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_60 = ATgetFirst((ATermList) t);
      y_60 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_60);
  w_60 = t;
  t = term_k_41;
  b_61 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_41, x_60);
  t = t_9(b_61, x_60, t);
  t = y_60;
  {
    static ATerm l_61 (ATerm t)
    {
      ATerm c_43 = t;
      int d_43 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm i_43 = t;
          int j_43 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm e_61 = NULL;
              e_61 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = e_61;
              LocalPopChoice(j_43);
            }
          else
            {
              t = i_43;
              t = o_107(t);
              t = Cons_2_0(_id, l_61, t);
            }
          LocalPopChoice(d_43);
        }
      else
        {
          t = c_43;
          {
            ATerm h_61 = NULL,i_61 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                h_61 = ATgetFirst((ATermList) t);
                i_61 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(i_61), (ATerm) ATmakeAppl(sym_Undefined_1, h_61));
          }
        }
      return(t);
    }
    t = l_61(t);
  }
  a_61 = t;
  t = (ATerm) ATinsert(CheckATermList(a_61), (ATerm) ATmakeAppl(sym_Program_1, x_60));
  r_6 = t;
  t = SSLsetAnnotations(r_6, w_60);
  return(t);
}
static ATerm j_10 (ATerm t)
{
  ATerm x_61 = NULL;
  x_61 = t;
  if(match_string(t, "--help"))
    {
      t = x_61;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = x_61;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = x_61;
        }
    }
  return(t);
}
static ATerm k_10 (ATerm t)
{
  ATerm y_61 = NULL,z_61 = NULL;
  t = term_x_41;
  y_61 = t;
  t = term_w_27;
  z_61 = t;
  t = term_k_43;
  t = t_9(y_61, z_61, t);
  t = term_l_43;
  return(t);
}
static ATerm p_10 (ATerm t)
{
  t = term_y_43;
  return(t);
}
static ATerm q_10 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm n_107 (ATerm), ATerm t)
{
  ATerm q_61 = NULL,r_61 = NULL,s_61 = NULL,t_61 = NULL,u_61 = NULL,v_61 = NULL,w_61 = NULL;
  s_61 = t;
  t = term_u_37;
  u_61 = t;
  t = term_z_37;
  v_61 = t;
  t = (ATerm) ATempty;
  w_61 = t;
  t = SSL_table_put(u_61, v_61, w_61);
  t = s_61;
  {
    static ATerm i_10 (ATerm t)
    {
      ATerm a_44 = t;
      int b_44 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = n_107(t);
          LocalPopChoice(b_44);
        }
      else
        {
          t = a_44;
          {
            ATerm c_44 = t;
            int d_44 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(j_10, k_10, p_10, t);
                LocalPopChoice(d_44);
              }
            else
              {
                t = c_44;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(i_10, t);
  }
  {
    ATerm e_44 = t;
    int f_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_62 = NULL;
        g_62 = t;
        {
          ATerm g_44 = t;
          int h_44 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm u_20 = NULL;
              t = g_62;
              {
                ATerm i_44 = t;
                int j_44 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_x_41;
                    t = get_config_0_0(t);
                    LocalPopChoice(j_44);
                  }
                else
                  {
                    t = i_44;
                    t = fetch_1_0(q_10, t);
                  }
              }
              t = g_62;
              t = default_system_usage_0_0(t);
              t = term_d_37;
              u_20 = t;
              t = SSL_exit(u_20);
              LocalPopChoice(h_44);
            }
          else
            {
              t = g_44;
              {
                ATerm y_20 = NULL;
                t = term_l_42;
                t = get_config_0_0(t);
                t = g_62;
                t = default_system_about_0_0(t);
                t = term_d_37;
                y_20 = t;
                t = SSL_exit(y_20);
              }
            }
        }
        LocalPopChoice(f_44);
      }
    else
      {
        t = e_44;
        {
          ATerm k_44 = t;
          int l_44 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm h_62 = NULL,i_62 = NULL,j_62 = NULL;
              static ATerm r_10 (ATerm t)
              {
                ATerm k_62 = NULL,l_62 = NULL,m_62 = NULL,t_6 = NULL;
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
                if(((q_61 != NULL) && (q_61 != t)))
                  _fail(t);
                else
                  q_61 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, l_62);
                t_6 = t;
                t = SSLsetAnnotations(t_6, k_62);
                return(t);
              }
              t = fetch_1_0(r_10, t);
              t = term_s_21;
              i_62 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(q_61)), term_m_44);
              j_62 = t;
              t = SSL_printnl(i_62, j_62);
              t = (ATerm) ATmakeAppl(sym__2, term_s_21, (ATerm) ATinsert(ATinsert(ATempty, not_null(q_61)), term_m_44));
              t = default_system_usage_0_0(t);
              t = term_n_14;
              h_62 = t;
              t = SSL_exit(h_62);
              LocalPopChoice(l_44);
            }
          else
            {
              t = k_44;
            }
        }
      }
  }
  r_61 = t;
  t = term_u_37;
  t_61 = t;
  t = SSL_table_destroy(t_61);
  t = r_61;
  return(t);
}
ATerm option_wrap_4_0 (ATerm z_104 (ATerm), ATerm a_105 (ATerm), ATerm b_105 (ATerm), ATerm c_105 (ATerm), ATerm t)
{
  ATerm r_62 = NULL,s_62 = NULL,t_62 = NULL,u_62 = NULL;
  t = parse_options_1_0(z_104, t);
  r_62 = t;
  t = term_n_44;
  u_62 = t;
  t = SSL_table_create(u_62);
  t = term_n_44;
  s_62 = t;
  t = term_o_44;
  t_62 = t;
  t = SSL_table_put(s_62, t_62, r_62);
  t = r_62;
  t = b_105(t);
  {
    ATerm p_44 = t;
    int q_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(a_105, t);
        LocalPopChoice(q_44);
      }
    else
      {
        t = p_44;
        {
          ATerm r_44 = t;
          int s_44 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = c_105(t);
              t = report_success_0_0(t);
              LocalPopChoice(s_44);
            }
          else
            {
              t = r_44;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm s_10 (ATerm t)
{
  ATerm t_44 = t;
  int u_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = pack_stratego_options_0_0(t);
      LocalPopChoice(u_44);
    }
  else
    {
      t = t_44;
      {
        ATerm v_44 = t;
        int w_44 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = input_option_0_0(t);
            LocalPopChoice(w_44);
          }
        else
          {
            t = v_44;
            {
              ATerm x_44 = t;
              int y_44 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = output_option_0_0(t);
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
                        t = Option_3_0(a_11, b_11, f_11, t);
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
static ATerm a_11 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm b_11 (ATerm t)
{
  ATerm a_63 = NULL,b_63 = NULL;
  t = term_f_45;
  a_63 = t;
  t = term_w_27;
  b_63 = t;
  t = term_g_45;
  t = t_9(a_63, b_63, t);
  t = term_h_45;
  return(t);
}
static ATerm f_11 (ATerm t)
{
  t = term_k_45;
  return(t);
}
static ATerm m_11 (ATerm t)
{
  t = get_filename_0_0(t);
  t = basename_1_0(_id, t);
  return(t);
}
ATerm pack_stratego_0_0 (ATerm t)
{
  ATerm y_62 = NULL,z_62 = NULL;
  static ATerm x_10 (ATerm t)
  {
    static ATerm l_11 (ATerm t)
    {
      ATerm d_63 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          d_63 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = j_9(d_63, t);
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
        ATerm m_45 = t;
        int n_45 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_j_39;
            t = get_config_0_0(t);
            t = y_62;
            t = map_1_0(m_11, t);
            t = write_to_text_0_0(t);
            LocalPopChoice(n_45);
          }
        else
          {
            t = m_45;
            {
              ATerm p_45 = t;
              int q_45 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = y_62;
                  t = create_dep_file_0_0(t);
                  LocalPopChoice(q_45);
                }
              else
                {
                  t = p_45;
                }
            }
            t = z_62;
            t = write_to_0_0(t);
          }
      }
      return(t);
    }
    t = xtc_io_1_0(l_11, t);
    return(t);
  }
  t = option_wrap_4_0(s_10, default_usage_0_0, _id, x_10, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = pack_stratego_0_0(t);
  return(t);
}
