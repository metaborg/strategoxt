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
ATerm term_a_46;
ATerm term_y_45;
ATerm term_x_45;
ATerm term_w_45;
ATerm term_t_44;
ATerm term_s_44;
ATerm term_r_44;
ATerm term_a_44;
ATerm term_z_43;
ATerm term_y_43;
ATerm term_t_43;
ATerm term_j_43;
ATerm term_g_43;
ATerm term_f_43;
ATerm term_u_42;
ATerm term_t_42;
ATerm term_s_42;
ATerm term_q_42;
ATerm term_h_42;
ATerm term_g_42;
ATerm term_c_42;
ATerm term_a_42;
ATerm term_x_41;
ATerm term_n_41;
ATerm term_m_41;
ATerm term_x_40;
ATerm term_w_40;
ATerm term_o_40;
ATerm term_l_40;
ATerm term_k_40;
ATerm term_f_40;
ATerm term_e_40;
ATerm term_w_39;
ATerm term_n_39;
ATerm term_m_39;
ATerm term_i_39;
ATerm term_h_39;
ATerm term_o_38;
ATerm term_n_38;
ATerm term_m_38;
ATerm term_k_38;
ATerm term_z_37;
ATerm term_w_37;
ATerm term_v_37;
ATerm term_u_37;
ATerm term_s_37;
ATerm term_r_37;
ATerm term_m_37;
ATerm term_l_37;
ATerm term_k_37;
ATerm term_h_37;
ATerm term_g_37;
ATerm term_f_37;
ATerm term_c_37;
ATerm term_w_36;
ATerm term_g_34;
ATerm term_f_32;
ATerm term_c_32;
ATerm term_a_32;
ATerm term_y_31;
ATerm term_t_31;
ATerm term_s_31;
ATerm term_r_31;
ATerm term_b_31;
ATerm term_t_29;
ATerm term_m_29;
ATerm term_l_29;
ATerm term_s_28;
ATerm term_w_27;
ATerm term_v_27;
ATerm term_n_27;
ATerm term_l_27;
ATerm term_s_26;
ATerm term_o_26;
ATerm term_n_26;
ATerm term_h_26;
ATerm term_a_26;
ATerm term_y_25;
ATerm term_w_25;
ATerm term_v_25;
ATerm term_m_25;
ATerm term_g_25;
ATerm term_f_25;
ATerm term_d_25;
ATerm term_z_24;
ATerm term_w_24;
ATerm term_v_24;
ATerm term_q_24;
ATerm term_n_24;
ATerm term_m_24;
ATerm term_l_24;
ATerm term_k_24;
ATerm term_p_22;
ATerm term_o_22;
ATerm term_g_22;
ATerm term_f_22;
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
ATerm term_q_21;
ATerm term_p_21;
ATerm term_m_21;
ATerm term_l_21;
ATerm term_j_21;
ATerm term_i_21;
ATerm term_h_21;
ATerm term_f_21;
ATerm term_d_21;
ATerm term_c_21;
ATerm term_b_21;
ATerm term_a_21;
ATerm term_z_20;
ATerm term_y_20;
ATerm term_x_20;
ATerm term_w_20;
ATerm term_t_20;
ATerm term_s_20;
ATerm term_r_20;
ATerm term_q_20;
ATerm term_n_20;
ATerm term_l_20;
ATerm term_j_20;
ATerm term_i_20;
ATerm term_h_20;
ATerm term_g_20;
ATerm term_f_20;
ATerm term_e_20;
ATerm term_c_20;
ATerm term_b_20;
ATerm term_z_19;
ATerm term_y_19;
ATerm term_x_19;
ATerm term_w_19;
ATerm term_v_19;
ATerm term_u_19;
ATerm term_t_19;
ATerm term_s_19;
ATerm term_r_19;
ATerm term_q_19;
ATerm term_p_19;
ATerm term_o_19;
ATerm term_n_19;
ATerm term_m_19;
ATerm term_k_19;
ATerm term_i_19;
ATerm term_g_19;
ATerm term_f_19;
ATerm term_d_19;
ATerm term_c_19;
ATerm term_b_19;
ATerm term_z_18;
ATerm term_y_18;
ATerm term_x_18;
ATerm term_v_18;
ATerm term_u_18;
ATerm term_s_18;
ATerm term_r_18;
ATerm term_p_18;
ATerm term_o_18;
ATerm term_n_18;
ATerm term_m_18;
ATerm term_k_18;
ATerm term_j_18;
ATerm term_i_18;
ATerm term_h_18;
ATerm term_g_18;
ATerm term_e_18;
ATerm term_d_18;
ATerm term_c_18;
ATerm term_y_17;
ATerm term_w_17;
ATerm term_t_17;
ATerm term_s_17;
ATerm term_q_17;
ATerm term_o_17;
ATerm term_n_17;
ATerm term_m_17;
ATerm term_l_17;
ATerm term_j_17;
ATerm term_i_17;
ATerm term_h_17;
ATerm term_g_17;
ATerm term_f_17;
ATerm term_e_17;
ATerm term_d_17;
ATerm term_c_17;
ATerm term_b_17;
ATerm term_y_16;
ATerm term_x_16;
ATerm term_v_16;
ATerm term_t_16;
ATerm term_s_16;
ATerm term_r_16;
ATerm term_q_16;
ATerm term_p_16;
ATerm term_m_16;
ATerm term_l_16;
ATerm term_i_16;
ATerm term_b_16;
ATerm term_a_16;
ATerm term_z_15;
ATerm term_y_15;
ATerm term_u_15;
ATerm term_q_15;
ATerm term_n_15;
ATerm term_m_15;
ATerm term_l_15;
ATerm term_f_15;
ATerm term_u_14;
ATerm term_m_13;
ATerm term_l_13;
ATerm term_i_13;
ATerm term_f_13;
ATerm term_y_12;
ATerm term_u_12;
ATerm term_p_12;
ATerm term_h_12;
ATerm term_e_12;
ATerm term_t_11;
ATerm term_s_11;
ATerm term_q_11;
ATerm term_p_11;
ATerm term_o_11;
ATerm term_i_11;
ATerm term_f_11;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeAppl(ATmakeSymbol("XXXXXX", 0, ATtrue));
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/mkstemp", 0, ATtrue));
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeAppl(ATmakeSymbol("/StrategoXT", 0, ATtrue));
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file> (file, mode)", 0, ATtrue));
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--dep", 0, ATtrue));
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--nodep", 0, ATtrue));
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeAppl(ATmakeSymbol(".", 0, ATtrue));
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeAppl(ATmakeSymbol("dep", 0, ATtrue));
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeAppl(ATmakeSymbol(" \\\n	", 0, ATtrue));
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeAppl(ATmakeSymbol(" :", 0, ATtrue));
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_l_16));
  term_l_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_16, term_q_15, term_l_16);
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_16, term_q_16, term_r_16);
  ATprotect(&(term_t_16));
  term_t_16 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_16, term_v_16, term_x_16);
  ATprotect(&(term_b_17));
  term_b_17 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_c_17));
  term_c_17 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_17, term_c_17, term_d_17);
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_g_17));
  term_g_17 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_h_17));
  term_h_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_i_17));
  term_i_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_17, term_g_17, term_h_17);
  ATprotect(&(term_j_17));
  term_j_17 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_l_17));
  term_l_17 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_m_17));
  term_m_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_n_17));
  term_n_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_17, term_l_17, term_m_17);
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_q_17));
  term_q_17 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_s_17));
  term_s_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_t_17));
  term_t_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_17, term_q_17, term_s_17);
  ATprotect(&(term_w_17));
  term_w_17 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_y_17));
  term_y_17 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_d_18));
  term_d_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_17, term_y_17, term_c_18);
  ATprotect(&(term_e_18));
  term_e_18 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_g_18));
  term_g_18 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_h_18));
  term_h_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_i_18));
  term_i_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_18, term_g_18, term_h_18);
  ATprotect(&(term_j_18));
  term_j_18 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_k_18));
  term_k_18 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_m_18));
  term_m_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_n_18));
  term_n_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_18, term_k_18, term_m_18);
  ATprotect(&(term_o_18));
  term_o_18 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_p_18));
  term_p_18 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_r_18));
  term_r_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_s_18));
  term_s_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_18, term_p_18, term_r_18);
  ATprotect(&(term_u_18));
  term_u_18 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_v_18));
  term_v_18 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_x_18));
  term_x_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_y_18));
  term_y_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_18, term_v_18, term_x_18);
  ATprotect(&(term_z_18));
  term_z_18 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_b_19));
  term_b_19 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_c_19));
  term_c_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_d_19));
  term_d_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_18, term_b_19, term_c_19);
  ATprotect(&(term_f_19));
  term_f_19 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_i_19));
  term_i_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_k_19));
  term_k_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_19, term_g_19, term_i_19);
  ATprotect(&(term_m_19));
  term_m_19 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_n_19));
  term_n_19 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_o_19));
  term_o_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_p_19));
  term_p_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_19, term_n_19, term_o_19);
  ATprotect(&(term_q_19));
  term_q_19 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_r_19));
  term_r_19 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_s_19));
  term_s_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_t_19));
  term_t_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_19, term_r_19, term_s_19);
  ATprotect(&(term_u_19));
  term_u_19 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_v_19));
  term_v_19 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_w_19));
  term_w_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_x_19));
  term_x_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_19, term_v_19, term_w_19);
  ATprotect(&(term_y_19));
  term_y_19 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_z_19));
  term_z_19 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_b_20));
  term_b_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_c_20));
  term_c_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_19, term_z_19, term_b_20);
  ATprotect(&(term_e_20));
  term_e_20 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_f_20));
  term_f_20 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_g_20));
  term_g_20 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_h_20));
  term_h_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_20, term_f_20, term_g_20);
  ATprotect(&(term_i_20));
  term_i_20 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_j_20));
  term_j_20 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_l_20));
  term_l_20 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_n_20));
  term_n_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_20, term_j_20, term_l_20);
  ATprotect(&(term_q_20));
  term_q_20 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_r_20));
  term_r_20 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_s_20));
  term_s_20 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_t_20));
  term_t_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_20, term_r_20, term_s_20);
  ATprotect(&(term_w_20));
  term_w_20 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_x_20));
  term_x_20 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_y_20));
  term_y_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_z_20));
  term_z_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_20, term_x_20, term_y_20);
  ATprotect(&(term_a_21));
  term_a_21 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_b_21));
  term_b_21 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_c_21));
  term_c_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_d_21));
  term_d_21 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_21, term_b_21, term_c_21);
  ATprotect(&(term_f_21));
  term_f_21 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_h_21));
  term_h_21 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_i_21));
  term_i_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_j_21));
  term_j_21 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_21, term_h_21, term_i_21);
  ATprotect(&(term_l_21));
  term_l_21 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_m_21));
  term_m_21 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_p_21));
  term_p_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_q_21));
  term_q_21 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_21, term_m_21, term_p_21);
  ATprotect(&(term_r_21));
  term_r_21 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_t_21));
  term_t_21 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_u_21));
  term_u_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_v_21));
  term_v_21 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_21, term_t_21, term_u_21);
  ATprotect(&(term_w_21));
  term_w_21 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_x_21));
  term_x_21 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_y_21));
  term_y_21 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_z_21));
  term_z_21 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_21, term_x_21, term_y_21);
  ATprotect(&(term_a_22));
  term_a_22 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_b_22));
  term_b_22 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_f_22));
  term_f_22 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_g_22));
  term_g_22 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_22, term_b_22, term_f_22);
  ATprotect(&(term_o_22));
  term_o_22 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_p_22));
  term_p_22 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_k_24));
  term_k_24 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_l_24));
  term_l_24 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_m_24));
  term_m_24 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_n_24));
  term_n_24 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_q_24));
  term_q_24 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_v_24));
  term_v_24 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_w_24));
  term_w_24 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_z_24));
  term_z_24 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_d_25));
  term_d_25 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_f_25));
  term_f_25 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_g_25));
  term_g_25 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_m_25));
  term_m_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_v_25));
  term_v_25 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_w_25));
  term_w_25 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_y_25));
  term_y_25 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_a_26));
  term_a_26 = (ATerm) ATmakeAppl(sym__2, term_f_25, term_y_25);
  ATprotect(&(term_h_26));
  term_h_26 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_n_26));
  term_n_26 = (ATerm) ATmakeAppl(sym__2, term_f_25, term_g_25);
  ATprotect(&(term_o_26));
  term_o_26 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_s_26));
  term_s_26 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_l_27));
  term_l_27 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_n_27));
  term_n_27 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_v_27));
  term_v_27 = (ATerm) ATmakeInt(-1);
  ATprotect(&(term_w_27));
  term_w_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_s_28));
  term_s_28 = (ATerm) ATmakeAppl(ATmakeSymbol("parse error in ", 0, ATtrue));
  ATprotect(&(term_l_29));
  term_l_29 = (ATerm) ATmakeAppl(ATmakeSymbol("parse-stratego", 0, ATtrue));
  ATprotect(&(term_m_29));
  term_m_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--asfix", 0, ATtrue));
  ATprotect(&(term_t_29));
  term_t_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue));
  ATprotect(&(term_b_31));
  term_b_31 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
  ATprotect(&(term_r_31));
  term_r_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--slack", 0, ATtrue));
  ATprotect(&(term_s_31));
  term_s_31 = (ATerm) ATmakeAppl(ATmakeSymbol("*** module ", 0, ATtrue));
  ATprotect(&(term_t_31));
  term_t_31 = (ATerm) ATmakeAppl(ATmakeSymbol(" not found", 0, ATtrue));
  ATprotect(&(term_y_31));
  term_y_31 = (ATerm) ATmakeAppl(ATmakeSymbol(" reading ", 0, ATtrue));
  ATprotect(&(term_a_32));
  term_a_32 = (ATerm) ATmakeAppl(ATmakeSymbol("rtree", 0, ATtrue));
  ATprotect(&(term_c_32));
  term_c_32 = (ATerm) ATmakeAppl(ATmakeSymbol("str", 0, ATtrue));
  ATprotect(&(term_f_32));
  term_f_32 = (ATerm) ATmakeAppl(ATmakeSymbol("cr", 0, ATtrue));
  ATprotect(&(term_g_34));
  term_g_34 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_w_36));
  term_w_36 = (ATerm) ATmakeAppl(sym__2, term_q_11, term_i_11);
  ATprotect(&(term_c_37));
  term_c_37 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_f_37));
  term_f_37 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_g_37));
  term_g_37 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_h_37));
  term_h_37 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_k_37));
  term_k_37 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_l_37));
  term_l_37 = (ATerm) ATmakeAppl(sym__2, term_u_15, term_k_37);
  ATprotect(&(term_m_37));
  term_m_37 = (ATerm) ATmakeAppl(sym_Verbose_1, term_k_37);
  ATprotect(&(term_r_37));
  term_r_37 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_s_37));
  term_s_37 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_u_37));
  term_u_37 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_v_37));
  term_v_37 = (ATerm) ATmakeAppl(sym__2, term_u_37, term_t_11);
  ATprotect(&(term_w_37));
  term_w_37 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_z_37));
  term_z_37 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_k_38));
  term_k_38 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_m_38));
  term_m_38 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_n_38));
  term_n_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_o_38));
  term_o_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_h_39));
  term_h_39 = (ATerm) ATmakeAppl(ATmakeSymbol("-I d | --Include d   Include modules from directory d", 0, ATtrue));
  ATprotect(&(term_i_39));
  term_i_39 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_m_39));
  term_m_39 = (ATerm) ATmakeAppl(sym__2, term_y_12, term_i_39);
  ATprotect(&(term_n_39));
  term_n_39 = (ATerm) ATmakeAppl(ATmakeSymbol("--nodep              Don't create dependency file", 0, ATtrue));
  ATprotect(&(term_w_39));
  term_w_39 = (ATerm) ATmakeAppl(ATmakeSymbol("--dep f | -d f       Write dependency to file f", 0, ATtrue));
  ATprotect(&(term_e_40));
  term_e_40 = (ATerm) ATmakeAppl(ATmakeSymbol("--imports", 0, ATtrue));
  ATprotect(&(term_f_40));
  term_f_40 = (ATerm) ATmakeAppl(sym__2, term_e_40, term_t_11);
  ATprotect(&(term_k_40));
  term_k_40 = (ATerm) ATmakeAppl(ATmakeSymbol("--imports            Produce a list of imported modules only", 0, ATtrue));
  ATprotect(&(term_l_40));
  term_l_40 = (ATerm) ATmakeAppl(sym__2, term_r_31, term_t_11);
  ATprotect(&(term_o_40));
  term_o_40 = (ATerm) ATmakeAppl(ATmakeSymbol("--slack              Continue when module is not found", 0, ATtrue));
  ATprotect(&(term_w_40));
  term_w_40 = (ATerm) ATmakeAppl(sym__2, term_m_29, term_i_39);
  ATprotect(&(term_x_40));
  term_x_40 = (ATerm) ATmakeAppl(ATmakeSymbol("--asfix              Do not implode the concrete syntax parts", 0, ATtrue));
  ATprotect(&(term_m_41));
  term_m_41 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_n_41));
  term_n_41 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_x_41));
  term_x_41 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_a_42));
  term_a_42 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_c_42));
  term_c_42 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_g_42));
  term_g_42 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_h_42));
  term_h_42 = (ATerm) ATmakeAppl(sym__2, term_k_38, term_m_38);
  ATprotect(&(term_q_42));
  term_q_42 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_s_42));
  term_s_42 = (ATerm) ATmakeAppl(sym__2, term_q_42, term_t_11);
  ATprotect(&(term_t_42));
  term_t_42 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_u_42));
  term_u_42 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_f_43));
  term_f_43 = (ATerm) ATmakeAppl(sym__2, term_u_42, term_t_11);
  ATprotect(&(term_g_43));
  term_g_43 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_j_43));
  term_j_43 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_t_43));
  term_t_43 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_y_43));
  term_y_43 = (ATerm) ATmakeAppl(sym__2, term_a_42, term_t_11);
  ATprotect(&(term_z_43));
  term_z_43 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_a_44));
  term_a_44 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_r_44));
  term_r_44 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_s_44));
  term_s_44 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_t_44));
  term_t_44 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_w_45));
  term_w_45 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_x_45));
  term_x_45 = (ATerm) ATmakeAppl(sym__2, term_w_45, term_t_11);
  ATprotect(&(term_y_45));
  term_y_45 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_a_46));
  term_a_46 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
