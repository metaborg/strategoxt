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
ATerm term_c_46;
ATerm term_b_46;
ATerm term_w_45;
ATerm term_u_45;
ATerm term_y_44;
ATerm term_x_44;
ATerm term_w_44;
ATerm term_r_43;
ATerm term_q_43;
ATerm term_p_43;
ATerm term_k_43;
ATerm term_f_43;
ATerm term_e_43;
ATerm term_d_43;
ATerm term_c_43;
ATerm term_b_43;
ATerm term_a_43;
ATerm term_z_42;
ATerm term_q_42;
ATerm term_p_42;
ATerm term_h_42;
ATerm term_f_42;
ATerm term_c_42;
ATerm term_h_41;
ATerm term_g_41;
ATerm term_o_40;
ATerm term_n_40;
ATerm term_m_40;
ATerm term_l_40;
ATerm term_k_40;
ATerm term_j_40;
ATerm term_i_40;
ATerm term_h_40;
ATerm term_z_39;
ATerm term_w_39;
ATerm term_v_39;
ATerm term_q_39;
ATerm term_o_38;
ATerm term_m_38;
ATerm term_l_38;
ATerm term_k_38;
ATerm term_e_38;
ATerm term_d_38;
ATerm term_v_37;
ATerm term_s_37;
ATerm term_r_37;
ATerm term_q_37;
ATerm term_p_37;
ATerm term_o_37;
ATerm term_n_37;
ATerm term_i_37;
ATerm term_h_37;
ATerm term_g_37;
ATerm term_c_37;
ATerm term_p_36;
ATerm term_r_34;
ATerm term_p_32;
ATerm term_o_32;
ATerm term_m_32;
ATerm term_k_32;
ATerm term_h_32;
ATerm term_g_32;
ATerm term_f_32;
ATerm term_x_30;
ATerm term_z_29;
ATerm term_v_29;
ATerm term_u_29;
ATerm term_h_29;
ATerm term_h_28;
ATerm term_g_28;
ATerm term_e_28;
ATerm term_d_28;
ATerm term_y_27;
ATerm term_o_27;
ATerm term_n_27;
ATerm term_i_27;
ATerm term_i_26;
ATerm term_g_26;
ATerm term_c_26;
ATerm term_b_26;
ATerm term_n_25;
ATerm term_f_25;
ATerm term_d_25;
ATerm term_a_25;
ATerm term_z_24;
ATerm term_x_24;
ATerm term_v_24;
ATerm term_r_24;
ATerm term_m_24;
ATerm term_l_24;
ATerm term_k_24;
ATerm term_h_24;
ATerm term_n_22;
ATerm term_m_22;
ATerm term_b_22;
ATerm term_a_22;
ATerm term_z_21;
ATerm term_y_21;
ATerm term_x_21;
ATerm term_w_21;
ATerm term_v_21;
ATerm term_t_21;
ATerm term_r_21;
ATerm term_q_21;
ATerm term_p_21;
ATerm term_m_21;
ATerm term_l_21;
ATerm term_j_21;
ATerm term_i_21;
ATerm term_h_21;
ATerm term_g_21;
ATerm term_f_21;
ATerm term_d_21;
ATerm term_c_21;
ATerm term_b_21;
ATerm term_a_21;
ATerm term_z_20;
ATerm term_y_20;
ATerm term_x_20;
ATerm term_w_20;
ATerm term_v_20;
ATerm term_u_20;
ATerm term_t_20;
ATerm term_r_20;
ATerm term_p_20;
ATerm term_n_20;
ATerm term_m_20;
ATerm term_l_20;
ATerm term_j_20;
ATerm term_i_20;
ATerm term_g_20;
ATerm term_f_20;
ATerm term_e_20;
ATerm term_d_20;
ATerm term_b_20;
ATerm term_a_20;
ATerm term_z_19;
ATerm term_y_19;
ATerm term_w_19;
ATerm term_v_19;
ATerm term_s_19;
ATerm term_r_19;
ATerm term_q_19;
ATerm term_p_19;
ATerm term_o_19;
ATerm term_n_19;
ATerm term_m_19;
ATerm term_l_19;
ATerm term_j_19;
ATerm term_i_19;
ATerm term_h_19;
ATerm term_f_19;
ATerm term_e_19;
ATerm term_d_19;
ATerm term_c_19;
ATerm term_b_19;
ATerm term_a_19;
ATerm term_z_18;
ATerm term_y_18;
ATerm term_w_18;
ATerm term_t_18;
ATerm term_s_18;
ATerm term_r_18;
ATerm term_p_18;
ATerm term_n_18;
ATerm term_m_18;
ATerm term_l_18;
ATerm term_j_18;
ATerm term_i_18;
ATerm term_h_18;
ATerm term_g_18;
ATerm term_e_18;
ATerm term_d_18;
ATerm term_c_18;
ATerm term_b_18;
ATerm term_a_18;
ATerm term_y_17;
ATerm term_x_17;
ATerm term_w_17;
ATerm term_u_17;
ATerm term_q_17;
ATerm term_p_17;
ATerm term_o_17;
ATerm term_n_17;
ATerm term_k_17;
ATerm term_j_17;
ATerm term_i_17;
ATerm term_h_17;
ATerm term_f_17;
ATerm term_d_17;
ATerm term_c_17;
ATerm term_a_17;
ATerm term_z_16;
ATerm term_y_16;
ATerm term_x_16;
ATerm term_w_16;
ATerm term_v_16;
ATerm term_u_16;
ATerm term_q_16;
ATerm term_p_16;
ATerm term_o_16;
ATerm term_n_16;
ATerm term_l_16;
ATerm term_j_16;
ATerm term_i_16;
ATerm term_a_16;
ATerm term_z_15;
ATerm term_w_15;
ATerm term_v_15;
ATerm term_p_15;
ATerm term_m_15;
ATerm term_j_15;
ATerm term_i_15;
ATerm term_h_15;
ATerm term_a_15;
ATerm term_t_14;
ATerm term_q_13;
ATerm term_n_13;
ATerm term_m_13;
ATerm term_l_13;
ATerm term_k_13;
ATerm term_h_13;
ATerm term_s_12;
ATerm term_j_12;
ATerm term_i_12;
ATerm term_z_11;
ATerm term_t_11;
ATerm term_p_11;
ATerm term_o_11;
ATerm term_n_11;
ATerm term_i_11;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeAppl(ATmakeSymbol("/StrategoXT", 0, ATtrue));
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeAppl(ATmakeSymbol("XXXXXX", 0, ATtrue));
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file> (file, mode)", 0, ATtrue));
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--dep", 0, ATtrue));
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--nodep", 0, ATtrue));
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeAppl(ATmakeSymbol(".", 0, ATtrue));
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeAppl(ATmakeSymbol("dep", 0, ATtrue));
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeAppl(ATmakeSymbol(" \\\n	", 0, ATtrue));
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeAppl(ATmakeSymbol(" :", 0, ATtrue));
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_l_16));
  term_l_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_16, term_m_15, term_j_16);
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_16, term_o_16, term_p_16);
  ATprotect(&(term_u_16));
  term_u_16 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_16, term_v_16, term_w_16);
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_a_17));
  term_a_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_c_17));
  term_c_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_16, term_z_16, term_a_17);
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_h_17));
  term_h_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_i_17));
  term_i_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_17, term_f_17, term_h_17);
  ATprotect(&(term_j_17));
  term_j_17 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_k_17));
  term_k_17 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_n_17));
  term_n_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_17, term_k_17, term_n_17);
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_q_17));
  term_q_17 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_u_17));
  term_u_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_w_17));
  term_w_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_17, term_q_17, term_u_17);
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_y_17));
  term_y_17 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_a_18));
  term_a_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_17, term_y_17, term_a_18);
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_d_18));
  term_d_18 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_e_18));
  term_e_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_g_18));
  term_g_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_18, term_d_18, term_e_18);
  ATprotect(&(term_h_18));
  term_h_18 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_i_18));
  term_i_18 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_j_18));
  term_j_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_l_18));
  term_l_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_18, term_i_18, term_j_18);
  ATprotect(&(term_m_18));
  term_m_18 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_n_18));
  term_n_18 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_p_18));
  term_p_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_r_18));
  term_r_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_18, term_n_18, term_p_18);
  ATprotect(&(term_s_18));
  term_s_18 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_t_18));
  term_t_18 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_w_18));
  term_w_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_y_18));
  term_y_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_18, term_t_18, term_w_18);
  ATprotect(&(term_z_18));
  term_z_18 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_a_19));
  term_a_19 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_b_19));
  term_b_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_c_19));
  term_c_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_18, term_a_19, term_b_19);
  ATprotect(&(term_d_19));
  term_d_19 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_e_19));
  term_e_19 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_f_19));
  term_f_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_h_19));
  term_h_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_19, term_e_19, term_f_19);
  ATprotect(&(term_i_19));
  term_i_19 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_j_19));
  term_j_19 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_l_19));
  term_l_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_m_19));
  term_m_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_19, term_j_19, term_l_19);
  ATprotect(&(term_n_19));
  term_n_19 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_o_19));
  term_o_19 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_p_19));
  term_p_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_q_19));
  term_q_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_19, term_o_19, term_p_19);
  ATprotect(&(term_r_19));
  term_r_19 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_s_19));
  term_s_19 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_v_19));
  term_v_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_w_19));
  term_w_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_19, term_s_19, term_v_19);
  ATprotect(&(term_y_19));
  term_y_19 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_z_19));
  term_z_19 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_a_20));
  term_a_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_b_20));
  term_b_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_19, term_z_19, term_a_20);
  ATprotect(&(term_d_20));
  term_d_20 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_e_20));
  term_e_20 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_f_20));
  term_f_20 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_g_20));
  term_g_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_20, term_e_20, term_f_20);
  ATprotect(&(term_i_20));
  term_i_20 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_j_20));
  term_j_20 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_l_20));
  term_l_20 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_m_20));
  term_m_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_20, term_j_20, term_l_20);
  ATprotect(&(term_n_20));
  term_n_20 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_p_20));
  term_p_20 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_r_20));
  term_r_20 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_t_20));
  term_t_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_20, term_p_20, term_r_20);
  ATprotect(&(term_u_20));
  term_u_20 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_v_20));
  term_v_20 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_w_20));
  term_w_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_x_20));
  term_x_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_20, term_v_20, term_w_20);
  ATprotect(&(term_y_20));
  term_y_20 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_z_20));
  term_z_20 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_a_21));
  term_a_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_b_21));
  term_b_21 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_20, term_z_20, term_a_21);
  ATprotect(&(term_c_21));
  term_c_21 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_d_21));
  term_d_21 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_f_21));
  term_f_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_g_21));
  term_g_21 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_21, term_d_21, term_f_21);
  ATprotect(&(term_h_21));
  term_h_21 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_i_21));
  term_i_21 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_j_21));
  term_j_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_l_21));
  term_l_21 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_21, term_i_21, term_j_21);
  ATprotect(&(term_m_21));
  term_m_21 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_p_21));
  term_p_21 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_q_21));
  term_q_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_r_21));
  term_r_21 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_21, term_p_21, term_q_21);
  ATprotect(&(term_t_21));
  term_t_21 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_v_21));
  term_v_21 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_w_21));
  term_w_21 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_x_21));
  term_x_21 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_21, term_v_21, term_w_21);
  ATprotect(&(term_y_21));
  term_y_21 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_z_21));
  term_z_21 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_a_22));
  term_a_22 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_b_22));
  term_b_22 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_21, term_z_21, term_a_22);
  ATprotect(&(term_m_22));
  term_m_22 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_n_22));
  term_n_22 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_h_24));
  term_h_24 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_k_24));
  term_k_24 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_l_24));
  term_l_24 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_m_24));
  term_m_24 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_r_24));
  term_r_24 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_v_24));
  term_v_24 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_x_24));
  term_x_24 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_z_24));
  term_z_24 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_a_25));
  term_a_25 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_d_25));
  term_d_25 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_f_25));
  term_f_25 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_n_25));
  term_n_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_b_26));
  term_b_26 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_c_26));
  term_c_26 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_g_26));
  term_g_26 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_i_26));
  term_i_26 = (ATerm) ATmakeAppl(sym__2, term_d_25, term_g_26);
  ATprotect(&(term_i_27));
  term_i_27 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_n_27));
  term_n_27 = (ATerm) ATmakeAppl(sym__2, term_d_25, term_f_25);
  ATprotect(&(term_o_27));
  term_o_27 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_y_27));
  term_y_27 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_d_28));
  term_d_28 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_e_28));
  term_e_28 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_g_28));
  term_g_28 = (ATerm) ATmakeInt(-1);
  ATprotect(&(term_h_28));
  term_h_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_h_29));
  term_h_29 = (ATerm) ATmakeAppl(ATmakeSymbol("parse error in ", 0, ATtrue));
  ATprotect(&(term_u_29));
  term_u_29 = (ATerm) ATmakeAppl(ATmakeSymbol("parse-stratego", 0, ATtrue));
  ATprotect(&(term_v_29));
  term_v_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--asfix", 0, ATtrue));
  ATprotect(&(term_z_29));
  term_z_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue));
  ATprotect(&(term_x_30));
  term_x_30 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
  ATprotect(&(term_f_32));
  term_f_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--slack", 0, ATtrue));
  ATprotect(&(term_g_32));
  term_g_32 = (ATerm) ATmakeAppl(ATmakeSymbol("*** module ", 0, ATtrue));
  ATprotect(&(term_h_32));
  term_h_32 = (ATerm) ATmakeAppl(ATmakeSymbol(" not found", 0, ATtrue));
  ATprotect(&(term_k_32));
  term_k_32 = (ATerm) ATmakeAppl(ATmakeSymbol(" reading ", 0, ATtrue));
  ATprotect(&(term_m_32));
  term_m_32 = (ATerm) ATmakeAppl(ATmakeSymbol("rtree", 0, ATtrue));
  ATprotect(&(term_o_32));
  term_o_32 = (ATerm) ATmakeAppl(ATmakeSymbol("str", 0, ATtrue));
  ATprotect(&(term_p_32));
  term_p_32 = (ATerm) ATmakeAppl(ATmakeSymbol("cr", 0, ATtrue));
  ATprotect(&(term_r_34));
  term_r_34 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_p_36));
  term_p_36 = (ATerm) ATmakeAppl(sym__2, term_o_11, term_n_11);
  ATprotect(&(term_c_37));
  term_c_37 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_g_37));
  term_g_37 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_h_37));
  term_h_37 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_i_37));
  term_i_37 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_n_37));
  term_n_37 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_o_37));
  term_o_37 = (ATerm) ATmakeAppl(sym__2, term_p_15, term_n_37);
  ATprotect(&(term_p_37));
  term_p_37 = (ATerm) ATmakeAppl(sym_Verbose_1, term_n_37);
  ATprotect(&(term_q_37));
  term_q_37 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_r_37));
  term_r_37 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_s_37));
  term_s_37 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_v_37));
  term_v_37 = (ATerm) ATmakeAppl(sym__2, term_s_37, term_z_11);
  ATprotect(&(term_d_38));
  term_d_38 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_e_38));
  term_e_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_k_38));
  term_k_38 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_l_38));
  term_l_38 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_m_38));
  term_m_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_o_38));
  term_o_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_q_39));
  term_q_39 = (ATerm) ATmakeAppl(ATmakeSymbol("-I d | --Include d   Include modules from directory d", 0, ATtrue));
  ATprotect(&(term_v_39));
  term_v_39 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_w_39));
  term_w_39 = (ATerm) ATmakeAppl(sym__2, term_k_13, term_v_39);
  ATprotect(&(term_z_39));
  term_z_39 = (ATerm) ATmakeAppl(ATmakeSymbol("--nodep              Don't create dependency file", 0, ATtrue));
  ATprotect(&(term_h_40));
  term_h_40 = (ATerm) ATmakeAppl(ATmakeSymbol("--dep f | -d f       Write dependency to file f", 0, ATtrue));
  ATprotect(&(term_i_40));
  term_i_40 = (ATerm) ATmakeAppl(ATmakeSymbol("--imports", 0, ATtrue));
  ATprotect(&(term_j_40));
  term_j_40 = (ATerm) ATmakeAppl(sym__2, term_i_40, term_z_11);
  ATprotect(&(term_k_40));
  term_k_40 = (ATerm) ATmakeAppl(ATmakeSymbol("--imports            Produce a list of imported modules only", 0, ATtrue));
  ATprotect(&(term_l_40));
  term_l_40 = (ATerm) ATmakeAppl(sym__2, term_f_32, term_z_11);
  ATprotect(&(term_m_40));
  term_m_40 = (ATerm) ATmakeAppl(ATmakeSymbol("--slack              Continue when module is not found", 0, ATtrue));
  ATprotect(&(term_n_40));
  term_n_40 = (ATerm) ATmakeAppl(sym__2, term_v_29, term_v_39);
  ATprotect(&(term_o_40));
  term_o_40 = (ATerm) ATmakeAppl(ATmakeSymbol("--asfix              Do not implode the concrete syntax parts", 0, ATtrue));
  ATprotect(&(term_g_41));
  term_g_41 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_h_41));
  term_h_41 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_c_42));
  term_c_42 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_f_42));
  term_f_42 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_h_42));
  term_h_42 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_p_42));
  term_p_42 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_q_42));
  term_q_42 = (ATerm) ATmakeAppl(sym__2, term_k_38, term_l_38);
  ATprotect(&(term_z_42));
  term_z_42 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_a_43));
  term_a_43 = (ATerm) ATmakeAppl(sym__2, term_z_42, term_z_11);
  ATprotect(&(term_b_43));
  term_b_43 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_c_43));
  term_c_43 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_d_43));
  term_d_43 = (ATerm) ATmakeAppl(sym__2, term_c_43, term_z_11);
  ATprotect(&(term_e_43));
  term_e_43 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_f_43));
  term_f_43 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_k_43));
  term_k_43 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_p_43));
  term_p_43 = (ATerm) ATmakeAppl(sym__2, term_f_42, term_z_11);
  ATprotect(&(term_q_43));
  term_q_43 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_r_43));
  term_r_43 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_w_44));
  term_w_44 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_x_44));
  term_x_44 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_y_44));
  term_y_44 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_u_45));
  term_u_45 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_w_45));
  term_w_45 = (ATerm) ATmakeAppl(sym__2, term_u_45, term_z_11);
  ATprotect(&(term_b_46));
  term_b_46 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_c_46));
  term_c_46 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
