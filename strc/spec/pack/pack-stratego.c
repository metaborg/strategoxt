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
Symbol sym_Hashtable_1;
Symbol sym_Tool_1;
Symbol sym_Repository_0;
Symbol sym_Import_0;
Symbol sym_Imported_1;
Symbol sym_XTC_0;
Symbol sym_FILE_1;
Symbol sym_TempFiles_0;
Symbol sym_Path_2;
Symbol sym_Imports_1;
Symbol sym_Specification_1;
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
  sym_Hashtable_1 = ATmakeSymbol("Hashtable", 1, ATfalse);
  ATprotectSymbol(sym_Hashtable_1);
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
  sym_Path_2 = ATmakeSymbol("Path", 2, ATfalse);
  ATprotectSymbol(sym_Path_2);
  sym_Imports_1 = ATmakeSymbol("Imports", 1, ATfalse);
  ATprotectSymbol(sym_Imports_1);
  sym_Specification_1 = ATmakeSymbol("Specification", 1, ATfalse);
  ATprotectSymbol(sym_Specification_1);
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
}
ATerm term_k_48;
ATerm term_g_48;
ATerm term_p_47;
ATerm term_l_47;
ATerm term_j_47;
ATerm term_i_47;
ATerm term_y_45;
ATerm term_x_45;
ATerm term_w_45;
ATerm term_t_45;
ATerm term_i_45;
ATerm term_h_45;
ATerm term_g_45;
ATerm term_f_45;
ATerm term_a_45;
ATerm term_o_44;
ATerm term_m_44;
ATerm term_k_44;
ATerm term_j_44;
ATerm term_i_44;
ATerm term_h_44;
ATerm term_g_44;
ATerm term_m_43;
ATerm term_b_43;
ATerm term_t_42;
ATerm term_s_42;
ATerm term_m_42;
ATerm term_j_42;
ATerm term_i_42;
ATerm term_b_42;
ATerm term_n_41;
ATerm term_i_41;
ATerm term_h_41;
ATerm term_n_40;
ATerm term_j_40;
ATerm term_i_40;
ATerm term_h_40;
ATerm term_c_40;
ATerm term_b_40;
ATerm term_a_40;
ATerm term_z_39;
ATerm term_y_39;
ATerm term_u_39;
ATerm term_t_39;
ATerm term_r_39;
ATerm term_f_39;
ATerm term_e_39;
ATerm term_d_39;
ATerm term_c_39;
ATerm term_p_38;
ATerm term_t_37;
ATerm term_r_37;
ATerm term_q_37;
ATerm term_p_37;
ATerm term_o_37;
ATerm term_n_37;
ATerm term_m_37;
ATerm term_l_37;
ATerm term_k_37;
ATerm term_j_37;
ATerm term_i_37;
ATerm term_c_37;
ATerm term_h_35;
ATerm term_y_32;
ATerm term_x_32;
ATerm term_u_32;
ATerm term_s_32;
ATerm term_r_32;
ATerm term_q_32;
ATerm term_p_32;
ATerm term_i_32;
ATerm term_u_31;
ATerm term_l_30;
ATerm term_i_30;
ATerm term_a_30;
ATerm term_q_29;
ATerm term_p_29;
ATerm term_u_28;
ATerm term_t_27;
ATerm term_s_27;
ATerm term_r_27;
ATerm term_p_27;
ATerm term_k_27;
ATerm term_c_27;
ATerm term_b_27;
ATerm term_x_26;
ATerm term_v_26;
ATerm term_u_26;
ATerm term_s_26;
ATerm term_r_26;
ATerm term_m_26;
ATerm term_l_26;
ATerm term_g_26;
ATerm term_d_26;
ATerm term_a_26;
ATerm term_z_25;
ATerm term_y_25;
ATerm term_x_25;
ATerm term_p_25;
ATerm term_m_25;
ATerm term_l_25;
ATerm term_k_25;
ATerm term_h_25;
ATerm term_q_23;
ATerm term_p_23;
ATerm term_e_23;
ATerm term_d_23;
ATerm term_b_23;
ATerm term_a_23;
ATerm term_z_22;
ATerm term_x_22;
ATerm term_v_22;
ATerm term_u_22;
ATerm term_t_22;
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
ATerm term_l_21;
ATerm term_k_21;
ATerm term_i_21;
ATerm term_h_21;
ATerm term_d_21;
ATerm term_c_21;
ATerm term_z_20;
ATerm term_t_20;
ATerm term_s_20;
ATerm term_r_20;
ATerm term_q_20;
ATerm term_o_20;
ATerm term_n_20;
ATerm term_m_20;
ATerm term_k_20;
ATerm term_j_20;
ATerm term_h_20;
ATerm term_g_20;
ATerm term_d_20;
ATerm term_c_20;
ATerm term_z_19;
ATerm term_y_19;
ATerm term_x_19;
ATerm term_v_19;
ATerm term_s_19;
ATerm term_r_19;
ATerm term_q_19;
ATerm term_o_19;
ATerm term_n_19;
ATerm term_m_19;
ATerm term_l_19;
ATerm term_k_19;
ATerm term_j_19;
ATerm term_i_19;
ATerm term_g_19;
ATerm term_f_19;
ATerm term_d_19;
ATerm term_c_19;
ATerm term_b_19;
ATerm term_a_19;
ATerm term_y_18;
ATerm term_x_18;
ATerm term_w_18;
ATerm term_v_18;
ATerm term_u_18;
ATerm term_t_18;
ATerm term_s_18;
ATerm term_r_18;
ATerm term_q_18;
ATerm term_p_18;
ATerm term_m_18;
ATerm term_l_18;
ATerm term_k_18;
ATerm term_i_18;
ATerm term_h_18;
ATerm term_g_18;
ATerm term_f_18;
ATerm term_a_18;
ATerm term_z_17;
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
ATerm term_j_17;
ATerm term_i_17;
ATerm term_g_17;
ATerm term_z_16;
ATerm term_y_16;
ATerm term_x_16;
ATerm term_u_16;
ATerm term_o_16;
ATerm term_k_16;
ATerm term_e_16;
ATerm term_d_16;
ATerm term_q_15;
ATerm term_p_15;
ATerm term_s_14;
ATerm term_r_14;
ATerm term_p_14;
ATerm term_a_14;
ATerm term_z_13;
ATerm term_y_13;
ATerm term_v_13;
ATerm term_s_13;
ATerm term_j_13;
ATerm term_i_13;
ATerm term_y_12;
ATerm term_x_12;
ATerm term_w_12;
ATerm term_v_12;
ATerm term_u_12;
ATerm term_o_12;
ATerm term_l_12;
ATerm term_g_12;
ATerm term_c_12;
ATerm term_z_11;
ATerm term_x_11;
ATerm term_w_11;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeAppl(sym__2, term_w_11, term_x_11);
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeAppl(ATmakeSymbol("XXXXXX", 0, ATtrue));
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/mkstemp", 0, ATtrue));
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(ATmakeSymbol("/StrategoXT", 0, ATtrue));
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file> (file, mode)", 0, ATtrue));
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--dep", 0, ATtrue));
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeAppl(sym__2, term_w_11, term_s_13);
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--nodep", 0, ATtrue));
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(sym__2, term_w_11, term_y_13);
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(ATmakeSymbol(".", 0, ATtrue));
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeAppl(ATmakeSymbol("dep", 0, ATtrue));
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(ATmakeSymbol(" \\\n	", 0, ATtrue));
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeAppl(ATmakeSymbol(" :", 0, ATtrue));
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeAppl(sym__2, term_w_11, term_q_15);
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeAppl(sym__2, term_w_11, term_k_16);
  ATprotect(&(term_u_16));
  term_u_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_g_17));
  term_g_17 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_i_17));
  term_i_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_j_17));
  term_j_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_17, term_e_16, term_i_17);
  ATprotect(&(term_k_17));
  term_k_17 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_m_17));
  term_m_17 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_n_17));
  term_n_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_17, term_m_17, term_n_17);
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_q_17));
  term_q_17 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_r_17));
  term_r_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_s_17));
  term_s_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_17, term_q_17, term_r_17);
  ATprotect(&(term_t_17));
  term_t_17 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_u_17));
  term_u_17 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_v_17));
  term_v_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_w_17));
  term_w_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_17, term_u_17, term_v_17);
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_y_17));
  term_y_17 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_z_17));
  term_z_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_a_18));
  term_a_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_17, term_y_17, term_z_17);
  ATprotect(&(term_f_18));
  term_f_18 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_g_18));
  term_g_18 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_h_18));
  term_h_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_i_18));
  term_i_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_18, term_g_18, term_h_18);
  ATprotect(&(term_k_18));
  term_k_18 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_l_18));
  term_l_18 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_m_18));
  term_m_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_p_18));
  term_p_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_18, term_l_18, term_m_18);
  ATprotect(&(term_q_18));
  term_q_18 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_r_18));
  term_r_18 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_s_18));
  term_s_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_t_18));
  term_t_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_18, term_r_18, term_s_18);
  ATprotect(&(term_u_18));
  term_u_18 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_v_18));
  term_v_18 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_w_18));
  term_w_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_x_18));
  term_x_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_18, term_v_18, term_w_18);
  ATprotect(&(term_y_18));
  term_y_18 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_a_19));
  term_a_19 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_b_19));
  term_b_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_c_19));
  term_c_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_18, term_a_19, term_b_19);
  ATprotect(&(term_d_19));
  term_d_19 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_f_19));
  term_f_19 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_i_19));
  term_i_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_19, term_f_19, term_g_19);
  ATprotect(&(term_j_19));
  term_j_19 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_k_19));
  term_k_19 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_l_19));
  term_l_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_m_19));
  term_m_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_19, term_k_19, term_l_19);
  ATprotect(&(term_n_19));
  term_n_19 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_o_19));
  term_o_19 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_q_19));
  term_q_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_r_19));
  term_r_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_19, term_o_19, term_q_19);
  ATprotect(&(term_s_19));
  term_s_19 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_v_19));
  term_v_19 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_x_19));
  term_x_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_y_19));
  term_y_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_19, term_v_19, term_x_19);
  ATprotect(&(term_z_19));
  term_z_19 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_c_20));
  term_c_20 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_d_20));
  term_d_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_g_20));
  term_g_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_19, term_c_20, term_d_20);
  ATprotect(&(term_h_20));
  term_h_20 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_j_20));
  term_j_20 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_k_20));
  term_k_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_m_20));
  term_m_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_20, term_j_20, term_k_20);
  ATprotect(&(term_n_20));
  term_n_20 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_o_20));
  term_o_20 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_q_20));
  term_q_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_r_20));
  term_r_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_20, term_o_20, term_q_20);
  ATprotect(&(term_s_20));
  term_s_20 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_t_20));
  term_t_20 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_z_20));
  term_z_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_c_21));
  term_c_21 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_20, term_t_20, term_z_20);
  ATprotect(&(term_d_21));
  term_d_21 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_h_21));
  term_h_21 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_i_21));
  term_i_21 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_21, term_h_21, term_i_21);
  ATprotect(&(term_l_21));
  term_l_21 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_s_21));
  term_s_21 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_t_21));
  term_t_21 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_u_21));
  term_u_21 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_21, term_s_21, term_t_21);
  ATprotect(&(term_v_21));
  term_v_21 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_w_21));
  term_w_21 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_x_21));
  term_x_21 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_y_21));
  term_y_21 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_21, term_w_21, term_x_21);
  ATprotect(&(term_z_21));
  term_z_21 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_a_22));
  term_a_22 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_b_22));
  term_b_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_c_22));
  term_c_22 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_21, term_a_22, term_b_22);
  ATprotect(&(term_d_22));
  term_d_22 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_e_22));
  term_e_22 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_f_22));
  term_f_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_g_22));
  term_g_22 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_22, term_e_22, term_f_22);
  ATprotect(&(term_h_22));
  term_h_22 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_i_22));
  term_i_22 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_j_22));
  term_j_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_k_22));
  term_k_22 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_22, term_i_22, term_j_22);
  ATprotect(&(term_l_22));
  term_l_22 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_m_22));
  term_m_22 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_n_22));
  term_n_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_o_22));
  term_o_22 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_22, term_m_22, term_n_22);
  ATprotect(&(term_p_22));
  term_p_22 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_q_22));
  term_q_22 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_r_22));
  term_r_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_t_22));
  term_t_22 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_22, term_q_22, term_r_22);
  ATprotect(&(term_u_22));
  term_u_22 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_v_22));
  term_v_22 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_x_22));
  term_x_22 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_z_22));
  term_z_22 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_22, term_v_22, term_x_22);
  ATprotect(&(term_a_23));
  term_a_23 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_b_23));
  term_b_23 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_d_23));
  term_d_23 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_e_23));
  term_e_23 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_23, term_b_23, term_d_23);
  ATprotect(&(term_p_23));
  term_p_23 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_q_23));
  term_q_23 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_h_25));
  term_h_25 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_k_25));
  term_k_25 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_l_25));
  term_l_25 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_m_25));
  term_m_25 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_p_25));
  term_p_25 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_x_25));
  term_x_25 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_y_25));
  term_y_25 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_z_25));
  term_z_25 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_a_26));
  term_a_26 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_d_26));
  term_d_26 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_g_26));
  term_g_26 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_l_26));
  term_l_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_m_26));
  term_m_26 = (ATerm) ATmakeAppl(sym__2, term_w_11, term_l_26);
  ATprotect(&(term_r_26));
  term_r_26 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_s_26));
  term_s_26 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_u_26));
  term_u_26 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_v_26));
  term_v_26 = (ATerm) ATmakeAppl(sym__2, term_d_26, term_u_26);
  ATprotect(&(term_x_26));
  term_x_26 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_b_27));
  term_b_27 = (ATerm) ATmakeAppl(sym__2, term_d_26, term_g_26);
  ATprotect(&(term_c_27));
  term_c_27 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_k_27));
  term_k_27 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_p_27));
  term_p_27 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_r_27));
  term_r_27 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_s_27));
  term_s_27 = (ATerm) ATmakeInt(-1);
  ATprotect(&(term_t_27));
  term_t_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_u_28));
  term_u_28 = (ATerm) ATmakeAppl(ATmakeSymbol("parse error in ", 0, ATtrue));
  ATprotect(&(term_p_29));
  term_p_29 = (ATerm) ATmakeAppl(ATmakeSymbol("parse-stratego", 0, ATtrue));
  ATprotect(&(term_q_29));
  term_q_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--asfix", 0, ATtrue));
  ATprotect(&(term_a_30));
  term_a_30 = (ATerm) ATmakeAppl(sym__2, term_w_11, term_q_29);
  ATprotect(&(term_i_30));
  term_i_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue));
  ATprotect(&(term_l_30));
  term_l_30 = (ATerm) ATmakeAppl(sym__2, term_w_11, term_i_30);
  ATprotect(&(term_u_31));
  term_u_31 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
  ATprotect(&(term_i_32));
  term_i_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--slack", 0, ATtrue));
  ATprotect(&(term_p_32));
  term_p_32 = (ATerm) ATmakeAppl(sym__2, term_w_11, term_i_32);
  ATprotect(&(term_q_32));
  term_q_32 = (ATerm) ATmakeAppl(ATmakeSymbol("*** module ", 0, ATtrue));
  ATprotect(&(term_r_32));
  term_r_32 = (ATerm) ATmakeAppl(ATmakeSymbol(" not found", 0, ATtrue));
  ATprotect(&(term_s_32));
  term_s_32 = (ATerm) ATmakeAppl(ATmakeSymbol(" reading ", 0, ATtrue));
  ATprotect(&(term_u_32));
  term_u_32 = (ATerm) ATmakeAppl(ATmakeSymbol("rtree", 0, ATtrue));
  ATprotect(&(term_x_32));
  term_x_32 = (ATerm) ATmakeAppl(ATmakeSymbol("str", 0, ATtrue));
  ATprotect(&(term_y_32));
  term_y_32 = (ATerm) ATmakeAppl(ATmakeSymbol("cr", 0, ATtrue));
  ATprotect(&(term_h_35));
  term_h_35 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_c_37));
  term_c_37 = (ATerm) ATmakeAppl(sym__2, term_w_12, term_o_12);
  ATprotect(&(term_i_37));
  term_i_37 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_j_37));
  term_j_37 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_k_37));
  term_k_37 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_l_37));
  term_l_37 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_m_37));
  term_m_37 = (ATerm) ATmakeAppl(sym__2, term_k_16, term_l_37);
  ATprotect(&(term_n_37));
  term_n_37 = (ATerm) ATmakeAppl(sym_Verbose_1, term_l_37);
  ATprotect(&(term_o_37));
  term_o_37 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_p_37));
  term_p_37 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_q_37));
  term_q_37 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_r_37));
  term_r_37 = (ATerm) ATmakeAppl(sym__2, term_q_37, term_y_12);
  ATprotect(&(term_t_37));
  term_t_37 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_p_38));
  term_p_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_c_39));
  term_c_39 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_d_39));
  term_d_39 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_e_39));
  term_e_39 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_f_39));
  term_f_39 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_r_39));
  term_r_39 = (ATerm) ATmakeAppl(ATmakeSymbol("-I d | --Include d   Include modules from directory d", 0, ATtrue));
  ATprotect(&(term_t_39));
  term_t_39 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_u_39));
  term_u_39 = (ATerm) ATmakeAppl(sym__2, term_y_13, term_t_39);
  ATprotect(&(term_y_39));
  term_y_39 = (ATerm) ATmakeAppl(ATmakeSymbol("--nodep              Don't create dependency file", 0, ATtrue));
  ATprotect(&(term_z_39));
  term_z_39 = (ATerm) ATmakeAppl(ATmakeSymbol("--dep f | -d f       Write dependency to file f", 0, ATtrue));
  ATprotect(&(term_a_40));
  term_a_40 = (ATerm) ATmakeAppl(ATmakeSymbol("--imports", 0, ATtrue));
  ATprotect(&(term_b_40));
  term_b_40 = (ATerm) ATmakeAppl(sym__2, term_a_40, term_y_12);
  ATprotect(&(term_c_40));
  term_c_40 = (ATerm) ATmakeAppl(ATmakeSymbol("--imports            Produce a list of imported modules only", 0, ATtrue));
  ATprotect(&(term_h_40));
  term_h_40 = (ATerm) ATmakeAppl(sym__2, term_i_32, term_y_12);
  ATprotect(&(term_i_40));
  term_i_40 = (ATerm) ATmakeAppl(ATmakeSymbol("--slack              Continue when module is not found", 0, ATtrue));
  ATprotect(&(term_j_40));
  term_j_40 = (ATerm) ATmakeAppl(sym__2, term_q_29, term_t_39);
  ATprotect(&(term_n_40));
  term_n_40 = (ATerm) ATmakeAppl(ATmakeSymbol("--asfix              Do not implode the concrete syntax parts", 0, ATtrue));
  ATprotect(&(term_h_41));
  term_h_41 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_i_41));
  term_i_41 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_n_41));
  term_n_41 = (ATerm) ATmakeAppl(sym__2, term_w_11, term_i_41);
  ATprotect(&(term_b_42));
  term_b_42 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_i_42));
  term_i_42 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_j_42));
  term_j_42 = (ATerm) ATmakeAppl(sym__2, term_w_11, term_i_42);
  ATprotect(&(term_m_42));
  term_m_42 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_s_42));
  term_s_42 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_t_42));
  term_t_42 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_b_43));
  term_b_43 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_m_43));
  term_m_43 = (ATerm) ATmakeAppl(sym__2, term_c_39, term_d_39);
  ATprotect(&(term_g_44));
  term_g_44 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_h_44));
  term_h_44 = (ATerm) ATmakeAppl(sym__2, term_g_44, term_y_12);
  ATprotect(&(term_i_44));
  term_i_44 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_j_44));
  term_j_44 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_k_44));
  term_k_44 = (ATerm) ATmakeAppl(sym__2, term_j_44, term_y_12);
  ATprotect(&(term_m_44));
  term_m_44 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_o_44));
  term_o_44 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_a_45));
  term_a_45 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_f_45));
  term_f_45 = (ATerm) ATmakeAppl(sym__2, term_i_42, term_y_12);
  ATprotect(&(term_g_45));
  term_g_45 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_h_45));
  term_h_45 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_i_45));
  term_i_45 = (ATerm) ATmakeAppl(sym__3, term_c_39, term_d_39, (ATerm) ATempty);
  ATprotect(&(term_t_45));
  term_t_45 = (ATerm) ATmakeAppl(sym__2, term_w_11, term_g_44);
  ATprotect(&(term_w_45));
  term_w_45 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_x_45));
  term_x_45 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_y_45));
  term_y_45 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_i_47));
  term_i_47 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_j_47));
  term_j_47 = (ATerm) ATmakeAppl(sym__2, term_i_47, term_y_12);
  ATprotect(&(term_l_47));
  term_l_47 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_p_47));
  term_p_47 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_g_48));
  term_g_48 = (ATerm) ATmakeAppl(sym__2, term_w_11, term_t_27);
  ATprotect(&(term_k_48));
  term_k_48 = (ATerm) ATmakeAppl(sym__2, term_w_11, term_a_40);
}
#include <srts/init-stratego-application.h>
ATerm copy_to_1_0 (ATerm q_0 (ATerm), ATerm t);
static ATerm w_9 (ATerm u_54, ATerm v_54, ATerm t);
static ATerm a_0 (ATerm t);
ATerm xtc_write_output_0_0 (ATerm t);
static ATerm j_8 (ATerm u_24, ATerm v_24, ATerm t);
static ATerm o_8 (ATerm b_106 (ATerm), ATerm b_185, ATerm e_25, ATerm t);
static ATerm e_9 (ATerm w_119 (ATerm), ATerm n_44, ATerm l_44, ATerm t);
ATerm mkstemp_0_0 (ATerm t);
ATerm P__tmpdir_0_0 (ATerm t);
static ATerm b_0 (ATerm t);
ATerm xtc_new_file_0_0 (ATerm t);
static ATerm k_8 (ATerm i_25, ATerm j_25, ATerm t);
static ATerm w_5 (ATerm h_5, ATerm t);
static ATerm x_5 (ATerm j_5, ATerm k_5, ATerm l_5, ATerm t);
static ATerm c_0 (ATerm t);
ATerm open_file_0_0 (ATerm t);
ATerm create_dep_file_0_0 (ATerm t);
static ATerm m_8 (ATerm d_40, ATerm e_40, ATerm t);
static ATerm n_8 (ATerm y_24, ATerm z_24, ATerm t);
ATerm basename_1_0 (ATerm l_117 (ATerm), ATerm t);
ATerm at_suffix_rev_1_0 (ATerm j_107 (ATerm), ATerm t);
ATerm get_filename_0_0 (ATerm t);
ATerm map_1_0 (ATerm k_106 (ATerm), ATerm t);
static ATerm d_10 (ATerm q_64, ATerm r_64, ATerm t);
static ATerm i_0 (ATerm t);
static ATerm k_0 (ATerm t);
ATerm flatten_stratego_0_0 (ATerm t);
ATerm genzip_4_0 (ATerm o_108 (ATerm), ATerm p_108 (ATerm), ATerm q_108 (ATerm), ATerm r_108 (ATerm), ATerm t);
static ATerm n_0 (ATerm t);
static ATerm s_8 (ATerm i_151, ATerm t);
ATerm read_from_0_0 (ATerm t);
ATerm pass_keep_0_0 (ATerm t);
static ATerm t_8 (ATerm f_43, ATerm g_43, ATerm t);
ATerm pass_verbose_0_0 (ATerm t);
static ATerm s_0 (ATerm t);
ATerm xtc_transform_term_2_0 (ATerm v_131 (ATerm), ATerm w_131 (ATerm), ATerm t);
static ATerm u_8 (ATerm z_58, ATerm a_59, ATerm t);
ATerm signal_to_descr_0_0 (ATerm t);
ATerm signal_from_number_0_0 (ATerm t);
ATerm warn_ifsignaled_0_0 (ATerm t);
ATerm fork_0_0 (ATerm t);
ATerm fork_and_wait_1_0 (ATerm s_123 (ATerm), ATerm t);
static ATerm w_8 (ATerm w_67, ATerm t);
ATerm table_getlist_0_0 (ATerm t);
ATerm if_verbose5_1_0 (ATerm l_123 (ATerm), ATerm t);
ATerm if_verbose4_1_0 (ATerm k_123 (ATerm), ATerm t);
ATerm if_verbose6_1_0 (ATerm m_123 (ATerm), ATerm t);
static ATerm y_8 (ATerm v_110 (ATerm), ATerm c_31, ATerm b_31, ATerm t);
static ATerm b_1 (ATerm t);
static ATerm z_8 (ATerm u_63, ATerm v_63, ATerm w_63, ATerm t);
static ATerm a_9 (ATerm p_127 (ATerm), ATerm e_64, ATerm d_64, ATerm t);
static ATerm v_25 (ATerm f_25, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm b_9 (ATerm a_25, ATerm t);
static ATerm f_9 (ATerm w_38, ATerm x_38, ATerm t);
static ATerm c_9 (ATerm f_40, ATerm g_40, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm j_28 (ATerm p_26, ATerm t);
static ATerm k_28 (ATerm t_26, ATerm a_27, ATerm f_27, ATerm t);
static ATerm l_28 (ATerm u_27, ATerm v_27, ATerm w_27, ATerm t);
static ATerm d_9 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
static ATerm f_1 (ATerm t);
static ATerm g_1 (ATerm t);
ATerm read_repository_file_0_0 (ATerm t);
static ATerm i_1 (ATerm t);
static ATerm l_1 (ATerm t);
static ATerm n_1 (ATerm t);
static ATerm o_1 (ATerm t);
static ATerm t_1 (ATerm t);
static ATerm v_1 (ATerm t);
static ATerm w_1 (ATerm t);
static ATerm x_1 (ATerm t);
ATerm xtc_read_0_0 (ATerm t);
ATerm repeat_2_0 (ATerm y_98 (ATerm), ATerm z_98 (ATerm), ATerm t);
ATerm xtc_location_0_0 (ATerm t);
static ATerm z_1 (ATerm t);
static ATerm c_2 (ATerm t);
static ATerm d_2 (ATerm t);
static ATerm e_2 (ATerm t);
static ATerm f_2 (ATerm t);
ATerm xtc_load_0_0 (ATerm t);
static ATerm h_2 (ATerm t);
static ATerm i_2 (ATerm t);
static ATerm g_33 (ATerm g_32, ATerm t);
static ATerm p_2 (ATerm t);
static ATerm r_2 (ATerm t);
static ATerm s_2 (ATerm t);
static ATerm u_2 (ATerm t);
ATerm xtc_find_0_0 (ATerm t);
ATerm xtc_command_1_0 (ATerm w_132 (ATerm), ATerm t);
ATerm xtc_transform_file_2_0 (ATerm r_0 (ATerm), ATerm t_0 (ATerm), ATerm t);
static ATerm o_36 (ATerm c_34, ATerm d_34, ATerm e_34, ATerm t);
static ATerm p_36 (ATerm y_35, ATerm z_35, ATerm t);
static ATerm b_3 (ATerm t);
static ATerm c_3 (ATerm t);
static ATerm f_3 (ATerm t);
static ATerm k_3 (ATerm t);
ATerm parse_module_0_0 (ATerm t);
ATerm debug_1_0 (ATerm z_105 (ATerm), ATerm t);
ATerm if_verbose3_1_0 (ATerm j_123 (ATerm), ATerm t);
ATerm fetch_elem_1_0 (ATerm w_106 (ATerm), ATerm t);
static ATerm g_9 (ATerm w_39, ATerm x_39, ATerm t);
ATerm is_relpath_0_0 (ATerm t);
static ATerm h_9 (ATerm a_98 (ATerm), ATerm g_23, ATerm f_23, ATerm t);
static ATerm x_3 (ATerm t);
ATerm get_module_1_0 (ATerm z_97 (ATerm), ATerm t);
static ATerm j_9 (ATerm y_110 (ATerm), ATerm z_110 (ATerm), ATerm g_31, ATerm f_31, ATerm t);
static ATerm k_9 (ATerm q_110 (ATerm), ATerm a_31, ATerm z_30, ATerm t);
static ATerm f_4 (ATerm t);
static ATerm i_4 (ATerm t);
static ATerm j_4 (ATerm t);
static ATerm p_9 (ATerm w_706, ATerm b_707, ATerm o_70, ATerm t);
static ATerm k_4 (ATerm t);
static ATerm l_4 (ATerm t);
static ATerm o_4 (ATerm t);
static ATerm d_43 (ATerm m_41, ATerm t_41, ATerm u_41, ATerm t);
static ATerm p_4 (ATerm t);
ATerm diff_0_0 (ATerm t);
static ATerm r_9 (ATerm s_133 (ATerm), ATerm t_133 (ATerm), ATerm u_133 (ATerm), ATerm e_74, ATerm b_74, ATerm i_74, ATerm f_74, ATerm c_74, ATerm d_74, ATerm t);
ATerm GnNext_3_0 (ATerm s_133 (ATerm), ATerm t_133 (ATerm), ATerm u_133 (ATerm), ATerm t);
ATerm while_not_2_0 (ATerm p_99 (ATerm), ATerm q_99 (ATerm), ATerm t);
ATerm for_3_0 (ATerm s_99 (ATerm), ATerm t_99 (ATerm), ATerm u_99 (ATerm), ATerm t);
static ATerm q_4 (ATerm t);
static ATerm s_4 (ATerm t);
ATerm graph_nodes_roots_3_0 (ATerm p_133 (ATerm), ATerm q_133 (ATerm), ATerm r_133 (ATerm), ATerm t);
ATerm filter_1_0 (ATerm n_114 (ATerm), ATerm t);
static ATerm w_4 (ATerm t);
static ATerm b_5 (ATerm t);
static ATerm c_5 (ATerm t);
static ATerm e_5 (ATerm t);
static ATerm f_5 (ATerm t);
static ATerm i_5 (ATerm t);
static ATerm u_9 (ATerm w_22, ATerm t);
static ATerm x_9 (ATerm c_63, ATerm d_63, ATerm t);
ATerm end_scope_1_0 (ATerm t_119 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm u_98 (ATerm), ATerm v_98 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm s_119 (ATerm), ATerm t);
static ATerm n_5 (ATerm t);
static ATerm p_5 (ATerm t);
static ATerm s_5 (ATerm t);
ATerm xtc_temp_files_1_0 (ATerm i_132 (ATerm), ATerm t);
ATerm default_usage_0_0 (ATerm t);
static ATerm v_5 (ATerm t);
static ATerm y_5 (ATerm t);
static ATerm c_6 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm i_6 (ATerm t);
static ATerm l_6 (ATerm t);
static ATerm t_6 (ATerm t);
static ATerm v_6 (ATerm t);
static ATerm w_6 (ATerm t);
static ATerm y_6 (ATerm t);
static ATerm z_6 (ATerm t);
static ATerm a_7 (ATerm t);
static ATerm b_7 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm g_10 (ATerm g_75, ATerm h_75, ATerm t);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t);
static ATerm c_7 (ATerm t);
static ATerm d_7 (ATerm t);
static ATerm g_7 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm j_7 (ATerm t);
static ATerm l_7 (ATerm t);
static ATerm m_7 (ATerm t);
ATerm input_option_0_0 (ATerm t);
static ATerm e_10 (ATerm x_62, ATerm y_62, ATerm w_62, ATerm t);
ATerm ArgOption_3_0 (ATerm m_0 (ATerm), ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm t);
ATerm at_end_1_0 (ATerm b_107 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm m_55 (ATerm b_55, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm v_9 (ATerm n_75, ATerm o_75, ATerm t);
static ATerm t_7 (ATerm t);
static ATerm u_7 (ATerm t);
static ATerm w_7 (ATerm t);
static ATerm x_7 (ATerm t);
static ATerm z_7 (ATerm t);
static ATerm a_8 (ATerm t);
static ATerm b_8 (ATerm t);
static ATerm c_8 (ATerm t);
static ATerm d_8 (ATerm t);
static ATerm e_8 (ATerm t);
static ATerm h_8 (ATerm t);
static ATerm i_8 (ATerm t);
static ATerm l_8 (ATerm t);
static ATerm p_8 (ATerm t);
static ATerm r_8 (ATerm t);
static ATerm x_8 (ATerm t);
static ATerm l_9 (ATerm t);
static ATerm m_9 (ATerm t);
ATerm pack_stratego_options_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm y_9 (ATerm z_42, ATerm a_43, ATerm t);
ATerm foldr_2_0 (ATerm j_113 (ATerm), ATerm k_113 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm n_9 (ATerm t);
static ATerm o_9 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm h_123 (ATerm), ATerm t);
static ATerm q_9 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm s_9 (ATerm t);
ATerm need_help_1_0 (ATerm v_124 (ATerm), ATerm t);
static ATerm h_10 (ATerm p_67, ATerm q_67, ATerm r_67, ATerm t);
static ATerm i_10 (ATerm s_67, ATerm t_67, ATerm t);
ATerm lookup_table_0_1 (ATerm j_64, ATerm t);
ATerm new_hashtable_0_2 (ATerm x_67, ATerm y_67, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm a_10 (ATerm u_67, ATerm v_67, ATerm t);
static ATerm b_10 (ATerm z_67, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm reverse_acc_2_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm t);
static ATerm z_9 (ATerm t);
static ATerm c_10 (ATerm t);
static ATerm f_10 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm u_106 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm l_10 (ATerm t);
static ATerm m_10 (ATerm t);
static ATerm n_10 (ATerm t);
static ATerm q_10 (ATerm t);
static ATerm r_10 (ATerm t);
static ATerm s_10 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm p_75 (ATerm), ATerm q_75 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm m_127 (ATerm), ATerm t);
static ATerm w_10 (ATerm t);
static ATerm x_10 (ATerm t);
static ATerm b_11 (ATerm t);
static ATerm c_11 (ATerm t);
ATerm parse_options_1_0 (ATerm l_127 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm x_124 (ATerm), ATerm y_124 (ATerm), ATerm z_124 (ATerm), ATerm a_125 (ATerm), ATerm t);
static ATerm e_11 (ATerm t);
static ATerm g_11 (ATerm t);
static ATerm h_11 (ATerm t);
static ATerm j_11 (ATerm t);
static ATerm l_11 (ATerm t);
static ATerm m_11 (ATerm t);
static ATerm o_11 (ATerm t);
ATerm pack_stratego_0_0 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm copy_to_1_0 (ATerm q_0 (ATerm), ATerm t)
{
  ATerm j_1 = NULL,k_1 = NULL;
  j_1 = t;
  if(match_cons(t, sym_FILE_1))
    {
      k_1 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm p_11 = t;
    int q_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_0 = NULL;
        t = j_1;
        t = q_0(t);
        e_0 = t;
        if(match_cons(t, sym_stdout_0))
          {
            t = e_0;
          }
        else
          {
            if(!(match_cons(t, sym_stderr_0)))
              _fail(t);
            t = e_0;
          }
        t = (ATerm) ATmakeAppl(sym__2, k_1, e_0);
        t = w_9(k_1, e_0, t);
        t = (ATerm) ATmakeAppl(sym_FILE_1, k_1);
        LocalPopChoice(q_11);
      }
    else
      {
        t = p_11;
        {
          ATerm r_11 = t;
          int s_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm v_0 = NULL;
              t = j_1;
              t = q_0(t);
              v_0 = t;
              {
                ATerm t_11 = t;
                if((PushChoice() == 0))
                  {
                    ATerm x_0 = NULL;
                    x_0 = t;
                    if(match_cons(t, sym_stdout_0))
                      {
                        t = x_0;
                      }
                    else
                      {
                        if(match_cons(t, sym_stderr_0))
                          {
                            t = x_0;
                          }
                        else
                          {
                            t = x_0;
                            if((k_1 != t))
                              {
                                _fail(t);
                              }
                            t = x_0;
                          }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = t_11;
                  }
              }
              t = (ATerm) ATmakeAppl(sym__2, k_1, v_0);
              t = w_9(k_1, v_0, t);
              t = (ATerm) ATmakeAppl(sym_FILE_1, k_1);
              LocalPopChoice(s_11);
            }
          else
            {
              t = r_11;
              t = j_1;
              t = q_0(t);
              if((k_1 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, k_1);
            }
        }
      }
  }
  return(t);
}
static ATerm w_9 (ATerm u_54, ATerm v_54, ATerm t)
{
  t = SSL_copy(u_54, v_54);
  return(t);
}
static ATerm a_0 (ATerm t)
{
  ATerm u_11 = t;
  int v_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_2 = NULL,t_2 = NULL;
      t = term_w_11;
      q_2 = t;
      t = term_x_11;
      t_2 = t;
      t = term_z_11;
      t = d_10(q_2, t_2, t);
      LocalPopChoice(v_11);
    }
  else
    {
      t = u_11;
      t = term_c_12;
    }
  return(t);
}
ATerm xtc_write_output_0_0 (ATerm t)
{
  ATerm j_2 = NULL;
  j_2 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm p_1 = NULL,q_1 = NULL;
      t = term_x_11;
      {
        ATerm d_12 = t;
        int f_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_1 = NULL,s_1 = NULL;
            t = term_w_11;
            r_1 = t;
            t = term_x_11;
            s_1 = t;
            t = term_z_11;
            t = d_10(r_1, s_1, t);
            LocalPopChoice(f_12);
          }
        else
          {
            t = d_12;
            t = term_c_12;
          }
      }
      p_1 = t;
      t = term_g_12;
      q_1 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_g_12, p_1);
      t = w_9(q_1, p_1, t);
    }
  else
    {
      if(match_cons(t, sym_FILE_1))
        {
          ATerm h_12 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = j_2;
      t = copy_to_1_0(a_0, t);
    }
  return(t);
}
static ATerm j_8 (ATerm u_24, ATerm v_24, ATerm t)
{
  ATerm v_2 = NULL;
  t = SSL_write_term_to_stream_baf(u_24, v_24);
  v_2 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, v_2);
  return(t);
}
static ATerm o_8 (ATerm b_106 (ATerm), ATerm b_185, ATerm e_25, ATerm t)
{
  ATerm w_2 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, b_185, term_l_12);
  t = d_9(t);
  w_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_2, e_25);
  t = b_106(t);
  t = fclose_0_0(t);
  t = e_25;
  return(t);
}
static ATerm e_9 (ATerm w_119 (ATerm), ATerm n_44, ATerm l_44, ATerm t)
{
  ATerm x_2 = NULL,y_2 = NULL,z_2 = NULL,d_3 = NULL,e_3 = NULL,g_3 = NULL,h_3 = NULL,j_3 = NULL;
  d_3 = t;
  t = w_119(t);
  x_2 = t;
  t = (ATerm) ATmakeAppl(sym__3, x_2, n_44, l_44);
  t = e_10(x_2, n_44, l_44, t);
  {
    ATerm m_12 = t;
    int n_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_3 = NULL;
        t = term_o_12;
        n_3 = t;
        t = (ATerm) ATmakeAppl(sym__2, x_2, term_o_12);
        t = d_10(x_2, n_3, t);
        {
          ATerm p_12 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = p_12;
            }
        }
        LocalPopChoice(n_12);
      }
    else
      {
        t = m_12;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      y_2 = ATgetFirst((ATermList) t);
      z_2 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, x_2, term_o_12, (ATerm) ATinsert(CheckATermList(z_2), (ATerm) ATinsert(CheckATermList(y_2), n_44)));
  t = lookup_table_0_1(x_2, t);
  j_3 = t;
  t = term_o_12;
  e_3 = t;
  t = (ATerm) ATinsert(CheckATermList(z_2), (ATerm) ATinsert(CheckATermList(y_2), n_44));
  g_3 = t;
  t = j_3;
  if(match_cons(t, sym_Hashtable_1))
    {
      h_3 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = h_10(e_3, g_3, h_3, t);
  t = d_3;
  return(t);
}
ATerm mkstemp_0_0 (ATerm t)
{
  ATerm r_3 = NULL;
  ATerm s_12 = t;
  int t_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_3 = NULL,b_2 = NULL;
      w_3 = t;
      t = term_u_12;
      b_2 = t;
      t = (ATerm) ATmakeAppl(sym__2, w_3, term_u_12);
      t = f_9(w_3, b_2, t);
      r_3 = t;
      t = SSL_mkstemp(r_3);
      LocalPopChoice(t_12);
    }
  else
    {
      t = s_12;
      {
        ATerm y_3 = NULL;
        t = term_v_12;
        y_3 = t;
        t = SSL_perror(y_3);
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
  t = term_w_12;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm a_4 = NULL,c_4 = NULL,d_4 = NULL,e_4 = NULL,g_4 = NULL;
  t = P__tmpdir_0_0(t);
  e_4 = t;
  t = term_x_12;
  g_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_4, term_x_12);
  t = f_9(e_4, g_4, t);
  t = mkstemp_0_0(t);
  if(match_cons(t, sym__2))
    {
      c_4 = ATgetArgument(t, 0);
      a_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = term_y_12;
  d_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_4, term_y_12);
  t = e_9(b_0, c_4, d_4, t);
  t = SSL_close(a_4);
  t = c_4;
  return(t);
}
static ATerm k_8 (ATerm i_25, ATerm j_25, ATerm t)
{
  ATerm y_4 = NULL,z_4 = NULL;
  t = j_25;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = j_25;
    }
  else
    {
      ATerm g_2 = NULL,k_2 = NULL,w_0 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          y_4 = ATgetFirst((ATermList) t);
          z_4 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(j_25);
      g_2 = t;
      t = z_4;
      {
        static ATerm o_2 (ATerm t);
        static ATerm o_2 (ATerm t)
        {
          ATerm z_12 = t;
          int c_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm l_2 = NULL;
              l_2 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = l_2;
              LocalPopChoice(c_13);
            }
          else
            {
              t = z_12;
              {
                ATerm m_2 = NULL;
                t = Cons_2_0(_id, o_2, t);
                m_2 = t;
                t = (ATerm) ATinsert(CheckATermList(m_2), i_25);
              }
            }
          return(t);
        }
        t = o_2(t);
      }
      k_2 = t;
      t = (ATerm) ATinsert(CheckATermList(k_2), y_4);
      w_0 = t;
      t = SSLsetAnnotations(w_0, g_2);
    }
  return(t);
}
static ATerm w_5 (ATerm h_5, ATerm t)
{
  t = h_5;
  {
    ATerm e_13 = t;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm g_13 = ATgetArgument(t, 0);
            ATerm h_13 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = e_13;
      }
  }
  t = term_i_13;
  t = debug_1_0(c_0, t);
  t = (ATerm) ATmakeAppl(sym__2, h_5, term_l_12);
  t = open_file_0_0(t);
  return(t);
}
static ATerm x_5 (ATerm j_5, ATerm k_5, ATerm l_5, ATerm t)
{
  t = SSL_open_file(j_5, k_5);
  return(t);
}
static ATerm c_0 (ATerm t)
{
  t = term_j_13;
  return(t);
}
ATerm open_file_0_0 (ATerm t)
{
  ATerm q_5 = NULL,t_5 = NULL,u_5 = NULL;
  q_5 = t;
  if(match_cons(t, sym__2))
    {
      t_5 = ATgetArgument(t, 0);
      u_5 = ATgetArgument(t, 1);
      {
        ATerm k_13 = t;
        int n_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = w_5(q_5, t);
            LocalPopChoice(n_13);
          }
        else
          {
            t = k_13;
            t = x_5(t_5, u_5, q_5, t);
          }
      }
    }
  else
    {
      t = w_5(q_5, t);
    }
  return(t);
}
ATerm create_dep_file_0_0 (ATerm t)
{
  ATerm z_5 = NULL,a_6 = NULL,b_6 = NULL,d_6 = NULL,e_6 = NULL,f_6 = NULL,g_6 = NULL,h_6 = NULL,j_6 = NULL,k_6 = NULL,m_6 = NULL;
  a_6 = t;
  t = term_w_11;
  k_6 = t;
  t = term_x_11;
  m_6 = t;
  t = term_z_11;
  t = d_10(k_6, m_6, t);
  {
    ATerm p_13 = t;
    int q_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_6 = NULL,o_6 = NULL;
        t = term_w_11;
        n_6 = t;
        t = term_s_13;
        o_6 = t;
        t = term_v_13;
        t = d_10(n_6, o_6, t);
        LocalPopChoice(q_13);
      }
    else
      {
        t = p_13;
        {
          ATerm x_13 = t;
          if((PushChoice() == 0))
            {
              ATerm p_6 = NULL,q_6 = NULL;
              t = term_w_11;
              p_6 = t;
              t = term_y_13;
              q_6 = t;
              t = term_z_13;
              t = d_10(p_6, q_6, t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = x_13;
            }
        }
      }
  }
  z_5 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_p_14), term_a_14), z_5);
  j_6 = t;
  t = SSL_concat_strings(j_6);
  h_6 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_6, term_l_12);
  t = open_file_0_0(t);
  b_6 = t;
  t = term_r_14;
  f_6 = t;
  t = (ATerm) ATinsert(CheckATermList(a_6), term_s_14);
  g_6 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_14, (ATerm) ATinsert(CheckATermList(a_6), term_s_14));
  t = k_8(f_6, g_6, t);
  d_6 = t;
  t = (ATerm) ATinsert(CheckATermList(d_6), z_5);
  e_6 = t;
  t = SSL_printnl(b_6, e_6);
  t = SSL_close_file(b_6);
  t = (ATerm) ATmakeAppl(sym_FILE_1, h_6);
  return(t);
}
static ATerm m_8 (ATerm d_40, ATerm e_40, ATerm t)
{
  ATerm r_6 = NULL;
  t = SSL_fputc(d_40, e_40);
  r_6 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, r_6);
  return(t);
}
static ATerm n_8 (ATerm y_24, ATerm z_24, ATerm t)
{
  ATerm s_6 = NULL;
  t = SSL_write_term_to_stream_text(y_24, z_24);
  s_6 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, s_6);
  return(t);
}
ATerm basename_1_0 (ATerm l_117 (ATerm), ATerm t)
{
  ATerm e_7 = NULL,f_7 = NULL;
  f_7 = t;
  t = SSL_explode_string(f_7);
  {
    ATerm t_14 = t;
    int w_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm a_11 (ATerm t);
        static ATerm a_11 (ATerm t)
        {
          ATerm o_10 = NULL,p_10 = NULL,t_10 = NULL;
          o_10 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              p_10 = ATgetFirst((ATermList) t);
              t_10 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          {
            ATerm z_14 = t;
            int a_15 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm i_3 = NULL,m_3 = NULL,a_1 = NULL;
                t = SSLgetAnnotations(o_10);
                i_3 = t;
                t = t_10;
                t = a_11(t);
                m_3 = t;
                t = (ATerm) ATinsert(CheckATermList(m_3), p_10);
                a_1 = t;
                t = SSLsetAnnotations(a_1, i_3);
                LocalPopChoice(a_15);
              }
            else
              {
                t = z_14;
                {
                  ATerm d_15 = t;
                  int e_15 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm h_4 = NULL,c_1 = NULL;
                      t = SSLgetAnnotations(o_10);
                      h_4 = t;
                      t = p_10;
                      if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 47)))
                        _fail(t);
                      t = (ATerm) ATinsert(CheckATermList(t_10), p_10);
                      c_1 = t;
                      t = SSLsetAnnotations(c_1, h_4);
                      LocalPopChoice(e_15);
                    }
                  else
                    {
                      t = d_15;
                      {
                        ATerm g_5 = NULL,r_5 = NULL,d_1 = NULL;
                        t = SSLgetAnnotations(o_10);
                        g_5 = t;
                        t = p_10;
                        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 46)))
                          _fail(t);
                        t = t_10;
                        t = l_117(t);
                        r_5 = t;
                        t = (ATerm) ATinsert(CheckATermList(r_5), p_10);
                        d_1 = t;
                        t = SSLsetAnnotations(d_1, g_5);
                        t = (ATerm) ATempty;
                      }
                    }
                }
              }
          }
          return(t);
        }
        t = a_11(t);
        LocalPopChoice(w_14);
      }
    else
      {
        t = t_14;
      }
  }
  e_7 = t;
  t = SSL_implode_string(e_7);
  return(t);
}
ATerm at_suffix_rev_1_0 (ATerm j_107 (ATerm), ATerm t)
{
  static ATerm e_12 (ATerm t);
  static ATerm e_12 (ATerm t)
  {
    ATerm f_15 = t;
    int g_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_11 = NULL,a_12 = NULL,b_12 = NULL,u_6 = NULL,x_6 = NULL,h_1 = NULL;
        y_11 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            a_12 = ATgetFirst((ATermList) t);
            b_12 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(y_11);
        u_6 = t;
        t = b_12;
        t = e_12(t);
        x_6 = t;
        t = (ATerm) ATinsert(CheckATermList(x_6), a_12);
        h_1 = t;
        t = SSLsetAnnotations(h_1, u_6);
        LocalPopChoice(g_15);
      }
    else
      {
        t = f_15;
        t = j_107(t);
      }
    return(t);
  }
  t = e_12(t);
  return(t);
}
ATerm get_filename_0_0 (ATerm t)
{
  ATerm i_12 = NULL,j_12 = NULL,k_12 = NULL;
  k_12 = t;
  t = SSL_explode_string(k_12);
  {
    ATerm h_15 = t;
    int i_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm f_0 (ATerm t);
        static ATerm f_0 (ATerm t)
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm k_15 = ATgetFirst((ATermList) t);
              if(((ATgetType(k_15) != AT_INT) || (ATgetInt((ATermInt) k_15) != 47)))
                _fail(t);
              if(((i_12 != NULL) && (i_12 != (ATerm) ATgetNext((ATermList) t))))
                _fail((ATerm) ATgetNext((ATermList) t));
              else
                i_12 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          return(t);
        }
        t = at_suffix_rev_1_0(f_0, t);
        t = not_null(i_12);
        LocalPopChoice(i_15);
      }
    else
      {
        t = h_15;
      }
  }
  j_12 = t;
  t = SSL_implode_string(j_12);
  return(t);
}
ATerm map_1_0 (ATerm k_106 (ATerm), ATerm t)
{
  static ATerm t_13 (ATerm t);
  static ATerm t_13 (ATerm t)
  {
    ATerm l_13 = NULL,o_13 = NULL,r_13 = NULL;
    l_13 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = l_13;
      }
    else
      {
        ATerm h_7 = NULL,p_7 = NULL,s_7 = NULL,m_1 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            o_13 = ATgetFirst((ATermList) t);
            r_13 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(l_13);
        h_7 = t;
        t = o_13;
        t = k_106(t);
        p_7 = t;
        t = r_13;
        t = t_13(t);
        s_7 = t;
        t = (ATerm) ATinsert(CheckATermList(s_7), p_7);
        m_1 = t;
        t = SSLsetAnnotations(m_1, h_7);
      }
    return(t);
  }
  t = t_13(t);
  return(t);
}
static ATerm d_10 (ATerm q_64, ATerm r_64, ATerm t)
{
  ATerm w_13 = NULL;
  t = lookup_table_0_1(q_64, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      w_13 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = i_10(r_64, w_13, t);
  return(t);
}
static ATerm i_0 (ATerm t)
{
  ATerm e_14 = NULL;
  if(match_cons(t, sym_Specification_1))
    {
      e_14 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = e_14;
  t = filter_1_0(k_0, t);
  return(t);
}
static ATerm k_0 (ATerm t)
{
  ATerm l_15 = t;
  if((PushChoice() == 0))
    {
      ATerm f_14 = NULL,g_14 = NULL,h_14 = NULL,u_1 = NULL;
      h_14 = t;
      if(match_cons(t, sym_Imports_1))
        {
          g_14 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(h_14);
      f_14 = t;
      t = (ATerm) ATmakeAppl(sym_Imports_1, g_14);
      u_1 = t;
      t = SSLsetAnnotations(u_1, f_14);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = l_15;
    }
  return(t);
}
ATerm flatten_stratego_0_0 (ATerm t)
{
  ATerm b_14 = NULL;
  t = map_1_0(i_0, t);
  t = concat_0_0(t);
  b_14 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, b_14);
  return(t);
}
ATerm genzip_4_0 (ATerm o_108 (ATerm), ATerm p_108 (ATerm), ATerm q_108 (ATerm), ATerm r_108 (ATerm), ATerm t)
{
  static ATerm x_14 (ATerm t);
  static ATerm x_14 (ATerm t)
  {
    ATerm m_15 = t;
    int o_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_108(t);
        LocalPopChoice(o_15);
      }
    else
      {
        t = m_15;
        {
          ATerm i_14 = NULL,j_14 = NULL,n_14 = NULL,o_14 = NULL,q_14 = NULL,u_14 = NULL,y_1 = NULL;
          t = p_108(t);
          u_14 = t;
          if(match_cons(t, sym__2))
            {
              j_14 = ATgetArgument(t, 0);
              n_14 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(u_14);
          i_14 = t;
          t = j_14;
          t = r_108(t);
          o_14 = t;
          t = n_14;
          t = x_14(t);
          q_14 = t;
          t = (ATerm) ATmakeAppl(sym__2, o_14, q_14);
          y_1 = t;
          t = SSLsetAnnotations(y_1, i_14);
          t = q_108(t);
        }
      }
    return(t);
  }
  t = x_14(t);
  return(t);
}
static ATerm n_0 (ATerm t)
{
  ATerm y_14 = NULL;
  if(match_cons(t, sym_Imports_1))
    {
      y_14 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = y_14;
  return(t);
}
static ATerm s_8 (ATerm i_151, ATerm t)
{
  t = i_151;
  t = filter_1_0(n_0, t);
  t = concat_0_0(t);
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm b_15 = NULL;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_g_12;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      ATerm j_15 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          b_15 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, term_p_15);
      j_15 = t;
      t = (ATerm) ATmakeAppl(sym__2, b_15, (ATerm) ATinsert(ATempty, term_p_15));
      t = g_9(b_15, j_15, t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
ATerm pass_keep_0_0 (ATerm t)
{
  ATerm r_15 = NULL,s_15 = NULL,t_15 = NULL,x_15 = NULL;
  t = term_q_15;
  {
    ATerm w_15 = t;
    int a_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_15 = NULL,z_15 = NULL;
        t = term_w_11;
        y_15 = t;
        t = term_q_15;
        z_15 = t;
        t = term_d_16;
        t = d_10(y_15, z_15, t);
        LocalPopChoice(a_16);
      }
    else
      {
        t = w_15;
        t = term_e_16;
      }
  }
  s_15 = t;
  t = term_e_16;
  x_15 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_15, term_e_16);
  t = t_8(s_15, x_15, t);
  t_15 = t;
  t = SSL_int_to_string(t_15);
  r_15 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, r_15), term_q_15);
  return(t);
}
static ATerm t_8 (ATerm f_43, ATerm g_43, ATerm t)
{
  ATerm g_16 = t;
  int h_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(f_43, g_43);
      LocalPopChoice(h_16);
    }
  else
    {
      t = g_16;
      t = SSL_subtr(f_43, g_43);
    }
  return(t);
}
ATerm pass_verbose_0_0 (ATerm t)
{
  ATerm b_16 = NULL,c_16 = NULL,f_16 = NULL,i_16 = NULL;
  t = term_k_16;
  {
    ATerm l_16 = t;
    int n_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_16 = NULL,m_16 = NULL;
        t = term_w_11;
        j_16 = t;
        t = term_k_16;
        m_16 = t;
        t = term_o_16;
        t = d_10(j_16, m_16, t);
        LocalPopChoice(n_16);
      }
    else
      {
        t = l_16;
        t = term_e_16;
      }
  }
  c_16 = t;
  t = term_e_16;
  i_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_16, term_e_16);
  t = t_8(c_16, i_16, t);
  f_16 = t;
  t = SSL_int_to_string(f_16);
  b_16 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, b_16), term_k_16);
  return(t);
}
static ATerm s_0 (ATerm t)
{
  ATerm t_16 = NULL,w_16 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm q_16 = ATgetArgument(t, 0);
      if(match_cons(q_16, sym_Stream_1))
        {
          t_16 = ATgetArgument(q_16, 0);
        }
      else
        _fail(t);
      w_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_8(t_16, w_16, t);
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm v_131 (ATerm), ATerm w_131 (ATerm), ATerm t)
{
  ATerm r_16 = NULL,s_16 = NULL;
  s_16 = t;
  t = xtc_new_file_0_0(t);
  r_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_16, s_16);
  t = o_8(s_0, r_16, s_16, t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, r_16);
  t = xtc_transform_file_2_0(v_131, w_131, t);
  t = read_from_0_0(t);
  return(t);
}
static ATerm u_8 (ATerm z_58, ATerm a_59, ATerm t)
{
  t = SSL_execvp(z_58, a_59);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm b_18 = NULL,c_18 = NULL,d_18 = NULL,e_18 = NULL;
  b_18 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      c_18 = ATgetArgument(t, 0);
      {
        ATerm f_8 = NULL,g_8 = NULL;
        t = SSL_int_to_string(c_18);
        f_8 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_x_16), f_8), term_u_16);
        g_8 = t;
        t = SSL_concat_strings(g_8);
      }
    }
  else
    {
      ATerm j_10 = NULL,k_10 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          c_18 = ATgetArgument(t, 0);
          d_18 = ATgetArgument(t, 1);
          e_18 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(d_18);
      j_10 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, e_18), term_z_16), j_10), term_y_16), c_18);
      k_10 = t;
      t = SSL_concat_strings(k_10);
    }
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm j_18 = NULL;
  j_18 = t;
  {
    ATerm a_17 = t;
    int d_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm u_0 (ATerm t);
        static ATerm u_0 (ATerm t)
        {
          if(match_cons(t, sym_Signal_3))
            {
              ATerm e_17 = ATgetArgument(t, 0);
              if((j_18 != ATgetArgument(t, 1)))
                {
                  _fail(ATgetArgument(t, 1));
                }
              {
                ATerm f_17 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_e_23), term_z_22), term_t_22), term_o_22), term_k_22), term_g_22), term_c_22), term_y_21), term_u_21), term_k_21), term_c_21), term_r_20), term_m_20), term_g_20), term_y_19), term_r_19), term_m_19), term_i_19), term_c_19), term_x_18), term_t_18), term_p_18), term_i_18), term_a_18), term_w_17), term_s_17), term_o_17), term_j_17);
        t = fetch_elem_1_0(u_0, t);
        LocalPopChoice(d_17);
      }
    else
      {
        t = a_17;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, j_18);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm o_18 = NULL,e_19 = NULL;
  o_18 = t;
  {
    ATerm h_23 = t;
    int i_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm j_23 = ATgetArgument(t, 0);
            e_19 = ATgetArgument(t, 1);
            {
              ATerm k_23 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(i_23);
        {
          ATerm l_23 = t;
          int n_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm v_10 = NULL,y_10 = NULL,z_10 = NULL;
              t = e_19;
              {
                ATerm o_23 = t;
                if((PushChoice() == 0))
                  {
                    if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
                      _fail(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = o_23;
                  }
              }
              t = signal_from_number_0_0(t);
              t = signal_to_descr_0_0(t);
              v_10 = t;
              t = term_p_23;
              y_10 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, v_10), term_q_23);
              z_10 = t;
              t = SSL_printnl(y_10, z_10);
              t = (ATerm) ATmakeAppl(sym__2, term_p_23, (ATerm) ATinsert(ATinsert(ATempty, v_10), term_q_23));
              LocalPopChoice(n_23);
            }
          else
            {
              t = l_23;
              t = o_18;
            }
        }
      }
    else
      {
        t = h_23;
        t = o_18;
      }
  }
  t = o_18;
  return(t);
}
ATerm fork_0_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_and_wait_1_0 (ATerm s_123 (ATerm), ATerm t)
{
  ATerm t_19 = NULL,w_19 = NULL;
  w_19 = t;
  t = fork_0_0(t);
  t_19 = t;
  {
    ATerm r_23 = t;
    int s_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = w_19;
        t = s_123(t);
        LocalPopChoice(s_23);
      }
    else
      {
        t = r_23;
        t = SSL_waitpid(t_19);
        t = warn_ifsignaled_0_0(t);
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm u_23 = ATgetArgument(t, 0);
            if(((ATgetType(u_23) != AT_INT) || (ATgetInt((ATermInt) u_23) != 0)))
              _fail(t);
            {
              ATerm v_23 = ATgetArgument(t, 1);
            }
            {
              ATerm w_23 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = w_19;
      }
  }
  return(t);
}
static ATerm w_8 (ATerm w_67, ATerm t)
{
  t = SSL_hashtable_keys(w_67);
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm a_20 = NULL,b_20 = NULL;
  static ATerm y_0 (ATerm t);
  static ATerm y_0 (ATerm t)
  {
    ATerm e_20 = NULL,f_20 = NULL;
    e_20 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(a_20), e_20);
    t = d_10(not_null(a_20), e_20, t);
    f_20 = t;
    t = (ATerm) ATmakeAppl(sym__2, e_20, f_20);
    return(t);
  }
  if(((a_20 != NULL) && (a_20 != t)))
    _fail(t);
  else
    a_20 = t;
  t = lookup_table_0_1(a_20, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      b_20 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = w_8(b_20, t);
  t = map_1_0(y_0, t);
  return(t);
}
ATerm if_verbose5_1_0 (ATerm l_123 (ATerm), ATerm t)
{
  ATerm p_20 = NULL;
  p_20 = t;
  {
    ATerm x_23 = t;
    int z_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_20 = NULL,x_20 = NULL,y_20 = NULL;
        t = term_w_11;
        x_20 = t;
        t = term_k_16;
        y_20 = t;
        t = term_o_16;
        t = d_10(x_20, y_20, t);
        w_20 = t;
        t = (ATerm) ATmakeAppl(sym__2, w_20, term_m_22);
        t = geq_0_0(t);
        t = p_20;
        t = l_123(t);
        LocalPopChoice(z_23);
      }
    else
      {
        t = x_23;
        t = p_20;
      }
  }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm k_123 (ATerm), ATerm t)
{
  ATerm b_21 = NULL;
  b_21 = t;
  {
    ATerm a_24 = t;
    int d_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_21 = NULL,f_21 = NULL,g_21 = NULL;
        t = term_w_11;
        f_21 = t;
        t = term_k_16;
        g_21 = t;
        t = term_o_16;
        t = d_10(f_21, g_21, t);
        e_21 = t;
        t = (ATerm) ATmakeAppl(sym__2, e_21, term_k_19);
        t = geq_0_0(t);
        t = b_21;
        t = k_123(t);
        LocalPopChoice(d_24);
      }
    else
      {
        t = a_24;
        t = b_21;
      }
  }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm m_123 (ATerm), ATerm t)
{
  ATerm j_21 = NULL;
  j_21 = t;
  {
    ATerm e_24 = t;
    int f_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_21 = NULL,o_21 = NULL,r_21 = NULL;
        t = term_w_11;
        o_21 = t;
        t = term_k_16;
        r_21 = t;
        t = term_o_16;
        t = d_10(o_21, r_21, t);
        n_21 = t;
        t = (ATerm) ATmakeAppl(sym__2, n_21, term_u_17);
        t = geq_0_0(t);
        t = j_21;
        t = m_123(t);
        LocalPopChoice(f_24);
      }
    else
      {
        t = e_24;
        t = j_21;
      }
  }
  return(t);
}
static ATerm y_8 (ATerm v_110 (ATerm), ATerm c_31, ATerm b_31, ATerm t)
{
  static ATerm m_23 (ATerm t);
  static ATerm m_23 (ATerm t)
  {
    ATerm s_22 = NULL,y_22 = NULL,c_23 = NULL;
    s_22 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = b_31;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            y_22 = ATgetFirst((ATermList) t);
            c_23 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm g_24 = t;
          int h_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = s_22;
              {
                static ATerm z_0 (ATerm t);
                static ATerm z_0 (ATerm t)
                {
                  t = b_31;
                  return(t);
                }
                t = j_9(v_110, z_0, y_22, c_23, t);
              }
              t = m_23(t);
              LocalPopChoice(h_24);
            }
          else
            {
              t = g_24;
              {
                ATerm i_11 = NULL,n_11 = NULL,a_2 = NULL;
                t = SSLgetAnnotations(s_22);
                i_11 = t;
                t = c_23;
                t = m_23(t);
                n_11 = t;
                t = (ATerm) ATinsert(CheckATermList(n_11), y_22);
                a_2 = t;
                t = SSLsetAnnotations(a_2, i_11);
              }
            }
        }
      }
    return(t);
  }
  t = c_31;
  t = m_23(t);
  return(t);
}
static ATerm b_1 (ATerm t)
{
  ATerm j_24 = NULL;
  if(match_cons(t, sym__2))
    {
      j_24 = ATgetArgument(t, 0);
      if((j_24 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm z_8 (ATerm u_63, ATerm v_63, ATerm w_63, ATerm t)
{
  ATerm t_23 = NULL,y_23 = NULL,b_24 = NULL,c_24 = NULL;
  t_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_63, v_63);
  {
    ATerm i_24 = t;
    int l_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm n_24 = ATgetArgument(t, 0);
            ATerm o_24 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, u_63, v_63);
        t = d_10(u_63, v_63, t);
        LocalPopChoice(l_24);
      }
    else
      {
        t = i_24;
        t = (ATerm) ATempty;
      }
  }
  b_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_24, w_63);
  t = y_8(b_1, b_24, w_63, t);
  y_23 = t;
  t = (ATerm) ATmakeAppl(sym__3, u_63, v_63, y_23);
  t = lookup_table_0_1(u_63, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      c_24 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = h_10(v_63, y_23, c_24, t);
  t = t_23;
  return(t);
}
static ATerm a_9 (ATerm p_127 (ATerm), ATerm e_64, ATerm d_64, ATerm t)
{
  static ATerm e_1 (ATerm t);
  static ATerm e_1 (ATerm t)
  {
    ATerm k_24 = NULL,m_24 = NULL;
    if(match_cons(t, sym__2))
      {
        k_24 = ATgetArgument(t, 0);
        m_24 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, e_64, k_24, m_24);
    t = p_127(t);
    return(t);
  }
  t = d_64;
  t = map_1_0(e_1, t);
  return(t);
}
static ATerm v_25 (ATerm f_25, ATerm t)
{
  t = SSL_fclose(f_25);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm r_25 = NULL,s_25 = NULL;
  s_25 = t;
  if(match_cons(t, sym_Stream_1))
    {
      r_25 = ATgetArgument(t, 0);
      {
        ATerm p_24 = t;
        int q_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(r_25);
            LocalPopChoice(q_24);
          }
        else
          {
            t = p_24;
            t = v_25(s_25, t);
          }
      }
    }
  else
    {
      t = v_25(s_25, t);
    }
  return(t);
}
static ATerm b_9 (ATerm a_25, ATerm t)
{
  t = SSL_read_term_from_stream(a_25);
  return(t);
}
static ATerm f_9 (ATerm w_38, ATerm x_38, ATerm t)
{
  t = SSL_strcat(w_38, x_38);
  return(t);
}
static ATerm c_9 (ATerm f_40, ATerm g_40, ATerm t)
{
  ATerm w_25 = NULL;
  t = SSL_fopen(f_40, g_40);
  w_25 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, w_25);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm c_26 = NULL;
  t = SSL_stdin_stream();
  c_26 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, c_26);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm e_26 = NULL;
  t = SSL_stdout_stream();
  e_26 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, e_26);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm f_26 = NULL;
  t = SSL_stderr_stream();
  f_26 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_26);
  return(t);
}
static ATerm j_28 (ATerm p_26, ATerm t)
{
  ATerm q_26 = NULL;
  t = SSL_explode_term(p_26);
  if(match_cons(t, sym__2))
    {
      ATerm r_24 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) r_24) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm s_24 = ATgetArgument(t, 1);
        if(((ATgetType(s_24) == AT_LIST) && !(ATisEmpty(s_24))))
          {
            q_26 = ATgetFirst((ATermList) s_24);
            {
              ATerm t_24 = (ATerm) ATgetNext((ATermList) s_24);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = q_26;
  if(match_cons(t, sym_stderr_0))
    {
      t = q_26;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = q_26;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = q_26;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm k_28 (ATerm t_26, ATerm a_27, ATerm f_27, ATerm t)
{
  ATerm g_27 = NULL,i_27 = NULL,j_27 = NULL,q_27 = NULL,t_3 = NULL;
  t = SSLgetAnnotations(f_27);
  j_27 = t;
  t = t_26;
  if(match_cons(t, sym_Path_1))
    {
      q_27 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, q_27, a_27);
  t_3 = t;
  t = SSLsetAnnotations(t_3, j_27);
  if(match_cons(t, sym__2))
    {
      g_27 = ATgetArgument(t, 0);
      i_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_9(g_27, i_27, t);
  return(t);
}
static ATerm l_28 (ATerm u_27, ATerm v_27, ATerm w_27, ATerm t)
{
  ATerm x_27 = NULL,a_28 = NULL,b_28 = NULL,e_28 = NULL,u_3 = NULL;
  t = SSLgetAnnotations(w_27);
  b_28 = t;
  t = SSL_is_string(u_27);
  e_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_28, v_27);
  u_3 = t;
  t = SSLsetAnnotations(u_3, b_28);
  if(match_cons(t, sym__2))
    {
      x_27 = ATgetArgument(t, 0);
      a_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_9(x_27, a_28, t);
  return(t);
}
static ATerm d_9 (ATerm t)
{
  ATerm g_28 = NULL,h_28 = NULL,i_28 = NULL;
  g_28 = t;
  if(match_cons(t, sym__2))
    {
      h_28 = ATgetArgument(t, 0);
      i_28 = ATgetArgument(t, 1);
      {
        ATerm w_24 = t;
        int x_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = j_28(g_28, t);
            LocalPopChoice(x_24);
          }
        else
          {
            t = w_24;
            {
              ATerm b_25 = t;
              int c_25 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = k_28(h_28, i_28, g_28, t);
                  LocalPopChoice(c_25);
                }
              else
                {
                  t = b_25;
                  t = l_28(h_28, i_28, g_28, t);
                }
            }
          }
      }
    }
  else
    {
      t = j_28(g_28, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm n_28 = NULL,o_28 = NULL,p_28 = NULL,v_28 = NULL;
  v_28 = t;
  {
    ATerm d_25 = t;
    int g_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, v_28, term_h_25);
        t = d_9(t);
        LocalPopChoice(g_25);
      }
    else
      {
        t = d_25;
        {
          ATerm q_12 = NULL,r_12 = NULL;
          t = term_k_25;
          r_12 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_k_25, v_28);
          t = f_9(r_12, v_28, t);
          q_12 = t;
          t = SSL_perror(q_12);
          _fail(t);
        }
      }
  }
  o_28 = t;
  if(match_cons(t, sym_Stream_1))
    {
      p_28 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = b_9(p_28, t);
  n_28 = t;
  t = o_28;
  t = fclose_0_0(t);
  t = n_28;
  return(t);
}
static ATerm f_1 (ATerm t)
{
  t = term_l_25;
  return(t);
}
static ATerm g_1 (ATerm t)
{
  t = term_m_25;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm n_25 = t;
  int o_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_28 = NULL,z_28 = NULL;
      y_28 = t;
      t = (ATerm) ATinsert(ATempty, term_p_25);
      z_28 = t;
      t = (ATerm) ATmakeAppl(sym__2, y_28, (ATerm) ATinsert(ATempty, term_p_25));
      t = g_9(y_28, z_28, t);
      LocalPopChoice(o_25);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = n_25;
      {
        ATerm q_25 = t;
        int t_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_25 = t;
            if((PushChoice() == 0))
              {
                ATerm a_29 = NULL,b_29 = NULL;
                a_29 = t;
                t = (ATerm) ATinsert(ATempty, term_p_15);
                b_29 = t;
                t = (ATerm) ATmakeAppl(sym__2, a_29, (ATerm) ATinsert(ATempty, term_p_15));
                t = g_9(a_29, b_29, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = u_25;
              }
            t = debug_1_0(f_1, t);
            LocalPopChoice(t_25);
          }
        else
          {
            t = q_25;
            t = debug_1_0(g_1, t);
          }
      }
      t = (ATerm) ATempty;
    }
  return(t);
}
static ATerm i_1 (ATerm t)
{
  t = debug_1_0(l_1, t);
  return(t);
}
static ATerm l_1 (ATerm t)
{
  t = term_x_25;
  return(t);
}
static ATerm n_1 (ATerm t)
{
  t = debug_1_0(o_1, t);
  return(t);
}
static ATerm o_1 (ATerm t)
{
  t = term_y_25;
  return(t);
}
static ATerm t_1 (ATerm t)
{
  ATerm c_30 = NULL,d_30 = NULL,e_30 = NULL;
  c_30 = t;
  t = term_p_23;
  d_30 = t;
  t = (ATerm) ATinsert(ATempty, term_z_25);
  e_30 = t;
  t = SSL_printnl(d_30, e_30);
  t = c_30;
  return(t);
}
static ATerm v_1 (ATerm t)
{
  ATerm f_30 = NULL,g_30 = NULL,h_30 = NULL;
  if(match_cons(t, sym__3))
    {
      f_30 = ATgetArgument(t, 0);
      g_30 = ATgetArgument(t, 1);
      h_30 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = z_8(f_30, g_30, h_30, t);
  return(t);
}
static ATerm w_1 (ATerm t)
{
  ATerm m_30 = NULL,n_30 = NULL,o_30 = NULL;
  m_30 = t;
  t = term_p_23;
  n_30 = t;
  t = (ATerm) ATinsert(ATempty, term_a_26);
  o_30 = t;
  t = SSL_printnl(n_30, o_30);
  t = m_30;
  return(t);
}
static ATerm x_1 (ATerm t)
{
  ATerm u_30 = NULL,v_30 = NULL,w_30 = NULL;
  u_30 = t;
  t = term_p_23;
  v_30 = t;
  t = (ATerm) ATinsert(ATempty, term_z_25);
  w_30 = t;
  t = SSL_printnl(v_30, w_30);
  t = u_30;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm c_29 = NULL,d_29 = NULL,f_29 = NULL,g_29 = NULL,h_29 = NULL,i_29 = NULL,n_29 = NULL,o_29 = NULL,r_29 = NULL,s_29 = NULL,t_29 = NULL,u_29 = NULL,w_29 = NULL,x_29 = NULL;
  c_29 = t;
  t = if_verbose5_1_0(i_1, t);
  {
    ATerm b_26 = t;
    if((PushChoice() == 0))
      {
        ATerm z_29 = NULL,b_30 = NULL;
        t = term_d_26;
        z_29 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, c_29);
        b_30 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_d_26, (ATerm) ATmakeAppl(sym_Imported_1, c_29));
        t = d_10(z_29, b_30, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = b_26;
      }
  }
  f_29 = t;
  t = term_d_26;
  s_29 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_d_26, term_g_26, (ATerm) ATinsert(ATempty, c_29));
  t = lookup_table_0_1(s_29, t);
  x_29 = t;
  t = term_g_26;
  t_29 = t;
  t = (ATerm) ATinsert(ATempty, c_29);
  u_29 = t;
  t = x_29;
  if(match_cons(t, sym_Hashtable_1))
    {
      w_29 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = h_10(t_29, u_29, w_29, t);
  t = f_29;
  t = if_verbose4_1_0(n_1, t);
  t = read_repository_file_0_0(t);
  t = if_verbose6_1_0(t_1, t);
  d_29 = t;
  t = term_d_26;
  r_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_26, d_29);
  t = a_9(v_1, r_29, d_29, t);
  t = if_verbose6_1_0(w_1, t);
  t = term_d_26;
  g_29 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_d_26, (ATerm)ATmakeAppl(sym_Imported_1, c_29), (ATerm) ATempty);
  t = lookup_table_0_1(g_29, t);
  o_29 = t;
  t = (ATerm) ATmakeAppl(sym_Imported_1, c_29);
  h_29 = t;
  t = (ATerm) ATempty;
  i_29 = t;
  t = o_29;
  if(match_cons(t, sym_Hashtable_1))
    {
      n_29 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = h_10(h_29, i_29, n_29, t);
  t = (ATerm) ATmakeAppl(sym__3, term_d_26, (ATerm)ATmakeAppl(sym_Imported_1, c_29), (ATerm) ATempty);
  t = if_verbose4_1_0(x_1, t);
  return(t);
}
ATerm repeat_2_0 (ATerm y_98 (ATerm), ATerm z_98 (ATerm), ATerm t)
{
  static ATerm y_30 (ATerm t);
  static ATerm y_30 (ATerm t)
  {
    ATerm h_26 = t;
    int i_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_98(t);
        t = y_30(t);
        LocalPopChoice(i_26);
      }
    else
      {
        t = h_26;
        t = z_98(t);
      }
    return(t);
  }
  t = y_30(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm j_26 = t;
  int k_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_31 = NULL,j_31 = NULL;
      t = term_w_11;
      d_31 = t;
      t = term_l_26;
      j_31 = t;
      t = term_m_26;
      t = d_10(d_31, j_31, t);
      LocalPopChoice(k_26);
    }
  else
    {
      t = j_26;
      {
        ATerm n_26 = t;
        int o_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_31 = NULL;
            t = term_r_26;
            k_31 = t;
            t = SSL_getenv(k_31);
            LocalPopChoice(o_26);
          }
        else
          {
            t = n_26;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
static ATerm z_1 (ATerm t)
{
  t = debug_1_0(c_2, t);
  return(t);
}
static ATerm c_2 (ATerm t)
{
  t = term_s_26;
  return(t);
}
static ATerm d_2 (ATerm t)
{
  ATerm w_31 = NULL,x_31 = NULL;
  t = term_d_26;
  w_31 = t;
  t = term_u_26;
  x_31 = t;
  t = term_v_26;
  t = d_10(w_31, x_31, t);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm w_26 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = w_26;
      }
  }
  return(t);
}
static ATerm e_2 (ATerm t)
{
  t = debug_1_0(f_2, t);
  return(t);
}
static ATerm f_2 (ATerm t)
{
  t = term_x_26;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm o_31 = NULL;
  t = if_verbose5_1_0(z_1, t);
  o_31 = t;
  {
    ATerm y_26 = t;
    int z_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_31 = NULL,s_31 = NULL;
        t = term_d_26;
        r_31 = t;
        t = term_g_26;
        s_31 = t;
        t = term_b_27;
        t = d_10(r_31, s_31, t);
        LocalPopChoice(z_26);
      }
    else
      {
        t = y_26;
        {
          ATerm v_31 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          v_31 = t;
          t = repeat_2_0(d_2, _id, t);
          t = v_31;
        }
      }
  }
  t = o_31;
  t = if_verbose5_1_0(e_2, t);
  return(t);
}
static ATerm h_2 (ATerm t)
{
  t = debug_1_0(i_2, t);
  return(t);
}
static ATerm i_2 (ATerm t)
{
  t = term_c_27;
  return(t);
}
static ATerm g_33 (ATerm g_32, ATerm t)
{
  ATerm j_32 = NULL,k_32 = NULL,l_32 = NULL;
  t = term_d_26;
  k_32 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, g_32);
  l_32 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_26, (ATerm) ATmakeAppl(sym_Tool_1, g_32));
  t = d_10(k_32, l_32, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm d_27 = ATgetFirst((ATermList) t);
      if(match_cons(d_27, sym__2))
        {
          ATerm h_27 = ATgetArgument(d_27, 0);
          j_32 = ATgetArgument(d_27, 1);
        }
      else
        _fail(t);
      {
        ATerm e_27 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = j_32;
  return(t);
}
static ATerm p_2 (ATerm t)
{
  t = debug_1_0(r_2, t);
  return(t);
}
static ATerm r_2 (ATerm t)
{
  t = term_c_27;
  return(t);
}
static ATerm s_2 (ATerm t)
{
  t = term_d_26;
  t = table_getlist_0_0(t);
  t = debug_1_0(u_2, t);
  return(t);
}
static ATerm u_2 (ATerm t)
{
  t = term_k_27;
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm l_27 = t;
  int m_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_32 = NULL,n_32 = NULL,o_32 = NULL;
      t = if_verbose5_1_0(h_2, t);
      t = xtc_load_0_0(t);
      o_32 = t;
      if(match_cons(t, sym__2))
        {
          m_32 = ATgetArgument(t, 0);
          n_32 = ATgetArgument(t, 1);
          {
            ATerm n_27 = t;
            int o_27 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm t_32 = NULL,v_32 = NULL,w_32 = NULL;
                t = term_d_26;
                v_32 = t;
                t = (ATerm) ATmakeAppl(sym_Tool_1, m_32);
                w_32 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_d_26, (ATerm) ATmakeAppl(sym_Tool_1, m_32));
                t = d_10(v_32, w_32, t);
                {
                  static ATerm n_2 (ATerm t);
                  static ATerm n_2 (ATerm t)
                  {
                    if(match_cons(t, sym__2))
                      {
                        if((n_32 != ATgetArgument(t, 0)))
                          {
                            _fail(ATgetArgument(t, 0));
                          }
                        if(((t_32 != NULL) && (t_32 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          t_32 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = fetch_1_0(n_2, t);
                }
                t = not_null(t_32);
                LocalPopChoice(o_27);
              }
            else
              {
                t = n_27;
                t = g_33(o_32, t);
              }
          }
        }
      else
        {
          t = g_33(o_32, t);
        }
      t = if_verbose5_1_0(p_2, t);
      LocalPopChoice(m_27);
    }
  else
    {
      t = l_27;
      {
        ATerm f_33 = NULL,a_13 = NULL,b_13 = NULL;
        f_33 = t;
        t = term_p_23;
        a_13 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_r_27), f_33), term_p_27);
        b_13 = t;
        t = SSL_printnl(a_13, b_13);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_r_27), f_33), term_p_27);
        t = if_verbose5_1_0(s_2, t);
        _fail(t);
      }
    }
  return(t);
}
ATerm xtc_command_1_0 (ATerm w_132 (ATerm), ATerm t)
{
  ATerm k_33 = NULL,l_33 = NULL;
  l_33 = t;
  t = w_132(t);
  t = xtc_find_0_0(t);
  k_33 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_33, l_33);
  {
    static ATerm a_3 (ATerm t);
    static ATerm a_3 (ATerm t)
    {
      ATerm m_33 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, k_33, l_33);
      t = u_8(k_33, l_33, t);
      t = term_s_27;
      m_33 = t;
      t = SSL_exit(m_33);
      return(t);
    }
    t = fork_and_wait_1_0(a_3, t);
  }
  t = l_33;
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm r_0 (ATerm), ATerm t_0 (ATerm), ATerm t)
{
  ATerm o_33 = NULL,p_33 = NULL;
  o_33 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm q_33 = NULL,r_33 = NULL;
      t = o_33;
      t = xtc_new_file_0_0(t);
      q_33 = t;
      t = t_0(t);
      r_33 = t;
      t = (ATerm) ATmakeAppl(sym__2, r_33, (ATerm) ATinsert(ATinsert(ATempty, q_33), term_x_11));
      t = conc_0_0(t);
      t = xtc_command_1_0(r_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, q_33);
    }
  else
    {
      ATerm t_33 = NULL,u_33 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          p_33 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = p_33;
      t = xtc_new_file_0_0(t);
      t_33 = t;
      t = t_0(t);
      u_33 = t;
      t = (ATerm) ATmakeAppl(sym__2, u_33, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, t_33), term_x_11), p_33), term_t_27));
      t = conc_0_0(t);
      t = xtc_command_1_0(r_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, t_33);
    }
  return(t);
}
static ATerm o_36 (ATerm c_34, ATerm d_34, ATerm e_34, ATerm t)
{
  ATerm f_34 = NULL,i_34 = NULL,d_13 = NULL,f_13 = NULL,m_4 = NULL;
  t = SSLgetAnnotations(e_34);
  f_34 = t;
  t = c_34;
  {
    ATerm y_27 = t;
    if((PushChoice() == 0))
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("rtree", 0, ATtrue)))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = y_27;
      }
  }
  i_34 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_34, d_34);
  m_4 = t;
  t = SSLsetAnnotations(m_4, f_34);
  f_13 = t;
  t = SSL_explode_term(f_13);
  if(match_cons(t, sym__2))
    {
      ATerm z_27 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) z_27) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm c_28 = ATgetArgument(t, 1);
        if(((ATgetType(c_28) == AT_LIST) && !(ATisEmpty(c_28))))
          {
            ATerm d_28 = ATgetFirst((ATermList) c_28);
            ATerm f_28 = (ATerm) ATgetNext((ATermList) c_28);
            if(((ATgetType(f_28) == AT_LIST) && !(ATisEmpty(f_28))))
              {
                d_13 = ATgetFirst((ATermList) f_28);
                {
                  ATerm m_28 = (ATerm) ATgetNext((ATermList) f_28);
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
  t = d_13;
  {
    ATerm q_28 = t;
    int r_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_28 = t;
        int t_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_34 = NULL;
            if(match_cons(t, sym_FILE_1))
              {
                p_34 = ATgetArgument(t, 0);
                {
                  ATerm m_13 = NULL,n_4 = NULL;
                  t = SSLgetAnnotations(d_13);
                  m_13 = t;
                  t = (ATerm) ATmakeAppl(sym_FILE_1, p_34);
                  n_4 = t;
                  t = SSLsetAnnotations(n_4, m_13);
                }
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = d_13;
              }
            LocalPopChoice(t_28);
            t = xtc_transform_file_2_0(b_3, c_3, t);
          }
        else
          {
            t = s_28;
            t = xtc_transform_term_2_0(f_3, k_3, t);
          }
        t = read_from_0_0(t);
        LocalPopChoice(r_28);
      }
    else
      {
        t = q_28;
        {
          ATerm p_35 = NULL,t_35 = NULL,v_35 = NULL;
          t = term_p_23;
          t_35 = t;
          t = (ATerm) ATinsert(ATinsert(ATempty, d_34), term_u_28);
          v_35 = t;
          t = SSL_printnl(t_35, v_35);
          t = term_e_16;
          p_35 = t;
          t = SSL_exit(p_35);
          t = (ATerm) ATinsert(ATinsert(ATempty, d_34), term_u_28);
        }
      }
  }
  return(t);
}
static ATerm p_36 (ATerm y_35, ATerm z_35, ATerm t)
{
  ATerm u_13 = NULL;
  t = SSL_explode_term(z_35);
  if(match_cons(t, sym__2))
    {
      ATerm w_28 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) w_28) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm x_28 = ATgetArgument(t, 1);
        if(((ATgetType(x_28) == AT_LIST) && !(ATisEmpty(x_28))))
          {
            ATerm e_29 = ATgetFirst((ATermList) x_28);
            ATerm j_29 = (ATerm) ATgetNext((ATermList) x_28);
            if(((ATgetType(j_29) == AT_LIST) && !(ATisEmpty(j_29))))
              {
                u_13 = ATgetFirst((ATermList) j_29);
                {
                  ATerm k_29 = (ATerm) ATgetNext((ATermList) j_29);
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
  t = u_13;
  {
    ATerm l_29 = t;
    int m_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = read_from_0_0(t);
        LocalPopChoice(m_29);
      }
    else
      {
        t = l_29;
        {
          ATerm g_36 = NULL,h_36 = NULL,i_36 = NULL;
          t = term_p_23;
          h_36 = t;
          t = (ATerm) ATinsert(ATinsert(ATempty, y_35), term_u_28);
          i_36 = t;
          t = SSL_printnl(h_36, i_36);
          t = term_e_16;
          g_36 = t;
          t = SSL_exit(g_36);
          t = (ATerm) ATinsert(ATinsert(ATempty, y_35), term_u_28);
        }
      }
  }
  return(t);
}
static ATerm b_3 (ATerm t)
{
  t = term_p_29;
  return(t);
}
static ATerm c_3 (ATerm t)
{
  ATerm r_34 = NULL,s_34 = NULL,t_34 = NULL,u_34 = NULL,v_34 = NULL;
  v_34 = t;
  t = pass_verbose_0_0(t);
  r_34 = t;
  t = v_34;
  t = pass_keep_0_0(t);
  s_34 = t;
  t = term_q_29;
  {
    ATerm v_29 = t;
    int y_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_34 = NULL,x_34 = NULL;
        t = term_w_11;
        w_34 = t;
        t = term_q_29;
        x_34 = t;
        t = term_a_30;
        t = d_10(w_34, x_34, t);
        LocalPopChoice(y_29);
        t = (ATerm) ATinsert(ATempty, term_q_29);
      }
    else
      {
        t = v_29;
        t = (ATerm) ATempty;
      }
  }
  t_34 = t;
  t = term_i_30;
  {
    ATerm j_30 = t;
    int k_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_34 = NULL,z_34 = NULL;
        t = term_w_11;
        y_34 = t;
        t = term_i_30;
        z_34 = t;
        t = term_l_30;
        t = d_10(y_34, z_34, t);
        LocalPopChoice(k_30);
      }
    else
      {
        t = j_30;
        t = (ATerm) ATempty;
      }
  }
  u_34 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, u_34), s_34), r_34), t_34);
  t = concat_0_0(t);
  return(t);
}
static ATerm f_3 (ATerm t)
{
  t = term_p_29;
  return(t);
}
static ATerm k_3 (ATerm t)
{
  ATerm a_35 = NULL,b_35 = NULL,c_35 = NULL,e_35 = NULL,g_35 = NULL;
  g_35 = t;
  t = pass_verbose_0_0(t);
  a_35 = t;
  t = g_35;
  t = pass_keep_0_0(t);
  b_35 = t;
  t = term_q_29;
  {
    ATerm p_30 = t;
    int q_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_35 = NULL,k_35 = NULL;
        t = term_w_11;
        i_35 = t;
        t = term_q_29;
        k_35 = t;
        t = term_a_30;
        t = d_10(i_35, k_35, t);
        LocalPopChoice(q_30);
        t = (ATerm) ATinsert(ATempty, term_q_29);
      }
    else
      {
        t = p_30;
        t = (ATerm) ATempty;
      }
  }
  c_35 = t;
  t = term_i_30;
  {
    ATerm r_30 = t;
    int s_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_35 = NULL,n_35 = NULL;
        t = term_w_11;
        l_35 = t;
        t = term_i_30;
        n_35 = t;
        t = term_l_30;
        t = d_10(l_35, n_35, t);
        LocalPopChoice(s_30);
      }
    else
      {
        t = r_30;
        t = (ATerm) ATempty;
      }
  }
  e_35 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, e_35), b_35), a_35), c_35);
  t = concat_0_0(t);
  return(t);
}
ATerm parse_module_0_0 (ATerm t)
{
  ATerm j_36 = NULL,m_36 = NULL,n_36 = NULL;
  j_36 = t;
  if(match_cons(t, sym__2))
    {
      m_36 = ATgetArgument(t, 0);
      n_36 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_36;
  if(match_string(t, "rtree"))
    {
      ATerm t_30 = t;
      int x_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = o_36(m_36, n_36, j_36, t);
          LocalPopChoice(x_30);
        }
      else
        {
          t = t_30;
          t = p_36(n_36, j_36, t);
        }
    }
  else
    {
      t = o_36(m_36, n_36, j_36, t);
    }
  return(t);
}
ATerm debug_1_0 (ATerm z_105 (ATerm), ATerm t)
{
  ATerm r_36 = NULL,s_36 = NULL,t_36 = NULL,u_36 = NULL;
  r_36 = t;
  t = z_105(t);
  s_36 = t;
  t = term_p_23;
  t_36 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, r_36), s_36);
  u_36 = t;
  t = SSL_printnl(t_36, u_36);
  t = r_36;
  return(t);
}
ATerm if_verbose3_1_0 (ATerm j_123 (ATerm), ATerm t)
{
  ATerm y_36 = NULL;
  y_36 = t;
  {
    ATerm e_31 = t;
    int h_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_37 = NULL,d_37 = NULL,e_37 = NULL;
        t = term_w_11;
        d_37 = t;
        t = term_k_16;
        e_37 = t;
        t = term_o_16;
        t = d_10(d_37, e_37, t);
        b_37 = t;
        t = (ATerm) ATmakeAppl(sym__2, b_37, term_q_17);
        t = geq_0_0(t);
        t = y_36;
        t = j_123(t);
        LocalPopChoice(h_31);
      }
    else
      {
        t = e_31;
        t = y_36;
      }
  }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm w_106 (ATerm), ATerm t)
{
  ATerm g_37 = NULL;
  static ATerm l_3 (ATerm t);
  static ATerm l_3 (ATerm t)
  {
    t = w_106(t);
    if(((g_37 != NULL) && (g_37 != t)))
      _fail(t);
    else
      g_37 = t;
    return(t);
  }
  t = fetch_1_0(l_3, t);
  t = not_null(g_37);
  return(t);
}
static ATerm g_9 (ATerm w_39, ATerm x_39, ATerm t)
{
  t = SSL_access(w_39, x_39);
  return(t);
}
ATerm is_relpath_0_0 (ATerm t)
{
  ATerm i_31 = t;
  if((PushChoice() == 0))
    {
      ATerm h_37 = NULL;
      h_37 = t;
      t = SSL_explode_string(h_37);
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          ATerm l_31 = ATgetFirst((ATermList) t);
          if(((ATgetType(l_31) != AT_INT) || (ATgetInt((ATermInt) l_31) != 47)))
            _fail(t);
          {
            ATerm m_31 = (ATerm) ATgetNext((ATermList) t);
          }
        }
      else
        _fail(t);
      t = h_37;
      PopChoice();
      _fail(t);
    }
  else
    {
      t = i_31;
    }
  return(t);
}
static ATerm h_9 (ATerm a_98 (ATerm), ATerm g_23, ATerm f_23, ATerm t)
{
  t = a_98(t);
  {
    ATerm n_31 = t;
    int p_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm o_3 (ATerm t);
        static ATerm o_3 (ATerm t)
        {
          ATerm s_37 = NULL;
          s_37 = t;
          {
            ATerm q_31 = t;
            int t_31 = stack_ptr;
            if((PushChoice() == 0))
              {
                static ATerm p_3 (ATerm t);
                static ATerm p_3 (ATerm t)
                {
                  ATerm u_37 = NULL,v_37 = NULL,w_37 = NULL,x_37 = NULL,y_37 = NULL;
                  v_37 = t;
                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, v_37), term_a_14), g_23), term_u_31), s_37);
                  y_37 = t;
                  t = SSL_concat_strings(y_37);
                  w_37 = t;
                  t = (ATerm) ATinsert(ATempty, term_p_15);
                  x_37 = t;
                  t = (ATerm) ATmakeAppl(sym__2, w_37, (ATerm) ATinsert(ATempty, term_p_15));
                  t = g_9(w_37, x_37, t);
                  u_37 = t;
                  t = (ATerm) ATmakeAppl(sym__2, v_37, (ATerm) ATmakeAppl(sym_FILE_1, u_37));
                  return(t);
                }
                t = g_23;
                t = is_relpath_0_0(t);
                t = f_23;
                t = fetch_elem_1_0(p_3, t);
                LocalPopChoice(t_31);
              }
            else
              {
                t = q_31;
                {
                  static ATerm q_3 (ATerm t);
                  static ATerm q_3 (ATerm t)
                  {
                    ATerm c_14 = NULL,d_14 = NULL,k_14 = NULL,l_14 = NULL,m_14 = NULL;
                    d_14 = t;
                    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, d_14), term_a_14), g_23);
                    m_14 = t;
                    t = SSL_concat_strings(m_14);
                    k_14 = t;
                    t = (ATerm) ATinsert(ATempty, term_p_15);
                    l_14 = t;
                    t = (ATerm) ATmakeAppl(sym__2, k_14, (ATerm) ATinsert(ATempty, term_p_15));
                    t = g_9(k_14, l_14, t);
                    c_14 = t;
                    t = (ATerm) ATmakeAppl(sym__2, d_14, (ATerm) ATmakeAppl(sym_FILE_1, c_14));
                    return(t);
                  }
                  t = SSL_explode_string(g_23);
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      ATerm y_31 = ATgetFirst((ATermList) t);
                      if(((ATgetType(y_31) != AT_INT) || (ATgetInt((ATermInt) y_31) != 47)))
                        _fail(t);
                      {
                        ATerm z_31 = (ATerm) ATgetNext((ATermList) t);
                      }
                    }
                  else
                    _fail(t);
                  t = f_23;
                  t = fetch_elem_1_0(q_3, t);
                }
              }
          }
          return(t);
        }
        t = fetch_elem_1_0(o_3, t);
        LocalPopChoice(p_31);
      }
    else
      {
        t = n_31;
        {
          ATerm a_32 = t;
          int b_32 = stack_ptr;
          if((PushChoice() == 0))
            {
              static ATerm s_3 (ATerm t);
              static ATerm s_3 (ATerm t)
              {
                ATerm z_37 = NULL,a_38 = NULL,b_38 = NULL,c_38 = NULL,d_38 = NULL,e_38 = NULL;
                z_37 = t;
                t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, z_37), term_a_14), g_23);
                e_38 = t;
                t = SSL_concat_strings(e_38);
                a_38 = t;
                t = term_d_26;
                c_38 = t;
                t = (ATerm) ATmakeAppl(sym_Tool_1, a_38);
                d_38 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_d_26, (ATerm) ATmakeAppl(sym_Tool_1, a_38));
                t = d_10(c_38, d_38, t);
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    ATerm c_32 = ATgetFirst((ATermList) t);
                    if(match_cons(c_32, sym__2))
                      {
                        ATerm e_32 = ATgetArgument(c_32, 0);
                        b_38 = ATgetArgument(c_32, 1);
                      }
                    else
                      _fail(t);
                    {
                      ATerm d_32 = (ATerm) ATgetNext((ATermList) t);
                    }
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym__2, z_37, (ATerm) ATmakeAppl(sym_FILE_1, b_38));
                return(t);
              }
              t = f_23;
              t = fetch_elem_1_0(s_3, t);
              LocalPopChoice(b_32);
            }
          else
            {
              t = a_32;
              {
                ATerm f_32 = t;
                int h_32 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm f_38 = NULL,g_38 = NULL;
                    t = term_w_11;
                    f_38 = t;
                    t = term_i_32;
                    g_38 = t;
                    t = term_p_32;
                    t = d_10(f_38, g_38, t);
                    LocalPopChoice(h_32);
                    {
                      ATerm h_38 = NULL,i_38 = NULL,j_38 = NULL,k_38 = NULL,l_38 = NULL;
                      h_38 = t;
                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_r_32), g_23), term_q_32);
                      l_38 = t;
                      t = SSL_concat_strings(l_38);
                      i_38 = t;
                      t = term_p_23;
                      j_38 = t;
                      t = (ATerm) ATinsert(ATempty, i_38);
                      k_38 = t;
                      t = SSL_printnl(j_38, k_38);
                      t = h_38;
                      _fail(t);
                    }
                  }
                else
                  {
                    t = f_32;
                    {
                      ATerm m_38 = NULL,n_38 = NULL,o_38 = NULL;
                      t = term_p_23;
                      n_38 = t;
                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_r_32), g_23), term_q_32);
                      o_38 = t;
                      t = SSL_printnl(n_38, o_38);
                      t = term_e_16;
                      m_38 = t;
                      t = SSL_exit(m_38);
                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_r_32), g_23), term_q_32);
                    }
                  }
              }
            }
        }
      }
  }
  return(t);
}
static ATerm x_3 (ATerm t)
{
  t = term_s_32;
  return(t);
}
ATerm get_module_1_0 (ATerm z_97 (ATerm), ATerm t)
{
  ATerm s_38 = NULL,t_38 = NULL,u_38 = NULL,v_38 = NULL;
  t = basename_1_0(_id, t);
  u_38 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_h_25), term_y_32), term_x_32), term_u_32);
  v_38 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_38, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_h_25), term_y_32), term_x_32), term_u_32));
  t = h_9(z_97, u_38, v_38, t);
  if(match_cons(t, sym__2))
    {
      ATerm z_32 = ATgetArgument(t, 0);
      ATerm a_33 = ATgetArgument(t, 1);
      if(match_cons(a_33, sym_FILE_1))
        {
          s_38 = ATgetArgument(a_33, 0);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  {
    static ATerm v_3 (ATerm t);
    static ATerm v_3 (ATerm t)
    {
      ATerm z_38 = NULL;
      z_38 = t;
      t = s_38;
      t = debug_1_0(x_3, t);
      t = z_38;
      return(t);
    }
    t = if_verbose3_1_0(v_3, t);
  }
  t = parse_module_0_0(t);
  t_38 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_38, t_38);
  return(t);
}
static ATerm j_9 (ATerm y_110 (ATerm), ATerm z_110 (ATerm), ATerm g_31, ATerm f_31, ATerm t)
{
  t = z_110(t);
  {
    static ATerm z_3 (ATerm t);
    static ATerm z_3 (ATerm t)
    {
      ATerm a_39 = NULL;
      a_39 = t;
      t = (ATerm) ATmakeAppl(sym__2, g_31, a_39);
      t = y_110(t);
      return(t);
    }
    t = fetch_1_0(z_3, t);
  }
  t = f_31;
  return(t);
}
static ATerm k_9 (ATerm q_110 (ATerm), ATerm a_31, ATerm z_30, ATerm t)
{
  static ATerm v_39 (ATerm t);
  static ATerm v_39 (ATerm t)
  {
    ATerm p_39 = NULL,q_39 = NULL,s_39 = NULL;
    p_39 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = p_39;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            q_39 = ATgetFirst((ATermList) t);
            s_39 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm b_33 = t;
          int c_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = p_39;
              {
                static ATerm b_4 (ATerm t);
                static ATerm b_4 (ATerm t)
                {
                  t = z_30;
                  return(t);
                }
                t = j_9(q_110, b_4, q_39, s_39, t);
              }
              t = v_39(t);
              LocalPopChoice(c_33);
            }
          else
            {
              t = b_33;
              {
                ATerm v_14 = NULL,c_15 = NULL,r_4 = NULL;
                t = SSLgetAnnotations(p_39);
                v_14 = t;
                t = s_39;
                t = v_39(t);
                c_15 = t;
                t = (ATerm) ATinsert(CheckATermList(c_15), q_39);
                r_4 = t;
                t = SSLsetAnnotations(r_4, v_14);
              }
            }
        }
      }
    return(t);
  }
  t = a_31;
  t = v_39(t);
  return(t);
}
static ATerm f_4 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm d_33 = ATgetArgument(t, 0);
      if(((ATgetType(d_33) != AT_LIST) || !(ATisEmpty(d_33))))
        _fail(t);
      {
        ATerm e_33 = ATgetArgument(t, 1);
        if(((ATgetType(e_33) != AT_LIST) || !(ATisEmpty(e_33))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm i_4 (ATerm t)
{
  ATerm q_40 = NULL,r_40 = NULL,s_40 = NULL,v_40 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm h_33 = ATgetArgument(t, 0);
      if(((ATgetType(h_33) == AT_LIST) && !(ATisEmpty(h_33))))
        {
          q_40 = ATgetFirst((ATermList) h_33);
          r_40 = (ATerm) ATgetNext((ATermList) h_33);
        }
      else
        _fail(t);
      {
        ATerm i_33 = ATgetArgument(t, 1);
        if(((ATgetType(i_33) == AT_LIST) && !(ATisEmpty(i_33))))
          {
            s_40 = ATgetFirst((ATermList) i_33);
            v_40 = (ATerm) ATgetNext((ATermList) i_33);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, q_40, s_40), (ATerm) ATmakeAppl(sym__2, r_40, v_40));
  return(t);
}
static ATerm j_4 (ATerm t)
{
  ATerm w_40 = NULL,x_40 = NULL;
  if(match_cons(t, sym__2))
    {
      w_40 = ATgetArgument(t, 0);
      x_40 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(x_40), w_40);
  return(t);
}
static ATerm p_9 (ATerm w_706, ATerm b_707, ATerm o_70, ATerm t)
{
  ATerm k_40 = NULL,l_40 = NULL,m_40 = NULL,o_40 = NULL;
  t = SSL_explode_term(b_707);
  if(match_cons(t, sym__2))
    {
      k_40 = ATgetArgument(t, 0);
      m_40 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(w_706);
  if(match_cons(t, sym__2))
    {
      if((k_40 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      l_40 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, l_40, m_40);
  t = genzip_4_0(f_4, i_4, j_4, _id, t);
  o_40 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_40, o_70);
  t = conc_0_0(t);
  return(t);
}
static ATerm k_4 (ATerm t)
{
  ATerm f_41 = NULL;
  f_41 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, f_41);
  return(t);
}
static ATerm l_4 (ATerm t)
{
  ATerm g_41 = NULL,j_41 = NULL,k_41 = NULL,l_41 = NULL,t_4 = NULL;
  l_41 = t;
  if(match_cons(t, sym__2))
    {
      j_41 = ATgetArgument(t, 0);
      k_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_41);
  g_41 = t;
  t = k_41;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, j_41, k_41);
  t_4 = t;
  t = SSLsetAnnotations(t_4, g_41);
  return(t);
}
static ATerm o_4 (ATerm t)
{
  ATerm n_42 = NULL,o_42 = NULL,p_42 = NULL,q_42 = NULL,r_42 = NULL;
  n_42 = t;
  if(match_cons(t, sym__2))
    {
      o_42 = ATgetArgument(t, 0);
      p_42 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_42;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_42 = ATgetFirst((ATermList) t);
      r_42 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm j_33 = t;
        int n_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = d_43(o_42, p_42, n_42, t);
            LocalPopChoice(n_33);
          }
        else
          {
            t = j_33;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(o_42), q_42), r_42);
          }
      }
    }
  else
    {
      t = d_43(o_42, p_42, n_42, t);
    }
  return(t);
}
static ATerm d_43 (ATerm m_41, ATerm t_41, ATerm u_41, ATerm t)
{
  ATerm v_41 = NULL,y_41 = NULL,u_4 = NULL,e_42 = NULL,f_42 = NULL,g_42 = NULL,h_42 = NULL;
  t = SSLgetAnnotations(u_41);
  v_41 = t;
  t = t_41;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_42 = ATgetFirst((ATermList) t);
      h_42 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = e_42;
  if(match_cons(t, sym__2))
    {
      f_42 = ATgetArgument(t, 0);
      g_42 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm s_33 = t;
    int v_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = g_42;
        if((f_42 != t))
          {
            _fail(t);
          }
        t = h_42;
        LocalPopChoice(v_33);
      }
    else
      {
        t = s_33;
        t = t_41;
        t = p_9(f_42, g_42, h_42, t);
      }
  }
  y_41 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_41, y_41);
  u_4 = t;
  t = SSLsetAnnotations(u_4, v_41);
  return(t);
}
static ATerm p_4 (ATerm t)
{
  ATerm c_43 = NULL;
  if(match_cons(t, sym__2))
    {
      c_43 = ATgetArgument(t, 0);
      if((c_43 != ATgetArgument(t, 1)))
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
  ATerm w_33 = t;
  int x_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(k_4, l_4, o_4, t);
      LocalPopChoice(x_33);
    }
  else
    {
      t = w_33;
      {
        ATerm v_42 = NULL,w_42 = NULL,x_42 = NULL;
        v_42 = t;
        if(match_cons(t, sym__2))
          {
            w_42 = ATgetArgument(t, 0);
            x_42 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = v_42;
        t = k_9(p_4, w_42, x_42, t);
      }
    }
  return(t);
}
static ATerm r_9 (ATerm s_133 (ATerm), ATerm t_133 (ATerm), ATerm u_133 (ATerm), ATerm e_74, ATerm b_74, ATerm i_74, ATerm f_74, ATerm c_74, ATerm d_74, ATerm t)
{
  ATerm e_43 = NULL,h_43 = NULL,i_43 = NULL,j_43 = NULL,k_43 = NULL,l_43 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, e_74, f_74);
  t = s_133(t);
  e_43 = t;
  t = t_133(t);
  h_43 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_43, i_74);
  t = diff_0_0(t);
  i_43 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_43, b_74);
  t = conc_0_0(t);
  j_43 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_43, i_74);
  t = conc_0_0(t);
  k_43 = t;
  t = (ATerm) ATmakeAppl(sym__3, e_74, e_43, c_74);
  t = u_133(t);
  l_43 = t;
  t = (ATerm) ATmakeAppl(sym__5, j_43, k_43, f_74, l_43, d_74);
  return(t);
}
ATerm GnNext_3_0 (ATerm s_133 (ATerm), ATerm t_133 (ATerm), ATerm u_133 (ATerm), ATerm t)
{
  ATerm n_43 = NULL,o_43 = NULL,p_43 = NULL,q_43 = NULL,r_43 = NULL,s_43 = NULL;
  if(match_cons(t, sym__5))
    {
      ATerm y_33 = ATgetArgument(t, 0);
      if(((ATgetType(y_33) == AT_LIST) && !(ATisEmpty(y_33))))
        {
          n_43 = ATgetFirst((ATermList) y_33);
          o_43 = (ATerm) ATgetNext((ATermList) y_33);
        }
      else
        _fail(t);
      p_43 = ATgetArgument(t, 1);
      q_43 = ATgetArgument(t, 2);
      r_43 = ATgetArgument(t, 3);
      s_43 = ATgetArgument(t, 4);
    }
  else
    _fail(t);
  t = r_9(s_133, t_133, u_133, n_43, o_43, p_43, q_43, r_43, s_43, t);
  return(t);
}
ATerm while_not_2_0 (ATerm p_99 (ATerm), ATerm q_99 (ATerm), ATerm t)
{
  static ATerm t_43 (ATerm t);
  static ATerm t_43 (ATerm t)
  {
    ATerm z_33 = t;
    int a_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_99(t);
        LocalPopChoice(a_34);
      }
    else
      {
        t = z_33;
        t = q_99(t);
        t = t_43(t);
      }
    return(t);
  }
  t = t_43(t);
  return(t);
}
ATerm for_3_0 (ATerm s_99 (ATerm), ATerm t_99 (ATerm), ATerm u_99 (ATerm), ATerm t)
{
  t = s_99(t);
  t = while_not_2_0(t_99, u_99, t);
  return(t);
}
static ATerm q_4 (ATerm t)
{
  ATerm x_43 = NULL,y_43 = NULL,z_43 = NULL;
  if(match_cons(t, sym__3))
    {
      x_43 = ATgetArgument(t, 0);
      y_43 = ATgetArgument(t, 1);
      z_43 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__5, x_43, x_43, y_43, z_43, (ATerm) ATempty);
  return(t);
}
static ATerm s_4 (ATerm t)
{
  ATerm c_44 = NULL,d_44 = NULL;
  if(match_cons(t, sym__5))
    {
      ATerm b_34 = ATgetArgument(t, 0);
      if(((ATgetType(b_34) != AT_LIST) || !(ATisEmpty(b_34))))
        _fail(t);
      {
        ATerm g_34 = ATgetArgument(t, 1);
      }
      {
        ATerm h_34 = ATgetArgument(t, 2);
      }
      c_44 = ATgetArgument(t, 3);
      d_44 = ATgetArgument(t, 4);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, c_44, d_44);
  return(t);
}
ATerm graph_nodes_roots_3_0 (ATerm p_133 (ATerm), ATerm q_133 (ATerm), ATerm r_133 (ATerm), ATerm t)
{
  ATerm w_43 = NULL;
  static ATerm v_4 (ATerm t);
  static ATerm v_4 (ATerm t)
  {
    ATerm j_34 = t;
    int k_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = GnNext_3_0(p_133, q_133, r_133, t);
        LocalPopChoice(k_34);
      }
    else
      {
        t = j_34;
        {
          ATerm q_44 = NULL,r_44 = NULL,s_44 = NULL,t_44 = NULL,u_44 = NULL,v_44 = NULL,w_44 = NULL;
          if(match_cons(t, sym__5))
            {
              q_44 = ATgetArgument(t, 0);
              t_44 = ATgetArgument(t, 1);
              u_44 = ATgetArgument(t, 2);
              v_44 = ATgetArgument(t, 3);
              w_44 = ATgetArgument(t, 4);
            }
          else
            _fail(t);
          t = q_44;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              r_44 = ATgetFirst((ATermList) t);
              s_44 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__5, s_44, t_44, u_44, v_44, (ATerm) ATinsert(CheckATermList(w_44), r_44));
        }
      }
    return(t);
  }
  t = for_3_0(q_4, s_4, v_4, t);
  if(match_cons(t, sym__2))
    {
      w_43 = ATgetArgument(t, 0);
      {
        ATerm l_34 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = w_43;
  return(t);
}
ATerm filter_1_0 (ATerm n_114 (ATerm), ATerm t)
{
  ATerm b_46 = NULL,c_46 = NULL,d_46 = NULL;
  b_46 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = b_46;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          c_46 = ATgetFirst((ATermList) t);
          d_46 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm m_34 = t;
        int n_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_15 = NULL,u_15 = NULL,v_15 = NULL,a_5 = NULL;
            t = SSLgetAnnotations(b_46);
            n_15 = t;
            t = c_46;
            t = n_114(t);
            u_15 = t;
            t = d_46;
            t = filter_1_0(n_114, t);
            v_15 = t;
            t = (ATerm) ATinsert(CheckATermList(v_15), u_15);
            a_5 = t;
            t = SSLsetAnnotations(a_5, n_15);
            LocalPopChoice(n_34);
          }
        else
          {
            t = m_34;
            t = d_46;
            t = filter_1_0(n_114, t);
          }
      }
    }
  return(t);
}
static ATerm w_4 (ATerm t)
{
  ATerm o_34 = t;
  if((PushChoice() == 0))
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-I", 0, ATtrue)))
        _fail(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = o_34;
    }
  return(t);
}
static ATerm b_5 (ATerm t)
{
  ATerm t_46 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm q_34 = ATgetArgument(t, 0);
      ATerm d_35 = ATgetArgument(t, 1);
      if(match_cons(d_35, sym_Specification_1))
        {
          t_46 = ATgetArgument(d_35, 0);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  t = s_8(t_46, t);
  return(t);
}
static ATerm c_5 (ATerm t)
{
  ATerm w_46 = NULL,x_46 = NULL;
  if(match_cons(t, sym__3))
    {
      ATerm f_35 = ATgetArgument(t, 0);
      w_46 = ATgetArgument(t, 1);
      x_46 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(x_46), w_46);
  return(t);
}
static ATerm e_5 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_h_35;
  return(t);
}
static ATerm f_5 (ATerm t)
{
  ATerm z_46 = NULL,c_47 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_46 = ATgetFirst((ATermList) t);
      c_47 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, z_46, c_47);
  return(t);
}
static ATerm i_5 (ATerm t)
{
  ATerm d_47 = NULL,e_47 = NULL,f_47 = NULL,k_47 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm j_35 = ATgetArgument(t, 0);
      if(match_cons(j_35, sym__2))
        {
          d_47 = ATgetArgument(j_35, 0);
          e_47 = ATgetArgument(j_35, 1);
        }
      else
        _fail(t);
      {
        ATerm m_35 = ATgetArgument(t, 1);
        if(match_cons(m_35, sym__2))
          {
            f_47 = ATgetArgument(m_35, 0);
            k_47 = ATgetArgument(m_35, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(f_47), d_47), (ATerm) ATinsert(CheckATermList(k_47), e_47));
  return(t);
}
static ATerm u_9 (ATerm w_22, ATerm t)
{
  ATerm h_46 = NULL,i_46 = NULL,j_46 = NULL,k_46 = NULL,l_46 = NULL,m_46 = NULL,i_7 = NULL;
  ATerm o_35 = t;
  int q_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_46 = NULL,o_46 = NULL;
      t = term_w_11;
      n_46 = t;
      t = term_i_30;
      o_46 = t;
      t = term_l_30;
      t = d_10(n_46, o_46, t);
      t = filter_1_0(w_4, t);
      LocalPopChoice(q_35);
    }
  else
    {
      t = o_35;
      t = (ATerm) ATempty;
    }
  h_46 = t;
  t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATinsert(ATempty, w_22), term_y_12, (ATerm) ATempty);
  {
    static ATerm x_4 (ATerm t);
    static ATerm x_4 (ATerm t)
    {
      ATerm p_46 = NULL,q_46 = NULL;
      static ATerm d_5 (ATerm t);
      static ATerm d_5 (ATerm t)
      {
        t = (ATerm) ATinsert(CheckATermList(h_46), term_a_14);
        return(t);
      }
      q_46 = t;
      t = SSL_explode_term(q_46);
      if(match_cons(t, sym__2))
        {
          ATerm r_35 = ATgetArgument(t, 0);
          if((ATgetSymbol((ATermAppl) r_35) != ATmakeSymbol("", 0, ATtrue)))
            _fail(t);
          {
            ATerm s_35 = ATgetArgument(t, 1);
            if(((ATgetType(s_35) == AT_LIST) && !(ATisEmpty(s_35))))
              {
                p_46 = ATgetFirst((ATermList) s_35);
                {
                  ATerm u_35 = (ATerm) ATgetNext((ATermList) s_35);
                }
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = p_46;
      t = get_module_1_0(d_5, t);
      return(t);
    }
    t = graph_nodes_roots_3_0(x_4, b_5, c_5, t);
  }
  t = genzip_4_0(e_5, f_5, i_5, _id, t);
  m_46 = t;
  if(match_cons(t, sym__2))
    {
      j_46 = ATgetArgument(t, 0);
      k_46 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_46);
  i_46 = t;
  t = k_46;
  t = flatten_stratego_0_0(t);
  l_46 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_46, l_46);
  i_7 = t;
  t = SSLsetAnnotations(i_7, i_46);
  return(t);
}
static ATerm x_9 (ATerm c_63, ATerm d_63, ATerm t)
{
  ATerm m_47 = NULL,n_47 = NULL;
  n_47 = t;
  {
    ATerm w_35 = t;
    int x_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, c_63, d_63);
        t = d_10(c_63, d_63, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm a_36 = ATgetFirst((ATermList) t);
            m_47 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(x_35);
        {
          ATerm o_47 = NULL;
          t = (ATerm) ATmakeAppl(sym__3, c_63, d_63, m_47);
          t = lookup_table_0_1(c_63, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              o_47 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = h_10(d_63, m_47, o_47, t);
          t = (ATerm) ATmakeAppl(sym__3, c_63, d_63, m_47);
        }
      }
    else
      {
        t = w_35;
        {
          ATerm q_47 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, c_63, d_63);
          t = lookup_table_0_1(c_63, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              q_47 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = a_10(d_63, q_47, t);
          t = (ATerm) ATmakeAppl(sym__2, c_63, d_63);
        }
      }
  }
  t = n_47;
  return(t);
}
ATerm end_scope_1_0 (ATerm t_119 (ATerm), ATerm t)
{
  ATerm s_47 = NULL,t_47 = NULL,u_47 = NULL,v_47 = NULL,w_47 = NULL,x_47 = NULL,z_47 = NULL;
  v_47 = t;
  t = t_119(t);
  u_47 = t;
  {
    ATerm b_36 = t;
    int c_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_48 = NULL;
        t = term_o_12;
        b_48 = t;
        t = (ATerm) ATmakeAppl(sym__2, u_47, term_o_12);
        t = d_10(u_47, b_48, t);
        {
          ATerm d_36 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = d_36;
            }
        }
        LocalPopChoice(c_36);
      }
    else
      {
        t = b_36;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_47 = ATgetFirst((ATermList) t);
      s_47 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, u_47, term_o_12, s_47);
  t = lookup_table_0_1(u_47, t);
  z_47 = t;
  t = term_o_12;
  w_47 = t;
  t = z_47;
  if(match_cons(t, sym_Hashtable_1))
    {
      x_47 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = h_10(w_47, s_47, x_47, t);
  t = t_47;
  {
    static ATerm m_5 (ATerm t);
    static ATerm m_5 (ATerm t)
    {
      ATerm c_48 = NULL;
      c_48 = t;
      t = (ATerm) ATmakeAppl(sym__2, u_47, c_48);
      t = x_9(u_47, c_48, t);
      return(t);
    }
    t = map_1_0(m_5, t);
  }
  t = v_47;
  return(t);
}
ATerm restore_always_2_0 (ATerm u_98 (ATerm), ATerm v_98 (ATerm), ATerm t)
{
  ATerm e_36 = t;
  int f_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = u_98(t);
      t = v_98(t);
      LocalPopChoice(f_36);
    }
  else
    {
      t = e_36;
      t = v_98(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm s_119 (ATerm), ATerm t)
{
  ATerm e_48 = NULL,f_48 = NULL,i_48 = NULL,o_48 = NULL,v_48 = NULL,w_48 = NULL,x_48 = NULL;
  f_48 = t;
  t = s_119(t);
  e_48 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_48, term_o_12);
  {
    ATerm k_36 = t;
    int l_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_49 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm q_36 = ATgetArgument(t, 0);
            ATerm v_36 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_o_12;
        e_49 = t;
        t = (ATerm) ATmakeAppl(sym__2, e_48, term_o_12);
        t = d_10(e_48, e_49, t);
        LocalPopChoice(l_36);
      }
    else
      {
        t = k_36;
        t = (ATerm) ATempty;
      }
  }
  i_48 = t;
  t = (ATerm) ATmakeAppl(sym__3, e_48, term_o_12, (ATerm) ATinsert(CheckATermList(i_48), (ATerm) ATempty));
  t = lookup_table_0_1(e_48, t);
  x_48 = t;
  t = term_o_12;
  o_48 = t;
  t = (ATerm) ATinsert(CheckATermList(i_48), (ATerm) ATempty);
  v_48 = t;
  t = x_48;
  if(match_cons(t, sym_Hashtable_1))
    {
      w_48 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = h_10(o_48, v_48, w_48, t);
  t = f_48;
  return(t);
}
static ATerm n_5 (ATerm t)
{
  t = term_w_12;
  return(t);
}
static ATerm p_5 (ATerm t)
{
  ATerm p_49 = NULL;
  p_49 = t;
  {
    ATerm w_36 = t;
    int x_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(p_49);
        LocalPopChoice(x_36);
      }
    else
      {
        t = w_36;
        t = p_49;
      }
  }
  return(t);
}
static ATerm s_5 (ATerm t)
{
  t = term_w_12;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm i_132 (ATerm), ATerm t)
{
  ATerm j_49 = NULL;
  static ATerm o_5 (ATerm t);
  static ATerm o_5 (ATerm t)
  {
    ATerm k_49 = NULL;
    k_49 = t;
    {
      ATerm z_36 = t;
      int a_37 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm l_49 = NULL,m_49 = NULL;
          t = term_w_12;
          l_49 = t;
          t = term_o_12;
          m_49 = t;
          t = term_c_37;
          t = d_10(l_49, m_49, t);
          LocalPopChoice(a_37);
        }
      else
        {
          t = z_36;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
        }
    }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((j_49 != NULL) && (j_49 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          j_49 = ATgetFirst((ATermList) t);
        {
          ATerm f_37 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    t = j_49;
    t = map_1_0(p_5, t);
    t = k_49;
    t = end_scope_1_0(s_5, t);
    return(t);
  }
  t = begin_scope_1_0(n_5, t);
  t = restore_always_2_0(i_132, o_5, t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm s_49 = NULL,t_49 = NULL,w_49 = NULL,x_49 = NULL,y_49 = NULL;
  s_49 = t;
  t = term_y_12;
  t = whoami_0_0(t);
  t_49 = t;
  t = term_p_23;
  x_49 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_j_37), t_49), term_i_37);
  y_49 = t;
  t = SSL_printnl(x_49, y_49);
  t = term_e_16;
  w_49 = t;
  t = SSL_exit(w_49);
  t = s_49;
  return(t);
}
static ATerm v_5 (ATerm t)
{
  ATerm a_50 = NULL;
  a_50 = t;
  if(match_string(t, "-k"))
    {
      t = a_50;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = a_50;
    }
  return(t);
}
static ATerm y_5 (ATerm t)
{
  ATerm d_50 = NULL,f_50 = NULL,g_50 = NULL;
  d_50 = t;
  t = SSL_string_to_int(d_50);
  f_50 = t;
  t = term_q_15;
  g_50 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_q_15, f_50);
  t = g_10(g_50, f_50, t);
  t = d_50;
  return(t);
}
static ATerm c_6 (ATerm t)
{
  t = term_k_37;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(v_5, y_5, c_6, t);
  return(t);
}
static ATerm i_6 (ATerm t)
{
  ATerm i_50 = NULL;
  i_50 = t;
  if(match_string(t, "-S"))
    {
      t = i_50;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = i_50;
    }
  return(t);
}
static ATerm l_6 (ATerm t)
{
  ATerm k_50 = NULL,n_50 = NULL;
  t = term_k_16;
  k_50 = t;
  t = term_l_37;
  n_50 = t;
  t = term_m_37;
  t = g_10(k_50, n_50, t);
  t = term_n_37;
  return(t);
}
static ATerm t_6 (ATerm t)
{
  t = term_o_37;
  return(t);
}
static ATerm v_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm w_6 (ATerm t)
{
  ATerm o_50 = NULL,p_50 = NULL,q_50 = NULL;
  o_50 = t;
  t = SSL_string_to_int(o_50);
  p_50 = t;
  t = term_k_16;
  q_50 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_16, p_50);
  t = g_10(q_50, p_50, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, o_50);
  return(t);
}
static ATerm y_6 (ATerm t)
{
  t = term_p_37;
  return(t);
}
static ATerm z_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm a_7 (ATerm t)
{
  ATerm s_50 = NULL,t_50 = NULL;
  t = term_q_37;
  s_50 = t;
  t = term_y_12;
  t_50 = t;
  t = term_r_37;
  t = g_10(s_50, t_50, t);
  t = term_t_37;
  return(t);
}
static ATerm b_7 (ATerm t)
{
  t = term_p_38;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm q_38 = t;
  int r_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(i_6, l_6, t_6, t);
      LocalPopChoice(r_38);
    }
  else
    {
      t = q_38;
      {
        ATerm y_38 = t;
        int b_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(v_6, w_6, y_6, t);
            LocalPopChoice(b_39);
          }
        else
          {
            t = y_38;
            t = Option_3_0(z_6, a_7, b_7, t);
          }
      }
    }
  return(t);
}
static ATerm g_10 (ATerm g_75, ATerm h_75, ATerm t)
{
  ATerm u_50 = NULL,v_50 = NULL;
  t = term_w_11;
  u_50 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_w_11, g_75, h_75);
  t = lookup_table_0_1(u_50, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      v_50 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = h_10(g_75, h_75, v_50, t);
  t = (ATerm) ATmakeAppl(sym__3, term_w_11, g_75, h_75);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t)
{
  ATerm g_51 = NULL,h_51 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm i_51 = NULL,j_51 = NULL,l_51 = NULL;
      t = term_y_12;
      t = h_0(t);
      i_51 = t;
      t = term_c_39;
      j_51 = t;
      t = term_d_39;
      l_51 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_c_39, term_d_39, i_51);
      t = e_10(j_51, l_51, i_51, t);
      _fail(t);
    }
  else
    {
      ATerm u_51 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          g_51 = ATgetFirst((ATermList) t);
          h_51 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = g_51;
      t = d_0(t);
      t = term_y_12;
      t = g_0(t);
      u_51 = t;
      t = (ATerm) ATinsert(CheckATermList(h_51), u_51);
    }
  return(t);
}
static ATerm c_7 (ATerm t)
{
  ATerm w_51 = NULL;
  w_51 = t;
  if(match_string(t, "-o"))
    {
      t = w_51;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = w_51;
    }
  return(t);
}
static ATerm d_7 (ATerm t)
{
  ATerm y_51 = NULL,z_51 = NULL;
  y_51 = t;
  t = term_x_11;
  z_51 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_11, y_51);
  t = g_10(z_51, y_51, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, y_51);
  return(t);
}
static ATerm g_7 (ATerm t)
{
  t = term_e_39;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(c_7, d_7, g_7, t);
  return(t);
}
static ATerm j_7 (ATerm t)
{
  ATerm e_52 = NULL;
  e_52 = t;
  if(match_string(t, "-i"))
    {
      t = e_52;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = e_52;
    }
  return(t);
}
static ATerm l_7 (ATerm t)
{
  ATerm f_52 = NULL,g_52 = NULL;
  f_52 = t;
  t = term_t_27;
  g_52 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_27, f_52);
  t = g_10(g_52, f_52, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, f_52);
  return(t);
}
static ATerm m_7 (ATerm t)
{
  t = term_f_39;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(j_7, l_7, m_7, t);
  return(t);
}
static ATerm e_10 (ATerm x_62, ATerm y_62, ATerm w_62, ATerm t)
{
  ATerm i_52 = NULL,j_52 = NULL,m_52 = NULL,n_52 = NULL,o_52 = NULL;
  i_52 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_62, y_62);
  {
    ATerm g_39 = t;
    int h_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm i_39 = ATgetArgument(t, 0);
            ATerm j_39 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, x_62, y_62);
        t = d_10(x_62, y_62, t);
        LocalPopChoice(h_39);
      }
    else
      {
        t = g_39;
        t = (ATerm) ATempty;
      }
  }
  j_52 = t;
  t = (ATerm) ATmakeAppl(sym__3, x_62, y_62, (ATerm) ATinsert(CheckATermList(j_52), w_62));
  t = lookup_table_0_1(x_62, t);
  o_52 = t;
  t = (ATerm) ATinsert(CheckATermList(j_52), w_62);
  m_52 = t;
  t = o_52;
  if(match_cons(t, sym_Hashtable_1))
    {
      n_52 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = h_10(y_62, m_52, n_52, t);
  t = i_52;
  return(t);
}
ATerm ArgOption_3_0 (ATerm m_0 (ATerm), ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm t)
{
  ATerm z_52 = NULL,f_53 = NULL,g_53 = NULL,h_53 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm i_53 = NULL,j_53 = NULL,m_53 = NULL;
      t = term_y_12;
      t = p_0(t);
      i_53 = t;
      t = term_c_39;
      j_53 = t;
      t = term_d_39;
      m_53 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_c_39, term_d_39, i_53);
      t = e_10(j_53, m_53, i_53, t);
      _fail(t);
    }
  else
    {
      ATerm q_53 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          z_52 = ATgetFirst((ATermList) t);
          f_53 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = f_53;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          g_53 = ATgetFirst((ATermList) t);
          h_53 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = z_52;
      t = m_0(t);
      t = g_53;
      t = o_0(t);
      q_53 = t;
      t = (ATerm) ATinsert(CheckATermList(h_53), q_53);
    }
  return(t);
}
ATerm at_end_1_0 (ATerm b_107 (ATerm), ATerm t)
{
  static ATerm w_54 (ATerm t);
  static ATerm w_54 (ATerm t)
  {
    ATerm r_54 = NULL,s_54 = NULL,t_54 = NULL;
    t_54 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        r_54 = ATgetFirst((ATermList) t);
        s_54 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm p_16 = NULL,v_16 = NULL,k_7 = NULL;
          t = SSLgetAnnotations(t_54);
          p_16 = t;
          t = s_54;
          t = w_54(t);
          v_16 = t;
          t = (ATerm) ATinsert(CheckATermList(v_16), r_54);
          k_7 = t;
          t = SSLsetAnnotations(k_7, p_16);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = t_54;
        t = b_107(t);
      }
    return(t);
  }
  t = w_54(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm u_53 = NULL,v_53 = NULL,w_53 = NULL;
  u_53 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = u_53;
    }
  else
    {
      static ATerm o_7 (ATerm t);
      static ATerm o_7 (ATerm t)
      {
        t = not_null(w_53);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_53 = ATgetFirst((ATermList) t);
          if(((w_53 != NULL) && (w_53 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            w_53 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = v_53;
      t = at_end_1_0(o_7, t);
    }
  return(t);
}
static ATerm m_55 (ATerm b_55, ATerm t)
{
  ATerm d_55 = NULL;
  t = SSL_explode_term(b_55);
  if(match_cons(t, sym__2))
    {
      ATerm k_39 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) k_39) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      d_55 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_55;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm f_55 = NULL,g_55 = NULL,j_55 = NULL;
  j_55 = t;
  if(match_cons(t, sym__2))
    {
      f_55 = ATgetArgument(t, 0);
      g_55 = ATgetArgument(t, 1);
      {
        ATerm l_39 = t;
        int m_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm q_7 (ATerm t);
            static ATerm q_7 (ATerm t)
            {
              t = g_55;
              return(t);
            }
            t = f_55;
            t = at_end_1_0(q_7, t);
            LocalPopChoice(m_39);
          }
        else
          {
            t = l_39;
            t = m_55(j_55, t);
          }
      }
    }
  else
    {
      t = m_55(j_55, t);
    }
  return(t);
}
static ATerm v_9 (ATerm n_75, ATerm o_75, ATerm t)
{
  ATerm p_55 = NULL,q_55 = NULL,r_55 = NULL,s_55 = NULL;
  t = n_75;
  {
    ATerm n_39 = t;
    int o_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_55 = NULL;
        t = term_w_11;
        u_55 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_w_11, n_75);
        t = d_10(u_55, n_75, t);
        LocalPopChoice(o_39);
      }
    else
      {
        t = n_39;
        t = (ATerm) ATempty;
      }
  }
  q_55 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_55, o_75);
  t = conc_0_0(t);
  p_55 = t;
  t = term_w_11;
  r_55 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_w_11, n_75, p_55);
  t = lookup_table_0_1(r_55, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      s_55 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = h_10(n_75, p_55, s_55, t);
  t = (ATerm) ATmakeAppl(sym__3, term_w_11, n_75, p_55);
  return(t);
}
static ATerm t_7 (ATerm t)
{
  ATerm y_55 = NULL;
  y_55 = t;
  if(match_string(t, "-I"))
    {
      t = y_55;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--Include", 0, ATtrue)))
        _fail(t);
      t = y_55;
    }
  return(t);
}
static ATerm u_7 (ATerm t)
{
  ATerm z_55 = NULL,a_56 = NULL,b_56 = NULL;
  z_55 = t;
  t = term_i_30;
  a_56 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, z_55), term_i_30);
  b_56 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_i_30, (ATerm) ATinsert(ATinsert(ATempty, z_55), term_i_30));
  t = v_9(a_56, b_56, t);
  t = term_y_12;
  return(t);
}
static ATerm w_7 (ATerm t)
{
  t = term_r_39;
  return(t);
}
static ATerm x_7 (ATerm t)
{
  ATerm c_56 = NULL;
  c_56 = t;
  if(match_string(t, "--nodep"))
    {
      t = c_56;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-nodep", 0, ATtrue)))
        _fail(t);
      t = c_56;
    }
  return(t);
}
static ATerm z_7 (ATerm t)
{
  ATerm d_56 = NULL,f_56 = NULL;
  t = term_y_13;
  d_56 = t;
  t = term_t_39;
  f_56 = t;
  t = term_u_39;
  t = g_10(d_56, f_56, t);
  t = term_y_12;
  return(t);
}
static ATerm a_8 (ATerm t)
{
  t = term_y_39;
  return(t);
}
static ATerm b_8 (ATerm t)
{
  ATerm g_56 = NULL;
  g_56 = t;
  if(match_string(t, "--dep"))
    {
      t = g_56;
    }
  else
    {
      if(match_string(t, "-d"))
        {
          t = g_56;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-dep", 0, ATtrue)))
            _fail(t);
          t = g_56;
        }
    }
  return(t);
}
static ATerm c_8 (ATerm t)
{
  ATerm h_56 = NULL,i_56 = NULL;
  h_56 = t;
  t = term_s_13;
  i_56 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_13, h_56);
  t = g_10(i_56, h_56, t);
  t = term_y_12;
  return(t);
}
static ATerm d_8 (ATerm t)
{
  t = term_z_39;
  return(t);
}
static ATerm e_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--imports", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm h_8 (ATerm t)
{
  ATerm j_56 = NULL,k_56 = NULL;
  t = term_a_40;
  j_56 = t;
  t = term_y_12;
  k_56 = t;
  t = term_b_40;
  t = g_10(j_56, k_56, t);
  t = term_y_12;
  return(t);
}
static ATerm i_8 (ATerm t)
{
  t = term_c_40;
  return(t);
}
static ATerm l_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--slack", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm p_8 (ATerm t)
{
  ATerm t_56 = NULL,w_56 = NULL;
  t = term_i_32;
  t_56 = t;
  t = term_y_12;
  w_56 = t;
  t = term_h_40;
  t = g_10(t_56, w_56, t);
  t = term_y_12;
  return(t);
}
static ATerm r_8 (ATerm t)
{
  t = term_i_40;
  return(t);
}
static ATerm x_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--asfix", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm l_9 (ATerm t)
{
  ATerm x_56 = NULL,y_56 = NULL;
  t = term_q_29;
  x_56 = t;
  t = term_t_39;
  y_56 = t;
  t = term_j_40;
  t = g_10(x_56, y_56, t);
  t = term_y_12;
  return(t);
}
static ATerm m_9 (ATerm t)
{
  t = term_n_40;
  return(t);
}
ATerm pack_stratego_options_0_0 (ATerm t)
{
  ATerm p_40 = t;
  int t_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ArgOption_3_0(t_7, u_7, w_7, t);
      LocalPopChoice(t_40);
    }
  else
    {
      t = p_40;
      {
        ATerm u_40 = t;
        int y_40 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Option_3_0(x_7, z_7, a_8, t);
            LocalPopChoice(y_40);
          }
        else
          {
            t = u_40;
            {
              ATerm z_40 = t;
              int a_41 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = ArgOption_3_0(b_8, c_8, d_8, t);
                  LocalPopChoice(a_41);
                }
              else
                {
                  t = z_40;
                  {
                    ATerm b_41 = t;
                    int c_41 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Option_3_0(e_8, h_8, i_8, t);
                        LocalPopChoice(c_41);
                      }
                    else
                      {
                        t = b_41;
                        {
                          ATerm d_41 = t;
                          int e_41 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Option_3_0(l_8, p_8, r_8, t);
                              LocalPopChoice(e_41);
                            }
                          else
                            {
                              t = d_41;
                              t = Option_3_0(x_8, l_9, m_9, t);
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
  ATerm z_56 = NULL,a_57 = NULL,b_57 = NULL,c_57 = NULL;
  t = report_run_time_0_0(t);
  t = term_y_12;
  t = whoami_0_0(t);
  z_56 = t;
  t = term_p_23;
  b_57 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_h_41), z_56);
  c_57 = t;
  t = SSL_printnl(b_57, c_57);
  t = term_e_16;
  a_57 = t;
  t = SSL_exit(a_57);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm g_57 = NULL,h_57 = NULL;
  t = term_w_11;
  g_57 = t;
  t = term_i_41;
  h_57 = t;
  t = term_n_41;
  t = d_10(g_57, h_57, t);
  return(t);
}
static ATerm y_9 (ATerm z_42, ATerm a_43, ATerm t)
{
  ATerm o_41 = t;
  int p_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(z_42, a_43);
      LocalPopChoice(p_41);
    }
  else
    {
      t = o_41;
      t = SSL_addr(z_42, a_43);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm j_113 (ATerm), ATerm k_113 (ATerm), ATerm t)
{
  ATerm j_57 = NULL,l_57 = NULL,m_57 = NULL;
  j_57 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = j_57;
      t = j_113(t);
    }
  else
    {
      ATerm r_57 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          l_57 = ATgetFirst((ATermList) t);
          m_57 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = m_57;
      t = foldr_2_0(j_113, k_113, t);
      r_57 = t;
      t = (ATerm) ATmakeAppl(sym__2, l_57, r_57);
      t = k_113(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm n_9 (ATerm t)
{
  t = term_l_37;
  return(t);
}
static ATerm o_9 (ATerm t)
{
  ATerm h_17 = NULL,l_17 = NULL;
  if(match_cons(t, sym__2))
    {
      h_17 = ATgetArgument(t, 0);
      l_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_9(h_17, l_17, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm u_57 = NULL,b_17 = NULL,c_17 = NULL;
  t = times_0_0(t);
  c_17 = t;
  t = SSL_explode_term(c_17);
  if(match_cons(t, sym__2))
    {
      ATerm q_41 = ATgetArgument(t, 0);
      b_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_17;
  t = foldr_2_0(n_9, o_9, t);
  u_57 = t;
  t = SSL_TicksToSeconds(u_57);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm i_58 = NULL,j_58 = NULL,k_58 = NULL;
  i_58 = t;
  if(match_cons(t, sym__2))
    {
      j_58 = ATgetArgument(t, 0);
      k_58 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm r_41 = t;
    int s_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = k_58;
        if((j_58 != t))
          {
            _fail(t);
          }
        t = i_58;
        LocalPopChoice(s_41);
      }
    else
      {
        t = r_41;
        t = (ATerm) ATmakeAppl(sym__2, j_58, k_58);
        {
          ATerm w_41 = t;
          int x_41 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(j_58, k_58);
              LocalPopChoice(x_41);
            }
          else
            {
              t = w_41;
              t = SSL_gtr(j_58, k_58);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, j_58, k_58);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm h_123 (ATerm), ATerm t)
{
  ATerm p_58 = NULL;
  p_58 = t;
  {
    ATerm z_41 = t;
    int a_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_58 = NULL,t_58 = NULL,u_58 = NULL;
        t = term_w_11;
        t_58 = t;
        t = term_k_16;
        u_58 = t;
        t = term_o_16;
        t = d_10(t_58, u_58, t);
        s_58 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_58, term_e_16);
        t = geq_0_0(t);
        t = p_58;
        t = h_123(t);
        LocalPopChoice(a_42);
      }
    else
      {
        t = z_41;
        t = p_58;
      }
  }
  return(t);
}
static ATerm q_9 (ATerm t)
{
  ATerm y_58 = NULL,b_59 = NULL,e_59 = NULL,f_59 = NULL;
  t = run_time_0_0(t);
  y_58 = t;
  t = term_y_12;
  t = whoami_0_0(t);
  b_59 = t;
  t = term_p_23;
  e_59 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_b_42), y_58), term_y_16), b_59);
  f_59 = t;
  t = SSL_printnl(e_59, f_59);
  t = (ATerm) ATmakeAppl(sym__2, term_p_23, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_b_42), y_58), term_y_16), b_59));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(q_9, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm m_59 = NULL;
  t = report_run_time_0_0(t);
  t = term_l_37;
  m_59 = t;
  t = SSL_exit(m_59);
  return(t);
}
static ATerm s_9 (ATerm t)
{
  ATerm b_60 = NULL,c_60 = NULL;
  c_60 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = c_60;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          b_60 = ATgetArgument(t, 0);
          {
            ATerm n_18 = NULL,n_7 = NULL;
            t = SSLgetAnnotations(c_60);
            n_18 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, b_60);
            n_7 = t;
            t = SSLsetAnnotations(n_7, n_18);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = c_60;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm v_124 (ATerm), ATerm t)
{
  ATerm c_42 = t;
  int d_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_59 = NULL,s_59 = NULL;
      t = term_w_11;
      p_59 = t;
      t = term_i_42;
      s_59 = t;
      t = term_j_42;
      t = d_10(p_59, s_59, t);
      LocalPopChoice(d_42);
    }
  else
    {
      t = c_42;
      t = fetch_1_0(s_9, t);
    }
  t = v_124(t);
  return(t);
}
static ATerm h_10 (ATerm p_67, ATerm q_67, ATerm r_67, ATerm t)
{
  ATerm e_60 = NULL;
  t = SSL_hashtable_put(r_67, p_67, q_67);
  e_60 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, e_60);
  return(t);
}
static ATerm i_10 (ATerm s_67, ATerm t_67, ATerm t)
{
  t = SSL_hashtable_get(t_67, s_67);
  return(t);
}
ATerm lookup_table_0_1 (ATerm j_64, ATerm t)
{
  ATerm y_60 = NULL;
  t = table_hashtable_0_0(t);
  y_60 = t;
  {
    ATerm k_42 = t;
    int l_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_18 = NULL;
        t = y_60;
        if(match_cons(t, sym_Hashtable_1))
          {
            z_18 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = i_10(j_64, z_18, t);
        LocalPopChoice(l_42);
      }
    else
      {
        t = k_42;
        {
          ATerm h_19 = NULL;
          t = j_64;
          t = table_create_0_0(t);
          t = y_60;
          if(match_cons(t, sym_Hashtable_1))
            {
              h_19 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = i_10(j_64, h_19, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm x_67, ATerm y_67, ATerm t)
{
  ATerm f_61 = NULL;
  t = SSL_hashtable_create(x_67, y_67);
  f_61 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, f_61);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm g_61 = NULL,h_61 = NULL,i_61 = NULL,m_61 = NULL,n_61 = NULL;
  g_61 = t;
  t = term_m_42;
  m_61 = t;
  t = term_s_42;
  n_61 = t;
  t = g_61;
  t = new_hashtable_0_2(m_61, n_61, t);
  h_61 = t;
  t = g_61;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      i_61 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = h_10(g_61, h_61, i_61, t);
  t = g_61;
  return(t);
}
static ATerm a_10 (ATerm u_67, ATerm v_67, ATerm t)
{
  ATerm q_61 = NULL;
  t = SSL_hashtable_remove(v_67, u_67);
  q_61 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, q_61);
  return(t);
}
static ATerm b_10 (ATerm z_67, ATerm t)
{
  ATerm s_61 = NULL;
  t = SSL_hashtable_destroy(z_67);
  s_61 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, s_61);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm t_61 = NULL;
  t = SSL_table_hashtable();
  t_61 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, t_61);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm u_61 = NULL,w_61 = NULL,z_61 = NULL,a_62 = NULL;
  u_61 = t;
  t = table_hashtable_0_0(t);
  w_61 = t;
  t = lookup_table_0_1(u_61, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      a_62 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = b_10(a_62, t);
  t = w_61;
  if(match_cons(t, sym_Hashtable_1))
    {
      z_61 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_10(u_61, z_61, t);
  t = u_61;
  return(t);
}
ATerm reverse_acc_2_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm c_62 = NULL,d_62 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_62 = ATgetFirst((ATermList) t);
      d_62 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm m_62 = NULL,n_62 = NULL;
        static ATerm t_9 (ATerm t);
        static ATerm t_9 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(m_62)), not_null(n_62));
          return(t);
        }
        t = d_62;
        t = l_0(t);
        if(((m_62 != NULL) && (m_62 != t)))
          _fail(t);
        else
          m_62 = t;
        t = c_62;
        t = j_0(t);
        if(((n_62 != NULL) && (n_62 != t)))
          _fail(t);
        else
          n_62 = t;
        t = d_62;
        t = reverse_acc_2_0(j_0, t_9, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_y_12;
      t = l_0(t);
    }
  return(t);
}
static ATerm z_9 (ATerm t)
{
  ATerm t_62 = NULL,v_62 = NULL,z_62 = NULL,r_7 = NULL;
  z_62 = t;
  if(match_cons(t, sym_Program_1))
    {
      v_62 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_62);
  t_62 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, v_62);
  r_7 = t;
  t = SSLsetAnnotations(r_7, t_62);
  return(t);
}
static ATerm c_10 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm f_10 (ATerm t)
{
  ATerm e_63 = NULL;
  e_63 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, e_63), term_t_42);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm p_62 = NULL,q_62 = NULL;
  ATerm u_42 = t;
  int y_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_62 = NULL,s_62 = NULL;
      t = term_w_11;
      r_62 = t;
      t = term_i_41;
      s_62 = t;
      t = term_n_41;
      t = d_10(r_62, s_62, t);
      LocalPopChoice(y_42);
    }
  else
    {
      t = u_42;
      t = fetch_1_0(z_9, t);
    }
  t = term_b_43;
  t = echo_0_0(t);
  t = term_c_39;
  p_62 = t;
  t = term_d_39;
  q_62 = t;
  t = term_m_43;
  t = d_10(p_62, q_62, t);
  t = reverse_acc_2_0(_id, c_10, t);
  t = map_1_0(f_10, t);
  return(t);
}
ATerm fetch_1_0 (ATerm u_106 (ATerm), ATerm t)
{
  static ATerm t_64 (ATerm t);
  static ATerm t_64 (ATerm t)
  {
    ATerm o_64 = NULL,p_64 = NULL,s_64 = NULL;
    o_64 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        p_64 = ATgetFirst((ATermList) t);
        s_64 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm u_43 = t;
      int v_43 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm p_19 = NULL,u_19 = NULL,v_7 = NULL;
          t = SSLgetAnnotations(o_64);
          p_19 = t;
          t = p_64;
          t = u_106(t);
          u_19 = t;
          t = (ATerm) ATinsert(CheckATermList(s_64), u_19);
          v_7 = t;
          t = SSLsetAnnotations(v_7, p_19);
          LocalPopChoice(v_43);
        }
      else
        {
          t = u_43;
          {
            ATerm i_20 = NULL,l_20 = NULL,y_7 = NULL;
            t = SSLgetAnnotations(o_64);
            i_20 = t;
            t = s_64;
            t = t_64(t);
            l_20 = t;
            t = (ATerm) ATinsert(CheckATermList(l_20), p_64);
            y_7 = t;
            t = SSLsetAnnotations(y_7, i_20);
          }
        }
    }
    return(t);
  }
  t = t_64(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm x_64 = NULL,b_65 = NULL,c_65 = NULL;
  x_64 = t;
  {
    ATerm a_44 = t;
    int b_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = x_64;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm e_44 = ATgetFirst((ATermList) t);
                ATerm f_44 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = x_64;
          }
        LocalPopChoice(b_44);
      }
    else
      {
        t = a_44;
        t = (ATerm) ATinsert(ATempty, x_64);
      }
  }
  b_65 = t;
  t = term_c_12;
  c_65 = t;
  t = SSL_printnl(c_65, b_65);
  t = x_64;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm k_65 = NULL,l_65 = NULL;
  t = term_w_11;
  k_65 = t;
  t = term_i_41;
  l_65 = t;
  t = term_n_41;
  t = d_10(k_65, l_65, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm l_10 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm m_10 (ATerm t)
{
  ATerm m_65 = NULL,n_65 = NULL;
  t = term_g_44;
  m_65 = t;
  t = term_y_12;
  n_65 = t;
  t = term_h_44;
  t = g_10(m_65, n_65, t);
  return(t);
}
static ATerm n_10 (ATerm t)
{
  t = term_i_44;
  return(t);
}
static ATerm q_10 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm r_10 (ATerm t)
{
  ATerm t_65 = NULL,v_65 = NULL,w_65 = NULL,x_65 = NULL;
  t = term_g_44;
  w_65 = t;
  t = term_y_12;
  x_65 = t;
  t = term_h_44;
  t = g_10(w_65, x_65, t);
  t = term_j_44;
  t_65 = t;
  t = term_y_12;
  v_65 = t;
  t = term_k_44;
  t = g_10(t_65, v_65, t);
  t = term_m_44;
  return(t);
}
static ATerm s_10 (ATerm t)
{
  t = term_o_44;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm p_44 = t;
  int x_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(l_10, m_10, n_10, t);
      LocalPopChoice(x_44);
    }
  else
    {
      t = p_44;
      t = Option_3_0(q_10, r_10, s_10, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm p_75 (ATerm), ATerm q_75 (ATerm), ATerm t)
{
  ATerm y_65 = NULL,b_66 = NULL,c_66 = NULL,d_66 = NULL,e_66 = NULL,f_66 = NULL,q_8 = NULL;
  f_66 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_66 = ATgetFirst((ATermList) t);
      c_66 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_66);
  y_65 = t;
  t = b_66;
  t = p_75(t);
  d_66 = t;
  t = c_66;
  t = q_75(t);
  e_66 = t;
  t = (ATerm) ATinsert(CheckATermList(e_66), d_66);
  q_8 = t;
  t = SSLsetAnnotations(q_8, y_65);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm m_127 (ATerm), ATerm t)
{
  ATerm k_66 = NULL,l_66 = NULL,m_66 = NULL,n_66 = NULL,p_66 = NULL,q_66 = NULL,v_8 = NULL;
  k_66 = t;
  {
    ATerm y_44 = t;
    int z_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_a_45;
        t = m_127(t);
        LocalPopChoice(z_44);
      }
    else
      {
        t = y_44;
      }
  }
  t = k_66;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_66 = ATgetFirst((ATermList) t);
      n_66 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_66);
  l_66 = t;
  t = term_i_41;
  q_66 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_i_41, m_66);
  t = g_10(q_66, m_66, t);
  t = n_66;
  {
    static ATerm a_67 (ATerm t);
    static ATerm a_67 (ATerm t)
    {
      ATerm b_45 = t;
      int c_45 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm d_45 = t;
          int e_45 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm t_66 = NULL;
              t_66 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = t_66;
              LocalPopChoice(e_45);
            }
          else
            {
              t = d_45;
              t = m_127(t);
              t = Cons_2_0(_id, a_67, t);
            }
          LocalPopChoice(c_45);
        }
      else
        {
          t = b_45;
          {
            ATerm w_66 = NULL,x_66 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                w_66 = ATgetFirst((ATermList) t);
                x_66 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(x_66), (ATerm) ATmakeAppl(sym_Undefined_1, w_66));
          }
        }
      return(t);
    }
    t = a_67(t);
  }
  p_66 = t;
  t = (ATerm) ATinsert(CheckATermList(p_66), (ATerm) ATmakeAppl(sym_Program_1, m_66));
  v_8 = t;
  t = SSLsetAnnotations(v_8, l_66);
  return(t);
}
static ATerm w_10 (ATerm t)
{
  ATerm n_67 = NULL;
  n_67 = t;
  if(match_string(t, "--help"))
    {
      t = n_67;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = n_67;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = n_67;
        }
    }
  return(t);
}
static ATerm x_10 (ATerm t)
{
  ATerm o_67 = NULL,a_68 = NULL;
  t = term_i_42;
  o_67 = t;
  t = term_y_12;
  a_68 = t;
  t = term_f_45;
  t = g_10(o_67, a_68, t);
  t = term_g_45;
  return(t);
}
static ATerm b_11 (ATerm t)
{
  t = term_h_45;
  return(t);
}
static ATerm c_11 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm l_127 (ATerm), ATerm t)
{
  ATerm f_67 = NULL,g_67 = NULL,h_67 = NULL,i_67 = NULL,j_67 = NULL,k_67 = NULL,l_67 = NULL,m_67 = NULL;
  h_67 = t;
  t = term_c_39;
  i_67 = t;
  t = term_i_45;
  t = lookup_table_0_1(i_67, t);
  m_67 = t;
  t = term_d_39;
  j_67 = t;
  t = (ATerm) ATempty;
  k_67 = t;
  t = m_67;
  if(match_cons(t, sym_Hashtable_1))
    {
      l_67 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = h_10(j_67, k_67, l_67, t);
  t = h_67;
  {
    static ATerm u_10 (ATerm t);
    static ATerm u_10 (ATerm t)
    {
      ATerm j_45 = t;
      int k_45 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = l_127(t);
          LocalPopChoice(k_45);
        }
      else
        {
          t = j_45;
          {
            ATerm l_45 = t;
            int m_45 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(w_10, x_10, b_11, t);
                LocalPopChoice(m_45);
              }
            else
              {
                t = l_45;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(u_10, t);
  }
  {
    ATerm n_45 = t;
    int o_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_68 = NULL;
        l_68 = t;
        {
          ATerm p_45 = t;
          int q_45 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm u_20 = NULL;
              t = l_68;
              {
                ATerm r_45 = t;
                int s_45 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm v_20 = NULL,a_21 = NULL;
                    t = term_w_11;
                    v_20 = t;
                    t = term_i_42;
                    a_21 = t;
                    t = term_j_42;
                    t = d_10(v_20, a_21, t);
                    LocalPopChoice(s_45);
                  }
                else
                  {
                    t = r_45;
                    t = fetch_1_0(c_11, t);
                  }
              }
              t = l_68;
              t = default_system_usage_0_0(t);
              t = term_l_37;
              u_20 = t;
              t = SSL_exit(u_20);
              LocalPopChoice(q_45);
            }
          else
            {
              t = p_45;
              {
                ATerm m_21 = NULL,p_21 = NULL,q_21 = NULL;
                t = term_w_11;
                p_21 = t;
                t = term_g_44;
                q_21 = t;
                t = term_t_45;
                t = d_10(p_21, q_21, t);
                t = l_68;
                t = default_system_about_0_0(t);
                t = term_l_37;
                m_21 = t;
                t = SSL_exit(m_21);
              }
            }
        }
        LocalPopChoice(o_45);
      }
    else
      {
        t = n_45;
        {
          ATerm u_45 = t;
          int v_45 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm m_68 = NULL,n_68 = NULL,o_68 = NULL;
              static ATerm d_11 (ATerm t);
              static ATerm d_11 (ATerm t)
              {
                ATerm p_68 = NULL,q_68 = NULL,r_68 = NULL,i_9 = NULL;
                r_68 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    q_68 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(r_68);
                p_68 = t;
                t = q_68;
                if(((f_67 != NULL) && (f_67 != t)))
                  _fail(t);
                else
                  f_67 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, q_68);
                i_9 = t;
                t = SSLsetAnnotations(i_9, p_68);
                return(t);
              }
              t = fetch_1_0(d_11, t);
              t = term_p_23;
              n_68 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(f_67)), term_w_45);
              o_68 = t;
              t = SSL_printnl(n_68, o_68);
              t = (ATerm) ATmakeAppl(sym__2, term_p_23, (ATerm) ATinsert(ATinsert(ATempty, not_null(f_67)), term_w_45));
              t = default_system_usage_0_0(t);
              t = term_e_16;
              m_68 = t;
              t = SSL_exit(m_68);
              LocalPopChoice(v_45);
            }
          else
            {
              t = u_45;
            }
        }
      }
  }
  g_67 = t;
  t = term_c_39;
  t = table_destroy_0_0(t);
  t = g_67;
  return(t);
}
ATerm option_wrap_4_0 (ATerm x_124 (ATerm), ATerm y_124 (ATerm), ATerm z_124 (ATerm), ATerm a_125 (ATerm), ATerm t)
{
  ATerm w_68 = NULL,x_68 = NULL,y_68 = NULL,z_68 = NULL,a_69 = NULL;
  t = parse_options_1_0(x_124, t);
  w_68 = t;
  t = term_x_45;
  t = table_create_0_0(t);
  t = term_x_45;
  x_68 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_x_45, term_y_45, w_68);
  t = lookup_table_0_1(x_68, t);
  a_69 = t;
  t = term_y_45;
  y_68 = t;
  t = a_69;
  if(match_cons(t, sym_Hashtable_1))
    {
      z_68 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = h_10(y_68, w_68, z_68, t);
  t = w_68;
  t = z_124(t);
  {
    ATerm z_45 = t;
    int a_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(y_124, t);
        LocalPopChoice(a_46);
      }
    else
      {
        t = z_45;
        {
          ATerm e_46 = t;
          int f_46 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = a_125(t);
              t = report_success_0_0(t);
              LocalPopChoice(f_46);
            }
          else
            {
              t = e_46;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm e_11 (ATerm t)
{
  ATerm g_46 = t;
  int r_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = pack_stratego_options_0_0(t);
      LocalPopChoice(r_46);
    }
  else
    {
      t = g_46;
      {
        ATerm s_46 = t;
        int u_46 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = input_option_0_0(t);
            LocalPopChoice(u_46);
          }
        else
          {
            t = s_46;
            {
              ATerm v_46 = t;
              int y_46 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = output_option_0_0(t);
                  LocalPopChoice(y_46);
                }
              else
                {
                  t = v_46;
                  {
                    ATerm a_47 = t;
                    int b_47 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Option_3_0(g_11, h_11, j_11, t);
                        LocalPopChoice(b_47);
                      }
                    else
                      {
                        t = a_47;
                        {
                          ATerm g_47 = t;
                          int h_47 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = verbose_option_0_0(t);
                              LocalPopChoice(h_47);
                            }
                          else
                            {
                              t = g_47;
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
static ATerm g_11 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm h_11 (ATerm t)
{
  ATerm g_69 = NULL,h_69 = NULL;
  t = term_i_47;
  g_69 = t;
  t = term_y_12;
  h_69 = t;
  t = term_j_47;
  t = g_10(g_69, h_69, t);
  t = term_l_47;
  return(t);
}
static ATerm j_11 (ATerm t)
{
  t = term_p_47;
  return(t);
}
static ATerm l_11 (ATerm t)
{
  t = get_filename_0_0(t);
  t = basename_1_0(_id, t);
  return(t);
}
static ATerm m_11 (ATerm t)
{
  ATerm s_69 = NULL,t_69 = NULL,u_69 = NULL,v_69 = NULL,w_69 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm r_47 = ATgetArgument(t, 0);
      if(match_cons(r_47, sym_Stream_1))
        {
          v_69 = ATgetArgument(r_47, 0);
        }
      else
        _fail(t);
      w_69 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_8(v_69, w_69, t);
  s_69 = t;
  t = term_s_21;
  t_69 = t;
  t = s_69;
  if(match_cons(t, sym_Stream_1))
    {
      u_69 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_s_21, s_69);
  t = m_8(t_69, u_69, t);
  return(t);
}
static ATerm o_11 (ATerm t)
{
  ATerm z_69 = NULL,a_70 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm y_47 = ATgetArgument(t, 0);
      if(match_cons(y_47, sym_Stream_1))
        {
          z_69 = ATgetArgument(y_47, 0);
        }
      else
        _fail(t);
      a_70 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_8(z_69, a_70, t);
  return(t);
}
ATerm pack_stratego_0_0 (ATerm t)
{
  ATerm e_69 = NULL,f_69 = NULL;
  static ATerm f_11 (ATerm t);
  static ATerm f_11 (ATerm t)
  {
    static ATerm k_11 (ATerm t);
    static ATerm k_11 (ATerm t)
    {
      ATerm j_69 = NULL;
      ATerm a_48 = t;
      int d_48 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm k_69 = NULL,l_69 = NULL,m_69 = NULL;
          t = term_w_11;
          l_69 = t;
          t = term_t_27;
          m_69 = t;
          t = term_g_48;
          t = d_10(l_69, m_69, t);
          k_69 = t;
          t = (ATerm) ATmakeAppl(sym_FILE_1, k_69);
          LocalPopChoice(d_48);
        }
      else
        {
          t = a_48;
          t = term_g_12;
        }
      if(match_cons(t, sym_FILE_1))
        {
          j_69 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = u_9(j_69, t);
      if(match_cons(t, sym__2))
        {
          if(((e_69 != NULL) && (e_69 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            e_69 = ATgetArgument(t, 0);
          if(((f_69 != NULL) && (f_69 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            f_69 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm h_48 = t;
        int j_48 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_69 = NULL,o_69 = NULL,p_69 = NULL,q_69 = NULL;
            t = term_w_11;
            p_69 = t;
            t = term_a_40;
            q_69 = t;
            t = term_k_48;
            t = d_10(p_69, q_69, t);
            t = e_69;
            t = map_1_0(l_11, t);
            o_69 = t;
            t = xtc_new_file_0_0(t);
            n_69 = t;
            t = (ATerm) ATmakeAppl(sym__2, n_69, o_69);
            t = o_8(m_11, n_69, o_69, t);
            t = (ATerm) ATmakeAppl(sym_FILE_1, n_69);
            LocalPopChoice(j_48);
          }
        else
          {
            t = h_48;
            {
              ATerm x_69 = NULL;
              ATerm l_48 = t;
              int m_48 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = e_69;
                  t = create_dep_file_0_0(t);
                  LocalPopChoice(m_48);
                }
              else
                {
                  t = l_48;
                }
              t = f_69;
              t = xtc_new_file_0_0(t);
              x_69 = t;
              t = (ATerm) ATmakeAppl(sym__2, x_69, f_69);
              t = o_8(o_11, x_69, f_69, t);
              t = (ATerm) ATmakeAppl(sym_FILE_1, x_69);
            }
          }
      }
      t = xtc_write_output_0_0(t);
      return(t);
    }
    t = xtc_temp_files_1_0(k_11, t);
    return(t);
  }
  t = option_wrap_4_0(e_11, default_usage_0_0, _id, f_11, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = pack_stratego_0_0(t);
  return(t);
}
