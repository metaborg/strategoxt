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
ATerm term_f_48;
ATerm term_b_48;
ATerm term_t_47;
ATerm term_s_47;
ATerm term_q_47;
ATerm term_p_47;
ATerm term_r_46;
ATerm term_q_46;
ATerm term_p_46;
ATerm term_f_46;
ATerm term_n_45;
ATerm term_m_45;
ATerm term_l_45;
ATerm term_k_45;
ATerm term_d_45;
ATerm term_y_44;
ATerm term_x_44;
ATerm term_w_44;
ATerm term_v_44;
ATerm term_u_44;
ATerm term_r_44;
ATerm term_m_44;
ATerm term_f_43;
ATerm term_e_43;
ATerm term_b_43;
ATerm term_y_42;
ATerm term_w_42;
ATerm term_r_42;
ATerm term_p_42;
ATerm term_k_42;
ATerm term_g_41;
ATerm term_d_41;
ATerm term_c_41;
ATerm term_z_39;
ATerm term_y_39;
ATerm term_w_39;
ATerm term_v_39;
ATerm term_u_39;
ATerm term_s_39;
ATerm term_r_39;
ATerm term_q_39;
ATerm term_m_39;
ATerm term_l_39;
ATerm term_k_39;
ATerm term_j_39;
ATerm term_m_38;
ATerm term_j_38;
ATerm term_i_38;
ATerm term_g_38;
ATerm term_u_37;
ATerm term_t_37;
ATerm term_s_37;
ATerm term_r_37;
ATerm term_q_37;
ATerm term_p_37;
ATerm term_o_37;
ATerm term_n_37;
ATerm term_m_37;
ATerm term_j_37;
ATerm term_i_37;
ATerm term_d_37;
ATerm term_x_36;
ATerm term_p_34;
ATerm term_l_32;
ATerm term_k_32;
ATerm term_i_32;
ATerm term_h_32;
ATerm term_g_32;
ATerm term_f_32;
ATerm term_e_32;
ATerm term_b_32;
ATerm term_s_30;
ATerm term_p_30;
ATerm term_o_30;
ATerm term_j_30;
ATerm term_i_30;
ATerm term_y_29;
ATerm term_j_29;
ATerm term_i_29;
ATerm term_h_29;
ATerm term_g_29;
ATerm term_b_29;
ATerm term_u_28;
ATerm term_t_28;
ATerm term_p_28;
ATerm term_k_28;
ATerm term_j_28;
ATerm term_i_28;
ATerm term_g_28;
ATerm term_d_28;
ATerm term_c_28;
ATerm term_u_27;
ATerm term_t_27;
ATerm term_q_27;
ATerm term_p_27;
ATerm term_o_27;
ATerm term_n_27;
ATerm term_f_27;
ATerm term_a_27;
ATerm term_z_26;
ATerm term_y_26;
ATerm term_x_26;
ATerm term_r_25;
ATerm term_q_25;
ATerm term_e_25;
ATerm term_a_25;
ATerm term_w_24;
ATerm term_v_24;
ATerm term_u_24;
ATerm term_t_24;
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
ATerm term_v_23;
ATerm term_u_23;
ATerm term_t_23;
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
  ATprotect(&(term_t_23));
  term_t_23 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_23, term_r_23, term_s_23);
  ATprotect(&(term_u_23));
  term_u_23 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_v_23));
  term_v_23 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_w_23));
  term_w_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_x_23));
  term_x_23 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_23, term_v_23, term_w_23);
  ATprotect(&(term_y_23));
  term_y_23 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_z_23));
  term_z_23 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_a_24));
  term_a_24 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_b_24));
  term_b_24 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_23, term_z_23, term_a_24);
  ATprotect(&(term_c_24));
  term_c_24 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_d_24));
  term_d_24 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_e_24));
  term_e_24 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_f_24));
  term_f_24 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_24, term_d_24, term_e_24);
  ATprotect(&(term_g_24));
  term_g_24 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_h_24));
  term_h_24 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_i_24));
  term_i_24 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_j_24));
  term_j_24 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_24, term_h_24, term_i_24);
  ATprotect(&(term_k_24));
  term_k_24 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_l_24));
  term_l_24 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_m_24));
  term_m_24 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_n_24));
  term_n_24 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_24, term_l_24, term_m_24);
  ATprotect(&(term_o_24));
  term_o_24 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_p_24));
  term_p_24 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_t_24));
  term_t_24 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_u_24));
  term_u_24 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_24, term_p_24, term_t_24);
  ATprotect(&(term_v_24));
  term_v_24 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_w_24));
  term_w_24 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_a_25));
  term_a_25 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_e_25));
  term_e_25 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_24, term_w_24, term_a_25);
  ATprotect(&(term_q_25));
  term_q_25 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_r_25));
  term_r_25 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_x_26));
  term_x_26 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_y_26));
  term_y_26 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_z_26));
  term_z_26 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_a_27));
  term_a_27 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_f_27));
  term_f_27 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_n_27));
  term_n_27 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_o_27));
  term_o_27 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_p_27));
  term_p_27 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_q_27));
  term_q_27 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_t_27));
  term_t_27 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_u_27));
  term_u_27 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_c_28));
  term_c_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_d_28));
  term_d_28 = (ATerm) ATmakeAppl(sym__2, term_f_14, term_c_28);
  ATprotect(&(term_g_28));
  term_g_28 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_i_28));
  term_i_28 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_j_28));
  term_j_28 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_k_28));
  term_k_28 = (ATerm) ATmakeAppl(sym__2, term_t_27, term_j_28);
  ATprotect(&(term_p_28));
  term_p_28 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_t_28));
  term_t_28 = (ATerm) ATmakeAppl(sym__2, term_t_27, term_u_27);
  ATprotect(&(term_u_28));
  term_u_28 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_b_29));
  term_b_29 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_g_29));
  term_g_29 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_h_29));
  term_h_29 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_i_29));
  term_i_29 = (ATerm) ATmakeInt(-1);
  ATprotect(&(term_j_29));
  term_j_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_y_29));
  term_y_29 = (ATerm) ATmakeAppl(ATmakeSymbol("parse error in ", 0, ATtrue));
  ATprotect(&(term_i_30));
  term_i_30 = (ATerm) ATmakeAppl(ATmakeSymbol("parse-stratego", 0, ATtrue));
  ATprotect(&(term_j_30));
  term_j_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--asfix", 0, ATtrue));
  ATprotect(&(term_o_30));
  term_o_30 = (ATerm) ATmakeAppl(sym__2, term_f_14, term_j_30);
  ATprotect(&(term_p_30));
  term_p_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue));
  ATprotect(&(term_s_30));
  term_s_30 = (ATerm) ATmakeAppl(sym__2, term_f_14, term_p_30);
  ATprotect(&(term_b_32));
  term_b_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--slack", 0, ATtrue));
  ATprotect(&(term_e_32));
  term_e_32 = (ATerm) ATmakeAppl(sym__2, term_f_14, term_b_32);
  ATprotect(&(term_f_32));
  term_f_32 = (ATerm) ATmakeAppl(ATmakeSymbol("*** module ", 0, ATtrue));
  ATprotect(&(term_g_32));
  term_g_32 = (ATerm) ATmakeAppl(ATmakeSymbol(" not found", 0, ATtrue));
  ATprotect(&(term_h_32));
  term_h_32 = (ATerm) ATmakeAppl(ATmakeSymbol(" reading ", 0, ATtrue));
  ATprotect(&(term_i_32));
  term_i_32 = (ATerm) ATmakeAppl(ATmakeSymbol("rtree", 0, ATtrue));
  ATprotect(&(term_k_32));
  term_k_32 = (ATerm) ATmakeAppl(ATmakeSymbol("str", 0, ATtrue));
  ATprotect(&(term_l_32));
  term_l_32 = (ATerm) ATmakeAppl(ATmakeSymbol("cr", 0, ATtrue));
  ATprotect(&(term_p_34));
  term_p_34 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_x_36));
  term_x_36 = (ATerm) ATmakeAppl(sym__2, term_l_15, term_b_15);
  ATprotect(&(term_d_37));
  term_d_37 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_i_37));
  term_i_37 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_j_37));
  term_j_37 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_m_37));
  term_m_37 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_n_37));
  term_n_37 = (ATerm) ATmakeAppl(sym__2, term_p_17, term_m_37);
  ATprotect(&(term_o_37));
  term_o_37 = (ATerm) ATmakeAppl(sym_Verbose_1, term_m_37);
  ATprotect(&(term_p_37));
  term_p_37 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_q_37));
  term_q_37 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_r_37));
  term_r_37 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_s_37));
  term_s_37 = (ATerm) ATmakeAppl(sym__2, term_r_37, term_q_15);
  ATprotect(&(term_t_37));
  term_t_37 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_u_37));
  term_u_37 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_g_38));
  term_g_38 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_i_38));
  term_i_38 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_j_38));
  term_j_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_m_38));
  term_m_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_j_39));
  term_j_39 = (ATerm) ATmakeAppl(ATmakeSymbol("-I d | --Include d   Include modules from directory d", 0, ATtrue));
  ATprotect(&(term_k_39));
  term_k_39 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_l_39));
  term_l_39 = (ATerm) ATmakeAppl(sym__2, term_g_16, term_k_39);
  ATprotect(&(term_m_39));
  term_m_39 = (ATerm) ATmakeAppl(ATmakeSymbol("--nodep              Don't create dependency file", 0, ATtrue));
  ATprotect(&(term_q_39));
  term_q_39 = (ATerm) ATmakeAppl(ATmakeSymbol("--dep f | -d f       Write dependency to file f", 0, ATtrue));
  ATprotect(&(term_r_39));
  term_r_39 = (ATerm) ATmakeAppl(ATmakeSymbol("--imports", 0, ATtrue));
  ATprotect(&(term_s_39));
  term_s_39 = (ATerm) ATmakeAppl(sym__2, term_r_39, term_q_15);
  ATprotect(&(term_u_39));
  term_u_39 = (ATerm) ATmakeAppl(ATmakeSymbol("--imports            Produce a list of imported modules only", 0, ATtrue));
  ATprotect(&(term_v_39));
  term_v_39 = (ATerm) ATmakeAppl(sym__2, term_b_32, term_q_15);
  ATprotect(&(term_w_39));
  term_w_39 = (ATerm) ATmakeAppl(ATmakeSymbol("--slack              Continue when module is not found", 0, ATtrue));
  ATprotect(&(term_y_39));
  term_y_39 = (ATerm) ATmakeAppl(sym__2, term_j_30, term_k_39);
  ATprotect(&(term_z_39));
  term_z_39 = (ATerm) ATmakeAppl(ATmakeSymbol("--asfix              Do not implode the concrete syntax parts", 0, ATtrue));
  ATprotect(&(term_c_41));
  term_c_41 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_d_41));
  term_d_41 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_g_41));
  term_g_41 = (ATerm) ATmakeAppl(sym__2, term_f_14, term_d_41);
  ATprotect(&(term_k_42));
  term_k_42 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_p_42));
  term_p_42 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_r_42));
  term_r_42 = (ATerm) ATmakeAppl(sym__2, term_f_14, term_p_42);
  ATprotect(&(term_w_42));
  term_w_42 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_y_42));
  term_y_42 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_b_43));
  term_b_43 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_e_43));
  term_e_43 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_f_43));
  term_f_43 = (ATerm) ATmakeAppl(sym__2, term_g_38, term_i_38);
  ATprotect(&(term_m_44));
  term_m_44 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_r_44));
  term_r_44 = (ATerm) ATmakeAppl(sym__2, term_m_44, term_q_15);
  ATprotect(&(term_u_44));
  term_u_44 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_v_44));
  term_v_44 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_w_44));
  term_w_44 = (ATerm) ATmakeAppl(sym__2, term_v_44, term_q_15);
  ATprotect(&(term_x_44));
  term_x_44 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_y_44));
  term_y_44 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_d_45));
  term_d_45 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_k_45));
  term_k_45 = (ATerm) ATmakeAppl(sym__2, term_p_42, term_q_15);
  ATprotect(&(term_l_45));
  term_l_45 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_m_45));
  term_m_45 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_n_45));
  term_n_45 = (ATerm) ATmakeAppl(sym__3, term_g_38, term_i_38, (ATerm) ATempty);
  ATprotect(&(term_f_46));
  term_f_46 = (ATerm) ATmakeAppl(sym__2, term_f_14, term_m_44);
  ATprotect(&(term_p_46));
  term_p_46 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_q_46));
  term_q_46 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_r_46));
  term_r_46 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_p_47));
  term_p_47 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_q_47));
  term_q_47 = (ATerm) ATmakeAppl(sym__2, term_p_47, term_q_15);
  ATprotect(&(term_s_47));
  term_s_47 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_t_47));
  term_t_47 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_b_48));
  term_b_48 = (ATerm) ATmakeAppl(sym__2, term_f_14, term_j_29);
  ATprotect(&(term_f_48));
  term_f_48 = (ATerm) ATmakeAppl(sym__2, term_f_14, term_r_39);
}
#include <srts/init-stratego-application.h>
ATerm copy_to_1_0 (ATerm p_0 (ATerm), ATerm t);
ATerm last_0_0 (ATerm t);
static ATerm g_10 (ATerm z_25, ATerm u_201, ATerm t);
ATerm at_suffix_1_0 (ATerm u_110 (ATerm), ATerm t);
ATerm split_fetch_1_0 (ATerm m_110 (ATerm), ATerm t);
ATerm list_tokenize_1_0 (ATerm w_119 (ATerm), ATerm t);
static ATerm i_0 (ATerm t);
ATerm string_tokenize_0_0 (ATerm t);
ATerm filemode_0_0 (ATerm t);
static ATerm j_10 (ATerm e_63, ATerm d_63, ATerm t);
static ATerm k_0 (ATerm t);
ATerm xtc_write_output_0_0 (ATerm t);
static ATerm t_8 (ATerm x_24, ATerm y_24, ATerm t);
static ATerm y_8 (ATerm q_109 (ATerm), ATerm w_188, ATerm h_25, ATerm t);
static ATerm o_9 (ATerm m_123 (ATerm), ATerm g_45, ATerm e_45, ATerm t);
ATerm mkstemp_0_0 (ATerm t);
ATerm P__tmpdir_0_0 (ATerm t);
static ATerm n_0 (ATerm t);
ATerm xtc_new_file_0_0 (ATerm t);
static ATerm u_8 (ATerm l_25, ATerm m_25, ATerm t);
static ATerm w_12 (ATerm h_12, ATerm t);
static ATerm x_12 (ATerm j_12, ATerm l_12, ATerm n_12, ATerm t);
static ATerm s_0 (ATerm t);
ATerm open_file_0_0 (ATerm t);
ATerm create_dep_file_0_0 (ATerm t);
static ATerm w_8 (ATerm w_40, ATerm x_40, ATerm t);
static ATerm x_8 (ATerm b_25, ATerm c_25, ATerm t);
ATerm basename_1_0 (ATerm a_121 (ATerm), ATerm t);
ATerm at_suffix_rev_1_0 (ATerm y_110 (ATerm), ATerm t);
ATerm get_filename_0_0 (ATerm t);
ATerm map_1_0 (ATerm z_109 (ATerm), ATerm t);
static ATerm q_10 (ATerm k_58, ATerm l_58, ATerm t);
static ATerm u_0 (ATerm t);
static ATerm y_0 (ATerm t);
ATerm flatten_stratego_0_0 (ATerm t);
ATerm genzip_4_0 (ATerm d_112 (ATerm), ATerm e_112 (ATerm), ATerm f_112 (ATerm), ATerm g_112 (ATerm), ATerm t);
static ATerm z_0 (ATerm t);
static ATerm c_9 (ATerm d_155, ATerm t);
ATerm read_from_0_0 (ATerm t);
ATerm pass_keep_0_0 (ATerm t);
static ATerm d_9 (ATerm y_43, ATerm z_43, ATerm t);
ATerm pass_verbose_0_0 (ATerm t);
static ATerm a_1 (ATerm t);
ATerm xtc_transform_term_2_0 (ATerm q_135 (ATerm), ATerm r_135 (ATerm), ATerm t);
static ATerm e_9 (ATerm n_67, ATerm o_67, ATerm t);
ATerm signal_to_descr_0_0 (ATerm t);
ATerm signal_from_number_0_0 (ATerm t);
ATerm warn_ifsignaled_0_0 (ATerm t);
ATerm fork_0_0 (ATerm t);
ATerm fork_and_wait_1_0 (ATerm n_127 (ATerm), ATerm t);
static ATerm g_9 (ATerm q_61, ATerm t);
ATerm table_getlist_0_0 (ATerm t);
ATerm if_verbose5_1_0 (ATerm g_127 (ATerm), ATerm t);
ATerm if_verbose4_1_0 (ATerm f_127 (ATerm), ATerm t);
ATerm if_verbose6_1_0 (ATerm h_127 (ATerm), ATerm t);
static ATerm i_9 (ATerm k_114 (ATerm), ATerm g_31, ATerm f_31, ATerm t);
static ATerm h_1 (ATerm t);
static ATerm j_9 (ATerm o_57, ATerm p_57, ATerm q_57, ATerm t);
static ATerm k_9 (ATerm y_124 (ATerm), ATerm y_57, ATerm x_57, ATerm t);
static ATerm j_32 (ATerm v_31, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm l_9 (ATerm d_25, ATerm t);
static ATerm h_10 (ATerm a_39, ATerm b_39, ATerm t);
static ATerm m_9 (ATerm y_40, ATerm z_40, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm m_34 (ATerm y_32, ATerm t);
static ATerm n_34 (ATerm c_33, ATerm d_33, ATerm g_33, ATerm t);
static ATerm o_34 (ATerm r_33, ATerm u_33, ATerm v_33, ATerm t);
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
ATerm repeat_2_0 (ATerm n_102 (ATerm), ATerm o_102 (ATerm), ATerm t);
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
static ATerm r_38 (ATerm x_37, ATerm t);
static ATerm n_2 (ATerm t);
static ATerm p_2 (ATerm t);
static ATerm q_2 (ATerm t);
static ATerm v_2 (ATerm t);
ATerm xtc_find_0_0 (ATerm t);
ATerm xtc_command_1_0 (ATerm u_136 (ATerm), ATerm t);
ATerm xtc_transform_file_2_0 (ATerm q_0 (ATerm), ATerm r_0 (ATerm), ATerm t);
static ATerm a_42 (ATerm n_39, ATerm o_39, ATerm p_39, ATerm t);
static ATerm d_42 (ATerm r_41, ATerm s_41, ATerm t);
static ATerm y_2 (ATerm t);
static ATerm z_2 (ATerm t);
static ATerm a_3 (ATerm t);
static ATerm b_3 (ATerm t);
ATerm parse_module_0_0 (ATerm t);
ATerm debug_1_0 (ATerm o_109 (ATerm), ATerm t);
ATerm if_verbose3_1_0 (ATerm e_127 (ATerm), ATerm t);
ATerm fetch_elem_1_0 (ATerm l_110 (ATerm), ATerm t);
static ATerm i_10 (ATerm m_40, ATerm n_40, ATerm t);
ATerm is_relpath_0_0 (ATerm t);
static ATerm p_9 (ATerm p_101 (ATerm), ATerm j_23, ATerm i_23, ATerm t);
static ATerm a_4 (ATerm t);
ATerm get_module_1_0 (ATerm o_101 (ATerm), ATerm t);
static ATerm r_9 (ATerm n_114 (ATerm), ATerm o_114 (ATerm), ATerm k_31, ATerm j_31, ATerm t);
static ATerm s_9 (ATerm f_114 (ATerm), ATerm e_31, ATerm d_31, ATerm t);
static ATerm k_4 (ATerm t);
static ATerm l_4 (ATerm t);
static ATerm m_4 (ATerm t);
static ATerm x_9 (ATerm d_734, ATerm i_734, ATerm y_73, ATerm t);
static ATerm o_4 (ATerm t);
static ATerm p_4 (ATerm t);
static ATerm q_4 (ATerm t);
static ATerm c_49 (ATerm h_47, ATerm i_47, ATerm j_47, ATerm t);
static ATerm s_4 (ATerm t);
ATerm diff_0_0 (ATerm t);
static ATerm z_9 (ATerm q_137 (ATerm), ATerm r_137 (ATerm), ATerm s_137 (ATerm), ATerm q_77, ATerm n_77, ATerm u_77, ATerm r_77, ATerm o_77, ATerm p_77, ATerm t);
ATerm GnNext_3_0 (ATerm q_137 (ATerm), ATerm r_137 (ATerm), ATerm s_137 (ATerm), ATerm t);
ATerm while_not_2_0 (ATerm e_103 (ATerm), ATerm f_103 (ATerm), ATerm t);
ATerm for_3_0 (ATerm h_103 (ATerm), ATerm i_103 (ATerm), ATerm j_103 (ATerm), ATerm t);
static ATerm t_4 (ATerm t);
static ATerm u_4 (ATerm t);
ATerm graph_nodes_roots_3_0 (ATerm n_137 (ATerm), ATerm o_137 (ATerm), ATerm p_137 (ATerm), ATerm t);
ATerm filter_1_0 (ATerm c_118 (ATerm), ATerm t);
static ATerm w_4 (ATerm t);
static ATerm a_5 (ATerm t);
static ATerm d_5 (ATerm t);
static ATerm l_5 (ATerm t);
static ATerm n_5 (ATerm t);
static ATerm o_5 (ATerm t);
static ATerm c_10 (ATerm z_22, ATerm t);
static ATerm k_10 (ATerm w_56, ATerm x_56, ATerm t);
ATerm end_scope_1_0 (ATerm j_123 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm j_102 (ATerm), ATerm k_102 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm i_123 (ATerm), ATerm t);
static ATerm r_5 (ATerm t);
static ATerm u_5 (ATerm t);
static ATerm w_5 (ATerm t);
ATerm xtc_temp_files_1_0 (ATerm d_136 (ATerm), ATerm t);
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
static ATerm t_10 (ATerm s_78, ATerm t_78, ATerm t);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t);
static ATerm v_6 (ATerm t);
static ATerm w_6 (ATerm t);
static ATerm x_6 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm z_6 (ATerm t);
static ATerm b_7 (ATerm t);
static ATerm c_7 (ATerm t);
ATerm input_option_0_0 (ATerm t);
static ATerm r_10 (ATerm r_56, ATerm s_56, ATerm q_56, ATerm t);
ATerm ArgOption_3_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm o_0 (ATerm), ATerm t);
ATerm at_end_1_0 (ATerm q_110 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm k_62 (ATerm w_61, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm d_10 (ATerm z_78, ATerm a_79, ATerm t);
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
static ATerm l_10 (ATerm s_43, ATerm t_43, ATerm t);
ATerm foldr_2_0 (ATerm y_116 (ATerm), ATerm z_116 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm v_8 (ATerm t);
static ATerm h_9 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm c_127 (ATerm), ATerm t);
static ATerm t_9 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm w_9 (ATerm t);
ATerm need_help_1_0 (ATerm q_128 (ATerm), ATerm t);
static ATerm u_10 (ATerm j_61, ATerm k_61, ATerm l_61, ATerm t);
static ATerm v_10 (ATerm m_61, ATerm n_61, ATerm t);
ATerm lookup_table_0_1 (ATerm d_58, ATerm t);
ATerm new_hashtable_0_2 (ATerm r_61, ATerm s_61, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm n_10 (ATerm o_61, ATerm p_61, ATerm t);
static ATerm o_10 (ATerm t_61, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm reverse_acc_2_0 (ATerm h_0 (ATerm), ATerm j_0 (ATerm), ATerm t);
static ATerm e_10 (ATerm t);
static ATerm f_10 (ATerm t);
static ATerm m_10 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm j_110 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm p_10 (ATerm t);
static ATerm s_10 (ATerm t);
static ATerm w_10 (ATerm t);
static ATerm x_10 (ATerm t);
static ATerm z_10 (ATerm t);
static ATerm b_11 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm b_79 (ATerm), ATerm c_79 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm h_131 (ATerm), ATerm t);
static ATerm g_11 (ATerm t);
static ATerm h_11 (ATerm t);
static ATerm i_11 (ATerm t);
static ATerm j_11 (ATerm t);
ATerm parse_options_1_0 (ATerm g_131 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm s_128 (ATerm), ATerm t_128 (ATerm), ATerm u_128 (ATerm), ATerm v_128 (ATerm), ATerm t);
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
static ATerm g_10 (ATerm z_25, ATerm u_201, ATerm t)
{
  static ATerm a_0 (ATerm t);
  static ATerm a_0 (ATerm t)
  {
    if((z_25 != t))
      {
        _fail(t);
      }
    return(t);
  }
  t = u_201;
  t = fetch_1_0(a_0, t);
  return(t);
}
ATerm at_suffix_1_0 (ATerm u_110 (ATerm), ATerm t)
{
  static ATerm l_3 (ATerm t);
  static ATerm l_3 (ATerm t)
  {
    ATerm i_12 = t;
    int m_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_110(t);
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
ATerm split_fetch_1_0 (ATerm m_110 (ATerm), ATerm t)
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
    t = m_110(t);
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
ATerm list_tokenize_1_0 (ATerm w_119 (ATerm), ATerm t)
{
  ATerm n_4 = NULL,r_4 = NULL;
  ATerm o_12 = t;
  int p_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = split_fetch_1_0(w_119, t);
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
          t = list_tokenize_1_0(w_119, t);
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
          t = list_tokenize_1_0(w_119, t);
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
static ATerm j_10 (ATerm e_63, ATerm d_63, ATerm t)
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
        t = (ATerm) ATmakeAppl(sym__2, d_63, (ATerm) ATinsert(ATempty, term_v_13));
        t = i_10(d_63, o_6, t);
        t = filemode_0_0(t);
        n_6 = t;
        t = SSL_S_ISDIR(n_6);
        t = l_6;
        LocalPopChoice(t_13);
        {
          ATerm p_6 = NULL,q_6 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, term_y_13), e_63);
          t = string_tokenize_0_0(t);
          t = last_0_0(t);
          p_6 = t;
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, p_6), term_z_13), d_63);
          q_6 = t;
          t = SSL_concat_strings(q_6);
        }
      }
    else
      {
        t = s_13;
        t = d_63;
      }
  }
  k_6 = t;
  t = SSL_copy(e_63, k_6);
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
static ATerm t_8 (ATerm x_24, ATerm y_24, ATerm t)
{
  ATerm m_7 = NULL;
  t = SSL_write_term_to_stream_baf(x_24, y_24);
  m_7 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, m_7);
  return(t);
}
static ATerm y_8 (ATerm q_109 (ATerm), ATerm w_188, ATerm h_25, ATerm t)
{
  ATerm n_7 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, w_188, term_u_14);
  t = n_9(t);
  n_7 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_7, h_25);
  t = q_109(t);
  t = fclose_0_0(t);
  t = h_25;
  return(t);
}
static ATerm o_9 (ATerm m_123 (ATerm), ATerm g_45, ATerm e_45, ATerm t)
{
  ATerm o_7 = NULL,p_7 = NULL,r_7 = NULL,t_7 = NULL,u_7 = NULL,w_7 = NULL,x_7 = NULL,z_7 = NULL;
  t_7 = t;
  t = m_123(t);
  o_7 = t;
  t = (ATerm) ATmakeAppl(sym__3, o_7, g_45, e_45);
  t = r_10(o_7, g_45, e_45, t);
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
  t = (ATerm) ATmakeAppl(sym__3, o_7, term_b_15, (ATerm) ATinsert(CheckATermList(r_7), (ATerm) ATinsert(CheckATermList(p_7), g_45)));
  t = lookup_table_0_1(o_7, t);
  z_7 = t;
  t = term_b_15;
  u_7 = t;
  t = (ATerm) ATinsert(CheckATermList(r_7), (ATerm) ATinsert(CheckATermList(p_7), g_45));
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
static ATerm u_8 (ATerm l_25, ATerm m_25, ATerm t)
{
  ATerm u_11 = NULL,v_11 = NULL;
  t = m_25;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = m_25;
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
      t = SSLgetAnnotations(m_25);
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
                t = (ATerm) ATinsert(CheckATermList(g_4), l_25);
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
static ATerm w_8 (ATerm w_40, ATerm x_40, ATerm t)
{
  ATerm g_14 = NULL;
  t = SSL_fputc(w_40, x_40);
  g_14 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, g_14);
  return(t);
}
static ATerm x_8 (ATerm b_25, ATerm c_25, ATerm t)
{
  ATerm i_14 = NULL;
  t = SSL_write_term_to_stream_text(b_25, c_25);
  i_14 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, i_14);
  return(t);
}
ATerm basename_1_0 (ATerm a_121 (ATerm), ATerm t)
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
                        t = a_121(t);
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
ATerm at_suffix_rev_1_0 (ATerm y_110 (ATerm), ATerm t)
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
        t = y_110(t);
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
ATerm map_1_0 (ATerm z_109 (ATerm), ATerm t)
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
        t = z_109(t);
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
static ATerm q_10 (ATerm k_58, ATerm l_58, ATerm t)
{
  ATerm e_20 = NULL;
  t = lookup_table_0_1(k_58, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      e_20 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = v_10(l_58, e_20, t);
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
ATerm genzip_4_0 (ATerm d_112 (ATerm), ATerm e_112 (ATerm), ATerm f_112 (ATerm), ATerm g_112 (ATerm), ATerm t)
{
  static ATerm c_21 (ATerm t);
  static ATerm c_21 (ATerm t)
  {
    ATerm f_17 = t;
    int h_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_112(t);
        LocalPopChoice(h_17);
      }
    else
      {
        t = f_17;
        {
          ATerm r_20 = NULL,s_20 = NULL,t_20 = NULL,w_20 = NULL,y_20 = NULL,z_20 = NULL,s_5 = NULL;
          t = e_112(t);
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
          t = g_112(t);
          w_20 = t;
          t = t_20;
          t = c_21(t);
          y_20 = t;
          t = (ATerm) ATmakeAppl(sym__2, w_20, y_20);
          s_5 = t;
          t = SSLsetAnnotations(s_5, r_20);
          t = f_112(t);
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
static ATerm c_9 (ATerm d_155, ATerm t)
{
  t = d_155;
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
static ATerm d_9 (ATerm y_43, ATerm z_43, ATerm t)
{
  ATerm n_17 = t;
  int o_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(y_43, z_43);
      LocalPopChoice(o_17);
    }
  else
    {
      t = n_17;
      t = SSL_subtr(y_43, z_43);
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
ATerm xtc_transform_term_2_0 (ATerm q_135 (ATerm), ATerm r_135 (ATerm), ATerm t)
{
  ATerm f_22 = NULL,g_22 = NULL;
  g_22 = t;
  t = xtc_new_file_0_0(t);
  f_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_22, g_22);
  t = y_8(a_1, f_22, g_22, t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, f_22);
  t = xtc_transform_file_2_0(q_135, r_135, t);
  t = read_from_0_0(t);
  return(t);
}
static ATerm e_9 (ATerm n_67, ATerm o_67, ATerm t)
{
  t = SSL_execvp(n_67, o_67);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm q_24 = NULL,r_24 = NULL,s_24 = NULL,z_24 = NULL;
  q_24 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      r_24 = ATgetArgument(t, 0);
      {
        ATerm c_11 = NULL,d_11 = NULL;
        t = SSL_int_to_string(r_24);
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
          r_24 = ATgetArgument(t, 0);
          s_24 = ATgetArgument(t, 1);
          z_24 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(s_24);
      t_11 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, z_24), term_x_17), t_11), term_w_17), r_24);
      w_11 = t;
      t = SSL_concat_strings(w_11);
    }
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm i_25 = NULL;
  i_25 = t;
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
              if((i_25 != ATgetArgument(t, 1)))
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
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_e_25), term_u_24), term_n_24), term_j_24), term_f_24), term_b_24), term_x_23), term_t_23), term_p_23), term_l_23), term_f_23), term_x_22), term_p_22), term_k_22), term_z_21), term_m_21), term_g_21), term_v_20), term_k_20), term_d_20), term_w_19), term_p_19), term_l_19), term_h_19), term_d_19), term_z_18), term_t_18), term_k_18);
        t = fetch_elem_1_0(b_1, t);
        LocalPopChoice(b_18);
      }
    else
      {
        t = y_17;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, i_25);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm y_25 = NULL,n_26 = NULL;
  y_25 = t;
  {
    ATerm f_25 = t;
    int g_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm j_25 = ATgetArgument(t, 0);
            n_26 = ATgetArgument(t, 1);
            {
              ATerm k_25 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(g_25);
        {
          ATerm n_25 = t;
          int o_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm e_12 = NULL,g_12 = NULL,k_12 = NULL;
              t = n_26;
              {
                ATerm p_25 = t;
                if((PushChoice() == 0))
                  {
                    if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
                      _fail(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = p_25;
                  }
              }
              t = signal_from_number_0_0(t);
              t = signal_to_descr_0_0(t);
              e_12 = t;
              t = term_q_25;
              g_12 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, e_12), term_r_25);
              k_12 = t;
              t = SSL_printnl(g_12, k_12);
              t = (ATerm) ATmakeAppl(sym__2, term_q_25, (ATerm) ATinsert(ATinsert(ATempty, e_12), term_r_25));
              LocalPopChoice(o_25);
            }
          else
            {
              t = n_25;
              t = y_25;
            }
        }
      }
    else
      {
        t = f_25;
        t = y_25;
      }
  }
  t = y_25;
  return(t);
}
ATerm fork_0_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_and_wait_1_0 (ATerm n_127 (ATerm), ATerm t)
{
  ATerm b_27 = NULL,c_27 = NULL;
  c_27 = t;
  t = fork_0_0(t);
  b_27 = t;
  {
    ATerm s_25 = t;
    int t_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = c_27;
        t = n_127(t);
        LocalPopChoice(t_25);
      }
    else
      {
        t = s_25;
        t = SSL_waitpid(b_27);
        t = warn_ifsignaled_0_0(t);
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm u_25 = ATgetArgument(t, 0);
            if(((ATgetType(u_25) != AT_INT) || (ATgetInt((ATermInt) u_25) != 0)))
              _fail(t);
            {
              ATerm v_25 = ATgetArgument(t, 1);
            }
            {
              ATerm w_25 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = c_27;
      }
  }
  return(t);
}
static ATerm g_9 (ATerm q_61, ATerm t)
{
  t = SSL_hashtable_keys(q_61);
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm g_27 = NULL,h_27 = NULL;
  static ATerm e_1 (ATerm t);
  static ATerm e_1 (ATerm t)
  {
    ATerm i_27 = NULL,j_27 = NULL;
    i_27 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(g_27), i_27);
    t = q_10(not_null(g_27), i_27, t);
    j_27 = t;
    t = (ATerm) ATmakeAppl(sym__2, i_27, j_27);
    return(t);
  }
  if(((g_27 != NULL) && (g_27 != t)))
    _fail(t);
  else
    g_27 = t;
  t = lookup_table_0_1(g_27, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      h_27 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_9(h_27, t);
  t = map_1_0(e_1, t);
  return(t);
}
ATerm if_verbose5_1_0 (ATerm g_127 (ATerm), ATerm t)
{
  ATerm r_27 = NULL;
  r_27 = t;
  {
    ATerm x_25 = t;
    int a_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_27 = NULL,z_27 = NULL,a_28 = NULL;
        t = term_f_14;
        z_27 = t;
        t = term_p_17;
        a_28 = t;
        t = term_s_17;
        t = q_10(z_27, a_28, t);
        x_27 = t;
        t = (ATerm) ATmakeAppl(sym__2, x_27, term_h_24);
        t = geq_0_0(t);
        t = r_27;
        t = g_127(t);
        LocalPopChoice(a_26);
      }
    else
      {
        t = x_25;
        t = r_27;
      }
  }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm f_127 (ATerm), ATerm t)
{
  ATerm h_28 = NULL;
  h_28 = t;
  {
    ATerm b_26 = t;
    int c_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_28 = NULL,m_28 = NULL,n_28 = NULL;
        t = term_f_14;
        m_28 = t;
        t = term_p_17;
        n_28 = t;
        t = term_s_17;
        t = q_10(m_28, n_28, t);
        l_28 = t;
        t = (ATerm) ATmakeAppl(sym__2, l_28, term_b_21);
        t = geq_0_0(t);
        t = h_28;
        t = f_127(t);
        LocalPopChoice(c_26);
      }
    else
      {
        t = b_26;
        t = h_28;
      }
  }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm h_127 (ATerm), ATerm t)
{
  ATerm q_28 = NULL;
  q_28 = t;
  {
    ATerm d_26 = t;
    int e_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_28 = NULL,w_28 = NULL,x_28 = NULL;
        t = term_f_14;
        w_28 = t;
        t = term_p_17;
        x_28 = t;
        t = term_s_17;
        t = q_10(w_28, x_28, t);
        v_28 = t;
        t = (ATerm) ATmakeAppl(sym__2, v_28, term_b_19);
        t = geq_0_0(t);
        t = q_28;
        t = h_127(t);
        LocalPopChoice(e_26);
      }
    else
      {
        t = d_26;
        t = q_28;
      }
  }
  return(t);
}
static ATerm i_9 (ATerm k_114 (ATerm), ATerm g_31, ATerm f_31, ATerm t)
{
  static ATerm x_29 (ATerm t);
  static ATerm x_29 (ATerm t)
  {
    ATerm r_29 = NULL,s_29 = NULL,t_29 = NULL;
    r_29 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = f_31;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            s_29 = ATgetFirst((ATermList) t);
            t_29 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm f_26 = t;
          int g_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = r_29;
              {
                static ATerm f_1 (ATerm t);
                static ATerm f_1 (ATerm t)
                {
                  t = f_31;
                  return(t);
                }
                t = r_9(k_114, f_1, s_29, t_29, t);
              }
              t = x_29(t);
              LocalPopChoice(g_26);
            }
          else
            {
              t = f_26;
              {
                ATerm z_12 = NULL,j_13 = NULL,v_5 = NULL;
                t = SSLgetAnnotations(r_29);
                z_12 = t;
                t = t_29;
                t = x_29(t);
                j_13 = t;
                t = (ATerm) ATinsert(CheckATermList(j_13), s_29);
                v_5 = t;
                t = SSLsetAnnotations(v_5, z_12);
              }
            }
        }
      }
    return(t);
  }
  t = g_31;
  t = x_29(t);
  return(t);
}
static ATerm h_1 (ATerm t)
{
  ATerm u_30 = NULL;
  if(match_cons(t, sym__2))
    {
      u_30 = ATgetArgument(t, 0);
      if((u_30 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm j_9 (ATerm o_57, ATerm p_57, ATerm q_57, ATerm t)
{
  ATerm e_30 = NULL,f_30 = NULL,l_30 = NULL,m_30 = NULL;
  e_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_57, p_57);
  {
    ATerm h_26 = t;
    int i_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm j_26 = ATgetArgument(t, 0);
            ATerm k_26 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, o_57, p_57);
        t = q_10(o_57, p_57, t);
        LocalPopChoice(i_26);
      }
    else
      {
        t = h_26;
        t = (ATerm) ATempty;
      }
  }
  l_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_30, q_57);
  t = i_9(h_1, l_30, q_57, t);
  f_30 = t;
  t = (ATerm) ATmakeAppl(sym__3, o_57, p_57, f_30);
  t = lookup_table_0_1(o_57, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      m_30 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_10(p_57, f_30, m_30, t);
  t = e_30;
  return(t);
}
static ATerm k_9 (ATerm y_124 (ATerm), ATerm y_57, ATerm x_57, ATerm t)
{
  static ATerm j_1 (ATerm t);
  static ATerm j_1 (ATerm t)
  {
    ATerm v_30 = NULL,w_30 = NULL;
    if(match_cons(t, sym__2))
      {
        v_30 = ATgetArgument(t, 0);
        w_30 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, y_57, v_30, w_30);
    t = y_124(t);
    return(t);
  }
  t = x_57;
  t = map_1_0(j_1, t);
  return(t);
}
static ATerm j_32 (ATerm v_31, ATerm t)
{
  t = SSL_fclose(v_31);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm c_32 = NULL,d_32 = NULL;
  d_32 = t;
  if(match_cons(t, sym_Stream_1))
    {
      c_32 = ATgetArgument(t, 0);
      {
        ATerm l_26 = t;
        int m_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(c_32);
            LocalPopChoice(m_26);
          }
        else
          {
            t = l_26;
            t = j_32(d_32, t);
          }
      }
    }
  else
    {
      t = j_32(d_32, t);
    }
  return(t);
}
static ATerm l_9 (ATerm d_25, ATerm t)
{
  t = SSL_read_term_from_stream(d_25);
  return(t);
}
static ATerm h_10 (ATerm a_39, ATerm b_39, ATerm t)
{
  t = SSL_strcat(a_39, b_39);
  return(t);
}
static ATerm m_9 (ATerm y_40, ATerm z_40, ATerm t)
{
  ATerm m_32 = NULL;
  t = SSL_fopen(y_40, z_40);
  m_32 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, m_32);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm n_32 = NULL;
  t = SSL_stdin_stream();
  n_32 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, n_32);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm o_32 = NULL;
  t = SSL_stdout_stream();
  o_32 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, o_32);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm p_32 = NULL;
  t = SSL_stderr_stream();
  p_32 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, p_32);
  return(t);
}
static ATerm m_34 (ATerm y_32, ATerm t)
{
  ATerm z_32 = NULL;
  t = SSL_explode_term(y_32);
  if(match_cons(t, sym__2))
    {
      ATerm o_26 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) o_26) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm p_26 = ATgetArgument(t, 1);
        if(((ATgetType(p_26) == AT_LIST) && !(ATisEmpty(p_26))))
          {
            z_32 = ATgetFirst((ATermList) p_26);
            {
              ATerm q_26 = (ATerm) ATgetNext((ATermList) p_26);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = z_32;
  if(match_cons(t, sym_stderr_0))
    {
      t = z_32;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = z_32;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = z_32;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm n_34 (ATerm c_33, ATerm d_33, ATerm g_33, ATerm t)
{
  ATerm h_33 = NULL,i_33 = NULL,k_33 = NULL,p_33 = NULL,a_6 = NULL;
  t = SSLgetAnnotations(g_33);
  k_33 = t;
  t = c_33;
  if(match_cons(t, sym_Path_1))
    {
      p_33 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, p_33, d_33);
  a_6 = t;
  t = SSLsetAnnotations(a_6, k_33);
  if(match_cons(t, sym__2))
    {
      h_33 = ATgetArgument(t, 0);
      i_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_9(h_33, i_33, t);
  return(t);
}
static ATerm o_34 (ATerm r_33, ATerm u_33, ATerm v_33, ATerm t)
{
  ATerm w_33 = NULL,x_33 = NULL,z_33 = NULL,h_34 = NULL,d_6 = NULL;
  t = SSLgetAnnotations(v_33);
  z_33 = t;
  t = SSL_is_string(r_33);
  h_34 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_34, u_33);
  d_6 = t;
  t = SSLsetAnnotations(d_6, z_33);
  if(match_cons(t, sym__2))
    {
      w_33 = ATgetArgument(t, 0);
      x_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_9(w_33, x_33, t);
  return(t);
}
static ATerm n_9 (ATerm t)
{
  ATerm j_34 = NULL,k_34 = NULL,l_34 = NULL;
  j_34 = t;
  if(match_cons(t, sym__2))
    {
      k_34 = ATgetArgument(t, 0);
      l_34 = ATgetArgument(t, 1);
      {
        ATerm r_26 = t;
        int s_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = m_34(j_34, t);
            LocalPopChoice(s_26);
          }
        else
          {
            t = r_26;
            {
              ATerm t_26 = t;
              int u_26 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = n_34(k_34, l_34, j_34, t);
                  LocalPopChoice(u_26);
                }
              else
                {
                  t = t_26;
                  t = o_34(k_34, l_34, j_34, t);
                }
            }
          }
      }
    }
  else
    {
      t = m_34(j_34, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm q_34 = NULL,r_34 = NULL,s_34 = NULL,x_34 = NULL;
  x_34 = t;
  {
    ATerm v_26 = t;
    int w_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, x_34, term_x_26);
        t = n_9(t);
        LocalPopChoice(w_26);
      }
    else
      {
        t = v_26;
        {
          ATerm d_14 = NULL,e_14 = NULL;
          t = term_y_26;
          e_14 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_y_26, x_34);
          t = h_10(e_14, x_34, t);
          d_14 = t;
          t = SSL_perror(d_14);
          _fail(t);
        }
      }
  }
  r_34 = t;
  if(match_cons(t, sym_Stream_1))
    {
      s_34 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = l_9(s_34, t);
  q_34 = t;
  t = r_34;
  t = fclose_0_0(t);
  t = q_34;
  return(t);
}
static ATerm m_1 (ATerm t)
{
  t = term_z_26;
  return(t);
}
static ATerm o_1 (ATerm t)
{
  t = term_a_27;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm d_27 = t;
  int e_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_35 = NULL,b_35 = NULL;
      a_35 = t;
      t = (ATerm) ATinsert(ATempty, term_f_27);
      b_35 = t;
      t = (ATerm) ATmakeAppl(sym__2, a_35, (ATerm) ATinsert(ATempty, term_f_27));
      t = i_10(a_35, b_35, t);
      LocalPopChoice(e_27);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = d_27;
      {
        ATerm k_27 = t;
        int l_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_27 = t;
            if((PushChoice() == 0))
              {
                ATerm c_35 = NULL,d_35 = NULL;
                c_35 = t;
                t = (ATerm) ATinsert(ATempty, term_v_13);
                d_35 = t;
                t = (ATerm) ATmakeAppl(sym__2, c_35, (ATerm) ATinsert(ATempty, term_v_13));
                t = i_10(c_35, d_35, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = m_27;
              }
            t = debug_1_0(m_1, t);
            LocalPopChoice(l_27);
          }
        else
          {
            t = k_27;
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
  t = term_n_27;
  return(t);
}
static ATerm t_1 (ATerm t)
{
  t = debug_1_0(v_1, t);
  return(t);
}
static ATerm v_1 (ATerm t)
{
  t = term_o_27;
  return(t);
}
static ATerm w_1 (ATerm t)
{
  ATerm y_35 = NULL,a_36 = NULL,c_36 = NULL;
  y_35 = t;
  t = term_q_25;
  a_36 = t;
  t = (ATerm) ATinsert(ATempty, term_p_27);
  c_36 = t;
  t = SSL_printnl(a_36, c_36);
  t = y_35;
  return(t);
}
static ATerm x_1 (ATerm t)
{
  ATerm g_36 = NULL,i_36 = NULL,l_36 = NULL;
  if(match_cons(t, sym__3))
    {
      g_36 = ATgetArgument(t, 0);
      i_36 = ATgetArgument(t, 1);
      l_36 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = j_9(g_36, i_36, l_36, t);
  return(t);
}
static ATerm y_1 (ATerm t)
{
  ATerm m_36 = NULL,q_36 = NULL,t_36 = NULL;
  m_36 = t;
  t = term_q_25;
  q_36 = t;
  t = (ATerm) ATinsert(ATempty, term_q_27);
  t_36 = t;
  t = SSL_printnl(q_36, t_36);
  t = m_36;
  return(t);
}
static ATerm b_2 (ATerm t)
{
  ATerm u_36 = NULL,v_36 = NULL,w_36 = NULL;
  u_36 = t;
  t = term_q_25;
  v_36 = t;
  t = (ATerm) ATinsert(ATempty, term_p_27);
  w_36 = t;
  t = SSL_printnl(v_36, w_36);
  t = u_36;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm e_35 = NULL,f_35 = NULL,g_35 = NULL,h_35 = NULL,i_35 = NULL,j_35 = NULL,k_35 = NULL,l_35 = NULL,m_35 = NULL,n_35 = NULL,o_35 = NULL,p_35 = NULL,r_35 = NULL,t_35 = NULL;
  e_35 = t;
  t = if_verbose5_1_0(q_1, t);
  {
    ATerm s_27 = t;
    if((PushChoice() == 0))
      {
        ATerm v_35 = NULL,x_35 = NULL;
        t = term_t_27;
        v_35 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, e_35);
        x_35 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_t_27, (ATerm) ATmakeAppl(sym_Imported_1, e_35));
        t = q_10(v_35, x_35, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = s_27;
      }
  }
  g_35 = t;
  t = term_t_27;
  n_35 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_t_27, term_u_27, (ATerm) ATinsert(ATempty, e_35));
  t = lookup_table_0_1(n_35, t);
  t_35 = t;
  t = term_u_27;
  o_35 = t;
  t = (ATerm) ATinsert(ATempty, e_35);
  p_35 = t;
  t = t_35;
  if(match_cons(t, sym_Hashtable_1))
    {
      r_35 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_10(o_35, p_35, r_35, t);
  t = g_35;
  t = if_verbose4_1_0(t_1, t);
  t = read_repository_file_0_0(t);
  t = if_verbose6_1_0(w_1, t);
  f_35 = t;
  t = term_t_27;
  m_35 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_27, f_35);
  t = k_9(x_1, m_35, f_35, t);
  t = if_verbose6_1_0(y_1, t);
  t = term_t_27;
  h_35 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_t_27, (ATerm)ATmakeAppl(sym_Imported_1, e_35), (ATerm) ATempty);
  t = lookup_table_0_1(h_35, t);
  l_35 = t;
  t = (ATerm) ATmakeAppl(sym_Imported_1, e_35);
  i_35 = t;
  t = (ATerm) ATempty;
  j_35 = t;
  t = l_35;
  if(match_cons(t, sym_Hashtable_1))
    {
      k_35 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_10(i_35, j_35, k_35, t);
  t = (ATerm) ATmakeAppl(sym__3, term_t_27, (ATerm)ATmakeAppl(sym_Imported_1, e_35), (ATerm) ATempty);
  t = if_verbose4_1_0(b_2, t);
  return(t);
}
ATerm repeat_2_0 (ATerm n_102 (ATerm), ATerm o_102 (ATerm), ATerm t)
{
  static ATerm z_36 (ATerm t);
  static ATerm z_36 (ATerm t)
  {
    ATerm v_27 = t;
    int w_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_102(t);
        t = z_36(t);
        LocalPopChoice(w_27);
      }
    else
      {
        t = v_27;
        t = o_102(t);
      }
    return(t);
  }
  t = z_36(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm y_27 = t;
  int b_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_37 = NULL,b_37 = NULL;
      t = term_f_14;
      a_37 = t;
      t = term_c_28;
      b_37 = t;
      t = term_d_28;
      t = q_10(a_37, b_37, t);
      LocalPopChoice(b_28);
    }
  else
    {
      t = y_27;
      {
        ATerm e_28 = t;
        int f_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_37 = NULL;
            t = term_g_28;
            c_37 = t;
            t = SSL_getenv(c_37);
            LocalPopChoice(f_28);
          }
        else
          {
            t = e_28;
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
  t = term_i_28;
  return(t);
}
static ATerm f_2 (ATerm t)
{
  ATerm k_37 = NULL,l_37 = NULL;
  t = term_t_27;
  k_37 = t;
  t = term_j_28;
  l_37 = t;
  t = term_k_28;
  t = q_10(k_37, l_37, t);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm o_28 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = o_28;
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
  t = term_p_28;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm e_37 = NULL;
  t = if_verbose5_1_0(c_2, t);
  e_37 = t;
  {
    ATerm r_28 = t;
    int s_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_37 = NULL,g_37 = NULL;
        t = term_t_27;
        f_37 = t;
        t = term_u_27;
        g_37 = t;
        t = term_t_28;
        t = q_10(f_37, g_37, t);
        LocalPopChoice(s_28);
      }
    else
      {
        t = r_28;
        {
          ATerm h_37 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          h_37 = t;
          t = repeat_2_0(f_2, _id, t);
          t = h_37;
        }
      }
  }
  t = e_37;
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
  t = term_u_28;
  return(t);
}
static ATerm r_38 (ATerm x_37, ATerm t)
{
  ATerm z_37 = NULL,a_38 = NULL,b_38 = NULL;
  t = term_t_27;
  a_38 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, x_37);
  b_38 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_27, (ATerm) ATmakeAppl(sym_Tool_1, x_37));
  t = q_10(a_38, b_38, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm y_28 = ATgetFirst((ATermList) t);
      if(match_cons(y_28, sym__2))
        {
          ATerm a_29 = ATgetArgument(y_28, 0);
          z_37 = ATgetArgument(y_28, 1);
        }
      else
        _fail(t);
      {
        ATerm z_28 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = z_37;
  return(t);
}
static ATerm n_2 (ATerm t)
{
  t = debug_1_0(p_2, t);
  return(t);
}
static ATerm p_2 (ATerm t)
{
  t = term_u_28;
  return(t);
}
static ATerm q_2 (ATerm t)
{
  t = term_t_27;
  t = table_getlist_0_0(t);
  t = debug_1_0(v_2, t);
  return(t);
}
static ATerm v_2 (ATerm t)
{
  t = term_b_29;
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm c_29 = t;
  int d_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_38 = NULL,d_38 = NULL,e_38 = NULL;
      t = if_verbose5_1_0(i_2, t);
      t = xtc_load_0_0(t);
      e_38 = t;
      if(match_cons(t, sym__2))
        {
          c_38 = ATgetArgument(t, 0);
          d_38 = ATgetArgument(t, 1);
          {
            ATerm e_29 = t;
            int f_29 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm h_38 = NULL,k_38 = NULL,l_38 = NULL;
                t = term_t_27;
                k_38 = t;
                t = (ATerm) ATmakeAppl(sym_Tool_1, c_38);
                l_38 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_t_27, (ATerm) ATmakeAppl(sym_Tool_1, c_38));
                t = q_10(k_38, l_38, t);
                {
                  static ATerm m_2 (ATerm t);
                  static ATerm m_2 (ATerm t)
                  {
                    if(match_cons(t, sym__2))
                      {
                        if((d_38 != ATgetArgument(t, 0)))
                          {
                            _fail(ATgetArgument(t, 0));
                          }
                        if(((h_38 != NULL) && (h_38 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          h_38 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = fetch_1_0(m_2, t);
                }
                t = not_null(h_38);
                LocalPopChoice(f_29);
              }
            else
              {
                t = e_29;
                t = r_38(e_38, t);
              }
          }
        }
      else
        {
          t = r_38(e_38, t);
        }
      t = if_verbose5_1_0(n_2, t);
      LocalPopChoice(d_29);
    }
  else
    {
      t = c_29;
      {
        ATerm q_38 = NULL,k_14 = NULL,l_14 = NULL;
        q_38 = t;
        t = term_q_25;
        k_14 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_h_29), q_38), term_g_29);
        l_14 = t;
        t = SSL_printnl(k_14, l_14);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_h_29), q_38), term_g_29);
        t = if_verbose5_1_0(q_2, t);
        _fail(t);
      }
    }
  return(t);
}
ATerm xtc_command_1_0 (ATerm u_136 (ATerm), ATerm t)
{
  ATerm t_38 = NULL,u_38 = NULL;
  u_38 = t;
  t = u_136(t);
  t = xtc_find_0_0(t);
  t_38 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_38, u_38);
  {
    static ATerm x_2 (ATerm t);
    static ATerm x_2 (ATerm t)
    {
      ATerm v_38 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, t_38, u_38);
      t = e_9(t_38, u_38, t);
      t = term_i_29;
      v_38 = t;
      t = SSL_exit(v_38);
      return(t);
    }
    t = fork_and_wait_1_0(x_2, t);
  }
  t = u_38;
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm q_0 (ATerm), ATerm r_0 (ATerm), ATerm t)
{
  ATerm x_38 = NULL,y_38 = NULL;
  x_38 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm z_38 = NULL,c_39 = NULL;
      t = x_38;
      t = xtc_new_file_0_0(t);
      z_38 = t;
      t = r_0(t);
      c_39 = t;
      t = (ATerm) ATmakeAppl(sym__2, c_39, (ATerm) ATinsert(ATinsert(ATempty, z_38), term_h_14));
      t = conc_0_0(t);
      t = xtc_command_1_0(q_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, z_38);
    }
  else
    {
      ATerm e_39 = NULL,f_39 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          y_38 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = y_38;
      t = xtc_new_file_0_0(t);
      e_39 = t;
      t = r_0(t);
      f_39 = t;
      t = (ATerm) ATmakeAppl(sym__2, f_39, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, e_39), term_h_14), y_38), term_j_29));
      t = conc_0_0(t);
      t = xtc_command_1_0(q_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, e_39);
    }
  return(t);
}
static ATerm a_42 (ATerm n_39, ATerm o_39, ATerm p_39, ATerm t)
{
  ATerm t_39 = NULL,x_39 = NULL,n_14 = NULL,o_14 = NULL,j_6 = NULL;
  t = SSLgetAnnotations(p_39);
  t_39 = t;
  t = n_39;
  {
    ATerm k_29 = t;
    if((PushChoice() == 0))
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("rtree", 0, ATtrue)))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = k_29;
      }
  }
  x_39 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_39, o_39);
  j_6 = t;
  t = SSLsetAnnotations(j_6, t_39);
  o_14 = t;
  t = SSL_explode_term(o_14);
  if(match_cons(t, sym__2))
    {
      ATerm l_29 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) l_29) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm m_29 = ATgetArgument(t, 1);
        if(((ATgetType(m_29) == AT_LIST) && !(ATisEmpty(m_29))))
          {
            ATerm n_29 = ATgetFirst((ATermList) m_29);
            ATerm o_29 = (ATerm) ATgetNext((ATermList) m_29);
            if(((ATgetType(o_29) == AT_LIST) && !(ATisEmpty(o_29))))
              {
                n_14 = ATgetFirst((ATermList) o_29);
                {
                  ATerm p_29 = (ATerm) ATgetNext((ATermList) o_29);
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
    ATerm q_29 = t;
    int u_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_29 = t;
        int w_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_40 = NULL;
            if(match_cons(t, sym_FILE_1))
              {
                e_40 = ATgetArgument(t, 0);
                {
                  ATerm r_14 = NULL,u_6 = NULL;
                  t = SSLgetAnnotations(n_14);
                  r_14 = t;
                  t = (ATerm) ATmakeAppl(sym_FILE_1, e_40);
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
            LocalPopChoice(w_29);
            t = xtc_transform_file_2_0(y_2, z_2, t);
          }
        else
          {
            t = v_29;
            t = xtc_transform_term_2_0(a_3, b_3, t);
          }
        t = read_from_0_0(t);
        LocalPopChoice(u_29);
      }
    else
      {
        t = q_29;
        {
          ATerm m_41 = NULL,p_41 = NULL,q_41 = NULL;
          t = term_q_25;
          p_41 = t;
          t = (ATerm) ATinsert(ATinsert(ATempty, o_39), term_y_29);
          q_41 = t;
          t = SSL_printnl(p_41, q_41);
          t = term_m_17;
          m_41 = t;
          t = SSL_exit(m_41);
          t = (ATerm) ATinsert(ATinsert(ATempty, o_39), term_y_29);
        }
      }
  }
  return(t);
}
static ATerm d_42 (ATerm r_41, ATerm s_41, ATerm t)
{
  ATerm w_14 = NULL;
  t = SSL_explode_term(s_41);
  if(match_cons(t, sym__2))
    {
      ATerm z_29 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) z_29) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm a_30 = ATgetArgument(t, 1);
        if(((ATgetType(a_30) == AT_LIST) && !(ATisEmpty(a_30))))
          {
            ATerm b_30 = ATgetFirst((ATermList) a_30);
            ATerm c_30 = (ATerm) ATgetNext((ATermList) a_30);
            if(((ATgetType(c_30) == AT_LIST) && !(ATisEmpty(c_30))))
              {
                w_14 = ATgetFirst((ATermList) c_30);
                {
                  ATerm d_30 = (ATerm) ATgetNext((ATermList) c_30);
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
    ATerm g_30 = t;
    int h_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = read_from_0_0(t);
        LocalPopChoice(h_30);
      }
    else
      {
        t = g_30;
        {
          ATerm u_41 = NULL,v_41 = NULL,w_41 = NULL;
          t = term_q_25;
          v_41 = t;
          t = (ATerm) ATinsert(ATinsert(ATempty, r_41), term_y_29);
          w_41 = t;
          t = SSL_printnl(v_41, w_41);
          t = term_m_17;
          u_41 = t;
          t = SSL_exit(u_41);
          t = (ATerm) ATinsert(ATinsert(ATempty, r_41), term_y_29);
        }
      }
  }
  return(t);
}
static ATerm y_2 (ATerm t)
{
  t = term_i_30;
  return(t);
}
static ATerm z_2 (ATerm t)
{
  ATerm h_40 = NULL,i_40 = NULL,j_40 = NULL,k_40 = NULL,l_40 = NULL;
  l_40 = t;
  t = pass_verbose_0_0(t);
  h_40 = t;
  t = l_40;
  t = pass_keep_0_0(t);
  i_40 = t;
  t = term_j_30;
  {
    ATerm k_30 = t;
    int n_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_40 = NULL,p_40 = NULL;
        t = term_f_14;
        o_40 = t;
        t = term_j_30;
        p_40 = t;
        t = term_o_30;
        t = q_10(o_40, p_40, t);
        LocalPopChoice(n_30);
        t = (ATerm) ATinsert(ATempty, term_j_30);
      }
    else
      {
        t = k_30;
        t = (ATerm) ATempty;
      }
  }
  j_40 = t;
  t = term_p_30;
  {
    ATerm q_30 = t;
    int r_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_40 = NULL,r_40 = NULL;
        t = term_f_14;
        q_40 = t;
        t = term_p_30;
        r_40 = t;
        t = term_s_30;
        t = q_10(q_40, r_40, t);
        LocalPopChoice(r_30);
      }
    else
      {
        t = q_30;
        t = (ATerm) ATempty;
      }
  }
  k_40 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, k_40), i_40), h_40), j_40);
  t = concat_0_0(t);
  return(t);
}
static ATerm a_3 (ATerm t)
{
  t = term_i_30;
  return(t);
}
static ATerm b_3 (ATerm t)
{
  ATerm s_40 = NULL,t_40 = NULL,e_41 = NULL,f_41 = NULL,h_41 = NULL;
  h_41 = t;
  t = pass_verbose_0_0(t);
  s_40 = t;
  t = h_41;
  t = pass_keep_0_0(t);
  t_40 = t;
  t = term_j_30;
  {
    ATerm t_30 = t;
    int x_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_41 = NULL,j_41 = NULL;
        t = term_f_14;
        i_41 = t;
        t = term_j_30;
        j_41 = t;
        t = term_o_30;
        t = q_10(i_41, j_41, t);
        LocalPopChoice(x_30);
        t = (ATerm) ATinsert(ATempty, term_j_30);
      }
    else
      {
        t = t_30;
        t = (ATerm) ATempty;
      }
  }
  e_41 = t;
  t = term_p_30;
  {
    ATerm y_30 = t;
    int z_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_41 = NULL,l_41 = NULL;
        t = term_f_14;
        k_41 = t;
        t = term_p_30;
        l_41 = t;
        t = term_s_30;
        t = q_10(k_41, l_41, t);
        LocalPopChoice(z_30);
      }
    else
      {
        t = y_30;
        t = (ATerm) ATempty;
      }
  }
  f_41 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, f_41), t_40), s_40), e_41);
  t = concat_0_0(t);
  return(t);
}
ATerm parse_module_0_0 (ATerm t)
{
  ATerm x_41 = NULL,y_41 = NULL,z_41 = NULL;
  x_41 = t;
  if(match_cons(t, sym__2))
    {
      y_41 = ATgetArgument(t, 0);
      z_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_41;
  if(match_string(t, "rtree"))
    {
      ATerm a_31 = t;
      int b_31 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = a_42(y_41, z_41, x_41, t);
          LocalPopChoice(b_31);
        }
      else
        {
          t = a_31;
          t = d_42(z_41, x_41, t);
        }
    }
  else
    {
      t = a_42(y_41, z_41, x_41, t);
    }
  return(t);
}
ATerm debug_1_0 (ATerm o_109 (ATerm), ATerm t)
{
  ATerm f_42 = NULL,g_42 = NULL,n_42 = NULL,o_42 = NULL;
  f_42 = t;
  t = o_109(t);
  g_42 = t;
  t = term_q_25;
  n_42 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, f_42), g_42);
  o_42 = t;
  t = SSL_printnl(n_42, o_42);
  t = f_42;
  return(t);
}
ATerm if_verbose3_1_0 (ATerm e_127 (ATerm), ATerm t)
{
  ATerm q_42 = NULL;
  q_42 = t;
  {
    ATerm c_31 = t;
    int h_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_42 = NULL,v_42 = NULL,x_42 = NULL;
        t = term_f_14;
        v_42 = t;
        t = term_p_17;
        x_42 = t;
        t = term_s_17;
        t = q_10(v_42, x_42, t);
        s_42 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_42, term_x_18);
        t = geq_0_0(t);
        t = q_42;
        t = e_127(t);
        LocalPopChoice(h_31);
      }
    else
      {
        t = c_31;
        t = q_42;
      }
  }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm l_110 (ATerm), ATerm t)
{
  ATerm z_42 = NULL;
  static ATerm e_3 (ATerm t);
  static ATerm e_3 (ATerm t)
  {
    t = l_110(t);
    if(((z_42 != NULL) && (z_42 != t)))
      _fail(t);
    else
      z_42 = t;
    return(t);
  }
  t = fetch_1_0(e_3, t);
  t = not_null(z_42);
  return(t);
}
static ATerm i_10 (ATerm m_40, ATerm n_40, ATerm t)
{
  t = SSL_access(m_40, n_40);
  return(t);
}
ATerm is_relpath_0_0 (ATerm t)
{
  ATerm i_31 = t;
  if((PushChoice() == 0))
    {
      ATerm a_43 = NULL;
      a_43 = t;
      t = SSL_explode_string(a_43);
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
      t = a_43;
      PopChoice();
      _fail(t);
    }
  else
    {
      t = i_31;
    }
  return(t);
}
static ATerm p_9 (ATerm p_101 (ATerm), ATerm j_23, ATerm i_23, ATerm t)
{
  t = p_101(t);
  {
    ATerm n_31 = t;
    int o_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm f_3 (ATerm t);
        static ATerm f_3 (ATerm t)
        {
          ATerm j_43 = NULL;
          j_43 = t;
          {
            ATerm p_31 = t;
            int q_31 = stack_ptr;
            if((PushChoice() == 0))
              {
                static ATerm h_3 (ATerm t);
                static ATerm h_3 (ATerm t)
                {
                  ATerm l_43 = NULL,m_43 = NULL,n_43 = NULL,o_43 = NULL,p_43 = NULL;
                  m_43 = t;
                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, m_43), term_i_16), j_23), term_z_13), j_43);
                  p_43 = t;
                  t = SSL_concat_strings(p_43);
                  n_43 = t;
                  t = (ATerm) ATinsert(ATempty, term_v_13);
                  o_43 = t;
                  t = (ATerm) ATmakeAppl(sym__2, n_43, (ATerm) ATinsert(ATempty, term_v_13));
                  t = i_10(n_43, o_43, t);
                  l_43 = t;
                  t = (ATerm) ATmakeAppl(sym__2, m_43, (ATerm) ATmakeAppl(sym_FILE_1, l_43));
                  return(t);
                }
                t = j_23;
                t = is_relpath_0_0(t);
                t = i_23;
                t = fetch_elem_1_0(h_3, t);
                LocalPopChoice(q_31);
              }
            else
              {
                t = p_31;
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
                      ATerm r_31 = ATgetFirst((ATermList) t);
                      if(((ATgetType(r_31) != AT_INT) || (ATgetInt((ATermInt) r_31) != 47)))
                        _fail(t);
                      {
                        ATerm s_31 = (ATerm) ATgetNext((ATermList) t);
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
        LocalPopChoice(o_31);
      }
    else
      {
        t = n_31;
        {
          ATerm t_31 = t;
          int u_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              static ATerm p_3 (ATerm t);
              static ATerm p_3 (ATerm t)
              {
                ATerm q_43 = NULL,r_43 = NULL,u_43 = NULL,v_43 = NULL,w_43 = NULL,x_43 = NULL;
                q_43 = t;
                t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, q_43), term_i_16), j_23);
                x_43 = t;
                t = SSL_concat_strings(x_43);
                r_43 = t;
                t = term_t_27;
                v_43 = t;
                t = (ATerm) ATmakeAppl(sym_Tool_1, r_43);
                w_43 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_t_27, (ATerm) ATmakeAppl(sym_Tool_1, r_43));
                t = q_10(v_43, w_43, t);
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    ATerm w_31 = ATgetFirst((ATermList) t);
                    if(match_cons(w_31, sym__2))
                      {
                        ATerm y_31 = ATgetArgument(w_31, 0);
                        u_43 = ATgetArgument(w_31, 1);
                      }
                    else
                      _fail(t);
                    {
                      ATerm x_31 = (ATerm) ATgetNext((ATermList) t);
                    }
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym__2, q_43, (ATerm) ATmakeAppl(sym_FILE_1, u_43));
                return(t);
              }
              t = i_23;
              t = fetch_elem_1_0(p_3, t);
              LocalPopChoice(u_31);
            }
          else
            {
              t = t_31;
              {
                ATerm z_31 = t;
                int a_32 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm a_44 = NULL,b_44 = NULL;
                    t = term_f_14;
                    a_44 = t;
                    t = term_b_32;
                    b_44 = t;
                    t = term_e_32;
                    t = q_10(a_44, b_44, t);
                    LocalPopChoice(a_32);
                    {
                      ATerm c_44 = NULL,d_44 = NULL,e_44 = NULL,f_44 = NULL,g_44 = NULL;
                      c_44 = t;
                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_g_32), j_23), term_f_32);
                      g_44 = t;
                      t = SSL_concat_strings(g_44);
                      d_44 = t;
                      t = term_q_25;
                      e_44 = t;
                      t = (ATerm) ATinsert(ATempty, d_44);
                      f_44 = t;
                      t = SSL_printnl(e_44, f_44);
                      t = c_44;
                      _fail(t);
                    }
                  }
                else
                  {
                    t = z_31;
                    {
                      ATerm h_44 = NULL,i_44 = NULL,j_44 = NULL;
                      t = term_q_25;
                      i_44 = t;
                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_g_32), j_23), term_f_32);
                      j_44 = t;
                      t = SSL_printnl(i_44, j_44);
                      t = term_m_17;
                      h_44 = t;
                      t = SSL_exit(h_44);
                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_g_32), j_23), term_f_32);
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
  t = term_h_32;
  return(t);
}
ATerm get_module_1_0 (ATerm o_101 (ATerm), ATerm t)
{
  ATerm n_44 = NULL,o_44 = NULL,p_44 = NULL,q_44 = NULL;
  t = basename_1_0(_id, t);
  p_44 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_x_26), term_l_32), term_k_32), term_i_32);
  q_44 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_44, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_x_26), term_l_32), term_k_32), term_i_32));
  t = p_9(o_101, p_44, q_44, t);
  if(match_cons(t, sym__2))
    {
      ATerm q_32 = ATgetArgument(t, 0);
      ATerm r_32 = ATgetArgument(t, 1);
      if(match_cons(r_32, sym_FILE_1))
        {
          n_44 = ATgetArgument(r_32, 0);
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
      ATerm s_44 = NULL;
      s_44 = t;
      t = n_44;
      t = debug_1_0(a_4, t);
      t = s_44;
      return(t);
    }
    t = if_verbose3_1_0(r_3, t);
  }
  t = parse_module_0_0(t);
  o_44 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_44, o_44);
  return(t);
}
static ATerm r_9 (ATerm n_114 (ATerm), ATerm o_114 (ATerm), ATerm k_31, ATerm j_31, ATerm t)
{
  t = o_114(t);
  {
    static ATerm d_4 (ATerm t);
    static ATerm d_4 (ATerm t)
    {
      ATerm t_44 = NULL;
      t_44 = t;
      t = (ATerm) ATmakeAppl(sym__2, k_31, t_44);
      t = n_114(t);
      return(t);
    }
    t = fetch_1_0(d_4, t);
  }
  t = j_31;
  return(t);
}
static ATerm s_9 (ATerm f_114 (ATerm), ATerm e_31, ATerm d_31, ATerm t)
{
  static ATerm x_45 (ATerm t);
  static ATerm x_45 (ATerm t)
  {
    ATerm p_45 = NULL,q_45 = NULL,r_45 = NULL;
    p_45 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = p_45;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            q_45 = ATgetFirst((ATermList) t);
            r_45 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm s_32 = t;
          int t_32 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = p_45;
              {
                static ATerm h_4 (ATerm t);
                static ATerm h_4 (ATerm t)
                {
                  t = d_31;
                  return(t);
                }
                t = r_9(f_114, h_4, q_45, r_45, t);
              }
              t = x_45(t);
              LocalPopChoice(t_32);
            }
          else
            {
              t = s_32;
              {
                ATerm a_16 = NULL,j_16 = NULL,y_6 = NULL;
                t = SSLgetAnnotations(p_45);
                a_16 = t;
                t = r_45;
                t = x_45(t);
                j_16 = t;
                t = (ATerm) ATinsert(CheckATermList(j_16), q_45);
                y_6 = t;
                t = SSLsetAnnotations(y_6, a_16);
              }
            }
        }
      }
    return(t);
  }
  t = e_31;
  t = x_45(t);
  return(t);
}
static ATerm k_4 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm u_32 = ATgetArgument(t, 0);
      if(((ATgetType(u_32) != AT_LIST) || !(ATisEmpty(u_32))))
        _fail(t);
      {
        ATerm v_32 = ATgetArgument(t, 1);
        if(((ATgetType(v_32) != AT_LIST) || !(ATisEmpty(v_32))))
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
  ATerm j_46 = NULL,k_46 = NULL,l_46 = NULL,m_46 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm w_32 = ATgetArgument(t, 0);
      if(((ATgetType(w_32) == AT_LIST) && !(ATisEmpty(w_32))))
        {
          j_46 = ATgetFirst((ATermList) w_32);
          k_46 = (ATerm) ATgetNext((ATermList) w_32);
        }
      else
        _fail(t);
      {
        ATerm x_32 = ATgetArgument(t, 1);
        if(((ATgetType(x_32) == AT_LIST) && !(ATisEmpty(x_32))))
          {
            l_46 = ATgetFirst((ATermList) x_32);
            m_46 = (ATerm) ATgetNext((ATermList) x_32);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, j_46, l_46), (ATerm) ATmakeAppl(sym__2, k_46, m_46));
  return(t);
}
static ATerm m_4 (ATerm t)
{
  ATerm n_46 = NULL,o_46 = NULL;
  if(match_cons(t, sym__2))
    {
      n_46 = ATgetArgument(t, 0);
      o_46 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(o_46), n_46);
  return(t);
}
static ATerm x_9 (ATerm d_734, ATerm i_734, ATerm y_73, ATerm t)
{
  ATerm a_46 = NULL,b_46 = NULL,c_46 = NULL,h_46 = NULL;
  t = SSL_explode_term(i_734);
  if(match_cons(t, sym__2))
    {
      a_46 = ATgetArgument(t, 0);
      c_46 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(d_734);
  if(match_cons(t, sym__2))
    {
      if((a_46 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      b_46 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, b_46, c_46);
  t = genzip_4_0(k_4, l_4, m_4, _id, t);
  h_46 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_46, y_73);
  t = conc_0_0(t);
  return(t);
}
static ATerm o_4 (ATerm t)
{
  ATerm c_47 = NULL;
  c_47 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, c_47);
  return(t);
}
static ATerm p_4 (ATerm t)
{
  ATerm d_47 = NULL,e_47 = NULL,f_47 = NULL,g_47 = NULL,l_7 = NULL;
  g_47 = t;
  if(match_cons(t, sym__2))
    {
      e_47 = ATgetArgument(t, 0);
      f_47 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_47);
  d_47 = t;
  t = f_47;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, e_47, f_47);
  l_7 = t;
  t = SSLsetAnnotations(l_7, d_47);
  return(t);
}
static ATerm q_4 (ATerm t)
{
  ATerm k_48 = NULL,l_48 = NULL,m_48 = NULL,n_48 = NULL,o_48 = NULL;
  k_48 = t;
  if(match_cons(t, sym__2))
    {
      l_48 = ATgetArgument(t, 0);
      m_48 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_48;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_48 = ATgetFirst((ATermList) t);
      o_48 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm a_33 = t;
        int b_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = c_49(l_48, m_48, k_48, t);
            LocalPopChoice(b_33);
          }
        else
          {
            t = a_33;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(l_48), n_48), o_48);
          }
      }
    }
  else
    {
      t = c_49(l_48, m_48, k_48, t);
    }
  return(t);
}
static ATerm c_49 (ATerm h_47, ATerm i_47, ATerm j_47, ATerm t)
{
  ATerm k_47 = NULL,r_47 = NULL,e_8 = NULL,x_47 = NULL,y_47 = NULL,z_47 = NULL,e_48 = NULL;
  t = SSLgetAnnotations(j_47);
  k_47 = t;
  t = i_47;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_47 = ATgetFirst((ATermList) t);
      e_48 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = x_47;
  if(match_cons(t, sym__2))
    {
      y_47 = ATgetArgument(t, 0);
      z_47 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm e_33 = t;
    int f_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = z_47;
        if((y_47 != t))
          {
            _fail(t);
          }
        t = e_48;
        LocalPopChoice(f_33);
      }
    else
      {
        t = e_33;
        t = i_47;
        t = x_9(y_47, z_47, e_48, t);
      }
  }
  r_47 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_47, r_47);
  e_8 = t;
  t = SSLsetAnnotations(e_8, k_47);
  return(t);
}
static ATerm s_4 (ATerm t)
{
  ATerm z_48 = NULL;
  if(match_cons(t, sym__2))
    {
      z_48 = ATgetArgument(t, 0);
      if((z_48 != ATgetArgument(t, 1)))
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
  ATerm j_33 = t;
  int l_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(o_4, p_4, q_4, t);
      LocalPopChoice(l_33);
    }
  else
    {
      t = j_33;
      {
        ATerm t_48 = NULL,v_48 = NULL,w_48 = NULL;
        t_48 = t;
        if(match_cons(t, sym__2))
          {
            v_48 = ATgetArgument(t, 0);
            w_48 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = t_48;
        t = s_9(s_4, v_48, w_48, t);
      }
    }
  return(t);
}
static ATerm z_9 (ATerm q_137 (ATerm), ATerm r_137 (ATerm), ATerm s_137 (ATerm), ATerm q_77, ATerm n_77, ATerm u_77, ATerm r_77, ATerm o_77, ATerm p_77, ATerm t)
{
  ATerm i_49 = NULL,p_49 = NULL,q_49 = NULL,r_49 = NULL,s_49 = NULL,t_49 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, q_77, r_77);
  t = q_137(t);
  i_49 = t;
  t = r_137(t);
  p_49 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_49, u_77);
  t = diff_0_0(t);
  q_49 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_49, n_77);
  t = conc_0_0(t);
  r_49 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_49, u_77);
  t = conc_0_0(t);
  s_49 = t;
  t = (ATerm) ATmakeAppl(sym__3, q_77, i_49, o_77);
  t = s_137(t);
  t_49 = t;
  t = (ATerm) ATmakeAppl(sym__5, r_49, s_49, r_77, t_49, p_77);
  return(t);
}
ATerm GnNext_3_0 (ATerm q_137 (ATerm), ATerm r_137 (ATerm), ATerm s_137 (ATerm), ATerm t)
{
  ATerm v_49 = NULL,w_49 = NULL,y_49 = NULL,z_49 = NULL,b_50 = NULL,c_50 = NULL;
  if(match_cons(t, sym__5))
    {
      ATerm m_33 = ATgetArgument(t, 0);
      if(((ATgetType(m_33) == AT_LIST) && !(ATisEmpty(m_33))))
        {
          v_49 = ATgetFirst((ATermList) m_33);
          w_49 = (ATerm) ATgetNext((ATermList) m_33);
        }
      else
        _fail(t);
      y_49 = ATgetArgument(t, 1);
      z_49 = ATgetArgument(t, 2);
      b_50 = ATgetArgument(t, 3);
      c_50 = ATgetArgument(t, 4);
    }
  else
    _fail(t);
  t = z_9(q_137, r_137, s_137, v_49, w_49, y_49, z_49, b_50, c_50, t);
  return(t);
}
ATerm while_not_2_0 (ATerm e_103 (ATerm), ATerm f_103 (ATerm), ATerm t)
{
  static ATerm d_50 (ATerm t);
  static ATerm d_50 (ATerm t)
  {
    ATerm n_33 = t;
    int o_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_103(t);
        LocalPopChoice(o_33);
      }
    else
      {
        t = n_33;
        t = f_103(t);
        t = d_50(t);
      }
    return(t);
  }
  t = d_50(t);
  return(t);
}
ATerm for_3_0 (ATerm h_103 (ATerm), ATerm i_103 (ATerm), ATerm j_103 (ATerm), ATerm t)
{
  t = h_103(t);
  t = while_not_2_0(i_103, j_103, t);
  return(t);
}
static ATerm t_4 (ATerm t)
{
  ATerm h_50 = NULL,i_50 = NULL,j_50 = NULL;
  if(match_cons(t, sym__3))
    {
      h_50 = ATgetArgument(t, 0);
      i_50 = ATgetArgument(t, 1);
      j_50 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__5, h_50, h_50, i_50, j_50, (ATerm) ATempty);
  return(t);
}
static ATerm u_4 (ATerm t)
{
  ATerm m_50 = NULL,n_50 = NULL;
  if(match_cons(t, sym__5))
    {
      ATerm q_33 = ATgetArgument(t, 0);
      if(((ATgetType(q_33) != AT_LIST) || !(ATisEmpty(q_33))))
        _fail(t);
      {
        ATerm s_33 = ATgetArgument(t, 1);
      }
      {
        ATerm t_33 = ATgetArgument(t, 2);
      }
      m_50 = ATgetArgument(t, 3);
      n_50 = ATgetArgument(t, 4);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, m_50, n_50);
  return(t);
}
ATerm graph_nodes_roots_3_0 (ATerm n_137 (ATerm), ATerm o_137 (ATerm), ATerm p_137 (ATerm), ATerm t)
{
  ATerm g_50 = NULL;
  static ATerm v_4 (ATerm t);
  static ATerm v_4 (ATerm t)
  {
    ATerm y_33 = t;
    int a_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = GnNext_3_0(n_137, o_137, p_137, t);
        LocalPopChoice(a_34);
      }
    else
      {
        t = y_33;
        {
          ATerm q_50 = NULL,s_50 = NULL,u_50 = NULL,v_50 = NULL,w_50 = NULL,x_50 = NULL,y_50 = NULL;
          if(match_cons(t, sym__5))
            {
              q_50 = ATgetArgument(t, 0);
              v_50 = ATgetArgument(t, 1);
              w_50 = ATgetArgument(t, 2);
              x_50 = ATgetArgument(t, 3);
              y_50 = ATgetArgument(t, 4);
            }
          else
            _fail(t);
          t = q_50;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              s_50 = ATgetFirst((ATermList) t);
              u_50 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__5, u_50, v_50, w_50, x_50, (ATerm) ATinsert(CheckATermList(y_50), s_50));
        }
      }
    return(t);
  }
  t = for_3_0(t_4, u_4, v_4, t);
  if(match_cons(t, sym__2))
    {
      g_50 = ATgetArgument(t, 0);
      {
        ATerm b_34 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = g_50;
  return(t);
}
ATerm filter_1_0 (ATerm c_118 (ATerm), ATerm t)
{
  ATerm y_51 = NULL,b_52 = NULL,c_52 = NULL;
  y_51 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = y_51;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          b_52 = ATgetFirst((ATermList) t);
          c_52 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm c_34 = t;
        int d_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_17 = NULL,d_17 = NULL,g_17 = NULL,z_8 = NULL;
            t = SSLgetAnnotations(y_51);
            a_17 = t;
            t = b_52;
            t = c_118(t);
            d_17 = t;
            t = c_52;
            t = filter_1_0(c_118, t);
            g_17 = t;
            t = (ATerm) ATinsert(CheckATermList(g_17), d_17);
            z_8 = t;
            t = SSLsetAnnotations(z_8, a_17);
            LocalPopChoice(d_34);
          }
        else
          {
            t = c_34;
            t = c_52;
            t = filter_1_0(c_118, t);
          }
      }
    }
  return(t);
}
static ATerm w_4 (ATerm t)
{
  ATerm e_34 = t;
  if((PushChoice() == 0))
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-I", 0, ATtrue)))
        _fail(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = e_34;
    }
  return(t);
}
static ATerm a_5 (ATerm t)
{
  ATerm x_52 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm f_34 = ATgetArgument(t, 0);
      ATerm g_34 = ATgetArgument(t, 1);
      if(match_cons(g_34, sym_Specification_1))
        {
          x_52 = ATgetArgument(g_34, 0);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  t = c_9(x_52, t);
  return(t);
}
static ATerm d_5 (ATerm t)
{
  ATerm y_52 = NULL,z_52 = NULL;
  if(match_cons(t, sym__3))
    {
      ATerm i_34 = ATgetArgument(t, 0);
      y_52 = ATgetArgument(t, 1);
      z_52 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(z_52), y_52);
  return(t);
}
static ATerm l_5 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_p_34;
  return(t);
}
static ATerm n_5 (ATerm t)
{
  ATerm a_53 = NULL,f_53 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_53 = ATgetFirst((ATermList) t);
      f_53 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, a_53, f_53);
  return(t);
}
static ATerm o_5 (ATerm t)
{
  ATerm i_53 = NULL,k_53 = NULL,l_53 = NULL,m_53 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm t_34 = ATgetArgument(t, 0);
      if(match_cons(t_34, sym__2))
        {
          i_53 = ATgetArgument(t_34, 0);
          k_53 = ATgetArgument(t_34, 1);
        }
      else
        _fail(t);
      {
        ATerm u_34 = ATgetArgument(t, 1);
        if(match_cons(u_34, sym__2))
          {
            l_53 = ATgetArgument(u_34, 0);
            m_53 = ATgetArgument(u_34, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(l_53), i_53), (ATerm) ATinsert(CheckATermList(m_53), k_53));
  return(t);
}
static ATerm c_10 (ATerm z_22, ATerm t)
{
  ATerm i_52 = NULL,k_52 = NULL,l_52 = NULL,m_52 = NULL,n_52 = NULL,p_52 = NULL,y_10 = NULL;
  ATerm v_34 = t;
  int w_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_52 = NULL,t_52 = NULL;
      t = term_f_14;
      s_52 = t;
      t = term_p_30;
      t_52 = t;
      t = term_s_30;
      t = q_10(s_52, t_52, t);
      t = filter_1_0(w_4, t);
      LocalPopChoice(w_34);
    }
  else
    {
      t = v_34;
      t = (ATerm) ATempty;
    }
  i_52 = t;
  t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATinsert(ATempty, z_22), term_q_15, (ATerm) ATempty);
  {
    static ATerm x_4 (ATerm t);
    static ATerm x_4 (ATerm t)
    {
      ATerm u_52 = NULL,v_52 = NULL;
      static ATerm k_5 (ATerm t);
      static ATerm k_5 (ATerm t)
      {
        t = (ATerm) ATinsert(CheckATermList(i_52), term_i_16);
        return(t);
      }
      v_52 = t;
      t = SSL_explode_term(v_52);
      if(match_cons(t, sym__2))
        {
          ATerm y_34 = ATgetArgument(t, 0);
          if((ATgetSymbol((ATermAppl) y_34) != ATmakeSymbol("", 0, ATtrue)))
            _fail(t);
          {
            ATerm z_34 = ATgetArgument(t, 1);
            if(((ATgetType(z_34) == AT_LIST) && !(ATisEmpty(z_34))))
              {
                u_52 = ATgetFirst((ATermList) z_34);
                {
                  ATerm q_35 = (ATerm) ATgetNext((ATermList) z_34);
                }
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = u_52;
      t = get_module_1_0(k_5, t);
      return(t);
    }
    t = graph_nodes_roots_3_0(x_4, a_5, d_5, t);
  }
  t = genzip_4_0(l_5, n_5, o_5, _id, t);
  p_52 = t;
  if(match_cons(t, sym__2))
    {
      l_52 = ATgetArgument(t, 0);
      m_52 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_52);
  k_52 = t;
  t = m_52;
  t = flatten_stratego_0_0(t);
  n_52 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_52, n_52);
  y_10 = t;
  t = SSLsetAnnotations(y_10, k_52);
  return(t);
}
static ATerm k_10 (ATerm w_56, ATerm x_56, ATerm t)
{
  ATerm o_53 = NULL,q_53 = NULL;
  q_53 = t;
  {
    ATerm s_35 = t;
    int u_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, w_56, x_56);
        t = q_10(w_56, x_56, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm w_35 = ATgetFirst((ATermList) t);
            o_53 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(u_35);
        {
          ATerm t_53 = NULL;
          t = (ATerm) ATmakeAppl(sym__3, w_56, x_56, o_53);
          t = lookup_table_0_1(w_56, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              t_53 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = u_10(x_56, o_53, t_53, t);
          t = (ATerm) ATmakeAppl(sym__3, w_56, x_56, o_53);
        }
      }
    else
      {
        t = s_35;
        {
          ATerm z_53 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, w_56, x_56);
          t = lookup_table_0_1(w_56, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              z_53 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = n_10(x_56, z_53, t);
          t = (ATerm) ATmakeAppl(sym__2, w_56, x_56);
        }
      }
  }
  t = q_53;
  return(t);
}
ATerm end_scope_1_0 (ATerm j_123 (ATerm), ATerm t)
{
  ATerm b_54 = NULL,d_54 = NULL,e_54 = NULL,h_54 = NULL,j_54 = NULL,k_54 = NULL,l_54 = NULL;
  h_54 = t;
  t = j_123(t);
  e_54 = t;
  {
    ATerm z_35 = t;
    int b_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_54 = NULL;
        t = term_b_15;
        m_54 = t;
        t = (ATerm) ATmakeAppl(sym__2, e_54, term_b_15);
        t = q_10(e_54, m_54, t);
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
        LocalPopChoice(b_36);
      }
    else
      {
        t = z_35;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      d_54 = ATgetFirst((ATermList) t);
      b_54 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, e_54, term_b_15, b_54);
  t = lookup_table_0_1(e_54, t);
  l_54 = t;
  t = term_b_15;
  j_54 = t;
  t = l_54;
  if(match_cons(t, sym_Hashtable_1))
    {
      k_54 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_10(j_54, b_54, k_54, t);
  t = d_54;
  {
    static ATerm p_5 (ATerm t);
    static ATerm p_5 (ATerm t)
    {
      ATerm n_54 = NULL;
      n_54 = t;
      t = (ATerm) ATmakeAppl(sym__2, e_54, n_54);
      t = k_10(e_54, n_54, t);
      return(t);
    }
    t = map_1_0(p_5, t);
  }
  t = h_54;
  return(t);
}
ATerm restore_always_2_0 (ATerm j_102 (ATerm), ATerm k_102 (ATerm), ATerm t)
{
  ATerm e_36 = t;
  int f_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = j_102(t);
      t = k_102(t);
      LocalPopChoice(f_36);
    }
  else
    {
      t = e_36;
      t = k_102(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm i_123 (ATerm), ATerm t)
{
  ATerm r_54 = NULL,s_54 = NULL,t_54 = NULL,v_54 = NULL,w_54 = NULL,z_54 = NULL,a_55 = NULL;
  s_54 = t;
  t = i_123(t);
  r_54 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_54, term_b_15);
  {
    ATerm h_36 = t;
    int j_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_55 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm k_36 = ATgetArgument(t, 0);
            ATerm n_36 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_b_15;
        k_55 = t;
        t = (ATerm) ATmakeAppl(sym__2, r_54, term_b_15);
        t = q_10(r_54, k_55, t);
        LocalPopChoice(j_36);
      }
    else
      {
        t = h_36;
        t = (ATerm) ATempty;
      }
  }
  t_54 = t;
  t = (ATerm) ATmakeAppl(sym__3, r_54, term_b_15, (ATerm) ATinsert(CheckATermList(t_54), (ATerm) ATempty));
  t = lookup_table_0_1(r_54, t);
  a_55 = t;
  t = term_b_15;
  v_54 = t;
  t = (ATerm) ATinsert(CheckATermList(t_54), (ATerm) ATempty);
  w_54 = t;
  t = a_55;
  if(match_cons(t, sym_Hashtable_1))
    {
      z_54 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_10(v_54, w_54, z_54, t);
  t = s_54;
  return(t);
}
static ATerm r_5 (ATerm t)
{
  t = term_l_15;
  return(t);
}
static ATerm u_5 (ATerm t)
{
  ATerm v_55 = NULL;
  v_55 = t;
  {
    ATerm o_36 = t;
    int p_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(v_55);
        LocalPopChoice(p_36);
      }
    else
      {
        t = o_36;
        t = v_55;
      }
  }
  return(t);
}
static ATerm w_5 (ATerm t)
{
  t = term_l_15;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm d_136 (ATerm), ATerm t)
{
  ATerm n_55 = NULL;
  static ATerm t_5 (ATerm t);
  static ATerm t_5 (ATerm t)
  {
    ATerm o_55 = NULL;
    o_55 = t;
    {
      ATerm r_36 = t;
      int s_36 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm r_55 = NULL,s_55 = NULL;
          t = term_l_15;
          r_55 = t;
          t = term_b_15;
          s_55 = t;
          t = term_x_36;
          t = q_10(r_55, s_55, t);
          LocalPopChoice(s_36);
        }
      else
        {
          t = r_36;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
        }
    }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((n_55 != NULL) && (n_55 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          n_55 = ATgetFirst((ATermList) t);
        {
          ATerm y_36 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    t = n_55;
    t = map_1_0(u_5, t);
    t = o_55;
    t = end_scope_1_0(w_5, t);
    return(t);
  }
  t = begin_scope_1_0(r_5, t);
  t = restore_always_2_0(d_136, t_5, t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm a_56 = NULL,b_56 = NULL,e_56 = NULL,f_56 = NULL,i_56 = NULL;
  a_56 = t;
  t = term_q_15;
  t = whoami_0_0(t);
  b_56 = t;
  t = term_q_25;
  f_56 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_i_37), b_56), term_d_37);
  i_56 = t;
  t = SSL_printnl(f_56, i_56);
  t = term_m_17;
  e_56 = t;
  t = SSL_exit(e_56);
  t = a_56;
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
  ATerm m_56 = NULL,n_56 = NULL,t_56 = NULL;
  m_56 = t;
  t = SSL_string_to_int(m_56);
  n_56 = t;
  t = term_i_17;
  t_56 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_i_17, n_56);
  t = t_10(t_56, n_56, t);
  t = m_56;
  return(t);
}
static ATerm z_5 (ATerm t)
{
  t = term_j_37;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(x_5, y_5, z_5, t);
  return(t);
}
static ATerm b_6 (ATerm t)
{
  ATerm y_56 = NULL;
  y_56 = t;
  if(match_string(t, "-S"))
    {
      t = y_56;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = y_56;
    }
  return(t);
}
static ATerm c_6 (ATerm t)
{
  ATerm z_56 = NULL,a_57 = NULL;
  t = term_p_17;
  z_56 = t;
  t = term_m_37;
  a_57 = t;
  t = term_n_37;
  t = t_10(z_56, a_57, t);
  t = term_o_37;
  return(t);
}
static ATerm e_6 (ATerm t)
{
  t = term_p_37;
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
  ATerm b_57 = NULL,c_57 = NULL,d_57 = NULL;
  b_57 = t;
  t = SSL_string_to_int(b_57);
  c_57 = t;
  t = term_p_17;
  d_57 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_17, c_57);
  t = t_10(d_57, c_57, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, b_57);
  return(t);
}
static ATerm m_6 (ATerm t)
{
  t = term_q_37;
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
  ATerm e_57 = NULL,f_57 = NULL;
  t = term_r_37;
  e_57 = t;
  t = term_q_15;
  f_57 = t;
  t = term_s_37;
  t = t_10(e_57, f_57, t);
  t = term_t_37;
  return(t);
}
static ATerm t_6 (ATerm t)
{
  t = term_u_37;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm v_37 = t;
  int w_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(b_6, c_6, e_6, t);
      LocalPopChoice(w_37);
    }
  else
    {
      t = v_37;
      {
        ATerm y_37 = t;
        int f_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(h_6, i_6, m_6, t);
            LocalPopChoice(f_38);
          }
        else
          {
            t = y_37;
            t = Option_3_0(r_6, s_6, t_6, t);
          }
      }
    }
  return(t);
}
static ATerm t_10 (ATerm s_78, ATerm t_78, ATerm t)
{
  ATerm g_57 = NULL,i_57 = NULL;
  t = term_f_14;
  g_57 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_f_14, s_78, t_78);
  t = lookup_table_0_1(g_57, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      i_57 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_10(s_78, t_78, i_57, t);
  t = (ATerm) ATmakeAppl(sym__3, term_f_14, s_78, t_78);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm u_57 = NULL,v_57 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm w_57 = NULL,b_58 = NULL,h_58 = NULL;
      t = term_q_15;
      t = g_0(t);
      w_57 = t;
      t = term_g_38;
      b_58 = t;
      t = term_i_38;
      h_58 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_g_38, term_i_38, w_57);
      t = r_10(b_58, h_58, w_57, t);
      _fail(t);
    }
  else
    {
      ATerm m_58 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          u_57 = ATgetFirst((ATermList) t);
          v_57 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = u_57;
      t = d_0(t);
      t = term_q_15;
      t = f_0(t);
      m_58 = t;
      t = (ATerm) ATinsert(CheckATermList(v_57), m_58);
    }
  return(t);
}
static ATerm v_6 (ATerm t)
{
  ATerm o_58 = NULL;
  o_58 = t;
  if(match_string(t, "-o"))
    {
      t = o_58;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = o_58;
    }
  return(t);
}
static ATerm w_6 (ATerm t)
{
  ATerm q_58 = NULL,r_58 = NULL;
  q_58 = t;
  t = term_h_14;
  r_58 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_14, q_58);
  t = t_10(r_58, q_58, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, q_58);
  return(t);
}
static ATerm x_6 (ATerm t)
{
  t = term_j_38;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(v_6, w_6, x_6, t);
  return(t);
}
static ATerm z_6 (ATerm t)
{
  ATerm t_58 = NULL;
  t_58 = t;
  if(match_string(t, "-i"))
    {
      t = t_58;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = t_58;
    }
  return(t);
}
static ATerm b_7 (ATerm t)
{
  ATerm u_58 = NULL,v_58 = NULL;
  u_58 = t;
  t = term_j_29;
  v_58 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_29, u_58);
  t = t_10(v_58, u_58, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, u_58);
  return(t);
}
static ATerm c_7 (ATerm t)
{
  t = term_m_38;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(z_6, b_7, c_7, t);
  return(t);
}
static ATerm r_10 (ATerm r_56, ATerm s_56, ATerm q_56, ATerm t)
{
  ATerm x_58 = NULL,y_58 = NULL,z_58 = NULL,a_59 = NULL,b_59 = NULL;
  x_58 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_56, s_56);
  {
    ATerm n_38 = t;
    int o_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm p_38 = ATgetArgument(t, 0);
            ATerm s_38 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, r_56, s_56);
        t = q_10(r_56, s_56, t);
        LocalPopChoice(o_38);
      }
    else
      {
        t = n_38;
        t = (ATerm) ATempty;
      }
  }
  y_58 = t;
  t = (ATerm) ATmakeAppl(sym__3, r_56, s_56, (ATerm) ATinsert(CheckATermList(y_58), q_56));
  t = lookup_table_0_1(r_56, t);
  b_59 = t;
  t = (ATerm) ATinsert(CheckATermList(y_58), q_56);
  z_58 = t;
  t = b_59;
  if(match_cons(t, sym_Hashtable_1))
    {
      a_59 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_10(s_56, z_58, a_59, t);
  t = x_58;
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
      t = term_g_38;
      y_59 = t;
      t = term_i_38;
      z_59 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_g_38, term_i_38, x_59);
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
ATerm at_end_1_0 (ATerm q_110 (ATerm), ATerm t)
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
        t = q_110(t);
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
static ATerm k_62 (ATerm w_61, ATerm t)
{
  ATerm x_61 = NULL;
  t = SSL_explode_term(w_61);
  if(match_cons(t, sym__2))
    {
      ATerm w_38 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) w_38) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      x_61 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_61;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm b_62 = NULL,e_62 = NULL,f_62 = NULL;
  f_62 = t;
  if(match_cons(t, sym__2))
    {
      b_62 = ATgetArgument(t, 0);
      e_62 = ATgetArgument(t, 1);
      {
        ATerm d_39 = t;
        int g_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm e_7 (ATerm t);
            static ATerm e_7 (ATerm t)
            {
              t = e_62;
              return(t);
            }
            t = b_62;
            t = at_end_1_0(e_7, t);
            LocalPopChoice(g_39);
          }
        else
          {
            t = d_39;
            t = k_62(f_62, t);
          }
      }
    }
  else
    {
      t = k_62(f_62, t);
    }
  return(t);
}
static ATerm d_10 (ATerm z_78, ATerm a_79, ATerm t)
{
  ATerm l_62 = NULL,m_62 = NULL,n_62 = NULL,q_62 = NULL;
  t = z_78;
  {
    ATerm h_39 = t;
    int i_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_62 = NULL;
        t = term_f_14;
        u_62 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_f_14, z_78);
        t = q_10(u_62, z_78, t);
        LocalPopChoice(i_39);
      }
    else
      {
        t = h_39;
        t = (ATerm) ATempty;
      }
  }
  m_62 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_62, a_79);
  t = conc_0_0(t);
  l_62 = t;
  t = term_f_14;
  n_62 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_f_14, z_78, l_62);
  t = lookup_table_0_1(n_62, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      q_62 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_10(z_78, l_62, q_62, t);
  t = (ATerm) ATmakeAppl(sym__3, term_f_14, z_78, l_62);
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
  ATerm a_63 = NULL,b_63 = NULL,g_63 = NULL;
  a_63 = t;
  t = term_p_30;
  b_63 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, a_63), term_p_30);
  g_63 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_30, (ATerm) ATinsert(ATinsert(ATempty, a_63), term_p_30));
  t = d_10(b_63, g_63, t);
  t = term_q_15;
  return(t);
}
static ATerm q_7 (ATerm t)
{
  t = term_j_39;
  return(t);
}
static ATerm s_7 (ATerm t)
{
  ATerm h_63 = NULL;
  h_63 = t;
  if(match_string(t, "--nodep"))
    {
      t = h_63;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-nodep", 0, ATtrue)))
        _fail(t);
      t = h_63;
    }
  return(t);
}
static ATerm v_7 (ATerm t)
{
  ATerm i_63 = NULL,k_63 = NULL;
  t = term_g_16;
  i_63 = t;
  t = term_k_39;
  k_63 = t;
  t = term_l_39;
  t = t_10(i_63, k_63, t);
  t = term_q_15;
  return(t);
}
static ATerm y_7 (ATerm t)
{
  t = term_m_39;
  return(t);
}
static ATerm b_8 (ATerm t)
{
  ATerm l_63 = NULL;
  l_63 = t;
  if(match_string(t, "--dep"))
    {
      t = l_63;
    }
  else
    {
      if(match_string(t, "-d"))
        {
          t = l_63;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-dep", 0, ATtrue)))
            _fail(t);
          t = l_63;
        }
    }
  return(t);
}
static ATerm c_8 (ATerm t)
{
  ATerm p_63 = NULL,q_63 = NULL;
  p_63 = t;
  t = term_d_16;
  q_63 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_16, p_63);
  t = t_10(q_63, p_63, t);
  t = term_q_15;
  return(t);
}
static ATerm f_8 (ATerm t)
{
  t = term_q_39;
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
  ATerm t_63 = NULL,w_63 = NULL;
  t = term_r_39;
  t_63 = t;
  t = term_q_15;
  w_63 = t;
  t = term_s_39;
  t = t_10(t_63, w_63, t);
  t = term_q_15;
  return(t);
}
static ATerm j_8 (ATerm t)
{
  t = term_u_39;
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
  ATerm x_63 = NULL,a_64 = NULL;
  t = term_b_32;
  x_63 = t;
  t = term_q_15;
  a_64 = t;
  t = term_v_39;
  t = t_10(x_63, a_64, t);
  t = term_q_15;
  return(t);
}
static ATerm o_8 (ATerm t)
{
  t = term_w_39;
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
  t = term_j_30;
  c_64 = t;
  t = term_k_39;
  d_64 = t;
  t = term_y_39;
  t = t_10(c_64, d_64, t);
  t = term_q_15;
  return(t);
}
static ATerm s_8 (ATerm t)
{
  t = term_z_39;
  return(t);
}
ATerm pack_stratego_options_0_0 (ATerm t)
{
  ATerm a_40 = t;
  int b_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ArgOption_3_0(h_7, i_7, q_7, t);
      LocalPopChoice(b_40);
    }
  else
    {
      t = a_40;
      {
        ATerm c_40 = t;
        int d_40 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Option_3_0(s_7, v_7, y_7, t);
            LocalPopChoice(d_40);
          }
        else
          {
            t = c_40;
            {
              ATerm f_40 = t;
              int g_40 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = ArgOption_3_0(b_8, c_8, f_8, t);
                  LocalPopChoice(g_40);
                }
              else
                {
                  t = f_40;
                  {
                    ATerm u_40 = t;
                    int v_40 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Option_3_0(g_8, i_8, j_8, t);
                        LocalPopChoice(v_40);
                      }
                    else
                      {
                        t = u_40;
                        {
                          ATerm a_41 = t;
                          int b_41 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Option_3_0(k_8, n_8, o_8, t);
                              LocalPopChoice(b_41);
                            }
                          else
                            {
                              t = a_41;
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
  ATerm h_64 = NULL,i_64 = NULL,j_64 = NULL,k_64 = NULL;
  t = report_run_time_0_0(t);
  t = term_q_15;
  t = whoami_0_0(t);
  h_64 = t;
  t = term_q_25;
  j_64 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_c_41), h_64);
  k_64 = t;
  t = SSL_printnl(j_64, k_64);
  t = term_m_17;
  i_64 = t;
  t = SSL_exit(i_64);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm n_64 = NULL,o_64 = NULL;
  t = term_f_14;
  n_64 = t;
  t = term_d_41;
  o_64 = t;
  t = term_g_41;
  t = q_10(n_64, o_64, t);
  return(t);
}
static ATerm l_10 (ATerm s_43, ATerm t_43, ATerm t)
{
  ATerm n_41 = t;
  int o_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(s_43, t_43);
      LocalPopChoice(o_41);
    }
  else
    {
      t = n_41;
      t = SSL_addr(s_43, t_43);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm y_116 (ATerm), ATerm z_116 (ATerm), ATerm t)
{
  ATerm s_64 = NULL,u_64 = NULL,v_64 = NULL;
  s_64 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = s_64;
      t = y_116(t);
    }
  else
    {
      ATerm b_65 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          u_64 = ATgetFirst((ATermList) t);
          v_64 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = v_64;
      t = foldr_2_0(y_116, z_116, t);
      b_65 = t;
      t = (ATerm) ATmakeAppl(sym__2, u_64, b_65);
      t = z_116(t);
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
  t = term_m_37;
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
  ATerm e_65 = NULL,q_18 = NULL,r_18 = NULL;
  t = times_0_0(t);
  r_18 = t;
  t = SSL_explode_term(r_18);
  if(match_cons(t, sym__2))
    {
      ATerm t_41 = ATgetArgument(t, 0);
      q_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_18;
  t = foldr_2_0(v_8, h_9, t);
  e_65 = t;
  t = SSL_TicksToSeconds(e_65);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm p_65 = NULL,q_65 = NULL,r_65 = NULL;
  p_65 = t;
  if(match_cons(t, sym__2))
    {
      q_65 = ATgetArgument(t, 0);
      r_65 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm b_42 = t;
    int c_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_65;
        if((q_65 != t))
          {
            _fail(t);
          }
        t = p_65;
        LocalPopChoice(c_42);
      }
    else
      {
        t = b_42;
        t = (ATerm) ATmakeAppl(sym__2, q_65, r_65);
        {
          ATerm e_42 = t;
          int h_42 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(q_65, r_65);
              LocalPopChoice(h_42);
            }
          else
            {
              t = e_42;
              t = SSL_gtr(q_65, r_65);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, q_65, r_65);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm c_127 (ATerm), ATerm t)
{
  ATerm v_65 = NULL;
  v_65 = t;
  {
    ATerm i_42 = t;
    int j_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_65 = NULL,y_65 = NULL,z_65 = NULL;
        t = term_f_14;
        y_65 = t;
        t = term_p_17;
        z_65 = t;
        t = term_s_17;
        t = q_10(y_65, z_65, t);
        x_65 = t;
        t = (ATerm) ATmakeAppl(sym__2, x_65, term_m_17);
        t = geq_0_0(t);
        t = v_65;
        t = c_127(t);
        LocalPopChoice(j_42);
      }
    else
      {
        t = i_42;
        t = v_65;
      }
  }
  return(t);
}
static ATerm t_9 (ATerm t)
{
  ATerm b_66 = NULL,c_66 = NULL,e_66 = NULL,f_66 = NULL;
  t = run_time_0_0(t);
  b_66 = t;
  t = term_q_15;
  t = whoami_0_0(t);
  c_66 = t;
  t = term_q_25;
  e_66 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_k_42), b_66), term_w_17), c_66);
  f_66 = t;
  t = SSL_printnl(e_66, f_66);
  t = (ATerm) ATmakeAppl(sym__2, term_q_25, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_k_42), b_66), term_w_17), c_66));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(t_9, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm g_66 = NULL;
  t = report_run_time_0_0(t);
  t = term_m_37;
  g_66 = t;
  t = SSL_exit(g_66);
  return(t);
}
static ATerm w_9 (ATerm t)
{
  ATerm a_67 = NULL,b_67 = NULL;
  b_67 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = b_67;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          a_67 = ATgetArgument(t, 0);
          {
            ATerm q_19 = NULL,f_11 = NULL;
            t = SSLgetAnnotations(b_67);
            q_19 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, a_67);
            f_11 = t;
            t = SSLsetAnnotations(f_11, q_19);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = b_67;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm q_128 (ATerm), ATerm t)
{
  ATerm l_42 = t;
  int m_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_66 = NULL,n_66 = NULL;
      t = term_f_14;
      m_66 = t;
      t = term_p_42;
      n_66 = t;
      t = term_r_42;
      t = q_10(m_66, n_66, t);
      LocalPopChoice(m_42);
    }
  else
    {
      t = l_42;
      t = fetch_1_0(w_9, t);
    }
  t = q_128(t);
  return(t);
}
static ATerm u_10 (ATerm j_61, ATerm k_61, ATerm l_61, ATerm t)
{
  ATerm d_67 = NULL;
  t = SSL_hashtable_put(l_61, j_61, k_61);
  d_67 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, d_67);
  return(t);
}
static ATerm v_10 (ATerm m_61, ATerm n_61, ATerm t)
{
  t = SSL_hashtable_get(n_61, m_61);
  return(t);
}
ATerm lookup_table_0_1 (ATerm d_58, ATerm t)
{
  ATerm m_67 = NULL;
  t = table_hashtable_0_0(t);
  m_67 = t;
  {
    ATerm t_42 = t;
    int u_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_20 = NULL;
        t = m_67;
        if(match_cons(t, sym_Hashtable_1))
          {
            c_20 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = v_10(d_58, c_20, t);
        LocalPopChoice(u_42);
      }
    else
      {
        t = t_42;
        {
          ATerm l_20 = NULL;
          t = d_58;
          t = table_create_0_0(t);
          t = m_67;
          if(match_cons(t, sym_Hashtable_1))
            {
              l_20 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = v_10(d_58, l_20, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm r_61, ATerm s_61, ATerm t)
{
  ATerm c_68 = NULL;
  t = SSL_hashtable_create(r_61, s_61);
  c_68 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, c_68);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm d_68 = NULL,e_68 = NULL,h_68 = NULL,j_68 = NULL,k_68 = NULL;
  d_68 = t;
  t = term_w_42;
  j_68 = t;
  t = term_y_42;
  k_68 = t;
  t = d_68;
  t = new_hashtable_0_2(j_68, k_68, t);
  e_68 = t;
  t = d_68;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      h_68 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_10(d_68, e_68, h_68, t);
  t = d_68;
  return(t);
}
static ATerm n_10 (ATerm o_61, ATerm p_61, ATerm t)
{
  ATerm l_68 = NULL;
  t = SSL_hashtable_remove(p_61, o_61);
  l_68 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, l_68);
  return(t);
}
static ATerm o_10 (ATerm t_61, ATerm t)
{
  ATerm m_68 = NULL;
  t = SSL_hashtable_destroy(t_61);
  m_68 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, m_68);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm n_68 = NULL;
  t = SSL_table_hashtable();
  n_68 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, n_68);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm o_68 = NULL,p_68 = NULL,q_68 = NULL,r_68 = NULL;
  o_68 = t;
  t = table_hashtable_0_0(t);
  p_68 = t;
  t = lookup_table_0_1(o_68, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      r_68 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = o_10(r_68, t);
  t = p_68;
  if(match_cons(t, sym_Hashtable_1))
    {
      q_68 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = n_10(o_68, q_68, t);
  t = o_68;
  return(t);
}
ATerm reverse_acc_2_0 (ATerm h_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm t_68 = NULL,u_68 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_68 = ATgetFirst((ATermList) t);
      u_68 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm y_68 = NULL,z_68 = NULL;
        static ATerm b_10 (ATerm t);
        static ATerm b_10 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(y_68)), not_null(z_68));
          return(t);
        }
        t = u_68;
        t = j_0(t);
        if(((y_68 != NULL) && (y_68 != t)))
          _fail(t);
        else
          y_68 = t;
        t = t_68;
        t = h_0(t);
        if(((z_68 != NULL) && (z_68 != t)))
          _fail(t);
        else
          z_68 = t;
        t = u_68;
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
  ATerm f_69 = NULL,g_69 = NULL,h_69 = NULL,k_11 = NULL;
  h_69 = t;
  if(match_cons(t, sym_Program_1))
    {
      g_69 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_69);
  f_69 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, g_69);
  k_11 = t;
  t = SSLsetAnnotations(k_11, f_69);
  return(t);
}
static ATerm f_10 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm m_10 (ATerm t)
{
  ATerm j_69 = NULL;
  j_69 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, j_69), term_b_43);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm b_69 = NULL,c_69 = NULL;
  ATerm c_43 = t;
  int d_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_69 = NULL,e_69 = NULL;
      t = term_f_14;
      d_69 = t;
      t = term_d_41;
      e_69 = t;
      t = term_g_41;
      t = q_10(d_69, e_69, t);
      LocalPopChoice(d_43);
    }
  else
    {
      t = c_43;
      t = fetch_1_0(e_10, t);
    }
  t = term_e_43;
  t = echo_0_0(t);
  t = term_g_38;
  b_69 = t;
  t = term_i_38;
  c_69 = t;
  t = term_f_43;
  t = q_10(b_69, c_69, t);
  t = reverse_acc_2_0(_id, f_10, t);
  t = map_1_0(m_10, t);
  return(t);
}
ATerm fetch_1_0 (ATerm j_110 (ATerm), ATerm t)
{
  static ATerm g_70 (ATerm t);
  static ATerm g_70 (ATerm t)
  {
    ATerm d_70 = NULL,e_70 = NULL,f_70 = NULL;
    d_70 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        e_70 = ATgetFirst((ATermList) t);
        f_70 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm g_43 = t;
      int h_43 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm x_20 = NULL,e_21 = NULL,n_11 = NULL;
          t = SSLgetAnnotations(d_70);
          x_20 = t;
          t = e_70;
          t = j_110(t);
          e_21 = t;
          t = (ATerm) ATinsert(CheckATermList(f_70), e_21);
          n_11 = t;
          t = SSLsetAnnotations(n_11, x_20);
          LocalPopChoice(h_43);
        }
      else
        {
          t = g_43;
          {
            ATerm d_22 = NULL,j_22 = NULL,y_11 = NULL;
            t = SSLgetAnnotations(d_70);
            d_22 = t;
            t = f_70;
            t = g_70(t);
            j_22 = t;
            t = (ATerm) ATinsert(CheckATermList(j_22), e_70);
            y_11 = t;
            t = SSLsetAnnotations(y_11, d_22);
          }
        }
    }
    return(t);
  }
  t = g_70(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm k_70 = NULL,l_70 = NULL,m_70 = NULL;
  k_70 = t;
  {
    ATerm i_43 = t;
    int k_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = k_70;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm k_44 = ATgetFirst((ATermList) t);
                ATerm l_44 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = k_70;
          }
        LocalPopChoice(k_43);
      }
    else
      {
        t = i_43;
        t = (ATerm) ATinsert(ATempty, k_70);
      }
  }
  l_70 = t;
  t = term_m_14;
  m_70 = t;
  t = SSL_printnl(m_70, l_70);
  t = k_70;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm q_70 = NULL,r_70 = NULL;
  t = term_f_14;
  q_70 = t;
  t = term_d_41;
  r_70 = t;
  t = term_g_41;
  t = q_10(q_70, r_70, t);
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
  ATerm s_70 = NULL,y_70 = NULL;
  t = term_m_44;
  s_70 = t;
  t = term_q_15;
  y_70 = t;
  t = term_r_44;
  t = t_10(s_70, y_70, t);
  return(t);
}
static ATerm w_10 (ATerm t)
{
  t = term_u_44;
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
  ATerm z_70 = NULL,a_71 = NULL,b_71 = NULL,c_71 = NULL;
  t = term_m_44;
  b_71 = t;
  t = term_q_15;
  c_71 = t;
  t = term_r_44;
  t = t_10(b_71, c_71, t);
  t = term_v_44;
  z_70 = t;
  t = term_q_15;
  a_71 = t;
  t = term_w_44;
  t = t_10(z_70, a_71, t);
  t = term_x_44;
  return(t);
}
static ATerm b_11 (ATerm t)
{
  t = term_y_44;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm z_44 = t;
  int a_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(p_10, s_10, w_10, t);
      LocalPopChoice(a_45);
    }
  else
    {
      t = z_44;
      t = Option_3_0(x_10, z_10, b_11, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm b_79 (ATerm), ATerm c_79 (ATerm), ATerm t)
{
  ATerm d_71 = NULL,e_71 = NULL,f_71 = NULL,g_71 = NULL,h_71 = NULL,j_71 = NULL,a_15 = NULL;
  j_71 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_71 = ATgetFirst((ATermList) t);
      f_71 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_71);
  d_71 = t;
  t = e_71;
  t = b_79(t);
  g_71 = t;
  t = f_71;
  t = c_79(t);
  h_71 = t;
  t = (ATerm) ATinsert(CheckATermList(h_71), g_71);
  a_15 = t;
  t = SSLsetAnnotations(a_15, d_71);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm h_131 (ATerm), ATerm t)
{
  ATerm o_71 = NULL,p_71 = NULL,q_71 = NULL,r_71 = NULL,t_71 = NULL,u_71 = NULL,g_15 = NULL;
  o_71 = t;
  {
    ATerm b_45 = t;
    int c_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_d_45;
        t = h_131(t);
        LocalPopChoice(c_45);
      }
    else
      {
        t = b_45;
      }
  }
  t = o_71;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_71 = ATgetFirst((ATermList) t);
      r_71 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_71);
  p_71 = t;
  t = term_d_41;
  u_71 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_41, q_71);
  t = t_10(u_71, q_71, t);
  t = r_71;
  {
    static ATerm e_72 (ATerm t);
    static ATerm e_72 (ATerm t)
    {
      ATerm f_45 = t;
      int h_45 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm i_45 = t;
          int j_45 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm x_71 = NULL;
              x_71 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = x_71;
              LocalPopChoice(j_45);
            }
          else
            {
              t = i_45;
              t = h_131(t);
              t = Cons_2_0(_id, e_72, t);
            }
          LocalPopChoice(h_45);
        }
      else
        {
          t = f_45;
          {
            ATerm a_72 = NULL,b_72 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                a_72 = ATgetFirst((ATermList) t);
                b_72 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(b_72), (ATerm) ATmakeAppl(sym_Undefined_1, a_72));
          }
        }
      return(t);
    }
    t = e_72(t);
  }
  t_71 = t;
  t = (ATerm) ATinsert(CheckATermList(t_71), (ATerm) ATmakeAppl(sym_Program_1, q_71));
  g_15 = t;
  t = SSLsetAnnotations(g_15, p_71);
  return(t);
}
static ATerm g_11 (ATerm t)
{
  ATerm r_72 = NULL;
  r_72 = t;
  if(match_string(t, "--help"))
    {
      t = r_72;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = r_72;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = r_72;
        }
    }
  return(t);
}
static ATerm h_11 (ATerm t)
{
  ATerm s_72 = NULL,t_72 = NULL;
  t = term_p_42;
  s_72 = t;
  t = term_q_15;
  t_72 = t;
  t = term_k_45;
  t = t_10(s_72, t_72, t);
  t = term_l_45;
  return(t);
}
static ATerm i_11 (ATerm t)
{
  t = term_m_45;
  return(t);
}
static ATerm j_11 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm g_131 (ATerm), ATerm t)
{
  ATerm j_72 = NULL,k_72 = NULL,l_72 = NULL,m_72 = NULL,n_72 = NULL,o_72 = NULL,p_72 = NULL,q_72 = NULL;
  l_72 = t;
  t = term_g_38;
  m_72 = t;
  t = term_n_45;
  t = lookup_table_0_1(m_72, t);
  q_72 = t;
  t = term_i_38;
  n_72 = t;
  t = (ATerm) ATempty;
  o_72 = t;
  t = q_72;
  if(match_cons(t, sym_Hashtable_1))
    {
      p_72 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_10(n_72, o_72, p_72, t);
  t = l_72;
  {
    static ATerm e_11 (ATerm t);
    static ATerm e_11 (ATerm t)
    {
      ATerm o_45 = t;
      int s_45 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = g_131(t);
          LocalPopChoice(s_45);
        }
      else
        {
          t = o_45;
          {
            ATerm t_45 = t;
            int u_45 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(g_11, h_11, i_11, t);
                LocalPopChoice(u_45);
              }
            else
              {
                t = t_45;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(e_11, t);
  }
  {
    ATerm v_45 = t;
    int w_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_73 = NULL;
        e_73 = t;
        {
          ATerm y_45 = t;
          int z_45 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm s_22 = NULL;
              t = e_73;
              {
                ATerm d_46 = t;
                int e_46 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm t_22 = NULL,u_22 = NULL;
                    t = term_f_14;
                    t_22 = t;
                    t = term_p_42;
                    u_22 = t;
                    t = term_r_42;
                    t = q_10(t_22, u_22, t);
                    LocalPopChoice(e_46);
                  }
                else
                  {
                    t = d_46;
                    t = fetch_1_0(j_11, t);
                  }
              }
              t = e_73;
              t = default_system_usage_0_0(t);
              t = term_m_37;
              s_22 = t;
              t = SSL_exit(s_22);
              LocalPopChoice(z_45);
            }
          else
            {
              t = y_45;
              {
                ATerm y_22 = NULL,a_23 = NULL,b_23 = NULL;
                t = term_f_14;
                a_23 = t;
                t = term_m_44;
                b_23 = t;
                t = term_f_46;
                t = q_10(a_23, b_23, t);
                t = e_73;
                t = default_system_about_0_0(t);
                t = term_m_37;
                y_22 = t;
                t = SSL_exit(y_22);
              }
            }
        }
        LocalPopChoice(w_45);
      }
    else
      {
        t = v_45;
        {
          ATerm g_46 = t;
          int i_46 = stack_ptr;
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
                if(((j_72 != NULL) && (j_72 != t)))
                  _fail(t);
                else
                  j_72 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, j_73);
                j_15 = t;
                t = SSLsetAnnotations(j_15, i_73);
                return(t);
              }
              t = fetch_1_0(l_11, t);
              t = term_q_25;
              g_73 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(j_72)), term_p_46);
              h_73 = t;
              t = SSL_printnl(g_73, h_73);
              t = (ATerm) ATmakeAppl(sym__2, term_q_25, (ATerm) ATinsert(ATinsert(ATempty, not_null(j_72)), term_p_46));
              t = default_system_usage_0_0(t);
              t = term_m_17;
              f_73 = t;
              t = SSL_exit(f_73);
              LocalPopChoice(i_46);
            }
          else
            {
              t = g_46;
            }
        }
      }
  }
  k_72 = t;
  t = term_g_38;
  t = table_destroy_0_0(t);
  t = k_72;
  return(t);
}
ATerm option_wrap_4_0 (ATerm s_128 (ATerm), ATerm t_128 (ATerm), ATerm u_128 (ATerm), ATerm v_128 (ATerm), ATerm t)
{
  ATerm p_73 = NULL,q_73 = NULL,r_73 = NULL,t_73 = NULL,u_73 = NULL;
  t = parse_options_1_0(s_128, t);
  p_73 = t;
  t = term_q_46;
  t = table_create_0_0(t);
  t = term_q_46;
  q_73 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_q_46, term_r_46, p_73);
  t = lookup_table_0_1(q_73, t);
  u_73 = t;
  t = term_r_46;
  r_73 = t;
  t = u_73;
  if(match_cons(t, sym_Hashtable_1))
    {
      t_73 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_10(r_73, p_73, t_73, t);
  t = p_73;
  t = u_128(t);
  {
    ATerm s_46 = t;
    int t_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(t_128, t);
        LocalPopChoice(t_46);
      }
    else
      {
        t = s_46;
        {
          ATerm u_46 = t;
          int v_46 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = v_128(t);
              t = report_success_0_0(t);
              LocalPopChoice(v_46);
            }
          else
            {
              t = u_46;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm m_11 (ATerm t)
{
  ATerm w_46 = t;
  int x_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = pack_stratego_options_0_0(t);
      LocalPopChoice(x_46);
    }
  else
    {
      t = w_46;
      {
        ATerm y_46 = t;
        int z_46 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = input_option_0_0(t);
            LocalPopChoice(z_46);
          }
        else
          {
            t = y_46;
            {
              ATerm a_47 = t;
              int b_47 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = output_option_0_0(t);
                  LocalPopChoice(b_47);
                }
              else
                {
                  t = a_47;
                  {
                    ATerm l_47 = t;
                    int m_47 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Option_3_0(p_11, q_11, r_11, t);
                        LocalPopChoice(m_47);
                      }
                    else
                      {
                        t = l_47;
                        {
                          ATerm n_47 = t;
                          int o_47 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = verbose_option_0_0(t);
                              LocalPopChoice(o_47);
                            }
                          else
                            {
                              t = n_47;
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
  ATerm e_74 = NULL,f_74 = NULL;
  t = term_p_47;
  e_74 = t;
  t = term_q_15;
  f_74 = t;
  t = term_q_47;
  t = t_10(e_74, f_74, t);
  t = term_s_47;
  return(t);
}
static ATerm r_11 (ATerm t)
{
  t = term_t_47;
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
  ATerm q_74 = NULL,r_74 = NULL,s_74 = NULL,t_74 = NULL,u_74 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm u_47 = ATgetArgument(t, 0);
      if(match_cons(u_47, sym_Stream_1))
        {
          t_74 = ATgetArgument(u_47, 0);
        }
      else
        _fail(t);
      u_74 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_8(t_74, u_74, t);
  q_74 = t;
  t = term_n_23;
  r_74 = t;
  t = q_74;
  if(match_cons(t, sym_Stream_1))
    {
      s_74 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_n_23, q_74);
  t = w_8(r_74, s_74, t);
  return(t);
}
static ATerm a_12 (ATerm t)
{
  ATerm y_74 = NULL,z_74 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm v_47 = ATgetArgument(t, 0);
      if(match_cons(v_47, sym_Stream_1))
        {
          y_74 = ATgetArgument(v_47, 0);
        }
      else
        _fail(t);
      z_74 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_8(y_74, z_74, t);
  return(t);
}
ATerm pack_stratego_0_0 (ATerm t)
{
  ATerm c_74 = NULL,d_74 = NULL;
  static ATerm o_11 (ATerm t);
  static ATerm o_11 (ATerm t)
  {
    static ATerm s_11 (ATerm t);
    static ATerm s_11 (ATerm t)
    {
      ATerm h_74 = NULL;
      ATerm w_47 = t;
      int a_48 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm i_74 = NULL,j_74 = NULL,k_74 = NULL;
          t = term_f_14;
          j_74 = t;
          t = term_j_29;
          k_74 = t;
          t = term_b_48;
          t = q_10(j_74, k_74, t);
          i_74 = t;
          t = (ATerm) ATmakeAppl(sym_FILE_1, i_74);
          LocalPopChoice(a_48);
        }
      else
        {
          t = w_47;
          t = term_s_14;
        }
      if(match_cons(t, sym_FILE_1))
        {
          h_74 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = c_10(h_74, t);
      if(match_cons(t, sym__2))
        {
          if(((c_74 != NULL) && (c_74 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            c_74 = ATgetArgument(t, 0);
          if(((d_74 != NULL) && (d_74 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            d_74 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm c_48 = t;
        int d_48 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_74 = NULL,m_74 = NULL,n_74 = NULL,o_74 = NULL;
            t = term_f_14;
            n_74 = t;
            t = term_r_39;
            o_74 = t;
            t = term_f_48;
            t = q_10(n_74, o_74, t);
            t = c_74;
            t = map_1_0(x_11, t);
            m_74 = t;
            t = xtc_new_file_0_0(t);
            l_74 = t;
            t = (ATerm) ATmakeAppl(sym__2, l_74, m_74);
            t = y_8(z_11, l_74, m_74, t);
            t = (ATerm) ATmakeAppl(sym_FILE_1, l_74);
            LocalPopChoice(d_48);
          }
        else
          {
            t = c_48;
            {
              ATerm v_74 = NULL;
              ATerm g_48 = t;
              int h_48 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = c_74;
                  t = create_dep_file_0_0(t);
                  LocalPopChoice(h_48);
                }
              else
                {
                  t = g_48;
                }
              t = d_74;
              t = xtc_new_file_0_0(t);
              v_74 = t;
              t = (ATerm) ATmakeAppl(sym__2, v_74, d_74);
              t = y_8(a_12, v_74, d_74, t);
              t = (ATerm) ATmakeAppl(sym_FILE_1, v_74);
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