static ATerm b_8 (ATerm c_23, ATerm d_23, ATerm t);
static ATerm g_8 (ATerm q_89 (ATerm), ATerm f_167, ATerm k_23, ATerm t);
static ATerm v_8 (ATerm m_102 (ATerm), ATerm i_42, ATerm g_42, ATerm t);
ATerm P__tmpdir_0_0 (ATerm t);
static ATerm a_0 (ATerm t);
ATerm xtc_new_file_0_0 (ATerm t);
static ATerm c_8 (ATerm o_23, ATerm p_23, ATerm t);
static ATerm w_3 (ATerm d_3, ATerm t);
static ATerm y_3 (ATerm h_3, ATerm i_3, ATerm j_3, ATerm t);
static ATerm b_0 (ATerm t);
ATerm open_file_0_0 (ATerm t);
ATerm create_dep_file_0_0 (ATerm t);
static ATerm e_8 (ATerm z_37, ATerm a_38, ATerm t);
static ATerm f_8 (ATerm g_23, ATerm h_23, ATerm t);
ATerm basename_1_0 (ATerm b_100 (ATerm), ATerm t);
ATerm at_suffix_rev_1_0 (ATerm x_90 (ATerm), ATerm t);
ATerm get_filename_0_0 (ATerm t);
ATerm map_1_0 (ATerm z_89 (ATerm), ATerm t);
static ATerm w_8 (ATerm t_36, ATerm u_36, ATerm t);
static ATerm h_0 (ATerm t);
static ATerm m_0 (ATerm t);
ATerm eval_config_0_0 (ATerm t);
ATerm get_config_0_0 (ATerm t);
static ATerm z_0 (ATerm t);
static ATerm n_1 (ATerm t);
ATerm flatten_stratego_0_0 (ATerm t);
ATerm genzip_4_0 (ATerm c_92 (ATerm), ATerm d_92 (ATerm), ATerm e_92 (ATerm), ATerm f_92 (ATerm), ATerm t);
static ATerm o_1 (ATerm t);
static ATerm k_8 (ATerm z_133, ATerm t);
ATerm read_from_0_0 (ATerm t);
ATerm pass_keep_0_0 (ATerm t);
static ATerm l_8 (ATerm a_41, ATerm b_41, ATerm t);
ATerm pass_verbose_0_0 (ATerm t);
static ATerm p_1 (ATerm t);
ATerm xtc_transform_term_2_0 (ATerm z_112 (ATerm), ATerm a_113 (ATerm), ATerm t);
static ATerm m_8 (ATerm d_48, ATerm e_48, ATerm t);
ATerm signal_to_descr_0_0 (ATerm t);
ATerm signal_from_number_0_0 (ATerm t);
ATerm warn_ifsignaled_0_0 (ATerm t);
ATerm fork_0_0 (ATerm t);
ATerm fork_and_wait_1_0 (ATerm e_105 (ATerm), ATerm t);
ATerm table_getlist_0_0 (ATerm t);
ATerm if_verbose5_1_0 (ATerm x_104 (ATerm), ATerm t);
ATerm if_verbose4_1_0 (ATerm w_104 (ATerm), ATerm t);
ATerm if_verbose6_1_0 (ATerm y_104 (ATerm), ATerm t);
static ATerm p_8 (ATerm d_94 (ATerm), ATerm z_28, ATerm y_28, ATerm t);
static ATerm w_1 (ATerm t);
static ATerm q_8 (ATerm y_52, ATerm z_52, ATerm a_53, ATerm t);
static ATerm r_8 (ATerm b_109 (ATerm), ATerm i_53, ATerm h_53, ATerm t);
static ATerm q_22 (ATerm f_22, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm s_8 (ATerm i_23, ATerm t);
static ATerm t_8 (ATerm b_38, ATerm c_38, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm u_25 (ATerm r_23, ATerm t);
static ATerm v_25 (ATerm a_24, ATerm e_24, ATerm f_24, ATerm t);
static ATerm w_25 (ATerm y_24, ATerm c_25, ATerm e_25, ATerm t);
static ATerm u_8 (ATerm t);
static ATerm a_2 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
static ATerm c_2 (ATerm t);
static ATerm d_2 (ATerm t);
ATerm read_repository_file_0_0 (ATerm t);
static ATerm e_2 (ATerm t);
static ATerm g_2 (ATerm t);
static ATerm h_2 (ATerm t);
static ATerm i_2 (ATerm t);
static ATerm j_2 (ATerm t);
static ATerm k_2 (ATerm t);
static ATerm l_2 (ATerm t);
static ATerm m_2 (ATerm t);
ATerm xtc_read_0_0 (ATerm t);
ATerm repeat_2_0 (ATerm n_82 (ATerm), ATerm o_82 (ATerm), ATerm t);
ATerm xtc_location_0_0 (ATerm t);
static ATerm n_2 (ATerm t);
static ATerm o_2 (ATerm t);
static ATerm q_2 (ATerm t);
static ATerm r_2 (ATerm t);
static ATerm s_2 (ATerm t);
ATerm xtc_load_0_0 (ATerm t);
static ATerm t_2 (ATerm t);
static ATerm w_2 (ATerm t);
static ATerm n_29 (ATerm f_28, ATerm t);
static ATerm z_2 (ATerm t);
static ATerm a_3 (ATerm t);
static ATerm b_3 (ATerm t);
static ATerm c_3 (ATerm t);
ATerm xtc_find_0_0 (ATerm t);
ATerm xtc_command_1_0 (ATerm a_114 (ATerm), ATerm t);
ATerm xtc_transform_file_2_0 (ATerm t_0 (ATerm), ATerm v_0 (ATerm), ATerm t);
static ATerm c_32 (ATerm p_30, ATerm q_30, ATerm r_30, ATerm t);
static ATerm e_32 (ATerm r_31, ATerm s_31, ATerm t);
static ATerm g_3 (ATerm t);
static ATerm k_3 (ATerm t);
static ATerm m_3 (ATerm t);
static ATerm n_3 (ATerm t);
ATerm parse_module_0_0 (ATerm t);
ATerm debug_1_0 (ATerm o_89 (ATerm), ATerm t);
ATerm if_verbose3_1_0 (ATerm v_104 (ATerm), ATerm t);
ATerm fetch_elem_1_0 (ATerm l_90 (ATerm), ATerm t);
static ATerm x_8 (ATerm t_37, ATerm u_37, ATerm t);
ATerm is_relpath_0_0 (ATerm t);
static ATerm y_8 (ATerm t_81 (ATerm), ATerm o_21, ATerm n_21, ATerm t);
static ATerm c_4 (ATerm t);
ATerm get_module_1_0 (ATerm s_81 (ATerm), ATerm t);
static ATerm a_9 (ATerm g_94 (ATerm), ATerm h_94 (ATerm), ATerm d_29, ATerm c_29, ATerm t);
static ATerm b_9 (ATerm y_93 (ATerm), ATerm x_28, ATerm w_28, ATerm t);
static ATerm p_4 (ATerm t);
static ATerm q_4 (ATerm t);
static ATerm r_4 (ATerm t);
static ATerm g_9 (ATerm s_596, ATerm x_596, ATerm n_56, ATerm t);
static ATerm s_4 (ATerm t);
static ATerm u_4 (ATerm t);
static ATerm x_4 (ATerm t);
static ATerm a_39 (ATerm w_36, ATerm x_36, ATerm y_36, ATerm t);
static ATerm z_4 (ATerm t);
ATerm diff_0_0 (ATerm t);
static ATerm i_9 (ATerm w_114 (ATerm), ATerm x_114 (ATerm), ATerm y_114 (ATerm), ATerm j_59, ATerm g_59, ATerm n_59, ATerm k_59, ATerm h_59, ATerm i_59, ATerm t);
ATerm GnNext_3_0 (ATerm w_114 (ATerm), ATerm x_114 (ATerm), ATerm y_114 (ATerm), ATerm t);
ATerm while_not_2_0 (ATerm e_83 (ATerm), ATerm f_83 (ATerm), ATerm t);
ATerm for_3_0 (ATerm h_83 (ATerm), ATerm i_83 (ATerm), ATerm j_83 (ATerm), ATerm t);
static ATerm b_5 (ATerm t);
static ATerm e_5 (ATerm t);
ATerm graph_nodes_roots_3_0 (ATerm t_114 (ATerm), ATerm u_114 (ATerm), ATerm v_114 (ATerm), ATerm t);
ATerm filter_1_0 (ATerm g_97 (ATerm), ATerm t);
static ATerm g_5 (ATerm t);
static ATerm k_5 (ATerm t);
static ATerm l_5 (ATerm t);
static ATerm q_5 (ATerm t);
static ATerm s_5 (ATerm t);
static ATerm t_5 (ATerm t);
static ATerm l_9 (ATerm e_21, ATerm t);
static ATerm n_9 (ATerm y_43, ATerm z_43, ATerm t);
ATerm copy_to_1_0 (ATerm r_0 (ATerm), ATerm t);
static ATerm o_9 (ATerm g_52, ATerm h_52, ATerm t);
ATerm end_scope_1_0 (ATerm j_102 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm j_82 (ATerm), ATerm k_82 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm i_102 (ATerm), ATerm t);
static ATerm x_5 (ATerm t);
static ATerm e_6 (ATerm t);
static ATerm f_6 (ATerm t);
ATerm xtc_temp_files_1_0 (ATerm m_113 (ATerm), ATerm t);
static ATerm i_6 (ATerm t);
ATerm xtc_io_1_0 (ATerm n_113 (ATerm), ATerm t);
ATerm default_usage_0_0 (ATerm t);
static ATerm k_6 (ATerm t);
static ATerm l_6 (ATerm t);
static ATerm m_6 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm n_6 (ATerm t);
static ATerm p_6 (ATerm t);
static ATerm q_6 (ATerm t);
static ATerm s_6 (ATerm t);
static ATerm v_6 (ATerm t);
static ATerm w_6 (ATerm t);
static ATerm x_6 (ATerm t);
static ATerm y_6 (ATerm t);
static ATerm z_6 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm v_9 (ATerm l_60, ATerm m_60, ATerm t);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
static ATerm a_7 (ATerm t);
static ATerm g_7 (ATerm t);
static ATerm h_7 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm i_7 (ATerm t);
static ATerm l_7 (ATerm t);
static ATerm n_7 (ATerm t);
ATerm input_option_0_0 (ATerm t);
static ATerm t_9 (ATerm b_52, ATerm c_52, ATerm a_52, ATerm t);
ATerm ArgOption_3_0 (ATerm n_0 (ATerm), ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm t);
ATerm at_end_1_0 (ATerm p_90 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm g_51 (ATerm r_50, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm m_9 (ATerm r_60, ATerm q_60, ATerm t);
static ATerm s_7 (ATerm t);
static ATerm t_7 (ATerm t);
static ATerm u_7 (ATerm t);
static ATerm w_7 (ATerm t);
static ATerm x_7 (ATerm t);
static ATerm y_7 (ATerm t);
static ATerm z_7 (ATerm t);
static ATerm a_8 (ATerm t);
static ATerm d_8 (ATerm t);
static ATerm h_8 (ATerm t);
static ATerm j_8 (ATerm t);
static ATerm o_8 (ATerm t);
static ATerm z_8 (ATerm t);
static ATerm c_9 (ATerm t);
static ATerm d_9 (ATerm t);
static ATerm f_9 (ATerm t);
static ATerm h_9 (ATerm t);
static ATerm j_9 (ATerm t);
ATerm pack_stratego_options_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm p_9 (ATerm u_40, ATerm v_40, ATerm t);
ATerm foldr_2_0 (ATerm c_96 (ATerm), ATerm d_96 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm u_9 (ATerm t);
static ATerm w_9 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm t_104 (ATerm), ATerm t);
static ATerm x_9 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm z_9 (ATerm t);
ATerm need_help_1_0 (ATerm h_106 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm t);
static ATerm s_9 (ATerm s_53, ATerm t_53, ATerm t);
static ATerm e_10 (ATerm t);
static ATerm f_10 (ATerm t);
static ATerm g_10 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm j_90 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm h_10 (ATerm t);
static ATerm j_10 (ATerm t);
static ATerm k_10 (ATerm t);
static ATerm m_10 (ATerm t);
static ATerm n_10 (ATerm t);
static ATerm o_10 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm z_60 (ATerm), ATerm a_61 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm y_108 (ATerm), ATerm t);
static ATerm r_10 (ATerm t);
static ATerm s_10 (ATerm t);
static ATerm t_10 (ATerm t);
static ATerm u_10 (ATerm t);
ATerm parse_options_1_0 (ATerm x_108 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm j_106 (ATerm), ATerm k_106 (ATerm), ATerm l_106 (ATerm), ATerm m_106 (ATerm), ATerm t);
static ATerm w_10 (ATerm t);
static ATerm y_10 (ATerm t);
static ATerm z_10 (ATerm t);
static ATerm a_11 (ATerm t);
static ATerm e_11 (ATerm t);
static ATerm g_11 (ATerm t);
static ATerm h_11 (ATerm t);
ATerm pack_stratego_0_0 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
static ATerm b_8 (ATerm c_23, ATerm d_23, ATerm t)
{
  ATerm e_0 = NULL;
  t = SSL_write_term_to_stream_baf(c_23, d_23);
  e_0 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, e_0);
  return(t);
}
static ATerm g_8 (ATerm q_89 (ATerm), ATerm f_167, ATerm k_23, ATerm t)
{
  ATerm j_0 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, f_167, term_i_11);
  t = u_8(t);
  j_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_0, k_23);
  t = q_89(t);
  t = fclose_0_0(t);
  t = k_23;
  return(t);
}
static ATerm v_8 (ATerm m_102 (ATerm), ATerm i_42, ATerm g_42, ATerm t)
{
  ATerm q_0 = NULL,s_0 = NULL,x_0 = NULL,a_1 = NULL,b_1 = NULL,c_1 = NULL;
  a_1 = t;
  t = m_102(t);
  q_0 = t;
  t = (ATerm) ATmakeAppl(sym__3, q_0, i_42, g_42);
  t = t_9(q_0, i_42, g_42, t);
  {
    ATerm j_11 = t;
    int m_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_1 = NULL;
        t = term_n_11;
        d_1 = t;
        t = (ATerm) ATmakeAppl(sym__2, q_0, term_n_11);
        t = s_9(q_0, d_1, t);
        LocalPopChoice(m_11);
      }
    else
      {
        t = j_11;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_0 = ATgetFirst((ATermList) t);
      x_0 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_n_11;
  b_1 = t;
  t = (ATerm) ATinsert(CheckATermList(x_0), (ATerm) ATinsert(CheckATermList(s_0), i_42));
  c_1 = t;
  t = SSL_table_put(q_0, b_1, c_1);
  t = a_1;
  return(t);
}
ATerm P__tmpdir_0_0 (ATerm t)
{
  t = SSL_P_tmpdir();
  return(t);
}
static ATerm a_0 (ATerm t)
{
  t = term_o_11;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm e_1 = NULL,f_1 = NULL,g_1 = NULL,i_1 = NULL,j_1 = NULL,k_1 = NULL,l_1 = NULL,m_1 = NULL;
  t = P__tmpdir_0_0(t);
  i_1 = t;
  t = term_p_11;
  m_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_1, term_p_11);
  t = w_8(i_1, m_1, t);
  k_1 = t;
  t = term_t_11;
  l_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_1, term_t_11);
  t = w_8(k_1, l_1, t);
  j_1 = t;
  t = SSL_mkstemp(j_1);
  if(match_cons(t, sym__2))
    {
      f_1 = ATgetArgument(t, 0);
      e_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = term_z_11;
  g_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_1, term_z_11);
  t = v_8(a_0, f_1, g_1, t);
  t = SSL_close(e_1);
  t = f_1;
  return(t);
}
static ATerm c_8 (ATerm o_23, ATerm p_23, ATerm t)
{
  ATerm u_2 = NULL,v_2 = NULL;
  t = p_23;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = p_23;
    }
  else
    {
      ATerm f_0 = NULL,u_0 = NULL,r_1 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          u_2 = ATgetFirst((ATermList) t);
          v_2 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(p_23);
      f_0 = t;
      t = v_2;
      {
        static ATerm h_1 (ATerm t)
        {
          ATerm a_12 = t;
          int c_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm w_0 = NULL;
              w_0 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = w_0;
              LocalPopChoice(c_12);
            }
          else
            {
              t = a_12;
              {
                ATerm y_0 = NULL;
                t = Cons_2_0(_id, h_1, t);
                y_0 = t;
                t = (ATerm) ATinsert(CheckATermList(y_0), o_23);
              }
            }
          return(t);
        }
        t = h_1(t);
      }
      u_0 = t;
      t = (ATerm) ATinsert(CheckATermList(u_0), u_2);
      r_1 = t;
      t = SSLsetAnnotations(r_1, f_0);
    }
  return(t);
}
static ATerm w_3 (ATerm d_3, ATerm t)
{
  t = d_3;
  {
    ATerm d_12 = t;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm f_12 = ATgetArgument(t, 0);
            ATerm h_12 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = d_12;
      }
  }
  t = term_i_12;
  t = debug_1_0(b_0, t);
  t = (ATerm) ATmakeAppl(sym__2, d_3, term_i_11);
  t = open_file_0_0(t);
  return(t);
}
static ATerm y_3 (ATerm h_3, ATerm i_3, ATerm j_3, ATerm t)
{
  t = SSL_open_file(h_3, i_3);
  return(t);
}
static ATerm b_0 (ATerm t)
{
  t = term_j_12;
  return(t);
}
ATerm open_file_0_0 (ATerm t)
{
  ATerm t_3 = NULL,u_3 = NULL,v_3 = NULL;
  t_3 = t;
  if(match_cons(t, sym__2))
    {
      u_3 = ATgetArgument(t, 0);
      v_3 = ATgetArgument(t, 1);
      {
        ATerm p_12 = t;
        int q_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = w_3(t_3, t);
            LocalPopChoice(q_12);
          }
        else
          {
            t = p_12;
            t = y_3(u_3, v_3, t_3, t);
          }
      }
    }
  else
    {
      t = w_3(t_3, t);
    }
  return(t);
}
ATerm create_dep_file_0_0 (ATerm t)
{
  ATerm z_3 = NULL,a_4 = NULL,b_4 = NULL,d_4 = NULL,e_4 = NULL,f_4 = NULL,h_4 = NULL,i_4 = NULL,j_4 = NULL;
  a_4 = t;
  t = term_s_12;
  t = get_config_0_0(t);
  {
    ATerm e_13 = t;
    int f_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_h_13;
        t = get_config_0_0(t);
        LocalPopChoice(f_13);
      }
    else
      {
        t = e_13;
        {
          ATerm i_13 = t;
          if((PushChoice() == 0))
            {
              t = term_k_13;
              t = get_config_0_0(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = i_13;
            }
        }
      }
  }
  z_3 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_m_13), term_l_13), z_3);
  j_4 = t;
  t = SSL_concat_strings(j_4);
  i_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_4, term_i_11);
  t = open_file_0_0(t);
  b_4 = t;
  t = term_n_13;
  f_4 = t;
  t = (ATerm) ATinsert(CheckATermList(a_4), term_q_13);
  h_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_13, (ATerm) ATinsert(CheckATermList(a_4), term_q_13));
  t = c_8(f_4, h_4, t);
  d_4 = t;
  t = (ATerm) ATinsert(CheckATermList(d_4), z_3);
  e_4 = t;
  t = SSL_printnl(b_4, e_4);
  t = SSL_close_file(b_4);
  t = (ATerm) ATmakeAppl(sym_FILE_1, i_4);
  return(t);
}
static ATerm e_8 (ATerm z_37, ATerm a_38, ATerm t)
{
  ATerm l_4 = NULL;
  t = SSL_fputc(z_37, a_38);
  l_4 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, l_4);
  return(t);
}
static ATerm f_8 (ATerm g_23, ATerm h_23, ATerm t)
{
  ATerm m_4 = NULL;
  t = SSL_write_term_to_stream_text(g_23, h_23);
  m_4 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, m_4);
  return(t);
}
ATerm basename_1_0 (ATerm b_100 (ATerm), ATerm t)
{
  ATerm t_4 = NULL,v_4 = NULL;
  v_4 = t;
  t = SSL_explode_string(v_4);
  {
    ATerm r_13 = t;
    int z_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm h_6 (ATerm t)
        {
          ATerm a_6 = NULL,b_6 = NULL,d_6 = NULL;
          a_6 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              b_6 = ATgetFirst((ATermList) t);
              d_6 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          {
            ATerm a_14 = t;
            int d_14 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm x_1 = NULL,b_2 = NULL,t_1 = NULL;
                t = SSLgetAnnotations(a_6);
                x_1 = t;
                t = d_6;
                t = h_6(t);
                b_2 = t;
                t = (ATerm) ATinsert(CheckATermList(b_2), b_6);
                t_1 = t;
                t = SSLsetAnnotations(t_1, x_1);
                LocalPopChoice(d_14);
              }
            else
              {
                t = a_14;
                {
                  ATerm f_14 = t;
                  int g_14 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm p_2 = NULL,v_1 = NULL;
                      t = SSLgetAnnotations(a_6);
                      p_2 = t;
                      t = b_6;
                      if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 47)))
                        _fail(t);
                      t = (ATerm) ATinsert(CheckATermList(d_6), b_6);
                      v_1 = t;
                      t = SSLsetAnnotations(v_1, p_2);
                      LocalPopChoice(g_14);
                    }
                  else
                    {
                      t = f_14;
                      {
                        ATerm e_3 = NULL,l_3 = NULL,z_1 = NULL;
                        t = SSLgetAnnotations(a_6);
                        e_3 = t;
                        t = b_6;
                        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 46)))
                          _fail(t);
                        t = d_6;
                        t = b_100(t);
                        l_3 = t;
                        t = (ATerm) ATinsert(CheckATermList(l_3), b_6);
                        z_1 = t;
                        t = SSLsetAnnotations(z_1, e_3);
                        t = (ATerm) ATempty;
                      }
                    }
                }
              }
          }
          return(t);
        }
        t = h_6(t);
        LocalPopChoice(z_13);
      }
    else
      {
        t = r_13;
      }
  }
  t_4 = t;
  t = SSL_implode_string(t_4);
  return(t);
}
ATerm at_suffix_rev_1_0 (ATerm x_90 (ATerm), ATerm t)
{
  static ATerm e_7 (ATerm t)
  {
    ATerm h_14 = t;
    int j_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_7 = NULL,c_7 = NULL,d_7 = NULL,g_4 = NULL,o_4 = NULL,f_2 = NULL;
        b_7 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            c_7 = ATgetFirst((ATermList) t);
            d_7 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(b_7);
        g_4 = t;
        t = d_7;
        t = e_7(t);
        o_4 = t;
        t = (ATerm) ATinsert(CheckATermList(o_4), c_7);
        f_2 = t;
        t = SSLsetAnnotations(f_2, g_4);
        LocalPopChoice(j_14);
      }
    else
      {
        t = h_14;
        t = x_90(t);
      }
    return(t);
  }
  t = e_7(t);
  return(t);
}
ATerm get_filename_0_0 (ATerm t)
{
  ATerm j_7 = NULL,k_7 = NULL,m_7 = NULL;
  m_7 = t;
  t = SSL_explode_string(m_7);
  {
    ATerm m_14 = t;
    int n_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm c_0 (ATerm t)
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm p_14 = ATgetFirst((ATermList) t);
              if(((ATgetType(p_14) != AT_INT) || (ATgetInt((ATermInt) p_14) != 47)))
                _fail(t);
              if(((j_7 != NULL) && (j_7 != (ATerm) ATgetNext((ATermList) t))))
                _fail((ATerm) ATgetNext((ATermList) t));
              else
                j_7 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          return(t);
        }
        t = at_suffix_rev_1_0(c_0, t);
        t = not_null(j_7);
        LocalPopChoice(n_14);
      }
    else
      {
        t = m_14;
      }
  }
  k_7 = t;
  t = SSL_implode_string(k_7);
  return(t);
}
ATerm map_1_0 (ATerm z_89 (ATerm), ATerm t)
{
  static ATerm b_10 (ATerm t)
  {
    ATerm k_9 = NULL,q_9 = NULL,r_9 = NULL;
    k_9 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = k_9;
      }
    else
      {
        ATerm r_5 = NULL,w_5 = NULL,z_5 = NULL,x_2 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            q_9 = ATgetFirst((ATermList) t);
            r_9 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(k_9);
        r_5 = t;
        t = q_9;
        t = z_89(t);
        w_5 = t;
        t = r_9;
        t = b_10(t);
        z_5 = t;
        t = (ATerm) ATinsert(CheckATermList(z_5), w_5);
        x_2 = t;
        t = SSLsetAnnotations(x_2, r_5);
      }
    return(t);
  }
  t = b_10(t);
  return(t);
}
static ATerm w_8 (ATerm t_36, ATerm u_36, ATerm t)
{
  t = SSL_strcat(t_36, u_36);
  return(t);
}
static ATerm h_0 (ATerm t)
{
  ATerm r_14 = t;
  int s_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      LocalPopChoice(s_14);
    }
  else
    {
      t = r_14;
    }
  return(t);
}
static ATerm m_0 (ATerm t)
{
  t = term_t_14;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm u_14 = t;
  int v_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_10 = NULL;
      q_10 = t;
      t = SSL_is_string(q_10);
      LocalPopChoice(v_14);
    }
  else
    {
      t = u_14;
      {
        ATerm w_14 = t;
        int x_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(h_0, t);
            LocalPopChoice(x_14);
          }
        else
          {
            t = w_14;
            {
              ATerm b_11 = NULL,c_11 = NULL,f_11 = NULL;
              b_11 = t;
              if(match_cons(t, sym_Path_1))
                {
                  c_11 = ATgetArgument(t, 0);
                  t = c_11;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      c_11 = ATgetArgument(t, 0);
                      t = c_11;
                      {
                        ATerm y_14 = t;
                        int z_14 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            LocalPopChoice(z_14);
                          }
                        else
                          {
                            t = y_14;
                            t = debug_1_0(m_0, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm k_11 = NULL,l_11 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          c_11 = ATgetArgument(t, 0);
                          f_11 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = c_11;
                      t = eval_config_0_0(t);
                      k_11 = t;
                      t = f_11;
                      t = eval_config_0_0(t);
                      l_11 = t;
                      t = (ATerm) ATmakeAppl(sym__2, k_11, l_11);
                      t = w_8(k_11, l_11, t);
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
  ATerm q_11 = NULL,v_11 = NULL;
  q_11 = t;
  t = term_a_15;
  v_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_15, q_11);
  t = s_9(v_11, q_11, t);
  {
    ATerm c_15 = t;
    int d_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_11 = NULL,y_11 = NULL;
        t = eval_config_0_0(t);
        x_11 = t;
        t = term_a_15;
        y_11 = t;
        t = SSL_table_put(y_11, q_11, x_11);
        t = x_11;
        LocalPopChoice(d_15);
      }
    else
      {
        t = c_15;
      }
  }
  return(t);
}
static ATerm z_0 (ATerm t)
{
  ATerm g_12 = NULL;
  if(match_cons(t, sym_Specification_1))
    {
      g_12 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_12;
  t = filter_1_0(n_1, t);
  return(t);
}
static ATerm n_1 (ATerm t)
{
  ATerm e_15 = t;
  if((PushChoice() == 0))
    {
      ATerm k_12 = NULL,l_12 = NULL,m_12 = NULL,w_4 = NULL;
      m_12 = t;
      if(match_cons(t, sym_Imports_1))
        {
          l_12 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(m_12);
      k_12 = t;
      t = (ATerm) ATmakeAppl(sym_Imports_1, l_12);
      w_4 = t;
      t = SSLsetAnnotations(w_4, k_12);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = e_15;
    }
  return(t);
}
ATerm flatten_stratego_0_0 (ATerm t)
{
  ATerm b_12 = NULL;
  t = map_1_0(z_0, t);
  t = concat_0_0(t);
  b_12 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, b_12);
  return(t);
}
ATerm genzip_4_0 (ATerm c_92 (ATerm), ATerm d_92 (ATerm), ATerm e_92 (ATerm), ATerm f_92 (ATerm), ATerm t)
{
  static ATerm a_13 (ATerm t)
  {
    ATerm f_15 = t;
    int g_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = c_92(t);
        LocalPopChoice(g_15);
      }
    else
      {
        t = f_15;
        {
          ATerm n_12 = NULL,r_12 = NULL,u_12 = NULL,w_12 = NULL,x_12 = NULL,z_12 = NULL,y_4 = NULL;
          t = d_92(t);
          z_12 = t;
          if(match_cons(t, sym__2))
            {
              r_12 = ATgetArgument(t, 0);
              u_12 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(z_12);
          n_12 = t;
          t = r_12;
          t = f_92(t);
          w_12 = t;
          t = u_12;
          t = a_13(t);
          x_12 = t;
          t = (ATerm) ATmakeAppl(sym__2, w_12, x_12);
          y_4 = t;
          t = SSLsetAnnotations(y_4, n_12);
          t = e_92(t);
        }
      }
    return(t);
  }
  t = a_13(t);
  return(t);
}
static ATerm o_1 (ATerm t)
{
  ATerm b_13 = NULL;
  if(match_cons(t, sym_Imports_1))
    {
      b_13 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = b_13;
  return(t);
}
static ATerm k_8 (ATerm z_133, ATerm t)
{
  t = z_133;
  t = filter_1_0(o_1, t);
  t = concat_0_0(t);
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm g_13 = NULL;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_h_15;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      ATerm j_13 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          g_13 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, term_i_15);
      j_13 = t;
      t = (ATerm) ATmakeAppl(sym__2, g_13, (ATerm) ATinsert(ATempty, term_i_15));
      t = x_8(g_13, j_13, t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
ATerm pass_keep_0_0 (ATerm t)
{
  ATerm p_13 = NULL,s_13 = NULL,t_13 = NULL,u_13 = NULL;
  t = term_j_15;
  {
    ATerm k_15 = t;
    int l_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        LocalPopChoice(l_15);
      }
    else
      {
        t = k_15;
        t = term_m_15;
      }
  }
  s_13 = t;
  t = term_m_15;
  u_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_13, term_m_15);
  t = l_8(s_13, u_13, t);
  t_13 = t;
  t = SSL_int_to_string(t_13);
  p_13 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, p_13), term_j_15);
  return(t);
}
static ATerm l_8 (ATerm a_41, ATerm b_41, ATerm t)
{
  ATerm n_15 = t;
  int o_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(a_41, b_41);
      LocalPopChoice(o_15);
    }
  else
    {
      t = n_15;
      t = SSL_subtr(a_41, b_41);
    }
  return(t);
}
ATerm pass_verbose_0_0 (ATerm t)
{
  ATerm v_13 = NULL,w_13 = NULL,x_13 = NULL,b_14 = NULL;
  t = term_p_15;
  {
    ATerm r_15 = t;
    int t_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        LocalPopChoice(t_15);
      }
    else
      {
        t = r_15;
        t = term_m_15;
      }
  }
  w_13 = t;
  t = term_m_15;
  b_14 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_13, term_m_15);
  t = l_8(w_13, b_14, t);
  x_13 = t;
  t = SSL_int_to_string(x_13);
  v_13 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, v_13), term_p_15);
  return(t);
}
static ATerm p_1 (ATerm t)
{
  ATerm i_14 = NULL,l_14 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm u_15 = ATgetArgument(t, 0);
      if(match_cons(u_15, sym_Stream_1))
        {
          i_14 = ATgetArgument(u_15, 0);
        }
      else
        _fail(t);
      l_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_8(i_14, l_14, t);
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm z_112 (ATerm), ATerm a_113 (ATerm), ATerm t)
{
  ATerm c_14 = NULL,e_14 = NULL;
  e_14 = t;
  t = xtc_new_file_0_0(t);
  c_14 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_14, e_14);
  t = g_8(p_1, c_14, e_14, t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, c_14);
  t = xtc_transform_file_2_0(z_112, a_113, t);
  t = read_from_0_0(t);
  return(t);
}
static ATerm m_8 (ATerm d_48, ATerm e_48, ATerm t)
{
  t = SSL_execvp(d_48, e_48);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm x_15 = NULL,y_15 = NULL,b_16 = NULL,d_16 = NULL;
  x_15 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      y_15 = ATgetArgument(t, 0);
      {
        ATerm p_7 = NULL,r_7 = NULL;
        t = SSL_int_to_string(y_15);
        p_7 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_w_15), p_7), term_v_15);
        r_7 = t;
        t = SSL_concat_strings(r_7);
      }
    }
  else
    {
      ATerm i_8 = NULL,e_9 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          y_15 = ATgetArgument(t, 0);
          b_16 = ATgetArgument(t, 1);
          d_16 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(b_16);
      i_8 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, d_16), term_a_16), i_8), term_z_15), y_15);
      e_9 = t;
      t = SSL_concat_strings(e_9);
    }
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm k_16 = NULL;
  k_16 = t;
  {
    ATerm c_16 = t;
    int e_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm q_1 (ATerm t)
        {
          if(match_cons(t, sym_Signal_3))
            {
              ATerm f_16 = ATgetArgument(t, 0);
              if((k_16 != ATgetArgument(t, 1)))
                {
                  _fail(ATgetArgument(t, 1));
                }
              {
                ATerm g_16 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_b_22), term_x_21), term_r_21), term_l_21), term_g_21), term_b_21), term_x_20), term_t_20), term_m_20), term_g_20), term_b_20), term_w_19), term_q_19), term_m_19), term_h_19), term_c_19), term_y_18), term_r_18), term_l_18), term_g_18), term_b_18), term_w_17), term_o_17), term_i_17), term_c_17), term_x_16), term_q_16), term_l_16);
        t = fetch_elem_1_0(q_1, t);
        LocalPopChoice(e_16);
      }
    else
      {
        t = c_16;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, k_16);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm s_16 = NULL,b_17 = NULL;
  s_16 = t;
  {
    ATerm c_22 = t;
    int d_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm e_22 = ATgetArgument(t, 0);
            b_17 = ATgetArgument(t, 1);
            {
              ATerm g_22 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(d_22);
        {
          ATerm h_22 = t;
          int i_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm y_9 = NULL,a_10 = NULL,d_10 = NULL;
              t = b_17;
              {
                ATerm l_22 = t;
                if((PushChoice() == 0))
                  {
                    if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
                      _fail(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = l_22;
                  }
              }
              t = signal_from_number_0_0(t);
              t = signal_to_descr_0_0(t);
              y_9 = t;
              t = term_m_22;
              a_10 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, y_9), term_n_22);
              d_10 = t;
              t = SSL_printnl(a_10, d_10);
              t = (ATerm) ATmakeAppl(sym__2, term_m_22, (ATerm) ATinsert(ATinsert(ATempty, y_9), term_n_22));
              LocalPopChoice(i_22);
            }
          else
            {
              t = h_22;
              t = s_16;
            }
        }
      }
    else
      {
        t = c_22;
        t = s_16;
      }
  }
  t = s_16;
  return(t);
}
ATerm fork_0_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_and_wait_1_0 (ATerm e_105 (ATerm), ATerm t)
{
  ATerm l_17 = NULL,m_17 = NULL;
  m_17 = t;
  t = fork_0_0(t);
  l_17 = t;
  {
    ATerm o_22 = t;
    int p_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = m_17;
        t = e_105(t);
        LocalPopChoice(p_22);
      }
    else
      {
        t = o_22;
        t = SSL_waitpid(l_17);
        t = warn_ifsignaled_0_0(t);
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm v_22 = ATgetArgument(t, 0);
            if(((ATgetType(v_22) != AT_INT) || (ATgetInt((ATermInt) v_22) != 0)))
              _fail(t);
            {
              ATerm w_22 = ATgetArgument(t, 1);
            }
            {
              ATerm x_22 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = m_17;
      }
  }
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm r_17 = NULL;
  static ATerm s_1 (ATerm t)
  {
    ATerm s_17 = NULL,t_17 = NULL;
    s_17 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(r_17), s_17);
    t = s_9(not_null(r_17), s_17, t);
    t_17 = t;
    t = (ATerm) ATmakeAppl(sym__2, s_17, t_17);
    return(t);
  }
  if(((r_17 != NULL) && (r_17 != t)))
    _fail(t);
  else
    r_17 = t;
  t = SSL_table_keys(r_17);
  t = map_1_0(s_1, t);
  return(t);
}
ATerm if_verbose5_1_0 (ATerm x_104 (ATerm), ATerm t)
{
  ATerm v_17 = NULL;
  v_17 = t;
  {
    ATerm y_22 = t;
    int z_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_17 = NULL;
        t = term_p_15;
        t = get_config_0_0(t);
        z_17 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_17, term_i_21);
        t = geq_0_0(t);
        t = v_17;
        t = x_104(t);
        LocalPopChoice(z_22);
      }
    else
      {
        t = y_22;
        t = v_17;
      }
  }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm w_104 (ATerm), ATerm t)
{
  ATerm k_18 = NULL;
  k_18 = t;
  {
    ATerm a_23 = t;
    int b_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_18 = NULL;
        t = term_p_15;
        t = get_config_0_0(t);
        q_18 = t;
        t = (ATerm) ATmakeAppl(sym__2, q_18, term_t_18);
        t = geq_0_0(t);
        t = k_18;
        t = w_104(t);
        LocalPopChoice(b_23);
      }
    else
      {
        t = a_23;
        t = k_18;
      }
  }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm y_104 (ATerm), ATerm t)
{
  ATerm v_18 = NULL;
  v_18 = t;
  {
    ATerm e_23 = t;
    int f_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_18 = NULL;
        t = term_p_15;
        t = get_config_0_0(t);
        x_18 = t;
        t = (ATerm) ATmakeAppl(sym__2, x_18, term_z_16);
        t = geq_0_0(t);
        t = v_18;
        t = y_104(t);
        LocalPopChoice(f_23);
      }
    else
      {
        t = e_23;
        t = v_18;
      }
  }
  return(t);
}
static ATerm p_8 (ATerm d_94 (ATerm), ATerm z_28, ATerm y_28, ATerm t)
{
  static ATerm k_20 (ATerm t)
  {
    ATerm t_19 = NULL,u_19 = NULL,x_19 = NULL;
    t_19 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = y_28;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            u_19 = ATgetFirst((ATermList) t);
            x_19 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm j_23 = t;
          int l_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = t_19;
              {
                static ATerm u_1 (ATerm t)
                {
                  t = y_28;
                  return(t);
                }
                t = a_9(d_94, u_1, u_19, x_19, t);
              }
              t = k_20(t);
              LocalPopChoice(l_23);
            }
          else
            {
              t = j_23;
              {
                ATerm i_10 = NULL,l_10 = NULL,a_5 = NULL;
                t = SSLgetAnnotations(t_19);
                i_10 = t;
                t = x_19;
                t = k_20(t);
                l_10 = t;
                t = (ATerm) ATinsert(CheckATermList(l_10), u_19);
                a_5 = t;
                t = SSLsetAnnotations(a_5, i_10);
              }
            }
        }
      }
    return(t);
  }
  t = z_28;
  t = k_20(t);
  return(t);
}
static ATerm w_1 (ATerm t)
{
  ATerm k_21 = NULL;
  if(match_cons(t, sym__2))
    {
      k_21 = ATgetArgument(t, 0);
      if((k_21 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm q_8 (ATerm y_52, ATerm z_52, ATerm a_53, ATerm t)
{
  ATerm o_20 = NULL,q_20 = NULL,s_20 = NULL;
  o_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_52, z_52);
  {
    ATerm m_23 = t;
    int n_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm q_23 = ATgetArgument(t, 0);
            ATerm s_23 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, y_52, z_52);
        t = s_9(y_52, z_52, t);
        LocalPopChoice(n_23);
      }
    else
      {
        t = m_23;
        t = (ATerm) ATempty;
      }
  }
  s_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_20, a_53);
  t = p_8(w_1, s_20, a_53, t);
  q_20 = t;
  t = SSL_table_put(y_52, z_52, q_20);
  t = o_20;
  return(t);
}
static ATerm r_8 (ATerm b_109 (ATerm), ATerm i_53, ATerm h_53, ATerm t)
{
  static ATerm y_1 (ATerm t)
  {
    ATerm s_21 = NULL,u_21 = NULL;
    if(match_cons(t, sym__2))
      {
        s_21 = ATgetArgument(t, 0);
        u_21 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, i_53, s_21, u_21);
    t = b_109(t);
    return(t);
  }
  t = h_53;
  t = map_1_0(y_1, t);
  return(t);
}
static ATerm q_22 (ATerm f_22, ATerm t)
{
  t = SSL_fclose(f_22);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm j_22 = NULL,k_22 = NULL;
  k_22 = t;
  if(match_cons(t, sym_Stream_1))
    {
      j_22 = ATgetArgument(t, 0);
      {
        ATerm t_23 = t;
        int u_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(j_22);
            LocalPopChoice(u_23);
          }
        else
          {
            t = t_23;
            t = q_22(k_22, t);
          }
      }
    }
  else
    {
      t = q_22(k_22, t);
    }
  return(t);
}
static ATerm s_8 (ATerm i_23, ATerm t)
{
  t = SSL_read_term_from_stream(i_23);
  return(t);
}
static ATerm t_8 (ATerm b_38, ATerm c_38, ATerm t)
{
  ATerm r_22 = NULL;
  t = SSL_fopen(b_38, c_38);
  r_22 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, r_22);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm s_22 = NULL;
  t = SSL_stdin_stream();
  s_22 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, s_22);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm t_22 = NULL;
  t = SSL_stdout_stream();
  t_22 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, t_22);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm u_22 = NULL;
  t = SSL_stderr_stream();
  u_22 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, u_22);
  return(t);
}
static ATerm u_25 (ATerm r_23, ATerm t)
{
  ATerm x_23 = NULL;
  t = SSL_explode_term(r_23);
  if(match_cons(t, sym__2))
    {
      ATerm v_23 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) v_23) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm w_23 = ATgetArgument(t, 1);
        if(((ATgetType(w_23) == AT_LIST) && !(ATisEmpty(w_23))))
          {
            x_23 = ATgetFirst((ATermList) w_23);
            {
              ATerm y_23 = (ATerm) ATgetNext((ATermList) w_23);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = x_23;
  if(match_cons(t, sym_stderr_0))
    {
      t = x_23;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = x_23;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = x_23;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm v_25 (ATerm a_24, ATerm e_24, ATerm f_24, ATerm t)
{
  ATerm g_24 = NULL,n_24 = NULL,o_24 = NULL,w_24 = NULL,c_5 = NULL;
  t = SSLgetAnnotations(f_24);
  o_24 = t;
  t = a_24;
  if(match_cons(t, sym_Path_1))
    {
      w_24 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, w_24, e_24);
  c_5 = t;
  t = SSLsetAnnotations(c_5, o_24);
  if(match_cons(t, sym__2))
    {
      g_24 = ATgetArgument(t, 0);
      n_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_8(g_24, n_24, t);
  return(t);
}
static ATerm w_25 (ATerm y_24, ATerm c_25, ATerm e_25, ATerm t)
{
  ATerm h_25 = NULL,i_25 = NULL,j_25 = NULL,o_25 = NULL,d_5 = NULL;
  t = SSLgetAnnotations(e_25);
  j_25 = t;
  t = SSL_is_string(y_24);
  o_25 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_25, c_25);
  d_5 = t;
  t = SSLsetAnnotations(d_5, j_25);
  if(match_cons(t, sym__2))
    {
      h_25 = ATgetArgument(t, 0);
      i_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_8(h_25, i_25, t);
  return(t);
}
static ATerm u_8 (ATerm t)
{
  ATerm q_25 = NULL,r_25 = NULL,s_25 = NULL;
  q_25 = t;
  if(match_cons(t, sym__2))
    {
      r_25 = ATgetArgument(t, 0);
      s_25 = ATgetArgument(t, 1);
      {
        ATerm z_23 = t;
        int b_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = u_25(q_25, t);
            LocalPopChoice(b_24);
          }
        else
          {
            t = z_23;
            {
              ATerm c_24 = t;
              int d_24 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = v_25(r_25, s_25, q_25, t);
                  LocalPopChoice(d_24);
                }
              else
                {
                  t = c_24;
                  t = w_25(r_25, s_25, q_25, t);
                }
            }
          }
      }
    }
  else
    {
      t = u_25(q_25, t);
    }
  return(t);
}
static ATerm a_2 (ATerm t)
{
  t = term_h_24;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm x_25 = NULL,y_25 = NULL,z_25 = NULL;
  ATerm i_24 = t;
  int j_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_26 = NULL;
      a_26 = t;
      t = (ATerm) ATmakeAppl(sym__2, a_26, term_k_24);
      t = u_8(t);
      LocalPopChoice(j_24);
    }
  else
    {
      t = i_24;
      t = debug_1_0(a_2, t);
      _fail(t);
    }
  y_25 = t;
  if(match_cons(t, sym_Stream_1))
    {
      z_25 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_8(z_25, t);
  x_25 = t;
  t = y_25;
  t = fclose_0_0(t);
  t = x_25;
  return(t);
}
static ATerm c_2 (ATerm t)
{
  t = term_l_24;
  return(t);
}
static ATerm d_2 (ATerm t)
{
  t = term_m_24;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm p_24 = t;
  int q_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_26 = NULL,e_26 = NULL;
      d_26 = t;
      t = (ATerm) ATinsert(ATempty, term_r_24);
      e_26 = t;
      t = (ATerm) ATmakeAppl(sym__2, d_26, (ATerm) ATinsert(ATempty, term_r_24));
      t = x_8(d_26, e_26, t);
      LocalPopChoice(q_24);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = p_24;
      {
        ATerm s_24 = t;
        int t_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_24 = t;
            if((PushChoice() == 0))
              {
                ATerm f_26 = NULL,h_26 = NULL;
                f_26 = t;
                t = (ATerm) ATinsert(ATempty, term_i_15);
                h_26 = t;
                t = (ATerm) ATmakeAppl(sym__2, f_26, (ATerm) ATinsert(ATempty, term_i_15));
                t = x_8(f_26, h_26, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = u_24;
              }
            t = debug_1_0(c_2, t);
            LocalPopChoice(t_24);
          }
        else
          {
            t = s_24;
            t = debug_1_0(d_2, t);
          }
      }
      t = (ATerm) ATempty;
    }
  return(t);
}
static ATerm e_2 (ATerm t)
{
  t = debug_1_0(g_2, t);
  return(t);
}
static ATerm g_2 (ATerm t)
{
  t = term_v_24;
  return(t);
}
static ATerm h_2 (ATerm t)
{
  t = debug_1_0(i_2, t);
  return(t);
}
static ATerm i_2 (ATerm t)
{
  t = term_x_24;
  return(t);
}
static ATerm j_2 (ATerm t)
{
  ATerm w_26 = NULL,x_26 = NULL,y_26 = NULL;
  w_26 = t;
  t = term_m_22;
  x_26 = t;
  t = (ATerm) ATinsert(ATempty, term_z_24);
  y_26 = t;
  t = SSL_printnl(x_26, y_26);
  t = w_26;
  return(t);
}
static ATerm k_2 (ATerm t)
{
  ATerm z_26 = NULL,a_27 = NULL,b_27 = NULL;
  if(match_cons(t, sym__3))
    {
      z_26 = ATgetArgument(t, 0);
      a_27 = ATgetArgument(t, 1);
      b_27 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = q_8(z_26, a_27, b_27, t);
  return(t);
}
static ATerm l_2 (ATerm t)
{
  ATerm c_27 = NULL,d_27 = NULL,e_27 = NULL;
  c_27 = t;
  t = term_m_22;
  d_27 = t;
  t = (ATerm) ATinsert(ATempty, term_a_25);
  e_27 = t;
  t = SSL_printnl(d_27, e_27);
  t = c_27;
  return(t);
}
static ATerm m_2 (ATerm t)
{
  ATerm f_27 = NULL,g_27 = NULL,h_27 = NULL;
  f_27 = t;
  t = term_m_22;
  g_27 = t;
  t = (ATerm) ATinsert(ATempty, term_z_24);
  h_27 = t;
  t = SSL_printnl(g_27, h_27);
  t = f_27;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm k_26 = NULL,l_26 = NULL,m_26 = NULL,n_26 = NULL,o_26 = NULL,p_26 = NULL,q_26 = NULL,r_26 = NULL,s_26 = NULL,t_26 = NULL;
  k_26 = t;
  t = if_verbose5_1_0(e_2, t);
  {
    ATerm b_25 = t;
    if((PushChoice() == 0))
      {
        ATerm u_26 = NULL,v_26 = NULL;
        t = term_d_25;
        u_26 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, k_26);
        v_26 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_d_25, (ATerm) ATmakeAppl(sym_Imported_1, k_26));
        t = s_9(u_26, v_26, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = b_25;
      }
  }
  m_26 = t;
  t = term_d_25;
  r_26 = t;
  t = term_f_25;
  s_26 = t;
  t = (ATerm) ATinsert(ATempty, k_26);
  t_26 = t;
  t = SSL_table_put(r_26, s_26, t_26);
  t = m_26;
  t = if_verbose4_1_0(h_2, t);
  t = read_repository_file_0_0(t);
  t = if_verbose6_1_0(j_2, t);
  l_26 = t;
  t = term_d_25;
  q_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_25, l_26);
  t = r_8(k_2, q_26, l_26, t);
  t = if_verbose6_1_0(l_2, t);
  t = term_d_25;
  n_26 = t;
  t = (ATerm) ATmakeAppl(sym_Imported_1, k_26);
  o_26 = t;
  t = (ATerm) ATempty;
  p_26 = t;
  t = SSL_table_put(n_26, o_26, p_26);
  t = (ATerm) ATmakeAppl(sym__3, term_d_25, (ATerm)ATmakeAppl(sym_Imported_1, k_26), (ATerm) ATempty);
  t = if_verbose4_1_0(m_2, t);
  return(t);
}
ATerm repeat_2_0 (ATerm n_82 (ATerm), ATerm o_82 (ATerm), ATerm t)
{
  static ATerm j_27 (ATerm t)
  {
    ATerm g_25 = t;
    int k_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_82(t);
        t = j_27(t);
        LocalPopChoice(k_25);
      }
    else
      {
        t = g_25;
        t = o_82(t);
      }
    return(t);
  }
  t = j_27(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm l_25 = t;
  int m_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_n_25;
      t = get_config_0_0(t);
      LocalPopChoice(m_25);
    }
  else
    {
      t = l_25;
      {
        ATerm p_25 = t;
        int t_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_27 = NULL;
            t = term_b_26;
            k_27 = t;
            t = SSL_getenv(k_27);
            LocalPopChoice(t_25);
          }
        else
          {
            t = p_25;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
static ATerm n_2 (ATerm t)
{
  t = debug_1_0(o_2, t);
  return(t);
}
static ATerm o_2 (ATerm t)
{
  t = term_c_26;
  return(t);
}
static ATerm q_2 (ATerm t)
{
  ATerm v_27 = NULL,w_27 = NULL;
  t = term_d_25;
  v_27 = t;
  t = term_g_26;
  w_27 = t;
  t = term_i_26;
  t = s_9(v_27, w_27, t);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm j_26 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = j_26;
      }
  }
  return(t);
}
static ATerm r_2 (ATerm t)
{
  t = debug_1_0(s_2, t);
  return(t);
}
static ATerm s_2 (ATerm t)
{
  t = term_i_27;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm p_27 = NULL;
  t = if_verbose5_1_0(n_2, t);
  p_27 = t;
  {
    ATerm l_27 = t;
    int m_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_27 = NULL,t_27 = NULL;
        t = term_d_25;
        r_27 = t;
        t = term_f_25;
        t_27 = t;
        t = term_n_27;
        t = s_9(r_27, t_27, t);
        LocalPopChoice(m_27);
      }
    else
      {
        t = l_27;
        {
          ATerm u_27 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          u_27 = t;
          t = repeat_2_0(q_2, _id, t);
          t = u_27;
        }
      }
  }
  t = p_27;
  t = if_verbose5_1_0(r_2, t);
  return(t);
}
static ATerm t_2 (ATerm t)
{
  t = debug_1_0(w_2, t);
  return(t);
}
static ATerm w_2 (ATerm t)
{
  t = term_o_27;
  return(t);
}
static ATerm n_29 (ATerm f_28, ATerm t)
{
  ATerm m_28 = NULL,n_28 = NULL,o_28 = NULL;
  t = term_d_25;
  n_28 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, f_28);
  o_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_25, (ATerm) ATmakeAppl(sym_Tool_1, f_28));
  t = s_9(n_28, o_28, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm q_27 = ATgetFirst((ATermList) t);
      if(match_cons(q_27, sym__2))
        {
          ATerm x_27 = ATgetArgument(q_27, 0);
          m_28 = ATgetArgument(q_27, 1);
        }
      else
        _fail(t);
      {
        ATerm s_27 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = m_28;
  return(t);
}
static ATerm z_2 (ATerm t)
{
  t = debug_1_0(a_3, t);
  return(t);
}
static ATerm a_3 (ATerm t)
{
  t = term_o_27;
  return(t);
}
static ATerm b_3 (ATerm t)
{
  t = term_d_25;
  t = table_getlist_0_0(t);
  t = debug_1_0(c_3, t);
  return(t);
}
static ATerm c_3 (ATerm t)
{
  t = term_y_27;
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm z_27 = t;
  int a_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_28 = NULL,r_28 = NULL,s_28 = NULL;
      t = if_verbose5_1_0(t_2, t);
      t = xtc_load_0_0(t);
      s_28 = t;
      if(match_cons(t, sym__2))
        {
          q_28 = ATgetArgument(t, 0);
          r_28 = ATgetArgument(t, 1);
          {
            ATerm b_28 = t;
            int c_28 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm v_28 = NULL,f_29 = NULL,g_29 = NULL;
                t = term_d_25;
                f_29 = t;
                t = (ATerm) ATmakeAppl(sym_Tool_1, q_28);
                g_29 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_d_25, (ATerm) ATmakeAppl(sym_Tool_1, q_28));
                t = s_9(f_29, g_29, t);
                {
                  static ATerm y_2 (ATerm t)
                  {
                    if(match_cons(t, sym__2))
                      {
                        if((r_28 != ATgetArgument(t, 0)))
                          {
                            _fail(ATgetArgument(t, 0));
                          }
                        if(((v_28 != NULL) && (v_28 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          v_28 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = fetch_1_0(y_2, t);
                }
                t = not_null(v_28);
                LocalPopChoice(c_28);
              }
            else
              {
                t = b_28;
                t = n_29(s_28, t);
              }
          }
        }
      else
        {
          t = n_29(s_28, t);
        }
      t = if_verbose5_1_0(z_2, t);
      LocalPopChoice(a_28);
    }
  else
    {
      t = z_27;
      {
        ATerm m_29 = NULL,r_11 = NULL,s_11 = NULL;
        m_29 = t;
        t = term_m_22;
        r_11 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_e_28), m_29), term_d_28);
        s_11 = t;
        t = SSL_printnl(r_11, s_11);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_e_28), m_29), term_d_28);
        t = if_verbose5_1_0(b_3, t);
        _fail(t);
      }
    }
  return(t);
}
ATerm xtc_command_1_0 (ATerm a_114 (ATerm), ATerm t)
{
  ATerm r_29 = NULL,s_29 = NULL;
  s_29 = t;
  t = a_114(t);
  t = xtc_find_0_0(t);
  r_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_29, s_29);
  {
    static ATerm f_3 (ATerm t)
    {
      ATerm t_29 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, r_29, s_29);
      t = m_8(r_29, s_29, t);
      t = term_g_28;
      t_29 = t;
      t = SSL_exit(t_29);
      return(t);
    }
    t = fork_and_wait_1_0(f_3, t);
  }
  t = s_29;
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm t_0 (ATerm), ATerm v_0 (ATerm), ATerm t)
{
  ATerm w_29 = NULL,b_30 = NULL;
  w_29 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm c_30 = NULL,d_30 = NULL;
      t = w_29;
      t = xtc_new_file_0_0(t);
      c_30 = t;
      t = v_0(t);
      d_30 = t;
      t = (ATerm) ATmakeAppl(sym__2, d_30, (ATerm) ATinsert(ATinsert(ATempty, c_30), term_s_12));
      t = conc_0_0(t);
      t = xtc_command_1_0(t_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, c_30);
    }
  else
    {
      ATerm h_30 = NULL,i_30 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          b_30 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = b_30;
      t = xtc_new_file_0_0(t);
      h_30 = t;
      t = v_0(t);
      i_30 = t;
      t = (ATerm) ATmakeAppl(sym__2, i_30, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, h_30), term_s_12), b_30), term_h_28));
      t = conc_0_0(t);
      t = xtc_command_1_0(t_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, h_30);
    }
  return(t);
}
static ATerm c_32 (ATerm p_30, ATerm q_30, ATerm r_30, ATerm t)
{
  ATerm s_30 = NULL,v_30 = NULL,u_11 = NULL,w_11 = NULL,h_5 = NULL;
  t = SSLgetAnnotations(r_30);
  s_30 = t;
  t = p_30;
  {
    ATerm i_28 = t;
    if((PushChoice() == 0))
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("rtree", 0, ATtrue)))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = i_28;
      }
  }
  v_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_30, q_30);
  h_5 = t;
  t = SSLsetAnnotations(h_5, s_30);
  w_11 = t;
  t = SSL_explode_term(w_11);
  if(match_cons(t, sym__2))
    {
      ATerm j_28 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) j_28) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm k_28 = ATgetArgument(t, 1);
        if(((ATgetType(k_28) == AT_LIST) && !(ATisEmpty(k_28))))
          {
            ATerm l_28 = ATgetFirst((ATermList) k_28);
            ATerm p_28 = (ATerm) ATgetNext((ATermList) k_28);
            if(((ATgetType(p_28) == AT_LIST) && !(ATisEmpty(p_28))))
              {
                u_11 = ATgetFirst((ATermList) p_28);
                {
                  ATerm t_28 = (ATerm) ATgetNext((ATermList) p_28);
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
  t = u_11;
  {
    ATerm u_28 = t;
    int a_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_29 = t;
        int e_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_31 = NULL;
            if(match_cons(t, sym_FILE_1))
              {
                c_31 = ATgetArgument(t, 0);
                {
                  ATerm e_12 = NULL,i_5 = NULL;
                  t = SSLgetAnnotations(u_11);
                  e_12 = t;
                  t = (ATerm) ATmakeAppl(sym_FILE_1, c_31);
                  i_5 = t;
                  t = SSLsetAnnotations(i_5, e_12);
                }
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = u_11;
              }
            LocalPopChoice(e_29);
            t = xtc_transform_file_2_0(g_3, k_3, t);
          }
        else
          {
            t = b_29;
            t = xtc_transform_term_2_0(m_3, n_3, t);
          }
        t = read_from_0_0(t);
        LocalPopChoice(a_29);
      }
    else
      {
        t = u_28;
        {
          ATerm o_31 = NULL,p_31 = NULL,q_31 = NULL;
          t = term_m_22;
          p_31 = t;
          t = (ATerm) ATinsert(ATinsert(ATempty, q_30), term_h_29);
          q_31 = t;
          t = SSL_printnl(p_31, q_31);
          t = term_m_15;
          o_31 = t;
          t = SSL_exit(o_31);
          t = (ATerm) ATinsert(ATinsert(ATempty, q_30), term_h_29);
        }
      }
  }
  return(t);
}
static ATerm e_32 (ATerm r_31, ATerm s_31, ATerm t)
{
  ATerm o_12 = NULL;
  t = SSL_explode_term(s_31);
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
            ATerm l_29 = (ATerm) ATgetNext((ATermList) j_29);
            if(((ATgetType(l_29) == AT_LIST) && !(ATisEmpty(l_29))))
              {
                o_12 = ATgetFirst((ATermList) l_29);
                {
                  ATerm o_29 = (ATerm) ATgetNext((ATermList) l_29);
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
  t = o_12;
  {
    ATerm p_29 = t;
    int q_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = read_from_0_0(t);
        LocalPopChoice(q_29);
      }
    else
      {
        t = p_29;
        {
          ATerm v_31 = NULL,w_31 = NULL,x_31 = NULL;
          t = term_m_22;
          w_31 = t;
          t = (ATerm) ATinsert(ATinsert(ATempty, r_31), term_h_29);
          x_31 = t;
          t = SSL_printnl(w_31, x_31);
          t = term_m_15;
          v_31 = t;
          t = SSL_exit(v_31);
          t = (ATerm) ATinsert(ATinsert(ATempty, r_31), term_h_29);
        }
      }
  }
  return(t);
}
static ATerm g_3 (ATerm t)
{
  t = term_u_29;
  return(t);
}
static ATerm k_3 (ATerm t)
{
  ATerm e_31 = NULL,f_31 = NULL,g_31 = NULL,h_31 = NULL,i_31 = NULL;
  i_31 = t;
  t = pass_verbose_0_0(t);
  e_31 = t;
  t = i_31;
  t = pass_keep_0_0(t);
  f_31 = t;
  t = term_v_29;
  {
    ATerm x_29 = t;
    int y_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        LocalPopChoice(y_29);
        t = (ATerm) ATinsert(ATempty, term_v_29);
      }
    else
      {
        t = x_29;
        t = (ATerm) ATempty;
      }
  }
  g_31 = t;
  t = term_z_29;
  t = get_config_0_0(t);
  h_31 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, h_31), f_31), e_31), g_31);
  t = concat_0_0(t);
  return(t);
}
static ATerm m_3 (ATerm t)
{
  t = term_u_29;
  return(t);
}
static ATerm n_3 (ATerm t)
{
  ATerm j_31 = NULL,k_31 = NULL,l_31 = NULL,m_31 = NULL,n_31 = NULL;
  n_31 = t;
  t = pass_verbose_0_0(t);
  j_31 = t;
  t = n_31;
  t = pass_keep_0_0(t);
  k_31 = t;
  t = term_v_29;
  {
    ATerm a_30 = t;
    int e_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        LocalPopChoice(e_30);
        t = (ATerm) ATinsert(ATempty, term_v_29);
      }
    else
      {
        t = a_30;
        t = (ATerm) ATempty;
      }
  }
  l_31 = t;
  t = term_z_29;
  t = get_config_0_0(t);
  m_31 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, m_31), k_31), j_31), l_31);
  t = concat_0_0(t);
  return(t);
}
ATerm parse_module_0_0 (ATerm t)
{
  ATerm y_31 = NULL,z_31 = NULL,a_32 = NULL;
  y_31 = t;
  if(match_cons(t, sym__2))
    {
      z_31 = ATgetArgument(t, 0);
      a_32 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_31;
  if(match_string(t, "rtree"))
    {
      ATerm f_30 = t;
      int g_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = c_32(z_31, a_32, y_31, t);
          LocalPopChoice(g_30);
        }
      else
        {
          t = f_30;
          t = e_32(a_32, y_31, t);
        }
    }
  else
    {
      t = c_32(z_31, a_32, y_31, t);
    }
  return(t);
}
ATerm debug_1_0 (ATerm o_89 (ATerm), ATerm t)
{
  ATerm i_32 = NULL,j_32 = NULL,l_32 = NULL,n_32 = NULL;
  i_32 = t;
  t = o_89(t);
  j_32 = t;
  t = term_m_22;
  l_32 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, i_32), j_32);
  n_32 = t;
  t = SSL_printnl(l_32, n_32);
  t = i_32;
  return(t);
}
ATerm if_verbose3_1_0 (ATerm v_104 (ATerm), ATerm t)
{
  ATerm t_32 = NULL;
  t_32 = t;
  {
    ATerm j_30 = t;
    int k_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_33 = NULL;
        t = term_p_15;
        t = get_config_0_0(t);
        a_33 = t;
        t = (ATerm) ATmakeAppl(sym__2, a_33, term_v_16);
        t = geq_0_0(t);
        t = t_32;
        t = v_104(t);
        LocalPopChoice(k_30);
      }
    else
      {
        t = j_30;
        t = t_32;
      }
  }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm l_90 (ATerm), ATerm t)
{
  ATerm c_33 = NULL;
  static ATerm o_3 (ATerm t)
  {
    t = l_90(t);
    if(((c_33 != NULL) && (c_33 != t)))
      _fail(t);
    else
      c_33 = t;
    return(t);
  }
  t = fetch_1_0(o_3, t);
  t = not_null(c_33);
  return(t);
}
static ATerm x_8 (ATerm t_37, ATerm u_37, ATerm t)
{
  t = SSL_access(t_37, u_37);
  return(t);
}
ATerm is_relpath_0_0 (ATerm t)
{
  ATerm l_30 = t;
  if((PushChoice() == 0))
    {
      ATerm d_33 = NULL;
      d_33 = t;
      t = SSL_explode_string(d_33);
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          ATerm m_30 = ATgetFirst((ATermList) t);
          if(((ATgetType(m_30) != AT_INT) || (ATgetInt((ATermInt) m_30) != 47)))
            _fail(t);
          {
            ATerm n_30 = (ATerm) ATgetNext((ATermList) t);
          }
        }
      else
        _fail(t);
      t = d_33;
      PopChoice();
      _fail(t);
    }
  else
    {
      t = l_30;
    }
  return(t);
}
static ATerm y_8 (ATerm t_81 (ATerm), ATerm o_21, ATerm n_21, ATerm t)
{
  t = t_81(t);
  {
    ATerm o_30 = t;
    int t_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm p_3 (ATerm t)
        {
          ATerm o_33 = NULL;
          o_33 = t;
          {
            ATerm u_30 = t;
            int w_30 = stack_ptr;
            if((PushChoice() == 0))
              {
                static ATerm q_3 (ATerm t)
                {
                  ATerm s_33 = NULL,t_33 = NULL,v_33 = NULL,x_33 = NULL,y_33 = NULL;
                  t_33 = t;
                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, t_33), term_l_13), o_21), term_x_30), o_33);
                  y_33 = t;
                  t = SSL_concat_strings(y_33);
                  v_33 = t;
                  t = (ATerm) ATinsert(ATempty, term_i_15);
                  x_33 = t;
                  t = (ATerm) ATmakeAppl(sym__2, v_33, (ATerm) ATinsert(ATempty, term_i_15));
                  t = x_8(v_33, x_33, t);
                  s_33 = t;
                  t = (ATerm) ATmakeAppl(sym__2, t_33, (ATerm) ATmakeAppl(sym_FILE_1, s_33));
                  return(t);
                }
                t = o_21;
                t = is_relpath_0_0(t);
                t = n_21;
                t = fetch_elem_1_0(q_3, t);
                LocalPopChoice(w_30);
              }
            else
              {
                t = u_30;
                {
                  static ATerm r_3 (ATerm t)
                  {
                    ATerm t_12 = NULL,v_12 = NULL,y_12 = NULL,c_13 = NULL,d_13 = NULL;
                    v_12 = t;
                    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, v_12), term_l_13), o_21);
                    d_13 = t;
                    t = SSL_concat_strings(d_13);
                    y_12 = t;
                    t = (ATerm) ATinsert(ATempty, term_i_15);
                    c_13 = t;
                    t = (ATerm) ATmakeAppl(sym__2, y_12, (ATerm) ATinsert(ATempty, term_i_15));
                    t = x_8(y_12, c_13, t);
                    t_12 = t;
                    t = (ATerm) ATmakeAppl(sym__2, v_12, (ATerm) ATmakeAppl(sym_FILE_1, t_12));
                    return(t);
                  }
                  t = SSL_explode_string(o_21);
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      ATerm y_30 = ATgetFirst((ATermList) t);
                      if(((ATgetType(y_30) != AT_INT) || (ATgetInt((ATermInt) y_30) != 47)))
                        _fail(t);
                      {
                        ATerm z_30 = (ATerm) ATgetNext((ATermList) t);
                      }
                    }
                  else
                    _fail(t);
                  t = n_21;
                  t = fetch_elem_1_0(r_3, t);
                }
              }
          }
          return(t);
        }
        t = fetch_elem_1_0(p_3, t);
        LocalPopChoice(t_30);
      }
    else
      {
        t = o_30;
        {
          ATerm a_31 = t;
          int b_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              static ATerm s_3 (ATerm t)
              {
                ATerm z_33 = NULL,a_34 = NULL,b_34 = NULL,c_34 = NULL,d_34 = NULL,e_34 = NULL;
                z_33 = t;
                t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, z_33), term_l_13), o_21);
                e_34 = t;
                t = SSL_concat_strings(e_34);
                a_34 = t;
                t = term_d_25;
                c_34 = t;
                t = (ATerm) ATmakeAppl(sym_Tool_1, a_34);
                d_34 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_d_25, (ATerm) ATmakeAppl(sym_Tool_1, a_34));
                t = s_9(c_34, d_34, t);
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    ATerm d_31 = ATgetFirst((ATermList) t);
                    if(match_cons(d_31, sym__2))
                      {
                        ATerm u_31 = ATgetArgument(d_31, 0);
                        b_34 = ATgetArgument(d_31, 1);
                      }
                    else
                      _fail(t);
                    {
                      ATerm t_31 = (ATerm) ATgetNext((ATermList) t);
                    }
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym__2, z_33, (ATerm) ATmakeAppl(sym_FILE_1, b_34));
                return(t);
              }
              t = n_21;
              t = fetch_elem_1_0(s_3, t);
              LocalPopChoice(b_31);
            }
          else
            {
              t = a_31;
              {
                ATerm b_32 = t;
                int d_32 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_f_32;
                    t = get_config_0_0(t);
                    LocalPopChoice(d_32);
                    {
                      ATerm f_34 = NULL,g_34 = NULL,h_34 = NULL,i_34 = NULL,j_34 = NULL;
                      f_34 = t;
                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_h_32), o_21), term_g_32);
                      j_34 = t;
                      t = SSL_concat_strings(j_34);
                      g_34 = t;
                      t = term_m_22;
                      h_34 = t;
                      t = (ATerm) ATinsert(ATempty, g_34);
                      i_34 = t;
                      t = SSL_printnl(h_34, i_34);
                      t = f_34;
                      _fail(t);
                    }
                  }
                else
                  {
                    t = b_32;
                    {
                      ATerm m_34 = NULL,n_34 = NULL,o_34 = NULL;
                      t = term_m_22;
                      n_34 = t;
                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_h_32), o_21), term_g_32);
                      o_34 = t;
                      t = SSL_printnl(n_34, o_34);
                      t = term_m_15;
                      m_34 = t;
                      t = SSL_exit(m_34);
                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_h_32), o_21), term_g_32);
                    }
                  }
              }
            }
        }
      }
  }
  return(t);
}
static ATerm c_4 (ATerm t)
{
  t = term_k_32;
  return(t);
}
ATerm get_module_1_0 (ATerm s_81 (ATerm), ATerm t)
{
  ATerm s_34 = NULL,t_34 = NULL,u_34 = NULL,v_34 = NULL;
  t = basename_1_0(_id, t);
  u_34 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_k_24), term_p_32), term_o_32), term_m_32);
  v_34 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_34, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_k_24), term_p_32), term_o_32), term_m_32));
  t = y_8(s_81, u_34, v_34, t);
  if(match_cons(t, sym__2))
    {
      ATerm q_32 = ATgetArgument(t, 0);
      ATerm r_32 = ATgetArgument(t, 1);
      if(match_cons(r_32, sym_FILE_1))
        {
          s_34 = ATgetArgument(r_32, 0);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  {
    static ATerm x_3 (ATerm t)
    {
      ATerm x_34 = NULL;
      x_34 = t;
      t = s_34;
      t = debug_1_0(c_4, t);
      t = x_34;
      return(t);
    }
    t = if_verbose3_1_0(x_3, t);
  }
  t = parse_module_0_0(t);
  t_34 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_34, t_34);
  return(t);
}
static ATerm a_9 (ATerm g_94 (ATerm), ATerm h_94 (ATerm), ATerm d_29, ATerm c_29, ATerm t)
{
  t = h_94(t);
  {
    static ATerm k_4 (ATerm t)
    {
      ATerm y_34 = NULL;
      y_34 = t;
      t = (ATerm) ATmakeAppl(sym__2, d_29, y_34);
      t = g_94(t);
      return(t);
    }
    t = fetch_1_0(k_4, t);
  }
  t = c_29;
  return(t);
}
static ATerm b_9 (ATerm y_93 (ATerm), ATerm x_28, ATerm w_28, ATerm t)
{
  static ATerm o_35 (ATerm t)
  {
    ATerm j_35 = NULL,k_35 = NULL,l_35 = NULL;
    j_35 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = j_35;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            k_35 = ATgetFirst((ATermList) t);
            l_35 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm s_32 = t;
          int u_32 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = j_35;
              {
                static ATerm n_4 (ATerm t)
                {
                  t = w_28;
                  return(t);
                }
                t = a_9(y_93, n_4, k_35, l_35, t);
              }
              t = o_35(t);
              LocalPopChoice(u_32);
            }
          else
            {
              t = s_32;
              {
                ATerm o_13 = NULL,y_13 = NULL,m_5 = NULL;
                t = SSLgetAnnotations(j_35);
                o_13 = t;
                t = l_35;
                t = o_35(t);
                y_13 = t;
                t = (ATerm) ATinsert(CheckATermList(y_13), k_35);
                m_5 = t;
                t = SSLsetAnnotations(m_5, o_13);
              }
            }
        }
      }
    return(t);
  }
  t = x_28;
  t = o_35(t);
  return(t);
}
static ATerm p_4 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm v_32 = ATgetArgument(t, 0);
      if(((ATgetType(v_32) != AT_LIST) || !(ATisEmpty(v_32))))
        _fail(t);
      {
        ATerm w_32 = ATgetArgument(t, 1);
        if(((ATgetType(w_32) != AT_LIST) || !(ATisEmpty(w_32))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm q_4 (ATerm t)
{
  ATerm w_35 = NULL,x_35 = NULL,y_35 = NULL,z_35 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm x_32 = ATgetArgument(t, 0);
      if(((ATgetType(x_32) == AT_LIST) && !(ATisEmpty(x_32))))
        {
          w_35 = ATgetFirst((ATermList) x_32);
          x_35 = (ATerm) ATgetNext((ATermList) x_32);
        }
      else
        _fail(t);
      {
        ATerm y_32 = ATgetArgument(t, 1);
        if(((ATgetType(y_32) == AT_LIST) && !(ATisEmpty(y_32))))
          {
            y_35 = ATgetFirst((ATermList) y_32);
            z_35 = (ATerm) ATgetNext((ATermList) y_32);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, w_35, y_35), (ATerm) ATmakeAppl(sym__2, x_35, z_35));
  return(t);
}
static ATerm r_4 (ATerm t)
{
  ATerm a_36 = NULL,b_36 = NULL;
  if(match_cons(t, sym__2))
    {
      a_36 = ATgetArgument(t, 0);
      b_36 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(b_36), a_36);
  return(t);
}
static ATerm g_9 (ATerm s_596, ATerm x_596, ATerm n_56, ATerm t)
{
  ATerm r_35 = NULL,s_35 = NULL,t_35 = NULL,u_35 = NULL;
  t = SSL_explode_term(x_596);
  if(match_cons(t, sym__2))
    {
      r_35 = ATgetArgument(t, 0);
      t_35 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(s_596);
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
  t = genzip_4_0(p_4, q_4, r_4, _id, t);
  u_35 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_35, n_56);
  t = conc_0_0(t);
  return(t);
}
static ATerm s_4 (ATerm t)
{
  ATerm n_36 = NULL;
  n_36 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, n_36);
  return(t);
}
static ATerm u_4 (ATerm t)
{
  ATerm o_36 = NULL,r_36 = NULL,s_36 = NULL,v_36 = NULL,o_5 = NULL;
  v_36 = t;
  if(match_cons(t, sym__2))
    {
      r_36 = ATgetArgument(t, 0);
      s_36 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_36);
  o_36 = t;
  t = s_36;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, r_36, s_36);
  o_5 = t;
  t = SSLsetAnnotations(o_5, o_36);
  return(t);
}
static ATerm x_4 (ATerm t)
{
  ATerm w_37 = NULL,x_37 = NULL,y_37 = NULL,f_38 = NULL,n_38 = NULL;
  w_37 = t;
  if(match_cons(t, sym__2))
    {
      x_37 = ATgetArgument(t, 0);
      y_37 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_37;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      f_38 = ATgetFirst((ATermList) t);
      n_38 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm z_32 = t;
        int b_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = a_39(x_37, y_37, w_37, t);
            LocalPopChoice(b_33);
          }
        else
          {
            t = z_32;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(x_37), f_38), n_38);
          }
      }
    }
  else
    {
      t = a_39(x_37, y_37, w_37, t);
    }
  return(t);
}
static ATerm a_39 (ATerm w_36, ATerm x_36, ATerm y_36, ATerm t)
{
  ATerm z_36 = NULL,d_37 = NULL,p_5 = NULL,j_37 = NULL,k_37 = NULL,l_37 = NULL,m_37 = NULL;
  t = SSLgetAnnotations(y_36);
  z_36 = t;
  t = x_36;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      j_37 = ATgetFirst((ATermList) t);
      m_37 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = j_37;
  if(match_cons(t, sym__2))
    {
      k_37 = ATgetArgument(t, 0);
      l_37 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm e_33 = t;
    int f_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_37;
        if((k_37 != t))
          {
            _fail(t);
          }
        t = m_37;
        LocalPopChoice(f_33);
      }
    else
      {
        t = e_33;
        t = x_36;
        t = g_9(k_37, l_37, m_37, t);
      }
  }
  d_37 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_36, d_37);
  p_5 = t;
  t = SSLsetAnnotations(p_5, z_36);
  return(t);
}
static ATerm z_4 (ATerm t)
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
  ATerm g_33 = t;
  int h_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(s_4, u_4, x_4, t);
      LocalPopChoice(h_33);
    }
  else
    {
      t = g_33;
      {
        ATerm r_38 = NULL,s_38 = NULL,v_38 = NULL;
        r_38 = t;
        if(match_cons(t, sym__2))
          {
            s_38 = ATgetArgument(t, 0);
            v_38 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = r_38;
        t = b_9(z_4, s_38, v_38, t);
      }
    }
  return(t);
}
static ATerm i_9 (ATerm w_114 (ATerm), ATerm x_114 (ATerm), ATerm y_114 (ATerm), ATerm j_59, ATerm g_59, ATerm n_59, ATerm k_59, ATerm h_59, ATerm i_59, ATerm t)
{
  ATerm b_39 = NULL,c_39 = NULL,d_39 = NULL,e_39 = NULL,f_39 = NULL,g_39 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, j_59, k_59);
  t = w_114(t);
  b_39 = t;
  t = x_114(t);
  c_39 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_39, n_59);
  t = diff_0_0(t);
  d_39 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_39, g_59);
  t = conc_0_0(t);
  e_39 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_39, n_59);
  t = conc_0_0(t);
  f_39 = t;
  t = (ATerm) ATmakeAppl(sym__3, j_59, b_39, h_59);
  t = y_114(t);
  g_39 = t;
  t = (ATerm) ATmakeAppl(sym__5, e_39, f_39, k_59, g_39, i_59);
  return(t);
}
ATerm GnNext_3_0 (ATerm w_114 (ATerm), ATerm x_114 (ATerm), ATerm y_114 (ATerm), ATerm t)
{
  ATerm i_39 = NULL,j_39 = NULL,k_39 = NULL,l_39 = NULL,m_39 = NULL,n_39 = NULL;
  if(match_cons(t, sym__5))
    {
      ATerm i_33 = ATgetArgument(t, 0);
      if(((ATgetType(i_33) == AT_LIST) && !(ATisEmpty(i_33))))
        {
          i_39 = ATgetFirst((ATermList) i_33);
          j_39 = (ATerm) ATgetNext((ATermList) i_33);
        }
      else
        _fail(t);
      k_39 = ATgetArgument(t, 1);
      l_39 = ATgetArgument(t, 2);
      m_39 = ATgetArgument(t, 3);
      n_39 = ATgetArgument(t, 4);
    }
  else
    _fail(t);
  t = i_9(w_114, x_114, y_114, i_39, j_39, k_39, l_39, m_39, n_39, t);
  return(t);
}
ATerm while_not_2_0 (ATerm e_83 (ATerm), ATerm f_83 (ATerm), ATerm t)
{
  static ATerm o_39 (ATerm t)
  {
    ATerm j_33 = t;
    int k_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_83(t);
        LocalPopChoice(k_33);
      }
    else
      {
        t = j_33;
        t = f_83(t);
        t = o_39(t);
      }
    return(t);
  }
  t = o_39(t);
  return(t);
}
ATerm for_3_0 (ATerm h_83 (ATerm), ATerm i_83 (ATerm), ATerm j_83 (ATerm), ATerm t)
{
  t = h_83(t);
  t = while_not_2_0(i_83, j_83, t);
  return(t);
}
static ATerm b_5 (ATerm t)
{
  ATerm s_39 = NULL,t_39 = NULL,u_39 = NULL;
  if(match_cons(t, sym__3))
    {
      s_39 = ATgetArgument(t, 0);
      t_39 = ATgetArgument(t, 1);
      u_39 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__5, s_39, s_39, t_39, u_39, (ATerm) ATempty);
  return(t);
}
static ATerm e_5 (ATerm t)
{
  ATerm x_39 = NULL,y_39 = NULL;
  if(match_cons(t, sym__5))
    {
      ATerm l_33 = ATgetArgument(t, 0);
      if(((ATgetType(l_33) != AT_LIST) || !(ATisEmpty(l_33))))
        _fail(t);
      {
        ATerm m_33 = ATgetArgument(t, 1);
      }
      {
        ATerm n_33 = ATgetArgument(t, 2);
      }
      x_39 = ATgetArgument(t, 3);
      y_39 = ATgetArgument(t, 4);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, x_39, y_39);
  return(t);
}
ATerm graph_nodes_roots_3_0 (ATerm t_114 (ATerm), ATerm u_114 (ATerm), ATerm v_114 (ATerm), ATerm t)
{
  ATerm r_39 = NULL;
  static ATerm f_5 (ATerm t)
  {
    ATerm p_33 = t;
    int q_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = GnNext_3_0(t_114, u_114, v_114, t);
        LocalPopChoice(q_33);
      }
    else
      {
        t = p_33;
        {
          ATerm a_40 = NULL,b_40 = NULL,c_40 = NULL,d_40 = NULL,e_40 = NULL,f_40 = NULL,g_40 = NULL;
          if(match_cons(t, sym__5))
            {
              a_40 = ATgetArgument(t, 0);
              d_40 = ATgetArgument(t, 1);
              e_40 = ATgetArgument(t, 2);
              f_40 = ATgetArgument(t, 3);
              g_40 = ATgetArgument(t, 4);
            }
          else
            _fail(t);
          t = a_40;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              b_40 = ATgetFirst((ATermList) t);
              c_40 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__5, c_40, d_40, e_40, f_40, (ATerm) ATinsert(CheckATermList(g_40), b_40));
        }
      }
    return(t);
  }
  t = for_3_0(b_5, e_5, f_5, t);
  if(match_cons(t, sym__2))
    {
      r_39 = ATgetArgument(t, 0);
      {
        ATerm r_33 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = r_39;
  return(t);
}
ATerm filter_1_0 (ATerm g_97 (ATerm), ATerm t)
{
  ATerm c_41 = NULL,d_41 = NULL,e_41 = NULL;
  c_41 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = c_41;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          d_41 = ATgetFirst((ATermList) t);
          e_41 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm u_33 = t;
        int w_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_14 = NULL,o_14 = NULL,q_14 = NULL,u_5 = NULL;
            t = SSLgetAnnotations(c_41);
            k_14 = t;
            t = d_41;
            t = g_97(t);
            o_14 = t;
            t = e_41;
            t = filter_1_0(g_97, t);
            q_14 = t;
            t = (ATerm) ATinsert(CheckATermList(q_14), o_14);
            u_5 = t;
            t = SSLsetAnnotations(u_5, k_14);
            LocalPopChoice(w_33);
          }
        else
          {
            t = u_33;
            t = e_41;
            t = filter_1_0(g_97, t);
          }
      }
    }
  return(t);
}
static ATerm g_5 (ATerm t)
{
  ATerm k_34 = t;
  if((PushChoice() == 0))
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-I", 0, ATtrue)))
        _fail(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = k_34;
    }
  return(t);
}
static ATerm k_5 (ATerm t)
{
  ATerm x_41 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm l_34 = ATgetArgument(t, 0);
      ATerm p_34 = ATgetArgument(t, 1);
      if(match_cons(p_34, sym_Specification_1))
        {
          x_41 = ATgetArgument(p_34, 0);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  t = k_8(x_41, t);
  return(t);
}
static ATerm l_5 (ATerm t)
{
  ATerm y_41 = NULL,z_41 = NULL;
  if(match_cons(t, sym__3))
    {
      ATerm q_34 = ATgetArgument(t, 0);
      y_41 = ATgetArgument(t, 1);
      z_41 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(z_41), y_41);
  return(t);
}
static ATerm q_5 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_r_34;
  return(t);
}
static ATerm s_5 (ATerm t)
{
  ATerm l_42 = NULL,m_42 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      l_42 = ATgetFirst((ATermList) t);
      m_42 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, l_42, m_42);
  return(t);
}
static ATerm t_5 (ATerm t)
{
  ATerm n_42 = NULL,o_42 = NULL,v_42 = NULL,w_42 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm w_34 = ATgetArgument(t, 0);
      if(match_cons(w_34, sym__2))
        {
          n_42 = ATgetArgument(w_34, 0);
          o_42 = ATgetArgument(w_34, 1);
        }
      else
        _fail(t);
      {
        ATerm z_34 = ATgetArgument(t, 1);
        if(match_cons(z_34, sym__2))
          {
            v_42 = ATgetArgument(z_34, 0);
            w_42 = ATgetArgument(z_34, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(v_42), n_42), (ATerm) ATinsert(CheckATermList(w_42), o_42));
  return(t);
}
static ATerm l_9 (ATerm e_21, ATerm t)
{
  ATerm l_41 = NULL,m_41 = NULL,n_41 = NULL,o_41 = NULL,p_41 = NULL,u_41 = NULL,y_5 = NULL;
  ATerm a_35 = t;
  int b_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_z_29;
      t = get_config_0_0(t);
      t = filter_1_0(g_5, t);
      LocalPopChoice(b_35);
    }
  else
    {
      t = a_35;
      t = (ATerm) ATempty;
    }
  l_41 = t;
  t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATinsert(ATempty, e_21), term_z_11, (ATerm) ATempty);
  {
    static ATerm j_5 (ATerm t)
    {
      ATerm v_41 = NULL,w_41 = NULL;
      static ATerm n_5 (ATerm t)
      {
        t = (ATerm) ATinsert(CheckATermList(l_41), term_l_13);
        return(t);
      }
      w_41 = t;
      t = SSL_explode_term(w_41);
      if(match_cons(t, sym__2))
        {
          ATerm c_35 = ATgetArgument(t, 0);
          if((ATgetSymbol((ATermAppl) c_35) != ATmakeSymbol("", 0, ATtrue)))
            _fail(t);
          {
            ATerm d_35 = ATgetArgument(t, 1);
            if(((ATgetType(d_35) == AT_LIST) && !(ATisEmpty(d_35))))
              {
                v_41 = ATgetFirst((ATermList) d_35);
                {
                  ATerm e_35 = (ATerm) ATgetNext((ATermList) d_35);
                }
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = v_41;
      t = get_module_1_0(n_5, t);
      return(t);
    }
    t = graph_nodes_roots_3_0(j_5, k_5, l_5, t);
  }
  t = genzip_4_0(q_5, s_5, t_5, _id, t);
  u_41 = t;
  if(match_cons(t, sym__2))
    {
      n_41 = ATgetArgument(t, 0);
      o_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_41);
  m_41 = t;
  t = o_41;
  t = flatten_stratego_0_0(t);
  p_41 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_41, p_41);
  y_5 = t;
  t = SSLsetAnnotations(y_5, m_41);
  return(t);
}
static ATerm n_9 (ATerm y_43, ATerm z_43, ATerm t)
{
  t = SSL_copy(y_43, z_43);
  return(t);
}
ATerm copy_to_1_0 (ATerm r_0 (ATerm), ATerm t)
{
  ATerm s_43 = NULL,t_43 = NULL;
  s_43 = t;
  if(match_cons(t, sym_FILE_1))
    {
      t_43 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm f_35 = t;
    int g_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_15 = NULL;
        t = s_43;
        t = r_0(t);
        b_15 = t;
        if(match_cons(t, sym_stdout_0))
          {
            t = b_15;
          }
        else
          {
            if(!(match_cons(t, sym_stderr_0)))
              _fail(t);
            t = b_15;
          }
        t = (ATerm) ATmakeAppl(sym__2, t_43, b_15);
        t = n_9(t_43, b_15, t);
        t = (ATerm) ATmakeAppl(sym_FILE_1, t_43);
        LocalPopChoice(g_35);
      }
    else
      {
        t = f_35;
        {
          ATerm h_35 = t;
          int i_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm q_15 = NULL;
              t = s_43;
              t = r_0(t);
              q_15 = t;
              {
                ATerm m_35 = t;
                if((PushChoice() == 0))
                  {
                    ATerm s_15 = NULL;
                    s_15 = t;
                    if(match_cons(t, sym_stdout_0))
                      {
                        t = s_15;
                      }
                    else
                      {
                        if(match_cons(t, sym_stderr_0))
                          {
                            t = s_15;
                          }
                        else
                          {
                            t = s_15;
                            if((t_43 != t))
                              {
                                _fail(t);
                              }
                            t = s_15;
                          }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = m_35;
                  }
              }
              t = (ATerm) ATmakeAppl(sym__2, t_43, q_15);
              t = n_9(t_43, q_15, t);
              t = (ATerm) ATmakeAppl(sym_FILE_1, t_43);
              LocalPopChoice(i_35);
            }
          else
            {
              t = h_35;
              t = s_43;
              t = r_0(t);
              if((t_43 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, t_43);
            }
        }
      }
  }
  return(t);
}
static ATerm o_9 (ATerm g_52, ATerm h_52, ATerm t)
{
  ATerm d_44 = NULL,e_44 = NULL;
  e_44 = t;
  {
    ATerm n_35 = t;
    int p_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, g_52, h_52);
        t = s_9(g_52, h_52, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm q_35 = ATgetFirst((ATermList) t);
            d_44 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(p_35);
        t = SSL_table_put(g_52, h_52, d_44);
        t = (ATerm) ATmakeAppl(sym__3, g_52, h_52, d_44);
      }
    else
      {
        t = n_35;
        t = SSL_table_remove(g_52, h_52);
        t = (ATerm) ATmakeAppl(sym__2, g_52, h_52);
      }
  }
  t = e_44;
  return(t);
}
ATerm end_scope_1_0 (ATerm j_102 (ATerm), ATerm t)
{
  ATerm f_44 = NULL,g_44 = NULL,h_44 = NULL,i_44 = NULL,j_44 = NULL;
  i_44 = t;
  t = j_102(t);
  h_44 = t;
  {
    ATerm v_35 = t;
    int c_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_44 = NULL;
        t = term_n_11;
        k_44 = t;
        t = (ATerm) ATmakeAppl(sym__2, h_44, term_n_11);
        t = s_9(h_44, k_44, t);
        LocalPopChoice(c_36);
      }
    else
      {
        t = v_35;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_44 = ATgetFirst((ATermList) t);
      f_44 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_n_11;
  j_44 = t;
  t = SSL_table_put(h_44, j_44, f_44);
  t = g_44;
  {
    static ATerm v_5 (ATerm t)
    {
      ATerm l_44 = NULL;
      l_44 = t;
      t = (ATerm) ATmakeAppl(sym__2, h_44, l_44);
      t = o_9(h_44, l_44, t);
      return(t);
    }
    t = map_1_0(v_5, t);
  }
  t = i_44;
  return(t);
}
ATerm restore_always_2_0 (ATerm j_82 (ATerm), ATerm k_82 (ATerm), ATerm t)
{
  ATerm d_36 = t;
  int e_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = j_82(t);
      t = k_82(t);
      LocalPopChoice(e_36);
    }
  else
    {
      t = d_36;
      t = k_82(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm i_102 (ATerm), ATerm t)
{
  ATerm n_44 = NULL,o_44 = NULL,p_44 = NULL,r_44 = NULL,s_44 = NULL;
  o_44 = t;
  t = i_102(t);
  n_44 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_44, term_n_11);
  {
    ATerm f_36 = t;
    int g_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_45 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm h_36 = ATgetArgument(t, 0);
            ATerm i_36 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_n_11;
        h_45 = t;
        t = (ATerm) ATmakeAppl(sym__2, n_44, term_n_11);
        t = s_9(n_44, h_45, t);
        LocalPopChoice(g_36);
      }
    else
      {
        t = f_36;
        t = (ATerm) ATempty;
      }
  }
  p_44 = t;
  t = term_n_11;
  r_44 = t;
  t = (ATerm) ATinsert(CheckATermList(p_44), (ATerm) ATempty);
  s_44 = t;
  t = SSL_table_put(n_44, r_44, s_44);
  t = o_44;
  return(t);
}
static ATerm x_5 (ATerm t)
{
  t = term_o_11;
  return(t);
}
static ATerm e_6 (ATerm t)
{
  ATerm q_45 = NULL;
  q_45 = t;
  {
    ATerm j_36 = t;
    int k_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(q_45);
        LocalPopChoice(k_36);
      }
    else
      {
        t = j_36;
        t = q_45;
      }
  }
  return(t);
}
static ATerm f_6 (ATerm t)
{
  t = term_o_11;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm m_113 (ATerm), ATerm t)
{
  ATerm k_45 = NULL;
  static ATerm c_6 (ATerm t)
  {
    ATerm l_45 = NULL;
    l_45 = t;
    {
      ATerm l_36 = t;
      int m_36 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm m_45 = NULL,n_45 = NULL;
          t = term_o_11;
          m_45 = t;
          t = term_n_11;
          n_45 = t;
          t = term_p_36;
          t = s_9(m_45, n_45, t);
          LocalPopChoice(m_36);
        }
      else
        {
          t = l_36;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
        }
    }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((k_45 != NULL) && (k_45 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          k_45 = ATgetFirst((ATermList) t);
        {
          ATerm q_36 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    t = k_45;
    t = map_1_0(e_6, t);
    t = l_45;
    t = end_scope_1_0(f_6, t);
    return(t);
  }
  t = begin_scope_1_0(x_5, t);
  t = restore_always_2_0(m_113, c_6, t);
  return(t);
}
static ATerm i_6 (ATerm t)
{
  ATerm a_37 = t;
  int b_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_s_12;
      t = get_config_0_0(t);
      LocalPopChoice(b_37);
    }
  else
    {
      t = a_37;
      t = term_c_37;
    }
  return(t);
}
ATerm xtc_io_1_0 (ATerm n_113 (ATerm), ATerm t)
{
  static ATerm g_6 (ATerm t)
  {
    ATerm e_37 = t;
    int f_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_45 = NULL;
        t = term_h_28;
        t = get_config_0_0(t);
        t_45 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, t_45);
        LocalPopChoice(f_37);
      }
    else
      {
        t = e_37;
        t = term_h_15;
      }
    t = n_113(t);
    t = copy_to_1_0(i_6, t);
    return(t);
  }
  t = xtc_temp_files_1_0(g_6, t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm v_45 = NULL,x_45 = NULL,y_45 = NULL,z_45 = NULL,a_46 = NULL;
  v_45 = t;
  t = term_z_11;
  t = whoami_0_0(t);
  x_45 = t;
  t = term_m_22;
  z_45 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_h_37), x_45), term_g_37);
  a_46 = t;
  t = SSL_printnl(z_45, a_46);
  t = term_m_15;
  y_45 = t;
  t = SSL_exit(y_45);
  t = v_45;
  return(t);
}
static ATerm k_6 (ATerm t)
{
  ATerm d_46 = NULL;
  d_46 = t;
  if(match_string(t, "-k"))
    {
      t = d_46;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = d_46;
    }
  return(t);
}
static ATerm l_6 (ATerm t)
{
  ATerm g_46 = NULL,j_46 = NULL,l_46 = NULL;
  g_46 = t;
  t = SSL_string_to_int(g_46);
  j_46 = t;
  t = term_j_15;
  l_46 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_15, j_46);
  t = v_9(l_46, j_46, t);
  t = g_46;
  return(t);
}
static ATerm m_6 (ATerm t)
{
  t = term_i_37;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(k_6, l_6, m_6, t);
  return(t);
}
static ATerm n_6 (ATerm t)
{
  ATerm q_46 = NULL;
  q_46 = t;
  if(match_string(t, "-S"))
    {
      t = q_46;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = q_46;
    }
  return(t);
}
static ATerm p_6 (ATerm t)
{
  ATerm s_46 = NULL,w_46 = NULL;
  t = term_p_15;
  s_46 = t;
  t = term_n_37;
  w_46 = t;
  t = term_o_37;
  t = v_9(s_46, w_46, t);
  t = term_p_37;
  return(t);
}
static ATerm q_6 (ATerm t)
{
  t = term_q_37;
  return(t);
}
static ATerm s_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm v_6 (ATerm t)
{
  ATerm x_46 = NULL,y_46 = NULL,a_47 = NULL;
  x_46 = t;
  t = SSL_string_to_int(x_46);
  y_46 = t;
  t = term_p_15;
  a_47 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_15, y_46);
  t = v_9(a_47, y_46, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, x_46);
  return(t);
}
static ATerm w_6 (ATerm t)
{
  t = term_r_37;
  return(t);
}
static ATerm x_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm y_6 (ATerm t)
{
  ATerm b_47 = NULL,e_47 = NULL;
  t = term_s_37;
  b_47 = t;
  t = term_z_11;
  e_47 = t;
  t = term_v_37;
  t = v_9(b_47, e_47, t);
  t = term_d_38;
  return(t);
}
static ATerm z_6 (ATerm t)
{
  t = term_e_38;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm g_38 = t;
  int h_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(n_6, p_6, q_6, t);
      LocalPopChoice(h_38);
    }
  else
    {
      t = g_38;
      {
        ATerm i_38 = t;
        int j_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(s_6, v_6, w_6, t);
            LocalPopChoice(j_38);
          }
        else
          {
            t = i_38;
            t = Option_3_0(x_6, y_6, z_6, t);
          }
      }
    }
  return(t);
}
static ATerm v_9 (ATerm l_60, ATerm m_60, ATerm t)
{
  ATerm g_47 = NULL;
  t = term_a_15;
  g_47 = t;
  t = SSL_table_put(g_47, l_60, m_60);
  t = (ATerm) ATmakeAppl(sym__3, term_a_15, l_60, m_60);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm j_47 = NULL,k_47 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm l_47 = NULL,o_47 = NULL,p_47 = NULL;
      t = term_z_11;
      t = i_0(t);
      l_47 = t;
      t = term_k_38;
      o_47 = t;
      t = term_l_38;
      p_47 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_k_38, term_l_38, l_47);
      t = t_9(o_47, p_47, l_47, t);
      _fail(t);
    }
  else
    {
      ATerm t_47 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          j_47 = ATgetFirst((ATermList) t);
          k_47 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = j_47;
      t = d_0(t);
      t = term_z_11;
      t = g_0(t);
      t_47 = t;
      t = (ATerm) ATinsert(CheckATermList(k_47), t_47);
    }
  return(t);
}
static ATerm a_7 (ATerm t)
{
  ATerm v_47 = NULL;
  v_47 = t;
  if(match_string(t, "-o"))
    {
      t = v_47;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = v_47;
    }
  return(t);
}
static ATerm g_7 (ATerm t)
{
  ATerm w_47 = NULL,x_47 = NULL;
  w_47 = t;
  t = term_s_12;
  x_47 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_12, w_47);
  t = v_9(x_47, w_47, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, w_47);
  return(t);
}
static ATerm h_7 (ATerm t)
{
  t = term_m_38;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(a_7, g_7, h_7, t);
  return(t);
}
static ATerm i_7 (ATerm t)
{
  ATerm b_48 = NULL;
  b_48 = t;
  if(match_string(t, "-i"))
    {
      t = b_48;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = b_48;
    }
  return(t);
}
static ATerm l_7 (ATerm t)
{
  ATerm c_48 = NULL,f_48 = NULL;
  c_48 = t;
  t = term_h_28;
  f_48 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_28, c_48);
  t = v_9(f_48, c_48, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, c_48);
  return(t);
}
static ATerm n_7 (ATerm t)
{
  t = term_o_38;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(i_7, l_7, n_7, t);
  return(t);
}
static ATerm t_9 (ATerm b_52, ATerm c_52, ATerm a_52, ATerm t)
{
  ATerm i_48 = NULL,r_48 = NULL,s_48 = NULL;
  i_48 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_52, c_52);
  {
    ATerm p_38 = t;
    int q_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm t_38 = ATgetArgument(t, 0);
            ATerm u_38 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, b_52, c_52);
        t = s_9(b_52, c_52, t);
        LocalPopChoice(q_38);
      }
    else
      {
        t = p_38;
        t = (ATerm) ATempty;
      }
  }
  r_48 = t;
  t = (ATerm) ATinsert(CheckATermList(r_48), a_52);
  s_48 = t;
  t = SSL_table_put(b_52, c_52, s_48);
  t = i_48;
  return(t);
}
ATerm ArgOption_3_0 (ATerm n_0 (ATerm), ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm t)
{
  ATerm b_49 = NULL,c_49 = NULL,d_49 = NULL,e_49 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm f_49 = NULL,i_49 = NULL,j_49 = NULL;
      t = term_z_11;
      t = p_0(t);
      f_49 = t;
      t = term_k_38;
      i_49 = t;
      t = term_l_38;
      j_49 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_k_38, term_l_38, f_49);
      t = t_9(i_49, j_49, f_49, t);
      _fail(t);
    }
  else
    {
      ATerm p_49 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          b_49 = ATgetFirst((ATermList) t);
          c_49 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = c_49;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          d_49 = ATgetFirst((ATermList) t);
          e_49 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = b_49;
      t = n_0(t);
      t = d_49;
      t = o_0(t);
      p_49 = t;
      t = (ATerm) ATinsert(CheckATermList(e_49), p_49);
    }
  return(t);
}
ATerm at_end_1_0 (ATerm p_90 (ATerm), ATerm t)
{
  static ATerm n_50 (ATerm t)
  {
    ATerm k_50 = NULL,l_50 = NULL,m_50 = NULL;
    m_50 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        k_50 = ATgetFirst((ATermList) t);
        l_50 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm h_16 = NULL,m_16 = NULL,j_6 = NULL;
          t = SSLgetAnnotations(m_50);
          h_16 = t;
          t = l_50;
          t = n_50(t);
          m_16 = t;
          t = (ATerm) ATinsert(CheckATermList(m_16), k_50);
          j_6 = t;
          t = SSLsetAnnotations(j_6, h_16);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = m_50;
        t = p_90(t);
      }
    return(t);
  }
  t = n_50(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm s_49 = NULL,t_49 = NULL,u_49 = NULL;
  s_49 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = s_49;
    }
  else
    {
      static ATerm o_7 (ATerm t)
      {
        t = not_null(u_49);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          t_49 = ATgetFirst((ATermList) t);
          if(((u_49 != NULL) && (u_49 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            u_49 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = t_49;
      t = at_end_1_0(o_7, t);
    }
  return(t);
}
static ATerm g_51 (ATerm r_50, ATerm t)
{
  ATerm s_50 = NULL;
  t = SSL_explode_term(r_50);
  if(match_cons(t, sym__2))
    {
      ATerm w_38 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) w_38) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      s_50 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_50;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm v_50 = NULL,w_50 = NULL,x_50 = NULL;
  x_50 = t;
  if(match_cons(t, sym__2))
    {
      v_50 = ATgetArgument(t, 0);
      w_50 = ATgetArgument(t, 1);
      {
        ATerm x_38 = t;
        int y_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm q_7 (ATerm t)
            {
              t = w_50;
              return(t);
            }
            t = v_50;
            t = at_end_1_0(q_7, t);
            LocalPopChoice(y_38);
          }
        else
          {
            t = x_38;
            t = g_51(x_50, t);
          }
      }
    }
  else
    {
      t = g_51(x_50, t);
    }
  return(t);
}
static ATerm m_9 (ATerm r_60, ATerm q_60, ATerm t)
{
  ATerm h_51 = NULL,o_51 = NULL,p_51 = NULL;
  t = r_60;
  {
    ATerm h_39 = t;
    int p_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        LocalPopChoice(p_39);
      }
    else
      {
        t = h_39;
        t = (ATerm) ATempty;
      }
  }
  o_51 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_60, o_51);
  t = conc_0_0(t);
  h_51 = t;
  t = term_a_15;
  p_51 = t;
  t = SSL_table_put(p_51, r_60, h_51);
  t = (ATerm) ATmakeAppl(sym__3, term_a_15, r_60, h_51);
  return(t);
}
static ATerm s_7 (ATerm t)
{
  ATerm u_51 = NULL;
  u_51 = t;
  if(match_string(t, "-I"))
    {
      t = u_51;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--Include", 0, ATtrue)))
        _fail(t);
      t = u_51;
    }
  return(t);
}
static ATerm t_7 (ATerm t)
{
  ATerm w_51 = NULL,x_51 = NULL,z_51 = NULL;
  w_51 = t;
  t = term_z_29;
  x_51 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, w_51), term_z_29);
  z_51 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_29, (ATerm) ATinsert(ATinsert(ATempty, w_51), term_z_29));
  t = m_9(x_51, z_51, t);
  t = term_z_11;
  return(t);
}
static ATerm u_7 (ATerm t)
{
  t = term_q_39;
  return(t);
}
static ATerm w_7 (ATerm t)
{
  ATerm e_52 = NULL;
  e_52 = t;
  if(match_string(t, "--nodep"))
    {
      t = e_52;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-nodep", 0, ATtrue)))
        _fail(t);
      t = e_52;
    }
  return(t);
}
static ATerm x_7 (ATerm t)
{
  ATerm i_52 = NULL,j_52 = NULL;
  t = term_k_13;
  i_52 = t;
  t = term_v_39;
  j_52 = t;
  t = term_w_39;
  t = v_9(i_52, j_52, t);
  t = term_z_11;
  return(t);
}
static ATerm y_7 (ATerm t)
{
  t = term_z_39;
  return(t);
}
static ATerm z_7 (ATerm t)
{
  ATerm k_52 = NULL;
  k_52 = t;
  if(match_string(t, "--dep"))
    {
      t = k_52;
    }
  else
    {
      if(match_string(t, "-d"))
        {
          t = k_52;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-dep", 0, ATtrue)))
            _fail(t);
          t = k_52;
        }
    }
  return(t);
}
static ATerm a_8 (ATerm t)
{
  ATerm l_52 = NULL,m_52 = NULL;
  l_52 = t;
  t = term_h_13;
  m_52 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_13, l_52);
  t = v_9(m_52, l_52, t);
  t = term_z_11;
  return(t);
}
static ATerm d_8 (ATerm t)
{
  t = term_h_40;
  return(t);
}
static ATerm h_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--imports", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm j_8 (ATerm t)
{
  ATerm n_52 = NULL,p_52 = NULL;
  t = term_i_40;
  n_52 = t;
  t = term_z_11;
  p_52 = t;
  t = term_j_40;
  t = v_9(n_52, p_52, t);
  t = term_z_11;
  return(t);
}
static ATerm o_8 (ATerm t)
{
  t = term_k_40;
  return(t);
}
static ATerm z_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--slack", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm c_9 (ATerm t)
{
  ATerm q_52 = NULL,r_52 = NULL;
  t = term_f_32;
  q_52 = t;
  t = term_z_11;
  r_52 = t;
  t = term_l_40;
  t = v_9(q_52, r_52, t);
  t = term_z_11;
  return(t);
}
static ATerm d_9 (ATerm t)
{
  t = term_m_40;
  return(t);
}
static ATerm f_9 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--asfix", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm h_9 (ATerm t)
{
  ATerm s_52 = NULL,t_52 = NULL;
  t = term_v_29;
  s_52 = t;
  t = term_v_39;
  t_52 = t;
  t = term_n_40;
  t = v_9(s_52, t_52, t);
  t = term_z_11;
  return(t);
}
static ATerm j_9 (ATerm t)
{
  t = term_o_40;
  return(t);
}
ATerm pack_stratego_options_0_0 (ATerm t)
{
  ATerm p_40 = t;
  int q_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ArgOption_3_0(s_7, t_7, u_7, t);
      LocalPopChoice(q_40);
    }
  else
    {
      t = p_40;
      {
        ATerm r_40 = t;
        int s_40 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Option_3_0(w_7, x_7, y_7, t);
            LocalPopChoice(s_40);
          }
        else
          {
            t = r_40;
            {
              ATerm t_40 = t;
              int w_40 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = ArgOption_3_0(z_7, a_8, d_8, t);
                  LocalPopChoice(w_40);
                }
              else
                {
                  t = t_40;
                  {
                    ATerm x_40 = t;
                    int y_40 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Option_3_0(h_8, j_8, o_8, t);
                        LocalPopChoice(y_40);
                      }
                    else
                      {
                        t = x_40;
                        {
                          ATerm z_40 = t;
                          int f_41 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Option_3_0(z_8, c_9, d_9, t);
                              LocalPopChoice(f_41);
                            }
                          else
                            {
                              t = z_40;
                              t = Option_3_0(f_9, h_9, j_9, t);
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
  ATerm u_52 = NULL,v_52 = NULL,w_52 = NULL,x_52 = NULL;
  t = report_run_time_0_0(t);
  t = term_z_11;
  t = whoami_0_0(t);
  u_52 = t;
  t = term_m_22;
  w_52 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_g_41), u_52);
  x_52 = t;
  t = SSL_printnl(w_52, x_52);
  t = term_m_15;
  v_52 = t;
  t = SSL_exit(v_52);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_h_41;
  t = get_config_0_0(t);
  return(t);
}
static ATerm p_9 (ATerm u_40, ATerm v_40, ATerm t)
{
  ATerm i_41 = t;
  int j_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(u_40, v_40);
      LocalPopChoice(j_41);
    }
  else
    {
      t = i_41;
      t = SSL_addr(u_40, v_40);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm c_96 (ATerm), ATerm d_96 (ATerm), ATerm t)
{
  ATerm e_53 = NULL,l_53 = NULL,n_53 = NULL;
  e_53 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = e_53;
      t = c_96(t);
    }
  else
    {
      ATerm q_53 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          l_53 = ATgetFirst((ATermList) t);
          n_53 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = n_53;
      t = foldr_2_0(c_96, d_96, t);
      q_53 = t;
      t = (ATerm) ATmakeAppl(sym__2, l_53, q_53);
      t = d_96(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm u_9 (ATerm t)
{
  t = term_n_37;
  return(t);
}
static ATerm w_9 (ATerm t)
{
  ATerm e_17 = NULL,g_17 = NULL;
  if(match_cons(t, sym__2))
    {
      e_17 = ATgetArgument(t, 0);
      g_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_9(e_17, g_17, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm v_53 = NULL,r_16 = NULL,t_16 = NULL;
  t = times_0_0(t);
  t_16 = t;
  t = SSL_explode_term(t_16);
  if(match_cons(t, sym__2))
    {
      ATerm k_41 = ATgetArgument(t, 0);
      r_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_16;
  t = foldr_2_0(u_9, w_9, t);
  v_53 = t;
  t = SSL_TicksToSeconds(v_53);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm q_54 = NULL,r_54 = NULL,u_54 = NULL;
  q_54 = t;
  if(match_cons(t, sym__2))
    {
      r_54 = ATgetArgument(t, 0);
      u_54 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm q_41 = t;
    int r_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_54;
        if((r_54 != t))
          {
            _fail(t);
          }
        t = q_54;
        LocalPopChoice(r_41);
      }
    else
      {
        t = q_41;
        t = (ATerm) ATmakeAppl(sym__2, r_54, u_54);
        {
          ATerm s_41 = t;
          int t_41 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(r_54, u_54);
              LocalPopChoice(t_41);
            }
          else
            {
              t = s_41;
              t = SSL_gtr(r_54, u_54);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, r_54, u_54);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm t_104 (ATerm), ATerm t)
{
  ATerm e_55 = NULL;
  e_55 = t;
  {
    ATerm a_42 = t;
    int b_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_55 = NULL;
        t = term_p_15;
        t = get_config_0_0(t);
        g_55 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_55, term_m_15);
        t = geq_0_0(t);
        t = e_55;
        t = t_104(t);
        LocalPopChoice(b_42);
      }
    else
      {
        t = a_42;
        t = e_55;
      }
  }
  return(t);
}
static ATerm x_9 (ATerm t)
{
  ATerm i_55 = NULL,j_55 = NULL,l_55 = NULL,m_55 = NULL;
  t = run_time_0_0(t);
  i_55 = t;
  t = term_z_11;
  t = whoami_0_0(t);
  j_55 = t;
  t = term_m_22;
  l_55 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_c_42), i_55), term_z_15), j_55);
  m_55 = t;
  t = SSL_printnl(l_55, m_55);
  t = (ATerm) ATmakeAppl(sym__2, term_m_22, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_c_42), i_55), term_z_15), j_55));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(x_9, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm n_55 = NULL;
  t = report_run_time_0_0(t);
  t = term_n_37;
  n_55 = t;
  t = SSL_exit(n_55);
  return(t);
}
static ATerm z_9 (ATerm t)
{
  ATerm v_55 = NULL,w_55 = NULL;
  w_55 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = w_55;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          v_55 = ATgetArgument(t, 0);
          {
            ATerm f_18 = NULL,o_6 = NULL;
            t = SSLgetAnnotations(w_55);
            f_18 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, v_55);
            o_6 = t;
            t = SSLsetAnnotations(o_6, f_18);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = w_55;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm h_106 (ATerm), ATerm t)
{
  ATerm d_42 = t;
  int e_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_f_42;
      t = get_config_0_0(t);
      LocalPopChoice(e_42);
    }
  else
    {
      t = d_42;
      t = fetch_1_0(z_9, t);
    }
  t = h_106(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm e_56 = NULL,f_56 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_56 = ATgetFirst((ATermList) t);
      f_56 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm o_56 = NULL,p_56 = NULL;
        static ATerm c_10 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(o_56)), not_null(p_56));
          return(t);
        }
        t = f_56;
        t = l_0(t);
        if(((o_56 != NULL) && (o_56 != t)))
          _fail(t);
        else
          o_56 = t;
        t = e_56;
        t = k_0(t);
        if(((p_56 != NULL) && (p_56 != t)))
          _fail(t);
        else
          p_56 = t;
        t = f_56;
        t = reverse_acc_2_0(k_0, c_10, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_z_11;
      t = l_0(t);
    }
  return(t);
}
static ATerm s_9 (ATerm s_53, ATerm t_53, ATerm t)
{
  t = SSL_table_get(s_53, t_53);
  return(t);
}
static ATerm e_10 (ATerm t)
{
  ATerm t_56 = NULL,u_56 = NULL,b_57 = NULL,r_6 = NULL;
  b_57 = t;
  if(match_cons(t, sym_Program_1))
    {
      u_56 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_57);
  t_56 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, u_56);
  r_6 = t;
  t = SSLsetAnnotations(r_6, t_56);
  return(t);
}
static ATerm f_10 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm g_10 (ATerm t)
{
  ATerm e_57 = NULL;
  e_57 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, e_57), term_h_42);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm r_56 = NULL,s_56 = NULL;
  ATerm j_42 = t;
  int k_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_h_41;
      t = get_config_0_0(t);
      LocalPopChoice(k_42);
    }
  else
    {
      t = j_42;
      t = fetch_1_0(e_10, t);
    }
  t = term_p_42;
  t = echo_0_0(t);
  t = term_k_38;
  r_56 = t;
  t = term_l_38;
  s_56 = t;
  t = term_q_42;
  t = s_9(r_56, s_56, t);
  t = reverse_acc_2_0(_id, f_10, t);
  t = map_1_0(g_10, t);
  return(t);
}
ATerm fetch_1_0 (ATerm j_90 (ATerm), ATerm t)
{
  static ATerm q_58 (ATerm t)
  {
    ATerm n_58 = NULL,o_58 = NULL,p_58 = NULL;
    n_58 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        o_58 = ATgetFirst((ATermList) t);
        p_58 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm r_42 = t;
      int s_42 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm o_18 = NULL,u_18 = NULL,t_6 = NULL;
          t = SSLgetAnnotations(n_58);
          o_18 = t;
          t = o_58;
          t = j_90(t);
          u_18 = t;
          t = (ATerm) ATinsert(CheckATermList(p_58), u_18);
          t_6 = t;
          t = SSLsetAnnotations(t_6, o_18);
          LocalPopChoice(s_42);
        }
      else
        {
          t = r_42;
          {
            ATerm g_19 = NULL,k_19 = NULL,u_6 = NULL;
            t = SSLgetAnnotations(n_58);
            g_19 = t;
            t = p_58;
            t = q_58(t);
            k_19 = t;
            t = (ATerm) ATinsert(CheckATermList(k_19), o_58);
            u_6 = t;
            t = SSLsetAnnotations(u_6, g_19);
          }
        }
    }
    return(t);
  }
  t = q_58(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm u_58 = NULL,v_58 = NULL,w_58 = NULL;
  u_58 = t;
  {
    ATerm t_42 = t;
    int u_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = u_58;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm x_42 = ATgetFirst((ATermList) t);
                ATerm y_42 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = u_58;
          }
        LocalPopChoice(u_42);
      }
    else
      {
        t = t_42;
        t = (ATerm) ATinsert(ATempty, u_58);
      }
  }
  v_58 = t;
  t = term_c_37;
  w_58 = t;
  t = SSL_printnl(w_58, v_58);
  t = u_58;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_h_41;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
