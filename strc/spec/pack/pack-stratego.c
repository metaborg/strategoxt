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
ATerm term_v_43;
ATerm term_u_43;
ATerm term_s_43;
ATerm term_m_43;
ATerm term_h_43;
ATerm term_g_43;
ATerm term_f_43;
ATerm term_e_43;
ATerm term_d_43;
ATerm term_c_43;
ATerm term_b_43;
ATerm term_q_42;
ATerm term_p_42;
ATerm term_e_42;
ATerm term_c_42;
ATerm term_z_41;
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
ATerm term_b_38;
ATerm term_a_38;
ATerm term_v_37;
ATerm term_u_37;
ATerm term_t_37;
ATerm term_s_37;
ATerm term_r_37;
ATerm term_o_37;
ATerm term_n_37;
ATerm term_i_37;
ATerm term_h_37;
ATerm term_f_37;
ATerm term_c_37;
ATerm term_v_36;
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
ATerm term_n_24;
ATerm term_m_24;
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
ATerm term_u_21;
ATerm term_t_21;
ATerm term_r_21;
ATerm term_p_21;
ATerm term_o_21;
ATerm term_n_21;
ATerm term_k_21;
ATerm term_j_21;
ATerm term_h_21;
ATerm term_g_21;
ATerm term_f_21;
ATerm term_e_21;
ATerm term_d_21;
ATerm term_b_21;
ATerm term_a_21;
ATerm term_z_20;
ATerm term_y_20;
ATerm term_x_20;
ATerm term_w_20;
ATerm term_v_20;
ATerm term_u_20;
ATerm term_t_20;
ATerm term_s_20;
ATerm term_q_20;
ATerm term_o_20;
ATerm term_m_20;
ATerm term_l_20;
ATerm term_k_20;
ATerm term_i_20;
ATerm term_g_20;
ATerm term_f_20;
ATerm term_e_20;
ATerm term_d_20;
ATerm term_b_20;
ATerm term_a_20;
ATerm term_z_19;
ATerm term_y_19;
ATerm term_x_19;
ATerm term_v_19;
ATerm term_u_19;
ATerm term_r_19;
ATerm term_q_19;
ATerm term_p_19;
ATerm term_n_19;
ATerm term_m_19;
ATerm term_l_19;
ATerm term_k_19;
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
ATerm term_v_18;
ATerm term_t_18;
ATerm term_s_18;
ATerm term_r_18;
ATerm term_o_18;
ATerm term_n_18;
ATerm term_m_18;
ATerm term_l_18;
ATerm term_k_18;
ATerm term_i_18;
ATerm term_h_18;
ATerm term_g_18;
ATerm term_e_18;
ATerm term_d_18;
ATerm term_c_18;
ATerm term_b_18;
ATerm term_a_18;
ATerm term_z_17;
ATerm term_x_17;
ATerm term_w_17;
ATerm term_v_17;
ATerm term_t_17;
ATerm term_p_17;
ATerm term_o_17;
ATerm term_n_17;
ATerm term_m_17;
ATerm term_i_17;
ATerm term_h_17;
ATerm term_g_17;
ATerm term_e_17;
ATerm term_d_17;
ATerm term_c_17;
ATerm term_b_17;
ATerm term_z_16;
ATerm term_y_16;
ATerm term_x_16;
ATerm term_w_16;
ATerm term_u_16;
ATerm term_t_16;
ATerm term_q_16;
ATerm term_p_16;
ATerm term_o_16;
ATerm term_n_16;
ATerm term_l_16;
ATerm term_k_16;
ATerm term_i_16;
ATerm term_b_16;
ATerm term_z_15;
ATerm term_y_15;
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
ATerm term_n_12;
ATerm term_i_12;
ATerm term_y_11;
ATerm term_t_11;
ATerm term_q_11;
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
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(ATmakeSymbol("/StrategoXT", 0, ATtrue));
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeAppl(ATmakeSymbol("XXXXXX", 0, ATtrue));
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file> (file, mode)", 0, ATtrue));
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
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
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_l_16));
  term_l_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_16, term_m_15, term_k_16);
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_16, term_o_16, term_p_16);
  ATprotect(&(term_t_16));
  term_t_16 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_u_16));
  term_u_16 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_16, term_u_16, term_w_16);
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_b_17));
  term_b_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_c_17));
  term_c_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_16, term_z_16, term_b_17);
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_g_17));
  term_g_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_h_17));
  term_h_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_17, term_e_17, term_g_17);
  ATprotect(&(term_i_17));
  term_i_17 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_m_17));
  term_m_17 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_n_17));
  term_n_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_17, term_m_17, term_n_17);
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_t_17));
  term_t_17 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_v_17));
  term_v_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_w_17));
  term_w_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_17, term_t_17, term_v_17);
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_z_17));
  term_z_17 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_a_18));
  term_a_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_17, term_z_17, term_a_18);
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
  ATprotect(&(term_k_18));
  term_k_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_l_18));
  term_l_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_18, term_i_18, term_k_18);
  ATprotect(&(term_m_18));
  term_m_18 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_n_18));
  term_n_18 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_o_18));
  term_o_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_r_18));
  term_r_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_18, term_n_18, term_o_18);
  ATprotect(&(term_s_18));
  term_s_18 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_t_18));
  term_t_18 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_v_18));
  term_v_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_y_18));
  term_y_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_18, term_t_18, term_v_18);
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
  ATprotect(&(term_k_19));
  term_k_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_l_19));
  term_l_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_19, term_j_19, term_k_19);
  ATprotect(&(term_m_19));
  term_m_19 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_n_19));
  term_n_19 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_p_19));
  term_p_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_q_19));
  term_q_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_19, term_n_19, term_p_19);
  ATprotect(&(term_r_19));
  term_r_19 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_u_19));
  term_u_19 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_v_19));
  term_v_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_x_19));
  term_x_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_19, term_u_19, term_v_19);
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
  ATprotect(&(term_k_20));
  term_k_20 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_l_20));
  term_l_20 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_m_20));
  term_m_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_20, term_k_20, term_l_20);
  ATprotect(&(term_o_20));
  term_o_20 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_q_20));
  term_q_20 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_s_20));
  term_s_20 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_t_20));
  term_t_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_20, term_q_20, term_s_20);
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
  ATprotect(&(term_d_21));
  term_d_21 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_e_21));
  term_e_21 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_f_21));
  term_f_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_g_21));
  term_g_21 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_21, term_e_21, term_f_21);
  ATprotect(&(term_h_21));
  term_h_21 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_j_21));
  term_j_21 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_n_21));
  term_n_21 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_21, term_j_21, term_k_21);
  ATprotect(&(term_o_21));
  term_o_21 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_p_21));
  term_p_21 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_r_21));
  term_r_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_t_21));
  term_t_21 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_21, term_p_21, term_r_21);
  ATprotect(&(term_u_21));
  term_u_21 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_v_21));
  term_v_21 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_w_21));
  term_w_21 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_x_21));
  term_x_21 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_21, term_v_21, term_w_21);
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
  ATprotect(&(term_m_24));
  term_m_24 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_n_24));
  term_n_24 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
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
  ATprotect(&(term_v_36));
  term_v_36 = (ATerm) ATmakeAppl(sym__2, term_o_11, term_n_11);
  ATprotect(&(term_c_37));
  term_c_37 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_f_37));
  term_f_37 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_h_37));
  term_h_37 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_i_37));
  term_i_37 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_n_37));
  term_n_37 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_o_37));
  term_o_37 = (ATerm) ATmakeAppl(sym__2, term_p_15, term_n_37);
  ATprotect(&(term_r_37));
  term_r_37 = (ATerm) ATmakeAppl(sym_Verbose_1, term_n_37);
  ATprotect(&(term_s_37));
  term_s_37 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_t_37));
  term_t_37 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_u_37));
  term_u_37 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_v_37));
  term_v_37 = (ATerm) ATmakeAppl(sym__2, term_u_37, term_y_11);
  ATprotect(&(term_a_38));
  term_a_38 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_b_38));
  term_b_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
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
  term_j_40 = (ATerm) ATmakeAppl(sym__2, term_i_40, term_y_11);
  ATprotect(&(term_k_40));
  term_k_40 = (ATerm) ATmakeAppl(ATmakeSymbol("--imports            Produce a list of imported modules only", 0, ATtrue));
  ATprotect(&(term_l_40));
  term_l_40 = (ATerm) ATmakeAppl(sym__2, term_f_32, term_y_11);
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
  ATprotect(&(term_z_41));
  term_z_41 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_c_42));
  term_c_42 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_e_42));
  term_e_42 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_p_42));
  term_p_42 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_q_42));
  term_q_42 = (ATerm) ATmakeAppl(sym__2, term_k_38, term_l_38);
  ATprotect(&(term_b_43));
  term_b_43 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_c_43));
  term_c_43 = (ATerm) ATmakeAppl(sym__2, term_b_43, term_y_11);
  ATprotect(&(term_d_43));
  term_d_43 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_e_43));
  term_e_43 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_f_43));
  term_f_43 = (ATerm) ATmakeAppl(sym__2, term_e_43, term_y_11);
  ATprotect(&(term_g_43));
  term_g_43 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_h_43));
  term_h_43 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_m_43));
  term_m_43 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_s_43));
  term_s_43 = (ATerm) ATmakeAppl(sym__2, term_c_42, term_y_11);
  ATprotect(&(term_u_43));
  term_u_43 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_v_43));
  term_v_43 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_w_44));
  term_w_44 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_x_44));
  term_x_44 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_y_44));
  term_y_44 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_u_45));
  term_u_45 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_w_45));
  term_w_45 = (ATerm) ATmakeAppl(sym__2, term_u_45, term_y_11);
  ATprotect(&(term_b_46));
  term_b_46 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_c_46));
  term_c_46 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