static ATerm b_8 (ATerm c_23, ATerm d_23, ATerm t);
static ATerm g_8 (ATerm m_90 (ATerm), ATerm d_169, ATerm m_23, ATerm t);
static ATerm v_8 (ATerm m_103 (ATerm), ATerm o_42, ATerm m_42, ATerm t);
ATerm mkstemp_0_0 (ATerm t);
ATerm P__tmpdir_0_0 (ATerm t);
static ATerm a_0 (ATerm t);
ATerm xtc_new_file_0_0 (ATerm t);
static ATerm c_8 (ATerm q_23, ATerm r_23, ATerm t);
static ATerm e_4 (ATerm n_3, ATerm t);
static ATerm f_4 (ATerm u_3, ATerm v_3, ATerm w_3, ATerm t);
static ATerm b_0 (ATerm t);
ATerm open_file_0_0 (ATerm t);
ATerm create_dep_file_0_0 (ATerm t);
static ATerm e_8 (ATerm e_38, ATerm f_38, ATerm t);
static ATerm f_8 (ATerm g_23, ATerm h_23, ATerm t);
ATerm basename_1_0 (ATerm b_101 (ATerm), ATerm t);
ATerm at_suffix_rev_1_0 (ATerm u_91 (ATerm), ATerm t);
ATerm get_filename_0_0 (ATerm t);
ATerm map_1_0 (ATerm v_90 (ATerm), ATerm t);
static ATerm j_0 (ATerm t);
static ATerm u_0 (ATerm t);
ATerm eval_config_0_0 (ATerm t);
ATerm get_config_0_0 (ATerm t);
static ATerm v_0 (ATerm t);
static ATerm y_0 (ATerm t);
ATerm flatten_stratego_0_0 (ATerm t);
ATerm genzip_4_0 (ATerm z_92 (ATerm), ATerm a_93 (ATerm), ATerm b_93 (ATerm), ATerm c_93 (ATerm), ATerm t);
static ATerm d_1 (ATerm t);
static ATerm k_8 (ATerm k_135, ATerm t);
ATerm read_from_0_0 (ATerm t);
ATerm pass_keep_0_0 (ATerm t);
static ATerm l_8 (ATerm g_41, ATerm h_41, ATerm t);
ATerm pass_verbose_0_0 (ATerm t);
static ATerm h_1 (ATerm t);
ATerm xtc_transform_term_2_0 (ATerm g_114 (ATerm), ATerm h_114 (ATerm), ATerm t);
static ATerm m_8 (ATerm j_48, ATerm k_48, ATerm t);
ATerm signal_to_descr_0_0 (ATerm t);
ATerm signal_from_number_0_0 (ATerm t);
ATerm warn_ifsignaled_0_0 (ATerm t);
ATerm fork_0_0 (ATerm t);
ATerm fork_and_wait_1_0 (ATerm e_106 (ATerm), ATerm t);
ATerm table_getlist_0_0 (ATerm t);
ATerm if_verbose5_1_0 (ATerm x_105 (ATerm), ATerm t);
ATerm if_verbose4_1_0 (ATerm w_105 (ATerm), ATerm t);
ATerm if_verbose6_1_0 (ATerm y_105 (ATerm), ATerm t);
static ATerm p_8 (ATerm a_95 (ATerm), ATerm d_29, ATerm c_29, ATerm t);
static ATerm x_1 (ATerm t);
static ATerm q_8 (ATerm e_53, ATerm f_53, ATerm g_53, ATerm t);
static ATerm r_8 (ATerm b_110 (ATerm), ATerm o_53, ATerm n_53, ATerm t);
static ATerm a_23 (ATerm t_22, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm s_8 (ATerm i_23, ATerm t);
static ATerm w_8 (ATerm x_36, ATerm y_36, ATerm t);
static ATerm t_8 (ATerm g_38, ATerm h_38, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm d_26 (ATerm e_24, ATerm t);
static ATerm e_26 (ATerm r_24, ATerm x_24, ATerm y_24, ATerm t);
static ATerm g_26 (ATerm n_25, ATerm o_25, ATerm p_25, ATerm t);
static ATerm u_8 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
static ATerm z_1 (ATerm t);
static ATerm a_2 (ATerm t);
ATerm read_repository_file_0_0 (ATerm t);
static ATerm c_2 (ATerm t);
static ATerm d_2 (ATerm t);
static ATerm e_2 (ATerm t);
static ATerm h_2 (ATerm t);
static ATerm i_2 (ATerm t);
static ATerm k_2 (ATerm t);
static ATerm l_2 (ATerm t);
static ATerm m_2 (ATerm t);
ATerm xtc_read_0_0 (ATerm t);
ATerm repeat_2_0 (ATerm j_83 (ATerm), ATerm k_83 (ATerm), ATerm t);
ATerm xtc_location_0_0 (ATerm t);
static ATerm n_2 (ATerm t);
static ATerm o_2 (ATerm t);
static ATerm p_2 (ATerm t);
static ATerm q_2 (ATerm t);
static ATerm r_2 (ATerm t);
ATerm xtc_load_0_0 (ATerm t);
static ATerm t_2 (ATerm t);
static ATerm v_2 (ATerm t);
static ATerm k_30 (ATerm j_29, ATerm t);
static ATerm x_2 (ATerm t);
static ATerm z_2 (ATerm t);
static ATerm a_3 (ATerm t);
static ATerm e_3 (ATerm t);
ATerm xtc_find_0_0 (ATerm t);
ATerm xtc_command_1_0 (ATerm h_115 (ATerm), ATerm t);
ATerm xtc_transform_file_2_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t);
static ATerm g_33 (ATerm d_31, ATerm e_31, ATerm f_31, ATerm t);
static ATerm h_33 (ATerm v_32, ATerm w_32, ATerm t);
static ATerm g_3 (ATerm t);
static ATerm h_3 (ATerm t);
static ATerm i_3 (ATerm t);
static ATerm j_3 (ATerm t);
ATerm parse_module_0_0 (ATerm t);
ATerm debug_1_0 (ATerm k_90 (ATerm), ATerm t);
ATerm if_verbose3_1_0 (ATerm v_105 (ATerm), ATerm t);
ATerm fetch_elem_1_0 (ATerm h_91 (ATerm), ATerm t);
static ATerm x_8 (ATerm x_37, ATerm y_37, ATerm t);
ATerm is_relpath_0_0 (ATerm t);
static ATerm y_8 (ATerm p_82 (ATerm), ATerm o_21, ATerm n_21, ATerm t);
static ATerm t_3 (ATerm t);
ATerm get_module_1_0 (ATerm o_82 (ATerm), ATerm t);
static ATerm a_9 (ATerm d_95 (ATerm), ATerm e_95 (ATerm), ATerm h_29, ATerm g_29, ATerm t);
static ATerm b_9 (ATerm v_94 (ATerm), ATerm b_29, ATerm a_29, ATerm t);
static ATerm z_3 (ATerm t);
static ATerm c_4 (ATerm t);
static ATerm g_4 (ATerm t);
static ATerm g_9 (ATerm z_601, ATerm e_602, ATerm t_56, ATerm t);
static ATerm k_4 (ATerm t);
static ATerm u_4 (ATerm t);
static ATerm v_4 (ATerm t);
static ATerm p_39 (ATerm q_37, ATerm t_37, ATerm b_38, ATerm t);
static ATerm x_4 (ATerm t);
ATerm diff_0_0 (ATerm t);
static ATerm i_9 (ATerm d_116 (ATerm), ATerm e_116 (ATerm), ATerm f_116 (ATerm), ATerm f_60, ATerm c_60, ATerm j_60, ATerm g_60, ATerm d_60, ATerm e_60, ATerm t);
ATerm GnNext_3_0 (ATerm d_116 (ATerm), ATerm e_116 (ATerm), ATerm f_116 (ATerm), ATerm t);
ATerm while_not_2_0 (ATerm a_84 (ATerm), ATerm b_84 (ATerm), ATerm t);
ATerm for_3_0 (ATerm d_84 (ATerm), ATerm e_84 (ATerm), ATerm f_84 (ATerm), ATerm t);
static ATerm y_4 (ATerm t);
static ATerm z_4 (ATerm t);
ATerm graph_nodes_roots_3_0 (ATerm a_116 (ATerm), ATerm b_116 (ATerm), ATerm c_116 (ATerm), ATerm t);
ATerm filter_1_0 (ATerm g_98 (ATerm), ATerm t);
static ATerm g_5 (ATerm t);
static ATerm i_5 (ATerm t);
static ATerm j_5 (ATerm t);
static ATerm n_5 (ATerm t);
static ATerm p_5 (ATerm t);
static ATerm r_5 (ATerm t);
static ATerm l_9 (ATerm e_21, ATerm t);
static ATerm n_9 (ATerm e_44, ATerm f_44, ATerm t);
ATerm copy_to_1_0 (ATerm o_0 (ATerm), ATerm t);
static ATerm o_9 (ATerm m_52, ATerm n_52, ATerm t);
ATerm end_scope_1_0 (ATerm j_103 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm f_83 (ATerm), ATerm g_83 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm i_103 (ATerm), ATerm t);
static ATerm u_5 (ATerm t);
static ATerm x_5 (ATerm t);
static ATerm z_5 (ATerm t);
ATerm xtc_temp_files_1_0 (ATerm t_114 (ATerm), ATerm t);
static ATerm d_6 (ATerm t);
ATerm xtc_io_1_0 (ATerm u_114 (ATerm), ATerm t);
ATerm default_usage_0_0 (ATerm t);
static ATerm f_6 (ATerm t);
static ATerm l_6 (ATerm t);
static ATerm m_6 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm n_6 (ATerm t);
static ATerm p_6 (ATerm t);
static ATerm q_6 (ATerm t);
static ATerm s_6 (ATerm t);
static ATerm t_6 (ATerm t);
static ATerm u_6 (ATerm t);
static ATerm x_6 (ATerm t);
static ATerm y_6 (ATerm t);
static ATerm z_6 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm v_9 (ATerm h_61, ATerm i_61, ATerm t);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t);
static ATerm a_7 (ATerm t);
static ATerm b_7 (ATerm t);
static ATerm d_7 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm f_7 (ATerm t);
static ATerm g_7 (ATerm t);
static ATerm h_7 (ATerm t);
ATerm input_option_0_0 (ATerm t);
static ATerm t_9 (ATerm h_52, ATerm i_52, ATerm g_52, ATerm t);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t);
ATerm at_end_1_0 (ATerm m_91 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm j_52 (ATerm w_51, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm m_9 (ATerm n_61, ATerm m_61, ATerm t);
static ATerm p_7 (ATerm t);
static ATerm q_7 (ATerm t);
static ATerm s_7 (ATerm t);
static ATerm t_7 (ATerm t);
static ATerm w_7 (ATerm t);
static ATerm z_7 (ATerm t);
static ATerm a_8 (ATerm t);
static ATerm d_8 (ATerm t);
static ATerm h_8 (ATerm t);
static ATerm i_8 (ATerm t);
static ATerm j_8 (ATerm t);
static ATerm n_8 (ATerm t);
static ATerm o_8 (ATerm t);
static ATerm z_8 (ATerm t);
static ATerm c_9 (ATerm t);
static ATerm d_9 (ATerm t);
static ATerm e_9 (ATerm t);
static ATerm f_9 (ATerm t);
ATerm pack_stratego_options_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm p_9 (ATerm a_41, ATerm b_41, ATerm t);
ATerm foldr_2_0 (ATerm c_97 (ATerm), ATerm d_97 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm j_9 (ATerm t);
static ATerm q_9 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm t_105 (ATerm), ATerm t);
static ATerm r_9 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm u_9 (ATerm t);
ATerm need_help_1_0 (ATerm h_107 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
static ATerm s_9 (ATerm y_53, ATerm z_53, ATerm t);
static ATerm x_9 (ATerm t);
static ATerm y_9 (ATerm t);
static ATerm z_9 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm f_91 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm a_10 (ATerm t);
static ATerm c_10 (ATerm t);
static ATerm d_10 (ATerm t);
static ATerm f_10 (ATerm t);
static ATerm j_10 (ATerm t);
static ATerm l_10 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm v_61 (ATerm), ATerm w_61 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm y_109 (ATerm), ATerm t);
static ATerm o_10 (ATerm t);
static ATerm p_10 (ATerm t);
static ATerm r_10 (ATerm t);
static ATerm s_10 (ATerm t);
ATerm parse_options_1_0 (ATerm x_109 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm j_107 (ATerm), ATerm k_107 (ATerm), ATerm l_107 (ATerm), ATerm m_107 (ATerm), ATerm t);
static ATerm v_10 (ATerm t);
static ATerm x_10 (ATerm t);
static ATerm y_10 (ATerm t);
static ATerm a_11 (ATerm t);
static ATerm c_11 (ATerm t);
static ATerm d_11 (ATerm t);
static ATerm e_11 (ATerm t);
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
  ATerm m_0 = NULL;
  t = SSL_write_term_to_stream_baf(c_23, d_23);
  m_0 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, m_0);
  return(t);
}
static ATerm g_8 (ATerm m_90 (ATerm), ATerm d_169, ATerm m_23, ATerm t)
{
  ATerm q_0 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, d_169, term_f_11);
  t = u_8(t);
  q_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_0, m_23);
  t = m_90(t);
  t = fclose_0_0(t);
  t = m_23;
  return(t);
}
static ATerm v_8 (ATerm m_103 (ATerm), ATerm o_42, ATerm m_42, ATerm t)
{
  ATerm s_0 = NULL,t_0 = NULL,w_0 = NULL,z_0 = NULL,a_1 = NULL,b_1 = NULL;
  z_0 = t;
  t = m_103(t);
  s_0 = t;
  t = (ATerm) ATmakeAppl(sym__3, s_0, o_42, m_42);
  t = t_9(s_0, o_42, m_42, t);
  {
    ATerm g_11 = t;
    int h_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_1 = NULL;
        t = term_i_11;
        c_1 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_0, term_i_11);
        t = s_9(s_0, c_1, t);
        LocalPopChoice(h_11);
      }
    else
      {
        t = g_11;
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
  t = term_i_11;
  a_1 = t;
  t = (ATerm) ATinsert(CheckATermList(w_0), (ATerm) ATinsert(CheckATermList(t_0), o_42));
  b_1 = t;
  t = SSL_table_put(s_0, a_1, b_1);
  t = z_0;
  return(t);
}
ATerm mkstemp_0_0 (ATerm t)
{
  ATerm e_1 = NULL;
  ATerm m_11 = t;
  int n_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_1 = NULL,f_0 = NULL;
      j_1 = t;
      t = term_o_11;
      f_0 = t;
      t = (ATerm) ATmakeAppl(sym__2, j_1, term_o_11);
      t = w_8(j_1, f_0, t);
      e_1 = t;
      t = SSL_mkstemp(e_1);
      LocalPopChoice(n_11);
    }
  else
    {
      t = m_11;
      {
        ATerm k_1 = NULL;
        t = term_p_11;
        k_1 = t;
        t = SSL_perror(k_1);
        _fail(t);
      }
    }
  return(t);
}
ATerm P__tmpdir_0_0 (ATerm t)
{
  t = SSL_P_tmpdir();
  return(t);
}
static ATerm a_0 (ATerm t)
{
  t = term_q_11;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm m_1 = NULL,n_1 = NULL,o_1 = NULL,p_1 = NULL,q_1 = NULL;
  t = P__tmpdir_0_0(t);
  p_1 = t;
  t = term_s_11;
  q_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_1, term_s_11);
  t = w_8(p_1, q_1, t);
  t = mkstemp_0_0(t);
  if(match_cons(t, sym__2))
    {
      n_1 = ATgetArgument(t, 0);
      m_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = term_t_11;
  o_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_1, term_t_11);
  t = v_8(a_0, n_1, o_1, t);
  t = SSL_close(m_1);
  t = n_1;
  return(t);
}
static ATerm c_8 (ATerm q_23, ATerm r_23, ATerm t)
{
  ATerm b_3 = NULL,c_3 = NULL;
  t = r_23;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = r_23;
    }
  else
    {
      ATerm x_0 = NULL,g_1 = NULL,f_1 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          b_3 = ATgetFirst((ATermList) t);
          c_3 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(r_23);
      x_0 = t;
      t = c_3;
      {
        static ATerm u_1 (ATerm t)
        {
          ATerm u_11 = t;
          int y_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm r_1 = NULL;
              r_1 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = r_1;
              LocalPopChoice(y_11);
            }
          else
            {
              t = u_11;
              {
                ATerm s_1 = NULL;
                t = Cons_2_0(_id, u_1, t);
                s_1 = t;
                t = (ATerm) ATinsert(CheckATermList(s_1), q_23);
              }
            }
          return(t);
        }
        t = u_1(t);
      }
      g_1 = t;
      t = (ATerm) ATinsert(CheckATermList(g_1), b_3);
      f_1 = t;
      t = SSLsetAnnotations(f_1, x_0);
    }
  return(t);
}
static ATerm e_4 (ATerm n_3, ATerm t)
{
  t = n_3;
  {
    ATerm z_11 = t;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm a_12 = ATgetArgument(t, 0);
            ATerm d_12 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = z_11;
      }
  }
  t = term_e_12;
  t = debug_1_0(b_0, t);
  t = (ATerm) ATmakeAppl(sym__2, n_3, term_f_11);
  t = open_file_0_0(t);
  return(t);
}
static ATerm f_4 (ATerm u_3, ATerm v_3, ATerm w_3, ATerm t)
{
  t = SSL_open_file(u_3, v_3);
  return(t);
}
static ATerm b_0 (ATerm t)
{
  t = term_h_12;
  return(t);
}
ATerm open_file_0_0 (ATerm t)
{
  ATerm a_4 = NULL,b_4 = NULL,d_4 = NULL;
  a_4 = t;
  if(match_cons(t, sym__2))
    {
      b_4 = ATgetArgument(t, 0);
      d_4 = ATgetArgument(t, 1);
      {
        ATerm m_12 = t;
        int n_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = e_4(a_4, t);
            LocalPopChoice(n_12);
          }
        else
          {
            t = m_12;
            t = f_4(b_4, d_4, a_4, t);
          }
      }
    }
  else
    {
      t = e_4(a_4, t);
    }
  return(t);
}
ATerm create_dep_file_0_0 (ATerm t)
{
  ATerm h_4 = NULL,i_4 = NULL,j_4 = NULL,l_4 = NULL,m_4 = NULL,n_4 = NULL,o_4 = NULL,p_4 = NULL,r_4 = NULL;
  i_4 = t;
  t = term_p_12;
  t = get_config_0_0(t);
  {
    ATerm q_12 = t;
    int t_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_u_12;
        t = get_config_0_0(t);
        LocalPopChoice(t_12);
      }
    else
      {
        t = q_12;
        {
          ATerm v_12 = t;
          if((PushChoice() == 0))
            {
              t = term_y_12;
              t = get_config_0_0(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = v_12;
            }
        }
      }
  }
  h_4 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_i_13), term_f_13), h_4);
  r_4 = t;
  t = SSL_concat_strings(r_4);
  p_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_4, term_f_11);
  t = open_file_0_0(t);
  j_4 = t;
  t = term_l_13;
  n_4 = t;
  t = (ATerm) ATinsert(CheckATermList(i_4), term_m_13);
  o_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_13, (ATerm) ATinsert(CheckATermList(i_4), term_m_13));
  t = c_8(n_4, o_4, t);
  l_4 = t;
  t = (ATerm) ATinsert(CheckATermList(l_4), h_4);
  m_4 = t;
  t = SSL_printnl(j_4, m_4);
  t = SSL_close_file(j_4);
  t = (ATerm) ATmakeAppl(sym_FILE_1, p_4);
  return(t);
}
static ATerm e_8 (ATerm e_38, ATerm f_38, ATerm t)
{
  ATerm s_4 = NULL;
  t = SSL_fputc(e_38, f_38);
  s_4 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, s_4);
  return(t);
}
static ATerm f_8 (ATerm g_23, ATerm h_23, ATerm t)
{
  ATerm t_4 = NULL;
  t = SSL_write_term_to_stream_text(g_23, h_23);
  t_4 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, t_4);
  return(t);
}
ATerm basename_1_0 (ATerm b_101 (ATerm), ATerm t)
{
  ATerm a_5 = NULL,b_5 = NULL;
  b_5 = t;
  t = SSL_explode_string(b_5);
  {
    ATerm t_13 = t;
    int v_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm o_6 (ATerm t)
        {
          ATerm i_6 = NULL,j_6 = NULL,k_6 = NULL;
          i_6 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              j_6 = ATgetFirst((ATermList) t);
              k_6 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          {
            ATerm w_13 = t;
            int z_13 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm g_2 = NULL,j_2 = NULL,i_1 = NULL;
                t = SSLgetAnnotations(i_6);
                g_2 = t;
                t = k_6;
                t = o_6(t);
                j_2 = t;
                t = (ATerm) ATinsert(CheckATermList(j_2), j_6);
                i_1 = t;
                t = SSLsetAnnotations(i_1, g_2);
                LocalPopChoice(z_13);
              }
            else
              {
                t = w_13;
                {
                  ATerm a_14 = t;
                  int b_14 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm s_2 = NULL,l_1 = NULL;
                      t = SSLgetAnnotations(i_6);
                      s_2 = t;
                      t = j_6;
                      if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 47)))
                        _fail(t);
                      t = (ATerm) ATinsert(CheckATermList(k_6), j_6);
                      l_1 = t;
                      t = SSLsetAnnotations(l_1, s_2);
                      LocalPopChoice(b_14);
                    }
                  else
                    {
                      t = a_14;
                      {
                        ATerm l_3 = NULL,p_3 = NULL,b_2 = NULL;
                        t = SSLgetAnnotations(i_6);
                        l_3 = t;
                        t = j_6;
                        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 46)))
                          _fail(t);
                        t = k_6;
                        t = b_101(t);
                        p_3 = t;
                        t = (ATerm) ATinsert(CheckATermList(p_3), j_6);
                        b_2 = t;
                        t = SSLsetAnnotations(b_2, l_3);
                        t = (ATerm) ATempty;
                      }
                    }
                }
              }
          }
          return(t);
        }
        t = o_6(t);
        LocalPopChoice(v_13);
      }
    else
      {
        t = t_13;
      }
  }
  a_5 = t;
  t = SSL_implode_string(a_5);
  return(t);
}
ATerm at_suffix_rev_1_0 (ATerm u_91 (ATerm), ATerm t)
{
  static ATerm m_7 (ATerm t)
  {
    ATerm e_14 = t;
    int h_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_7 = NULL,j_7 = NULL,k_7 = NULL,q_4 = NULL,w_4 = NULL,f_2 = NULL;
        i_7 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            j_7 = ATgetFirst((ATermList) t);
            k_7 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(i_7);
        q_4 = t;
        t = k_7;
        t = m_7(t);
        w_4 = t;
        t = (ATerm) ATinsert(CheckATermList(w_4), j_7);
        f_2 = t;
        t = SSLsetAnnotations(f_2, q_4);
        LocalPopChoice(h_14);
      }
    else
      {
        t = e_14;
        t = u_91(t);
      }
    return(t);
  }
  t = m_7(t);
  return(t);
}
ATerm get_filename_0_0 (ATerm t)
{
  ATerm r_7 = NULL,u_7 = NULL,v_7 = NULL;
  v_7 = t;
  t = SSL_explode_string(v_7);
  {
    ATerm i_14 = t;
    int l_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm h_0 (ATerm t)
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm r_14 = ATgetFirst((ATermList) t);
              if(((ATgetType(r_14) != AT_INT) || (ATgetInt((ATermInt) r_14) != 47)))
                _fail(t);
              if(((r_7 != NULL) && (r_7 != (ATerm) ATgetNext((ATermList) t))))
                _fail((ATerm) ATgetNext((ATermList) t));
              else
                r_7 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          return(t);
        }
        t = at_suffix_rev_1_0(h_0, t);
        t = not_null(r_7);
        LocalPopChoice(l_14);
      }
    else
      {
        t = i_14;
      }
  }
  u_7 = t;
  t = SSL_implode_string(u_7);
  return(t);
}
ATerm map_1_0 (ATerm v_90 (ATerm), ATerm t)
{
  static ATerm m_10 (ATerm t)
  {
    ATerm e_10 = NULL,h_10 = NULL,k_10 = NULL;
    e_10 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = e_10;
      }
    else
      {
        ATerm v_5 = NULL,c_6 = NULL,g_6 = NULL,u_2 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            h_10 = ATgetFirst((ATermList) t);
            k_10 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(e_10);
        v_5 = t;
        t = h_10;
        t = v_90(t);
        c_6 = t;
        t = k_10;
        t = m_10(t);
        g_6 = t;
        t = (ATerm) ATinsert(CheckATermList(g_6), c_6);
        u_2 = t;
        t = SSLsetAnnotations(u_2, v_5);
      }
    return(t);
  }
  t = m_10(t);
  return(t);
}
static ATerm j_0 (ATerm t)
{
  ATerm s_14 = t;
  int t_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      LocalPopChoice(t_14);
    }
  else
    {
      t = s_14;
    }
  return(t);
}
static ATerm u_0 (ATerm t)
{
  t = term_u_14;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm v_14 = t;
  int w_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_10 = NULL;
      z_10 = t;
      t = SSL_is_string(z_10);
      LocalPopChoice(w_14);
    }
  else
    {
      t = v_14;
      {
        ATerm z_14 = t;
        int a_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(j_0, t);
            LocalPopChoice(a_15);
          }
        else
          {
            t = z_14;
            {
              ATerm j_11 = NULL,k_11 = NULL,l_11 = NULL;
              j_11 = t;
              if(match_cons(t, sym_Path_1))
                {
                  k_11 = ATgetArgument(t, 0);
                  t = k_11;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      k_11 = ATgetArgument(t, 0);
                      t = k_11;
                      {
                        ATerm d_15 = t;
                        int e_15 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            LocalPopChoice(e_15);
                          }
                        else
                          {
                            t = d_15;
                            t = debug_1_0(u_0, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm r_11 = NULL,w_11 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          k_11 = ATgetArgument(t, 0);
                          l_11 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = k_11;
                      t = eval_config_0_0(t);
                      r_11 = t;
                      t = l_11;
                      t = eval_config_0_0(t);
                      w_11 = t;
                      t = (ATerm) ATmakeAppl(sym__2, r_11, w_11);
                      t = w_8(r_11, w_11, t);
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
  ATerm b_12 = NULL,c_12 = NULL;
  b_12 = t;
  t = term_f_15;
  c_12 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_15, b_12);
  t = s_9(c_12, b_12, t);
  {
    ATerm g_15 = t;
    int h_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_12 = NULL,l_12 = NULL;
        t = eval_config_0_0(t);
        i_12 = t;
        t = term_f_15;
        l_12 = t;
        t = SSL_table_put(l_12, b_12, i_12);
        t = i_12;
        LocalPopChoice(h_15);
      }
    else
      {
        t = g_15;
      }
  }
  return(t);
}
static ATerm v_0 (ATerm t)
{
  ATerm s_12 = NULL;
  if(match_cons(t, sym_Specification_1))
    {
      s_12 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_12;
  t = filter_1_0(y_0, t);
  return(t);
}
static ATerm y_0 (ATerm t)
{
  ATerm i_15 = t;
  if((PushChoice() == 0))
    {
      ATerm w_12 = NULL,x_12 = NULL,z_12 = NULL,y_2 = NULL;
      z_12 = t;
      if(match_cons(t, sym_Imports_1))
        {
          x_12 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(z_12);
      w_12 = t;
      t = (ATerm) ATmakeAppl(sym_Imports_1, x_12);
      y_2 = t;
      t = SSLsetAnnotations(y_2, w_12);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = i_15;
    }
  return(t);
}
ATerm flatten_stratego_0_0 (ATerm t)
{
  ATerm o_12 = NULL;
  t = map_1_0(v_0, t);
  t = concat_0_0(t);
  o_12 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, o_12);
  return(t);
}
ATerm genzip_4_0 (ATerm z_92 (ATerm), ATerm a_93 (ATerm), ATerm b_93 (ATerm), ATerm c_93 (ATerm), ATerm t)
{
  static ATerm j_13 (ATerm t)
  {
    ATerm j_15 = t;
    int k_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = z_92(t);
        LocalPopChoice(k_15);
      }
    else
      {
        t = j_15;
        {
          ATerm a_13 = NULL,b_13 = NULL,d_13 = NULL,e_13 = NULL,g_13 = NULL,h_13 = NULL,d_3 = NULL;
          t = a_93(t);
          h_13 = t;
          if(match_cons(t, sym__2))
            {
              b_13 = ATgetArgument(t, 0);
              d_13 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(h_13);
          a_13 = t;
          t = b_13;
          t = c_93(t);
          e_13 = t;
          t = d_13;
          t = j_13(t);
          g_13 = t;
          t = (ATerm) ATmakeAppl(sym__2, e_13, g_13);
          d_3 = t;
          t = SSLsetAnnotations(d_3, a_13);
          t = b_93(t);
        }
      }
    return(t);
  }
  t = j_13(t);
  return(t);
}
static ATerm d_1 (ATerm t)
{
  ATerm k_13 = NULL;
  if(match_cons(t, sym_Imports_1))
    {
      k_13 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = k_13;
  return(t);
}
static ATerm k_8 (ATerm k_135, ATerm t)
{
  t = k_135;
  t = filter_1_0(d_1, t);
  t = concat_0_0(t);
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm q_13 = NULL;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_l_15;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      ATerm u_13 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          q_13 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, term_m_15);
      u_13 = t;
      t = (ATerm) ATmakeAppl(sym__2, q_13, (ATerm) ATinsert(ATempty, term_m_15));
      t = x_8(q_13, u_13, t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
ATerm pass_keep_0_0 (ATerm t)
{
  ATerm x_13 = NULL,y_13 = NULL,c_14 = NULL,d_14 = NULL;
  t = term_n_15;
  {
    ATerm o_15 = t;
    int p_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        LocalPopChoice(p_15);
      }
    else
      {
        t = o_15;
        t = term_q_15;
      }
  }
  y_13 = t;
  t = term_q_15;
  d_14 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_13, term_q_15);
  t = l_8(y_13, d_14, t);
  c_14 = t;
  t = SSL_int_to_string(c_14);
  x_13 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, x_13), term_n_15);
  return(t);
}
static ATerm l_8 (ATerm g_41, ATerm h_41, ATerm t)
{
  ATerm r_15 = t;
  int t_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(g_41, h_41);
      LocalPopChoice(t_15);
    }
  else
    {
      t = r_15;
      t = SSL_subtr(g_41, h_41);
    }
  return(t);
}
ATerm pass_verbose_0_0 (ATerm t)
{
  ATerm f_14 = NULL,j_14 = NULL,m_14 = NULL,n_14 = NULL;
  t = term_u_15;
  {
    ATerm v_15 = t;
    int w_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        LocalPopChoice(w_15);
      }
    else
      {
        t = v_15;
        t = term_q_15;
      }
  }
  j_14 = t;
  t = term_q_15;
  n_14 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_14, term_q_15);
  t = l_8(j_14, n_14, t);
  m_14 = t;
  t = SSL_int_to_string(m_14);
  f_14 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, f_14), term_u_15);
  return(t);
}
static ATerm h_1 (ATerm t)
{
  ATerm q_14 = NULL,x_14 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm x_15 = ATgetArgument(t, 0);
      if(match_cons(x_15, sym_Stream_1))
        {
          q_14 = ATgetArgument(x_15, 0);
        }
      else
        _fail(t);
      x_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_8(q_14, x_14, t);
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm g_114 (ATerm), ATerm h_114 (ATerm), ATerm t)
{
  ATerm o_14 = NULL,p_14 = NULL;
  p_14 = t;
  t = xtc_new_file_0_0(t);
  o_14 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_14, p_14);
  t = g_8(h_1, o_14, p_14, t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, o_14);
  t = xtc_transform_file_2_0(g_114, h_114, t);
  t = read_from_0_0(t);
  return(t);
}
static ATerm m_8 (ATerm j_48, ATerm k_48, ATerm t)
{
  t = SSL_execvp(j_48, k_48);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm j_16 = NULL,k_16 = NULL,n_16 = NULL,o_16 = NULL;
  j_16 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      k_16 = ATgetArgument(t, 0);
      {
        ATerm x_7 = NULL,y_7 = NULL;
        t = SSL_int_to_string(k_16);
        x_7 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_z_15), x_7), term_y_15);
        y_7 = t;
        t = SSL_concat_strings(y_7);
      }
    }
  else
    {
      ATerm h_9 = NULL,k_9 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          k_16 = ATgetArgument(t, 0);
          n_16 = ATgetArgument(t, 1);
          o_16 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(n_16);
      h_9 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, o_16), term_b_16), h_9), term_a_16), k_16);
      k_9 = t;
      t = SSL_concat_strings(k_9);
    }
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm u_16 = NULL;
  u_16 = t;
  {
    ATerm c_16 = t;
    int d_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm t_1 (ATerm t)
        {
          if(match_cons(t, sym_Signal_3))
            {
              ATerm g_16 = ATgetArgument(t, 0);
              if((u_16 != ATgetArgument(t, 1)))
                {
                  _fail(ATgetArgument(t, 1));
                }
              {
                ATerm h_16 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_g_22), term_z_21), term_v_21), term_q_21), term_j_21), term_d_21), term_z_20), term_t_20), term_n_20), term_h_20), term_c_20), term_x_19), term_t_19), term_p_19), term_k_19), term_d_19), term_y_18), term_s_18), term_n_18), term_i_18), term_d_18), term_t_17), term_n_17), term_i_17), term_e_17), term_y_16), term_s_16), term_m_16);
        t = fetch_elem_1_0(t_1, t);
        LocalPopChoice(d_16);
      }
    else
      {
        t = c_16;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, u_16);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm a_17 = NULL,k_17 = NULL;
  a_17 = t;
  {
    ATerm h_22 = t;
    int i_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm j_22 = ATgetArgument(t, 0);
            k_17 = ATgetArgument(t, 1);
            {
              ATerm k_22 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(i_22);
        {
          ATerm l_22 = t;
          int m_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm b_10 = NULL,g_10 = NULL,i_10 = NULL;
              t = k_17;
              {
                ATerm n_22 = t;
                if((PushChoice() == 0))
                  {
                    if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
                      _fail(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = n_22;
                  }
              }
              t = signal_from_number_0_0(t);
              t = signal_to_descr_0_0(t);
              b_10 = t;
              t = term_o_22;
              g_10 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, b_10), term_p_22);
              i_10 = t;
              t = SSL_printnl(g_10, i_10);
              t = (ATerm) ATmakeAppl(sym__2, term_o_22, (ATerm) ATinsert(ATinsert(ATempty, b_10), term_p_22));
              LocalPopChoice(m_22);
            }
          else
            {
              t = l_22;
              t = a_17;
            }
        }
      }
    else
      {
        t = h_22;
        t = a_17;
      }
  }
  t = a_17;
  return(t);
}
ATerm fork_0_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_and_wait_1_0 (ATerm e_106 (ATerm), ATerm t)
{
  ATerm u_17 = NULL,v_17 = NULL;
  v_17 = t;
  t = fork_0_0(t);
  u_17 = t;
  {
    ATerm q_22 = t;
    int r_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = v_17;
        t = e_106(t);
        LocalPopChoice(r_22);
      }
    else
      {
        t = q_22;
        t = SSL_waitpid(u_17);
        t = warn_ifsignaled_0_0(t);
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm s_22 = ATgetArgument(t, 0);
            if(((ATgetType(s_22) != AT_INT) || (ATgetInt((ATermInt) s_22) != 0)))
              _fail(t);
            {
              ATerm u_22 = ATgetArgument(t, 1);
            }
            {
              ATerm v_22 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = v_17;
      }
  }
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm z_17 = NULL;
  static ATerm v_1 (ATerm t)
  {
    ATerm a_18 = NULL,f_18 = NULL;
    a_18 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(z_17), a_18);
    t = s_9(not_null(z_17), a_18, t);
    f_18 = t;
    t = (ATerm) ATmakeAppl(sym__2, a_18, f_18);
    return(t);
  }
  if(((z_17 != NULL) && (z_17 != t)))
    _fail(t);
  else
    z_17 = t;
  t = SSL_table_keys(z_17);
  t = map_1_0(v_1, t);
  return(t);
}
ATerm if_verbose5_1_0 (ATerm x_105 (ATerm), ATerm t)
{
  ATerm l_18 = NULL;
  l_18 = t;
  {
    ATerm y_22 = t;
    int z_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_18 = NULL;
        t = term_u_15;
        t = get_config_0_0(t);
        t_18 = t;
        t = (ATerm) ATmakeAppl(sym__2, t_18, term_m_21);
        t = geq_0_0(t);
        t = l_18;
        t = x_105(t);
        LocalPopChoice(z_22);
      }
    else
      {
        t = y_22;
        t = l_18;
      }
  }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm w_105 (ATerm), ATerm t)
{
  ATerm w_18 = NULL;
  w_18 = t;
  {
    ATerm e_23 = t;
    int l_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_19 = NULL;
        t = term_u_15;
        t = get_config_0_0(t);
        a_19 = t;
        t = (ATerm) ATmakeAppl(sym__2, a_19, term_v_18);
        t = geq_0_0(t);
        t = w_18;
        t = w_105(t);
        LocalPopChoice(l_23);
      }
    else
      {
        t = e_23;
        t = w_18;
      }
  }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm y_105 (ATerm), ATerm t)
{
  ATerm j_19 = NULL;
  j_19 = t;
  {
    ATerm n_23 = t;
    int o_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_19 = NULL;
        t = term_u_15;
        t = get_config_0_0(t);
        l_19 = t;
        t = (ATerm) ATmakeAppl(sym__2, l_19, term_c_17);
        t = geq_0_0(t);
        t = j_19;
        t = y_105(t);
        LocalPopChoice(o_23);
      }
    else
      {
        t = n_23;
        t = j_19;
      }
  }
  return(t);
}
static ATerm p_8 (ATerm a_95 (ATerm), ATerm d_29, ATerm c_29, ATerm t)
{
  static ATerm v_20 (ATerm t)
  {
    ATerm k_20 = NULL,o_20 = NULL,p_20 = NULL;
    k_20 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = c_29;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            o_20 = ATgetFirst((ATermList) t);
            p_20 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm p_23 = t;
          int s_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = k_20;
              {
                static ATerm w_1 (ATerm t)
                {
                  t = c_29;
                  return(t);
                }
                t = a_9(a_95, w_1, o_20, p_20, t);
              }
              t = v_20(t);
              LocalPopChoice(s_23);
            }
          else
            {
              t = p_23;
              {
                ATerm q_10 = NULL,t_10 = NULL,c_5 = NULL;
                t = SSLgetAnnotations(k_20);
                q_10 = t;
                t = p_20;
                t = v_20(t);
                t_10 = t;
                t = (ATerm) ATinsert(CheckATermList(t_10), o_20);
                c_5 = t;
                t = SSLsetAnnotations(c_5, q_10);
              }
            }
        }
      }
    return(t);
  }
  t = d_29;
  t = v_20(t);
  return(t);
}
static ATerm x_1 (ATerm t)
{
  ATerm c_22 = NULL;
  if(match_cons(t, sym__2))
    {
      c_22 = ATgetArgument(t, 0);
      if((c_22 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm q_8 (ATerm e_53, ATerm f_53, ATerm g_53, ATerm t)
{
  ATerm g_21 = NULL,k_21 = NULL,s_21 = NULL;
  g_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_53, f_53);
  {
    ATerm t_23 = t;
    int u_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm v_23 = ATgetArgument(t, 0);
            ATerm w_23 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, e_53, f_53);
        t = s_9(e_53, f_53, t);
        LocalPopChoice(u_23);
      }
    else
      {
        t = t_23;
        t = (ATerm) ATempty;
      }
  }
  s_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_21, g_53);
  t = p_8(x_1, s_21, g_53, t);
  k_21 = t;
  t = SSL_table_put(e_53, f_53, k_21);
  t = g_21;
  return(t);
}
static ATerm r_8 (ATerm b_110 (ATerm), ATerm o_53, ATerm n_53, ATerm t)
{
  static ATerm y_1 (ATerm t)
  {
    ATerm d_22 = NULL,e_22 = NULL;
    if(match_cons(t, sym__2))
      {
        d_22 = ATgetArgument(t, 0);
        e_22 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, o_53, d_22, e_22);
    t = b_110(t);
    return(t);
  }
  t = n_53;
  t = map_1_0(y_1, t);
  return(t);
}
static ATerm a_23 (ATerm t_22, ATerm t)
{
  t = SSL_fclose(t_22);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm w_22 = NULL,x_22 = NULL;
  x_22 = t;
  if(match_cons(t, sym_Stream_1))
    {
      w_22 = ATgetArgument(t, 0);
      {
        ATerm x_23 = t;
        int y_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(w_22);
            LocalPopChoice(y_23);
          }
        else
          {
            t = x_23;
            t = a_23(x_22, t);
          }
      }
    }
  else
    {
      t = a_23(x_22, t);
    }
  return(t);
}
static ATerm s_8 (ATerm i_23, ATerm t)
{
  t = SSL_read_term_from_stream(i_23);
  return(t);
}
static ATerm w_8 (ATerm x_36, ATerm y_36, ATerm t)
{
  t = SSL_strcat(x_36, y_36);
  return(t);
}
static ATerm t_8 (ATerm g_38, ATerm h_38, ATerm t)
{
  ATerm b_23 = NULL;
  t = SSL_fopen(g_38, h_38);
  b_23 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, b_23);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm f_23 = NULL;
  t = SSL_stdin_stream();
  f_23 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_23);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm j_23 = NULL;
  t = SSL_stdout_stream();
  j_23 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, j_23);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm k_23 = NULL;
  t = SSL_stderr_stream();
  k_23 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, k_23);
  return(t);
}
static ATerm d_26 (ATerm e_24, ATerm t)
{
  ATerm i_24 = NULL;
  t = SSL_explode_term(e_24);
  if(match_cons(t, sym__2))
    {
      ATerm z_23 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) z_23) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm a_24 = ATgetArgument(t, 1);
        if(((ATgetType(a_24) == AT_LIST) && !(ATisEmpty(a_24))))
          {
            i_24 = ATgetFirst((ATermList) a_24);
            {
              ATerm b_24 = (ATerm) ATgetNext((ATermList) a_24);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = i_24;
  if(match_cons(t, sym_stderr_0))
    {
      t = i_24;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = i_24;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = i_24;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm e_26 (ATerm r_24, ATerm x_24, ATerm y_24, ATerm t)
{
  ATerm a_25 = NULL,b_25 = NULL,c_25 = NULL,l_25 = NULL,e_5 = NULL;
  t = SSLgetAnnotations(y_24);
  c_25 = t;
  t = r_24;
  if(match_cons(t, sym_Path_1))
    {
      l_25 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, l_25, x_24);
  e_5 = t;
  t = SSLsetAnnotations(e_5, c_25);
  if(match_cons(t, sym__2))
    {
      a_25 = ATgetArgument(t, 0);
      b_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_8(a_25, b_25, t);
  return(t);
}
static ATerm g_26 (ATerm n_25, ATerm o_25, ATerm p_25, ATerm t)
{
  ATerm s_25 = NULL,t_25 = NULL,u_25 = NULL,x_25 = NULL,f_5 = NULL;
  t = SSLgetAnnotations(p_25);
  u_25 = t;
  t = SSL_is_string(n_25);
  x_25 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_25, o_25);
  f_5 = t;
  t = SSLsetAnnotations(f_5, u_25);
  if(match_cons(t, sym__2))
    {
      s_25 = ATgetArgument(t, 0);
      t_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_8(s_25, t_25, t);
  return(t);
}
static ATerm u_8 (ATerm t)
{
  ATerm z_25 = NULL,b_26 = NULL,c_26 = NULL;
  z_25 = t;
  if(match_cons(t, sym__2))
    {
      b_26 = ATgetArgument(t, 0);
      c_26 = ATgetArgument(t, 1);
      {
        ATerm c_24 = t;
        int d_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = d_26(z_25, t);
            LocalPopChoice(d_24);
          }
        else
          {
            t = c_24;
            {
              ATerm f_24 = t;
              int g_24 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = e_26(b_26, c_26, z_25, t);
                  LocalPopChoice(g_24);
                }
              else
                {
                  t = f_24;
                  t = g_26(b_26, c_26, z_25, t);
                }
            }
          }
      }
    }
  else
    {
      t = d_26(z_25, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm i_26 = NULL,j_26 = NULL,l_26 = NULL,u_26 = NULL;
  u_26 = t;
  {
    ATerm h_24 = t;
    int j_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, u_26, term_k_24);
        t = u_8(t);
        LocalPopChoice(j_24);
      }
    else
      {
        t = h_24;
        {
          ATerm v_11 = NULL,x_11 = NULL;
          t = term_l_24;
          x_11 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_l_24, u_26);
          t = w_8(x_11, u_26, t);
          v_11 = t;
          t = SSL_perror(v_11);
          _fail(t);
        }
      }
  }
  j_26 = t;
  if(match_cons(t, sym_Stream_1))
    {
      l_26 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_8(l_26, t);
  i_26 = t;
  t = j_26;
  t = fclose_0_0(t);
  t = i_26;
  return(t);
}
static ATerm z_1 (ATerm t)
{
  t = term_m_24;
  return(t);
}
static ATerm a_2 (ATerm t)
{
  t = term_n_24;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm o_24 = t;
  int p_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_26 = NULL,y_26 = NULL;
      x_26 = t;
      t = (ATerm) ATinsert(ATempty, term_q_24);
      y_26 = t;
      t = (ATerm) ATmakeAppl(sym__2, x_26, (ATerm) ATinsert(ATempty, term_q_24));
      t = x_8(x_26, y_26, t);
      LocalPopChoice(p_24);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = o_24;
      {
        ATerm s_24 = t;
        int t_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_24 = t;
            if((PushChoice() == 0))
              {
                ATerm z_26 = NULL,b_27 = NULL;
                z_26 = t;
                t = (ATerm) ATinsert(ATempty, term_m_15);
                b_27 = t;
                t = (ATerm) ATmakeAppl(sym__2, z_26, (ATerm) ATinsert(ATempty, term_m_15));
                t = x_8(z_26, b_27, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = u_24;
              }
            t = debug_1_0(z_1, t);
            LocalPopChoice(t_24);
          }
        else
          {
            t = s_24;
            t = debug_1_0(a_2, t);
          }
      }
      t = (ATerm) ATempty;
    }
  return(t);
}
static ATerm c_2 (ATerm t)
{
  t = debug_1_0(d_2, t);
  return(t);
}
static ATerm d_2 (ATerm t)
{
  t = term_v_24;
  return(t);
}
static ATerm e_2 (ATerm t)
{
  t = debug_1_0(h_2, t);
  return(t);
}
static ATerm h_2 (ATerm t)
{
  t = term_w_24;
  return(t);
}
static ATerm i_2 (ATerm t)
{
  ATerm q_27 = NULL,r_27 = NULL,s_27 = NULL;
  q_27 = t;
  t = term_o_22;
  r_27 = t;
  t = (ATerm) ATinsert(ATempty, term_z_24);
  s_27 = t;
  t = SSL_printnl(r_27, s_27);
  t = q_27;
  return(t);
}
static ATerm k_2 (ATerm t)
{
  ATerm t_27 = NULL,u_27 = NULL,z_27 = NULL;
  if(match_cons(t, sym__3))
    {
      t_27 = ATgetArgument(t, 0);
      u_27 = ATgetArgument(t, 1);
      z_27 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = q_8(t_27, u_27, z_27, t);
  return(t);
}
static ATerm l_2 (ATerm t)
{
  ATerm a_28 = NULL,b_28 = NULL,h_28 = NULL;
  a_28 = t;
  t = term_o_22;
  b_28 = t;
  t = (ATerm) ATinsert(ATempty, term_d_25);
  h_28 = t;
  t = SSL_printnl(b_28, h_28);
  t = a_28;
  return(t);
}
static ATerm m_2 (ATerm t)
{
  ATerm i_28 = NULL,j_28 = NULL,l_28 = NULL;
  i_28 = t;
  t = term_o_22;
  j_28 = t;
  t = (ATerm) ATinsert(ATempty, term_z_24);
  l_28 = t;
  t = SSL_printnl(j_28, l_28);
  t = i_28;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm c_27 = NULL,d_27 = NULL,e_27 = NULL,f_27 = NULL,g_27 = NULL,h_27 = NULL,i_27 = NULL,j_27 = NULL,k_27 = NULL,m_27 = NULL;
  c_27 = t;
  t = if_verbose5_1_0(c_2, t);
  {
    ATerm e_25 = t;
    if((PushChoice() == 0))
      {
        ATerm o_27 = NULL,p_27 = NULL;
        t = term_f_25;
        o_27 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, c_27);
        p_27 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_f_25, (ATerm) ATmakeAppl(sym_Imported_1, c_27));
        t = s_9(o_27, p_27, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = e_25;
      }
  }
  e_27 = t;
  t = term_f_25;
  j_27 = t;
  t = term_g_25;
  k_27 = t;
  t = (ATerm) ATinsert(ATempty, c_27);
  m_27 = t;
  t = SSL_table_put(j_27, k_27, m_27);
  t = e_27;
  t = if_verbose4_1_0(e_2, t);
  t = read_repository_file_0_0(t);
  t = if_verbose6_1_0(i_2, t);
  d_27 = t;
  t = term_f_25;
  i_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_25, d_27);
  t = r_8(k_2, i_27, d_27, t);
  t = if_verbose6_1_0(l_2, t);
  t = term_f_25;
  f_27 = t;
  t = (ATerm) ATmakeAppl(sym_Imported_1, c_27);
  g_27 = t;
  t = (ATerm) ATempty;
  h_27 = t;
  t = SSL_table_put(f_27, g_27, h_27);
  t = (ATerm) ATmakeAppl(sym__3, term_f_25, (ATerm)ATmakeAppl(sym_Imported_1, c_27), (ATerm) ATempty);
  t = if_verbose4_1_0(m_2, t);
  return(t);
}
ATerm repeat_2_0 (ATerm j_83 (ATerm), ATerm k_83 (ATerm), ATerm t)
{
  static ATerm m_28 (ATerm t)
  {
    ATerm h_25 = t;
    int i_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = j_83(t);
        t = m_28(t);
        LocalPopChoice(i_25);
      }
    else
      {
        t = h_25;
        t = k_83(t);
      }
    return(t);
  }
  t = m_28(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm j_25 = t;
  int k_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_m_25;
      t = get_config_0_0(t);
      LocalPopChoice(k_25);
    }
  else
    {
      t = j_25;
      {
        ATerm q_25 = t;
        int r_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_28 = NULL;
            t = term_v_25;
            n_28 = t;
            t = SSL_getenv(n_28);
            LocalPopChoice(r_25);
          }
        else
          {
            t = q_25;
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
  t = term_w_25;
  return(t);
}
static ATerm p_2 (ATerm t)
{
  ATerm v_28 = NULL,x_28 = NULL;
  t = term_f_25;
  v_28 = t;
  t = term_y_25;
  x_28 = t;
  t = term_a_26;
  t = s_9(v_28, x_28, t);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm f_26 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = f_26;
      }
  }
  return(t);
}
static ATerm q_2 (ATerm t)
{
  t = debug_1_0(r_2, t);
  return(t);
}
static ATerm r_2 (ATerm t)
{
  t = term_h_26;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm p_28 = NULL;
  t = if_verbose5_1_0(n_2, t);
  p_28 = t;
  {
    ATerm k_26 = t;
    int m_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_28 = NULL,t_28 = NULL;
        t = term_f_25;
        q_28 = t;
        t = term_g_25;
        t_28 = t;
        t = term_n_26;
        t = s_9(q_28, t_28, t);
        LocalPopChoice(m_26);
      }
    else
      {
        t = k_26;
        {
          ATerm u_28 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          u_28 = t;
          t = repeat_2_0(p_2, _id, t);
          t = u_28;
        }
      }
  }
  t = p_28;
  t = if_verbose5_1_0(q_2, t);
  return(t);
}
static ATerm t_2 (ATerm t)
{
  t = debug_1_0(v_2, t);
  return(t);
}
static ATerm v_2 (ATerm t)
{
  t = term_o_26;
  return(t);
}
static ATerm k_30 (ATerm j_29, ATerm t)
{
  ATerm n_29 = NULL,o_29 = NULL,q_29 = NULL;
  t = term_f_25;
  o_29 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, j_29);
  q_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_25, (ATerm) ATmakeAppl(sym_Tool_1, j_29));
  t = s_9(o_29, q_29, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm p_26 = ATgetFirst((ATermList) t);
      if(match_cons(p_26, sym__2))
        {
          ATerm r_26 = ATgetArgument(p_26, 0);
          n_29 = ATgetArgument(p_26, 1);
        }
      else
        _fail(t);
      {
        ATerm q_26 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = n_29;
  return(t);
}
static ATerm x_2 (ATerm t)
{
  t = debug_1_0(z_2, t);
  return(t);
}
static ATerm z_2 (ATerm t)
{
  t = term_o_26;
  return(t);
}
static ATerm a_3 (ATerm t)
{
  t = term_f_25;
  t = table_getlist_0_0(t);
  t = debug_1_0(e_3, t);
  return(t);
}
static ATerm e_3 (ATerm t)
{
  t = term_s_26;
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm t_26 = t;
  int v_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_29 = NULL,u_29 = NULL,v_29 = NULL;
      t = if_verbose5_1_0(t_2, t);
      t = xtc_load_0_0(t);
      v_29 = t;
      if(match_cons(t, sym__2))
        {
          r_29 = ATgetArgument(t, 0);
          u_29 = ATgetArgument(t, 1);
          {
            ATerm w_26 = t;
            int a_27 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm a_30 = NULL,b_30 = NULL,c_30 = NULL;
                t = term_f_25;
                b_30 = t;
                t = (ATerm) ATmakeAppl(sym_Tool_1, r_29);
                c_30 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_f_25, (ATerm) ATmakeAppl(sym_Tool_1, r_29));
                t = s_9(b_30, c_30, t);
                {
                  static ATerm w_2 (ATerm t)
                  {
                    if(match_cons(t, sym__2))
                      {
                        if((u_29 != ATgetArgument(t, 0)))
                          {
                            _fail(ATgetArgument(t, 0));
                          }
                        if(((a_30 != NULL) && (a_30 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          a_30 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = fetch_1_0(w_2, t);
                }
                t = not_null(a_30);
                LocalPopChoice(a_27);
              }
            else
              {
                t = w_26;
                t = k_30(v_29, t);
              }
          }
        }
      else
        {
          t = k_30(v_29, t);
        }
      t = if_verbose5_1_0(x_2, t);
      LocalPopChoice(v_26);
    }
  else
    {
      t = t_26;
      {
        ATerm j_30 = NULL,f_12 = NULL,g_12 = NULL;
        j_30 = t;
        t = term_o_22;
        f_12 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_n_27), j_30), term_l_27);
        g_12 = t;
        t = SSL_printnl(f_12, g_12);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_n_27), j_30), term_l_27);
        t = if_verbose5_1_0(a_3, t);
        _fail(t);
      }
    }
  return(t);
}
ATerm xtc_command_1_0 (ATerm h_115 (ATerm), ATerm t)
{
  ATerm m_30 = NULL,n_30 = NULL;
  n_30 = t;
  t = h_115(t);
  t = xtc_find_0_0(t);
  m_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_30, n_30);
  {
    static ATerm f_3 (ATerm t)
    {
      ATerm o_30 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, m_30, n_30);
      t = m_8(m_30, n_30, t);
      t = term_v_27;
      o_30 = t;
      t = SSL_exit(o_30);
      return(t);
    }
    t = fork_and_wait_1_0(f_3, t);
  }
  t = n_30;
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t)
{
  ATerm q_30 = NULL,r_30 = NULL;
  q_30 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm s_30 = NULL,t_30 = NULL;
      t = q_30;
      t = xtc_new_file_0_0(t);
      s_30 = t;
      t = r_0(t);
      t_30 = t;
      t = (ATerm) ATmakeAppl(sym__2, t_30, (ATerm) ATinsert(ATinsert(ATempty, s_30), term_p_12));
      t = conc_0_0(t);
      t = xtc_command_1_0(p_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, s_30);
    }
  else
    {
      ATerm v_30 = NULL,w_30 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          r_30 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = r_30;
      t = xtc_new_file_0_0(t);
      v_30 = t;
      t = r_0(t);
      w_30 = t;
      t = (ATerm) ATmakeAppl(sym__2, w_30, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, v_30), term_p_12), r_30), term_w_27));
      t = conc_0_0(t);
      t = xtc_command_1_0(p_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, v_30);
    }
  return(t);
}
static ATerm g_33 (ATerm d_31, ATerm e_31, ATerm f_31, ATerm t)
{
  ATerm g_31 = NULL,j_31 = NULL,j_12 = NULL,k_12 = NULL,k_5 = NULL;
  t = SSLgetAnnotations(f_31);
  g_31 = t;
  t = d_31;
  {
    ATerm x_27 = t;
    if((PushChoice() == 0))
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("rtree", 0, ATtrue)))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = x_27;
      }
  }
  j_31 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_31, e_31);
  k_5 = t;
  t = SSLsetAnnotations(k_5, g_31);
  k_12 = t;
  t = SSL_explode_term(k_12);
  if(match_cons(t, sym__2))
    {
      ATerm y_27 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) y_27) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm c_28 = ATgetArgument(t, 1);
        if(((ATgetType(c_28) == AT_LIST) && !(ATisEmpty(c_28))))
          {
            ATerm d_28 = ATgetFirst((ATermList) c_28);
            ATerm e_28 = (ATerm) ATgetNext((ATermList) c_28);
            if(((ATgetType(e_28) == AT_LIST) && !(ATisEmpty(e_28))))
              {
                j_12 = ATgetFirst((ATermList) e_28);
                {
                  ATerm f_28 = (ATerm) ATgetNext((ATermList) e_28);
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
  t = j_12;
  {
    ATerm g_28 = t;
    int k_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_28 = t;
        int r_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_31 = NULL;
            if(match_cons(t, sym_FILE_1))
              {
                q_31 = ATgetArgument(t, 0);
                {
                  ATerm r_12 = NULL,l_5 = NULL;
                  t = SSLgetAnnotations(j_12);
                  r_12 = t;
                  t = (ATerm) ATmakeAppl(sym_FILE_1, q_31);
                  l_5 = t;
                  t = SSLsetAnnotations(l_5, r_12);
                }
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = j_12;
              }
            LocalPopChoice(r_28);
            t = xtc_transform_file_2_0(g_3, h_3, t);
          }
        else
          {
            t = o_28;
            t = xtc_transform_term_2_0(i_3, j_3, t);
          }
        t = read_from_0_0(t);
        LocalPopChoice(k_28);
      }
    else
      {
        t = g_28;
        {
          ATerm m_32 = NULL,o_32 = NULL,s_32 = NULL;
          t = term_o_22;
          o_32 = t;
          t = (ATerm) ATinsert(ATinsert(ATempty, e_31), term_s_28);
          s_32 = t;
          t = SSL_printnl(o_32, s_32);
          t = term_q_15;
          m_32 = t;
          t = SSL_exit(m_32);
          t = (ATerm) ATinsert(ATinsert(ATempty, e_31), term_s_28);
        }
      }
  }
  return(t);
}
static ATerm h_33 (ATerm v_32, ATerm w_32, ATerm t)
{
  ATerm c_13 = NULL;
  t = SSL_explode_term(w_32);
  if(match_cons(t, sym__2))
    {
      ATerm w_28 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) w_28) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm y_28 = ATgetArgument(t, 1);
        if(((ATgetType(y_28) == AT_LIST) && !(ATisEmpty(y_28))))
          {
            ATerm z_28 = ATgetFirst((ATermList) y_28);
            ATerm e_29 = (ATerm) ATgetNext((ATermList) y_28);
            if(((ATgetType(e_29) == AT_LIST) && !(ATisEmpty(e_29))))
              {
                c_13 = ATgetFirst((ATermList) e_29);
                {
                  ATerm f_29 = (ATerm) ATgetNext((ATermList) e_29);
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
  t = c_13;
  {
    ATerm i_29 = t;
    int k_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = read_from_0_0(t);
        LocalPopChoice(k_29);
      }
    else
      {
        t = i_29;
        {
          ATerm y_32 = NULL,b_33 = NULL,c_33 = NULL;
          t = term_o_22;
          b_33 = t;
          t = (ATerm) ATinsert(ATinsert(ATempty, v_32), term_s_28);
          c_33 = t;
          t = SSL_printnl(b_33, c_33);
          t = term_q_15;
          y_32 = t;
          t = SSL_exit(y_32);
          t = (ATerm) ATinsert(ATinsert(ATempty, v_32), term_s_28);
        }
      }
  }
  return(t);
}
static ATerm g_3 (ATerm t)
{
  t = term_l_29;
  return(t);
}
static ATerm h_3 (ATerm t)
{
  ATerm u_31 = NULL,v_31 = NULL,w_31 = NULL,x_31 = NULL,z_31 = NULL;
  z_31 = t;
  t = pass_verbose_0_0(t);
  u_31 = t;
  t = z_31;
  t = pass_keep_0_0(t);
  v_31 = t;
  t = term_m_29;
  {
    ATerm p_29 = t;
    int s_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        LocalPopChoice(s_29);
        t = (ATerm) ATinsert(ATempty, term_m_29);
      }
    else
      {
        t = p_29;
        t = (ATerm) ATempty;
      }
  }
  w_31 = t;
  t = term_t_29;
  {
    ATerm w_29 = t;
    int x_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        LocalPopChoice(x_29);
      }
    else
      {
        t = w_29;
        t = (ATerm) ATempty;
      }
  }
  x_31 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, x_31), v_31), u_31), w_31);
  t = concat_0_0(t);
  return(t);
}
static ATerm i_3 (ATerm t)
{
  t = term_l_29;
  return(t);
}
static ATerm j_3 (ATerm t)
{
  ATerm b_32 = NULL,d_32 = NULL,e_32 = NULL,g_32 = NULL,i_32 = NULL;
  i_32 = t;
  t = pass_verbose_0_0(t);
  b_32 = t;
  t = i_32;
  t = pass_keep_0_0(t);
  d_32 = t;
  t = term_m_29;
  {
    ATerm y_29 = t;
    int z_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        LocalPopChoice(z_29);
        t = (ATerm) ATinsert(ATempty, term_m_29);
      }
    else
      {
        t = y_29;
        t = (ATerm) ATempty;
      }
  }
  e_32 = t;
  t = term_t_29;
  {
    ATerm d_30 = t;
    int e_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        LocalPopChoice(e_30);
      }
    else
      {
        t = d_30;
        t = (ATerm) ATempty;
      }
  }
  g_32 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, g_32), d_32), b_32), e_32);
  t = concat_0_0(t);
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
ATerm debug_1_0 (ATerm k_90 (ATerm), ATerm t)
{
  ATerm j_33 = NULL,m_33 = NULL,n_33 = NULL,o_33 = NULL;
  j_33 = t;
  t = k_90(t);
  m_33 = t;
  t = term_o_22;
  n_33 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, j_33), m_33);
  o_33 = t;
  t = SSL_printnl(n_33, o_33);
  t = j_33;
  return(t);
}
ATerm if_verbose3_1_0 (ATerm v_105 (ATerm), ATerm t)
{
  ATerm s_33 = NULL;
  s_33 = t;
  {
    ATerm h_30 = t;
    int i_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_33 = NULL;
        t = term_u_15;
        t = get_config_0_0(t);
        u_33 = t;
        t = (ATerm) ATmakeAppl(sym__2, u_33, term_v_16);
        t = geq_0_0(t);
        t = s_33;
        t = v_105(t);
        LocalPopChoice(i_30);
      }
    else
      {
        t = h_30;
        t = s_33;
      }
  }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm h_91 (ATerm), ATerm t)
{
  ATerm w_33 = NULL;
  static ATerm k_3 (ATerm t)
  {
    t = h_91(t);
    if(((w_33 != NULL) && (w_33 != t)))
      _fail(t);
    else
      w_33 = t;
    return(t);
  }
  t = fetch_1_0(k_3, t);
  t = not_null(w_33);
  return(t);
}
static ATerm x_8 (ATerm x_37, ATerm y_37, ATerm t)
{
  t = SSL_access(x_37, y_37);
  return(t);
}
ATerm is_relpath_0_0 (ATerm t)
{
  ATerm l_30 = t;
  if((PushChoice() == 0))
    {
      ATerm x_33 = NULL;
      x_33 = t;
      t = SSL_explode_string(x_33);
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          ATerm p_30 = ATgetFirst((ATermList) t);
          if(((ATgetType(p_30) != AT_INT) || (ATgetInt((ATermInt) p_30) != 47)))
            _fail(t);
          {
            ATerm u_30 = (ATerm) ATgetNext((ATermList) t);
          }
        }
      else
        _fail(t);
      t = x_33;
      PopChoice();
      _fail(t);
    }
  else
    {
      t = l_30;
    }
  return(t);
}
static ATerm y_8 (ATerm p_82 (ATerm), ATerm o_21, ATerm n_21, ATerm t)
{
  t = p_82(t);
  {
    ATerm x_30 = t;
    int y_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm m_3 (ATerm t)
        {
          ATerm i_34 = NULL;
          i_34 = t;
          {
            ATerm z_30 = t;
            int a_31 = stack_ptr;
            if((PushChoice() == 0))
              {
                static ATerm o_3 (ATerm t)
                {
                  ATerm k_34 = NULL,l_34 = NULL,m_34 = NULL,n_34 = NULL,o_34 = NULL;
                  l_34 = t;
                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, l_34), term_f_13), o_21), term_b_31), i_34);
                  o_34 = t;
                  t = SSL_concat_strings(o_34);
                  m_34 = t;
                  t = (ATerm) ATinsert(ATempty, term_m_15);
                  n_34 = t;
                  t = (ATerm) ATmakeAppl(sym__2, m_34, (ATerm) ATinsert(ATempty, term_m_15));
                  t = x_8(m_34, n_34, t);
                  k_34 = t;
                  t = (ATerm) ATmakeAppl(sym__2, l_34, (ATerm) ATmakeAppl(sym_FILE_1, k_34));
                  return(t);
                }
                t = o_21;
                t = is_relpath_0_0(t);
                t = n_21;
                t = fetch_elem_1_0(o_3, t);
                LocalPopChoice(a_31);
              }
            else
              {
                t = z_30;
                {
                  static ATerm q_3 (ATerm t)
                  {
                    ATerm n_13 = NULL,o_13 = NULL,p_13 = NULL,r_13 = NULL,s_13 = NULL;
                    o_13 = t;
                    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, o_13), term_f_13), o_21);
                    s_13 = t;
                    t = SSL_concat_strings(s_13);
                    p_13 = t;
                    t = (ATerm) ATinsert(ATempty, term_m_15);
                    r_13 = t;
                    t = (ATerm) ATmakeAppl(sym__2, p_13, (ATerm) ATinsert(ATempty, term_m_15));
                    t = x_8(p_13, r_13, t);
                    n_13 = t;
                    t = (ATerm) ATmakeAppl(sym__2, o_13, (ATerm) ATmakeAppl(sym_FILE_1, n_13));
                    return(t);
                  }
                  t = SSL_explode_string(o_21);
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      ATerm c_31 = ATgetFirst((ATermList) t);
                      if(((ATgetType(c_31) != AT_INT) || (ATgetInt((ATermInt) c_31) != 47)))
                        _fail(t);
                      {
                        ATerm h_31 = (ATerm) ATgetNext((ATermList) t);
                      }
                    }
                  else
                    _fail(t);
                  t = n_21;
                  t = fetch_elem_1_0(q_3, t);
                }
              }
          }
          return(t);
        }
        t = fetch_elem_1_0(m_3, t);
        LocalPopChoice(y_30);
      }
    else
      {
        t = x_30;
        {
          ATerm i_31 = t;
          int k_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              static ATerm r_3 (ATerm t)
              {
                ATerm p_34 = NULL,q_34 = NULL,r_34 = NULL,s_34 = NULL,t_34 = NULL,u_34 = NULL;
                p_34 = t;
                t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, p_34), term_f_13), o_21);
                u_34 = t;
                t = SSL_concat_strings(u_34);
                q_34 = t;
                t = term_f_25;
                s_34 = t;
                t = (ATerm) ATmakeAppl(sym_Tool_1, q_34);
                t_34 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_f_25, (ATerm) ATmakeAppl(sym_Tool_1, q_34));
                t = s_9(s_34, t_34, t);
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    ATerm l_31 = ATgetFirst((ATermList) t);
                    if(match_cons(l_31, sym__2))
                      {
                        ATerm n_31 = ATgetArgument(l_31, 0);
                        r_34 = ATgetArgument(l_31, 1);
                      }
                    else
                      _fail(t);
                    {
                      ATerm m_31 = (ATerm) ATgetNext((ATermList) t);
                    }
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym__2, p_34, (ATerm) ATmakeAppl(sym_FILE_1, r_34));
                return(t);
              }
              t = n_21;
              t = fetch_elem_1_0(r_3, t);
              LocalPopChoice(k_31);
            }
          else
            {
              t = i_31;
              {
                ATerm o_31 = t;
                int p_31 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_r_31;
                    t = get_config_0_0(t);
                    LocalPopChoice(p_31);
                    {
                      ATerm v_34 = NULL,w_34 = NULL,x_34 = NULL,y_34 = NULL,z_34 = NULL;
                      v_34 = t;
                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_t_31), o_21), term_s_31);
                      z_34 = t;
                      t = SSL_concat_strings(z_34);
                      w_34 = t;
                      t = term_o_22;
                      x_34 = t;
                      t = (ATerm) ATinsert(ATempty, w_34);
                      y_34 = t;
                      t = SSL_printnl(x_34, y_34);
                      t = v_34;
                      _fail(t);
                    }
                  }
                else
                  {
                    t = o_31;
                    {
                      ATerm a_35 = NULL,b_35 = NULL,c_35 = NULL;
                      t = term_o_22;
                      b_35 = t;
                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_t_31), o_21), term_s_31);
                      c_35 = t;
                      t = SSL_printnl(b_35, c_35);
                      t = term_q_15;
                      a_35 = t;
                      t = SSL_exit(a_35);
                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_t_31), o_21), term_s_31);
                    }
                  }
              }
            }
        }
      }
  }
  return(t);
}
static ATerm t_3 (ATerm t)
{
  t = term_y_31;
  return(t);
}
ATerm get_module_1_0 (ATerm o_82 (ATerm), ATerm t)
{
  ATerm g_35 = NULL,h_35 = NULL,i_35 = NULL,j_35 = NULL;
  t = basename_1_0(_id, t);
  i_35 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_k_24), term_f_32), term_c_32), term_a_32);
  j_35 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_35, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_k_24), term_f_32), term_c_32), term_a_32));
  t = y_8(o_82, i_35, j_35, t);
  if(match_cons(t, sym__2))
    {
      ATerm h_32 = ATgetArgument(t, 0);
      ATerm j_32 = ATgetArgument(t, 1);
      if(match_cons(j_32, sym_FILE_1))
        {
          g_35 = ATgetArgument(j_32, 0);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  {
    static ATerm s_3 (ATerm t)
    {
      ATerm l_35 = NULL;
      l_35 = t;
      t = g_35;
      t = debug_1_0(t_3, t);
      t = l_35;
      return(t);
    }
    t = if_verbose3_1_0(s_3, t);
  }
  t = parse_module_0_0(t);
  h_35 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_35, h_35);
  return(t);
}
static ATerm a_9 (ATerm d_95 (ATerm), ATerm e_95 (ATerm), ATerm h_29, ATerm g_29, ATerm t)
{
  t = e_95(t);
  {
    static ATerm x_3 (ATerm t)
    {
      ATerm m_35 = NULL;
      m_35 = t;
      t = (ATerm) ATmakeAppl(sym__2, h_29, m_35);
      t = d_95(t);
      return(t);
    }
    t = fetch_1_0(x_3, t);
  }
  t = g_29;
  return(t);
}
static ATerm b_9 (ATerm v_94 (ATerm), ATerm b_29, ATerm a_29, ATerm t)
{
  static ATerm g_36 (ATerm t)
  {
    ATerm x_35 = NULL,c_36 = NULL,d_36 = NULL;
    x_35 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = x_35;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            c_36 = ATgetFirst((ATermList) t);
            d_36 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm k_32 = t;
          int l_32 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = x_35;
              {
                static ATerm y_3 (ATerm t)
                {
                  t = a_29;
                  return(t);
                }
                t = a_9(v_94, y_3, c_36, d_36, t);
              }
              t = g_36(t);
              LocalPopChoice(l_32);
            }
          else
            {
              t = k_32;
              {
                ATerm g_14 = NULL,k_14 = NULL,o_5 = NULL;
                t = SSLgetAnnotations(x_35);
                g_14 = t;
                t = d_36;
                t = g_36(t);
                k_14 = t;
                t = (ATerm) ATinsert(CheckATermList(k_14), c_36);
                o_5 = t;
                t = SSLsetAnnotations(o_5, g_14);
              }
            }
        }
      }
    return(t);
  }
  t = b_29;
  t = g_36(t);
  return(t);
}
static ATerm z_3 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm n_32 = ATgetArgument(t, 0);
      if(((ATgetType(n_32) != AT_LIST) || !(ATisEmpty(n_32))))
        _fail(t);
      {
        ATerm p_32 = ATgetArgument(t, 1);
        if(((ATgetType(p_32) != AT_LIST) || !(ATisEmpty(p_32))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm c_4 (ATerm t)
{
  ATerm q_36 = NULL,r_36 = NULL,s_36 = NULL,t_36 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm q_32 = ATgetArgument(t, 0);
      if(((ATgetType(q_32) == AT_LIST) && !(ATisEmpty(q_32))))
        {
          q_36 = ATgetFirst((ATermList) q_32);
          r_36 = (ATerm) ATgetNext((ATermList) q_32);
        }
      else
        _fail(t);
      {
        ATerm r_32 = ATgetArgument(t, 1);
        if(((ATgetType(r_32) == AT_LIST) && !(ATisEmpty(r_32))))
          {
            s_36 = ATgetFirst((ATermList) r_32);
            t_36 = (ATerm) ATgetNext((ATermList) r_32);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, q_36, s_36), (ATerm) ATmakeAppl(sym__2, r_36, t_36));
  return(t);
}
static ATerm g_4 (ATerm t)
{
  ATerm u_36 = NULL,v_36 = NULL;
  if(match_cons(t, sym__2))
    {
      u_36 = ATgetArgument(t, 0);
      v_36 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(v_36), u_36);
  return(t);
}
static ATerm g_9 (ATerm z_601, ATerm e_602, ATerm t_56, ATerm t)
{
  ATerm j_36 = NULL,m_36 = NULL,n_36 = NULL,o_36 = NULL;
  t = SSL_explode_term(e_602);
  if(match_cons(t, sym__2))
    {
      j_36 = ATgetArgument(t, 0);
      n_36 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(z_601);
  if(match_cons(t, sym__2))
    {
      if((j_36 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      m_36 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, m_36, n_36);
  t = genzip_4_0(z_3, c_4, g_4, _id, t);
  o_36 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_36, t_56);
  t = conc_0_0(t);
  return(t);
}
static ATerm k_4 (ATerm t)
{
  ATerm i_37 = NULL;
  i_37 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, i_37);
  return(t);
}
static ATerm u_4 (ATerm t)
{
  ATerm j_37 = NULL,n_37 = NULL,o_37 = NULL,p_37 = NULL,q_5 = NULL;
  p_37 = t;
  if(match_cons(t, sym__2))
    {
      n_37 = ATgetArgument(t, 0);
      o_37 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_37);
  j_37 = t;
  t = o_37;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, n_37, o_37);
  q_5 = t;
  t = SSLsetAnnotations(q_5, j_37);
  return(t);
}
static ATerm v_4 (ATerm t)
{
  ATerm b_39 = NULL,c_39 = NULL,d_39 = NULL,e_39 = NULL,f_39 = NULL;
  b_39 = t;
  if(match_cons(t, sym__2))
    {
      c_39 = ATgetArgument(t, 0);
      d_39 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_39;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_39 = ATgetFirst((ATermList) t);
      f_39 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm t_32 = t;
        int u_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = p_39(c_39, d_39, b_39, t);
            LocalPopChoice(u_32);
          }
        else
          {
            t = t_32;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(c_39), e_39), f_39);
          }
      }
    }
  else
    {
      t = p_39(c_39, d_39, b_39, t);
    }
  return(t);
}
static ATerm p_39 (ATerm q_37, ATerm t_37, ATerm b_38, ATerm t)
{
  ATerm c_38 = NULL,l_38 = NULL,s_5 = NULL,s_38 = NULL,t_38 = NULL,u_38 = NULL,v_38 = NULL;
  t = SSLgetAnnotations(b_38);
  c_38 = t;
  t = t_37;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_38 = ATgetFirst((ATermList) t);
      v_38 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = s_38;
  if(match_cons(t, sym__2))
    {
      t_38 = ATgetArgument(t, 0);
      u_38 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm x_32 = t;
    int z_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_38;
        if((t_38 != t))
          {
            _fail(t);
          }
        t = v_38;
        LocalPopChoice(z_32);
      }
    else
      {
        t = x_32;
        t = t_37;
        t = g_9(t_38, u_38, v_38, t);
      }
  }
  l_38 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_37, l_38);
  s_5 = t;
  t = SSLsetAnnotations(s_5, c_38);
  return(t);
}
static ATerm x_4 (ATerm t)
{
  ATerm o_39 = NULL;
  if(match_cons(t, sym__2))
    {
      o_39 = ATgetArgument(t, 0);
      if((o_39 != ATgetArgument(t, 1)))
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
  ATerm a_33 = t;
  int i_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(k_4, u_4, v_4, t);
      LocalPopChoice(i_33);
    }
  else
    {
      t = a_33;
      {
        ATerm j_39 = NULL,k_39 = NULL,l_39 = NULL;
        j_39 = t;
        if(match_cons(t, sym__2))
          {
            k_39 = ATgetArgument(t, 0);
            l_39 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = j_39;
        t = b_9(x_4, k_39, l_39, t);
      }
    }
  return(t);
}
static ATerm i_9 (ATerm d_116 (ATerm), ATerm e_116 (ATerm), ATerm f_116 (ATerm), ATerm f_60, ATerm c_60, ATerm j_60, ATerm g_60, ATerm d_60, ATerm e_60, ATerm t)
{
  ATerm q_39 = NULL,r_39 = NULL,s_39 = NULL,t_39 = NULL,u_39 = NULL,v_39 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, f_60, g_60);
  t = d_116(t);
  q_39 = t;
  t = e_116(t);
  r_39 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_39, j_60);
  t = diff_0_0(t);
  s_39 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_39, c_60);
  t = conc_0_0(t);
  t_39 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_39, j_60);
  t = conc_0_0(t);
  u_39 = t;
  t = (ATerm) ATmakeAppl(sym__3, f_60, q_39, d_60);
  t = f_116(t);
  v_39 = t;
  t = (ATerm) ATmakeAppl(sym__5, t_39, u_39, g_60, v_39, e_60);
  return(t);
}
ATerm GnNext_3_0 (ATerm d_116 (ATerm), ATerm e_116 (ATerm), ATerm f_116 (ATerm), ATerm t)
{
  ATerm x_39 = NULL,y_39 = NULL,z_39 = NULL,a_40 = NULL,b_40 = NULL,c_40 = NULL;
  if(match_cons(t, sym__5))
    {
      ATerm k_33 = ATgetArgument(t, 0);
      if(((ATgetType(k_33) == AT_LIST) && !(ATisEmpty(k_33))))
        {
          x_39 = ATgetFirst((ATermList) k_33);
          y_39 = (ATerm) ATgetNext((ATermList) k_33);
        }
      else
        _fail(t);
      z_39 = ATgetArgument(t, 1);
      a_40 = ATgetArgument(t, 2);
      b_40 = ATgetArgument(t, 3);
      c_40 = ATgetArgument(t, 4);
    }
  else
    _fail(t);
  t = i_9(d_116, e_116, f_116, x_39, y_39, z_39, a_40, b_40, c_40, t);
  return(t);
}
ATerm while_not_2_0 (ATerm a_84 (ATerm), ATerm b_84 (ATerm), ATerm t)
{
  static ATerm d_40 (ATerm t)
  {
    ATerm l_33 = t;
    int p_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_84(t);
        LocalPopChoice(p_33);
      }
    else
      {
        t = l_33;
        t = b_84(t);
        t = d_40(t);
      }
    return(t);
  }
  t = d_40(t);
  return(t);
}
ATerm for_3_0 (ATerm d_84 (ATerm), ATerm e_84 (ATerm), ATerm f_84 (ATerm), ATerm t)
{
  t = d_84(t);
  t = while_not_2_0(e_84, f_84, t);
  return(t);
}
static ATerm y_4 (ATerm t)
{
  ATerm h_40 = NULL,i_40 = NULL,j_40 = NULL;
  if(match_cons(t, sym__3))
    {
      h_40 = ATgetArgument(t, 0);
      i_40 = ATgetArgument(t, 1);
      j_40 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__5, h_40, h_40, i_40, j_40, (ATerm) ATempty);
  return(t);
}
static ATerm z_4 (ATerm t)
{
  ATerm m_40 = NULL,n_40 = NULL;
  if(match_cons(t, sym__5))
    {
      ATerm q_33 = ATgetArgument(t, 0);
      if(((ATgetType(q_33) != AT_LIST) || !(ATisEmpty(q_33))))
        _fail(t);
      {
        ATerm r_33 = ATgetArgument(t, 1);
      }
      {
        ATerm t_33 = ATgetArgument(t, 2);
      }
      m_40 = ATgetArgument(t, 3);
      n_40 = ATgetArgument(t, 4);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, m_40, n_40);
  return(t);
}
ATerm graph_nodes_roots_3_0 (ATerm a_116 (ATerm), ATerm b_116 (ATerm), ATerm c_116 (ATerm), ATerm t)
{
  ATerm g_40 = NULL;
  static ATerm d_5 (ATerm t)
  {
    ATerm v_33 = t;
    int y_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = GnNext_3_0(a_116, b_116, c_116, t);
        LocalPopChoice(y_33);
      }
    else
      {
        t = v_33;
        {
          ATerm p_40 = NULL,q_40 = NULL,r_40 = NULL,s_40 = NULL,t_40 = NULL,u_40 = NULL,v_40 = NULL;
          if(match_cons(t, sym__5))
            {
              p_40 = ATgetArgument(t, 0);
              s_40 = ATgetArgument(t, 1);
              t_40 = ATgetArgument(t, 2);
              u_40 = ATgetArgument(t, 3);
              v_40 = ATgetArgument(t, 4);
            }
          else
            _fail(t);
          t = p_40;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              q_40 = ATgetFirst((ATermList) t);
              r_40 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__5, r_40, s_40, t_40, u_40, (ATerm) ATinsert(CheckATermList(v_40), q_40));
        }
      }
    return(t);
  }
  t = for_3_0(y_4, z_4, d_5, t);
  if(match_cons(t, sym__2))
    {
      g_40 = ATgetArgument(t, 0);
      {
        ATerm z_33 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = g_40;
  return(t);
}
ATerm filter_1_0 (ATerm g_98 (ATerm), ATerm t)
{
  ATerm b_42 = NULL,f_42 = NULL,r_42 = NULL;
  b_42 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = b_42;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          f_42 = ATgetFirst((ATermList) t);
          r_42 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm a_34 = t;
        int b_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_14 = NULL,b_15 = NULL,c_15 = NULL,y_5 = NULL;
            t = SSLgetAnnotations(b_42);
            y_14 = t;
            t = f_42;
            t = g_98(t);
            b_15 = t;
            t = r_42;
            t = filter_1_0(g_98, t);
            c_15 = t;
            t = (ATerm) ATinsert(CheckATermList(c_15), b_15);
            y_5 = t;
            t = SSLsetAnnotations(y_5, y_14);
            LocalPopChoice(b_34);
          }
        else
          {
            t = a_34;
            t = r_42;
            t = filter_1_0(g_98, t);
          }
      }
    }
  return(t);
}
static ATerm g_5 (ATerm t)
{
  ATerm c_34 = t;
  if((PushChoice() == 0))
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-I", 0, ATtrue)))
        _fail(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = c_34;
    }
  return(t);
}
static ATerm i_5 (ATerm t)
{
  ATerm d_43 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm d_34 = ATgetArgument(t, 0);
      ATerm e_34 = ATgetArgument(t, 1);
      if(match_cons(e_34, sym_Specification_1))
        {
          d_43 = ATgetArgument(e_34, 0);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  t = k_8(d_43, t);
  return(t);
}
static ATerm j_5 (ATerm t)
{
  ATerm e_43 = NULL,h_43 = NULL;
  if(match_cons(t, sym__3))
    {
      ATerm f_34 = ATgetArgument(t, 0);
      e_43 = ATgetArgument(t, 1);
      h_43 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(h_43), e_43);
  return(t);
}
static ATerm n_5 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_g_34;
  return(t);
}
static ATerm p_5 (ATerm t)
{
  ATerm i_43 = NULL,k_43 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_43 = ATgetFirst((ATermList) t);
      k_43 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, i_43, k_43);
  return(t);
}
static ATerm r_5 (ATerm t)
{
  ATerm n_43 = NULL,o_43 = NULL,p_43 = NULL,q_43 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm h_34 = ATgetArgument(t, 0);
      if(match_cons(h_34, sym__2))
        {
          n_43 = ATgetArgument(h_34, 0);
          o_43 = ATgetArgument(h_34, 1);
        }
      else
        _fail(t);
      {
        ATerm j_34 = ATgetArgument(t, 1);
        if(match_cons(j_34, sym__2))
          {
            p_43 = ATgetArgument(j_34, 0);
            q_43 = ATgetArgument(j_34, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(p_43), n_43), (ATerm) ATinsert(CheckATermList(q_43), o_43));
  return(t);
}
static ATerm l_9 (ATerm e_21, ATerm t)
{
  ATerm v_42 = NULL,w_42 = NULL,x_42 = NULL,y_42 = NULL,z_42 = NULL,a_43 = NULL,b_6 = NULL;
  ATerm d_35 = t;
  int e_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_t_29;
      t = get_config_0_0(t);
      t = filter_1_0(g_5, t);
      LocalPopChoice(e_35);
    }
  else
    {
      t = d_35;
      t = (ATerm) ATempty;
    }
  v_42 = t;
  t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATinsert(ATempty, e_21), term_t_11, (ATerm) ATempty);
  {
    static ATerm h_5 (ATerm t)
    {
      ATerm b_43 = NULL,c_43 = NULL;
      static ATerm m_5 (ATerm t)
      {
        t = (ATerm) ATinsert(CheckATermList(v_42), term_f_13);
        return(t);
      }
      c_43 = t;
      t = SSL_explode_term(c_43);
      if(match_cons(t, sym__2))
        {
          ATerm f_35 = ATgetArgument(t, 0);
          if((ATgetSymbol((ATermAppl) f_35) != ATmakeSymbol("", 0, ATtrue)))
            _fail(t);
          {
            ATerm k_35 = ATgetArgument(t, 1);
            if(((ATgetType(k_35) == AT_LIST) && !(ATisEmpty(k_35))))
              {
                b_43 = ATgetFirst((ATermList) k_35);
                {
                  ATerm n_35 = (ATerm) ATgetNext((ATermList) k_35);
                }
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = b_43;
      t = get_module_1_0(m_5, t);
      return(t);
    }
    t = graph_nodes_roots_3_0(h_5, i_5, j_5, t);
  }
  t = genzip_4_0(n_5, p_5, r_5, _id, t);
  a_43 = t;
  if(match_cons(t, sym__2))
    {
      x_42 = ATgetArgument(t, 0);
      y_42 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_43);
  w_42 = t;
  t = y_42;
  t = flatten_stratego_0_0(t);
  z_42 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_42, z_42);
  b_6 = t;
  t = SSLsetAnnotations(b_6, w_42);
  return(t);
}
static ATerm n_9 (ATerm e_44, ATerm f_44, ATerm t)
{
  t = SSL_copy(e_44, f_44);
  return(t);
}
ATerm copy_to_1_0 (ATerm o_0 (ATerm), ATerm t)
{
  ATerm o_44 = NULL,p_44 = NULL;
  o_44 = t;
  if(match_cons(t, sym_FILE_1))
    {
      p_44 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm o_35 = t;
    int p_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_15 = NULL;
        t = o_44;
        t = o_0(t);
        s_15 = t;
        if(match_cons(t, sym_stdout_0))
          {
            t = s_15;
          }
        else
          {
            if(!(match_cons(t, sym_stderr_0)))
              _fail(t);
            t = s_15;
          }
        t = (ATerm) ATmakeAppl(sym__2, p_44, s_15);
        t = n_9(p_44, s_15, t);
        t = (ATerm) ATmakeAppl(sym_FILE_1, p_44);
        LocalPopChoice(p_35);
      }
    else
      {
        t = o_35;
        {
          ATerm q_35 = t;
          int r_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm e_16 = NULL;
              t = o_44;
              t = o_0(t);
              e_16 = t;
              {
                ATerm s_35 = t;
                if((PushChoice() == 0))
                  {
                    ATerm f_16 = NULL;
                    f_16 = t;
                    if(match_cons(t, sym_stdout_0))
                      {
                        t = f_16;
                      }
                    else
                      {
                        if(match_cons(t, sym_stderr_0))
                          {
                            t = f_16;
                          }
                        else
                          {
                            t = f_16;
                            if((p_44 != t))
                              {
                                _fail(t);
                              }
                            t = f_16;
                          }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = s_35;
                  }
              }
              t = (ATerm) ATmakeAppl(sym__2, p_44, e_16);
              t = n_9(p_44, e_16, t);
              t = (ATerm) ATmakeAppl(sym_FILE_1, p_44);
              LocalPopChoice(r_35);
            }
          else
            {
              t = q_35;
              t = o_44;
              t = o_0(t);
              if((p_44 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, p_44);
            }
        }
      }
  }
  return(t);
}
static ATerm o_9 (ATerm m_52, ATerm n_52, ATerm t)
{
  ATerm e_45 = NULL,f_45 = NULL;
  f_45 = t;
  {
    ATerm t_35 = t;
    int u_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, m_52, n_52);
        t = s_9(m_52, n_52, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm v_35 = ATgetFirst((ATermList) t);
            e_45 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(u_35);
        t = SSL_table_put(m_52, n_52, e_45);
        t = (ATerm) ATmakeAppl(sym__3, m_52, n_52, e_45);
      }
    else
      {
        t = t_35;
        t = SSL_table_remove(m_52, n_52);
        t = (ATerm) ATmakeAppl(sym__2, m_52, n_52);
      }
  }
  t = f_45;
  return(t);
}
ATerm end_scope_1_0 (ATerm j_103 (ATerm), ATerm t)
{
  ATerm g_45 = NULL,h_45 = NULL,i_45 = NULL,j_45 = NULL,k_45 = NULL;
  j_45 = t;
  t = j_103(t);
  i_45 = t;
  {
    ATerm w_35 = t;
    int y_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_45 = NULL;
        t = term_i_11;
        l_45 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_45, term_i_11);
        t = s_9(i_45, l_45, t);
        LocalPopChoice(y_35);
      }
    else
      {
        t = w_35;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_45 = ATgetFirst((ATermList) t);
      g_45 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_i_11;
  k_45 = t;
  t = SSL_table_put(i_45, k_45, g_45);
  t = h_45;
  {
    static ATerm t_5 (ATerm t)
    {
      ATerm m_45 = NULL;
      m_45 = t;
      t = (ATerm) ATmakeAppl(sym__2, i_45, m_45);
      t = o_9(i_45, m_45, t);
      return(t);
    }
    t = map_1_0(t_5, t);
  }
  t = j_45;
  return(t);
}
ATerm restore_always_2_0 (ATerm f_83 (ATerm), ATerm g_83 (ATerm), ATerm t)
{
  ATerm z_35 = t;
  int a_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = f_83(t);
      t = g_83(t);
      LocalPopChoice(a_36);
    }
  else
    {
      t = z_35;
      t = g_83(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm i_103 (ATerm), ATerm t)
{
  ATerm o_45 = NULL,p_45 = NULL,r_45 = NULL,t_45 = NULL,u_45 = NULL;
  p_45 = t;
  t = i_103(t);
  o_45 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_45, term_i_11);
  {
    ATerm b_36 = t;
    int e_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_45 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm f_36 = ATgetArgument(t, 0);
            ATerm h_36 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_i_11;
        z_45 = t;
        t = (ATerm) ATmakeAppl(sym__2, o_45, term_i_11);
        t = s_9(o_45, z_45, t);
        LocalPopChoice(e_36);
      }
    else
      {
        t = b_36;
        t = (ATerm) ATempty;
      }
  }
  r_45 = t;
  t = term_i_11;
  t_45 = t;
  t = (ATerm) ATinsert(CheckATermList(r_45), (ATerm) ATempty);
  u_45 = t;
  t = SSL_table_put(o_45, t_45, u_45);
  t = p_45;
  return(t);
}
static ATerm u_5 (ATerm t)
{
  t = term_q_11;
  return(t);
}
static ATerm x_5 (ATerm t)
{
  ATerm u_46 = NULL;
  u_46 = t;
  {
    ATerm i_36 = t;
    int k_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(u_46);
        LocalPopChoice(k_36);
      }
    else
      {
        t = i_36;
        t = u_46;
      }
  }
  return(t);
}
static ATerm z_5 (ATerm t)
{
  t = term_q_11;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm t_114 (ATerm), ATerm t)
{
  ATerm h_46 = NULL;
  static ATerm w_5 (ATerm t)
  {
    ATerm j_46 = NULL;
    j_46 = t;
    {
      ATerm l_36 = t;
      int p_36 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm m_46 = NULL,o_46 = NULL;
          t = term_q_11;
          m_46 = t;
          t = term_i_11;
          o_46 = t;
          t = term_w_36;
          t = s_9(m_46, o_46, t);
          LocalPopChoice(p_36);
        }
      else
        {
          t = l_36;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
        }
    }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((h_46 != NULL) && (h_46 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          h_46 = ATgetFirst((ATermList) t);
        {
          ATerm z_36 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    t = h_46;
    t = map_1_0(x_5, t);
    t = j_46;
    t = end_scope_1_0(z_5, t);
    return(t);
  }
  t = begin_scope_1_0(u_5, t);
  t = restore_always_2_0(t_114, w_5, t);
  return(t);
}
static ATerm d_6 (ATerm t)
{
  ATerm a_37 = t;
  int b_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_p_12;
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
ATerm xtc_io_1_0 (ATerm u_114 (ATerm), ATerm t)
{
  static ATerm a_6 (ATerm t)
  {
    ATerm d_37 = t;
    int e_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_47 = NULL;
        t = term_w_27;
        t = get_config_0_0(t);
        a_47 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, a_47);
        LocalPopChoice(e_37);
      }
    else
      {
        t = d_37;
        t = term_l_15;
      }
    t = u_114(t);
    t = copy_to_1_0(d_6, t);
    return(t);
  }
  t = xtc_temp_files_1_0(a_6, t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm c_47 = NULL,d_47 = NULL,e_47 = NULL,f_47 = NULL,g_47 = NULL;
  c_47 = t;
  t = term_t_11;
  t = whoami_0_0(t);
  d_47 = t;
  t = term_o_22;
  f_47 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_g_37), d_47), term_f_37);
  g_47 = t;
  t = SSL_printnl(f_47, g_47);
  t = term_q_15;
  e_47 = t;
  t = SSL_exit(e_47);
  t = c_47;
  return(t);
}
static ATerm f_6 (ATerm t)
{
  ATerm k_47 = NULL;
  k_47 = t;
  if(match_string(t, "-k"))
    {
      t = k_47;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = k_47;
    }
  return(t);
}
static ATerm l_6 (ATerm t)
{
  ATerm l_47 = NULL,m_47 = NULL,o_47 = NULL;
  l_47 = t;
  t = SSL_string_to_int(l_47);
  m_47 = t;
  t = term_n_15;
  o_47 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_15, m_47);
  t = v_9(o_47, m_47, t);
  t = l_47;
  return(t);
}
static ATerm m_6 (ATerm t)
{
  t = term_h_37;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(f_6, l_6, m_6, t);
  return(t);
}
static ATerm n_6 (ATerm t)
{
  ATerm s_47 = NULL;
  s_47 = t;
  if(match_string(t, "-S"))
    {
      t = s_47;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = s_47;
    }
  return(t);
}
static ATerm p_6 (ATerm t)
{
  ATerm t_47 = NULL,u_47 = NULL;
  t = term_u_15;
  t_47 = t;
  t = term_k_37;
  u_47 = t;
  t = term_l_37;
  t = v_9(t_47, u_47, t);
  t = term_m_37;
  return(t);
}
static ATerm q_6 (ATerm t)
{
  t = term_r_37;
  return(t);
}
static ATerm s_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm t_6 (ATerm t)
{
  ATerm y_47 = NULL,z_47 = NULL,b_48 = NULL;
  y_47 = t;
  t = SSL_string_to_int(y_47);
  z_47 = t;
  t = term_u_15;
  b_48 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_15, z_47);
  t = v_9(b_48, z_47, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, y_47);
  return(t);
}
static ATerm u_6 (ATerm t)
{
  t = term_s_37;
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
  ATerm c_48 = NULL,d_48 = NULL;
  t = term_u_37;
  c_48 = t;
  t = term_t_11;
  d_48 = t;
  t = term_v_37;
  t = v_9(c_48, d_48, t);
  t = term_w_37;
  return(t);
}
static ATerm z_6 (ATerm t)
{
  t = term_z_37;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm a_38 = t;
  int d_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(n_6, p_6, q_6, t);
      LocalPopChoice(d_38);
    }
  else
    {
      t = a_38;
      {
        ATerm i_38 = t;
        int j_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(s_6, t_6, u_6, t);
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
static ATerm v_9 (ATerm h_61, ATerm i_61, ATerm t)
{
  ATerm e_48 = NULL;
  t = term_f_15;
  e_48 = t;
  t = SSL_table_put(e_48, h_61, i_61);
  t = (ATerm) ATmakeAppl(sym__3, term_f_15, h_61, i_61);
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm h_48 = NULL,i_48 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm l_48 = NULL,m_48 = NULL,u_48 = NULL;
      t = term_t_11;
      t = e_0(t);
      l_48 = t;
      t = term_k_38;
      m_48 = t;
      t = term_m_38;
      u_48 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_k_38, term_m_38, l_48);
      t = t_9(m_48, u_48, l_48, t);
      _fail(t);
    }
  else
    {
      ATerm x_48 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_48 = ATgetFirst((ATermList) t);
          i_48 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = h_48;
      t = c_0(t);
      t = term_t_11;
      t = d_0(t);
      x_48 = t;
      t = (ATerm) ATinsert(CheckATermList(i_48), x_48);
    }
  return(t);
}
static ATerm a_7 (ATerm t)
{
  ATerm z_48 = NULL;
  z_48 = t;
  if(match_string(t, "-o"))
    {
      t = z_48;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = z_48;
    }
  return(t);
}
static ATerm b_7 (ATerm t)
{
  ATerm c_49 = NULL,d_49 = NULL;
  c_49 = t;
  t = term_p_12;
  d_49 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_12, c_49);
  t = v_9(d_49, c_49, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, c_49);
  return(t);
}
static ATerm d_7 (ATerm t)
{
  t = term_n_38;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(a_7, b_7, d_7, t);
  return(t);
}
static ATerm f_7 (ATerm t)
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
static ATerm g_7 (ATerm t)
{
  ATerm i_49 = NULL,j_49 = NULL;
  i_49 = t;
  t = term_w_27;
  j_49 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_27, i_49);
  t = v_9(j_49, i_49, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, i_49);
  return(t);
}
static ATerm h_7 (ATerm t)
{
  t = term_o_38;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(f_7, g_7, h_7, t);
  return(t);
}
static ATerm t_9 (ATerm h_52, ATerm i_52, ATerm g_52, ATerm t)
{
  ATerm l_49 = NULL,n_49 = NULL,o_49 = NULL;
  l_49 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_52, i_52);
  {
    ATerm p_38 = t;
    int q_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm r_38 = ATgetArgument(t, 0);
            ATerm w_38 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, h_52, i_52);
        t = s_9(h_52, i_52, t);
        LocalPopChoice(q_38);
      }
    else
      {
        t = p_38;
        t = (ATerm) ATempty;
      }
  }
  n_49 = t;
  t = (ATerm) ATinsert(CheckATermList(n_49), g_52);
  o_49 = t;
  t = SSL_table_put(h_52, i_52, o_49);
  t = l_49;
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm v_49 = NULL,w_49 = NULL,x_49 = NULL,a_50 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm b_50 = NULL,c_50 = NULL,d_50 = NULL;
      t = term_t_11;
      t = n_0(t);
      b_50 = t;
      t = term_k_38;
      c_50 = t;
      t = term_m_38;
      d_50 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_k_38, term_m_38, b_50);
      t = t_9(c_50, d_50, b_50, t);
      _fail(t);
    }
  else
    {
      ATerm h_50 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_49 = ATgetFirst((ATermList) t);
          w_49 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = w_49;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_49 = ATgetFirst((ATermList) t);
          a_50 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = v_49;
      t = k_0(t);
      t = x_49;
      t = l_0(t);
      h_50 = t;
      t = (ATerm) ATinsert(CheckATermList(a_50), h_50);
    }
  return(t);
}
ATerm at_end_1_0 (ATerm m_91 (ATerm), ATerm t)
{
  static ATerm l_51 (ATerm t)
  {
    ATerm h_51 = NULL,i_51 = NULL,k_51 = NULL;
    k_51 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        h_51 = ATgetFirst((ATermList) t);
        i_51 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm w_16 = NULL,z_16 = NULL,e_6 = NULL;
          t = SSLgetAnnotations(k_51);
          w_16 = t;
          t = i_51;
          t = l_51(t);
          z_16 = t;
          t = (ATerm) ATinsert(CheckATermList(z_16), h_51);
          e_6 = t;
          t = SSLsetAnnotations(e_6, w_16);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = k_51;
        t = m_91(t);
      }
    return(t);
  }
  t = l_51(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm j_50 = NULL,k_50 = NULL,l_50 = NULL;
  j_50 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = j_50;
    }
  else
    {
      static ATerm l_7 (ATerm t)
      {
        t = not_null(l_50);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          k_50 = ATgetFirst((ATermList) t);
          if(((l_50 != NULL) && (l_50 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            l_50 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = k_50;
      t = at_end_1_0(l_7, t);
    }
  return(t);
}
static ATerm j_52 (ATerm w_51, ATerm t)
{
  ATerm x_51 = NULL;
  t = SSL_explode_term(w_51);
  if(match_cons(t, sym__2))
    {
      ATerm x_38 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) x_38) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      x_51 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_51;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm z_51 = NULL,b_52 = NULL,c_52 = NULL;
  c_52 = t;
  if(match_cons(t, sym__2))
    {
      z_51 = ATgetArgument(t, 0);
      b_52 = ATgetArgument(t, 1);
      {
        ATerm y_38 = t;
        int z_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm o_7 (ATerm t)
            {
              t = b_52;
              return(t);
            }
            t = z_51;
            t = at_end_1_0(o_7, t);
            LocalPopChoice(z_38);
          }
        else
          {
            t = y_38;
            t = j_52(c_52, t);
          }
      }
    }
  else
    {
      t = j_52(c_52, t);
    }
  return(t);
}
static ATerm m_9 (ATerm n_61, ATerm m_61, ATerm t)
{
  ATerm k_52 = NULL,o_52 = NULL,p_52 = NULL;
  t = n_61;
  {
    ATerm a_39 = t;
    int g_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        LocalPopChoice(g_39);
      }
    else
      {
        t = a_39;
        t = (ATerm) ATempty;
      }
  }
  o_52 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_61, o_52);
  t = conc_0_0(t);
  k_52 = t;
  t = term_f_15;
  p_52 = t;
  t = SSL_table_put(p_52, n_61, k_52);
  t = (ATerm) ATmakeAppl(sym__3, term_f_15, n_61, k_52);
  return(t);
}
static ATerm p_7 (ATerm t)
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
static ATerm q_7 (ATerm t)
{
  ATerm u_52 = NULL,v_52 = NULL,y_52 = NULL;
  u_52 = t;
  t = term_t_29;
  v_52 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, u_52), term_t_29);
  y_52 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_29, (ATerm) ATinsert(ATinsert(ATempty, u_52), term_t_29));
  t = m_9(v_52, y_52, t);
  t = term_t_11;
  return(t);
}
static ATerm s_7 (ATerm t)
{
  t = term_h_39;
  return(t);
}
static ATerm t_7 (ATerm t)
{
  ATerm b_53 = NULL;
  b_53 = t;
  if(match_string(t, "--nodep"))
    {
      t = b_53;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-nodep", 0, ATtrue)))
        _fail(t);
      t = b_53;
    }
  return(t);
}
static ATerm w_7 (ATerm t)
{
  ATerm c_53 = NULL,d_53 = NULL;
  t = term_y_12;
  c_53 = t;
  t = term_i_39;
  d_53 = t;
  t = term_m_39;
  t = v_9(c_53, d_53, t);
  t = term_t_11;
  return(t);
}
static ATerm z_7 (ATerm t)
{
  t = term_n_39;
  return(t);
}
static ATerm a_8 (ATerm t)
{
  ATerm j_53 = NULL;
  j_53 = t;
  if(match_string(t, "--dep"))
    {
      t = j_53;
    }
  else
    {
      if(match_string(t, "-d"))
        {
          t = j_53;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-dep", 0, ATtrue)))
            _fail(t);
          t = j_53;
        }
    }
  return(t);
}
static ATerm d_8 (ATerm t)
{
  ATerm r_53 = NULL,t_53 = NULL;
  r_53 = t;
  t = term_u_12;
  t_53 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_12, r_53);
  t = v_9(t_53, r_53, t);
  t = term_t_11;
  return(t);
}
static ATerm h_8 (ATerm t)
{
  t = term_w_39;
  return(t);
}
static ATerm i_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--imports", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm j_8 (ATerm t)
{
  ATerm u_53 = NULL,v_53 = NULL;
  t = term_e_40;
  u_53 = t;
  t = term_t_11;
  v_53 = t;
  t = term_f_40;
  t = v_9(u_53, v_53, t);
  t = term_t_11;
  return(t);
}
static ATerm n_8 (ATerm t)
{
  t = term_k_40;
  return(t);
}
static ATerm o_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--slack", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm z_8 (ATerm t)
{
  ATerm w_53 = NULL,x_53 = NULL;
  t = term_r_31;
  w_53 = t;
  t = term_t_11;
  x_53 = t;
  t = term_l_40;
  t = v_9(w_53, x_53, t);
  t = term_t_11;
  return(t);
}
static ATerm c_9 (ATerm t)
{
  t = term_o_40;
  return(t);
}
static ATerm d_9 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--asfix", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm e_9 (ATerm t)
{
  ATerm a_54 = NULL,b_54 = NULL;
  t = term_m_29;
  a_54 = t;
  t = term_i_39;
  b_54 = t;
  t = term_w_40;
  t = v_9(a_54, b_54, t);
  t = term_t_11;
  return(t);
}
static ATerm f_9 (ATerm t)
{
  t = term_x_40;
  return(t);
}
ATerm pack_stratego_options_0_0 (ATerm t)
{
  ATerm y_40 = t;
  int z_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ArgOption_3_0(p_7, q_7, s_7, t);
      LocalPopChoice(z_40);
    }
  else
    {
      t = y_40;
      {
        ATerm c_41 = t;
        int d_41 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Option_3_0(t_7, w_7, z_7, t);
            LocalPopChoice(d_41);
          }
        else
          {
            t = c_41;
            {
              ATerm e_41 = t;
              int f_41 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = ArgOption_3_0(a_8, d_8, h_8, t);
                  LocalPopChoice(f_41);
                }
              else
                {
                  t = e_41;
                  {
                    ATerm i_41 = t;
                    int j_41 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Option_3_0(i_8, j_8, n_8, t);
                        LocalPopChoice(j_41);
                      }
                    else
                      {
                        t = i_41;
                        {
                          ATerm k_41 = t;
                          int l_41 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Option_3_0(o_8, z_8, c_9, t);
                              LocalPopChoice(l_41);
                            }
                          else
                            {
                              t = k_41;
                              t = Option_3_0(d_9, e_9, f_9, t);
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
  ATerm c_54 = NULL,e_54 = NULL,h_54 = NULL,k_54 = NULL;
  t = report_run_time_0_0(t);
  t = term_t_11;
  t = whoami_0_0(t);
  c_54 = t;
  t = term_o_22;
  h_54 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_m_41), c_54);
  k_54 = t;
  t = SSL_printnl(h_54, k_54);
  t = term_q_15;
  e_54 = t;
  t = SSL_exit(e_54);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_n_41;
  t = get_config_0_0(t);
  return(t);
}
static ATerm p_9 (ATerm a_41, ATerm b_41, ATerm t)
{
  ATerm o_41 = t;
  int p_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(a_41, b_41);
      LocalPopChoice(p_41);
    }
  else
    {
      t = o_41;
      t = SSL_addr(a_41, b_41);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm c_97 (ATerm), ATerm d_97 (ATerm), ATerm t)
{
  ATerm m_54 = NULL,n_54 = NULL,q_54 = NULL;
  m_54 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = m_54;
      t = c_97(t);
    }
  else
    {
      ATerm w_54 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          n_54 = ATgetFirst((ATermList) t);
          q_54 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = q_54;
      t = foldr_2_0(c_97, d_97, t);
      w_54 = t;
      t = (ATerm) ATmakeAppl(sym__2, n_54, w_54);
      t = d_97(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm j_9 (ATerm t)
{
  t = term_k_37;
  return(t);
}
static ATerm q_9 (ATerm t)
{
  ATerm x_17 = NULL,b_18 = NULL;
  if(match_cons(t, sym__2))
    {
      x_17 = ATgetArgument(t, 0);
      b_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_9(x_17, b_18, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm c_55 = NULL,p_17 = NULL,r_17 = NULL;
  t = times_0_0(t);
  r_17 = t;
  t = SSL_explode_term(r_17);
  if(match_cons(t, sym__2))
    {
      ATerm q_41 = ATgetArgument(t, 0);
      p_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_17;
  t = foldr_2_0(j_9, q_9, t);
  c_55 = t;
  t = SSL_TicksToSeconds(c_55);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm n_55 = NULL,o_55 = NULL,p_55 = NULL;
  n_55 = t;
  if(match_cons(t, sym__2))
    {
      o_55 = ATgetArgument(t, 0);
      p_55 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm r_41 = t;
    int s_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_55;
        if((o_55 != t))
          {
            _fail(t);
          }
        t = n_55;
        LocalPopChoice(s_41);
      }
    else
      {
        t = r_41;
        t = (ATerm) ATmakeAppl(sym__2, o_55, p_55);
        {
          ATerm t_41 = t;
          int u_41 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(o_55, p_55);
              LocalPopChoice(u_41);
            }
          else
            {
              t = t_41;
              t = SSL_gtr(o_55, p_55);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, o_55, p_55);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm t_105 (ATerm), ATerm t)
{
  ATerm t_55 = NULL;
  t_55 = t;
  {
    ATerm v_41 = t;
    int w_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_56 = NULL;
        t = term_u_15;
        t = get_config_0_0(t);
        a_56 = t;
        t = (ATerm) ATmakeAppl(sym__2, a_56, term_q_15);
        t = geq_0_0(t);
        t = t_55;
        t = t_105(t);
        LocalPopChoice(w_41);
      }
    else
      {
        t = v_41;
        t = t_55;
      }
  }
  return(t);
}
static ATerm r_9 (ATerm t)
{
  ATerm c_56 = NULL,d_56 = NULL,f_56 = NULL,g_56 = NULL;
  t = run_time_0_0(t);
  c_56 = t;
  t = term_t_11;
  t = whoami_0_0(t);
  d_56 = t;
  t = term_o_22;
  f_56 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_x_41), c_56), term_a_16), d_56);
  g_56 = t;
  t = SSL_printnl(f_56, g_56);
  t = (ATerm) ATmakeAppl(sym__2, term_o_22, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_x_41), c_56), term_a_16), d_56));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(r_9, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm k_56 = NULL;
  t = report_run_time_0_0(t);
  t = term_k_37;
  k_56 = t;
  t = SSL_exit(k_56);
  return(t);
}
static ATerm u_9 (ATerm t)
{
  ATerm a_57 = NULL,b_57 = NULL;
  b_57 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = b_57;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          a_57 = ATgetArgument(t, 0);
          {
            ATerm q_18 = NULL,h_6 = NULL;
            t = SSLgetAnnotations(b_57);
            q_18 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, a_57);
            h_6 = t;
            t = SSLsetAnnotations(h_6, q_18);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = b_57;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm h_107 (ATerm), ATerm t)
{
  ATerm y_41 = t;
  int z_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_a_42;
      t = get_config_0_0(t);
      LocalPopChoice(z_41);
    }
  else
    {
      t = y_41;
      t = fetch_1_0(u_9, t);
    }
  t = h_107(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm g_57 = NULL,h_57 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_57 = ATgetFirst((ATermList) t);
      h_57 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm l_57 = NULL,m_57 = NULL;
        static ATerm w_9 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(l_57)), not_null(m_57));
          return(t);
        }
        t = h_57;
        t = i_0(t);
        if(((l_57 != NULL) && (l_57 != t)))
          _fail(t);
        else
          l_57 = t;
        t = g_57;
        t = g_0(t);
        if(((m_57 != NULL) && (m_57 != t)))
          _fail(t);
        else
          m_57 = t;
        t = h_57;
        t = reverse_acc_2_0(g_0, w_9, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_t_11;
      t = i_0(t);
    }
  return(t);
}
static ATerm s_9 (ATerm y_53, ATerm z_53, ATerm t)
{
  t = SSL_table_get(y_53, z_53);
  return(t);
}
static ATerm x_9 (ATerm t)
{
  ATerm q_57 = NULL,r_57 = NULL,t_57 = NULL,r_6 = NULL;
  t_57 = t;
  if(match_cons(t, sym_Program_1))
    {
      r_57 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_57);
  q_57 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, r_57);
  r_6 = t;
  t = SSLsetAnnotations(r_6, q_57);
  return(t);
}
static ATerm y_9 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm z_9 (ATerm t)
{
  ATerm v_57 = NULL;
  v_57 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, v_57), term_c_42);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm o_57 = NULL,p_57 = NULL;
  ATerm d_42 = t;
  int e_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_n_41;
      t = get_config_0_0(t);
      LocalPopChoice(e_42);
    }
  else
    {
      t = d_42;
      t = fetch_1_0(x_9, t);
    }
  t = term_g_42;
  t = echo_0_0(t);
  t = term_k_38;
  o_57 = t;
  t = term_m_38;
  p_57 = t;
  t = term_h_42;
  t = s_9(o_57, p_57, t);
  t = reverse_acc_2_0(_id, y_9, t);
  t = map_1_0(z_9, t);
  return(t);
}
ATerm fetch_1_0 (ATerm f_91 (ATerm), ATerm t)
{
  static ATerm e_59 (ATerm t)
  {
    ATerm a_59 = NULL,b_59 = NULL,d_59 = NULL;
    a_59 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        b_59 = ATgetFirst((ATermList) t);
        d_59 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm i_42 = t;
      int j_42 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm e_19 = NULL,h_19 = NULL,v_6 = NULL;
          t = SSLgetAnnotations(a_59);
          e_19 = t;
          t = b_59;
          t = f_91(t);
          h_19 = t;
          t = (ATerm) ATinsert(CheckATermList(d_59), h_19);
          v_6 = t;
          t = SSLsetAnnotations(v_6, e_19);
          LocalPopChoice(j_42);
        }
      else
        {
          t = i_42;
          {
            ATerm a_20 = NULL,d_20 = NULL,w_6 = NULL;
            t = SSLgetAnnotations(a_59);
            a_20 = t;
            t = d_59;
            t = e_59(t);
            d_20 = t;
            t = (ATerm) ATinsert(CheckATermList(d_20), b_59);
            w_6 = t;
            t = SSLsetAnnotations(w_6, a_20);
          }
        }
    }
    return(t);
  }
  t = e_59(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm j_59 = NULL,k_59 = NULL,l_59 = NULL;
  j_59 = t;
  {
    ATerm k_42 = t;
    int l_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = j_59;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm n_42 = ATgetFirst((ATermList) t);
                ATerm p_42 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = j_59;
          }
        LocalPopChoice(l_42);
      }
    else
      {
        t = k_42;
        t = (ATerm) ATinsert(ATempty, j_59);
      }
  }
  k_59 = t;
  t = term_c_37;
  l_59 = t;
  t = SSL_printnl(l_59, k_59);
  t = j_59;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_n_41;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
