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
Symbol sym_Path_2;
Symbol sym_Path_1;
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
  sym_Path_2 = ATmakeSymbol("Path", 2, ATfalse);
  ATprotectSymbol(sym_Path_2);
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
}
ATerm term_k_47;
ATerm term_f_47;
ATerm term_x_46;
ATerm term_w_46;
ATerm term_u_46;
ATerm term_t_46;
ATerm term_g_45;
ATerm term_f_45;
ATerm term_e_45;
ATerm term_b_45;
ATerm term_l_44;
ATerm term_k_44;
ATerm term_j_44;
ATerm term_e_44;
ATerm term_z_43;
ATerm term_t_43;
ATerm term_s_43;
ATerm term_r_43;
ATerm term_q_43;
ATerm term_n_43;
ATerm term_k_43;
ATerm term_y_42;
ATerm term_x_42;
ATerm term_s_42;
ATerm term_r_42;
ATerm term_q_42;
ATerm term_h_42;
ATerm term_d_41;
ATerm term_y_40;
ATerm term_x_40;
ATerm term_c_40;
ATerm term_b_40;
ATerm term_z_39;
ATerm term_y_39;
ATerm term_x_39;
ATerm term_w_39;
ATerm term_v_39;
ATerm term_u_39;
ATerm term_p_39;
ATerm term_o_39;
ATerm term_m_39;
ATerm term_h_39;
ATerm term_t_38;
ATerm term_s_38;
ATerm term_r_38;
ATerm term_q_38;
ATerm term_h_38;
ATerm term_e_38;
ATerm term_d_38;
ATerm term_c_38;
ATerm term_b_38;
ATerm term_a_38;
ATerm term_x_37;
ATerm term_u_37;
ATerm term_t_37;
ATerm term_s_37;
ATerm term_p_37;
ATerm term_o_37;
ATerm term_m_37;
ATerm term_m_34;
ATerm term_s_32;
ATerm term_r_32;
ATerm term_o_32;
ATerm term_j_32;
ATerm term_g_32;
ATerm term_e_32;
ATerm term_b_32;
ATerm term_a_32;
ATerm term_g_31;
ATerm term_a_30;
ATerm term_t_29;
ATerm term_s_29;
ATerm term_h_29;
ATerm term_e_29;
ATerm term_q_28;
ATerm term_w_27;
ATerm term_v_27;
ATerm term_t_27;
ATerm term_s_27;
ATerm term_e_27;
ATerm term_t_26;
ATerm term_s_26;
ATerm term_j_26;
ATerm term_f_26;
ATerm term_e_26;
ATerm term_d_26;
ATerm term_c_26;
ATerm term_z_25;
ATerm term_y_25;
ATerm term_q_25;
ATerm term_p_25;
ATerm term_n_25;
ATerm term_m_25;
ATerm term_l_25;
ATerm term_k_25;
ATerm term_g_25;
ATerm term_z_24;
ATerm term_y_24;
ATerm term_x_24;
ATerm term_v_24;
ATerm term_m_23;
ATerm term_g_23;
ATerm term_r_22;
ATerm term_q_22;
ATerm term_p_22;
ATerm term_o_22;
ATerm term_n_22;
ATerm term_m_22;
ATerm term_l_22;
ATerm term_k_22;
ATerm term_j_22;
ATerm term_i_22;
ATerm term_h_22;
ATerm term_g_22;
ATerm term_f_22;
ATerm term_e_22;
ATerm term_d_22;
ATerm term_c_22;
ATerm term_b_22;
ATerm term_a_22;
ATerm term_z_21;
ATerm term_y_21;
ATerm term_x_21;
ATerm term_w_21;
ATerm term_v_21;
ATerm term_u_21;
ATerm term_t_21;
ATerm term_s_21;
ATerm term_r_21;
ATerm term_q_21;
ATerm term_n_21;
ATerm term_m_21;
ATerm term_k_21;
ATerm term_j_21;
ATerm term_i_21;
ATerm term_g_21;
ATerm term_e_21;
ATerm term_d_21;
ATerm term_c_21;
ATerm term_a_21;
ATerm term_z_20;
ATerm term_y_20;
ATerm term_x_20;
ATerm term_v_20;
ATerm term_r_20;
ATerm term_q_20;
ATerm term_p_20;
ATerm term_n_20;
ATerm term_h_20;
ATerm term_f_20;
ATerm term_e_20;
ATerm term_d_20;
ATerm term_z_19;
ATerm term_x_19;
ATerm term_w_19;
ATerm term_v_19;
ATerm term_u_19;
ATerm term_s_19;
ATerm term_r_19;
ATerm term_p_19;
ATerm term_l_19;
ATerm term_k_19;
ATerm term_j_19;
ATerm term_g_19;
ATerm term_f_19;
ATerm term_e_19;
ATerm term_d_19;
ATerm term_c_19;
ATerm term_a_19;
ATerm term_z_18;
ATerm term_y_18;
ATerm term_x_18;
ATerm term_w_18;
ATerm term_u_18;
ATerm term_t_18;
ATerm term_s_18;
ATerm term_r_18;
ATerm term_q_18;
ATerm term_o_18;
ATerm term_n_18;
ATerm term_m_18;
ATerm term_l_18;
ATerm term_j_18;
ATerm term_i_18;
ATerm term_h_18;
ATerm term_g_18;
ATerm term_f_18;
ATerm term_e_18;
ATerm term_d_18;
ATerm term_c_18;
ATerm term_b_18;
ATerm term_a_18;
ATerm term_y_17;
ATerm term_x_17;
ATerm term_w_17;
ATerm term_v_17;
ATerm term_t_17;
ATerm term_s_17;
ATerm term_r_17;
ATerm term_q_17;
ATerm term_k_17;
ATerm term_i_17;
ATerm term_h_17;
ATerm term_g_17;
ATerm term_f_17;
ATerm term_e_17;
ATerm term_d_17;
ATerm term_c_17;
ATerm term_b_17;
ATerm term_z_16;
ATerm term_y_16;
ATerm term_x_16;
ATerm term_v_16;
ATerm term_q_16;
ATerm term_p_16;
ATerm term_o_16;
ATerm term_m_16;
ATerm term_j_16;
ATerm term_g_16;
ATerm term_z_15;
ATerm term_y_15;
ATerm term_q_15;
ATerm term_p_15;
ATerm term_n_14;
ATerm term_l_14;
ATerm term_k_14;
ATerm term_a_14;
ATerm term_x_13;
ATerm term_w_13;
ATerm term_n_13;
ATerm term_l_13;
ATerm term_a_13;
ATerm term_y_12;
ATerm term_q_12;
ATerm term_p_12;
ATerm term_o_12;
ATerm term_l_12;
ATerm term_k_12;
ATerm term_h_12;
ATerm term_e_12;
ATerm term_c_12;
ATerm term_z_11;
ATerm term_y_11;
ATerm term_v_11;
ATerm term_t_11;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeAppl(sym__2, term_t_11, term_v_11);
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeAppl(ATmakeSymbol("XXXXXX", 0, ATtrue));
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/mkstemp", 0, ATtrue));
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeAppl(ATmakeSymbol("/StrategoXT", 0, ATtrue));
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file> (file, mode)", 0, ATtrue));
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--dep", 0, ATtrue));
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeAppl(sym__2, term_t_11, term_l_13);
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--nodep", 0, ATtrue));
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(sym__2, term_t_11, term_w_13);
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(ATmakeSymbol(".", 0, ATtrue));
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeAppl(ATmakeSymbol("dep", 0, ATtrue));
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(ATmakeSymbol(" \\\n	", 0, ATtrue));
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeAppl(ATmakeSymbol(" :", 0, ATtrue));
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(sym__2, term_t_11, term_q_15);
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeAppl(sym__2, term_t_11, term_g_16);
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_16, term_z_15, term_x_16);
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_b_17));
  term_b_17 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_c_17));
  term_c_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_16, term_b_17, term_c_17);
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_g_17));
  term_g_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_h_17));
  term_h_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_17, term_f_17, term_g_17);
  ATprotect(&(term_i_17));
  term_i_17 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_k_17));
  term_k_17 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_q_17));
  term_q_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_r_17));
  term_r_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_17, term_k_17, term_q_17);
  ATprotect(&(term_s_17));
  term_s_17 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_t_17));
  term_t_17 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_v_17));
  term_v_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_w_17));
  term_w_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_17, term_t_17, term_v_17);
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_y_17));
  term_y_17 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_a_18));
  term_a_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_17, term_y_17, term_a_18);
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_d_18));
  term_d_18 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_e_18));
  term_e_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_f_18));
  term_f_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_18, term_d_18, term_e_18);
  ATprotect(&(term_g_18));
  term_g_18 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_h_18));
  term_h_18 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_i_18));
  term_i_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_j_18));
  term_j_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_18, term_h_18, term_i_18);
  ATprotect(&(term_l_18));
  term_l_18 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_m_18));
  term_m_18 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_n_18));
  term_n_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_o_18));
  term_o_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_18, term_m_18, term_n_18);
  ATprotect(&(term_q_18));
  term_q_18 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_r_18));
  term_r_18 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_s_18));
  term_s_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_t_18));
  term_t_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_18, term_r_18, term_s_18);
  ATprotect(&(term_u_18));
  term_u_18 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_w_18));
  term_w_18 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_x_18));
  term_x_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_y_18));
  term_y_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_18, term_w_18, term_x_18);
  ATprotect(&(term_z_18));
  term_z_18 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_a_19));
  term_a_19 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_c_19));
  term_c_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_d_19));
  term_d_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_18, term_a_19, term_c_19);
  ATprotect(&(term_e_19));
  term_e_19 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_f_19));
  term_f_19 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_j_19));
  term_j_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_19, term_f_19, term_g_19);
  ATprotect(&(term_k_19));
  term_k_19 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_l_19));
  term_l_19 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_p_19));
  term_p_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_r_19));
  term_r_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_19, term_l_19, term_p_19);
  ATprotect(&(term_s_19));
  term_s_19 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_u_19));
  term_u_19 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_v_19));
  term_v_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_w_19));
  term_w_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_19, term_u_19, term_v_19);
  ATprotect(&(term_x_19));
  term_x_19 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_z_19));
  term_z_19 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_d_20));
  term_d_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_e_20));
  term_e_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_19, term_z_19, term_d_20);
  ATprotect(&(term_f_20));
  term_f_20 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_h_20));
  term_h_20 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_n_20));
  term_n_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_p_20));
  term_p_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_20, term_h_20, term_n_20);
  ATprotect(&(term_q_20));
  term_q_20 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_r_20));
  term_r_20 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_v_20));
  term_v_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_x_20));
  term_x_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_20, term_r_20, term_v_20);
  ATprotect(&(term_y_20));
  term_y_20 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_z_20));
  term_z_20 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_a_21));
  term_a_21 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_c_21));
  term_c_21 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_20, term_z_20, term_a_21);
  ATprotect(&(term_d_21));
  term_d_21 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_e_21));
  term_e_21 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_g_21));
  term_g_21 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_i_21));
  term_i_21 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_21, term_e_21, term_g_21);
  ATprotect(&(term_j_21));
  term_j_21 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_m_21));
  term_m_21 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_n_21));
  term_n_21 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_21, term_k_21, term_m_21);
  ATprotect(&(term_q_21));
  term_q_21 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_r_21));
  term_r_21 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_s_21));
  term_s_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_t_21));
  term_t_21 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_21, term_r_21, term_s_21);
  ATprotect(&(term_u_21));
  term_u_21 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_v_21));
  term_v_21 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_w_21));
  term_w_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_x_21));
  term_x_21 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_21, term_v_21, term_w_21);
  ATprotect(&(term_y_21));
  term_y_21 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_z_21));
  term_z_21 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_a_22));
  term_a_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_b_22));
  term_b_22 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_21, term_z_21, term_a_22);
  ATprotect(&(term_c_22));
  term_c_22 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_d_22));
  term_d_22 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_e_22));
  term_e_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_f_22));
  term_f_22 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_22, term_d_22, term_e_22);
  ATprotect(&(term_g_22));
  term_g_22 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_h_22));
  term_h_22 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_i_22));
  term_i_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_j_22));
  term_j_22 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_22, term_h_22, term_i_22);
  ATprotect(&(term_k_22));
  term_k_22 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_l_22));
  term_l_22 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_m_22));
  term_m_22 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_n_22));
  term_n_22 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_22, term_l_22, term_m_22);
  ATprotect(&(term_o_22));
  term_o_22 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_p_22));
  term_p_22 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_q_22));
  term_q_22 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_r_22));
  term_r_22 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_22, term_p_22, term_q_22);
  ATprotect(&(term_g_23));
  term_g_23 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_m_23));
  term_m_23 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_v_24));
  term_v_24 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_x_24));
  term_x_24 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_y_24));
  term_y_24 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_z_24));
  term_z_24 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_g_25));
  term_g_25 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_k_25));
  term_k_25 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_l_25));
  term_l_25 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_m_25));
  term_m_25 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_n_25));
  term_n_25 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_p_25));
  term_p_25 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_q_25));
  term_q_25 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_y_25));
  term_y_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_z_25));
  term_z_25 = (ATerm) ATmakeAppl(sym__2, term_t_11, term_y_25);
  ATprotect(&(term_c_26));
  term_c_26 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_d_26));
  term_d_26 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_e_26));
  term_e_26 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_f_26));
  term_f_26 = (ATerm) ATmakeAppl(sym__2, term_p_25, term_e_26);
  ATprotect(&(term_j_26));
  term_j_26 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_s_26));
  term_s_26 = (ATerm) ATmakeAppl(sym__2, term_p_25, term_q_25);
  ATprotect(&(term_t_26));
  term_t_26 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_e_27));
  term_e_27 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_s_27));
  term_s_27 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_t_27));
  term_t_27 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_v_27));
  term_v_27 = (ATerm) ATmakeInt(-1);
  ATprotect(&(term_w_27));
  term_w_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_q_28));
  term_q_28 = (ATerm) ATmakeAppl(ATmakeSymbol("parse error in ", 0, ATtrue));
  ATprotect(&(term_e_29));
  term_e_29 = (ATerm) ATmakeAppl(ATmakeSymbol("parse-stratego", 0, ATtrue));
  ATprotect(&(term_h_29));
  term_h_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--asfix", 0, ATtrue));
  ATprotect(&(term_s_29));
  term_s_29 = (ATerm) ATmakeAppl(sym__2, term_t_11, term_h_29);
  ATprotect(&(term_t_29));
  term_t_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue));
  ATprotect(&(term_a_30));
  term_a_30 = (ATerm) ATmakeAppl(sym__2, term_t_11, term_t_29);
  ATprotect(&(term_g_31));
  term_g_31 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
  ATprotect(&(term_a_32));
  term_a_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--slack", 0, ATtrue));
  ATprotect(&(term_b_32));
  term_b_32 = (ATerm) ATmakeAppl(sym__2, term_t_11, term_a_32);
  ATprotect(&(term_e_32));
  term_e_32 = (ATerm) ATmakeAppl(ATmakeSymbol("*** module ", 0, ATtrue));
  ATprotect(&(term_g_32));
  term_g_32 = (ATerm) ATmakeAppl(ATmakeSymbol(" not found", 0, ATtrue));
  ATprotect(&(term_j_32));
  term_j_32 = (ATerm) ATmakeAppl(ATmakeSymbol(" reading ", 0, ATtrue));
  ATprotect(&(term_o_32));
  term_o_32 = (ATerm) ATmakeAppl(ATmakeSymbol("rtree", 0, ATtrue));
  ATprotect(&(term_r_32));
  term_r_32 = (ATerm) ATmakeAppl(ATmakeSymbol("str", 0, ATtrue));
  ATprotect(&(term_s_32));
  term_s_32 = (ATerm) ATmakeAppl(ATmakeSymbol("cr", 0, ATtrue));
  ATprotect(&(term_m_34));
  term_m_34 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_m_37));
  term_m_37 = (ATerm) ATmakeAppl(sym__2, term_o_12, term_h_12);
  ATprotect(&(term_o_37));
  term_o_37 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_p_37));
  term_p_37 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_s_37));
  term_s_37 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_t_37));
  term_t_37 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_u_37));
  term_u_37 = (ATerm) ATmakeAppl(sym__2, term_g_16, term_t_37);
  ATprotect(&(term_x_37));
  term_x_37 = (ATerm) ATmakeAppl(sym_Verbose_1, term_t_37);
  ATprotect(&(term_a_38));
  term_a_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_b_38));
  term_b_38 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_c_38));
  term_c_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_d_38));
  term_d_38 = (ATerm) ATmakeAppl(sym__2, term_c_38, term_q_12);
  ATprotect(&(term_e_38));
  term_e_38 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_h_38));
  term_h_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_q_38));
  term_q_38 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_r_38));
  term_r_38 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_s_38));
  term_s_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_t_38));
  term_t_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_h_39));
  term_h_39 = (ATerm) ATmakeAppl(ATmakeSymbol("-I d | --Include d   Include modules from directory d", 0, ATtrue));
  ATprotect(&(term_m_39));
  term_m_39 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_o_39));
  term_o_39 = (ATerm) ATmakeAppl(sym__2, term_w_13, term_m_39);
  ATprotect(&(term_p_39));
  term_p_39 = (ATerm) ATmakeAppl(ATmakeSymbol("--nodep              Don't create dependency file", 0, ATtrue));
  ATprotect(&(term_u_39));
  term_u_39 = (ATerm) ATmakeAppl(ATmakeSymbol("--dep f | -d f       Write dependency to file f", 0, ATtrue));
  ATprotect(&(term_v_39));
  term_v_39 = (ATerm) ATmakeAppl(ATmakeSymbol("--imports", 0, ATtrue));
  ATprotect(&(term_w_39));
  term_w_39 = (ATerm) ATmakeAppl(sym__2, term_v_39, term_q_12);
  ATprotect(&(term_x_39));
  term_x_39 = (ATerm) ATmakeAppl(ATmakeSymbol("--imports            Produce a list of imported modules only", 0, ATtrue));
  ATprotect(&(term_y_39));
  term_y_39 = (ATerm) ATmakeAppl(sym__2, term_a_32, term_q_12);
  ATprotect(&(term_z_39));
  term_z_39 = (ATerm) ATmakeAppl(ATmakeSymbol("--slack              Continue when module is not found", 0, ATtrue));
  ATprotect(&(term_b_40));
  term_b_40 = (ATerm) ATmakeAppl(sym__2, term_h_29, term_m_39);
  ATprotect(&(term_c_40));
  term_c_40 = (ATerm) ATmakeAppl(ATmakeSymbol("--asfix              Do not implode the concrete syntax parts", 0, ATtrue));
  ATprotect(&(term_x_40));
  term_x_40 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_y_40));
  term_y_40 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_d_41));
  term_d_41 = (ATerm) ATmakeAppl(sym__2, term_t_11, term_y_40);
  ATprotect(&(term_h_42));
  term_h_42 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_q_42));
  term_q_42 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_r_42));
  term_r_42 = (ATerm) ATmakeAppl(sym__2, term_t_11, term_q_42);
  ATprotect(&(term_s_42));
  term_s_42 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_x_42));
  term_x_42 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_y_42));
  term_y_42 = (ATerm) ATmakeAppl(sym__2, term_q_38, term_r_38);
  ATprotect(&(term_k_43));
  term_k_43 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_n_43));
  term_n_43 = (ATerm) ATmakeAppl(sym__2, term_k_43, term_q_12);
  ATprotect(&(term_q_43));
  term_q_43 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_r_43));
  term_r_43 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_s_43));
  term_s_43 = (ATerm) ATmakeAppl(sym__2, term_r_43, term_q_12);
  ATprotect(&(term_t_43));
  term_t_43 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_z_43));
  term_z_43 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_e_44));
  term_e_44 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_j_44));
  term_j_44 = (ATerm) ATmakeAppl(sym__2, term_q_42, term_q_12);
  ATprotect(&(term_k_44));
  term_k_44 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_l_44));
  term_l_44 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_b_45));
  term_b_45 = (ATerm) ATmakeAppl(sym__2, term_t_11, term_k_43);
  ATprotect(&(term_e_45));
  term_e_45 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_f_45));
  term_f_45 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_g_45));
  term_g_45 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_t_46));
  term_t_46 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_u_46));
  term_u_46 = (ATerm) ATmakeAppl(sym__2, term_t_46, term_q_12);
  ATprotect(&(term_w_46));
  term_w_46 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_x_46));
  term_x_46 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_f_47));
  term_f_47 = (ATerm) ATmakeAppl(sym__2, term_t_11, term_w_27);
  ATprotect(&(term_k_47));
  term_k_47 = (ATerm) ATmakeAppl(sym__2, term_t_11, term_v_39);
}
#include <srts/init-stratego-application.h>
ATerm copy_to_1_0 (ATerm o_0 (ATerm), ATerm t);
static ATerm j_9 (ATerm m_44, ATerm n_44, ATerm t);
static ATerm a_0 (ATerm t);
ATerm xtc_write_output_0_0 (ATerm t);
static ATerm x_7 (ATerm d_23, ATerm e_23, ATerm t);
static ATerm c_8 (ATerm c_91 (ATerm), ATerm c_170, ATerm n_23, ATerm t);
static ATerm r_8 (ATerm m_104 (ATerm), ATerm w_42, ATerm u_42, ATerm t);
ATerm mkstemp_0_0 (ATerm t);
ATerm P__tmpdir_0_0 (ATerm t);
static ATerm b_0 (ATerm t);
ATerm xtc_new_file_0_0 (ATerm t);
static ATerm y_7 (ATerm r_23, ATerm s_23, ATerm t);
static ATerm u_5 (ATerm g_5, ATerm t);
static ATerm w_5 (ATerm i_5, ATerm j_5, ATerm k_5, ATerm t);
static ATerm f_0 (ATerm t);
ATerm open_file_0_0 (ATerm t);
ATerm create_dep_file_0_0 (ATerm t);
static ATerm a_8 (ATerm m_38, ATerm n_38, ATerm t);
static ATerm b_8 (ATerm h_23, ATerm i_23, ATerm t);
ATerm basename_1_0 (ATerm b_102 (ATerm), ATerm t);
ATerm at_suffix_rev_1_0 (ATerm k_92 (ATerm), ATerm t);
ATerm get_filename_0_0 (ATerm t);
ATerm map_1_0 (ATerm l_91 (ATerm), ATerm t);
static ATerm o_9 (ATerm g_54, ATerm h_54, ATerm t);
static ATerm m_0 (ATerm t);
static ATerm q_0 (ATerm t);
ATerm flatten_stratego_0_0 (ATerm t);
ATerm genzip_4_0 (ATerm p_93 (ATerm), ATerm q_93 (ATerm), ATerm r_93 (ATerm), ATerm s_93 (ATerm), ATerm t);
static ATerm s_0 (ATerm t);
static ATerm g_8 (ATerm j_136, ATerm t);
ATerm read_from_0_0 (ATerm t);
ATerm pass_keep_0_0 (ATerm t);
static ATerm h_8 (ATerm o_41, ATerm p_41, ATerm t);
ATerm pass_verbose_0_0 (ATerm t);
static ATerm t_0 (ATerm t);
ATerm xtc_transform_term_2_0 (ATerm g_115 (ATerm), ATerm h_115 (ATerm), ATerm t);
static ATerm i_8 (ATerm r_48, ATerm s_48, ATerm t);
ATerm signal_to_descr_0_0 (ATerm t);
ATerm signal_from_number_0_0 (ATerm t);
ATerm warn_ifsignaled_0_0 (ATerm t);
ATerm fork_0_0 (ATerm t);
ATerm fork_and_wait_1_0 (ATerm e_107 (ATerm), ATerm t);
ATerm table_getlist_0_0 (ATerm t);
ATerm if_verbose5_1_0 (ATerm x_106 (ATerm), ATerm t);
ATerm if_verbose4_1_0 (ATerm w_106 (ATerm), ATerm t);
ATerm if_verbose6_1_0 (ATerm y_106 (ATerm), ATerm t);
static ATerm l_8 (ATerm w_95 (ATerm), ATerm l_29, ATerm k_29, ATerm t);
static ATerm a_1 (ATerm t);
static ATerm m_8 (ATerm m_53, ATerm n_53, ATerm o_53, ATerm t);
static ATerm n_8 (ATerm b_111 (ATerm), ATerm w_53, ATerm v_53, ATerm t);
static ATerm e_25 (ATerm w_24, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm o_8 (ATerm j_23, ATerm t);
static ATerm s_8 (ATerm f_37, ATerm g_37, ATerm t);
static ATerm p_8 (ATerm o_38, ATerm p_38, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm k_27 (ATerm g_26, ATerm t);
static ATerm m_27 (ATerm m_26, ATerm n_26, ATerm o_26, ATerm t);
static ATerm n_27 (ATerm x_26, ATerm y_26, ATerm z_26, ATerm t);
static ATerm q_8 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
static ATerm f_1 (ATerm t);
static ATerm g_1 (ATerm t);
ATerm read_repository_file_0_0 (ATerm t);
static ATerm h_1 (ATerm t);
static ATerm j_1 (ATerm t);
static ATerm m_1 (ATerm t);
static ATerm p_1 (ATerm t);
static ATerm t_1 (ATerm t);
static ATerm u_1 (ATerm t);
static ATerm v_1 (ATerm t);
static ATerm y_1 (ATerm t);
ATerm xtc_read_0_0 (ATerm t);
ATerm repeat_2_0 (ATerm z_83 (ATerm), ATerm a_84 (ATerm), ATerm t);
ATerm xtc_location_0_0 (ATerm t);
static ATerm a_2 (ATerm t);
static ATerm b_2 (ATerm t);
static ATerm c_2 (ATerm t);
static ATerm d_2 (ATerm t);
static ATerm e_2 (ATerm t);
ATerm xtc_load_0_0 (ATerm t);
static ATerm g_2 (ATerm t);
static ATerm h_2 (ATerm t);
static ATerm d_32 (ATerm h_31, ATerm t);
static ATerm o_2 (ATerm t);
static ATerm q_2 (ATerm t);
static ATerm r_2 (ATerm t);
static ATerm s_2 (ATerm t);
ATerm xtc_find_0_0 (ATerm t);
ATerm xtc_command_1_0 (ATerm h_116 (ATerm), ATerm t);
ATerm xtc_transform_file_2_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t);
static ATerm n_35 (ATerm x_32, ATerm y_32, ATerm z_32, ATerm t);
static ATerm o_35 (ATerm a_35, ATerm b_35, ATerm t);
static ATerm a_3 (ATerm t);
static ATerm b_3 (ATerm t);
static ATerm c_3 (ATerm t);
static ATerm i_3 (ATerm t);
ATerm parse_module_0_0 (ATerm t);
ATerm debug_1_0 (ATerm a_91 (ATerm), ATerm t);
ATerm if_verbose3_1_0 (ATerm v_106 (ATerm), ATerm t);
ATerm fetch_elem_1_0 (ATerm x_91 (ATerm), ATerm t);
static ATerm t_8 (ATerm f_38, ATerm g_38, ATerm t);
ATerm is_relpath_0_0 (ATerm t);
static ATerm u_8 (ATerm f_83 (ATerm), ATerm p_21, ATerm o_21, ATerm t);
static ATerm u_3 (ATerm t);
ATerm get_module_1_0 (ATerm e_83 (ATerm), ATerm t);
static ATerm w_8 (ATerm z_95 (ATerm), ATerm a_96 (ATerm), ATerm p_29, ATerm o_29, ATerm t);
static ATerm x_8 (ATerm r_95 (ATerm), ATerm j_29, ATerm i_29, ATerm t);
static ATerm b_4 (ATerm t);
static ATerm g_4 (ATerm t);
static ATerm h_4 (ATerm t);
static ATerm c_9 (ATerm f_608, ATerm k_608, ATerm m_57, ATerm t);
static ATerm i_4 (ATerm t);
static ATerm j_4 (ATerm t);
static ATerm l_4 (ATerm t);
static ATerm a_42 (ATerm q_40, ATerm r_40, ATerm s_40, ATerm t);
static ATerm n_4 (ATerm t);
ATerm diff_0_0 (ATerm t);
static ATerm e_9 (ATerm d_117 (ATerm), ATerm e_117 (ATerm), ATerm f_117 (ATerm), ATerm z_60, ATerm w_60, ATerm d_61, ATerm a_61, ATerm x_60, ATerm y_60, ATerm t);
ATerm GnNext_3_0 (ATerm d_117 (ATerm), ATerm e_117 (ATerm), ATerm f_117 (ATerm), ATerm t);
ATerm while_not_2_0 (ATerm q_84 (ATerm), ATerm r_84 (ATerm), ATerm t);
ATerm for_3_0 (ATerm t_84 (ATerm), ATerm u_84 (ATerm), ATerm v_84 (ATerm), ATerm t);
static ATerm o_4 (ATerm t);
static ATerm p_4 (ATerm t);
ATerm graph_nodes_roots_3_0 (ATerm a_117 (ATerm), ATerm b_117 (ATerm), ATerm c_117 (ATerm), ATerm t);
ATerm filter_1_0 (ATerm g_99 (ATerm), ATerm t);
static ATerm u_4 (ATerm t);
static ATerm w_4 (ATerm t);
static ATerm a_5 (ATerm t);
static ATerm c_5 (ATerm t);
static ATerm d_5 (ATerm t);
static ATerm f_5 (ATerm t);
static ATerm h_9 (ATerm f_21, ATerm t);
static ATerm k_9 (ATerm u_52, ATerm v_52, ATerm t);
ATerm end_scope_1_0 (ATerm j_104 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm v_83 (ATerm), ATerm w_83 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm i_104 (ATerm), ATerm t);
static ATerm l_5 (ATerm t);
static ATerm n_5 (ATerm t);
static ATerm r_5 (ATerm t);
ATerm xtc_temp_files_1_0 (ATerm t_115 (ATerm), ATerm t);
ATerm default_usage_0_0 (ATerm t);
static ATerm s_5 (ATerm t);
static ATerm v_5 (ATerm t);
static ATerm y_5 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm c_6 (ATerm t);
static ATerm i_6 (ATerm t);
static ATerm l_6 (ATerm t);
static ATerm t_6 (ATerm t);
static ATerm u_6 (ATerm t);
static ATerm w_6 (ATerm t);
static ATerm x_6 (ATerm t);
static ATerm y_6 (ATerm t);
static ATerm z_6 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm r_9 (ATerm b_62, ATerm c_62, ATerm t);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t);
static ATerm c_7 (ATerm t);
static ATerm d_7 (ATerm t);
static ATerm f_7 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm h_7 (ATerm t);
static ATerm i_7 (ATerm t);
static ATerm l_7 (ATerm t);
ATerm input_option_0_0 (ATerm t);
static ATerm p_9 (ATerm p_52, ATerm q_52, ATerm o_52, ATerm t);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t);
ATerm at_end_1_0 (ATerm c_92 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm p_54 (ATerm e_54, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm i_9 (ATerm h_62, ATerm g_62, ATerm t);
static ATerm q_7 (ATerm t);
static ATerm u_7 (ATerm t);
static ATerm v_7 (ATerm t);
static ATerm w_7 (ATerm t);
static ATerm z_7 (ATerm t);
static ATerm d_8 (ATerm t);
static ATerm e_8 (ATerm t);
static ATerm f_8 (ATerm t);
static ATerm j_8 (ATerm t);
static ATerm k_8 (ATerm t);
static ATerm y_8 (ATerm t);
static ATerm a_9 (ATerm t);
static ATerm g_9 (ATerm t);
static ATerm m_9 (ATerm t);
static ATerm n_9 (ATerm t);
static ATerm q_9 (ATerm t);
static ATerm s_9 (ATerm t);
static ATerm t_9 (ATerm t);
ATerm pack_stratego_options_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm l_9 (ATerm i_41, ATerm j_41, ATerm t);
ATerm foldr_2_0 (ATerm c_98 (ATerm), ATerm d_98 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm u_9 (ATerm t);
static ATerm v_9 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm t_106 (ATerm), ATerm t);
static ATerm w_9 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm x_9 (ATerm t);
ATerm need_help_1_0 (ATerm h_108 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
static ATerm z_9 (ATerm t);
static ATerm a_10 (ATerm t);
static ATerm b_10 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm v_91 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm c_10 (ATerm t);
static ATerm h_10 (ATerm t);
static ATerm j_10 (ATerm t);
static ATerm k_10 (ATerm t);
static ATerm l_10 (ATerm t);
static ATerm m_10 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm k_62 (ATerm), ATerm l_62 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm y_110 (ATerm), ATerm t);
static ATerm p_10 (ATerm t);
static ATerm q_10 (ATerm t);
static ATerm r_10 (ATerm t);
static ATerm t_10 (ATerm t);
ATerm parse_options_1_0 (ATerm x_110 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm j_108 (ATerm), ATerm k_108 (ATerm), ATerm l_108 (ATerm), ATerm m_108 (ATerm), ATerm t);
static ATerm x_10 (ATerm t);
static ATerm z_10 (ATerm t);
static ATerm a_11 (ATerm t);
static ATerm b_11 (ATerm t);
static ATerm d_11 (ATerm t);
static ATerm e_11 (ATerm t);
static ATerm f_11 (ATerm t);
ATerm pack_stratego_0_0 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm copy_to_1_0 (ATerm o_0 (ATerm), ATerm t)
{
  ATerm k_1 = NULL,l_1 = NULL;
  k_1 = t;
  if(match_cons(t, sym_FILE_1))
    {
      l_1 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm h_11 = t;
    int i_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_0 = NULL;
        t = k_1;
        t = o_0(t);
        h_0 = t;
        if(match_cons(t, sym_stdout_0))
          {
            t = h_0;
          }
        else
          {
            if(!(match_cons(t, sym_stderr_0)))
              _fail(t);
            t = h_0;
          }
        t = (ATerm) ATmakeAppl(sym__2, l_1, h_0);
        t = j_9(l_1, h_0, t);
        t = (ATerm) ATmakeAppl(sym_FILE_1, l_1);
        LocalPopChoice(i_11);
      }
    else
      {
        t = h_11;
        {
          ATerm j_11 = t;
          int k_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm v_0 = NULL;
              t = k_1;
              t = o_0(t);
              v_0 = t;
              {
                ATerm l_11 = t;
                if((PushChoice() == 0))
                  {
                    ATerm w_0 = NULL;
                    w_0 = t;
                    if(match_cons(t, sym_stdout_0))
                      {
                        t = w_0;
                      }
                    else
                      {
                        if(match_cons(t, sym_stderr_0))
                          {
                            t = w_0;
                          }
                        else
                          {
                            t = w_0;
                            if((l_1 != t))
                              {
                                _fail(t);
                              }
                            t = w_0;
                          }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = l_11;
                  }
              }
              t = (ATerm) ATmakeAppl(sym__2, l_1, v_0);
              t = j_9(l_1, v_0, t);
              t = (ATerm) ATmakeAppl(sym_FILE_1, l_1);
              LocalPopChoice(k_11);
            }
          else
            {
              t = j_11;
              t = k_1;
              t = o_0(t);
              if((l_1 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, l_1);
            }
        }
      }
  }
  return(t);
}
static ATerm j_9 (ATerm m_44, ATerm n_44, ATerm t)
{
  t = SSL_copy(m_44, n_44);
  return(t);
}
static ATerm a_0 (ATerm t)
{
  ATerm q_11 = t;
  int s_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_2 = NULL,u_2 = NULL;
      t = term_t_11;
      t_2 = t;
      t = term_v_11;
      u_2 = t;
      t = term_y_11;
      t = o_9(t_2, u_2, t);
      LocalPopChoice(s_11);
    }
  else
    {
      t = q_11;
      t = term_z_11;
    }
  return(t);
}
ATerm xtc_write_output_0_0 (ATerm t)
{
  ATerm p_2 = NULL;
  p_2 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm o_1 = NULL,q_1 = NULL;
      t = term_v_11;
      {
        ATerm a_12 = t;
        int b_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_1 = NULL,s_1 = NULL;
            t = term_t_11;
            r_1 = t;
            t = term_v_11;
            s_1 = t;
            t = term_y_11;
            t = o_9(r_1, s_1, t);
            LocalPopChoice(b_12);
          }
        else
          {
            t = a_12;
            t = term_z_11;
          }
      }
      o_1 = t;
      t = term_c_12;
      q_1 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_c_12, o_1);
      t = j_9(q_1, o_1, t);
    }
  else
    {
      if(match_cons(t, sym_FILE_1))
        {
          ATerm d_12 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = p_2;
      t = copy_to_1_0(a_0, t);
    }
  return(t);
}
static ATerm x_7 (ATerm d_23, ATerm e_23, ATerm t)
{
  ATerm w_2 = NULL;
  t = SSL_write_term_to_stream_baf(d_23, e_23);
  w_2 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, w_2);
  return(t);
}
static ATerm c_8 (ATerm c_91 (ATerm), ATerm c_170, ATerm n_23, ATerm t)
{
  ATerm x_2 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, c_170, term_e_12);
  t = q_8(t);
  x_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_2, n_23);
  t = c_91(t);
  t = fclose_0_0(t);
  t = n_23;
  return(t);
}
static ATerm r_8 (ATerm m_104 (ATerm), ATerm w_42, ATerm u_42, ATerm t)
{
  ATerm y_2 = NULL,z_2 = NULL,d_3 = NULL,e_3 = NULL,g_3 = NULL,h_3 = NULL;
  e_3 = t;
  t = m_104(t);
  y_2 = t;
  t = (ATerm) ATmakeAppl(sym__3, y_2, w_42, u_42);
  t = p_9(y_2, w_42, u_42, t);
  {
    ATerm f_12 = t;
    int g_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_3 = NULL;
        t = term_h_12;
        j_3 = t;
        t = (ATerm) ATmakeAppl(sym__2, y_2, term_h_12);
        t = o_9(y_2, j_3, t);
        LocalPopChoice(g_12);
      }
    else
      {
        t = f_12;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_2 = ATgetFirst((ATermList) t);
      d_3 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_h_12;
  g_3 = t;
  t = (ATerm) ATinsert(CheckATermList(d_3), (ATerm) ATinsert(CheckATermList(z_2), w_42));
  h_3 = t;
  t = SSL_table_put(y_2, g_3, h_3);
  t = e_3;
  return(t);
}
ATerm mkstemp_0_0 (ATerm t)
{
  ATerm q_3 = NULL;
  ATerm i_12 = t;
  int j_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_3 = NULL,w_1 = NULL;
      v_3 = t;
      t = term_k_12;
      w_1 = t;
      t = (ATerm) ATmakeAppl(sym__2, v_3, term_k_12);
      t = s_8(v_3, w_1, t);
      q_3 = t;
      t = SSL_mkstemp(q_3);
      LocalPopChoice(j_12);
    }
  else
    {
      t = i_12;
      {
        ATerm w_3 = NULL;
        t = term_l_12;
        w_3 = t;
        t = SSL_perror(w_3);
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
static ATerm b_0 (ATerm t)
{
  t = term_o_12;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm z_3 = NULL,a_4 = NULL,c_4 = NULL,d_4 = NULL,e_4 = NULL;
  t = P__tmpdir_0_0(t);
  d_4 = t;
  t = term_p_12;
  e_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_4, term_p_12);
  t = s_8(d_4, e_4, t);
  t = mkstemp_0_0(t);
  if(match_cons(t, sym__2))
    {
      a_4 = ATgetArgument(t, 0);
      z_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = term_q_12;
  c_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_4, term_q_12);
  t = r_8(b_0, a_4, c_4, t);
  t = SSL_close(z_3);
  t = a_4;
  return(t);
}
static ATerm y_7 (ATerm r_23, ATerm s_23, ATerm t)
{
  ATerm x_4 = NULL,y_4 = NULL;
  t = s_23;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = s_23;
    }
  else
    {
      ATerm f_2 = NULL,i_2 = NULL,z_0 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_4 = ATgetFirst((ATermList) t);
          y_4 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(s_23);
      f_2 = t;
      t = y_4;
      {
        static ATerm n_2 (ATerm t)
        {
          ATerm r_12 = t;
          int t_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm k_2 = NULL;
              k_2 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = k_2;
              LocalPopChoice(t_12);
            }
          else
            {
              t = r_12;
              {
                ATerm l_2 = NULL;
                t = Cons_2_0(_id, n_2, t);
                l_2 = t;
                t = (ATerm) ATinsert(CheckATermList(l_2), r_23);
              }
            }
          return(t);
        }
        t = n_2(t);
      }
      i_2 = t;
      t = (ATerm) ATinsert(CheckATermList(i_2), x_4);
      z_0 = t;
      t = SSLsetAnnotations(z_0, f_2);
    }
  return(t);
}
static ATerm u_5 (ATerm g_5, ATerm t)
{
  t = g_5;
  {
    ATerm u_12 = t;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm v_12 = ATgetArgument(t, 0);
            ATerm w_12 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = u_12;
      }
  }
  t = term_y_12;
  t = debug_1_0(f_0, t);
  t = (ATerm) ATmakeAppl(sym__2, g_5, term_e_12);
  t = open_file_0_0(t);
  return(t);
}
static ATerm w_5 (ATerm i_5, ATerm j_5, ATerm k_5, ATerm t)
{
  t = SSL_open_file(i_5, j_5);
  return(t);
}
static ATerm f_0 (ATerm t)
{
  t = term_a_13;
  return(t);
}
ATerm open_file_0_0 (ATerm t)
{
  ATerm o_5 = NULL,q_5 = NULL,t_5 = NULL;
  o_5 = t;
  if(match_cons(t, sym__2))
    {
      q_5 = ATgetArgument(t, 0);
      t_5 = ATgetArgument(t, 1);
      {
        ATerm c_13 = t;
        int d_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = u_5(o_5, t);
            LocalPopChoice(d_13);
          }
        else
          {
            t = c_13;
            t = w_5(q_5, t_5, o_5, t);
          }
      }
    }
  else
    {
      t = u_5(o_5, t);
    }
  return(t);
}
ATerm create_dep_file_0_0 (ATerm t)
{
  ATerm x_5 = NULL,z_5 = NULL,a_6 = NULL,b_6 = NULL,d_6 = NULL,e_6 = NULL,f_6 = NULL,g_6 = NULL,h_6 = NULL,j_6 = NULL,k_6 = NULL;
  z_5 = t;
  t = term_t_11;
  j_6 = t;
  t = term_v_11;
  k_6 = t;
  t = term_y_11;
  t = o_9(j_6, k_6, t);
  {
    ATerm i_13 = t;
    int k_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_6 = NULL,n_6 = NULL;
        t = term_t_11;
        m_6 = t;
        t = term_l_13;
        n_6 = t;
        t = term_n_13;
        t = o_9(m_6, n_6, t);
        LocalPopChoice(k_13);
      }
    else
      {
        t = i_13;
        {
          ATerm o_13 = t;
          if((PushChoice() == 0))
            {
              ATerm o_6 = NULL,p_6 = NULL;
              t = term_t_11;
              o_6 = t;
              t = term_w_13;
              p_6 = t;
              t = term_x_13;
              t = o_9(o_6, p_6, t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = o_13;
            }
        }
      }
  }
  x_5 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_k_14), term_a_14), x_5);
  h_6 = t;
  t = SSL_concat_strings(h_6);
  g_6 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_6, term_e_12);
  t = open_file_0_0(t);
  a_6 = t;
  t = term_l_14;
  e_6 = t;
  t = (ATerm) ATinsert(CheckATermList(z_5), term_n_14);
  f_6 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_14, (ATerm) ATinsert(CheckATermList(z_5), term_n_14));
  t = y_7(e_6, f_6, t);
  b_6 = t;
  t = (ATerm) ATinsert(CheckATermList(b_6), x_5);
  d_6 = t;
  t = SSL_printnl(a_6, d_6);
  t = SSL_close_file(a_6);
  t = (ATerm) ATmakeAppl(sym_FILE_1, g_6);
  return(t);
}
static ATerm a_8 (ATerm m_38, ATerm n_38, ATerm t)
{
  ATerm q_6 = NULL;
  t = SSL_fputc(m_38, n_38);
  q_6 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, q_6);
  return(t);
}
static ATerm b_8 (ATerm h_23, ATerm i_23, ATerm t)
{
  ATerm r_6 = NULL;
  t = SSL_write_term_to_stream_text(h_23, i_23);
  r_6 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, r_6);
  return(t);
}
ATerm basename_1_0 (ATerm b_102 (ATerm), ATerm t)
{
  ATerm a_7 = NULL,b_7 = NULL;
  b_7 = t;
  t = SSL_explode_string(b_7);
  {
    ATerm o_14 = t;
    int p_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm n_10 (ATerm t)
        {
          ATerm d_10 = NULL,g_10 = NULL,i_10 = NULL;
          d_10 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              g_10 = ATgetFirst((ATermList) t);
              i_10 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          {
            ATerm r_14 = t;
            int s_14 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm f_3 = NULL,l_3 = NULL,c_1 = NULL;
                t = SSLgetAnnotations(d_10);
                f_3 = t;
                t = i_10;
                t = n_10(t);
                l_3 = t;
                t = (ATerm) ATinsert(CheckATermList(l_3), g_10);
                c_1 = t;
                t = SSLsetAnnotations(c_1, f_3);
                LocalPopChoice(s_14);
              }
            else
              {
                t = r_14;
                {
                  ATerm t_14 = t;
                  int v_14 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm f_4 = NULL,d_1 = NULL;
                      t = SSLgetAnnotations(d_10);
                      f_4 = t;
                      t = g_10;
                      if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 47)))
                        _fail(t);
                      t = (ATerm) ATinsert(CheckATermList(i_10), g_10);
                      d_1 = t;
                      t = SSLsetAnnotations(d_1, f_4);
                      LocalPopChoice(v_14);
                    }
                  else
                    {
                      t = t_14;
                      {
                        ATerm e_5 = NULL,p_5 = NULL,e_1 = NULL;
                        t = SSLgetAnnotations(d_10);
                        e_5 = t;
                        t = g_10;
                        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 46)))
                          _fail(t);
                        t = i_10;
                        t = b_102(t);
                        p_5 = t;
                        t = (ATerm) ATinsert(CheckATermList(p_5), g_10);
                        e_1 = t;
                        t = SSLsetAnnotations(e_1, e_5);
                        t = (ATerm) ATempty;
                      }
                    }
                }
              }
          }
          return(t);
        }
        t = n_10(t);
        LocalPopChoice(p_14);
      }
    else
      {
        t = o_14;
      }
  }
  a_7 = t;
  t = SSL_implode_string(a_7);
  return(t);
}
ATerm at_suffix_rev_1_0 (ATerm k_92 (ATerm), ATerm t)
{
  static ATerm r_11 (ATerm t)
  {
    ATerm x_14 = t;
    int y_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_11 = NULL,o_11 = NULL,p_11 = NULL,s_6 = NULL,v_6 = NULL,i_1 = NULL;
        n_11 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            o_11 = ATgetFirst((ATermList) t);
            p_11 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(n_11);
        s_6 = t;
        t = p_11;
        t = r_11(t);
        v_6 = t;
        t = (ATerm) ATinsert(CheckATermList(v_6), o_11);
        i_1 = t;
        t = SSLsetAnnotations(i_1, s_6);
        LocalPopChoice(y_14);
      }
    else
      {
        t = x_14;
        t = k_92(t);
      }
    return(t);
  }
  t = r_11(t);
  return(t);
}
ATerm get_filename_0_0 (ATerm t)
{
  ATerm u_11 = NULL,w_11 = NULL,x_11 = NULL;
  x_11 = t;
  t = SSL_explode_string(x_11);
  {
    ATerm z_14 = t;
    int a_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm j_0 (ATerm t)
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm b_15 = ATgetFirst((ATermList) t);
              if(((ATgetType(b_15) != AT_INT) || (ATgetInt((ATermInt) b_15) != 47)))
                _fail(t);
              if(((u_11 != NULL) && (u_11 != (ATerm) ATgetNext((ATermList) t))))
                _fail((ATerm) ATgetNext((ATermList) t));
              else
                u_11 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          return(t);
        }
        t = at_suffix_rev_1_0(j_0, t);
        t = not_null(u_11);
        LocalPopChoice(a_15);
      }
    else
      {
        t = z_14;
      }
  }
  w_11 = t;
  t = SSL_implode_string(w_11);
  return(t);
}
ATerm map_1_0 (ATerm l_91 (ATerm), ATerm t)
{
  static ATerm h_13 (ATerm t)
  {
    ATerm e_13 = NULL,f_13 = NULL,g_13 = NULL;
    e_13 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = e_13;
      }
    else
      {
        ATerm k_7 = NULL,p_7 = NULL,t_7 = NULL,n_1 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            f_13 = ATgetFirst((ATermList) t);
            g_13 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(e_13);
        k_7 = t;
        t = f_13;
        t = l_91(t);
        p_7 = t;
        t = g_13;
        t = h_13(t);
        t_7 = t;
        t = (ATerm) ATinsert(CheckATermList(t_7), p_7);
        n_1 = t;
        t = SSLsetAnnotations(n_1, k_7);
      }
    return(t);
  }
  t = h_13(t);
  return(t);
}
static ATerm o_9 (ATerm g_54, ATerm h_54, ATerm t)
{
  t = SSL_table_get(g_54, h_54);
  return(t);
}
static ATerm m_0 (ATerm t)
{
  ATerm p_13 = NULL;
  if(match_cons(t, sym_Specification_1))
    {
      p_13 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = p_13;
  t = filter_1_0(q_0, t);
  return(t);
}
static ATerm q_0 (ATerm t)
{
  ATerm f_15 = t;
  if((PushChoice() == 0))
    {
      ATerm q_13 = NULL,r_13 = NULL,s_13 = NULL,x_1 = NULL;
      s_13 = t;
      if(match_cons(t, sym_Imports_1))
        {
          r_13 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(s_13);
      q_13 = t;
      t = (ATerm) ATmakeAppl(sym_Imports_1, r_13);
      x_1 = t;
      t = SSLsetAnnotations(x_1, q_13);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = f_15;
    }
  return(t);
}
ATerm flatten_stratego_0_0 (ATerm t)
{
  ATerm m_13 = NULL;
  t = map_1_0(m_0, t);
  t = concat_0_0(t);
  m_13 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, m_13);
  return(t);
}
ATerm genzip_4_0 (ATerm p_93 (ATerm), ATerm q_93 (ATerm), ATerm r_93 (ATerm), ATerm s_93 (ATerm), ATerm t)
{
  static ATerm i_14 (ATerm t)
  {
    ATerm j_15 = t;
    int m_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_93(t);
        LocalPopChoice(m_15);
      }
    else
      {
        t = j_15;
        {
          ATerm t_13 = NULL,u_13 = NULL,y_13 = NULL,z_13 = NULL,b_14 = NULL,f_14 = NULL,z_1 = NULL;
          t = q_93(t);
          f_14 = t;
          if(match_cons(t, sym__2))
            {
              u_13 = ATgetArgument(t, 0);
              y_13 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(f_14);
          t_13 = t;
          t = u_13;
          t = s_93(t);
          z_13 = t;
          t = y_13;
          t = i_14(t);
          b_14 = t;
          t = (ATerm) ATmakeAppl(sym__2, z_13, b_14);
          z_1 = t;
          t = SSLsetAnnotations(z_1, t_13);
          t = r_93(t);
        }
      }
    return(t);
  }
  t = i_14(t);
  return(t);
}
static ATerm s_0 (ATerm t)
{
  ATerm j_14 = NULL;
  if(match_cons(t, sym_Imports_1))
    {
      j_14 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = j_14;
  return(t);
}
static ATerm g_8 (ATerm j_136, ATerm t)
{
  t = j_136;
  t = filter_1_0(s_0, t);
  t = concat_0_0(t);
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm m_14 = NULL;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_c_12;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      ATerm u_14 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          m_14 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, term_p_15);
      u_14 = t;
      t = (ATerm) ATmakeAppl(sym__2, m_14, (ATerm) ATinsert(ATempty, term_p_15));
      t = t_8(m_14, u_14, t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
ATerm pass_keep_0_0 (ATerm t)
{
  ATerm c_15 = NULL,d_15 = NULL,e_15 = NULL,g_15 = NULL;
  t = term_q_15;
  {
    ATerm w_15 = t;
    int x_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_15 = NULL,i_15 = NULL;
        t = term_t_11;
        h_15 = t;
        t = term_q_15;
        i_15 = t;
        t = term_y_15;
        t = o_9(h_15, i_15, t);
        LocalPopChoice(x_15);
      }
    else
      {
        t = w_15;
        t = term_z_15;
      }
  }
  d_15 = t;
  t = term_z_15;
  g_15 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_15, term_z_15);
  t = h_8(d_15, g_15, t);
  e_15 = t;
  t = SSL_int_to_string(e_15);
  c_15 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, c_15), term_q_15);
  return(t);
}
static ATerm h_8 (ATerm o_41, ATerm p_41, ATerm t)
{
  ATerm d_16 = t;
  int e_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(o_41, p_41);
      LocalPopChoice(e_16);
    }
  else
    {
      t = d_16;
      t = SSL_subtr(o_41, p_41);
    }
  return(t);
}
ATerm pass_verbose_0_0 (ATerm t)
{
  ATerm k_15 = NULL,l_15 = NULL,o_15 = NULL,r_15 = NULL;
  t = term_g_16;
  {
    ATerm h_16 = t;
    int i_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_15 = NULL,v_15 = NULL;
        t = term_t_11;
        s_15 = t;
        t = term_g_16;
        v_15 = t;
        t = term_j_16;
        t = o_9(s_15, v_15, t);
        LocalPopChoice(i_16);
      }
    else
      {
        t = h_16;
        t = term_z_15;
      }
  }
  l_15 = t;
  t = term_z_15;
  r_15 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_15, term_z_15);
  t = h_8(l_15, r_15, t);
  o_15 = t;
  t = SSL_int_to_string(o_15);
  k_15 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, k_15), term_g_16);
  return(t);
}
static ATerm t_0 (ATerm t)
{
  ATerm c_16 = NULL,f_16 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm l_16 = ATgetArgument(t, 0);
      if(match_cons(l_16, sym_Stream_1))
        {
          c_16 = ATgetArgument(l_16, 0);
        }
      else
        _fail(t);
      f_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_7(c_16, f_16, t);
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm g_115 (ATerm), ATerm h_115 (ATerm), ATerm t)
{
  ATerm a_16 = NULL,b_16 = NULL;
  b_16 = t;
  t = xtc_new_file_0_0(t);
  a_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_16, b_16);
  t = c_8(t_0, a_16, b_16, t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, a_16);
  t = xtc_transform_file_2_0(g_115, h_115, t);
  t = read_from_0_0(t);
  return(t);
}
static ATerm i_8 (ATerm r_48, ATerm s_48, ATerm t)
{
  t = SSL_execvp(r_48, s_48);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm m_17 = NULL,n_17 = NULL,o_17 = NULL,p_17 = NULL;
  m_17 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      n_17 = ATgetArgument(t, 0);
      {
        ATerm b_9 = NULL,d_9 = NULL;
        t = SSL_int_to_string(n_17);
        b_9 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_o_16), b_9), term_m_16);
        d_9 = t;
        t = SSL_concat_strings(d_9);
      }
    }
  else
    {
      ATerm e_10 = NULL,f_10 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          n_17 = ATgetArgument(t, 0);
          o_17 = ATgetArgument(t, 1);
          p_17 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(o_17);
      e_10 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, p_17), term_q_16), e_10), term_p_16), n_17);
      f_10 = t;
      t = SSL_concat_strings(f_10);
    }
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm u_17 = NULL;
  u_17 = t;
  {
    ATerm r_16 = t;
    int s_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm u_0 (ATerm t)
        {
          if(match_cons(t, sym_Signal_3))
            {
              ATerm t_16 = ATgetArgument(t, 0);
              if((u_17 != ATgetArgument(t, 1)))
                {
                  _fail(ATgetArgument(t, 1));
                }
              {
                ATerm u_16 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_r_22), term_n_22), term_j_22), term_f_22), term_b_22), term_x_21), term_t_21), term_n_21), term_i_21), term_c_21), term_x_20), term_p_20), term_e_20), term_w_19), term_r_19), term_j_19), term_d_19), term_y_18), term_t_18), term_o_18), term_j_18), term_f_18), term_b_18), term_w_17), term_r_17), term_h_17), term_d_17), term_y_16);
        t = fetch_elem_1_0(u_0, t);
        LocalPopChoice(s_16);
      }
    else
      {
        t = r_16;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, u_17);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm z_17 = NULL,p_18 = NULL;
  z_17 = t;
  {
    ATerm s_22 = t;
    int w_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm x_22 = ATgetArgument(t, 0);
            p_18 = ATgetArgument(t, 1);
            {
              ATerm y_22 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(w_22);
        {
          ATerm z_22 = t;
          int b_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm s_10 = NULL,v_10 = NULL,w_10 = NULL;
              t = p_18;
              {
                ATerm c_23 = t;
                if((PushChoice() == 0))
                  {
                    if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
                      _fail(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = c_23;
                  }
              }
              t = signal_from_number_0_0(t);
              t = signal_to_descr_0_0(t);
              s_10 = t;
              t = term_g_23;
              v_10 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, s_10), term_m_23);
              w_10 = t;
              t = SSL_printnl(v_10, w_10);
              t = (ATerm) ATmakeAppl(sym__2, term_g_23, (ATerm) ATinsert(ATinsert(ATempty, s_10), term_m_23));
              LocalPopChoice(b_23);
            }
          else
            {
              t = z_22;
              t = z_17;
            }
        }
      }
    else
      {
        t = s_22;
        t = z_17;
      }
  }
  t = z_17;
  return(t);
}
ATerm fork_0_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_and_wait_1_0 (ATerm e_107 (ATerm), ATerm t)
{
  ATerm h_19 = NULL,i_19 = NULL;
  i_19 = t;
  t = fork_0_0(t);
  h_19 = t;
  {
    ATerm o_23 = t;
    int p_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = i_19;
        t = e_107(t);
        LocalPopChoice(p_23);
      }
    else
      {
        t = o_23;
        t = SSL_waitpid(h_19);
        t = warn_ifsignaled_0_0(t);
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm q_23 = ATgetArgument(t, 0);
            if(((ATgetType(q_23) != AT_INT) || (ATgetInt((ATermInt) q_23) != 0)))
              _fail(t);
            {
              ATerm t_23 = ATgetArgument(t, 1);
            }
            {
              ATerm u_23 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = i_19;
      }
  }
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm m_19 = NULL;
  static ATerm x_0 (ATerm t)
  {
    ATerm n_19 = NULL,o_19 = NULL;
    n_19 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(m_19), n_19);
    t = o_9(not_null(m_19), n_19, t);
    o_19 = t;
    t = (ATerm) ATmakeAppl(sym__2, n_19, o_19);
    return(t);
  }
  if(((m_19 != NULL) && (m_19 != t)))
    _fail(t);
  else
    m_19 = t;
  t = SSL_table_keys(m_19);
  t = map_1_0(x_0, t);
  return(t);
}
ATerm if_verbose5_1_0 (ATerm x_106 (ATerm), ATerm t)
{
  ATerm y_19 = NULL;
  y_19 = t;
  {
    ATerm v_23 = t;
    int w_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_20 = NULL,b_20 = NULL,c_20 = NULL;
        t = term_t_11;
        b_20 = t;
        t = term_g_16;
        c_20 = t;
        t = term_j_16;
        t = o_9(b_20, c_20, t);
        a_20 = t;
        t = (ATerm) ATmakeAppl(sym__2, a_20, term_d_22);
        t = geq_0_0(t);
        t = y_19;
        t = x_106(t);
        LocalPopChoice(w_23);
      }
    else
      {
        t = v_23;
        t = y_19;
      }
  }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm w_106 (ATerm), ATerm t)
{
  ATerm g_20 = NULL;
  g_20 = t;
  {
    ATerm x_23 = t;
    int y_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_20 = NULL,j_20 = NULL,k_20 = NULL;
        t = term_t_11;
        j_20 = t;
        t = term_g_16;
        k_20 = t;
        t = term_j_16;
        t = o_9(j_20, k_20, t);
        i_20 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_20, term_a_19);
        t = geq_0_0(t);
        t = g_20;
        t = w_106(t);
        LocalPopChoice(y_23);
      }
    else
      {
        t = x_23;
        t = g_20;
      }
  }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm y_106 (ATerm), ATerm t)
{
  ATerm w_20 = NULL;
  w_20 = t;
  {
    ATerm z_23 = t;
    int a_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_21 = NULL,h_21 = NULL,l_21 = NULL;
        t = term_t_11;
        h_21 = t;
        t = term_g_16;
        l_21 = t;
        t = term_j_16;
        t = o_9(h_21, l_21, t);
        b_21 = t;
        t = (ATerm) ATmakeAppl(sym__2, b_21, term_k_17);
        t = geq_0_0(t);
        t = w_20;
        t = y_106(t);
        LocalPopChoice(a_24);
      }
    else
      {
        t = z_23;
        t = w_20;
      }
  }
  return(t);
}
static ATerm l_8 (ATerm w_95 (ATerm), ATerm l_29, ATerm k_29, ATerm t)
{
  static ATerm a_23 (ATerm t)
  {
    ATerm t_22 = NULL,u_22 = NULL,v_22 = NULL;
    t_22 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = k_29;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            u_22 = ATgetFirst((ATermList) t);
            v_22 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm b_24 = t;
          int f_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = t_22;
              {
                static ATerm y_0 (ATerm t)
                {
                  t = k_29;
                  return(t);
                }
                t = w_8(w_95, y_0, u_22, v_22, t);
              }
              t = a_23(t);
              LocalPopChoice(f_24);
            }
          else
            {
              t = b_24;
              {
                ATerm g_11 = NULL,m_11 = NULL,j_2 = NULL;
                t = SSLgetAnnotations(t_22);
                g_11 = t;
                t = v_22;
                t = a_23(t);
                m_11 = t;
                t = (ATerm) ATinsert(CheckATermList(m_11), u_22);
                j_2 = t;
                t = SSLsetAnnotations(j_2, g_11);
              }
            }
        }
      }
    return(t);
  }
  t = l_29;
  t = a_23(t);
  return(t);
}
static ATerm a_1 (ATerm t)
{
  ATerm c_24 = NULL;
  if(match_cons(t, sym__2))
    {
      c_24 = ATgetArgument(t, 0);
      if((c_24 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm m_8 (ATerm m_53, ATerm n_53, ATerm o_53, ATerm t)
{
  ATerm f_23 = NULL,k_23 = NULL,l_23 = NULL;
  f_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_53, n_53);
  {
    ATerm g_24 = t;
    int h_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm i_24 = ATgetArgument(t, 0);
            ATerm j_24 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, m_53, n_53);
        t = o_9(m_53, n_53, t);
        LocalPopChoice(h_24);
      }
    else
      {
        t = g_24;
        t = (ATerm) ATempty;
      }
  }
  l_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_23, o_53);
  t = l_8(a_1, l_23, o_53, t);
  k_23 = t;
  t = SSL_table_put(m_53, n_53, k_23);
  t = f_23;
  return(t);
}
static ATerm n_8 (ATerm b_111 (ATerm), ATerm w_53, ATerm v_53, ATerm t)
{
  static ATerm b_1 (ATerm t)
  {
    ATerm d_24 = NULL,e_24 = NULL;
    if(match_cons(t, sym__2))
      {
        d_24 = ATgetArgument(t, 0);
        e_24 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, w_53, d_24, e_24);
    t = b_111(t);
    return(t);
  }
  t = v_53;
  t = map_1_0(b_1, t);
  return(t);
}
static ATerm e_25 (ATerm w_24, ATerm t)
{
  t = SSL_fclose(w_24);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm b_25 = NULL,c_25 = NULL;
  c_25 = t;
  if(match_cons(t, sym_Stream_1))
    {
      b_25 = ATgetArgument(t, 0);
      {
        ATerm k_24 = t;
        int l_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(b_25);
            LocalPopChoice(l_24);
          }
        else
          {
            t = k_24;
            t = e_25(c_25, t);
          }
      }
    }
  else
    {
      t = e_25(c_25, t);
    }
  return(t);
}
static ATerm o_8 (ATerm j_23, ATerm t)
{
  t = SSL_read_term_from_stream(j_23);
  return(t);
}
static ATerm s_8 (ATerm f_37, ATerm g_37, ATerm t)
{
  t = SSL_strcat(f_37, g_37);
  return(t);
}
static ATerm p_8 (ATerm o_38, ATerm p_38, ATerm t)
{
  ATerm f_25 = NULL;
  t = SSL_fopen(o_38, p_38);
  f_25 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_25);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm r_25 = NULL;
  t = SSL_stdin_stream();
  r_25 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, r_25);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm s_25 = NULL;
  t = SSL_stdout_stream();
  s_25 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, s_25);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm u_25 = NULL;
  t = SSL_stderr_stream();
  u_25 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, u_25);
  return(t);
}
static ATerm k_27 (ATerm g_26, ATerm t)
{
  ATerm h_26 = NULL;
  t = SSL_explode_term(g_26);
  if(match_cons(t, sym__2))
    {
      ATerm m_24 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) m_24) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm n_24 = ATgetArgument(t, 1);
        if(((ATgetType(n_24) == AT_LIST) && !(ATisEmpty(n_24))))
          {
            h_26 = ATgetFirst((ATermList) n_24);
            {
              ATerm o_24 = (ATerm) ATgetNext((ATermList) n_24);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = h_26;
  if(match_cons(t, sym_stderr_0))
    {
      t = h_26;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = h_26;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = h_26;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm m_27 (ATerm m_26, ATerm n_26, ATerm o_26, ATerm t)
{
  ATerm p_26 = NULL,q_26 = NULL,r_26 = NULL,v_26 = NULL,r_3 = NULL;
  t = SSLgetAnnotations(o_26);
  r_26 = t;
  t = m_26;
  if(match_cons(t, sym_Path_1))
    {
      v_26 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, v_26, n_26);
  r_3 = t;
  t = SSLsetAnnotations(r_3, r_26);
  if(match_cons(t, sym__2))
    {
      p_26 = ATgetArgument(t, 0);
      q_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_8(p_26, q_26, t);
  return(t);
}
static ATerm n_27 (ATerm x_26, ATerm y_26, ATerm z_26, ATerm t)
{
  ATerm a_27 = NULL,b_27 = NULL,c_27 = NULL,f_27 = NULL,t_3 = NULL;
  t = SSLgetAnnotations(z_26);
  c_27 = t;
  t = SSL_is_string(x_26);
  f_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_27, y_26);
  t_3 = t;
  t = SSLsetAnnotations(t_3, c_27);
  if(match_cons(t, sym__2))
    {
      a_27 = ATgetArgument(t, 0);
      b_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_8(a_27, b_27, t);
  return(t);
}
static ATerm q_8 (ATerm t)
{
  ATerm h_27 = NULL,i_27 = NULL,j_27 = NULL;
  h_27 = t;
  if(match_cons(t, sym__2))
    {
      i_27 = ATgetArgument(t, 0);
      j_27 = ATgetArgument(t, 1);
      {
        ATerm p_24 = t;
        int q_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = k_27(h_27, t);
            LocalPopChoice(q_24);
          }
        else
          {
            t = p_24;
            {
              ATerm r_24 = t;
              int s_24 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = m_27(i_27, j_27, h_27, t);
                  LocalPopChoice(s_24);
                }
              else
                {
                  t = r_24;
                  t = n_27(i_27, j_27, h_27, t);
                }
            }
          }
      }
    }
  else
    {
      t = k_27(h_27, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm p_27 = NULL,r_27 = NULL,u_27 = NULL,b_28 = NULL;
  b_28 = t;
  {
    ATerm t_24 = t;
    int u_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, b_28, term_v_24);
        t = q_8(t);
        LocalPopChoice(u_24);
      }
    else
      {
        t = t_24;
        {
          ATerm m_12 = NULL,n_12 = NULL;
          t = term_x_24;
          n_12 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_x_24, b_28);
          t = s_8(n_12, b_28, t);
          m_12 = t;
          t = SSL_perror(m_12);
          _fail(t);
        }
      }
  }
  r_27 = t;
  if(match_cons(t, sym_Stream_1))
    {
      u_27 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = o_8(u_27, t);
  p_27 = t;
  t = r_27;
  t = fclose_0_0(t);
  t = p_27;
  return(t);
}
static ATerm f_1 (ATerm t)
{
  t = term_y_24;
  return(t);
}
static ATerm g_1 (ATerm t)
{
  t = term_z_24;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm a_25 = t;
  int d_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_28 = NULL,i_28 = NULL;
      g_28 = t;
      t = (ATerm) ATinsert(ATempty, term_g_25);
      i_28 = t;
      t = (ATerm) ATmakeAppl(sym__2, g_28, (ATerm) ATinsert(ATempty, term_g_25));
      t = t_8(g_28, i_28, t);
      LocalPopChoice(d_25);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = a_25;
      {
        ATerm h_25 = t;
        int i_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_25 = t;
            if((PushChoice() == 0))
              {
                ATerm j_28 = NULL,k_28 = NULL;
                j_28 = t;
                t = (ATerm) ATinsert(ATempty, term_p_15);
                k_28 = t;
                t = (ATerm) ATmakeAppl(sym__2, j_28, (ATerm) ATinsert(ATempty, term_p_15));
                t = t_8(j_28, k_28, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = j_25;
              }
            t = debug_1_0(f_1, t);
            LocalPopChoice(i_25);
          }
        else
          {
            t = h_25;
            t = debug_1_0(g_1, t);
          }
      }
      t = (ATerm) ATempty;
    }
  return(t);
}
static ATerm h_1 (ATerm t)
{
  t = debug_1_0(j_1, t);
  return(t);
}
static ATerm j_1 (ATerm t)
{
  t = term_k_25;
  return(t);
}
static ATerm m_1 (ATerm t)
{
  t = debug_1_0(p_1, t);
  return(t);
}
static ATerm p_1 (ATerm t)
{
  t = term_l_25;
  return(t);
}
static ATerm t_1 (ATerm t)
{
  ATerm n_29 = NULL,r_29 = NULL,u_29 = NULL;
  n_29 = t;
  t = term_g_23;
  r_29 = t;
  t = (ATerm) ATinsert(ATempty, term_m_25);
  u_29 = t;
  t = SSL_printnl(r_29, u_29);
  t = n_29;
  return(t);
}
static ATerm u_1 (ATerm t)
{
  ATerm v_29 = NULL,y_29 = NULL,z_29 = NULL;
  if(match_cons(t, sym__3))
    {
      v_29 = ATgetArgument(t, 0);
      y_29 = ATgetArgument(t, 1);
      z_29 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = m_8(v_29, y_29, z_29, t);
  return(t);
}
static ATerm v_1 (ATerm t)
{
  ATerm c_30 = NULL,d_30 = NULL,e_30 = NULL;
  c_30 = t;
  t = term_g_23;
  d_30 = t;
  t = (ATerm) ATinsert(ATempty, term_n_25);
  e_30 = t;
  t = SSL_printnl(d_30, e_30);
  t = c_30;
  return(t);
}
static ATerm y_1 (ATerm t)
{
  ATerm f_30 = NULL,g_30 = NULL,h_30 = NULL;
  f_30 = t;
  t = term_g_23;
  g_30 = t;
  t = (ATerm) ATinsert(ATempty, term_m_25);
  h_30 = t;
  t = SSL_printnl(g_30, h_30);
  t = f_30;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm l_28 = NULL,m_28 = NULL,n_28 = NULL,o_28 = NULL,t_28 = NULL,u_28 = NULL,v_28 = NULL,b_29 = NULL,c_29 = NULL,d_29 = NULL;
  l_28 = t;
  t = if_verbose5_1_0(h_1, t);
  {
    ATerm o_25 = t;
    if((PushChoice() == 0))
      {
        ATerm f_29 = NULL,g_29 = NULL;
        t = term_p_25;
        f_29 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, l_28);
        g_29 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_p_25, (ATerm) ATmakeAppl(sym_Imported_1, l_28));
        t = o_9(f_29, g_29, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = o_25;
      }
  }
  n_28 = t;
  t = term_p_25;
  b_29 = t;
  t = term_q_25;
  c_29 = t;
  t = (ATerm) ATinsert(ATempty, l_28);
  d_29 = t;
  t = SSL_table_put(b_29, c_29, d_29);
  t = n_28;
  t = if_verbose4_1_0(m_1, t);
  t = read_repository_file_0_0(t);
  t = if_verbose6_1_0(t_1, t);
  m_28 = t;
  t = term_p_25;
  v_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_25, m_28);
  t = n_8(u_1, v_28, m_28, t);
  t = if_verbose6_1_0(v_1, t);
  t = term_p_25;
  o_28 = t;
  t = (ATerm) ATmakeAppl(sym_Imported_1, l_28);
  t_28 = t;
  t = (ATerm) ATempty;
  u_28 = t;
  t = SSL_table_put(o_28, t_28, u_28);
  t = (ATerm) ATmakeAppl(sym__3, term_p_25, (ATerm)ATmakeAppl(sym_Imported_1, l_28), (ATerm) ATempty);
  t = if_verbose4_1_0(y_1, t);
  return(t);
}
ATerm repeat_2_0 (ATerm z_83 (ATerm), ATerm a_84 (ATerm), ATerm t)
{
  static ATerm k_30 (ATerm t)
  {
    ATerm t_25 = t;
    int v_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = z_83(t);
        t = k_30(t);
        LocalPopChoice(v_25);
      }
    else
      {
        t = t_25;
        t = a_84(t);
      }
    return(t);
  }
  t = k_30(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm w_25 = t;
  int x_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_30 = NULL,o_30 = NULL;
      t = term_t_11;
      n_30 = t;
      t = term_y_25;
      o_30 = t;
      t = term_z_25;
      t = o_9(n_30, o_30, t);
      LocalPopChoice(x_25);
    }
  else
    {
      t = w_25;
      {
        ATerm a_26 = t;
        int b_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_30 = NULL;
            t = term_c_26;
            q_30 = t;
            t = SSL_getenv(q_30);
            LocalPopChoice(b_26);
          }
        else
          {
            t = a_26;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
static ATerm a_2 (ATerm t)
{
  t = debug_1_0(b_2, t);
  return(t);
}
static ATerm b_2 (ATerm t)
{
  t = term_d_26;
  return(t);
}
static ATerm c_2 (ATerm t)
{
  ATerm y_30 = NULL,z_30 = NULL;
  t = term_p_25;
  y_30 = t;
  t = term_e_26;
  z_30 = t;
  t = term_f_26;
  t = o_9(y_30, z_30, t);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm i_26 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = i_26;
      }
  }
  return(t);
}
static ATerm d_2 (ATerm t)
{
  t = debug_1_0(e_2, t);
  return(t);
}
static ATerm e_2 (ATerm t)
{
  t = term_j_26;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm s_30 = NULL;
  t = if_verbose5_1_0(a_2, t);
  s_30 = t;
  {
    ATerm k_26 = t;
    int l_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_30 = NULL,u_30 = NULL;
        t = term_p_25;
        t_30 = t;
        t = term_q_25;
        u_30 = t;
        t = term_s_26;
        t = o_9(t_30, u_30, t);
        LocalPopChoice(l_26);
      }
    else
      {
        t = k_26;
        {
          ATerm v_30 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          v_30 = t;
          t = repeat_2_0(c_2, _id, t);
          t = v_30;
        }
      }
  }
  t = s_30;
  t = if_verbose5_1_0(d_2, t);
  return(t);
}
static ATerm g_2 (ATerm t)
{
  t = debug_1_0(h_2, t);
  return(t);
}
static ATerm h_2 (ATerm t)
{
  t = term_t_26;
  return(t);
}
static ATerm d_32 (ATerm h_31, ATerm t)
{
  ATerm j_31 = NULL,m_31 = NULL,n_31 = NULL;
  t = term_p_25;
  m_31 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, h_31);
  n_31 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_25, (ATerm) ATmakeAppl(sym_Tool_1, h_31));
  t = o_9(m_31, n_31, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm u_26 = ATgetFirst((ATermList) t);
      if(match_cons(u_26, sym__2))
        {
          ATerm d_27 = ATgetArgument(u_26, 0);
          j_31 = ATgetArgument(u_26, 1);
        }
      else
        _fail(t);
      {
        ATerm w_26 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = j_31;
  return(t);
}
static ATerm o_2 (ATerm t)
{
  t = debug_1_0(q_2, t);
  return(t);
}
static ATerm q_2 (ATerm t)
{
  t = term_t_26;
  return(t);
}
static ATerm r_2 (ATerm t)
{
  t = term_p_25;
  t = table_getlist_0_0(t);
  t = debug_1_0(s_2, t);
  return(t);
}
static ATerm s_2 (ATerm t)
{
  t = term_e_27;
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm g_27 = t;
  int l_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_31 = NULL,r_31 = NULL,s_31 = NULL;
      t = if_verbose5_1_0(g_2, t);
      t = xtc_load_0_0(t);
      s_31 = t;
      if(match_cons(t, sym__2))
        {
          o_31 = ATgetArgument(t, 0);
          r_31 = ATgetArgument(t, 1);
          {
            ATerm o_27 = t;
            int q_27 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm v_31 = NULL,w_31 = NULL,x_31 = NULL;
                t = term_p_25;
                w_31 = t;
                t = (ATerm) ATmakeAppl(sym_Tool_1, o_31);
                x_31 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_p_25, (ATerm) ATmakeAppl(sym_Tool_1, o_31));
                t = o_9(w_31, x_31, t);
                {
                  static ATerm m_2 (ATerm t)
                  {
                    if(match_cons(t, sym__2))
                      {
                        if((r_31 != ATgetArgument(t, 0)))
                          {
                            _fail(ATgetArgument(t, 0));
                          }
                        if(((v_31 != NULL) && (v_31 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          v_31 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = fetch_1_0(m_2, t);
                }
                t = not_null(v_31);
                LocalPopChoice(q_27);
              }
            else
              {
                t = o_27;
                t = d_32(s_31, t);
              }
          }
        }
      else
        {
          t = d_32(s_31, t);
        }
      t = if_verbose5_1_0(o_2, t);
      LocalPopChoice(l_27);
    }
  else
    {
      t = g_27;
      {
        ATerm c_32 = NULL,s_12 = NULL,x_12 = NULL;
        c_32 = t;
        t = term_g_23;
        s_12 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_t_27), c_32), term_s_27);
        x_12 = t;
        t = SSL_printnl(s_12, x_12);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_t_27), c_32), term_s_27);
        t = if_verbose5_1_0(r_2, t);
        _fail(t);
      }
    }
  return(t);
}
ATerm xtc_command_1_0 (ATerm h_116 (ATerm), ATerm t)
{
  ATerm f_32 = NULL,h_32 = NULL;
  h_32 = t;
  t = h_116(t);
  t = xtc_find_0_0(t);
  f_32 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_32, h_32);
  {
    static ATerm v_2 (ATerm t)
    {
      ATerm i_32 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, f_32, h_32);
      t = i_8(f_32, h_32, t);
      t = term_v_27;
      i_32 = t;
      t = SSL_exit(i_32);
      return(t);
    }
    t = fork_and_wait_1_0(v_2, t);
  }
  t = h_32;
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t)
{
  ATerm k_32 = NULL,l_32 = NULL;
  k_32 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm m_32 = NULL,n_32 = NULL;
      t = k_32;
      t = xtc_new_file_0_0(t);
      m_32 = t;
      t = r_0(t);
      n_32 = t;
      t = (ATerm) ATmakeAppl(sym__2, n_32, (ATerm) ATinsert(ATinsert(ATempty, m_32), term_v_11));
      t = conc_0_0(t);
      t = xtc_command_1_0(p_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, m_32);
    }
  else
    {
      ATerm p_32 = NULL,q_32 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          l_32 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = l_32;
      t = xtc_new_file_0_0(t);
      p_32 = t;
      t = r_0(t);
      q_32 = t;
      t = (ATerm) ATmakeAppl(sym__2, q_32, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, p_32), term_v_11), l_32), term_w_27));
      t = conc_0_0(t);
      t = xtc_command_1_0(p_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, p_32);
    }
  return(t);
}
static ATerm n_35 (ATerm x_32, ATerm y_32, ATerm z_32, ATerm t)
{
  ATerm a_33 = NULL,d_33 = NULL,z_12 = NULL,b_13 = NULL,k_4 = NULL;
  t = SSLgetAnnotations(z_32);
  a_33 = t;
  t = x_32;
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
  d_33 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_33, y_32);
  k_4 = t;
  t = SSLsetAnnotations(k_4, a_33);
  b_13 = t;
  t = SSL_explode_term(b_13);
  if(match_cons(t, sym__2))
    {
      ATerm y_27 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) y_27) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm z_27 = ATgetArgument(t, 1);
        if(((ATgetType(z_27) == AT_LIST) && !(ATisEmpty(z_27))))
          {
            ATerm a_28 = ATgetFirst((ATermList) z_27);
            ATerm c_28 = (ATerm) ATgetNext((ATermList) z_27);
            if(((ATgetType(c_28) == AT_LIST) && !(ATisEmpty(c_28))))
              {
                z_12 = ATgetFirst((ATermList) c_28);
                {
                  ATerm d_28 = (ATerm) ATgetNext((ATermList) c_28);
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
  t = z_12;
  {
    ATerm e_28 = t;
    int f_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_28 = t;
        int p_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_33 = NULL;
            if(match_cons(t, sym_FILE_1))
              {
                l_33 = ATgetArgument(t, 0);
                {
                  ATerm j_13 = NULL,m_4 = NULL;
                  t = SSLgetAnnotations(z_12);
                  j_13 = t;
                  t = (ATerm) ATmakeAppl(sym_FILE_1, l_33);
                  m_4 = t;
                  t = SSLsetAnnotations(m_4, j_13);
                }
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = z_12;
              }
            LocalPopChoice(p_28);
            t = xtc_transform_file_2_0(a_3, b_3, t);
          }
        else
          {
            t = h_28;
            t = xtc_transform_term_2_0(c_3, i_3, t);
          }
        t = read_from_0_0(t);
        LocalPopChoice(f_28);
      }
    else
      {
        t = e_28;
        {
          ATerm x_34 = NULL,y_34 = NULL,z_34 = NULL;
          t = term_g_23;
          y_34 = t;
          t = (ATerm) ATinsert(ATinsert(ATempty, y_32), term_q_28);
          z_34 = t;
          t = SSL_printnl(y_34, z_34);
          t = term_z_15;
          x_34 = t;
          t = SSL_exit(x_34);
          t = (ATerm) ATinsert(ATinsert(ATempty, y_32), term_q_28);
        }
      }
  }
  return(t);
}
static ATerm o_35 (ATerm a_35, ATerm b_35, ATerm t)
{
  ATerm v_13 = NULL;
  t = SSL_explode_term(b_35);
  if(match_cons(t, sym__2))
    {
      ATerm r_28 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) r_28) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm s_28 = ATgetArgument(t, 1);
        if(((ATgetType(s_28) == AT_LIST) && !(ATisEmpty(s_28))))
          {
            ATerm w_28 = ATgetFirst((ATermList) s_28);
            ATerm x_28 = (ATerm) ATgetNext((ATermList) s_28);
            if(((ATgetType(x_28) == AT_LIST) && !(ATisEmpty(x_28))))
              {
                v_13 = ATgetFirst((ATermList) x_28);
                {
                  ATerm y_28 = (ATerm) ATgetNext((ATermList) x_28);
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
  t = v_13;
  {
    ATerm z_28 = t;
    int a_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = read_from_0_0(t);
        LocalPopChoice(a_29);
      }
    else
      {
        t = z_28;
        {
          ATerm f_35 = NULL,g_35 = NULL,i_35 = NULL;
          t = term_g_23;
          g_35 = t;
          t = (ATerm) ATinsert(ATinsert(ATempty, a_35), term_q_28);
          i_35 = t;
          t = SSL_printnl(g_35, i_35);
          t = term_z_15;
          f_35 = t;
          t = SSL_exit(f_35);
          t = (ATerm) ATinsert(ATinsert(ATempty, a_35), term_q_28);
        }
      }
  }
  return(t);
}
static ATerm a_3 (ATerm t)
{
  t = term_e_29;
  return(t);
}
static ATerm b_3 (ATerm t)
{
  ATerm p_33 = NULL,r_33 = NULL,s_33 = NULL,u_33 = NULL,w_33 = NULL;
  w_33 = t;
  t = pass_verbose_0_0(t);
  p_33 = t;
  t = w_33;
  t = pass_keep_0_0(t);
  r_33 = t;
  t = term_h_29;
  {
    ATerm m_29 = t;
    int q_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_34 = NULL,c_34 = NULL;
        t = term_t_11;
        a_34 = t;
        t = term_h_29;
        c_34 = t;
        t = term_s_29;
        t = o_9(a_34, c_34, t);
        LocalPopChoice(q_29);
        t = (ATerm) ATinsert(ATempty, term_h_29);
      }
    else
      {
        t = m_29;
        t = (ATerm) ATempty;
      }
  }
  s_33 = t;
  t = term_t_29;
  {
    ATerm w_29 = t;
    int x_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_34 = NULL,g_34 = NULL;
        t = term_t_11;
        f_34 = t;
        t = term_t_29;
        g_34 = t;
        t = term_a_30;
        t = o_9(f_34, g_34, t);
        LocalPopChoice(x_29);
      }
    else
      {
        t = w_29;
        t = (ATerm) ATempty;
      }
  }
  u_33 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, u_33), r_33), p_33), s_33);
  t = concat_0_0(t);
  return(t);
}
static ATerm c_3 (ATerm t)
{
  t = term_e_29;
  return(t);
}
static ATerm i_3 (ATerm t)
{
  ATerm k_34 = NULL,n_34 = NULL,o_34 = NULL,p_34 = NULL,q_34 = NULL;
  q_34 = t;
  t = pass_verbose_0_0(t);
  k_34 = t;
  t = q_34;
  t = pass_keep_0_0(t);
  n_34 = t;
  t = term_h_29;
  {
    ATerm b_30 = t;
    int i_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_34 = NULL,u_34 = NULL;
        t = term_t_11;
        t_34 = t;
        t = term_h_29;
        u_34 = t;
        t = term_s_29;
        t = o_9(t_34, u_34, t);
        LocalPopChoice(i_30);
        t = (ATerm) ATinsert(ATempty, term_h_29);
      }
    else
      {
        t = b_30;
        t = (ATerm) ATempty;
      }
  }
  o_34 = t;
  t = term_t_29;
  {
    ATerm j_30 = t;
    int l_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_34 = NULL,w_34 = NULL;
        t = term_t_11;
        v_34 = t;
        t = term_t_29;
        w_34 = t;
        t = term_a_30;
        t = o_9(v_34, w_34, t);
        LocalPopChoice(l_30);
      }
    else
      {
        t = j_30;
        t = (ATerm) ATempty;
      }
  }
  p_34 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, p_34), n_34), k_34), o_34);
  t = concat_0_0(t);
  return(t);
}
ATerm parse_module_0_0 (ATerm t)
{
  ATerm k_35 = NULL,l_35 = NULL,m_35 = NULL;
  k_35 = t;
  if(match_cons(t, sym__2))
    {
      l_35 = ATgetArgument(t, 0);
      m_35 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_35;
  if(match_string(t, "rtree"))
    {
      ATerm m_30 = t;
      int p_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = n_35(l_35, m_35, k_35, t);
          LocalPopChoice(p_30);
        }
      else
        {
          t = m_30;
          t = o_35(m_35, k_35, t);
        }
    }
  else
    {
      t = n_35(l_35, m_35, k_35, t);
    }
  return(t);
}
ATerm debug_1_0 (ATerm a_91 (ATerm), ATerm t)
{
  ATerm q_35 = NULL,r_35 = NULL,s_35 = NULL,t_35 = NULL;
  q_35 = t;
  t = a_91(t);
  r_35 = t;
  t = term_g_23;
  s_35 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, q_35), r_35);
  t_35 = t;
  t = SSL_printnl(s_35, t_35);
  t = q_35;
  return(t);
}
ATerm if_verbose3_1_0 (ATerm v_106 (ATerm), ATerm t)
{
  ATerm v_35 = NULL;
  v_35 = t;
  {
    ATerm r_30 = t;
    int w_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_35 = NULL,a_36 = NULL,b_36 = NULL;
        t = term_t_11;
        a_36 = t;
        t = term_g_16;
        b_36 = t;
        t = term_j_16;
        t = o_9(a_36, b_36, t);
        z_35 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_35, term_f_17);
        t = geq_0_0(t);
        t = v_35;
        t = v_106(t);
        LocalPopChoice(w_30);
      }
    else
      {
        t = r_30;
        t = v_35;
      }
  }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm x_91 (ATerm), ATerm t)
{
  ATerm d_36 = NULL;
  static ATerm k_3 (ATerm t)
  {
    t = x_91(t);
    if(((d_36 != NULL) && (d_36 != t)))
      _fail(t);
    else
      d_36 = t;
    return(t);
  }
  t = fetch_1_0(k_3, t);
  t = not_null(d_36);
  return(t);
}
static ATerm t_8 (ATerm f_38, ATerm g_38, ATerm t)
{
  t = SSL_access(f_38, g_38);
  return(t);
}
ATerm is_relpath_0_0 (ATerm t)
{
  ATerm x_30 = t;
  if((PushChoice() == 0))
    {
      ATerm e_36 = NULL;
      e_36 = t;
      t = SSL_explode_string(e_36);
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          ATerm a_31 = ATgetFirst((ATermList) t);
          if(((ATgetType(a_31) != AT_INT) || (ATgetInt((ATermInt) a_31) != 47)))
            _fail(t);
          {
            ATerm b_31 = (ATerm) ATgetNext((ATermList) t);
          }
        }
      else
        _fail(t);
      t = e_36;
      PopChoice();
      _fail(t);
    }
  else
    {
      t = x_30;
    }
  return(t);
}
static ATerm u_8 (ATerm f_83 (ATerm), ATerm p_21, ATerm o_21, ATerm t)
{
  t = f_83(t);
  {
    ATerm c_31 = t;
    int d_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm m_3 (ATerm t)
        {
          ATerm n_36 = NULL;
          n_36 = t;
          {
            ATerm e_31 = t;
            int f_31 = stack_ptr;
            if((PushChoice() == 0))
              {
                static ATerm n_3 (ATerm t)
                {
                  ATerm p_36 = NULL,q_36 = NULL,r_36 = NULL,s_36 = NULL,t_36 = NULL;
                  q_36 = t;
                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, q_36), term_a_14), p_21), term_g_31), n_36);
                  t_36 = t;
                  t = SSL_concat_strings(t_36);
                  r_36 = t;
                  t = (ATerm) ATinsert(ATempty, term_p_15);
                  s_36 = t;
                  t = (ATerm) ATmakeAppl(sym__2, r_36, (ATerm) ATinsert(ATempty, term_p_15));
                  t = t_8(r_36, s_36, t);
                  p_36 = t;
                  t = (ATerm) ATmakeAppl(sym__2, q_36, (ATerm) ATmakeAppl(sym_FILE_1, p_36));
                  return(t);
                }
                t = p_21;
                t = is_relpath_0_0(t);
                t = o_21;
                t = fetch_elem_1_0(n_3, t);
                LocalPopChoice(f_31);
              }
            else
              {
                t = e_31;
                {
                  static ATerm o_3 (ATerm t)
                  {
                    ATerm c_14 = NULL,d_14 = NULL,e_14 = NULL,g_14 = NULL,h_14 = NULL;
                    d_14 = t;
                    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, d_14), term_a_14), p_21);
                    h_14 = t;
                    t = SSL_concat_strings(h_14);
                    e_14 = t;
                    t = (ATerm) ATinsert(ATempty, term_p_15);
                    g_14 = t;
                    t = (ATerm) ATmakeAppl(sym__2, e_14, (ATerm) ATinsert(ATempty, term_p_15));
                    t = t_8(e_14, g_14, t);
                    c_14 = t;
                    t = (ATerm) ATmakeAppl(sym__2, d_14, (ATerm) ATmakeAppl(sym_FILE_1, c_14));
                    return(t);
                  }
                  t = SSL_explode_string(p_21);
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      ATerm i_31 = ATgetFirst((ATermList) t);
                      if(((ATgetType(i_31) != AT_INT) || (ATgetInt((ATermInt) i_31) != 47)))
                        _fail(t);
                      {
                        ATerm k_31 = (ATerm) ATgetNext((ATermList) t);
                      }
                    }
                  else
                    _fail(t);
                  t = o_21;
                  t = fetch_elem_1_0(o_3, t);
                }
              }
          }
          return(t);
        }
        t = fetch_elem_1_0(m_3, t);
        LocalPopChoice(d_31);
      }
    else
      {
        t = c_31;
        {
          ATerm l_31 = t;
          int p_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              static ATerm p_3 (ATerm t)
              {
                ATerm u_36 = NULL,v_36 = NULL,w_36 = NULL,x_36 = NULL,y_36 = NULL,z_36 = NULL;
                u_36 = t;
                t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, u_36), term_a_14), p_21);
                z_36 = t;
                t = SSL_concat_strings(z_36);
                v_36 = t;
                t = term_p_25;
                x_36 = t;
                t = (ATerm) ATmakeAppl(sym_Tool_1, v_36);
                y_36 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_p_25, (ATerm) ATmakeAppl(sym_Tool_1, v_36));
                t = o_9(x_36, y_36, t);
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    ATerm q_31 = ATgetFirst((ATermList) t);
                    if(match_cons(q_31, sym__2))
                      {
                        ATerm u_31 = ATgetArgument(q_31, 0);
                        w_36 = ATgetArgument(q_31, 1);
                      }
                    else
                      _fail(t);
                    {
                      ATerm t_31 = (ATerm) ATgetNext((ATermList) t);
                    }
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym__2, u_36, (ATerm) ATmakeAppl(sym_FILE_1, w_36));
                return(t);
              }
              t = o_21;
              t = fetch_elem_1_0(p_3, t);
              LocalPopChoice(p_31);
            }
          else
            {
              t = l_31;
              {
                ATerm y_31 = t;
                int z_31 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm a_37 = NULL,b_37 = NULL;
                    t = term_t_11;
                    a_37 = t;
                    t = term_a_32;
                    b_37 = t;
                    t = term_b_32;
                    t = o_9(a_37, b_37, t);
                    LocalPopChoice(z_31);
                    {
                      ATerm c_37 = NULL,d_37 = NULL,e_37 = NULL,h_37 = NULL,i_37 = NULL;
                      c_37 = t;
                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_g_32), p_21), term_e_32);
                      i_37 = t;
                      t = SSL_concat_strings(i_37);
                      d_37 = t;
                      t = term_g_23;
                      e_37 = t;
                      t = (ATerm) ATinsert(ATempty, d_37);
                      h_37 = t;
                      t = SSL_printnl(e_37, h_37);
                      t = c_37;
                      _fail(t);
                    }
                  }
                else
                  {
                    t = y_31;
                    {
                      ATerm j_37 = NULL,k_37 = NULL,l_37 = NULL;
                      t = term_g_23;
                      k_37 = t;
                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_g_32), p_21), term_e_32);
                      l_37 = t;
                      t = SSL_printnl(k_37, l_37);
                      t = term_z_15;
                      j_37 = t;
                      t = SSL_exit(j_37);
                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_g_32), p_21), term_e_32);
                    }
                  }
              }
            }
        }
      }
  }
  return(t);
}
static ATerm u_3 (ATerm t)
{
  t = term_j_32;
  return(t);
}
ATerm get_module_1_0 (ATerm e_83 (ATerm), ATerm t)
{
  ATerm q_37 = NULL,r_37 = NULL,v_37 = NULL,w_37 = NULL;
  t = basename_1_0(_id, t);
  v_37 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_v_24), term_s_32), term_r_32), term_o_32);
  w_37 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_37, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_v_24), term_s_32), term_r_32), term_o_32));
  t = u_8(e_83, v_37, w_37, t);
  if(match_cons(t, sym__2))
    {
      ATerm t_32 = ATgetArgument(t, 0);
      ATerm u_32 = ATgetArgument(t, 1);
      if(match_cons(u_32, sym_FILE_1))
        {
          q_37 = ATgetArgument(u_32, 0);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  {
    static ATerm s_3 (ATerm t)
    {
      ATerm y_37 = NULL;
      y_37 = t;
      t = q_37;
      t = debug_1_0(u_3, t);
      t = y_37;
      return(t);
    }
    t = if_verbose3_1_0(s_3, t);
  }
  t = parse_module_0_0(t);
  r_37 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_37, r_37);
  return(t);
}
static ATerm w_8 (ATerm z_95 (ATerm), ATerm a_96 (ATerm), ATerm p_29, ATerm o_29, ATerm t)
{
  t = a_96(t);
  {
    static ATerm x_3 (ATerm t)
    {
      ATerm z_37 = NULL;
      z_37 = t;
      t = (ATerm) ATmakeAppl(sym__2, p_29, z_37);
      t = z_95(t);
      return(t);
    }
    t = fetch_1_0(x_3, t);
  }
  t = o_29;
  return(t);
}
static ATerm x_8 (ATerm r_95 (ATerm), ATerm j_29, ATerm i_29, ATerm t)
{
  static ATerm f_39 (ATerm t)
  {
    ATerm y_38 = NULL,z_38 = NULL,c_39 = NULL;
    y_38 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = y_38;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            z_38 = ATgetFirst((ATermList) t);
            c_39 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm v_32 = t;
          int w_32 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = y_38;
              {
                static ATerm y_3 (ATerm t)
                {
                  t = i_29;
                  return(t);
                }
                t = w_8(r_95, y_3, z_38, c_39, t);
              }
              t = f_39(t);
              LocalPopChoice(w_32);
            }
          else
            {
              t = v_32;
              {
                ATerm q_14 = NULL,w_14 = NULL,q_4 = NULL;
                t = SSLgetAnnotations(y_38);
                q_14 = t;
                t = c_39;
                t = f_39(t);
                w_14 = t;
                t = (ATerm) ATinsert(CheckATermList(w_14), z_38);
                q_4 = t;
                t = SSLsetAnnotations(q_4, q_14);
              }
            }
        }
      }
    return(t);
  }
  t = j_29;
  t = f_39(t);
  return(t);
}
static ATerm b_4 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm b_33 = ATgetArgument(t, 0);
      if(((ATgetType(b_33) != AT_LIST) || !(ATisEmpty(b_33))))
        _fail(t);
      {
        ATerm c_33 = ATgetArgument(t, 1);
        if(((ATgetType(c_33) != AT_LIST) || !(ATisEmpty(c_33))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm g_4 (ATerm t)
{
  ATerm n_39 = NULL,q_39 = NULL,r_39 = NULL,s_39 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm e_33 = ATgetArgument(t, 0);
      if(((ATgetType(e_33) == AT_LIST) && !(ATisEmpty(e_33))))
        {
          n_39 = ATgetFirst((ATermList) e_33);
          q_39 = (ATerm) ATgetNext((ATermList) e_33);
        }
      else
        _fail(t);
      {
        ATerm f_33 = ATgetArgument(t, 1);
        if(((ATgetType(f_33) == AT_LIST) && !(ATisEmpty(f_33))))
          {
            r_39 = ATgetFirst((ATermList) f_33);
            s_39 = (ATerm) ATgetNext((ATermList) f_33);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, n_39, r_39), (ATerm) ATmakeAppl(sym__2, q_39, s_39));
  return(t);
}
static ATerm h_4 (ATerm t)
{
  ATerm t_39 = NULL,a_40 = NULL;
  if(match_cons(t, sym__2))
    {
      t_39 = ATgetArgument(t, 0);
      a_40 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(a_40), t_39);
  return(t);
}
static ATerm c_9 (ATerm f_608, ATerm k_608, ATerm m_57, ATerm t)
{
  ATerm i_39 = NULL,j_39 = NULL,k_39 = NULL,l_39 = NULL;
  t = SSL_explode_term(k_608);
  if(match_cons(t, sym__2))
    {
      i_39 = ATgetArgument(t, 0);
      k_39 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(f_608);
  if(match_cons(t, sym__2))
    {
      if((i_39 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      j_39 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, j_39, k_39);
  t = genzip_4_0(b_4, g_4, h_4, _id, t);
  l_39 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_39, m_57);
  t = conc_0_0(t);
  return(t);
}
static ATerm i_4 (ATerm t)
{
  ATerm l_40 = NULL;
  l_40 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, l_40);
  return(t);
}
static ATerm j_4 (ATerm t)
{
  ATerm m_40 = NULL,n_40 = NULL,o_40 = NULL,p_40 = NULL,s_4 = NULL;
  p_40 = t;
  if(match_cons(t, sym__2))
    {
      n_40 = ATgetArgument(t, 0);
      o_40 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_40);
  m_40 = t;
  t = o_40;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, n_40, o_40);
  s_4 = t;
  t = SSLsetAnnotations(s_4, m_40);
  return(t);
}
static ATerm l_4 (ATerm t)
{
  ATerm k_41 = NULL,l_41 = NULL,m_41 = NULL,n_41 = NULL,q_41 = NULL;
  k_41 = t;
  if(match_cons(t, sym__2))
    {
      l_41 = ATgetArgument(t, 0);
      m_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_41;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_41 = ATgetFirst((ATermList) t);
      q_41 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm g_33 = t;
        int h_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = a_42(l_41, m_41, k_41, t);
            LocalPopChoice(h_33);
          }
        else
          {
            t = g_33;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(l_41), n_41), q_41);
          }
      }
    }
  else
    {
      t = a_42(l_41, m_41, k_41, t);
    }
  return(t);
}
static ATerm a_42 (ATerm q_40, ATerm r_40, ATerm s_40, ATerm t)
{
  ATerm t_40 = NULL,w_40 = NULL,t_4 = NULL,z_40 = NULL,a_41 = NULL,b_41 = NULL,c_41 = NULL;
  t = SSLgetAnnotations(s_40);
  t_40 = t;
  t = r_40;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_40 = ATgetFirst((ATermList) t);
      c_41 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = z_40;
  if(match_cons(t, sym__2))
    {
      a_41 = ATgetArgument(t, 0);
      b_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm i_33 = t;
    int j_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = b_41;
        if((a_41 != t))
          {
            _fail(t);
          }
        t = c_41;
        LocalPopChoice(j_33);
      }
    else
      {
        t = i_33;
        t = r_40;
        t = c_9(a_41, b_41, c_41, t);
      }
  }
  w_40 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_40, w_40);
  t_4 = t;
  t = SSLsetAnnotations(t_4, t_40);
  return(t);
}
static ATerm n_4 (ATerm t)
{
  ATerm z_41 = NULL;
  if(match_cons(t, sym__2))
    {
      z_41 = ATgetArgument(t, 0);
      if((z_41 != ATgetArgument(t, 1)))
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
  ATerm k_33 = t;
  int m_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(i_4, j_4, l_4, t);
      LocalPopChoice(m_33);
    }
  else
    {
      t = k_33;
      {
        ATerm u_41 = NULL,v_41 = NULL,w_41 = NULL;
        u_41 = t;
        if(match_cons(t, sym__2))
          {
            v_41 = ATgetArgument(t, 0);
            w_41 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = u_41;
        t = x_8(n_4, v_41, w_41, t);
      }
    }
  return(t);
}
static ATerm e_9 (ATerm d_117 (ATerm), ATerm e_117 (ATerm), ATerm f_117 (ATerm), ATerm z_60, ATerm w_60, ATerm d_61, ATerm a_61, ATerm x_60, ATerm y_60, ATerm t)
{
  ATerm b_42 = NULL,c_42 = NULL,d_42 = NULL,e_42 = NULL,f_42 = NULL,g_42 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, z_60, a_61);
  t = d_117(t);
  b_42 = t;
  t = e_117(t);
  c_42 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_42, d_61);
  t = diff_0_0(t);
  d_42 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_42, w_60);
  t = conc_0_0(t);
  e_42 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_42, d_61);
  t = conc_0_0(t);
  f_42 = t;
  t = (ATerm) ATmakeAppl(sym__3, z_60, b_42, x_60);
  t = f_117(t);
  g_42 = t;
  t = (ATerm) ATmakeAppl(sym__5, e_42, f_42, a_61, g_42, y_60);
  return(t);
}
ATerm GnNext_3_0 (ATerm d_117 (ATerm), ATerm e_117 (ATerm), ATerm f_117 (ATerm), ATerm t)
{
  ATerm i_42 = NULL,j_42 = NULL,k_42 = NULL,l_42 = NULL,m_42 = NULL,n_42 = NULL;
  if(match_cons(t, sym__5))
    {
      ATerm n_33 = ATgetArgument(t, 0);
      if(((ATgetType(n_33) == AT_LIST) && !(ATisEmpty(n_33))))
        {
          i_42 = ATgetFirst((ATermList) n_33);
          j_42 = (ATerm) ATgetNext((ATermList) n_33);
        }
      else
        _fail(t);
      k_42 = ATgetArgument(t, 1);
      l_42 = ATgetArgument(t, 2);
      m_42 = ATgetArgument(t, 3);
      n_42 = ATgetArgument(t, 4);
    }
  else
    _fail(t);
  t = e_9(d_117, e_117, f_117, i_42, j_42, k_42, l_42, m_42, n_42, t);
  return(t);
}
ATerm while_not_2_0 (ATerm q_84 (ATerm), ATerm r_84 (ATerm), ATerm t)
{
  static ATerm z_42 (ATerm t)
  {
    ATerm o_33 = t;
    int q_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = q_84(t);
        LocalPopChoice(q_33);
      }
    else
      {
        t = o_33;
        t = r_84(t);
        t = z_42(t);
      }
    return(t);
  }
  t = z_42(t);
  return(t);
}
ATerm for_3_0 (ATerm t_84 (ATerm), ATerm u_84 (ATerm), ATerm v_84 (ATerm), ATerm t)
{
  t = t_84(t);
  t = while_not_2_0(u_84, v_84, t);
  return(t);
}
static ATerm o_4 (ATerm t)
{
  ATerm d_43 = NULL,e_43 = NULL,f_43 = NULL;
  if(match_cons(t, sym__3))
    {
      d_43 = ATgetArgument(t, 0);
      e_43 = ATgetArgument(t, 1);
      f_43 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__5, d_43, d_43, e_43, f_43, (ATerm) ATempty);
  return(t);
}
static ATerm p_4 (ATerm t)
{
  ATerm l_43 = NULL,m_43 = NULL;
  if(match_cons(t, sym__5))
    {
      ATerm t_33 = ATgetArgument(t, 0);
      if(((ATgetType(t_33) != AT_LIST) || !(ATisEmpty(t_33))))
        _fail(t);
      {
        ATerm v_33 = ATgetArgument(t, 1);
      }
      {
        ATerm x_33 = ATgetArgument(t, 2);
      }
      l_43 = ATgetArgument(t, 3);
      m_43 = ATgetArgument(t, 4);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, l_43, m_43);
  return(t);
}
ATerm graph_nodes_roots_3_0 (ATerm a_117 (ATerm), ATerm b_117 (ATerm), ATerm c_117 (ATerm), ATerm t)
{
  ATerm c_43 = NULL;
  static ATerm r_4 (ATerm t)
  {
    ATerm y_33 = t;
    int z_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = GnNext_3_0(a_117, b_117, c_117, t);
        LocalPopChoice(z_33);
      }
    else
      {
        t = y_33;
        {
          ATerm o_43 = NULL,p_43 = NULL,u_43 = NULL,v_43 = NULL,w_43 = NULL,x_43 = NULL,y_43 = NULL;
          if(match_cons(t, sym__5))
            {
              o_43 = ATgetArgument(t, 0);
              v_43 = ATgetArgument(t, 1);
              w_43 = ATgetArgument(t, 2);
              x_43 = ATgetArgument(t, 3);
              y_43 = ATgetArgument(t, 4);
            }
          else
            _fail(t);
          t = o_43;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              p_43 = ATgetFirst((ATermList) t);
              u_43 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__5, u_43, v_43, w_43, x_43, (ATerm) ATinsert(CheckATermList(y_43), p_43));
        }
      }
    return(t);
  }
  t = for_3_0(o_4, p_4, r_4, t);
  if(match_cons(t, sym__2))
    {
      c_43 = ATgetArgument(t, 0);
      {
        ATerm b_34 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = c_43;
  return(t);
}
ATerm filter_1_0 (ATerm g_99 (ATerm), ATerm t)
{
  ATerm y_44 = NULL,z_44 = NULL,a_45 = NULL;
  y_44 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = y_44;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          z_44 = ATgetFirst((ATermList) t);
          a_45 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm d_34 = t;
        int e_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_15 = NULL,t_15 = NULL,u_15 = NULL,z_4 = NULL;
            t = SSLgetAnnotations(y_44);
            n_15 = t;
            t = z_44;
            t = g_99(t);
            t_15 = t;
            t = a_45;
            t = filter_1_0(g_99, t);
            u_15 = t;
            t = (ATerm) ATinsert(CheckATermList(u_15), t_15);
            z_4 = t;
            t = SSLsetAnnotations(z_4, n_15);
            LocalPopChoice(e_34);
          }
        else
          {
            t = d_34;
            t = a_45;
            t = filter_1_0(g_99, t);
          }
      }
    }
  return(t);
}
static ATerm u_4 (ATerm t)
{
  ATerm h_34 = t;
  if((PushChoice() == 0))
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-I", 0, ATtrue)))
        _fail(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = h_34;
    }
  return(t);
}
static ATerm w_4 (ATerm t)
{
  ATerm z_45 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm i_34 = ATgetArgument(t, 0);
      ATerm j_34 = ATgetArgument(t, 1);
      if(match_cons(j_34, sym_Specification_1))
        {
          z_45 = ATgetArgument(j_34, 0);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  t = g_8(z_45, t);
  return(t);
}
static ATerm a_5 (ATerm t)
{
  ATerm a_46 = NULL,b_46 = NULL;
  if(match_cons(t, sym__3))
    {
      ATerm l_34 = ATgetArgument(t, 0);
      a_46 = ATgetArgument(t, 1);
      b_46 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(b_46), a_46);
  return(t);
}
static ATerm c_5 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_m_34;
  return(t);
}
static ATerm d_5 (ATerm t)
{
  ATerm c_46 = NULL,d_46 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_46 = ATgetFirst((ATermList) t);
      d_46 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, c_46, d_46);
  return(t);
}
static ATerm f_5 (ATerm t)
{
  ATerm e_46 = NULL,f_46 = NULL,g_46 = NULL,h_46 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm r_34 = ATgetArgument(t, 0);
      if(match_cons(r_34, sym__2))
        {
          e_46 = ATgetArgument(r_34, 0);
          f_46 = ATgetArgument(r_34, 1);
        }
      else
        _fail(t);
      {
        ATerm s_34 = ATgetArgument(t, 1);
        if(match_cons(s_34, sym__2))
          {
            g_46 = ATgetArgument(s_34, 0);
            h_46 = ATgetArgument(s_34, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(g_46), e_46), (ATerm) ATinsert(CheckATermList(h_46), f_46));
  return(t);
}
static ATerm h_9 (ATerm f_21, ATerm t)
{
  ATerm i_45 = NULL,j_45 = NULL,l_45 = NULL,o_45 = NULL,p_45 = NULL,q_45 = NULL,e_7 = NULL;
  ATerm c_35 = t;
  int d_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_45 = NULL,w_45 = NULL;
      t = term_t_11;
      r_45 = t;
      t = term_t_29;
      w_45 = t;
      t = term_a_30;
      t = o_9(r_45, w_45, t);
      t = filter_1_0(u_4, t);
      LocalPopChoice(d_35);
    }
  else
    {
      t = c_35;
      t = (ATerm) ATempty;
    }
  i_45 = t;
  t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATinsert(ATempty, f_21), term_q_12, (ATerm) ATempty);
  {
    static ATerm v_4 (ATerm t)
    {
      ATerm x_45 = NULL,y_45 = NULL;
      static ATerm b_5 (ATerm t)
      {
        t = (ATerm) ATinsert(CheckATermList(i_45), term_a_14);
        return(t);
      }
      y_45 = t;
      t = SSL_explode_term(y_45);
      if(match_cons(t, sym__2))
        {
          ATerm e_35 = ATgetArgument(t, 0);
          if((ATgetSymbol((ATermAppl) e_35) != ATmakeSymbol("", 0, ATtrue)))
            _fail(t);
          {
            ATerm h_35 = ATgetArgument(t, 1);
            if(((ATgetType(h_35) == AT_LIST) && !(ATisEmpty(h_35))))
              {
                x_45 = ATgetFirst((ATermList) h_35);
                {
                  ATerm j_35 = (ATerm) ATgetNext((ATermList) h_35);
                }
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = x_45;
      t = get_module_1_0(b_5, t);
      return(t);
    }
    t = graph_nodes_roots_3_0(v_4, w_4, a_5, t);
  }
  t = genzip_4_0(c_5, d_5, f_5, _id, t);
  q_45 = t;
  if(match_cons(t, sym__2))
    {
      l_45 = ATgetArgument(t, 0);
      o_45 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_45);
  j_45 = t;
  t = o_45;
  t = flatten_stratego_0_0(t);
  p_45 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_45, p_45);
  e_7 = t;
  t = SSLsetAnnotations(e_7, j_45);
  return(t);
}
static ATerm k_9 (ATerm u_52, ATerm v_52, ATerm t)
{
  ATerm j_46 = NULL,l_46 = NULL;
  l_46 = t;
  {
    ATerm p_35 = t;
    int u_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, u_52, v_52);
        t = o_9(u_52, v_52, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm w_35 = ATgetFirst((ATermList) t);
            j_46 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(u_35);
        t = SSL_table_put(u_52, v_52, j_46);
        t = (ATerm) ATmakeAppl(sym__3, u_52, v_52, j_46);
      }
    else
      {
        t = p_35;
        t = SSL_table_remove(u_52, v_52);
        t = (ATerm) ATmakeAppl(sym__2, u_52, v_52);
      }
  }
  t = l_46;
  return(t);
}
ATerm end_scope_1_0 (ATerm j_104 (ATerm), ATerm t)
{
  ATerm n_46 = NULL,o_46 = NULL,p_46 = NULL,v_46 = NULL,c_47 = NULL;
  v_46 = t;
  t = j_104(t);
  p_46 = t;
  {
    ATerm x_35 = t;
    int y_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_47 = NULL;
        t = term_h_12;
        d_47 = t;
        t = (ATerm) ATmakeAppl(sym__2, p_46, term_h_12);
        t = o_9(p_46, d_47, t);
        LocalPopChoice(y_35);
      }
    else
      {
        t = x_35;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_46 = ATgetFirst((ATermList) t);
      n_46 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_h_12;
  c_47 = t;
  t = SSL_table_put(p_46, c_47, n_46);
  t = o_46;
  {
    static ATerm h_5 (ATerm t)
    {
      ATerm e_47 = NULL;
      e_47 = t;
      t = (ATerm) ATmakeAppl(sym__2, p_46, e_47);
      t = k_9(p_46, e_47, t);
      return(t);
    }
    t = map_1_0(h_5, t);
  }
  t = v_46;
  return(t);
}
ATerm restore_always_2_0 (ATerm v_83 (ATerm), ATerm w_83 (ATerm), ATerm t)
{
  ATerm c_36 = t;
  int f_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = v_83(t);
      t = w_83(t);
      LocalPopChoice(f_36);
    }
  else
    {
      t = c_36;
      t = w_83(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm i_104 (ATerm), ATerm t)
{
  ATerm g_47 = NULL,h_47 = NULL,l_47 = NULL,m_47 = NULL,n_47 = NULL;
  h_47 = t;
  t = i_104(t);
  g_47 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_47, term_h_12);
  {
    ATerm g_36 = t;
    int h_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_47 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm i_36 = ATgetArgument(t, 0);
            ATerm j_36 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_h_12;
        t_47 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_47, term_h_12);
        t = o_9(g_47, t_47, t);
        LocalPopChoice(h_36);
      }
    else
      {
        t = g_36;
        t = (ATerm) ATempty;
      }
  }
  l_47 = t;
  t = term_h_12;
  m_47 = t;
  t = (ATerm) ATinsert(CheckATermList(l_47), (ATerm) ATempty);
  n_47 = t;
  t = SSL_table_put(g_47, m_47, n_47);
  t = h_47;
  return(t);
}
static ATerm l_5 (ATerm t)
{
  t = term_o_12;
  return(t);
}
static ATerm n_5 (ATerm t)
{
  ATerm e_48 = NULL;
  e_48 = t;
  {
    ATerm k_36 = t;
    int l_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(e_48);
        LocalPopChoice(l_36);
      }
    else
      {
        t = k_36;
        t = e_48;
      }
  }
  return(t);
}
static ATerm r_5 (ATerm t)
{
  t = term_o_12;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm t_115 (ATerm), ATerm t)
{
  ATerm w_47 = NULL;
  static ATerm m_5 (ATerm t)
  {
    ATerm x_47 = NULL;
    x_47 = t;
    {
      ATerm m_36 = t;
      int o_36 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm y_47 = NULL,z_47 = NULL;
          t = term_o_12;
          y_47 = t;
          t = term_h_12;
          z_47 = t;
          t = term_m_37;
          t = o_9(y_47, z_47, t);
          LocalPopChoice(o_36);
        }
      else
        {
          t = m_36;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
        }
    }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((w_47 != NULL) && (w_47 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          w_47 = ATgetFirst((ATermList) t);
        {
          ATerm n_37 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    t = w_47;
    t = map_1_0(n_5, t);
    t = x_47;
    t = end_scope_1_0(r_5, t);
    return(t);
  }
  t = begin_scope_1_0(l_5, t);
  t = restore_always_2_0(t_115, m_5, t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm h_48 = NULL,i_48 = NULL,j_48 = NULL,k_48 = NULL,l_48 = NULL;
  h_48 = t;
  t = term_q_12;
  t = whoami_0_0(t);
  i_48 = t;
  t = term_g_23;
  k_48 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_p_37), i_48), term_o_37);
  l_48 = t;
  t = SSL_printnl(k_48, l_48);
  t = term_z_15;
  j_48 = t;
  t = SSL_exit(j_48);
  t = h_48;
  return(t);
}
static ATerm s_5 (ATerm t)
{
  ATerm o_48 = NULL;
  o_48 = t;
  if(match_string(t, "-k"))
    {
      t = o_48;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = o_48;
    }
  return(t);
}
static ATerm v_5 (ATerm t)
{
  ATerm p_48 = NULL,q_48 = NULL,w_48 = NULL;
  p_48 = t;
  t = SSL_string_to_int(p_48);
  q_48 = t;
  t = term_q_15;
  w_48 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_q_15, q_48);
  t = r_9(w_48, q_48, t);
  t = p_48;
  return(t);
}
static ATerm y_5 (ATerm t)
{
  t = term_s_37;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(s_5, v_5, y_5, t);
  return(t);
}
static ATerm c_6 (ATerm t)
{
  ATerm f_49 = NULL;
  f_49 = t;
  if(match_string(t, "-S"))
    {
      t = f_49;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = f_49;
    }
  return(t);
}
static ATerm i_6 (ATerm t)
{
  ATerm g_49 = NULL,h_49 = NULL;
  t = term_g_16;
  g_49 = t;
  t = term_t_37;
  h_49 = t;
  t = term_u_37;
  t = r_9(g_49, h_49, t);
  t = term_x_37;
  return(t);
}
static ATerm l_6 (ATerm t)
{
  t = term_a_38;
  return(t);
}
static ATerm t_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm u_6 (ATerm t)
{
  ATerm i_49 = NULL,j_49 = NULL,l_49 = NULL;
  i_49 = t;
  t = SSL_string_to_int(i_49);
  j_49 = t;
  t = term_g_16;
  l_49 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_16, j_49);
  t = r_9(l_49, j_49, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, i_49);
  return(t);
}
static ATerm w_6 (ATerm t)
{
  t = term_b_38;
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
  ATerm m_49 = NULL,p_49 = NULL;
  t = term_c_38;
  m_49 = t;
  t = term_q_12;
  p_49 = t;
  t = term_d_38;
  t = r_9(m_49, p_49, t);
  t = term_e_38;
  return(t);
}
static ATerm z_6 (ATerm t)
{
  t = term_h_38;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm i_38 = t;
  int j_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(c_6, i_6, l_6, t);
      LocalPopChoice(j_38);
    }
  else
    {
      t = i_38;
      {
        ATerm k_38 = t;
        int l_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(t_6, u_6, w_6, t);
            LocalPopChoice(l_38);
          }
        else
          {
            t = k_38;
            t = Option_3_0(x_6, y_6, z_6, t);
          }
      }
    }
  return(t);
}
static ATerm r_9 (ATerm b_62, ATerm c_62, ATerm t)
{
  ATerm q_49 = NULL;
  t = term_t_11;
  q_49 = t;
  t = SSL_table_put(q_49, b_62, c_62);
  t = (ATerm) ATmakeAppl(sym__3, term_t_11, b_62, c_62);
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm x_49 = NULL,y_49 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm a_50 = NULL,b_50 = NULL,e_50 = NULL;
      t = term_q_12;
      t = e_0(t);
      a_50 = t;
      t = term_q_38;
      b_50 = t;
      t = term_r_38;
      e_50 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_q_38, term_r_38, a_50);
      t = p_9(b_50, e_50, a_50, t);
      _fail(t);
    }
  else
    {
      ATerm i_50 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_49 = ATgetFirst((ATermList) t);
          y_49 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = x_49;
      t = c_0(t);
      t = term_q_12;
      t = d_0(t);
      i_50 = t;
      t = (ATerm) ATinsert(CheckATermList(y_49), i_50);
    }
  return(t);
}
static ATerm c_7 (ATerm t)
{
  ATerm k_50 = NULL;
  k_50 = t;
  if(match_string(t, "-o"))
    {
      t = k_50;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = k_50;
    }
  return(t);
}
static ATerm d_7 (ATerm t)
{
  ATerm l_50 = NULL,o_50 = NULL;
  l_50 = t;
  t = term_v_11;
  o_50 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_11, l_50);
  t = r_9(o_50, l_50, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, l_50);
  return(t);
}
static ATerm f_7 (ATerm t)
{
  t = term_s_38;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(c_7, d_7, f_7, t);
  return(t);
}
static ATerm h_7 (ATerm t)
{
  ATerm q_50 = NULL;
  q_50 = t;
  if(match_string(t, "-i"))
    {
      t = q_50;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = q_50;
    }
  return(t);
}
static ATerm i_7 (ATerm t)
{
  ATerm s_50 = NULL,t_50 = NULL;
  s_50 = t;
  t = term_w_27;
  t_50 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_27, s_50);
  t = r_9(t_50, s_50, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, s_50);
  return(t);
}
static ATerm l_7 (ATerm t)
{
  t = term_t_38;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(h_7, i_7, l_7, t);
  return(t);
}
static ATerm p_9 (ATerm p_52, ATerm q_52, ATerm o_52, ATerm t)
{
  ATerm x_50 = NULL,y_50 = NULL,a_51 = NULL;
  x_50 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_52, q_52);
  {
    ATerm u_38 = t;
    int v_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm w_38 = ATgetArgument(t, 0);
            ATerm x_38 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, p_52, q_52);
        t = o_9(p_52, q_52, t);
        LocalPopChoice(v_38);
      }
    else
      {
        t = u_38;
        t = (ATerm) ATempty;
      }
  }
  y_50 = t;
  t = (ATerm) ATinsert(CheckATermList(y_50), o_52);
  a_51 = t;
  t = SSL_table_put(p_52, q_52, a_51);
  t = x_50;
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm o_51 = NULL,p_51 = NULL,q_51 = NULL,r_51 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm s_51 = NULL,t_51 = NULL,w_51 = NULL;
      t = term_q_12;
      t = n_0(t);
      s_51 = t;
      t = term_q_38;
      t_51 = t;
      t = term_r_38;
      w_51 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_q_38, term_r_38, s_51);
      t = p_9(t_51, w_51, s_51, t);
      _fail(t);
    }
  else
    {
      ATerm h_52 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          o_51 = ATgetFirst((ATermList) t);
          p_51 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = p_51;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          q_51 = ATgetFirst((ATermList) t);
          r_51 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = o_51;
      t = k_0(t);
      t = q_51;
      t = l_0(t);
      h_52 = t;
      t = (ATerm) ATinsert(CheckATermList(r_51), h_52);
    }
  return(t);
}
ATerm at_end_1_0 (ATerm c_92 (ATerm), ATerm t)
{
  static ATerm z_53 (ATerm t)
  {
    ATerm s_53 = NULL,t_53 = NULL,u_53 = NULL;
    u_53 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        s_53 = ATgetFirst((ATermList) t);
        t_53 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm k_16 = NULL,n_16 = NULL,g_7 = NULL;
          t = SSLgetAnnotations(u_53);
          k_16 = t;
          t = t_53;
          t = z_53(t);
          n_16 = t;
          t = (ATerm) ATinsert(CheckATermList(n_16), s_53);
          g_7 = t;
          t = SSLsetAnnotations(g_7, k_16);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = u_53;
        t = c_92(t);
      }
    return(t);
  }
  t = z_53(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm l_52 = NULL,n_52 = NULL,r_52 = NULL;
  l_52 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = l_52;
    }
  else
    {
      static ATerm m_7 (ATerm t)
      {
        t = not_null(r_52);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          n_52 = ATgetFirst((ATermList) t);
          if(((r_52 != NULL) && (r_52 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            r_52 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = n_52;
      t = at_end_1_0(m_7, t);
    }
  return(t);
}
static ATerm p_54 (ATerm e_54, ATerm t)
{
  ATerm f_54 = NULL;
  t = SSL_explode_term(e_54);
  if(match_cons(t, sym__2))
    {
      ATerm a_39 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) a_39) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      f_54 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_54;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm j_54 = NULL,k_54 = NULL,m_54 = NULL;
  m_54 = t;
  if(match_cons(t, sym__2))
    {
      j_54 = ATgetArgument(t, 0);
      k_54 = ATgetArgument(t, 1);
      {
        ATerm b_39 = t;
        int d_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm o_7 (ATerm t)
            {
              t = k_54;
              return(t);
            }
            t = j_54;
            t = at_end_1_0(o_7, t);
            LocalPopChoice(d_39);
          }
        else
          {
            t = b_39;
            t = p_54(m_54, t);
          }
      }
    }
  else
    {
      t = p_54(m_54, t);
    }
  return(t);
}
static ATerm i_9 (ATerm h_62, ATerm g_62, ATerm t)
{
  ATerm q_54 = NULL,r_54 = NULL,s_54 = NULL;
  t = h_62;
  {
    ATerm e_39 = t;
    int g_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_54 = NULL;
        t = term_t_11;
        t_54 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_t_11, h_62);
        t = o_9(t_54, h_62, t);
        LocalPopChoice(g_39);
      }
    else
      {
        t = e_39;
        t = (ATerm) ATempty;
      }
  }
  r_54 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_62, r_54);
  t = conc_0_0(t);
  q_54 = t;
  t = term_t_11;
  s_54 = t;
  t = SSL_table_put(s_54, h_62, q_54);
  t = (ATerm) ATmakeAppl(sym__3, term_t_11, h_62, q_54);
  return(t);
}
static ATerm q_7 (ATerm t)
{
  ATerm x_54 = NULL;
  x_54 = t;
  if(match_string(t, "-I"))
    {
      t = x_54;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--Include", 0, ATtrue)))
        _fail(t);
      t = x_54;
    }
  return(t);
}
static ATerm u_7 (ATerm t)
{
  ATerm y_54 = NULL,z_54 = NULL,a_55 = NULL;
  y_54 = t;
  t = term_t_29;
  z_54 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, y_54), term_t_29);
  a_55 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_29, (ATerm) ATinsert(ATinsert(ATempty, y_54), term_t_29));
  t = i_9(z_54, a_55, t);
  t = term_q_12;
  return(t);
}
static ATerm v_7 (ATerm t)
{
  t = term_h_39;
  return(t);
}
static ATerm w_7 (ATerm t)
{
  ATerm c_55 = NULL;
  c_55 = t;
  if(match_string(t, "--nodep"))
    {
      t = c_55;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-nodep", 0, ATtrue)))
        _fail(t);
      t = c_55;
    }
  return(t);
}
static ATerm z_7 (ATerm t)
{
  ATerm d_55 = NULL,e_55 = NULL;
  t = term_w_13;
  d_55 = t;
  t = term_m_39;
  e_55 = t;
  t = term_o_39;
  t = r_9(d_55, e_55, t);
  t = term_q_12;
  return(t);
}
static ATerm d_8 (ATerm t)
{
  t = term_p_39;
  return(t);
}
static ATerm e_8 (ATerm t)
{
  ATerm f_55 = NULL;
  f_55 = t;
  if(match_string(t, "--dep"))
    {
      t = f_55;
    }
  else
    {
      if(match_string(t, "-d"))
        {
          t = f_55;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-dep", 0, ATtrue)))
            _fail(t);
          t = f_55;
        }
    }
  return(t);
}
static ATerm f_8 (ATerm t)
{
  ATerm g_55 = NULL,h_55 = NULL;
  g_55 = t;
  t = term_l_13;
  h_55 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_13, g_55);
  t = r_9(h_55, g_55, t);
  t = term_q_12;
  return(t);
}
static ATerm j_8 (ATerm t)
{
  t = term_u_39;
  return(t);
}
static ATerm k_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--imports", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm y_8 (ATerm t)
{
  ATerm q_55 = NULL,r_55 = NULL;
  t = term_v_39;
  q_55 = t;
  t = term_q_12;
  r_55 = t;
  t = term_w_39;
  t = r_9(q_55, r_55, t);
  t = term_q_12;
  return(t);
}
static ATerm a_9 (ATerm t)
{
  t = term_x_39;
  return(t);
}
static ATerm g_9 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--slack", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm m_9 (ATerm t)
{
  ATerm s_55 = NULL,t_55 = NULL;
  t = term_a_32;
  s_55 = t;
  t = term_q_12;
  t_55 = t;
  t = term_y_39;
  t = r_9(s_55, t_55, t);
  t = term_q_12;
  return(t);
}
static ATerm n_9 (ATerm t)
{
  t = term_z_39;
  return(t);
}
static ATerm q_9 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--asfix", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm s_9 (ATerm t)
{
  ATerm v_55 = NULL,w_55 = NULL;
  t = term_h_29;
  v_55 = t;
  t = term_m_39;
  w_55 = t;
  t = term_b_40;
  t = r_9(v_55, w_55, t);
  t = term_q_12;
  return(t);
}
static ATerm t_9 (ATerm t)
{
  t = term_c_40;
  return(t);
}
ATerm pack_stratego_options_0_0 (ATerm t)
{
  ATerm d_40 = t;
  int e_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ArgOption_3_0(q_7, u_7, v_7, t);
      LocalPopChoice(e_40);
    }
  else
    {
      t = d_40;
      {
        ATerm f_40 = t;
        int g_40 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Option_3_0(w_7, z_7, d_8, t);
            LocalPopChoice(g_40);
          }
        else
          {
            t = f_40;
            {
              ATerm h_40 = t;
              int i_40 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = ArgOption_3_0(e_8, f_8, j_8, t);
                  LocalPopChoice(i_40);
                }
              else
                {
                  t = h_40;
                  {
                    ATerm j_40 = t;
                    int k_40 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Option_3_0(k_8, y_8, a_9, t);
                        LocalPopChoice(k_40);
                      }
                    else
                      {
                        t = j_40;
                        {
                          ATerm u_40 = t;
                          int v_40 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Option_3_0(g_9, m_9, n_9, t);
                              LocalPopChoice(v_40);
                            }
                          else
                            {
                              t = u_40;
                              t = Option_3_0(q_9, s_9, t_9, t);
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
  ATerm x_55 = NULL,y_55 = NULL,a_56 = NULL,b_56 = NULL;
  t = report_run_time_0_0(t);
  t = term_q_12;
  t = whoami_0_0(t);
  x_55 = t;
  t = term_g_23;
  a_56 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_x_40), x_55);
  b_56 = t;
  t = SSL_printnl(a_56, b_56);
  t = term_z_15;
  y_55 = t;
  t = SSL_exit(y_55);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm e_56 = NULL,f_56 = NULL;
  t = term_t_11;
  e_56 = t;
  t = term_y_40;
  f_56 = t;
  t = term_d_41;
  t = o_9(e_56, f_56, t);
  return(t);
}
static ATerm l_9 (ATerm i_41, ATerm j_41, ATerm t)
{
  ATerm e_41 = t;
  int f_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(i_41, j_41);
      LocalPopChoice(f_41);
    }
  else
    {
      t = e_41;
      t = SSL_addr(i_41, j_41);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm c_98 (ATerm), ATerm d_98 (ATerm), ATerm t)
{
  ATerm h_56 = NULL,i_56 = NULL,j_56 = NULL;
  h_56 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = h_56;
      t = c_98(t);
    }
  else
    {
      ATerm n_56 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          i_56 = ATgetFirst((ATermList) t);
          j_56 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = j_56;
      t = foldr_2_0(c_98, d_98, t);
      n_56 = t;
      t = (ATerm) ATmakeAppl(sym__2, i_56, n_56);
      t = d_98(t);
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
  t = term_t_37;
  return(t);
}
static ATerm v_9 (ATerm t)
{
  ATerm j_17 = NULL,l_17 = NULL;
  if(match_cons(t, sym__2))
    {
      j_17 = ATgetArgument(t, 0);
      l_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_9(j_17, l_17, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm q_56 = NULL,w_16 = NULL,a_17 = NULL;
  t = times_0_0(t);
  a_17 = t;
  t = SSL_explode_term(a_17);
  if(match_cons(t, sym__2))
    {
      ATerm g_41 = ATgetArgument(t, 0);
      w_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_16;
  t = foldr_2_0(u_9, v_9, t);
  q_56 = t;
  t = SSL_TicksToSeconds(q_56);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm f_57 = NULL,h_57 = NULL,i_57 = NULL;
  f_57 = t;
  if(match_cons(t, sym__2))
    {
      h_57 = ATgetArgument(t, 0);
      i_57 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm h_41 = t;
    int r_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = i_57;
        if((h_57 != t))
          {
            _fail(t);
          }
        t = f_57;
        LocalPopChoice(r_41);
      }
    else
      {
        t = h_41;
        t = (ATerm) ATmakeAppl(sym__2, h_57, i_57);
        {
          ATerm s_41 = t;
          int t_41 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(h_57, i_57);
              LocalPopChoice(t_41);
            }
          else
            {
              t = s_41;
              t = SSL_gtr(h_57, i_57);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, h_57, i_57);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm t_106 (ATerm), ATerm t)
{
  ATerm t_57 = NULL;
  t_57 = t;
  {
    ATerm x_41 = t;
    int y_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_57 = NULL,a_58 = NULL,d_58 = NULL;
        t = term_t_11;
        a_58 = t;
        t = term_g_16;
        d_58 = t;
        t = term_j_16;
        t = o_9(a_58, d_58, t);
        z_57 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_57, term_z_15);
        t = geq_0_0(t);
        t = t_57;
        t = t_106(t);
        LocalPopChoice(y_41);
      }
    else
      {
        t = x_41;
        t = t_57;
      }
  }
  return(t);
}
static ATerm w_9 (ATerm t)
{
  ATerm g_58 = NULL,k_58 = NULL,n_58 = NULL,o_58 = NULL;
  t = run_time_0_0(t);
  g_58 = t;
  t = term_q_12;
  t = whoami_0_0(t);
  k_58 = t;
  t = term_g_23;
  n_58 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_h_42), g_58), term_p_16), k_58);
  o_58 = t;
  t = SSL_printnl(n_58, o_58);
  t = (ATerm) ATmakeAppl(sym__2, term_g_23, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_h_42), g_58), term_p_16), k_58));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(w_9, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm r_58 = NULL;
  t = report_run_time_0_0(t);
  t = term_t_37;
  r_58 = t;
  t = SSL_exit(r_58);
  return(t);
}
static ATerm x_9 (ATerm t)
{
  ATerm q_59 = NULL,t_59 = NULL;
  t_59 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = t_59;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          q_59 = ATgetArgument(t, 0);
          {
            ATerm k_18 = NULL,j_7 = NULL;
            t = SSLgetAnnotations(t_59);
            k_18 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, q_59);
            j_7 = t;
            t = SSLsetAnnotations(j_7, k_18);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = t_59;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm h_108 (ATerm), ATerm t)
{
  ATerm o_42 = t;
  int p_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_59 = NULL,j_59 = NULL;
      t = term_t_11;
      a_59 = t;
      t = term_q_42;
      j_59 = t;
      t = term_r_42;
      t = o_9(a_59, j_59, t);
      LocalPopChoice(p_42);
    }
  else
    {
      t = o_42;
      t = fetch_1_0(x_9, t);
    }
  t = h_108(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm x_59 = NULL,y_59 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_59 = ATgetFirst((ATermList) t);
      y_59 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm d_60 = NULL,e_60 = NULL;
        static ATerm y_9 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(d_60)), not_null(e_60));
          return(t);
        }
        t = y_59;
        t = i_0(t);
        if(((d_60 != NULL) && (d_60 != t)))
          _fail(t);
        else
          d_60 = t;
        t = x_59;
        t = g_0(t);
        if(((e_60 != NULL) && (e_60 != t)))
          _fail(t);
        else
          e_60 = t;
        t = y_59;
        t = reverse_acc_2_0(g_0, y_9, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_q_12;
      t = i_0(t);
    }
  return(t);
}
static ATerm z_9 (ATerm t)
{
  ATerm k_60 = NULL,l_60 = NULL,m_60 = NULL,n_7 = NULL;
  m_60 = t;
  if(match_cons(t, sym_Program_1))
    {
      l_60 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_60);
  k_60 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, l_60);
  n_7 = t;
  t = SSLsetAnnotations(n_7, k_60);
  return(t);
}
static ATerm a_10 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm b_10 (ATerm t)
{
  ATerm p_60 = NULL;
  p_60 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, p_60), term_s_42);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm g_60 = NULL,h_60 = NULL;
  ATerm t_42 = t;
  int v_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_60 = NULL,j_60 = NULL;
      t = term_t_11;
      i_60 = t;
      t = term_y_40;
      j_60 = t;
      t = term_d_41;
      t = o_9(i_60, j_60, t);
      LocalPopChoice(v_42);
    }
  else
    {
      t = t_42;
      t = fetch_1_0(z_9, t);
    }
  t = term_x_42;
  t = echo_0_0(t);
  t = term_q_38;
  g_60 = t;
  t = term_r_38;
  h_60 = t;
  t = term_y_42;
  t = o_9(g_60, h_60, t);
  t = reverse_acc_2_0(_id, a_10, t);
  t = map_1_0(b_10, t);
  return(t);
}
ATerm fetch_1_0 (ATerm v_91 (ATerm), ATerm t)
{
  static ATerm v_61 (ATerm t)
  {
    ATerm s_61 = NULL,t_61 = NULL,u_61 = NULL;
    s_61 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        t_61 = ATgetFirst((ATermList) t);
        u_61 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm a_43 = t;
      int b_43 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm v_18 = NULL,b_19 = NULL,r_7 = NULL;
          t = SSLgetAnnotations(s_61);
          v_18 = t;
          t = t_61;
          t = v_91(t);
          b_19 = t;
          t = (ATerm) ATinsert(CheckATermList(u_61), b_19);
          r_7 = t;
          t = SSLsetAnnotations(r_7, v_18);
          LocalPopChoice(b_43);
        }
      else
        {
          t = a_43;
          {
            ATerm q_19 = NULL,t_19 = NULL,s_7 = NULL;
            t = SSLgetAnnotations(s_61);
            q_19 = t;
            t = u_61;
            t = v_61(t);
            t_19 = t;
            t = (ATerm) ATinsert(CheckATermList(t_19), t_61);
            s_7 = t;
            t = SSLsetAnnotations(s_7, q_19);
          }
        }
    }
    return(t);
  }
  t = v_61(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm z_61 = NULL,a_62 = NULL,d_62 = NULL;
  z_61 = t;
  {
    ATerm g_43 = t;
    int h_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = z_61;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm i_43 = ATgetFirst((ATermList) t);
                ATerm j_43 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = z_61;
          }
        LocalPopChoice(h_43);
      }
    else
      {
        t = g_43;
        t = (ATerm) ATinsert(ATempty, z_61);
      }
  }
  a_62 = t;
  t = term_z_11;
  d_62 = t;
  t = SSL_printnl(d_62, a_62);
  t = z_61;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm j_62 = NULL,m_62 = NULL;
  t = term_t_11;
  j_62 = t;
  t = term_y_40;
  m_62 = t;
  t = term_d_41;
  t = o_9(j_62, m_62, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm c_10 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm h_10 (ATerm t)
{
  ATerm n_62 = NULL,o_62 = NULL;
  t = term_k_43;
  n_62 = t;
  t = term_q_12;
  o_62 = t;
  t = term_n_43;
  t = r_9(n_62, o_62, t);
  return(t);
}
static ATerm j_10 (ATerm t)
{
  t = term_q_43;
  return(t);
}
static ATerm k_10 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm l_10 (ATerm t)
{
  ATerm p_62 = NULL,t_62 = NULL,u_62 = NULL,v_62 = NULL;
  t = term_k_43;
  u_62 = t;
  t = term_q_12;
  v_62 = t;
  t = term_n_43;
  t = r_9(u_62, v_62, t);
  t = term_r_43;
  p_62 = t;
  t = term_q_12;
  t_62 = t;
  t = term_s_43;
  t = r_9(p_62, t_62, t);
  t = term_t_43;
  return(t);
}
static ATerm m_10 (ATerm t)
{
  t = term_z_43;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm a_44 = t;
  int b_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(c_10, h_10, j_10, t);
      LocalPopChoice(b_44);
    }
  else
    {
      t = a_44;
      t = Option_3_0(k_10, l_10, m_10, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm k_62 (ATerm), ATerm l_62 (ATerm), ATerm t)
{
  ATerm w_62 = NULL,a_63 = NULL,b_63 = NULL,g_63 = NULL,h_63 = NULL,i_63 = NULL,v_8 = NULL;
  i_63 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_63 = ATgetFirst((ATermList) t);
      b_63 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_63);
  w_62 = t;
  t = a_63;
  t = k_62(t);
  g_63 = t;
  t = b_63;
  t = l_62(t);
  h_63 = t;
  t = (ATerm) ATinsert(CheckATermList(h_63), g_63);
  v_8 = t;
  t = SSLsetAnnotations(v_8, w_62);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm y_110 (ATerm), ATerm t)
{
  ATerm s_63 = NULL,u_63 = NULL,v_63 = NULL,w_63 = NULL,a_64 = NULL,b_64 = NULL,z_8 = NULL;
  s_63 = t;
  {
    ATerm c_44 = t;
    int d_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_e_44;
        t = y_110(t);
        LocalPopChoice(d_44);
      }
    else
      {
        t = c_44;
      }
  }
  t = s_63;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_63 = ATgetFirst((ATermList) t);
      w_63 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_63);
  u_63 = t;
  t = term_y_40;
  b_64 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_40, v_63);
  t = r_9(b_64, v_63, t);
  t = w_63;
  {
    static ATerm l_64 (ATerm t)
    {
      ATerm f_44 = t;
      int g_44 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm h_44 = t;
          int i_44 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm e_64 = NULL;
              e_64 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = e_64;
              LocalPopChoice(i_44);
            }
          else
            {
              t = h_44;
              t = y_110(t);
              t = Cons_2_0(_id, l_64, t);
            }
          LocalPopChoice(g_44);
        }
      else
        {
          t = f_44;
          {
            ATerm h_64 = NULL,i_64 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                h_64 = ATgetFirst((ATermList) t);
                i_64 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(i_64), (ATerm) ATmakeAppl(sym_Undefined_1, h_64));
          }
        }
      return(t);
    }
    t = l_64(t);
  }
  a_64 = t;
  t = (ATerm) ATinsert(CheckATermList(a_64), (ATerm) ATmakeAppl(sym_Program_1, v_63));
  z_8 = t;
  t = SSLsetAnnotations(z_8, u_63);
  return(t);
}
static ATerm p_10 (ATerm t)
{
  ATerm x_64 = NULL;
  x_64 = t;
  if(match_string(t, "--help"))
    {
      t = x_64;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = x_64;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = x_64;
        }
    }
  return(t);
}
static ATerm q_10 (ATerm t)
{
  ATerm y_64 = NULL,z_64 = NULL;
  t = term_q_42;
  y_64 = t;
  t = term_q_12;
  z_64 = t;
  t = term_j_44;
  t = r_9(y_64, z_64, t);
  t = term_k_44;
  return(t);
}
static ATerm r_10 (ATerm t)
{
  t = term_l_44;
  return(t);
}
static ATerm t_10 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm x_110 (ATerm), ATerm t)
{
  ATerm q_64 = NULL,r_64 = NULL,s_64 = NULL,t_64 = NULL,u_64 = NULL,v_64 = NULL,w_64 = NULL;
  s_64 = t;
  t = term_q_38;
  u_64 = t;
  t = term_r_38;
  v_64 = t;
  t = (ATerm) ATempty;
  w_64 = t;
  t = SSL_table_put(u_64, v_64, w_64);
  t = s_64;
  {
    static ATerm o_10 (ATerm t)
    {
      ATerm o_44 = t;
      int p_44 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = x_110(t);
          LocalPopChoice(p_44);
        }
      else
        {
          t = o_44;
          {
            ATerm q_44 = t;
            int r_44 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(p_10, q_10, r_10, t);
                LocalPopChoice(r_44);
              }
            else
              {
                t = q_44;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(o_10, t);
  }
  {
    ATerm s_44 = t;
    int t_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_65 = NULL;
        k_65 = t;
        {
          ATerm u_44 = t;
          int v_44 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm l_20 = NULL;
              t = k_65;
              {
                ATerm w_44 = t;
                int x_44 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm m_20 = NULL,o_20 = NULL;
                    t = term_t_11;
                    m_20 = t;
                    t = term_q_42;
                    o_20 = t;
                    t = term_r_42;
                    t = o_9(m_20, o_20, t);
                    LocalPopChoice(x_44);
                  }
                else
                  {
                    t = w_44;
                    t = fetch_1_0(t_10, t);
                  }
              }
              t = k_65;
              t = default_system_usage_0_0(t);
              t = term_t_37;
              l_20 = t;
              t = SSL_exit(l_20);
              LocalPopChoice(v_44);
            }
          else
            {
              t = u_44;
              {
                ATerm s_20 = NULL,t_20 = NULL,u_20 = NULL;
                t = term_t_11;
                t_20 = t;
                t = term_k_43;
                u_20 = t;
                t = term_b_45;
                t = o_9(t_20, u_20, t);
                t = k_65;
                t = default_system_about_0_0(t);
                t = term_t_37;
                s_20 = t;
                t = SSL_exit(s_20);
              }
            }
        }
        LocalPopChoice(t_44);
      }
    else
      {
        t = s_44;
        {
          ATerm c_45 = t;
          int d_45 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm l_65 = NULL,m_65 = NULL,n_65 = NULL;
              static ATerm u_10 (ATerm t)
              {
                ATerm o_65 = NULL,p_65 = NULL,q_65 = NULL,f_9 = NULL;
                q_65 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    p_65 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(q_65);
                o_65 = t;
                t = p_65;
                if(((q_64 != NULL) && (q_64 != t)))
                  _fail(t);
                else
                  q_64 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, p_65);
                f_9 = t;
                t = SSLsetAnnotations(f_9, o_65);
                return(t);
              }
              t = fetch_1_0(u_10, t);
              t = term_g_23;
              m_65 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(q_64)), term_e_45);
              n_65 = t;
              t = SSL_printnl(m_65, n_65);
              t = (ATerm) ATmakeAppl(sym__2, term_g_23, (ATerm) ATinsert(ATinsert(ATempty, not_null(q_64)), term_e_45));
              t = default_system_usage_0_0(t);
              t = term_z_15;
              l_65 = t;
              t = SSL_exit(l_65);
              LocalPopChoice(d_45);
            }
          else
            {
              t = c_45;
            }
        }
      }
  }
  r_64 = t;
  t = term_q_38;
  t_64 = t;
  t = SSL_table_destroy(t_64);
  t = r_64;
  return(t);
}
ATerm option_wrap_4_0 (ATerm j_108 (ATerm), ATerm k_108 (ATerm), ATerm l_108 (ATerm), ATerm m_108 (ATerm), ATerm t)
{
  ATerm v_65 = NULL,w_65 = NULL,x_65 = NULL,y_65 = NULL;
  t = parse_options_1_0(j_108, t);
  v_65 = t;
  t = term_f_45;
  y_65 = t;
  t = SSL_table_create(y_65);
  t = term_f_45;
  w_65 = t;
  t = term_g_45;
  x_65 = t;
  t = SSL_table_put(w_65, x_65, v_65);
  t = v_65;
  t = l_108(t);
  {
    ATerm h_45 = t;
    int k_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(k_108, t);
        LocalPopChoice(k_45);
      }
    else
      {
        t = h_45;
        {
          ATerm m_45 = t;
          int n_45 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = m_108(t);
              t = report_success_0_0(t);
              LocalPopChoice(n_45);
            }
          else
            {
              t = m_45;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm x_10 (ATerm t)
{
  ATerm s_45 = t;
  int t_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = pack_stratego_options_0_0(t);
      LocalPopChoice(t_45);
    }
  else
    {
      t = s_45;
      {
        ATerm u_45 = t;
        int v_45 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = input_option_0_0(t);
            LocalPopChoice(v_45);
          }
        else
          {
            t = u_45;
            {
              ATerm i_46 = t;
              int k_46 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = output_option_0_0(t);
                  LocalPopChoice(k_46);
                }
              else
                {
                  t = i_46;
                  {
                    ATerm m_46 = t;
                    int q_46 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Option_3_0(z_10, a_11, b_11, t);
                        LocalPopChoice(q_46);
                      }
                    else
                      {
                        t = m_46;
                        {
                          ATerm r_46 = t;
                          int s_46 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = verbose_option_0_0(t);
                              LocalPopChoice(s_46);
                            }
                          else
                            {
                              t = r_46;
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
static ATerm z_10 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm a_11 (ATerm t)
{
  ATerm e_66 = NULL,f_66 = NULL;
  t = term_t_46;
  e_66 = t;
  t = term_q_12;
  f_66 = t;
  t = term_u_46;
  t = r_9(e_66, f_66, t);
  t = term_w_46;
  return(t);
}
static ATerm b_11 (ATerm t)
{
  t = term_x_46;
  return(t);
}
static ATerm d_11 (ATerm t)
{
  t = get_filename_0_0(t);
  t = basename_1_0(_id, t);
  return(t);
}
static ATerm e_11 (ATerm t)
{
  ATerm q_66 = NULL,r_66 = NULL,s_66 = NULL,t_66 = NULL,u_66 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm y_46 = ATgetArgument(t, 0);
      if(match_cons(y_46, sym_Stream_1))
        {
          t_66 = ATgetArgument(y_46, 0);
        }
      else
        _fail(t);
      u_66 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_8(t_66, u_66, t);
  q_66 = t;
  t = term_e_21;
  r_66 = t;
  t = q_66;
  if(match_cons(t, sym_Stream_1))
    {
      s_66 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_e_21, q_66);
  t = a_8(r_66, s_66, t);
  return(t);
}
static ATerm f_11 (ATerm t)
{
  ATerm x_66 = NULL,y_66 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm z_46 = ATgetArgument(t, 0);
      if(match_cons(z_46, sym_Stream_1))
        {
          x_66 = ATgetArgument(z_46, 0);
        }
      else
        _fail(t);
      y_66 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_7(x_66, y_66, t);
  return(t);
}
ATerm pack_stratego_0_0 (ATerm t)
{
  ATerm c_66 = NULL,d_66 = NULL;
  static ATerm y_10 (ATerm t)
  {
    static ATerm c_11 (ATerm t)
    {
      ATerm h_66 = NULL;
      ATerm a_47 = t;
      int b_47 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm i_66 = NULL,j_66 = NULL,k_66 = NULL;
          t = term_t_11;
          j_66 = t;
          t = term_w_27;
          k_66 = t;
          t = term_f_47;
          t = o_9(j_66, k_66, t);
          i_66 = t;
          t = (ATerm) ATmakeAppl(sym_FILE_1, i_66);
          LocalPopChoice(b_47);
        }
      else
        {
          t = a_47;
          t = term_c_12;
        }
      if(match_cons(t, sym_FILE_1))
        {
          h_66 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = h_9(h_66, t);
      if(match_cons(t, sym__2))
        {
          if(((c_66 != NULL) && (c_66 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            c_66 = ATgetArgument(t, 0);
          if(((d_66 != NULL) && (d_66 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            d_66 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm i_47 = t;
        int j_47 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_66 = NULL,m_66 = NULL,n_66 = NULL,o_66 = NULL;
            t = term_t_11;
            n_66 = t;
            t = term_v_39;
            o_66 = t;
            t = term_k_47;
            t = o_9(n_66, o_66, t);
            t = c_66;
            t = map_1_0(d_11, t);
            m_66 = t;
            t = xtc_new_file_0_0(t);
            l_66 = t;
            t = (ATerm) ATmakeAppl(sym__2, l_66, m_66);
            t = c_8(e_11, l_66, m_66, t);
            t = (ATerm) ATmakeAppl(sym_FILE_1, l_66);
            LocalPopChoice(j_47);
          }
        else
          {
            t = i_47;
            {
              ATerm v_66 = NULL;
              ATerm o_47 = t;
              int p_47 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = c_66;
                  t = create_dep_file_0_0(t);
                  LocalPopChoice(p_47);
                }
              else
                {
                  t = o_47;
                }
              t = d_66;
              t = xtc_new_file_0_0(t);
              v_66 = t;
              t = (ATerm) ATmakeAppl(sym__2, v_66, d_66);
              t = c_8(f_11, v_66, d_66, t);
              t = (ATerm) ATmakeAppl(sym_FILE_1, v_66);
            }
          }
      }
      t = xtc_write_output_0_0(t);
      return(t);
    }
    t = xtc_temp_files_1_0(c_11, t);
    return(t);
  }
  t = option_wrap_4_0(x_10, default_usage_0_0, _id, y_10, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = pack_stratego_0_0(t);
  return(t);
}