static ATerm a_8 (ATerm a_23, ATerm b_23, ATerm t);
static ATerm f_8 (ATerm p_88 (ATerm), ATerm b_166, ATerm i_23, ATerm t);
static ATerm u_8 (ATerm l_101 (ATerm), ATerm f_42, ATerm d_42, ATerm t);
ATerm P__tmpdir_0_0 (ATerm t);
static ATerm a_0 (ATerm t);
ATerm xtc_new_file_0_0 (ATerm t);
static ATerm b_8 (ATerm m_23, ATerm n_23, ATerm t);
static ATerm v_3 (ATerm c_3, ATerm t);
static ATerm x_3 (ATerm g_3, ATerm h_3, ATerm i_3, ATerm t);
static ATerm b_0 (ATerm t);
ATerm open_file_0_0 (ATerm t);
ATerm create_dep_file_0_0 (ATerm t);
static ATerm d_8 (ATerm w_37, ATerm x_37, ATerm t);
static ATerm e_8 (ATerm e_23, ATerm f_23, ATerm t);
ATerm basename_1_0 (ATerm a_99 (ATerm), ATerm t);
ATerm at_suffix_rev_1_0 (ATerm w_89 (ATerm), ATerm t);
ATerm get_filename_0_0 (ATerm t);
ATerm map_1_0 (ATerm y_88 (ATerm), ATerm t);
static ATerm v_8 (ATerm p_36, ATerm q_36, ATerm t);
static ATerm j_0 (ATerm t);
static ATerm u_0 (ATerm t);
ATerm eval_config_0_0 (ATerm t);
ATerm get_config_0_0 (ATerm t);
static ATerm g_1 (ATerm t);
static ATerm n_1 (ATerm t);
ATerm flatten_stratego_0_0 (ATerm t);
ATerm genzip_4_0 (ATerm b_91 (ATerm), ATerm c_91 (ATerm), ATerm d_91 (ATerm), ATerm e_91 (ATerm), ATerm t);
static ATerm o_1 (ATerm t);
static ATerm j_8 (ATerm v_132, ATerm t);
ATerm read_from_0_0 (ATerm t);
ATerm pass_keep_0_0 (ATerm t);
static ATerm k_8 (ATerm x_40, ATerm y_40, ATerm t);
ATerm pass_verbose_0_0 (ATerm t);
static ATerm p_1 (ATerm t);
ATerm xtc_transform_term_2_0 (ATerm t_111 (ATerm), ATerm u_111 (ATerm), ATerm t);
static ATerm l_8 (ATerm e_47, ATerm f_47, ATerm t);
ATerm signal_to_descr_0_0 (ATerm t);
ATerm signal_from_number_0_0 (ATerm t);
ATerm warn_ifsignaled_0_0 (ATerm t);
ATerm fork_0_0 (ATerm t);
ATerm fork_and_wait_1_0 (ATerm y_103 (ATerm), ATerm t);
ATerm table_getlist_0_0 (ATerm t);
ATerm if_verbose5_1_0 (ATerm r_103 (ATerm), ATerm t);
ATerm if_verbose4_1_0 (ATerm q_103 (ATerm), ATerm t);
ATerm if_verbose6_1_0 (ATerm s_103 (ATerm), ATerm t);
static ATerm o_8 (ATerm c_93 (ATerm), ATerm x_28, ATerm w_28, ATerm t);
static ATerm w_1 (ATerm t);
static ATerm p_8 (ATerm z_51, ATerm a_52, ATerm b_52, ATerm t);
static ATerm q_8 (ATerm v_107 (ATerm), ATerm j_52, ATerm i_52, ATerm t);
static ATerm q_22 (ATerm f_22, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm r_8 (ATerm g_23, ATerm t);
static ATerm s_8 (ATerm y_37, ATerm z_37, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm u_25 (ATerm w_23, ATerm t);
static ATerm v_25 (ATerm a_24, ATerm e_24, ATerm f_24, ATerm t);
static ATerm w_25 (ATerm y_24, ATerm c_25, ATerm e_25, ATerm t);
static ATerm t_8 (ATerm t);
static ATerm a_2 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
static ATerm b_2 (ATerm t);
static ATerm c_2 (ATerm t);
ATerm read_repository_file_0_0 (ATerm t);
static ATerm d_2 (ATerm t);
static ATerm f_2 (ATerm t);
static ATerm h_2 (ATerm t);
static ATerm i_2 (ATerm t);
static ATerm j_2 (ATerm t);
static ATerm k_2 (ATerm t);
static ATerm l_2 (ATerm t);
static ATerm m_2 (ATerm t);
ATerm xtc_read_0_0 (ATerm t);
ATerm repeat_2_0 (ATerm m_81 (ATerm), ATerm n_81 (ATerm), ATerm t);
ATerm xtc_location_0_0 (ATerm t);
static ATerm n_2 (ATerm t);
static ATerm o_2 (ATerm t);
static ATerm q_2 (ATerm t);
static ATerm r_2 (ATerm t);
static ATerm s_2 (ATerm t);
ATerm xtc_load_0_0 (ATerm t);
static ATerm v_2 (ATerm t);
static ATerm x_2 (ATerm t);
static ATerm n_29 (ATerm f_28, ATerm t);
static ATerm z_2 (ATerm t);
static ATerm a_3 (ATerm t);
static ATerm b_3 (ATerm t);
static ATerm d_3 (ATerm t);
ATerm xtc_find_0_0 (ATerm t);
ATerm xtc_command_1_0 (ATerm u_112 (ATerm), ATerm t);
ATerm xtc_transform_file_2_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t);
static ATerm c_32 (ATerm p_30, ATerm q_30, ATerm r_30, ATerm t);
static ATerm e_32 (ATerm s_31, ATerm t_31, ATerm t);
static ATerm j_3 (ATerm t);
static ATerm k_3 (ATerm t);
static ATerm l_3 (ATerm t);
static ATerm n_3 (ATerm t);
ATerm parse_module_0_0 (ATerm t);
ATerm debug_1_0 (ATerm n_88 (ATerm), ATerm t);
ATerm if_verbose3_1_0 (ATerm p_103 (ATerm), ATerm t);
ATerm fetch_elem_1_0 (ATerm k_89 (ATerm), ATerm t);
static ATerm w_8 (ATerm p_37, ATerm q_37, ATerm t);
ATerm is_relpath_0_0 (ATerm t);
static ATerm x_8 (ATerm s_80 (ATerm), ATerm m_21, ATerm l_21, ATerm t);
static ATerm f_4 (ATerm t);
ATerm get_module_1_0 (ATerm r_80 (ATerm), ATerm t);
static ATerm z_8 (ATerm f_93 (ATerm), ATerm g_93 (ATerm), ATerm b_29, ATerm a_29, ATerm t);
static ATerm a_9 (ATerm x_92 (ATerm), ATerm v_28, ATerm u_28, ATerm t);
static ATerm p_4 (ATerm t);
static ATerm q_4 (ATerm t);
static ATerm r_4 (ATerm t);
static ATerm f_9 (ATerm d_590, ATerm i_590, ATerm o_55, ATerm t);
static ATerm t_4 (ATerm t);
static ATerm w_4 (ATerm t);
static ATerm y_4 (ATerm t);
static ATerm a_39 (ATerm u_36, ATerm x_36, ATerm z_36, ATerm t);
static ATerm a_5 (ATerm t);
ATerm diff_0_0 (ATerm t);
static ATerm h_9 (ATerm q_113 (ATerm), ATerm r_113 (ATerm), ATerm s_113 (ATerm), ATerm k_58, ATerm h_58, ATerm o_58, ATerm l_58, ATerm i_58, ATerm j_58, ATerm t);
ATerm GnNext_3_0 (ATerm q_113 (ATerm), ATerm r_113 (ATerm), ATerm s_113 (ATerm), ATerm t);
ATerm while_not_2_0 (ATerm d_82 (ATerm), ATerm e_82 (ATerm), ATerm t);
ATerm for_3_0 (ATerm g_82 (ATerm), ATerm h_82 (ATerm), ATerm i_82 (ATerm), ATerm t);
static ATerm d_5 (ATerm t);
static ATerm e_5 (ATerm t);
ATerm graph_nodes_roots_3_0 (ATerm n_113 (ATerm), ATerm o_113 (ATerm), ATerm p_113 (ATerm), ATerm t);
ATerm filter_1_0 (ATerm f_96 (ATerm), ATerm t);
static ATerm i_5 (ATerm t);
static ATerm k_5 (ATerm t);
static ATerm m_5 (ATerm t);
static ATerm q_5 (ATerm t);
static ATerm r_5 (ATerm t);
static ATerm u_5 (ATerm t);
static ATerm k_9 (ATerm c_21, ATerm t);
static ATerm m_9 (ATerm z_42, ATerm a_43, ATerm t);
ATerm copy_to_1_0 (ATerm o_0 (ATerm), ATerm t);
static ATerm n_9 (ATerm h_51, ATerm i_51, ATerm t);
ATerm end_scope_1_0 (ATerm i_101 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm i_81 (ATerm), ATerm j_81 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm h_101 (ATerm), ATerm t);
static ATerm w_5 (ATerm t);
static ATerm e_6 (ATerm t);
static ATerm f_6 (ATerm t);
ATerm xtc_temp_files_1_0 (ATerm g_112 (ATerm), ATerm t);
static ATerm j_6 (ATerm t);
ATerm xtc_io_1_0 (ATerm h_112 (ATerm), ATerm t);
ATerm default_usage_0_0 (ATerm t);
static ATerm k_6 (ATerm t);
static ATerm l_6 (ATerm t);
static ATerm m_6 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm o_6 (ATerm t);
static ATerm p_6 (ATerm t);
static ATerm r_6 (ATerm t);
static ATerm u_6 (ATerm t);
static ATerm v_6 (ATerm t);
static ATerm w_6 (ATerm t);
static ATerm x_6 (ATerm t);
static ATerm y_6 (ATerm t);
static ATerm z_6 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm u_9 (ATerm m_59, ATerm n_59, ATerm t);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t);
static ATerm f_7 (ATerm t);
static ATerm g_7 (ATerm t);
static ATerm h_7 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm k_7 (ATerm t);
static ATerm m_7 (ATerm t);
static ATerm n_7 (ATerm t);
ATerm input_option_0_0 (ATerm t);
static ATerm s_9 (ATerm c_51, ATerm d_51, ATerm b_51, ATerm t);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t);
ATerm at_end_1_0 (ATerm o_89 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm m_51 (ATerm w_50, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm l_9 (ATerm s_59, ATerm r_59, ATerm t);
static ATerm s_7 (ATerm t);
static ATerm t_7 (ATerm t);
static ATerm v_7 (ATerm t);
static ATerm w_7 (ATerm t);
static ATerm x_7 (ATerm t);
static ATerm y_7 (ATerm t);
static ATerm z_7 (ATerm t);
static ATerm c_8 (ATerm t);
static ATerm g_8 (ATerm t);
static ATerm h_8 (ATerm t);
static ATerm i_8 (ATerm t);
static ATerm n_8 (ATerm t);
static ATerm y_8 (ATerm t);
static ATerm b_9 (ATerm t);
static ATerm c_9 (ATerm t);
static ATerm g_9 (ATerm t);
static ATerm i_9 (ATerm t);
static ATerm t_9 (ATerm t);
ATerm pack_stratego_options_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm o_9 (ATerm r_40, ATerm s_40, ATerm t);
ATerm foldr_2_0 (ATerm b_95 (ATerm), ATerm c_95 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm v_9 (ATerm t);
static ATerm w_9 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm n_103 (ATerm), ATerm t);
static ATerm x_9 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm z_9 (ATerm t);
ATerm need_help_1_0 (ATerm b_105 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
static ATerm r_9 (ATerm t_52, ATerm u_52, ATerm t);
static ATerm e_10 (ATerm t);
static ATerm f_10 (ATerm t);
static ATerm g_10 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm i_89 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm h_10 (ATerm t);
static ATerm j_10 (ATerm t);
static ATerm k_10 (ATerm t);
static ATerm m_10 (ATerm t);
static ATerm n_10 (ATerm t);
static ATerm o_10 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm a_60 (ATerm), ATerm b_60 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm s_107 (ATerm), ATerm t);
static ATerm r_10 (ATerm t);
static ATerm s_10 (ATerm t);
static ATerm t_10 (ATerm t);
static ATerm u_10 (ATerm t);
ATerm parse_options_1_0 (ATerm r_107 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm d_105 (ATerm), ATerm e_105 (ATerm), ATerm f_105 (ATerm), ATerm g_105 (ATerm), ATerm t);
static ATerm w_10 (ATerm t);
static ATerm y_10 (ATerm t);
static ATerm z_10 (ATerm t);
static ATerm c_11 (ATerm t);
static ATerm f_11 (ATerm t);
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
static ATerm a_8 (ATerm a_23, ATerm b_23, ATerm t)
{
  ATerm m_0 = NULL;
  t = SSL_write_term_to_stream_baf(a_23, b_23);
  m_0 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, m_0);
  return(t);
}
static ATerm f_8 (ATerm p_88 (ATerm), ATerm b_166, ATerm i_23, ATerm t)
{
  ATerm q_0 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, b_166, term_i_11);
  t = t_8(t);
  q_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_0, i_23);
  t = p_88(t);
  t = fclose_0_0(t);
  t = i_23;
  return(t);
}
static ATerm u_8 (ATerm l_101 (ATerm), ATerm f_42, ATerm d_42, ATerm t)
{
  ATerm s_0 = NULL,t_0 = NULL,w_0 = NULL,z_0 = NULL,a_1 = NULL,b_1 = NULL;
  z_0 = t;
  t = l_101(t);
  s_0 = t;
  t = (ATerm) ATmakeAppl(sym__3, s_0, f_42, d_42);
  t = s_9(s_0, f_42, d_42, t);
  {
    ATerm l_11 = t;
    int m_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_1 = NULL;
        t = term_n_11;
        c_1 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_0, term_n_11);
        t = r_9(s_0, c_1, t);
        LocalPopChoice(m_11);
      }
    else
      {
        t = l_11;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_0 = ATgetFirst((ATermList) t);
      w_0 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_n_11;
  a_1 = t;
  t = (ATerm) ATinsert(CheckATermList(w_0), (ATerm) ATinsert(CheckATermList(t_0), f_42));
  b_1 = t;
  t = SSL_table_put(s_0, a_1, b_1);
  t = z_0;
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
  ATerm d_1 = NULL,e_1 = NULL,f_1 = NULL,h_1 = NULL,i_1 = NULL,j_1 = NULL,k_1 = NULL,l_1 = NULL;
  t = P__tmpdir_0_0(t);
  h_1 = t;
  t = term_q_11;
  l_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_1, term_q_11);
  t = v_8(h_1, l_1, t);
  j_1 = t;
  t = term_t_11;
  k_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_1, term_t_11);
  t = v_8(j_1, k_1, t);
  i_1 = t;
  t = SSL_mkstemp(i_1);
  if(match_cons(t, sym__2))
    {
      e_1 = ATgetArgument(t, 0);
      d_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = term_y_11;
  f_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_1, term_y_11);
  t = u_8(a_0, e_1, f_1, t);
  t = SSL_close(d_1);
  t = e_1;
  return(t);
}
static ATerm b_8 (ATerm m_23, ATerm n_23, ATerm t)
{
  ATerm t_2 = NULL,u_2 = NULL;
  t = n_23;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = n_23;
    }
  else
    {
      ATerm h_0 = NULL,v_0 = NULL,q_1 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          t_2 = ATgetFirst((ATermList) t);
          u_2 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(n_23);
      h_0 = t;
      t = u_2;
      {
        static ATerm m_1 (ATerm t)
        {
          ATerm z_11 = t;
          int c_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm x_0 = NULL;
              x_0 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = x_0;
              LocalPopChoice(c_12);
            }
          else
            {
              t = z_11;
              {
                ATerm y_0 = NULL;
                t = Cons_2_0(_id, m_1, t);
                y_0 = t;
                t = (ATerm) ATinsert(CheckATermList(y_0), m_23);
              }
            }
          return(t);
        }
        t = m_1(t);
      }
      v_0 = t;
      t = (ATerm) ATinsert(CheckATermList(v_0), t_2);
      q_1 = t;
      t = SSLsetAnnotations(q_1, h_0);
    }
  return(t);
}
static ATerm v_3 (ATerm c_3, ATerm t)
{
  t = c_3;
  {
    ATerm d_12 = t;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm g_12 = ATgetArgument(t, 0);
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
  t = (ATerm) ATmakeAppl(sym__2, c_3, term_i_11);
  t = open_file_0_0(t);
  return(t);
}
static ATerm x_3 (ATerm g_3, ATerm h_3, ATerm i_3, ATerm t)
{
  t = SSL_open_file(g_3, h_3);
  return(t);
}
static ATerm b_0 (ATerm t)
{
  t = term_n_12;
  return(t);
}
ATerm open_file_0_0 (ATerm t)
{
  ATerm s_3 = NULL,t_3 = NULL,u_3 = NULL;
  s_3 = t;
  if(match_cons(t, sym__2))
    {
      t_3 = ATgetArgument(t, 0);
      u_3 = ATgetArgument(t, 1);
      {
        ATerm p_12 = t;
        int r_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = v_3(s_3, t);
            LocalPopChoice(r_12);
          }
        else
          {
            t = p_12;
            t = x_3(t_3, u_3, s_3, t);
          }
      }
    }
  else
    {
      t = v_3(s_3, t);
    }
  return(t);
}
ATerm create_dep_file_0_0 (ATerm t)
{
  ATerm y_3 = NULL,z_3 = NULL,a_4 = NULL,c_4 = NULL,d_4 = NULL,e_4 = NULL,g_4 = NULL,h_4 = NULL,i_4 = NULL;
  z_3 = t;
  t = term_s_12;
  t = get_config_0_0(t);
  {
    ATerm d_13 = t;
    int g_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_h_13;
        t = get_config_0_0(t);
        LocalPopChoice(g_13);
      }
    else
      {
        t = d_13;
        {
          ATerm j_13 = t;
          if((PushChoice() == 0))
            {
              t = term_k_13;
              t = get_config_0_0(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = j_13;
            }
        }
      }
  }
  y_3 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_m_13), term_l_13), y_3);
  i_4 = t;
  t = SSL_concat_strings(i_4);
  h_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_4, term_i_11);
  t = open_file_0_0(t);
  a_4 = t;
  t = term_n_13;
  e_4 = t;
  t = (ATerm) ATinsert(CheckATermList(z_3), term_q_13);
  g_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_13, (ATerm) ATinsert(CheckATermList(z_3), term_q_13));
  t = b_8(e_4, g_4, t);
  c_4 = t;
  t = (ATerm) ATinsert(CheckATermList(c_4), y_3);
  d_4 = t;
  t = SSL_printnl(a_4, d_4);
  t = SSL_close_file(a_4);
  t = (ATerm) ATmakeAppl(sym_FILE_1, h_4);
  return(t);
}
static ATerm d_8 (ATerm w_37, ATerm x_37, ATerm t)
{
  ATerm k_4 = NULL;
  t = SSL_fputc(w_37, x_37);
  k_4 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, k_4);
  return(t);
}
static ATerm e_8 (ATerm e_23, ATerm f_23, ATerm t)
{
  ATerm l_4 = NULL;
  t = SSL_write_term_to_stream_text(e_23, f_23);
  l_4 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, l_4);
  return(t);
}
ATerm basename_1_0 (ATerm a_99 (ATerm), ATerm t)
{
  ATerm s_4 = NULL,u_4 = NULL;
  u_4 = t;
  t = SSL_explode_string(u_4);
  {
    ATerm x_13 = t;
    int z_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm g_6 (ATerm t)
        {
          ATerm z_5 = NULL,a_6 = NULL,c_6 = NULL;
          z_5 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              a_6 = ATgetFirst((ATermList) t);
              c_6 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          {
            ATerm c_14 = t;
            int e_14 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm x_1 = NULL,g_2 = NULL,s_1 = NULL;
                t = SSLgetAnnotations(z_5);
                x_1 = t;
                t = c_6;
                t = g_6(t);
                g_2 = t;
                t = (ATerm) ATinsert(CheckATermList(g_2), a_6);
                s_1 = t;
                t = SSLsetAnnotations(s_1, x_1);
                LocalPopChoice(e_14);
              }
            else
              {
                t = c_14;
                {
                  ATerm f_14 = t;
                  int g_14 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm p_2 = NULL,u_1 = NULL;
                      t = SSLgetAnnotations(z_5);
                      p_2 = t;
                      t = a_6;
                      if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 47)))
                        _fail(t);
                      t = (ATerm) ATinsert(CheckATermList(c_6), a_6);
                      u_1 = t;
                      t = SSLsetAnnotations(u_1, p_2);
                      LocalPopChoice(g_14);
                    }
                  else
                    {
                      t = f_14;
                      {
                        ATerm e_3 = NULL,m_3 = NULL,y_1 = NULL;
                        t = SSLgetAnnotations(z_5);
                        e_3 = t;
                        t = a_6;
                        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 46)))
                          _fail(t);
                        t = c_6;
                        t = a_99(t);
                        m_3 = t;
                        t = (ATerm) ATinsert(CheckATermList(m_3), a_6);
                        y_1 = t;
                        t = SSLsetAnnotations(y_1, e_3);
                        t = (ATerm) ATempty;
                      }
                    }
                }
              }
          }
          return(t);
        }
        t = g_6(t);
        LocalPopChoice(z_13);
      }
    else
      {
        t = x_13;
      }
  }
  s_4 = t;
  t = SSL_implode_string(s_4);
  return(t);
}
ATerm at_suffix_rev_1_0 (ATerm w_89 (ATerm), ATerm t)
{
  static ATerm d_7 (ATerm t)
  {
    ATerm i_14 = t;
    int j_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_7 = NULL,b_7 = NULL,c_7 = NULL,j_4 = NULL,o_4 = NULL,e_2 = NULL;
        a_7 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            b_7 = ATgetFirst((ATermList) t);
            c_7 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(a_7);
        j_4 = t;
        t = c_7;
        t = d_7(t);
        o_4 = t;
        t = (ATerm) ATinsert(CheckATermList(o_4), b_7);
        e_2 = t;
        t = SSLsetAnnotations(e_2, j_4);
        LocalPopChoice(j_14);
      }
    else
      {
        t = i_14;
        t = w_89(t);
      }
    return(t);
  }
  t = d_7(t);
  return(t);
}
ATerm get_filename_0_0 (ATerm t)
{
  ATerm i_7 = NULL,j_7 = NULL,l_7 = NULL;
  l_7 = t;
  t = SSL_explode_string(l_7);
  {
    ATerm m_14 = t;
    int n_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm f_0 (ATerm t)
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm o_14 = ATgetFirst((ATermList) t);
              if(((ATgetType(o_14) != AT_INT) || (ATgetInt((ATermInt) o_14) != 47)))
                _fail(t);
              if(((i_7 != NULL) && (i_7 != (ATerm) ATgetNext((ATermList) t))))
                _fail((ATerm) ATgetNext((ATermList) t));
              else
                i_7 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          return(t);
        }
        t = at_suffix_rev_1_0(f_0, t);
        t = not_null(i_7);
        LocalPopChoice(n_14);
      }
    else
      {
        t = m_14;
      }
  }
  j_7 = t;
  t = SSL_implode_string(j_7);
  return(t);
}
ATerm map_1_0 (ATerm y_88 (ATerm), ATerm t)
{
  static ATerm a_10 (ATerm t)
  {
    ATerm j_9 = NULL,p_9 = NULL,q_9 = NULL;
    j_9 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = j_9;
      }
    else
      {
        ATerm s_5 = NULL,y_5 = NULL,b_6 = NULL,w_2 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            p_9 = ATgetFirst((ATermList) t);
            q_9 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(j_9);
        s_5 = t;
        t = p_9;
        t = y_88(t);
        y_5 = t;
        t = q_9;
        t = a_10(t);
        b_6 = t;
        t = (ATerm) ATinsert(CheckATermList(b_6), y_5);
        w_2 = t;
        t = SSLsetAnnotations(w_2, s_5);
      }
    return(t);
  }
  t = a_10(t);
  return(t);
}
static ATerm v_8 (ATerm p_36, ATerm q_36, ATerm t)
{
  t = SSL_strcat(p_36, q_36);
  return(t);
}
static ATerm j_0 (ATerm t)
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
static ATerm u_0 (ATerm t)
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
      ATerm p_10 = NULL;
      p_10 = t;
      t = SSL_is_string(p_10);
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
            t = map_1_0(j_0, t);
            LocalPopChoice(x_14);
          }
        else
          {
            t = w_14;
            {
              ATerm a_11 = NULL,b_11 = NULL,e_11 = NULL;
              a_11 = t;
              if(match_cons(t, sym_Path_1))
                {
                  b_11 = ATgetArgument(t, 0);
                  t = b_11;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      b_11 = ATgetArgument(t, 0);
                      t = b_11;
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
                            t = debug_1_0(u_0, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm j_11 = NULL,k_11 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          b_11 = ATgetArgument(t, 0);
                          e_11 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = b_11;
                      t = eval_config_0_0(t);
                      j_11 = t;
                      t = e_11;
                      t = eval_config_0_0(t);
                      k_11 = t;
                      t = (ATerm) ATmakeAppl(sym__2, j_11, k_11);
                      t = v_8(j_11, k_11, t);
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
  ATerm p_11 = NULL,u_11 = NULL;
  p_11 = t;
  t = term_a_15;
  u_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_15, p_11);
  t = r_9(u_11, p_11, t);
  {
    ATerm b_15 = t;
    int d_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_11 = NULL,x_11 = NULL;
        t = eval_config_0_0(t);
        w_11 = t;
        t = term_a_15;
        x_11 = t;
        t = SSL_table_put(x_11, p_11, w_11);
        t = w_11;
        LocalPopChoice(d_15);
      }
    else
      {
        t = b_15;
      }
  }
  return(t);
}
static ATerm g_1 (ATerm t)
{
  ATerm f_12 = NULL;
  if(match_cons(t, sym_Specification_1))
    {
      f_12 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_12;
  t = filter_1_0(n_1, t);
  return(t);
}
static ATerm n_1 (ATerm t)
{
  ATerm e_15 = t;
  if((PushChoice() == 0))
    {
      ATerm j_12 = NULL,k_12 = NULL,l_12 = NULL,v_4 = NULL;
      l_12 = t;
      if(match_cons(t, sym_Imports_1))
        {
          k_12 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(l_12);
      j_12 = t;
      t = (ATerm) ATmakeAppl(sym_Imports_1, k_12);
      v_4 = t;
      t = SSLsetAnnotations(v_4, j_12);
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
  ATerm a_12 = NULL;
  t = map_1_0(g_1, t);
  t = concat_0_0(t);
  a_12 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, a_12);
  return(t);
}
ATerm genzip_4_0 (ATerm b_91 (ATerm), ATerm c_91 (ATerm), ATerm d_91 (ATerm), ATerm e_91 (ATerm), ATerm t)
{
  static ATerm z_12 (ATerm t)
  {
    ATerm f_15 = t;
    int g_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = b_91(t);
        LocalPopChoice(g_15);
      }
    else
      {
        t = f_15;
        {
          ATerm m_12 = NULL,q_12 = NULL,t_12 = NULL,v_12 = NULL,w_12 = NULL,y_12 = NULL,x_4 = NULL;
          t = c_91(t);
          y_12 = t;
          if(match_cons(t, sym__2))
            {
              q_12 = ATgetArgument(t, 0);
              t_12 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(y_12);
          m_12 = t;
          t = q_12;
          t = e_91(t);
          v_12 = t;
          t = t_12;
          t = z_12(t);
          w_12 = t;
          t = (ATerm) ATmakeAppl(sym__2, v_12, w_12);
          x_4 = t;
          t = SSLsetAnnotations(x_4, m_12);
          t = d_91(t);
        }
      }
    return(t);
  }
  t = z_12(t);
  return(t);
}
static ATerm o_1 (ATerm t)
{
  ATerm a_13 = NULL;
  if(match_cons(t, sym_Imports_1))
    {
      a_13 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_13;
  return(t);
}
static ATerm j_8 (ATerm v_132, ATerm t)
{
  t = v_132;
  t = filter_1_0(o_1, t);
  t = concat_0_0(t);
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm f_13 = NULL;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_h_15;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      ATerm i_13 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          f_13 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, term_i_15);
      i_13 = t;
      t = (ATerm) ATmakeAppl(sym__2, f_13, (ATerm) ATinsert(ATempty, term_i_15));
      t = w_8(f_13, i_13, t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
ATerm pass_keep_0_0 (ATerm t)
{
  ATerm o_13 = NULL,r_13 = NULL,s_13 = NULL,t_13 = NULL;
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
  r_13 = t;
  t = term_m_15;
  t_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_13, term_m_15);
  t = k_8(r_13, t_13, t);
  s_13 = t;
  t = SSL_int_to_string(s_13);
  o_13 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, o_13), term_j_15);
  return(t);
}
static ATerm k_8 (ATerm x_40, ATerm y_40, ATerm t)
{
  ATerm n_15 = t;
  int o_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(x_40, y_40);
      LocalPopChoice(o_15);
    }
  else
    {
      t = n_15;
      t = SSL_subtr(x_40, y_40);
    }
  return(t);
}
ATerm pass_verbose_0_0 (ATerm t)
{
  ATerm u_13 = NULL,v_13 = NULL,w_13 = NULL,a_14 = NULL;
  t = term_p_15;
  {
    ATerm q_15 = t;
    int t_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        LocalPopChoice(t_15);
      }
    else
      {
        t = q_15;
        t = term_m_15;
      }
  }
  v_13 = t;
  t = term_m_15;
  a_14 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_13, term_m_15);
  t = k_8(v_13, a_14, t);
  w_13 = t;
  t = SSL_int_to_string(w_13);
  u_13 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, u_13), term_p_15);
  return(t);
}
static ATerm p_1 (ATerm t)
{
  ATerm h_14 = NULL,k_14 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm u_15 = ATgetArgument(t, 0);
      if(match_cons(u_15, sym_Stream_1))
        {
          h_14 = ATgetArgument(u_15, 0);
        }
      else
        _fail(t);
      k_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_8(h_14, k_14, t);
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm t_111 (ATerm), ATerm u_111 (ATerm), ATerm t)
{
  ATerm b_14 = NULL,d_14 = NULL;
  d_14 = t;
  t = xtc_new_file_0_0(t);
  b_14 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_14, d_14);
  t = f_8(p_1, b_14, d_14, t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, b_14);
  t = xtc_transform_file_2_0(t_111, u_111, t);
  t = read_from_0_0(t);
  return(t);
}
static ATerm l_8 (ATerm e_47, ATerm f_47, ATerm t)
{
  t = SSL_execvp(e_47, f_47);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm w_15 = NULL,x_15 = NULL,a_16 = NULL,c_16 = NULL;
  w_15 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      x_15 = ATgetArgument(t, 0);
      {
        ATerm q_7 = NULL,r_7 = NULL;
        t = SSL_int_to_string(x_15);
        q_7 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_y_15), q_7), term_v_15);
        r_7 = t;
        t = SSL_concat_strings(r_7);
      }
    }
  else
    {
      ATerm d_9 = NULL,e_9 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          x_15 = ATgetArgument(t, 0);
          a_16 = ATgetArgument(t, 1);
          c_16 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(a_16);
      d_9 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, c_16), term_b_16), d_9), term_z_15), x_15);
      e_9 = t;
      t = SSL_concat_strings(e_9);
    }
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm j_16 = NULL;
  j_16 = t;
  {
    ATerm d_16 = t;
    int e_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm r_1 (ATerm t)
        {
          if(match_cons(t, sym_Signal_3))
            {
              ATerm f_16 = ATgetArgument(t, 0);
              if((j_16 != ATgetArgument(t, 1)))
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
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_b_22), term_x_21), term_t_21), term_n_21), term_g_21), term_b_21), term_x_20), term_t_20), term_m_20), term_g_20), term_b_20), term_x_19), term_q_19), term_l_19), term_h_19), term_c_19), term_y_18), term_r_18), term_l_18), term_g_18), term_b_18), term_w_17), term_o_17), term_h_17), term_c_17), term_x_16), term_q_16), term_l_16);
        t = fetch_elem_1_0(r_1, t);
        LocalPopChoice(e_16);
      }
    else
      {
        t = d_16;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, j_16);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm r_16 = NULL,a_17 = NULL;
  r_16 = t;
  {
    ATerm c_22 = t;
    int d_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm e_22 = ATgetArgument(t, 0);
            a_17 = ATgetArgument(t, 1);
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
              ATerm y_9 = NULL,c_10 = NULL,d_10 = NULL;
              t = a_17;
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
              c_10 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, y_9), term_n_22);
              d_10 = t;
              t = SSL_printnl(c_10, d_10);
              t = (ATerm) ATmakeAppl(sym__2, term_m_22, (ATerm) ATinsert(ATinsert(ATempty, y_9), term_n_22));
              LocalPopChoice(i_22);
            }
          else
            {
              t = h_22;
              t = r_16;
            }
        }
      }
    else
      {
        t = c_22;
        t = r_16;
      }
  }
  t = r_16;
  return(t);
}
ATerm fork_0_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_and_wait_1_0 (ATerm y_103 (ATerm), ATerm t)
{
  ATerm k_17 = NULL,l_17 = NULL;
  l_17 = t;
  t = fork_0_0(t);
  k_17 = t;
  {
    ATerm o_22 = t;
    int p_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = l_17;
        t = y_103(t);
        LocalPopChoice(p_22);
      }
    else
      {
        t = o_22;
        t = SSL_waitpid(k_17);
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
        t = l_17;
      }
  }
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm q_17 = NULL;
  static ATerm t_1 (ATerm t)
  {
    ATerm r_17 = NULL,s_17 = NULL;
    r_17 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(q_17), r_17);
    t = r_9(not_null(q_17), r_17, t);
    s_17 = t;
    t = (ATerm) ATmakeAppl(sym__2, r_17, s_17);
    return(t);
  }
  if(((q_17 != NULL) && (q_17 != t)))
    _fail(t);
  else
    q_17 = t;
  t = SSL_table_keys(q_17);
  t = map_1_0(t_1, t);
  return(t);
}
ATerm if_verbose5_1_0 (ATerm r_103 (ATerm), ATerm t)
{
  ATerm u_17 = NULL;
  u_17 = t;
  {
    ATerm y_22 = t;
    int z_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_17 = NULL;
        t = term_p_15;
        t = get_config_0_0(t);
        y_17 = t;
        t = (ATerm) ATmakeAppl(sym__2, y_17, term_j_21);
        t = geq_0_0(t);
        t = u_17;
        t = r_103(t);
        LocalPopChoice(z_22);
      }
    else
      {
        t = y_22;
        t = u_17;
      }
  }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm q_103 (ATerm), ATerm t)
{
  ATerm j_18 = NULL;
  j_18 = t;
  {
    ATerm c_23 = t;
    int d_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_18 = NULL;
        t = term_p_15;
        t = get_config_0_0(t);
        p_18 = t;
        t = (ATerm) ATmakeAppl(sym__2, p_18, term_t_18);
        t = geq_0_0(t);
        t = j_18;
        t = q_103(t);
        LocalPopChoice(d_23);
      }
    else
      {
        t = c_23;
        t = j_18;
      }
  }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm s_103 (ATerm), ATerm t)
{
  ATerm u_18 = NULL;
  u_18 = t;
  {
    ATerm h_23 = t;
    int j_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_18 = NULL;
        t = term_p_15;
        t = get_config_0_0(t);
        w_18 = t;
        t = (ATerm) ATmakeAppl(sym__2, w_18, term_z_16);
        t = geq_0_0(t);
        t = u_18;
        t = s_103(t);
        LocalPopChoice(j_23);
      }
    else
      {
        t = h_23;
        t = u_18;
      }
  }
  return(t);
}
static ATerm o_8 (ATerm c_93 (ATerm), ATerm x_28, ATerm w_28, ATerm t)
{
  static ATerm j_20 (ATerm t)
  {
    ATerm s_19 = NULL,t_19 = NULL,w_19 = NULL;
    s_19 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = w_28;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            t_19 = ATgetFirst((ATermList) t);
            w_19 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm k_23 = t;
          int l_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = s_19;
              {
                static ATerm v_1 (ATerm t)
                {
                  t = w_28;
                  return(t);
                }
                t = z_8(c_93, v_1, t_19, w_19, t);
              }
              t = j_20(t);
              LocalPopChoice(l_23);
            }
          else
            {
              t = k_23;
              {
                ATerm i_10 = NULL,l_10 = NULL,z_4 = NULL;
                t = SSLgetAnnotations(s_19);
                i_10 = t;
                t = w_19;
                t = j_20(t);
                l_10 = t;
                t = (ATerm) ATinsert(CheckATermList(l_10), t_19);
                z_4 = t;
                t = SSLsetAnnotations(z_4, i_10);
              }
            }
        }
      }
    return(t);
  }
  t = x_28;
  t = j_20(t);
  return(t);
}
static ATerm w_1 (ATerm t)
{
  ATerm i_21 = NULL;
  if(match_cons(t, sym__2))
    {
      i_21 = ATgetArgument(t, 0);
      if((i_21 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm p_8 (ATerm z_51, ATerm a_52, ATerm b_52, ATerm t)
{
  ATerm n_20 = NULL,p_20 = NULL,r_20 = NULL;
  n_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_51, a_52);
  {
    ATerm o_23 = t;
    int p_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm q_23 = ATgetArgument(t, 0);
            ATerm r_23 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, z_51, a_52);
        t = r_9(z_51, a_52, t);
        LocalPopChoice(p_23);
      }
    else
      {
        t = o_23;
        t = (ATerm) ATempty;
      }
  }
  r_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_20, b_52);
  t = o_8(w_1, r_20, b_52, t);
  p_20 = t;
  t = SSL_table_put(z_51, a_52, p_20);
  t = n_20;
  return(t);
}
static ATerm q_8 (ATerm v_107 (ATerm), ATerm j_52, ATerm i_52, ATerm t)
{
  static ATerm z_1 (ATerm t)
  {
    ATerm q_21 = NULL,s_21 = NULL;
    if(match_cons(t, sym__2))
      {
        q_21 = ATgetArgument(t, 0);
        s_21 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, j_52, q_21, s_21);
    t = v_107(t);
    return(t);
  }
  t = i_52;
  t = map_1_0(z_1, t);
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
        ATerm s_23 = t;
        int t_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(j_22);
            LocalPopChoice(t_23);
          }
        else
          {
            t = s_23;
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
static ATerm r_8 (ATerm g_23, ATerm t)
{
  t = SSL_read_term_from_stream(g_23);
  return(t);
}
static ATerm s_8 (ATerm y_37, ATerm z_37, ATerm t)
{
  ATerm r_22 = NULL;
  t = SSL_fopen(y_37, z_37);
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
static ATerm u_25 (ATerm w_23, ATerm t)
{
  ATerm x_23 = NULL;
  t = SSL_explode_term(w_23);
  if(match_cons(t, sym__2))
    {
      ATerm u_23 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) u_23) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm v_23 = ATgetArgument(t, 1);
        if(((ATgetType(v_23) == AT_LIST) && !(ATisEmpty(v_23))))
          {
            x_23 = ATgetFirst((ATermList) v_23);
            {
              ATerm y_23 = (ATerm) ATgetNext((ATermList) v_23);
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
  ATerm g_24 = NULL,l_24 = NULL,o_24 = NULL,w_24 = NULL,b_5 = NULL;
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
  b_5 = t;
  t = SSLsetAnnotations(b_5, o_24);
  if(match_cons(t, sym__2))
    {
      g_24 = ATgetArgument(t, 0);
      l_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_8(g_24, l_24, t);
  return(t);
}
static ATerm w_25 (ATerm y_24, ATerm c_25, ATerm e_25, ATerm t)
{
  ATerm h_25 = NULL,i_25 = NULL,j_25 = NULL,o_25 = NULL,c_5 = NULL;
  t = SSLgetAnnotations(e_25);
  j_25 = t;
  t = SSL_is_string(y_24);
  o_25 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_25, c_25);
  c_5 = t;
  t = SSLsetAnnotations(c_5, j_25);
  if(match_cons(t, sym__2))
    {
      h_25 = ATgetArgument(t, 0);
      i_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_8(h_25, i_25, t);
  return(t);
}
static ATerm t_8 (ATerm t)
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
      t = t_8(t);
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
  t = r_8(z_25, t);
  x_25 = t;
  t = y_25;
  t = fclose_0_0(t);
  t = x_25;
  return(t);
}
static ATerm b_2 (ATerm t)
{
  t = term_m_24;
  return(t);
}
static ATerm c_2 (ATerm t)
{
  t = term_n_24;
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
      t = w_8(d_26, e_26, t);
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
                t = w_8(f_26, h_26, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = u_24;
              }
            t = debug_1_0(b_2, t);
            LocalPopChoice(t_24);
          }
        else
          {
            t = s_24;
            t = debug_1_0(c_2, t);
          }
      }
      t = (ATerm) ATempty;
    }
  return(t);
}
static ATerm d_2 (ATerm t)
{
  t = debug_1_0(f_2, t);
  return(t);
}
static ATerm f_2 (ATerm t)
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
  t = p_8(z_26, a_27, b_27, t);
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
  t = if_verbose5_1_0(d_2, t);
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
        t = r_9(u_26, v_26, t);
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
  t = q_8(k_2, q_26, l_26, t);
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
ATerm repeat_2_0 (ATerm m_81 (ATerm), ATerm n_81 (ATerm), ATerm t)
{
  static ATerm j_27 (ATerm t)
  {
    ATerm g_25 = t;
    int k_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_81(t);
        t = j_27(t);
        LocalPopChoice(k_25);
      }
    else
      {
        t = g_25;
        t = n_81(t);
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
  t = r_9(v_27, w_27, t);
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
        t = r_9(r_27, t_27, t);
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
static ATerm v_2 (ATerm t)
{
  t = debug_1_0(x_2, t);
  return(t);
}
static ATerm x_2 (ATerm t)
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
  t = r_9(n_28, o_28, t);
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
  t = debug_1_0(d_3, t);
  return(t);
}
static ATerm d_3 (ATerm t)
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
      t = if_verbose5_1_0(v_2, t);
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
                ATerm z_28 = NULL,f_29 = NULL,g_29 = NULL;
                t = term_d_25;
                f_29 = t;
                t = (ATerm) ATmakeAppl(sym_Tool_1, q_28);
                g_29 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_d_25, (ATerm) ATmakeAppl(sym_Tool_1, q_28));
                t = r_9(f_29, g_29, t);
                {
                  static ATerm y_2 (ATerm t)
                  {
                    if(match_cons(t, sym__2))
                      {
                        if((r_28 != ATgetArgument(t, 0)))
                          {
                            _fail(ATgetArgument(t, 0));
                          }
                        if(((z_28 != NULL) && (z_28 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          z_28 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = fetch_1_0(y_2, t);
                }
                t = not_null(z_28);
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
ATerm xtc_command_1_0 (ATerm u_112 (ATerm), ATerm t)
{
  ATerm r_29 = NULL,s_29 = NULL;
  s_29 = t;
  t = u_112(t);
  t = xtc_find_0_0(t);
  r_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_29, s_29);
  {
    static ATerm f_3 (ATerm t)
    {
      ATerm t_29 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, r_29, s_29);
      t = l_8(r_29, s_29, t);
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
ATerm xtc_transform_file_2_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t)
{
  ATerm w_29 = NULL,b_30 = NULL;
  w_29 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm c_30 = NULL,d_30 = NULL;
      t = w_29;
      t = xtc_new_file_0_0(t);
      c_30 = t;
      t = r_0(t);
      d_30 = t;
      t = (ATerm) ATmakeAppl(sym__2, d_30, (ATerm) ATinsert(ATinsert(ATempty, c_30), term_s_12));
      t = conc_0_0(t);
      t = xtc_command_1_0(p_0, t);
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
      t = r_0(t);
      i_30 = t;
      t = (ATerm) ATmakeAppl(sym__2, i_30, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, h_30), term_s_12), b_30), term_h_28));
      t = conc_0_0(t);
      t = xtc_command_1_0(p_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, h_30);
    }
  return(t);
}
static ATerm c_32 (ATerm p_30, ATerm q_30, ATerm r_30, ATerm t)
{
  ATerm s_30 = NULL,v_30 = NULL,v_11 = NULL,b_12 = NULL,g_5 = NULL;
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
  g_5 = t;
  t = SSLsetAnnotations(g_5, s_30);
  b_12 = t;
  t = SSL_explode_term(b_12);
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
                v_11 = ATgetFirst((ATermList) p_28);
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
  t = v_11;
  {
    ATerm y_28 = t;
    int c_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_29 = t;
        int e_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_31 = NULL;
            if(match_cons(t, sym_FILE_1))
              {
                c_31 = ATgetArgument(t, 0);
                {
                  ATerm e_12 = NULL,h_5 = NULL;
                  t = SSLgetAnnotations(v_11);
                  e_12 = t;
                  t = (ATerm) ATmakeAppl(sym_FILE_1, c_31);
                  h_5 = t;
                  t = SSLsetAnnotations(h_5, e_12);
                }
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = v_11;
              }
            LocalPopChoice(e_29);
            t = xtc_transform_file_2_0(j_3, k_3, t);
          }
        else
          {
            t = d_29;
            t = xtc_transform_term_2_0(l_3, n_3, t);
          }
        t = read_from_0_0(t);
        LocalPopChoice(c_29);
      }
    else
      {
        t = y_28;
        {
          ATerm o_31 = NULL,p_31 = NULL,r_31 = NULL;
          t = term_m_22;
          p_31 = t;
          t = (ATerm) ATinsert(ATinsert(ATempty, q_30), term_h_29);
          r_31 = t;
          t = SSL_printnl(p_31, r_31);
          t = term_m_15;
          o_31 = t;
          t = SSL_exit(o_31);
          t = (ATerm) ATinsert(ATinsert(ATempty, q_30), term_h_29);
        }
      }
  }
  return(t);
}
static ATerm e_32 (ATerm s_31, ATerm t_31, ATerm t)
{
  ATerm o_12 = NULL;
  t = SSL_explode_term(t_31);
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
          t = (ATerm) ATinsert(ATinsert(ATempty, s_31), term_h_29);
          x_31 = t;
          t = SSL_printnl(w_31, x_31);
          t = term_m_15;
          v_31 = t;
          t = SSL_exit(v_31);
          t = (ATerm) ATinsert(ATinsert(ATempty, s_31), term_h_29);
        }
      }
  }
  return(t);
}
static ATerm j_3 (ATerm t)
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
static ATerm l_3 (ATerm t)
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
ATerm debug_1_0 (ATerm n_88 (ATerm), ATerm t)
{
  ATerm i_32 = NULL,j_32 = NULL,l_32 = NULL,n_32 = NULL;
  i_32 = t;
  t = n_88(t);
  j_32 = t;
  t = term_m_22;
  l_32 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, i_32), j_32);
  n_32 = t;
  t = SSL_printnl(l_32, n_32);
  t = i_32;
  return(t);
}
ATerm if_verbose3_1_0 (ATerm p_103 (ATerm), ATerm t)
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
        t = (ATerm) ATmakeAppl(sym__2, a_33, term_u_16);
        t = geq_0_0(t);
        t = t_32;
        t = p_103(t);
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
ATerm fetch_elem_1_0 (ATerm k_89 (ATerm), ATerm t)
{
  ATerm c_33 = NULL;
  static ATerm o_3 (ATerm t)
  {
    t = k_89(t);
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
static ATerm w_8 (ATerm p_37, ATerm q_37, ATerm t)
{
  t = SSL_access(p_37, q_37);
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
static ATerm x_8 (ATerm s_80 (ATerm), ATerm m_21, ATerm l_21, ATerm t)
{
  t = s_80(t);
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
                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, t_33), term_l_13), m_21), term_x_30), o_33);
                  y_33 = t;
                  t = SSL_concat_strings(y_33);
                  v_33 = t;
                  t = (ATerm) ATinsert(ATempty, term_i_15);
                  x_33 = t;
                  t = (ATerm) ATmakeAppl(sym__2, v_33, (ATerm) ATinsert(ATempty, term_i_15));
                  t = w_8(v_33, x_33, t);
                  s_33 = t;
                  t = (ATerm) ATmakeAppl(sym__2, t_33, (ATerm) ATmakeAppl(sym_FILE_1, s_33));
                  return(t);
                }
                t = m_21;
                t = is_relpath_0_0(t);
                t = l_21;
                t = fetch_elem_1_0(q_3, t);
                LocalPopChoice(w_30);
              }
            else
              {
                t = u_30;
                {
                  static ATerm r_3 (ATerm t)
                  {
                    ATerm u_12 = NULL,x_12 = NULL,b_13 = NULL,c_13 = NULL,e_13 = NULL;
                    x_12 = t;
                    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, x_12), term_l_13), m_21);
                    e_13 = t;
                    t = SSL_concat_strings(e_13);
                    b_13 = t;
                    t = (ATerm) ATinsert(ATempty, term_i_15);
                    c_13 = t;
                    t = (ATerm) ATmakeAppl(sym__2, b_13, (ATerm) ATinsert(ATempty, term_i_15));
                    t = w_8(b_13, c_13, t);
                    u_12 = t;
                    t = (ATerm) ATmakeAppl(sym__2, x_12, (ATerm) ATmakeAppl(sym_FILE_1, u_12));
                    return(t);
                  }
                  t = SSL_explode_string(m_21);
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
                  t = l_21;
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
              static ATerm w_3 (ATerm t)
              {
                ATerm z_33 = NULL,a_34 = NULL,b_34 = NULL,c_34 = NULL,d_34 = NULL,e_34 = NULL;
                z_33 = t;
                t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, z_33), term_l_13), m_21);
                e_34 = t;
                t = SSL_concat_strings(e_34);
                a_34 = t;
                t = term_d_25;
                c_34 = t;
                t = (ATerm) ATmakeAppl(sym_Tool_1, a_34);
                d_34 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_d_25, (ATerm) ATmakeAppl(sym_Tool_1, a_34));
                t = r_9(c_34, d_34, t);
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
                      ATerm q_31 = (ATerm) ATgetNext((ATermList) t);
                    }
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym__2, z_33, (ATerm) ATmakeAppl(sym_FILE_1, b_34));
                return(t);
              }
              t = l_21;
              t = fetch_elem_1_0(w_3, t);
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
                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_h_32), m_21), term_g_32);
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
                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_h_32), m_21), term_g_32);
                      o_34 = t;
                      t = SSL_printnl(n_34, o_34);
                      t = term_m_15;
                      m_34 = t;
                      t = SSL_exit(m_34);
                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_h_32), m_21), term_g_32);
                    }
                  }
              }
            }
        }
      }
  }
  return(t);
}
static ATerm f_4 (ATerm t)
{
  t = term_k_32;
  return(t);
}
ATerm get_module_1_0 (ATerm r_80 (ATerm), ATerm t)
{
  ATerm s_34 = NULL,t_34 = NULL,u_34 = NULL,v_34 = NULL;
  t = basename_1_0(_id, t);
  u_34 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_k_24), term_p_32), term_o_32), term_m_32);
  v_34 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_34, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_k_24), term_p_32), term_o_32), term_m_32));
  t = x_8(r_80, u_34, v_34, t);
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
    static ATerm b_4 (ATerm t)
    {
      ATerm x_34 = NULL;
      x_34 = t;
      t = s_34;
      t = debug_1_0(f_4, t);
      t = x_34;
      return(t);
    }
    t = if_verbose3_1_0(b_4, t);
  }
  t = parse_module_0_0(t);
  t_34 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_34, t_34);
  return(t);
}
static ATerm z_8 (ATerm f_93 (ATerm), ATerm g_93 (ATerm), ATerm b_29, ATerm a_29, ATerm t)
{
  t = g_93(t);
  {
    static ATerm m_4 (ATerm t)
    {
      ATerm y_34 = NULL;
      y_34 = t;
      t = (ATerm) ATmakeAppl(sym__2, b_29, y_34);
      t = f_93(t);
      return(t);
    }
    t = fetch_1_0(m_4, t);
  }
  t = a_29;
  return(t);
}
static ATerm a_9 (ATerm x_92 (ATerm), ATerm v_28, ATerm u_28, ATerm t)
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
                  t = u_28;
                  return(t);
                }
                t = z_8(x_92, n_4, k_35, l_35, t);
              }
              t = o_35(t);
              LocalPopChoice(u_32);
            }
          else
            {
              t = s_32;
              {
                ATerm p_13 = NULL,y_13 = NULL,l_5 = NULL;
                t = SSLgetAnnotations(j_35);
                p_13 = t;
                t = l_35;
                t = o_35(t);
                y_13 = t;
                t = (ATerm) ATinsert(CheckATermList(y_13), k_35);
                l_5 = t;
                t = SSLsetAnnotations(l_5, p_13);
              }
            }
        }
      }
    return(t);
  }
  t = v_28;
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
static ATerm f_9 (ATerm d_590, ATerm i_590, ATerm o_55, ATerm t)
{
  ATerm r_35 = NULL,s_35 = NULL,t_35 = NULL,u_35 = NULL;
  t = SSL_explode_term(i_590);
  if(match_cons(t, sym__2))
    {
      r_35 = ATgetArgument(t, 0);
      t_35 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(d_590);
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
  t = (ATerm) ATmakeAppl(sym__2, u_35, o_55);
  t = conc_0_0(t);
  return(t);
}
static ATerm t_4 (ATerm t)
{
  ATerm n_36 = NULL;
  n_36 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, n_36);
  return(t);
}
static ATerm w_4 (ATerm t)
{
  ATerm o_36 = NULL,r_36 = NULL,s_36 = NULL,t_36 = NULL,n_5 = NULL;
  t_36 = t;
  if(match_cons(t, sym__2))
    {
      r_36 = ATgetArgument(t, 0);
      s_36 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_36);
  o_36 = t;
  t = s_36;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, r_36, s_36);
  n_5 = t;
  t = SSLsetAnnotations(n_5, o_36);
  return(t);
}
static ATerm y_4 (ATerm t)
{
  ATerm c_38 = NULL,d_38 = NULL,e_38 = NULL,g_38 = NULL,n_38 = NULL;
  c_38 = t;
  if(match_cons(t, sym__2))
    {
      d_38 = ATgetArgument(t, 0);
      e_38 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_38;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_38 = ATgetFirst((ATermList) t);
      n_38 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm z_32 = t;
        int b_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = a_39(d_38, e_38, c_38, t);
            LocalPopChoice(b_33);
          }
        else
          {
            t = z_32;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(d_38), g_38), n_38);
          }
      }
    }
  else
    {
      t = a_39(d_38, e_38, c_38, t);
    }
  return(t);
}
static ATerm a_39 (ATerm u_36, ATerm x_36, ATerm z_36, ATerm t)
{
  ATerm a_37 = NULL,g_37 = NULL,o_5 = NULL,j_37 = NULL,k_37 = NULL,l_37 = NULL,m_37 = NULL;
  t = SSLgetAnnotations(z_36);
  a_37 = t;
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
        t = f_9(k_37, l_37, m_37, t);
      }
  }
  g_37 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_36, g_37);
  o_5 = t;
  t = SSLsetAnnotations(o_5, a_37);
  return(t);
}
static ATerm a_5 (ATerm t)
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
      t = for_3_0(t_4, w_4, y_4, t);
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
        t = a_9(a_5, s_38, v_38, t);
      }
    }
  return(t);
}
static ATerm h_9 (ATerm q_113 (ATerm), ATerm r_113 (ATerm), ATerm s_113 (ATerm), ATerm k_58, ATerm h_58, ATerm o_58, ATerm l_58, ATerm i_58, ATerm j_58, ATerm t)
{
  ATerm b_39 = NULL,c_39 = NULL,d_39 = NULL,e_39 = NULL,f_39 = NULL,g_39 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, k_58, l_58);
  t = q_113(t);
  b_39 = t;
  t = r_113(t);
  c_39 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_39, o_58);
  t = diff_0_0(t);
  d_39 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_39, h_58);
  t = conc_0_0(t);
  e_39 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_39, o_58);
  t = conc_0_0(t);
  f_39 = t;
  t = (ATerm) ATmakeAppl(sym__3, k_58, b_39, i_58);
  t = s_113(t);
  g_39 = t;
  t = (ATerm) ATmakeAppl(sym__5, e_39, f_39, l_58, g_39, j_58);
  return(t);
}
ATerm GnNext_3_0 (ATerm q_113 (ATerm), ATerm r_113 (ATerm), ATerm s_113 (ATerm), ATerm t)
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
  t = h_9(q_113, r_113, s_113, i_39, j_39, k_39, l_39, m_39, n_39, t);
  return(t);
}
ATerm while_not_2_0 (ATerm d_82 (ATerm), ATerm e_82 (ATerm), ATerm t)
{
  static ATerm o_39 (ATerm t)
  {
    ATerm j_33 = t;
    int k_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_82(t);
        LocalPopChoice(k_33);
      }
    else
      {
        t = j_33;
        t = e_82(t);
        t = o_39(t);
      }
    return(t);
  }
  t = o_39(t);
  return(t);
}
ATerm for_3_0 (ATerm g_82 (ATerm), ATerm h_82 (ATerm), ATerm i_82 (ATerm), ATerm t)
{
  t = g_82(t);
  t = while_not_2_0(h_82, i_82, t);
  return(t);
}
static ATerm d_5 (ATerm t)
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
ATerm graph_nodes_roots_3_0 (ATerm n_113 (ATerm), ATerm o_113 (ATerm), ATerm p_113 (ATerm), ATerm t)
{
  ATerm r_39 = NULL;
  static ATerm f_5 (ATerm t)
  {
    ATerm p_33 = t;
    int q_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = GnNext_3_0(n_113, o_113, p_113, t);
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
  t = for_3_0(d_5, e_5, f_5, t);
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
ATerm filter_1_0 (ATerm f_96 (ATerm), ATerm t)
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
            ATerm l_14 = NULL,p_14 = NULL,q_14 = NULL,t_5 = NULL;
            t = SSLgetAnnotations(c_41);
            l_14 = t;
            t = d_41;
            t = f_96(t);
            p_14 = t;
            t = e_41;
            t = filter_1_0(f_96, t);
            q_14 = t;
            t = (ATerm) ATinsert(CheckATermList(q_14), p_14);
            t_5 = t;
            t = SSLsetAnnotations(t_5, l_14);
            LocalPopChoice(w_33);
          }
        else
          {
            t = u_33;
            t = e_41;
            t = filter_1_0(f_96, t);
          }
      }
    }
  return(t);
}
static ATerm i_5 (ATerm t)
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
  ATerm i_42 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm l_34 = ATgetArgument(t, 0);
      ATerm p_34 = ATgetArgument(t, 1);
      if(match_cons(p_34, sym_Specification_1))
        {
          i_42 = ATgetArgument(p_34, 0);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  t = j_8(i_42, t);
  return(t);
}
static ATerm m_5 (ATerm t)
{
  ATerm j_42 = NULL,k_42 = NULL;
  if(match_cons(t, sym__3))
    {
      ATerm q_34 = ATgetArgument(t, 0);
      j_42 = ATgetArgument(t, 1);
      k_42 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(k_42), j_42);
  return(t);
}
static ATerm q_5 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_r_34;
  return(t);
}
static ATerm r_5 (ATerm t)
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
static ATerm u_5 (ATerm t)
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
static ATerm k_9 (ATerm c_21, ATerm t)
{
  ATerm l_41 = NULL,m_41 = NULL,n_41 = NULL,o_41 = NULL,p_41 = NULL,r_41 = NULL,x_5 = NULL;
  ATerm a_35 = t;
  int b_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_z_29;
      t = get_config_0_0(t);
      t = filter_1_0(i_5, t);
      LocalPopChoice(b_35);
    }
  else
    {
      t = a_35;
      t = (ATerm) ATempty;
    }
  l_41 = t;
  t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATinsert(ATempty, c_21), term_y_11, (ATerm) ATempty);
  {
    static ATerm j_5 (ATerm t)
    {
      ATerm s_41 = NULL,w_41 = NULL;
      static ATerm p_5 (ATerm t)
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
                s_41 = ATgetFirst((ATermList) d_35);
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
      t = s_41;
      t = get_module_1_0(p_5, t);
      return(t);
    }
    t = graph_nodes_roots_3_0(j_5, k_5, m_5, t);
  }
  t = genzip_4_0(q_5, r_5, u_5, _id, t);
  r_41 = t;
  if(match_cons(t, sym__2))
    {
      n_41 = ATgetArgument(t, 0);
      o_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_41);
  m_41 = t;
  t = o_41;
  t = flatten_stratego_0_0(t);
  p_41 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_41, p_41);
  x_5 = t;
  t = SSLsetAnnotations(x_5, m_41);
  return(t);
}
static ATerm m_9 (ATerm z_42, ATerm a_43, ATerm t)
{
  t = SSL_copy(z_42, a_43);
  return(t);
}
ATerm copy_to_1_0 (ATerm o_0 (ATerm), ATerm t)
{
  ATerm r_43 = NULL,t_43 = NULL;
  r_43 = t;
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
        ATerm c_15 = NULL;
        t = r_43;
        t = o_0(t);
        c_15 = t;
        if(match_cons(t, sym_stdout_0))
          {
            t = c_15;
          }
        else
          {
            if(!(match_cons(t, sym_stderr_0)))
              _fail(t);
            t = c_15;
          }
        t = (ATerm) ATmakeAppl(sym__2, t_43, c_15);
        t = m_9(t_43, c_15, t);
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
              ATerm r_15 = NULL;
              t = r_43;
              t = o_0(t);
              r_15 = t;
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
              t = (ATerm) ATmakeAppl(sym__2, t_43, r_15);
              t = m_9(t_43, r_15, t);
              t = (ATerm) ATmakeAppl(sym_FILE_1, t_43);
              LocalPopChoice(i_35);
            }
          else
            {
              t = h_35;
              t = r_43;
              t = o_0(t);
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
static ATerm n_9 (ATerm h_51, ATerm i_51, ATerm t)
{
  ATerm z_43 = NULL,e_44 = NULL;
  e_44 = t;
  {
    ATerm n_35 = t;
    int p_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, h_51, i_51);
        t = r_9(h_51, i_51, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm q_35 = ATgetFirst((ATermList) t);
            z_43 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(p_35);
        t = SSL_table_put(h_51, i_51, z_43);
        t = (ATerm) ATmakeAppl(sym__3, h_51, i_51, z_43);
      }
    else
      {
        t = n_35;
        t = SSL_table_remove(h_51, i_51);
        t = (ATerm) ATmakeAppl(sym__2, h_51, i_51);
      }
  }
  t = e_44;
  return(t);
}
ATerm end_scope_1_0 (ATerm i_101 (ATerm), ATerm t)
{
  ATerm f_44 = NULL,g_44 = NULL,h_44 = NULL,i_44 = NULL,j_44 = NULL;
  i_44 = t;
  t = i_101(t);
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
        t = r_9(h_44, k_44, t);
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
      t = n_9(h_44, l_44, t);
      return(t);
    }
    t = map_1_0(v_5, t);
  }
  t = i_44;
  return(t);
}
ATerm restore_always_2_0 (ATerm i_81 (ATerm), ATerm j_81 (ATerm), ATerm t)
{
  ATerm d_36 = t;
  int e_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = i_81(t);
      t = j_81(t);
      LocalPopChoice(e_36);
    }
  else
    {
      t = d_36;
      t = j_81(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm h_101 (ATerm), ATerm t)
{
  ATerm n_44 = NULL,o_44 = NULL,p_44 = NULL,r_44 = NULL,s_44 = NULL;
  o_44 = t;
  t = h_101(t);
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
        t = r_9(n_44, h_45, t);
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
static ATerm w_5 (ATerm t)
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
ATerm xtc_temp_files_1_0 (ATerm g_112 (ATerm), ATerm t)
{
  ATerm k_45 = NULL;
  static ATerm d_6 (ATerm t)
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
          t = term_v_36;
          t = r_9(m_45, n_45, t);
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
          ATerm w_36 = (ATerm) ATgetNext((ATermList) t);
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
  t = begin_scope_1_0(w_5, t);
  t = restore_always_2_0(g_112, d_6, t);
  return(t);
}
static ATerm j_6 (ATerm t)
{
  ATerm y_36 = t;
  int b_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_s_12;
      t = get_config_0_0(t);
      LocalPopChoice(b_37);
    }
  else
    {
      t = y_36;
      t = term_c_37;
    }
  return(t);
}
ATerm xtc_io_1_0 (ATerm h_112 (ATerm), ATerm t)
{
  static ATerm h_6 (ATerm t)
  {
    ATerm d_37 = t;
    int e_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_45 = NULL;
        t = term_h_28;
        t = get_config_0_0(t);
        t_45 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, t_45);
        LocalPopChoice(e_37);
      }
    else
      {
        t = d_37;
        t = term_h_15;
      }
    t = h_112(t);
    t = copy_to_1_0(j_6, t);
    return(t);
  }
  t = xtc_temp_files_1_0(h_6, t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm v_45 = NULL,x_45 = NULL,y_45 = NULL,z_45 = NULL,a_46 = NULL;
  v_45 = t;
  t = term_y_11;
  t = whoami_0_0(t);
  x_45 = t;
  t = term_m_22;
  z_45 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_h_37), x_45), term_f_37);
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
  t = u_9(l_46, j_46, t);
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
static ATerm o_6 (ATerm t)
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
  ATerm s_46 = NULL,t_46 = NULL;
  t = term_p_15;
  s_46 = t;
  t = term_n_37;
  t_46 = t;
  t = term_o_37;
  t = u_9(s_46, t_46, t);
  t = term_r_37;
  return(t);
}
static ATerm r_6 (ATerm t)
{
  t = term_s_37;
  return(t);
}
static ATerm u_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm v_6 (ATerm t)
{
  ATerm u_46 = NULL,x_46 = NULL,y_46 = NULL;
  u_46 = t;
  t = SSL_string_to_int(u_46);
  x_46 = t;
  t = term_p_15;
  y_46 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_15, x_46);
  t = u_9(y_46, x_46, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, u_46);
  return(t);
}
static ATerm w_6 (ATerm t)
{
  t = term_t_37;
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
  ATerm z_46 = NULL,b_47 = NULL;
  t = term_u_37;
  z_46 = t;
  t = term_y_11;
  b_47 = t;
  t = term_v_37;
  t = u_9(z_46, b_47, t);
  t = term_a_38;
  return(t);
}
static ATerm z_6 (ATerm t)
{
  t = term_b_38;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm f_38 = t;
  int h_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(o_6, p_6, r_6, t);
      LocalPopChoice(h_38);
    }
  else
    {
      t = f_38;
      {
        ATerm i_38 = t;
        int j_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(u_6, v_6, w_6, t);
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
static ATerm u_9 (ATerm m_59, ATerm n_59, ATerm t)
{
  ATerm c_47 = NULL;
  t = term_a_15;
  c_47 = t;
  t = SSL_table_put(c_47, m_59, n_59);
  t = (ATerm) ATmakeAppl(sym__3, term_a_15, m_59, n_59);
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm h_47 = NULL,k_47 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm p_47 = NULL,s_47 = NULL,u_47 = NULL;
      t = term_y_11;
      t = e_0(t);
      p_47 = t;
      t = term_k_38;
      s_47 = t;
      t = term_l_38;
      u_47 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_k_38, term_l_38, p_47);
      t = s_9(s_47, u_47, p_47, t);
      _fail(t);
    }
  else
    {
      ATerm x_47 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_47 = ATgetFirst((ATermList) t);
          k_47 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = h_47;
      t = c_0(t);
      t = term_y_11;
      t = d_0(t);
      x_47 = t;
      t = (ATerm) ATinsert(CheckATermList(k_47), x_47);
    }
  return(t);
}
static ATerm f_7 (ATerm t)
{
  ATerm z_47 = NULL;
  z_47 = t;
  if(match_string(t, "-o"))
    {
      t = z_47;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = z_47;
    }
  return(t);
}
static ATerm g_7 (ATerm t)
{
  ATerm a_48 = NULL,d_48 = NULL;
  a_48 = t;
  t = term_s_12;
  d_48 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_12, a_48);
  t = u_9(d_48, a_48, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, a_48);
  return(t);
}
static ATerm h_7 (ATerm t)
{
  t = term_m_38;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(f_7, g_7, h_7, t);
  return(t);
}
static ATerm k_7 (ATerm t)
{
  ATerm f_48 = NULL;
  f_48 = t;
  if(match_string(t, "-i"))
    {
      t = f_48;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = f_48;
    }
  return(t);
}
static ATerm m_7 (ATerm t)
{
  ATerm g_48 = NULL,i_48 = NULL;
  g_48 = t;
  t = term_h_28;
  i_48 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_28, g_48);
  t = u_9(i_48, g_48, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, g_48);
  return(t);
}
static ATerm n_7 (ATerm t)
{
  t = term_o_38;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(k_7, m_7, n_7, t);
  return(t);
}
static ATerm s_9 (ATerm c_51, ATerm d_51, ATerm b_51, ATerm t)
{
  ATerm m_48 = NULL,n_48 = NULL,o_48 = NULL;
  m_48 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_51, d_51);
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
        t = (ATerm) ATmakeAppl(sym__2, c_51, d_51);
        t = r_9(c_51, d_51, t);
        LocalPopChoice(q_38);
      }
    else
      {
        t = p_38;
        t = (ATerm) ATempty;
      }
  }
  n_48 = t;
  t = (ATerm) ATinsert(CheckATermList(n_48), b_51);
  o_48 = t;
  t = SSL_table_put(c_51, d_51, o_48);
  t = m_48;
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm b_49 = NULL,c_49 = NULL,d_49 = NULL,e_49 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm f_49 = NULL,i_49 = NULL,j_49 = NULL;
      t = term_y_11;
      t = n_0(t);
      f_49 = t;
      t = term_k_38;
      i_49 = t;
      t = term_l_38;
      j_49 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_k_38, term_l_38, f_49);
      t = s_9(i_49, j_49, f_49, t);
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
      t = k_0(t);
      t = d_49;
      t = l_0(t);
      p_49 = t;
      t = (ATerm) ATinsert(CheckATermList(e_49), p_49);
    }
  return(t);
}
ATerm at_end_1_0 (ATerm o_89 (ATerm), ATerm t)
{
  static ATerm s_50 (ATerm t)
  {
    ATerm p_50 = NULL,q_50 = NULL,r_50 = NULL;
    r_50 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        p_50 = ATgetFirst((ATermList) t);
        q_50 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm h_16 = NULL,m_16 = NULL,i_6 = NULL;
          t = SSLgetAnnotations(r_50);
          h_16 = t;
          t = q_50;
          t = s_50(t);
          m_16 = t;
          t = (ATerm) ATinsert(CheckATermList(m_16), p_50);
          i_6 = t;
          t = SSLsetAnnotations(i_6, h_16);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = r_50;
        t = o_89(t);
      }
    return(t);
  }
  t = s_50(t);
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
static ATerm m_51 (ATerm w_50, ATerm t)
{
  ATerm x_50 = NULL;
  t = SSL_explode_term(w_50);
  if(match_cons(t, sym__2))
    {
      ATerm w_38 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) w_38) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      x_50 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_50;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm a_51 = NULL,e_51 = NULL,j_51 = NULL;
  j_51 = t;
  if(match_cons(t, sym__2))
    {
      a_51 = ATgetArgument(t, 0);
      e_51 = ATgetArgument(t, 1);
      {
        ATerm x_38 = t;
        int y_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm p_7 (ATerm t)
            {
              t = e_51;
              return(t);
            }
            t = a_51;
            t = at_end_1_0(p_7, t);
            LocalPopChoice(y_38);
          }
        else
          {
            t = x_38;
            t = m_51(j_51, t);
          }
      }
    }
  else
    {
      t = m_51(j_51, t);
    }
  return(t);
}
static ATerm l_9 (ATerm s_59, ATerm r_59, ATerm t)
{
  ATerm t_51 = NULL,u_51 = NULL,v_51 = NULL;
  t = s_59;
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
  u_51 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_59, u_51);
  t = conc_0_0(t);
  t_51 = t;
  t = term_a_15;
  v_51 = t;
  t = SSL_table_put(v_51, s_59, t_51);
  t = (ATerm) ATmakeAppl(sym__3, term_a_15, s_59, t_51);
  return(t);
}
static ATerm s_7 (ATerm t)
{
  ATerm f_52 = NULL;
  f_52 = t;
  if(match_string(t, "-I"))
    {
      t = f_52;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--Include", 0, ATtrue)))
        _fail(t);
      t = f_52;
    }
  return(t);
}
static ATerm t_7 (ATerm t)
{
  ATerm g_52 = NULL,m_52 = NULL,n_52 = NULL;
  g_52 = t;
  t = term_z_29;
  m_52 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, g_52), term_z_29);
  n_52 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_29, (ATerm) ATinsert(ATinsert(ATempty, g_52), term_z_29));
  t = l_9(m_52, n_52, t);
  t = term_y_11;
  return(t);
}
static ATerm v_7 (ATerm t)
{
  t = term_q_39;
  return(t);
}
static ATerm w_7 (ATerm t)
{
  ATerm o_52 = NULL;
  o_52 = t;
  if(match_string(t, "--nodep"))
    {
      t = o_52;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-nodep", 0, ATtrue)))
        _fail(t);
      t = o_52;
    }
  return(t);
}
static ATerm x_7 (ATerm t)
{
  ATerm p_52 = NULL,q_52 = NULL;
  t = term_k_13;
  p_52 = t;
  t = term_v_39;
  q_52 = t;
  t = term_w_39;
  t = u_9(p_52, q_52, t);
  t = term_y_11;
  return(t);
}
static ATerm y_7 (ATerm t)
{
  t = term_z_39;
  return(t);
}
static ATerm z_7 (ATerm t)
{
  ATerm r_52 = NULL;
  r_52 = t;
  if(match_string(t, "--dep"))
    {
      t = r_52;
    }
  else
    {
      if(match_string(t, "-d"))
        {
          t = r_52;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-dep", 0, ATtrue)))
            _fail(t);
          t = r_52;
        }
    }
  return(t);
}
static ATerm c_8 (ATerm t)
{
  ATerm s_52 = NULL,v_52 = NULL;
  s_52 = t;
  t = term_h_13;
  v_52 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_13, s_52);
  t = u_9(v_52, s_52, t);
  t = term_y_11;
  return(t);
}
static ATerm g_8 (ATerm t)
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
static ATerm i_8 (ATerm t)
{
  ATerm w_52 = NULL,x_52 = NULL;
  t = term_i_40;
  w_52 = t;
  t = term_y_11;
  x_52 = t;
  t = term_j_40;
  t = u_9(w_52, x_52, t);
  t = term_y_11;
  return(t);
}
static ATerm n_8 (ATerm t)
{
  t = term_k_40;
  return(t);
}
static ATerm y_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--slack", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm b_9 (ATerm t)
{
  ATerm a_53 = NULL,b_53 = NULL;
  t = term_f_32;
  a_53 = t;
  t = term_y_11;
  b_53 = t;
  t = term_l_40;
  t = u_9(a_53, b_53, t);
  t = term_y_11;
  return(t);
}
static ATerm c_9 (ATerm t)
{
  t = term_m_40;
  return(t);
}
static ATerm g_9 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--asfix", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm i_9 (ATerm t)
{
  ATerm c_53 = NULL,d_53 = NULL;
  t = term_v_29;
  c_53 = t;
  t = term_v_39;
  d_53 = t;
  t = term_n_40;
  t = u_9(c_53, d_53, t);
  t = term_y_11;
  return(t);
}
static ATerm t_9 (ATerm t)
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
      t = ArgOption_3_0(s_7, t_7, v_7, t);
      LocalPopChoice(q_40);
    }
  else
    {
      t = p_40;
      {
        ATerm t_40 = t;
        int u_40 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Option_3_0(w_7, x_7, y_7, t);
            LocalPopChoice(u_40);
          }
        else
          {
            t = t_40;
            {
              ATerm v_40 = t;
              int w_40 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = ArgOption_3_0(z_7, c_8, g_8, t);
                  LocalPopChoice(w_40);
                }
              else
                {
                  t = v_40;
                  {
                    ATerm z_40 = t;
                    int a_41 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Option_3_0(h_8, i_8, n_8, t);
                        LocalPopChoice(a_41);
                      }
                    else
                      {
                        t = z_40;
                        {
                          ATerm b_41 = t;
                          int f_41 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Option_3_0(y_8, b_9, c_9, t);
                              LocalPopChoice(f_41);
                            }
                          else
                            {
                              t = b_41;
                              t = Option_3_0(g_9, i_9, t_9, t);
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
  ATerm e_53 = NULL,f_53 = NULL,g_53 = NULL,i_53 = NULL;
  t = report_run_time_0_0(t);
  t = term_y_11;
  t = whoami_0_0(t);
  e_53 = t;
  t = term_m_22;
  g_53 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_g_41), e_53);
  i_53 = t;
  t = SSL_printnl(g_53, i_53);
  t = term_m_15;
  f_53 = t;
  t = SSL_exit(f_53);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_h_41;
  t = get_config_0_0(t);
  return(t);
}
static ATerm o_9 (ATerm r_40, ATerm s_40, ATerm t)
{
  ATerm i_41 = t;
  int j_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(r_40, s_40);
      LocalPopChoice(j_41);
    }
  else
    {
      t = i_41;
      t = SSL_addr(r_40, s_40);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm b_95 (ATerm), ATerm c_95 (ATerm), ATerm t)
{
  ATerm k_53 = NULL,l_53 = NULL,m_53 = NULL;
  k_53 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = k_53;
      t = b_95(t);
    }
  else
    {
      ATerm p_53 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          l_53 = ATgetFirst((ATermList) t);
          m_53 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = m_53;
      t = foldr_2_0(b_95, c_95, t);
      p_53 = t;
      t = (ATerm) ATmakeAppl(sym__2, l_53, p_53);
      t = c_95(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm v_9 (ATerm t)
{
  t = term_n_37;
  return(t);
}
static ATerm w_9 (ATerm t)
{
  ATerm f_17 = NULL,j_17 = NULL;
  if(match_cons(t, sym__2))
    {
      f_17 = ATgetArgument(t, 0);
      j_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_9(f_17, j_17, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm s_53 = NULL,s_16 = NULL,v_16 = NULL;
  t = times_0_0(t);
  v_16 = t;
  t = SSL_explode_term(v_16);
  if(match_cons(t, sym__2))
    {
      ATerm k_41 = ATgetArgument(t, 0);
      s_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_16;
  t = foldr_2_0(v_9, w_9, t);
  s_53 = t;
  t = SSL_TicksToSeconds(s_53);
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
    int t_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_54;
        if((r_54 != t))
          {
            _fail(t);
          }
        t = q_54;
        LocalPopChoice(t_41);
      }
    else
      {
        t = q_41;
        t = (ATerm) ATmakeAppl(sym__2, r_54, u_54);
        {
          ATerm u_41 = t;
          int v_41 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(r_54, u_54);
              LocalPopChoice(v_41);
            }
          else
            {
              t = u_41;
              t = SSL_gtr(r_54, u_54);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, r_54, u_54);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm n_103 (ATerm), ATerm t)
{
  ATerm e_55 = NULL;
  e_55 = t;
  {
    ATerm x_41 = t;
    int y_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_55 = NULL;
        t = term_p_15;
        t = get_config_0_0(t);
        g_55 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_55, term_m_15);
        t = geq_0_0(t);
        t = e_55;
        t = n_103(t);
        LocalPopChoice(y_41);
      }
    else
      {
        t = x_41;
        t = e_55;
      }
  }
  return(t);
}
static ATerm x_9 (ATerm t)
{
  ATerm j_55 = NULL,k_55 = NULL,q_55 = NULL,r_55 = NULL;
  t = run_time_0_0(t);
  j_55 = t;
  t = term_y_11;
  t = whoami_0_0(t);
  k_55 = t;
  t = term_m_22;
  q_55 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_z_41), j_55), term_z_15), k_55);
  r_55 = t;
  t = SSL_printnl(q_55, r_55);
  t = (ATerm) ATmakeAppl(sym__2, term_m_22, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_z_41), j_55), term_z_15), k_55));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(x_9, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm s_55 = NULL;
  t = report_run_time_0_0(t);
  t = term_n_37;
  s_55 = t;
  t = SSL_exit(s_55);
  return(t);
}
static ATerm z_9 (ATerm t)
{
  ATerm b_56 = NULL,c_56 = NULL;
  c_56 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = c_56;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          b_56 = ATgetArgument(t, 0);
          {
            ATerm f_18 = NULL,n_6 = NULL;
            t = SSLgetAnnotations(c_56);
            f_18 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, b_56);
            n_6 = t;
            t = SSLsetAnnotations(n_6, f_18);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = c_56;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm b_105 (ATerm), ATerm t)
{
  ATerm a_42 = t;
  int b_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_c_42;
      t = get_config_0_0(t);
      LocalPopChoice(b_42);
    }
  else
    {
      t = a_42;
      t = fetch_1_0(z_9, t);
    }
  t = b_105(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm f_56 = NULL,g_56 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      f_56 = ATgetFirst((ATermList) t);
      g_56 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm v_56 = NULL,w_56 = NULL;
        static ATerm b_10 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(v_56)), not_null(w_56));
          return(t);
        }
        t = g_56;
        t = i_0(t);
        if(((v_56 != NULL) && (v_56 != t)))
          _fail(t);
        else
          v_56 = t;
        t = f_56;
        t = g_0(t);
        if(((w_56 != NULL) && (w_56 != t)))
          _fail(t);
        else
          w_56 = t;
        t = g_56;
        t = reverse_acc_2_0(g_0, b_10, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_y_11;
      t = i_0(t);
    }
  return(t);
}
static ATerm r_9 (ATerm t_52, ATerm u_52, ATerm t)
{
  t = SSL_table_get(t_52, u_52);
  return(t);
}
static ATerm e_10 (ATerm t)
{
  ATerm a_57 = NULL,g_57 = NULL,i_57 = NULL,q_6 = NULL;
  i_57 = t;
  if(match_cons(t, sym_Program_1))
    {
      g_57 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_57);
  a_57 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, g_57);
  q_6 = t;
  t = SSLsetAnnotations(q_6, a_57);
  return(t);
}
static ATerm f_10 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm g_10 (ATerm t)
{
  ATerm k_57 = NULL;
  k_57 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, k_57), term_e_42);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm y_56 = NULL,z_56 = NULL;
  ATerm g_42 = t;
  int h_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_h_41;
      t = get_config_0_0(t);
      LocalPopChoice(h_42);
    }
  else
    {
      t = g_42;
      t = fetch_1_0(e_10, t);
    }
  t = term_p_42;
  t = echo_0_0(t);
  t = term_k_38;
  y_56 = t;
  t = term_l_38;
  z_56 = t;
  t = term_q_42;
  t = r_9(y_56, z_56, t);
  t = reverse_acc_2_0(_id, f_10, t);
  t = map_1_0(g_10, t);
  return(t);
}
ATerm fetch_1_0 (ATerm i_89 (ATerm), ATerm t)
{
  static ATerm a_59 (ATerm t)
  {
    ATerm x_58 = NULL,y_58 = NULL,z_58 = NULL;
    x_58 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        y_58 = ATgetFirst((ATermList) t);
        z_58 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm r_42 = t;
      int s_42 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm q_18 = NULL,x_18 = NULL,s_6 = NULL;
          t = SSLgetAnnotations(x_58);
          q_18 = t;
          t = y_58;
          t = i_89(t);
          x_18 = t;
          t = (ATerm) ATinsert(CheckATermList(z_58), x_18);
          s_6 = t;
          t = SSLsetAnnotations(s_6, q_18);
          LocalPopChoice(s_42);
        }
      else
        {
          t = r_42;
          {
            ATerm g_19 = NULL,o_19 = NULL,t_6 = NULL;
            t = SSLgetAnnotations(x_58);
            g_19 = t;
            t = z_58;
            t = a_59(t);
            o_19 = t;
            t = (ATerm) ATinsert(CheckATermList(o_19), y_58);
            t_6 = t;
            t = SSLsetAnnotations(t_6, g_19);
          }
        }
    }
    return(t);
  }
  t = a_59(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm e_59 = NULL,f_59 = NULL,g_59 = NULL;
  e_59 = t;
  {
    ATerm t_42 = t;
    int u_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = e_59;
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
            t = e_59;
          }
        LocalPopChoice(u_42);
      }
    else
      {
        t = t_42;
        t = (ATerm) ATinsert(ATempty, e_59);
      }
  }
  f_59 = t;
  t = term_c_37;
  g_59 = t;
  t = SSL_printnl(g_59, f_59);
  t = e_59;
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
  ATerm k_59 = NULL,l_59 = NULL;
  t = term_b_43;
  k_59 = t;
  t = term_y_11;
  l_59 = t;
  t = term_c_43;
  t = u_9(k_59, l_59, t);
  return(t);
}
static ATerm k_10 (ATerm t)
{
  t = term_d_43;
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
  ATerm o_59 = NULL,p_59 = NULL,q_59 = NULL,t_59 = NULL;
  t = term_b_43;
  q_59 = t;
  t = term_y_11;
  t_59 = t;
  t = term_c_43;
  t = u_9(q_59, t_59, t);
  t = term_e_43;
  o_59 = t;
  t = term_y_11;
  p_59 = t;
  t = term_f_43;
  t = u_9(o_59, p_59, t);
  t = term_g_43;
  return(t);
}
static ATerm o_10 (ATerm t)
{
  t = term_h_43;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm i_43 = t;
  int j_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(h_10, j_10, k_10, t);
      LocalPopChoice(j_43);
    }
  else
    {
      t = i_43;
      t = Option_3_0(m_10, n_10, o_10, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm a_60 (ATerm), ATerm b_60 (ATerm), ATerm t)
{
  ATerm u_59 = NULL,c_60 = NULL,d_60 = NULL,e_60 = NULL,f_60 = NULL,g_60 = NULL,e_7 = NULL;
  g_60 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_60 = ATgetFirst((ATermList) t);
      d_60 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_60);
  u_59 = t;
  t = c_60;
  t = a_60(t);
  e_60 = t;
  t = d_60;
  t = b_60(t);
  f_60 = t;
  t = (ATerm) ATinsert(CheckATermList(f_60), e_60);
  e_7 = t;
  t = SSLsetAnnotations(e_7, u_59);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm s_107 (ATerm), ATerm t)
{
  ATerm l_60 = NULL,m_60 = NULL,n_60 = NULL,o_60 = NULL,q_60 = NULL,r_60 = NULL,u_7 = NULL;
  l_60 = t;
  {
    ATerm k_43 = t;
    int l_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_m_43;
        t = s_107(t);
        LocalPopChoice(l_43);
      }
    else
      {
        t = k_43;
      }
  }
  t = l_60;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_60 = ATgetFirst((ATermList) t);
      o_60 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_60);
  m_60 = t;
  t = term_h_41;
  r_60 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_41, n_60);
  t = u_9(r_60, n_60, t);
  t = o_60;
  {
    static ATerm b_61 (ATerm t)
    {
      ATerm n_43 = t;
      int o_43 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm p_43 = t;
          int q_43 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm u_60 = NULL;
              u_60 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = u_60;
              LocalPopChoice(q_43);
            }
          else
            {
              t = p_43;
              t = s_107(t);
              t = Cons_2_0(_id, b_61, t);
            }
          LocalPopChoice(o_43);
        }
      else
        {
          t = n_43;
          {
            ATerm x_60 = NULL,y_60 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                x_60 = ATgetFirst((ATermList) t);
                y_60 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(y_60), (ATerm) ATmakeAppl(sym_Undefined_1, x_60));
          }
        }
      return(t);
    }
    t = b_61(t);
  }
  q_60 = t;
  t = (ATerm) ATinsert(CheckATermList(q_60), (ATerm) ATmakeAppl(sym_Program_1, n_60));
  u_7 = t;
  t = SSLsetAnnotations(u_7, m_60);
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
  t = term_c_42;
  o_61 = t;
  t = term_y_11;
  p_61 = t;
  t = term_s_43;
  t = u_9(o_61, p_61, t);
  t = term_u_43;
  return(t);
}
static ATerm t_10 (ATerm t)
{
  t = term_v_43;
  return(t);
}
static ATerm u_10 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm r_107 (ATerm), ATerm t)
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
    static ATerm q_10 (ATerm t)
    {
      ATerm w_43 = t;
      int x_43 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = r_107(t);
          LocalPopChoice(x_43);
        }
      else
        {
          t = w_43;
          {
            ATerm y_43 = t;
            int a_44 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(r_10, s_10, t_10, t);
                LocalPopChoice(a_44);
              }
            else
              {
                t = y_43;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(q_10, t);
  }
  {
    ATerm b_44 = t;
    int c_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_61 = NULL;
        w_61 = t;
        {
          ATerm d_44 = t;
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
                    t = term_c_42;
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
              t = d_44;
              {
                ATerm h_20 = NULL;
                t = term_b_43;
                t = get_config_0_0(t);
                t = w_61;
                t = default_system_about_0_0(t);
                t = term_n_37;
                h_20 = t;
                t = SSL_exit(h_20);
              }
            }
        }
        LocalPopChoice(c_44);
      }
    else
      {
        t = b_44;
        {
          ATerm u_44 = t;
          int v_44 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm x_61 = NULL,y_61 = NULL,z_61 = NULL;
              static ATerm v_10 (ATerm t)
              {
                ATerm a_62 = NULL,b_62 = NULL,c_62 = NULL,m_8 = NULL;
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
                m_8 = t;
                t = SSLsetAnnotations(m_8, a_62);
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
ATerm option_wrap_4_0 (ATerm d_105 (ATerm), ATerm e_105 (ATerm), ATerm f_105 (ATerm), ATerm g_105 (ATerm), ATerm t)
{
  ATerm h_62 = NULL,i_62 = NULL,j_62 = NULL,k_62 = NULL;
  t = parse_options_1_0(d_105, t);
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
  t = f_105(t);
  {
    ATerm z_44 = t;
    int a_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(e_105, t);
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
              t = g_105(t);
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
                        t = Option_3_0(y_10, z_10, c_11, t);
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
  t = term_y_11;
  r_62 = t;
  t = term_w_45;
  t = u_9(q_62, r_62, t);
  t = term_b_46;
  return(t);
}
static ATerm c_11 (ATerm t)
{
  t = term_c_46;
  return(t);
}
static ATerm f_11 (ATerm t)
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
  t = e_8(a_63, b_63, t);
  x_62 = t;
  t = term_k_20;
  y_62 = t;
  t = x_62;
  if(match_cons(t, sym_Stream_1))
    {
      z_62 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_k_20, x_62);
  t = d_8(y_62, z_62, t);
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
  t = a_8(e_63, f_63, t);
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
      t = k_9(t_62, t);
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
            t = map_1_0(f_11, t);
            v_62 = t;
            t = xtc_new_file_0_0(t);
            u_62 = t;
            t = (ATerm) ATmakeAppl(sym__2, u_62, v_62);
            t = f_8(g_11, u_62, v_62, t);
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
              t = f_8(h_11, c_63, p_62, t);
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
