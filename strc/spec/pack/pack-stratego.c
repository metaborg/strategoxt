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
  sym_Imports_1 = ATmakeSymbol("Imports", 1, ATfalse);
  ATprotectSymbol(sym_Imports_1);
  sym_Specification_1 = ATmakeSymbol("Specification", 1, ATfalse);
  ATprotectSymbol(sym_Specification_1);
  sym_Path_2 = ATmakeSymbol("Path", 2, ATfalse);
  ATprotectSymbol(sym_Path_2);
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
}
ATerm term_l_48;
ATerm term_d_48;
ATerm term_m_47;
ATerm term_l_47;
ATerm term_k_47;
ATerm term_g_47;
ATerm term_a_46;
ATerm term_x_45;
ATerm term_w_45;
ATerm term_t_45;
ATerm term_i_45;
ATerm term_h_45;
ATerm term_g_45;
ATerm term_d_45;
ATerm term_y_44;
ATerm term_g_44;
ATerm term_y_43;
ATerm term_q_43;
ATerm term_p_43;
ATerm term_n_43;
ATerm term_l_43;
ATerm term_k_43;
ATerm term_z_42;
ATerm term_y_42;
ATerm term_q_42;
ATerm term_p_42;
ATerm term_o_42;
ATerm term_f_42;
ATerm term_e_42;
ATerm term_y_41;
ATerm term_f_41;
ATerm term_e_41;
ATerm term_d_41;
ATerm term_i_40;
ATerm term_h_40;
ATerm term_g_40;
ATerm term_e_40;
ATerm term_d_40;
ATerm term_z_39;
ATerm term_y_39;
ATerm term_x_39;
ATerm term_w_39;
ATerm term_v_39;
ATerm term_u_39;
ATerm term_t_39;
ATerm term_z_38;
ATerm term_s_38;
ATerm term_m_38;
ATerm term_l_38;
ATerm term_r_37;
ATerm term_q_37;
ATerm term_p_37;
ATerm term_o_37;
ATerm term_n_37;
ATerm term_m_37;
ATerm term_l_37;
ATerm term_k_37;
ATerm term_j_37;
ATerm term_g_37;
ATerm term_c_37;
ATerm term_b_37;
ATerm term_y_36;
ATerm term_d_35;
ATerm term_x_32;
ATerm term_t_32;
ATerm term_s_32;
ATerm term_q_32;
ATerm term_p_32;
ATerm term_j_32;
ATerm term_i_32;
ATerm term_g_32;
ATerm term_q_31;
ATerm term_p_30;
ATerm term_y_29;
ATerm term_v_29;
ATerm term_m_29;
ATerm term_l_29;
ATerm term_t_28;
ATerm term_t_27;
ATerm term_r_27;
ATerm term_q_27;
ATerm term_p_27;
ATerm term_e_27;
ATerm term_z_26;
ATerm term_y_26;
ATerm term_v_26;
ATerm term_t_26;
ATerm term_s_26;
ATerm term_p_26;
ATerm term_o_26;
ATerm term_l_26;
ATerm term_k_26;
ATerm term_c_26;
ATerm term_b_26;
ATerm term_x_25;
ATerm term_u_25;
ATerm term_t_25;
ATerm term_s_25;
ATerm term_n_25;
ATerm term_k_25;
ATerm term_j_25;
ATerm term_i_25;
ATerm term_h_25;
ATerm term_o_23;
ATerm term_n_23;
ATerm term_c_23;
ATerm term_b_23;
ATerm term_a_23;
ATerm term_z_22;
ATerm term_y_22;
ATerm term_x_22;
ATerm term_w_22;
ATerm term_v_22;
ATerm term_u_22;
ATerm term_t_22;
ATerm term_s_22;
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
ATerm term_f_22;
ATerm term_e_22;
ATerm term_d_22;
ATerm term_c_22;
ATerm term_b_22;
ATerm term_a_22;
ATerm term_z_21;
ATerm term_y_21;
ATerm term_w_21;
ATerm term_v_21;
ATerm term_u_21;
ATerm term_r_21;
ATerm term_q_21;
ATerm term_n_21;
ATerm term_j_21;
ATerm term_i_21;
ATerm term_e_21;
ATerm term_d_21;
ATerm term_b_21;
ATerm term_a_21;
ATerm term_w_20;
ATerm term_s_20;
ATerm term_r_20;
ATerm term_p_20;
ATerm term_o_20;
ATerm term_n_20;
ATerm term_l_20;
ATerm term_j_20;
ATerm term_i_20;
ATerm term_g_20;
ATerm term_d_20;
ATerm term_c_20;
ATerm term_a_20;
ATerm term_y_19;
ATerm term_x_19;
ATerm term_v_19;
ATerm term_u_19;
ATerm term_s_19;
ATerm term_r_19;
ATerm term_q_19;
ATerm term_p_19;
ATerm term_o_19;
ATerm term_n_19;
ATerm term_l_19;
ATerm term_k_19;
ATerm term_j_19;
ATerm term_i_19;
ATerm term_h_19;
ATerm term_e_19;
ATerm term_d_19;
ATerm term_c_19;
ATerm term_b_19;
ATerm term_a_19;
ATerm term_z_18;
ATerm term_x_18;
ATerm term_w_18;
ATerm term_v_18;
ATerm term_u_18;
ATerm term_t_18;
ATerm term_s_18;
ATerm term_r_18;
ATerm term_p_18;
ATerm term_o_18;
ATerm term_m_18;
ATerm term_k_18;
ATerm term_j_18;
ATerm term_i_18;
ATerm term_h_18;
ATerm term_g_18;
ATerm term_b_18;
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
ATerm term_l_17;
ATerm term_k_17;
ATerm term_j_17;
ATerm term_i_17;
ATerm term_f_17;
ATerm term_x_16;
ATerm term_v_16;
ATerm term_q_16;
ATerm term_p_16;
ATerm term_l_16;
ATerm term_g_16;
ATerm term_a_16;
ATerm term_w_15;
ATerm term_p_15;
ATerm term_o_15;
ATerm term_p_14;
ATerm term_m_14;
ATerm term_b_14;
ATerm term_z_13;
ATerm term_y_13;
ATerm term_w_13;
ATerm term_q_13;
ATerm term_p_13;
ATerm term_j_13;
ATerm term_h_13;
ATerm term_y_12;
ATerm term_x_12;
ATerm term_w_12;
ATerm term_u_12;
ATerm term_t_12;
ATerm term_o_12;
ATerm term_i_12;
ATerm term_g_12;
ATerm term_z_11;
ATerm term_y_11;
ATerm term_x_11;
ATerm term_w_11;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeAppl(sym__2, term_w_11, term_x_11);
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeAppl(ATmakeSymbol("XXXXXX", 0, ATtrue));
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/mkstemp", 0, ATtrue));
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(ATmakeSymbol("/StrategoXT", 0, ATtrue));
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file> (file, mode)", 0, ATtrue));
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--dep", 0, ATtrue));
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeAppl(sym__2, term_w_11, term_p_13);
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--nodep", 0, ATtrue));
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeAppl(sym__2, term_w_11, term_w_13);
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(ATmakeSymbol(".", 0, ATtrue));
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(ATmakeSymbol("dep", 0, ATtrue));
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeAppl(ATmakeSymbol(" \\\n	", 0, ATtrue));
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeAppl(ATmakeSymbol(" :", 0, ATtrue));
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeAppl(sym__2, term_w_11, term_p_15);
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_l_16));
  term_l_16 = (ATerm) ATmakeAppl(sym__2, term_w_11, term_g_16);
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_i_17));
  term_i_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_j_17));
  term_j_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_17, term_a_16, term_i_17);
  ATprotect(&(term_k_17));
  term_k_17 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_l_17));
  term_l_17 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_m_17));
  term_m_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_n_17));
  term_n_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_17, term_l_17, term_m_17);
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_q_17));
  term_q_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_r_17));
  term_r_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_17, term_p_17, term_q_17);
  ATprotect(&(term_s_17));
  term_s_17 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_t_17));
  term_t_17 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_u_17));
  term_u_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_v_17));
  term_v_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_17, term_t_17, term_u_17);
  ATprotect(&(term_w_17));
  term_w_17 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_y_17));
  term_y_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_z_17));
  term_z_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_17, term_x_17, term_y_17);
  ATprotect(&(term_a_18));
  term_a_18 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_g_18));
  term_g_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_h_18));
  term_h_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_18, term_b_18, term_g_18);
  ATprotect(&(term_i_18));
  term_i_18 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_j_18));
  term_j_18 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_k_18));
  term_k_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_m_18));
  term_m_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_18, term_j_18, term_k_18);
  ATprotect(&(term_o_18));
  term_o_18 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_p_18));
  term_p_18 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_r_18));
  term_r_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_s_18));
  term_s_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_18, term_p_18, term_r_18);
  ATprotect(&(term_t_18));
  term_t_18 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_u_18));
  term_u_18 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_v_18));
  term_v_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_w_18));
  term_w_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_18, term_u_18, term_v_18);
  ATprotect(&(term_x_18));
  term_x_18 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_z_18));
  term_z_18 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_a_19));
  term_a_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_b_19));
  term_b_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_18, term_z_18, term_a_19);
  ATprotect(&(term_c_19));
  term_c_19 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_d_19));
  term_d_19 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_e_19));
  term_e_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_h_19));
  term_h_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_19, term_d_19, term_e_19);
  ATprotect(&(term_i_19));
  term_i_19 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_j_19));
  term_j_19 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_k_19));
  term_k_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_l_19));
  term_l_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_19, term_j_19, term_k_19);
  ATprotect(&(term_n_19));
  term_n_19 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_o_19));
  term_o_19 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_p_19));
  term_p_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_q_19));
  term_q_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_19, term_o_19, term_p_19);
  ATprotect(&(term_r_19));
  term_r_19 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_s_19));
  term_s_19 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_u_19));
  term_u_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_v_19));
  term_v_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_19, term_s_19, term_u_19);
  ATprotect(&(term_x_19));
  term_x_19 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_y_19));
  term_y_19 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_a_20));
  term_a_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_c_20));
  term_c_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_19, term_y_19, term_a_20);
  ATprotect(&(term_d_20));
  term_d_20 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_g_20));
  term_g_20 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_i_20));
  term_i_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_j_20));
  term_j_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_20, term_g_20, term_i_20);
  ATprotect(&(term_l_20));
  term_l_20 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_n_20));
  term_n_20 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_o_20));
  term_o_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_p_20));
  term_p_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_20, term_n_20, term_o_20);
  ATprotect(&(term_r_20));
  term_r_20 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_s_20));
  term_s_20 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_w_20));
  term_w_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_a_21));
  term_a_21 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_20, term_s_20, term_w_20);
  ATprotect(&(term_b_21));
  term_b_21 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_d_21));
  term_d_21 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_e_21));
  term_e_21 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_i_21));
  term_i_21 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_21, term_d_21, term_e_21);
  ATprotect(&(term_j_21));
  term_j_21 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_n_21));
  term_n_21 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_q_21));
  term_q_21 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_r_21));
  term_r_21 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_21, term_n_21, term_q_21);
  ATprotect(&(term_u_21));
  term_u_21 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_v_21));
  term_v_21 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_w_21));
  term_w_21 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_y_21));
  term_y_21 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_21, term_v_21, term_w_21);
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
  ATprotect(&(term_i_22));
  term_i_22 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_22, term_e_22, term_f_22);
  ATprotect(&(term_j_22));
  term_j_22 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_k_22));
  term_k_22 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_l_22));
  term_l_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_m_22));
  term_m_22 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_22, term_k_22, term_l_22);
  ATprotect(&(term_n_22));
  term_n_22 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_o_22));
  term_o_22 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_p_22));
  term_p_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_q_22));
  term_q_22 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_22, term_o_22, term_p_22);
  ATprotect(&(term_r_22));
  term_r_22 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_s_22));
  term_s_22 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_t_22));
  term_t_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_u_22));
  term_u_22 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_22, term_s_22, term_t_22);
  ATprotect(&(term_v_22));
  term_v_22 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_w_22));
  term_w_22 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_x_22));
  term_x_22 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_y_22));
  term_y_22 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_22, term_w_22, term_x_22);
  ATprotect(&(term_z_22));
  term_z_22 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_a_23));
  term_a_23 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_b_23));
  term_b_23 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_c_23));
  term_c_23 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_22, term_a_23, term_b_23);
  ATprotect(&(term_n_23));
  term_n_23 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_o_23));
  term_o_23 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_h_25));
  term_h_25 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_i_25));
  term_i_25 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_j_25));
  term_j_25 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_k_25));
  term_k_25 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_n_25));
  term_n_25 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_s_25));
  term_s_25 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_t_25));
  term_t_25 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_u_25));
  term_u_25 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_x_25));
  term_x_25 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_b_26));
  term_b_26 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_c_26));
  term_c_26 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_k_26));
  term_k_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_l_26));
  term_l_26 = (ATerm) ATmakeAppl(sym__2, term_w_11, term_k_26);
  ATprotect(&(term_o_26));
  term_o_26 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_p_26));
  term_p_26 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_s_26));
  term_s_26 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_t_26));
  term_t_26 = (ATerm) ATmakeAppl(sym__2, term_b_26, term_s_26);
  ATprotect(&(term_v_26));
  term_v_26 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_y_26));
  term_y_26 = (ATerm) ATmakeAppl(sym__2, term_b_26, term_c_26);
  ATprotect(&(term_z_26));
  term_z_26 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_e_27));
  term_e_27 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_p_27));
  term_p_27 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_q_27));
  term_q_27 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_r_27));
  term_r_27 = (ATerm) ATmakeInt(-1);
  ATprotect(&(term_t_27));
  term_t_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_t_28));
  term_t_28 = (ATerm) ATmakeAppl(ATmakeSymbol("parse error in ", 0, ATtrue));
  ATprotect(&(term_l_29));
  term_l_29 = (ATerm) ATmakeAppl(ATmakeSymbol("parse-stratego", 0, ATtrue));
  ATprotect(&(term_m_29));
  term_m_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--asfix", 0, ATtrue));
  ATprotect(&(term_v_29));
  term_v_29 = (ATerm) ATmakeAppl(sym__2, term_w_11, term_m_29);
  ATprotect(&(term_y_29));
  term_y_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue));
  ATprotect(&(term_p_30));
  term_p_30 = (ATerm) ATmakeAppl(sym__2, term_w_11, term_y_29);
  ATprotect(&(term_q_31));
  term_q_31 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
  ATprotect(&(term_g_32));
  term_g_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--slack", 0, ATtrue));
  ATprotect(&(term_i_32));
  term_i_32 = (ATerm) ATmakeAppl(sym__2, term_w_11, term_g_32);
  ATprotect(&(term_j_32));
  term_j_32 = (ATerm) ATmakeAppl(ATmakeSymbol("*** module ", 0, ATtrue));
  ATprotect(&(term_p_32));
  term_p_32 = (ATerm) ATmakeAppl(ATmakeSymbol(" not found", 0, ATtrue));
  ATprotect(&(term_q_32));
  term_q_32 = (ATerm) ATmakeAppl(ATmakeSymbol(" reading ", 0, ATtrue));
  ATprotect(&(term_s_32));
  term_s_32 = (ATerm) ATmakeAppl(ATmakeSymbol("rtree", 0, ATtrue));
  ATprotect(&(term_t_32));
  term_t_32 = (ATerm) ATmakeAppl(ATmakeSymbol("str", 0, ATtrue));
  ATprotect(&(term_x_32));
  term_x_32 = (ATerm) ATmakeAppl(ATmakeSymbol("cr", 0, ATtrue));
  ATprotect(&(term_d_35));
  term_d_35 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_y_36));
  term_y_36 = (ATerm) ATmakeAppl(sym__2, term_w_12, term_o_12);
  ATprotect(&(term_b_37));
  term_b_37 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_c_37));
  term_c_37 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_g_37));
  term_g_37 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_j_37));
  term_j_37 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_k_37));
  term_k_37 = (ATerm) ATmakeAppl(sym__2, term_g_16, term_j_37);
  ATprotect(&(term_l_37));
  term_l_37 = (ATerm) ATmakeAppl(sym_Verbose_1, term_j_37);
  ATprotect(&(term_m_37));
  term_m_37 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_n_37));
  term_n_37 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_o_37));
  term_o_37 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_p_37));
  term_p_37 = (ATerm) ATmakeAppl(sym__2, term_o_37, term_y_12);
  ATprotect(&(term_q_37));
  term_q_37 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_r_37));
  term_r_37 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_l_38));
  term_l_38 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_m_38));
  term_m_38 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_s_38));
  term_s_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_z_38));
  term_z_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_t_39));
  term_t_39 = (ATerm) ATmakeAppl(ATmakeSymbol("-I d | --Include d   Include modules from directory d", 0, ATtrue));
  ATprotect(&(term_u_39));
  term_u_39 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_v_39));
  term_v_39 = (ATerm) ATmakeAppl(sym__2, term_w_13, term_u_39);
  ATprotect(&(term_w_39));
  term_w_39 = (ATerm) ATmakeAppl(ATmakeSymbol("--nodep              Don't create dependency file", 0, ATtrue));
  ATprotect(&(term_x_39));
  term_x_39 = (ATerm) ATmakeAppl(ATmakeSymbol("--dep f | -d f       Write dependency to file f", 0, ATtrue));
  ATprotect(&(term_y_39));
  term_y_39 = (ATerm) ATmakeAppl(ATmakeSymbol("--imports", 0, ATtrue));
  ATprotect(&(term_z_39));
  term_z_39 = (ATerm) ATmakeAppl(sym__2, term_y_39, term_y_12);
  ATprotect(&(term_d_40));
  term_d_40 = (ATerm) ATmakeAppl(ATmakeSymbol("--imports            Produce a list of imported modules only", 0, ATtrue));
  ATprotect(&(term_e_40));
  term_e_40 = (ATerm) ATmakeAppl(sym__2, term_g_32, term_y_12);
  ATprotect(&(term_g_40));
  term_g_40 = (ATerm) ATmakeAppl(ATmakeSymbol("--slack              Continue when module is not found", 0, ATtrue));
  ATprotect(&(term_h_40));
  term_h_40 = (ATerm) ATmakeAppl(sym__2, term_m_29, term_u_39);
  ATprotect(&(term_i_40));
  term_i_40 = (ATerm) ATmakeAppl(ATmakeSymbol("--asfix              Do not implode the concrete syntax parts", 0, ATtrue));
  ATprotect(&(term_d_41));
  term_d_41 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_e_41));
  term_e_41 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_f_41));
  term_f_41 = (ATerm) ATmakeAppl(sym__2, term_w_11, term_e_41);
  ATprotect(&(term_y_41));
  term_y_41 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_e_42));
  term_e_42 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_f_42));
  term_f_42 = (ATerm) ATmakeAppl(sym__2, term_w_11, term_e_42);
  ATprotect(&(term_o_42));
  term_o_42 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_p_42));
  term_p_42 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_q_42));
  term_q_42 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_y_42));
  term_y_42 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_z_42));
  term_z_42 = (ATerm) ATmakeAppl(sym__2, term_l_38, term_m_38);
  ATprotect(&(term_k_43));
  term_k_43 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_l_43));
  term_l_43 = (ATerm) ATmakeAppl(sym__2, term_k_43, term_y_12);
  ATprotect(&(term_n_43));
  term_n_43 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_p_43));
  term_p_43 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_q_43));
  term_q_43 = (ATerm) ATmakeAppl(sym__2, term_p_43, term_y_12);
  ATprotect(&(term_y_43));
  term_y_43 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_g_44));
  term_g_44 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_y_44));
  term_y_44 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_d_45));
  term_d_45 = (ATerm) ATmakeAppl(sym__2, term_e_42, term_y_12);
  ATprotect(&(term_g_45));
  term_g_45 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_h_45));
  term_h_45 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_i_45));
  term_i_45 = (ATerm) ATmakeAppl(sym__3, term_l_38, term_m_38, (ATerm) ATempty);
  ATprotect(&(term_t_45));
  term_t_45 = (ATerm) ATmakeAppl(sym__2, term_w_11, term_k_43);
  ATprotect(&(term_w_45));
  term_w_45 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_x_45));
  term_x_45 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_a_46));
  term_a_46 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_g_47));
  term_g_47 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_k_47));
  term_k_47 = (ATerm) ATmakeAppl(sym__2, term_g_47, term_y_12);
  ATprotect(&(term_l_47));
  term_l_47 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_m_47));
  term_m_47 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_d_48));
  term_d_48 = (ATerm) ATmakeAppl(sym__2, term_w_11, term_t_27);
  ATprotect(&(term_l_48));
  term_l_48 = (ATerm) ATmakeAppl(sym__2, term_w_11, term_y_39);
}
#include <srts/init-stratego-application.h>
ATerm copy_to_1_0 (ATerm o_0 (ATerm), ATerm t);
static ATerm w_9 (ATerm e_45, ATerm f_45, ATerm t);
static ATerm a_0 (ATerm t);
ATerm xtc_write_output_0_0 (ATerm t);
static ATerm j_8 (ATerm v_23, ATerm w_23, ATerm t);
static ATerm o_8 (ATerm g_94 (ATerm), ATerm x_172, ATerm f_24, ATerm t);
static ATerm e_9 (ATerm y_107 (ATerm), ATerm o_43, ATerm m_43, ATerm t);
ATerm mkstemp_0_0 (ATerm t);
ATerm P__tmpdir_0_0 (ATerm t);
static ATerm b_0 (ATerm t);
ATerm xtc_new_file_0_0 (ATerm t);
static ATerm k_8 (ATerm j_24, ATerm k_24, ATerm t);
static ATerm x_5 (ATerm i_5, ATerm t);
static ATerm z_5 (ATerm k_5, ATerm l_5, ATerm m_5, ATerm t);
static ATerm f_0 (ATerm t);
ATerm open_file_0_0 (ATerm t);
ATerm create_dep_file_0_0 (ATerm t);
static ATerm m_8 (ATerm e_39, ATerm f_39, ATerm t);
static ATerm n_8 (ATerm z_23, ATerm a_24, ATerm t);
ATerm basename_1_0 (ATerm n_105 (ATerm), ATerm t);
ATerm at_suffix_rev_1_0 (ATerm o_95 (ATerm), ATerm t);
ATerm get_filename_0_0 (ATerm t);
ATerm map_1_0 (ATerm p_94 (ATerm), ATerm t);
static ATerm d_10 (ATerm a_55, ATerm b_55, ATerm t);
static ATerm m_0 (ATerm t);
static ATerm q_0 (ATerm t);
ATerm flatten_stratego_0_0 (ATerm t);
ATerm genzip_4_0 (ATerm t_96 (ATerm), ATerm u_96 (ATerm), ATerm v_96 (ATerm), ATerm w_96 (ATerm), ATerm t);
static ATerm s_0 (ATerm t);
static ATerm s_8 (ATerm e_139, ATerm t);
ATerm read_from_0_0 (ATerm t);
ATerm pass_keep_0_0 (ATerm t);
static ATerm t_8 (ATerm g_42, ATerm h_42, ATerm t);
ATerm pass_verbose_0_0 (ATerm t);
static ATerm t_0 (ATerm t);
ATerm xtc_transform_term_2_0 (ATerm t_118 (ATerm), ATerm u_118 (ATerm), ATerm t);
static ATerm u_8 (ATerm j_49, ATerm k_49, ATerm t);
ATerm signal_to_descr_0_0 (ATerm t);
ATerm signal_from_number_0_0 (ATerm t);
ATerm warn_ifsignaled_0_0 (ATerm t);
ATerm fork_0_0 (ATerm t);
ATerm fork_and_wait_1_0 (ATerm q_110 (ATerm), ATerm t);
static ATerm w_8 (ATerm g_57, ATerm t);
ATerm table_getlist_0_0 (ATerm t);
ATerm if_verbose5_1_0 (ATerm j_110 (ATerm), ATerm t);
ATerm if_verbose4_1_0 (ATerm i_110 (ATerm), ATerm t);
ATerm if_verbose6_1_0 (ATerm k_110 (ATerm), ATerm t);
static ATerm y_8 (ATerm a_99 (ATerm), ATerm d_30, ATerm c_30, ATerm t);
static ATerm a_1 (ATerm t);
static ATerm z_8 (ATerm e_54, ATerm f_54, ATerm g_54, ATerm t);
static ATerm a_9 (ATerm n_114 (ATerm), ATerm o_54, ATerm n_54, ATerm t);
static ATerm z_25 (ATerm q_25, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm b_9 (ATerm b_24, ATerm t);
static ATerm f_9 (ATerm x_37, ATerm y_37, ATerm t);
static ATerm c_9 (ATerm g_39, ATerm h_39, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm i_28 (ATerm q_26, ATerm t);
static ATerm j_28 (ATerm a_27, ATerm f_27, ATerm g_27, ATerm t);
static ATerm m_28 (ATerm s_27, ATerm u_27, ATerm v_27, ATerm t);
static ATerm d_9 (ATerm t);
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
ATerm repeat_2_0 (ATerm d_87 (ATerm), ATerm e_87 (ATerm), ATerm t);
ATerm xtc_location_0_0 (ATerm t);
static ATerm a_2 (ATerm t);
static ATerm b_2 (ATerm t);
static ATerm c_2 (ATerm t);
static ATerm d_2 (ATerm t);
static ATerm e_2 (ATerm t);
ATerm xtc_load_0_0 (ATerm t);
static ATerm g_2 (ATerm t);
static ATerm h_2 (ATerm t);
static ATerm g_33 (ATerm h_32, ATerm t);
static ATerm o_2 (ATerm t);
static ATerm q_2 (ATerm t);
static ATerm r_2 (ATerm t);
static ATerm s_2 (ATerm t);
ATerm xtc_find_0_0 (ATerm t);
ATerm xtc_command_1_0 (ATerm u_119 (ATerm), ATerm t);
ATerm xtc_transform_file_2_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t);
static ATerm p_36 (ATerm d_34, ATerm e_34, ATerm f_34, ATerm t);
static ATerm q_36 (ATerm z_35, ATerm d_36, ATerm t);
static ATerm a_3 (ATerm t);
static ATerm b_3 (ATerm t);
static ATerm c_3 (ATerm t);
static ATerm i_3 (ATerm t);
ATerm parse_module_0_0 (ATerm t);
ATerm debug_1_0 (ATerm e_94 (ATerm), ATerm t);
ATerm if_verbose3_1_0 (ATerm h_110 (ATerm), ATerm t);
ATerm fetch_elem_1_0 (ATerm b_95 (ATerm), ATerm t);
static ATerm g_9 (ATerm x_38, ATerm y_38, ATerm t);
ATerm is_relpath_0_0 (ATerm t);
static ATerm h_9 (ATerm j_86 (ATerm), ATerm h_22, ATerm g_22, ATerm t);
static ATerm w_3 (ATerm t);
ATerm get_module_1_0 (ATerm i_86 (ATerm), ATerm t);
static ATerm j_9 (ATerm d_99 (ATerm), ATerm e_99 (ATerm), ATerm h_30, ATerm g_30, ATerm t);
static ATerm k_9 (ATerm v_98 (ATerm), ATerm b_30, ATerm a_30, ATerm t);
static ATerm b_4 (ATerm t);
static ATerm i_4 (ATerm t);
static ATerm j_4 (ATerm t);
static ATerm p_9 (ATerm o_631, ATerm t_631, ATerm y_59, ATerm t);
static ATerm k_4 (ATerm t);
static ATerm l_4 (ATerm t);
static ATerm m_4 (ATerm t);
static ATerm r_43 (ATerm t_41, ATerm u_41, ATerm v_41, ATerm t);
static ATerm p_4 (ATerm t);
ATerm diff_0_0 (ATerm t);
static ATerm r_9 (ATerm q_120 (ATerm), ATerm r_120 (ATerm), ATerm s_120 (ATerm), ATerm l_63, ATerm i_63, ATerm p_63, ATerm m_63, ATerm j_63, ATerm k_63, ATerm t);
ATerm GnNext_3_0 (ATerm q_120 (ATerm), ATerm r_120 (ATerm), ATerm s_120 (ATerm), ATerm t);
ATerm while_not_2_0 (ATerm u_87 (ATerm), ATerm v_87 (ATerm), ATerm t);
ATerm for_3_0 (ATerm x_87 (ATerm), ATerm y_87 (ATerm), ATerm z_87 (ATerm), ATerm t);
static ATerm q_4 (ATerm t);
static ATerm r_4 (ATerm t);
ATerm graph_nodes_roots_3_0 (ATerm n_120 (ATerm), ATerm o_120 (ATerm), ATerm p_120 (ATerm), ATerm t);
ATerm filter_1_0 (ATerm s_102 (ATerm), ATerm t);
static ATerm w_4 (ATerm t);
static ATerm y_4 (ATerm t);
static ATerm b_5 (ATerm t);
static ATerm e_5 (ATerm t);
static ATerm f_5 (ATerm t);
static ATerm h_5 (ATerm t);
static ATerm u_9 (ATerm x_21, ATerm t);
static ATerm x_9 (ATerm m_53, ATerm n_53, ATerm t);
ATerm end_scope_1_0 (ATerm v_107 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm z_86 (ATerm), ATerm a_87 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm u_107 (ATerm), ATerm t);
static ATerm n_5 (ATerm t);
static ATerm q_5 (ATerm t);
static ATerm r_5 (ATerm t);
ATerm xtc_temp_files_1_0 (ATerm g_119 (ATerm), ATerm t);
ATerm default_usage_0_0 (ATerm t);
static ATerm s_5 (ATerm t);
static ATerm v_5 (ATerm t);
static ATerm y_5 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm c_6 (ATerm t);
static ATerm i_6 (ATerm t);
static ATerm l_6 (ATerm t);
static ATerm u_6 (ATerm t);
static ATerm w_6 (ATerm t);
static ATerm y_6 (ATerm t);
static ATerm z_6 (ATerm t);
static ATerm a_7 (ATerm t);
static ATerm b_7 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm g_10 (ATerm n_64, ATerm o_64, ATerm t);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t);
static ATerm c_7 (ATerm t);
static ATerm d_7 (ATerm t);
static ATerm e_7 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm h_7 (ATerm t);
static ATerm k_7 (ATerm t);
static ATerm l_7 (ATerm t);
ATerm input_option_0_0 (ATerm t);
static ATerm e_10 (ATerm h_53, ATerm i_53, ATerm g_53, ATerm t);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t);
ATerm at_end_1_0 (ATerm g_95 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm r_56 (ATerm e_56, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm v_9 (ATerm u_64, ATerm v_64, ATerm t);
static ATerm s_7 (ATerm t);
static ATerm t_7 (ATerm t);
static ATerm v_7 (ATerm t);
static ATerm w_7 (ATerm t);
static ATerm x_7 (ATerm t);
static ATerm z_7 (ATerm t);
static ATerm b_8 (ATerm t);
static ATerm c_8 (ATerm t);
static ATerm d_8 (ATerm t);
static ATerm g_8 (ATerm t);
static ATerm h_8 (ATerm t);
static ATerm i_8 (ATerm t);
static ATerm l_8 (ATerm t);
static ATerm p_8 (ATerm t);
static ATerm q_8 (ATerm t);
static ATerm v_8 (ATerm t);
static ATerm i_9 (ATerm t);
static ATerm m_9 (ATerm t);
ATerm pack_stratego_options_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm y_9 (ATerm a_42, ATerm b_42, ATerm t);
ATerm foldr_2_0 (ATerm o_101 (ATerm), ATerm p_101 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm n_9 (ATerm t);
static ATerm o_9 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm f_110 (ATerm), ATerm t);
static ATerm q_9 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm s_9 (ATerm t);
ATerm need_help_1_0 (ATerm t_111 (ATerm), ATerm t);
static ATerm h_10 (ATerm z_56, ATerm a_57, ATerm b_57, ATerm t);
static ATerm i_10 (ATerm c_57, ATerm d_57, ATerm t);
ATerm lookup_table_0_1 (ATerm t_54, ATerm t);
ATerm new_hashtable_0_2 (ATerm h_57, ATerm i_57, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm a_10 (ATerm e_57, ATerm f_57, ATerm t);
static ATerm b_10 (ATerm j_57, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
static ATerm z_9 (ATerm t);
static ATerm c_10 (ATerm t);
static ATerm k_10 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm z_94 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm l_10 (ATerm t);
static ATerm m_10 (ATerm t);
static ATerm n_10 (ATerm t);
static ATerm o_10 (ATerm t);
static ATerm q_10 (ATerm t);
static ATerm r_10 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm w_64 (ATerm), ATerm x_64 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm k_114 (ATerm), ATerm t);
static ATerm x_10 (ATerm t);
static ATerm z_10 (ATerm t);
static ATerm a_11 (ATerm t);
static ATerm c_11 (ATerm t);
ATerm parse_options_1_0 (ATerm j_114 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm v_111 (ATerm), ATerm w_111 (ATerm), ATerm x_111 (ATerm), ATerm y_111 (ATerm), ATerm t);
static ATerm e_11 (ATerm t);
static ATerm g_11 (ATerm t);
static ATerm h_11 (ATerm t);
static ATerm j_11 (ATerm t);
static ATerm m_11 (ATerm t);
static ATerm n_11 (ATerm t);
static ATerm o_11 (ATerm t);
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
    ATerm p_11 = t;
    int q_11 = stack_ptr;
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
        t = w_9(l_1, h_0, t);
        t = (ATerm) ATmakeAppl(sym_FILE_1, l_1);
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
              t = k_1;
              t = o_0(t);
              v_0 = t;
              {
                ATerm t_11 = t;
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
                    t = t_11;
                  }
              }
              t = (ATerm) ATmakeAppl(sym__2, l_1, v_0);
              t = w_9(l_1, v_0, t);
              t = (ATerm) ATmakeAppl(sym_FILE_1, l_1);
              LocalPopChoice(s_11);
            }
          else
            {
              t = r_11;
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
static ATerm w_9 (ATerm e_45, ATerm f_45, ATerm t)
{
  t = SSL_copy(e_45, f_45);
  return(t);
}
static ATerm a_0 (ATerm t)
{
  ATerm u_11 = t;
  int v_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_2 = NULL,u_2 = NULL;
      t = term_w_11;
      t_2 = t;
      t = term_x_11;
      u_2 = t;
      t = term_y_11;
      t = d_10(t_2, u_2, t);
      LocalPopChoice(v_11);
    }
  else
    {
      t = u_11;
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
      t = term_x_11;
      {
        ATerm c_12 = t;
        int d_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_1 = NULL,s_1 = NULL;
            t = term_w_11;
            r_1 = t;
            t = term_x_11;
            s_1 = t;
            t = term_y_11;
            t = d_10(r_1, s_1, t);
            LocalPopChoice(d_12);
          }
        else
          {
            t = c_12;
            t = term_z_11;
          }
      }
      o_1 = t;
      t = term_g_12;
      q_1 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_g_12, o_1);
      t = w_9(q_1, o_1, t);
    }
  else
    {
      if(match_cons(t, sym_FILE_1))
        {
          ATerm h_12 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = p_2;
      t = copy_to_1_0(a_0, t);
    }
  return(t);
}
static ATerm j_8 (ATerm v_23, ATerm w_23, ATerm t)
{
  ATerm w_2 = NULL;
  t = SSL_write_term_to_stream_baf(v_23, w_23);
  w_2 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, w_2);
  return(t);
}
static ATerm o_8 (ATerm g_94 (ATerm), ATerm x_172, ATerm f_24, ATerm t)
{
  ATerm x_2 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, x_172, term_i_12);
  t = d_9(t);
  x_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_2, f_24);
  t = g_94(t);
  t = fclose_0_0(t);
  t = f_24;
  return(t);
}
static ATerm e_9 (ATerm y_107 (ATerm), ATerm o_43, ATerm m_43, ATerm t)
{
  ATerm y_2 = NULL,z_2 = NULL,d_3 = NULL,e_3 = NULL,g_3 = NULL,h_3 = NULL,j_3 = NULL,n_3 = NULL;
  e_3 = t;
  t = y_107(t);
  y_2 = t;
  t = (ATerm) ATmakeAppl(sym__3, y_2, o_43, m_43);
  t = e_10(y_2, o_43, m_43, t);
  {
    ATerm m_12 = t;
    int n_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_3 = NULL;
        t = term_o_12;
        q_3 = t;
        t = (ATerm) ATmakeAppl(sym__2, y_2, term_o_12);
        t = d_10(y_2, q_3, t);
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
      z_2 = ATgetFirst((ATermList) t);
      d_3 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, y_2, term_o_12, (ATerm) ATinsert(CheckATermList(d_3), (ATerm) ATinsert(CheckATermList(z_2), o_43)));
  t = lookup_table_0_1(y_2, t);
  n_3 = t;
  t = term_o_12;
  g_3 = t;
  t = (ATerm) ATinsert(CheckATermList(d_3), (ATerm) ATinsert(CheckATermList(z_2), o_43));
  h_3 = t;
  t = n_3;
  if(match_cons(t, sym_Hashtable_1))
    {
      j_3 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = h_10(g_3, h_3, j_3, t);
  t = e_3;
  return(t);
}
ATerm mkstemp_0_0 (ATerm t)
{
  ATerm t_3 = NULL;
  ATerm p_12 = t;
  int s_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_3 = NULL,w_1 = NULL;
      y_3 = t;
      t = term_t_12;
      w_1 = t;
      t = (ATerm) ATmakeAppl(sym__2, y_3, term_t_12);
      t = f_9(y_3, w_1, t);
      t_3 = t;
      t = SSL_mkstemp(t_3);
      LocalPopChoice(s_12);
    }
  else
    {
      t = p_12;
      {
        ATerm z_3 = NULL;
        t = term_u_12;
        z_3 = t;
        t = SSL_perror(z_3);
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
  ATerm c_4 = NULL,d_4 = NULL,e_4 = NULL,g_4 = NULL,h_4 = NULL;
  t = P__tmpdir_0_0(t);
  g_4 = t;
  t = term_x_12;
  h_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_4, term_x_12);
  t = f_9(g_4, h_4, t);
  t = mkstemp_0_0(t);
  if(match_cons(t, sym__2))
    {
      d_4 = ATgetArgument(t, 0);
      c_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = term_y_12;
  e_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_4, term_y_12);
  t = e_9(b_0, d_4, e_4, t);
  t = SSL_close(c_4);
  t = d_4;
  return(t);
}
static ATerm k_8 (ATerm j_24, ATerm k_24, ATerm t)
{
  ATerm z_4 = NULL,a_5 = NULL;
  t = k_24;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = k_24;
    }
  else
    {
      ATerm f_2 = NULL,i_2 = NULL,z_0 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          z_4 = ATgetFirst((ATermList) t);
          a_5 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(k_24);
      f_2 = t;
      t = a_5;
      {
        static ATerm n_2 (ATerm t)
        {
          ATerm z_12 = t;
          int b_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm k_2 = NULL;
              k_2 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = k_2;
              LocalPopChoice(b_13);
            }
          else
            {
              t = z_12;
              {
                ATerm l_2 = NULL;
                t = Cons_2_0(_id, n_2, t);
                l_2 = t;
                t = (ATerm) ATinsert(CheckATermList(l_2), j_24);
              }
            }
          return(t);
        }
        t = n_2(t);
      }
      i_2 = t;
      t = (ATerm) ATinsert(CheckATermList(i_2), z_4);
      z_0 = t;
      t = SSLsetAnnotations(z_0, f_2);
    }
  return(t);
}
static ATerm x_5 (ATerm i_5, ATerm t)
{
  t = i_5;
  {
    ATerm e_13 = t;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm f_13 = ATgetArgument(t, 0);
            ATerm g_13 = ATgetArgument(t, 1);
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
  t = term_h_13;
  t = debug_1_0(f_0, t);
  t = (ATerm) ATmakeAppl(sym__2, i_5, term_i_12);
  t = open_file_0_0(t);
  return(t);
}
static ATerm z_5 (ATerm k_5, ATerm l_5, ATerm m_5, ATerm t)
{
  t = SSL_open_file(k_5, l_5);
  return(t);
}
static ATerm f_0 (ATerm t)
{
  t = term_j_13;
  return(t);
}
ATerm open_file_0_0 (ATerm t)
{
  ATerm t_5 = NULL,u_5 = NULL,w_5 = NULL;
  t_5 = t;
  if(match_cons(t, sym__2))
    {
      u_5 = ATgetArgument(t, 0);
      w_5 = ATgetArgument(t, 1);
      {
        ATerm k_13 = t;
        int l_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = x_5(t_5, t);
            LocalPopChoice(l_13);
          }
        else
          {
            t = k_13;
            t = z_5(u_5, w_5, t_5, t);
          }
      }
    }
  else
    {
      t = x_5(t_5, t);
    }
  return(t);
}
ATerm create_dep_file_0_0 (ATerm t)
{
  ATerm a_6 = NULL,b_6 = NULL,d_6 = NULL,e_6 = NULL,f_6 = NULL,g_6 = NULL,h_6 = NULL,j_6 = NULL,k_6 = NULL,m_6 = NULL,n_6 = NULL;
  b_6 = t;
  t = term_w_11;
  m_6 = t;
  t = term_x_11;
  n_6 = t;
  t = term_y_11;
  t = d_10(m_6, n_6, t);
  {
    ATerm m_13 = t;
    int n_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_6 = NULL,p_6 = NULL;
        t = term_w_11;
        o_6 = t;
        t = term_p_13;
        p_6 = t;
        t = term_q_13;
        t = d_10(o_6, p_6, t);
        LocalPopChoice(n_13);
      }
    else
      {
        t = m_13;
        {
          ATerm u_13 = t;
          if((PushChoice() == 0))
            {
              ATerm q_6 = NULL,r_6 = NULL;
              t = term_w_11;
              q_6 = t;
              t = term_w_13;
              r_6 = t;
              t = term_y_13;
              t = d_10(q_6, r_6, t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = u_13;
            }
        }
      }
  }
  a_6 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_b_14), term_z_13), a_6);
  k_6 = t;
  t = SSL_concat_strings(k_6);
  j_6 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_6, term_i_12);
  t = open_file_0_0(t);
  d_6 = t;
  t = term_m_14;
  g_6 = t;
  t = (ATerm) ATinsert(CheckATermList(b_6), term_p_14);
  h_6 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_14, (ATerm) ATinsert(CheckATermList(b_6), term_p_14));
  t = k_8(g_6, h_6, t);
  e_6 = t;
  t = (ATerm) ATinsert(CheckATermList(e_6), a_6);
  f_6 = t;
  t = SSL_printnl(d_6, f_6);
  t = SSL_close_file(d_6);
  t = (ATerm) ATmakeAppl(sym_FILE_1, j_6);
  return(t);
}
static ATerm m_8 (ATerm e_39, ATerm f_39, ATerm t)
{
  ATerm s_6 = NULL;
  t = SSL_fputc(e_39, f_39);
  s_6 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, s_6);
  return(t);
}
static ATerm n_8 (ATerm z_23, ATerm a_24, ATerm t)
{
  ATerm v_6 = NULL;
  t = SSL_write_term_to_stream_text(z_23, a_24);
  v_6 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, v_6);
  return(t);
}
ATerm basename_1_0 (ATerm n_105 (ATerm), ATerm t)
{
  ATerm f_7 = NULL,i_7 = NULL;
  i_7 = t;
  t = SSL_explode_string(i_7);
  {
    ATerm r_14 = t;
    int s_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm b_11 (ATerm t)
        {
          ATerm p_10 = NULL,t_10 = NULL,u_10 = NULL;
          p_10 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              t_10 = ATgetFirst((ATermList) t);
              u_10 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          {
            ATerm v_14 = t;
            int w_14 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm f_3 = NULL,l_3 = NULL,c_1 = NULL;
                t = SSLgetAnnotations(p_10);
                f_3 = t;
                t = u_10;
                t = b_11(t);
                l_3 = t;
                t = (ATerm) ATinsert(CheckATermList(l_3), t_10);
                c_1 = t;
                t = SSLsetAnnotations(c_1, f_3);
                LocalPopChoice(w_14);
              }
            else
              {
                t = v_14;
                {
                  ATerm b_15 = t;
                  int c_15 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm f_4 = NULL,d_1 = NULL;
                      t = SSLgetAnnotations(p_10);
                      f_4 = t;
                      t = t_10;
                      if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 47)))
                        _fail(t);
                      t = (ATerm) ATinsert(CheckATermList(u_10), t_10);
                      d_1 = t;
                      t = SSLsetAnnotations(d_1, f_4);
                      LocalPopChoice(c_15);
                    }
                  else
                    {
                      t = b_15;
                      {
                        ATerm g_5 = NULL,p_5 = NULL,e_1 = NULL;
                        t = SSLgetAnnotations(p_10);
                        g_5 = t;
                        t = t_10;
                        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 46)))
                          _fail(t);
                        t = u_10;
                        t = n_105(t);
                        p_5 = t;
                        t = (ATerm) ATinsert(CheckATermList(p_5), t_10);
                        e_1 = t;
                        t = SSLsetAnnotations(e_1, g_5);
                        t = (ATerm) ATempty;
                      }
                    }
                }
              }
          }
          return(t);
        }
        t = b_11(t);
        LocalPopChoice(s_14);
      }
    else
      {
        t = r_14;
      }
  }
  f_7 = t;
  t = SSL_implode_string(f_7);
  return(t);
}
ATerm at_suffix_rev_1_0 (ATerm o_95 (ATerm), ATerm t)
{
  static ATerm f_12 (ATerm t)
  {
    ATerm d_15 = t;
    int e_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_12 = NULL,b_12 = NULL,e_12 = NULL,t_6 = NULL,x_6 = NULL,i_1 = NULL;
        a_12 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            b_12 = ATgetFirst((ATermList) t);
            e_12 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(a_12);
        t_6 = t;
        t = e_12;
        t = f_12(t);
        x_6 = t;
        t = (ATerm) ATinsert(CheckATermList(x_6), b_12);
        i_1 = t;
        t = SSLsetAnnotations(i_1, t_6);
        LocalPopChoice(e_15);
      }
    else
      {
        t = d_15;
        t = o_95(t);
      }
    return(t);
  }
  t = f_12(t);
  return(t);
}
ATerm get_filename_0_0 (ATerm t)
{
  ATerm j_12 = NULL,k_12 = NULL,l_12 = NULL;
  l_12 = t;
  t = SSL_explode_string(l_12);
  {
    ATerm f_15 = t;
    int g_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm j_0 (ATerm t)
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm h_15 = ATgetFirst((ATermList) t);
              if(((ATgetType(h_15) != AT_INT) || (ATgetInt((ATermInt) h_15) != 47)))
                _fail(t);
              if(((j_12 != NULL) && (j_12 != (ATerm) ATgetNext((ATermList) t))))
                _fail((ATerm) ATgetNext((ATermList) t));
              else
                j_12 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          return(t);
        }
        t = at_suffix_rev_1_0(j_0, t);
        t = not_null(j_12);
        LocalPopChoice(g_15);
      }
    else
      {
        t = f_15;
      }
  }
  k_12 = t;
  t = SSL_implode_string(k_12);
  return(t);
}
ATerm map_1_0 (ATerm p_94 (ATerm), ATerm t)
{
  static ATerm v_13 (ATerm t)
  {
    ATerm o_13 = NULL,r_13 = NULL,t_13 = NULL;
    o_13 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = o_13;
      }
    else
      {
        ATerm g_7 = NULL,o_7 = NULL,p_7 = NULL,n_1 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            r_13 = ATgetFirst((ATermList) t);
            t_13 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(o_13);
        g_7 = t;
        t = r_13;
        t = p_94(t);
        o_7 = t;
        t = t_13;
        t = v_13(t);
        p_7 = t;
        t = (ATerm) ATinsert(CheckATermList(p_7), o_7);
        n_1 = t;
        t = SSLsetAnnotations(n_1, g_7);
      }
    return(t);
  }
  t = v_13(t);
  return(t);
}
static ATerm d_10 (ATerm a_55, ATerm b_55, ATerm t)
{
  ATerm x_13 = NULL;
  t = lookup_table_0_1(a_55, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      x_13 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = i_10(b_55, x_13, t);
  return(t);
}
static ATerm m_0 (ATerm t)
{
  ATerm f_14 = NULL;
  if(match_cons(t, sym_Specification_1))
    {
      f_14 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_14;
  t = filter_1_0(q_0, t);
  return(t);
}
static ATerm q_0 (ATerm t)
{
  ATerm j_15 = t;
  if((PushChoice() == 0))
    {
      ATerm g_14 = NULL,h_14 = NULL,i_14 = NULL,x_1 = NULL;
      i_14 = t;
      if(match_cons(t, sym_Imports_1))
        {
          h_14 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(i_14);
      g_14 = t;
      t = (ATerm) ATmakeAppl(sym_Imports_1, h_14);
      x_1 = t;
      t = SSLsetAnnotations(x_1, g_14);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = j_15;
    }
  return(t);
}
ATerm flatten_stratego_0_0 (ATerm t)
{
  ATerm e_14 = NULL;
  t = map_1_0(m_0, t);
  t = concat_0_0(t);
  e_14 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, e_14);
  return(t);
}
ATerm genzip_4_0 (ATerm t_96 (ATerm), ATerm u_96 (ATerm), ATerm v_96 (ATerm), ATerm w_96 (ATerm), ATerm t)
{
  static ATerm y_14 (ATerm t)
  {
    ATerm l_15 = t;
    int n_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = t_96(t);
        LocalPopChoice(n_15);
      }
    else
      {
        t = l_15;
        {
          ATerm j_14 = NULL,n_14 = NULL,o_14 = NULL,q_14 = NULL,u_14 = NULL,x_14 = NULL,z_1 = NULL;
          t = u_96(t);
          x_14 = t;
          if(match_cons(t, sym__2))
            {
              n_14 = ATgetArgument(t, 0);
              o_14 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(x_14);
          j_14 = t;
          t = n_14;
          t = w_96(t);
          q_14 = t;
          t = o_14;
          t = y_14(t);
          u_14 = t;
          t = (ATerm) ATmakeAppl(sym__2, q_14, u_14);
          z_1 = t;
          t = SSLsetAnnotations(z_1, j_14);
          t = v_96(t);
        }
      }
    return(t);
  }
  t = y_14(t);
  return(t);
}
static ATerm s_0 (ATerm t)
{
  ATerm z_14 = NULL;
  if(match_cons(t, sym_Imports_1))
    {
      z_14 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = z_14;
  return(t);
}
static ATerm s_8 (ATerm e_139, ATerm t)
{
  t = e_139;
  t = filter_1_0(s_0, t);
  t = concat_0_0(t);
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm i_15 = NULL;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_g_12;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      ATerm k_15 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          i_15 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, term_o_15);
      k_15 = t;
      t = (ATerm) ATmakeAppl(sym__2, i_15, (ATerm) ATinsert(ATempty, term_o_15));
      t = g_9(i_15, k_15, t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
ATerm pass_keep_0_0 (ATerm t)
{
  ATerm s_15 = NULL,t_15 = NULL,x_15 = NULL,y_15 = NULL;
  t = term_p_15;
  {
    ATerm r_15 = t;
    int v_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_15 = NULL,b_16 = NULL;
        t = term_w_11;
        z_15 = t;
        t = term_p_15;
        b_16 = t;
        t = term_w_15;
        t = d_10(z_15, b_16, t);
        LocalPopChoice(v_15);
      }
    else
      {
        t = r_15;
        t = term_a_16;
      }
  }
  t_15 = t;
  t = term_a_16;
  y_15 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_15, term_a_16);
  t = t_8(t_15, y_15, t);
  x_15 = t;
  t = SSL_int_to_string(x_15);
  s_15 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, s_15), term_p_15);
  return(t);
}
static ATerm t_8 (ATerm g_42, ATerm h_42, ATerm t)
{
  ATerm d_16 = t;
  int e_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(g_42, h_42);
      LocalPopChoice(e_16);
    }
  else
    {
      t = d_16;
      t = SSL_subtr(g_42, h_42);
    }
  return(t);
}
ATerm pass_verbose_0_0 (ATerm t)
{
  ATerm c_16 = NULL,f_16 = NULL,i_16 = NULL,j_16 = NULL;
  t = term_g_16;
  {
    ATerm h_16 = t;
    int k_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_16 = NULL,r_16 = NULL;
        t = term_w_11;
        m_16 = t;
        t = term_g_16;
        r_16 = t;
        t = term_l_16;
        t = d_10(m_16, r_16, t);
        LocalPopChoice(k_16);
      }
    else
      {
        t = h_16;
        t = term_a_16;
      }
  }
  f_16 = t;
  t = term_a_16;
  j_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_16, term_a_16);
  t = t_8(f_16, j_16, t);
  i_16 = t;
  t = SSL_int_to_string(i_16);
  c_16 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, c_16), term_g_16);
  return(t);
}
static ATerm t_0 (ATerm t)
{
  ATerm w_16 = NULL,y_16 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm n_16 = ATgetArgument(t, 0);
      if(match_cons(n_16, sym_Stream_1))
        {
          w_16 = ATgetArgument(n_16, 0);
        }
      else
        _fail(t);
      y_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_8(w_16, y_16, t);
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm t_118 (ATerm), ATerm u_118 (ATerm), ATerm t)
{
  ATerm s_16 = NULL,t_16 = NULL;
  t_16 = t;
  t = xtc_new_file_0_0(t);
  s_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_16, t_16);
  t = o_8(t_0, s_16, t_16, t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, s_16);
  t = xtc_transform_file_2_0(t_118, u_118, t);
  t = read_from_0_0(t);
  return(t);
}
static ATerm u_8 (ATerm j_49, ATerm k_49, ATerm t)
{
  t = SSL_execvp(j_49, k_49);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm c_18 = NULL,d_18 = NULL,e_18 = NULL,f_18 = NULL;
  c_18 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      d_18 = ATgetArgument(t, 0);
      {
        ATerm e_8 = NULL,f_8 = NULL;
        t = SSL_int_to_string(d_18);
        e_8 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_q_16), e_8), term_p_16);
        f_8 = t;
        t = SSL_concat_strings(f_8);
      }
    }
  else
    {
      ATerm f_10 = NULL,j_10 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          d_18 = ATgetArgument(t, 0);
          e_18 = ATgetArgument(t, 1);
          f_18 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(e_18);
      f_10 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, f_18), term_x_16), f_10), term_v_16), d_18);
      j_10 = t;
      t = SSL_concat_strings(j_10);
    }
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm l_18 = NULL;
  l_18 = t;
  {
    ATerm z_16 = t;
    int a_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm u_0 (ATerm t)
        {
          if(match_cons(t, sym_Signal_3))
            {
              ATerm d_17 = ATgetArgument(t, 0);
              if((l_18 != ATgetArgument(t, 1)))
                {
                  _fail(ATgetArgument(t, 1));
                }
              {
                ATerm e_17 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_c_23), term_y_22), term_u_22), term_q_22), term_m_22), term_i_22), term_c_22), term_y_21), term_r_21), term_i_21), term_a_21), term_p_20), term_j_20), term_c_20), term_v_19), term_q_19), term_l_19), term_h_19), term_b_19), term_w_18), term_s_18), term_m_18), term_h_18), term_z_17), term_v_17), term_r_17), term_n_17), term_j_17);
        t = fetch_elem_1_0(u_0, t);
        LocalPopChoice(a_17);
      }
    else
      {
        t = z_16;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, l_18);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm q_18 = NULL,g_19 = NULL;
  q_18 = t;
  {
    ATerm d_23 = t;
    int e_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm h_23 = ATgetArgument(t, 0);
            g_19 = ATgetArgument(t, 1);
            {
              ATerm j_23 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(e_23);
        {
          ATerm k_23 = t;
          int l_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm s_10 = NULL,w_10 = NULL,y_10 = NULL;
              t = g_19;
              {
                ATerm m_23 = t;
                if((PushChoice() == 0))
                  {
                    if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
                      _fail(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = m_23;
                  }
              }
              t = signal_from_number_0_0(t);
              t = signal_to_descr_0_0(t);
              s_10 = t;
              t = term_n_23;
              w_10 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, s_10), term_o_23);
              y_10 = t;
              t = SSL_printnl(w_10, y_10);
              t = (ATerm) ATmakeAppl(sym__2, term_n_23, (ATerm) ATinsert(ATinsert(ATempty, s_10), term_o_23));
              LocalPopChoice(l_23);
            }
          else
            {
              t = k_23;
              t = q_18;
            }
        }
      }
    else
      {
        t = d_23;
        t = q_18;
      }
  }
  t = q_18;
  return(t);
}
ATerm fork_0_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_and_wait_1_0 (ATerm q_110 (ATerm), ATerm t)
{
  ATerm w_19 = NULL,z_19 = NULL;
  z_19 = t;
  t = fork_0_0(t);
  w_19 = t;
  {
    ATerm p_23 = t;
    int q_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = z_19;
        t = q_110(t);
        LocalPopChoice(q_23);
      }
    else
      {
        t = p_23;
        t = SSL_waitpid(w_19);
        t = warn_ifsignaled_0_0(t);
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm s_23 = ATgetArgument(t, 0);
            if(((ATgetType(s_23) != AT_INT) || (ATgetInt((ATermInt) s_23) != 0)))
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
        t = z_19;
      }
  }
  return(t);
}
static ATerm w_8 (ATerm g_57, ATerm t)
{
  t = SSL_hashtable_keys(g_57);
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm b_20 = NULL,e_20 = NULL;
  static ATerm x_0 (ATerm t)
  {
    ATerm f_20 = NULL,m_20 = NULL;
    f_20 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(b_20), f_20);
    t = d_10(not_null(b_20), f_20, t);
    m_20 = t;
    t = (ATerm) ATmakeAppl(sym__2, f_20, m_20);
    return(t);
  }
  if(((b_20 != NULL) && (b_20 != t)))
    _fail(t);
  else
    b_20 = t;
  t = lookup_table_0_1(b_20, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      e_20 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = w_8(e_20, t);
  t = map_1_0(x_0, t);
  return(t);
}
ATerm if_verbose5_1_0 (ATerm j_110 (ATerm), ATerm t)
{
  ATerm q_20 = NULL;
  q_20 = t;
  {
    ATerm y_23 = t;
    int c_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_20 = NULL,y_20 = NULL,z_20 = NULL;
        t = term_w_11;
        y_20 = t;
        t = term_g_16;
        z_20 = t;
        t = term_l_16;
        t = d_10(y_20, z_20, t);
        x_20 = t;
        t = (ATerm) ATmakeAppl(sym__2, x_20, term_o_22);
        t = geq_0_0(t);
        t = q_20;
        t = j_110(t);
        LocalPopChoice(c_24);
      }
    else
      {
        t = y_23;
        t = q_20;
      }
  }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm i_110 (ATerm), ATerm t)
{
  ATerm c_21 = NULL;
  c_21 = t;
  {
    ATerm d_24 = t;
    int e_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_21 = NULL,g_21 = NULL,h_21 = NULL;
        t = term_w_11;
        g_21 = t;
        t = term_g_16;
        h_21 = t;
        t = term_l_16;
        t = d_10(g_21, h_21, t);
        f_21 = t;
        t = (ATerm) ATmakeAppl(sym__2, f_21, term_j_19);
        t = geq_0_0(t);
        t = c_21;
        t = i_110(t);
        LocalPopChoice(e_24);
      }
    else
      {
        t = d_24;
        t = c_21;
      }
  }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm k_110 (ATerm), ATerm t)
{
  ATerm k_21 = NULL;
  k_21 = t;
  {
    ATerm g_24 = t;
    int i_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_21 = NULL,s_21 = NULL,t_21 = NULL;
        t = term_w_11;
        s_21 = t;
        t = term_g_16;
        t_21 = t;
        t = term_l_16;
        t = d_10(s_21, t_21, t);
        o_21 = t;
        t = (ATerm) ATmakeAppl(sym__2, o_21, term_t_17);
        t = geq_0_0(t);
        t = k_21;
        t = k_110(t);
        LocalPopChoice(i_24);
      }
    else
      {
        t = g_24;
        t = k_21;
      }
  }
  return(t);
}
static ATerm y_8 (ATerm a_99 (ATerm), ATerm d_30, ATerm c_30, ATerm t)
{
  static ATerm r_23 (ATerm t)
  {
    ATerm f_23 = NULL,g_23 = NULL,i_23 = NULL;
    f_23 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = c_30;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            g_23 = ATgetFirst((ATermList) t);
            i_23 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm n_24 = t;
          int o_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = f_23;
              {
                static ATerm y_0 (ATerm t)
                {
                  t = c_30;
                  return(t);
                }
                t = j_9(a_99, y_0, g_23, i_23, t);
              }
              t = r_23(t);
              LocalPopChoice(o_24);
            }
          else
            {
              t = n_24;
              {
                ATerm i_11 = NULL,l_11 = NULL,j_2 = NULL;
                t = SSLgetAnnotations(f_23);
                i_11 = t;
                t = i_23;
                t = r_23(t);
                l_11 = t;
                t = (ATerm) ATinsert(CheckATermList(l_11), g_23);
                j_2 = t;
                t = SSLsetAnnotations(j_2, i_11);
              }
            }
        }
      }
    return(t);
  }
  t = d_30;
  t = r_23(t);
  return(t);
}
static ATerm a_1 (ATerm t)
{
  ATerm z_24 = NULL;
  if(match_cons(t, sym__2))
    {
      z_24 = ATgetArgument(t, 0);
      if((z_24 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm z_8 (ATerm e_54, ATerm f_54, ATerm g_54, ATerm t)
{
  ATerm x_23 = NULL,h_24 = NULL,l_24 = NULL,m_24 = NULL;
  x_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_54, f_54);
  {
    ATerm p_24 = t;
    int q_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm r_24 = ATgetArgument(t, 0);
            ATerm s_24 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, e_54, f_54);
        t = d_10(e_54, f_54, t);
        LocalPopChoice(q_24);
      }
    else
      {
        t = p_24;
        t = (ATerm) ATempty;
      }
  }
  l_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_24, g_54);
  t = y_8(a_1, l_24, g_54, t);
  h_24 = t;
  t = (ATerm) ATmakeAppl(sym__3, e_54, f_54, h_24);
  t = lookup_table_0_1(e_54, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      m_24 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = h_10(f_54, h_24, m_24, t);
  t = x_23;
  return(t);
}
static ATerm a_9 (ATerm n_114 (ATerm), ATerm o_54, ATerm n_54, ATerm t)
{
  static ATerm b_1 (ATerm t)
  {
    ATerm a_25 = NULL,b_25 = NULL;
    if(match_cons(t, sym__2))
      {
        a_25 = ATgetArgument(t, 0);
        b_25 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, o_54, a_25, b_25);
    t = n_114(t);
    return(t);
  }
  t = n_54;
  t = map_1_0(b_1, t);
  return(t);
}
static ATerm z_25 (ATerm q_25, ATerm t)
{
  t = SSL_fclose(q_25);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm v_25 = NULL,w_25 = NULL;
  w_25 = t;
  if(match_cons(t, sym_Stream_1))
    {
      v_25 = ATgetArgument(t, 0);
      {
        ATerm t_24 = t;
        int u_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(v_25);
            LocalPopChoice(u_24);
          }
        else
          {
            t = t_24;
            t = z_25(w_25, t);
          }
      }
    }
  else
    {
      t = z_25(w_25, t);
    }
  return(t);
}
static ATerm b_9 (ATerm b_24, ATerm t)
{
  t = SSL_read_term_from_stream(b_24);
  return(t);
}
static ATerm f_9 (ATerm x_37, ATerm y_37, ATerm t)
{
  t = SSL_strcat(x_37, y_37);
  return(t);
}
static ATerm c_9 (ATerm g_39, ATerm h_39, ATerm t)
{
  ATerm a_26 = NULL;
  t = SSL_fopen(g_39, h_39);
  a_26 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, a_26);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm f_26 = NULL;
  t = SSL_stdin_stream();
  f_26 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_26);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm h_26 = NULL;
  t = SSL_stdout_stream();
  h_26 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, h_26);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm i_26 = NULL;
  t = SSL_stderr_stream();
  i_26 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, i_26);
  return(t);
}
static ATerm i_28 (ATerm q_26, ATerm t)
{
  ATerm r_26 = NULL;
  t = SSL_explode_term(q_26);
  if(match_cons(t, sym__2))
    {
      ATerm v_24 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) v_24) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm w_24 = ATgetArgument(t, 1);
        if(((ATgetType(w_24) == AT_LIST) && !(ATisEmpty(w_24))))
          {
            r_26 = ATgetFirst((ATermList) w_24);
            {
              ATerm x_24 = (ATerm) ATgetNext((ATermList) w_24);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = r_26;
  if(match_cons(t, sym_stderr_0))
    {
      t = r_26;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = r_26;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = r_26;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm j_28 (ATerm a_27, ATerm f_27, ATerm g_27, ATerm t)
{
  ATerm i_27 = NULL,j_27 = NULL,k_27 = NULL,n_27 = NULL,u_3 = NULL;
  t = SSLgetAnnotations(g_27);
  k_27 = t;
  t = a_27;
  if(match_cons(t, sym_Path_1))
    {
      n_27 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, n_27, f_27);
  u_3 = t;
  t = SSLsetAnnotations(u_3, k_27);
  if(match_cons(t, sym__2))
    {
      i_27 = ATgetArgument(t, 0);
      j_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_9(i_27, j_27, t);
  return(t);
}
static ATerm m_28 (ATerm s_27, ATerm u_27, ATerm v_27, ATerm t)
{
  ATerm w_27 = NULL,x_27 = NULL,y_27 = NULL,b_28 = NULL,v_3 = NULL;
  t = SSLgetAnnotations(v_27);
  y_27 = t;
  t = SSL_is_string(s_27);
  b_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_28, u_27);
  v_3 = t;
  t = SSLsetAnnotations(v_3, y_27);
  if(match_cons(t, sym__2))
    {
      w_27 = ATgetArgument(t, 0);
      x_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_9(w_27, x_27, t);
  return(t);
}
static ATerm d_9 (ATerm t)
{
  ATerm f_28 = NULL,g_28 = NULL,h_28 = NULL;
  f_28 = t;
  if(match_cons(t, sym__2))
    {
      g_28 = ATgetArgument(t, 0);
      h_28 = ATgetArgument(t, 1);
      {
        ATerm y_24 = t;
        int c_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = i_28(f_28, t);
            LocalPopChoice(c_25);
          }
        else
          {
            t = y_24;
            {
              ATerm d_25 = t;
              int e_25 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = j_28(g_28, h_28, f_28, t);
                  LocalPopChoice(e_25);
                }
              else
                {
                  t = d_25;
                  t = m_28(g_28, h_28, f_28, t);
                }
            }
          }
      }
    }
  else
    {
      t = i_28(f_28, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm o_28 = NULL,p_28 = NULL,q_28 = NULL,v_28 = NULL;
  v_28 = t;
  {
    ATerm f_25 = t;
    int g_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, v_28, term_h_25);
        t = d_9(t);
        LocalPopChoice(g_25);
      }
    else
      {
        t = f_25;
        {
          ATerm q_12 = NULL,r_12 = NULL;
          t = term_i_25;
          r_12 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_i_25, v_28);
          t = f_9(r_12, v_28, t);
          q_12 = t;
          t = SSL_perror(q_12);
          _fail(t);
        }
      }
  }
  p_28 = t;
  if(match_cons(t, sym_Stream_1))
    {
      q_28 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = b_9(q_28, t);
  o_28 = t;
  t = p_28;
  t = fclose_0_0(t);
  t = o_28;
  return(t);
}
static ATerm f_1 (ATerm t)
{
  t = term_j_25;
  return(t);
}
static ATerm g_1 (ATerm t)
{
  t = term_k_25;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm l_25 = t;
  int m_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_28 = NULL,a_29 = NULL;
      y_28 = t;
      t = (ATerm) ATinsert(ATempty, term_n_25);
      a_29 = t;
      t = (ATerm) ATmakeAppl(sym__2, y_28, (ATerm) ATinsert(ATempty, term_n_25));
      t = g_9(y_28, a_29, t);
      LocalPopChoice(m_25);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = l_25;
      {
        ATerm o_25 = t;
        int p_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_25 = t;
            if((PushChoice() == 0))
              {
                ATerm b_29 = NULL,c_29 = NULL;
                b_29 = t;
                t = (ATerm) ATinsert(ATempty, term_o_15);
                c_29 = t;
                t = (ATerm) ATmakeAppl(sym__2, b_29, (ATerm) ATinsert(ATempty, term_o_15));
                t = g_9(b_29, c_29, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = r_25;
              }
            t = debug_1_0(f_1, t);
            LocalPopChoice(p_25);
          }
        else
          {
            t = o_25;
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
  t = term_s_25;
  return(t);
}
static ATerm m_1 (ATerm t)
{
  t = debug_1_0(p_1, t);
  return(t);
}
static ATerm p_1 (ATerm t)
{
  t = term_t_25;
  return(t);
}
static ATerm t_1 (ATerm t)
{
  ATerm k_30 = NULL,l_30 = NULL,m_30 = NULL;
  k_30 = t;
  t = term_n_23;
  l_30 = t;
  t = (ATerm) ATinsert(ATempty, term_u_25);
  m_30 = t;
  t = SSL_printnl(l_30, m_30);
  t = k_30;
  return(t);
}
static ATerm u_1 (ATerm t)
{
  ATerm n_30 = NULL,o_30 = NULL,t_30 = NULL;
  if(match_cons(t, sym__3))
    {
      n_30 = ATgetArgument(t, 0);
      o_30 = ATgetArgument(t, 1);
      t_30 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = z_8(n_30, o_30, t_30, t);
  return(t);
}
static ATerm v_1 (ATerm t)
{
  ATerm u_30 = NULL,v_30 = NULL,b_31 = NULL;
  u_30 = t;
  t = term_n_23;
  v_30 = t;
  t = (ATerm) ATinsert(ATempty, term_x_25);
  b_31 = t;
  t = SSL_printnl(v_30, b_31);
  t = u_30;
  return(t);
}
static ATerm y_1 (ATerm t)
{
  ATerm c_31 = NULL,f_31 = NULL,h_31 = NULL;
  c_31 = t;
  t = term_n_23;
  f_31 = t;
  t = (ATerm) ATinsert(ATempty, term_u_25);
  h_31 = t;
  t = SSL_printnl(f_31, h_31);
  t = c_31;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm d_29 = NULL,f_29 = NULL,g_29 = NULL,h_29 = NULL,i_29 = NULL,n_29 = NULL,o_29 = NULL,r_29 = NULL,s_29 = NULL,t_29 = NULL,u_29 = NULL,w_29 = NULL,x_29 = NULL,z_29 = NULL;
  d_29 = t;
  t = if_verbose5_1_0(h_1, t);
  {
    ATerm y_25 = t;
    if((PushChoice() == 0))
      {
        ATerm f_30 = NULL,j_30 = NULL;
        t = term_b_26;
        f_30 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, d_29);
        j_30 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_b_26, (ATerm) ATmakeAppl(sym_Imported_1, d_29));
        t = d_10(f_30, j_30, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = y_25;
      }
  }
  g_29 = t;
  t = term_b_26;
  t_29 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_b_26, term_c_26, (ATerm) ATinsert(ATempty, d_29));
  t = lookup_table_0_1(t_29, t);
  z_29 = t;
  t = term_c_26;
  u_29 = t;
  t = (ATerm) ATinsert(ATempty, d_29);
  w_29 = t;
  t = z_29;
  if(match_cons(t, sym_Hashtable_1))
    {
      x_29 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = h_10(u_29, w_29, x_29, t);
  t = g_29;
  t = if_verbose4_1_0(m_1, t);
  t = read_repository_file_0_0(t);
  t = if_verbose6_1_0(t_1, t);
  f_29 = t;
  t = term_b_26;
  s_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_26, f_29);
  t = a_9(u_1, s_29, f_29, t);
  t = if_verbose6_1_0(v_1, t);
  t = term_b_26;
  h_29 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_b_26, (ATerm)ATmakeAppl(sym_Imported_1, d_29), (ATerm) ATempty);
  t = lookup_table_0_1(h_29, t);
  r_29 = t;
  t = (ATerm) ATmakeAppl(sym_Imported_1, d_29);
  i_29 = t;
  t = (ATerm) ATempty;
  n_29 = t;
  t = r_29;
  if(match_cons(t, sym_Hashtable_1))
    {
      o_29 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = h_10(i_29, n_29, o_29, t);
  t = (ATerm) ATmakeAppl(sym__3, term_b_26, (ATerm)ATmakeAppl(sym_Imported_1, d_29), (ATerm) ATempty);
  t = if_verbose4_1_0(y_1, t);
  return(t);
}
ATerm repeat_2_0 (ATerm d_87 (ATerm), ATerm e_87 (ATerm), ATerm t)
{
  static ATerm i_31 (ATerm t)
  {
    ATerm d_26 = t;
    int e_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_87(t);
        t = i_31(t);
        LocalPopChoice(e_26);
      }
    else
      {
        t = d_26;
        t = e_87(t);
      }
    return(t);
  }
  t = i_31(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm g_26 = t;
  int j_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_31 = NULL,m_31 = NULL;
      t = term_w_11;
      l_31 = t;
      t = term_k_26;
      m_31 = t;
      t = term_l_26;
      t = d_10(l_31, m_31, t);
      LocalPopChoice(j_26);
    }
  else
    {
      t = g_26;
      {
        ATerm m_26 = t;
        int n_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_31 = NULL;
            t = term_o_26;
            p_31 = t;
            t = SSL_getenv(p_31);
            LocalPopChoice(n_26);
          }
        else
          {
            t = m_26;
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
  t = term_p_26;
  return(t);
}
static ATerm c_2 (ATerm t)
{
  ATerm z_31 = NULL,a_32 = NULL;
  t = term_b_26;
  z_31 = t;
  t = term_s_26;
  a_32 = t;
  t = term_t_26;
  t = d_10(z_31, a_32, t);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm u_26 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = u_26;
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
  t = term_v_26;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm t_31 = NULL;
  t = if_verbose5_1_0(a_2, t);
  t_31 = t;
  {
    ATerm w_26 = t;
    int x_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_31 = NULL,x_31 = NULL;
        t = term_b_26;
        u_31 = t;
        t = term_c_26;
        x_31 = t;
        t = term_y_26;
        t = d_10(u_31, x_31, t);
        LocalPopChoice(x_26);
      }
    else
      {
        t = w_26;
        {
          ATerm y_31 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          y_31 = t;
          t = repeat_2_0(c_2, _id, t);
          t = y_31;
        }
      }
  }
  t = t_31;
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
  t = term_z_26;
  return(t);
}
static ATerm g_33 (ATerm h_32, ATerm t)
{
  ATerm k_32 = NULL,l_32 = NULL,m_32 = NULL;
  t = term_b_26;
  l_32 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, h_32);
  m_32 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_26, (ATerm) ATmakeAppl(sym_Tool_1, h_32));
  t = d_10(l_32, m_32, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm b_27 = ATgetFirst((ATermList) t);
      if(match_cons(b_27, sym__2))
        {
          ATerm d_27 = ATgetArgument(b_27, 0);
          k_32 = ATgetArgument(b_27, 1);
        }
      else
        _fail(t);
      {
        ATerm c_27 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = k_32;
  return(t);
}
static ATerm o_2 (ATerm t)
{
  t = debug_1_0(q_2, t);
  return(t);
}
static ATerm q_2 (ATerm t)
{
  t = term_z_26;
  return(t);
}
static ATerm r_2 (ATerm t)
{
  t = term_b_26;
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
  ATerm h_27 = t;
  int l_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_32 = NULL,o_32 = NULL,r_32 = NULL;
      t = if_verbose5_1_0(g_2, t);
      t = xtc_load_0_0(t);
      r_32 = t;
      if(match_cons(t, sym__2))
        {
          n_32 = ATgetArgument(t, 0);
          o_32 = ATgetArgument(t, 1);
          {
            ATerm m_27 = t;
            int o_27 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm u_32 = NULL,v_32 = NULL,w_32 = NULL;
                t = term_b_26;
                v_32 = t;
                t = (ATerm) ATmakeAppl(sym_Tool_1, n_32);
                w_32 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_b_26, (ATerm) ATmakeAppl(sym_Tool_1, n_32));
                t = d_10(v_32, w_32, t);
                {
                  static ATerm m_2 (ATerm t)
                  {
                    if(match_cons(t, sym__2))
                      {
                        if((o_32 != ATgetArgument(t, 0)))
                          {
                            _fail(ATgetArgument(t, 0));
                          }
                        if(((u_32 != NULL) && (u_32 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          u_32 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = fetch_1_0(m_2, t);
                }
                t = not_null(u_32);
                LocalPopChoice(o_27);
              }
            else
              {
                t = m_27;
                t = g_33(r_32, t);
              }
          }
        }
      else
        {
          t = g_33(r_32, t);
        }
      t = if_verbose5_1_0(o_2, t);
      LocalPopChoice(l_27);
    }
  else
    {
      t = h_27;
      {
        ATerm f_33 = NULL,v_12 = NULL,a_13 = NULL;
        f_33 = t;
        t = term_n_23;
        v_12 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_q_27), f_33), term_p_27);
        a_13 = t;
        t = SSL_printnl(v_12, a_13);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_q_27), f_33), term_p_27);
        t = if_verbose5_1_0(r_2, t);
        _fail(t);
      }
    }
  return(t);
}
ATerm xtc_command_1_0 (ATerm u_119 (ATerm), ATerm t)
{
  ATerm k_33 = NULL,l_33 = NULL;
  l_33 = t;
  t = u_119(t);
  t = xtc_find_0_0(t);
  k_33 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_33, l_33);
  {
    static ATerm v_2 (ATerm t)
    {
      ATerm m_33 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, k_33, l_33);
      t = u_8(k_33, l_33, t);
      t = term_r_27;
      m_33 = t;
      t = SSL_exit(m_33);
      return(t);
    }
    t = fork_and_wait_1_0(v_2, t);
  }
  t = l_33;
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t)
{
  ATerm q_33 = NULL,r_33 = NULL;
  q_33 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm s_33 = NULL,t_33 = NULL;
      t = q_33;
      t = xtc_new_file_0_0(t);
      s_33 = t;
      t = r_0(t);
      t_33 = t;
      t = (ATerm) ATmakeAppl(sym__2, t_33, (ATerm) ATinsert(ATinsert(ATempty, s_33), term_x_11));
      t = conc_0_0(t);
      t = xtc_command_1_0(p_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, s_33);
    }
  else
    {
      ATerm v_33 = NULL,w_33 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          r_33 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = r_33;
      t = xtc_new_file_0_0(t);
      v_33 = t;
      t = r_0(t);
      w_33 = t;
      t = (ATerm) ATmakeAppl(sym__2, w_33, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, v_33), term_x_11), r_33), term_t_27));
      t = conc_0_0(t);
      t = xtc_command_1_0(p_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, v_33);
    }
  return(t);
}
static ATerm p_36 (ATerm d_34, ATerm e_34, ATerm f_34, ATerm t)
{
  ATerm g_34 = NULL,j_34 = NULL,c_13 = NULL,d_13 = NULL,n_4 = NULL;
  t = SSLgetAnnotations(f_34);
  g_34 = t;
  t = d_34;
  {
    ATerm z_27 = t;
    if((PushChoice() == 0))
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("rtree", 0, ATtrue)))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = z_27;
      }
  }
  j_34 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_34, e_34);
  n_4 = t;
  t = SSLsetAnnotations(n_4, g_34);
  d_13 = t;
  t = SSL_explode_term(d_13);
  if(match_cons(t, sym__2))
    {
      ATerm a_28 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) a_28) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm c_28 = ATgetArgument(t, 1);
        if(((ATgetType(c_28) == AT_LIST) && !(ATisEmpty(c_28))))
          {
            ATerm d_28 = ATgetFirst((ATermList) c_28);
            ATerm e_28 = (ATerm) ATgetNext((ATermList) c_28);
            if(((ATgetType(e_28) == AT_LIST) && !(ATisEmpty(e_28))))
              {
                c_13 = ATgetFirst((ATermList) e_28);
                {
                  ATerm k_28 = (ATerm) ATgetNext((ATermList) e_28);
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
    ATerm l_28 = t;
    int n_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_28 = t;
        int s_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_34 = NULL;
            if(match_cons(t, sym_FILE_1))
              {
                q_34 = ATgetArgument(t, 0);
                {
                  ATerm i_13 = NULL,o_4 = NULL;
                  t = SSLgetAnnotations(c_13);
                  i_13 = t;
                  t = (ATerm) ATmakeAppl(sym_FILE_1, q_34);
                  o_4 = t;
                  t = SSLsetAnnotations(o_4, i_13);
                }
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = c_13;
              }
            LocalPopChoice(s_28);
            t = xtc_transform_file_2_0(a_3, b_3, t);
          }
        else
          {
            t = r_28;
            t = xtc_transform_term_2_0(c_3, i_3, t);
          }
        t = read_from_0_0(t);
        LocalPopChoice(n_28);
      }
    else
      {
        t = l_28;
        {
          ATerm t_35 = NULL,v_35 = NULL,y_35 = NULL;
          t = term_n_23;
          v_35 = t;
          t = (ATerm) ATinsert(ATinsert(ATempty, e_34), term_t_28);
          y_35 = t;
          t = SSL_printnl(v_35, y_35);
          t = term_a_16;
          t_35 = t;
          t = SSL_exit(t_35);
          t = (ATerm) ATinsert(ATinsert(ATempty, e_34), term_t_28);
        }
      }
  }
  return(t);
}
static ATerm q_36 (ATerm z_35, ATerm d_36, ATerm t)
{
  ATerm s_13 = NULL;
  t = SSL_explode_term(d_36);
  if(match_cons(t, sym__2))
    {
      ATerm u_28 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) u_28) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm w_28 = ATgetArgument(t, 1);
        if(((ATgetType(w_28) == AT_LIST) && !(ATisEmpty(w_28))))
          {
            ATerm x_28 = ATgetFirst((ATermList) w_28);
            ATerm z_28 = (ATerm) ATgetNext((ATermList) w_28);
            if(((ATgetType(z_28) == AT_LIST) && !(ATisEmpty(z_28))))
              {
                s_13 = ATgetFirst((ATermList) z_28);
                {
                  ATerm e_29 = (ATerm) ATgetNext((ATermList) z_28);
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
  t = s_13;
  {
    ATerm j_29 = t;
    int k_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = read_from_0_0(t);
        LocalPopChoice(k_29);
      }
    else
      {
        t = j_29;
        {
          ATerm h_36 = NULL,i_36 = NULL,j_36 = NULL;
          t = term_n_23;
          i_36 = t;
          t = (ATerm) ATinsert(ATinsert(ATempty, z_35), term_t_28);
          j_36 = t;
          t = SSL_printnl(i_36, j_36);
          t = term_a_16;
          h_36 = t;
          t = SSL_exit(h_36);
          t = (ATerm) ATinsert(ATinsert(ATempty, z_35), term_t_28);
        }
      }
  }
  return(t);
}
static ATerm a_3 (ATerm t)
{
  t = term_l_29;
  return(t);
}
static ATerm b_3 (ATerm t)
{
  ATerm s_34 = NULL,t_34 = NULL,u_34 = NULL,v_34 = NULL,w_34 = NULL;
  w_34 = t;
  t = pass_verbose_0_0(t);
  s_34 = t;
  t = w_34;
  t = pass_keep_0_0(t);
  t_34 = t;
  t = term_m_29;
  {
    ATerm p_29 = t;
    int q_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_34 = NULL,y_34 = NULL;
        t = term_w_11;
        x_34 = t;
        t = term_m_29;
        y_34 = t;
        t = term_v_29;
        t = d_10(x_34, y_34, t);
        LocalPopChoice(q_29);
        t = (ATerm) ATinsert(ATempty, term_m_29);
      }
    else
      {
        t = p_29;
        t = (ATerm) ATempty;
      }
  }
  u_34 = t;
  t = term_y_29;
  {
    ATerm e_30 = t;
    int i_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_34 = NULL,a_35 = NULL;
        t = term_w_11;
        z_34 = t;
        t = term_y_29;
        a_35 = t;
        t = term_p_30;
        t = d_10(z_34, a_35, t);
        LocalPopChoice(i_30);
      }
    else
      {
        t = e_30;
        t = (ATerm) ATempty;
      }
  }
  v_34 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, v_34), t_34), s_34), u_34);
  t = concat_0_0(t);
  return(t);
}
static ATerm c_3 (ATerm t)
{
  t = term_l_29;
  return(t);
}
static ATerm i_3 (ATerm t)
{
  ATerm b_35 = NULL,c_35 = NULL,e_35 = NULL,g_35 = NULL,i_35 = NULL;
  i_35 = t;
  t = pass_verbose_0_0(t);
  b_35 = t;
  t = i_35;
  t = pass_keep_0_0(t);
  c_35 = t;
  t = term_m_29;
  {
    ATerm q_30 = t;
    int r_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_35 = NULL,l_35 = NULL;
        t = term_w_11;
        k_35 = t;
        t = term_m_29;
        l_35 = t;
        t = term_v_29;
        t = d_10(k_35, l_35, t);
        LocalPopChoice(r_30);
        t = (ATerm) ATinsert(ATempty, term_m_29);
      }
    else
      {
        t = q_30;
        t = (ATerm) ATempty;
      }
  }
  e_35 = t;
  t = term_y_29;
  {
    ATerm s_30 = t;
    int w_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_35 = NULL,p_35 = NULL;
        t = term_w_11;
        n_35 = t;
        t = term_y_29;
        p_35 = t;
        t = term_p_30;
        t = d_10(n_35, p_35, t);
        LocalPopChoice(w_30);
      }
    else
      {
        t = s_30;
        t = (ATerm) ATempty;
      }
  }
  g_35 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, g_35), c_35), b_35), e_35);
  t = concat_0_0(t);
  return(t);
}
ATerm parse_module_0_0 (ATerm t)
{
  ATerm m_36 = NULL,n_36 = NULL,o_36 = NULL;
  m_36 = t;
  if(match_cons(t, sym__2))
    {
      n_36 = ATgetArgument(t, 0);
      o_36 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_36;
  if(match_string(t, "rtree"))
    {
      ATerm x_30 = t;
      int y_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = p_36(n_36, o_36, m_36, t);
          LocalPopChoice(y_30);
        }
      else
        {
          t = x_30;
          t = q_36(o_36, m_36, t);
        }
    }
  else
    {
      t = p_36(n_36, o_36, m_36, t);
    }
  return(t);
}
ATerm debug_1_0 (ATerm e_94 (ATerm), ATerm t)
{
  ATerm s_36 = NULL,t_36 = NULL,u_36 = NULL,x_36 = NULL;
  s_36 = t;
  t = e_94(t);
  t_36 = t;
  t = term_n_23;
  u_36 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, s_36), t_36);
  x_36 = t;
  t = SSL_printnl(u_36, x_36);
  t = s_36;
  return(t);
}
ATerm if_verbose3_1_0 (ATerm h_110 (ATerm), ATerm t)
{
  ATerm z_36 = NULL;
  z_36 = t;
  {
    ATerm z_30 = t;
    int a_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_37 = NULL,e_37 = NULL,f_37 = NULL;
        t = term_w_11;
        e_37 = t;
        t = term_g_16;
        f_37 = t;
        t = term_l_16;
        t = d_10(e_37, f_37, t);
        d_37 = t;
        t = (ATerm) ATmakeAppl(sym__2, d_37, term_p_17);
        t = geq_0_0(t);
        t = z_36;
        t = h_110(t);
        LocalPopChoice(a_31);
      }
    else
      {
        t = z_30;
        t = z_36;
      }
  }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm b_95 (ATerm), ATerm t)
{
  ATerm h_37 = NULL;
  static ATerm k_3 (ATerm t)
  {
    t = b_95(t);
    if(((h_37 != NULL) && (h_37 != t)))
      _fail(t);
    else
      h_37 = t;
    return(t);
  }
  t = fetch_1_0(k_3, t);
  t = not_null(h_37);
  return(t);
}
static ATerm g_9 (ATerm x_38, ATerm y_38, ATerm t)
{
  t = SSL_access(x_38, y_38);
  return(t);
}
ATerm is_relpath_0_0 (ATerm t)
{
  ATerm d_31 = t;
  if((PushChoice() == 0))
    {
      ATerm i_37 = NULL;
      i_37 = t;
      t = SSL_explode_string(i_37);
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          ATerm e_31 = ATgetFirst((ATermList) t);
          if(((ATgetType(e_31) != AT_INT) || (ATgetInt((ATermInt) e_31) != 47)))
            _fail(t);
          {
            ATerm g_31 = (ATerm) ATgetNext((ATermList) t);
          }
        }
      else
        _fail(t);
      t = i_37;
      PopChoice();
      _fail(t);
    }
  else
    {
      t = d_31;
    }
  return(t);
}
static ATerm h_9 (ATerm j_86 (ATerm), ATerm h_22, ATerm g_22, ATerm t)
{
  t = j_86(t);
  {
    ATerm j_31 = t;
    int k_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm m_3 (ATerm t)
        {
          ATerm t_37 = NULL;
          t_37 = t;
          {
            ATerm n_31 = t;
            int o_31 = stack_ptr;
            if((PushChoice() == 0))
              {
                static ATerm o_3 (ATerm t)
                {
                  ATerm v_37 = NULL,w_37 = NULL,z_37 = NULL,a_38 = NULL,b_38 = NULL;
                  w_37 = t;
                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, w_37), term_z_13), h_22), term_q_31), t_37);
                  b_38 = t;
                  t = SSL_concat_strings(b_38);
                  z_37 = t;
                  t = (ATerm) ATinsert(ATempty, term_o_15);
                  a_38 = t;
                  t = (ATerm) ATmakeAppl(sym__2, z_37, (ATerm) ATinsert(ATempty, term_o_15));
                  t = g_9(z_37, a_38, t);
                  v_37 = t;
                  t = (ATerm) ATmakeAppl(sym__2, w_37, (ATerm) ATmakeAppl(sym_FILE_1, v_37));
                  return(t);
                }
                t = h_22;
                t = is_relpath_0_0(t);
                t = g_22;
                t = fetch_elem_1_0(o_3, t);
                LocalPopChoice(o_31);
              }
            else
              {
                t = n_31;
                {
                  static ATerm p_3 (ATerm t)
                  {
                    ATerm a_14 = NULL,c_14 = NULL,d_14 = NULL,k_14 = NULL,l_14 = NULL;
                    c_14 = t;
                    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, c_14), term_z_13), h_22);
                    l_14 = t;
                    t = SSL_concat_strings(l_14);
                    d_14 = t;
                    t = (ATerm) ATinsert(ATempty, term_o_15);
                    k_14 = t;
                    t = (ATerm) ATmakeAppl(sym__2, d_14, (ATerm) ATinsert(ATempty, term_o_15));
                    t = g_9(d_14, k_14, t);
                    a_14 = t;
                    t = (ATerm) ATmakeAppl(sym__2, c_14, (ATerm) ATmakeAppl(sym_FILE_1, a_14));
                    return(t);
                  }
                  t = SSL_explode_string(h_22);
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      ATerm r_31 = ATgetFirst((ATermList) t);
                      if(((ATgetType(r_31) != AT_INT) || (ATgetInt((ATermInt) r_31) != 47)))
                        _fail(t);
                      {
                        ATerm s_31 = (ATerm) ATgetNext((ATermList) t);
                      }
                    }
                  else
                    _fail(t);
                  t = g_22;
                  t = fetch_elem_1_0(p_3, t);
                }
              }
          }
          return(t);
        }
        t = fetch_elem_1_0(m_3, t);
        LocalPopChoice(k_31);
      }
    else
      {
        t = j_31;
        {
          ATerm v_31 = t;
          int w_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              static ATerm r_3 (ATerm t)
              {
                ATerm c_38 = NULL,d_38 = NULL,e_38 = NULL,f_38 = NULL,h_38 = NULL,i_38 = NULL;
                c_38 = t;
                t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, c_38), term_z_13), h_22);
                i_38 = t;
                t = SSL_concat_strings(i_38);
                d_38 = t;
                t = term_b_26;
                f_38 = t;
                t = (ATerm) ATmakeAppl(sym_Tool_1, d_38);
                h_38 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_b_26, (ATerm) ATmakeAppl(sym_Tool_1, d_38));
                t = d_10(f_38, h_38, t);
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    ATerm b_32 = ATgetFirst((ATermList) t);
                    if(match_cons(b_32, sym__2))
                      {
                        ATerm d_32 = ATgetArgument(b_32, 0);
                        e_38 = ATgetArgument(b_32, 1);
                      }
                    else
                      _fail(t);
                    {
                      ATerm c_32 = (ATerm) ATgetNext((ATermList) t);
                    }
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym__2, c_38, (ATerm) ATmakeAppl(sym_FILE_1, e_38));
                return(t);
              }
              t = g_22;
              t = fetch_elem_1_0(r_3, t);
              LocalPopChoice(w_31);
            }
          else
            {
              t = v_31;
              {
                ATerm e_32 = t;
                int f_32 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm j_38 = NULL,n_38 = NULL;
                    t = term_w_11;
                    j_38 = t;
                    t = term_g_32;
                    n_38 = t;
                    t = term_i_32;
                    t = d_10(j_38, n_38, t);
                    LocalPopChoice(f_32);
                    {
                      ATerm o_38 = NULL,p_38 = NULL,q_38 = NULL,r_38 = NULL,t_38 = NULL;
                      o_38 = t;
                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_p_32), h_22), term_j_32);
                      t_38 = t;
                      t = SSL_concat_strings(t_38);
                      p_38 = t;
                      t = term_n_23;
                      q_38 = t;
                      t = (ATerm) ATinsert(ATempty, p_38);
                      r_38 = t;
                      t = SSL_printnl(q_38, r_38);
                      t = o_38;
                      _fail(t);
                    }
                  }
                else
                  {
                    t = e_32;
                    {
                      ATerm u_38 = NULL,v_38 = NULL,w_38 = NULL;
                      t = term_n_23;
                      v_38 = t;
                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_p_32), h_22), term_j_32);
                      w_38 = t;
                      t = SSL_printnl(v_38, w_38);
                      t = term_a_16;
                      u_38 = t;
                      t = SSL_exit(u_38);
                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_p_32), h_22), term_j_32);
                    }
                  }
              }
            }
        }
      }
  }
  return(t);
}
static ATerm w_3 (ATerm t)
{
  t = term_q_32;
  return(t);
}
ATerm get_module_1_0 (ATerm i_86 (ATerm), ATerm t)
{
  ATerm c_39 = NULL,d_39 = NULL,k_39 = NULL,l_39 = NULL;
  t = basename_1_0(_id, t);
  k_39 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_h_25), term_x_32), term_t_32), term_s_32);
  l_39 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_39, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_h_25), term_x_32), term_t_32), term_s_32));
  t = h_9(i_86, k_39, l_39, t);
  if(match_cons(t, sym__2))
    {
      ATerm y_32 = ATgetArgument(t, 0);
      ATerm z_32 = ATgetArgument(t, 1);
      if(match_cons(z_32, sym_FILE_1))
        {
          c_39 = ATgetArgument(z_32, 0);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  {
    static ATerm s_3 (ATerm t)
    {
      ATerm n_39 = NULL;
      n_39 = t;
      t = c_39;
      t = debug_1_0(w_3, t);
      t = n_39;
      return(t);
    }
    t = if_verbose3_1_0(s_3, t);
  }
  t = parse_module_0_0(t);
  d_39 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_39, d_39);
  return(t);
}
static ATerm j_9 (ATerm d_99 (ATerm), ATerm e_99 (ATerm), ATerm h_30, ATerm g_30, ATerm t)
{
  t = e_99(t);
  {
    static ATerm x_3 (ATerm t)
    {
      ATerm p_39 = NULL;
      p_39 = t;
      t = (ATerm) ATmakeAppl(sym__2, h_30, p_39);
      t = d_99(t);
      return(t);
    }
    t = fetch_1_0(x_3, t);
  }
  t = g_30;
  return(t);
}
static ATerm k_9 (ATerm v_98 (ATerm), ATerm b_30, ATerm a_30, ATerm t)
{
  static ATerm f_40 (ATerm t)
  {
    ATerm a_40 = NULL,b_40 = NULL,c_40 = NULL;
    a_40 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = a_40;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            b_40 = ATgetFirst((ATermList) t);
            c_40 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm a_33 = t;
          int b_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = a_40;
              {
                static ATerm a_4 (ATerm t)
                {
                  t = a_30;
                  return(t);
                }
                t = j_9(v_98, a_4, b_40, c_40, t);
              }
              t = f_40(t);
              LocalPopChoice(b_33);
            }
          else
            {
              t = a_33;
              {
                ATerm t_14 = NULL,a_15 = NULL,s_4 = NULL;
                t = SSLgetAnnotations(a_40);
                t_14 = t;
                t = c_40;
                t = f_40(t);
                a_15 = t;
                t = (ATerm) ATinsert(CheckATermList(a_15), b_40);
                s_4 = t;
                t = SSLsetAnnotations(s_4, t_14);
              }
            }
        }
      }
    return(t);
  }
  t = b_30;
  t = f_40(t);
  return(t);
}
static ATerm b_4 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm c_33 = ATgetArgument(t, 0);
      if(((ATgetType(c_33) != AT_LIST) || !(ATisEmpty(c_33))))
        _fail(t);
      {
        ATerm d_33 = ATgetArgument(t, 1);
        if(((ATgetType(d_33) != AT_LIST) || !(ATisEmpty(d_33))))
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
  ATerm r_40 = NULL,s_40 = NULL,v_40 = NULL,w_40 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm e_33 = ATgetArgument(t, 0);
      if(((ATgetType(e_33) == AT_LIST) && !(ATisEmpty(e_33))))
        {
          r_40 = ATgetFirst((ATermList) e_33);
          s_40 = (ATerm) ATgetNext((ATermList) e_33);
        }
      else
        _fail(t);
      {
        ATerm h_33 = ATgetArgument(t, 1);
        if(((ATgetType(h_33) == AT_LIST) && !(ATisEmpty(h_33))))
          {
            v_40 = ATgetFirst((ATermList) h_33);
            w_40 = (ATerm) ATgetNext((ATermList) h_33);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, r_40, v_40), (ATerm) ATmakeAppl(sym__2, s_40, w_40));
  return(t);
}
static ATerm j_4 (ATerm t)
{
  ATerm x_40 = NULL,y_40 = NULL;
  if(match_cons(t, sym__2))
    {
      x_40 = ATgetArgument(t, 0);
      y_40 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(y_40), x_40);
  return(t);
}
static ATerm p_9 (ATerm o_631, ATerm t_631, ATerm y_59, ATerm t)
{
  ATerm m_40 = NULL,n_40 = NULL,o_40 = NULL,p_40 = NULL;
  t = SSL_explode_term(t_631);
  if(match_cons(t, sym__2))
    {
      m_40 = ATgetArgument(t, 0);
      o_40 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(o_631);
  if(match_cons(t, sym__2))
    {
      if((m_40 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      n_40 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, n_40, o_40);
  t = genzip_4_0(b_4, i_4, j_4, _id, t);
  p_40 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_40, y_59);
  t = conc_0_0(t);
  return(t);
}
static ATerm k_4 (ATerm t)
{
  ATerm g_41 = NULL;
  g_41 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, g_41);
  return(t);
}
static ATerm l_4 (ATerm t)
{
  ATerm j_41 = NULL,k_41 = NULL,l_41 = NULL,m_41 = NULL,u_4 = NULL;
  m_41 = t;
  if(match_cons(t, sym__2))
    {
      k_41 = ATgetArgument(t, 0);
      l_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_41);
  j_41 = t;
  t = l_41;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, k_41, l_41);
  u_4 = t;
  t = SSLsetAnnotations(u_4, j_41);
  return(t);
}
static ATerm m_4 (ATerm t)
{
  ATerm s_42 = NULL,t_42 = NULL,u_42 = NULL,v_42 = NULL,w_42 = NULL;
  s_42 = t;
  if(match_cons(t, sym__2))
    {
      t_42 = ATgetArgument(t, 0);
      u_42 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_42;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_42 = ATgetFirst((ATermList) t);
      w_42 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm i_33 = t;
        int j_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = r_43(t_42, u_42, s_42, t);
            LocalPopChoice(j_33);
          }
        else
          {
            t = i_33;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(t_42), v_42), w_42);
          }
      }
    }
  else
    {
      t = r_43(t_42, u_42, s_42, t);
    }
  return(t);
}
static ATerm r_43 (ATerm t_41, ATerm u_41, ATerm v_41, ATerm t)
{
  ATerm w_41 = NULL,z_41 = NULL,v_4 = NULL,j_42 = NULL,k_42 = NULL,l_42 = NULL,m_42 = NULL;
  t = SSLgetAnnotations(v_41);
  w_41 = t;
  t = u_41;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      j_42 = ATgetFirst((ATermList) t);
      m_42 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = j_42;
  if(match_cons(t, sym__2))
    {
      k_42 = ATgetArgument(t, 0);
      l_42 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm n_33 = t;
    int o_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_42;
        if((k_42 != t))
          {
            _fail(t);
          }
        t = m_42;
        LocalPopChoice(o_33);
      }
    else
      {
        t = n_33;
        t = u_41;
        t = p_9(k_42, l_42, m_42, t);
      }
  }
  z_41 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_41, z_41);
  v_4 = t;
  t = SSLsetAnnotations(v_4, w_41);
  return(t);
}
static ATerm p_4 (ATerm t)
{
  ATerm f_43 = NULL;
  if(match_cons(t, sym__2))
    {
      f_43 = ATgetArgument(t, 0);
      if((f_43 != ATgetArgument(t, 1)))
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
  ATerm p_33 = t;
  int u_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(k_4, l_4, m_4, t);
      LocalPopChoice(u_33);
    }
  else
    {
      t = p_33;
      {
        ATerm a_43 = NULL,b_43 = NULL,c_43 = NULL;
        a_43 = t;
        if(match_cons(t, sym__2))
          {
            b_43 = ATgetArgument(t, 0);
            c_43 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = a_43;
        t = k_9(p_4, b_43, c_43, t);
      }
    }
  return(t);
}
static ATerm r_9 (ATerm q_120 (ATerm), ATerm r_120 (ATerm), ATerm s_120 (ATerm), ATerm l_63, ATerm i_63, ATerm p_63, ATerm m_63, ATerm j_63, ATerm k_63, ATerm t)
{
  ATerm s_43 = NULL,t_43 = NULL,u_43 = NULL,v_43 = NULL,w_43 = NULL,x_43 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, l_63, m_63);
  t = q_120(t);
  s_43 = t;
  t = r_120(t);
  t_43 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_43, p_63);
  t = diff_0_0(t);
  u_43 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_43, i_63);
  t = conc_0_0(t);
  v_43 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_43, p_63);
  t = conc_0_0(t);
  w_43 = t;
  t = (ATerm) ATmakeAppl(sym__3, l_63, s_43, j_63);
  t = s_120(t);
  x_43 = t;
  t = (ATerm) ATmakeAppl(sym__5, v_43, w_43, m_63, x_43, k_63);
  return(t);
}
ATerm GnNext_3_0 (ATerm q_120 (ATerm), ATerm r_120 (ATerm), ATerm s_120 (ATerm), ATerm t)
{
  ATerm z_43 = NULL,a_44 = NULL,b_44 = NULL,c_44 = NULL,d_44 = NULL,e_44 = NULL;
  if(match_cons(t, sym__5))
    {
      ATerm x_33 = ATgetArgument(t, 0);
      if(((ATgetType(x_33) == AT_LIST) && !(ATisEmpty(x_33))))
        {
          z_43 = ATgetFirst((ATermList) x_33);
          a_44 = (ATerm) ATgetNext((ATermList) x_33);
        }
      else
        _fail(t);
      b_44 = ATgetArgument(t, 1);
      c_44 = ATgetArgument(t, 2);
      d_44 = ATgetArgument(t, 3);
      e_44 = ATgetArgument(t, 4);
    }
  else
    _fail(t);
  t = r_9(q_120, r_120, s_120, z_43, a_44, b_44, c_44, d_44, e_44, t);
  return(t);
}
ATerm while_not_2_0 (ATerm u_87 (ATerm), ATerm v_87 (ATerm), ATerm t)
{
  static ATerm f_44 (ATerm t)
  {
    ATerm y_33 = t;
    int z_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_87(t);
        LocalPopChoice(z_33);
      }
    else
      {
        t = y_33;
        t = v_87(t);
        t = f_44(t);
      }
    return(t);
  }
  t = f_44(t);
  return(t);
}
ATerm for_3_0 (ATerm x_87 (ATerm), ATerm y_87 (ATerm), ATerm z_87 (ATerm), ATerm t)
{
  t = x_87(t);
  t = while_not_2_0(y_87, z_87, t);
  return(t);
}
static ATerm q_4 (ATerm t)
{
  ATerm j_44 = NULL,k_44 = NULL,l_44 = NULL;
  if(match_cons(t, sym__3))
    {
      j_44 = ATgetArgument(t, 0);
      k_44 = ATgetArgument(t, 1);
      l_44 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__5, j_44, j_44, k_44, l_44, (ATerm) ATempty);
  return(t);
}
static ATerm r_4 (ATerm t)
{
  ATerm o_44 = NULL,p_44 = NULL;
  if(match_cons(t, sym__5))
    {
      ATerm a_34 = ATgetArgument(t, 0);
      if(((ATgetType(a_34) != AT_LIST) || !(ATisEmpty(a_34))))
        _fail(t);
      {
        ATerm b_34 = ATgetArgument(t, 1);
      }
      {
        ATerm c_34 = ATgetArgument(t, 2);
      }
      o_44 = ATgetArgument(t, 3);
      p_44 = ATgetArgument(t, 4);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, o_44, p_44);
  return(t);
}
ATerm graph_nodes_roots_3_0 (ATerm n_120 (ATerm), ATerm o_120 (ATerm), ATerm p_120 (ATerm), ATerm t)
{
  ATerm i_44 = NULL;
  static ATerm t_4 (ATerm t)
  {
    ATerm h_34 = t;
    int i_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = GnNext_3_0(n_120, o_120, p_120, t);
        LocalPopChoice(i_34);
      }
    else
      {
        t = h_34;
        {
          ATerm r_44 = NULL,s_44 = NULL,t_44 = NULL,u_44 = NULL,v_44 = NULL,w_44 = NULL,x_44 = NULL;
          if(match_cons(t, sym__5))
            {
              r_44 = ATgetArgument(t, 0);
              u_44 = ATgetArgument(t, 1);
              v_44 = ATgetArgument(t, 2);
              w_44 = ATgetArgument(t, 3);
              x_44 = ATgetArgument(t, 4);
            }
          else
            _fail(t);
          t = r_44;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              s_44 = ATgetFirst((ATermList) t);
              t_44 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__5, t_44, u_44, v_44, w_44, (ATerm) ATinsert(CheckATermList(x_44), s_44));
        }
      }
    return(t);
  }
  t = for_3_0(q_4, r_4, t_4, t);
  if(match_cons(t, sym__2))
    {
      i_44 = ATgetArgument(t, 0);
      {
        ATerm k_34 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = i_44;
  return(t);
}
ATerm filter_1_0 (ATerm s_102 (ATerm), ATerm t)
{
  ATerm y_45 = NULL,z_45 = NULL,g_46 = NULL;
  y_45 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = y_45;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          z_45 = ATgetFirst((ATermList) t);
          g_46 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm l_34 = t;
        int m_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_15 = NULL,q_15 = NULL,u_15 = NULL,c_5 = NULL;
            t = SSLgetAnnotations(y_45);
            m_15 = t;
            t = z_45;
            t = s_102(t);
            q_15 = t;
            t = g_46;
            t = filter_1_0(s_102, t);
            u_15 = t;
            t = (ATerm) ATinsert(CheckATermList(u_15), q_15);
            c_5 = t;
            t = SSLsetAnnotations(c_5, m_15);
            LocalPopChoice(m_34);
          }
        else
          {
            t = l_34;
            t = g_46;
            t = filter_1_0(s_102, t);
          }
      }
    }
  return(t);
}
static ATerm w_4 (ATerm t)
{
  ATerm n_34 = t;
  if((PushChoice() == 0))
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-I", 0, ATtrue)))
        _fail(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = n_34;
    }
  return(t);
}
static ATerm y_4 (ATerm t)
{
  ATerm u_46 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm o_34 = ATgetArgument(t, 0);
      ATerm p_34 = ATgetArgument(t, 1);
      if(match_cons(p_34, sym_Specification_1))
        {
          u_46 = ATgetArgument(p_34, 0);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  t = s_8(u_46, t);
  return(t);
}
static ATerm b_5 (ATerm t)
{
  ATerm v_46 = NULL,y_46 = NULL;
  if(match_cons(t, sym__3))
    {
      ATerm r_34 = ATgetArgument(t, 0);
      v_46 = ATgetArgument(t, 1);
      y_46 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(y_46), v_46);
  return(t);
}
static ATerm e_5 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_d_35;
  return(t);
}
static ATerm f_5 (ATerm t)
{
  ATerm b_47 = NULL,c_47 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_47 = ATgetFirst((ATermList) t);
      c_47 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, b_47, c_47);
  return(t);
}
static ATerm h_5 (ATerm t)
{
  ATerm e_47 = NULL,h_47 = NULL,i_47 = NULL,j_47 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm f_35 = ATgetArgument(t, 0);
      if(match_cons(f_35, sym__2))
        {
          e_47 = ATgetArgument(f_35, 0);
          h_47 = ATgetArgument(f_35, 1);
        }
      else
        _fail(t);
      {
        ATerm h_35 = ATgetArgument(t, 1);
        if(match_cons(h_35, sym__2))
          {
            i_47 = ATgetArgument(h_35, 0);
            j_47 = ATgetArgument(h_35, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(i_47), e_47), (ATerm) ATinsert(CheckATermList(j_47), h_47));
  return(t);
}
static ATerm u_9 (ATerm x_21, ATerm t)
{
  ATerm k_46 = NULL,l_46 = NULL,m_46 = NULL,n_46 = NULL,o_46 = NULL,p_46 = NULL,j_7 = NULL;
  ATerm j_35 = t;
  int m_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_46 = NULL,r_46 = NULL;
      t = term_w_11;
      q_46 = t;
      t = term_y_29;
      r_46 = t;
      t = term_p_30;
      t = d_10(q_46, r_46, t);
      t = filter_1_0(w_4, t);
      LocalPopChoice(m_35);
    }
  else
    {
      t = j_35;
      t = (ATerm) ATempty;
    }
  k_46 = t;
  t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATinsert(ATempty, x_21), term_y_12, (ATerm) ATempty);
  {
    static ATerm x_4 (ATerm t)
    {
      ATerm s_46 = NULL,t_46 = NULL;
      static ATerm d_5 (ATerm t)
      {
        t = (ATerm) ATinsert(CheckATermList(k_46), term_z_13);
        return(t);
      }
      t_46 = t;
      t = SSL_explode_term(t_46);
      if(match_cons(t, sym__2))
        {
          ATerm o_35 = ATgetArgument(t, 0);
          if((ATgetSymbol((ATermAppl) o_35) != ATmakeSymbol("", 0, ATtrue)))
            _fail(t);
          {
            ATerm q_35 = ATgetArgument(t, 1);
            if(((ATgetType(q_35) == AT_LIST) && !(ATisEmpty(q_35))))
              {
                s_46 = ATgetFirst((ATermList) q_35);
                {
                  ATerm r_35 = (ATerm) ATgetNext((ATermList) q_35);
                }
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = s_46;
      t = get_module_1_0(d_5, t);
      return(t);
    }
    t = graph_nodes_roots_3_0(x_4, y_4, b_5, t);
  }
  t = genzip_4_0(e_5, f_5, h_5, _id, t);
  p_46 = t;
  if(match_cons(t, sym__2))
    {
      m_46 = ATgetArgument(t, 0);
      n_46 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_46);
  l_46 = t;
  t = n_46;
  t = flatten_stratego_0_0(t);
  o_46 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_46, o_46);
  j_7 = t;
  t = SSLsetAnnotations(j_7, l_46);
  return(t);
}
static ATerm x_9 (ATerm m_53, ATerm n_53, ATerm t)
{
  ATerm p_47 = NULL,q_47 = NULL;
  q_47 = t;
  {
    ATerm s_35 = t;
    int u_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, m_53, n_53);
        t = d_10(m_53, n_53, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm w_35 = ATgetFirst((ATermList) t);
            p_47 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(u_35);
        {
          ATerm r_47 = NULL;
          t = (ATerm) ATmakeAppl(sym__3, m_53, n_53, p_47);
          t = lookup_table_0_1(m_53, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              r_47 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = h_10(n_53, p_47, r_47, t);
          t = (ATerm) ATmakeAppl(sym__3, m_53, n_53, p_47);
        }
      }
    else
      {
        t = s_35;
        {
          ATerm t_47 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, m_53, n_53);
          t = lookup_table_0_1(m_53, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              t_47 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = a_10(n_53, t_47, t);
          t = (ATerm) ATmakeAppl(sym__2, m_53, n_53);
        }
      }
  }
  t = q_47;
  return(t);
}
ATerm end_scope_1_0 (ATerm v_107 (ATerm), ATerm t)
{
  ATerm v_47 = NULL,w_47 = NULL,x_47 = NULL,y_47 = NULL,z_47 = NULL,a_48 = NULL,b_48 = NULL;
  y_47 = t;
  t = v_107(t);
  x_47 = t;
  {
    ATerm x_35 = t;
    int a_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_48 = NULL;
        t = term_o_12;
        c_48 = t;
        t = (ATerm) ATmakeAppl(sym__2, x_47, term_o_12);
        t = d_10(x_47, c_48, t);
        LocalPopChoice(a_36);
      }
    else
      {
        t = x_35;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_47 = ATgetFirst((ATermList) t);
      v_47 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, x_47, term_o_12, v_47);
  t = lookup_table_0_1(x_47, t);
  b_48 = t;
  t = term_o_12;
  z_47 = t;
  t = b_48;
  if(match_cons(t, sym_Hashtable_1))
    {
      a_48 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = h_10(z_47, v_47, a_48, t);
  t = w_47;
  {
    static ATerm j_5 (ATerm t)
    {
      ATerm e_48 = NULL;
      e_48 = t;
      t = (ATerm) ATmakeAppl(sym__2, x_47, e_48);
      t = x_9(x_47, e_48, t);
      return(t);
    }
    t = map_1_0(j_5, t);
  }
  t = y_47;
  return(t);
}
ATerm restore_always_2_0 (ATerm z_86 (ATerm), ATerm a_87 (ATerm), ATerm t)
{
  ATerm b_36 = t;
  int c_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = z_86(t);
      t = a_87(t);
      LocalPopChoice(c_36);
    }
  else
    {
      t = b_36;
      t = a_87(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm u_107 (ATerm), ATerm t)
{
  ATerm h_48 = NULL,i_48 = NULL,j_48 = NULL,k_48 = NULL,n_48 = NULL,t_48 = NULL,y_48 = NULL;
  i_48 = t;
  t = u_107(t);
  h_48 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_48, term_o_12);
  {
    ATerm e_36 = t;
    int f_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_49 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm g_36 = ATgetArgument(t, 0);
            ATerm k_36 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_o_12;
        e_49 = t;
        t = (ATerm) ATmakeAppl(sym__2, h_48, term_o_12);
        t = d_10(h_48, e_49, t);
        LocalPopChoice(f_36);
      }
    else
      {
        t = e_36;
        t = (ATerm) ATempty;
      }
  }
  j_48 = t;
  t = (ATerm) ATmakeAppl(sym__3, h_48, term_o_12, (ATerm) ATinsert(CheckATermList(j_48), (ATerm) ATempty));
  t = lookup_table_0_1(h_48, t);
  y_48 = t;
  t = term_o_12;
  k_48 = t;
  t = (ATerm) ATinsert(CheckATermList(j_48), (ATerm) ATempty);
  n_48 = t;
  t = y_48;
  if(match_cons(t, sym_Hashtable_1))
    {
      t_48 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = h_10(k_48, n_48, t_48, t);
  t = i_48;
  return(t);
}
static ATerm n_5 (ATerm t)
{
  t = term_w_12;
  return(t);
}
static ATerm q_5 (ATerm t)
{
  ATerm x_49 = NULL;
  x_49 = t;
  {
    ATerm l_36 = t;
    int r_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(x_49);
        LocalPopChoice(r_36);
      }
    else
      {
        t = l_36;
        t = x_49;
      }
  }
  return(t);
}
static ATerm r_5 (ATerm t)
{
  t = term_w_12;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm g_119 (ATerm), ATerm t)
{
  ATerm h_49 = NULL;
  static ATerm o_5 (ATerm t)
  {
    ATerm i_49 = NULL;
    i_49 = t;
    {
      ATerm v_36 = t;
      int w_36 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm l_49 = NULL,m_49 = NULL;
          t = term_w_12;
          l_49 = t;
          t = term_o_12;
          m_49 = t;
          t = term_y_36;
          t = d_10(l_49, m_49, t);
          LocalPopChoice(w_36);
        }
      else
        {
          t = v_36;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
        }
    }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((h_49 != NULL) && (h_49 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          h_49 = ATgetFirst((ATermList) t);
        {
          ATerm a_37 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    t = h_49;
    t = map_1_0(q_5, t);
    t = i_49;
    t = end_scope_1_0(r_5, t);
    return(t);
  }
  t = begin_scope_1_0(n_5, t);
  t = restore_always_2_0(g_119, o_5, t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm c_50 = NULL,d_50 = NULL,e_50 = NULL,f_50 = NULL,g_50 = NULL;
  c_50 = t;
  t = term_y_12;
  t = whoami_0_0(t);
  d_50 = t;
  t = term_n_23;
  f_50 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_c_37), d_50), term_b_37);
  g_50 = t;
  t = SSL_printnl(f_50, g_50);
  t = term_a_16;
  e_50 = t;
  t = SSL_exit(e_50);
  t = c_50;
  return(t);
}
static ATerm s_5 (ATerm t)
{
  ATerm i_50 = NULL;
  i_50 = t;
  if(match_string(t, "-k"))
    {
      t = i_50;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = i_50;
    }
  return(t);
}
static ATerm v_5 (ATerm t)
{
  ATerm j_50 = NULL,k_50 = NULL,l_50 = NULL;
  j_50 = t;
  t = SSL_string_to_int(j_50);
  k_50 = t;
  t = term_p_15;
  l_50 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_15, k_50);
  t = g_10(l_50, k_50, t);
  t = j_50;
  return(t);
}
static ATerm y_5 (ATerm t)
{
  t = term_g_37;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(s_5, v_5, y_5, t);
  return(t);
}
static ATerm c_6 (ATerm t)
{
  ATerm n_50 = NULL;
  n_50 = t;
  if(match_string(t, "-S"))
    {
      t = n_50;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = n_50;
    }
  return(t);
}
static ATerm i_6 (ATerm t)
{
  ATerm o_50 = NULL,r_50 = NULL;
  t = term_g_16;
  o_50 = t;
  t = term_j_37;
  r_50 = t;
  t = term_k_37;
  t = g_10(o_50, r_50, t);
  t = term_l_37;
  return(t);
}
static ATerm l_6 (ATerm t)
{
  t = term_m_37;
  return(t);
}
static ATerm u_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm w_6 (ATerm t)
{
  ATerm s_50 = NULL,t_50 = NULL,u_50 = NULL;
  s_50 = t;
  t = SSL_string_to_int(s_50);
  t_50 = t;
  t = term_g_16;
  u_50 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_16, t_50);
  t = g_10(u_50, t_50, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, s_50);
  return(t);
}
static ATerm y_6 (ATerm t)
{
  t = term_n_37;
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
  ATerm v_50 = NULL,y_50 = NULL;
  t = term_o_37;
  v_50 = t;
  t = term_y_12;
  y_50 = t;
  t = term_p_37;
  t = g_10(v_50, y_50, t);
  t = term_q_37;
  return(t);
}
static ATerm b_7 (ATerm t)
{
  t = term_r_37;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm s_37 = t;
  int u_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(c_6, i_6, l_6, t);
      LocalPopChoice(u_37);
    }
  else
    {
      t = s_37;
      {
        ATerm g_38 = t;
        int k_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(u_6, w_6, y_6, t);
            LocalPopChoice(k_38);
          }
        else
          {
            t = g_38;
            t = Option_3_0(z_6, a_7, b_7, t);
          }
      }
    }
  return(t);
}
static ATerm g_10 (ATerm n_64, ATerm o_64, ATerm t)
{
  ATerm a_51 = NULL,b_51 = NULL;
  t = term_w_11;
  a_51 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_w_11, n_64, o_64);
  t = lookup_table_0_1(a_51, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      b_51 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = h_10(n_64, o_64, b_51, t);
  t = (ATerm) ATmakeAppl(sym__3, term_w_11, n_64, o_64);
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm i_51 = NULL,j_51 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm k_51 = NULL,l_51 = NULL,n_51 = NULL;
      t = term_y_12;
      t = e_0(t);
      k_51 = t;
      t = term_l_38;
      l_51 = t;
      t = term_m_38;
      n_51 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_l_38, term_m_38, k_51);
      t = e_10(l_51, n_51, k_51, t);
      _fail(t);
    }
  else
    {
      ATerm q_51 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          i_51 = ATgetFirst((ATermList) t);
          j_51 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = i_51;
      t = c_0(t);
      t = term_y_12;
      t = d_0(t);
      q_51 = t;
      t = (ATerm) ATinsert(CheckATermList(j_51), q_51);
    }
  return(t);
}
static ATerm c_7 (ATerm t)
{
  ATerm y_51 = NULL;
  y_51 = t;
  if(match_string(t, "-o"))
    {
      t = y_51;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = y_51;
    }
  return(t);
}
static ATerm d_7 (ATerm t)
{
  ATerm a_52 = NULL,b_52 = NULL;
  a_52 = t;
  t = term_x_11;
  b_52 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_11, a_52);
  t = g_10(b_52, a_52, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, a_52);
  return(t);
}
static ATerm e_7 (ATerm t)
{
  t = term_s_38;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(c_7, d_7, e_7, t);
  return(t);
}
static ATerm h_7 (ATerm t)
{
  ATerm d_52 = NULL;
  d_52 = t;
  if(match_string(t, "-i"))
    {
      t = d_52;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = d_52;
    }
  return(t);
}
static ATerm k_7 (ATerm t)
{
  ATerm e_52 = NULL,g_52 = NULL;
  e_52 = t;
  t = term_t_27;
  g_52 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_27, e_52);
  t = g_10(g_52, e_52, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, e_52);
  return(t);
}
static ATerm l_7 (ATerm t)
{
  t = term_z_38;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(h_7, k_7, l_7, t);
  return(t);
}
static ATerm e_10 (ATerm h_53, ATerm i_53, ATerm g_53, ATerm t)
{
  ATerm l_52 = NULL,u_52 = NULL,v_52 = NULL,w_52 = NULL,y_52 = NULL;
  l_52 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_53, i_53);
  {
    ATerm a_39 = t;
    int b_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm i_39 = ATgetArgument(t, 0);
            ATerm j_39 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, h_53, i_53);
        t = d_10(h_53, i_53, t);
        LocalPopChoice(b_39);
      }
    else
      {
        t = a_39;
        t = (ATerm) ATempty;
      }
  }
  u_52 = t;
  t = (ATerm) ATmakeAppl(sym__3, h_53, i_53, (ATerm) ATinsert(CheckATermList(u_52), g_53));
  t = lookup_table_0_1(h_53, t);
  y_52 = t;
  t = (ATerm) ATinsert(CheckATermList(u_52), g_53);
  v_52 = t;
  t = y_52;
  if(match_cons(t, sym_Hashtable_1))
    {
      w_52 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = h_10(i_53, v_52, w_52, t);
  t = l_52;
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm p_53 = NULL,q_53 = NULL,r_53 = NULL,s_53 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm t_53 = NULL,w_53 = NULL,x_53 = NULL;
      t = term_y_12;
      t = n_0(t);
      t_53 = t;
      t = term_l_38;
      w_53 = t;
      t = term_m_38;
      x_53 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_l_38, term_m_38, t_53);
      t = e_10(w_53, x_53, t_53, t);
      _fail(t);
    }
  else
    {
      ATerm j_54 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          p_53 = ATgetFirst((ATermList) t);
          q_53 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = q_53;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          r_53 = ATgetFirst((ATermList) t);
          s_53 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = p_53;
      t = k_0(t);
      t = r_53;
      t = l_0(t);
      j_54 = t;
      t = (ATerm) ATinsert(CheckATermList(s_53), j_54);
    }
  return(t);
}
ATerm at_end_1_0 (ATerm g_95 (ATerm), ATerm t)
{
  static ATerm w_55 (ATerm t)
  {
    ATerm t_55 = NULL,u_55 = NULL,v_55 = NULL;
    v_55 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        t_55 = ATgetFirst((ATermList) t);
        u_55 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm o_16 = NULL,u_16 = NULL,m_7 = NULL;
          t = SSLgetAnnotations(v_55);
          o_16 = t;
          t = u_55;
          t = w_55(t);
          u_16 = t;
          t = (ATerm) ATinsert(CheckATermList(u_16), t_55);
          m_7 = t;
          t = SSLsetAnnotations(m_7, o_16);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = v_55;
        t = g_95(t);
      }
    return(t);
  }
  t = w_55(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm l_54 = NULL,r_54 = NULL,s_54 = NULL;
  l_54 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = l_54;
    }
  else
    {
      static ATerm n_7 (ATerm t)
      {
        t = not_null(s_54);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          r_54 = ATgetFirst((ATermList) t);
          if(((s_54 != NULL) && (s_54 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            s_54 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = r_54;
      t = at_end_1_0(n_7, t);
    }
  return(t);
}
static ATerm r_56 (ATerm e_56, ATerm t)
{
  ATerm f_56 = NULL;
  t = SSL_explode_term(e_56);
  if(match_cons(t, sym__2))
    {
      ATerm m_39 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) m_39) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      f_56 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_56;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm j_56 = NULL,k_56 = NULL,m_56 = NULL;
  m_56 = t;
  if(match_cons(t, sym__2))
    {
      j_56 = ATgetArgument(t, 0);
      k_56 = ATgetArgument(t, 1);
      {
        ATerm o_39 = t;
        int q_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm r_7 (ATerm t)
            {
              t = k_56;
              return(t);
            }
            t = j_56;
            t = at_end_1_0(r_7, t);
            LocalPopChoice(q_39);
          }
        else
          {
            t = o_39;
            t = r_56(m_56, t);
          }
      }
    }
  else
    {
      t = r_56(m_56, t);
    }
  return(t);
}
static ATerm v_9 (ATerm u_64, ATerm v_64, ATerm t)
{
  ATerm s_56 = NULL,t_56 = NULL,u_56 = NULL,v_56 = NULL;
  t = u_64;
  {
    ATerm r_39 = t;
    int s_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_56 = NULL;
        t = term_w_11;
        x_56 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_w_11, u_64);
        t = d_10(x_56, u_64, t);
        LocalPopChoice(s_39);
      }
    else
      {
        t = r_39;
        t = (ATerm) ATempty;
      }
  }
  t_56 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_56, v_64);
  t = conc_0_0(t);
  s_56 = t;
  t = term_w_11;
  u_56 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_w_11, u_64, s_56);
  t = lookup_table_0_1(u_56, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      v_56 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = h_10(u_64, s_56, v_56, t);
  t = (ATerm) ATmakeAppl(sym__3, term_w_11, u_64, s_56);
  return(t);
}
static ATerm s_7 (ATerm t)
{
  ATerm n_57 = NULL;
  n_57 = t;
  if(match_string(t, "-I"))
    {
      t = n_57;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--Include", 0, ATtrue)))
        _fail(t);
      t = n_57;
    }
  return(t);
}
static ATerm t_7 (ATerm t)
{
  ATerm p_57 = NULL,q_57 = NULL,r_57 = NULL;
  p_57 = t;
  t = term_y_29;
  q_57 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, p_57), term_y_29);
  r_57 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_29, (ATerm) ATinsert(ATinsert(ATempty, p_57), term_y_29));
  t = v_9(q_57, r_57, t);
  t = term_y_12;
  return(t);
}
static ATerm v_7 (ATerm t)
{
  t = term_t_39;
  return(t);
}
static ATerm w_7 (ATerm t)
{
  ATerm u_57 = NULL;
  u_57 = t;
  if(match_string(t, "--nodep"))
    {
      t = u_57;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-nodep", 0, ATtrue)))
        _fail(t);
      t = u_57;
    }
  return(t);
}
static ATerm x_7 (ATerm t)
{
  ATerm v_57 = NULL,w_57 = NULL;
  t = term_w_13;
  v_57 = t;
  t = term_u_39;
  w_57 = t;
  t = term_v_39;
  t = g_10(v_57, w_57, t);
  t = term_y_12;
  return(t);
}
static ATerm z_7 (ATerm t)
{
  t = term_w_39;
  return(t);
}
static ATerm b_8 (ATerm t)
{
  ATerm x_57 = NULL;
  x_57 = t;
  if(match_string(t, "--dep"))
    {
      t = x_57;
    }
  else
    {
      if(match_string(t, "-d"))
        {
          t = x_57;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-dep", 0, ATtrue)))
            _fail(t);
          t = x_57;
        }
    }
  return(t);
}
static ATerm c_8 (ATerm t)
{
  ATerm a_58 = NULL,b_58 = NULL;
  a_58 = t;
  t = term_p_13;
  b_58 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_13, a_58);
  t = g_10(b_58, a_58, t);
  t = term_y_12;
  return(t);
}
static ATerm d_8 (ATerm t)
{
  t = term_x_39;
  return(t);
}
static ATerm g_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--imports", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm h_8 (ATerm t)
{
  ATerm c_58 = NULL,d_58 = NULL;
  t = term_y_39;
  c_58 = t;
  t = term_y_12;
  d_58 = t;
  t = term_z_39;
  t = g_10(c_58, d_58, t);
  t = term_y_12;
  return(t);
}
static ATerm i_8 (ATerm t)
{
  t = term_d_40;
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
  ATerm e_58 = NULL,f_58 = NULL;
  t = term_g_32;
  e_58 = t;
  t = term_y_12;
  f_58 = t;
  t = term_e_40;
  t = g_10(e_58, f_58, t);
  t = term_y_12;
  return(t);
}
static ATerm q_8 (ATerm t)
{
  t = term_g_40;
  return(t);
}
static ATerm v_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--asfix", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm i_9 (ATerm t)
{
  ATerm g_58 = NULL,h_58 = NULL;
  t = term_m_29;
  g_58 = t;
  t = term_u_39;
  h_58 = t;
  t = term_h_40;
  t = g_10(g_58, h_58, t);
  t = term_y_12;
  return(t);
}
static ATerm m_9 (ATerm t)
{
  t = term_i_40;
  return(t);
}
ATerm pack_stratego_options_0_0 (ATerm t)
{
  ATerm j_40 = t;
  int k_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ArgOption_3_0(s_7, t_7, v_7, t);
      LocalPopChoice(k_40);
    }
  else
    {
      t = j_40;
      {
        ATerm l_40 = t;
        int q_40 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Option_3_0(w_7, x_7, z_7, t);
            LocalPopChoice(q_40);
          }
        else
          {
            t = l_40;
            {
              ATerm t_40 = t;
              int u_40 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = ArgOption_3_0(b_8, c_8, d_8, t);
                  LocalPopChoice(u_40);
                }
              else
                {
                  t = t_40;
                  {
                    ATerm z_40 = t;
                    int a_41 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Option_3_0(g_8, h_8, i_8, t);
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
                              t = Option_3_0(l_8, p_8, q_8, t);
                              LocalPopChoice(c_41);
                            }
                          else
                            {
                              t = b_41;
                              t = Option_3_0(v_8, i_9, m_9, t);
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
  ATerm i_58 = NULL,j_58 = NULL,k_58 = NULL,l_58 = NULL;
  t = report_run_time_0_0(t);
  t = term_y_12;
  t = whoami_0_0(t);
  i_58 = t;
  t = term_n_23;
  k_58 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_d_41), i_58);
  l_58 = t;
  t = SSL_printnl(k_58, l_58);
  t = term_a_16;
  j_58 = t;
  t = SSL_exit(j_58);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm m_58 = NULL,n_58 = NULL;
  t = term_w_11;
  m_58 = t;
  t = term_e_41;
  n_58 = t;
  t = term_f_41;
  t = d_10(m_58, n_58, t);
  return(t);
}
static ATerm y_9 (ATerm a_42, ATerm b_42, ATerm t)
{
  ATerm h_41 = t;
  int i_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(a_42, b_42);
      LocalPopChoice(i_41);
    }
  else
    {
      t = h_41;
      t = SSL_addr(a_42, b_42);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm o_101 (ATerm), ATerm p_101 (ATerm), ATerm t)
{
  ATerm q_58 = NULL,r_58 = NULL,s_58 = NULL;
  q_58 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = q_58;
      t = o_101(t);
    }
  else
    {
      ATerm v_58 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          r_58 = ATgetFirst((ATermList) t);
          s_58 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = s_58;
      t = foldr_2_0(o_101, p_101, t);
      v_58 = t;
      t = (ATerm) ATmakeAppl(sym__2, r_58, v_58);
      t = p_101(t);
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
  t = term_j_37;
  return(t);
}
static ATerm o_9 (ATerm t)
{
  ATerm g_17 = NULL,h_17 = NULL;
  if(match_cons(t, sym__2))
    {
      g_17 = ATgetArgument(t, 0);
      h_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_9(g_17, h_17, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm i_59 = NULL,b_17 = NULL,c_17 = NULL;
  t = times_0_0(t);
  c_17 = t;
  t = SSL_explode_term(c_17);
  if(match_cons(t, sym__2))
    {
      ATerm n_41 = ATgetArgument(t, 0);
      b_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_17;
  t = foldr_2_0(n_9, o_9, t);
  i_59 = t;
  t = SSL_TicksToSeconds(i_59);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm b_60 = NULL,c_60 = NULL,d_60 = NULL;
  b_60 = t;
  if(match_cons(t, sym__2))
    {
      c_60 = ATgetArgument(t, 0);
      d_60 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm o_41 = t;
    int p_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_60;
        if((c_60 != t))
          {
            _fail(t);
          }
        t = b_60;
        LocalPopChoice(p_41);
      }
    else
      {
        t = o_41;
        t = (ATerm) ATmakeAppl(sym__2, c_60, d_60);
        {
          ATerm q_41 = t;
          int r_41 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(c_60, d_60);
              LocalPopChoice(r_41);
            }
          else
            {
              t = q_41;
              t = SSL_gtr(c_60, d_60);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, c_60, d_60);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm f_110 (ATerm), ATerm t)
{
  ATerm k_60 = NULL;
  k_60 = t;
  {
    ATerm s_41 = t;
    int x_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_60 = NULL,n_60 = NULL,o_60 = NULL;
        t = term_w_11;
        n_60 = t;
        t = term_g_16;
        o_60 = t;
        t = term_l_16;
        t = d_10(n_60, o_60, t);
        m_60 = t;
        t = (ATerm) ATmakeAppl(sym__2, m_60, term_a_16);
        t = geq_0_0(t);
        t = k_60;
        t = f_110(t);
        LocalPopChoice(x_41);
      }
    else
      {
        t = s_41;
        t = k_60;
      }
  }
  return(t);
}
static ATerm q_9 (ATerm t)
{
  ATerm q_60 = NULL,s_60 = NULL,u_60 = NULL,v_60 = NULL;
  t = run_time_0_0(t);
  q_60 = t;
  t = term_y_12;
  t = whoami_0_0(t);
  s_60 = t;
  t = term_n_23;
  u_60 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_y_41), q_60), term_v_16), s_60);
  v_60 = t;
  t = SSL_printnl(u_60, v_60);
  t = (ATerm) ATmakeAppl(sym__2, term_n_23, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_y_41), q_60), term_v_16), s_60));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(q_9, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm w_60 = NULL;
  t = report_run_time_0_0(t);
  t = term_j_37;
  w_60 = t;
  t = SSL_exit(w_60);
  return(t);
}
static ATerm s_9 (ATerm t)
{
  ATerm o_61 = NULL,v_61 = NULL;
  v_61 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = v_61;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          o_61 = ATgetArgument(t, 0);
          {
            ATerm n_18 = NULL,q_7 = NULL;
            t = SSLgetAnnotations(v_61);
            n_18 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, o_61);
            q_7 = t;
            t = SSLsetAnnotations(q_7, n_18);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = v_61;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm t_111 (ATerm), ATerm t)
{
  ATerm c_42 = t;
  int d_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_61 = NULL,d_61 = NULL;
      t = term_w_11;
      c_61 = t;
      t = term_e_42;
      d_61 = t;
      t = term_f_42;
      t = d_10(c_61, d_61, t);
      LocalPopChoice(d_42);
    }
  else
    {
      t = c_42;
      t = fetch_1_0(s_9, t);
    }
  t = t_111(t);
  return(t);
}
static ATerm h_10 (ATerm z_56, ATerm a_57, ATerm b_57, ATerm t)
{
  ATerm x_61 = NULL;
  t = SSL_hashtable_put(b_57, z_56, a_57);
  x_61 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, x_61);
  return(t);
}
static ATerm i_10 (ATerm c_57, ATerm d_57, ATerm t)
{
  t = SSL_hashtable_get(d_57, c_57);
  return(t);
}
ATerm lookup_table_0_1 (ATerm t_54, ATerm t)
{
  ATerm n_62 = NULL;
  t = table_hashtable_0_0(t);
  n_62 = t;
  {
    ATerm i_42 = t;
    int n_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_18 = NULL;
        t = n_62;
        if(match_cons(t, sym_Hashtable_1))
          {
            y_18 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = i_10(t_54, y_18, t);
        LocalPopChoice(n_42);
      }
    else
      {
        t = i_42;
        {
          ATerm f_19 = NULL;
          t = t_54;
          t = table_create_0_0(t);
          t = n_62;
          if(match_cons(t, sym_Hashtable_1))
            {
              f_19 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = i_10(t_54, f_19, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm h_57, ATerm i_57, ATerm t)
{
  ATerm q_62 = NULL;
  t = SSL_hashtable_create(h_57, i_57);
  q_62 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, q_62);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm r_62 = NULL,s_62 = NULL,u_62 = NULL,w_62 = NULL,x_62 = NULL;
  r_62 = t;
  t = term_o_42;
  w_62 = t;
  t = term_p_42;
  x_62 = t;
  t = r_62;
  t = new_hashtable_0_2(w_62, x_62, t);
  s_62 = t;
  t = r_62;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      u_62 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = h_10(r_62, s_62, u_62, t);
  t = r_62;
  return(t);
}
static ATerm a_10 (ATerm e_57, ATerm f_57, ATerm t)
{
  ATerm b_63 = NULL;
  t = SSL_hashtable_remove(f_57, e_57);
  b_63 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, b_63);
  return(t);
}
static ATerm b_10 (ATerm j_57, ATerm t)
{
  ATerm c_63 = NULL;
  t = SSL_hashtable_destroy(j_57);
  c_63 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, c_63);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm d_63 = NULL;
  t = SSL_table_hashtable();
  d_63 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, d_63);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm f_63 = NULL,g_63 = NULL,h_63 = NULL,s_63 = NULL;
  f_63 = t;
  t = table_hashtable_0_0(t);
  g_63 = t;
  t = lookup_table_0_1(f_63, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      s_63 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = b_10(s_63, t);
  t = g_63;
  if(match_cons(t, sym_Hashtable_1))
    {
      h_63 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_10(f_63, h_63, t);
  t = f_63;
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm v_63 = NULL,w_63 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_63 = ATgetFirst((ATermList) t);
      w_63 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm b_64 = NULL,c_64 = NULL;
        static ATerm t_9 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(b_64)), not_null(c_64));
          return(t);
        }
        t = w_63;
        t = i_0(t);
        if(((b_64 != NULL) && (b_64 != t)))
          _fail(t);
        else
          b_64 = t;
        t = v_63;
        t = g_0(t);
        if(((c_64 != NULL) && (c_64 != t)))
          _fail(t);
        else
          c_64 = t;
        t = w_63;
        t = reverse_acc_2_0(g_0, t_9, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_y_12;
      t = i_0(t);
    }
  return(t);
}
static ATerm z_9 (ATerm t)
{
  ATerm i_64 = NULL,j_64 = NULL,k_64 = NULL,u_7 = NULL;
  k_64 = t;
  if(match_cons(t, sym_Program_1))
    {
      j_64 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_64);
  i_64 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, j_64);
  u_7 = t;
  t = SSLsetAnnotations(u_7, i_64);
  return(t);
}
static ATerm c_10 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm k_10 (ATerm t)
{
  ATerm m_64 = NULL;
  m_64 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, m_64), term_q_42);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm e_64 = NULL,f_64 = NULL;
  ATerm r_42 = t;
  int x_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_64 = NULL,h_64 = NULL;
      t = term_w_11;
      g_64 = t;
      t = term_e_41;
      h_64 = t;
      t = term_f_41;
      t = d_10(g_64, h_64, t);
      LocalPopChoice(x_42);
    }
  else
    {
      t = r_42;
      t = fetch_1_0(z_9, t);
    }
  t = term_y_42;
  t = echo_0_0(t);
  t = term_l_38;
  e_64 = t;
  t = term_m_38;
  f_64 = t;
  t = term_z_42;
  t = d_10(e_64, f_64, t);
  t = reverse_acc_2_0(_id, c_10, t);
  t = map_1_0(k_10, t);
  return(t);
}
ATerm fetch_1_0 (ATerm z_94 (ATerm), ATerm t)
{
  static ATerm l_66 (ATerm t)
  {
    ATerm f_66 = NULL,g_66 = NULL,i_66 = NULL;
    f_66 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        g_66 = ATgetFirst((ATermList) t);
        i_66 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm d_43 = t;
      int e_43 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm m_19 = NULL,t_19 = NULL,y_7 = NULL;
          t = SSLgetAnnotations(f_66);
          m_19 = t;
          t = g_66;
          t = z_94(t);
          t_19 = t;
          t = (ATerm) ATinsert(CheckATermList(i_66), t_19);
          y_7 = t;
          t = SSLsetAnnotations(y_7, m_19);
          LocalPopChoice(e_43);
        }
      else
        {
          t = d_43;
          {
            ATerm h_20 = NULL,k_20 = NULL,a_8 = NULL;
            t = SSLgetAnnotations(f_66);
            h_20 = t;
            t = i_66;
            t = l_66(t);
            k_20 = t;
            t = (ATerm) ATinsert(CheckATermList(k_20), g_66);
            a_8 = t;
            t = SSLsetAnnotations(a_8, h_20);
          }
        }
    }
    return(t);
  }
  t = l_66(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm p_66 = NULL,q_66 = NULL,r_66 = NULL;
  p_66 = t;
  {
    ATerm g_43 = t;
    int h_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = p_66;
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
            t = p_66;
          }
        LocalPopChoice(h_43);
      }
    else
      {
        t = g_43;
        t = (ATerm) ATinsert(ATempty, p_66);
      }
  }
  q_66 = t;
  t = term_z_11;
  r_66 = t;
  t = SSL_printnl(r_66, q_66);
  t = p_66;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm v_66 = NULL,w_66 = NULL;
  t = term_w_11;
  v_66 = t;
  t = term_e_41;
  w_66 = t;
  t = term_f_41;
  t = d_10(v_66, w_66, t);
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
  ATerm x_66 = NULL,y_66 = NULL;
  t = term_k_43;
  x_66 = t;
  t = term_y_12;
  y_66 = t;
  t = term_l_43;
  t = g_10(x_66, y_66, t);
  return(t);
}
static ATerm n_10 (ATerm t)
{
  t = term_n_43;
  return(t);
}
static ATerm o_10 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm q_10 (ATerm t)
{
  ATerm z_66 = NULL,a_67 = NULL,b_67 = NULL,c_67 = NULL;
  t = term_k_43;
  b_67 = t;
  t = term_y_12;
  c_67 = t;
  t = term_l_43;
  t = g_10(b_67, c_67, t);
  t = term_p_43;
  z_66 = t;
  t = term_y_12;
  a_67 = t;
  t = term_q_43;
  t = g_10(z_66, a_67, t);
  t = term_y_43;
  return(t);
}
static ATerm r_10 (ATerm t)
{
  t = term_g_44;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm h_44 = t;
  int m_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(l_10, m_10, n_10, t);
      LocalPopChoice(m_44);
    }
  else
    {
      t = h_44;
      t = Option_3_0(o_10, q_10, r_10, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm w_64 (ATerm), ATerm x_64 (ATerm), ATerm t)
{
  ATerm d_67 = NULL,e_67 = NULL,f_67 = NULL,g_67 = NULL,h_67 = NULL,i_67 = NULL,r_8 = NULL;
  i_67 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_67 = ATgetFirst((ATermList) t);
      f_67 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_67);
  d_67 = t;
  t = e_67;
  t = w_64(t);
  g_67 = t;
  t = f_67;
  t = x_64(t);
  h_67 = t;
  t = (ATerm) ATinsert(CheckATermList(h_67), g_67);
  r_8 = t;
  t = SSLsetAnnotations(r_8, d_67);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm k_114 (ATerm), ATerm t)
{
  ATerm n_67 = NULL,o_67 = NULL,p_67 = NULL,q_67 = NULL,s_67 = NULL,w_67 = NULL,x_8 = NULL;
  n_67 = t;
  {
    ATerm n_44 = t;
    int q_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_y_44;
        t = k_114(t);
        LocalPopChoice(q_44);
      }
    else
      {
        t = n_44;
      }
  }
  t = n_67;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_67 = ATgetFirst((ATermList) t);
      q_67 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_67);
  o_67 = t;
  t = term_e_41;
  w_67 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_41, p_67);
  t = g_10(w_67, p_67, t);
  t = q_67;
  {
    static ATerm n_68 (ATerm t)
    {
      ATerm z_44 = t;
      int a_45 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm b_45 = t;
          int c_45 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm z_67 = NULL;
              z_67 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = z_67;
              LocalPopChoice(c_45);
            }
          else
            {
              t = b_45;
              t = k_114(t);
              t = Cons_2_0(_id, n_68, t);
            }
          LocalPopChoice(a_45);
        }
      else
        {
          t = z_44;
          {
            ATerm j_68 = NULL,k_68 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                j_68 = ATgetFirst((ATermList) t);
                k_68 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(k_68), (ATerm) ATmakeAppl(sym_Undefined_1, j_68));
          }
        }
      return(t);
    }
    t = n_68(t);
  }
  s_67 = t;
  t = (ATerm) ATinsert(CheckATermList(s_67), (ATerm) ATmakeAppl(sym_Program_1, p_67));
  x_8 = t;
  t = SSLsetAnnotations(x_8, o_67);
  return(t);
}
static ATerm x_10 (ATerm t)
{
  ATerm i_69 = NULL;
  i_69 = t;
  if(match_string(t, "--help"))
    {
      t = i_69;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = i_69;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = i_69;
        }
    }
  return(t);
}
static ATerm z_10 (ATerm t)
{
  ATerm j_69 = NULL,k_69 = NULL;
  t = term_e_42;
  j_69 = t;
  t = term_y_12;
  k_69 = t;
  t = term_d_45;
  t = g_10(j_69, k_69, t);
  t = term_g_45;
  return(t);
}
static ATerm a_11 (ATerm t)
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
ATerm parse_options_1_0 (ATerm j_114 (ATerm), ATerm t)
{
  ATerm y_68 = NULL,z_68 = NULL,a_69 = NULL,d_69 = NULL,e_69 = NULL,f_69 = NULL,g_69 = NULL,h_69 = NULL;
  a_69 = t;
  t = term_l_38;
  d_69 = t;
  t = term_i_45;
  t = lookup_table_0_1(d_69, t);
  h_69 = t;
  t = term_m_38;
  e_69 = t;
  t = (ATerm) ATempty;
  f_69 = t;
  t = h_69;
  if(match_cons(t, sym_Hashtable_1))
    {
      g_69 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = h_10(e_69, f_69, g_69, t);
  t = a_69;
  {
    static ATerm v_10 (ATerm t)
    {
      ATerm j_45 = t;
      int k_45 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = j_114(t);
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
                t = Option_3_0(x_10, z_10, a_11, t);
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
    t = parse_options_p__1_0(v_10, t);
  }
  {
    ATerm n_45 = t;
    int o_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_69 = NULL;
        v_69 = t;
        {
          ATerm p_45 = t;
          int q_45 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm t_20 = NULL;
              t = v_69;
              {
                ATerm r_45 = t;
                int s_45 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm u_20 = NULL,v_20 = NULL;
                    t = term_w_11;
                    u_20 = t;
                    t = term_e_42;
                    v_20 = t;
                    t = term_f_42;
                    t = d_10(u_20, v_20, t);
                    LocalPopChoice(s_45);
                  }
                else
                  {
                    t = r_45;
                    t = fetch_1_0(c_11, t);
                  }
              }
              t = v_69;
              t = default_system_usage_0_0(t);
              t = term_j_37;
              t_20 = t;
              t = SSL_exit(t_20);
              LocalPopChoice(q_45);
            }
          else
            {
              t = p_45;
              {
                ATerm l_21 = NULL,m_21 = NULL,p_21 = NULL;
                t = term_w_11;
                m_21 = t;
                t = term_k_43;
                p_21 = t;
                t = term_t_45;
                t = d_10(m_21, p_21, t);
                t = v_69;
                t = default_system_about_0_0(t);
                t = term_j_37;
                l_21 = t;
                t = SSL_exit(l_21);
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
              ATerm w_69 = NULL,x_69 = NULL,y_69 = NULL;
              static ATerm d_11 (ATerm t)
              {
                ATerm z_69 = NULL,a_70 = NULL,b_70 = NULL,l_9 = NULL;
                b_70 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    a_70 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(b_70);
                z_69 = t;
                t = a_70;
                if(((y_68 != NULL) && (y_68 != t)))
                  _fail(t);
                else
                  y_68 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, a_70);
                l_9 = t;
                t = SSLsetAnnotations(l_9, z_69);
                return(t);
              }
              t = fetch_1_0(d_11, t);
              t = term_n_23;
              x_69 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(y_68)), term_w_45);
              y_69 = t;
              t = SSL_printnl(x_69, y_69);
              t = (ATerm) ATmakeAppl(sym__2, term_n_23, (ATerm) ATinsert(ATinsert(ATempty, not_null(y_68)), term_w_45));
              t = default_system_usage_0_0(t);
              t = term_a_16;
              w_69 = t;
              t = SSL_exit(w_69);
              LocalPopChoice(v_45);
            }
          else
            {
              t = u_45;
            }
        }
      }
  }
  z_68 = t;
  t = term_l_38;
  t = table_destroy_0_0(t);
  t = z_68;
  return(t);
}
ATerm option_wrap_4_0 (ATerm v_111 (ATerm), ATerm w_111 (ATerm), ATerm x_111 (ATerm), ATerm y_111 (ATerm), ATerm t)
{
  ATerm g_70 = NULL,h_70 = NULL,i_70 = NULL,j_70 = NULL,k_70 = NULL;
  t = parse_options_1_0(v_111, t);
  g_70 = t;
  t = term_x_45;
  t = table_create_0_0(t);
  t = term_x_45;
  h_70 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_x_45, term_a_46, g_70);
  t = lookup_table_0_1(h_70, t);
  k_70 = t;
  t = term_a_46;
  i_70 = t;
  t = k_70;
  if(match_cons(t, sym_Hashtable_1))
    {
      j_70 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = h_10(i_70, g_70, j_70, t);
  t = g_70;
  t = x_111(t);
  {
    ATerm b_46 = t;
    int c_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(w_111, t);
        LocalPopChoice(c_46);
      }
    else
      {
        t = b_46;
        {
          ATerm d_46 = t;
          int e_46 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = y_111(t);
              t = report_success_0_0(t);
              LocalPopChoice(e_46);
            }
          else
            {
              t = d_46;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm e_11 (ATerm t)
{
  ATerm f_46 = t;
  int h_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = pack_stratego_options_0_0(t);
      LocalPopChoice(h_46);
    }
  else
    {
      t = f_46;
      {
        ATerm i_46 = t;
        int j_46 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = input_option_0_0(t);
            LocalPopChoice(j_46);
          }
        else
          {
            t = i_46;
            {
              ATerm w_46 = t;
              int x_46 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = output_option_0_0(t);
                  LocalPopChoice(x_46);
                }
              else
                {
                  t = w_46;
                  {
                    ATerm z_46 = t;
                    int a_47 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Option_3_0(g_11, h_11, j_11, t);
                        LocalPopChoice(a_47);
                      }
                    else
                      {
                        t = z_46;
                        {
                          ATerm d_47 = t;
                          int f_47 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = verbose_option_0_0(t);
                              LocalPopChoice(f_47);
                            }
                          else
                            {
                              t = d_47;
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
  ATerm q_70 = NULL,r_70 = NULL;
  t = term_g_47;
  q_70 = t;
  t = term_y_12;
  r_70 = t;
  t = term_k_47;
  t = g_10(q_70, r_70, t);
  t = term_l_47;
  return(t);
}
static ATerm j_11 (ATerm t)
{
  t = term_m_47;
  return(t);
}
static ATerm m_11 (ATerm t)
{
  t = get_filename_0_0(t);
  t = basename_1_0(_id, t);
  return(t);
}
static ATerm n_11 (ATerm t)
{
  ATerm c_71 = NULL,d_71 = NULL,e_71 = NULL,f_71 = NULL,g_71 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm n_47 = ATgetArgument(t, 0);
      if(match_cons(n_47, sym_Stream_1))
        {
          f_71 = ATgetArgument(n_47, 0);
        }
      else
        _fail(t);
      g_71 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_8(f_71, g_71, t);
  c_71 = t;
  t = term_n_21;
  d_71 = t;
  t = c_71;
  if(match_cons(t, sym_Stream_1))
    {
      e_71 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_n_21, c_71);
  t = m_8(d_71, e_71, t);
  return(t);
}
static ATerm o_11 (ATerm t)
{
  ATerm j_71 = NULL,k_71 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm o_47 = ATgetArgument(t, 0);
      if(match_cons(o_47, sym_Stream_1))
        {
          j_71 = ATgetArgument(o_47, 0);
        }
      else
        _fail(t);
      k_71 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_8(j_71, k_71, t);
  return(t);
}
ATerm pack_stratego_0_0 (ATerm t)
{
  ATerm o_70 = NULL,p_70 = NULL;
  static ATerm f_11 (ATerm t)
  {
    static ATerm k_11 (ATerm t)
    {
      ATerm t_70 = NULL;
      ATerm s_47 = t;
      int u_47 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm u_70 = NULL,v_70 = NULL,w_70 = NULL;
          t = term_w_11;
          v_70 = t;
          t = term_t_27;
          w_70 = t;
          t = term_d_48;
          t = d_10(v_70, w_70, t);
          u_70 = t;
          t = (ATerm) ATmakeAppl(sym_FILE_1, u_70);
          LocalPopChoice(u_47);
        }
      else
        {
          t = s_47;
          t = term_g_12;
        }
      if(match_cons(t, sym_FILE_1))
        {
          t_70 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = u_9(t_70, t);
      if(match_cons(t, sym__2))
        {
          if(((o_70 != NULL) && (o_70 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            o_70 = ATgetArgument(t, 0);
          if(((p_70 != NULL) && (p_70 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            p_70 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm f_48 = t;
        int g_48 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_70 = NULL,y_70 = NULL,z_70 = NULL,a_71 = NULL;
            t = term_w_11;
            z_70 = t;
            t = term_y_39;
            a_71 = t;
            t = term_l_48;
            t = d_10(z_70, a_71, t);
            t = o_70;
            t = map_1_0(m_11, t);
            y_70 = t;
            t = xtc_new_file_0_0(t);
            x_70 = t;
            t = (ATerm) ATmakeAppl(sym__2, x_70, y_70);
            t = o_8(n_11, x_70, y_70, t);
            t = (ATerm) ATmakeAppl(sym_FILE_1, x_70);
            LocalPopChoice(g_48);
          }
        else
          {
            t = f_48;
            {
              ATerm h_71 = NULL;
              ATerm m_48 = t;
              int o_48 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = o_70;
                  t = create_dep_file_0_0(t);
                  LocalPopChoice(o_48);
                }
              else
                {
                  t = m_48;
                }
              t = p_70;
              t = xtc_new_file_0_0(t);
              h_71 = t;
              t = (ATerm) ATmakeAppl(sym__2, h_71, p_70);
              t = o_8(o_11, h_71, p_70, t);
              t = (ATerm) ATmakeAppl(sym_FILE_1, h_71);
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