static ATerm h_10 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm j_10 (ATerm t)
{
  ATerm b_59 = NULL,c_59 = NULL;
  t = term_z_42;
  b_59 = t;
  t = term_z_11;
  c_59 = t;
  t = term_a_43;
  t = v_9(b_59, c_59, t);
  return(t);
}
static ATerm k_10 (ATerm t)
{
  t = term_b_43;
  return(t);
}
static ATerm m_10 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm n_10 (ATerm t)
{
  ATerm d_59 = NULL,e_59 = NULL,f_59 = NULL,p_59 = NULL;
  t = term_z_42;
  f_59 = t;
  t = term_z_11;
  p_59 = t;
  t = term_a_43;
  t = v_9(f_59, p_59, t);
  t = term_c_43;
  d_59 = t;
  t = term_z_11;
  e_59 = t;
  t = term_d_43;
  t = v_9(d_59, e_59, t);
  t = term_e_43;
  return(t);
}
static ATerm o_10 (ATerm t)
{
  t = term_f_43;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm g_43 = t;
  int h_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(h_10, j_10, k_10, t);
      LocalPopChoice(h_43);
    }
  else
    {
      t = g_43;
      t = Option_3_0(m_10, n_10, o_10, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm z_60 (ATerm), ATerm a_61 (ATerm), ATerm t)
{
  ATerm q_59 = NULL,r_59 = NULL,s_59 = NULL,t_59 = NULL,u_59 = NULL,v_59 = NULL,f_7 = NULL;
  v_59 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_59 = ATgetFirst((ATermList) t);
      s_59 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_59);
  q_59 = t;
  t = r_59;
  t = z_60(t);
  t_59 = t;
  t = s_59;
  t = a_61(t);
  u_59 = t;
  t = (ATerm) ATinsert(CheckATermList(u_59), t_59);
  f_7 = t;
  t = SSLsetAnnotations(f_7, q_59);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm y_108 (ATerm), ATerm t)
{
  ATerm a_60 = NULL,b_60 = NULL,c_60 = NULL,d_60 = NULL,f_60 = NULL,g_60 = NULL,v_7 = NULL;
  a_60 = t;
  {
    ATerm i_43 = t;
    int j_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_k_43;
        t = y_108(t);
        LocalPopChoice(j_43);
      }
    else
      {
        t = i_43;
      }
  }
  t = a_60;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_60 = ATgetFirst((ATermList) t);
      d_60 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_60);
  b_60 = t;
  t = term_h_41;
  g_60 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_41, c_60);
  t = v_9(g_60, c_60, t);
  t = d_60;
  {
    static ATerm b_61 (ATerm t)
    {
      ATerm l_43 = t;
      int m_43 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm n_43 = t;
          int o_43 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm j_60 = NULL;
              j_60 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = j_60;
              LocalPopChoice(o_43);
            }
          else
            {
              t = n_43;
              t = y_108(t);
              t = Cons_2_0(_id, b_61, t);
            }
          LocalPopChoice(m_43);
        }
      else
        {
          t = l_43;
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
    t = b_61(t);
  }
  f_60 = t;
  t = (ATerm) ATinsert(CheckATermList(f_60), (ATerm) ATmakeAppl(sym_Program_1, c_60));
  v_7 = t;
  t = SSLsetAnnotations(v_7, b_60);
  return(t);
}
static ATerm r_10 (ATerm t)
{
  ATerm n_61 = NULL;
  n_61 = t;
  if(match_string(t, "--help"))
    {
      t = n_61;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = n_61;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = n_61;
        }
    }
  return(t);
}
static ATerm s_10 (ATerm t)
{
  ATerm o_61 = NULL,p_61 = NULL;
  t = term_f_42;
  o_61 = t;
  t = term_z_11;
  p_61 = t;
  t = term_p_43;
  t = v_9(o_61, p_61, t);
  t = term_q_43;
  return(t);
}
static ATerm t_10 (ATerm t)
{
  t = term_r_43;
  return(t);
}
static ATerm u_10 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm x_108 (ATerm), ATerm t)
{
  ATerm g_61 = NULL,h_61 = NULL,i_61 = NULL,j_61 = NULL,k_61 = NULL,l_61 = NULL,m_61 = NULL;
  i_61 = t;
  t = term_k_38;
  k_61 = t;
  t = term_l_38;
  l_61 = t;
  t = (ATerm) ATempty;
  m_61 = t;
  t = SSL_table_put(k_61, l_61, m_61);
  t = i_61;
  {
    static ATerm p_10 (ATerm t)
    {
      ATerm u_43 = t;
      int v_43 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = x_108(t);
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
                t = Option_3_0(r_10, s_10, t_10, t);
                LocalPopChoice(x_43);
              }
            else
              {
                t = w_43;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(p_10, t);
  }
  {
    ATerm a_44 = t;
    int b_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_61 = NULL;
        w_61 = t;
        {
          ATerm c_44 = t;
          int m_44 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm c_20 = NULL;
              t = w_61;
              {
                ATerm q_44 = t;
                int t_44 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_f_42;
                    t = get_config_0_0(t);
                    LocalPopChoice(t_44);
                  }
                else
                  {
                    t = q_44;
                    t = fetch_1_0(u_10, t);
                  }
              }
              t = w_61;
              t = default_system_usage_0_0(t);
              t = term_n_37;
              c_20 = t;
              t = SSL_exit(c_20);
              LocalPopChoice(m_44);
            }
          else
            {
              t = c_44;
              {
                ATerm h_20 = NULL;
                t = term_z_42;
                t = get_config_0_0(t);
                t = w_61;
                t = default_system_about_0_0(t);
                t = term_n_37;
                h_20 = t;
                t = SSL_exit(h_20);
              }
            }
        }
        LocalPopChoice(b_44);
      }
    else
      {
        t = a_44;
        {
          ATerm u_44 = t;
          int v_44 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm x_61 = NULL,y_61 = NULL,z_61 = NULL;
              static ATerm v_10 (ATerm t)
              {
                ATerm a_62 = NULL,b_62 = NULL,c_62 = NULL,n_8 = NULL;
                c_62 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    b_62 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(c_62);
                a_62 = t;
                t = b_62;
                if(((g_61 != NULL) && (g_61 != t)))
                  _fail(t);
                else
                  g_61 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, b_62);
                n_8 = t;
                t = SSLsetAnnotations(n_8, a_62);
                return(t);
              }
              t = fetch_1_0(v_10, t);
              t = term_m_22;
              y_61 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(g_61)), term_w_44);
              z_61 = t;
              t = SSL_printnl(y_61, z_61);
              t = (ATerm) ATmakeAppl(sym__2, term_m_22, (ATerm) ATinsert(ATinsert(ATempty, not_null(g_61)), term_w_44));
              t = default_system_usage_0_0(t);
              t = term_m_15;
              x_61 = t;
              t = SSL_exit(x_61);
              LocalPopChoice(v_44);
            }
          else
            {
              t = u_44;
            }
        }
      }
  }
  h_61 = t;
  t = term_k_38;
  j_61 = t;
  t = SSL_table_destroy(j_61);
  t = h_61;
  return(t);
}
ATerm option_wrap_4_0 (ATerm j_106 (ATerm), ATerm k_106 (ATerm), ATerm l_106 (ATerm), ATerm m_106 (ATerm), ATerm t)
{
  ATerm h_62 = NULL,i_62 = NULL,j_62 = NULL,k_62 = NULL;
  t = parse_options_1_0(j_106, t);
  h_62 = t;
  t = term_x_44;
  k_62 = t;
  t = SSL_table_create(k_62);
  t = term_x_44;
  i_62 = t;
  t = term_y_44;
  j_62 = t;
  t = SSL_table_put(i_62, j_62, h_62);
  t = h_62;
  t = l_106(t);
  {
    ATerm z_44 = t;
    int a_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(k_106, t);
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
              t = m_106(t);
              t = report_success_0_0(t);
              LocalPopChoice(c_45);
            }
          else
            {
              t = b_45;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm w_10 (ATerm t)
{
  ATerm d_45 = t;
  int e_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = pack_stratego_options_0_0(t);
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
            t = input_option_0_0(t);
            LocalPopChoice(g_45);
          }
        else
          {
            t = f_45;
            {
              ATerm i_45 = t;
              int j_45 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = output_option_0_0(t);
                  LocalPopChoice(j_45);
                }
              else
                {
                  t = i_45;
                  {
                    ATerm o_45 = t;
                    int p_45 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Option_3_0(y_10, z_10, a_11, t);
                        LocalPopChoice(p_45);
                      }
                    else
                      {
                        t = o_45;
                        {
                          ATerm r_45 = t;
                          int s_45 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = verbose_option_0_0(t);
                              LocalPopChoice(s_45);
                            }
                          else
                            {
                              t = r_45;
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
static ATerm y_10 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm z_10 (ATerm t)
{
  ATerm q_62 = NULL,r_62 = NULL;
  t = term_u_45;
  q_62 = t;
  t = term_z_11;
  r_62 = t;
  t = term_w_45;
  t = v_9(q_62, r_62, t);
  t = term_b_46;
  return(t);
}
static ATerm a_11 (ATerm t)
{
  t = term_c_46;
  return(t);
}
static ATerm e_11 (ATerm t)
{
  t = get_filename_0_0(t);
  t = basename_1_0(_id, t);
  return(t);
}
static ATerm g_11 (ATerm t)
{
  ATerm x_62 = NULL,y_62 = NULL,z_62 = NULL,a_63 = NULL,b_63 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm e_46 = ATgetArgument(t, 0);
      if(match_cons(e_46, sym_Stream_1))
        {
          a_63 = ATgetArgument(e_46, 0);
        }
      else
        _fail(t);
      b_63 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_8(a_63, b_63, t);
  x_62 = t;
  t = term_j_20;
  y_62 = t;
  t = x_62;
  if(match_cons(t, sym_Stream_1))
    {
      z_62 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_j_20, x_62);
  t = e_8(y_62, z_62, t);
  return(t);
}
static ATerm h_11 (ATerm t)
{
  ATerm e_63 = NULL,f_63 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm f_46 = ATgetArgument(t, 0);
      if(match_cons(f_46, sym_Stream_1))
        {
          e_63 = ATgetArgument(f_46, 0);
        }
      else
        _fail(t);
      f_63 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_8(e_63, f_63, t);
  return(t);
}
ATerm pack_stratego_0_0 (ATerm t)
{
  ATerm o_62 = NULL,p_62 = NULL;
  static ATerm x_10 (ATerm t)
  {
    static ATerm d_11 (ATerm t)
    {
      ATerm t_62 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          t_62 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = l_9(t_62, t);
      if(match_cons(t, sym__2))
        {
          if(((o_62 != NULL) && (o_62 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            o_62 = ATgetArgument(t, 0);
          if(((p_62 != NULL) && (p_62 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            p_62 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm h_46 = t;
        int i_46 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_62 = NULL,v_62 = NULL;
            t = term_i_40;
            t = get_config_0_0(t);
            t = o_62;
            t = map_1_0(e_11, t);
            v_62 = t;
            t = xtc_new_file_0_0(t);
            u_62 = t;
            t = (ATerm) ATmakeAppl(sym__2, u_62, v_62);
            t = g_8(g_11, u_62, v_62, t);
            t = (ATerm) ATmakeAppl(sym_FILE_1, u_62);
            LocalPopChoice(i_46);
          }
        else
          {
            t = h_46;
            {
              ATerm c_63 = NULL;
              ATerm k_46 = t;
              int m_46 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = o_62;
                  t = create_dep_file_0_0(t);
                  LocalPopChoice(m_46);
                }
              else
                {
                  t = k_46;
                }
              t = p_62;
              t = xtc_new_file_0_0(t);
              c_63 = t;
              t = (ATerm) ATmakeAppl(sym__2, c_63, p_62);
              t = g_8(h_11, c_63, p_62, t);
              t = (ATerm) ATmakeAppl(sym_FILE_1, c_63);
            }
          }
      }
      return(t);
    }
    t = xtc_io_1_0(d_11, t);
    return(t);
  }
  t = option_wrap_4_0(w_10, default_usage_0_0, _id, x_10, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = pack_stratego_0_0(t);
  return(t);
}
