#include <srts/stratego.h>
#include <srts/stratego-lib.h>
void init_constructors (void)
{
}
static Symbol sym_Undefined_0;
static Symbol sym_Scopes_0;
static Symbol sym_Nil_0;
static Symbol sym_Cons_2;
static Symbol sym__0;
static Symbol sym__1;
static Symbol sym__2;
static Symbol sym__3;
static Symbol sym__4;
static Symbol sym__5;
static Symbol sym__6;
static Symbol sym__7;
static Symbol sym__8;
static Symbol sym__9;
static Symbol sym__10;
static Symbol sym__11;
static Symbol sym__12;
static Symbol sym__13;
static Symbol sym__14;
static Symbol sym__15;
static Symbol sym__16;
static Symbol sym__17;
static Symbol sym__18;
static Symbol sym_F__OK_0;
static Symbol sym_R__OK_0;
static Symbol sym_Stream_1;
static Symbol sym_Path_1;
static Symbol sym_stdin_0;
static Symbol sym_stdout_0;
static Symbol sym_stderr_0;
static Symbol sym_Hashtable_1;
static Symbol sym_WaitStatus_3;
static Symbol sym_Signal_3;
static Symbol sym_UnknownSignal_1;
static Symbol sym_Verbose_1;
static Symbol sym_Version_0;
static Symbol sym_Input_1;
static Symbol sym_Output_1;
static Symbol sym_Binary_0;
static Symbol sym_Statistics_0;
static Symbol sym_Help_0;
static Symbol sym_Program_1;
static Symbol sym_Undefined_1;
static Symbol sym_Tool_1;
static Symbol sym_Repository_0;
static Symbol sym_Import_0;
static Symbol sym_Imported_1;
static Symbol sym_XTC_0;
static Symbol sym_FILE_1;
static Symbol sym_TempFiles_0;
static Symbol sym_Cons_2;
static Symbol sym_Nil_0;
static Symbol sym_Imports_1;
static Symbol sym_Specification_1;
static Symbol sym_Path_2;
static Symbol sym_Path_1;
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
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
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
static ATerm term_k_47;
static ATerm term_h_47;
static ATerm term_c_47;
static ATerm term_b_47;
static ATerm term_a_47;
static ATerm term_z_46;
static ATerm term_y_45;
static ATerm term_t_45;
static ATerm term_s_45;
static ATerm term_n_45;
static ATerm term_l_45;
static ATerm term_t_44;
static ATerm term_s_44;
static ATerm term_r_44;
static ATerm term_q_44;
static ATerm term_p_44;
static ATerm term_k_44;
static ATerm term_f_44;
static ATerm term_e_44;
static ATerm term_b_44;
static ATerm term_w_43;
static ATerm term_v_43;
static ATerm term_u_43;
static ATerm term_t_43;
static ATerm term_q_43;
static ATerm term_p_43;
static ATerm term_l_43;
static ATerm term_a_42;
static ATerm term_i_41;
static ATerm term_d_41;
static ATerm term_u_40;
static ATerm term_h_40;
static ATerm term_f_40;
static ATerm term_e_40;
static ATerm term_x_39;
static ATerm term_w_39;
static ATerm term_v_39;
static ATerm term_u_39;
static ATerm term_t_39;
static ATerm term_s_39;
static ATerm term_c_39;
static ATerm term_b_39;
static ATerm term_s_38;
static ATerm term_r_38;
static ATerm term_q_38;
static ATerm term_p_38;
static ATerm term_o_38;
static ATerm term_n_38;
static ATerm term_m_38;
static ATerm term_l_38;
static ATerm term_i_38;
static ATerm term_d_38;
static ATerm term_v_37;
static ATerm term_p_37;
static ATerm term_o_37;
static ATerm term_h_37;
static ATerm term_f_37;
static ATerm term_u_36;
static ATerm term_y_35;
static ATerm term_o_35;
static ATerm term_i_35;
static ATerm term_u_33;
static ATerm term_v_31;
static ATerm term_s_31;
static ATerm term_r_31;
static ATerm term_q_31;
static ATerm term_o_31;
static ATerm term_n_31;
static ATerm term_m_31;
static ATerm term_l_31;
static ATerm term_f_30;
static ATerm term_c_30;
static ATerm term_b_30;
static ATerm term_x_29;
static ATerm term_w_29;
static ATerm term_l_29;
static ATerm term_a_29;
static ATerm term_z_28;
static ATerm term_y_28;
static ATerm term_t_28;
static ATerm term_l_28;
static ATerm term_h_28;
static ATerm term_d_28;
static ATerm term_y_27;
static ATerm term_x_27;
static ATerm term_w_27;
static ATerm term_v_27;
static ATerm term_r_27;
static ATerm term_q_27;
static ATerm term_h_27;
static ATerm term_g_27;
static ATerm term_e_27;
static ATerm term_d_27;
static ATerm term_c_27;
static ATerm term_b_27;
static ATerm term_v_26;
static ATerm term_s_26;
static ATerm term_r_26;
static ATerm term_q_26;
static ATerm term_o_26;
static ATerm term_f_25;
static ATerm term_e_25;
static ATerm term_w_24;
static ATerm term_v_24;
static ATerm term_u_24;
static ATerm term_s_24;
static ATerm term_n_24;
static ATerm term_m_24;
static ATerm term_l_24;
static ATerm term_k_24;
static ATerm term_e_24;
static ATerm term_d_24;
static ATerm term_c_24;
static ATerm term_b_24;
static ATerm term_a_24;
static ATerm term_z_23;
static ATerm term_y_23;
static ATerm term_w_23;
static ATerm term_u_23;
static ATerm term_t_23;
static ATerm term_s_23;
static ATerm term_r_23;
static ATerm term_p_23;
static ATerm term_o_23;
static ATerm term_n_23;
static ATerm term_m_23;
static ATerm term_l_23;
static ATerm term_k_23;
static ATerm term_j_23;
static ATerm term_i_23;
static ATerm term_g_23;
static ATerm term_f_23;
static ATerm term_b_23;
static ATerm term_z_22;
static ATerm term_y_22;
static ATerm term_x_22;
static ATerm term_u_22;
static ATerm term_t_22;
static ATerm term_s_22;
static ATerm term_q_22;
static ATerm term_n_22;
static ATerm term_m_22;
static ATerm term_l_22;
static ATerm term_h_22;
static ATerm term_g_22;
static ATerm term_d_22;
static ATerm term_c_22;
static ATerm term_w_21;
static ATerm term_v_21;
static ATerm term_u_21;
static ATerm term_s_21;
static ATerm term_q_21;
static ATerm term_p_21;
static ATerm term_m_21;
static ATerm term_l_21;
static ATerm term_i_21;
static ATerm term_e_21;
static ATerm term_d_21;
static ATerm term_c_21;
static ATerm term_b_21;
static ATerm term_v_20;
static ATerm term_u_20;
static ATerm term_p_20;
static ATerm term_o_20;
static ATerm term_n_20;
static ATerm term_m_20;
static ATerm term_l_20;
static ATerm term_h_20;
static ATerm term_g_20;
static ATerm term_f_20;
static ATerm term_d_20;
static ATerm term_z_19;
static ATerm term_x_19;
static ATerm term_w_19;
static ATerm term_v_19;
static ATerm term_u_19;
static ATerm term_t_19;
static ATerm term_s_19;
static ATerm term_p_19;
static ATerm term_o_19;
static ATerm term_n_19;
static ATerm term_m_19;
static ATerm term_l_19;
static ATerm term_k_19;
static ATerm term_j_19;
static ATerm term_h_19;
static ATerm term_g_19;
static ATerm term_f_19;
static ATerm term_e_19;
static ATerm term_d_19;
static ATerm term_c_19;
static ATerm term_a_19;
static ATerm term_z_18;
static ATerm term_y_18;
static ATerm term_u_18;
static ATerm term_t_18;
static ATerm term_r_18;
static ATerm term_q_18;
static ATerm term_p_18;
static ATerm term_o_18;
static ATerm term_j_18;
static ATerm term_h_18;
static ATerm term_g_18;
static ATerm term_f_18;
static ATerm term_b_18;
static ATerm term_a_18;
static ATerm term_z_17;
static ATerm term_x_17;
static ATerm term_w_17;
static ATerm term_v_17;
static ATerm term_u_17;
static ATerm term_t_17;
static ATerm term_r_17;
static ATerm term_l_17;
static ATerm term_k_17;
static ATerm term_j_17;
static ATerm term_h_17;
static ATerm term_d_17;
static ATerm term_x_16;
static ATerm term_q_16;
static ATerm term_p_16;
static ATerm term_m_16;
static ATerm term_x_15;
static ATerm term_w_15;
static ATerm term_v_15;
static ATerm term_u_15;
static ATerm term_t_15;
static ATerm term_s_15;
static ATerm term_q_15;
static ATerm term_p_15;
static ATerm term_j_15;
static ATerm term_i_15;
static ATerm term_b_15;
static ATerm term_a_15;
static ATerm term_z_14;
static ATerm term_w_14;
static ATerm term_r_14;
static ATerm term_q_14;
static ATerm term_h_14;
static ATerm term_b_14;
static ATerm term_y_13;
static ATerm term_q_13;
static ATerm term_p_13;
static ATerm term_o_13;
static ATerm term_n_13;
static ATerm term_y_12;
static ATerm term_w_12;
static ATerm term_v_12;
static ATerm term_o_12;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/filemode: Cannot get filemode from ", 0, ATtrue));
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeInt(47);
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
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
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeAppl(ATmakeSymbol("TMPDIR", 0, ATtrue));
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeAppl(ATmakeSymbol("/StrategoXT", 0, ATtrue));
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file> (file, mode)", 0, ATtrue));
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
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
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeAppl(sym__2, term_n_13, term_m_16);
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeInt(1);
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
  ATprotect(&(term_l_17));
  term_l_17 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_r_17));
  term_r_17 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_t_17));
  term_t_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_u_17));
  term_u_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_17, term_q_16, term_t_17);
  ATprotect(&(term_v_17));
  term_v_17 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_w_17));
  term_w_17 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_z_17));
  term_z_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_17, term_w_17, term_x_17);
  ATprotect(&(term_a_18));
  term_a_18 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_f_18));
  term_f_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_g_18));
  term_g_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_18, term_b_18, term_f_18);
  ATprotect(&(term_h_18));
  term_h_18 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_j_18));
  term_j_18 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_o_18));
  term_o_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_p_18));
  term_p_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_18, term_j_18, term_o_18);
  ATprotect(&(term_q_18));
  term_q_18 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_r_18));
  term_r_18 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_t_18));
  term_t_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_u_18));
  term_u_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_18, term_r_18, term_t_18);
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
  ATprotect(&(term_h_19));
  term_h_19 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_j_19));
  term_j_19 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_k_19));
  term_k_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_l_19));
  term_l_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_19, term_j_19, term_k_19);
  ATprotect(&(term_m_19));
  term_m_19 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_n_19));
  term_n_19 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_o_19));
  term_o_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_p_19));
  term_p_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_19, term_n_19, term_o_19);
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
  ATprotect(&(term_p_20));
  term_p_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_20, term_n_20, term_o_20);
  ATprotect(&(term_u_20));
  term_u_20 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_v_20));
  term_v_20 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_b_21));
  term_b_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_c_21));
  term_c_21 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_20, term_v_20, term_b_21);
  ATprotect(&(term_d_21));
  term_d_21 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_e_21));
  term_e_21 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_i_21));
  term_i_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_l_21));
  term_l_21 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_21, term_e_21, term_i_21);
  ATprotect(&(term_m_21));
  term_m_21 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_p_21));
  term_p_21 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_q_21));
  term_q_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_s_21));
  term_s_21 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_21, term_p_21, term_q_21);
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
  ATprotect(&(term_n_22));
  term_n_22 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_q_22));
  term_q_22 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_s_22));
  term_s_22 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_22, term_n_22, term_q_22);
  ATprotect(&(term_t_22));
  term_t_22 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_u_22));
  term_u_22 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_x_22));
  term_x_22 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_y_22));
  term_y_22 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_22, term_u_22, term_x_22);
  ATprotect(&(term_z_22));
  term_z_22 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_b_23));
  term_b_23 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_f_23));
  term_f_23 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_g_23));
  term_g_23 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_22, term_b_23, term_f_23);
  ATprotect(&(term_i_23));
  term_i_23 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_j_23));
  term_j_23 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_k_23));
  term_k_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_l_23));
  term_l_23 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_23, term_j_23, term_k_23);
  ATprotect(&(term_m_23));
  term_m_23 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_n_23));
  term_n_23 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_o_23));
  term_o_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_p_23));
  term_p_23 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_23, term_n_23, term_o_23);
  ATprotect(&(term_r_23));
  term_r_23 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_s_23));
  term_s_23 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_t_23));
  term_t_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_u_23));
  term_u_23 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_23, term_s_23, term_t_23);
  ATprotect(&(term_w_23));
  term_w_23 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_y_23));
  term_y_23 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_z_23));
  term_z_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_a_24));
  term_a_24 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_23, term_y_23, term_z_23);
  ATprotect(&(term_b_24));
  term_b_24 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_c_24));
  term_c_24 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_d_24));
  term_d_24 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_e_24));
  term_e_24 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_24, term_c_24, term_d_24);
  ATprotect(&(term_k_24));
  term_k_24 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_l_24));
  term_l_24 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_m_24));
  term_m_24 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_n_24));
  term_n_24 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_24, term_l_24, term_m_24);
  ATprotect(&(term_s_24));
  term_s_24 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_u_24));
  term_u_24 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_v_24));
  term_v_24 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_w_24));
  term_w_24 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_24, term_u_24, term_v_24);
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
  ATprotect(&(term_v_37));
  term_v_37 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_d_38));
  term_d_38 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_i_38));
  term_i_38 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_l_38));
  term_l_38 = (ATerm) ATmakeAppl(sym__2, term_x_16, term_i_38);
  ATprotect(&(term_m_38));
  term_m_38 = (ATerm) ATmakeAppl(sym_Verbose_1, term_i_38);
  ATprotect(&(term_n_38));
  term_n_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_o_38));
  term_o_38 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_p_38));
  term_p_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_q_38));
  term_q_38 = (ATerm) ATmakeAppl(sym__2, term_p_38, term_b_15);
  ATprotect(&(term_r_38));
  term_r_38 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_s_38));
  term_s_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_b_39));
  term_b_39 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_c_39));
  term_c_39 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_s_39));
  term_s_39 = (ATerm) ATmakeAppl(ATmakeSymbol("-I d | --Include d   Include modules from directory d", 0, ATtrue));
  ATprotect(&(term_t_39));
  term_t_39 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_u_39));
  term_u_39 = (ATerm) ATmakeAppl(sym__2, term_s_15, term_t_39);
  ATprotect(&(term_v_39));
  term_v_39 = (ATerm) ATmakeAppl(ATmakeSymbol("--nodep              Don't create dependency file", 0, ATtrue));
  ATprotect(&(term_w_39));
  term_w_39 = (ATerm) ATmakeAppl(ATmakeSymbol("--dep f | -d f       Write dependency to file f", 0, ATtrue));
  ATprotect(&(term_x_39));
  term_x_39 = (ATerm) ATmakeAppl(ATmakeSymbol("--imports", 0, ATtrue));
  ATprotect(&(term_e_40));
  term_e_40 = (ATerm) ATmakeAppl(sym__2, term_x_39, term_b_15);
  ATprotect(&(term_f_40));
  term_f_40 = (ATerm) ATmakeAppl(ATmakeSymbol("--imports            Produce a list of imported modules only", 0, ATtrue));
  ATprotect(&(term_h_40));
  term_h_40 = (ATerm) ATmakeAppl(sym__2, term_l_31, term_b_15);
  ATprotect(&(term_u_40));
  term_u_40 = (ATerm) ATmakeAppl(ATmakeSymbol("--slack              Continue when module is not found", 0, ATtrue));
  ATprotect(&(term_d_41));
  term_d_41 = (ATerm) ATmakeAppl(sym__2, term_x_29, term_t_39);
  ATprotect(&(term_i_41));
  term_i_41 = (ATerm) ATmakeAppl(ATmakeSymbol("--asfix              Do not implode the concrete syntax parts", 0, ATtrue));
  ATprotect(&(term_a_42));
  term_a_42 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_l_43));
  term_l_43 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_p_43));
  term_p_43 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_q_43));
  term_q_43 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_t_43));
  term_t_43 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_u_43));
  term_u_43 = (ATerm) ATmakeAppl(sym__2, term_t_43, term_b_15);
  ATprotect(&(term_v_43));
  term_v_43 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_w_43));
  term_w_43 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_b_44));
  term_b_44 = (ATerm) ATmakeAppl(sym__2, term_w_43, term_b_15);
  ATprotect(&(term_e_44));
  term_e_44 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_f_44));
  term_f_44 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_k_44));
  term_k_44 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_p_44));
  term_p_44 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_q_44));
  term_q_44 = (ATerm) ATmakeAppl(sym__2, term_p_44, term_b_15);
  ATprotect(&(term_r_44));
  term_r_44 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_s_44));
  term_s_44 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_t_44));
  term_t_44 = (ATerm) ATmakeAppl(sym__3, term_h_37, term_o_37, (ATerm) ATempty);
  ATprotect(&(term_l_45));
  term_l_45 = (ATerm) ATmakeAppl(sym__2, term_n_13, term_p_44);
  ATprotect(&(term_n_45));
  term_n_45 = (ATerm) ATmakeAppl(sym__2, term_n_13, term_t_43);
  ATprotect(&(term_s_45));
  term_s_45 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_t_45));
  term_t_45 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_y_45));
  term_y_45 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_z_46));
  term_z_46 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_a_47));
  term_a_47 = (ATerm) ATmakeAppl(sym__2, term_z_46, term_b_15);
  ATprotect(&(term_b_47));
  term_b_47 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_c_47));
  term_c_47 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_h_47));
  term_h_47 = (ATerm) ATmakeAppl(sym__2, term_n_13, term_a_29);
  ATprotect(&(term_k_47));
  term_k_47 = (ATerm) ATmakeAppl(sym__2, term_n_13, term_x_39);
}
#include <srts/init-stratego-application.h>
ATerm copy_to_1_0 (ATerm t_0 (ATerm), ATerm t);
ATerm last_0_0 (ATerm t);
ATerm at_suffix_1_0 (ATerm n_125 (ATerm), ATerm t);
ATerm split_fetch_1_0 (ATerm f_125 (ATerm), ATerm t);
ATerm list_tokenize_1_0 (ATerm s_134 (ATerm), ATerm t);
static ATerm h_0 (ATerm t);
static ATerm d_10 (ATerm y_54, ATerm c_452, ATerm t);
ATerm filemode_0_0 (ATerm t);
static ATerm g_10 (ATerm t_74, ATerm s_74, ATerm t);
static ATerm i_0 (ATerm t);
ATerm xtc_write_output_0_0 (ATerm t);
static ATerm q_8 (ATerm j_42, ATerm k_42, ATerm t);
static ATerm v_8 (ATerm m_124 (ATerm), ATerm x_302, ATerm t_42, ATerm t);
static ATerm l_9 (ATerm l_113 (ATerm), ATerm t_24, ATerm r_24, ATerm t);
ATerm mkstemp_0_0 (ATerm t);
ATerm P__tmpdir_0_0 (ATerm t);
ATerm temp_dir_0_0 (ATerm t);
static ATerm k_0 (ATerm t);
ATerm xtc_new_file_0_0 (ATerm t);
static ATerm r_8 (ATerm x_42, ATerm y_306, ATerm t);
static ATerm b_13 (ATerm m_12, ATerm t);
static ATerm c_13 (ATerm p_12, ATerm r_12, ATerm s_12, ATerm t);
static ATerm m_0 (ATerm t);
ATerm open_file_0_0 (ATerm t);
ATerm create_dep_file_0_0 (ATerm t);
static ATerm t_8 (ATerm k_58, ATerm l_58, ATerm t);
static ATerm u_8 (ATerm n_42, ATerm o_42, ATerm t);
ATerm basename_1_0 (ATerm a_136 (ATerm), ATerm t);
ATerm at_suffix_rev_1_0 (ATerm r_125 (ATerm), ATerm t);
ATerm get_filename_0_0 (ATerm t);
ATerm map_1_0 (ATerm u_124 (ATerm), ATerm t);
static ATerm n_10 (ATerm p_65, ATerm q_65, ATerm t);
static ATerm s_0 (ATerm t);
static ATerm y_0 (ATerm t);
ATerm flatten_stratego_0_0 (ATerm t);
ATerm genzip_4_0 (ATerm w_126 (ATerm), ATerm x_126 (ATerm), ATerm y_126 (ATerm), ATerm z_126 (ATerm), ATerm t);
static ATerm z_0 (ATerm t);
static ATerm z_8 (ATerm z_169, ATerm t);
ATerm read_from_0_0 (ATerm t);
ATerm pass_keep_0_0 (ATerm t);
static ATerm a_9 (ATerm l_62, ATerm m_62, ATerm t);
ATerm pass_verbose_0_0 (ATerm t);
static ATerm a_1 (ATerm t);
ATerm xtc_transform_term_2_0 (ATerm d_151 (ATerm), ATerm e_151 (ATerm), ATerm t);
static ATerm b_9 (ATerm c_79, ATerm d_79, ATerm t);
ATerm signal_to_descr_0_0 (ATerm t);
ATerm signal_from_number_0_0 (ATerm t);
ATerm warn_ifsignaled_0_0 (ATerm t);
ATerm fork_0_0 (ATerm t);
ATerm fork_and_wait_1_0 (ATerm m_142 (ATerm), ATerm t);
static ATerm d_9 (ATerm s_68, ATerm t);
ATerm table_getlist_0_0 (ATerm t);
ATerm if_verbose5_1_0 (ATerm f_142 (ATerm), ATerm t);
ATerm if_verbose4_1_0 (ATerm e_142 (ATerm), ATerm t);
ATerm if_verbose6_1_0 (ATerm g_142 (ATerm), ATerm t);
static ATerm f_9 (ATerm d_129 (ATerm), ATerm q_48, ATerm p_48, ATerm t);
static ATerm i_1 (ATerm t);
static ATerm g_9 (ATerm t_64, ATerm u_64, ATerm v_64, ATerm t);
static ATerm h_9 (ATerm o_138 (ATerm), ATerm d_65, ATerm c_65, ATerm t);
static ATerm w_31 (ATerm p_31, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm i_9 (ATerm p_42, ATerm t);
static ATerm e_10 (ATerm q_56, ATerm r_56, ATerm t);
static ATerm j_9 (ATerm m_58, ATerm n_58, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm y_33 (ATerm l_32, ATerm t);
static ATerm z_33 (ATerm r_32, ATerm u_32, ATerm a_33, ATerm t);
static ATerm a_34 (ATerm l_33, ATerm m_33, ATerm n_33, ATerm t);
static ATerm k_9 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
static ATerm n_1 (ATerm t);
static ATerm q_1 (ATerm t);
ATerm read_repository_file_0_0 (ATerm t);
static ATerm r_1 (ATerm t);
static ATerm t_1 (ATerm t);
static ATerm u_1 (ATerm t);
static ATerm w_1 (ATerm t);
static ATerm x_1 (ATerm t);
static ATerm y_1 (ATerm t);
static ATerm a_2 (ATerm t);
static ATerm b_2 (ATerm t);
ATerm xtc_read_0_0 (ATerm t);
ATerm repeat_2_0 (ATerm j_117 (ATerm), ATerm k_117 (ATerm), ATerm t);
ATerm GetInternalDefaultXtcRepository_0_0 (ATerm t);
ATerm xtc_location_0_0 (ATerm t);
static ATerm c_2 (ATerm t);
static ATerm d_2 (ATerm t);
static ATerm f_2 (ATerm t);
static ATerm g_2 (ATerm t);
static ATerm h_2 (ATerm t);
ATerm xtc_load_0_0 (ATerm t);
static ATerm j_2 (ATerm t);
static ATerm m_2 (ATerm t);
static ATerm y_37 (ATerm g_37, ATerm t);
static ATerm o_2 (ATerm t);
static ATerm p_2 (ATerm t);
static ATerm s_2 (ATerm t);
static ATerm w_2 (ATerm t);
ATerm xtc_find_0_0 (ATerm t);
ATerm xtc_command_1_0 (ATerm m_152 (ATerm), ATerm t);
ATerm xtc_transform_file_2_0 (ATerm u_0 (ATerm), ATerm w_0 (ATerm), ATerm t);
static ATerm b_41 (ATerm v_38, ATerm w_38, ATerm x_38, ATerm t);
static ATerm c_41 (ATerm s_40, ATerm t_40, ATerm t);
static ATerm y_2 (ATerm t);
static ATerm z_2 (ATerm t);
static ATerm a_3 (ATerm t);
static ATerm b_3 (ATerm t);
ATerm parse_module_0_0 (ATerm t);
ATerm debug_1_0 (ATerm k_124 (ATerm), ATerm t);
ATerm if_verbose3_1_0 (ATerm d_142 (ATerm), ATerm t);
ATerm fetch_elem_1_0 (ATerm e_125 (ATerm), ATerm t);
static ATerm f_10 (ATerm a_58, ATerm b_58, ATerm t);
ATerm is_relpath_0_0 (ATerm t);
static ATerm m_9 (ATerm e_113 (ATerm), ATerm h_24, ATerm g_24, ATerm t);
static ATerm f_4 (ATerm t);
ATerm get_module_1_0 (ATerm d_113 (ATerm), ATerm t);
static ATerm o_9 (ATerm g_129 (ATerm), ATerm h_129 (ATerm), ATerm u_48, ATerm t_48, ATerm t);
static ATerm p_9 (ATerm y_128 (ATerm), ATerm o_48, ATerm n_48, ATerm t);
static ATerm l_4 (ATerm t);
static ATerm m_4 (ATerm t);
static ATerm n_4 (ATerm t);
static ATerm u_9 (ATerm a_837, ATerm f_837, ATerm g_83, ATerm t);
static ATerm p_4 (ATerm t);
static ATerm q_4 (ATerm t);
static ATerm s_4 (ATerm t);
static ATerm h_48 (ATerm k_46, ATerm l_46, ATerm m_46, ATerm t);
static ATerm t_4 (ATerm t);
ATerm diff_0_0 (ATerm t);
static ATerm w_9 (ATerm i_153 (ATerm), ATerm j_153 (ATerm), ATerm k_153 (ATerm), ATerm m_88, ATerm j_88, ATerm q_88, ATerm n_88, ATerm k_88, ATerm l_88, ATerm t);
ATerm GnNext_3_0 (ATerm i_153 (ATerm), ATerm j_153 (ATerm), ATerm k_153 (ATerm), ATerm t);
ATerm while_not_2_0 (ATerm a_118 (ATerm), ATerm b_118 (ATerm), ATerm t);
ATerm for_3_0 (ATerm d_118 (ATerm), ATerm e_118 (ATerm), ATerm f_118 (ATerm), ATerm t);
static ATerm u_4 (ATerm t);
static ATerm v_4 (ATerm t);
ATerm graph_nodes_roots_3_0 (ATerm f_153 (ATerm), ATerm g_153 (ATerm), ATerm h_153 (ATerm), ATerm t);
ATerm filter_1_0 (ATerm v_132 (ATerm), ATerm t);
static ATerm x_4 (ATerm t);
static ATerm c_5 (ATerm t);
static ATerm d_5 (ATerm t);
static ATerm j_5 (ATerm t);
static ATerm k_5 (ATerm t);
static ATerm l_5 (ATerm t);
static ATerm z_9 (ATerm x_23, ATerm t);
static ATerm h_10 (ATerm b_64, ATerm c_64, ATerm t);
ATerm end_scope_1_0 (ATerm i_113 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm f_117 (ATerm), ATerm g_117 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm h_113 (ATerm), ATerm t);
static ATerm p_5 (ATerm t);
static ATerm u_5 (ATerm t);
static ATerm w_5 (ATerm t);
ATerm xtc_temp_files_1_0 (ATerm q_151 (ATerm), ATerm t);
ATerm default_system_about_0_0 (ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm reverse_acc_2_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm t);
static ATerm d_6 (ATerm t);
static ATerm n_6 (ATerm t);
static ATerm p_6 (ATerm t);
ATerm default_system_usage_2_0 (ATerm q_146 (ATerm), ATerm r_146 (ATerm), ATerm t);
static ATerm q_6 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
static ATerm s_6 (ATerm t);
static ATerm v_6 (ATerm t);
static ATerm x_6 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm y_6 (ATerm t);
static ATerm z_6 (ATerm t);
static ATerm b_7 (ATerm t);
static ATerm c_7 (ATerm t);
static ATerm i_7 (ATerm t);
static ATerm l_7 (ATerm t);
static ATerm o_7 (ATerm t);
static ATerm u_7 (ATerm t);
static ATerm v_7 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm q_10 (ATerm o_89, ATerm p_89, ATerm t);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t);
static ATerm x_7 (ATerm t);
static ATerm y_7 (ATerm t);
static ATerm z_7 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm a_8 (ATerm t);
static ATerm d_8 (ATerm t);
static ATerm e_8 (ATerm t);
ATerm input_option_0_0 (ATerm t);
static ATerm o_10 (ATerm w_63, ATerm x_63, ATerm v_63, ATerm t);
ATerm ArgOption_3_0 (ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t);
ATerm at_end_1_0 (ATerm j_125 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm s_63 (ATerm d_63, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm a_10 (ATerm v_89, ATerm w_89, ATerm t);
static ATerm h_8 (ATerm t);
static ATerm k_8 (ATerm t);
static ATerm l_8 (ATerm t);
static ATerm o_8 (ATerm t);
static ATerm p_8 (ATerm t);
static ATerm s_8 (ATerm t);
static ATerm e_9 (ATerm t);
static ATerm n_9 (ATerm t);
static ATerm q_9 (ATerm t);
static ATerm r_9 (ATerm t);
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
static ATerm i_10 (ATerm f_62, ATerm g_62, ATerm t);
ATerm foldr_2_0 (ATerm r_131 (ATerm), ATerm s_131 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm p_10 (ATerm t);
static ATerm t_10 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm b_142 (ATerm), ATerm t);
static ATerm u_10 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm r_10 (ATerm l_68, ATerm m_68, ATerm n_68, ATerm t);
static ATerm s_10 (ATerm o_68, ATerm p_68, ATerm t);
ATerm lookup_table_0_1 (ATerm i_65, ATerm t);
ATerm new_hashtable_0_2 (ATerm t_68, ATerm u_68, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm k_10 (ATerm q_68, ATerm r_68, ATerm t);
static ATerm l_10 (ATerm v_68, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm c_125 (ATerm), ATerm t);
static ATerm v_10 (ATerm t);
static ATerm w_10 (ATerm t);
static ATerm x_10 (ATerm t);
static ATerm y_10 (ATerm t);
static ATerm z_10 (ATerm t);
static ATerm b_11 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm i_94 (ATerm), ATerm j_94 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm l_146 (ATerm), ATerm t);
static ATerm d_11 (ATerm t);
static ATerm f_11 (ATerm t);
static ATerm g_11 (ATerm t);
static ATerm h_11 (ATerm t);
ATerm parse_options_3_0 (ATerm i_146 (ATerm), ATerm j_146 (ATerm), ATerm k_146 (ATerm), ATerm t);
ATerm option_wrap_5_0 (ATerm x_143 (ATerm), ATerm y_143 (ATerm), ATerm z_143 (ATerm), ATerm a_144 (ATerm), ATerm b_144 (ATerm), ATerm t);
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
ATerm copy_to_1_0 (ATerm t_0 (ATerm), ATerm t)
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
        ATerm e_0 = NULL;
        t = k_1;
        t = t_0(t);
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
        t = g_10(l_1, e_0, t);
        t = (ATerm) ATmakeAppl(sym_FILE_1, l_1);
        LocalPopChoice(s_11);
      }
    else
      {
        t = t_2;
        {
          ATerm t_11 = t;
          int u_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm v_0 = NULL;
              t = k_1;
              t = t_0(t);
              v_0 = t;
              {
                ATerm v_11 = t;
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
                    t = v_11;
                  }
              }
              t = (ATerm) ATmakeAppl(sym__2, l_1, v_0);
              t = g_10(l_1, v_0, t);
              t = (ATerm) ATmakeAppl(sym_FILE_1, l_1);
              LocalPopChoice(u_11);
            }
          else
            {
              t = t_11;
              t = k_1;
              t = t_0(t);
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
ATerm at_suffix_1_0 (ATerm n_125 (ATerm), ATerm t)
{
  static ATerm l_3 (ATerm t);
  static ATerm l_3 (ATerm t)
  {
    ATerm w_11 = t;
    int x_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_125(t);
        LocalPopChoice(x_11);
      }
    else
      {
        t = w_11;
        {
          ATerm i_3 = NULL,j_3 = NULL,k_3 = NULL,s_1 = NULL,v_1 = NULL,n_0 = NULL;
          i_3 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              j_3 = ATgetFirst((ATermList) t);
              k_3 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(i_3);
          s_1 = t;
          t = k_3;
          t = l_3(t);
          v_1 = t;
          t = (ATerm) ATinsert(CheckATermList(v_1), j_3);
          n_0 = t;
          t = SSLsetAnnotations(n_0, s_1);
        }
      }
    return(t);
  }
  t = l_3(t);
  return(t);
}
ATerm split_fetch_1_0 (ATerm f_125 (ATerm), ATerm t)
{
  ATerm p_3 = NULL,r_3 = NULL;
  static ATerm a_0 (ATerm t);
  static ATerm a_0 (ATerm t)
  {
    ATerm s_3 = NULL,t_3 = NULL,u_3 = NULL,w_3 = NULL,x_3 = NULL,y_3 = NULL,a_4 = NULL,b_4 = NULL,c_4 = NULL,c_1 = NULL,b_1 = NULL;
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
    t = f_125(t);
    a_4 = t;
    t = (ATerm) ATinsert(CheckATermList(y_3), a_4);
    b_1 = t;
    t = SSLsetAnnotations(b_1, w_3);
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
    c_1 = t;
    t = SSLsetAnnotations(c_1, s_3);
    t = (ATerm) ATempty;
    return(t);
  }
  t = at_suffix_1_0(a_0, t);
  r_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_3, not_null(p_3));
  return(t);
}
ATerm list_tokenize_1_0 (ATerm s_134 (ATerm), ATerm t)
{
  ATerm o_4 = NULL,r_4 = NULL;
  ATerm b_12 = t;
  int c_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = split_fetch_1_0(s_134, t);
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
              ATerm e_12 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = r_4;
          t = list_tokenize_1_0(s_134, t);
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
          t = list_tokenize_1_0(s_134, t);
          y_4 = t;
          t = (ATerm) ATinsert(CheckATermList(y_4), o_4);
        }
    }
  return(t);
}
static ATerm h_0 (ATerm t)
{
  ATerm b_5 = NULL;
  b_5 = t;
  t = SSL_implode_string(b_5);
  return(t);
}
static ATerm d_10 (ATerm y_54, ATerm c_452, ATerm t)
{
  t = SSL_explode_string(c_452);
  {
    static ATerm b_0 (ATerm t);
    static ATerm b_0 (ATerm t)
    {
      ATerm a_5 = NULL;
      static ATerm c_0 (ATerm t);
      static ATerm c_0 (ATerm t)
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
      t = y_54;
      t = fetch_1_0(c_0, t);
      return(t);
    }
    t = list_tokenize_1_0(b_0, t);
  }
  t = map_1_0(h_0, t);
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
        ATerm e_2 = NULL;
        t = SSL_filemode(r_5);
        if(match_cons(t, sym__2))
          {
            e_2 = ATgetArgument(t, 0);
            {
              ATerm n_12 = ATgetArgument(t, 1);
              if(((ATgetType(n_12) != AT_INT) || (ATgetInt((ATermInt) n_12) != 0)))
                _fail(t);
            }
          }
        else
          _fail(t);
        t = e_2;
        LocalPopChoice(l_12);
      }
    else
      {
        t = k_12;
        {
          ATerm k_2 = NULL,l_2 = NULL;
          t = term_o_12;
          l_2 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_o_12, r_5);
          t = e_10(l_2, r_5, t);
          k_2 = t;
          t = SSL_perror(k_2);
          _fail(t);
        }
      }
  }
  return(t);
}
static ATerm g_10 (ATerm t_74, ATerm s_74, ATerm t)
{
  ATerm y_5 = NULL,c_6 = NULL;
  c_6 = t;
  {
    ATerm q_12 = t;
    int u_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_6 = NULL,f_6 = NULL;
        t = (ATerm) ATinsert(ATempty, term_v_12);
        f_6 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_74, (ATerm) ATinsert(ATempty, term_v_12));
        t = f_10(s_74, f_6, t);
        t = filemode_0_0(t);
        e_6 = t;
        t = SSL_S_ISDIR(e_6);
        t = c_6;
        LocalPopChoice(u_12);
        {
          ATerm h_6 = NULL,i_6 = NULL,j_6 = NULL;
          t = (ATerm) ATinsert(ATempty, term_w_12);
          j_6 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, term_w_12), t_74);
          t = d_10(j_6, t_74, t);
          t = last_0_0(t);
          h_6 = t;
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, h_6), term_y_12), s_74);
          i_6 = t;
          t = SSL_concat_strings(i_6);
        }
      }
    else
      {
        t = q_12;
        t = s_74;
      }
  }
  y_5 = t;
  t = SSL_copy(t_74, y_5);
  return(t);
}
static ATerm i_0 (ATerm t)
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
      ATerm q_2 = NULL,r_2 = NULL;
      t = term_o_13;
      {
        ATerm r_13 = t;
        int x_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_2 = NULL,v_2 = NULL;
            t = term_n_13;
            u_2 = t;
            t = term_o_13;
            v_2 = t;
            t = term_p_13;
            t = n_10(u_2, v_2, t);
            LocalPopChoice(x_13);
          }
        else
          {
            t = r_13;
            t = term_q_13;
          }
      }
      q_2 = t;
      t = term_y_13;
      r_2 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_y_13, q_2);
      t = g_10(r_2, q_2, t);
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
      t = copy_to_1_0(i_0, t);
    }
  return(t);
}
static ATerm q_8 (ATerm j_42, ATerm k_42, ATerm t)
{
  ATerm d_7 = NULL;
  t = SSL_write_term_to_stream_baf(j_42, k_42);
  d_7 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, d_7);
  return(t);
}
static ATerm v_8 (ATerm m_124 (ATerm), ATerm x_302, ATerm t_42, ATerm t)
{
  ATerm e_7 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, x_302, term_b_14);
  t = k_9(t);
  e_7 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_7, t_42);
  t = m_124(t);
  t = fclose_0_0(t);
  t = t_42;
  return(t);
}
static ATerm l_9 (ATerm l_113 (ATerm), ATerm t_24, ATerm r_24, ATerm t)
{
  ATerm f_7 = NULL,g_7 = NULL,h_7 = NULL,j_7 = NULL,m_7 = NULL,n_7 = NULL,r_7 = NULL,s_7 = NULL;
  j_7 = t;
  t = l_113(t);
  f_7 = t;
  t = (ATerm) ATmakeAppl(sym__3, f_7, t_24, r_24);
  t = o_10(f_7, t_24, r_24, t);
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
  t = (ATerm) ATmakeAppl(sym__3, f_7, term_h_14, (ATerm) ATinsert(CheckATermList(h_7), (ATerm) ATinsert(CheckATermList(g_7), t_24)));
  t = lookup_table_0_1(f_7, t);
  s_7 = t;
  t = term_h_14;
  m_7 = t;
  t = (ATerm) ATinsert(CheckATermList(h_7), (ATerm) ATinsert(CheckATermList(g_7), t_24));
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
  ATerm j_14 = t;
  int o_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_8 = NULL,e_3 = NULL;
      b_8 = t;
      t = term_q_14;
      e_3 = t;
      t = (ATerm) ATmakeAppl(sym__2, b_8, term_q_14);
      t = e_10(b_8, e_3, t);
      w_7 = t;
      t = SSL_mkstemp(w_7);
      LocalPopChoice(o_14);
    }
  else
    {
      t = j_14;
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
  int t_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_8 = NULL;
      t = term_w_14;
      i_8 = t;
      t = SSL_getenv(i_8);
      LocalPopChoice(t_14);
    }
  else
    {
      t = s_14;
      t = P__tmpdir_0_0(t);
    }
  return(t);
}
static ATerm k_0 (ATerm t)
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
  t = l_9(k_0, w_8, x_8, t);
  t = SSL_close(n_8);
  t = w_8;
  return(t);
}
static ATerm r_8 (ATerm x_42, ATerm y_306, ATerm t)
{
  ATerm y_11 = NULL,z_11 = NULL;
  t = y_306;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = y_306;
    }
  else
    {
      ATerm e_5 = NULL,o_5 = NULL,g_1 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          y_11 = ATgetFirst((ATermList) t);
          z_11 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(y_306);
      e_5 = t;
      t = z_11;
      {
        static ATerm m_6 (ATerm t);
        static ATerm m_6 (ATerm t)
        {
          ATerm g_6 = NULL,k_6 = NULL,l_6 = NULL;
          g_6 = t;
          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
            {
              t = g_6;
            }
          else
            {
              ATerm k_7 = NULL,p_7 = NULL,q_7 = NULL,f_1 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  k_6 = ATgetFirst((ATermList) t);
                  l_6 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(g_6);
              k_7 = t;
              t = l_6;
              t = m_6(t);
              p_7 = t;
              t = (ATerm) ATinsert(CheckATermList(p_7), k_6);
              f_1 = t;
              t = SSLsetAnnotations(f_1, k_7);
              q_7 = t;
              t = (ATerm) ATinsert(CheckATermList(q_7), x_42);
            }
          return(t);
        }
        t = m_6(t);
      }
      o_5 = t;
      t = (ATerm) ATinsert(CheckATermList(o_5), y_11);
      g_1 = t;
      t = SSLsetAnnotations(g_1, e_5);
    }
  return(t);
}
static ATerm b_13 (ATerm m_12, ATerm t)
{
  t = m_12;
  {
    ATerm c_15 = t;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm e_15 = ATgetArgument(t, 0);
            ATerm g_15 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = c_15;
      }
  }
  t = term_i_15;
  t = debug_1_0(m_0, t);
  t = (ATerm) ATmakeAppl(sym__2, m_12, term_b_14);
  t = open_file_0_0(t);
  return(t);
}
static ATerm c_13 (ATerm p_12, ATerm r_12, ATerm s_12, ATerm t)
{
  t = SSL_open_file(p_12, r_12);
  return(t);
}
static ATerm m_0 (ATerm t)
{
  t = term_j_15;
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
        ATerm k_15 = t;
        int m_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = b_13(x_12, t);
            LocalPopChoice(m_15);
          }
        else
          {
            t = k_15;
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
static ATerm t_8 (ATerm k_58, ATerm l_58, ATerm t)
{
  ATerm p_14 = NULL;
  t = SSL_fputc(k_58, l_58);
  p_14 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, p_14);
  return(t);
}
static ATerm u_8 (ATerm n_42, ATerm o_42, ATerm t)
{
  ATerm u_14 = NULL;
  t = SSL_write_term_to_stream_text(n_42, o_42);
  u_14 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, u_14);
  return(t);
}
ATerm basename_1_0 (ATerm a_136 (ATerm), ATerm t)
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
                ATerm j_8 = NULL,m_8 = NULL,j_1 = NULL;
                t = SSLgetAnnotations(t_16);
                j_8 = t;
                t = z_16;
                t = i_17(t);
                m_8 = t;
                t = (ATerm) ATinsert(CheckATermList(m_8), w_16);
                j_1 = t;
                t = SSLsetAnnotations(j_1, j_8);
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
                      ATerm s_9 = NULL,o_1 = NULL;
                      t = SSLgetAnnotations(t_16);
                      s_9 = t;
                      t = w_16;
                      if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 47)))
                        _fail(t);
                      t = (ATerm) ATinsert(CheckATermList(z_16), w_16);
                      o_1 = t;
                      t = SSLsetAnnotations(o_1, s_9);
                      LocalPopChoice(d_16);
                    }
                  else
                    {
                      t = c_16;
                      {
                        ATerm a_11 = NULL,e_11 = NULL,p_1 = NULL;
                        t = SSLgetAnnotations(t_16);
                        a_11 = t;
                        t = w_16;
                        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 46)))
                          _fail(t);
                        t = z_16;
                        t = a_136(t);
                        e_11 = t;
                        t = (ATerm) ATinsert(CheckATermList(e_11), w_16);
                        p_1 = t;
                        t = SSLsetAnnotations(p_1, a_11);
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
ATerm at_suffix_rev_1_0 (ATerm r_125 (ATerm), ATerm t)
{
  static ATerm n_18 (ATerm t);
  static ATerm n_18 (ATerm t)
  {
    ATerm e_16 = t;
    int f_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_18 = NULL,l_18 = NULL,m_18 = NULL,a_12 = NULL,f_12 = NULL,c_3 = NULL;
        k_18 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            l_18 = ATgetFirst((ATermList) t);
            m_18 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(k_18);
        a_12 = t;
        t = m_18;
        t = n_18(t);
        f_12 = t;
        t = (ATerm) ATinsert(CheckATermList(f_12), l_18);
        c_3 = t;
        t = SSLsetAnnotations(c_3, a_12);
        LocalPopChoice(f_16);
      }
    else
      {
        t = e_16;
        t = r_125(t);
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
        static ATerm q_0 (ATerm t);
        static ATerm q_0 (ATerm t)
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
        t = at_suffix_rev_1_0(q_0, t);
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
ATerm map_1_0 (ATerm u_124 (ATerm), ATerm t)
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
        ATerm t_12 = NULL,f_13 = NULL,g_13 = NULL,f_3 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            a_20 = ATgetFirst((ATermList) t);
            b_20 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(y_19);
        t_12 = t;
        t = a_20;
        t = u_124(t);
        f_13 = t;
        t = b_20;
        t = c_20(t);
        g_13 = t;
        t = (ATerm) ATinsert(CheckATermList(g_13), f_13);
        f_3 = t;
        t = SSLsetAnnotations(f_3, t_12);
      }
    return(t);
  }
  t = c_20(t);
  return(t);
}
static ATerm n_10 (ATerm p_65, ATerm q_65, ATerm t)
{
  ATerm e_20 = NULL;
  t = lookup_table_0_1(p_65, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      e_20 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_10(q_65, e_20, t);
  return(t);
}
static ATerm s_0 (ATerm t)
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
  ATerm j_16 = t;
  if((PushChoice() == 0))
    {
      ATerm k_20 = NULL,q_20 = NULL,r_20 = NULL,h_3 = NULL;
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
      h_3 = t;
      t = SSLsetAnnotations(h_3, k_20);
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
  t = map_1_0(s_0, t);
  t = concat_0_0(t);
  i_20 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, i_20);
  return(t);
}
ATerm genzip_4_0 (ATerm w_126 (ATerm), ATerm x_126 (ATerm), ATerm y_126 (ATerm), ATerm z_126 (ATerm), ATerm t)
{
  static ATerm j_21 (ATerm t);
  static ATerm j_21 (ATerm t)
  {
    ATerm k_16 = t;
    int l_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_126(t);
        LocalPopChoice(l_16);
      }
    else
      {
        t = k_16;
        {
          ATerm s_20 = NULL,w_20 = NULL,y_20 = NULL,z_20 = NULL,a_21 = NULL,g_21 = NULL,o_3 = NULL;
          t = x_126(t);
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
          t = z_126(t);
          z_20 = t;
          t = y_20;
          t = j_21(t);
          a_21 = t;
          t = (ATerm) ATmakeAppl(sym__2, z_20, a_21);
          o_3 = t;
          t = SSLsetAnnotations(o_3, s_20);
          t = y_126(t);
        }
      }
    return(t);
  }
  t = j_21(t);
  return(t);
}
static ATerm z_0 (ATerm t)
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
static ATerm z_8 (ATerm z_169, ATerm t)
{
  t = z_169;
  t = filter_1_0(z_0, t);
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
    ATerm n_16 = t;
    int o_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_22 = NULL,e_22 = NULL;
        t = term_n_13;
        b_22 = t;
        t = term_m_16;
        e_22 = t;
        t = term_p_16;
        t = n_10(b_22, e_22, t);
        LocalPopChoice(o_16);
      }
    else
      {
        t = n_16;
        t = term_q_16;
      }
  }
  y_21 = t;
  t = term_q_16;
  a_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_21, term_q_16);
  t = a_9(y_21, a_22, t);
  z_21 = t;
  t = SSL_int_to_string(z_21);
  x_21 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, x_21), term_m_16);
  return(t);
}
static ATerm a_9 (ATerm l_62, ATerm m_62, ATerm t)
{
  ATerm s_16 = t;
  int v_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(l_62, m_62);
      LocalPopChoice(v_16);
    }
  else
    {
      t = s_16;
      t = SSL_subtr(l_62, m_62);
    }
  return(t);
}
ATerm pass_verbose_0_0 (ATerm t)
{
  ATerm f_22 = NULL,i_22 = NULL,j_22 = NULL,k_22 = NULL;
  t = term_x_16;
  {
    ATerm y_16 = t;
    int a_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_22 = NULL,r_22 = NULL;
        t = term_n_13;
        p_22 = t;
        t = term_x_16;
        r_22 = t;
        t = term_d_17;
        t = n_10(p_22, r_22, t);
        LocalPopChoice(a_17);
      }
    else
      {
        t = y_16;
        t = term_q_16;
      }
  }
  i_22 = t;
  t = term_q_16;
  k_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_22, term_q_16);
  t = a_9(i_22, k_22, t);
  j_22 = t;
  t = SSL_int_to_string(j_22);
  f_22 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, f_22), term_x_16);
  return(t);
}
static ATerm a_1 (ATerm t)
{
  ATerm c_23 = NULL,e_23 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm e_17 = ATgetArgument(t, 0);
      if(match_cons(e_17, sym_Stream_1))
        {
          c_23 = ATgetArgument(e_17, 0);
        }
      else
        _fail(t);
      e_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_8(c_23, e_23, t);
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm d_151 (ATerm), ATerm e_151 (ATerm), ATerm t)
{
  ATerm v_22 = NULL,a_23 = NULL;
  a_23 = t;
  t = xtc_new_file_0_0(t);
  v_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_22, a_23);
  t = v_8(a_1, v_22, a_23, t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, v_22);
  t = xtc_transform_file_2_0(d_151, e_151, t);
  t = read_from_0_0(t);
  return(t);
}
static ATerm b_9 (ATerm c_79, ATerm d_79, ATerm t)
{
  t = SSL_execvp(c_79, d_79);
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
        ATerm v_13 = NULL,w_13 = NULL;
        t = SSL_int_to_string(k_25);
        v_13 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_j_17), v_13), term_h_17);
        w_13 = t;
        t = SSL_concat_strings(w_13);
      }
    }
  else
    {
      ATerm k_14 = NULL,l_14 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          k_25 = ATgetArgument(t, 0);
          m_25 = ATgetArgument(t, 1);
          t_25 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(m_25);
      k_14 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, t_25), term_l_17), k_14), term_k_17), k_25);
      l_14 = t;
      t = SSL_concat_strings(l_14);
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
        static ATerm d_1 (ATerm t);
        static ATerm d_1 (ATerm t)
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
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_w_24), term_n_24), term_e_24), term_a_24), term_u_23), term_p_23), term_l_23), term_g_23), term_y_22), term_s_22), term_l_22), term_c_22), term_s_21), term_l_21), term_c_21), term_p_20), term_l_20), term_d_20), term_v_19), term_p_19), term_l_19), term_g_19), term_c_19), term_u_18), term_p_18), term_g_18), term_z_17), term_u_17);
        t = fetch_elem_1_0(d_1, t);
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
              ATerm v_14 = NULL,x_14 = NULL,y_14 = NULL;
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
              v_14 = t;
              t = term_e_25;
              x_14 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, v_14), term_f_25);
              y_14 = t;
              t = SSL_printnl(x_14, y_14);
              t = (ATerm) ATmakeAppl(sym__2, term_e_25, (ATerm) ATinsert(ATinsert(ATempty, v_14), term_f_25));
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
ATerm fork_and_wait_1_0 (ATerm m_142 (ATerm), ATerm t)
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
        t = m_142(t);
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
static ATerm d_9 (ATerm s_68, ATerm t)
{
  t = SSL_hashtable_keys(s_68);
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
ATerm if_verbose5_1_0 (ATerm f_142 (ATerm), ATerm t)
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
        t = (ATerm) ATmakeAppl(sym__2, z_27, term_y_23);
        t = geq_0_0(t);
        t = u_27;
        t = f_142(t);
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
ATerm if_verbose4_1_0 (ATerm e_142 (ATerm), ATerm t)
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
        t = e_142(t);
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
ATerm if_verbose6_1_0 (ATerm g_142 (ATerm), ATerm t)
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
        t = g_142(t);
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
static ATerm f_9 (ATerm d_129 (ATerm), ATerm q_48, ATerm p_48, ATerm t)
{
  static ATerm a_30 (ATerm t);
  static ATerm a_30 (ATerm t)
  {
    ATerm m_29 = NULL,p_29 = NULL,q_29 = NULL;
    m_29 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = p_48;
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
                static ATerm h_1 (ATerm t);
                static ATerm h_1 (ATerm t)
                {
                  t = p_48;
                  return(t);
                }
                t = o_9(d_129, h_1, p_29, q_29, t);
              }
              t = a_30(t);
              LocalPopChoice(x_25);
            }
          else
            {
              t = v_25;
              {
                ATerm d_15 = NULL,l_15 = NULL,v_3 = NULL;
                t = SSLgetAnnotations(m_29);
                d_15 = t;
                t = q_29;
                t = a_30(t);
                l_15 = t;
                t = (ATerm) ATinsert(CheckATermList(l_15), p_29);
                v_3 = t;
                t = SSLsetAnnotations(v_3, d_15);
              }
            }
        }
      }
    return(t);
  }
  t = q_48;
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
static ATerm g_9 (ATerm t_64, ATerm u_64, ATerm v_64, ATerm t)
{
  ATerm h_30 = NULL,n_30 = NULL,o_30 = NULL,p_30 = NULL;
  h_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_64, u_64);
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
        t = (ATerm) ATmakeAppl(sym__2, t_64, u_64);
        t = n_10(t_64, u_64, t);
        LocalPopChoice(z_25);
      }
    else
      {
        t = y_25;
        t = (ATerm) ATempty;
      }
  }
  o_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_30, v_64);
  t = f_9(i_1, o_30, v_64, t);
  n_30 = t;
  t = (ATerm) ATmakeAppl(sym__3, t_64, u_64, n_30);
  t = lookup_table_0_1(t_64, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      p_30 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_10(u_64, n_30, p_30, t);
  t = h_30;
  return(t);
}
static ATerm h_9 (ATerm o_138 (ATerm), ATerm d_65, ATerm c_65, ATerm t)
{
  static ATerm m_1 (ATerm t);
  static ATerm m_1 (ATerm t)
  {
    ATerm a_31 = NULL,d_31 = NULL;
    if(match_cons(t, sym__2))
      {
        a_31 = ATgetArgument(t, 0);
        d_31 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, d_65, a_31, d_31);
    t = o_138(t);
    return(t);
  }
  t = c_65;
  t = map_1_0(m_1, t);
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
static ATerm i_9 (ATerm p_42, ATerm t)
{
  t = SSL_read_term_from_stream(p_42);
  return(t);
}
static ATerm e_10 (ATerm q_56, ATerm r_56, ATerm t)
{
  t = SSL_strcat(q_56, r_56);
  return(t);
}
static ATerm j_9 (ATerm m_58, ATerm n_58, ATerm t)
{
  ATerm x_31 = NULL;
  t = SSL_fopen(m_58, n_58);
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
          ATerm r_16 = NULL,u_16 = NULL;
          t = term_q_26;
          u_16 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_q_26, n_34);
          t = e_10(u_16, n_34, t);
          r_16 = t;
          t = SSL_perror(r_16);
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
static ATerm n_1 (ATerm t)
{
  t = term_r_26;
  return(t);
}
static ATerm q_1 (ATerm t)
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
            t = debug_1_0(n_1, t);
            LocalPopChoice(x_26);
          }
        else
          {
            t = w_26;
            t = debug_1_0(q_1, t);
          }
      }
      t = (ATerm) ATempty;
    }
  return(t);
}
static ATerm r_1 (ATerm t)
{
  t = debug_1_0(t_1, t);
  return(t);
}
static ATerm t_1 (ATerm t)
{
  t = term_b_27;
  return(t);
}
static ATerm u_1 (ATerm t)
{
  t = debug_1_0(w_1, t);
  return(t);
}
static ATerm w_1 (ATerm t)
{
  t = term_c_27;
  return(t);
}
static ATerm x_1 (ATerm t)
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
static ATerm y_1 (ATerm t)
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
static ATerm a_2 (ATerm t)
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
static ATerm b_2 (ATerm t)
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
  t = if_verbose5_1_0(r_1, t);
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
  t = if_verbose4_1_0(u_1, t);
  t = read_repository_file_0_0(t);
  t = if_verbose6_1_0(x_1, t);
  g_35 = t;
  t = term_g_27;
  r_35 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_27, g_35);
  t = h_9(y_1, r_35, g_35, t);
  t = if_verbose6_1_0(a_2, t);
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
  t = if_verbose4_1_0(b_2, t);
  return(t);
}
ATerm repeat_2_0 (ATerm j_117 (ATerm), ATerm k_117 (ATerm), ATerm t)
{
  static ATerm p_36 (ATerm t);
  static ATerm p_36 (ATerm t)
  {
    ATerm i_27 = t;
    int j_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = j_117(t);
        t = p_36(t);
        LocalPopChoice(j_27);
      }
    else
      {
        t = i_27;
        t = k_117(t);
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
static ATerm c_2 (ATerm t)
{
  t = debug_1_0(d_2, t);
  return(t);
}
static ATerm d_2 (ATerm t)
{
  t = term_w_27;
  return(t);
}
static ATerm f_2 (ATerm t)
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
static ATerm g_2 (ATerm t)
{
  t = debug_1_0(h_2, t);
  return(t);
}
static ATerm h_2 (ATerm t)
{
  t = term_d_28;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm w_36 = NULL;
  t = if_verbose5_1_0(c_2, t);
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
          t = repeat_2_0(f_2, _id, t);
          t = z_36;
        }
      }
  }
  t = w_36;
  t = if_verbose5_1_0(g_2, t);
  return(t);
}
static ATerm j_2 (ATerm t)
{
  t = debug_1_0(m_2, t);
  return(t);
}
static ATerm m_2 (ATerm t)
{
  t = term_l_28;
  return(t);
}
static ATerm y_37 (ATerm g_37, ATerm t)
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
  t = debug_1_0(w_2, t);
  return(t);
}
static ATerm w_2 (ATerm t)
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
      t = if_verbose5_1_0(j_2, t);
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
                ATerm q_37 = NULL,r_37 = NULL,s_37 = NULL;
                t = term_g_27;
                r_37 = t;
                t = (ATerm) ATmakeAppl(sym_Tool_1, l_37);
                s_37 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_g_27, (ATerm) ATmakeAppl(sym_Tool_1, l_37));
                t = n_10(r_37, s_37, t);
                {
                  static ATerm n_2 (ATerm t);
                  static ATerm n_2 (ATerm t)
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
                  t = fetch_1_0(n_2, t);
                }
                t = not_null(q_37);
                LocalPopChoice(x_28);
              }
            else
              {
                t = w_28;
                t = y_37(n_37, t);
              }
          }
        }
      else
        {
          t = y_37(n_37, t);
        }
      t = if_verbose5_1_0(o_2, t);
      LocalPopChoice(v_28);
    }
  else
    {
      t = u_28;
      {
        ATerm x_37 = NULL,b_17 = NULL,c_17 = NULL;
        x_37 = t;
        t = term_e_25;
        b_17 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_z_28), x_37), term_y_28);
        c_17 = t;
        t = SSL_printnl(b_17, c_17);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_z_28), x_37), term_y_28);
        t = if_verbose5_1_0(s_2, t);
        _fail(t);
      }
    }
  return(t);
}
ATerm xtc_command_1_0 (ATerm m_152 (ATerm), ATerm t)
{
  ATerm a_38 = NULL,b_38 = NULL;
  b_38 = t;
  t = m_152(t);
  t = xtc_find_0_0(t);
  a_38 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_38, b_38);
  {
    static ATerm x_2 (ATerm t);
    static ATerm x_2 (ATerm t)
    {
      ATerm c_38 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, a_38, b_38);
      t = b_9(a_38, b_38, t);
      t = term_q_16;
      c_38 = t;
      t = SSL_exit(c_38);
      return(t);
    }
    t = fork_and_wait_1_0(x_2, t);
  }
  t = b_38;
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm u_0 (ATerm), ATerm w_0 (ATerm), ATerm t)
{
  ATerm e_38 = NULL,f_38 = NULL;
  e_38 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm g_38 = NULL,h_38 = NULL;
      t = e_38;
      t = xtc_new_file_0_0(t);
      g_38 = t;
      t = w_0(t);
      h_38 = t;
      t = (ATerm) ATmakeAppl(sym__2, h_38, (ATerm) ATinsert(ATinsert(ATempty, g_38), term_o_13));
      t = conc_0_0(t);
      t = xtc_command_1_0(u_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, g_38);
    }
  else
    {
      ATerm j_38 = NULL,k_38 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          f_38 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = f_38;
      t = xtc_new_file_0_0(t);
      j_38 = t;
      t = w_0(t);
      k_38 = t;
      t = (ATerm) ATmakeAppl(sym__2, k_38, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, j_38), term_o_13), f_38), term_a_29));
      t = conc_0_0(t);
      t = xtc_command_1_0(u_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, j_38);
    }
  return(t);
}
static ATerm b_41 (ATerm v_38, ATerm w_38, ATerm x_38, ATerm t)
{
  ATerm a_39 = NULL,d_39 = NULL,f_17 = NULL,g_17 = NULL,h_4 = NULL;
  t = SSLgetAnnotations(x_38);
  a_39 = t;
  t = v_38;
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
  d_39 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_39, w_38);
  h_4 = t;
  t = SSLsetAnnotations(h_4, a_39);
  g_17 = t;
  t = SSL_explode_term(g_17);
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
                f_17 = ATgetFirst((ATermList) f_29);
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
  t = f_17;
  {
    ATerm h_29 = t;
    int i_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_29 = t;
        int k_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_39 = NULL;
            if(match_cons(t, sym_FILE_1))
              {
                k_39 = ATgetArgument(t, 0);
                {
                  ATerm m_17 = NULL,i_4 = NULL;
                  t = SSLgetAnnotations(f_17);
                  m_17 = t;
                  t = (ATerm) ATmakeAppl(sym_FILE_1, k_39);
                  i_4 = t;
                  t = SSLsetAnnotations(i_4, m_17);
                }
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = f_17;
              }
            LocalPopChoice(k_29);
            t = xtc_transform_file_2_0(y_2, z_2, t);
          }
        else
          {
            t = j_29;
            t = xtc_transform_term_2_0(a_3, b_3, t);
          }
        t = read_from_0_0(t);
        LocalPopChoice(i_29);
      }
    else
      {
        t = h_29;
        {
          ATerm p_40 = NULL,q_40 = NULL,r_40 = NULL;
          t = term_e_25;
          q_40 = t;
          t = (ATerm) ATinsert(ATinsert(ATempty, w_38), term_l_29);
          r_40 = t;
          t = SSL_printnl(q_40, r_40);
          t = term_q_16;
          p_40 = t;
          t = SSL_exit(p_40);
          t = (ATerm) ATinsert(ATinsert(ATempty, w_38), term_l_29);
        }
      }
  }
  return(t);
}
static ATerm c_41 (ATerm s_40, ATerm t_40, ATerm t)
{
  ATerm s_17 = NULL;
  t = SSL_explode_term(t_40);
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
                s_17 = ATgetFirst((ATermList) s_29);
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
  t = s_17;
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
          ATerm v_40 = NULL,w_40 = NULL,x_40 = NULL;
          t = term_e_25;
          w_40 = t;
          t = (ATerm) ATinsert(ATinsert(ATempty, s_40), term_l_29);
          x_40 = t;
          t = SSL_printnl(w_40, x_40);
          t = term_q_16;
          v_40 = t;
          t = SSL_exit(v_40);
          t = (ATerm) ATinsert(ATinsert(ATempty, s_40), term_l_29);
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
  ATerm o_39 = NULL,p_39 = NULL,q_39 = NULL,r_39 = NULL,y_39 = NULL;
  y_39 = t;
  t = pass_verbose_0_0(t);
  o_39 = t;
  t = y_39;
  t = pass_keep_0_0(t);
  p_39 = t;
  t = term_x_29;
  {
    ATerm y_29 = t;
    int z_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_39 = NULL,a_40 = NULL;
        t = term_n_13;
        z_39 = t;
        t = term_x_29;
        a_40 = t;
        t = term_b_30;
        t = n_10(z_39, a_40, t);
        LocalPopChoice(z_29);
        t = (ATerm) ATinsert(ATempty, term_x_29);
      }
    else
      {
        t = y_29;
        t = (ATerm) ATempty;
      }
  }
  q_39 = t;
  t = term_c_30;
  {
    ATerm d_30 = t;
    int e_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_40 = NULL,c_40 = NULL;
        t = term_n_13;
        b_40 = t;
        t = term_c_30;
        c_40 = t;
        t = term_f_30;
        t = n_10(b_40, c_40, t);
        LocalPopChoice(e_30);
      }
    else
      {
        t = d_30;
        t = (ATerm) ATempty;
      }
  }
  r_39 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, r_39), p_39), o_39), q_39);
  t = concat_0_0(t);
  return(t);
}
static ATerm a_3 (ATerm t)
{
  t = term_w_29;
  return(t);
}
static ATerm b_3 (ATerm t)
{
  ATerm d_40 = NULL,g_40 = NULL,i_40 = NULL,j_40 = NULL,k_40 = NULL;
  k_40 = t;
  t = pass_verbose_0_0(t);
  d_40 = t;
  t = k_40;
  t = pass_keep_0_0(t);
  g_40 = t;
  t = term_x_29;
  {
    ATerm g_30 = t;
    int i_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_40 = NULL,m_40 = NULL;
        t = term_n_13;
        l_40 = t;
        t = term_x_29;
        m_40 = t;
        t = term_b_30;
        t = n_10(l_40, m_40, t);
        LocalPopChoice(i_30);
        t = (ATerm) ATinsert(ATempty, term_x_29);
      }
    else
      {
        t = g_30;
        t = (ATerm) ATempty;
      }
  }
  i_40 = t;
  t = term_c_30;
  {
    ATerm j_30 = t;
    int k_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_40 = NULL,o_40 = NULL;
        t = term_n_13;
        n_40 = t;
        t = term_c_30;
        o_40 = t;
        t = term_f_30;
        t = n_10(n_40, o_40, t);
        LocalPopChoice(k_30);
      }
    else
      {
        t = j_30;
        t = (ATerm) ATempty;
      }
  }
  j_40 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, j_40), g_40), d_40), i_40);
  t = concat_0_0(t);
  return(t);
}
ATerm parse_module_0_0 (ATerm t)
{
  ATerm y_40 = NULL,z_40 = NULL,a_41 = NULL;
  y_40 = t;
  if(match_cons(t, sym__2))
    {
      z_40 = ATgetArgument(t, 0);
      a_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_40;
  if(match_string(t, "rtree"))
    {
      ATerm l_30 = t;
      int m_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = b_41(z_40, a_41, y_40, t);
          LocalPopChoice(m_30);
        }
      else
        {
          t = l_30;
          t = c_41(a_41, y_40, t);
        }
    }
  else
    {
      t = b_41(z_40, a_41, y_40, t);
    }
  return(t);
}
ATerm debug_1_0 (ATerm k_124 (ATerm), ATerm t)
{
  ATerm e_41 = NULL,f_41 = NULL,g_41 = NULL,h_41 = NULL;
  e_41 = t;
  t = k_124(t);
  f_41 = t;
  t = term_e_25;
  g_41 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, e_41), f_41);
  h_41 = t;
  t = SSL_printnl(g_41, h_41);
  t = e_41;
  return(t);
}
ATerm if_verbose3_1_0 (ATerm d_142 (ATerm), ATerm t)
{
  ATerm j_41 = NULL;
  j_41 = t;
  {
    ATerm q_30 = t;
    int r_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_41 = NULL,m_41 = NULL,n_41 = NULL;
        t = term_n_13;
        m_41 = t;
        t = term_x_16;
        n_41 = t;
        t = term_d_17;
        t = n_10(m_41, n_41, t);
        l_41 = t;
        t = (ATerm) ATmakeAppl(sym__2, l_41, term_b_18);
        t = geq_0_0(t);
        t = j_41;
        t = d_142(t);
        LocalPopChoice(r_30);
      }
    else
      {
        t = q_30;
        t = j_41;
      }
  }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm e_125 (ATerm), ATerm t)
{
  ATerm p_41 = NULL;
  static ATerm d_3 (ATerm t);
  static ATerm d_3 (ATerm t)
  {
    t = e_125(t);
    if(((p_41 != NULL) && (p_41 != t)))
      _fail(t);
    else
      p_41 = t;
    return(t);
  }
  t = fetch_1_0(d_3, t);
  t = not_null(p_41);
  return(t);
}
static ATerm f_10 (ATerm a_58, ATerm b_58, ATerm t)
{
  t = SSL_access(a_58, b_58);
  return(t);
}
ATerm is_relpath_0_0 (ATerm t)
{
  ATerm s_30 = t;
  if((PushChoice() == 0))
    {
      ATerm q_41 = NULL;
      q_41 = t;
      t = SSL_explode_string(q_41);
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
      t = q_41;
      PopChoice();
      _fail(t);
    }
  else
    {
      t = s_30;
    }
  return(t);
}
static ATerm m_9 (ATerm e_113 (ATerm), ATerm h_24, ATerm g_24, ATerm t)
{
  t = e_113(t);
  {
    ATerm v_30 = t;
    int w_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm g_3 (ATerm t);
        static ATerm g_3 (ATerm t)
        {
          ATerm z_41 = NULL;
          z_41 = t;
          {
            ATerm x_30 = t;
            int y_30 = stack_ptr;
            if((PushChoice() == 0))
              {
                static ATerm m_3 (ATerm t);
                static ATerm m_3 (ATerm t)
                {
                  ATerm b_42 = NULL,c_42 = NULL,d_42 = NULL,e_42 = NULL,f_42 = NULL;
                  c_42 = t;
                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, c_42), term_u_15), h_24), term_y_12), z_41);
                  f_42 = t;
                  t = SSL_concat_strings(f_42);
                  d_42 = t;
                  t = (ATerm) ATinsert(ATempty, term_v_12);
                  e_42 = t;
                  t = (ATerm) ATmakeAppl(sym__2, d_42, (ATerm) ATinsert(ATempty, term_v_12));
                  t = f_10(d_42, e_42, t);
                  b_42 = t;
                  t = (ATerm) ATmakeAppl(sym__2, c_42, (ATerm) ATmakeAppl(sym_FILE_1, b_42));
                  return(t);
                }
                t = h_24;
                t = is_relpath_0_0(t);
                t = g_24;
                t = fetch_elem_1_0(m_3, t);
                LocalPopChoice(y_30);
              }
            else
              {
                t = x_30;
                {
                  static ATerm n_3 (ATerm t);
                  static ATerm n_3 (ATerm t)
                  {
                    ATerm y_17 = NULL,c_18 = NULL,d_18 = NULL,e_18 = NULL,i_18 = NULL;
                    c_18 = t;
                    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, c_18), term_u_15), h_24);
                    i_18 = t;
                    t = SSL_concat_strings(i_18);
                    d_18 = t;
                    t = (ATerm) ATinsert(ATempty, term_v_12);
                    e_18 = t;
                    t = (ATerm) ATmakeAppl(sym__2, d_18, (ATerm) ATinsert(ATempty, term_v_12));
                    t = f_10(d_18, e_18, t);
                    y_17 = t;
                    t = (ATerm) ATmakeAppl(sym__2, c_18, (ATerm) ATmakeAppl(sym_FILE_1, y_17));
                    return(t);
                  }
                  t = SSL_explode_string(h_24);
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
                  t = g_24;
                  t = fetch_elem_1_0(n_3, t);
                }
              }
          }
          return(t);
        }
        t = fetch_elem_1_0(g_3, t);
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
                ATerm g_42 = NULL,h_42 = NULL,i_42 = NULL,l_42 = NULL,m_42 = NULL,q_42 = NULL;
                g_42 = t;
                t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, g_42), term_u_15), h_24);
                q_42 = t;
                t = SSL_concat_strings(q_42);
                h_42 = t;
                t = term_g_27;
                l_42 = t;
                t = (ATerm) ATmakeAppl(sym_Tool_1, h_42);
                m_42 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_g_27, (ATerm) ATmakeAppl(sym_Tool_1, h_42));
                t = n_10(l_42, m_42, t);
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    ATerm g_31 = ATgetFirst((ATermList) t);
                    if(match_cons(g_31, sym__2))
                      {
                        ATerm i_31 = ATgetArgument(g_31, 0);
                        i_42 = ATgetArgument(g_31, 1);
                      }
                    else
                      _fail(t);
                    {
                      ATerm h_31 = (ATerm) ATgetNext((ATermList) t);
                    }
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym__2, g_42, (ATerm) ATmakeAppl(sym_FILE_1, i_42));
                return(t);
              }
              t = g_24;
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
                    ATerm r_42 = NULL,u_42 = NULL;
                    t = term_n_13;
                    r_42 = t;
                    t = term_l_31;
                    u_42 = t;
                    t = term_m_31;
                    t = n_10(r_42, u_42, t);
                    LocalPopChoice(k_31);
                    {
                      ATerm v_42 = NULL,y_42 = NULL,g_43 = NULL,h_43 = NULL,i_43 = NULL;
                      v_42 = t;
                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_o_31), h_24), term_n_31);
                      i_43 = t;
                      t = SSL_concat_strings(i_43);
                      y_42 = t;
                      t = term_e_25;
                      g_43 = t;
                      t = (ATerm) ATinsert(ATempty, y_42);
                      h_43 = t;
                      t = SSL_printnl(g_43, h_43);
                      t = v_42;
                      _fail(t);
                    }
                  }
                else
                  {
                    t = j_31;
                    {
                      ATerm j_43 = NULL,k_43 = NULL,n_43 = NULL;
                      t = term_e_25;
                      k_43 = t;
                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_o_31), h_24), term_n_31);
                      n_43 = t;
                      t = SSL_printnl(k_43, n_43);
                      t = term_q_16;
                      j_43 = t;
                      t = SSL_exit(j_43);
                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_o_31), h_24), term_n_31);
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
ATerm get_module_1_0 (ATerm d_113 (ATerm), ATerm t)
{
  ATerm x_43 = NULL,y_43 = NULL,z_43 = NULL,a_44 = NULL;
  t = basename_1_0(_id, t);
  z_43 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_o_26), term_v_31), term_s_31), term_r_31);
  a_44 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_43, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_o_26), term_v_31), term_s_31), term_r_31));
  t = m_9(d_113, z_43, a_44, t);
  if(match_cons(t, sym__2))
    {
      ATerm z_31 = ATgetArgument(t, 0);
      ATerm a_32 = ATgetArgument(t, 1);
      if(match_cons(a_32, sym_FILE_1))
        {
          x_43 = ATgetArgument(a_32, 0);
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
      ATerm c_44 = NULL;
      c_44 = t;
      t = x_43;
      t = debug_1_0(f_4, t);
      t = c_44;
      return(t);
    }
    t = if_verbose3_1_0(z_3, t);
  }
  t = parse_module_0_0(t);
  y_43 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_43, y_43);
  return(t);
}
static ATerm o_9 (ATerm g_129 (ATerm), ATerm h_129 (ATerm), ATerm u_48, ATerm t_48, ATerm t)
{
  t = h_129(t);
  {
    static ATerm g_4 (ATerm t);
    static ATerm g_4 (ATerm t)
    {
      ATerm d_44 = NULL;
      d_44 = t;
      t = (ATerm) ATmakeAppl(sym__2, u_48, d_44);
      t = g_129(t);
      return(t);
    }
    t = fetch_1_0(g_4, t);
  }
  t = t_48;
  return(t);
}
static ATerm p_9 (ATerm y_128 (ATerm), ATerm o_48, ATerm n_48, ATerm t)
{
  static ATerm z_44 (ATerm t);
  static ATerm z_44 (ATerm t)
  {
    ATerm u_44 = NULL,v_44 = NULL,w_44 = NULL;
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
            w_44 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm d_32 = t;
          int e_32 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = u_44;
              {
                static ATerm j_4 (ATerm t);
                static ATerm j_4 (ATerm t)
                {
                  t = n_48;
                  return(t);
                }
                t = o_9(y_128, j_4, v_44, w_44, t);
              }
              t = z_44(t);
              LocalPopChoice(e_32);
            }
          else
            {
              t = d_32;
              {
                ATerm s_18 = NULL,v_18 = NULL,f_5 = NULL;
                t = SSLgetAnnotations(u_44);
                s_18 = t;
                t = w_44;
                t = z_44(t);
                v_18 = t;
                t = (ATerm) ATinsert(CheckATermList(v_18), v_44);
                f_5 = t;
                t = SSLsetAnnotations(f_5, s_18);
              }
            }
        }
      }
    return(t);
  }
  t = o_48;
  t = z_44(t);
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
  ATerm o_45 = NULL,p_45 = NULL,u_45 = NULL,v_45 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm h_32 = ATgetArgument(t, 0);
      if(((ATgetType(h_32) == AT_LIST) && !(ATisEmpty(h_32))))
        {
          o_45 = ATgetFirst((ATermList) h_32);
          p_45 = (ATerm) ATgetNext((ATermList) h_32);
        }
      else
        _fail(t);
      {
        ATerm i_32 = ATgetArgument(t, 1);
        if(((ATgetType(i_32) == AT_LIST) && !(ATisEmpty(i_32))))
          {
            u_45 = ATgetFirst((ATermList) i_32);
            v_45 = (ATerm) ATgetNext((ATermList) i_32);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, o_45, u_45), (ATerm) ATmakeAppl(sym__2, p_45, v_45));
  return(t);
}
static ATerm n_4 (ATerm t)
{
  ATerm w_45 = NULL,x_45 = NULL;
  if(match_cons(t, sym__2))
    {
      w_45 = ATgetArgument(t, 0);
      x_45 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(x_45), w_45);
  return(t);
}
static ATerm u_9 (ATerm a_837, ATerm f_837, ATerm g_83, ATerm t)
{
  ATerm g_45 = NULL,h_45 = NULL,j_45 = NULL,m_45 = NULL;
  t = SSL_explode_term(f_837);
  if(match_cons(t, sym__2))
    {
      g_45 = ATgetArgument(t, 0);
      j_45 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(a_837);
  if(match_cons(t, sym__2))
    {
      if((g_45 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      h_45 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, h_45, j_45);
  t = genzip_4_0(l_4, m_4, n_4, _id, t);
  m_45 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_45, g_83);
  t = conc_0_0(t);
  return(t);
}
static ATerm p_4 (ATerm t)
{
  ATerm f_46 = NULL;
  f_46 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, f_46);
  return(t);
}
static ATerm q_4 (ATerm t)
{
  ATerm g_46 = NULL,h_46 = NULL,i_46 = NULL,j_46 = NULL,h_5 = NULL;
  j_46 = t;
  if(match_cons(t, sym__2))
    {
      h_46 = ATgetArgument(t, 0);
      i_46 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_46);
  g_46 = t;
  t = i_46;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, h_46, i_46);
  h_5 = t;
  t = SSLsetAnnotations(h_5, g_46);
  return(t);
}
static ATerm s_4 (ATerm t)
{
  ATerm r_47 = NULL,s_47 = NULL,t_47 = NULL,u_47 = NULL,v_47 = NULL;
  r_47 = t;
  if(match_cons(t, sym__2))
    {
      s_47 = ATgetArgument(t, 0);
      t_47 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_47;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_47 = ATgetFirst((ATermList) t);
      v_47 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm j_32 = t;
        int k_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = h_48(s_47, t_47, r_47, t);
            LocalPopChoice(k_32);
          }
        else
          {
            t = j_32;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(s_47), u_47), v_47);
          }
      }
    }
  else
    {
      t = h_48(s_47, t_47, r_47, t);
    }
  return(t);
}
static ATerm h_48 (ATerm k_46, ATerm l_46, ATerm m_46, ATerm t)
{
  ATerm n_46 = NULL,q_46 = NULL,i_5 = NULL,t_46 = NULL,v_46 = NULL,x_46 = NULL,y_46 = NULL;
  t = SSLgetAnnotations(m_46);
  n_46 = t;
  t = l_46;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_46 = ATgetFirst((ATermList) t);
      y_46 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = t_46;
  if(match_cons(t, sym__2))
    {
      v_46 = ATgetArgument(t, 0);
      x_46 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm n_32 = t;
    int o_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_46;
        if((v_46 != t))
          {
            _fail(t);
          }
        t = y_46;
        LocalPopChoice(o_32);
      }
    else
      {
        t = n_32;
        t = l_46;
        t = u_9(v_46, x_46, y_46, t);
      }
  }
  q_46 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_46, q_46);
  i_5 = t;
  t = SSLsetAnnotations(i_5, n_46);
  return(t);
}
static ATerm t_4 (ATerm t)
{
  ATerm g_48 = NULL;
  if(match_cons(t, sym__2))
    {
      g_48 = ATgetArgument(t, 0);
      if((g_48 != ATgetArgument(t, 1)))
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
        ATerm a_48 = NULL,b_48 = NULL,d_48 = NULL;
        a_48 = t;
        if(match_cons(t, sym__2))
          {
            b_48 = ATgetArgument(t, 0);
            d_48 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = a_48;
        t = p_9(t_4, b_48, d_48, t);
      }
    }
  return(t);
}
static ATerm w_9 (ATerm i_153 (ATerm), ATerm j_153 (ATerm), ATerm k_153 (ATerm), ATerm m_88, ATerm j_88, ATerm q_88, ATerm n_88, ATerm k_88, ATerm l_88, ATerm t)
{
  ATerm i_48 = NULL,j_48 = NULL,k_48 = NULL,l_48 = NULL,m_48 = NULL,r_48 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, m_88, n_88);
  t = i_153(t);
  i_48 = t;
  t = j_153(t);
  j_48 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_48, q_88);
  t = diff_0_0(t);
  k_48 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_48, j_88);
  t = conc_0_0(t);
  l_48 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_48, q_88);
  t = conc_0_0(t);
  m_48 = t;
  t = (ATerm) ATmakeAppl(sym__3, m_88, i_48, k_88);
  t = k_153(t);
  r_48 = t;
  t = (ATerm) ATmakeAppl(sym__5, l_48, m_48, n_88, r_48, l_88);
  return(t);
}
ATerm GnNext_3_0 (ATerm i_153 (ATerm), ATerm j_153 (ATerm), ATerm k_153 (ATerm), ATerm t)
{
  ATerm w_48 = NULL,x_48 = NULL,y_48 = NULL,z_48 = NULL,a_49 = NULL,b_49 = NULL;
  if(match_cons(t, sym__5))
    {
      ATerm s_32 = ATgetArgument(t, 0);
      if(((ATgetType(s_32) == AT_LIST) && !(ATisEmpty(s_32))))
        {
          w_48 = ATgetFirst((ATermList) s_32);
          x_48 = (ATerm) ATgetNext((ATermList) s_32);
        }
      else
        _fail(t);
      y_48 = ATgetArgument(t, 1);
      z_48 = ATgetArgument(t, 2);
      a_49 = ATgetArgument(t, 3);
      b_49 = ATgetArgument(t, 4);
    }
  else
    _fail(t);
  t = w_9(i_153, j_153, k_153, w_48, x_48, y_48, z_48, a_49, b_49, t);
  return(t);
}
ATerm while_not_2_0 (ATerm a_118 (ATerm), ATerm b_118 (ATerm), ATerm t)
{
  static ATerm d_49 (ATerm t);
  static ATerm d_49 (ATerm t)
  {
    ATerm t_32 = t;
    int v_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_118(t);
        LocalPopChoice(v_32);
      }
    else
      {
        t = t_32;
        t = b_118(t);
        t = d_49(t);
      }
    return(t);
  }
  t = d_49(t);
  return(t);
}
ATerm for_3_0 (ATerm d_118 (ATerm), ATerm e_118 (ATerm), ATerm f_118 (ATerm), ATerm t)
{
  t = d_118(t);
  t = while_not_2_0(e_118, f_118, t);
  return(t);
}
static ATerm u_4 (ATerm t)
{
  ATerm i_49 = NULL,k_49 = NULL,m_49 = NULL;
  if(match_cons(t, sym__3))
    {
      i_49 = ATgetArgument(t, 0);
      k_49 = ATgetArgument(t, 1);
      m_49 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__5, i_49, i_49, k_49, m_49, (ATerm) ATempty);
  return(t);
}
static ATerm v_4 (ATerm t)
{
  ATerm p_49 = NULL,s_49 = NULL;
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
      p_49 = ATgetArgument(t, 3);
      s_49 = ATgetArgument(t, 4);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, p_49, s_49);
  return(t);
}
ATerm graph_nodes_roots_3_0 (ATerm f_153 (ATerm), ATerm g_153 (ATerm), ATerm h_153 (ATerm), ATerm t)
{
  ATerm h_49 = NULL;
  static ATerm w_4 (ATerm t);
  static ATerm w_4 (ATerm t)
  {
    ATerm z_32 = t;
    int e_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = GnNext_3_0(f_153, g_153, h_153, t);
        LocalPopChoice(e_33);
      }
    else
      {
        t = z_32;
        {
          ATerm w_49 = NULL,y_49 = NULL,a_50 = NULL,b_50 = NULL,f_50 = NULL,g_50 = NULL,h_50 = NULL;
          if(match_cons(t, sym__5))
            {
              w_49 = ATgetArgument(t, 0);
              b_50 = ATgetArgument(t, 1);
              f_50 = ATgetArgument(t, 2);
              g_50 = ATgetArgument(t, 3);
              h_50 = ATgetArgument(t, 4);
            }
          else
            _fail(t);
          t = w_49;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              y_49 = ATgetFirst((ATermList) t);
              a_50 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__5, a_50, b_50, f_50, g_50, (ATerm) ATinsert(CheckATermList(h_50), y_49));
        }
      }
    return(t);
  }
  t = for_3_0(u_4, v_4, w_4, t);
  if(match_cons(t, sym__2))
    {
      h_49 = ATgetArgument(t, 0);
      {
        ATerm f_33 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = h_49;
  return(t);
}
ATerm filter_1_0 (ATerm v_132 (ATerm), ATerm t)
{
  ATerm g_51 = NULL,h_51 = NULL,i_51 = NULL;
  g_51 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = g_51;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_51 = ATgetFirst((ATermList) t);
          i_51 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm h_33 = t;
        int i_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_19 = NULL,q_19 = NULL,r_19 = NULL,n_5 = NULL;
            t = SSLgetAnnotations(g_51);
            i_19 = t;
            t = h_51;
            t = v_132(t);
            q_19 = t;
            t = i_51;
            t = filter_1_0(v_132, t);
            r_19 = t;
            t = (ATerm) ATinsert(CheckATermList(r_19), q_19);
            n_5 = t;
            t = SSLsetAnnotations(n_5, i_19);
            LocalPopChoice(i_33);
          }
        else
          {
            t = h_33;
            t = i_51;
            t = filter_1_0(v_132, t);
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
  ATerm b_52 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm k_33 = ATgetArgument(t, 0);
      ATerm r_33 = ATgetArgument(t, 1);
      if(match_cons(r_33, sym_Specification_1))
        {
          b_52 = ATgetArgument(r_33, 0);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  t = z_8(b_52, t);
  return(t);
}
static ATerm d_5 (ATerm t)
{
  ATerm g_52 = NULL,j_52 = NULL;
  if(match_cons(t, sym__3))
    {
      ATerm s_33 = ATgetArgument(t, 0);
      g_52 = ATgetArgument(t, 1);
      j_52 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(j_52), g_52);
  return(t);
}
static ATerm j_5 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_u_33;
  return(t);
}
static ATerm k_5 (ATerm t)
{
  ATerm l_52 = NULL,m_52 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      l_52 = ATgetFirst((ATermList) t);
      m_52 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, l_52, m_52);
  return(t);
}
static ATerm l_5 (ATerm t)
{
  ATerm n_52 = NULL,o_52 = NULL,p_52 = NULL,r_52 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm b_34 = ATgetArgument(t, 0);
      if(match_cons(b_34, sym__2))
        {
          n_52 = ATgetArgument(b_34, 0);
          o_52 = ATgetArgument(b_34, 1);
        }
      else
        _fail(t);
      {
        ATerm f_34 = ATgetArgument(t, 1);
        if(match_cons(f_34, sym__2))
          {
            p_52 = ATgetArgument(f_34, 0);
            r_52 = ATgetArgument(f_34, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(p_52), n_52), (ATerm) ATinsert(CheckATermList(r_52), o_52));
  return(t);
}
static ATerm z_9 (ATerm x_23, ATerm t)
{
  ATerm n_51 = NULL,o_51 = NULL,q_51 = NULL,t_51 = NULL,u_51 = NULL,v_51 = NULL,q_5 = NULL;
  ATerm g_34 = t;
  int h_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_51 = NULL,y_51 = NULL;
      t = term_n_13;
      w_51 = t;
      t = term_c_30;
      y_51 = t;
      t = term_f_30;
      t = n_10(w_51, y_51, t);
      t = filter_1_0(x_4, t);
      LocalPopChoice(h_34);
    }
  else
    {
      t = g_34;
      t = (ATerm) ATempty;
    }
  n_51 = t;
  t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATinsert(ATempty, x_23), term_b_15, (ATerm) ATempty);
  {
    static ATerm z_4 (ATerm t);
    static ATerm z_4 (ATerm t)
    {
      ATerm z_51 = NULL,a_52 = NULL;
      static ATerm g_5 (ATerm t);
      static ATerm g_5 (ATerm t)
      {
        t = (ATerm) ATinsert(CheckATermList(n_51), term_u_15);
        return(t);
      }
      a_52 = t;
      t = SSL_explode_term(a_52);
      if(match_cons(t, sym__2))
        {
          ATerm i_34 = ATgetArgument(t, 0);
          if((ATgetSymbol((ATermAppl) i_34) != ATmakeSymbol("", 0, ATtrue)))
            _fail(t);
          {
            ATerm j_34 = ATgetArgument(t, 1);
            if(((ATgetType(j_34) == AT_LIST) && !(ATisEmpty(j_34))))
              {
                z_51 = ATgetFirst((ATermList) j_34);
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
      t = z_51;
      t = get_module_1_0(g_5, t);
      return(t);
    }
    t = graph_nodes_roots_3_0(z_4, c_5, d_5, t);
  }
  t = genzip_4_0(j_5, k_5, l_5, _id, t);
  v_51 = t;
  if(match_cons(t, sym__2))
    {
      q_51 = ATgetArgument(t, 0);
      t_51 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_51);
  o_51 = t;
  t = t_51;
  t = flatten_stratego_0_0(t);
  u_51 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_51, u_51);
  q_5 = t;
  t = SSLsetAnnotations(q_5, o_51);
  return(t);
}
static ATerm h_10 (ATerm b_64, ATerm c_64, ATerm t)
{
  ATerm w_52 = NULL,a_53 = NULL;
  a_53 = t;
  {
    ATerm l_34 = t;
    int m_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, b_64, c_64);
        t = n_10(b_64, c_64, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm o_34 = ATgetFirst((ATermList) t);
            w_52 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(m_34);
        {
          ATerm b_53 = NULL;
          t = (ATerm) ATmakeAppl(sym__3, b_64, c_64, w_52);
          t = lookup_table_0_1(b_64, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              b_53 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = r_10(c_64, w_52, b_53, t);
          t = (ATerm) ATmakeAppl(sym__3, b_64, c_64, w_52);
        }
      }
    else
      {
        t = l_34;
        {
          ATerm e_53 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, b_64, c_64);
          t = lookup_table_0_1(b_64, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              e_53 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = k_10(c_64, e_53, t);
          t = (ATerm) ATmakeAppl(sym__2, b_64, c_64);
        }
      }
  }
  t = a_53;
  return(t);
}
ATerm end_scope_1_0 (ATerm i_113 (ATerm), ATerm t)
{
  ATerm i_53 = NULL,k_53 = NULL,l_53 = NULL,m_53 = NULL,n_53 = NULL,o_53 = NULL,p_53 = NULL;
  m_53 = t;
  t = i_113(t);
  l_53 = t;
  {
    ATerm p_34 = t;
    int q_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_53 = NULL;
        t = term_h_14;
        s_53 = t;
        t = (ATerm) ATmakeAppl(sym__2, l_53, term_h_14);
        t = n_10(l_53, s_53, t);
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
      k_53 = ATgetFirst((ATermList) t);
      i_53 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, l_53, term_h_14, i_53);
  t = lookup_table_0_1(l_53, t);
  p_53 = t;
  t = term_h_14;
  n_53 = t;
  t = p_53;
  if(match_cons(t, sym_Hashtable_1))
    {
      o_53 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_10(n_53, i_53, o_53, t);
  t = k_53;
  {
    static ATerm m_5 (ATerm t);
    static ATerm m_5 (ATerm t)
    {
      ATerm t_53 = NULL;
      t_53 = t;
      t = (ATerm) ATmakeAppl(sym__2, l_53, t_53);
      t = h_10(l_53, t_53, t);
      return(t);
    }
    t = map_1_0(m_5, t);
  }
  t = m_53;
  return(t);
}
ATerm restore_always_2_0 (ATerm f_117 (ATerm), ATerm g_117 (ATerm), ATerm t)
{
  ATerm t_34 = t;
  int u_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = f_117(t);
      t = g_117(t);
      LocalPopChoice(u_34);
    }
  else
    {
      t = t_34;
      t = g_117(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm h_113 (ATerm), ATerm t)
{
  ATerm x_53 = NULL,z_53 = NULL,a_54 = NULL,b_54 = NULL,e_54 = NULL,f_54 = NULL,g_54 = NULL;
  z_53 = t;
  t = h_113(t);
  x_53 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_53, term_h_14);
  {
    ATerm v_34 = t;
    int x_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_54 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm z_34 = ATgetArgument(t, 0);
            ATerm a_35 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_h_14;
        l_54 = t;
        t = (ATerm) ATmakeAppl(sym__2, x_53, term_h_14);
        t = n_10(x_53, l_54, t);
        LocalPopChoice(x_34);
      }
    else
      {
        t = v_34;
        t = (ATerm) ATempty;
      }
  }
  a_54 = t;
  t = (ATerm) ATmakeAppl(sym__3, x_53, term_h_14, (ATerm) ATinsert(CheckATermList(a_54), (ATerm) ATempty));
  t = lookup_table_0_1(x_53, t);
  g_54 = t;
  t = term_h_14;
  b_54 = t;
  t = (ATerm) ATinsert(CheckATermList(a_54), (ATerm) ATempty);
  e_54 = t;
  t = g_54;
  if(match_cons(t, sym_Hashtable_1))
    {
      f_54 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_10(b_54, e_54, f_54, t);
  t = z_53;
  return(t);
}
static ATerm p_5 (ATerm t)
{
  t = term_z_14;
  return(t);
}
static ATerm u_5 (ATerm t)
{
  ATerm x_54 = NULL;
  x_54 = t;
  {
    ATerm d_35 = t;
    int e_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(x_54);
        LocalPopChoice(e_35);
      }
    else
      {
        t = d_35;
        t = x_54;
      }
  }
  return(t);
}
static ATerm w_5 (ATerm t)
{
  t = term_z_14;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm q_151 (ATerm), ATerm t)
{
  ATerm o_54 = NULL;
  static ATerm s_5 (ATerm t);
  static ATerm s_5 (ATerm t)
  {
    ATerm p_54 = NULL;
    p_54 = t;
    {
      ATerm f_35 = t;
      int h_35 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm q_54 = NULL,t_54 = NULL;
          t = term_z_14;
          q_54 = t;
          t = term_h_14;
          t_54 = t;
          t = term_i_35;
          t = n_10(q_54, t_54, t);
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
        if(((o_54 != NULL) && (o_54 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          o_54 = ATgetFirst((ATermList) t);
        {
          ATerm n_35 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    t = o_54;
    t = map_1_0(u_5, t);
    t = p_54;
    t = end_scope_1_0(w_5, t);
    return(t);
  }
  t = begin_scope_1_0(p_5, t);
  t = restore_always_2_0(q_151, s_5, t);
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm g_55 = NULL,i_55 = NULL;
  t = term_n_13;
  g_55 = t;
  t = term_o_35;
  i_55 = t;
  t = term_y_35;
  t = n_10(g_55, i_55, t);
  t = echo_0_0(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm p_55 = NULL,q_55 = NULL,r_55 = NULL;
  p_55 = t;
  {
    ATerm z_35 = t;
    int d_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = p_55;
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
            t = p_55;
          }
        LocalPopChoice(d_36);
      }
    else
      {
        t = z_35;
        t = (ATerm) ATinsert(ATempty, p_55);
      }
  }
  q_55 = t;
  t = term_q_13;
  r_55 = t;
  t = SSL_printnl(r_55, q_55);
  t = p_55;
  return(t);
}
ATerm reverse_acc_2_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm y_55 = NULL,z_55 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      y_55 = ATgetFirst((ATermList) t);
      z_55 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm f_56 = NULL,g_56 = NULL;
        static ATerm z_5 (ATerm t);
        static ATerm z_5 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(f_56)), not_null(g_56));
          return(t);
        }
        t = z_55;
        t = l_0(t);
        if(((f_56 != NULL) && (f_56 != t)))
          _fail(t);
        else
          f_56 = t;
        t = y_55;
        t = j_0(t);
        if(((g_56 != NULL) && (g_56 != t)))
          _fail(t);
        else
          g_56 = t;
        t = z_55;
        t = reverse_acc_2_0(j_0, z_5, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_b_15;
      t = l_0(t);
    }
  return(t);
}
static ATerm d_6 (ATerm t)
{
  ATerm v_56 = NULL,w_56 = NULL,x_56 = NULL,t_5 = NULL;
  x_56 = t;
  if(match_cons(t, sym_Program_1))
    {
      w_56 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_56);
  v_56 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, w_56);
  t_5 = t;
  t = SSLsetAnnotations(t_5, v_56);
  return(t);
}
static ATerm n_6 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm p_6 (ATerm t)
{
  ATerm c_57 = NULL;
  c_57 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, c_57), term_u_36);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_2_0 (ATerm q_146 (ATerm), ATerm r_146 (ATerm), ATerm t)
{
  ATerm o_56 = NULL,p_56 = NULL;
  ATerm v_36 = t;
  int c_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_56 = NULL,u_56 = NULL;
      t = term_n_13;
      s_56 = t;
      t = term_o_35;
      u_56 = t;
      t = term_y_35;
      t = n_10(s_56, u_56, t);
      LocalPopChoice(c_37);
    }
  else
    {
      t = v_36;
      t = fetch_1_0(d_6, t);
    }
  {
    ATerm d_37 = t;
    int e_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = q_146(t);
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
  o_56 = t;
  t = term_o_37;
  p_56 = t;
  t = term_p_37;
  t = n_10(o_56, p_56, t);
  t = reverse_acc_2_0(_id, n_6, t);
  t = map_1_0(p_6, t);
  {
    ATerm t_37 = t;
    int u_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_57 = NULL;
        t = r_146(t);
        d_57 = t;
        t = (ATerm) ATinsert(CheckATermList(d_57), term_v_37);
        t = echo_0_0(t);
        LocalPopChoice(u_37);
      }
    else
      {
        t = t_37;
      }
  }
  return(t);
}
static ATerm q_6 (ATerm t)
{
  ATerm n_57 = NULL,o_57 = NULL,q_57 = NULL,v_5 = NULL;
  q_57 = t;
  if(match_cons(t, sym_Program_1))
    {
      o_57 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_57);
  n_57 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, o_57);
  v_5 = t;
  t = SSLsetAnnotations(v_5, n_57);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm j_57 = NULL;
  j_57 = t;
  {
    ATerm w_37 = t;
    int z_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_57 = NULL,m_57 = NULL;
        t = term_n_13;
        l_57 = t;
        t = term_o_35;
        m_57 = t;
        t = term_y_35;
        t = n_10(l_57, m_57, t);
        LocalPopChoice(z_37);
      }
    else
      {
        t = w_37;
        t = fetch_1_0(q_6, t);
      }
  }
  t = j_57;
  t = default_system_usage_2_0(_fail, _fail, t);
  return(t);
}
static ATerm s_6 (ATerm t)
{
  ATerm t_57 = NULL;
  t_57 = t;
  if(match_string(t, "-k"))
    {
      t = t_57;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = t_57;
    }
  return(t);
}
static ATerm v_6 (ATerm t)
{
  ATerm v_57 = NULL,w_57 = NULL,x_57 = NULL;
  v_57 = t;
  t = SSL_string_to_int(v_57);
  w_57 = t;
  t = term_m_16;
  x_57 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_16, w_57);
  t = q_10(x_57, w_57, t);
  t = v_57;
  return(t);
}
static ATerm x_6 (ATerm t)
{
  t = term_d_38;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(s_6, v_6, x_6, t);
  return(t);
}
static ATerm y_6 (ATerm t)
{
  ATerm z_57 = NULL;
  z_57 = t;
  if(match_string(t, "-S"))
    {
      t = z_57;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = z_57;
    }
  return(t);
}
static ATerm z_6 (ATerm t)
{
  ATerm c_58 = NULL,d_58 = NULL;
  t = term_x_16;
  c_58 = t;
  t = term_i_38;
  d_58 = t;
  t = term_l_38;
  t = q_10(c_58, d_58, t);
  t = term_m_38;
  return(t);
}
static ATerm b_7 (ATerm t)
{
  t = term_n_38;
  return(t);
}
static ATerm c_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm i_7 (ATerm t)
{
  ATerm e_58 = NULL,f_58 = NULL,s_58 = NULL;
  e_58 = t;
  t = SSL_string_to_int(e_58);
  f_58 = t;
  t = term_x_16;
  s_58 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_16, f_58);
  t = q_10(s_58, f_58, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, e_58);
  return(t);
}
static ATerm l_7 (ATerm t)
{
  t = term_o_38;
  return(t);
}
static ATerm o_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm u_7 (ATerm t)
{
  ATerm v_58 = NULL,w_58 = NULL;
  t = term_p_38;
  v_58 = t;
  t = term_b_15;
  w_58 = t;
  t = term_q_38;
  t = q_10(v_58, w_58, t);
  t = term_r_38;
  return(t);
}
static ATerm v_7 (ATerm t)
{
  t = term_s_38;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm t_38 = t;
  int u_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(y_6, z_6, b_7, t);
      LocalPopChoice(u_38);
    }
  else
    {
      t = t_38;
      {
        ATerm y_38 = t;
        int z_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(c_7, i_7, l_7, t);
            LocalPopChoice(z_38);
          }
        else
          {
            t = y_38;
            t = Option_3_0(o_7, u_7, v_7, t);
          }
      }
    }
  return(t);
}
static ATerm q_10 (ATerm o_89, ATerm p_89, ATerm t)
{
  ATerm x_58 = NULL,y_58 = NULL;
  t = term_n_13;
  x_58 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_n_13, o_89, p_89);
  t = lookup_table_0_1(x_58, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      y_58 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_10(o_89, p_89, y_58, t);
  t = (ATerm) ATmakeAppl(sym__3, term_n_13, o_89, p_89);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm f_59 = NULL,g_59 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm h_59 = NULL,i_59 = NULL,k_59 = NULL;
      t = term_b_15;
      t = g_0(t);
      h_59 = t;
      t = term_h_37;
      i_59 = t;
      t = term_o_37;
      k_59 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_h_37, term_o_37, h_59);
      t = o_10(i_59, k_59, h_59, t);
      _fail(t);
    }
  else
    {
      ATerm q_59 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          f_59 = ATgetFirst((ATermList) t);
          g_59 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = f_59;
      t = d_0(t);
      t = term_b_15;
      t = f_0(t);
      q_59 = t;
      t = (ATerm) ATinsert(CheckATermList(g_59), q_59);
    }
  return(t);
}
static ATerm x_7 (ATerm t)
{
  ATerm s_59 = NULL;
  s_59 = t;
  if(match_string(t, "-o"))
    {
      t = s_59;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = s_59;
    }
  return(t);
}
static ATerm y_7 (ATerm t)
{
  ATerm t_59 = NULL,u_59 = NULL;
  t_59 = t;
  t = term_o_13;
  u_59 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_13, t_59);
  t = q_10(u_59, t_59, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, t_59);
  return(t);
}
static ATerm z_7 (ATerm t)
{
  t = term_b_39;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(x_7, y_7, z_7, t);
  return(t);
}
static ATerm a_8 (ATerm t)
{
  ATerm x_59 = NULL;
  x_59 = t;
  if(match_string(t, "-i"))
    {
      t = x_59;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = x_59;
    }
  return(t);
}
static ATerm d_8 (ATerm t)
{
  ATerm y_59 = NULL,z_59 = NULL;
  y_59 = t;
  t = term_a_29;
  z_59 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_29, y_59);
  t = q_10(z_59, y_59, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, y_59);
  return(t);
}
static ATerm e_8 (ATerm t)
{
  t = term_c_39;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(a_8, d_8, e_8, t);
  return(t);
}
static ATerm o_10 (ATerm w_63, ATerm x_63, ATerm v_63, ATerm t)
{
  ATerm b_60 = NULL,e_60 = NULL,f_60 = NULL,g_60 = NULL,h_60 = NULL;
  b_60 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_63, x_63);
  {
    ATerm e_39 = t;
    int f_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm g_39 = ATgetArgument(t, 0);
            ATerm h_39 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, w_63, x_63);
        t = n_10(w_63, x_63, t);
        LocalPopChoice(f_39);
      }
    else
      {
        t = e_39;
        t = (ATerm) ATempty;
      }
  }
  e_60 = t;
  t = (ATerm) ATmakeAppl(sym__3, w_63, x_63, (ATerm) ATinsert(CheckATermList(e_60), v_63));
  t = lookup_table_0_1(w_63, t);
  h_60 = t;
  t = (ATerm) ATinsert(CheckATermList(e_60), v_63);
  f_60 = t;
  t = h_60;
  if(match_cons(t, sym_Hashtable_1))
    {
      g_60 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_10(x_63, f_60, g_60, t);
  t = b_60;
  return(t);
}
ATerm ArgOption_3_0 (ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t)
{
  ATerm s_60 = NULL,t_60 = NULL,u_60 = NULL,v_60 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm y_60 = NULL,z_60 = NULL,a_61 = NULL;
      t = term_b_15;
      t = r_0(t);
      y_60 = t;
      t = term_h_37;
      z_60 = t;
      t = term_o_37;
      a_61 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_h_37, term_o_37, y_60);
      t = o_10(z_60, a_61, y_60, t);
      _fail(t);
    }
  else
    {
      ATerm i_61 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          s_60 = ATgetFirst((ATermList) t);
          t_60 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = t_60;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          u_60 = ATgetFirst((ATermList) t);
          v_60 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = s_60;
      t = o_0(t);
      t = u_60;
      t = p_0(t);
      i_61 = t;
      t = (ATerm) ATinsert(CheckATermList(v_60), i_61);
    }
  return(t);
}
ATerm at_end_1_0 (ATerm j_125 (ATerm), ATerm t)
{
  static ATerm x_62 (ATerm t);
  static ATerm x_62 (ATerm t)
  {
    ATerm r_62 = NULL,v_62 = NULL,w_62 = NULL;
    w_62 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        r_62 = ATgetFirst((ATermList) t);
        v_62 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm t_20 = NULL,x_20 = NULL,x_5 = NULL;
          t = SSLgetAnnotations(w_62);
          t_20 = t;
          t = v_62;
          t = x_62(t);
          x_20 = t;
          t = (ATerm) ATinsert(CheckATermList(x_20), r_62);
          x_5 = t;
          t = SSLsetAnnotations(x_5, t_20);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = w_62;
        t = j_125(t);
      }
    return(t);
  }
  t = x_62(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm l_61 = NULL,m_61 = NULL,n_61 = NULL;
  l_61 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = l_61;
    }
  else
    {
      static ATerm f_8 (ATerm t);
      static ATerm f_8 (ATerm t)
      {
        t = not_null(n_61);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_61 = ATgetFirst((ATermList) t);
          if(((n_61 != NULL) && (n_61 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            n_61 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = m_61;
      t = at_end_1_0(f_8, t);
    }
  return(t);
}
static ATerm s_63 (ATerm d_63, ATerm t)
{
  ATerm f_63 = NULL;
  t = SSL_explode_term(d_63);
  if(match_cons(t, sym__2))
    {
      ATerm i_39 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) i_39) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      f_63 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_63;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm i_63 = NULL,k_63 = NULL,m_63 = NULL;
  m_63 = t;
  if(match_cons(t, sym__2))
    {
      i_63 = ATgetArgument(t, 0);
      k_63 = ATgetArgument(t, 1);
      {
        ATerm j_39 = t;
        int l_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm g_8 (ATerm t);
            static ATerm g_8 (ATerm t)
            {
              t = k_63;
              return(t);
            }
            t = i_63;
            t = at_end_1_0(g_8, t);
            LocalPopChoice(l_39);
          }
        else
          {
            t = j_39;
            t = s_63(m_63, t);
          }
      }
    }
  else
    {
      t = s_63(m_63, t);
    }
  return(t);
}
static ATerm a_10 (ATerm v_89, ATerm w_89, ATerm t)
{
  ATerm t_63 = NULL,u_63 = NULL,y_63 = NULL,z_63 = NULL;
  t = v_89;
  {
    ATerm m_39 = t;
    int n_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_64 = NULL;
        t = term_n_13;
        e_64 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_n_13, v_89);
        t = n_10(e_64, v_89, t);
        LocalPopChoice(n_39);
      }
    else
      {
        t = m_39;
        t = (ATerm) ATempty;
      }
  }
  u_63 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_63, w_89);
  t = conc_0_0(t);
  t_63 = t;
  t = term_n_13;
  y_63 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_n_13, v_89, t_63);
  t = lookup_table_0_1(y_63, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      z_63 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_10(v_89, t_63, z_63, t);
  t = (ATerm) ATmakeAppl(sym__3, term_n_13, v_89, t_63);
  return(t);
}
static ATerm h_8 (ATerm t)
{
  ATerm i_64 = NULL;
  i_64 = t;
  if(match_string(t, "-I"))
    {
      t = i_64;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--Include", 0, ATtrue)))
        _fail(t);
      t = i_64;
    }
  return(t);
}
static ATerm k_8 (ATerm t)
{
  ATerm j_64 = NULL,k_64 = NULL,l_64 = NULL;
  j_64 = t;
  t = term_c_30;
  k_64 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, j_64), term_c_30);
  l_64 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_30, (ATerm) ATinsert(ATinsert(ATempty, j_64), term_c_30));
  t = a_10(k_64, l_64, t);
  t = term_b_15;
  return(t);
}
static ATerm l_8 (ATerm t)
{
  t = term_s_39;
  return(t);
}
static ATerm o_8 (ATerm t)
{
  ATerm m_64 = NULL;
  m_64 = t;
  if(match_string(t, "--nodep"))
    {
      t = m_64;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-nodep", 0, ATtrue)))
        _fail(t);
      t = m_64;
    }
  return(t);
}
static ATerm p_8 (ATerm t)
{
  ATerm n_64 = NULL,o_64 = NULL;
  t = term_s_15;
  n_64 = t;
  t = term_t_39;
  o_64 = t;
  t = term_u_39;
  t = q_10(n_64, o_64, t);
  t = term_b_15;
  return(t);
}
static ATerm s_8 (ATerm t)
{
  t = term_v_39;
  return(t);
}
static ATerm e_9 (ATerm t)
{
  ATerm p_64 = NULL;
  p_64 = t;
  if(match_string(t, "--dep"))
    {
      t = p_64;
    }
  else
    {
      if(match_string(t, "-d"))
        {
          t = p_64;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-dep", 0, ATtrue)))
            _fail(t);
          t = p_64;
        }
    }
  return(t);
}
static ATerm n_9 (ATerm t)
{
  ATerm q_64 = NULL,r_64 = NULL;
  q_64 = t;
  t = term_p_15;
  r_64 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_15, q_64);
  t = q_10(r_64, q_64, t);
  t = term_b_15;
  return(t);
}
static ATerm q_9 (ATerm t)
{
  t = term_w_39;
  return(t);
}
static ATerm r_9 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--imports", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm t_9 (ATerm t)
{
  ATerm s_64 = NULL,y_64 = NULL;
  t = term_x_39;
  s_64 = t;
  t = term_b_15;
  y_64 = t;
  t = term_e_40;
  t = q_10(s_64, y_64, t);
  t = term_b_15;
  return(t);
}
static ATerm v_9 (ATerm t)
{
  t = term_f_40;
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
  ATerm z_64 = NULL,a_65 = NULL;
  t = term_l_31;
  z_64 = t;
  t = term_b_15;
  a_65 = t;
  t = term_h_40;
  t = q_10(z_64, a_65, t);
  t = term_b_15;
  return(t);
}
static ATerm b_10 (ATerm t)
{
  t = term_u_40;
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
  ATerm b_65 = NULL,g_65 = NULL;
  t = term_x_29;
  b_65 = t;
  t = term_t_39;
  g_65 = t;
  t = term_d_41;
  t = q_10(b_65, g_65, t);
  t = term_b_15;
  return(t);
}
static ATerm m_10 (ATerm t)
{
  t = term_i_41;
  return(t);
}
ATerm pack_stratego_options_0_0 (ATerm t)
{
  ATerm k_41 = t;
  int o_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ArgOption_3_0(h_8, k_8, l_8, t);
      LocalPopChoice(o_41);
    }
  else
    {
      t = k_41;
      {
        ATerm r_41 = t;
        int s_41 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Option_3_0(o_8, p_8, s_8, t);
            LocalPopChoice(s_41);
          }
        else
          {
            t = r_41;
            {
              ATerm t_41 = t;
              int u_41 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = ArgOption_3_0(e_9, n_9, q_9, t);
                  LocalPopChoice(u_41);
                }
              else
                {
                  t = t_41;
                  {
                    ATerm v_41 = t;
                    int w_41 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Option_3_0(r_9, t_9, v_9, t);
                        LocalPopChoice(w_41);
                      }
                    else
                      {
                        t = v_41;
                        {
                          ATerm x_41 = t;
                          int y_41 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Option_3_0(x_9, y_9, b_10, t);
                              LocalPopChoice(y_41);
                            }
                          else
                            {
                              t = x_41;
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
  ATerm h_65 = NULL,m_65 = NULL,n_65 = NULL,o_65 = NULL;
  t = report_run_time_0_0(t);
  t = term_b_15;
  t = whoami_0_0(t);
  h_65 = t;
  t = term_e_25;
  n_65 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_a_42), h_65);
  o_65 = t;
  t = SSL_printnl(n_65, o_65);
  t = term_q_16;
  m_65 = t;
  t = SSL_exit(m_65);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm r_65 = NULL,s_65 = NULL;
  t = term_n_13;
  r_65 = t;
  t = term_o_35;
  s_65 = t;
  t = term_y_35;
  t = n_10(r_65, s_65, t);
  return(t);
}
static ATerm i_10 (ATerm f_62, ATerm g_62, ATerm t)
{
  ATerm s_42 = t;
  int w_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(f_62, g_62);
      LocalPopChoice(w_42);
    }
  else
    {
      t = s_42;
      t = SSL_addr(f_62, g_62);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm r_131 (ATerm), ATerm s_131 (ATerm), ATerm t)
{
  ATerm u_65 = NULL,v_65 = NULL,w_65 = NULL;
  u_65 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = u_65;
      t = r_131(t);
    }
  else
    {
      ATerm z_65 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_65 = ATgetFirst((ATermList) t);
          w_65 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = w_65;
      t = foldr_2_0(r_131, s_131, t);
      z_65 = t;
      t = (ATerm) ATmakeAppl(sym__2, v_65, z_65);
      t = s_131(t);
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
  ATerm n_21 = NULL,o_21 = NULL;
  if(match_cons(t, sym__2))
    {
      n_21 = ATgetArgument(t, 0);
      o_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_10(n_21, o_21, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm c_66 = NULL,f_21 = NULL,h_21 = NULL;
  t = times_0_0(t);
  h_21 = t;
  t = SSL_explode_term(h_21);
  if(match_cons(t, sym__2))
    {
      ATerm z_42 = ATgetArgument(t, 0);
      f_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_21;
  t = foldr_2_0(p_10, t_10, t);
  c_66 = t;
  t = SSL_TicksToSeconds(c_66);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm x_66 = NULL,y_66 = NULL,z_66 = NULL;
  x_66 = t;
  if(match_cons(t, sym__2))
    {
      y_66 = ATgetArgument(t, 0);
      z_66 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm a_43 = t;
    int b_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = z_66;
        if((y_66 != t))
          {
            _fail(t);
          }
        t = x_66;
        LocalPopChoice(b_43);
      }
    else
      {
        t = a_43;
        t = (ATerm) ATmakeAppl(sym__2, y_66, z_66);
        {
          ATerm c_43 = t;
          int d_43 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(y_66, z_66);
              LocalPopChoice(d_43);
            }
          else
            {
              t = c_43;
              t = SSL_gtr(y_66, z_66);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, y_66, z_66);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm b_142 (ATerm), ATerm t)
{
  ATerm j_67 = NULL;
  j_67 = t;
  {
    ATerm e_43 = t;
    int f_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_67 = NULL,m_67 = NULL,p_67 = NULL;
        t = term_n_13;
        m_67 = t;
        t = term_x_16;
        p_67 = t;
        t = term_d_17;
        t = n_10(m_67, p_67, t);
        l_67 = t;
        t = (ATerm) ATmakeAppl(sym__2, l_67, term_q_16);
        t = geq_0_0(t);
        t = j_67;
        t = b_142(t);
        LocalPopChoice(f_43);
      }
    else
      {
        t = e_43;
        t = j_67;
      }
  }
  return(t);
}
static ATerm u_10 (ATerm t)
{
  ATerm r_67 = NULL,s_67 = NULL,u_67 = NULL,v_67 = NULL;
  t = run_time_0_0(t);
  r_67 = t;
  t = term_b_15;
  t = whoami_0_0(t);
  s_67 = t;
  t = term_e_25;
  u_67 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_l_43), r_67), term_k_17), s_67);
  v_67 = t;
  t = SSL_printnl(u_67, v_67);
  t = (ATerm) ATmakeAppl(sym__2, term_e_25, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_l_43), r_67), term_k_17), s_67));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(u_10, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm w_67 = NULL;
  t = report_run_time_0_0(t);
  t = term_i_38;
  w_67 = t;
  t = SSL_exit(w_67);
  return(t);
}
static ATerm r_10 (ATerm l_68, ATerm m_68, ATerm n_68, ATerm t)
{
  ATerm x_67 = NULL;
  t = SSL_hashtable_put(n_68, l_68, m_68);
  x_67 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, x_67);
  return(t);
}
static ATerm s_10 (ATerm o_68, ATerm p_68, ATerm t)
{
  t = SSL_hashtable_get(p_68, o_68);
  return(t);
}
ATerm lookup_table_0_1 (ATerm i_65, ATerm t)
{
  ATerm g_68 = NULL;
  t = table_hashtable_0_0(t);
  g_68 = t;
  {
    ATerm m_43 = t;
    int o_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_22 = NULL;
        t = g_68;
        if(match_cons(t, sym_Hashtable_1))
          {
            o_22 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = s_10(i_65, o_22, t);
        LocalPopChoice(o_43);
      }
    else
      {
        t = m_43;
        {
          ATerm w_22 = NULL;
          t = i_65;
          t = table_create_0_0(t);
          t = g_68;
          if(match_cons(t, sym_Hashtable_1))
            {
              w_22 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = s_10(i_65, w_22, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm t_68, ATerm u_68, ATerm t)
{
  ATerm j_68 = NULL;
  t = SSL_hashtable_create(t_68, u_68);
  j_68 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, j_68);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm k_68 = NULL,w_68 = NULL,x_68 = NULL,z_68 = NULL,a_69 = NULL;
  k_68 = t;
  t = term_p_43;
  z_68 = t;
  t = term_q_43;
  a_69 = t;
  t = k_68;
  t = new_hashtable_0_2(z_68, a_69, t);
  w_68 = t;
  t = k_68;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      x_68 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_10(k_68, w_68, x_68, t);
  t = k_68;
  return(t);
}
static ATerm k_10 (ATerm q_68, ATerm r_68, ATerm t)
{
  ATerm b_69 = NULL;
  t = SSL_hashtable_remove(r_68, q_68);
  b_69 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, b_69);
  return(t);
}
static ATerm l_10 (ATerm v_68, ATerm t)
{
  ATerm c_69 = NULL;
  t = SSL_hashtable_destroy(v_68);
  c_69 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, c_69);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm d_69 = NULL;
  t = SSL_table_hashtable();
  d_69 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, d_69);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm e_69 = NULL,f_69 = NULL,g_69 = NULL,h_69 = NULL;
  e_69 = t;
  t = table_hashtable_0_0(t);
  f_69 = t;
  t = lookup_table_0_1(e_69, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      h_69 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = l_10(h_69, t);
  t = f_69;
  if(match_cons(t, sym_Hashtable_1))
    {
      g_69 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = k_10(e_69, g_69, t);
  t = e_69;
  return(t);
}
ATerm fetch_1_0 (ATerm c_125 (ATerm), ATerm t)
{
  static ATerm e_70 (ATerm t);
  static ATerm e_70 (ATerm t)
  {
    ATerm b_70 = NULL,c_70 = NULL,d_70 = NULL;
    b_70 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        c_70 = ATgetFirst((ATermList) t);
        d_70 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm r_43 = t;
      int s_43 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm d_23 = NULL,h_23 = NULL,a_6 = NULL;
          t = SSLgetAnnotations(b_70);
          d_23 = t;
          t = c_70;
          t = c_125(t);
          h_23 = t;
          t = (ATerm) ATinsert(CheckATermList(d_70), h_23);
          a_6 = t;
          t = SSLsetAnnotations(a_6, d_23);
          LocalPopChoice(s_43);
        }
      else
        {
          t = r_43;
          {
            ATerm q_23 = NULL,v_23 = NULL,b_6 = NULL;
            t = SSLgetAnnotations(b_70);
            q_23 = t;
            t = d_70;
            t = e_70(t);
            v_23 = t;
            t = (ATerm) ATinsert(CheckATermList(v_23), c_70);
            b_6 = t;
            t = SSLsetAnnotations(b_6, q_23);
          }
        }
    }
    return(t);
  }
  t = e_70(t);
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
  ATerm h_70 = NULL,i_70 = NULL;
  t = term_t_43;
  h_70 = t;
  t = term_b_15;
  i_70 = t;
  t = term_u_43;
  t = q_10(h_70, i_70, t);
  return(t);
}
static ATerm x_10 (ATerm t)
{
  t = term_v_43;
  return(t);
}
static ATerm y_10 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm z_10 (ATerm t)
{
  ATerm j_70 = NULL,k_70 = NULL,l_70 = NULL,m_70 = NULL;
  t = term_t_43;
  l_70 = t;
  t = term_b_15;
  m_70 = t;
  t = term_u_43;
  t = q_10(l_70, m_70, t);
  t = term_w_43;
  j_70 = t;
  t = term_b_15;
  k_70 = t;
  t = term_b_44;
  t = q_10(j_70, k_70, t);
  t = term_e_44;
  return(t);
}
static ATerm b_11 (ATerm t)
{
  t = term_f_44;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm g_44 = t;
  int h_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(v_10, w_10, x_10, t);
      LocalPopChoice(h_44);
    }
  else
    {
      t = g_44;
      t = Option_3_0(y_10, z_10, b_11, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm i_94 (ATerm), ATerm j_94 (ATerm), ATerm t)
{
  ATerm n_70 = NULL,o_70 = NULL,p_70 = NULL,q_70 = NULL,r_70 = NULL,s_70 = NULL,o_6 = NULL;
  s_70 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_70 = ATgetFirst((ATermList) t);
      p_70 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_70);
  n_70 = t;
  t = o_70;
  t = i_94(t);
  q_70 = t;
  t = p_70;
  t = j_94(t);
  r_70 = t;
  t = (ATerm) ATinsert(CheckATermList(r_70), q_70);
  o_6 = t;
  t = SSLsetAnnotations(o_6, n_70);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm l_146 (ATerm), ATerm t)
{
  ATerm x_70 = NULL,y_70 = NULL,z_70 = NULL,a_71 = NULL,c_71 = NULL,d_71 = NULL,r_6 = NULL;
  x_70 = t;
  {
    ATerm i_44 = t;
    int j_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_k_44;
        t = l_146(t);
        LocalPopChoice(j_44);
      }
    else
      {
        t = i_44;
      }
  }
  t = x_70;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_70 = ATgetFirst((ATermList) t);
      a_71 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_70);
  y_70 = t;
  t = term_o_35;
  d_71 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_35, z_70);
  t = q_10(d_71, z_70, t);
  t = a_71;
  {
    static ATerm n_71 (ATerm t);
    static ATerm n_71 (ATerm t)
    {
      ATerm l_44 = t;
      int m_44 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm n_44 = t;
          int o_44 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm g_71 = NULL;
              g_71 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = g_71;
              LocalPopChoice(o_44);
            }
          else
            {
              t = n_44;
              t = l_146(t);
              t = Cons_2_0(_id, n_71, t);
            }
          LocalPopChoice(m_44);
        }
      else
        {
          t = l_44;
          {
            ATerm j_71 = NULL,k_71 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                j_71 = ATgetFirst((ATermList) t);
                k_71 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(k_71), (ATerm) ATmakeAppl(sym_Undefined_1, j_71));
          }
        }
      return(t);
    }
    t = n_71(t);
  }
  c_71 = t;
  t = (ATerm) ATinsert(CheckATermList(c_71), (ATerm) ATmakeAppl(sym_Program_1, z_70));
  r_6 = t;
  t = SSLsetAnnotations(r_6, y_70);
  return(t);
}
static ATerm d_11 (ATerm t)
{
  ATerm a_72 = NULL;
  a_72 = t;
  if(match_string(t, "--help"))
    {
      t = a_72;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = a_72;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = a_72;
        }
    }
  return(t);
}
static ATerm f_11 (ATerm t)
{
  ATerm b_72 = NULL,c_72 = NULL;
  t = term_p_44;
  b_72 = t;
  t = term_b_15;
  c_72 = t;
  t = term_q_44;
  t = q_10(b_72, c_72, t);
  t = term_r_44;
  return(t);
}
static ATerm g_11 (ATerm t)
{
  t = term_s_44;
  return(t);
}
static ATerm h_11 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_3_0 (ATerm i_146 (ATerm), ATerm j_146 (ATerm), ATerm k_146 (ATerm), ATerm t)
{
  ATerm s_71 = NULL,t_71 = NULL,u_71 = NULL,v_71 = NULL,w_71 = NULL,x_71 = NULL,y_71 = NULL,z_71 = NULL;
  u_71 = t;
  t = term_h_37;
  v_71 = t;
  t = term_t_44;
  t = lookup_table_0_1(v_71, t);
  z_71 = t;
  t = term_o_37;
  w_71 = t;
  t = (ATerm) ATempty;
  x_71 = t;
  t = z_71;
  if(match_cons(t, sym_Hashtable_1))
    {
      y_71 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_10(w_71, x_71, y_71, t);
  t = u_71;
  {
    static ATerm c_11 (ATerm t);
    static ATerm c_11 (ATerm t)
    {
      ATerm x_44 = t;
      int y_44 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = i_146(t);
          LocalPopChoice(y_44);
        }
      else
        {
          t = x_44;
          {
            ATerm a_45 = t;
            int b_45 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(d_11, f_11, g_11, t);
                LocalPopChoice(b_45);
              }
            else
              {
                t = a_45;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(c_11, t);
  }
  {
    ATerm c_45 = t;
    int d_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_72 = NULL;
        n_72 = t;
        {
          ATerm e_45 = t;
          int f_45 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm f_24 = NULL;
              t = n_72;
              {
                ATerm i_45 = t;
                int k_45 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm i_24 = NULL,j_24 = NULL;
                    t = term_n_13;
                    i_24 = t;
                    t = term_p_44;
                    j_24 = t;
                    t = term_l_45;
                    t = n_10(i_24, j_24, t);
                    LocalPopChoice(k_45);
                  }
                else
                  {
                    t = i_45;
                    t = fetch_1_0(h_11, t);
                  }
              }
              t = n_72;
              t = j_146(t);
              t = term_i_38;
              f_24 = t;
              t = SSL_exit(f_24);
              LocalPopChoice(f_45);
            }
          else
            {
              t = e_45;
              {
                ATerm o_24 = NULL,p_24 = NULL,q_24 = NULL;
                t = term_n_13;
                p_24 = t;
                t = term_t_43;
                q_24 = t;
                t = term_n_45;
                t = n_10(p_24, q_24, t);
                t = n_72;
                t = k_146(t);
                t = term_i_38;
                o_24 = t;
                t = SSL_exit(o_24);
              }
            }
        }
        LocalPopChoice(d_45);
      }
    else
      {
        t = c_45;
        {
          ATerm q_45 = t;
          int r_45 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm o_72 = NULL,p_72 = NULL,q_72 = NULL;
              static ATerm i_11 (ATerm t);
              static ATerm i_11 (ATerm t)
              {
                ATerm r_72 = NULL,s_72 = NULL,t_72 = NULL,t_6 = NULL;
                t_72 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    s_72 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(t_72);
                r_72 = t;
                t = s_72;
                if(((s_71 != NULL) && (s_71 != t)))
                  _fail(t);
                else
                  s_71 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, s_72);
                t_6 = t;
                t = SSLsetAnnotations(t_6, r_72);
                return(t);
              }
              t = fetch_1_0(i_11, t);
              t = term_e_25;
              p_72 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(s_71)), term_s_45);
              q_72 = t;
              t = SSL_printnl(p_72, q_72);
              t = (ATerm) ATmakeAppl(sym__2, term_e_25, (ATerm) ATinsert(ATinsert(ATempty, not_null(s_71)), term_s_45));
              t = j_146(t);
              t = term_q_16;
              o_72 = t;
              t = SSL_exit(o_72);
              LocalPopChoice(r_45);
            }
          else
            {
              t = q_45;
            }
        }
      }
  }
  t_71 = t;
  t = term_h_37;
  t = table_destroy_0_0(t);
  t = t_71;
  return(t);
}
ATerm option_wrap_5_0 (ATerm x_143 (ATerm), ATerm y_143 (ATerm), ATerm z_143 (ATerm), ATerm a_144 (ATerm), ATerm b_144 (ATerm), ATerm t)
{
  ATerm y_72 = NULL,z_72 = NULL,a_73 = NULL,b_73 = NULL,c_73 = NULL;
  t = parse_options_3_0(x_143, y_143, z_143, t);
  y_72 = t;
  t = term_t_45;
  t = table_create_0_0(t);
  t = term_t_45;
  z_72 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_t_45, term_y_45, y_72);
  t = lookup_table_0_1(z_72, t);
  c_73 = t;
  t = term_y_45;
  a_73 = t;
  t = c_73;
  if(match_cons(t, sym_Hashtable_1))
    {
      b_73 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_10(a_73, y_72, b_73, t);
  t = y_72;
  t = a_144(t);
  {
    ATerm z_45 = t;
    int a_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = b_144(t);
        t = report_success_0_0(t);
        LocalPopChoice(a_46);
      }
    else
      {
        t = z_45;
        t = report_failure_0_0(t);
      }
  }
  return(t);
}
static ATerm j_11 (ATerm t)
{
  ATerm b_46 = t;
  int c_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = pack_stratego_options_0_0(t);
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
            t = input_option_0_0(t);
            LocalPopChoice(e_46);
          }
        else
          {
            t = d_46;
            {
              ATerm o_46 = t;
              int p_46 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = output_option_0_0(t);
                  LocalPopChoice(p_46);
                }
              else
                {
                  t = o_46;
                  {
                    ATerm r_46 = t;
                    int s_46 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Option_3_0(l_11, m_11, n_11, t);
                        LocalPopChoice(s_46);
                      }
                    else
                      {
                        t = r_46;
                        {
                          ATerm u_46 = t;
                          int w_46 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = verbose_option_0_0(t);
                              LocalPopChoice(w_46);
                            }
                          else
                            {
                              t = u_46;
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
  ATerm i_73 = NULL,j_73 = NULL;
  t = term_z_46;
  i_73 = t;
  t = term_b_15;
  j_73 = t;
  t = term_a_47;
  t = q_10(i_73, j_73, t);
  t = term_b_47;
  return(t);
}
static ATerm n_11 (ATerm t)
{
  t = term_c_47;
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
  ATerm u_73 = NULL,v_73 = NULL,w_73 = NULL,x_73 = NULL,y_73 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm d_47 = ATgetArgument(t, 0);
      if(match_cons(d_47, sym_Stream_1))
        {
          x_73 = ATgetArgument(d_47, 0);
        }
      else
        _fail(t);
      y_73 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_8(x_73, y_73, t);
  u_73 = t;
  t = term_u_22;
  v_73 = t;
  t = u_73;
  if(match_cons(t, sym_Stream_1))
    {
      w_73 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_u_22, u_73);
  t = t_8(v_73, w_73, t);
  return(t);
}
static ATerm r_11 (ATerm t)
{
  ATerm b_74 = NULL,c_74 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm e_47 = ATgetArgument(t, 0);
      if(match_cons(e_47, sym_Stream_1))
        {
          b_74 = ATgetArgument(e_47, 0);
        }
      else
        _fail(t);
      c_74 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_8(b_74, c_74, t);
  return(t);
}
ATerm pack_stratego_0_0 (ATerm t)
{
  ATerm g_73 = NULL,h_73 = NULL;
  static ATerm k_11 (ATerm t);
  static ATerm k_11 (ATerm t)
  {
    static ATerm o_11 (ATerm t);
    static ATerm o_11 (ATerm t)
    {
      ATerm l_73 = NULL;
      ATerm f_47 = t;
      int g_47 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm m_73 = NULL,n_73 = NULL,o_73 = NULL;
          t = term_n_13;
          n_73 = t;
          t = term_a_29;
          o_73 = t;
          t = term_h_47;
          t = n_10(n_73, o_73, t);
          m_73 = t;
          t = (ATerm) ATmakeAppl(sym_FILE_1, m_73);
          LocalPopChoice(g_47);
        }
      else
        {
          t = f_47;
          t = term_y_13;
        }
      if(match_cons(t, sym_FILE_1))
        {
          l_73 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = z_9(l_73, t);
      if(match_cons(t, sym__2))
        {
          if(((g_73 != NULL) && (g_73 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            g_73 = ATgetArgument(t, 0);
          if(((h_73 != NULL) && (h_73 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            h_73 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm i_47 = t;
        int j_47 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_73 = NULL,q_73 = NULL,r_73 = NULL,s_73 = NULL;
            t = term_n_13;
            r_73 = t;
            t = term_x_39;
            s_73 = t;
            t = term_k_47;
            t = n_10(r_73, s_73, t);
            t = g_73;
            t = map_1_0(p_11, t);
            q_73 = t;
            t = xtc_new_file_0_0(t);
            p_73 = t;
            t = (ATerm) ATmakeAppl(sym__2, p_73, q_73);
            t = v_8(q_11, p_73, q_73, t);
            t = (ATerm) ATmakeAppl(sym_FILE_1, p_73);
            LocalPopChoice(j_47);
          }
        else
          {
            t = i_47;
            {
              ATerm z_73 = NULL;
              ATerm l_47 = t;
              int m_47 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = g_73;
                  t = create_dep_file_0_0(t);
                  LocalPopChoice(m_47);
                }
              else
                {
                  t = l_47;
                }
              t = h_73;
              t = xtc_new_file_0_0(t);
              z_73 = t;
              t = (ATerm) ATmakeAppl(sym__2, z_73, h_73);
              t = v_8(r_11, z_73, h_73, t);
              t = (ATerm) ATmakeAppl(sym_FILE_1, z_73);
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
