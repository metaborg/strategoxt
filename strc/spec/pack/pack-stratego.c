#include <srts/stratego.h>
#include <srts/stratego-lib.h>
void init_constructors (void)
{
}
Symbol sym_Undefined_0;
Symbol sym_Scopes_0;
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
Symbol sym_Hashtable_1;
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
  sym_Undefined_0 = ATmakeSymbol("Undefined", 0, ATfalse);
  ATprotectSymbol(sym_Undefined_0);
  sym_Scopes_0 = ATmakeSymbol("Scopes", 0, ATfalse);
  ATprotectSymbol(sym_Scopes_0);
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
  sym_Hashtable_1 = ATmakeSymbol("Hashtable", 1, ATfalse);
  ATprotectSymbol(sym_Hashtable_1);
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
ATerm term_v_47;
ATerm term_r_47;
ATerm term_k_47;
ATerm term_j_47;
ATerm term_i_47;
ATerm term_h_47;
ATerm term_e_46;
ATerm term_d_46;
ATerm term_c_46;
ATerm term_z_45;
ATerm term_d_45;
ATerm term_b_45;
ATerm term_a_45;
ATerm term_z_44;
ATerm term_s_44;
ATerm term_n_44;
ATerm term_m_44;
ATerm term_l_44;
ATerm term_k_44;
ATerm term_j_44;
ATerm term_i_44;
ATerm term_h_44;
ATerm term_u_43;
ATerm term_t_43;
ATerm term_v_42;
ATerm term_t_42;
ATerm term_q_42;
ATerm term_j_42;
ATerm term_i_42;
ATerm term_f_42;
ATerm term_c_41;
ATerm term_b_41;
ATerm term_a_41;
ATerm term_s_39;
ATerm term_r_39;
ATerm term_q_39;
ATerm term_o_39;
ATerm term_n_39;
ATerm term_j_39;
ATerm term_i_39;
ATerm term_h_39;
ATerm term_g_39;
ATerm term_e_39;
ATerm term_d_39;
ATerm term_c_39;
ATerm term_h_38;
ATerm term_d_38;
ATerm term_c_38;
ATerm term_v_37;
ATerm term_p_37;
ATerm term_o_37;
ATerm term_k_37;
ATerm term_j_37;
ATerm term_g_37;
ATerm term_f_37;
ATerm term_c_37;
ATerm term_b_37;
ATerm term_a_37;
ATerm term_z_36;
ATerm term_y_36;
ATerm term_x_36;
ATerm term_b_36;
ATerm term_e_34;
ATerm term_d_32;
ATerm term_c_32;
ATerm term_z_31;
ATerm term_y_31;
ATerm term_x_31;
ATerm term_w_31;
ATerm term_v_31;
ATerm term_u_31;
ATerm term_k_30;
ATerm term_h_30;
ATerm term_g_30;
ATerm term_d_30;
ATerm term_c_30;
ATerm term_q_29;
ATerm term_b_29;
ATerm term_a_29;
ATerm term_z_28;
ATerm term_u_28;
ATerm term_q_28;
ATerm term_p_28;
ATerm term_k_28;
ATerm term_g_28;
ATerm term_f_28;
ATerm term_b_28;
ATerm term_a_28;
ATerm term_w_27;
ATerm term_u_27;
ATerm term_n_27;
ATerm term_m_27;
ATerm term_j_27;
ATerm term_g_27;
ATerm term_f_27;
ATerm term_e_27;
ATerm term_a_27;
ATerm term_x_26;
ATerm term_w_26;
ATerm term_t_26;
ATerm term_q_26;
ATerm term_l_25;
ATerm term_k_25;
ATerm term_x_24;
ATerm term_w_24;
ATerm term_v_24;
ATerm term_u_24;
ATerm term_t_24;
ATerm term_s_24;
ATerm term_r_24;
ATerm term_q_24;
ATerm term_p_24;
ATerm term_o_24;
ATerm term_n_24;
ATerm term_m_24;
ATerm term_l_24;
ATerm term_k_24;
ATerm term_j_24;
ATerm term_i_24;
ATerm term_h_24;
ATerm term_g_24;
ATerm term_f_24;
ATerm term_e_24;
ATerm term_d_24;
ATerm term_c_24;
ATerm term_b_24;
ATerm term_a_24;
ATerm term_z_23;
ATerm term_y_23;
ATerm term_x_23;
ATerm term_w_23;
ATerm term_u_23;
ATerm term_s_23;
ATerm term_r_23;
ATerm term_q_23;
ATerm term_p_23;
ATerm term_o_23;
ATerm term_n_23;
ATerm term_m_23;
ATerm term_l_23;
ATerm term_k_23;
ATerm term_h_23;
ATerm term_g_23;
ATerm term_f_23;
ATerm term_e_23;
ATerm term_d_23;
ATerm term_c_23;
ATerm term_x_22;
ATerm term_w_22;
ATerm term_v_22;
ATerm term_q_22;
ATerm term_p_22;
ATerm term_o_22;
ATerm term_m_22;
ATerm term_l_22;
ATerm term_k_22;
ATerm term_i_22;
ATerm term_h_22;
ATerm term_c_22;
ATerm term_z_21;
ATerm term_y_21;
ATerm term_r_21;
ATerm term_n_21;
ATerm term_m_21;
ATerm term_k_21;
ATerm term_j_21;
ATerm term_h_21;
ATerm term_g_21;
ATerm term_f_21;
ATerm term_b_21;
ATerm term_a_21;
ATerm term_v_20;
ATerm term_u_20;
ATerm term_q_20;
ATerm term_p_20;
ATerm term_k_20;
ATerm term_i_20;
ATerm term_h_20;
ATerm term_f_20;
ATerm term_d_20;
ATerm term_b_20;
ATerm term_z_19;
ATerm term_y_19;
ATerm term_w_19;
ATerm term_v_19;
ATerm term_u_19;
ATerm term_r_19;
ATerm term_p_19;
ATerm term_o_19;
ATerm term_n_19;
ATerm term_m_19;
ATerm term_l_19;
ATerm term_k_19;
ATerm term_j_19;
ATerm term_i_19;
ATerm term_h_19;
ATerm term_g_19;
ATerm term_f_19;
ATerm term_e_19;
ATerm term_d_19;
ATerm term_c_19;
ATerm term_b_19;
ATerm term_a_19;
ATerm term_z_18;
ATerm term_y_18;
ATerm term_x_18;
ATerm term_w_18;
ATerm term_t_18;
ATerm term_s_18;
ATerm term_p_18;
ATerm term_l_18;
ATerm term_k_18;
ATerm term_j_18;
ATerm term_i_18;
ATerm term_x_17;
ATerm term_w_17;
ATerm term_v_17;
ATerm term_u_17;
ATerm term_s_17;
ATerm term_p_17;
ATerm term_m_17;
ATerm term_l_17;
ATerm term_i_17;
ATerm term_n_16;
ATerm term_l_16;
ATerm term_k_16;
ATerm term_i_16;
ATerm term_h_16;
ATerm term_g_16;
ATerm term_e_16;
ATerm term_d_16;
ATerm term_x_15;
ATerm term_w_15;
ATerm term_q_15;
ATerm term_o_15;
ATerm term_l_15;
ATerm term_k_15;
ATerm term_i_15;
ATerm term_b_15;
ATerm term_u_14;
ATerm term_s_14;
ATerm term_m_14;
ATerm term_j_14;
ATerm term_h_14;
ATerm term_f_14;
ATerm term_z_13;
ATerm term_y_13;
ATerm term_v_13;
ATerm term_r_13;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/filemode: Cannot get filemode from ", 0, ATtrue));
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeInt(47);
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeAppl(sym__2, term_f_14, term_h_14);
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(ATmakeSymbol("XXXXXX", 0, ATtrue));
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/mkstemp", 0, ATtrue));
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeAppl(ATmakeSymbol("/StrategoXT", 0, ATtrue));
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file> (file, mode)", 0, ATtrue));
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--dep", 0, ATtrue));
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeAppl(sym__2, term_f_14, term_d_16);
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--nodep", 0, ATtrue));
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeAppl(sym__2, term_f_14, term_g_16);
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeAppl(ATmakeSymbol(".", 0, ATtrue));
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeAppl(ATmakeSymbol("dep", 0, ATtrue));
  ATprotect(&(term_l_16));
  term_l_16 = (ATerm) ATmakeAppl(ATmakeSymbol(" \\\n	", 0, ATtrue));
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeAppl(ATmakeSymbol(" :", 0, ATtrue));
  ATprotect(&(term_i_17));
  term_i_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_l_17));
  term_l_17 = (ATerm) ATmakeAppl(sym__2, term_f_14, term_i_17);
  ATprotect(&(term_m_17));
  term_m_17 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_s_17));
  term_s_17 = (ATerm) ATmakeAppl(sym__2, term_f_14, term_p_17);
  ATprotect(&(term_u_17));
  term_u_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_v_17));
  term_v_17 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_w_17));
  term_w_17 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_i_18));
  term_i_18 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_j_18));
  term_j_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_k_18));
  term_k_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_18, term_m_17, term_j_18);
  ATprotect(&(term_l_18));
  term_l_18 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_p_18));
  term_p_18 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_s_18));
  term_s_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_t_18));
  term_t_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_18, term_p_18, term_s_18);
  ATprotect(&(term_w_18));
  term_w_18 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_x_18));
  term_x_18 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_y_18));
  term_y_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_z_18));
  term_z_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_18, term_x_18, term_y_18);
  ATprotect(&(term_a_19));
  term_a_19 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_b_19));
  term_b_19 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_c_19));
  term_c_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_d_19));
  term_d_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_19, term_b_19, term_c_19);
  ATprotect(&(term_e_19));
  term_e_19 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_f_19));
  term_f_19 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_h_19));
  term_h_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_19, term_f_19, term_g_19);
  ATprotect(&(term_i_19));
  term_i_19 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_j_19));
  term_j_19 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_k_19));
  term_k_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_l_19));
  term_l_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_19, term_j_19, term_k_19);
  ATprotect(&(term_m_19));
  term_m_19 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_n_19));
  term_n_19 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_o_19));
  term_o_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_p_19));
  term_p_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_19, term_n_19, term_o_19);
  ATprotect(&(term_r_19));
  term_r_19 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_u_19));
  term_u_19 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_v_19));
  term_v_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_w_19));
  term_w_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_19, term_u_19, term_v_19);
  ATprotect(&(term_y_19));
  term_y_19 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_z_19));
  term_z_19 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_b_20));
  term_b_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_d_20));
  term_d_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_19, term_z_19, term_b_20);
  ATprotect(&(term_f_20));
  term_f_20 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_h_20));
  term_h_20 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_i_20));
  term_i_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_k_20));
  term_k_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_20, term_h_20, term_i_20);
  ATprotect(&(term_p_20));
  term_p_20 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_q_20));
  term_q_20 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_u_20));
  term_u_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_v_20));
  term_v_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_20, term_q_20, term_u_20);
  ATprotect(&(term_a_21));
  term_a_21 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_b_21));
  term_b_21 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_f_21));
  term_f_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_g_21));
  term_g_21 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_21, term_b_21, term_f_21);
  ATprotect(&(term_h_21));
  term_h_21 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_j_21));
  term_j_21 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_m_21));
  term_m_21 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_21, term_j_21, term_k_21);
  ATprotect(&(term_n_21));
  term_n_21 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_r_21));
  term_r_21 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_y_21));
  term_y_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_z_21));
  term_z_21 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_21, term_r_21, term_y_21);
  ATprotect(&(term_c_22));
  term_c_22 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_h_22));
  term_h_22 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_i_22));
  term_i_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_k_22));
  term_k_22 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_22, term_h_22, term_i_22);
  ATprotect(&(term_l_22));
  term_l_22 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_m_22));
  term_m_22 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_o_22));
  term_o_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_p_22));
  term_p_22 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_22, term_m_22, term_o_22);
  ATprotect(&(term_q_22));
  term_q_22 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_v_22));
  term_v_22 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_w_22));
  term_w_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_x_22));
  term_x_22 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_22, term_v_22, term_w_22);
  ATprotect(&(term_c_23));
  term_c_23 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_d_23));
  term_d_23 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_e_23));
  term_e_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_f_23));
  term_f_23 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_23, term_d_23, term_e_23);
  ATprotect(&(term_g_23));
  term_g_23 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_h_23));
  term_h_23 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_k_23));
  term_k_23 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_l_23));
  term_l_23 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_23, term_h_23, term_k_23);
  ATprotect(&(term_m_23));
  term_m_23 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_n_23));
  term_n_23 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_o_23));
  term_o_23 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_p_23));
  term_p_23 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_23, term_n_23, term_o_23);
  ATprotect(&(term_q_23));
  term_q_23 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_r_23));
  term_r_23 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_s_23));
  term_s_23 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_u_23));
  term_u_23 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_23, term_r_23, term_s_23);
  ATprotect(&(term_w_23));
  term_w_23 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_x_23));
  term_x_23 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_y_23));
  term_y_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_z_23));
  term_z_23 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_23, term_x_23, term_y_23);
  ATprotect(&(term_a_24));
  term_a_24 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_b_24));
  term_b_24 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_c_24));
  term_c_24 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_d_24));
  term_d_24 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_24, term_b_24, term_c_24);
  ATprotect(&(term_e_24));
  term_e_24 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_f_24));
  term_f_24 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_g_24));
  term_g_24 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_h_24));
  term_h_24 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_24, term_f_24, term_g_24);
  ATprotect(&(term_i_24));
  term_i_24 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_j_24));
  term_j_24 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_k_24));
  term_k_24 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_l_24));
  term_l_24 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_24, term_j_24, term_k_24);
  ATprotect(&(term_m_24));
  term_m_24 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_n_24));
  term_n_24 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_o_24));
  term_o_24 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_p_24));
  term_p_24 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_24, term_n_24, term_o_24);
  ATprotect(&(term_q_24));
  term_q_24 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_r_24));
  term_r_24 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_s_24));
  term_s_24 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_t_24));
  term_t_24 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_24, term_r_24, term_s_24);
  ATprotect(&(term_u_24));
  term_u_24 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_v_24));
  term_v_24 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_w_24));
  term_w_24 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_x_24));
  term_x_24 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_24, term_v_24, term_w_24);
  ATprotect(&(term_k_25));
  term_k_25 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_l_25));
  term_l_25 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_q_26));
  term_q_26 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_t_26));
  term_t_26 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_w_26));
  term_w_26 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_x_26));
  term_x_26 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_a_27));
  term_a_27 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_e_27));
  term_e_27 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_f_27));
  term_f_27 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_g_27));
  term_g_27 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_j_27));
  term_j_27 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_m_27));
  term_m_27 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_n_27));
  term_n_27 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_u_27));
  term_u_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_w_27));
  term_w_27 = (ATerm) ATmakeAppl(sym__2, term_f_14, term_u_27);
  ATprotect(&(term_a_28));
  term_a_28 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_b_28));
  term_b_28 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_f_28));
  term_f_28 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_g_28));
  term_g_28 = (ATerm) ATmakeAppl(sym__2, term_m_27, term_f_28);
  ATprotect(&(term_k_28));
  term_k_28 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_p_28));
  term_p_28 = (ATerm) ATmakeAppl(sym__2, term_m_27, term_n_27);
  ATprotect(&(term_q_28));
  term_q_28 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_u_28));
  term_u_28 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_z_28));
  term_z_28 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_a_29));
  term_a_29 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_b_29));
  term_b_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_q_29));
  term_q_29 = (ATerm) ATmakeAppl(ATmakeSymbol("parse error in ", 0, ATtrue));
  ATprotect(&(term_c_30));
  term_c_30 = (ATerm) ATmakeAppl(ATmakeSymbol("parse-stratego", 0, ATtrue));
  ATprotect(&(term_d_30));
  term_d_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--asfix", 0, ATtrue));
  ATprotect(&(term_g_30));
  term_g_30 = (ATerm) ATmakeAppl(sym__2, term_f_14, term_d_30);
  ATprotect(&(term_h_30));
  term_h_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue));
  ATprotect(&(term_k_30));
  term_k_30 = (ATerm) ATmakeAppl(sym__2, term_f_14, term_h_30);
  ATprotect(&(term_u_31));
  term_u_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--slack", 0, ATtrue));
  ATprotect(&(term_v_31));
  term_v_31 = (ATerm) ATmakeAppl(sym__2, term_f_14, term_u_31);
  ATprotect(&(term_w_31));
  term_w_31 = (ATerm) ATmakeAppl(ATmakeSymbol("*** module ", 0, ATtrue));
  ATprotect(&(term_x_31));
  term_x_31 = (ATerm) ATmakeAppl(ATmakeSymbol(" not found", 0, ATtrue));
  ATprotect(&(term_y_31));
  term_y_31 = (ATerm) ATmakeAppl(ATmakeSymbol(" reading ", 0, ATtrue));
  ATprotect(&(term_z_31));
  term_z_31 = (ATerm) ATmakeAppl(ATmakeSymbol("rtree", 0, ATtrue));
  ATprotect(&(term_c_32));
  term_c_32 = (ATerm) ATmakeAppl(ATmakeSymbol("str", 0, ATtrue));
  ATprotect(&(term_d_32));
  term_d_32 = (ATerm) ATmakeAppl(ATmakeSymbol("cr", 0, ATtrue));
  ATprotect(&(term_e_34));
  term_e_34 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_b_36));
  term_b_36 = (ATerm) ATmakeAppl(sym__2, term_l_15, term_b_15);
  ATprotect(&(term_x_36));
  term_x_36 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_y_36));
  term_y_36 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_z_36));
  term_z_36 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_a_37));
  term_a_37 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_b_37));
  term_b_37 = (ATerm) ATmakeAppl(sym__2, term_p_17, term_a_37);
  ATprotect(&(term_c_37));
  term_c_37 = (ATerm) ATmakeAppl(sym_Verbose_1, term_a_37);
  ATprotect(&(term_f_37));
  term_f_37 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_g_37));
  term_g_37 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_j_37));
  term_j_37 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_k_37));
  term_k_37 = (ATerm) ATmakeAppl(sym__2, term_j_37, term_q_15);
  ATprotect(&(term_o_37));
  term_o_37 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_p_37));
  term_p_37 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_v_37));
  term_v_37 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_c_38));
  term_c_38 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_d_38));
  term_d_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_h_38));
  term_h_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_c_39));
  term_c_39 = (ATerm) ATmakeAppl(ATmakeSymbol("-I d | --Include d   Include modules from directory d", 0, ATtrue));
  ATprotect(&(term_d_39));
  term_d_39 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_e_39));
  term_e_39 = (ATerm) ATmakeAppl(sym__2, term_g_16, term_d_39);
  ATprotect(&(term_g_39));
  term_g_39 = (ATerm) ATmakeAppl(ATmakeSymbol("--nodep              Don't create dependency file", 0, ATtrue));
  ATprotect(&(term_h_39));
  term_h_39 = (ATerm) ATmakeAppl(ATmakeSymbol("--dep f | -d f       Write dependency to file f", 0, ATtrue));
  ATprotect(&(term_i_39));
  term_i_39 = (ATerm) ATmakeAppl(ATmakeSymbol("--imports", 0, ATtrue));
  ATprotect(&(term_j_39));
  term_j_39 = (ATerm) ATmakeAppl(sym__2, term_i_39, term_q_15);
  ATprotect(&(term_n_39));
  term_n_39 = (ATerm) ATmakeAppl(ATmakeSymbol("--imports            Produce a list of imported modules only", 0, ATtrue));
  ATprotect(&(term_o_39));
  term_o_39 = (ATerm) ATmakeAppl(sym__2, term_u_31, term_q_15);
  ATprotect(&(term_q_39));
  term_q_39 = (ATerm) ATmakeAppl(ATmakeSymbol("--slack              Continue when module is not found", 0, ATtrue));
  ATprotect(&(term_r_39));
  term_r_39 = (ATerm) ATmakeAppl(sym__2, term_d_30, term_d_39);
  ATprotect(&(term_s_39));
  term_s_39 = (ATerm) ATmakeAppl(ATmakeSymbol("--asfix              Do not implode the concrete syntax parts", 0, ATtrue));
  ATprotect(&(term_a_41));
  term_a_41 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_b_41));
  term_b_41 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_c_41));
  term_c_41 = (ATerm) ATmakeAppl(sym__2, term_f_14, term_b_41);
  ATprotect(&(term_f_42));
  term_f_42 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_i_42));
  term_i_42 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_j_42));
  term_j_42 = (ATerm) ATmakeAppl(sym__2, term_f_14, term_i_42);
  ATprotect(&(term_q_42));
  term_q_42 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_t_42));
  term_t_42 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_v_42));
  term_v_42 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_t_43));
  term_t_43 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_u_43));
  term_u_43 = (ATerm) ATmakeAppl(sym__2, term_v_37, term_c_38);
  ATprotect(&(term_h_44));
  term_h_44 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_i_44));
  term_i_44 = (ATerm) ATmakeAppl(sym__2, term_h_44, term_q_15);
  ATprotect(&(term_j_44));
  term_j_44 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_k_44));
  term_k_44 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_l_44));
  term_l_44 = (ATerm) ATmakeAppl(sym__2, term_k_44, term_q_15);
  ATprotect(&(term_m_44));
  term_m_44 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_n_44));
  term_n_44 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_s_44));
  term_s_44 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_z_44));
  term_z_44 = (ATerm) ATmakeAppl(sym__2, term_i_42, term_q_15);
  ATprotect(&(term_a_45));
  term_a_45 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_b_45));
  term_b_45 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_d_45));
  term_d_45 = (ATerm) ATmakeAppl(sym__3, term_v_37, term_c_38, (ATerm) ATempty);
  ATprotect(&(term_z_45));
  term_z_45 = (ATerm) ATmakeAppl(sym__2, term_f_14, term_h_44);
  ATprotect(&(term_c_46));
  term_c_46 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_d_46));
  term_d_46 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_e_46));
  term_e_46 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_h_47));
  term_h_47 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_i_47));
  term_i_47 = (ATerm) ATmakeAppl(sym__2, term_h_47, term_q_15);
  ATprotect(&(term_j_47));
  term_j_47 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_k_47));
  term_k_47 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_r_47));
  term_r_47 = (ATerm) ATmakeAppl(sym__2, term_f_14, term_b_29);
  ATprotect(&(term_v_47));
  term_v_47 = (ATerm) ATmakeAppl(sym__2, term_f_14, term_i_39);
}
#include <srts/init-stratego-application.h>
ATerm copy_to_1_0 (ATerm p_0 (ATerm), ATerm t);
ATerm last_0_0 (ATerm t);
static ATerm g_10 (ATerm h_37, ATerm n_272, ATerm t);
ATerm at_suffix_1_0 (ATerm f_114 (ATerm), ATerm t);
ATerm split_fetch_1_0 (ATerm x_113 (ATerm), ATerm t);
ATerm list_tokenize_1_0 (ATerm h_123 (ATerm), ATerm t);
static ATerm i_0 (ATerm t);
ATerm string_tokenize_0_0 (ATerm t);
ATerm filemode_0_0 (ATerm t);
static ATerm j_10 (ATerm f_67, ATerm e_67, ATerm t);
static ATerm k_0 (ATerm t);
ATerm xtc_write_output_0_0 (ATerm t);
static ATerm t_8 (ATerm f_36, ATerm g_36, ATerm t);
static ATerm y_8 (ATerm b_113 (ATerm), ATerm p_259, ATerm p_36, ATerm t);
static ATerm o_9 (ATerm p_103 (ATerm), ATerm v_23, ATerm t_23, ATerm t);
ATerm mkstemp_0_0 (ATerm t);
ATerm P__tmpdir_0_0 (ATerm t);
static ATerm n_0 (ATerm t);
ATerm xtc_new_file_0_0 (ATerm t);
static ATerm u_8 (ATerm t_36, ATerm u_36, ATerm t);
static ATerm w_12 (ATerm h_12, ATerm t);
static ATerm x_12 (ATerm j_12, ATerm l_12, ATerm n_12, ATerm t);
static ATerm s_0 (ATerm t);
ATerm open_file_0_0 (ATerm t);
ATerm create_dep_file_0_0 (ATerm t);
static ATerm w_8 (ATerm e_52, ATerm f_52, ATerm t);
static ATerm x_8 (ATerm j_36, ATerm k_36, ATerm t);
ATerm basename_1_0 (ATerm l_124 (ATerm), ATerm t);
ATerm at_suffix_rev_1_0 (ATerm j_114 (ATerm), ATerm t);
ATerm get_filename_0_0 (ATerm t);
ATerm map_1_0 (ATerm k_113 (ATerm), ATerm t);
static ATerm q_10 (ATerm e_59, ATerm f_59, ATerm t);
static ATerm u_0 (ATerm t);
static ATerm y_0 (ATerm t);
ATerm flatten_stratego_0_0 (ATerm t);
ATerm genzip_4_0 (ATerm o_115 (ATerm), ATerm p_115 (ATerm), ATerm q_115 (ATerm), ATerm r_115 (ATerm), ATerm t);
static ATerm z_0 (ATerm t);
static ATerm c_9 (ATerm d_157, ATerm t);
ATerm read_from_0_0 (ATerm t);
ATerm pass_keep_0_0 (ATerm t);
static ATerm d_9 (ATerm a_56, ATerm b_56, ATerm t);
ATerm pass_verbose_0_0 (ATerm t);
static ATerm a_1 (ATerm t);
ATerm xtc_transform_term_2_0 (ATerm q_137 (ATerm), ATerm r_137 (ATerm), ATerm t);
static ATerm e_9 (ATerm o_71, ATerm p_71, ATerm t);
ATerm signal_to_descr_0_0 (ATerm t);
ATerm signal_from_number_0_0 (ATerm t);
ATerm warn_ifsignaled_0_0 (ATerm t);
ATerm fork_0_0 (ATerm t);
ATerm fork_and_wait_1_0 (ATerm s_129 (ATerm), ATerm t);
static ATerm g_9 (ATerm k_62, ATerm t);
ATerm table_getlist_0_0 (ATerm t);
ATerm if_verbose5_1_0 (ATerm l_129 (ATerm), ATerm t);
ATerm if_verbose4_1_0 (ATerm k_129 (ATerm), ATerm t);
ATerm if_verbose6_1_0 (ATerm m_129 (ATerm), ATerm t);
static ATerm i_9 (ATerm v_117 (ATerm), ATerm o_42, ATerm n_42, ATerm t);
static ATerm h_1 (ATerm t);
static ATerm j_9 (ATerm i_58, ATerm j_58, ATerm k_58, ATerm t);
static ATerm k_9 (ATerm y_126 (ATerm), ATerm s_58, ATerm r_58, ATerm t);
static ATerm m_31 (ATerm e_31, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm l_9 (ATerm l_36, ATerm t);
static ATerm h_10 (ATerm i_50, ATerm j_50, ATerm t);
static ATerm m_9 (ATerm g_52, ATerm h_52, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm t_33 (ATerm a_32, ATerm t);
static ATerm u_33 (ATerm g_32, ATerm k_32, ATerm l_32, ATerm t);
static ATerm v_33 (ATerm d_33, ATerm e_33, ATerm f_33, ATerm t);
static ATerm n_9 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
static ATerm m_1 (ATerm t);
static ATerm o_1 (ATerm t);
ATerm read_repository_file_0_0 (ATerm t);
static ATerm q_1 (ATerm t);
static ATerm s_1 (ATerm t);
static ATerm t_1 (ATerm t);
static ATerm v_1 (ATerm t);
static ATerm w_1 (ATerm t);
static ATerm x_1 (ATerm t);
static ATerm y_1 (ATerm t);
static ATerm b_2 (ATerm t);
ATerm xtc_read_0_0 (ATerm t);
ATerm repeat_2_0 (ATerm y_105 (ATerm), ATerm z_105 (ATerm), ATerm t);
ATerm GetInternalDefaultXtcRepository_0_0 (ATerm t);
ATerm xtc_location_0_0 (ATerm t);
static ATerm c_2 (ATerm t);
static ATerm d_2 (ATerm t);
static ATerm f_2 (ATerm t);
static ATerm g_2 (ATerm t);
static ATerm h_2 (ATerm t);
ATerm xtc_load_0_0 (ATerm t);
static ATerm i_2 (ATerm t);
static ATerm j_2 (ATerm t);
static ATerm m_38 (ATerm s_37, ATerm t);
static ATerm n_2 (ATerm t);
static ATerm p_2 (ATerm t);
static ATerm q_2 (ATerm t);
static ATerm v_2 (ATerm t);
ATerm xtc_find_0_0 (ATerm t);
ATerm xtc_command_1_0 (ATerm u_138 (ATerm), ATerm t);
ATerm xtc_transform_file_2_0 (ATerm q_0 (ATerm), ATerm r_0 (ATerm), ATerm t);
static ATerm p_41 (ATerm f_39, ATerm k_39, ATerm l_39, ATerm t);
static ATerm q_41 (ATerm x_40, ATerm e_41, ATerm t);
static ATerm y_2 (ATerm t);
static ATerm z_2 (ATerm t);
static ATerm a_3 (ATerm t);
static ATerm b_3 (ATerm t);
ATerm parse_module_0_0 (ATerm t);
ATerm debug_1_0 (ATerm z_112 (ATerm), ATerm t);
ATerm if_verbose3_1_0 (ATerm j_129 (ATerm), ATerm t);
ATerm fetch_elem_1_0 (ATerm w_113 (ATerm), ATerm t);
static ATerm i_10 (ATerm u_51, ATerm v_51, ATerm t);
ATerm is_relpath_0_0 (ATerm t);
static ATerm p_9 (ATerm i_103 (ATerm), ATerm j_23, ATerm i_23, ATerm t);
static ATerm a_4 (ATerm t);
ATerm get_module_1_0 (ATerm h_103 (ATerm), ATerm t);
static ATerm r_9 (ATerm y_117 (ATerm), ATerm z_117 (ATerm), ATerm s_42, ATerm r_42, ATerm t);
static ATerm s_9 (ATerm q_117 (ATerm), ATerm m_42, ATerm l_42, ATerm t);
static ATerm k_4 (ATerm t);
static ATerm l_4 (ATerm t);
static ATerm m_4 (ATerm t);
static ATerm x_9 (ATerm i_777, ATerm n_777, ATerm r_75, ATerm t);
static ATerm o_4 (ATerm t);
static ATerm p_4 (ATerm t);
static ATerm q_4 (ATerm t);
static ATerm o_48 (ATerm r_46, ATerm s_46, ATerm t_46, ATerm t);
static ATerm s_4 (ATerm t);
ATerm diff_0_0 (ATerm t);
static ATerm z_9 (ATerm q_139 (ATerm), ATerm r_139 (ATerm), ATerm s_139 (ATerm), ATerm j_79, ATerm g_79, ATerm n_79, ATerm k_79, ATerm h_79, ATerm i_79, ATerm t);
ATerm GnNext_3_0 (ATerm q_139 (ATerm), ATerm r_139 (ATerm), ATerm s_139 (ATerm), ATerm t);
ATerm while_not_2_0 (ATerm p_106 (ATerm), ATerm q_106 (ATerm), ATerm t);
ATerm for_3_0 (ATerm s_106 (ATerm), ATerm t_106 (ATerm), ATerm u_106 (ATerm), ATerm t);
static ATerm t_4 (ATerm t);
static ATerm u_4 (ATerm t);
ATerm graph_nodes_roots_3_0 (ATerm n_139 (ATerm), ATerm o_139 (ATerm), ATerm p_139 (ATerm), ATerm t);
ATerm filter_1_0 (ATerm n_121 (ATerm), ATerm t);
static ATerm w_4 (ATerm t);
static ATerm a_5 (ATerm t);
static ATerm d_5 (ATerm t);
static ATerm l_5 (ATerm t);
static ATerm n_5 (ATerm t);
static ATerm o_5 (ATerm t);
static ATerm c_10 (ATerm z_22, ATerm t);
static ATerm k_10 (ATerm q_57, ATerm r_57, ATerm t);
ATerm end_scope_1_0 (ATerm m_103 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm u_105 (ATerm), ATerm v_105 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm l_103 (ATerm), ATerm t);
static ATerm r_5 (ATerm t);
static ATerm u_5 (ATerm t);
static ATerm w_5 (ATerm t);
ATerm xtc_temp_files_1_0 (ATerm d_138 (ATerm), ATerm t);
ATerm default_usage_0_0 (ATerm t);
static ATerm x_5 (ATerm t);
static ATerm y_5 (ATerm t);
static ATerm z_5 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm b_6 (ATerm t);
static ATerm c_6 (ATerm t);
static ATerm e_6 (ATerm t);
static ATerm h_6 (ATerm t);
static ATerm i_6 (ATerm t);
static ATerm m_6 (ATerm t);
static ATerm r_6 (ATerm t);
static ATerm s_6 (ATerm t);
static ATerm t_6 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm t_10 (ATerm l_80, ATerm m_80, ATerm t);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t);
static ATerm v_6 (ATerm t);
static ATerm w_6 (ATerm t);
static ATerm x_6 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm z_6 (ATerm t);
static ATerm b_7 (ATerm t);
static ATerm c_7 (ATerm t);
ATerm input_option_0_0 (ATerm t);
static ATerm r_10 (ATerm l_57, ATerm m_57, ATerm k_57, ATerm t);
ATerm ArgOption_3_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm o_0 (ATerm), ATerm t);
ATerm at_end_1_0 (ATerm b_114 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm z_61 (ATerm l_61, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm d_10 (ATerm s_80, ATerm t_80, ATerm t);
static ATerm h_7 (ATerm t);
static ATerm i_7 (ATerm t);
static ATerm q_7 (ATerm t);
static ATerm s_7 (ATerm t);
static ATerm v_7 (ATerm t);
static ATerm y_7 (ATerm t);
static ATerm b_8 (ATerm t);
static ATerm c_8 (ATerm t);
static ATerm f_8 (ATerm t);
static ATerm g_8 (ATerm t);
static ATerm i_8 (ATerm t);
static ATerm j_8 (ATerm t);
static ATerm k_8 (ATerm t);
static ATerm n_8 (ATerm t);
static ATerm o_8 (ATerm t);
static ATerm p_8 (ATerm t);
static ATerm r_8 (ATerm t);
static ATerm s_8 (ATerm t);
ATerm pack_stratego_options_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm l_10 (ATerm u_55, ATerm v_55, ATerm t);
ATerm foldr_2_0 (ATerm j_120 (ATerm), ATerm k_120 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm v_8 (ATerm t);
static ATerm h_9 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm h_129 (ATerm), ATerm t);
static ATerm t_9 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm w_9 (ATerm t);
ATerm need_help_1_0 (ATerm v_130 (ATerm), ATerm t);
static ATerm u_10 (ATerm d_62, ATerm e_62, ATerm f_62, ATerm t);
static ATerm v_10 (ATerm g_62, ATerm h_62, ATerm t);
ATerm lookup_table_0_1 (ATerm x_58, ATerm t);
ATerm new_hashtable_0_2 (ATerm l_62, ATerm m_62, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm n_10 (ATerm i_62, ATerm j_62, ATerm t);
static ATerm o_10 (ATerm n_62, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm reverse_acc_2_0 (ATerm h_0 (ATerm), ATerm j_0 (ATerm), ATerm t);
static ATerm e_10 (ATerm t);
static ATerm f_10 (ATerm t);
static ATerm m_10 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm u_113 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm p_10 (ATerm t);
static ATerm s_10 (ATerm t);
static ATerm w_10 (ATerm t);
static ATerm x_10 (ATerm t);
static ATerm z_10 (ATerm t);
static ATerm b_11 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm e_85 (ATerm), ATerm f_85 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm h_133 (ATerm), ATerm t);
static ATerm g_11 (ATerm t);
static ATerm h_11 (ATerm t);
static ATerm i_11 (ATerm t);
static ATerm j_11 (ATerm t);
ATerm parse_options_1_0 (ATerm g_133 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm x_130 (ATerm), ATerm y_130 (ATerm), ATerm z_130 (ATerm), ATerm a_131 (ATerm), ATerm t);
static ATerm m_11 (ATerm t);
static ATerm p_11 (ATerm t);
static ATerm q_11 (ATerm t);
static ATerm r_11 (ATerm t);
static ATerm x_11 (ATerm t);
static ATerm z_11 (ATerm t);
static ATerm a_12 (ATerm t);
ATerm pack_stratego_0_0 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm copy_to_1_0 (ATerm p_0 (ATerm), ATerm t)
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
    ATerm t_2 = t;
    int b_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_0 = NULL;
        t = k_1;
        t = p_0(t);
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
        t = (ATerm) ATmakeAppl(sym__2, l_1, e_0);
        t = j_10(l_1, e_0, t);
        t = (ATerm) ATmakeAppl(sym_FILE_1, l_1);
        LocalPopChoice(b_12);
      }
    else
      {
        t = t_2;
        {
          ATerm c_12 = t;
          int d_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm v_0 = NULL;
              t = k_1;
              t = p_0(t);
              v_0 = t;
              {
                ATerm f_12 = t;
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
                            if((l_1 != t))
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
                    t = f_12;
                  }
              }
              t = (ATerm) ATmakeAppl(sym__2, l_1, v_0);
              t = j_10(l_1, v_0, t);
              t = (ATerm) ATmakeAppl(sym_FILE_1, l_1);
              LocalPopChoice(d_12);
            }
          else
            {
              t = c_12;
              t = k_1;
              t = p_0(t);
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
ATerm last_0_0 (ATerm t)
{
  ATerm z_1 = NULL,a_2 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_1 = ATgetFirst((ATermList) t);
      a_2 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = a_2;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = z_1;
    }
  else
    {
      t = a_2;
      t = last_0_0(t);
    }
  return(t);
}
static ATerm g_10 (ATerm h_37, ATerm n_272, ATerm t)
{
  static ATerm a_0 (ATerm t);
  static ATerm a_0 (ATerm t)
  {
    if((h_37 != t))
      {
        _fail(t);
      }
    return(t);
  }
  t = n_272;
  t = fetch_1_0(a_0, t);
  return(t);
}
ATerm at_suffix_1_0 (ATerm f_114 (ATerm), ATerm t)
{
  static ATerm l_3 (ATerm t);
  static ATerm l_3 (ATerm t)
  {
    ATerm i_12 = t;
    int m_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = f_114(t);
        LocalPopChoice(m_12);
      }
    else
      {
        t = i_12;
        {
          ATerm i_3 = NULL,j_3 = NULL,k_3 = NULL,r_1 = NULL,u_1 = NULL,w_0 = NULL;
          i_3 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              j_3 = ATgetFirst((ATermList) t);
              k_3 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(i_3);
          r_1 = t;
          t = k_3;
          t = l_3(t);
          u_1 = t;
          t = (ATerm) ATinsert(CheckATermList(u_1), j_3);
          w_0 = t;
          t = SSLsetAnnotations(w_0, r_1);
        }
      }
    return(t);
  }
  t = l_3(t);
  return(t);
}
ATerm split_fetch_1_0 (ATerm x_113 (ATerm), ATerm t)
{
  ATerm n_3 = NULL,q_3 = NULL;
  static ATerm b_0 (ATerm t);
  static ATerm b_0 (ATerm t)
  {
    ATerm s_3 = NULL,t_3 = NULL,u_3 = NULL,v_3 = NULL,x_3 = NULL,y_3 = NULL,z_3 = NULL,b_4 = NULL,c_4 = NULL,d_1 = NULL,c_1 = NULL;
    c_4 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        x_3 = ATgetFirst((ATermList) t);
        y_3 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(c_4);
    v_3 = t;
    t = x_3;
    t = x_113(t);
    z_3 = t;
    t = (ATerm) ATinsert(CheckATermList(y_3), z_3);
    c_1 = t;
    t = SSLsetAnnotations(c_1, v_3);
    b_4 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        t_3 = ATgetFirst((ATermList) t);
        u_3 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(b_4);
    s_3 = t;
    t = u_3;
    if(((n_3 != NULL) && (n_3 != t)))
      _fail(t);
    else
      n_3 = t;
    t = (ATerm) ATinsert(CheckATermList(u_3), t_3);
    d_1 = t;
    t = SSLsetAnnotations(d_1, s_3);
    t = (ATerm) ATempty;
    return(t);
  }
  t = at_suffix_1_0(b_0, t);
  q_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_3, not_null(n_3));
  return(t);
}
ATerm list_tokenize_1_0 (ATerm h_123 (ATerm), ATerm t)
{
  ATerm n_4 = NULL,r_4 = NULL;
  ATerm o_12 = t;
  int p_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = split_fetch_1_0(h_123, t);
      LocalPopChoice(p_12);
    }
  else
    {
      t = o_12;
      {
        ATerm j_4 = NULL;
        j_4 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_4, (ATerm) ATempty);
      }
    }
  if(match_cons(t, sym__2))
    {
      n_4 = ATgetArgument(t, 0);
      r_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_4;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = r_4;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = (ATerm) ATempty;
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm q_12 = ATgetFirst((ATermList) t);
              ATerm r_12 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = r_4;
          t = list_tokenize_1_0(h_123, t);
        }
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          ATerm u_12 = ATgetFirst((ATermList) t);
          ATerm g_13 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = r_4;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = (ATerm) ATinsert(ATempty, n_4);
        }
      else
        {
          ATerm y_4 = NULL;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm h_13 = ATgetFirst((ATermList) t);
              ATerm n_13 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = r_4;
          t = list_tokenize_1_0(h_123, t);
          y_4 = t;
          t = (ATerm) ATinsert(CheckATermList(y_4), n_4);
        }
    }
  return(t);
}
static ATerm i_0 (ATerm t)
{
  ATerm j_5 = NULL;
  j_5 = t;
  t = SSL_implode_string(j_5);
  return(t);
}
ATerm string_tokenize_0_0 (ATerm t)
{
  ATerm z_4 = NULL,b_5 = NULL,c_5 = NULL,e_5 = NULL,f_5 = NULL,g_5 = NULL,h_5 = NULL,g_1 = NULL;
  h_5 = t;
  if(match_cons(t, sym__2))
    {
      e_5 = ATgetArgument(t, 0);
      f_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_5);
  c_5 = t;
  t = SSL_explode_string(f_5);
  g_5 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_5, g_5);
  g_1 = t;
  t = SSLsetAnnotations(g_1, c_5);
  if(match_cons(t, sym__2))
    {
      z_4 = ATgetArgument(t, 0);
      b_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_5;
  {
    static ATerm c_0 (ATerm t);
    static ATerm c_0 (ATerm t)
    {
      ATerm i_5 = NULL;
      i_5 = t;
      t = (ATerm) ATmakeAppl(sym__2, i_5, z_4);
      t = g_10(i_5, z_4, t);
      return(t);
    }
    t = list_tokenize_1_0(c_0, t);
  }
  t = map_1_0(i_0, t);
  return(t);
}
ATerm filemode_0_0 (ATerm t)
{
  ATerm g_6 = NULL;
  g_6 = t;
  {
    ATerm o_13 = t;
    int p_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_2 = NULL;
        t = SSL_filemode(g_6);
        if(match_cons(t, sym__2))
          {
            e_2 = ATgetArgument(t, 0);
            {
              ATerm q_13 = ATgetArgument(t, 1);
              if(((ATgetType(q_13) != AT_INT) || (ATgetInt((ATermInt) q_13) != 0)))
                _fail(t);
            }
          }
        else
          _fail(t);
        t = e_2;
        LocalPopChoice(p_13);
      }
    else
      {
        t = o_13;
        {
          ATerm k_2 = NULL,l_2 = NULL;
          t = term_r_13;
          l_2 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_r_13, g_6);
          t = h_10(l_2, g_6, t);
          k_2 = t;
          t = SSL_perror(k_2);
          _fail(t);
        }
      }
  }
  return(t);
}
static ATerm j_10 (ATerm f_67, ATerm e_67, ATerm t)
{
  ATerm k_6 = NULL,l_6 = NULL;
  l_6 = t;
  {
    ATerm s_13 = t;
    int t_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_6 = NULL,o_6 = NULL;
        t = (ATerm) ATinsert(ATempty, term_v_13);
        o_6 = t;
        t = (ATerm) ATmakeAppl(sym__2, e_67, (ATerm) ATinsert(ATempty, term_v_13));
        t = i_10(e_67, o_6, t);
        t = filemode_0_0(t);
        n_6 = t;
        t = SSL_S_ISDIR(n_6);
        t = l_6;
        LocalPopChoice(t_13);
        {
          ATerm p_6 = NULL,q_6 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, term_y_13), f_67);
          t = string_tokenize_0_0(t);
          t = last_0_0(t);
          p_6 = t;
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, p_6), term_z_13), e_67);
          q_6 = t;
          t = SSL_concat_strings(q_6);
        }
      }
    else
      {
        t = s_13;
        t = e_67;
      }
  }
  k_6 = t;
  t = SSL_copy(f_67, k_6);
  return(t);
}
static ATerm k_0 (ATerm t)
{
  ATerm a_14 = t;
  int c_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_7 = NULL,k_7 = NULL;
      t = term_f_14;
      f_7 = t;
      t = term_h_14;
      k_7 = t;
      t = term_j_14;
      t = q_10(f_7, k_7, t);
      LocalPopChoice(c_14);
    }
  else
    {
      t = a_14;
      t = term_m_14;
    }
  return(t);
}
ATerm xtc_write_output_0_0 (ATerm t)
{
  ATerm a_7 = NULL;
  a_7 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm o_2 = NULL,r_2 = NULL;
      t = term_h_14;
      {
        ATerm p_14 = t;
        int q_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_2 = NULL,u_2 = NULL;
            t = term_f_14;
            s_2 = t;
            t = term_h_14;
            u_2 = t;
            t = term_j_14;
            t = q_10(s_2, u_2, t);
            LocalPopChoice(q_14);
          }
        else
          {
            t = p_14;
            t = term_m_14;
          }
      }
      o_2 = t;
      t = term_s_14;
      r_2 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_s_14, o_2);
      t = j_10(r_2, o_2, t);
    }
  else
    {
      if(match_cons(t, sym_FILE_1))
        {
          ATerm t_14 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = a_7;
      t = copy_to_1_0(k_0, t);
    }
  return(t);
}
static ATerm t_8 (ATerm f_36, ATerm g_36, ATerm t)
{
  ATerm m_7 = NULL;
  t = SSL_write_term_to_stream_baf(f_36, g_36);
  m_7 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, m_7);
  return(t);
}
static ATerm y_8 (ATerm b_113 (ATerm), ATerm p_259, ATerm p_36, ATerm t)
{
  ATerm n_7 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, p_259, term_u_14);
  t = n_9(t);
  n_7 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_7, p_36);
  t = b_113(t);
  t = fclose_0_0(t);
  t = p_36;
  return(t);
}
static ATerm o_9 (ATerm p_103 (ATerm), ATerm v_23, ATerm t_23, ATerm t)
{
  ATerm o_7 = NULL,p_7 = NULL,r_7 = NULL,t_7 = NULL,u_7 = NULL,w_7 = NULL,x_7 = NULL,z_7 = NULL;
  t_7 = t;
  t = p_103(t);
  o_7 = t;
  t = (ATerm) ATmakeAppl(sym__3, o_7, v_23, t_23);
  t = r_10(o_7, v_23, t_23, t);
  {
    ATerm v_14 = t;
    int z_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_8 = NULL;
        t = term_b_15;
        a_8 = t;
        t = (ATerm) ATmakeAppl(sym__2, o_7, term_b_15);
        t = q_10(o_7, a_8, t);
        {
          ATerm c_15 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = c_15;
            }
        }
        LocalPopChoice(z_14);
      }
    else
      {
        t = v_14;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_7 = ATgetFirst((ATermList) t);
      r_7 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, o_7, term_b_15, (ATerm) ATinsert(CheckATermList(r_7), (ATerm) ATinsert(CheckATermList(p_7), v_23)));
  t = lookup_table_0_1(o_7, t);
  z_7 = t;
  t = term_b_15;
  u_7 = t;
  t = (ATerm) ATinsert(CheckATermList(r_7), (ATerm) ATinsert(CheckATermList(p_7), v_23));
  w_7 = t;
  t = z_7;
  if(match_cons(t, sym_Hashtable_1))
    {
      x_7 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_10(u_7, w_7, x_7, t);
  t = t_7;
  return(t);
}
ATerm mkstemp_0_0 (ATerm t)
{
  ATerm d_8 = NULL;
  ATerm d_15 = t;
  int e_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_8 = NULL,c_3 = NULL;
      l_8 = t;
      t = term_i_15;
      c_3 = t;
      t = (ATerm) ATmakeAppl(sym__2, l_8, term_i_15);
      t = h_10(l_8, c_3, t);
      d_8 = t;
      t = SSL_mkstemp(d_8);
      LocalPopChoice(e_15);
    }
  else
    {
      t = d_15;
      {
        ATerm q_8 = NULL;
        t = term_k_15;
        q_8 = t;
        t = SSL_perror(q_8);
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
static ATerm n_0 (ATerm t)
{
  t = term_l_15;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm a_9 = NULL,b_9 = NULL,f_9 = NULL,u_9 = NULL,v_9 = NULL;
  t = P__tmpdir_0_0(t);
  u_9 = t;
  t = term_o_15;
  v_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_9, term_o_15);
  t = h_10(u_9, v_9, t);
  t = mkstemp_0_0(t);
  if(match_cons(t, sym__2))
    {
      b_9 = ATgetArgument(t, 0);
      a_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = term_q_15;
  f_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_9, term_q_15);
  t = o_9(n_0, b_9, f_9, t);
  t = SSL_close(a_9);
  t = b_9;
  return(t);
}
static ATerm u_8 (ATerm t_36, ATerm u_36, ATerm t)
{
  ATerm u_11 = NULL,v_11 = NULL;
  t = u_36;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = u_36;
    }
  else
    {
      ATerm w_3 = NULL,e_4 = NULL,i_1 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          u_11 = ATgetFirst((ATermList) t);
          v_11 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(u_36);
      w_3 = t;
      t = v_11;
      {
        static ATerm i_4 (ATerm t);
        static ATerm i_4 (ATerm t)
        {
          ATerm r_15 = t;
          int s_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm f_4 = NULL;
              f_4 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = f_4;
              LocalPopChoice(s_15);
            }
          else
            {
              t = r_15;
              {
                ATerm g_4 = NULL;
                t = Cons_2_0(_id, i_4, t);
                g_4 = t;
                t = (ATerm) ATinsert(CheckATermList(g_4), t_36);
              }
            }
          return(t);
        }
        t = i_4(t);
      }
      e_4 = t;
      t = (ATerm) ATinsert(CheckATermList(e_4), u_11);
      i_1 = t;
      t = SSLsetAnnotations(i_1, w_3);
    }
  return(t);
}
static ATerm w_12 (ATerm h_12, ATerm t)
{
  t = h_12;
  {
    ATerm t_15 = t;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm u_15 = ATgetArgument(t, 0);
            ATerm v_15 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = t_15;
      }
  }
  t = term_w_15;
  t = debug_1_0(s_0, t);
  t = (ATerm) ATmakeAppl(sym__2, h_12, term_u_14);
  t = open_file_0_0(t);
  return(t);
}
static ATerm x_12 (ATerm j_12, ATerm l_12, ATerm n_12, ATerm t)
{
  t = SSL_open_file(j_12, l_12);
  return(t);
}
static ATerm s_0 (ATerm t)
{
  t = term_x_15;
  return(t);
}
ATerm open_file_0_0 (ATerm t)
{
  ATerm s_12 = NULL,t_12 = NULL,v_12 = NULL;
  s_12 = t;
  if(match_cons(t, sym__2))
    {
      t_12 = ATgetArgument(t, 0);
      v_12 = ATgetArgument(t, 1);
      {
        ATerm y_15 = t;
        int z_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = w_12(s_12, t);
            LocalPopChoice(z_15);
          }
        else
          {
            t = y_15;
            t = x_12(t_12, v_12, s_12, t);
          }
      }
    }
  else
    {
      t = w_12(s_12, t);
    }
  return(t);
}
ATerm create_dep_file_0_0 (ATerm t)
{
  ATerm y_12 = NULL,a_13 = NULL,b_13 = NULL,c_13 = NULL,d_13 = NULL,e_13 = NULL,f_13 = NULL,i_13 = NULL,k_13 = NULL,l_13 = NULL,m_13 = NULL;
  a_13 = t;
  t = term_f_14;
  l_13 = t;
  t = term_h_14;
  m_13 = t;
  t = term_j_14;
  t = q_10(l_13, m_13, t);
  {
    ATerm b_16 = t;
    int c_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_13 = NULL,w_13 = NULL;
        t = term_f_14;
        u_13 = t;
        t = term_d_16;
        w_13 = t;
        t = term_e_16;
        t = q_10(u_13, w_13, t);
        LocalPopChoice(c_16);
      }
    else
      {
        t = b_16;
        {
          ATerm f_16 = t;
          if((PushChoice() == 0))
            {
              ATerm x_13 = NULL,b_14 = NULL;
              t = term_f_14;
              x_13 = t;
              t = term_g_16;
              b_14 = t;
              t = term_h_16;
              t = q_10(x_13, b_14, t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = f_16;
            }
        }
      }
  }
  y_12 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_k_16), term_i_16), y_12);
  k_13 = t;
  t = SSL_concat_strings(k_13);
  i_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_13, term_u_14);
  t = open_file_0_0(t);
  b_13 = t;
  t = term_l_16;
  e_13 = t;
  t = (ATerm) ATinsert(CheckATermList(a_13), term_n_16);
  f_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_16, (ATerm) ATinsert(CheckATermList(a_13), term_n_16));
  t = u_8(e_13, f_13, t);
  c_13 = t;
  t = (ATerm) ATinsert(CheckATermList(c_13), y_12);
  d_13 = t;
  t = SSL_printnl(b_13, d_13);
  t = SSL_close_file(b_13);
  t = (ATerm) ATmakeAppl(sym_FILE_1, i_13);
  return(t);
}
static ATerm w_8 (ATerm e_52, ATerm f_52, ATerm t)
{
  ATerm g_14 = NULL;
  t = SSL_fputc(e_52, f_52);
  g_14 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, g_14);
  return(t);
}
static ATerm x_8 (ATerm j_36, ATerm k_36, ATerm t)
{
  ATerm i_14 = NULL;
  t = SSL_write_term_to_stream_text(j_36, k_36);
  i_14 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, i_14);
  return(t);
}
ATerm basename_1_0 (ATerm l_124 (ATerm), ATerm t)
{
  ATerm x_14 = NULL,y_14 = NULL;
  y_14 = t;
  t = SSL_explode_string(y_14);
  {
    ATerm q_16 = t;
    int r_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm w_16 (ATerm t);
        static ATerm w_16 (ATerm t)
        {
          ATerm m_16 = NULL,o_16 = NULL,p_16 = NULL;
          m_16 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              o_16 = ATgetFirst((ATermList) t);
              p_16 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          {
            ATerm s_16 = t;
            int t_16 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm m_5 = NULL,q_5 = NULL,n_1 = NULL;
                t = SSLgetAnnotations(m_16);
                m_5 = t;
                t = p_16;
                t = w_16(t);
                q_5 = t;
                t = (ATerm) ATinsert(CheckATermList(q_5), o_16);
                n_1 = t;
                t = SSLsetAnnotations(n_1, m_5);
                LocalPopChoice(t_16);
              }
            else
              {
                t = s_16;
                {
                  ATerm u_16 = t;
                  int v_16 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm f_6 = NULL,p_1 = NULL;
                      t = SSLgetAnnotations(m_16);
                      f_6 = t;
                      t = o_16;
                      if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 47)))
                        _fail(t);
                      t = (ATerm) ATinsert(CheckATermList(p_16), o_16);
                      p_1 = t;
                      t = SSLsetAnnotations(p_1, f_6);
                      LocalPopChoice(v_16);
                    }
                  else
                    {
                      t = u_16;
                      {
                        ATerm g_7 = NULL,j_7 = NULL,w_2 = NULL;
                        t = SSLgetAnnotations(m_16);
                        g_7 = t;
                        t = o_16;
                        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 46)))
                          _fail(t);
                        t = p_16;
                        t = l_124(t);
                        j_7 = t;
                        t = (ATerm) ATinsert(CheckATermList(j_7), o_16);
                        w_2 = t;
                        t = SSLsetAnnotations(w_2, g_7);
                        t = (ATerm) ATempty;
                      }
                    }
                }
              }
          }
          return(t);
        }
        t = w_16(t);
        LocalPopChoice(r_16);
      }
    else
      {
        t = q_16;
      }
  }
  x_14 = t;
  t = SSL_implode_string(x_14);
  return(t);
}
ATerm at_suffix_rev_1_0 (ATerm j_114 (ATerm), ATerm t)
{
  static ATerm e_18 (ATerm t);
  static ATerm e_18 (ATerm t)
  {
    ATerm x_16 = t;
    int y_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_18 = NULL,c_18 = NULL,d_18 = NULL,h_8 = NULL,m_8 = NULL,d_3 = NULL;
        a_18 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            c_18 = ATgetFirst((ATermList) t);
            d_18 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(a_18);
        h_8 = t;
        t = d_18;
        t = e_18(t);
        m_8 = t;
        t = (ATerm) ATinsert(CheckATermList(m_8), c_18);
        d_3 = t;
        t = SSLsetAnnotations(d_3, h_8);
        LocalPopChoice(y_16);
      }
    else
      {
        t = x_16;
        t = j_114(t);
      }
    return(t);
  }
  t = e_18(t);
  return(t);
}
ATerm get_filename_0_0 (ATerm t)
{
  ATerm m_18 = NULL,n_18 = NULL,o_18 = NULL;
  o_18 = t;
  t = SSL_explode_string(o_18);
  {
    ATerm z_16 = t;
    int b_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm t_0 (ATerm t);
        static ATerm t_0 (ATerm t)
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm c_17 = ATgetFirst((ATermList) t);
              if(((ATgetType(c_17) != AT_INT) || (ATgetInt((ATermInt) c_17) != 47)))
                _fail(t);
              if(((m_18 != NULL) && (m_18 != (ATerm) ATgetNext((ATermList) t))))
                _fail((ATerm) ATgetNext((ATermList) t));
              else
                m_18 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          return(t);
        }
        t = at_suffix_rev_1_0(t_0, t);
        t = not_null(m_18);
        LocalPopChoice(b_17);
      }
    else
      {
        t = z_16;
      }
  }
  n_18 = t;
  t = SSL_implode_string(n_18);
  return(t);
}
ATerm map_1_0 (ATerm k_113 (ATerm), ATerm t)
{
  static ATerm a_20 (ATerm t);
  static ATerm a_20 (ATerm t)
  {
    ATerm s_19 = NULL,t_19 = NULL,x_19 = NULL;
    s_19 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = s_19;
      }
    else
      {
        ATerm q_9 = NULL,y_9 = NULL,a_10 = NULL,g_3 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            t_19 = ATgetFirst((ATermList) t);
            x_19 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(s_19);
        q_9 = t;
        t = t_19;
        t = k_113(t);
        y_9 = t;
        t = x_19;
        t = a_20(t);
        a_10 = t;
        t = (ATerm) ATinsert(CheckATermList(a_10), y_9);
        g_3 = t;
        t = SSLsetAnnotations(g_3, q_9);
      }
    return(t);
  }
  t = a_20(t);
  return(t);
}
static ATerm q_10 (ATerm e_59, ATerm f_59, ATerm t)
{
  ATerm e_20 = NULL;
  t = lookup_table_0_1(e_59, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      e_20 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = v_10(f_59, e_20, t);
  return(t);
}
static ATerm u_0 (ATerm t)
{
  ATerm j_20 = NULL;
  if(match_cons(t, sym_Specification_1))
    {
      j_20 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = j_20;
  t = filter_1_0(y_0, t);
  return(t);
}
static ATerm y_0 (ATerm t)
{
  ATerm e_17 = t;
  if((PushChoice() == 0))
    {
      ATerm m_20 = NULL,n_20 = NULL,o_20 = NULL,m_3 = NULL;
      o_20 = t;
      if(match_cons(t, sym_Imports_1))
        {
          n_20 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(o_20);
      m_20 = t;
      t = (ATerm) ATmakeAppl(sym_Imports_1, n_20);
      m_3 = t;
      t = SSLsetAnnotations(m_3, m_20);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = e_17;
    }
  return(t);
}
ATerm flatten_stratego_0_0 (ATerm t)
{
  ATerm g_20 = NULL;
  t = map_1_0(u_0, t);
  t = concat_0_0(t);
  g_20 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, g_20);
  return(t);
}
ATerm genzip_4_0 (ATerm o_115 (ATerm), ATerm p_115 (ATerm), ATerm q_115 (ATerm), ATerm r_115 (ATerm), ATerm t)
{
  static ATerm c_21 (ATerm t);
  static ATerm c_21 (ATerm t)
  {
    ATerm f_17 = t;
    int h_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_115(t);
        LocalPopChoice(h_17);
      }
    else
      {
        t = f_17;
        {
          ATerm r_20 = NULL,s_20 = NULL,t_20 = NULL,w_20 = NULL,y_20 = NULL,z_20 = NULL,s_5 = NULL;
          t = p_115(t);
          z_20 = t;
          if(match_cons(t, sym__2))
            {
              s_20 = ATgetArgument(t, 0);
              t_20 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(z_20);
          r_20 = t;
          t = s_20;
          t = r_115(t);
          w_20 = t;
          t = t_20;
          t = c_21(t);
          y_20 = t;
          t = (ATerm) ATmakeAppl(sym__2, w_20, y_20);
          s_5 = t;
          t = SSLsetAnnotations(s_5, r_20);
          t = q_115(t);
        }
      }
    return(t);
  }
  t = c_21(t);
  return(t);
}
static ATerm z_0 (ATerm t)
{
  ATerm d_21 = NULL;
  if(match_cons(t, sym_Imports_1))
    {
      d_21 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = d_21;
  return(t);
}
static ATerm c_9 (ATerm d_157, ATerm t)
{
  t = d_157;
  t = filter_1_0(z_0, t);
  t = concat_0_0(t);
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm i_21 = NULL;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_s_14;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      ATerm l_21 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          i_21 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, term_v_13);
      l_21 = t;
      t = (ATerm) ATmakeAppl(sym__2, i_21, (ATerm) ATinsert(ATempty, term_v_13));
      t = i_10(i_21, l_21, t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
ATerm pass_keep_0_0 (ATerm t)
{
  ATerm o_21 = NULL,p_21 = NULL,q_21 = NULL,s_21 = NULL;
  t = term_i_17;
  {
    ATerm j_17 = t;
    int k_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_21 = NULL,u_21 = NULL;
        t = term_f_14;
        t_21 = t;
        t = term_i_17;
        u_21 = t;
        t = term_l_17;
        t = q_10(t_21, u_21, t);
        LocalPopChoice(k_17);
      }
    else
      {
        t = j_17;
        t = term_m_17;
      }
  }
  p_21 = t;
  t = term_m_17;
  s_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_21, term_m_17);
  t = d_9(p_21, s_21, t);
  q_21 = t;
  t = SSL_int_to_string(q_21);
  o_21 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, o_21), term_i_17);
  return(t);
}
static ATerm d_9 (ATerm a_56, ATerm b_56, ATerm t)
{
  ATerm n_17 = t;
  int o_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(a_56, b_56);
      LocalPopChoice(o_17);
    }
  else
    {
      t = n_17;
      t = SSL_subtr(a_56, b_56);
    }
  return(t);
}
ATerm pass_verbose_0_0 (ATerm t)
{
  ATerm v_21 = NULL,w_21 = NULL,x_21 = NULL,a_22 = NULL;
  t = term_p_17;
  {
    ATerm q_17 = t;
    int r_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_22 = NULL,e_22 = NULL;
        t = term_f_14;
        b_22 = t;
        t = term_p_17;
        e_22 = t;
        t = term_s_17;
        t = q_10(b_22, e_22, t);
        LocalPopChoice(r_17);
      }
    else
      {
        t = q_17;
        t = term_m_17;
      }
  }
  w_21 = t;
  t = term_m_17;
  a_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_21, term_m_17);
  t = d_9(w_21, a_22, t);
  x_21 = t;
  t = SSL_int_to_string(x_21);
  v_21 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, v_21), term_p_17);
  return(t);
}
static ATerm a_1 (ATerm t)
{
  ATerm n_22 = NULL,r_22 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm t_17 = ATgetArgument(t, 0);
      if(match_cons(t_17, sym_Stream_1))
        {
          n_22 = ATgetArgument(t_17, 0);
        }
      else
        _fail(t);
      r_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_8(n_22, r_22, t);
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm q_137 (ATerm), ATerm r_137 (ATerm), ATerm t)
{
  ATerm f_22 = NULL,g_22 = NULL;
  g_22 = t;
  t = xtc_new_file_0_0(t);
  f_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_22, g_22);
  t = y_8(a_1, f_22, g_22, t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, f_22);
  t = xtc_transform_file_2_0(q_137, r_137, t);
  t = read_from_0_0(t);
  return(t);
}
static ATerm e_9 (ATerm o_71, ATerm p_71, ATerm t)
{
  t = SSL_execvp(o_71, p_71);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm a_25 = NULL,b_25 = NULL,e_25 = NULL,f_25 = NULL;
  a_25 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      b_25 = ATgetArgument(t, 0);
      {
        ATerm c_11 = NULL,d_11 = NULL;
        t = SSL_int_to_string(b_25);
        c_11 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_v_17), c_11), term_u_17);
        d_11 = t;
        t = SSL_concat_strings(d_11);
      }
    }
  else
    {
      ATerm t_11 = NULL,w_11 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          b_25 = ATgetArgument(t, 0);
          e_25 = ATgetArgument(t, 1);
          f_25 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(e_25);
      t_11 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, f_25), term_x_17), t_11), term_w_17), b_25);
      w_11 = t;
      t = SSL_concat_strings(w_11);
    }
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm j_25 = NULL;
  j_25 = t;
  {
    ATerm y_17 = t;
    int b_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm b_1 (ATerm t);
        static ATerm b_1 (ATerm t)
        {
          if(match_cons(t, sym_Signal_3))
            {
              ATerm f_18 = ATgetArgument(t, 0);
              if((j_25 != ATgetArgument(t, 1)))
                {
                  _fail(ATgetArgument(t, 1));
                }
              {
                ATerm h_18 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_x_24), term_t_24), term_p_24), term_l_24), term_h_24), term_d_24), term_z_23), term_u_23), term_p_23), term_l_23), term_f_23), term_x_22), term_p_22), term_k_22), term_z_21), term_m_21), term_g_21), term_v_20), term_k_20), term_d_20), term_w_19), term_p_19), term_l_19), term_h_19), term_d_19), term_z_18), term_t_18), term_k_18);
        t = fetch_elem_1_0(b_1, t);
        LocalPopChoice(b_18);
      }
    else
      {
        t = y_17;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, j_25);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm s_25 = NULL,c_26 = NULL;
  s_25 = t;
  {
    ATerm y_24 = t;
    int z_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm c_25 = ATgetArgument(t, 0);
            c_26 = ATgetArgument(t, 1);
            {
              ATerm d_25 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(z_24);
        {
          ATerm g_25 = t;
          int h_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm e_12 = NULL,g_12 = NULL,k_12 = NULL;
              t = c_26;
              {
                ATerm i_25 = t;
                if((PushChoice() == 0))
                  {
                    if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
                      _fail(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = i_25;
                  }
              }
              t = signal_from_number_0_0(t);
              t = signal_to_descr_0_0(t);
              e_12 = t;
              t = term_k_25;
              g_12 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, e_12), term_l_25);
              k_12 = t;
              t = SSL_printnl(g_12, k_12);
              t = (ATerm) ATmakeAppl(sym__2, term_k_25, (ATerm) ATinsert(ATinsert(ATempty, e_12), term_l_25));
              LocalPopChoice(h_25);
            }
          else
            {
              t = g_25;
              t = s_25;
            }
        }
      }
    else
      {
        t = y_24;
        t = s_25;
      }
  }
  t = s_25;
  return(t);
}
ATerm fork_0_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_and_wait_1_0 (ATerm s_129 (ATerm), ATerm t)
{
  ATerm r_26 = NULL,s_26 = NULL;
  s_26 = t;
  t = fork_0_0(t);
  r_26 = t;
  {
    ATerm m_25 = t;
    int n_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = s_26;
        t = s_129(t);
        LocalPopChoice(n_25);
      }
    else
      {
        t = m_25;
        t = SSL_waitpid(r_26);
        t = warn_ifsignaled_0_0(t);
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm o_25 = ATgetArgument(t, 0);
            if(((ATgetType(o_25) != AT_INT) || (ATgetInt((ATermInt) o_25) != 0)))
              _fail(t);
            {
              ATerm p_25 = ATgetArgument(t, 1);
            }
            {
              ATerm q_25 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = s_26;
      }
  }
  return(t);
}
static ATerm g_9 (ATerm k_62, ATerm t)
{
  t = SSL_hashtable_keys(k_62);
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm u_26 = NULL,v_26 = NULL;
  static ATerm e_1 (ATerm t);
  static ATerm e_1 (ATerm t)
  {
    ATerm h_27 = NULL,i_27 = NULL;
    h_27 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(u_26), h_27);
    t = q_10(not_null(u_26), h_27, t);
    i_27 = t;
    t = (ATerm) ATmakeAppl(sym__2, h_27, i_27);
    return(t);
  }
  if(((u_26 != NULL) && (u_26 != t)))
    _fail(t);
  else
    u_26 = t;
  t = lookup_table_0_1(u_26, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      v_26 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_9(v_26, t);
  t = map_1_0(e_1, t);
  return(t);
}
ATerm if_verbose5_1_0 (ATerm l_129 (ATerm), ATerm t)
{
  ATerm l_27 = NULL;
  l_27 = t;
  {
    ATerm r_25 = t;
    int t_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_27 = NULL,s_27 = NULL,v_27 = NULL;
        t = term_f_14;
        s_27 = t;
        t = term_p_17;
        v_27 = t;
        t = term_s_17;
        t = q_10(s_27, v_27, t);
        q_27 = t;
        t = (ATerm) ATmakeAppl(sym__2, q_27, term_j_24);
        t = geq_0_0(t);
        t = l_27;
        t = l_129(t);
        LocalPopChoice(t_25);
      }
    else
      {
        t = r_25;
        t = l_27;
      }
  }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm k_129 (ATerm), ATerm t)
{
  ATerm y_27 = NULL;
  y_27 = t;
  {
    ATerm u_25 = t;
    int v_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_28 = NULL,d_28 = NULL,e_28 = NULL;
        t = term_f_14;
        d_28 = t;
        t = term_p_17;
        e_28 = t;
        t = term_s_17;
        t = q_10(d_28, e_28, t);
        c_28 = t;
        t = (ATerm) ATmakeAppl(sym__2, c_28, term_b_21);
        t = geq_0_0(t);
        t = y_27;
        t = k_129(t);
        LocalPopChoice(v_25);
      }
    else
      {
        t = u_25;
        t = y_27;
      }
  }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm m_129 (ATerm), ATerm t)
{
  ATerm h_28 = NULL;
  h_28 = t;
  {
    ATerm w_25 = t;
    int x_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_28 = NULL,l_28 = NULL,m_28 = NULL;
        t = term_f_14;
        l_28 = t;
        t = term_p_17;
        m_28 = t;
        t = term_s_17;
        t = q_10(l_28, m_28, t);
        j_28 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_28, term_b_19);
        t = geq_0_0(t);
        t = h_28;
        t = m_129(t);
        LocalPopChoice(x_25);
      }
    else
      {
        t = w_25;
        t = h_28;
      }
  }
  return(t);
}
static ATerm i_9 (ATerm v_117 (ATerm), ATerm o_42, ATerm n_42, ATerm t)
{
  static ATerm p_29 (ATerm t);
  static ATerm p_29 (ATerm t)
  {
    ATerm e_29 = NULL,i_29 = NULL,k_29 = NULL;
    e_29 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = n_42;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            i_29 = ATgetFirst((ATermList) t);
            k_29 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm y_25 = t;
          int z_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = e_29;
              {
                static ATerm f_1 (ATerm t);
                static ATerm f_1 (ATerm t)
                {
                  t = n_42;
                  return(t);
                }
                t = r_9(v_117, f_1, i_29, k_29, t);
              }
              t = p_29(t);
              LocalPopChoice(z_25);
            }
          else
            {
              t = y_25;
              {
                ATerm z_12 = NULL,j_13 = NULL,v_5 = NULL;
                t = SSLgetAnnotations(e_29);
                z_12 = t;
                t = k_29;
                t = p_29(t);
                j_13 = t;
                t = (ATerm) ATinsert(CheckATermList(j_13), i_29);
                v_5 = t;
                t = SSLsetAnnotations(v_5, z_12);
              }
            }
        }
      }
    return(t);
  }
  t = o_42;
  t = p_29(t);
  return(t);
}
static ATerm h_1 (ATerm t)
{
  ATerm m_30 = NULL;
  if(match_cons(t, sym__2))
    {
      m_30 = ATgetArgument(t, 0);
      if((m_30 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm j_9 (ATerm i_58, ATerm j_58, ATerm k_58, ATerm t)
{
  ATerm s_29 = NULL,t_29 = NULL,a_30 = NULL,b_30 = NULL;
  s_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_58, j_58);
  {
    ATerm a_26 = t;
    int b_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm d_26 = ATgetArgument(t, 0);
            ATerm e_26 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, i_58, j_58);
        t = q_10(i_58, j_58, t);
        LocalPopChoice(b_26);
      }
    else
      {
        t = a_26;
        t = (ATerm) ATempty;
      }
  }
  a_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_30, k_58);
  t = i_9(h_1, a_30, k_58, t);
  t_29 = t;
  t = (ATerm) ATmakeAppl(sym__3, i_58, j_58, t_29);
  t = lookup_table_0_1(i_58, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      b_30 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_10(j_58, t_29, b_30, t);
  t = s_29;
  return(t);
}
static ATerm k_9 (ATerm y_126 (ATerm), ATerm s_58, ATerm r_58, ATerm t)
{
  static ATerm j_1 (ATerm t);
  static ATerm j_1 (ATerm t)
  {
    ATerm n_30 = NULL,q_30 = NULL;
    if(match_cons(t, sym__2))
      {
        n_30 = ATgetArgument(t, 0);
        q_30 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, s_58, n_30, q_30);
    t = y_126(t);
    return(t);
  }
  t = r_58;
  t = map_1_0(j_1, t);
  return(t);
}
static ATerm m_31 (ATerm e_31, ATerm t)
{
  t = SSL_fclose(e_31);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm h_31 = NULL,k_31 = NULL;
  k_31 = t;
  if(match_cons(t, sym_Stream_1))
    {
      h_31 = ATgetArgument(t, 0);
      {
        ATerm f_26 = t;
        int g_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(h_31);
            LocalPopChoice(g_26);
          }
        else
          {
            t = f_26;
            t = m_31(k_31, t);
          }
      }
    }
  else
    {
      t = m_31(k_31, t);
    }
  return(t);
}
static ATerm l_9 (ATerm l_36, ATerm t)
{
  t = SSL_read_term_from_stream(l_36);
  return(t);
}
static ATerm h_10 (ATerm i_50, ATerm j_50, ATerm t)
{
  t = SSL_strcat(i_50, j_50);
  return(t);
}
static ATerm m_9 (ATerm g_52, ATerm h_52, ATerm t)
{
  ATerm o_31 = NULL;
  t = SSL_fopen(g_52, h_52);
  o_31 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, o_31);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm p_31 = NULL;
  t = SSL_stdin_stream();
  p_31 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, p_31);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm q_31 = NULL;
  t = SSL_stdout_stream();
  q_31 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, q_31);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm r_31 = NULL;
  t = SSL_stderr_stream();
  r_31 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, r_31);
  return(t);
}
static ATerm t_33 (ATerm a_32, ATerm t)
{
  ATerm b_32 = NULL;
  t = SSL_explode_term(a_32);
  if(match_cons(t, sym__2))
    {
      ATerm h_26 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) h_26) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm i_26 = ATgetArgument(t, 1);
        if(((ATgetType(i_26) == AT_LIST) && !(ATisEmpty(i_26))))
          {
            b_32 = ATgetFirst((ATermList) i_26);
            {
              ATerm j_26 = (ATerm) ATgetNext((ATermList) i_26);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = b_32;
  if(match_cons(t, sym_stderr_0))
    {
      t = b_32;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = b_32;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = b_32;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm u_33 (ATerm g_32, ATerm k_32, ATerm l_32, ATerm t)
{
  ATerm m_32 = NULL,s_32 = NULL,t_32 = NULL,b_33 = NULL,a_6 = NULL;
  t = SSLgetAnnotations(l_32);
  t_32 = t;
  t = g_32;
  if(match_cons(t, sym_Path_1))
    {
      b_33 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, b_33, k_32);
  a_6 = t;
  t = SSLsetAnnotations(a_6, t_32);
  if(match_cons(t, sym__2))
    {
      m_32 = ATgetArgument(t, 0);
      s_32 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_9(m_32, s_32, t);
  return(t);
}
static ATerm v_33 (ATerm d_33, ATerm e_33, ATerm f_33, ATerm t)
{
  ATerm g_33 = NULL,j_33 = NULL,l_33 = NULL,o_33 = NULL,d_6 = NULL;
  t = SSLgetAnnotations(f_33);
  l_33 = t;
  t = SSL_is_string(d_33);
  o_33 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_33, e_33);
  d_6 = t;
  t = SSLsetAnnotations(d_6, l_33);
  if(match_cons(t, sym__2))
    {
      g_33 = ATgetArgument(t, 0);
      j_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_9(g_33, j_33, t);
  return(t);
}
static ATerm n_9 (ATerm t)
{
  ATerm q_33 = NULL,r_33 = NULL,s_33 = NULL;
  q_33 = t;
  if(match_cons(t, sym__2))
    {
      r_33 = ATgetArgument(t, 0);
      s_33 = ATgetArgument(t, 1);
      {
        ATerm k_26 = t;
        int l_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = t_33(q_33, t);
            LocalPopChoice(l_26);
          }
        else
          {
            t = k_26;
            {
              ATerm m_26 = t;
              int n_26 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = u_33(r_33, s_33, q_33, t);
                  LocalPopChoice(n_26);
                }
              else
                {
                  t = m_26;
                  t = v_33(r_33, s_33, q_33, t);
                }
            }
          }
      }
    }
  else
    {
      t = t_33(q_33, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm x_33 = NULL,y_33 = NULL,z_33 = NULL,i_34 = NULL;
  i_34 = t;
  {
    ATerm o_26 = t;
    int p_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, i_34, term_q_26);
        t = n_9(t);
        LocalPopChoice(p_26);
      }
    else
      {
        t = o_26;
        {
          ATerm d_14 = NULL,e_14 = NULL;
          t = term_t_26;
          e_14 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_t_26, i_34);
          t = h_10(e_14, i_34, t);
          d_14 = t;
          t = SSL_perror(d_14);
          _fail(t);
        }
      }
  }
  y_33 = t;
  if(match_cons(t, sym_Stream_1))
    {
      z_33 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = l_9(z_33, t);
  x_33 = t;
  t = y_33;
  t = fclose_0_0(t);
  t = x_33;
  return(t);
}
static ATerm m_1 (ATerm t)
{
  t = term_w_26;
  return(t);
}
static ATerm o_1 (ATerm t)
{
  t = term_x_26;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm y_26 = t;
  int z_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_34 = NULL,r_34 = NULL;
      n_34 = t;
      t = (ATerm) ATinsert(ATempty, term_a_27);
      r_34 = t;
      t = (ATerm) ATmakeAppl(sym__2, n_34, (ATerm) ATinsert(ATempty, term_a_27));
      t = i_10(n_34, r_34, t);
      LocalPopChoice(z_26);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = y_26;
      {
        ATerm b_27 = t;
        int c_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_27 = t;
            if((PushChoice() == 0))
              {
                ATerm t_34 = NULL,w_34 = NULL;
                t_34 = t;
                t = (ATerm) ATinsert(ATempty, term_v_13);
                w_34 = t;
                t = (ATerm) ATmakeAppl(sym__2, t_34, (ATerm) ATinsert(ATempty, term_v_13));
                t = i_10(t_34, w_34, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = d_27;
              }
            t = debug_1_0(m_1, t);
            LocalPopChoice(c_27);
          }
        else
          {
            t = b_27;
            t = debug_1_0(o_1, t);
          }
      }
      t = (ATerm) ATempty;
    }
  return(t);
}
static ATerm q_1 (ATerm t)
{
  t = debug_1_0(s_1, t);
  return(t);
}
static ATerm s_1 (ATerm t)
{
  t = term_e_27;
  return(t);
}
static ATerm t_1 (ATerm t)
{
  t = debug_1_0(v_1, t);
  return(t);
}
static ATerm v_1 (ATerm t)
{
  t = term_f_27;
  return(t);
}
static ATerm w_1 (ATerm t)
{
  ATerm w_35 = NULL,x_35 = NULL,y_35 = NULL;
  w_35 = t;
  t = term_k_25;
  x_35 = t;
  t = (ATerm) ATinsert(ATempty, term_g_27);
  y_35 = t;
  t = SSL_printnl(x_35, y_35);
  t = w_35;
  return(t);
}
static ATerm x_1 (ATerm t)
{
  ATerm a_36 = NULL,c_36 = NULL,d_36 = NULL;
  if(match_cons(t, sym__3))
    {
      a_36 = ATgetArgument(t, 0);
      c_36 = ATgetArgument(t, 1);
      d_36 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = j_9(a_36, c_36, d_36, t);
  return(t);
}
static ATerm y_1 (ATerm t)
{
  ATerm e_36 = NULL,h_36 = NULL,i_36 = NULL;
  e_36 = t;
  t = term_k_25;
  h_36 = t;
  t = (ATerm) ATinsert(ATempty, term_j_27);
  i_36 = t;
  t = SSL_printnl(h_36, i_36);
  t = e_36;
  return(t);
}
static ATerm b_2 (ATerm t)
{
  ATerm m_36 = NULL,n_36 = NULL,q_36 = NULL;
  m_36 = t;
  t = term_k_25;
  n_36 = t;
  t = (ATerm) ATinsert(ATempty, term_g_27);
  q_36 = t;
  t = SSL_printnl(n_36, q_36);
  t = m_36;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm x_34 = NULL,y_34 = NULL,c_35 = NULL,f_35 = NULL,g_35 = NULL,h_35 = NULL,i_35 = NULL,l_35 = NULL,m_35 = NULL,n_35 = NULL,o_35 = NULL,p_35 = NULL,q_35 = NULL,r_35 = NULL;
  x_34 = t;
  t = if_verbose5_1_0(q_1, t);
  {
    ATerm k_27 = t;
    if((PushChoice() == 0))
      {
        ATerm s_35 = NULL,t_35 = NULL;
        t = term_m_27;
        s_35 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, x_34);
        t_35 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_m_27, (ATerm) ATmakeAppl(sym_Imported_1, x_34));
        t = q_10(s_35, t_35, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = k_27;
      }
  }
  c_35 = t;
  t = term_m_27;
  n_35 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_m_27, term_n_27, (ATerm) ATinsert(ATempty, x_34));
  t = lookup_table_0_1(n_35, t);
  r_35 = t;
  t = term_n_27;
  o_35 = t;
  t = (ATerm) ATinsert(ATempty, x_34);
  p_35 = t;
  t = r_35;
  if(match_cons(t, sym_Hashtable_1))
    {
      q_35 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_10(o_35, p_35, q_35, t);
  t = c_35;
  t = if_verbose4_1_0(t_1, t);
  t = read_repository_file_0_0(t);
  t = if_verbose6_1_0(w_1, t);
  y_34 = t;
  t = term_m_27;
  m_35 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_27, y_34);
  t = k_9(x_1, m_35, y_34, t);
  t = if_verbose6_1_0(y_1, t);
  t = term_m_27;
  f_35 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_m_27, (ATerm)ATmakeAppl(sym_Imported_1, x_34), (ATerm) ATempty);
  t = lookup_table_0_1(f_35, t);
  l_35 = t;
  t = (ATerm) ATmakeAppl(sym_Imported_1, x_34);
  g_35 = t;
  t = (ATerm) ATempty;
  h_35 = t;
  t = l_35;
  if(match_cons(t, sym_Hashtable_1))
    {
      i_35 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_10(g_35, h_35, i_35, t);
  t = (ATerm) ATmakeAppl(sym__3, term_m_27, (ATerm)ATmakeAppl(sym_Imported_1, x_34), (ATerm) ATempty);
  t = if_verbose4_1_0(b_2, t);
  return(t);
}
ATerm repeat_2_0 (ATerm y_105 (ATerm), ATerm z_105 (ATerm), ATerm t)
{
  static ATerm r_36 (ATerm t);
  static ATerm r_36 (ATerm t)
  {
    ATerm o_27 = t;
    int p_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_105(t);
        t = r_36(t);
        LocalPopChoice(p_27);
      }
    else
      {
        t = o_27;
        t = z_105(t);
      }
    return(t);
  }
  t = r_36(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm r_27 = t;
  int t_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_36 = NULL,v_36 = NULL;
      t = term_f_14;
      s_36 = t;
      t = term_u_27;
      v_36 = t;
      t = term_w_27;
      t = q_10(s_36, v_36, t);
      LocalPopChoice(t_27);
    }
  else
    {
      t = r_27;
      {
        ATerm x_27 = t;
        int z_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_36 = NULL;
            t = term_a_28;
            w_36 = t;
            t = SSL_getenv(w_36);
            LocalPopChoice(z_27);
          }
        else
          {
            t = x_27;
            t = GetInternalDefaultXtcRepository_0_0(t);
          }
      }
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
  t = term_b_28;
  return(t);
}
static ATerm f_2 (ATerm t)
{
  ATerm m_37 = NULL,n_37 = NULL;
  t = term_m_27;
  m_37 = t;
  t = term_f_28;
  n_37 = t;
  t = term_g_28;
  t = q_10(m_37, n_37, t);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm i_28 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = i_28;
      }
  }
  return(t);
}
static ATerm g_2 (ATerm t)
{
  t = debug_1_0(h_2, t);
  return(t);
}
static ATerm h_2 (ATerm t)
{
  t = term_k_28;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm d_37 = NULL;
  t = if_verbose5_1_0(c_2, t);
  d_37 = t;
  {
    ATerm n_28 = t;
    int o_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_37 = NULL,i_37 = NULL;
        t = term_m_27;
        e_37 = t;
        t = term_n_27;
        i_37 = t;
        t = term_p_28;
        t = q_10(e_37, i_37, t);
        LocalPopChoice(o_28);
      }
    else
      {
        t = n_28;
        {
          ATerm l_37 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          l_37 = t;
          t = repeat_2_0(f_2, _id, t);
          t = l_37;
        }
      }
  }
  t = d_37;
  t = if_verbose5_1_0(g_2, t);
  return(t);
}
static ATerm i_2 (ATerm t)
{
  t = debug_1_0(j_2, t);
  return(t);
}
static ATerm j_2 (ATerm t)
{
  t = term_q_28;
  return(t);
}
static ATerm m_38 (ATerm s_37, ATerm t)
{
  ATerm w_37 = NULL,x_37 = NULL,y_37 = NULL;
  t = term_m_27;
  x_37 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, s_37);
  y_37 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_27, (ATerm) ATmakeAppl(sym_Tool_1, s_37));
  t = q_10(x_37, y_37, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm r_28 = ATgetFirst((ATermList) t);
      if(match_cons(r_28, sym__2))
        {
          ATerm t_28 = ATgetArgument(r_28, 0);
          w_37 = ATgetArgument(r_28, 1);
        }
      else
        _fail(t);
      {
        ATerm s_28 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = w_37;
  return(t);
}
static ATerm n_2 (ATerm t)
{
  t = debug_1_0(p_2, t);
  return(t);
}
static ATerm p_2 (ATerm t)
{
  t = term_q_28;
  return(t);
}
static ATerm q_2 (ATerm t)
{
  t = term_m_27;
  t = table_getlist_0_0(t);
  t = debug_1_0(v_2, t);
  return(t);
}
static ATerm v_2 (ATerm t)
{
  t = term_u_28;
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm v_28 = t;
  int w_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_37 = NULL,a_38 = NULL,b_38 = NULL;
      t = if_verbose5_1_0(i_2, t);
      t = xtc_load_0_0(t);
      b_38 = t;
      if(match_cons(t, sym__2))
        {
          z_37 = ATgetArgument(t, 0);
          a_38 = ATgetArgument(t, 1);
          {
            ATerm x_28 = t;
            int y_28 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm e_38 = NULL,f_38 = NULL,g_38 = NULL;
                t = term_m_27;
                f_38 = t;
                t = (ATerm) ATmakeAppl(sym_Tool_1, z_37);
                g_38 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_m_27, (ATerm) ATmakeAppl(sym_Tool_1, z_37));
                t = q_10(f_38, g_38, t);
                {
                  static ATerm m_2 (ATerm t);
                  static ATerm m_2 (ATerm t)
                  {
                    if(match_cons(t, sym__2))
                      {
                        if((a_38 != ATgetArgument(t, 0)))
                          {
                            _fail(ATgetArgument(t, 0));
                          }
                        if(((e_38 != NULL) && (e_38 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          e_38 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = fetch_1_0(m_2, t);
                }
                t = not_null(e_38);
                LocalPopChoice(y_28);
              }
            else
              {
                t = x_28;
                t = m_38(b_38, t);
              }
          }
        }
      else
        {
          t = m_38(b_38, t);
        }
      t = if_verbose5_1_0(n_2, t);
      LocalPopChoice(w_28);
    }
  else
    {
      t = v_28;
      {
        ATerm l_38 = NULL,k_14 = NULL,l_14 = NULL;
        l_38 = t;
        t = term_k_25;
        k_14 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_a_29), l_38), term_z_28);
        l_14 = t;
        t = SSL_printnl(k_14, l_14);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_a_29), l_38), term_z_28);
        t = if_verbose5_1_0(q_2, t);
        _fail(t);
      }
    }
  return(t);
}
ATerm xtc_command_1_0 (ATerm u_138 (ATerm), ATerm t)
{
  ATerm o_38 = NULL,p_38 = NULL;
  p_38 = t;
  t = u_138(t);
  t = xtc_find_0_0(t);
  o_38 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_38, p_38);
  {
    static ATerm x_2 (ATerm t);
    static ATerm x_2 (ATerm t)
    {
      ATerm q_38 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, o_38, p_38);
      t = e_9(o_38, p_38, t);
      t = term_m_17;
      q_38 = t;
      t = SSL_exit(q_38);
      return(t);
    }
    t = fork_and_wait_1_0(x_2, t);
  }
  t = p_38;
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm q_0 (ATerm), ATerm r_0 (ATerm), ATerm t)
{
  ATerm s_38 = NULL,t_38 = NULL;
  s_38 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm u_38 = NULL,v_38 = NULL;
      t = s_38;
      t = xtc_new_file_0_0(t);
      u_38 = t;
      t = r_0(t);
      v_38 = t;
      t = (ATerm) ATmakeAppl(sym__2, v_38, (ATerm) ATinsert(ATinsert(ATempty, u_38), term_h_14));
      t = conc_0_0(t);
      t = xtc_command_1_0(q_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, u_38);
    }
  else
    {
      ATerm x_38 = NULL,y_38 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          t_38 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = t_38;
      t = xtc_new_file_0_0(t);
      x_38 = t;
      t = r_0(t);
      y_38 = t;
      t = (ATerm) ATmakeAppl(sym__2, y_38, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, x_38), term_h_14), t_38), term_b_29));
      t = conc_0_0(t);
      t = xtc_command_1_0(q_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, x_38);
    }
  return(t);
}
static ATerm p_41 (ATerm f_39, ATerm k_39, ATerm l_39, ATerm t)
{
  ATerm m_39 = NULL,p_39 = NULL,n_14 = NULL,o_14 = NULL,j_6 = NULL;
  t = SSLgetAnnotations(l_39);
  m_39 = t;
  t = f_39;
  {
    ATerm c_29 = t;
    if((PushChoice() == 0))
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("rtree", 0, ATtrue)))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = c_29;
      }
  }
  p_39 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_39, k_39);
  j_6 = t;
  t = SSLsetAnnotations(j_6, m_39);
  o_14 = t;
  t = SSL_explode_term(o_14);
  if(match_cons(t, sym__2))
    {
      ATerm d_29 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) d_29) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm f_29 = ATgetArgument(t, 1);
        if(((ATgetType(f_29) == AT_LIST) && !(ATisEmpty(f_29))))
          {
            ATerm g_29 = ATgetFirst((ATermList) f_29);
            ATerm h_29 = (ATerm) ATgetNext((ATermList) f_29);
            if(((ATgetType(h_29) == AT_LIST) && !(ATisEmpty(h_29))))
              {
                n_14 = ATgetFirst((ATermList) h_29);
                {
                  ATerm j_29 = (ATerm) ATgetNext((ATermList) h_29);
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
  t = n_14;
  {
    ATerm l_29 = t;
    int m_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_29 = t;
        int o_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_39 = NULL;
            if(match_cons(t, sym_FILE_1))
              {
                y_39 = ATgetArgument(t, 0);
                {
                  ATerm r_14 = NULL,u_6 = NULL;
                  t = SSLgetAnnotations(n_14);
                  r_14 = t;
                  t = (ATerm) ATmakeAppl(sym_FILE_1, y_39);
                  u_6 = t;
                  t = SSLsetAnnotations(u_6, r_14);
                }
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = n_14;
              }
            LocalPopChoice(o_29);
            t = xtc_transform_file_2_0(y_2, z_2, t);
          }
        else
          {
            t = n_29;
            t = xtc_transform_term_2_0(a_3, b_3, t);
          }
        t = read_from_0_0(t);
        LocalPopChoice(m_29);
      }
    else
      {
        t = l_29;
        {
          ATerm u_40 = NULL,v_40 = NULL,w_40 = NULL;
          t = term_k_25;
          v_40 = t;
          t = (ATerm) ATinsert(ATinsert(ATempty, k_39), term_q_29);
          w_40 = t;
          t = SSL_printnl(v_40, w_40);
          t = term_m_17;
          u_40 = t;
          t = SSL_exit(u_40);
          t = (ATerm) ATinsert(ATinsert(ATempty, k_39), term_q_29);
        }
      }
  }
  return(t);
}
static ATerm q_41 (ATerm x_40, ATerm e_41, ATerm t)
{
  ATerm w_14 = NULL;
  t = SSL_explode_term(e_41);
  if(match_cons(t, sym__2))
    {
      ATerm r_29 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) r_29) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm u_29 = ATgetArgument(t, 1);
        if(((ATgetType(u_29) == AT_LIST) && !(ATisEmpty(u_29))))
          {
            ATerm v_29 = ATgetFirst((ATermList) u_29);
            ATerm w_29 = (ATerm) ATgetNext((ATermList) u_29);
            if(((ATgetType(w_29) == AT_LIST) && !(ATisEmpty(w_29))))
              {
                w_14 = ATgetFirst((ATermList) w_29);
                {
                  ATerm x_29 = (ATerm) ATgetNext((ATermList) w_29);
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
  t = w_14;
  {
    ATerm y_29 = t;
    int z_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = read_from_0_0(t);
        LocalPopChoice(z_29);
      }
    else
      {
        t = y_29;
        {
          ATerm g_41 = NULL,h_41 = NULL,i_41 = NULL;
          t = term_k_25;
          h_41 = t;
          t = (ATerm) ATinsert(ATinsert(ATempty, x_40), term_q_29);
          i_41 = t;
          t = SSL_printnl(h_41, i_41);
          t = term_m_17;
          g_41 = t;
          t = SSL_exit(g_41);
          t = (ATerm) ATinsert(ATinsert(ATempty, x_40), term_q_29);
        }
      }
  }
  return(t);
}
static ATerm y_2 (ATerm t)
{
  t = term_c_30;
  return(t);
}
static ATerm z_2 (ATerm t)
{
  ATerm a_40 = NULL,b_40 = NULL,c_40 = NULL,d_40 = NULL,e_40 = NULL;
  e_40 = t;
  t = pass_verbose_0_0(t);
  a_40 = t;
  t = e_40;
  t = pass_keep_0_0(t);
  b_40 = t;
  t = term_d_30;
  {
    ATerm e_30 = t;
    int f_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_40 = NULL,g_40 = NULL;
        t = term_f_14;
        f_40 = t;
        t = term_d_30;
        g_40 = t;
        t = term_g_30;
        t = q_10(f_40, g_40, t);
        LocalPopChoice(f_30);
        t = (ATerm) ATinsert(ATempty, term_d_30);
      }
    else
      {
        t = e_30;
        t = (ATerm) ATempty;
      }
  }
  c_40 = t;
  t = term_h_30;
  {
    ATerm i_30 = t;
    int j_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_40 = NULL,i_40 = NULL;
        t = term_f_14;
        h_40 = t;
        t = term_h_30;
        i_40 = t;
        t = term_k_30;
        t = q_10(h_40, i_40, t);
        LocalPopChoice(j_30);
      }
    else
      {
        t = i_30;
        t = (ATerm) ATempty;
      }
  }
  d_40 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, d_40), b_40), a_40), c_40);
  t = concat_0_0(t);
  return(t);
}
static ATerm a_3 (ATerm t)
{
  t = term_c_30;
  return(t);
}
static ATerm b_3 (ATerm t)
{
  ATerm j_40 = NULL,k_40 = NULL,l_40 = NULL,m_40 = NULL,n_40 = NULL;
  n_40 = t;
  t = pass_verbose_0_0(t);
  j_40 = t;
  t = n_40;
  t = pass_keep_0_0(t);
  k_40 = t;
  t = term_d_30;
  {
    ATerm l_30 = t;
    int o_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_40 = NULL,p_40 = NULL;
        t = term_f_14;
        o_40 = t;
        t = term_d_30;
        p_40 = t;
        t = term_g_30;
        t = q_10(o_40, p_40, t);
        LocalPopChoice(o_30);
        t = (ATerm) ATinsert(ATempty, term_d_30);
      }
    else
      {
        t = l_30;
        t = (ATerm) ATempty;
      }
  }
  l_40 = t;
  t = term_h_30;
  {
    ATerm p_30 = t;
    int r_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_40 = NULL,r_40 = NULL;
        t = term_f_14;
        q_40 = t;
        t = term_h_30;
        r_40 = t;
        t = term_k_30;
        t = q_10(q_40, r_40, t);
        LocalPopChoice(r_30);
      }
    else
      {
        t = p_30;
        t = (ATerm) ATempty;
      }
  }
  m_40 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, m_40), k_40), j_40), l_40);
  t = concat_0_0(t);
  return(t);
}
ATerm parse_module_0_0 (ATerm t)
{
  ATerm j_41 = NULL,m_41 = NULL,o_41 = NULL;
  j_41 = t;
  if(match_cons(t, sym__2))
    {
      m_41 = ATgetArgument(t, 0);
      o_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_41;
  if(match_string(t, "rtree"))
    {
      ATerm s_30 = t;
      int t_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = p_41(m_41, o_41, j_41, t);
          LocalPopChoice(t_30);
        }
      else
        {
          t = s_30;
          t = q_41(o_41, j_41, t);
        }
    }
  else
    {
      t = p_41(m_41, o_41, j_41, t);
    }
  return(t);
}
ATerm debug_1_0 (ATerm z_112 (ATerm), ATerm t)
{
  ATerm s_41 = NULL,t_41 = NULL,u_41 = NULL,v_41 = NULL;
  s_41 = t;
  t = z_112(t);
  t_41 = t;
  t = term_k_25;
  u_41 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, s_41), t_41);
  v_41 = t;
  t = SSL_printnl(u_41, v_41);
  t = s_41;
  return(t);
}
ATerm if_verbose3_1_0 (ATerm j_129 (ATerm), ATerm t)
{
  ATerm x_41 = NULL;
  x_41 = t;
  {
    ATerm u_30 = t;
    int v_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_41 = NULL,a_42 = NULL,b_42 = NULL;
        t = term_f_14;
        a_42 = t;
        t = term_p_17;
        b_42 = t;
        t = term_s_17;
        t = q_10(a_42, b_42, t);
        z_41 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_41, term_x_18);
        t = geq_0_0(t);
        t = x_41;
        t = j_129(t);
        LocalPopChoice(v_30);
      }
    else
      {
        t = u_30;
        t = x_41;
      }
  }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm w_113 (ATerm), ATerm t)
{
  ATerm d_42 = NULL;
  static ATerm e_3 (ATerm t);
  static ATerm e_3 (ATerm t)
  {
    t = w_113(t);
    if(((d_42 != NULL) && (d_42 != t)))
      _fail(t);
    else
      d_42 = t;
    return(t);
  }
  t = fetch_1_0(e_3, t);
  t = not_null(d_42);
  return(t);
}
static ATerm i_10 (ATerm u_51, ATerm v_51, ATerm t)
{
  t = SSL_access(u_51, v_51);
  return(t);
}
ATerm is_relpath_0_0 (ATerm t)
{
  ATerm w_30 = t;
  if((PushChoice() == 0))
    {
      ATerm e_42 = NULL;
      e_42 = t;
      t = SSL_explode_string(e_42);
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          ATerm x_30 = ATgetFirst((ATermList) t);
          if(((ATgetType(x_30) != AT_INT) || (ATgetInt((ATermInt) x_30) != 47)))
            _fail(t);
          {
            ATerm y_30 = (ATerm) ATgetNext((ATermList) t);
          }
        }
      else
        _fail(t);
      t = e_42;
      PopChoice();
      _fail(t);
    }
  else
    {
      t = w_30;
    }
  return(t);
}
static ATerm p_9 (ATerm i_103 (ATerm), ATerm j_23, ATerm i_23, ATerm t)
{
  t = i_103(t);
  {
    ATerm z_30 = t;
    int a_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm f_3 (ATerm t);
        static ATerm f_3 (ATerm t)
        {
          ATerm u_42 = NULL;
          u_42 = t;
          {
            ATerm b_31 = t;
            int c_31 = stack_ptr;
            if((PushChoice() == 0))
              {
                static ATerm h_3 (ATerm t);
                static ATerm h_3 (ATerm t)
                {
                  ATerm w_42 = NULL,x_42 = NULL,y_42 = NULL,z_42 = NULL,a_43 = NULL;
                  x_42 = t;
                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, x_42), term_i_16), j_23), term_z_13), u_42);
                  a_43 = t;
                  t = SSL_concat_strings(a_43);
                  y_42 = t;
                  t = (ATerm) ATinsert(ATempty, term_v_13);
                  z_42 = t;
                  t = (ATerm) ATmakeAppl(sym__2, y_42, (ATerm) ATinsert(ATempty, term_v_13));
                  t = i_10(y_42, z_42, t);
                  w_42 = t;
                  t = (ATerm) ATmakeAppl(sym__2, x_42, (ATerm) ATmakeAppl(sym_FILE_1, w_42));
                  return(t);
                }
                t = j_23;
                t = is_relpath_0_0(t);
                t = i_23;
                t = fetch_elem_1_0(h_3, t);
                LocalPopChoice(c_31);
              }
            else
              {
                t = b_31;
                {
                  static ATerm o_3 (ATerm t);
                  static ATerm o_3 (ATerm t)
                  {
                    ATerm f_15 = NULL,h_15 = NULL,m_15 = NULL,n_15 = NULL,p_15 = NULL;
                    h_15 = t;
                    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, h_15), term_i_16), j_23);
                    p_15 = t;
                    t = SSL_concat_strings(p_15);
                    m_15 = t;
                    t = (ATerm) ATinsert(ATempty, term_v_13);
                    n_15 = t;
                    t = (ATerm) ATmakeAppl(sym__2, m_15, (ATerm) ATinsert(ATempty, term_v_13));
                    t = i_10(m_15, n_15, t);
                    f_15 = t;
                    t = (ATerm) ATmakeAppl(sym__2, h_15, (ATerm) ATmakeAppl(sym_FILE_1, f_15));
                    return(t);
                  }
                  t = SSL_explode_string(j_23);
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      ATerm d_31 = ATgetFirst((ATermList) t);
                      if(((ATgetType(d_31) != AT_INT) || (ATgetInt((ATermInt) d_31) != 47)))
                        _fail(t);
                      {
                        ATerm f_31 = (ATerm) ATgetNext((ATermList) t);
                      }
                    }
                  else
                    _fail(t);
                  t = i_23;
                  t = fetch_elem_1_0(o_3, t);
                }
              }
          }
          return(t);
        }
        t = fetch_elem_1_0(f_3, t);
        LocalPopChoice(a_31);
      }
    else
      {
        t = z_30;
        {
          ATerm g_31 = t;
          int i_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              static ATerm p_3 (ATerm t);
              static ATerm p_3 (ATerm t)
              {
                ATerm b_43 = NULL,c_43 = NULL,d_43 = NULL,e_43 = NULL,f_43 = NULL,g_43 = NULL;
                b_43 = t;
                t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, b_43), term_i_16), j_23);
                g_43 = t;
                t = SSL_concat_strings(g_43);
                c_43 = t;
                t = term_m_27;
                e_43 = t;
                t = (ATerm) ATmakeAppl(sym_Tool_1, c_43);
                f_43 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_m_27, (ATerm) ATmakeAppl(sym_Tool_1, c_43));
                t = q_10(e_43, f_43, t);
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    ATerm j_31 = ATgetFirst((ATermList) t);
                    if(match_cons(j_31, sym__2))
                      {
                        ATerm n_31 = ATgetArgument(j_31, 0);
                        d_43 = ATgetArgument(j_31, 1);
                      }
                    else
                      _fail(t);
                    {
                      ATerm l_31 = (ATerm) ATgetNext((ATermList) t);
                    }
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym__2, b_43, (ATerm) ATmakeAppl(sym_FILE_1, d_43));
                return(t);
              }
              t = i_23;
              t = fetch_elem_1_0(p_3, t);
              LocalPopChoice(i_31);
            }
          else
            {
              t = g_31;
              {
                ATerm s_31 = t;
                int t_31 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm h_43 = NULL,i_43 = NULL;
                    t = term_f_14;
                    h_43 = t;
                    t = term_u_31;
                    i_43 = t;
                    t = term_v_31;
                    t = q_10(h_43, i_43, t);
                    LocalPopChoice(t_31);
                    {
                      ATerm j_43 = NULL,k_43 = NULL,l_43 = NULL,m_43 = NULL,n_43 = NULL;
                      j_43 = t;
                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_x_31), j_23), term_w_31);
                      n_43 = t;
                      t = SSL_concat_strings(n_43);
                      k_43 = t;
                      t = term_k_25;
                      l_43 = t;
                      t = (ATerm) ATinsert(ATempty, k_43);
                      m_43 = t;
                      t = SSL_printnl(l_43, m_43);
                      t = j_43;
                      _fail(t);
                    }
                  }
                else
                  {
                    t = s_31;
                    {
                      ATerm q_43 = NULL,r_43 = NULL,s_43 = NULL;
                      t = term_k_25;
                      r_43 = t;
                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_x_31), j_23), term_w_31);
                      s_43 = t;
                      t = SSL_printnl(r_43, s_43);
                      t = term_m_17;
                      q_43 = t;
                      t = SSL_exit(q_43);
                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_x_31), j_23), term_w_31);
                    }
                  }
              }
            }
        }
      }
  }
  return(t);
}
static ATerm a_4 (ATerm t)
{
  t = term_y_31;
  return(t);
}
ATerm get_module_1_0 (ATerm h_103 (ATerm), ATerm t)
{
  ATerm w_43 = NULL,x_43 = NULL,y_43 = NULL,z_43 = NULL;
  t = basename_1_0(_id, t);
  y_43 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_q_26), term_d_32), term_c_32), term_z_31);
  z_43 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_43, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_q_26), term_d_32), term_c_32), term_z_31));
  t = p_9(h_103, y_43, z_43, t);
  if(match_cons(t, sym__2))
    {
      ATerm e_32 = ATgetArgument(t, 0);
      ATerm f_32 = ATgetArgument(t, 1);
      if(match_cons(f_32, sym_FILE_1))
        {
          w_43 = ATgetArgument(f_32, 0);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  {
    static ATerm r_3 (ATerm t);
    static ATerm r_3 (ATerm t)
    {
      ATerm e_44 = NULL;
      e_44 = t;
      t = w_43;
      t = debug_1_0(a_4, t);
      t = e_44;
      return(t);
    }
    t = if_verbose3_1_0(r_3, t);
  }
  t = parse_module_0_0(t);
  x_43 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_43, x_43);
  return(t);
}
static ATerm r_9 (ATerm y_117 (ATerm), ATerm z_117 (ATerm), ATerm s_42, ATerm r_42, ATerm t)
{
  t = z_117(t);
  {
    static ATerm d_4 (ATerm t);
    static ATerm d_4 (ATerm t)
    {
      ATerm f_44 = NULL;
      f_44 = t;
      t = (ATerm) ATmakeAppl(sym__2, s_42, f_44);
      t = y_117(t);
      return(t);
    }
    t = fetch_1_0(d_4, t);
  }
  t = r_42;
  return(t);
}
static ATerm s_9 (ATerm q_117 (ATerm), ATerm m_42, ATerm l_42, ATerm t)
{
  static ATerm f_45 (ATerm t);
  static ATerm f_45 (ATerm t)
  {
    ATerm u_44 = NULL,v_44 = NULL,c_45 = NULL;
    u_44 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = u_44;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            v_44 = ATgetFirst((ATermList) t);
            c_45 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm h_32 = t;
          int i_32 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = u_44;
              {
                static ATerm h_4 (ATerm t);
                static ATerm h_4 (ATerm t)
                {
                  t = l_42;
                  return(t);
                }
                t = r_9(q_117, h_4, v_44, c_45, t);
              }
              t = f_45(t);
              LocalPopChoice(i_32);
            }
          else
            {
              t = h_32;
              {
                ATerm a_16 = NULL,j_16 = NULL,y_6 = NULL;
                t = SSLgetAnnotations(u_44);
                a_16 = t;
                t = c_45;
                t = f_45(t);
                j_16 = t;
                t = (ATerm) ATinsert(CheckATermList(j_16), v_44);
                y_6 = t;
                t = SSLsetAnnotations(y_6, a_16);
              }
            }
        }
      }
    return(t);
  }
  t = m_42;
  t = f_45(t);
  return(t);
}
static ATerm k_4 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm j_32 = ATgetArgument(t, 0);
      if(((ATgetType(j_32) != AT_LIST) || !(ATisEmpty(j_32))))
        _fail(t);
      {
        ATerm n_32 = ATgetArgument(t, 1);
        if(((ATgetType(n_32) != AT_LIST) || !(ATisEmpty(n_32))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm l_4 (ATerm t)
{
  ATerm o_45 = NULL,p_45 = NULL,q_45 = NULL,r_45 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm o_32 = ATgetArgument(t, 0);
      if(((ATgetType(o_32) == AT_LIST) && !(ATisEmpty(o_32))))
        {
          o_45 = ATgetFirst((ATermList) o_32);
          p_45 = (ATerm) ATgetNext((ATermList) o_32);
        }
      else
        _fail(t);
      {
        ATerm p_32 = ATgetArgument(t, 1);
        if(((ATgetType(p_32) == AT_LIST) && !(ATisEmpty(p_32))))
          {
            q_45 = ATgetFirst((ATermList) p_32);
            r_45 = (ATerm) ATgetNext((ATermList) p_32);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, o_45, q_45), (ATerm) ATmakeAppl(sym__2, p_45, r_45));
  return(t);
}
static ATerm m_4 (ATerm t)
{
  ATerm s_45 = NULL,t_45 = NULL;
  if(match_cons(t, sym__2))
    {
      s_45 = ATgetArgument(t, 0);
      t_45 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(t_45), s_45);
  return(t);
}
static ATerm x_9 (ATerm i_777, ATerm n_777, ATerm r_75, ATerm t)
{
  ATerm i_45 = NULL,k_45 = NULL,l_45 = NULL,m_45 = NULL;
  t = SSL_explode_term(n_777);
  if(match_cons(t, sym__2))
    {
      i_45 = ATgetArgument(t, 0);
      l_45 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(i_777);
  if(match_cons(t, sym__2))
    {
      if((i_45 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      k_45 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, k_45, l_45);
  t = genzip_4_0(k_4, l_4, m_4, _id, t);
  m_45 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_45, r_75);
  t = conc_0_0(t);
  return(t);
}
static ATerm o_4 (ATerm t)
{
  ATerm i_46 = NULL;
  i_46 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, i_46);
  return(t);
}
static ATerm p_4 (ATerm t)
{
  ATerm j_46 = NULL,k_46 = NULL,l_46 = NULL,q_46 = NULL,l_7 = NULL;
  q_46 = t;
  if(match_cons(t, sym__2))
    {
      k_46 = ATgetArgument(t, 0);
      l_46 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_46);
  j_46 = t;
  t = l_46;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, k_46, l_46);
  l_7 = t;
  t = SSLsetAnnotations(l_7, j_46);
  return(t);
}
static ATerm q_4 (ATerm t)
{
  ATerm l_47 = NULL,o_47 = NULL,u_47 = NULL,b_48 = NULL,c_48 = NULL;
  l_47 = t;
  if(match_cons(t, sym__2))
    {
      o_47 = ATgetArgument(t, 0);
      u_47 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_47;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_48 = ATgetFirst((ATermList) t);
      c_48 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm q_32 = t;
        int r_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = o_48(o_47, u_47, l_47, t);
            LocalPopChoice(r_32);
          }
        else
          {
            t = q_32;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(o_47), b_48), c_48);
          }
      }
    }
  else
    {
      t = o_48(o_47, u_47, l_47, t);
    }
  return(t);
}
static ATerm o_48 (ATerm r_46, ATerm s_46, ATerm t_46, ATerm t)
{
  ATerm u_46 = NULL,x_46 = NULL,e_8 = NULL,a_47 = NULL,b_47 = NULL,c_47 = NULL,d_47 = NULL;
  t = SSLgetAnnotations(t_46);
  u_46 = t;
  t = s_46;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_47 = ATgetFirst((ATermList) t);
      d_47 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = a_47;
  if(match_cons(t, sym__2))
    {
      b_47 = ATgetArgument(t, 0);
      c_47 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm u_32 = t;
    int v_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = c_47;
        if((b_47 != t))
          {
            _fail(t);
          }
        t = d_47;
        LocalPopChoice(v_32);
      }
    else
      {
        t = u_32;
        t = s_46;
        t = x_9(b_47, c_47, d_47, t);
      }
  }
  x_46 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_46, x_46);
  e_8 = t;
  t = SSLsetAnnotations(e_8, u_46);
  return(t);
}
static ATerm s_4 (ATerm t)
{
  ATerm n_48 = NULL;
  if(match_cons(t, sym__2))
    {
      n_48 = ATgetArgument(t, 0);
      if((n_48 != ATgetArgument(t, 1)))
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
  ATerm w_32 = t;
  int x_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(o_4, p_4, q_4, t);
      LocalPopChoice(x_32);
    }
  else
    {
      t = w_32;
      {
        ATerm g_48 = NULL,h_48 = NULL,i_48 = NULL;
        g_48 = t;
        if(match_cons(t, sym__2))
          {
            h_48 = ATgetArgument(t, 0);
            i_48 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = g_48;
        t = s_9(s_4, h_48, i_48, t);
      }
    }
  return(t);
}
static ATerm z_9 (ATerm q_139 (ATerm), ATerm r_139 (ATerm), ATerm s_139 (ATerm), ATerm j_79, ATerm g_79, ATerm n_79, ATerm k_79, ATerm h_79, ATerm i_79, ATerm t)
{
  ATerm p_48 = NULL,q_48 = NULL,r_48 = NULL,s_48 = NULL,t_48 = NULL,z_48 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, j_79, k_79);
  t = q_139(t);
  p_48 = t;
  t = r_139(t);
  q_48 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_48, n_79);
  t = diff_0_0(t);
  r_48 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_48, g_79);
  t = conc_0_0(t);
  s_48 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_48, n_79);
  t = conc_0_0(t);
  t_48 = t;
  t = (ATerm) ATmakeAppl(sym__3, j_79, p_48, h_79);
  t = s_139(t);
  z_48 = t;
  t = (ATerm) ATmakeAppl(sym__5, s_48, t_48, k_79, z_48, i_79);
  return(t);
}
ATerm GnNext_3_0 (ATerm q_139 (ATerm), ATerm r_139 (ATerm), ATerm s_139 (ATerm), ATerm t)
{
  ATerm b_49 = NULL,c_49 = NULL,d_49 = NULL,e_49 = NULL,g_49 = NULL,h_49 = NULL;
  if(match_cons(t, sym__5))
    {
      ATerm y_32 = ATgetArgument(t, 0);
      if(((ATgetType(y_32) == AT_LIST) && !(ATisEmpty(y_32))))
        {
          b_49 = ATgetFirst((ATermList) y_32);
          c_49 = (ATerm) ATgetNext((ATermList) y_32);
        }
      else
        _fail(t);
      d_49 = ATgetArgument(t, 1);
      e_49 = ATgetArgument(t, 2);
      g_49 = ATgetArgument(t, 3);
      h_49 = ATgetArgument(t, 4);
    }
  else
    _fail(t);
  t = z_9(q_139, r_139, s_139, b_49, c_49, d_49, e_49, g_49, h_49, t);
  return(t);
}
ATerm while_not_2_0 (ATerm p_106 (ATerm), ATerm q_106 (ATerm), ATerm t)
{
  static ATerm j_49 (ATerm t);
  static ATerm j_49 (ATerm t)
  {
    ATerm z_32 = t;
    int a_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_106(t);
        LocalPopChoice(a_33);
      }
    else
      {
        t = z_32;
        t = q_106(t);
        t = j_49(t);
      }
    return(t);
  }
  t = j_49(t);
  return(t);
}
ATerm for_3_0 (ATerm s_106 (ATerm), ATerm t_106 (ATerm), ATerm u_106 (ATerm), ATerm t)
{
  t = s_106(t);
  t = while_not_2_0(t_106, u_106, t);
  return(t);
}
static ATerm t_4 (ATerm t)
{
  ATerm o_49 = NULL,p_49 = NULL,s_49 = NULL;
  if(match_cons(t, sym__3))
    {
      o_49 = ATgetArgument(t, 0);
      p_49 = ATgetArgument(t, 1);
      s_49 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__5, o_49, o_49, p_49, s_49, (ATerm) ATempty);
  return(t);
}
static ATerm u_4 (ATerm t)
{
  ATerm w_49 = NULL,a_50 = NULL;
  if(match_cons(t, sym__5))
    {
      ATerm c_33 = ATgetArgument(t, 0);
      if(((ATgetType(c_33) != AT_LIST) || !(ATisEmpty(c_33))))
        _fail(t);
      {
        ATerm h_33 = ATgetArgument(t, 1);
      }
      {
        ATerm i_33 = ATgetArgument(t, 2);
      }
      w_49 = ATgetArgument(t, 3);
      a_50 = ATgetArgument(t, 4);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, w_49, a_50);
  return(t);
}
ATerm graph_nodes_roots_3_0 (ATerm n_139 (ATerm), ATerm o_139 (ATerm), ATerm p_139 (ATerm), ATerm t)
{
  ATerm n_49 = NULL;
  static ATerm v_4 (ATerm t);
  static ATerm v_4 (ATerm t)
  {
    ATerm k_33 = t;
    int m_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = GnNext_3_0(n_139, o_139, p_139, t);
        LocalPopChoice(m_33);
      }
    else
      {
        t = k_33;
        {
          ATerm c_50 = NULL,f_50 = NULL,g_50 = NULL,h_50 = NULL,k_50 = NULL,l_50 = NULL,m_50 = NULL;
          if(match_cons(t, sym__5))
            {
              c_50 = ATgetArgument(t, 0);
              h_50 = ATgetArgument(t, 1);
              k_50 = ATgetArgument(t, 2);
              l_50 = ATgetArgument(t, 3);
              m_50 = ATgetArgument(t, 4);
            }
          else
            _fail(t);
          t = c_50;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              f_50 = ATgetFirst((ATermList) t);
              g_50 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__5, g_50, h_50, k_50, l_50, (ATerm) ATinsert(CheckATermList(m_50), f_50));
        }
      }
    return(t);
  }
  t = for_3_0(t_4, u_4, v_4, t);
  if(match_cons(t, sym__2))
    {
      n_49 = ATgetArgument(t, 0);
      {
        ATerm n_33 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = n_49;
  return(t);
}
ATerm filter_1_0 (ATerm n_121 (ATerm), ATerm t)
{
  ATerm l_51 = NULL,p_51 = NULL,q_51 = NULL;
  l_51 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = l_51;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          p_51 = ATgetFirst((ATermList) t);
          q_51 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm p_33 = t;
        int w_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_17 = NULL,d_17 = NULL,g_17 = NULL,z_8 = NULL;
            t = SSLgetAnnotations(l_51);
            a_17 = t;
            t = p_51;
            t = n_121(t);
            d_17 = t;
            t = q_51;
            t = filter_1_0(n_121, t);
            g_17 = t;
            t = (ATerm) ATinsert(CheckATermList(g_17), d_17);
            z_8 = t;
            t = SSLsetAnnotations(z_8, a_17);
            LocalPopChoice(w_33);
          }
        else
          {
            t = p_33;
            t = q_51;
            t = filter_1_0(n_121, t);
          }
      }
    }
  return(t);
}
static ATerm w_4 (ATerm t)
{
  ATerm a_34 = t;
  if((PushChoice() == 0))
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-I", 0, ATtrue)))
        _fail(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = a_34;
    }
  return(t);
}
static ATerm a_5 (ATerm t)
{
  ATerm v_52 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm b_34 = ATgetArgument(t, 0);
      ATerm c_34 = ATgetArgument(t, 1);
      if(match_cons(c_34, sym_Specification_1))
        {
          v_52 = ATgetArgument(c_34, 0);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  t = c_9(v_52, t);
  return(t);
}
static ATerm d_5 (ATerm t)
{
  ATerm y_52 = NULL,a_53 = NULL;
  if(match_cons(t, sym__3))
    {
      ATerm d_34 = ATgetArgument(t, 0);
      y_52 = ATgetArgument(t, 1);
      a_53 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(a_53), y_52);
  return(t);
}
static ATerm l_5 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_e_34;
  return(t);
}
static ATerm n_5 (ATerm t)
{
  ATerm b_53 = NULL,c_53 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_53 = ATgetFirst((ATermList) t);
      c_53 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, b_53, c_53);
  return(t);
}
static ATerm o_5 (ATerm t)
{
  ATerm d_53 = NULL,e_53 = NULL,g_53 = NULL,k_53 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm f_34 = ATgetArgument(t, 0);
      if(match_cons(f_34, sym__2))
        {
          d_53 = ATgetArgument(f_34, 0);
          e_53 = ATgetArgument(f_34, 1);
        }
      else
        _fail(t);
      {
        ATerm g_34 = ATgetArgument(t, 1);
        if(match_cons(g_34, sym__2))
          {
            g_53 = ATgetArgument(g_34, 0);
            k_53 = ATgetArgument(g_34, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(g_53), d_53), (ATerm) ATinsert(CheckATermList(k_53), e_53));
  return(t);
}
static ATerm c_10 (ATerm z_22, ATerm t)
{
  ATerm x_51 = NULL,z_51 = NULL,c_52 = NULL,d_52 = NULL,k_52 = NULL,l_52 = NULL,y_10 = NULL;
  ATerm h_34 = t;
  int j_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_52 = NULL,o_52 = NULL;
      t = term_f_14;
      n_52 = t;
      t = term_h_30;
      o_52 = t;
      t = term_k_30;
      t = q_10(n_52, o_52, t);
      t = filter_1_0(w_4, t);
      LocalPopChoice(j_34);
    }
  else
    {
      t = h_34;
      t = (ATerm) ATempty;
    }
  x_51 = t;
  t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATinsert(ATempty, z_22), term_q_15, (ATerm) ATempty);
  {
    static ATerm x_4 (ATerm t);
    static ATerm x_4 (ATerm t)
    {
      ATerm p_52 = NULL,q_52 = NULL;
      static ATerm k_5 (ATerm t);
      static ATerm k_5 (ATerm t)
      {
        t = (ATerm) ATinsert(CheckATermList(x_51), term_i_16);
        return(t);
      }
      q_52 = t;
      t = SSL_explode_term(q_52);
      if(match_cons(t, sym__2))
        {
          ATerm k_34 = ATgetArgument(t, 0);
          if((ATgetSymbol((ATermAppl) k_34) != ATmakeSymbol("", 0, ATtrue)))
            _fail(t);
          {
            ATerm l_34 = ATgetArgument(t, 1);
            if(((ATgetType(l_34) == AT_LIST) && !(ATisEmpty(l_34))))
              {
                p_52 = ATgetFirst((ATermList) l_34);
                {
                  ATerm m_34 = (ATerm) ATgetNext((ATermList) l_34);
                }
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = p_52;
      t = get_module_1_0(k_5, t);
      return(t);
    }
    t = graph_nodes_roots_3_0(x_4, a_5, d_5, t);
  }
  t = genzip_4_0(l_5, n_5, o_5, _id, t);
  l_52 = t;
  if(match_cons(t, sym__2))
    {
      c_52 = ATgetArgument(t, 0);
      d_52 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_52);
  z_51 = t;
  t = d_52;
  t = flatten_stratego_0_0(t);
  k_52 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_52, k_52);
  y_10 = t;
  t = SSLsetAnnotations(y_10, z_51);
  return(t);
}
static ATerm k_10 (ATerm q_57, ATerm r_57, ATerm t)
{
  ATerm q_53 = NULL,r_53 = NULL;
  r_53 = t;
  {
    ATerm o_34 = t;
    int p_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, q_57, r_57);
        t = q_10(q_57, r_57, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm q_34 = ATgetFirst((ATermList) t);
            q_53 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(p_34);
        {
          ATerm s_53 = NULL;
          t = (ATerm) ATmakeAppl(sym__3, q_57, r_57, q_53);
          t = lookup_table_0_1(q_57, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              s_53 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = u_10(r_57, q_53, s_53, t);
          t = (ATerm) ATmakeAppl(sym__3, q_57, r_57, q_53);
        }
      }
    else
      {
        t = o_34;
        {
          ATerm v_53 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, q_57, r_57);
          t = lookup_table_0_1(q_57, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              v_53 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = n_10(r_57, v_53, t);
          t = (ATerm) ATmakeAppl(sym__2, q_57, r_57);
        }
      }
  }
  t = r_53;
  return(t);
}
ATerm end_scope_1_0 (ATerm m_103 (ATerm), ATerm t)
{
  ATerm a_54 = NULL,b_54 = NULL,c_54 = NULL,d_54 = NULL,e_54 = NULL,f_54 = NULL,i_54 = NULL;
  d_54 = t;
  t = m_103(t);
  c_54 = t;
  {
    ATerm s_34 = t;
    int u_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_54 = NULL;
        t = term_b_15;
        j_54 = t;
        t = (ATerm) ATmakeAppl(sym__2, c_54, term_b_15);
        t = q_10(c_54, j_54, t);
        {
          ATerm v_34 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = v_34;
            }
        }
        LocalPopChoice(u_34);
      }
    else
      {
        t = s_34;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_54 = ATgetFirst((ATermList) t);
      a_54 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, c_54, term_b_15, a_54);
  t = lookup_table_0_1(c_54, t);
  i_54 = t;
  t = term_b_15;
  e_54 = t;
  t = i_54;
  if(match_cons(t, sym_Hashtable_1))
    {
      f_54 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_10(e_54, a_54, f_54, t);
  t = b_54;
  {
    static ATerm p_5 (ATerm t);
    static ATerm p_5 (ATerm t)
    {
      ATerm k_54 = NULL;
      k_54 = t;
      t = (ATerm) ATmakeAppl(sym__2, c_54, k_54);
      t = k_10(c_54, k_54, t);
      return(t);
    }
    t = map_1_0(p_5, t);
  }
  t = d_54;
  return(t);
}
ATerm restore_always_2_0 (ATerm u_105 (ATerm), ATerm v_105 (ATerm), ATerm t)
{
  ATerm z_34 = t;
  int a_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = u_105(t);
      t = v_105(t);
      LocalPopChoice(a_35);
    }
  else
    {
      t = z_34;
      t = v_105(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm l_103 (ATerm), ATerm t)
{
  ATerm n_54 = NULL,q_54 = NULL,r_54 = NULL,s_54 = NULL,u_54 = NULL,v_54 = NULL,b_55 = NULL;
  q_54 = t;
  t = l_103(t);
  n_54 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_54, term_b_15);
  {
    ATerm b_35 = t;
    int d_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_55 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm e_35 = ATgetArgument(t, 0);
            ATerm j_35 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_b_15;
        f_55 = t;
        t = (ATerm) ATmakeAppl(sym__2, n_54, term_b_15);
        t = q_10(n_54, f_55, t);
        LocalPopChoice(d_35);
      }
    else
      {
        t = b_35;
        t = (ATerm) ATempty;
      }
  }
  r_54 = t;
  t = (ATerm) ATmakeAppl(sym__3, n_54, term_b_15, (ATerm) ATinsert(CheckATermList(r_54), (ATerm) ATempty));
  t = lookup_table_0_1(n_54, t);
  b_55 = t;
  t = term_b_15;
  s_54 = t;
  t = (ATerm) ATinsert(CheckATermList(r_54), (ATerm) ATempty);
  u_54 = t;
  t = b_55;
  if(match_cons(t, sym_Hashtable_1))
    {
      v_54 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_10(s_54, u_54, v_54, t);
  t = q_54;
  return(t);
}
static ATerm r_5 (ATerm t)
{
  t = term_l_15;
  return(t);
}
static ATerm u_5 (ATerm t)
{
  ATerm s_55 = NULL;
  s_55 = t;
  {
    ATerm k_35 = t;
    int u_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(s_55);
        LocalPopChoice(u_35);
      }
    else
      {
        t = k_35;
        t = s_55;
      }
  }
  return(t);
}
static ATerm w_5 (ATerm t)
{
  t = term_l_15;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm d_138 (ATerm), ATerm t)
{
  ATerm k_55 = NULL;
  static ATerm t_5 (ATerm t);
  static ATerm t_5 (ATerm t)
  {
    ATerm l_55 = NULL;
    l_55 = t;
    {
      ATerm v_35 = t;
      int z_35 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm m_55 = NULL,n_55 = NULL;
          t = term_l_15;
          m_55 = t;
          t = term_b_15;
          n_55 = t;
          t = term_b_36;
          t = q_10(m_55, n_55, t);
          LocalPopChoice(z_35);
        }
      else
        {
          t = v_35;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
        }
    }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((k_55 != NULL) && (k_55 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          k_55 = ATgetFirst((ATermList) t);
        {
          ATerm o_36 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    t = k_55;
    t = map_1_0(u_5, t);
    t = l_55;
    t = end_scope_1_0(w_5, t);
    return(t);
  }
  t = begin_scope_1_0(r_5, t);
  t = restore_always_2_0(d_138, t_5, t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm z_55 = NULL,c_56 = NULL,f_56 = NULL,g_56 = NULL,h_56 = NULL;
  z_55 = t;
  t = term_q_15;
  t = whoami_0_0(t);
  c_56 = t;
  t = term_k_25;
  g_56 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_y_36), c_56), term_x_36);
  h_56 = t;
  t = SSL_printnl(g_56, h_56);
  t = term_m_17;
  f_56 = t;
  t = SSL_exit(f_56);
  t = z_55;
  return(t);
}
static ATerm x_5 (ATerm t)
{
  ATerm k_56 = NULL;
  k_56 = t;
  if(match_string(t, "-k"))
    {
      t = k_56;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = k_56;
    }
  return(t);
}
static ATerm y_5 (ATerm t)
{
  ATerm n_56 = NULL,o_56 = NULL,p_56 = NULL;
  n_56 = t;
  t = SSL_string_to_int(n_56);
  o_56 = t;
  t = term_i_17;
  p_56 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_i_17, o_56);
  t = t_10(p_56, o_56, t);
  t = n_56;
  return(t);
}
static ATerm z_5 (ATerm t)
{
  t = term_z_36;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(x_5, y_5, z_5, t);
  return(t);
}
static ATerm b_6 (ATerm t)
{
  ATerm r_56 = NULL;
  r_56 = t;
  if(match_string(t, "-S"))
    {
      t = r_56;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = r_56;
    }
  return(t);
}
static ATerm c_6 (ATerm t)
{
  ATerm s_56 = NULL,t_56 = NULL;
  t = term_p_17;
  s_56 = t;
  t = term_a_37;
  t_56 = t;
  t = term_b_37;
  t = t_10(s_56, t_56, t);
  t = term_c_37;
  return(t);
}
static ATerm e_6 (ATerm t)
{
  t = term_f_37;
  return(t);
}
static ATerm h_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm i_6 (ATerm t)
{
  ATerm u_56 = NULL,v_56 = NULL,w_56 = NULL;
  u_56 = t;
  t = SSL_string_to_int(u_56);
  v_56 = t;
  t = term_p_17;
  w_56 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_17, v_56);
  t = t_10(w_56, v_56, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, u_56);
  return(t);
}
static ATerm m_6 (ATerm t)
{
  t = term_g_37;
  return(t);
}
static ATerm r_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm s_6 (ATerm t)
{
  ATerm x_56 = NULL,y_56 = NULL;
  t = term_j_37;
  x_56 = t;
  t = term_q_15;
  y_56 = t;
  t = term_k_37;
  t = t_10(x_56, y_56, t);
  t = term_o_37;
  return(t);
}
static ATerm t_6 (ATerm t)
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
      t = Option_3_0(b_6, c_6, e_6, t);
      LocalPopChoice(r_37);
    }
  else
    {
      t = q_37;
      {
        ATerm t_37 = t;
        int u_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(h_6, i_6, m_6, t);
            LocalPopChoice(u_37);
          }
        else
          {
            t = t_37;
            t = Option_3_0(r_6, s_6, t_6, t);
          }
      }
    }
  return(t);
}
static ATerm t_10 (ATerm l_80, ATerm m_80, ATerm t)
{
  ATerm z_56 = NULL,c_57 = NULL;
  t = term_f_14;
  z_56 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_f_14, l_80, m_80);
  t = lookup_table_0_1(z_56, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      c_57 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_10(l_80, m_80, c_57, t);
  t = (ATerm) ATmakeAppl(sym__3, term_f_14, l_80, m_80);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm j_57 = NULL,n_57 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm o_57 = NULL,s_57 = NULL,v_57 = NULL;
      t = term_q_15;
      t = g_0(t);
      o_57 = t;
      t = term_v_37;
      s_57 = t;
      t = term_c_38;
      v_57 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_v_37, term_c_38, o_57);
      t = r_10(s_57, v_57, o_57, t);
      _fail(t);
    }
  else
    {
      ATerm y_57 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          j_57 = ATgetFirst((ATermList) t);
          n_57 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = j_57;
      t = d_0(t);
      t = term_q_15;
      t = f_0(t);
      y_57 = t;
      t = (ATerm) ATinsert(CheckATermList(n_57), y_57);
    }
  return(t);
}
static ATerm v_6 (ATerm t)
{
  ATerm a_58 = NULL;
  a_58 = t;
  if(match_string(t, "-o"))
    {
      t = a_58;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = a_58;
    }
  return(t);
}
static ATerm w_6 (ATerm t)
{
  ATerm b_58 = NULL,c_58 = NULL;
  b_58 = t;
  t = term_h_14;
  c_58 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_14, b_58);
  t = t_10(c_58, b_58, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, b_58);
  return(t);
}
static ATerm x_6 (ATerm t)
{
  t = term_d_38;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(v_6, w_6, x_6, t);
  return(t);
}
static ATerm z_6 (ATerm t)
{
  ATerm e_58 = NULL;
  e_58 = t;
  if(match_string(t, "-i"))
    {
      t = e_58;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = e_58;
    }
  return(t);
}
static ATerm b_7 (ATerm t)
{
  ATerm f_58 = NULL,g_58 = NULL;
  f_58 = t;
  t = term_b_29;
  g_58 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_29, f_58);
  t = t_10(g_58, f_58, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, f_58);
  return(t);
}
static ATerm c_7 (ATerm t)
{
  t = term_h_38;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(z_6, b_7, c_7, t);
  return(t);
}
static ATerm r_10 (ATerm l_57, ATerm m_57, ATerm k_57, ATerm t)
{
  ATerm n_58 = NULL,o_58 = NULL,q_58 = NULL,v_58 = NULL,w_58 = NULL;
  n_58 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_57, m_57);
  {
    ATerm i_38 = t;
    int j_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm k_38 = ATgetArgument(t, 0);
            ATerm n_38 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, l_57, m_57);
        t = q_10(l_57, m_57, t);
        LocalPopChoice(j_38);
      }
    else
      {
        t = i_38;
        t = (ATerm) ATempty;
      }
  }
  o_58 = t;
  t = (ATerm) ATmakeAppl(sym__3, l_57, m_57, (ATerm) ATinsert(CheckATermList(o_58), k_57));
  t = lookup_table_0_1(l_57, t);
  w_58 = t;
  t = (ATerm) ATinsert(CheckATermList(o_58), k_57);
  q_58 = t;
  t = w_58;
  if(match_cons(t, sym_Hashtable_1))
    {
      v_58 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_10(m_57, q_58, v_58, t);
  t = n_58;
  return(t);
}
ATerm ArgOption_3_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm o_0 (ATerm), ATerm t)
{
  ATerm j_59 = NULL,k_59 = NULL,l_59 = NULL,u_59 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm x_59 = NULL,y_59 = NULL,z_59 = NULL;
      t = term_q_15;
      t = o_0(t);
      x_59 = t;
      t = term_v_37;
      y_59 = t;
      t = term_c_38;
      z_59 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_v_37, term_c_38, x_59);
      t = r_10(y_59, z_59, x_59, t);
      _fail(t);
    }
  else
    {
      ATerm d_60 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          j_59 = ATgetFirst((ATermList) t);
          k_59 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = k_59;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          l_59 = ATgetFirst((ATermList) t);
          u_59 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = j_59;
      t = l_0(t);
      t = l_59;
      t = m_0(t);
      d_60 = t;
      t = (ATerm) ATinsert(CheckATermList(u_59), d_60);
    }
  return(t);
}
ATerm at_end_1_0 (ATerm b_114 (ATerm), ATerm t)
{
  static ATerm h_61 (ATerm t);
  static ATerm h_61 (ATerm t)
  {
    ATerm c_61 = NULL,f_61 = NULL,g_61 = NULL;
    g_61 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        c_61 = ATgetFirst((ATermList) t);
        f_61 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm z_17 = NULL,g_18 = NULL,a_11 = NULL;
          t = SSLgetAnnotations(g_61);
          z_17 = t;
          t = f_61;
          t = h_61(t);
          g_18 = t;
          t = (ATerm) ATinsert(CheckATermList(g_18), c_61);
          a_11 = t;
          t = SSLsetAnnotations(a_11, z_17);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = g_61;
        t = b_114(t);
      }
    return(t);
  }
  t = h_61(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm i_60 = NULL,j_60 = NULL,k_60 = NULL;
  i_60 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = i_60;
    }
  else
    {
      static ATerm d_7 (ATerm t);
      static ATerm d_7 (ATerm t)
      {
        t = not_null(k_60);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          j_60 = ATgetFirst((ATermList) t);
          if(((k_60 != NULL) && (k_60 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            k_60 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = j_60;
      t = at_end_1_0(d_7, t);
    }
  return(t);
}
static ATerm z_61 (ATerm l_61, ATerm t)
{
  ATerm m_61 = NULL;
  t = SSL_explode_term(l_61);
  if(match_cons(t, sym__2))
    {
      ATerm r_38 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) r_38) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      m_61 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_61;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm q_61 = NULL,t_61 = NULL,u_61 = NULL;
  u_61 = t;
  if(match_cons(t, sym__2))
    {
      q_61 = ATgetArgument(t, 0);
      t_61 = ATgetArgument(t, 1);
      {
        ATerm w_38 = t;
        int z_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm e_7 (ATerm t);
            static ATerm e_7 (ATerm t)
            {
              t = t_61;
              return(t);
            }
            t = q_61;
            t = at_end_1_0(e_7, t);
            LocalPopChoice(z_38);
          }
        else
          {
            t = w_38;
            t = z_61(u_61, t);
          }
      }
    }
  else
    {
      t = z_61(u_61, t);
    }
  return(t);
}
static ATerm d_10 (ATerm s_80, ATerm t_80, ATerm t)
{
  ATerm a_62 = NULL,b_62 = NULL,c_62 = NULL,q_62 = NULL;
  t = s_80;
  {
    ATerm a_39 = t;
    int b_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_62 = NULL;
        t = term_f_14;
        u_62 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_f_14, s_80);
        t = q_10(u_62, s_80, t);
        LocalPopChoice(b_39);
      }
    else
      {
        t = a_39;
        t = (ATerm) ATempty;
      }
  }
  b_62 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_62, t_80);
  t = conc_0_0(t);
  a_62 = t;
  t = term_f_14;
  c_62 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_f_14, s_80, a_62);
  t = lookup_table_0_1(c_62, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      q_62 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_10(s_80, a_62, q_62, t);
  t = (ATerm) ATmakeAppl(sym__3, term_f_14, s_80, a_62);
  return(t);
}
static ATerm h_7 (ATerm t)
{
  ATerm z_62 = NULL;
  z_62 = t;
  if(match_string(t, "-I"))
    {
      t = z_62;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--Include", 0, ATtrue)))
        _fail(t);
      t = z_62;
    }
  return(t);
}
static ATerm i_7 (ATerm t)
{
  ATerm a_63 = NULL,b_63 = NULL,d_63 = NULL;
  a_63 = t;
  t = term_h_30;
  b_63 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, a_63), term_h_30);
  d_63 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_30, (ATerm) ATinsert(ATinsert(ATempty, a_63), term_h_30));
  t = d_10(b_63, d_63, t);
  t = term_q_15;
  return(t);
}
static ATerm q_7 (ATerm t)
{
  t = term_c_39;
  return(t);
}
static ATerm s_7 (ATerm t)
{
  ATerm e_63 = NULL;
  e_63 = t;
  if(match_string(t, "--nodep"))
    {
      t = e_63;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-nodep", 0, ATtrue)))
        _fail(t);
      t = e_63;
    }
  return(t);
}
static ATerm v_7 (ATerm t)
{
  ATerm f_63 = NULL,k_63 = NULL;
  t = term_g_16;
  f_63 = t;
  t = term_d_39;
  k_63 = t;
  t = term_e_39;
  t = t_10(f_63, k_63, t);
  t = term_q_15;
  return(t);
}
static ATerm y_7 (ATerm t)
{
  t = term_g_39;
  return(t);
}
static ATerm b_8 (ATerm t)
{
  ATerm n_63 = NULL;
  n_63 = t;
  if(match_string(t, "--dep"))
    {
      t = n_63;
    }
  else
    {
      if(match_string(t, "-d"))
        {
          t = n_63;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-dep", 0, ATtrue)))
            _fail(t);
          t = n_63;
        }
    }
  return(t);
}
static ATerm c_8 (ATerm t)
{
  ATerm q_63 = NULL,r_63 = NULL;
  q_63 = t;
  t = term_d_16;
  r_63 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_16, q_63);
  t = t_10(r_63, q_63, t);
  t = term_q_15;
  return(t);
}
static ATerm f_8 (ATerm t)
{
  t = term_h_39;
  return(t);
}
static ATerm g_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--imports", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm i_8 (ATerm t)
{
  ATerm u_63 = NULL,w_63 = NULL;
  t = term_i_39;
  u_63 = t;
  t = term_q_15;
  w_63 = t;
  t = term_j_39;
  t = t_10(u_63, w_63, t);
  t = term_q_15;
  return(t);
}
static ATerm j_8 (ATerm t)
{
  t = term_n_39;
  return(t);
}
static ATerm k_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--slack", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm n_8 (ATerm t)
{
  ATerm x_63 = NULL,b_64 = NULL;
  t = term_u_31;
  x_63 = t;
  t = term_q_15;
  b_64 = t;
  t = term_o_39;
  t = t_10(x_63, b_64, t);
  t = term_q_15;
  return(t);
}
static ATerm o_8 (ATerm t)
{
  t = term_q_39;
  return(t);
}
static ATerm p_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--asfix", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm r_8 (ATerm t)
{
  ATerm c_64 = NULL,d_64 = NULL;
  t = term_d_30;
  c_64 = t;
  t = term_d_39;
  d_64 = t;
  t = term_r_39;
  t = t_10(c_64, d_64, t);
  t = term_q_15;
  return(t);
}
static ATerm s_8 (ATerm t)
{
  t = term_s_39;
  return(t);
}
ATerm pack_stratego_options_0_0 (ATerm t)
{
  ATerm t_39 = t;
  int u_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ArgOption_3_0(h_7, i_7, q_7, t);
      LocalPopChoice(u_39);
    }
  else
    {
      t = t_39;
      {
        ATerm v_39 = t;
        int w_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Option_3_0(s_7, v_7, y_7, t);
            LocalPopChoice(w_39);
          }
        else
          {
            t = v_39;
            {
              ATerm x_39 = t;
              int z_39 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = ArgOption_3_0(b_8, c_8, f_8, t);
                  LocalPopChoice(z_39);
                }
              else
                {
                  t = x_39;
                  {
                    ATerm s_40 = t;
                    int t_40 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Option_3_0(g_8, i_8, j_8, t);
                        LocalPopChoice(t_40);
                      }
                    else
                      {
                        t = s_40;
                        {
                          ATerm y_40 = t;
                          int z_40 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Option_3_0(k_8, n_8, o_8, t);
                              LocalPopChoice(z_40);
                            }
                          else
                            {
                              t = y_40;
                              t = Option_3_0(p_8, r_8, s_8, t);
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
  ATerm e_64 = NULL,h_64 = NULL,i_64 = NULL,j_64 = NULL;
  t = report_run_time_0_0(t);
  t = term_q_15;
  t = whoami_0_0(t);
  e_64 = t;
  t = term_k_25;
  i_64 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_a_41), e_64);
  j_64 = t;
  t = SSL_printnl(i_64, j_64);
  t = term_m_17;
  h_64 = t;
  t = SSL_exit(h_64);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm m_64 = NULL,o_64 = NULL;
  t = term_f_14;
  m_64 = t;
  t = term_b_41;
  o_64 = t;
  t = term_c_41;
  t = q_10(m_64, o_64, t);
  return(t);
}
static ATerm l_10 (ATerm u_55, ATerm v_55, ATerm t)
{
  ATerm d_41 = t;
  int f_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(u_55, v_55);
      LocalPopChoice(f_41);
    }
  else
    {
      t = d_41;
      t = SSL_addr(u_55, v_55);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm j_120 (ATerm), ATerm k_120 (ATerm), ATerm t)
{
  ATerm q_64 = NULL,s_64 = NULL,t_64 = NULL;
  q_64 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = q_64;
      t = j_120(t);
    }
  else
    {
      ATerm y_64 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          s_64 = ATgetFirst((ATermList) t);
          t_64 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = t_64;
      t = foldr_2_0(j_120, k_120, t);
      y_64 = t;
      t = (ATerm) ATmakeAppl(sym__2, s_64, y_64);
      t = k_120(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm v_8 (ATerm t)
{
  t = term_a_37;
  return(t);
}
static ATerm h_9 (ATerm t)
{
  ATerm u_18 = NULL,v_18 = NULL;
  if(match_cons(t, sym__2))
    {
      u_18 = ATgetArgument(t, 0);
      v_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_10(u_18, v_18, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm b_65 = NULL,q_18 = NULL,r_18 = NULL;
  t = times_0_0(t);
  r_18 = t;
  t = SSL_explode_term(r_18);
  if(match_cons(t, sym__2))
    {
      ATerm k_41 = ATgetArgument(t, 0);
      q_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_18;
  t = foldr_2_0(v_8, h_9, t);
  b_65 = t;
  t = SSL_TicksToSeconds(b_65);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm m_65 = NULL,n_65 = NULL,o_65 = NULL;
  m_65 = t;
  if(match_cons(t, sym__2))
    {
      n_65 = ATgetArgument(t, 0);
      o_65 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm l_41 = t;
    int n_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_65;
        if((n_65 != t))
          {
            _fail(t);
          }
        t = m_65;
        LocalPopChoice(n_41);
      }
    else
      {
        t = l_41;
        t = (ATerm) ATmakeAppl(sym__2, n_65, o_65);
        {
          ATerm r_41 = t;
          int w_41 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(n_65, o_65);
              LocalPopChoice(w_41);
            }
          else
            {
              t = r_41;
              t = SSL_gtr(n_65, o_65);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, n_65, o_65);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm h_129 (ATerm), ATerm t)
{
  ATerm s_65 = NULL;
  s_65 = t;
  {
    ATerm y_41 = t;
    int c_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_65 = NULL,v_65 = NULL,w_65 = NULL;
        t = term_f_14;
        v_65 = t;
        t = term_p_17;
        w_65 = t;
        t = term_s_17;
        t = q_10(v_65, w_65, t);
        u_65 = t;
        t = (ATerm) ATmakeAppl(sym__2, u_65, term_m_17);
        t = geq_0_0(t);
        t = s_65;
        t = h_129(t);
        LocalPopChoice(c_42);
      }
    else
      {
        t = y_41;
        t = s_65;
      }
  }
  return(t);
}
static ATerm t_9 (ATerm t)
{
  ATerm y_65 = NULL,z_65 = NULL,b_66 = NULL,c_66 = NULL;
  t = run_time_0_0(t);
  y_65 = t;
  t = term_q_15;
  t = whoami_0_0(t);
  z_65 = t;
  t = term_k_25;
  b_66 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_f_42), y_65), term_w_17), z_65);
  c_66 = t;
  t = SSL_printnl(b_66, c_66);
  t = (ATerm) ATmakeAppl(sym__2, term_k_25, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_f_42), y_65), term_w_17), z_65));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(t_9, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm d_66 = NULL;
  t = report_run_time_0_0(t);
  t = term_a_37;
  d_66 = t;
  t = SSL_exit(d_66);
  return(t);
}
static ATerm w_9 (ATerm t)
{
  ATerm x_66 = NULL,y_66 = NULL;
  y_66 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = y_66;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          x_66 = ATgetArgument(t, 0);
          {
            ATerm q_19 = NULL,f_11 = NULL;
            t = SSLgetAnnotations(y_66);
            q_19 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, x_66);
            f_11 = t;
            t = SSLsetAnnotations(f_11, q_19);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = y_66;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm v_130 (ATerm), ATerm t)
{
  ATerm g_42 = t;
  int h_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_66 = NULL,k_66 = NULL;
      t = term_f_14;
      j_66 = t;
      t = term_i_42;
      k_66 = t;
      t = term_j_42;
      t = q_10(j_66, k_66, t);
      LocalPopChoice(h_42);
    }
  else
    {
      t = g_42;
      t = fetch_1_0(w_9, t);
    }
  t = v_130(t);
  return(t);
}
static ATerm u_10 (ATerm d_62, ATerm e_62, ATerm f_62, ATerm t)
{
  ATerm a_67 = NULL;
  t = SSL_hashtable_put(f_62, d_62, e_62);
  a_67 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, a_67);
  return(t);
}
static ATerm v_10 (ATerm g_62, ATerm h_62, ATerm t)
{
  t = SSL_hashtable_get(h_62, g_62);
  return(t);
}
ATerm lookup_table_0_1 (ATerm x_58, ATerm t)
{
  ATerm u_67 = NULL;
  t = table_hashtable_0_0(t);
  u_67 = t;
  {
    ATerm k_42 = t;
    int p_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_20 = NULL;
        t = u_67;
        if(match_cons(t, sym_Hashtable_1))
          {
            c_20 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = v_10(x_58, c_20, t);
        LocalPopChoice(p_42);
      }
    else
      {
        t = k_42;
        {
          ATerm l_20 = NULL;
          t = x_58;
          t = table_create_0_0(t);
          t = u_67;
          if(match_cons(t, sym_Hashtable_1))
            {
              l_20 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = v_10(x_58, l_20, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm l_62, ATerm m_62, ATerm t)
{
  ATerm x_67 = NULL;
  t = SSL_hashtable_create(l_62, m_62);
  x_67 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, x_67);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm y_67 = NULL,z_67 = NULL,a_68 = NULL,c_68 = NULL,d_68 = NULL;
  y_67 = t;
  t = term_q_42;
  c_68 = t;
  t = term_t_42;
  d_68 = t;
  t = y_67;
  t = new_hashtable_0_2(c_68, d_68, t);
  z_67 = t;
  t = y_67;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      a_68 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_10(y_67, z_67, a_68, t);
  t = y_67;
  return(t);
}
static ATerm n_10 (ATerm i_62, ATerm j_62, ATerm t)
{
  ATerm e_68 = NULL;
  t = SSL_hashtable_remove(j_62, i_62);
  e_68 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, e_68);
  return(t);
}
static ATerm o_10 (ATerm n_62, ATerm t)
{
  ATerm f_68 = NULL;
  t = SSL_hashtable_destroy(n_62);
  f_68 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, f_68);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm g_68 = NULL;
  t = SSL_table_hashtable();
  g_68 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, g_68);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm h_68 = NULL,i_68 = NULL,j_68 = NULL,k_68 = NULL;
  h_68 = t;
  t = table_hashtable_0_0(t);
  i_68 = t;
  t = lookup_table_0_1(h_68, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      k_68 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = o_10(k_68, t);
  t = i_68;
  if(match_cons(t, sym_Hashtable_1))
    {
      j_68 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = n_10(h_68, j_68, t);
  t = h_68;
  return(t);
}
ATerm reverse_acc_2_0 (ATerm h_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm m_68 = NULL,n_68 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_68 = ATgetFirst((ATermList) t);
      n_68 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm r_68 = NULL,s_68 = NULL;
        static ATerm b_10 (ATerm t);
        static ATerm b_10 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(r_68)), not_null(s_68));
          return(t);
        }
        t = n_68;
        t = j_0(t);
        if(((r_68 != NULL) && (r_68 != t)))
          _fail(t);
        else
          r_68 = t;
        t = m_68;
        t = h_0(t);
        if(((s_68 != NULL) && (s_68 != t)))
          _fail(t);
        else
          s_68 = t;
        t = n_68;
        t = reverse_acc_2_0(h_0, b_10, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_q_15;
      t = j_0(t);
    }
  return(t);
}
static ATerm e_10 (ATerm t)
{
  ATerm y_68 = NULL,z_68 = NULL,a_69 = NULL,k_11 = NULL;
  a_69 = t;
  if(match_cons(t, sym_Program_1))
    {
      z_68 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_69);
  y_68 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, z_68);
  k_11 = t;
  t = SSLsetAnnotations(k_11, y_68);
  return(t);
}
static ATerm f_10 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm m_10 (ATerm t)
{
  ATerm c_69 = NULL;
  c_69 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, c_69), term_v_42);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm u_68 = NULL,v_68 = NULL;
  ATerm o_43 = t;
  int p_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_68 = NULL,x_68 = NULL;
      t = term_f_14;
      w_68 = t;
      t = term_b_41;
      x_68 = t;
      t = term_c_41;
      t = q_10(w_68, x_68, t);
      LocalPopChoice(p_43);
    }
  else
    {
      t = o_43;
      t = fetch_1_0(e_10, t);
    }
  t = term_t_43;
  t = echo_0_0(t);
  t = term_v_37;
  u_68 = t;
  t = term_c_38;
  v_68 = t;
  t = term_u_43;
  t = q_10(u_68, v_68, t);
  t = reverse_acc_2_0(_id, f_10, t);
  t = map_1_0(m_10, t);
  return(t);
}
ATerm fetch_1_0 (ATerm u_113 (ATerm), ATerm t)
{
  static ATerm z_69 (ATerm t);
  static ATerm z_69 (ATerm t)
  {
    ATerm w_69 = NULL,x_69 = NULL,y_69 = NULL;
    w_69 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        x_69 = ATgetFirst((ATermList) t);
        y_69 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm v_43 = t;
      int a_44 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm x_20 = NULL,e_21 = NULL,n_11 = NULL;
          t = SSLgetAnnotations(w_69);
          x_20 = t;
          t = x_69;
          t = u_113(t);
          e_21 = t;
          t = (ATerm) ATinsert(CheckATermList(y_69), e_21);
          n_11 = t;
          t = SSLsetAnnotations(n_11, x_20);
          LocalPopChoice(a_44);
        }
      else
        {
          t = v_43;
          {
            ATerm d_22 = NULL,j_22 = NULL,y_11 = NULL;
            t = SSLgetAnnotations(w_69);
            d_22 = t;
            t = y_69;
            t = z_69(t);
            j_22 = t;
            t = (ATerm) ATinsert(CheckATermList(j_22), x_69);
            y_11 = t;
            t = SSLsetAnnotations(y_11, d_22);
          }
        }
    }
    return(t);
  }
  t = z_69(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm d_70 = NULL,e_70 = NULL,f_70 = NULL;
  d_70 = t;
  {
    ATerm b_44 = t;
    int c_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = d_70;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm d_44 = ATgetFirst((ATermList) t);
                ATerm g_44 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = d_70;
          }
        LocalPopChoice(c_44);
      }
    else
      {
        t = b_44;
        t = (ATerm) ATinsert(ATempty, d_70);
      }
  }
  e_70 = t;
  t = term_m_14;
  f_70 = t;
  t = SSL_printnl(f_70, e_70);
  t = d_70;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm j_70 = NULL,k_70 = NULL;
  t = term_f_14;
  j_70 = t;
  t = term_b_41;
  k_70 = t;
  t = term_c_41;
  t = q_10(j_70, k_70, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm p_10 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm s_10 (ATerm t)
{
  ATerm l_70 = NULL,m_70 = NULL;
  t = term_h_44;
  l_70 = t;
  t = term_q_15;
  m_70 = t;
  t = term_i_44;
  t = t_10(l_70, m_70, t);
  return(t);
}
static ATerm w_10 (ATerm t)
{
  t = term_j_44;
  return(t);
}
static ATerm x_10 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm z_10 (ATerm t)
{
  ATerm n_70 = NULL,o_70 = NULL,p_70 = NULL,q_70 = NULL;
  t = term_h_44;
  p_70 = t;
  t = term_q_15;
  q_70 = t;
  t = term_i_44;
  t = t_10(p_70, q_70, t);
  t = term_k_44;
  n_70 = t;
  t = term_q_15;
  o_70 = t;
  t = term_l_44;
  t = t_10(n_70, o_70, t);
  t = term_m_44;
  return(t);
}
static ATerm b_11 (ATerm t)
{
  t = term_n_44;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm o_44 = t;
  int p_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(p_10, s_10, w_10, t);
      LocalPopChoice(p_44);
    }
  else
    {
      t = o_44;
      t = Option_3_0(x_10, z_10, b_11, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm e_85 (ATerm), ATerm f_85 (ATerm), ATerm t)
{
  ATerm r_70 = NULL,s_70 = NULL,t_70 = NULL,u_70 = NULL,v_70 = NULL,w_70 = NULL,a_15 = NULL;
  w_70 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_70 = ATgetFirst((ATermList) t);
      t_70 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_70);
  r_70 = t;
  t = s_70;
  t = e_85(t);
  u_70 = t;
  t = t_70;
  t = f_85(t);
  v_70 = t;
  t = (ATerm) ATinsert(CheckATermList(v_70), u_70);
  a_15 = t;
  t = SSLsetAnnotations(a_15, r_70);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm h_133 (ATerm), ATerm t)
{
  ATerm b_71 = NULL,c_71 = NULL,d_71 = NULL,e_71 = NULL,g_71 = NULL,h_71 = NULL,g_15 = NULL;
  b_71 = t;
  {
    ATerm q_44 = t;
    int r_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_s_44;
        t = h_133(t);
        LocalPopChoice(r_44);
      }
    else
      {
        t = q_44;
      }
  }
  t = b_71;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      d_71 = ATgetFirst((ATermList) t);
      e_71 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_71);
  c_71 = t;
  t = term_b_41;
  h_71 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_41, d_71);
  t = t_10(h_71, d_71, t);
  t = e_71;
  {
    static ATerm u_71 (ATerm t);
    static ATerm u_71 (ATerm t)
    {
      ATerm t_44 = t;
      int w_44 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm x_44 = t;
          int y_44 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm k_71 = NULL;
              k_71 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = k_71;
              LocalPopChoice(y_44);
            }
          else
            {
              t = x_44;
              t = h_133(t);
              t = Cons_2_0(_id, u_71, t);
            }
          LocalPopChoice(w_44);
        }
      else
        {
          t = t_44;
          {
            ATerm n_71 = NULL,q_71 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                n_71 = ATgetFirst((ATermList) t);
                q_71 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(q_71), (ATerm) ATmakeAppl(sym_Undefined_1, n_71));
          }
        }
      return(t);
    }
    t = u_71(t);
  }
  g_71 = t;
  t = (ATerm) ATinsert(CheckATermList(g_71), (ATerm) ATmakeAppl(sym_Program_1, d_71));
  g_15 = t;
  t = SSLsetAnnotations(g_15, c_71);
  return(t);
}
static ATerm g_11 (ATerm t)
{
  ATerm l_72 = NULL;
  l_72 = t;
  if(match_string(t, "--help"))
    {
      t = l_72;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = l_72;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = l_72;
        }
    }
  return(t);
}
static ATerm h_11 (ATerm t)
{
  ATerm r_72 = NULL,s_72 = NULL;
  t = term_i_42;
  r_72 = t;
  t = term_q_15;
  s_72 = t;
  t = term_z_44;
  t = t_10(r_72, s_72, t);
  t = term_a_45;
  return(t);
}
static ATerm i_11 (ATerm t)
{
  t = term_b_45;
  return(t);
}
static ATerm j_11 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm g_133 (ATerm), ATerm t)
{
  ATerm d_72 = NULL,e_72 = NULL,f_72 = NULL,g_72 = NULL,h_72 = NULL,i_72 = NULL,j_72 = NULL,k_72 = NULL;
  f_72 = t;
  t = term_v_37;
  g_72 = t;
  t = term_d_45;
  t = lookup_table_0_1(g_72, t);
  k_72 = t;
  t = term_c_38;
  h_72 = t;
  t = (ATerm) ATempty;
  i_72 = t;
  t = k_72;
  if(match_cons(t, sym_Hashtable_1))
    {
      j_72 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_10(h_72, i_72, j_72, t);
  t = f_72;
  {
    static ATerm e_11 (ATerm t);
    static ATerm e_11 (ATerm t)
    {
      ATerm e_45 = t;
      int g_45 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = g_133(t);
          LocalPopChoice(g_45);
        }
      else
        {
          t = e_45;
          {
            ATerm h_45 = t;
            int j_45 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(g_11, h_11, i_11, t);
                LocalPopChoice(j_45);
              }
            else
              {
                t = h_45;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(e_11, t);
  }
  {
    ATerm n_45 = t;
    int u_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_73 = NULL;
        e_73 = t;
        {
          ATerm v_45 = t;
          int w_45 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm s_22 = NULL;
              t = e_73;
              {
                ATerm x_45 = t;
                int y_45 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm t_22 = NULL,u_22 = NULL;
                    t = term_f_14;
                    t_22 = t;
                    t = term_i_42;
                    u_22 = t;
                    t = term_j_42;
                    t = q_10(t_22, u_22, t);
                    LocalPopChoice(y_45);
                  }
                else
                  {
                    t = x_45;
                    t = fetch_1_0(j_11, t);
                  }
              }
              t = e_73;
              t = default_system_usage_0_0(t);
              t = term_a_37;
              s_22 = t;
              t = SSL_exit(s_22);
              LocalPopChoice(w_45);
            }
          else
            {
              t = v_45;
              {
                ATerm y_22 = NULL,a_23 = NULL,b_23 = NULL;
                t = term_f_14;
                a_23 = t;
                t = term_h_44;
                b_23 = t;
                t = term_z_45;
                t = q_10(a_23, b_23, t);
                t = e_73;
                t = default_system_about_0_0(t);
                t = term_a_37;
                y_22 = t;
                t = SSL_exit(y_22);
              }
            }
        }
        LocalPopChoice(u_45);
      }
    else
      {
        t = n_45;
        {
          ATerm a_46 = t;
          int b_46 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm f_73 = NULL,g_73 = NULL,h_73 = NULL;
              static ATerm l_11 (ATerm t);
              static ATerm l_11 (ATerm t)
              {
                ATerm i_73 = NULL,j_73 = NULL,k_73 = NULL,j_15 = NULL;
                k_73 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    j_73 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(k_73);
                i_73 = t;
                t = j_73;
                if(((d_72 != NULL) && (d_72 != t)))
                  _fail(t);
                else
                  d_72 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, j_73);
                j_15 = t;
                t = SSLsetAnnotations(j_15, i_73);
                return(t);
              }
              t = fetch_1_0(l_11, t);
              t = term_k_25;
              g_73 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(d_72)), term_c_46);
              h_73 = t;
              t = SSL_printnl(g_73, h_73);
              t = (ATerm) ATmakeAppl(sym__2, term_k_25, (ATerm) ATinsert(ATinsert(ATempty, not_null(d_72)), term_c_46));
              t = default_system_usage_0_0(t);
              t = term_m_17;
              f_73 = t;
              t = SSL_exit(f_73);
              LocalPopChoice(b_46);
            }
          else
            {
              t = a_46;
            }
        }
      }
  }
  e_72 = t;
  t = term_v_37;
  t = table_destroy_0_0(t);
  t = e_72;
  return(t);
}
ATerm option_wrap_4_0 (ATerm x_130 (ATerm), ATerm y_130 (ATerm), ATerm z_130 (ATerm), ATerm a_131 (ATerm), ATerm t)
{
  ATerm p_73 = NULL,q_73 = NULL,r_73 = NULL,s_73 = NULL,t_73 = NULL;
  t = parse_options_1_0(x_130, t);
  p_73 = t;
  t = term_d_46;
  t = table_create_0_0(t);
  t = term_d_46;
  q_73 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_d_46, term_e_46, p_73);
  t = lookup_table_0_1(q_73, t);
  t_73 = t;
  t = term_e_46;
  r_73 = t;
  t = t_73;
  if(match_cons(t, sym_Hashtable_1))
    {
      s_73 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_10(r_73, p_73, s_73, t);
  t = p_73;
  t = z_130(t);
  {
    ATerm f_46 = t;
    int g_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(y_130, t);
        LocalPopChoice(g_46);
      }
    else
      {
        t = f_46;
        {
          ATerm h_46 = t;
          int m_46 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = a_131(t);
              t = report_success_0_0(t);
              LocalPopChoice(m_46);
            }
          else
            {
              t = h_46;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm m_11 (ATerm t)
{
  ATerm n_46 = t;
  int o_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = pack_stratego_options_0_0(t);
      LocalPopChoice(o_46);
    }
  else
    {
      t = n_46;
      {
        ATerm p_46 = t;
        int v_46 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = input_option_0_0(t);
            LocalPopChoice(v_46);
          }
        else
          {
            t = p_46;
            {
              ATerm w_46 = t;
              int y_46 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = output_option_0_0(t);
                  LocalPopChoice(y_46);
                }
              else
                {
                  t = w_46;
                  {
                    ATerm z_46 = t;
                    int e_47 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Option_3_0(p_11, q_11, r_11, t);
                        LocalPopChoice(e_47);
                      }
                    else
                      {
                        t = z_46;
                        {
                          ATerm f_47 = t;
                          int g_47 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = verbose_option_0_0(t);
                              LocalPopChoice(g_47);
                            }
                          else
                            {
                              t = f_47;
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
static ATerm p_11 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm q_11 (ATerm t)
{
  ATerm z_73 = NULL,a_74 = NULL;
  t = term_h_47;
  z_73 = t;
  t = term_q_15;
  a_74 = t;
  t = term_i_47;
  t = t_10(z_73, a_74, t);
  t = term_j_47;
  return(t);
}
static ATerm r_11 (ATerm t)
{
  t = term_k_47;
  return(t);
}
static ATerm x_11 (ATerm t)
{
  t = get_filename_0_0(t);
  t = basename_1_0(_id, t);
  return(t);
}
static ATerm z_11 (ATerm t)
{
  ATerm l_74 = NULL,m_74 = NULL,n_74 = NULL,o_74 = NULL,p_74 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm m_47 = ATgetArgument(t, 0);
      if(match_cons(m_47, sym_Stream_1))
        {
          o_74 = ATgetArgument(m_47, 0);
        }
      else
        _fail(t);
      p_74 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_8(o_74, p_74, t);
  l_74 = t;
  t = term_n_23;
  m_74 = t;
  t = l_74;
  if(match_cons(t, sym_Stream_1))
    {
      n_74 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_n_23, l_74);
  t = w_8(m_74, n_74, t);
  return(t);
}
static ATerm a_12 (ATerm t)
{
  ATerm s_74 = NULL,t_74 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm n_47 = ATgetArgument(t, 0);
      if(match_cons(n_47, sym_Stream_1))
        {
          s_74 = ATgetArgument(n_47, 0);
        }
      else
        _fail(t);
      t_74 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_8(s_74, t_74, t);
  return(t);
}
ATerm pack_stratego_0_0 (ATerm t)
{
  ATerm x_73 = NULL,y_73 = NULL;
  static ATerm o_11 (ATerm t);
  static ATerm o_11 (ATerm t)
  {
    static ATerm s_11 (ATerm t);
    static ATerm s_11 (ATerm t)
    {
      ATerm c_74 = NULL;
      ATerm p_47 = t;
      int q_47 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm d_74 = NULL,e_74 = NULL,f_74 = NULL;
          t = term_f_14;
          e_74 = t;
          t = term_b_29;
          f_74 = t;
          t = term_r_47;
          t = q_10(e_74, f_74, t);
          d_74 = t;
          t = (ATerm) ATmakeAppl(sym_FILE_1, d_74);
          LocalPopChoice(q_47);
        }
      else
        {
          t = p_47;
          t = term_s_14;
        }
      if(match_cons(t, sym_FILE_1))
        {
          c_74 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = c_10(c_74, t);
      if(match_cons(t, sym__2))
        {
          if(((x_73 != NULL) && (x_73 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            x_73 = ATgetArgument(t, 0);
          if(((y_73 != NULL) && (y_73 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            y_73 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm s_47 = t;
        int t_47 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_74 = NULL,h_74 = NULL,i_74 = NULL,j_74 = NULL;
            t = term_f_14;
            i_74 = t;
            t = term_i_39;
            j_74 = t;
            t = term_v_47;
            t = q_10(i_74, j_74, t);
            t = x_73;
            t = map_1_0(x_11, t);
            h_74 = t;
            t = xtc_new_file_0_0(t);
            g_74 = t;
            t = (ATerm) ATmakeAppl(sym__2, g_74, h_74);
            t = y_8(z_11, g_74, h_74, t);
            t = (ATerm) ATmakeAppl(sym_FILE_1, g_74);
            LocalPopChoice(t_47);
          }
        else
          {
            t = s_47;
            {
              ATerm q_74 = NULL;
              ATerm w_47 = t;
              int x_47 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = x_73;
                  t = create_dep_file_0_0(t);
                  LocalPopChoice(x_47);
                }
              else
                {
                  t = w_47;
                }
              t = y_73;
              t = xtc_new_file_0_0(t);
              q_74 = t;
              t = (ATerm) ATmakeAppl(sym__2, q_74, y_73);
              t = y_8(a_12, q_74, y_73, t);
              t = (ATerm) ATmakeAppl(sym_FILE_1, q_74);
            }
          }
      }
      t = xtc_write_output_0_0(t);
      return(t);
    }
    t = xtc_temp_files_1_0(s_11, t);
    return(t);
  }
  t = option_wrap_4_0(m_11, default_usage_0_0, _id, o_11, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = pack_stratego_0_0(t);
  return(t);
}