static ATerm a_10 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm c_10 (ATerm t)
{
  ATerm p_59 = NULL,q_59 = NULL;
  t = term_q_42;
  p_59 = t;
  t = term_t_11;
  q_59 = t;
  t = term_s_42;
  t = v_9(p_59, q_59, t);
  return(t);
}
static ATerm d_10 (ATerm t)
{
  t = term_t_42;
  return(t);
}
static ATerm f_10 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm j_10 (ATerm t)
{
  ATerm r_59 = NULL,s_59 = NULL,t_59 = NULL,v_59 = NULL;
  t = term_q_42;
  t_59 = t;
  t = term_t_11;
  v_59 = t;
  t = term_s_42;
  t = v_9(t_59, v_59, t);
  t = term_u_42;
  r_59 = t;
  t = term_t_11;
  s_59 = t;
  t = term_f_43;
  t = v_9(r_59, s_59, t);
  t = term_g_43;
  return(t);
}
static ATerm l_10 (ATerm t)
{
  t = term_j_43;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm l_43 = t;
  int m_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(a_10, c_10, d_10, t);
      LocalPopChoice(m_43);
    }
  else
    {
      t = l_43;
      t = Option_3_0(f_10, j_10, l_10, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm v_61 (ATerm), ATerm w_61 (ATerm), ATerm t)
{
  ATerm w_59 = NULL,x_59 = NULL,y_59 = NULL,z_59 = NULL,a_60 = NULL,b_60 = NULL,c_7 = NULL;
  b_60 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_59 = ATgetFirst((ATermList) t);
      y_59 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_60);
  w_59 = t;
  t = x_59;
  t = v_61(t);
  z_59 = t;
  t = y_59;
  t = w_61(t);
  a_60 = t;
  t = (ATerm) ATinsert(CheckATermList(a_60), z_59);
  c_7 = t;
  t = SSLsetAnnotations(c_7, w_59);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm y_109 (ATerm), ATerm t)
{
  ATerm p_60 = NULL,q_60 = NULL,r_60 = NULL,s_60 = NULL,u_60 = NULL,v_60 = NULL,e_7 = NULL;
  p_60 = t;
  {
    ATerm r_43 = t;
    int s_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_t_43;
        t = y_109(t);
        LocalPopChoice(s_43);
      }
    else
      {
        t = r_43;
      }
  }
  t = p_60;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_60 = ATgetFirst((ATermList) t);
      s_60 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_60);
  q_60 = t;
  t = term_n_41;
  v_60 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_41, r_60);
  t = v_9(v_60, r_60, t);
  t = s_60;
  {
    static ATerm f_61 (ATerm t)
    {
      ATerm u_43 = t;
      int v_43 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm w_43 = t;
          int x_43 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm y_60 = NULL;
              y_60 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = y_60;
              LocalPopChoice(x_43);
            }
          else
            {
              t = w_43;
              t = y_109(t);
              t = Cons_2_0(_id, f_61, t);
            }
          LocalPopChoice(v_43);
        }
      else
        {
          t = u_43;
          {
            ATerm b_61 = NULL,c_61 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                b_61 = ATgetFirst((ATermList) t);
                c_61 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(c_61), (ATerm) ATmakeAppl(sym_Undefined_1, b_61));
          }
        }
      return(t);
    }
    t = f_61(t);
  }
  u_60 = t;
  t = (ATerm) ATinsert(CheckATermList(u_60), (ATerm) ATmakeAppl(sym_Program_1, r_60));
  e_7 = t;
  t = SSLsetAnnotations(e_7, q_60);
  return(t);
}
static ATerm o_10 (ATerm t)
{
  ATerm c_62 = NULL;
  c_62 = t;
  if(match_string(t, "--help"))
    {
      t = c_62;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = c_62;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = c_62;
        }
    }
  return(t);
}
static ATerm p_10 (ATerm t)
{
  ATerm d_62 = NULL,e_62 = NULL;
  t = term_a_42;
  d_62 = t;
  t = term_t_11;
  e_62 = t;
  t = term_y_43;
  t = v_9(d_62, e_62, t);
  t = term_z_43;
  return(t);
}
static ATerm r_10 (ATerm t)
{
  t = term_a_44;
  return(t);
}
static ATerm s_10 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm x_109 (ATerm), ATerm t)
{
  ATerm o_61 = NULL,p_61 = NULL,x_61 = NULL,y_61 = NULL,z_61 = NULL,a_62 = NULL,b_62 = NULL;
  x_61 = t;
  t = term_k_38;
  z_61 = t;
  t = term_m_38;
  a_62 = t;
  t = (ATerm) ATempty;
  b_62 = t;
  t = SSL_table_put(z_61, a_62, b_62);
  t = x_61;
  {
    static ATerm n_10 (ATerm t)
    {
      ATerm b_44 = t;
      int c_44 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = x_109(t);
          LocalPopChoice(c_44);
        }
      else
        {
          t = b_44;
          {
            ATerm d_44 = t;
            int g_44 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(o_10, p_10, r_10, t);
                LocalPopChoice(g_44);
              }
            else
              {
                t = d_44;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(n_10, t);
  }
  {
    ATerm h_44 = t;
    int i_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_62 = NULL;
        l_62 = t;
        {
          ATerm j_44 = t;
          int k_44 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm m_20 = NULL;
              t = l_62;
              {
                ATerm l_44 = t;
                int m_44 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_a_42;
                    t = get_config_0_0(t);
                    LocalPopChoice(m_44);
                  }
                else
                  {
                    t = l_44;
                    t = fetch_1_0(s_10, t);
                  }
              }
              t = l_62;
              t = default_system_usage_0_0(t);
              t = term_k_37;
              m_20 = t;
              t = SSL_exit(m_20);
              LocalPopChoice(k_44);
            }
          else
            {
              t = j_44;
              {
                ATerm u_20 = NULL;
                t = term_q_42;
                t = get_config_0_0(t);
                t = l_62;
                t = default_system_about_0_0(t);
                t = term_k_37;
                u_20 = t;
                t = SSL_exit(u_20);
              }
            }
        }
        LocalPopChoice(i_44);
      }
    else
      {
        t = h_44;
        {
          ATerm n_44 = t;
          int q_44 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm m_62 = NULL,n_62 = NULL,o_62 = NULL;
              static ATerm u_10 (ATerm t)
              {
                ATerm p_62 = NULL,q_62 = NULL,r_62 = NULL,n_7 = NULL;
                r_62 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    q_62 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(r_62);
                p_62 = t;
                t = q_62;
                if(((o_61 != NULL) && (o_61 != t)))
                  _fail(t);
                else
                  o_61 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, q_62);
                n_7 = t;
                t = SSLsetAnnotations(n_7, p_62);
                return(t);
              }
              t = fetch_1_0(u_10, t);
              t = term_o_22;
              n_62 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(o_61)), term_r_44);
              o_62 = t;
              t = SSL_printnl(n_62, o_62);
              t = (ATerm) ATmakeAppl(sym__2, term_o_22, (ATerm) ATinsert(ATinsert(ATempty, not_null(o_61)), term_r_44));
              t = default_system_usage_0_0(t);
              t = term_q_15;
              m_62 = t;
              t = SSL_exit(m_62);
              LocalPopChoice(q_44);
            }
          else
            {
              t = n_44;
            }
        }
      }
  }
  p_61 = t;
  t = term_k_38;
  y_61 = t;
  t = SSL_table_destroy(y_61);
  t = p_61;
  return(t);
}
ATerm option_wrap_4_0 (ATerm j_107 (ATerm), ATerm k_107 (ATerm), ATerm l_107 (ATerm), ATerm m_107 (ATerm), ATerm t)
{
  ATerm w_62 = NULL,x_62 = NULL,y_62 = NULL,z_62 = NULL;
  t = parse_options_1_0(j_107, t);
  w_62 = t;
  t = term_s_44;
  z_62 = t;
  t = SSL_table_create(z_62);
  t = term_s_44;
  x_62 = t;
  t = term_t_44;
  y_62 = t;
  t = SSL_table_put(x_62, y_62, w_62);
  t = w_62;
  t = l_107(t);
  {
    ATerm u_44 = t;
    int v_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(k_107, t);
        LocalPopChoice(v_44);
      }
    else
      {
        t = u_44;
        {
          ATerm w_44 = t;
          int x_44 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = m_107(t);
              t = report_success_0_0(t);
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
static ATerm v_10 (ATerm t)
{
  ATerm y_44 = t;
  int z_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = pack_stratego_options_0_0(t);
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
                  LocalPopChoice(d_45);
                }
              else
                {
                  t = c_45;
                  {
                    ATerm n_45 = t;
                    int q_45 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Option_3_0(x_10, y_10, a_11, t);
                        LocalPopChoice(q_45);
                      }
                    else
                      {
                        t = n_45;
                        {
                          ATerm s_45 = t;
                          int v_45 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = verbose_option_0_0(t);
                              LocalPopChoice(v_45);
                            }
                          else
                            {
                              t = s_45;
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
static ATerm x_10 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm y_10 (ATerm t)
{
  ATerm f_63 = NULL,g_63 = NULL;
  t = term_w_45;
  f_63 = t;
  t = term_t_11;
  g_63 = t;
  t = term_x_45;
  t = v_9(f_63, g_63, t);
  t = term_y_45;
  return(t);
}
static ATerm a_11 (ATerm t)
{
  t = term_a_46;
  return(t);
}
static ATerm c_11 (ATerm t)
{
  t = get_filename_0_0(t);
  t = basename_1_0(_id, t);
  return(t);
}
static ATerm d_11 (ATerm t)
{
  ATerm m_63 = NULL,n_63 = NULL,o_63 = NULL,p_63 = NULL,q_63 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm b_46 = ATgetArgument(t, 0);
      if(match_cons(b_46, sym_Stream_1))
        {
          p_63 = ATgetArgument(b_46, 0);
        }
      else
        _fail(t);
      q_63 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_8(p_63, q_63, t);
  m_63 = t;
  t = term_j_20;
  n_63 = t;
  t = m_63;
  if(match_cons(t, sym_Stream_1))
    {
      o_63 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_j_20, m_63);
  t = e_8(n_63, o_63, t);
  return(t);
}
static ATerm e_11 (ATerm t)
{
  ATerm t_63 = NULL,u_63 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm c_46 = ATgetArgument(t, 0);
      if(match_cons(c_46, sym_Stream_1))
        {
          t_63 = ATgetArgument(c_46, 0);
        }
      else
        _fail(t);
      u_63 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_8(t_63, u_63, t);
  return(t);
}
ATerm pack_stratego_0_0 (ATerm t)
{
  ATerm d_63 = NULL,e_63 = NULL;
  static ATerm w_10 (ATerm t)
  {
    static ATerm b_11 (ATerm t)
    {
      ATerm i_63 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          i_63 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = l_9(i_63, t);
      if(match_cons(t, sym__2))
        {
          if(((d_63 != NULL) && (d_63 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            d_63 = ATgetArgument(t, 0);
          if(((e_63 != NULL) && (e_63 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            e_63 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm d_46 = t;
        int e_46 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_63 = NULL,k_63 = NULL;
            t = term_e_40;
            t = get_config_0_0(t);
            t = d_63;
            t = map_1_0(c_11, t);
            k_63 = t;
            t = xtc_new_file_0_0(t);
            j_63 = t;
            t = (ATerm) ATmakeAppl(sym__2, j_63, k_63);
            t = g_8(d_11, j_63, k_63, t);
            t = (ATerm) ATmakeAppl(sym_FILE_1, j_63);
            LocalPopChoice(e_46);
          }
        else
          {
            t = d_46;
            {
              ATerm r_63 = NULL;
              ATerm f_46 = t;
              int g_46 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = d_63;
                  t = create_dep_file_0_0(t);
                  LocalPopChoice(g_46);
                }
              else
                {
                  t = f_46;
                }
              t = e_63;
              t = xtc_new_file_0_0(t);
              r_63 = t;
              t = (ATerm) ATmakeAppl(sym__2, r_63, e_63);
              t = g_8(e_11, r_63, e_63, t);
              t = (ATerm) ATmakeAppl(sym_FILE_1, r_63);
            }
          }
      }
      return(t);
    }
    t = xtc_io_1_0(b_11, t);
    return(t);
  }
  t = option_wrap_4_0(v_10, default_usage_0_0, _id, w_10, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = pack_stratego_0_0(t);
  return(t);
}
