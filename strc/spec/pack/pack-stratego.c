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
Symbol sym_Cons_1;
Symbol sym_Nil_0;
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
  sym_Cons_1 = ATmakeSymbol("Cons", 1, ATfalse);
  ATprotectSymbol(sym_Cons_1);
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Imports_1 = ATmakeSymbol("Imports", 1, ATfalse);
  ATprotectSymbol(sym_Imports_1);
  sym_Specification_1 = ATmakeSymbol("Specification", 1, ATfalse);
  ATprotectSymbol(sym_Specification_1);
  sym_Path_2 = ATmakeSymbol("Path", 2, ATfalse);
  ATprotectSymbol(sym_Path_2);
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
}
ATerm term_t_47;
ATerm term_n_47;
ATerm term_i_47;
ATerm term_h_47;
ATerm term_c_47;
ATerm term_b_47;
ATerm term_e_46;
ATerm term_d_46;
ATerm term_c_46;
ATerm term_z_45;
ATerm term_y_45;
ATerm term_c_45;
ATerm term_b_45;
ATerm term_a_45;
ATerm term_z_44;
ATerm term_y_44;
ATerm term_q_44;
ATerm term_l_44;
ATerm term_k_44;
ATerm term_j_44;
ATerm term_i_44;
ATerm term_h_44;
ATerm term_f_44;
ATerm term_e_44;
ATerm term_u_43;
ATerm term_p_43;
ATerm term_r_42;
ATerm term_b_42;
ATerm term_r_40;
ATerm term_q_40;
ATerm term_l_40;
ATerm term_k_40;
ATerm term_c_40;
ATerm term_a_40;
ATerm term_z_39;
ATerm term_y_39;
ATerm term_x_39;
ATerm term_w_39;
ATerm term_v_39;
ATerm term_u_39;
ATerm term_f_39;
ATerm term_e_39;
ATerm term_x_38;
ATerm term_v_38;
ATerm term_u_38;
ATerm term_q_38;
ATerm term_m_38;
ATerm term_l_38;
ATerm term_k_38;
ATerm term_j_38;
ATerm term_i_38;
ATerm term_h_38;
ATerm term_a_38;
ATerm term_p_37;
ATerm term_o_37;
ATerm term_h_37;
ATerm term_f_37;
ATerm term_u_36;
ATerm term_y_35;
ATerm term_o_35;
ATerm term_i_35;
ATerm term_u_33;
ATerm term_v_31;
ATerm term_s_31;
ATerm term_r_31;
ATerm term_q_31;
ATerm term_o_31;
ATerm term_n_31;
ATerm term_m_31;
ATerm term_l_31;
ATerm term_f_30;
ATerm term_c_30;
ATerm term_b_30;
ATerm term_x_29;
ATerm term_w_29;
ATerm term_l_29;
ATerm term_a_29;
ATerm term_z_28;
ATerm term_y_28;
ATerm term_t_28;
ATerm term_l_28;
ATerm term_h_28;
ATerm term_d_28;
ATerm term_y_27;
ATerm term_x_27;
ATerm term_w_27;
ATerm term_v_27;
ATerm term_r_27;
ATerm term_q_27;
ATerm term_h_27;
ATerm term_g_27;
ATerm term_e_27;
ATerm term_d_27;
ATerm term_c_27;
ATerm term_b_27;
ATerm term_v_26;
ATerm term_s_26;
ATerm term_r_26;
ATerm term_q_26;
ATerm term_o_26;
ATerm term_f_25;
ATerm term_e_25;
ATerm term_w_24;
ATerm term_v_24;
ATerm term_u_24;
ATerm term_t_24;
ATerm term_s_24;
ATerm term_r_24;
ATerm term_q_24;
ATerm term_p_24;
ATerm term_m_24;
ATerm term_k_24;
ATerm term_j_24;
ATerm term_i_24;
ATerm term_h_24;
ATerm term_b_24;
ATerm term_a_24;
ATerm term_z_23;
ATerm term_y_23;
ATerm term_x_23;
ATerm term_w_23;
ATerm term_v_23;
ATerm term_r_23;
ATerm term_q_23;
ATerm term_o_23;
ATerm term_n_23;
ATerm term_m_23;
ATerm term_l_23;
ATerm term_j_23;
ATerm term_i_23;
ATerm term_h_23;
ATerm term_e_23;
ATerm term_d_23;
ATerm term_z_22;
ATerm term_y_22;
ATerm term_x_22;
ATerm term_w_22;
ATerm term_t_22;
ATerm term_s_22;
ATerm term_q_22;
ATerm term_o_22;
ATerm term_m_22;
ATerm term_l_22;
ATerm term_h_22;
ATerm term_g_22;
ATerm term_d_22;
ATerm term_c_22;
ATerm term_w_21;
ATerm term_v_21;
ATerm term_u_21;
ATerm term_s_21;
ATerm term_q_21;
ATerm term_p_21;
ATerm term_o_21;
ATerm term_m_21;
ATerm term_j_21;
ATerm term_i_21;
ATerm term_d_21;
ATerm term_c_21;
ATerm term_b_21;
ATerm term_x_20;
ATerm term_u_20;
ATerm term_t_20;
ATerm term_o_20;
ATerm term_n_20;
ATerm term_m_20;
ATerm term_l_20;
ATerm term_h_20;
ATerm term_g_20;
ATerm term_f_20;
ATerm term_d_20;
ATerm term_z_19;
ATerm term_x_19;
ATerm term_w_19;
ATerm term_v_19;
ATerm term_u_19;
ATerm term_t_19;
ATerm term_s_19;
ATerm term_r_19;
ATerm term_p_19;
ATerm term_o_19;
ATerm term_n_19;
ATerm term_l_19;
ATerm term_k_19;
ATerm term_j_19;
ATerm term_i_19;
ATerm term_g_19;
ATerm term_f_19;
ATerm term_e_19;
ATerm term_d_19;
ATerm term_c_19;
ATerm term_a_19;
ATerm term_z_18;
ATerm term_y_18;
ATerm term_v_18;
ATerm term_t_18;
ATerm term_s_18;
ATerm term_q_18;
ATerm term_p_18;
ATerm term_o_18;
ATerm term_j_18;
ATerm term_i_18;
ATerm term_h_18;
ATerm term_g_18;
ATerm term_f_18;
ATerm term_b_18;
ATerm term_a_18;
ATerm term_z_17;
ATerm term_w_17;
ATerm term_v_17;
ATerm term_u_17;
ATerm term_t_17;
ATerm term_s_17;
ATerm term_m_17;
ATerm term_k_17;
ATerm term_j_17;
ATerm term_h_17;
ATerm term_d_17;
ATerm term_x_16;
ATerm term_s_16;
ATerm term_q_16;
ATerm term_m_16;
ATerm term_x_15;
ATerm term_w_15;
ATerm term_v_15;
ATerm term_u_15;
ATerm term_t_15;
ATerm term_s_15;
ATerm term_q_15;
ATerm term_p_15;
ATerm term_k_15;
ATerm term_j_15;
ATerm term_b_15;
ATerm term_a_15;
ATerm term_z_14;
ATerm term_y_14;
ATerm term_r_14;
ATerm term_q_14;
ATerm term_h_14;
ATerm term_b_14;
ATerm term_y_13;
ATerm term_q_13;
ATerm term_p_13;
ATerm term_o_13;
ATerm term_n_13;
ATerm term_g_13;
ATerm term_w_12;
ATerm term_v_12;
ATerm term_o_12;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/filemode: Cannot get filemode from ", 0, ATtrue));
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeInt(47);
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeAppl(sym__2, term_n_13, term_o_13);
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(ATmakeSymbol("XXXXXX", 0, ATtrue));
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/mkstemp", 0, ATtrue));
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeAppl(ATmakeSymbol("TMPDIR", 0, ATtrue));
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeAppl(ATmakeSymbol("/StrategoXT", 0, ATtrue));
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file> (file, mode)", 0, ATtrue));
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--dep", 0, ATtrue));
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeAppl(sym__2, term_n_13, term_p_15);
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--nodep", 0, ATtrue));
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeAppl(sym__2, term_n_13, term_s_15);
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeAppl(ATmakeSymbol(".", 0, ATtrue));
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeAppl(ATmakeSymbol("dep", 0, ATtrue));
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeAppl(ATmakeSymbol(" \\\n	", 0, ATtrue));
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeAppl(ATmakeSymbol(" :", 0, ATtrue));
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeAppl(sym__2, term_n_13, term_m_16);
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeAppl(sym__2, term_n_13, term_x_16);
  ATprotect(&(term_h_17));
  term_h_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_j_17));
  term_j_17 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_k_17));
  term_k_17 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_m_17));
  term_m_17 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_s_17));
  term_s_17 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_t_17));
  term_t_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_u_17));
  term_u_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_17, term_s_16, term_t_17);
  ATprotect(&(term_v_17));
  term_v_17 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_w_17));
  term_w_17 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_z_17));
  term_z_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_a_18));
  term_a_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_17, term_w_17, term_z_17);
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_f_18));
  term_f_18 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_g_18));
  term_g_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_h_18));
  term_h_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_18, term_f_18, term_g_18);
  ATprotect(&(term_i_18));
  term_i_18 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_j_18));
  term_j_18 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_o_18));
  term_o_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_p_18));
  term_p_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_18, term_j_18, term_o_18);
  ATprotect(&(term_q_18));
  term_q_18 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_s_18));
  term_s_18 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_t_18));
  term_t_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_v_18));
  term_v_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_18, term_s_18, term_t_18);
  ATprotect(&(term_y_18));
  term_y_18 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_z_18));
  term_z_18 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_a_19));
  term_a_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_c_19));
  term_c_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_18, term_z_18, term_a_19);
  ATprotect(&(term_d_19));
  term_d_19 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_e_19));
  term_e_19 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_f_19));
  term_f_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_19, term_e_19, term_f_19);
  ATprotect(&(term_i_19));
  term_i_19 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_j_19));
  term_j_19 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_k_19));
  term_k_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_l_19));
  term_l_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_19, term_j_19, term_k_19);
  ATprotect(&(term_n_19));
  term_n_19 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_o_19));
  term_o_19 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_p_19));
  term_p_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_r_19));
  term_r_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_19, term_o_19, term_p_19);
  ATprotect(&(term_s_19));
  term_s_19 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_t_19));
  term_t_19 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_u_19));
  term_u_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_v_19));
  term_v_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_19, term_t_19, term_u_19);
  ATprotect(&(term_w_19));
  term_w_19 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_x_19));
  term_x_19 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_z_19));
  term_z_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_d_20));
  term_d_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_19, term_x_19, term_z_19);
  ATprotect(&(term_f_20));
  term_f_20 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_g_20));
  term_g_20 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_h_20));
  term_h_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_l_20));
  term_l_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_20, term_g_20, term_h_20);
  ATprotect(&(term_m_20));
  term_m_20 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_n_20));
  term_n_20 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_o_20));
  term_o_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_t_20));
  term_t_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_20, term_n_20, term_o_20);
  ATprotect(&(term_u_20));
  term_u_20 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_x_20));
  term_x_20 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_b_21));
  term_b_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_c_21));
  term_c_21 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_20, term_x_20, term_b_21);
  ATprotect(&(term_d_21));
  term_d_21 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_i_21));
  term_i_21 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_j_21));
  term_j_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_m_21));
  term_m_21 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_21, term_i_21, term_j_21);
  ATprotect(&(term_o_21));
  term_o_21 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_p_21));
  term_p_21 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_q_21));
  term_q_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_s_21));
  term_s_21 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_21, term_p_21, term_q_21);
  ATprotect(&(term_u_21));
  term_u_21 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_v_21));
  term_v_21 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_w_21));
  term_w_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_c_22));
  term_c_22 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_21, term_v_21, term_w_21);
  ATprotect(&(term_d_22));
  term_d_22 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_g_22));
  term_g_22 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_h_22));
  term_h_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_l_22));
  term_l_22 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_22, term_g_22, term_h_22);
  ATprotect(&(term_m_22));
  term_m_22 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_o_22));
  term_o_22 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_q_22));
  term_q_22 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_s_22));
  term_s_22 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_22, term_o_22, term_q_22);
  ATprotect(&(term_t_22));
  term_t_22 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_w_22));
  term_w_22 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_x_22));
  term_x_22 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_y_22));
  term_y_22 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_22, term_w_22, term_x_22);
  ATprotect(&(term_z_22));
  term_z_22 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_d_23));
  term_d_23 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_e_23));
  term_e_23 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_h_23));
  term_h_23 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_22, term_d_23, term_e_23);
  ATprotect(&(term_i_23));
  term_i_23 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_j_23));
  term_j_23 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_l_23));
  term_l_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_m_23));
  term_m_23 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_23, term_j_23, term_l_23);
  ATprotect(&(term_n_23));
  term_n_23 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_o_23));
  term_o_23 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_q_23));
  term_q_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_r_23));
  term_r_23 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_23, term_o_23, term_q_23);
  ATprotect(&(term_v_23));
  term_v_23 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_w_23));
  term_w_23 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_x_23));
  term_x_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_y_23));
  term_y_23 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_23, term_w_23, term_x_23);
  ATprotect(&(term_z_23));
  term_z_23 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_a_24));
  term_a_24 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_b_24));
  term_b_24 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_h_24));
  term_h_24 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_23, term_a_24, term_b_24);
  ATprotect(&(term_i_24));
  term_i_24 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_j_24));
  term_j_24 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_k_24));
  term_k_24 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_m_24));
  term_m_24 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_24, term_j_24, term_k_24);
  ATprotect(&(term_p_24));
  term_p_24 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_q_24));
  term_q_24 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_r_24));
  term_r_24 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_s_24));
  term_s_24 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_24, term_q_24, term_r_24);
  ATprotect(&(term_t_24));
  term_t_24 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_u_24));
  term_u_24 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_v_24));
  term_v_24 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_w_24));
  term_w_24 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_24, term_u_24, term_v_24);
  ATprotect(&(term_e_25));
  term_e_25 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_f_25));
  term_f_25 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_o_26));
  term_o_26 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_q_26));
  term_q_26 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_r_26));
  term_r_26 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_s_26));
  term_s_26 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_v_26));
  term_v_26 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_b_27));
  term_b_27 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_c_27));
  term_c_27 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_d_27));
  term_d_27 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_e_27));
  term_e_27 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_g_27));
  term_g_27 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_h_27));
  term_h_27 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_q_27));
  term_q_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_r_27));
  term_r_27 = (ATerm) ATmakeAppl(sym__2, term_n_13, term_q_27);
  ATprotect(&(term_v_27));
  term_v_27 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_w_27));
  term_w_27 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_x_27));
  term_x_27 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_y_27));
  term_y_27 = (ATerm) ATmakeAppl(sym__2, term_g_27, term_x_27);
  ATprotect(&(term_d_28));
  term_d_28 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_h_28));
  term_h_28 = (ATerm) ATmakeAppl(sym__2, term_g_27, term_h_27);
  ATprotect(&(term_l_28));
  term_l_28 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_t_28));
  term_t_28 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_y_28));
  term_y_28 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_z_28));
  term_z_28 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_a_29));
  term_a_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_l_29));
  term_l_29 = (ATerm) ATmakeAppl(ATmakeSymbol("parse error in ", 0, ATtrue));
  ATprotect(&(term_w_29));
  term_w_29 = (ATerm) ATmakeAppl(ATmakeSymbol("parse-stratego", 0, ATtrue));
  ATprotect(&(term_x_29));
  term_x_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--asfix", 0, ATtrue));
  ATprotect(&(term_b_30));
  term_b_30 = (ATerm) ATmakeAppl(sym__2, term_n_13, term_x_29);
  ATprotect(&(term_c_30));
  term_c_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue));
  ATprotect(&(term_f_30));
  term_f_30 = (ATerm) ATmakeAppl(sym__2, term_n_13, term_c_30);
  ATprotect(&(term_l_31));
  term_l_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--slack", 0, ATtrue));
  ATprotect(&(term_m_31));
  term_m_31 = (ATerm) ATmakeAppl(sym__2, term_n_13, term_l_31);
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
  ATprotect(&(term_v_31));
  term_v_31 = (ATerm) ATmakeAppl(ATmakeSymbol("cr", 0, ATtrue));
  ATprotect(&(term_u_33));
  term_u_33 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_i_35));
  term_i_35 = (ATerm) ATmakeAppl(sym__2, term_z_14, term_h_14);
  ATprotect(&(term_o_35));
  term_o_35 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_y_35));
  term_y_35 = (ATerm) ATmakeAppl(sym__2, term_n_13, term_o_35);
  ATprotect(&(term_u_36));
  term_u_36 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_f_37));
  term_f_37 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_h_37));
  term_h_37 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_o_37));
  term_o_37 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_p_37));
  term_p_37 = (ATerm) ATmakeAppl(sym__2, term_h_37, term_o_37);
  ATprotect(&(term_a_38));
  term_a_38 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_h_38));
  term_h_38 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_i_38));
  term_i_38 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_j_38));
  term_j_38 = (ATerm) ATmakeAppl(sym__2, term_x_16, term_i_38);
  ATprotect(&(term_k_38));
  term_k_38 = (ATerm) ATmakeAppl(sym_Verbose_1, term_i_38);
  ATprotect(&(term_l_38));
  term_l_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_m_38));
  term_m_38 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_q_38));
  term_q_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_u_38));
  term_u_38 = (ATerm) ATmakeAppl(sym__2, term_q_38, term_b_15);
  ATprotect(&(term_v_38));
  term_v_38 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_x_38));
  term_x_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_e_39));
  term_e_39 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_f_39));
  term_f_39 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_u_39));
  term_u_39 = (ATerm) ATmakeAppl(ATmakeSymbol("-I d | --Include d   Include modules from directory d", 0, ATtrue));
  ATprotect(&(term_v_39));
  term_v_39 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_w_39));
  term_w_39 = (ATerm) ATmakeAppl(sym__2, term_s_15, term_v_39);
  ATprotect(&(term_x_39));
  term_x_39 = (ATerm) ATmakeAppl(ATmakeSymbol("--nodep              Don't create dependency file", 0, ATtrue));
  ATprotect(&(term_y_39));
  term_y_39 = (ATerm) ATmakeAppl(ATmakeSymbol("--dep f | -d f       Write dependency to file f", 0, ATtrue));
  ATprotect(&(term_z_39));
  term_z_39 = (ATerm) ATmakeAppl(ATmakeSymbol("--imports", 0, ATtrue));
  ATprotect(&(term_a_40));
  term_a_40 = (ATerm) ATmakeAppl(sym__2, term_z_39, term_b_15);
  ATprotect(&(term_c_40));
  term_c_40 = (ATerm) ATmakeAppl(ATmakeSymbol("--imports            Produce a list of imported modules only", 0, ATtrue));
  ATprotect(&(term_k_40));
  term_k_40 = (ATerm) ATmakeAppl(sym__2, term_l_31, term_b_15);
  ATprotect(&(term_l_40));
  term_l_40 = (ATerm) ATmakeAppl(ATmakeSymbol("--slack              Continue when module is not found", 0, ATtrue));
  ATprotect(&(term_q_40));
  term_q_40 = (ATerm) ATmakeAppl(sym__2, term_x_29, term_v_39);
  ATprotect(&(term_r_40));
  term_r_40 = (ATerm) ATmakeAppl(ATmakeSymbol("--asfix              Do not implode the concrete syntax parts", 0, ATtrue));
  ATprotect(&(term_b_42));
  term_b_42 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_r_42));
  term_r_42 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_p_43));
  term_p_43 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_u_43));
  term_u_43 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_e_44));
  term_e_44 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_f_44));
  term_f_44 = (ATerm) ATmakeAppl(sym__2, term_e_44, term_b_15);
  ATprotect(&(term_h_44));
  term_h_44 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_i_44));
  term_i_44 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_j_44));
  term_j_44 = (ATerm) ATmakeAppl(sym__2, term_i_44, term_b_15);
  ATprotect(&(term_k_44));
  term_k_44 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_l_44));
  term_l_44 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_q_44));
  term_q_44 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_y_44));
  term_y_44 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_z_44));
  term_z_44 = (ATerm) ATmakeAppl(sym__2, term_y_44, term_b_15);
  ATprotect(&(term_a_45));
  term_a_45 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_b_45));
  term_b_45 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_c_45));
  term_c_45 = (ATerm) ATmakeAppl(sym__3, term_h_37, term_o_37, (ATerm) ATempty);
  ATprotect(&(term_y_45));
  term_y_45 = (ATerm) ATmakeAppl(sym__2, term_n_13, term_y_44);
  ATprotect(&(term_z_45));
  term_z_45 = (ATerm) ATmakeAppl(sym__2, term_n_13, term_e_44);
  ATprotect(&(term_c_46));
  term_c_46 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_d_46));
  term_d_46 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_e_46));
  term_e_46 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_b_47));
  term_b_47 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_c_47));
  term_c_47 = (ATerm) ATmakeAppl(sym__2, term_b_47, term_b_15);
  ATprotect(&(term_h_47));
  term_h_47 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_i_47));
  term_i_47 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_n_47));
  term_n_47 = (ATerm) ATmakeAppl(sym__2, term_n_13, term_a_29);
  ATprotect(&(term_t_47));
  term_t_47 = (ATerm) ATmakeAppl(sym__2, term_n_13, term_z_39);
}
#include <srts/init-stratego-application.h>
ATerm copy_to_1_0 (ATerm p_0 (ATerm), ATerm t);
ATerm last_0_0 (ATerm t);
ATerm at_suffix_1_0 (ATerm f_118 (ATerm), ATerm t);
ATerm split_fetch_1_0 (ATerm x_117 (ATerm), ATerm t);
ATerm list_tokenize_1_0 (ATerm i_127 (ATerm), ATerm t);
static ATerm i_0 (ATerm t);
static ATerm d_10 (ATerm h_50, ATerm i_426, ATerm t);
ATerm filemode_0_0 (ATerm t);
static ATerm g_10 (ATerm o_68, ATerm n_68, ATerm t);
static ATerm k_0 (ATerm t);
ATerm xtc_write_output_0_0 (ATerm t);
static ATerm q_8 (ATerm s_37, ATerm t_37, ATerm t);
static ATerm v_8 (ATerm c_117 (ATerm), ATerm d_277, ATerm c_38, ATerm t);
static ATerm l_9 (ATerm t_106 (ATerm), ATerm g_24, ATerm e_24, ATerm t);
ATerm mkstemp_0_0 (ATerm t);
ATerm P__tmpdir_0_0 (ATerm t);
ATerm temp_dir_0_0 (ATerm t);
static ATerm n_0 (ATerm t);
ATerm xtc_new_file_0_0 (ATerm t);
static ATerm r_8 (ATerm g_38, ATerm e_281, ATerm t);
static ATerm b_13 (ATerm m_12, ATerm t);
static ATerm c_13 (ATerm p_12, ATerm r_12, ATerm s_12, ATerm t);
static ATerm s_0 (ATerm t);
ATerm open_file_0_0 (ATerm t);
ATerm create_dep_file_0_0 (ATerm t);
static ATerm t_8 (ATerm p_53, ATerm q_53, ATerm t);
static ATerm u_8 (ATerm w_37, ATerm x_37, ATerm t);
ATerm basename_1_0 (ATerm m_128 (ATerm), ATerm t);
ATerm at_suffix_rev_1_0 (ATerm j_118 (ATerm), ATerm t);
ATerm get_filename_0_0 (ATerm t);
ATerm map_1_0 (ATerm k_117 (ATerm), ATerm t);
static ATerm n_10 (ATerm u_60, ATerm v_60, ATerm t);
static ATerm u_0 (ATerm t);
static ATerm x_0 (ATerm t);
ATerm flatten_stratego_0_0 (ATerm t);
ATerm genzip_4_0 (ATerm o_119 (ATerm), ATerm p_119 (ATerm), ATerm q_119 (ATerm), ATerm r_119 (ATerm), ATerm t);
static ATerm y_0 (ATerm t);
static ATerm z_8 (ATerm j_162, ATerm t);
ATerm read_from_0_0 (ATerm t);
ATerm pass_keep_0_0 (ATerm t);
static ATerm a_9 (ATerm q_57, ATerm r_57, ATerm t);
ATerm pass_verbose_0_0 (ATerm t);
static ATerm a_1 (ATerm t);
ATerm xtc_transform_term_2_0 (ATerm a_143 (ATerm), ATerm b_143 (ATerm), ATerm t);
static ATerm b_9 (ATerm x_72, ATerm y_72, ATerm t);
ATerm signal_to_descr_0_0 (ATerm t);
ATerm signal_from_number_0_0 (ATerm t);
ATerm warn_ifsignaled_0_0 (ATerm t);
ATerm fork_0_0 (ATerm t);
ATerm fork_and_wait_1_0 (ATerm j_134 (ATerm), ATerm t);
static ATerm d_9 (ATerm t_63, ATerm t);
ATerm table_getlist_0_0 (ATerm t);
ATerm if_verbose5_1_0 (ATerm c_134 (ATerm), ATerm t);
ATerm if_verbose4_1_0 (ATerm b_134 (ATerm), ATerm t);
ATerm if_verbose6_1_0 (ATerm d_134 (ATerm), ATerm t);
static ATerm f_9 (ATerm v_121 (ATerm), ATerm z_43, ATerm y_43, ATerm t);
static ATerm i_1 (ATerm t);
static ATerm g_9 (ATerm y_59, ATerm z_59, ATerm a_60, ATerm t);
static ATerm h_9 (ATerm a_131 (ATerm), ATerm i_60, ATerm h_60, ATerm t);
static ATerm w_31 (ATerm p_31, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm i_9 (ATerm y_37, ATerm t);
static ATerm e_10 (ATerm v_51, ATerm w_51, ATerm t);
static ATerm j_9 (ATerm r_53, ATerm s_53, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm y_33 (ATerm l_32, ATerm t);
static ATerm z_33 (ATerm r_32, ATerm u_32, ATerm a_33, ATerm t);
static ATerm a_34 (ATerm l_33, ATerm m_33, ATerm n_33, ATerm t);
static ATerm k_9 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
static ATerm m_1 (ATerm t);
static ATerm n_1 (ATerm t);
ATerm read_repository_file_0_0 (ATerm t);
static ATerm q_1 (ATerm t);
static ATerm s_1 (ATerm t);
static ATerm t_1 (ATerm t);
static ATerm v_1 (ATerm t);
static ATerm w_1 (ATerm t);
static ATerm x_1 (ATerm t);
static ATerm y_1 (ATerm t);
static ATerm a_2 (ATerm t);
ATerm xtc_read_0_0 (ATerm t);
ATerm repeat_2_0 (ATerm z_109 (ATerm), ATerm a_110 (ATerm), ATerm t);
ATerm GetInternalDefaultXtcRepository_0_0 (ATerm t);
ATerm xtc_location_0_0 (ATerm t);
static ATerm b_2 (ATerm t);
static ATerm c_2 (ATerm t);
static ATerm e_2 (ATerm t);
static ATerm f_2 (ATerm t);
static ATerm g_2 (ATerm t);
ATerm xtc_load_0_0 (ATerm t);
static ATerm h_2 (ATerm t);
static ATerm l_2 (ATerm t);
static ATerm f_38 (ATerm g_37, ATerm t);
static ATerm o_2 (ATerm t);
static ATerm p_2 (ATerm t);
static ATerm s_2 (ATerm t);
static ATerm v_2 (ATerm t);
ATerm xtc_find_0_0 (ATerm t);
ATerm xtc_command_1_0 (ATerm j_144 (ATerm), ATerm t);
ATerm xtc_transform_file_2_0 (ATerm q_0 (ATerm), ATerm r_0 (ATerm), ATerm t);
static ATerm s_41 (ATerm i_39, ATerm j_39, ATerm o_39, ATerm t);
static ATerm t_41 (ATerm j_41, ATerm k_41, ATerm t);
static ATerm y_2 (ATerm t);
static ATerm z_2 (ATerm t);
static ATerm a_3 (ATerm t);
static ATerm c_3 (ATerm t);
ATerm parse_module_0_0 (ATerm t);
ATerm debug_1_0 (ATerm a_117 (ATerm), ATerm t);
ATerm if_verbose3_1_0 (ATerm a_134 (ATerm), ATerm t);
ATerm fetch_elem_1_0 (ATerm w_117 (ATerm), ATerm t);
static ATerm f_10 (ATerm f_53, ATerm g_53, ATerm t);
ATerm is_relpath_0_0 (ATerm t);
static ATerm m_9 (ATerm m_106 (ATerm), ATerm u_23, ATerm t_23, ATerm t);
static ATerm f_4 (ATerm t);
ATerm get_module_1_0 (ATerm l_106 (ATerm), ATerm t);
static ATerm o_9 (ATerm y_121 (ATerm), ATerm z_121 (ATerm), ATerm d_44, ATerm c_44, ATerm t);
static ATerm p_9 (ATerm q_121 (ATerm), ATerm x_43, ATerm w_43, ATerm t);
static ATerm l_4 (ATerm t);
static ATerm m_4 (ATerm t);
static ATerm n_4 (ATerm t);
static ATerm u_9 (ATerm x_797, ATerm c_798, ATerm b_77, ATerm t);
static ATerm p_4 (ATerm t);
static ATerm q_4 (ATerm t);
static ATerm s_4 (ATerm t);
static ATerm r_48 (ATerm t_46, ATerm v_46, ATerm w_46, ATerm t);
static ATerm t_4 (ATerm t);
ATerm diff_0_0 (ATerm t);
static ATerm w_9 (ATerm f_145 (ATerm), ATerm g_145 (ATerm), ATerm h_145 (ATerm), ATerm h_82, ATerm e_82, ATerm l_82, ATerm i_82, ATerm f_82, ATerm g_82, ATerm t);
ATerm GnNext_3_0 (ATerm f_145 (ATerm), ATerm g_145 (ATerm), ATerm h_145 (ATerm), ATerm t);
ATerm while_not_2_0 (ATerm q_110 (ATerm), ATerm r_110 (ATerm), ATerm t);
ATerm for_3_0 (ATerm t_110 (ATerm), ATerm u_110 (ATerm), ATerm v_110 (ATerm), ATerm t);
static ATerm u_4 (ATerm t);
static ATerm v_4 (ATerm t);
ATerm graph_nodes_roots_3_0 (ATerm c_145 (ATerm), ATerm d_145 (ATerm), ATerm e_145 (ATerm), ATerm t);
ATerm filter_1_0 (ATerm n_125 (ATerm), ATerm t);
static ATerm x_4 (ATerm t);
static ATerm c_5 (ATerm t);
static ATerm e_5 (ATerm t);
static ATerm h_5 (ATerm t);
static ATerm j_5 (ATerm t);
static ATerm m_5 (ATerm t);
static ATerm z_9 (ATerm k_23, ATerm t);
static ATerm h_10 (ATerm g_59, ATerm h_59, ATerm t);
ATerm end_scope_1_0 (ATerm q_106 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm v_109 (ATerm), ATerm w_109 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm p_106 (ATerm), ATerm t);
static ATerm p_5 (ATerm t);
static ATerm u_5 (ATerm t);
static ATerm w_5 (ATerm t);
ATerm xtc_temp_files_1_0 (ATerm n_143 (ATerm), ATerm t);
ATerm default_system_about_0_0 (ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm reverse_acc_2_0 (ATerm h_0 (ATerm), ATerm j_0 (ATerm), ATerm t);
static ATerm m_6 (ATerm t);
static ATerm n_6 (ATerm t);
static ATerm o_6 (ATerm t);
ATerm default_system_usage_2_0 (ATerm n_138 (ATerm), ATerm o_138 (ATerm), ATerm t);
static ATerm q_6 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
static ATerm r_6 (ATerm t);
static ATerm t_6 (ATerm t);
static ATerm v_6 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm x_6 (ATerm t);
static ATerm y_6 (ATerm t);
static ATerm z_6 (ATerm t);
static ATerm c_7 (ATerm t);
static ATerm k_7 (ATerm t);
static ATerm l_7 (ATerm t);
static ATerm q_7 (ATerm t);
static ATerm u_7 (ATerm t);
static ATerm v_7 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm q_10 (ATerm j_83, ATerm k_83, ATerm t);
ATerm Option_3_0 (ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm t);
static ATerm x_7 (ATerm t);
static ATerm y_7 (ATerm t);
static ATerm z_7 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm a_8 (ATerm t);
static ATerm d_8 (ATerm t);
static ATerm e_8 (ATerm t);
ATerm input_option_0_0 (ATerm t);
static ATerm o_10 (ATerm b_59, ATerm c_59, ATerm a_59, ATerm t);
ATerm ArgOption_3_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm o_0 (ATerm), ATerm t);
ATerm at_end_1_0 (ATerm b_118 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm s_64 (ATerm f_64, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm a_10 (ATerm q_83, ATerm r_83, ATerm t);
static ATerm j_8 (ATerm t);
static ATerm k_8 (ATerm t);
static ATerm m_8 (ATerm t);
static ATerm o_8 (ATerm t);
static ATerm p_8 (ATerm t);
static ATerm s_8 (ATerm t);
static ATerm e_9 (ATerm t);
static ATerm n_9 (ATerm t);
static ATerm q_9 (ATerm t);
static ATerm s_9 (ATerm t);
static ATerm t_9 (ATerm t);
static ATerm v_9 (ATerm t);
static ATerm x_9 (ATerm t);
static ATerm y_9 (ATerm t);
static ATerm b_10 (ATerm t);
static ATerm c_10 (ATerm t);
static ATerm j_10 (ATerm t);
static ATerm m_10 (ATerm t);
ATerm pack_stratego_options_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm i_10 (ATerm k_57, ATerm l_57, ATerm t);
ATerm foldr_2_0 (ATerm j_124 (ATerm), ATerm k_124 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm p_10 (ATerm t);
static ATerm t_10 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm y_133 (ATerm), ATerm t);
static ATerm u_10 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm r_10 (ATerm m_63, ATerm n_63, ATerm o_63, ATerm t);
static ATerm s_10 (ATerm p_63, ATerm q_63, ATerm t);
ATerm lookup_table_0_1 (ATerm n_60, ATerm t);
ATerm new_hashtable_0_2 (ATerm u_63, ATerm v_63, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm k_10 (ATerm r_63, ATerm s_63, ATerm t);
static ATerm l_10 (ATerm w_63, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm u_117 (ATerm), ATerm t);
static ATerm v_10 (ATerm t);
static ATerm w_10 (ATerm t);
static ATerm x_10 (ATerm t);
static ATerm y_10 (ATerm t);
static ATerm a_11 (ATerm t);
static ATerm b_11 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm c_88 (ATerm), ATerm d_88 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm i_138 (ATerm), ATerm t);
static ATerm e_11 (ATerm t);
static ATerm f_11 (ATerm t);
static ATerm g_11 (ATerm t);
static ATerm h_11 (ATerm t);
ATerm parse_options_3_0 (ATerm f_138 (ATerm), ATerm g_138 (ATerm), ATerm h_138 (ATerm), ATerm t);
ATerm option_wrap_5_0 (ATerm u_135 (ATerm), ATerm v_135 (ATerm), ATerm w_135 (ATerm), ATerm x_135 (ATerm), ATerm y_135 (ATerm), ATerm t);
static ATerm j_11 (ATerm t);
static ATerm l_11 (ATerm t);
static ATerm m_11 (ATerm t);
static ATerm n_11 (ATerm t);
static ATerm p_11 (ATerm t);
static ATerm q_11 (ATerm t);
static ATerm r_11 (ATerm t);
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
    int s_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_0 = NULL;
        t = k_1;
        t = p_0(t);
        f_0 = t;
        if(match_cons(t, sym_stdout_0))
          {
            t = f_0;
          }
        else
          {
            if(!(match_cons(t, sym_stderr_0)))
              _fail(t);
            t = f_0;
          }
        t = (ATerm) ATmakeAppl(sym__2, l_1, f_0);
        t = g_10(l_1, f_0, t);
        t = (ATerm) ATmakeAppl(sym_FILE_1, l_1);
        LocalPopChoice(s_11);
      }
    else
      {
        t = t_2;
        {
          ATerm u_11 = t;
          int v_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm v_0 = NULL;
              t = k_1;
              t = p_0(t);
              v_0 = t;
              {
                ATerm w_11 = t;
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
                    t = w_11;
                  }
              }
              t = (ATerm) ATmakeAppl(sym__2, l_1, v_0);
              t = g_10(l_1, v_0, t);
              t = (ATerm) ATmakeAppl(sym_FILE_1, l_1);
              LocalPopChoice(v_11);
            }
          else
            {
              t = u_11;
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
  ATerm z_1 = NULL,i_2 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_1 = ATgetFirst((ATermList) t);
      i_2 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = i_2;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = z_1;
    }
  else
    {
      t = i_2;
      t = last_0_0(t);
    }
  return(t);
}
ATerm at_suffix_1_0 (ATerm f_118 (ATerm), ATerm t)
{
  static ATerm l_3 (ATerm t);
  static ATerm l_3 (ATerm t)
  {
    ATerm x_11 = t;
    int a_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = f_118(t);
        LocalPopChoice(a_12);
      }
    else
      {
        t = x_11;
        {
          ATerm i_3 = NULL,j_3 = NULL,k_3 = NULL,r_1 = NULL,u_1 = NULL,z_0 = NULL;
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
          z_0 = t;
          t = SSLsetAnnotations(z_0, r_1);
        }
      }
    return(t);
  }
  t = l_3(t);
  return(t);
}
ATerm split_fetch_1_0 (ATerm x_117 (ATerm), ATerm t)
{
  ATerm p_3 = NULL,r_3 = NULL;
  static ATerm a_0 (ATerm t);
  static ATerm a_0 (ATerm t)
  {
    ATerm s_3 = NULL,t_3 = NULL,u_3 = NULL,w_3 = NULL,x_3 = NULL,y_3 = NULL,a_4 = NULL,b_4 = NULL,c_4 = NULL,d_1 = NULL,c_1 = NULL;
    c_4 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        x_3 = ATgetFirst((ATermList) t);
        y_3 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(c_4);
    w_3 = t;
    t = x_3;
    t = x_117(t);
    a_4 = t;
    t = (ATerm) ATinsert(CheckATermList(y_3), a_4);
    c_1 = t;
    t = SSLsetAnnotations(c_1, w_3);
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
    if(((p_3 != NULL) && (p_3 != t)))
      _fail(t);
    else
      p_3 = t;
    t = (ATerm) ATinsert(CheckATermList(u_3), t_3);
    d_1 = t;
    t = SSLsetAnnotations(d_1, s_3);
    t = (ATerm) ATempty;
    return(t);
  }
  t = at_suffix_1_0(a_0, t);
  r_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_3, not_null(p_3));
  return(t);
}
ATerm list_tokenize_1_0 (ATerm i_127 (ATerm), ATerm t)
{
  ATerm o_4 = NULL,r_4 = NULL;
  ATerm b_12 = t;
  int c_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = split_fetch_1_0(i_127, t);
      LocalPopChoice(c_12);
    }
  else
    {
      t = b_12;
      {
        ATerm k_4 = NULL;
        k_4 = t;
        t = (ATerm) ATmakeAppl(sym__2, k_4, (ATerm) ATempty);
      }
    }
  if(match_cons(t, sym__2))
    {
      o_4 = ATgetArgument(t, 0);
      r_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_4;
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
              ATerm d_12 = ATgetFirst((ATermList) t);
              ATerm f_12 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = r_4;
          t = list_tokenize_1_0(i_127, t);
        }
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          ATerm g_12 = ATgetFirst((ATermList) t);
          ATerm h_12 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = r_4;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = (ATerm) ATinsert(ATempty, o_4);
        }
      else
        {
          ATerm y_4 = NULL;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm i_12 = ATgetFirst((ATermList) t);
              ATerm j_12 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = r_4;
          t = list_tokenize_1_0(i_127, t);
          y_4 = t;
          t = (ATerm) ATinsert(CheckATermList(y_4), o_4);
        }
    }
  return(t);
}
static ATerm i_0 (ATerm t)
{
  ATerm b_5 = NULL;
  b_5 = t;
  t = SSL_implode_string(b_5);
  return(t);
}
static ATerm d_10 (ATerm h_50, ATerm i_426, ATerm t)
{
  t = SSL_explode_string(i_426);
  {
    static ATerm c_0 (ATerm t);
    static ATerm c_0 (ATerm t)
    {
      ATerm a_5 = NULL;
      static ATerm e_0 (ATerm t);
      static ATerm e_0 (ATerm t)
      {
        if(((a_5 != NULL) && (a_5 != t)))
          _fail(t);
        else
          a_5 = t;
        return(t);
      }
      if(((a_5 != NULL) && (a_5 != t)))
        _fail(t);
      else
        a_5 = t;
      t = h_50;
      t = fetch_1_0(e_0, t);
      return(t);
    }
    t = list_tokenize_1_0(c_0, t);
  }
  t = map_1_0(i_0, t);
  return(t);
}
ATerm filemode_0_0 (ATerm t)
{
  ATerm r_5 = NULL;
  r_5 = t;
  {
    ATerm k_12 = t;
    int l_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_2 = NULL;
        t = SSL_filemode(r_5);
        if(match_cons(t, sym__2))
          {
            d_2 = ATgetArgument(t, 0);
            {
              ATerm n_12 = ATgetArgument(t, 1);
              if(((ATgetType(n_12) != AT_INT) || (ATgetInt((ATermInt) n_12) != 0)))
                _fail(t);
            }
          }
        else
          _fail(t);
        t = d_2;
        LocalPopChoice(l_12);
      }
    else
      {
        t = k_12;
        {
          ATerm j_2 = NULL,k_2 = NULL;
          t = term_o_12;
          k_2 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_o_12, r_5);
          t = e_10(k_2, r_5, t);
          j_2 = t;
          t = SSL_perror(j_2);
          _fail(t);
        }
      }
  }
  return(t);
}
static ATerm g_10 (ATerm o_68, ATerm n_68, ATerm t)
{
  ATerm y_5 = NULL,c_6 = NULL;
  c_6 = t;
  {
    ATerm t_12 = t;
    int u_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_6 = NULL,f_6 = NULL;
        t = (ATerm) ATinsert(ATempty, term_v_12);
        f_6 = t;
        t = (ATerm) ATmakeAppl(sym__2, n_68, (ATerm) ATinsert(ATempty, term_v_12));
        t = f_10(n_68, f_6, t);
        t = filemode_0_0(t);
        e_6 = t;
        t = SSL_S_ISDIR(e_6);
        t = c_6;
        LocalPopChoice(u_12);
        {
          ATerm h_6 = NULL,i_6 = NULL,j_6 = NULL;
          t = (ATerm) ATinsert(ATempty, term_w_12);
          j_6 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, term_w_12), o_68);
          t = d_10(j_6, o_68, t);
          t = last_0_0(t);
          h_6 = t;
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, h_6), term_g_13), n_68);
          i_6 = t;
          t = SSL_concat_strings(i_6);
        }
      }
    else
      {
        t = t_12;
        t = n_68;
      }
  }
  y_5 = t;
  t = SSL_copy(o_68, y_5);
  return(t);
}
static ATerm k_0 (ATerm t)
{
  ATerm i_13 = t;
  int m_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_6 = NULL,a_7 = NULL;
      t = term_n_13;
      w_6 = t;
      t = term_o_13;
      a_7 = t;
      t = term_p_13;
      t = n_10(w_6, a_7, t);
      LocalPopChoice(m_13);
    }
  else
    {
      t = i_13;
      t = term_q_13;
    }
  return(t);
}
ATerm xtc_write_output_0_0 (ATerm t)
{
  ATerm u_6 = NULL;
  u_6 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm n_2 = NULL,q_2 = NULL;
      t = term_o_13;
      {
        ATerm w_13 = t;
        int x_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_2 = NULL,u_2 = NULL;
            t = term_n_13;
            r_2 = t;
            t = term_o_13;
            u_2 = t;
            t = term_p_13;
            t = n_10(r_2, u_2, t);
            LocalPopChoice(x_13);
          }
        else
          {
            t = w_13;
            t = term_q_13;
          }
      }
      n_2 = t;
      t = term_y_13;
      q_2 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_y_13, n_2);
      t = g_10(q_2, n_2, t);
    }
  else
    {
      if(match_cons(t, sym_FILE_1))
        {
          ATerm z_13 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = u_6;
      t = copy_to_1_0(k_0, t);
    }
  return(t);
}
static ATerm q_8 (ATerm s_37, ATerm t_37, ATerm t)
{
  ATerm d_7 = NULL;
  t = SSL_write_term_to_stream_baf(s_37, t_37);
  d_7 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, d_7);
  return(t);
}
static ATerm v_8 (ATerm c_117 (ATerm), ATerm d_277, ATerm c_38, ATerm t)
{
  ATerm e_7 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, d_277, term_b_14);
  t = k_9(t);
  e_7 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_7, c_38);
  t = c_117(t);
  t = fclose_0_0(t);
  t = c_38;
  return(t);
}
static ATerm l_9 (ATerm t_106 (ATerm), ATerm g_24, ATerm e_24, ATerm t)
{
  ATerm f_7 = NULL,g_7 = NULL,h_7 = NULL,j_7 = NULL,m_7 = NULL,n_7 = NULL,r_7 = NULL,s_7 = NULL;
  j_7 = t;
  t = t_106(t);
  f_7 = t;
  t = (ATerm) ATmakeAppl(sym__3, f_7, g_24, e_24);
  t = o_10(f_7, g_24, e_24, t);
  {
    ATerm c_14 = t;
    int g_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_7 = NULL;
        t = term_h_14;
        t_7 = t;
        t = (ATerm) ATmakeAppl(sym__2, f_7, term_h_14);
        t = n_10(f_7, t_7, t);
        {
          ATerm i_14 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = i_14;
            }
        }
        LocalPopChoice(g_14);
      }
    else
      {
        t = c_14;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_7 = ATgetFirst((ATermList) t);
      h_7 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, f_7, term_h_14, (ATerm) ATinsert(CheckATermList(h_7), (ATerm) ATinsert(CheckATermList(g_7), g_24)));
  t = lookup_table_0_1(f_7, t);
  s_7 = t;
  t = term_h_14;
  m_7 = t;
  t = (ATerm) ATinsert(CheckATermList(h_7), (ATerm) ATinsert(CheckATermList(g_7), g_24));
  n_7 = t;
  t = s_7;
  if(match_cons(t, sym_Hashtable_1))
    {
      r_7 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_10(m_7, n_7, r_7, t);
  t = j_7;
  return(t);
}
ATerm mkstemp_0_0 (ATerm t)
{
  ATerm w_7 = NULL;
  ATerm l_14 = t;
  int o_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_8 = NULL,b_3 = NULL;
      b_8 = t;
      t = term_q_14;
      b_3 = t;
      t = (ATerm) ATmakeAppl(sym__2, b_8, term_q_14);
      t = e_10(b_8, b_3, t);
      w_7 = t;
      t = SSL_mkstemp(w_7);
      LocalPopChoice(o_14);
    }
  else
    {
      t = l_14;
      {
        ATerm c_8 = NULL;
        t = term_r_14;
        c_8 = t;
        t = SSL_perror(c_8);
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
ATerm temp_dir_0_0 (ATerm t)
{
  ATerm s_14 = t;
  int v_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_8 = NULL;
      t = term_y_14;
      i_8 = t;
      t = SSL_getenv(i_8);
      LocalPopChoice(v_14);
    }
  else
    {
      t = s_14;
      t = P__tmpdir_0_0(t);
    }
  return(t);
}
static ATerm n_0 (ATerm t)
{
  t = term_z_14;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm n_8 = NULL,w_8 = NULL,x_8 = NULL,y_8 = NULL,c_9 = NULL;
  t = temp_dir_0_0(t);
  y_8 = t;
  t = term_a_15;
  c_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_8, term_a_15);
  t = e_10(y_8, c_9, t);
  t = mkstemp_0_0(t);
  if(match_cons(t, sym__2))
    {
      w_8 = ATgetArgument(t, 0);
      n_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = term_b_15;
  x_8 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_8, term_b_15);
  t = l_9(n_0, w_8, x_8, t);
  t = SSL_close(n_8);
  t = w_8;
  return(t);
}
static ATerm r_8 (ATerm g_38, ATerm e_281, ATerm t)
{
  ATerm y_11 = NULL,z_11 = NULL;
  t = e_281;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = e_281;
    }
  else
    {
      ATerm d_5 = NULL,k_5 = NULL,h_1 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          y_11 = ATgetFirst((ATermList) t);
          z_11 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(e_281);
      d_5 = t;
      t = z_11;
      {
        static ATerm l_6 (ATerm t);
        static ATerm l_6 (ATerm t)
        {
          ATerm d_6 = NULL,g_6 = NULL,k_6 = NULL;
          d_6 = t;
          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
            {
              t = d_6;
            }
          else
            {
              ATerm i_7 = NULL,o_7 = NULL,p_7 = NULL,g_1 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  g_6 = ATgetFirst((ATermList) t);
                  k_6 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(d_6);
              i_7 = t;
              t = k_6;
              t = l_6(t);
              o_7 = t;
              t = (ATerm) ATinsert(CheckATermList(o_7), g_6);
              g_1 = t;
              t = SSLsetAnnotations(g_1, i_7);
              p_7 = t;
              t = (ATerm) ATinsert(CheckATermList(p_7), g_38);
            }
          return(t);
        }
        t = l_6(t);
      }
      k_5 = t;
      t = (ATerm) ATinsert(CheckATermList(k_5), y_11);
      h_1 = t;
      t = SSLsetAnnotations(h_1, d_5);
    }
  return(t);
}
static ATerm b_13 (ATerm m_12, ATerm t)
{
  t = m_12;
  {
    ATerm d_15 = t;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm e_15 = ATgetArgument(t, 0);
            ATerm i_15 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = d_15;
      }
  }
  t = term_j_15;
  t = debug_1_0(s_0, t);
  t = (ATerm) ATmakeAppl(sym__2, m_12, term_b_14);
  t = open_file_0_0(t);
  return(t);
}
static ATerm c_13 (ATerm p_12, ATerm r_12, ATerm s_12, ATerm t)
{
  t = SSL_open_file(p_12, r_12);
  return(t);
}
static ATerm s_0 (ATerm t)
{
  t = term_k_15;
  return(t);
}
ATerm open_file_0_0 (ATerm t)
{
  ATerm x_12 = NULL,z_12 = NULL,a_13 = NULL;
  x_12 = t;
  if(match_cons(t, sym__2))
    {
      z_12 = ATgetArgument(t, 0);
      a_13 = ATgetArgument(t, 1);
      {
        ATerm l_15 = t;
        int m_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = b_13(x_12, t);
            LocalPopChoice(m_15);
          }
        else
          {
            t = l_15;
            t = c_13(z_12, a_13, x_12, t);
          }
      }
    }
  else
    {
      t = b_13(x_12, t);
    }
  return(t);
}
ATerm create_dep_file_0_0 (ATerm t)
{
  ATerm d_13 = NULL,e_13 = NULL,h_13 = NULL,j_13 = NULL,k_13 = NULL,l_13 = NULL,s_13 = NULL,t_13 = NULL,u_13 = NULL,a_14 = NULL,d_14 = NULL;
  e_13 = t;
  t = term_n_13;
  a_14 = t;
  t = term_o_13;
  d_14 = t;
  t = term_p_13;
  t = n_10(a_14, d_14, t);
  {
    ATerm n_15 = t;
    int o_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_14 = NULL,f_14 = NULL;
        t = term_n_13;
        e_14 = t;
        t = term_p_15;
        f_14 = t;
        t = term_q_15;
        t = n_10(e_14, f_14, t);
        LocalPopChoice(o_15);
      }
    else
      {
        t = n_15;
        {
          ATerm r_15 = t;
          if((PushChoice() == 0))
            {
              ATerm m_14 = NULL,n_14 = NULL;
              t = term_n_13;
              m_14 = t;
              t = term_s_15;
              n_14 = t;
              t = term_t_15;
              t = n_10(m_14, n_14, t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = r_15;
            }
        }
      }
  }
  d_13 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_v_15), term_u_15), d_13);
  u_13 = t;
  t = SSL_concat_strings(u_13);
  t_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_13, term_b_14);
  t = open_file_0_0(t);
  h_13 = t;
  t = term_w_15;
  l_13 = t;
  t = (ATerm) ATinsert(CheckATermList(e_13), term_x_15);
  s_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_15, (ATerm) ATinsert(CheckATermList(e_13), term_x_15));
  t = r_8(l_13, s_13, t);
  j_13 = t;
  t = (ATerm) ATinsert(CheckATermList(j_13), d_13);
  k_13 = t;
  t = SSL_printnl(h_13, k_13);
  t = SSL_close_file(h_13);
  t = (ATerm) ATmakeAppl(sym_FILE_1, t_13);
  return(t);
}
static ATerm t_8 (ATerm p_53, ATerm q_53, ATerm t)
{
  ATerm p_14 = NULL;
  t = SSL_fputc(p_53, q_53);
  p_14 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, p_14);
  return(t);
}
static ATerm u_8 (ATerm w_37, ATerm x_37, ATerm t)
{
  ATerm u_14 = NULL;
  t = SSL_write_term_to_stream_text(w_37, x_37);
  u_14 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, u_14);
  return(t);
}
ATerm basename_1_0 (ATerm m_128 (ATerm), ATerm t)
{
  ATerm f_15 = NULL,h_15 = NULL;
  h_15 = t;
  t = SSL_explode_string(h_15);
  {
    ATerm y_15 = t;
    int z_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm i_17 (ATerm t);
        static ATerm i_17 (ATerm t)
        {
          ATerm t_16 = NULL,w_16 = NULL,z_16 = NULL;
          t_16 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              w_16 = ATgetFirst((ATermList) t);
              z_16 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          {
            ATerm a_16 = t;
            int b_16 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm g_8 = NULL,l_8 = NULL,o_1 = NULL;
                t = SSLgetAnnotations(t_16);
                g_8 = t;
                t = z_16;
                t = i_17(t);
                l_8 = t;
                t = (ATerm) ATinsert(CheckATermList(l_8), w_16);
                o_1 = t;
                t = SSLsetAnnotations(o_1, g_8);
                LocalPopChoice(b_16);
              }
            else
              {
                t = a_16;
                {
                  ATerm c_16 = t;
                  int d_16 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm r_9 = NULL,p_1 = NULL;
                      t = SSLgetAnnotations(t_16);
                      r_9 = t;
                      t = w_16;
                      if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 47)))
                        _fail(t);
                      t = (ATerm) ATinsert(CheckATermList(z_16), w_16);
                      p_1 = t;
                      t = SSLsetAnnotations(p_1, r_9);
                      LocalPopChoice(d_16);
                    }
                  else
                    {
                      t = c_16;
                      {
                        ATerm z_10 = NULL,d_11 = NULL,w_2 = NULL;
                        t = SSLgetAnnotations(t_16);
                        z_10 = t;
                        t = w_16;
                        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 46)))
                          _fail(t);
                        t = z_16;
                        t = m_128(t);
                        d_11 = t;
                        t = (ATerm) ATinsert(CheckATermList(d_11), w_16);
                        w_2 = t;
                        t = SSLsetAnnotations(w_2, z_10);
                        t = (ATerm) ATempty;
                      }
                    }
                }
              }
          }
          return(t);
        }
        t = i_17(t);
        LocalPopChoice(z_15);
      }
    else
      {
        t = y_15;
      }
  }
  f_15 = t;
  t = SSL_implode_string(f_15);
  return(t);
}
ATerm at_suffix_rev_1_0 (ATerm j_118 (ATerm), ATerm t)
{
  static ATerm n_18 (ATerm t);
  static ATerm n_18 (ATerm t)
  {
    ATerm e_16 = t;
    int f_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_18 = NULL,l_18 = NULL,m_18 = NULL,t_11 = NULL,e_12 = NULL,d_3 = NULL;
        k_18 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            l_18 = ATgetFirst((ATermList) t);
            m_18 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(k_18);
        t_11 = t;
        t = m_18;
        t = n_18(t);
        e_12 = t;
        t = (ATerm) ATinsert(CheckATermList(e_12), l_18);
        d_3 = t;
        t = SSLsetAnnotations(d_3, t_11);
        LocalPopChoice(f_16);
      }
    else
      {
        t = e_16;
        t = j_118(t);
      }
    return(t);
  }
  t = n_18(t);
  return(t);
}
ATerm get_filename_0_0 (ATerm t)
{
  ATerm w_18 = NULL,x_18 = NULL,b_19 = NULL;
  b_19 = t;
  t = SSL_explode_string(b_19);
  {
    ATerm g_16 = t;
    int h_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm t_0 (ATerm t);
        static ATerm t_0 (ATerm t)
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm i_16 = ATgetFirst((ATermList) t);
              if(((ATgetType(i_16) != AT_INT) || (ATgetInt((ATermInt) i_16) != 47)))
                _fail(t);
              if(((w_18 != NULL) && (w_18 != (ATerm) ATgetNext((ATermList) t))))
                _fail((ATerm) ATgetNext((ATermList) t));
              else
                w_18 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          return(t);
        }
        t = at_suffix_rev_1_0(t_0, t);
        t = not_null(w_18);
        LocalPopChoice(h_16);
      }
    else
      {
        t = g_16;
      }
  }
  x_18 = t;
  t = SSL_implode_string(x_18);
  return(t);
}
ATerm map_1_0 (ATerm k_117 (ATerm), ATerm t)
{
  static ATerm c_20 (ATerm t);
  static ATerm c_20 (ATerm t)
  {
    ATerm y_19 = NULL,a_20 = NULL,b_20 = NULL;
    y_19 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = y_19;
      }
    else
      {
        ATerm q_12 = NULL,y_12 = NULL,f_13 = NULL,g_3 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            a_20 = ATgetFirst((ATermList) t);
            b_20 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(y_19);
        q_12 = t;
        t = a_20;
        t = k_117(t);
        y_12 = t;
        t = b_20;
        t = c_20(t);
        f_13 = t;
        t = (ATerm) ATinsert(CheckATermList(f_13), y_12);
        g_3 = t;
        t = SSLsetAnnotations(g_3, q_12);
      }
    return(t);
  }
  t = c_20(t);
  return(t);
}
static ATerm n_10 (ATerm u_60, ATerm v_60, ATerm t)
{
  ATerm e_20 = NULL;
  t = lookup_table_0_1(u_60, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      e_20 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_10(v_60, e_20, t);
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
  t = filter_1_0(x_0, t);
  return(t);
}
static ATerm x_0 (ATerm t)
{
  ATerm j_16 = t;
  if((PushChoice() == 0))
    {
      ATerm k_20 = NULL,q_20 = NULL,r_20 = NULL,m_3 = NULL;
      r_20 = t;
      if(match_cons(t, sym_Imports_1))
        {
          q_20 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(r_20);
      k_20 = t;
      t = (ATerm) ATmakeAppl(sym_Imports_1, q_20);
      m_3 = t;
      t = SSLsetAnnotations(m_3, k_20);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = j_16;
    }
  return(t);
}
ATerm flatten_stratego_0_0 (ATerm t)
{
  ATerm i_20 = NULL;
  t = map_1_0(u_0, t);
  t = concat_0_0(t);
  i_20 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, i_20);
  return(t);
}
ATerm genzip_4_0 (ATerm o_119 (ATerm), ATerm p_119 (ATerm), ATerm q_119 (ATerm), ATerm r_119 (ATerm), ATerm t)
{
  static ATerm h_21 (ATerm t);
  static ATerm h_21 (ATerm t)
  {
    ATerm k_16 = t;
    int l_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_119(t);
        LocalPopChoice(l_16);
      }
    else
      {
        t = k_16;
        {
          ATerm s_20 = NULL,w_20 = NULL,y_20 = NULL,z_20 = NULL,a_21 = NULL,g_21 = NULL,o_3 = NULL;
          t = p_119(t);
          g_21 = t;
          if(match_cons(t, sym__2))
            {
              w_20 = ATgetArgument(t, 0);
              y_20 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(g_21);
          s_20 = t;
          t = w_20;
          t = r_119(t);
          z_20 = t;
          t = y_20;
          t = h_21(t);
          a_21 = t;
          t = (ATerm) ATmakeAppl(sym__2, z_20, a_21);
          o_3 = t;
          t = SSLsetAnnotations(o_3, s_20);
          t = q_119(t);
        }
      }
    return(t);
  }
  t = h_21(t);
  return(t);
}
static ATerm y_0 (ATerm t)
{
  ATerm k_21 = NULL;
  if(match_cons(t, sym_Imports_1))
    {
      k_21 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = k_21;
  return(t);
}
static ATerm z_8 (ATerm j_162, ATerm t)
{
  t = j_162;
  t = filter_1_0(y_0, t);
  t = concat_0_0(t);
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm r_21 = NULL;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_y_13;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      ATerm t_21 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          r_21 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, term_v_12);
      t_21 = t;
      t = (ATerm) ATmakeAppl(sym__2, r_21, (ATerm) ATinsert(ATempty, term_v_12));
      t = f_10(r_21, t_21, t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
ATerm pass_keep_0_0 (ATerm t)
{
  ATerm x_21 = NULL,y_21 = NULL,z_21 = NULL,a_22 = NULL;
  t = term_m_16;
  {
    ATerm o_16 = t;
    int p_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_22 = NULL,e_22 = NULL;
        t = term_n_13;
        b_22 = t;
        t = term_m_16;
        e_22 = t;
        t = term_q_16;
        t = n_10(b_22, e_22, t);
        LocalPopChoice(p_16);
      }
    else
      {
        t = o_16;
        t = term_s_16;
      }
  }
  y_21 = t;
  t = term_s_16;
  a_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_21, term_s_16);
  t = a_9(y_21, a_22, t);
  z_21 = t;
  t = SSL_int_to_string(z_21);
  x_21 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, x_21), term_m_16);
  return(t);
}
static ATerm a_9 (ATerm q_57, ATerm r_57, ATerm t)
{
  ATerm u_16 = t;
  int v_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(q_57, r_57);
      LocalPopChoice(v_16);
    }
  else
    {
      t = u_16;
      t = SSL_subtr(q_57, r_57);
    }
  return(t);
}
ATerm pass_verbose_0_0 (ATerm t)
{
  ATerm f_22 = NULL,i_22 = NULL,j_22 = NULL,k_22 = NULL;
  t = term_x_16;
  {
    ATerm a_17 = t;
    int c_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_22 = NULL,r_22 = NULL;
        t = term_n_13;
        p_22 = t;
        t = term_x_16;
        r_22 = t;
        t = term_d_17;
        t = n_10(p_22, r_22, t);
        LocalPopChoice(c_17);
      }
    else
      {
        t = a_17;
        t = term_s_16;
      }
  }
  i_22 = t;
  t = term_s_16;
  k_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_22, term_s_16);
  t = a_9(i_22, k_22, t);
  j_22 = t;
  t = SSL_int_to_string(j_22);
  f_22 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, f_22), term_x_16);
  return(t);
}
static ATerm a_1 (ATerm t)
{
  ATerm c_23 = NULL,f_23 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm g_17 = ATgetArgument(t, 0);
      if(match_cons(g_17, sym_Stream_1))
        {
          c_23 = ATgetArgument(g_17, 0);
        }
      else
        _fail(t);
      f_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_8(c_23, f_23, t);
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm a_143 (ATerm), ATerm b_143 (ATerm), ATerm t)
{
  ATerm v_22 = NULL,a_23 = NULL;
  a_23 = t;
  t = xtc_new_file_0_0(t);
  v_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_22, a_23);
  t = v_8(a_1, v_22, a_23, t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, v_22);
  t = xtc_transform_file_2_0(a_143, b_143, t);
  t = read_from_0_0(t);
  return(t);
}
static ATerm b_9 (ATerm x_72, ATerm y_72, ATerm t)
{
  t = SSL_execvp(x_72, y_72);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm j_25 = NULL,k_25 = NULL,m_25 = NULL,t_25 = NULL;
  j_25 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      k_25 = ATgetArgument(t, 0);
      {
        ATerm r_13 = NULL,v_13 = NULL;
        t = SSL_int_to_string(k_25);
        r_13 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_j_17), r_13), term_h_17);
        v_13 = t;
        t = SSL_concat_strings(v_13);
      }
    }
  else
    {
      ATerm j_14 = NULL,k_14 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          k_25 = ATgetArgument(t, 0);
          m_25 = ATgetArgument(t, 1);
          t_25 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(m_25);
      j_14 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, t_25), term_m_17), j_14), term_k_17), k_25);
      k_14 = t;
      t = SSL_concat_strings(k_14);
    }
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm w_25 = NULL;
  w_25 = t;
  {
    ATerm n_17 = t;
    int o_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm b_1 (ATerm t);
        static ATerm b_1 (ATerm t)
        {
          if(match_cons(t, sym_Signal_3))
            {
              ATerm p_17 = ATgetArgument(t, 0);
              if((w_25 != ATgetArgument(t, 1)))
                {
                  _fail(ATgetArgument(t, 1));
                }
              {
                ATerm q_17 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_w_24), term_s_24), term_m_24), term_h_24), term_y_23), term_r_23), term_m_23), term_h_23), term_y_22), term_s_22), term_l_22), term_c_22), term_s_21), term_m_21), term_c_21), term_t_20), term_l_20), term_d_20), term_v_19), term_r_19), term_l_19), term_g_19), term_c_19), term_v_18), term_p_18), term_h_18), term_a_18), term_u_17);
        t = fetch_elem_1_0(b_1, t);
        LocalPopChoice(o_17);
      }
    else
      {
        t = n_17;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, w_25);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm c_26 = NULL,p_26 = NULL;
  c_26 = t;
  {
    ATerm x_24 = t;
    int y_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm z_24 = ATgetArgument(t, 0);
            p_26 = ATgetArgument(t, 1);
            {
              ATerm a_25 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(y_24);
        {
          ATerm b_25 = t;
          int c_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm t_14 = NULL,w_14 = NULL,x_14 = NULL;
              t = p_26;
              {
                ATerm d_25 = t;
                if((PushChoice() == 0))
                  {
                    if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
                      _fail(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = d_25;
                  }
              }
              t = signal_from_number_0_0(t);
              t = signal_to_descr_0_0(t);
              t_14 = t;
              t = term_e_25;
              w_14 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, t_14), term_f_25);
              x_14 = t;
              t = SSL_printnl(w_14, x_14);
              t = (ATerm) ATmakeAppl(sym__2, term_e_25, (ATerm) ATinsert(ATinsert(ATempty, t_14), term_f_25));
              LocalPopChoice(c_25);
            }
          else
            {
              t = b_25;
              t = c_26;
            }
        }
      }
    else
      {
        t = x_24;
        t = c_26;
      }
  }
  t = c_26;
  return(t);
}
ATerm fork_0_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_and_wait_1_0 (ATerm j_134 (ATerm), ATerm t)
{
  ATerm y_26 = NULL,z_26 = NULL;
  z_26 = t;
  t = fork_0_0(t);
  y_26 = t;
  {
    ATerm g_25 = t;
    int h_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = z_26;
        t = j_134(t);
        LocalPopChoice(h_25);
      }
    else
      {
        t = g_25;
        t = SSL_waitpid(y_26);
        t = warn_ifsignaled_0_0(t);
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm i_25 = ATgetArgument(t, 0);
            if(((ATgetType(i_25) != AT_INT) || (ATgetInt((ATermInt) i_25) != 0)))
              _fail(t);
            {
              ATerm l_25 = ATgetArgument(t, 1);
            }
            {
              ATerm n_25 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = z_26;
      }
  }
  return(t);
}
static ATerm d_9 (ATerm t_63, ATerm t)
{
  t = SSL_hashtable_keys(t_63);
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm l_27 = NULL,m_27 = NULL;
  static ATerm e_1 (ATerm t);
  static ATerm e_1 (ATerm t)
  {
    ATerm o_27 = NULL,p_27 = NULL;
    o_27 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(l_27), o_27);
    t = n_10(not_null(l_27), o_27, t);
    p_27 = t;
    t = (ATerm) ATmakeAppl(sym__2, o_27, p_27);
    return(t);
  }
  if(((l_27 != NULL) && (l_27 != t)))
    _fail(t);
  else
    l_27 = t;
  t = lookup_table_0_1(l_27, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      m_27 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = d_9(m_27, t);
  t = map_1_0(e_1, t);
  return(t);
}
ATerm if_verbose5_1_0 (ATerm c_134 (ATerm), ATerm t)
{
  ATerm u_27 = NULL;
  u_27 = t;
  {
    ATerm o_25 = t;
    int p_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_27 = NULL,a_28 = NULL,b_28 = NULL;
        t = term_n_13;
        a_28 = t;
        t = term_x_16;
        b_28 = t;
        t = term_d_17;
        t = n_10(a_28, b_28, t);
        z_27 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_27, term_a_24);
        t = geq_0_0(t);
        t = u_27;
        t = c_134(t);
        LocalPopChoice(p_25);
      }
    else
      {
        t = o_25;
        t = u_27;
      }
  }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm b_134 (ATerm), ATerm t)
{
  ATerm g_28 = NULL;
  g_28 = t;
  {
    ATerm q_25 = t;
    int r_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_28 = NULL,j_28 = NULL,k_28 = NULL;
        t = term_n_13;
        j_28 = t;
        t = term_x_16;
        k_28 = t;
        t = term_d_17;
        t = n_10(j_28, k_28, t);
        i_28 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_28, term_g_20);
        t = geq_0_0(t);
        t = g_28;
        t = b_134(t);
        LocalPopChoice(r_25);
      }
    else
      {
        t = q_25;
        t = g_28;
      }
  }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm d_134 (ATerm), ATerm t)
{
  ATerm n_28 = NULL;
  n_28 = t;
  {
    ATerm s_25 = t;
    int u_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_28 = NULL,q_28 = NULL,r_28 = NULL;
        t = term_n_13;
        q_28 = t;
        t = term_x_16;
        r_28 = t;
        t = term_d_17;
        t = n_10(q_28, r_28, t);
        p_28 = t;
        t = (ATerm) ATmakeAppl(sym__2, p_28, term_j_18);
        t = geq_0_0(t);
        t = n_28;
        t = d_134(t);
        LocalPopChoice(u_25);
      }
    else
      {
        t = s_25;
        t = n_28;
      }
  }
  return(t);
}
static ATerm f_9 (ATerm v_121 (ATerm), ATerm z_43, ATerm y_43, ATerm t)
{
  static ATerm a_30 (ATerm t);
  static ATerm a_30 (ATerm t)
  {
    ATerm m_29 = NULL,p_29 = NULL,q_29 = NULL;
    m_29 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = y_43;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            p_29 = ATgetFirst((ATermList) t);
            q_29 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm v_25 = t;
          int x_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = m_29;
              {
                static ATerm f_1 (ATerm t);
                static ATerm f_1 (ATerm t)
                {
                  t = y_43;
                  return(t);
                }
                t = o_9(v_121, f_1, p_29, q_29, t);
              }
              t = a_30(t);
              LocalPopChoice(x_25);
            }
          else
            {
              t = v_25;
              {
                ATerm c_15 = NULL,g_15 = NULL,v_3 = NULL;
                t = SSLgetAnnotations(m_29);
                c_15 = t;
                t = q_29;
                t = a_30(t);
                g_15 = t;
                t = (ATerm) ATinsert(CheckATermList(g_15), p_29);
                v_3 = t;
                t = SSLsetAnnotations(v_3, c_15);
              }
            }
        }
      }
    return(t);
  }
  t = z_43;
  t = a_30(t);
  return(t);
}
static ATerm i_1 (ATerm t)
{
  ATerm z_30 = NULL;
  if(match_cons(t, sym__2))
    {
      z_30 = ATgetArgument(t, 0);
      if((z_30 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm g_9 (ATerm y_59, ATerm z_59, ATerm a_60, ATerm t)
{
  ATerm h_30 = NULL,n_30 = NULL,o_30 = NULL,p_30 = NULL;
  h_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_59, z_59);
  {
    ATerm y_25 = t;
    int z_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm a_26 = ATgetArgument(t, 0);
            ATerm b_26 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, y_59, z_59);
        t = n_10(y_59, z_59, t);
        LocalPopChoice(z_25);
      }
    else
      {
        t = y_25;
        t = (ATerm) ATempty;
      }
  }
  o_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_30, a_60);
  t = f_9(i_1, o_30, a_60, t);
  n_30 = t;
  t = (ATerm) ATmakeAppl(sym__3, y_59, z_59, n_30);
  t = lookup_table_0_1(y_59, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      p_30 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_10(z_59, n_30, p_30, t);
  t = h_30;
  return(t);
}
static ATerm h_9 (ATerm a_131 (ATerm), ATerm i_60, ATerm h_60, ATerm t)
{
  static ATerm j_1 (ATerm t);
  static ATerm j_1 (ATerm t)
  {
    ATerm a_31 = NULL,d_31 = NULL;
    if(match_cons(t, sym__2))
      {
        a_31 = ATgetArgument(t, 0);
        d_31 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, i_60, a_31, d_31);
    t = a_131(t);
    return(t);
  }
  t = h_60;
  t = map_1_0(j_1, t);
  return(t);
}
static ATerm w_31 (ATerm p_31, ATerm t)
{
  t = SSL_fclose(p_31);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm t_31 = NULL,u_31 = NULL;
  u_31 = t;
  if(match_cons(t, sym_Stream_1))
    {
      t_31 = ATgetArgument(t, 0);
      {
        ATerm d_26 = t;
        int e_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(t_31);
            LocalPopChoice(e_26);
          }
        else
          {
            t = d_26;
            t = w_31(u_31, t);
          }
      }
    }
  else
    {
      t = w_31(u_31, t);
    }
  return(t);
}
static ATerm i_9 (ATerm y_37, ATerm t)
{
  t = SSL_read_term_from_stream(y_37);
  return(t);
}
static ATerm e_10 (ATerm v_51, ATerm w_51, ATerm t)
{
  t = SSL_strcat(v_51, w_51);
  return(t);
}
static ATerm j_9 (ATerm r_53, ATerm s_53, ATerm t)
{
  ATerm x_31 = NULL;
  t = SSL_fopen(r_53, s_53);
  x_31 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, x_31);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm y_31 = NULL;
  t = SSL_stdin_stream();
  y_31 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, y_31);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm b_32 = NULL;
  t = SSL_stdout_stream();
  b_32 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, b_32);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm c_32 = NULL;
  t = SSL_stderr_stream();
  c_32 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, c_32);
  return(t);
}
static ATerm y_33 (ATerm l_32, ATerm t)
{
  ATerm m_32 = NULL;
  t = SSL_explode_term(l_32);
  if(match_cons(t, sym__2))
    {
      ATerm f_26 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) f_26) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm g_26 = ATgetArgument(t, 1);
        if(((ATgetType(g_26) == AT_LIST) && !(ATisEmpty(g_26))))
          {
            m_32 = ATgetFirst((ATermList) g_26);
            {
              ATerm h_26 = (ATerm) ATgetNext((ATermList) g_26);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = m_32;
  if(match_cons(t, sym_stderr_0))
    {
      t = m_32;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = m_32;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = m_32;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm z_33 (ATerm r_32, ATerm u_32, ATerm a_33, ATerm t)
{
  ATerm b_33 = NULL,c_33 = NULL,d_33 = NULL,g_33 = NULL,d_4 = NULL;
  t = SSLgetAnnotations(a_33);
  d_33 = t;
  t = r_32;
  if(match_cons(t, sym_Path_1))
    {
      g_33 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, g_33, u_32);
  d_4 = t;
  t = SSLsetAnnotations(d_4, d_33);
  if(match_cons(t, sym__2))
    {
      b_33 = ATgetArgument(t, 0);
      c_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_9(b_33, c_33, t);
  return(t);
}
static ATerm a_34 (ATerm l_33, ATerm m_33, ATerm n_33, ATerm t)
{
  ATerm o_33 = NULL,p_33 = NULL,q_33 = NULL,t_33 = NULL,e_4 = NULL;
  t = SSLgetAnnotations(n_33);
  q_33 = t;
  t = SSL_is_string(l_33);
  t_33 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_33, m_33);
  e_4 = t;
  t = SSLsetAnnotations(e_4, q_33);
  if(match_cons(t, sym__2))
    {
      o_33 = ATgetArgument(t, 0);
      p_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_9(o_33, p_33, t);
  return(t);
}
static ATerm k_9 (ATerm t)
{
  ATerm v_33 = NULL,w_33 = NULL,x_33 = NULL;
  v_33 = t;
  if(match_cons(t, sym__2))
    {
      w_33 = ATgetArgument(t, 0);
      x_33 = ATgetArgument(t, 1);
      {
        ATerm i_26 = t;
        int j_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = y_33(v_33, t);
            LocalPopChoice(j_26);
          }
        else
          {
            t = i_26;
            {
              ATerm k_26 = t;
              int l_26 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = z_33(w_33, x_33, v_33, t);
                  LocalPopChoice(l_26);
                }
              else
                {
                  t = k_26;
                  t = a_34(w_33, x_33, v_33, t);
                }
            }
          }
      }
    }
  else
    {
      t = y_33(v_33, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm c_34 = NULL,d_34 = NULL,e_34 = NULL,n_34 = NULL;
  n_34 = t;
  {
    ATerm m_26 = t;
    int n_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, n_34, term_o_26);
        t = k_9(t);
        LocalPopChoice(n_26);
      }
    else
      {
        t = m_26;
        {
          ATerm n_16 = NULL,r_16 = NULL;
          t = term_q_26;
          r_16 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_q_26, n_34);
          t = e_10(r_16, n_34, t);
          n_16 = t;
          t = SSL_perror(n_16);
          _fail(t);
        }
      }
  }
  d_34 = t;
  if(match_cons(t, sym_Stream_1))
    {
      e_34 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = i_9(e_34, t);
  c_34 = t;
  t = d_34;
  t = fclose_0_0(t);
  t = c_34;
  return(t);
}
static ATerm m_1 (ATerm t)
{
  t = term_r_26;
  return(t);
}
static ATerm n_1 (ATerm t)
{
  t = term_s_26;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm t_26 = t;
  int u_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_34 = NULL,w_34 = NULL;
      s_34 = t;
      t = (ATerm) ATinsert(ATempty, term_v_26);
      w_34 = t;
      t = (ATerm) ATmakeAppl(sym__2, s_34, (ATerm) ATinsert(ATempty, term_v_26));
      t = f_10(s_34, w_34, t);
      LocalPopChoice(u_26);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = t_26;
      {
        ATerm w_26 = t;
        int x_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_27 = t;
            if((PushChoice() == 0))
              {
                ATerm y_34 = NULL,b_35 = NULL;
                y_34 = t;
                t = (ATerm) ATinsert(ATempty, term_v_12);
                b_35 = t;
                t = (ATerm) ATmakeAppl(sym__2, y_34, (ATerm) ATinsert(ATempty, term_v_12));
                t = f_10(y_34, b_35, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = a_27;
              }
            t = debug_1_0(m_1, t);
            LocalPopChoice(x_26);
          }
        else
          {
            t = w_26;
            t = debug_1_0(n_1, t);
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
  t = term_b_27;
  return(t);
}
static ATerm t_1 (ATerm t)
{
  t = debug_1_0(v_1, t);
  return(t);
}
static ATerm v_1 (ATerm t)
{
  t = term_c_27;
  return(t);
}
static ATerm w_1 (ATerm t)
{
  ATerm b_36 = NULL,c_36 = NULL,e_36 = NULL;
  b_36 = t;
  t = term_e_25;
  c_36 = t;
  t = (ATerm) ATinsert(ATempty, term_d_27);
  e_36 = t;
  t = SSL_printnl(c_36, e_36);
  t = b_36;
  return(t);
}
static ATerm x_1 (ATerm t)
{
  ATerm g_36 = NULL,h_36 = NULL,i_36 = NULL;
  if(match_cons(t, sym__3))
    {
      g_36 = ATgetArgument(t, 0);
      h_36 = ATgetArgument(t, 1);
      i_36 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = g_9(g_36, h_36, i_36, t);
  return(t);
}
static ATerm y_1 (ATerm t)
{
  ATerm j_36 = NULL,k_36 = NULL,l_36 = NULL;
  j_36 = t;
  t = term_e_25;
  k_36 = t;
  t = (ATerm) ATinsert(ATempty, term_e_27);
  l_36 = t;
  t = SSL_printnl(k_36, l_36);
  t = j_36;
  return(t);
}
static ATerm a_2 (ATerm t)
{
  ATerm m_36 = NULL,n_36 = NULL,o_36 = NULL;
  m_36 = t;
  t = term_e_25;
  n_36 = t;
  t = (ATerm) ATinsert(ATempty, term_d_27);
  o_36 = t;
  t = SSL_printnl(n_36, o_36);
  t = m_36;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm c_35 = NULL,g_35 = NULL,j_35 = NULL,k_35 = NULL,l_35 = NULL,m_35 = NULL,p_35 = NULL,q_35 = NULL,r_35 = NULL,s_35 = NULL,t_35 = NULL,u_35 = NULL,v_35 = NULL,w_35 = NULL;
  c_35 = t;
  t = if_verbose5_1_0(q_1, t);
  {
    ATerm f_27 = t;
    if((PushChoice() == 0))
      {
        ATerm x_35 = NULL,a_36 = NULL;
        t = term_g_27;
        x_35 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, c_35);
        a_36 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_g_27, (ATerm) ATmakeAppl(sym_Imported_1, c_35));
        t = n_10(x_35, a_36, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = f_27;
      }
  }
  j_35 = t;
  t = term_g_27;
  s_35 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_g_27, term_h_27, (ATerm) ATinsert(ATempty, c_35));
  t = lookup_table_0_1(s_35, t);
  w_35 = t;
  t = term_h_27;
  t_35 = t;
  t = (ATerm) ATinsert(ATempty, c_35);
  u_35 = t;
  t = w_35;
  if(match_cons(t, sym_Hashtable_1))
    {
      v_35 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_10(t_35, u_35, v_35, t);
  t = j_35;
  t = if_verbose4_1_0(t_1, t);
  t = read_repository_file_0_0(t);
  t = if_verbose6_1_0(w_1, t);
  g_35 = t;
  t = term_g_27;
  r_35 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_27, g_35);
  t = h_9(x_1, r_35, g_35, t);
  t = if_verbose6_1_0(y_1, t);
  t = term_g_27;
  k_35 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_g_27, (ATerm)ATmakeAppl(sym_Imported_1, c_35), (ATerm) ATempty);
  t = lookup_table_0_1(k_35, t);
  q_35 = t;
  t = (ATerm) ATmakeAppl(sym_Imported_1, c_35);
  l_35 = t;
  t = (ATerm) ATempty;
  m_35 = t;
  t = q_35;
  if(match_cons(t, sym_Hashtable_1))
    {
      p_35 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_10(l_35, m_35, p_35, t);
  t = (ATerm) ATmakeAppl(sym__3, term_g_27, (ATerm)ATmakeAppl(sym_Imported_1, c_35), (ATerm) ATempty);
  t = if_verbose4_1_0(a_2, t);
  return(t);
}
ATerm repeat_2_0 (ATerm z_109 (ATerm), ATerm a_110 (ATerm), ATerm t)
{
  static ATerm p_36 (ATerm t);
  static ATerm p_36 (ATerm t)
  {
    ATerm i_27 = t;
    int j_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = z_109(t);
        t = p_36(t);
        LocalPopChoice(j_27);
      }
    else
      {
        t = i_27;
        t = a_110(t);
      }
    return(t);
  }
  t = p_36(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm k_27 = t;
  int n_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_36 = NULL,r_36 = NULL;
      t = term_n_13;
      q_36 = t;
      t = term_q_27;
      r_36 = t;
      t = term_r_27;
      t = n_10(q_36, r_36, t);
      LocalPopChoice(n_27);
    }
  else
    {
      t = k_27;
      {
        ATerm s_27 = t;
        int t_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_36 = NULL;
            t = term_v_27;
            s_36 = t;
            t = SSL_getenv(s_36);
            LocalPopChoice(t_27);
          }
        else
          {
            t = s_27;
            t = GetInternalDefaultXtcRepository_0_0(t);
          }
      }
    }
  return(t);
}
static ATerm b_2 (ATerm t)
{
  t = debug_1_0(c_2, t);
  return(t);
}
static ATerm c_2 (ATerm t)
{
  t = term_w_27;
  return(t);
}
static ATerm e_2 (ATerm t)
{
  ATerm a_37 = NULL,b_37 = NULL;
  t = term_g_27;
  a_37 = t;
  t = term_x_27;
  b_37 = t;
  t = term_y_27;
  t = n_10(a_37, b_37, t);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm c_28 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = c_28;
      }
  }
  return(t);
}
static ATerm f_2 (ATerm t)
{
  t = debug_1_0(g_2, t);
  return(t);
}
static ATerm g_2 (ATerm t)
{
  t = term_d_28;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm w_36 = NULL;
  t = if_verbose5_1_0(b_2, t);
  w_36 = t;
  {
    ATerm e_28 = t;
    int f_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_36 = NULL,y_36 = NULL;
        t = term_g_27;
        x_36 = t;
        t = term_h_27;
        y_36 = t;
        t = term_h_28;
        t = n_10(x_36, y_36, t);
        LocalPopChoice(f_28);
      }
    else
      {
        t = e_28;
        {
          ATerm z_36 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          z_36 = t;
          t = repeat_2_0(e_2, _id, t);
          t = z_36;
        }
      }
  }
  t = w_36;
  t = if_verbose5_1_0(f_2, t);
  return(t);
}
static ATerm h_2 (ATerm t)
{
  t = debug_1_0(l_2, t);
  return(t);
}
static ATerm l_2 (ATerm t)
{
  t = term_l_28;
  return(t);
}
static ATerm f_38 (ATerm g_37, ATerm t)
{
  ATerm i_37 = NULL,j_37 = NULL,k_37 = NULL;
  t = term_g_27;
  j_37 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, g_37);
  k_37 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_27, (ATerm) ATmakeAppl(sym_Tool_1, g_37));
  t = n_10(j_37, k_37, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm m_28 = ATgetFirst((ATermList) t);
      if(match_cons(m_28, sym__2))
        {
          ATerm s_28 = ATgetArgument(m_28, 0);
          i_37 = ATgetArgument(m_28, 1);
        }
      else
        _fail(t);
      {
        ATerm o_28 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = i_37;
  return(t);
}
static ATerm o_2 (ATerm t)
{
  t = debug_1_0(p_2, t);
  return(t);
}
static ATerm p_2 (ATerm t)
{
  t = term_l_28;
  return(t);
}
static ATerm s_2 (ATerm t)
{
  t = term_g_27;
  t = table_getlist_0_0(t);
  t = debug_1_0(v_2, t);
  return(t);
}
static ATerm v_2 (ATerm t)
{
  t = term_t_28;
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm u_28 = t;
  int v_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_37 = NULL,m_37 = NULL,n_37 = NULL;
      t = if_verbose5_1_0(h_2, t);
      t = xtc_load_0_0(t);
      n_37 = t;
      if(match_cons(t, sym__2))
        {
          l_37 = ATgetArgument(t, 0);
          m_37 = ATgetArgument(t, 1);
          {
            ATerm w_28 = t;
            int x_28 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm q_37 = NULL,r_37 = NULL,u_37 = NULL;
                t = term_g_27;
                r_37 = t;
                t = (ATerm) ATmakeAppl(sym_Tool_1, l_37);
                u_37 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_g_27, (ATerm) ATmakeAppl(sym_Tool_1, l_37));
                t = n_10(r_37, u_37, t);
                {
                  static ATerm m_2 (ATerm t);
                  static ATerm m_2 (ATerm t)
                  {
                    if(match_cons(t, sym__2))
                      {
                        if((m_37 != ATgetArgument(t, 0)))
                          {
                            _fail(ATgetArgument(t, 0));
                          }
                        if(((q_37 != NULL) && (q_37 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          q_37 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = fetch_1_0(m_2, t);
                }
                t = not_null(q_37);
                LocalPopChoice(x_28);
              }
            else
              {
                t = w_28;
                t = f_38(n_37, t);
              }
          }
        }
      else
        {
          t = f_38(n_37, t);
        }
      t = if_verbose5_1_0(o_2, t);
      LocalPopChoice(v_28);
    }
  else
    {
      t = u_28;
      {
        ATerm e_38 = NULL,y_16 = NULL,b_17 = NULL;
        e_38 = t;
        t = term_e_25;
        y_16 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_z_28), e_38), term_y_28);
        b_17 = t;
        t = SSL_printnl(y_16, b_17);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_z_28), e_38), term_y_28);
        t = if_verbose5_1_0(s_2, t);
        _fail(t);
      }
    }
  return(t);
}
ATerm xtc_command_1_0 (ATerm j_144 (ATerm), ATerm t)
{
  ATerm n_38 = NULL,o_38 = NULL;
  o_38 = t;
  t = j_144(t);
  t = xtc_find_0_0(t);
  n_38 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_38, o_38);
  {
    static ATerm x_2 (ATerm t);
    static ATerm x_2 (ATerm t)
    {
      ATerm p_38 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, n_38, o_38);
      t = b_9(n_38, o_38, t);
      t = term_s_16;
      p_38 = t;
      t = SSL_exit(p_38);
      return(t);
    }
    t = fork_and_wait_1_0(x_2, t);
  }
  t = o_38;
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm q_0 (ATerm), ATerm r_0 (ATerm), ATerm t)
{
  ATerm r_38 = NULL,s_38 = NULL;
  r_38 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm t_38 = NULL,w_38 = NULL;
      t = r_38;
      t = xtc_new_file_0_0(t);
      t_38 = t;
      t = r_0(t);
      w_38 = t;
      t = (ATerm) ATmakeAppl(sym__2, w_38, (ATerm) ATinsert(ATinsert(ATempty, t_38), term_o_13));
      t = conc_0_0(t);
      t = xtc_command_1_0(q_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, t_38);
    }
  else
    {
      ATerm y_38 = NULL,z_38 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          s_38 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = s_38;
      t = xtc_new_file_0_0(t);
      y_38 = t;
      t = r_0(t);
      z_38 = t;
      t = (ATerm) ATmakeAppl(sym__2, z_38, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, y_38), term_o_13), s_38), term_a_29));
      t = conc_0_0(t);
      t = xtc_command_1_0(q_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, y_38);
    }
  return(t);
}
static ATerm s_41 (ATerm i_39, ATerm j_39, ATerm o_39, ATerm t)
{
  ATerm p_39 = NULL,s_39 = NULL,e_17 = NULL,f_17 = NULL,h_4 = NULL;
  t = SSLgetAnnotations(o_39);
  p_39 = t;
  t = i_39;
  {
    ATerm b_29 = t;
    if((PushChoice() == 0))
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("rtree", 0, ATtrue)))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = b_29;
      }
  }
  s_39 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_39, j_39);
  h_4 = t;
  t = SSLsetAnnotations(h_4, p_39);
  f_17 = t;
  t = SSL_explode_term(f_17);
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
                e_17 = ATgetFirst((ATermList) f_29);
                {
                  ATerm g_29 = (ATerm) ATgetNext((ATermList) f_29);
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
  t = e_17;
  {
    ATerm h_29 = t;
    int i_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_29 = t;
        int k_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_40 = NULL;
            if(match_cons(t, sym_FILE_1))
              {
                b_40 = ATgetArgument(t, 0);
                {
                  ATerm l_17 = NULL,i_4 = NULL;
                  t = SSLgetAnnotations(e_17);
                  l_17 = t;
                  t = (ATerm) ATmakeAppl(sym_FILE_1, b_40);
                  i_4 = t;
                  t = SSLsetAnnotations(i_4, l_17);
                }
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = e_17;
              }
            LocalPopChoice(k_29);
            t = xtc_transform_file_2_0(y_2, z_2, t);
          }
        else
          {
            t = j_29;
            t = xtc_transform_term_2_0(a_3, c_3, t);
          }
        t = read_from_0_0(t);
        LocalPopChoice(i_29);
      }
    else
      {
        t = h_29;
        {
          ATerm g_41 = NULL,h_41 = NULL,i_41 = NULL;
          t = term_e_25;
          h_41 = t;
          t = (ATerm) ATinsert(ATinsert(ATempty, j_39), term_l_29);
          i_41 = t;
          t = SSL_printnl(h_41, i_41);
          t = term_s_16;
          g_41 = t;
          t = SSL_exit(g_41);
          t = (ATerm) ATinsert(ATinsert(ATempty, j_39), term_l_29);
        }
      }
  }
  return(t);
}
static ATerm t_41 (ATerm j_41, ATerm k_41, ATerm t)
{
  ATerm r_17 = NULL;
  t = SSL_explode_term(k_41);
  if(match_cons(t, sym__2))
    {
      ATerm n_29 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) n_29) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm o_29 = ATgetArgument(t, 1);
        if(((ATgetType(o_29) == AT_LIST) && !(ATisEmpty(o_29))))
          {
            ATerm r_29 = ATgetFirst((ATermList) o_29);
            ATerm s_29 = (ATerm) ATgetNext((ATermList) o_29);
            if(((ATgetType(s_29) == AT_LIST) && !(ATisEmpty(s_29))))
              {
                r_17 = ATgetFirst((ATermList) s_29);
                {
                  ATerm t_29 = (ATerm) ATgetNext((ATermList) s_29);
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
  t = r_17;
  {
    ATerm u_29 = t;
    int v_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = read_from_0_0(t);
        LocalPopChoice(v_29);
      }
    else
      {
        t = u_29;
        {
          ATerm m_41 = NULL,n_41 = NULL,o_41 = NULL;
          t = term_e_25;
          n_41 = t;
          t = (ATerm) ATinsert(ATinsert(ATempty, j_41), term_l_29);
          o_41 = t;
          t = SSL_printnl(n_41, o_41);
          t = term_s_16;
          m_41 = t;
          t = SSL_exit(m_41);
          t = (ATerm) ATinsert(ATinsert(ATempty, j_41), term_l_29);
        }
      }
  }
  return(t);
}
static ATerm y_2 (ATerm t)
{
  t = term_w_29;
  return(t);
}
static ATerm z_2 (ATerm t)
{
  ATerm d_40 = NULL,e_40 = NULL,f_40 = NULL,g_40 = NULL,h_40 = NULL;
  h_40 = t;
  t = pass_verbose_0_0(t);
  d_40 = t;
  t = h_40;
  t = pass_keep_0_0(t);
  e_40 = t;
  t = term_x_29;
  {
    ATerm y_29 = t;
    int z_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_40 = NULL,j_40 = NULL;
        t = term_n_13;
        i_40 = t;
        t = term_x_29;
        j_40 = t;
        t = term_b_30;
        t = n_10(i_40, j_40, t);
        LocalPopChoice(z_29);
        t = (ATerm) ATinsert(ATempty, term_x_29);
      }
    else
      {
        t = y_29;
        t = (ATerm) ATempty;
      }
  }
  f_40 = t;
  t = term_c_30;
  {
    ATerm d_30 = t;
    int e_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_40 = NULL,n_40 = NULL;
        t = term_n_13;
        m_40 = t;
        t = term_c_30;
        n_40 = t;
        t = term_f_30;
        t = n_10(m_40, n_40, t);
        LocalPopChoice(e_30);
      }
    else
      {
        t = d_30;
        t = (ATerm) ATempty;
      }
  }
  g_40 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, g_40), e_40), d_40), f_40);
  t = concat_0_0(t);
  return(t);
}
static ATerm a_3 (ATerm t)
{
  t = term_w_29;
  return(t);
}
static ATerm c_3 (ATerm t)
{
  ATerm o_40 = NULL,p_40 = NULL,w_40 = NULL,x_40 = NULL,y_40 = NULL;
  y_40 = t;
  t = pass_verbose_0_0(t);
  o_40 = t;
  t = y_40;
  t = pass_keep_0_0(t);
  p_40 = t;
  t = term_x_29;
  {
    ATerm g_30 = t;
    int i_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_40 = NULL,a_41 = NULL;
        t = term_n_13;
        z_40 = t;
        t = term_x_29;
        a_41 = t;
        t = term_b_30;
        t = n_10(z_40, a_41, t);
        LocalPopChoice(i_30);
        t = (ATerm) ATinsert(ATempty, term_x_29);
      }
    else
      {
        t = g_30;
        t = (ATerm) ATempty;
      }
  }
  w_40 = t;
  t = term_c_30;
  {
    ATerm j_30 = t;
    int k_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_41 = NULL,e_41 = NULL;
        t = term_n_13;
        b_41 = t;
        t = term_c_30;
        e_41 = t;
        t = term_f_30;
        t = n_10(b_41, e_41, t);
        LocalPopChoice(k_30);
      }
    else
      {
        t = j_30;
        t = (ATerm) ATempty;
      }
  }
  x_40 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, x_40), p_40), o_40), w_40);
  t = concat_0_0(t);
  return(t);
}
ATerm parse_module_0_0 (ATerm t)
{
  ATerm p_41 = NULL,q_41 = NULL,r_41 = NULL;
  p_41 = t;
  if(match_cons(t, sym__2))
    {
      q_41 = ATgetArgument(t, 0);
      r_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_41;
  if(match_string(t, "rtree"))
    {
      ATerm l_30 = t;
      int m_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = s_41(q_41, r_41, p_41, t);
          LocalPopChoice(m_30);
        }
      else
        {
          t = l_30;
          t = t_41(r_41, p_41, t);
        }
    }
  else
    {
      t = s_41(q_41, r_41, p_41, t);
    }
  return(t);
}
ATerm debug_1_0 (ATerm a_117 (ATerm), ATerm t)
{
  ATerm v_41 = NULL,w_41 = NULL,x_41 = NULL,y_41 = NULL;
  v_41 = t;
  t = a_117(t);
  w_41 = t;
  t = term_e_25;
  x_41 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, v_41), w_41);
  y_41 = t;
  t = SSL_printnl(x_41, y_41);
  t = v_41;
  return(t);
}
ATerm if_verbose3_1_0 (ATerm a_134 (ATerm), ATerm t)
{
  ATerm a_42 = NULL;
  a_42 = t;
  {
    ATerm q_30 = t;
    int r_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_42 = NULL,d_42 = NULL,e_42 = NULL;
        t = term_n_13;
        d_42 = t;
        t = term_x_16;
        e_42 = t;
        t = term_d_17;
        t = n_10(d_42, e_42, t);
        c_42 = t;
        t = (ATerm) ATmakeAppl(sym__2, c_42, term_f_18);
        t = geq_0_0(t);
        t = a_42;
        t = a_134(t);
        LocalPopChoice(r_30);
      }
    else
      {
        t = q_30;
        t = a_42;
      }
  }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm w_117 (ATerm), ATerm t)
{
  ATerm g_42 = NULL;
  static ATerm e_3 (ATerm t);
  static ATerm e_3 (ATerm t)
  {
    t = w_117(t);
    if(((g_42 != NULL) && (g_42 != t)))
      _fail(t);
    else
      g_42 = t;
    return(t);
  }
  t = fetch_1_0(e_3, t);
  t = not_null(g_42);
  return(t);
}
static ATerm f_10 (ATerm f_53, ATerm g_53, ATerm t)
{
  t = SSL_access(f_53, g_53);
  return(t);
}
ATerm is_relpath_0_0 (ATerm t)
{
  ATerm s_30 = t;
  if((PushChoice() == 0))
    {
      ATerm h_42 = NULL;
      h_42 = t;
      t = SSL_explode_string(h_42);
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
      t = h_42;
      PopChoice();
      _fail(t);
    }
  else
    {
      t = s_30;
    }
  return(t);
}
static ATerm m_9 (ATerm m_106 (ATerm), ATerm u_23, ATerm t_23, ATerm t)
{
  t = m_106(t);
  {
    ATerm v_30 = t;
    int w_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm f_3 (ATerm t);
        static ATerm f_3 (ATerm t)
        {
          ATerm q_42 = NULL;
          q_42 = t;
          {
            ATerm x_30 = t;
            int y_30 = stack_ptr;
            if((PushChoice() == 0))
              {
                static ATerm h_3 (ATerm t);
                static ATerm h_3 (ATerm t)
                {
                  ATerm s_42 = NULL,t_42 = NULL,u_42 = NULL,v_42 = NULL,w_42 = NULL;
                  t_42 = t;
                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, t_42), term_u_15), u_23), term_g_13), q_42);
                  w_42 = t;
                  t = SSL_concat_strings(w_42);
                  u_42 = t;
                  t = (ATerm) ATinsert(ATempty, term_v_12);
                  v_42 = t;
                  t = (ATerm) ATmakeAppl(sym__2, u_42, (ATerm) ATinsert(ATempty, term_v_12));
                  t = f_10(u_42, v_42, t);
                  s_42 = t;
                  t = (ATerm) ATmakeAppl(sym__2, t_42, (ATerm) ATmakeAppl(sym_FILE_1, s_42));
                  return(t);
                }
                t = u_23;
                t = is_relpath_0_0(t);
                t = t_23;
                t = fetch_elem_1_0(h_3, t);
                LocalPopChoice(y_30);
              }
            else
              {
                t = x_30;
                {
                  static ATerm n_3 (ATerm t);
                  static ATerm n_3 (ATerm t)
                  {
                    ATerm x_17 = NULL,y_17 = NULL,c_18 = NULL,d_18 = NULL,e_18 = NULL;
                    y_17 = t;
                    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, y_17), term_u_15), u_23);
                    e_18 = t;
                    t = SSL_concat_strings(e_18);
                    c_18 = t;
                    t = (ATerm) ATinsert(ATempty, term_v_12);
                    d_18 = t;
                    t = (ATerm) ATmakeAppl(sym__2, c_18, (ATerm) ATinsert(ATempty, term_v_12));
                    t = f_10(c_18, d_18, t);
                    x_17 = t;
                    t = (ATerm) ATmakeAppl(sym__2, y_17, (ATerm) ATmakeAppl(sym_FILE_1, x_17));
                    return(t);
                  }
                  t = SSL_explode_string(u_23);
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      ATerm b_31 = ATgetFirst((ATermList) t);
                      if(((ATgetType(b_31) != AT_INT) || (ATgetInt((ATermInt) b_31) != 47)))
                        _fail(t);
                      {
                        ATerm c_31 = (ATerm) ATgetNext((ATermList) t);
                      }
                    }
                  else
                    _fail(t);
                  t = t_23;
                  t = fetch_elem_1_0(n_3, t);
                }
              }
          }
          return(t);
        }
        t = fetch_elem_1_0(f_3, t);
        LocalPopChoice(w_30);
      }
    else
      {
        t = v_30;
        {
          ATerm e_31 = t;
          int f_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              static ATerm q_3 (ATerm t);
              static ATerm q_3 (ATerm t)
              {
                ATerm x_42 = NULL,y_42 = NULL,z_42 = NULL,a_43 = NULL,b_43 = NULL,c_43 = NULL;
                x_42 = t;
                t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, x_42), term_u_15), u_23);
                c_43 = t;
                t = SSL_concat_strings(c_43);
                y_42 = t;
                t = term_g_27;
                a_43 = t;
                t = (ATerm) ATmakeAppl(sym_Tool_1, y_42);
                b_43 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_g_27, (ATerm) ATmakeAppl(sym_Tool_1, y_42));
                t = n_10(a_43, b_43, t);
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    ATerm g_31 = ATgetFirst((ATermList) t);
                    if(match_cons(g_31, sym__2))
                      {
                        ATerm i_31 = ATgetArgument(g_31, 0);
                        z_42 = ATgetArgument(g_31, 1);
                      }
                    else
                      _fail(t);
                    {
                      ATerm h_31 = (ATerm) ATgetNext((ATermList) t);
                    }
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym__2, x_42, (ATerm) ATmakeAppl(sym_FILE_1, z_42));
                return(t);
              }
              t = t_23;
              t = fetch_elem_1_0(q_3, t);
              LocalPopChoice(f_31);
            }
          else
            {
              t = e_31;
              {
                ATerm j_31 = t;
                int k_31 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm d_43 = NULL,e_43 = NULL;
                    t = term_n_13;
                    d_43 = t;
                    t = term_l_31;
                    e_43 = t;
                    t = term_m_31;
                    t = n_10(d_43, e_43, t);
                    LocalPopChoice(k_31);
                    {
                      ATerm f_43 = NULL,g_43 = NULL,h_43 = NULL,i_43 = NULL,j_43 = NULL;
                      f_43 = t;
                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_o_31), u_23), term_n_31);
                      j_43 = t;
                      t = SSL_concat_strings(j_43);
                      g_43 = t;
                      t = term_e_25;
                      h_43 = t;
                      t = (ATerm) ATinsert(ATempty, g_43);
                      i_43 = t;
                      t = SSL_printnl(h_43, i_43);
                      t = f_43;
                      _fail(t);
                    }
                  }
                else
                  {
                    t = j_31;
                    {
                      ATerm k_43 = NULL,l_43 = NULL,m_43 = NULL;
                      t = term_e_25;
                      l_43 = t;
                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_o_31), u_23), term_n_31);
                      m_43 = t;
                      t = SSL_printnl(l_43, m_43);
                      t = term_s_16;
                      k_43 = t;
                      t = SSL_exit(k_43);
                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_o_31), u_23), term_n_31);
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
  t = term_q_31;
  return(t);
}
ATerm get_module_1_0 (ATerm l_106 (ATerm), ATerm t)
{
  ATerm q_43 = NULL,r_43 = NULL,s_43 = NULL,t_43 = NULL;
  t = basename_1_0(_id, t);
  s_43 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_o_26), term_v_31), term_s_31), term_r_31);
  t_43 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_43, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_o_26), term_v_31), term_s_31), term_r_31));
  t = m_9(l_106, s_43, t_43, t);
  if(match_cons(t, sym__2))
    {
      ATerm z_31 = ATgetArgument(t, 0);
      ATerm a_32 = ATgetArgument(t, 1);
      if(match_cons(a_32, sym_FILE_1))
        {
          q_43 = ATgetArgument(a_32, 0);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  {
    static ATerm z_3 (ATerm t);
    static ATerm z_3 (ATerm t)
    {
      ATerm v_43 = NULL;
      v_43 = t;
      t = q_43;
      t = debug_1_0(f_4, t);
      t = v_43;
      return(t);
    }
    t = if_verbose3_1_0(z_3, t);
  }
  t = parse_module_0_0(t);
  r_43 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_43, r_43);
  return(t);
}
static ATerm o_9 (ATerm y_121 (ATerm), ATerm z_121 (ATerm), ATerm d_44, ATerm c_44, ATerm t)
{
  t = z_121(t);
  {
    static ATerm g_4 (ATerm t);
    static ATerm g_4 (ATerm t)
    {
      ATerm g_44 = NULL;
      g_44 = t;
      t = (ATerm) ATmakeAppl(sym__2, d_44, g_44);
      t = y_121(t);
      return(t);
    }
    t = fetch_1_0(g_4, t);
  }
  t = c_44;
  return(t);
}
static ATerm p_9 (ATerm q_121 (ATerm), ATerm x_43, ATerm w_43, ATerm t)
{
  static ATerm i_45 (ATerm t);
  static ATerm i_45 (ATerm t)
  {
    ATerm v_44 = NULL,w_44 = NULL,x_44 = NULL;
    v_44 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = v_44;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            w_44 = ATgetFirst((ATermList) t);
            x_44 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm d_32 = t;
          int e_32 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = v_44;
              {
                static ATerm j_4 (ATerm t);
                static ATerm j_4 (ATerm t)
                {
                  t = w_43;
                  return(t);
                }
                t = o_9(q_121, j_4, w_44, x_44, t);
              }
              t = i_45(t);
              LocalPopChoice(e_32);
            }
          else
            {
              t = d_32;
              {
                ATerm r_18 = NULL,u_18 = NULL,g_5 = NULL;
                t = SSLgetAnnotations(v_44);
                r_18 = t;
                t = x_44;
                t = i_45(t);
                u_18 = t;
                t = (ATerm) ATinsert(CheckATermList(u_18), w_44);
                g_5 = t;
                t = SSLsetAnnotations(g_5, r_18);
              }
            }
        }
      }
    return(t);
  }
  t = x_43;
  t = i_45(t);
  return(t);
}
static ATerm l_4 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm f_32 = ATgetArgument(t, 0);
      if(((ATgetType(f_32) != AT_LIST) || !(ATisEmpty(f_32))))
        _fail(t);
      {
        ATerm g_32 = ATgetArgument(t, 1);
        if(((ATgetType(g_32) != AT_LIST) || !(ATisEmpty(g_32))))
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
  ATerm q_45 = NULL,r_45 = NULL,s_45 = NULL,t_45 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm h_32 = ATgetArgument(t, 0);
      if(((ATgetType(h_32) == AT_LIST) && !(ATisEmpty(h_32))))
        {
          q_45 = ATgetFirst((ATermList) h_32);
          r_45 = (ATerm) ATgetNext((ATermList) h_32);
        }
      else
        _fail(t);
      {
        ATerm i_32 = ATgetArgument(t, 1);
        if(((ATgetType(i_32) == AT_LIST) && !(ATisEmpty(i_32))))
          {
            s_45 = ATgetFirst((ATermList) i_32);
            t_45 = (ATerm) ATgetNext((ATermList) i_32);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, q_45, s_45), (ATerm) ATmakeAppl(sym__2, r_45, t_45));
  return(t);
}
static ATerm n_4 (ATerm t)
{
  ATerm u_45 = NULL,v_45 = NULL;
  if(match_cons(t, sym__2))
    {
      u_45 = ATgetArgument(t, 0);
      v_45 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(v_45), u_45);
  return(t);
}
static ATerm u_9 (ATerm x_797, ATerm c_798, ATerm b_77, ATerm t)
{
  ATerm l_45 = NULL,m_45 = NULL,n_45 = NULL,o_45 = NULL;
  t = SSL_explode_term(c_798);
  if(match_cons(t, sym__2))
    {
      l_45 = ATgetArgument(t, 0);
      n_45 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(x_797);
  if(match_cons(t, sym__2))
    {
      if((l_45 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      m_45 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, m_45, n_45);
  t = genzip_4_0(l_4, m_4, n_4, _id, t);
  o_45 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_45, b_77);
  t = conc_0_0(t);
  return(t);
}
static ATerm p_4 (ATerm t)
{
  ATerm k_46 = NULL;
  k_46 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, k_46);
  return(t);
}
static ATerm q_4 (ATerm t)
{
  ATerm p_46 = NULL,q_46 = NULL,r_46 = NULL,s_46 = NULL,i_5 = NULL;
  s_46 = t;
  if(match_cons(t, sym__2))
    {
      q_46 = ATgetArgument(t, 0);
      r_46 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_46);
  p_46 = t;
  t = r_46;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, q_46, r_46);
  i_5 = t;
  t = SSLsetAnnotations(i_5, p_46);
  return(t);
}
static ATerm s_4 (ATerm t)
{
  ATerm o_47 = NULL,p_47 = NULL,s_47 = NULL,y_47 = NULL,f_48 = NULL;
  o_47 = t;
  if(match_cons(t, sym__2))
    {
      p_47 = ATgetArgument(t, 0);
      s_47 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_47;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      y_47 = ATgetFirst((ATermList) t);
      f_48 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm j_32 = t;
        int k_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = r_48(p_47, s_47, o_47, t);
            LocalPopChoice(k_32);
          }
        else
          {
            t = j_32;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(p_47), y_47), f_48);
          }
      }
    }
  else
    {
      t = r_48(p_47, s_47, o_47, t);
    }
  return(t);
}
static ATerm r_48 (ATerm t_46, ATerm v_46, ATerm w_46, ATerm t)
{
  ATerm x_46 = NULL,a_47 = NULL,l_5 = NULL,d_47 = NULL,e_47 = NULL,f_47 = NULL,g_47 = NULL;
  t = SSLgetAnnotations(w_46);
  x_46 = t;
  t = v_46;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      d_47 = ATgetFirst((ATermList) t);
      g_47 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = d_47;
  if(match_cons(t, sym__2))
    {
      e_47 = ATgetArgument(t, 0);
      f_47 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm n_32 = t;
    int o_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = f_47;
        if((e_47 != t))
          {
            _fail(t);
          }
        t = g_47;
        LocalPopChoice(o_32);
      }
    else
      {
        t = n_32;
        t = v_46;
        t = u_9(e_47, f_47, g_47, t);
      }
  }
  a_47 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_46, a_47);
  l_5 = t;
  t = SSLsetAnnotations(l_5, x_46);
  return(t);
}
static ATerm t_4 (ATerm t)
{
  ATerm p_48 = NULL;
  if(match_cons(t, sym__2))
    {
      p_48 = ATgetArgument(t, 0);
      if((p_48 != ATgetArgument(t, 1)))
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
  ATerm p_32 = t;
  int q_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(p_4, q_4, s_4, t);
      LocalPopChoice(q_32);
    }
  else
    {
      t = p_32;
      {
        ATerm j_48 = NULL,k_48 = NULL,l_48 = NULL;
        j_48 = t;
        if(match_cons(t, sym__2))
          {
            k_48 = ATgetArgument(t, 0);
            l_48 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = j_48;
        t = p_9(t_4, k_48, l_48, t);
      }
    }
  return(t);
}
static ATerm w_9 (ATerm f_145 (ATerm), ATerm g_145 (ATerm), ATerm h_145 (ATerm), ATerm h_82, ATerm e_82, ATerm l_82, ATerm i_82, ATerm f_82, ATerm g_82, ATerm t)
{
  ATerm s_48 = NULL,t_48 = NULL,u_48 = NULL,v_48 = NULL,w_48 = NULL,x_48 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, h_82, i_82);
  t = f_145(t);
  s_48 = t;
  t = g_145(t);
  t_48 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_48, l_82);
  t = diff_0_0(t);
  u_48 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_48, e_82);
  t = conc_0_0(t);
  v_48 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_48, l_82);
  t = conc_0_0(t);
  w_48 = t;
  t = (ATerm) ATmakeAppl(sym__3, h_82, s_48, f_82);
  t = h_145(t);
  x_48 = t;
  t = (ATerm) ATmakeAppl(sym__5, v_48, w_48, i_82, x_48, g_82);
  return(t);
}
ATerm GnNext_3_0 (ATerm f_145 (ATerm), ATerm g_145 (ATerm), ATerm h_145 (ATerm), ATerm t)
{
  ATerm z_48 = NULL,a_49 = NULL,b_49 = NULL,c_49 = NULL,d_49 = NULL,e_49 = NULL;
  if(match_cons(t, sym__5))
    {
      ATerm s_32 = ATgetArgument(t, 0);
      if(((ATgetType(s_32) == AT_LIST) && !(ATisEmpty(s_32))))
        {
          z_48 = ATgetFirst((ATermList) s_32);
          a_49 = (ATerm) ATgetNext((ATermList) s_32);
        }
      else
        _fail(t);
      b_49 = ATgetArgument(t, 1);
      c_49 = ATgetArgument(t, 2);
      d_49 = ATgetArgument(t, 3);
      e_49 = ATgetArgument(t, 4);
    }
  else
    _fail(t);
  t = w_9(f_145, g_145, h_145, z_48, a_49, b_49, c_49, d_49, e_49, t);
  return(t);
}
ATerm while_not_2_0 (ATerm q_110 (ATerm), ATerm r_110 (ATerm), ATerm t)
{
  static ATerm f_49 (ATerm t);
  static ATerm f_49 (ATerm t)
  {
    ATerm t_32 = t;
    int v_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = q_110(t);
        LocalPopChoice(v_32);
      }
    else
      {
        t = t_32;
        t = r_110(t);
        t = f_49(t);
      }
    return(t);
  }
  t = f_49(t);
  return(t);
}
ATerm for_3_0 (ATerm t_110 (ATerm), ATerm u_110 (ATerm), ATerm v_110 (ATerm), ATerm t)
{
  t = t_110(t);
  t = while_not_2_0(u_110, v_110, t);
  return(t);
}
static ATerm u_4 (ATerm t)
{
  ATerm k_49 = NULL,m_49 = NULL,n_49 = NULL;
  if(match_cons(t, sym__3))
    {
      k_49 = ATgetArgument(t, 0);
      m_49 = ATgetArgument(t, 1);
      n_49 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__5, k_49, k_49, m_49, n_49, (ATerm) ATempty);
  return(t);
}
static ATerm v_4 (ATerm t)
{
  ATerm r_49 = NULL,t_49 = NULL;
  if(match_cons(t, sym__5))
    {
      ATerm w_32 = ATgetArgument(t, 0);
      if(((ATgetType(w_32) != AT_LIST) || !(ATisEmpty(w_32))))
        _fail(t);
      {
        ATerm x_32 = ATgetArgument(t, 1);
      }
      {
        ATerm y_32 = ATgetArgument(t, 2);
      }
      r_49 = ATgetArgument(t, 3);
      t_49 = ATgetArgument(t, 4);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, r_49, t_49);
  return(t);
}
ATerm graph_nodes_roots_3_0 (ATerm c_145 (ATerm), ATerm d_145 (ATerm), ATerm e_145 (ATerm), ATerm t)
{
  ATerm i_49 = NULL;
  static ATerm w_4 (ATerm t);
  static ATerm w_4 (ATerm t)
  {
    ATerm z_32 = t;
    int e_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = GnNext_3_0(c_145, d_145, e_145, t);
        LocalPopChoice(e_33);
      }
    else
      {
        t = z_32;
        {
          ATerm v_49 = NULL,w_49 = NULL,x_49 = NULL,a_50 = NULL,b_50 = NULL,d_50 = NULL,f_50 = NULL;
          if(match_cons(t, sym__5))
            {
              v_49 = ATgetArgument(t, 0);
              a_50 = ATgetArgument(t, 1);
              b_50 = ATgetArgument(t, 2);
              d_50 = ATgetArgument(t, 3);
              f_50 = ATgetArgument(t, 4);
            }
          else
            _fail(t);
          t = v_49;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              w_49 = ATgetFirst((ATermList) t);
              x_49 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__5, x_49, a_50, b_50, d_50, (ATerm) ATinsert(CheckATermList(f_50), w_49));
        }
      }
    return(t);
  }
  t = for_3_0(u_4, v_4, w_4, t);
  if(match_cons(t, sym__2))
    {
      i_49 = ATgetArgument(t, 0);
      {
        ATerm f_33 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = i_49;
  return(t);
}
ATerm filter_1_0 (ATerm n_125 (ATerm), ATerm t)
{
  ATerm j_51 = NULL,k_51 = NULL,l_51 = NULL;
  j_51 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = j_51;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          k_51 = ATgetFirst((ATermList) t);
          l_51 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm h_33 = t;
        int i_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_19 = NULL,m_19 = NULL,q_19 = NULL,o_5 = NULL;
            t = SSLgetAnnotations(j_51);
            h_19 = t;
            t = k_51;
            t = n_125(t);
            m_19 = t;
            t = l_51;
            t = filter_1_0(n_125, t);
            q_19 = t;
            t = (ATerm) ATinsert(CheckATermList(q_19), m_19);
            o_5 = t;
            t = SSLsetAnnotations(o_5, h_19);
            LocalPopChoice(i_33);
          }
        else
          {
            t = h_33;
            t = l_51;
            t = filter_1_0(n_125, t);
          }
      }
    }
  return(t);
}
static ATerm x_4 (ATerm t)
{
  ATerm j_33 = t;
  if((PushChoice() == 0))
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-I", 0, ATtrue)))
        _fail(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = j_33;
    }
  return(t);
}
static ATerm c_5 (ATerm t)
{
  ATerm h_52 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm k_33 = ATgetArgument(t, 0);
      ATerm r_33 = ATgetArgument(t, 1);
      if(match_cons(r_33, sym_Specification_1))
        {
          h_52 = ATgetArgument(r_33, 0);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  t = z_8(h_52, t);
  return(t);
}
static ATerm e_5 (ATerm t)
{
  ATerm i_52 = NULL,n_52 = NULL;
  if(match_cons(t, sym__3))
    {
      ATerm s_33 = ATgetArgument(t, 0);
      i_52 = ATgetArgument(t, 1);
      n_52 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(n_52), i_52);
  return(t);
}
static ATerm h_5 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_u_33;
  return(t);
}
static ATerm j_5 (ATerm t)
{
  ATerm o_52 = NULL,q_52 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_52 = ATgetFirst((ATermList) t);
      q_52 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, o_52, q_52);
  return(t);
}
static ATerm m_5 (ATerm t)
{
  ATerm r_52 = NULL,s_52 = NULL,u_52 = NULL,v_52 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm b_34 = ATgetArgument(t, 0);
      if(match_cons(b_34, sym__2))
        {
          r_52 = ATgetArgument(b_34, 0);
          s_52 = ATgetArgument(b_34, 1);
        }
      else
        _fail(t);
      {
        ATerm f_34 = ATgetArgument(t, 1);
        if(match_cons(f_34, sym__2))
          {
            u_52 = ATgetArgument(f_34, 0);
            v_52 = ATgetArgument(f_34, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(u_52), r_52), (ATerm) ATinsert(CheckATermList(v_52), s_52));
  return(t);
}
static ATerm z_9 (ATerm k_23, ATerm t)
{
  ATerm s_51 = NULL,t_51 = NULL,u_51 = NULL,x_51 = NULL,y_51 = NULL,z_51 = NULL,q_5 = NULL;
  ATerm g_34 = t;
  int h_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_52 = NULL,b_52 = NULL;
      t = term_n_13;
      a_52 = t;
      t = term_c_30;
      b_52 = t;
      t = term_f_30;
      t = n_10(a_52, b_52, t);
      t = filter_1_0(x_4, t);
      LocalPopChoice(h_34);
    }
  else
    {
      t = g_34;
      t = (ATerm) ATempty;
    }
  s_51 = t;
  t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATinsert(ATempty, k_23), term_b_15, (ATerm) ATempty);
  {
    static ATerm z_4 (ATerm t);
    static ATerm z_4 (ATerm t)
    {
      ATerm d_52 = NULL,g_52 = NULL;
      static ATerm f_5 (ATerm t);
      static ATerm f_5 (ATerm t)
      {
        t = (ATerm) ATinsert(CheckATermList(s_51), term_u_15);
        return(t);
      }
      g_52 = t;
      t = SSL_explode_term(g_52);
      if(match_cons(t, sym__2))
        {
          ATerm i_34 = ATgetArgument(t, 0);
          if((ATgetSymbol((ATermAppl) i_34) != ATmakeSymbol("", 0, ATtrue)))
            _fail(t);
          {
            ATerm j_34 = ATgetArgument(t, 1);
            if(((ATgetType(j_34) == AT_LIST) && !(ATisEmpty(j_34))))
              {
                d_52 = ATgetFirst((ATermList) j_34);
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
      t = d_52;
      t = get_module_1_0(f_5, t);
      return(t);
    }
    t = graph_nodes_roots_3_0(z_4, c_5, e_5, t);
  }
  t = genzip_4_0(h_5, j_5, m_5, _id, t);
  z_51 = t;
  if(match_cons(t, sym__2))
    {
      u_51 = ATgetArgument(t, 0);
      x_51 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_51);
  t_51 = t;
  t = x_51;
  t = flatten_stratego_0_0(t);
  y_51 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_51, y_51);
  q_5 = t;
  t = SSLsetAnnotations(q_5, t_51);
  return(t);
}
static ATerm h_10 (ATerm g_59, ATerm h_59, ATerm t)
{
  ATerm x_52 = NULL,b_53 = NULL;
  b_53 = t;
  {
    ATerm l_34 = t;
    int m_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, g_59, h_59);
        t = n_10(g_59, h_59, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm o_34 = ATgetFirst((ATermList) t);
            x_52 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(m_34);
        {
          ATerm e_53 = NULL;
          t = (ATerm) ATmakeAppl(sym__3, g_59, h_59, x_52);
          t = lookup_table_0_1(g_59, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              e_53 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = r_10(h_59, x_52, e_53, t);
          t = (ATerm) ATmakeAppl(sym__3, g_59, h_59, x_52);
        }
      }
    else
      {
        t = l_34;
        {
          ATerm l_53 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, g_59, h_59);
          t = lookup_table_0_1(g_59, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              l_53 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = k_10(h_59, l_53, t);
          t = (ATerm) ATmakeAppl(sym__2, g_59, h_59);
        }
      }
  }
  t = b_53;
  return(t);
}
ATerm end_scope_1_0 (ATerm q_106 (ATerm), ATerm t)
{
  ATerm n_53 = NULL,o_53 = NULL,v_53 = NULL,x_53 = NULL,a_54 = NULL,c_54 = NULL,g_54 = NULL;
  x_53 = t;
  t = q_106(t);
  v_53 = t;
  {
    ATerm p_34 = t;
    int q_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_54 = NULL;
        t = term_h_14;
        h_54 = t;
        t = (ATerm) ATmakeAppl(sym__2, v_53, term_h_14);
        t = n_10(v_53, h_54, t);
        {
          ATerm r_34 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = r_34;
            }
        }
        LocalPopChoice(q_34);
      }
    else
      {
        t = p_34;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_53 = ATgetFirst((ATermList) t);
      n_53 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, v_53, term_h_14, n_53);
  t = lookup_table_0_1(v_53, t);
  g_54 = t;
  t = term_h_14;
  a_54 = t;
  t = g_54;
  if(match_cons(t, sym_Hashtable_1))
    {
      c_54 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_10(a_54, n_53, c_54, t);
  t = o_53;
  {
    static ATerm n_5 (ATerm t);
    static ATerm n_5 (ATerm t)
    {
      ATerm i_54 = NULL;
      i_54 = t;
      t = (ATerm) ATmakeAppl(sym__2, v_53, i_54);
      t = h_10(v_53, i_54, t);
      return(t);
    }
    t = map_1_0(n_5, t);
  }
  t = x_53;
  return(t);
}
ATerm restore_always_2_0 (ATerm v_109 (ATerm), ATerm w_109 (ATerm), ATerm t)
{
  ATerm t_34 = t;
  int u_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = v_109(t);
      t = w_109(t);
      LocalPopChoice(u_34);
    }
  else
    {
      t = t_34;
      t = w_109(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm p_106 (ATerm), ATerm t)
{
  ATerm l_54 = NULL,o_54 = NULL,q_54 = NULL,r_54 = NULL,s_54 = NULL,u_54 = NULL,v_54 = NULL;
  o_54 = t;
  t = p_106(t);
  l_54 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_54, term_h_14);
  {
    ATerm v_34 = t;
    int x_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_55 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm z_34 = ATgetArgument(t, 0);
            ATerm a_35 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_h_14;
        b_55 = t;
        t = (ATerm) ATmakeAppl(sym__2, l_54, term_h_14);
        t = n_10(l_54, b_55, t);
        LocalPopChoice(x_34);
      }
    else
      {
        t = v_34;
        t = (ATerm) ATempty;
      }
  }
  q_54 = t;
  t = (ATerm) ATmakeAppl(sym__3, l_54, term_h_14, (ATerm) ATinsert(CheckATermList(q_54), (ATerm) ATempty));
  t = lookup_table_0_1(l_54, t);
  v_54 = t;
  t = term_h_14;
  r_54 = t;
  t = (ATerm) ATinsert(CheckATermList(q_54), (ATerm) ATempty);
  s_54 = t;
  t = v_54;
  if(match_cons(t, sym_Hashtable_1))
    {
      u_54 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_10(r_54, s_54, u_54, t);
  t = o_54;
  return(t);
}
static ATerm p_5 (ATerm t)
{
  t = term_z_14;
  return(t);
}
static ATerm u_5 (ATerm t)
{
  ATerm p_55 = NULL;
  p_55 = t;
  {
    ATerm d_35 = t;
    int e_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(p_55);
        LocalPopChoice(e_35);
      }
    else
      {
        t = d_35;
        t = p_55;
      }
  }
  return(t);
}
static ATerm w_5 (ATerm t)
{
  t = term_z_14;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm n_143 (ATerm), ATerm t)
{
  ATerm h_55 = NULL;
  static ATerm s_5 (ATerm t);
  static ATerm s_5 (ATerm t)
  {
    ATerm i_55 = NULL;
    i_55 = t;
    {
      ATerm f_35 = t;
      int h_35 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm l_55 = NULL,m_55 = NULL;
          t = term_z_14;
          l_55 = t;
          t = term_h_14;
          m_55 = t;
          t = term_i_35;
          t = n_10(l_55, m_55, t);
          LocalPopChoice(h_35);
        }
      else
        {
          t = f_35;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
        }
    }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((h_55 != NULL) && (h_55 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          h_55 = ATgetFirst((ATermList) t);
        {
          ATerm n_35 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    t = h_55;
    t = map_1_0(u_5, t);
    t = i_55;
    t = end_scope_1_0(w_5, t);
    return(t);
  }
  t = begin_scope_1_0(p_5, t);
  t = restore_always_2_0(n_143, s_5, t);
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm t_55 = NULL,u_55 = NULL;
  t = term_n_13;
  t_55 = t;
  t = term_o_35;
  u_55 = t;
  t = term_y_35;
  t = n_10(t_55, u_55, t);
  t = echo_0_0(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm w_55 = NULL,x_55 = NULL,a_56 = NULL;
  w_55 = t;
  {
    ATerm z_35 = t;
    int d_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = w_55;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm f_36 = ATgetFirst((ATermList) t);
                ATerm t_36 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = w_55;
          }
        LocalPopChoice(d_36);
      }
    else
      {
        t = z_35;
        t = (ATerm) ATinsert(ATempty, w_55);
      }
  }
  x_55 = t;
  t = term_q_13;
  a_56 = t;
  t = SSL_printnl(a_56, x_55);
  t = w_55;
  return(t);
}
ATerm reverse_acc_2_0 (ATerm h_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm i_56 = NULL,j_56 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_56 = ATgetFirst((ATermList) t);
      j_56 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm s_56 = NULL,t_56 = NULL;
        static ATerm z_5 (ATerm t);
        static ATerm z_5 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(s_56)), not_null(t_56));
          return(t);
        }
        t = j_56;
        t = j_0(t);
        if(((s_56 != NULL) && (s_56 != t)))
          _fail(t);
        else
          s_56 = t;
        t = i_56;
        t = h_0(t);
        if(((t_56 != NULL) && (t_56 != t)))
          _fail(t);
        else
          t_56 = t;
        t = j_56;
        t = reverse_acc_2_0(h_0, z_5, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_b_15;
      t = j_0(t);
    }
  return(t);
}
static ATerm m_6 (ATerm t)
{
  ATerm f_57 = NULL,g_57 = NULL,h_57 = NULL,t_5 = NULL;
  h_57 = t;
  if(match_cons(t, sym_Program_1))
    {
      g_57 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_57);
  f_57 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, g_57);
  t_5 = t;
  t = SSLsetAnnotations(t_5, f_57);
  return(t);
}
static ATerm n_6 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm o_6 (ATerm t)
{
  ATerm t_57 = NULL;
  t_57 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, t_57), term_u_36);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_2_0 (ATerm n_138 (ATerm), ATerm o_138 (ATerm), ATerm t)
{
  ATerm z_56 = NULL,a_57 = NULL;
  ATerm v_36 = t;
  int c_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_57 = NULL,e_57 = NULL;
      t = term_n_13;
      b_57 = t;
      t = term_o_35;
      e_57 = t;
      t = term_y_35;
      t = n_10(b_57, e_57, t);
      LocalPopChoice(c_37);
    }
  else
    {
      t = v_36;
      t = fetch_1_0(m_6, t);
    }
  {
    ATerm d_37 = t;
    int e_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_138(t);
        t = echo_0_0(t);
        LocalPopChoice(e_37);
      }
    else
      {
        t = d_37;
      }
  }
  t = term_f_37;
  t = echo_0_0(t);
  t = term_h_37;
  z_56 = t;
  t = term_o_37;
  a_57 = t;
  t = term_p_37;
  t = n_10(z_56, a_57, t);
  t = reverse_acc_2_0(_id, n_6, t);
  t = map_1_0(o_6, t);
  {
    ATerm v_37 = t;
    int z_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_57 = NULL;
        t = o_138(t);
        u_57 = t;
        t = (ATerm) ATinsert(CheckATermList(u_57), term_a_38);
        t = echo_0_0(t);
        LocalPopChoice(z_37);
      }
    else
      {
        t = v_37;
      }
  }
  return(t);
}
static ATerm q_6 (ATerm t)
{
  ATerm b_58 = NULL,c_58 = NULL,d_58 = NULL,v_5 = NULL;
  d_58 = t;
  if(match_cons(t, sym_Program_1))
    {
      c_58 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_58);
  b_58 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, c_58);
  v_5 = t;
  t = SSLsetAnnotations(v_5, b_58);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm y_57 = NULL;
  y_57 = t;
  {
    ATerm b_38 = t;
    int d_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_57 = NULL,a_58 = NULL;
        t = term_n_13;
        z_57 = t;
        t = term_o_35;
        a_58 = t;
        t = term_y_35;
        t = n_10(z_57, a_58, t);
        LocalPopChoice(d_38);
      }
    else
      {
        t = b_38;
        t = fetch_1_0(q_6, t);
      }
  }
  t = y_57;
  t = default_system_usage_2_0(_fail, _fail, t);
  return(t);
}
static ATerm r_6 (ATerm t)
{
  ATerm f_58 = NULL;
  f_58 = t;
  if(match_string(t, "-k"))
    {
      t = f_58;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = f_58;
    }
  return(t);
}
static ATerm t_6 (ATerm t)
{
  ATerm h_58 = NULL,j_58 = NULL,k_58 = NULL;
  h_58 = t;
  t = SSL_string_to_int(h_58);
  j_58 = t;
  t = term_m_16;
  k_58 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_16, j_58);
  t = q_10(k_58, j_58, t);
  t = h_58;
  return(t);
}
static ATerm v_6 (ATerm t)
{
  t = term_h_38;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(r_6, t_6, v_6, t);
  return(t);
}
static ATerm x_6 (ATerm t)
{
  ATerm m_58 = NULL;
  m_58 = t;
  if(match_string(t, "-S"))
    {
      t = m_58;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = m_58;
    }
  return(t);
}
static ATerm y_6 (ATerm t)
{
  ATerm n_58 = NULL,o_58 = NULL;
  t = term_x_16;
  n_58 = t;
  t = term_i_38;
  o_58 = t;
  t = term_j_38;
  t = q_10(n_58, o_58, t);
  t = term_k_38;
  return(t);
}
static ATerm z_6 (ATerm t)
{
  t = term_l_38;
  return(t);
}
static ATerm c_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm k_7 (ATerm t)
{
  ATerm p_58 = NULL,r_58 = NULL,s_58 = NULL;
  p_58 = t;
  t = SSL_string_to_int(p_58);
  r_58 = t;
  t = term_x_16;
  s_58 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_16, r_58);
  t = q_10(s_58, r_58, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, p_58);
  return(t);
}
static ATerm l_7 (ATerm t)
{
  t = term_m_38;
  return(t);
}
static ATerm q_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm u_7 (ATerm t)
{
  ATerm t_58 = NULL,u_58 = NULL;
  t = term_q_38;
  t_58 = t;
  t = term_b_15;
  u_58 = t;
  t = term_u_38;
  t = q_10(t_58, u_58, t);
  t = term_v_38;
  return(t);
}
static ATerm v_7 (ATerm t)
{
  t = term_x_38;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm a_39 = t;
  int b_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(x_6, y_6, z_6, t);
      LocalPopChoice(b_39);
    }
  else
    {
      t = a_39;
      {
        ATerm c_39 = t;
        int d_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(c_7, k_7, l_7, t);
            LocalPopChoice(d_39);
          }
        else
          {
            t = c_39;
            t = Option_3_0(q_7, u_7, v_7, t);
          }
      }
    }
  return(t);
}
static ATerm q_10 (ATerm j_83, ATerm k_83, ATerm t)
{
  ATerm v_58 = NULL,i_59 = NULL;
  t = term_n_13;
  v_58 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_n_13, j_83, k_83);
  t = lookup_table_0_1(v_58, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      i_59 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_10(j_83, k_83, i_59, t);
  t = (ATerm) ATmakeAppl(sym__3, term_n_13, j_83, k_83);
  return(t);
}
ATerm Option_3_0 (ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm o_59 = NULL,p_59 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm q_59 = NULL,r_59 = NULL,v_59 = NULL;
      t = term_b_15;
      t = g_0(t);
      q_59 = t;
      t = term_h_37;
      r_59 = t;
      t = term_o_37;
      v_59 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_h_37, term_o_37, q_59);
      t = o_10(r_59, v_59, q_59, t);
      _fail(t);
    }
  else
    {
      ATerm d_60 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          o_59 = ATgetFirst((ATermList) t);
          p_59 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = o_59;
      t = b_0(t);
      t = term_b_15;
      t = d_0(t);
      d_60 = t;
      t = (ATerm) ATinsert(CheckATermList(p_59), d_60);
    }
  return(t);
}
static ATerm x_7 (ATerm t)
{
  ATerm g_60 = NULL;
  g_60 = t;
  if(match_string(t, "-o"))
    {
      t = g_60;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = g_60;
    }
  return(t);
}
static ATerm y_7 (ATerm t)
{
  ATerm r_60 = NULL,s_60 = NULL;
  r_60 = t;
  t = term_o_13;
  s_60 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_13, r_60);
  t = q_10(s_60, r_60, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, r_60);
  return(t);
}
static ATerm z_7 (ATerm t)
{
  t = term_e_39;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(x_7, y_7, z_7, t);
  return(t);
}
static ATerm a_8 (ATerm t)
{
  ATerm w_60 = NULL;
  w_60 = t;
  if(match_string(t, "-i"))
    {
      t = w_60;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = w_60;
    }
  return(t);
}
static ATerm d_8 (ATerm t)
{
  ATerm x_60 = NULL,y_60 = NULL;
  x_60 = t;
  t = term_a_29;
  y_60 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_29, x_60);
  t = q_10(y_60, x_60, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, x_60);
  return(t);
}
static ATerm e_8 (ATerm t)
{
  t = term_f_39;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(a_8, d_8, e_8, t);
  return(t);
}
static ATerm o_10 (ATerm b_59, ATerm c_59, ATerm a_59, ATerm t)
{
  ATerm a_61 = NULL,b_61 = NULL,c_61 = NULL,d_61 = NULL,e_61 = NULL;
  a_61 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_59, c_59);
  {
    ATerm g_39 = t;
    int h_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm k_39 = ATgetArgument(t, 0);
            ATerm l_39 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, b_59, c_59);
        t = n_10(b_59, c_59, t);
        LocalPopChoice(h_39);
      }
    else
      {
        t = g_39;
        t = (ATerm) ATempty;
      }
  }
  b_61 = t;
  t = (ATerm) ATmakeAppl(sym__3, b_59, c_59, (ATerm) ATinsert(CheckATermList(b_61), a_59));
  t = lookup_table_0_1(b_59, t);
  e_61 = t;
  t = (ATerm) ATinsert(CheckATermList(b_61), a_59);
  c_61 = t;
  t = e_61;
  if(match_cons(t, sym_Hashtable_1))
    {
      d_61 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_10(c_59, c_61, d_61, t);
  t = a_61;
  return(t);
}
ATerm ArgOption_3_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm o_0 (ATerm), ATerm t)
{
  ATerm o_61 = NULL,p_61 = NULL,q_61 = NULL,r_61 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm s_61 = NULL,t_61 = NULL,u_61 = NULL;
      t = term_b_15;
      t = o_0(t);
      s_61 = t;
      t = term_h_37;
      t_61 = t;
      t = term_o_37;
      u_61 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_h_37, term_o_37, s_61);
      t = o_10(t_61, u_61, s_61, t);
      _fail(t);
    }
  else
    {
      ATerm c_62 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          o_61 = ATgetFirst((ATermList) t);
          p_61 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = p_61;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          q_61 = ATgetFirst((ATermList) t);
          r_61 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = o_61;
      t = l_0(t);
      t = q_61;
      t = m_0(t);
      c_62 = t;
      t = (ATerm) ATinsert(CheckATermList(r_61), c_62);
    }
  return(t);
}
ATerm at_end_1_0 (ATerm b_118 (ATerm), ATerm t)
{
  static ATerm l_63 (ATerm t);
  static ATerm l_63 (ATerm t)
  {
    ATerm c_63 = NULL,d_63 = NULL,i_63 = NULL;
    i_63 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        c_63 = ATgetFirst((ATermList) t);
        d_63 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm p_20 = NULL,v_20 = NULL,x_5 = NULL;
          t = SSLgetAnnotations(i_63);
          p_20 = t;
          t = d_63;
          t = l_63(t);
          v_20 = t;
          t = (ATerm) ATinsert(CheckATermList(v_20), c_63);
          x_5 = t;
          t = SSLsetAnnotations(x_5, p_20);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = i_63;
        t = b_118(t);
      }
    return(t);
  }
  t = l_63(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm e_62 = NULL,f_62 = NULL,i_62 = NULL;
  e_62 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = e_62;
    }
  else
    {
      static ATerm f_8 (ATerm t);
      static ATerm f_8 (ATerm t)
      {
        t = not_null(i_62);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          f_62 = ATgetFirst((ATermList) t);
          if(((i_62 != NULL) && (i_62 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            i_62 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = f_62;
      t = at_end_1_0(f_8, t);
    }
  return(t);
}
static ATerm s_64 (ATerm f_64, ATerm t)
{
  ATerm g_64 = NULL;
  t = SSL_explode_term(f_64);
  if(match_cons(t, sym__2))
    {
      ATerm m_39 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) m_39) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      g_64 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_64;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm l_64 = NULL,m_64 = NULL,n_64 = NULL;
  n_64 = t;
  if(match_cons(t, sym__2))
    {
      l_64 = ATgetArgument(t, 0);
      m_64 = ATgetArgument(t, 1);
      {
        ATerm n_39 = t;
        int q_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm h_8 (ATerm t);
            static ATerm h_8 (ATerm t)
            {
              t = m_64;
              return(t);
            }
            t = l_64;
            t = at_end_1_0(h_8, t);
            LocalPopChoice(q_39);
          }
        else
          {
            t = n_39;
            t = s_64(n_64, t);
          }
      }
    }
  else
    {
      t = s_64(n_64, t);
    }
  return(t);
}
static ATerm a_10 (ATerm q_83, ATerm r_83, ATerm t)
{
  ATerm v_64 = NULL,x_64 = NULL,y_64 = NULL,z_64 = NULL;
  t = q_83;
  {
    ATerm r_39 = t;
    int t_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_65 = NULL;
        t = term_n_13;
        e_65 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_n_13, q_83);
        t = n_10(e_65, q_83, t);
        LocalPopChoice(t_39);
      }
    else
      {
        t = r_39;
        t = (ATerm) ATempty;
      }
  }
  x_64 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_64, r_83);
  t = conc_0_0(t);
  v_64 = t;
  t = term_n_13;
  y_64 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_n_13, q_83, v_64);
  t = lookup_table_0_1(y_64, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      z_64 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_10(q_83, v_64, z_64, t);
  t = (ATerm) ATmakeAppl(sym__3, term_n_13, q_83, v_64);
  return(t);
}
static ATerm j_8 (ATerm t)
{
  ATerm i_65 = NULL;
  i_65 = t;
  if(match_string(t, "-I"))
    {
      t = i_65;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--Include", 0, ATtrue)))
        _fail(t);
      t = i_65;
    }
  return(t);
}
static ATerm k_8 (ATerm t)
{
  ATerm j_65 = NULL,k_65 = NULL,l_65 = NULL;
  j_65 = t;
  t = term_c_30;
  k_65 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, j_65), term_c_30);
  l_65 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_30, (ATerm) ATinsert(ATinsert(ATempty, j_65), term_c_30));
  t = a_10(k_65, l_65, t);
  t = term_b_15;
  return(t);
}
static ATerm m_8 (ATerm t)
{
  t = term_u_39;
  return(t);
}
static ATerm o_8 (ATerm t)
{
  ATerm m_65 = NULL;
  m_65 = t;
  if(match_string(t, "--nodep"))
    {
      t = m_65;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-nodep", 0, ATtrue)))
        _fail(t);
      t = m_65;
    }
  return(t);
}
static ATerm p_8 (ATerm t)
{
  ATerm n_65 = NULL,o_65 = NULL;
  t = term_s_15;
  n_65 = t;
  t = term_v_39;
  o_65 = t;
  t = term_w_39;
  t = q_10(n_65, o_65, t);
  t = term_b_15;
  return(t);
}
static ATerm s_8 (ATerm t)
{
  t = term_x_39;
  return(t);
}
static ATerm e_9 (ATerm t)
{
  ATerm p_65 = NULL;
  p_65 = t;
  if(match_string(t, "--dep"))
    {
      t = p_65;
    }
  else
    {
      if(match_string(t, "-d"))
        {
          t = p_65;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-dep", 0, ATtrue)))
            _fail(t);
          t = p_65;
        }
    }
  return(t);
}
static ATerm n_9 (ATerm t)
{
  ATerm q_65 = NULL,r_65 = NULL;
  q_65 = t;
  t = term_p_15;
  r_65 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_15, q_65);
  t = q_10(r_65, q_65, t);
  t = term_b_15;
  return(t);
}
static ATerm q_9 (ATerm t)
{
  t = term_y_39;
  return(t);
}
static ATerm s_9 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--imports", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm t_9 (ATerm t)
{
  ATerm s_65 = NULL,t_65 = NULL;
  t = term_z_39;
  s_65 = t;
  t = term_b_15;
  t_65 = t;
  t = term_a_40;
  t = q_10(s_65, t_65, t);
  t = term_b_15;
  return(t);
}
static ATerm v_9 (ATerm t)
{
  t = term_c_40;
  return(t);
}
static ATerm x_9 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--slack", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm y_9 (ATerm t)
{
  ATerm u_65 = NULL,v_65 = NULL;
  t = term_l_31;
  u_65 = t;
  t = term_b_15;
  v_65 = t;
  t = term_k_40;
  t = q_10(u_65, v_65, t);
  t = term_b_15;
  return(t);
}
static ATerm b_10 (ATerm t)
{
  t = term_l_40;
  return(t);
}
static ATerm c_10 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--asfix", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm j_10 (ATerm t)
{
  ATerm w_65 = NULL,x_65 = NULL;
  t = term_x_29;
  w_65 = t;
  t = term_v_39;
  x_65 = t;
  t = term_q_40;
  t = q_10(w_65, x_65, t);
  t = term_b_15;
  return(t);
}
static ATerm m_10 (ATerm t)
{
  t = term_r_40;
  return(t);
}
ATerm pack_stratego_options_0_0 (ATerm t)
{
  ATerm s_40 = t;
  int t_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ArgOption_3_0(j_8, k_8, m_8, t);
      LocalPopChoice(t_40);
    }
  else
    {
      t = s_40;
      {
        ATerm u_40 = t;
        int v_40 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Option_3_0(o_8, p_8, s_8, t);
            LocalPopChoice(v_40);
          }
        else
          {
            t = u_40;
            {
              ATerm c_41 = t;
              int d_41 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = ArgOption_3_0(e_9, n_9, q_9, t);
                  LocalPopChoice(d_41);
                }
              else
                {
                  t = c_41;
                  {
                    ATerm f_41 = t;
                    int l_41 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Option_3_0(s_9, t_9, v_9, t);
                        LocalPopChoice(l_41);
                      }
                    else
                      {
                        t = f_41;
                        {
                          ATerm u_41 = t;
                          int z_41 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Option_3_0(x_9, y_9, b_10, t);
                              LocalPopChoice(z_41);
                            }
                          else
                            {
                              t = u_41;
                              t = Option_3_0(c_10, j_10, m_10, t);
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
  ATerm y_65 = NULL,z_65 = NULL,a_66 = NULL,b_66 = NULL;
  t = report_run_time_0_0(t);
  t = term_b_15;
  t = whoami_0_0(t);
  y_65 = t;
  t = term_e_25;
  a_66 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_b_42), y_65);
  b_66 = t;
  t = SSL_printnl(a_66, b_66);
  t = term_s_16;
  z_65 = t;
  t = SSL_exit(z_65);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm c_66 = NULL,d_66 = NULL;
  t = term_n_13;
  c_66 = t;
  t = term_o_35;
  d_66 = t;
  t = term_y_35;
  t = n_10(c_66, d_66, t);
  return(t);
}
static ATerm i_10 (ATerm k_57, ATerm l_57, ATerm t)
{
  ATerm f_42 = t;
  int i_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(k_57, l_57);
      LocalPopChoice(i_42);
    }
  else
    {
      t = f_42;
      t = SSL_addr(k_57, l_57);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm j_124 (ATerm), ATerm k_124 (ATerm), ATerm t)
{
  ATerm f_66 = NULL,g_66 = NULL,h_66 = NULL;
  f_66 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = f_66;
      t = j_124(t);
    }
  else
    {
      ATerm k_66 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          g_66 = ATgetFirst((ATermList) t);
          h_66 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = h_66;
      t = foldr_2_0(j_124, k_124, t);
      k_66 = t;
      t = (ATerm) ATmakeAppl(sym__2, g_66, k_66);
      t = k_124(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm p_10 (ATerm t)
{
  t = term_i_38;
  return(t);
}
static ATerm t_10 (ATerm t)
{
  ATerm l_21 = NULL,n_21 = NULL;
  if(match_cons(t, sym__2))
    {
      l_21 = ATgetArgument(t, 0);
      n_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_10(l_21, n_21, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm n_66 = NULL,e_21 = NULL,f_21 = NULL;
  t = times_0_0(t);
  f_21 = t;
  t = SSL_explode_term(f_21);
  if(match_cons(t, sym__2))
    {
      ATerm j_42 = ATgetArgument(t, 0);
      e_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_21;
  t = foldr_2_0(p_10, t_10, t);
  n_66 = t;
  t = SSL_TicksToSeconds(n_66);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm i_67 = NULL,j_67 = NULL,k_67 = NULL;
  i_67 = t;
  if(match_cons(t, sym__2))
    {
      j_67 = ATgetArgument(t, 0);
      k_67 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm k_42 = t;
    int l_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = k_67;
        if((j_67 != t))
          {
            _fail(t);
          }
        t = i_67;
        LocalPopChoice(l_42);
      }
    else
      {
        t = k_42;
        t = (ATerm) ATmakeAppl(sym__2, j_67, k_67);
        {
          ATerm m_42 = t;
          int n_42 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(j_67, k_67);
              LocalPopChoice(n_42);
            }
          else
            {
              t = m_42;
              t = SSL_gtr(j_67, k_67);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, j_67, k_67);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm y_133 (ATerm), ATerm t)
{
  ATerm t_67 = NULL;
  t_67 = t;
  {
    ATerm o_42 = t;
    int p_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_67 = NULL,x_67 = NULL,y_67 = NULL;
        t = term_n_13;
        x_67 = t;
        t = term_x_16;
        y_67 = t;
        t = term_d_17;
        t = n_10(x_67, y_67, t);
        w_67 = t;
        t = (ATerm) ATmakeAppl(sym__2, w_67, term_s_16);
        t = geq_0_0(t);
        t = t_67;
        t = y_133(t);
        LocalPopChoice(p_42);
      }
    else
      {
        t = o_42;
        t = t_67;
      }
  }
  return(t);
}
static ATerm u_10 (ATerm t)
{
  ATerm c_68 = NULL,d_68 = NULL,f_68 = NULL,g_68 = NULL;
  t = run_time_0_0(t);
  c_68 = t;
  t = term_b_15;
  t = whoami_0_0(t);
  d_68 = t;
  t = term_e_25;
  f_68 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_r_42), c_68), term_k_17), d_68);
  g_68 = t;
  t = SSL_printnl(f_68, g_68);
  t = (ATerm) ATmakeAppl(sym__2, term_e_25, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_r_42), c_68), term_k_17), d_68));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(u_10, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm h_68 = NULL;
  t = report_run_time_0_0(t);
  t = term_i_38;
  h_68 = t;
  t = SSL_exit(h_68);
  return(t);
}
static ATerm r_10 (ATerm m_63, ATerm n_63, ATerm o_63, ATerm t)
{
  ATerm i_68 = NULL;
  t = SSL_hashtable_put(o_63, m_63, n_63);
  i_68 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, i_68);
  return(t);
}
static ATerm s_10 (ATerm p_63, ATerm q_63, ATerm t)
{
  t = SSL_hashtable_get(q_63, p_63);
  return(t);
}
ATerm lookup_table_0_1 (ATerm n_60, ATerm t)
{
  ATerm u_68 = NULL;
  t = table_hashtable_0_0(t);
  u_68 = t;
  {
    ATerm n_43 = t;
    int o_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_22 = NULL;
        t = u_68;
        if(match_cons(t, sym_Hashtable_1))
          {
            n_22 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = s_10(n_60, n_22, t);
        LocalPopChoice(o_43);
      }
    else
      {
        t = n_43;
        {
          ATerm u_22 = NULL;
          t = n_60;
          t = table_create_0_0(t);
          t = u_68;
          if(match_cons(t, sym_Hashtable_1))
            {
              u_22 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = s_10(n_60, u_22, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm u_63, ATerm v_63, ATerm t)
{
  ATerm x_68 = NULL;
  t = SSL_hashtable_create(u_63, v_63);
  x_68 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, x_68);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm y_68 = NULL,z_68 = NULL,a_69 = NULL,c_69 = NULL,d_69 = NULL;
  y_68 = t;
  t = term_p_43;
  c_69 = t;
  t = term_u_43;
  d_69 = t;
  t = y_68;
  t = new_hashtable_0_2(c_69, d_69, t);
  z_68 = t;
  t = y_68;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      a_69 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_10(y_68, z_68, a_69, t);
  t = y_68;
  return(t);
}
static ATerm k_10 (ATerm r_63, ATerm s_63, ATerm t)
{
  ATerm e_69 = NULL;
  t = SSL_hashtable_remove(s_63, r_63);
  e_69 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, e_69);
  return(t);
}
static ATerm l_10 (ATerm w_63, ATerm t)
{
  ATerm f_69 = NULL;
  t = SSL_hashtable_destroy(w_63);
  f_69 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, f_69);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm g_69 = NULL;
  t = SSL_table_hashtable();
  g_69 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, g_69);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm h_69 = NULL,i_69 = NULL,j_69 = NULL,k_69 = NULL;
  h_69 = t;
  t = table_hashtable_0_0(t);
  i_69 = t;
  t = lookup_table_0_1(h_69, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      k_69 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = l_10(k_69, t);
  t = i_69;
  if(match_cons(t, sym_Hashtable_1))
    {
      j_69 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = k_10(h_69, j_69, t);
  t = h_69;
  return(t);
}
ATerm fetch_1_0 (ATerm u_117 (ATerm), ATerm t)
{
  static ATerm h_70 (ATerm t);
  static ATerm h_70 (ATerm t)
  {
    ATerm e_70 = NULL,f_70 = NULL,g_70 = NULL;
    e_70 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        f_70 = ATgetFirst((ATermList) t);
        g_70 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm a_44 = t;
      int b_44 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm b_23 = NULL,g_23 = NULL,a_6 = NULL;
          t = SSLgetAnnotations(e_70);
          b_23 = t;
          t = f_70;
          t = u_117(t);
          g_23 = t;
          t = (ATerm) ATinsert(CheckATermList(g_70), g_23);
          a_6 = t;
          t = SSLsetAnnotations(a_6, b_23);
          LocalPopChoice(b_44);
        }
      else
        {
          t = a_44;
          {
            ATerm p_23 = NULL,s_23 = NULL,b_6 = NULL;
            t = SSLgetAnnotations(e_70);
            p_23 = t;
            t = g_70;
            t = h_70(t);
            s_23 = t;
            t = (ATerm) ATinsert(CheckATermList(s_23), f_70);
            b_6 = t;
            t = SSLsetAnnotations(b_6, p_23);
          }
        }
    }
    return(t);
  }
  t = h_70(t);
  return(t);
}
static ATerm v_10 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm w_10 (ATerm t)
{
  ATerm k_70 = NULL,l_70 = NULL;
  t = term_e_44;
  k_70 = t;
  t = term_b_15;
  l_70 = t;
  t = term_f_44;
  t = q_10(k_70, l_70, t);
  return(t);
}
static ATerm x_10 (ATerm t)
{
  t = term_h_44;
  return(t);
}
static ATerm y_10 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm a_11 (ATerm t)
{
  ATerm m_70 = NULL,n_70 = NULL,o_70 = NULL,p_70 = NULL;
  t = term_e_44;
  o_70 = t;
  t = term_b_15;
  p_70 = t;
  t = term_f_44;
  t = q_10(o_70, p_70, t);
  t = term_i_44;
  m_70 = t;
  t = term_b_15;
  n_70 = t;
  t = term_j_44;
  t = q_10(m_70, n_70, t);
  t = term_k_44;
  return(t);
}
static ATerm b_11 (ATerm t)
{
  t = term_l_44;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm m_44 = t;
  int n_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(v_10, w_10, x_10, t);
      LocalPopChoice(n_44);
    }
  else
    {
      t = m_44;
      t = Option_3_0(y_10, a_11, b_11, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm c_88 (ATerm), ATerm d_88 (ATerm), ATerm t)
{
  ATerm q_70 = NULL,r_70 = NULL,s_70 = NULL,t_70 = NULL,u_70 = NULL,v_70 = NULL,p_6 = NULL;
  v_70 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_70 = ATgetFirst((ATermList) t);
      s_70 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_70);
  q_70 = t;
  t = r_70;
  t = c_88(t);
  t_70 = t;
  t = s_70;
  t = d_88(t);
  u_70 = t;
  t = (ATerm) ATinsert(CheckATermList(u_70), t_70);
  p_6 = t;
  t = SSLsetAnnotations(p_6, q_70);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm i_138 (ATerm), ATerm t)
{
  ATerm a_71 = NULL,b_71 = NULL,c_71 = NULL,d_71 = NULL,f_71 = NULL,g_71 = NULL,s_6 = NULL;
  a_71 = t;
  {
    ATerm o_44 = t;
    int p_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_q_44;
        t = i_138(t);
        LocalPopChoice(p_44);
      }
    else
      {
        t = o_44;
      }
  }
  t = a_71;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_71 = ATgetFirst((ATermList) t);
      d_71 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_71);
  b_71 = t;
  t = term_o_35;
  g_71 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_35, c_71);
  t = q_10(g_71, c_71, t);
  t = d_71;
  {
    static ATerm q_71 (ATerm t);
    static ATerm q_71 (ATerm t)
    {
      ATerm r_44 = t;
      int s_44 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm t_44 = t;
          int u_44 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm j_71 = NULL;
              j_71 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = j_71;
              LocalPopChoice(u_44);
            }
          else
            {
              t = t_44;
              t = i_138(t);
              t = Cons_2_0(_id, q_71, t);
            }
          LocalPopChoice(s_44);
        }
      else
        {
          t = r_44;
          {
            ATerm m_71 = NULL,n_71 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                m_71 = ATgetFirst((ATermList) t);
                n_71 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(n_71), (ATerm) ATmakeAppl(sym_Undefined_1, m_71));
          }
        }
      return(t);
    }
    t = q_71(t);
  }
  f_71 = t;
  t = (ATerm) ATinsert(CheckATermList(f_71), (ATerm) ATmakeAppl(sym_Program_1, c_71));
  s_6 = t;
  t = SSLsetAnnotations(s_6, b_71);
  return(t);
}
static ATerm e_11 (ATerm t)
{
  ATerm d_72 = NULL;
  d_72 = t;
  if(match_string(t, "--help"))
    {
      t = d_72;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = d_72;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = d_72;
        }
    }
  return(t);
}
static ATerm f_11 (ATerm t)
{
  ATerm e_72 = NULL,f_72 = NULL;
  t = term_y_44;
  e_72 = t;
  t = term_b_15;
  f_72 = t;
  t = term_z_44;
  t = q_10(e_72, f_72, t);
  t = term_a_45;
  return(t);
}
static ATerm g_11 (ATerm t)
{
  t = term_b_45;
  return(t);
}
static ATerm h_11 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_3_0 (ATerm f_138 (ATerm), ATerm g_138 (ATerm), ATerm h_138 (ATerm), ATerm t)
{
  ATerm v_71 = NULL,w_71 = NULL,x_71 = NULL,y_71 = NULL,z_71 = NULL,a_72 = NULL,b_72 = NULL,c_72 = NULL;
  x_71 = t;
  t = term_h_37;
  y_71 = t;
  t = term_c_45;
  t = lookup_table_0_1(y_71, t);
  c_72 = t;
  t = term_o_37;
  z_71 = t;
  t = (ATerm) ATempty;
  a_72 = t;
  t = c_72;
  if(match_cons(t, sym_Hashtable_1))
    {
      b_72 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_10(z_71, a_72, b_72, t);
  t = x_71;
  {
    static ATerm c_11 (ATerm t);
    static ATerm c_11 (ATerm t)
    {
      ATerm d_45 = t;
      int e_45 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = f_138(t);
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
                t = Option_3_0(e_11, f_11, g_11, t);
                LocalPopChoice(g_45);
              }
            else
              {
                t = f_45;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(c_11, t);
  }
  {
    ATerm h_45 = t;
    int j_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_72 = NULL;
        q_72 = t;
        {
          ATerm k_45 = t;
          int p_45 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm c_24 = NULL;
              t = q_72;
              {
                ATerm w_45 = t;
                int x_45 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm d_24 = NULL,f_24 = NULL;
                    t = term_n_13;
                    d_24 = t;
                    t = term_y_44;
                    f_24 = t;
                    t = term_y_45;
                    t = n_10(d_24, f_24, t);
                    LocalPopChoice(x_45);
                  }
                else
                  {
                    t = w_45;
                    t = fetch_1_0(h_11, t);
                  }
              }
              t = q_72;
              t = g_138(t);
              t = term_i_38;
              c_24 = t;
              t = SSL_exit(c_24);
              LocalPopChoice(p_45);
            }
          else
            {
              t = k_45;
              {
                ATerm l_24 = NULL,n_24 = NULL,o_24 = NULL;
                t = term_n_13;
                n_24 = t;
                t = term_e_44;
                o_24 = t;
                t = term_z_45;
                t = n_10(n_24, o_24, t);
                t = q_72;
                t = h_138(t);
                t = term_i_38;
                l_24 = t;
                t = SSL_exit(l_24);
              }
            }
        }
        LocalPopChoice(j_45);
      }
    else
      {
        t = h_45;
        {
          ATerm a_46 = t;
          int b_46 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm r_72 = NULL,s_72 = NULL,t_72 = NULL;
              static ATerm i_11 (ATerm t);
              static ATerm i_11 (ATerm t)
              {
                ATerm u_72 = NULL,v_72 = NULL,w_72 = NULL,b_7 = NULL;
                w_72 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    v_72 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(w_72);
                u_72 = t;
                t = v_72;
                if(((v_71 != NULL) && (v_71 != t)))
                  _fail(t);
                else
                  v_71 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, v_72);
                b_7 = t;
                t = SSLsetAnnotations(b_7, u_72);
                return(t);
              }
              t = fetch_1_0(i_11, t);
              t = term_e_25;
              s_72 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(v_71)), term_c_46);
              t_72 = t;
              t = SSL_printnl(s_72, t_72);
              t = (ATerm) ATmakeAppl(sym__2, term_e_25, (ATerm) ATinsert(ATinsert(ATempty, not_null(v_71)), term_c_46));
              t = g_138(t);
              t = term_s_16;
              r_72 = t;
              t = SSL_exit(r_72);
              LocalPopChoice(b_46);
            }
          else
            {
              t = a_46;
            }
        }
      }
  }
  w_71 = t;
  t = term_h_37;
  t = table_destroy_0_0(t);
  t = w_71;
  return(t);
}
ATerm option_wrap_5_0 (ATerm u_135 (ATerm), ATerm v_135 (ATerm), ATerm w_135 (ATerm), ATerm x_135 (ATerm), ATerm y_135 (ATerm), ATerm t)
{
  ATerm i_73 = NULL,j_73 = NULL,k_73 = NULL,l_73 = NULL,m_73 = NULL;
  t = parse_options_3_0(u_135, v_135, w_135, t);
  i_73 = t;
  t = term_d_46;
  t = table_create_0_0(t);
  t = term_d_46;
  j_73 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_d_46, term_e_46, i_73);
  t = lookup_table_0_1(j_73, t);
  m_73 = t;
  t = term_e_46;
  k_73 = t;
  t = m_73;
  if(match_cons(t, sym_Hashtable_1))
    {
      l_73 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_10(k_73, i_73, l_73, t);
  t = i_73;
  t = x_135(t);
  {
    ATerm f_46 = t;
    int g_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_135(t);
        t = report_success_0_0(t);
        LocalPopChoice(g_46);
      }
    else
      {
        t = f_46;
        t = report_failure_0_0(t);
      }
  }
  return(t);
}
static ATerm j_11 (ATerm t)
{
  ATerm h_46 = t;
  int i_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = pack_stratego_options_0_0(t);
      LocalPopChoice(i_46);
    }
  else
    {
      t = h_46;
      {
        ATerm j_46 = t;
        int l_46 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = input_option_0_0(t);
            LocalPopChoice(l_46);
          }
        else
          {
            t = j_46;
            {
              ATerm m_46 = t;
              int n_46 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = output_option_0_0(t);
                  LocalPopChoice(n_46);
                }
              else
                {
                  t = m_46;
                  {
                    ATerm o_46 = t;
                    int u_46 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Option_3_0(l_11, m_11, n_11, t);
                        LocalPopChoice(u_46);
                      }
                    else
                      {
                        t = o_46;
                        {
                          ATerm y_46 = t;
                          int z_46 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = verbose_option_0_0(t);
                              LocalPopChoice(z_46);
                            }
                          else
                            {
                              t = y_46;
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
static ATerm l_11 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm m_11 (ATerm t)
{
  ATerm s_73 = NULL,t_73 = NULL;
  t = term_b_47;
  s_73 = t;
  t = term_b_15;
  t_73 = t;
  t = term_c_47;
  t = q_10(s_73, t_73, t);
  t = term_h_47;
  return(t);
}
static ATerm n_11 (ATerm t)
{
  t = term_i_47;
  return(t);
}
static ATerm p_11 (ATerm t)
{
  t = get_filename_0_0(t);
  t = basename_1_0(_id, t);
  return(t);
}
static ATerm q_11 (ATerm t)
{
  ATerm j_74 = NULL,l_74 = NULL,m_74 = NULL,n_74 = NULL,o_74 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm j_47 = ATgetArgument(t, 0);
      if(match_cons(j_47, sym_Stream_1))
        {
          n_74 = ATgetArgument(j_47, 0);
        }
      else
        _fail(t);
      o_74 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_8(n_74, o_74, t);
  j_74 = t;
  t = term_w_22;
  l_74 = t;
  t = j_74;
  if(match_cons(t, sym_Stream_1))
    {
      m_74 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_w_22, j_74);
  t = t_8(l_74, m_74, t);
  return(t);
}
static ATerm r_11 (ATerm t)
{
  ATerm r_74 = NULL,s_74 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm k_47 = ATgetArgument(t, 0);
      if(match_cons(k_47, sym_Stream_1))
        {
          r_74 = ATgetArgument(k_47, 0);
        }
      else
        _fail(t);
      s_74 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_8(r_74, s_74, t);
  return(t);
}
ATerm pack_stratego_0_0 (ATerm t)
{
  ATerm q_73 = NULL,r_73 = NULL;
  static ATerm k_11 (ATerm t);
  static ATerm k_11 (ATerm t)
  {
    static ATerm o_11 (ATerm t);
    static ATerm o_11 (ATerm t)
    {
      ATerm a_74 = NULL;
      ATerm l_47 = t;
      int m_47 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm b_74 = NULL,c_74 = NULL,d_74 = NULL;
          t = term_n_13;
          c_74 = t;
          t = term_a_29;
          d_74 = t;
          t = term_n_47;
          t = n_10(c_74, d_74, t);
          b_74 = t;
          t = (ATerm) ATmakeAppl(sym_FILE_1, b_74);
          LocalPopChoice(m_47);
        }
      else
        {
          t = l_47;
          t = term_y_13;
        }
      if(match_cons(t, sym_FILE_1))
        {
          a_74 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = z_9(a_74, t);
      if(match_cons(t, sym__2))
        {
          if(((q_73 != NULL) && (q_73 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            q_73 = ATgetArgument(t, 0);
          if(((r_73 != NULL) && (r_73 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            r_73 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm q_47 = t;
        int r_47 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_74 = NULL,f_74 = NULL,g_74 = NULL,h_74 = NULL;
            t = term_n_13;
            g_74 = t;
            t = term_z_39;
            h_74 = t;
            t = term_t_47;
            t = n_10(g_74, h_74, t);
            t = q_73;
            t = map_1_0(p_11, t);
            f_74 = t;
            t = xtc_new_file_0_0(t);
            e_74 = t;
            t = (ATerm) ATmakeAppl(sym__2, e_74, f_74);
            t = v_8(q_11, e_74, f_74, t);
            t = (ATerm) ATmakeAppl(sym_FILE_1, e_74);
            LocalPopChoice(r_47);
          }
        else
          {
            t = q_47;
            {
              ATerm p_74 = NULL;
              ATerm u_47 = t;
              int v_47 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = q_73;
                  t = create_dep_file_0_0(t);
                  LocalPopChoice(v_47);
                }
              else
                {
                  t = u_47;
                }
              t = r_73;
              t = xtc_new_file_0_0(t);
              p_74 = t;
              t = (ATerm) ATmakeAppl(sym__2, p_74, r_73);
              t = v_8(r_11, p_74, r_73, t);
              t = (ATerm) ATmakeAppl(sym_FILE_1, p_74);
            }
          }
      }
      t = xtc_write_output_0_0(t);
      return(t);
    }
    t = xtc_temp_files_1_0(o_11, t);
    return(t);
  }
  t = option_wrap_5_0(j_11, default_system_usage_0_0, default_system_about_0_0, _id, k_11, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = pack_stratego_0_0(t);
  return(t);
}
