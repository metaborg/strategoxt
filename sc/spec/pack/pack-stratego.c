#include <srts/stratego.h>
#include <srts/stratego-lib.h>
void init_constant_terms ();
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
Symbol sym_Nil_0;
Symbol sym_Cons_2;
Symbol sym_Undefined_0;
Symbol sym_Scopes_0;
Symbol sym_F__OK_0;
Symbol sym_R__OK_0;
Symbol sym_Stream_1;
Symbol sym_Path_1;
Symbol sym_stdin_0;
Symbol sym_stdout_0;
Symbol sym_stderr_0;
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
void init_constructors (void)
{
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
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
  sym_Undefined_0 = ATmakeSymbol("Undefined", 0, ATfalse);
  ATprotectSymbol(sym_Undefined_0);
  sym_Scopes_0 = ATmakeSymbol("Scopes", 0, ATfalse);
  ATprotectSymbol(sym_Scopes_0);
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
  init_constant_terms();
}
void __UnboundVarError (char * var)
{
  fprintf(stderr, "** compiler error: variable '%s' should be bound\nnotify stratego-bugs@cs.uu.nl\n", var);
}
ATerm term_w_42;
ATerm term_v_42;
ATerm term_u_42;
ATerm term_t_42;
ATerm term_e_42;
ATerm term_d_42;
ATerm term_c_42;
ATerm term_n_41;
ATerm term_f_41;
ATerm term_d_41;
ATerm term_o_40;
ATerm term_j_40;
ATerm term_i_40;
ATerm term_h_40;
ATerm term_g_40;
ATerm term_f_40;
ATerm term_e_40;
ATerm term_d_40;
ATerm term_w_39;
ATerm term_v_39;
ATerm term_s_39;
ATerm term_r_39;
ATerm term_o_39;
ATerm term_r_38;
ATerm term_o_38;
ATerm term_z_37;
ATerm term_y_37;
ATerm term_x_37;
ATerm term_t_37;
ATerm term_o_37;
ATerm term_n_37;
ATerm term_m_37;
ATerm term_l_37;
ATerm term_p_36;
ATerm term_o_36;
ATerm term_n_36;
ATerm term_m_36;
ATerm term_t_35;
ATerm term_s_35;
ATerm term_r_35;
ATerm term_q_35;
ATerm term_p_35;
ATerm term_o_35;
ATerm term_n_35;
ATerm term_g_35;
ATerm term_b_35;
ATerm term_a_35;
ATerm term_y_34;
ATerm term_x_34;
ATerm term_r_34;
ATerm term_n_34;
ATerm term_g_33;
ATerm term_f_33;
ATerm term_j_32;
ATerm term_x_29;
ATerm term_w_29;
ATerm term_v_29;
ATerm term_u_29;
ATerm term_t_29;
ATerm term_s_29;
ATerm term_k_29;
ATerm term_d_29;
ATerm term_c_29;
ATerm term_o_28;
ATerm term_v_27;
ATerm term_t_27;
ATerm term_g_27;
ATerm term_f_27;
ATerm term_a_27;
ATerm term_z_26;
ATerm term_v_26;
ATerm term_p_26;
ATerm term_o_26;
ATerm term_j_26;
ATerm term_b_26;
ATerm term_s_25;
ATerm term_r_25;
ATerm term_m_25;
ATerm term_j_25;
ATerm term_i_25;
ATerm term_h_25;
ATerm term_d_25;
ATerm term_y_24;
ATerm term_n_24;
ATerm term_l_24;
ATerm term_t_23;
ATerm term_s_23;
ATerm term_r_23;
ATerm term_l_23;
ATerm term_f_23;
ATerm term_z_22;
ATerm term_x_22;
ATerm term_w_22;
ATerm term_t_22;
ATerm term_b_21;
ATerm term_a_21;
ATerm term_n_20;
ATerm term_m_20;
ATerm term_l_20;
ATerm term_h_20;
ATerm term_g_20;
ATerm term_f_20;
ATerm term_d_20;
ATerm term_c_20;
ATerm term_b_20;
ATerm term_a_20;
ATerm term_z_19;
ATerm term_y_19;
ATerm term_x_19;
ATerm term_v_19;
ATerm term_t_19;
ATerm term_s_19;
ATerm term_r_19;
ATerm term_q_19;
ATerm term_p_19;
ATerm term_o_19;
ATerm term_m_19;
ATerm term_l_19;
ATerm term_k_19;
ATerm term_g_19;
ATerm term_f_19;
ATerm term_e_19;
ATerm term_d_19;
ATerm term_c_19;
ATerm term_b_19;
ATerm term_z_18;
ATerm term_y_18;
ATerm term_v_18;
ATerm term_s_18;
ATerm term_r_18;
ATerm term_q_18;
ATerm term_p_18;
ATerm term_o_18;
ATerm term_n_18;
ATerm term_l_18;
ATerm term_k_18;
ATerm term_j_18;
ATerm term_h_18;
ATerm term_g_18;
ATerm term_f_18;
ATerm term_e_18;
ATerm term_c_18;
ATerm term_b_18;
ATerm term_a_18;
ATerm term_z_17;
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
ATerm term_i_17;
ATerm term_h_17;
ATerm term_g_17;
ATerm term_e_17;
ATerm term_a_17;
ATerm term_z_16;
ATerm term_x_16;
ATerm term_v_16;
ATerm term_u_16;
ATerm term_t_16;
ATerm term_r_16;
ATerm term_q_16;
ATerm term_p_16;
ATerm term_n_16;
ATerm term_l_16;
ATerm term_j_16;
ATerm term_i_16;
ATerm term_h_16;
ATerm term_g_16;
ATerm term_d_16;
ATerm term_c_16;
ATerm term_b_16;
ATerm term_z_15;
ATerm term_w_15;
ATerm term_v_15;
ATerm term_s_15;
ATerm term_r_15;
ATerm term_q_15;
ATerm term_p_15;
ATerm term_o_15;
ATerm term_n_15;
ATerm term_l_15;
ATerm term_k_15;
ATerm term_j_15;
ATerm term_i_15;
ATerm term_h_15;
ATerm term_g_15;
ATerm term_f_15;
ATerm term_e_15;
ATerm term_c_15;
ATerm term_b_15;
ATerm term_a_15;
ATerm term_y_14;
ATerm term_x_14;
ATerm term_w_14;
ATerm term_v_14;
ATerm term_u_14;
ATerm term_r_14;
ATerm term_q_14;
ATerm term_j_14;
ATerm term_i_14;
ATerm term_h_14;
ATerm term_g_14;
ATerm term_y_13;
ATerm term_v_13;
ATerm term_r_13;
ATerm term_q_13;
ATerm term_p_13;
ATerm term_i_13;
ATerm term_b_13;
ATerm term_x_11;
ATerm term_s_11;
ATerm term_r_11;
ATerm term_q_11;
ATerm term_p_11;
ATerm term_o_11;
ATerm term_n_11;
ATerm term_i_11;
ATerm term_c_11;
void init_constant_terms (void)
{
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--dep", 0, ATtrue));
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--nodep", 0, ATtrue));
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeAppl(ATmakeSymbol(".", 0, ATtrue));
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeAppl(ATmakeSymbol("dep", 0, ATtrue));
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeAppl(ATmakeSymbol(" \\\n	", 0, ATtrue));
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeAppl(ATmakeSymbol(" :", 0, ATtrue));
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_b_13));
  term_b_13 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_g_14));
  term_g_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_14, term_v_13, term_r_14);
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_14, term_w_14, term_x_14);
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_15, term_b_15, term_c_15);
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_15, term_g_15, term_h_15);
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_15, term_k_15, term_l_15);
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_15, term_p_15, term_q_15);
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_15, term_v_15, term_w_15);
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_16, term_c_16, term_d_16);
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_l_16));
  term_l_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_16, term_i_16, term_j_16);
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_16, term_p_16, term_q_16);
  ATprotect(&(term_t_16));
  term_t_16 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_u_16));
  term_u_16 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_16, term_u_16, term_v_16);
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_a_17));
  term_a_17 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_g_17));
  term_g_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_16, term_a_17, term_e_17);
  ATprotect(&(term_h_17));
  term_h_17 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_i_17));
  term_i_17 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_l_17));
  term_l_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_m_17));
  term_m_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_17, term_i_17, term_l_17);
  ATprotect(&(term_n_17));
  term_n_17 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_q_17));
  term_q_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_17, term_o_17, term_p_17);
  ATprotect(&(term_r_17));
  term_r_17 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_s_17));
  term_s_17 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_t_17));
  term_t_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_u_17));
  term_u_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_17, term_s_17, term_t_17);
  ATprotect(&(term_v_17));
  term_v_17 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_w_17));
  term_w_17 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_z_17));
  term_z_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_a_18));
  term_a_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_17, term_w_17, term_z_17);
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_e_18));
  term_e_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_f_18));
  term_f_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_18, term_c_18, term_e_18);
  ATprotect(&(term_g_18));
  term_g_18 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_h_18));
  term_h_18 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_j_18));
  term_j_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_k_18));
  term_k_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_18, term_h_18, term_j_18);
  ATprotect(&(term_l_18));
  term_l_18 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_n_18));
  term_n_18 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_o_18));
  term_o_18 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_p_18));
  term_p_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_18, term_n_18, term_o_18);
  ATprotect(&(term_q_18));
  term_q_18 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_r_18));
  term_r_18 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_s_18));
  term_s_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_18, term_x_11, term_r_18);
  ATprotect(&(term_v_18));
  term_v_18 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_y_18));
  term_y_18 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_z_18));
  term_z_18 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_b_19));
  term_b_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_18, term_y_18, term_z_18);
  ATprotect(&(term_c_19));
  term_c_19 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_d_19));
  term_d_19 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_e_19));
  term_e_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_f_19));
  term_f_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_19, term_d_19, term_e_19);
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_k_19));
  term_k_19 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_l_19));
  term_l_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_m_19));
  term_m_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_19, term_k_19, term_l_19);
  ATprotect(&(term_o_19));
  term_o_19 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_p_19));
  term_p_19 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_q_19));
  term_q_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_r_19));
  term_r_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_19, term_p_19, term_q_19);
  ATprotect(&(term_s_19));
  term_s_19 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_t_19));
  term_t_19 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_v_19));
  term_v_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_x_19));
  term_x_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_19, term_t_19, term_v_19);
  ATprotect(&(term_y_19));
  term_y_19 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_z_19));
  term_z_19 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_a_20));
  term_a_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_b_20));
  term_b_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_19, term_z_19, term_a_20);
  ATprotect(&(term_c_20));
  term_c_20 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_d_20));
  term_d_20 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_f_20));
  term_f_20 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_g_20));
  term_g_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_20, term_d_20, term_f_20);
  ATprotect(&(term_h_20));
  term_h_20 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_l_20));
  term_l_20 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_m_20));
  term_m_20 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_n_20));
  term_n_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_20, term_l_20, term_m_20);
  ATprotect(&(term_a_21));
  term_a_21 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_b_21));
  term_b_21 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_t_22));
  term_t_22 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_w_22));
  term_w_22 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_x_22));
  term_x_22 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_z_22));
  term_z_22 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_f_23));
  term_f_23 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_l_23));
  term_l_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_r_23));
  term_r_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_s_23));
  term_s_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_t_23));
  term_t_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_l_24));
  term_l_24 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_n_24));
  term_n_24 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_y_24));
  term_y_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_d_25));
  term_d_25 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_h_25));
  term_h_25 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_i_25));
  term_i_25 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_j_25));
  term_j_25 = (ATerm) ATmakeAppl(sym__2, term_l_24, term_i_25);
  ATprotect(&(term_m_25));
  term_m_25 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_r_25));
  term_r_25 = (ATerm) ATmakeAppl(sym__2, term_l_24, term_n_24);
  ATprotect(&(term_s_25));
  term_s_25 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_b_26));
  term_b_26 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_j_26));
  term_j_26 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_o_26));
  term_o_26 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_p_26));
  term_p_26 = (ATerm) ATmakeInt(-1);
  ATprotect(&(term_v_26));
  term_v_26 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_z_26));
  term_z_26 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file> (file, mode)", 0, ATtrue));
  ATprotect(&(term_a_27));
  term_a_27 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_f_27));
  term_f_27 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_g_27));
  term_g_27 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_t_27));
  term_t_27 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_v_27));
  term_v_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_o_28));
  term_o_28 = (ATerm) ATmakeAppl(ATmakeSymbol("parse error in ", 0, ATtrue));
  ATprotect(&(term_c_29));
  term_c_29 = (ATerm) ATmakeAppl(ATmakeSymbol("parse-stratego", 0, ATtrue));
  ATprotect(&(term_d_29));
  term_d_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue));
  ATprotect(&(term_k_29));
  term_k_29 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
  ATprotect(&(term_s_29));
  term_s_29 = (ATerm) ATmakeAppl(ATmakeSymbol("*** module ", 0, ATtrue));
  ATprotect(&(term_t_29));
  term_t_29 = (ATerm) ATmakeAppl(ATmakeSymbol(" not found", 0, ATtrue));
  ATprotect(&(term_u_29));
  term_u_29 = (ATerm) ATmakeAppl(ATmakeSymbol(" reading ", 0, ATtrue));
  ATprotect(&(term_v_29));
  term_v_29 = (ATerm) ATmakeAppl(ATmakeSymbol("rtree", 0, ATtrue));
  ATprotect(&(term_w_29));
  term_w_29 = (ATerm) ATmakeAppl(ATmakeSymbol("str", 0, ATtrue));
  ATprotect(&(term_x_29));
  term_x_29 = (ATerm) ATmakeAppl(ATmakeSymbol("cr", 0, ATtrue));
  ATprotect(&(term_j_32));
  term_j_32 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_f_33));
  term_f_33 = (ATerm) ATmakeAppl(ATmakeSymbol("list-cons", 0, ATtrue));
  ATprotect(&(term_g_33));
  term_g_33 = (ATerm) ATmakeAppl(ATmakeSymbol("tuple-cons", 0, ATtrue));
  ATprotect(&(term_n_34));
  term_n_34 = (ATerm) ATmakeAppl(sym__2, term_t_27, term_v_26);
  ATprotect(&(term_r_34));
  term_r_34 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_x_34));
  term_x_34 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_y_34));
  term_y_34 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_a_35));
  term_a_35 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_b_35));
  term_b_35 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_g_35));
  term_g_35 = (ATerm) ATmakeAppl(sym__2, term_y_13, term_b_35);
  ATprotect(&(term_n_35));
  term_n_35 = (ATerm) ATmakeAppl(sym_Verbose_1, term_b_35);
  ATprotect(&(term_o_35));
  term_o_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_p_35));
  term_p_35 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_q_35));
  term_q_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_r_35));
  term_r_35 = (ATerm) ATmakeAppl(sym__2, term_q_35, term_f_27);
  ATprotect(&(term_s_35));
  term_s_35 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_t_35));
  term_t_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_m_36));
  term_m_36 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_n_36));
  term_n_36 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_o_36));
  term_o_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_p_36));
  term_p_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_l_37));
  term_l_37 = (ATerm) ATmakeAppl(ATmakeSymbol("-I d | --Include d   Include modules from directory d", 0, ATtrue));
  ATprotect(&(term_m_37));
  term_m_37 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_n_37));
  term_n_37 = (ATerm) ATmakeAppl(sym__2, term_n_11, term_m_37);
  ATprotect(&(term_o_37));
  term_o_37 = (ATerm) ATmakeAppl(ATmakeSymbol("--nodep              Don't create dependency file", 0, ATtrue));
  ATprotect(&(term_t_37));
  term_t_37 = (ATerm) ATmakeAppl(ATmakeSymbol("--dep f | -d f       Write dependency to file f", 0, ATtrue));
  ATprotect(&(term_x_37));
  term_x_37 = (ATerm) ATmakeAppl(ATmakeSymbol("--imports", 0, ATtrue));
  ATprotect(&(term_y_37));
  term_y_37 = (ATerm) ATmakeAppl(sym__2, term_x_37, term_f_27);
  ATprotect(&(term_z_37));
  term_z_37 = (ATerm) ATmakeAppl(ATmakeSymbol("--imports            Produce a list of imported modules only", 0, ATtrue));
  ATprotect(&(term_o_38));
  term_o_38 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_r_38));
  term_r_38 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_o_39));
  term_o_39 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_r_39));
  term_r_39 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_s_39));
  term_s_39 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_v_39));
  term_v_39 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_w_39));
  term_w_39 = (ATerm) ATmakeAppl(sym__2, term_m_36, term_n_36);
  ATprotect(&(term_d_40));
  term_d_40 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_e_40));
  term_e_40 = (ATerm) ATmakeAppl(sym__2, term_d_40, term_f_27);
  ATprotect(&(term_f_40));
  term_f_40 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_g_40));
  term_g_40 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_h_40));
  term_h_40 = (ATerm) ATmakeAppl(sym__2, term_g_40, term_f_27);
  ATprotect(&(term_i_40));
  term_i_40 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_j_40));
  term_j_40 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_o_40));
  term_o_40 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_d_41));
  term_d_41 = (ATerm) ATmakeAppl(sym__2, term_r_39, term_f_27);
  ATprotect(&(term_f_41));
  term_f_41 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_n_41));
  term_n_41 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_c_42));
  term_c_42 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_d_42));
  term_d_42 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_e_42));
  term_e_42 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_t_42));
  term_t_42 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_u_42));
  term_u_42 = (ATerm) ATmakeAppl(sym__2, term_t_42, term_f_27);
  ATprotect(&(term_v_42));
  term_v_42 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_w_42));
  term_w_42 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
}
ATerm p_7 (ATerm e_55, ATerm f_55, ATerm);
ATerm c_0 (ATerm);
ATerm write_to_0_0 (ATerm);
ATerm q_7 (ATerm k_33, ATerm l_33, ATerm);
ATerm create_dep_file_0_0 (ATerm);
ATerm s_7 (ATerm u_51, ATerm v_51, ATerm);
ATerm t_7 (ATerm i_55, ATerm j_55, ATerm);
ATerm u_7 (ATerm a_108 (ATerm), ATerm c_451, ATerm m_55, ATerm);
ATerm p_0 (ATerm);
ATerm write_to_text_0_0 (ATerm);
ATerm basename_1_0 (ATerm i_104 (ATerm), ATerm);
ATerm at_suffix_rev_1_0 (ATerm h_96 (ATerm), ATerm);
ATerm get_filename_0_0 (ATerm);
ATerm map_1_0 (ATerm j_95 (ATerm), ATerm);
ATerm v_0 (ATerm);
ATerm w_0 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm a_1 (ATerm);
ATerm b_1 (ATerm);
ATerm flatten_stratego_0_0 (ATerm);
ATerm genzip_4_0 (ATerm m_97 (ATerm), ATerm n_97 (ATerm), ATerm o_97 (ATerm), ATerm p_97 (ATerm), ATerm);
ATerm f_1 (ATerm);
ATerm x_7 (ATerm p_153, ATerm);
ATerm read_from_0_0 (ATerm);
ATerm pass_keep_0_0 (ATerm);
ATerm y_7 (ATerm a_49, ATerm b_49, ATerm);
ATerm pass_verbose_0_0 (ATerm);
ATerm xtc_transform_term_2_0 (ATerm n_117 (ATerm), ATerm o_117 (ATerm), ATerm);
ATerm z_7 (ATerm x_56, ATerm y_56, ATerm);
ATerm signal_to_descr_0_0 (ATerm);
ATerm signal_from_number_0_0 (ATerm);
ATerm warn_ifsignaled_0_0 (ATerm);
ATerm fork_0_0 (ATerm);
ATerm fork_and_wait_1_0 (ATerm v_109 (ATerm), ATerm);
ATerm table_getlist_0_0 (ATerm);
ATerm if_verbose5_1_0 (ATerm o_109 (ATerm), ATerm);
ATerm if_verbose4_1_0 (ATerm n_109 (ATerm), ATerm);
ATerm if_verbose6_1_0 (ATerm p_109 (ATerm), ATerm);
ATerm c_8 (ATerm n_99 (ATerm), ATerm v_38, ATerm u_38, ATerm);
ATerm l_1 (ATerm);
ATerm d_8 (ATerm q_61, ATerm r_61, ATerm s_61, ATerm);
ATerm e_8 (ATerm s_113 (ATerm), ATerm a_62, ATerm z_61, ATerm);
ATerm o_20 (ATerm u_19, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm f_8 (ATerm k_55, ATerm);
ATerm g_8 (ATerm w_51, ATerm x_51, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm h_23 (ATerm h_21, ATerm);
ATerm j_23 (ATerm q_21, ATerm r_21, ATerm s_21, ATerm);
ATerm m_23 (ATerm g_22, ATerm h_22, ATerm i_22, ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm q_1 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm s_1 (ATerm);
ATerm x_1 (ATerm);
ATerm read_repository_file_0_0 (ATerm);
ATerm y_1 (ATerm);
ATerm z_1 (ATerm);
ATerm b_2 (ATerm);
ATerm i_2 (ATerm);
ATerm j_2 (ATerm);
ATerm l_2 (ATerm);
ATerm m_2 (ATerm);
ATerm n_2 (ATerm);
ATerm xtc_read_0_0 (ATerm);
ATerm repeat_1_0 (ATerm u_88 (ATerm), ATerm);
ATerm xtc_location_0_0 (ATerm);
ATerm o_2 (ATerm);
ATerm q_2 (ATerm);
ATerm r_2 (ATerm);
ATerm s_2 (ATerm);
ATerm u_2 (ATerm);
ATerm xtc_load_0_0 (ATerm);
ATerm x_2 (ATerm);
ATerm e_3 (ATerm);
ATerm d_27 (ATerm d_26, ATerm);
ATerm g_3 (ATerm);
ATerm h_3 (ATerm);
ATerm i_3 (ATerm);
ATerm j_3 (ATerm);
ATerm xtc_find_0_0 (ATerm);
ATerm xtc_command_1_0 (ATerm e_117 (ATerm), ATerm);
ATerm h_8 (ATerm h_106 (ATerm), ATerm i_50, ATerm g_50, ATerm);
ATerm g_28 (ATerm u_27, ATerm);
ATerm k_28 (ATerm w_27, ATerm x_27, ATerm y_27, ATerm);
ATerm m_3 (ATerm);
ATerm open_file_0_0 (ATerm);
ATerm i_8 (ATerm k_46, ATerm l_46, ATerm);
ATerm new_0_0 (ATerm);
ATerm new_file_0_0 (ATerm);
ATerm n_3 (ATerm);
ATerm xtc_new_file_0_0 (ATerm);
ATerm xtc_transform_file_2_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm);
ATerm k_31 (ATerm z_29, ATerm a_30, ATerm b_30, ATerm);
ATerm l_31 (ATerm z_30, ATerm a_31, ATerm);
ATerm q_3 (ATerm);
ATerm r_3 (ATerm);
ATerm s_3 (ATerm);
ATerm u_3 (ATerm);
ATerm parse_module_0_0 (ATerm);
ATerm debug_1_0 (ATerm y_107 (ATerm), ATerm);
ATerm if_verbose3_1_0 (ATerm m_109 (ATerm), ATerm);
ATerm fetch_elem_1_0 (ATerm v_95 (ATerm), ATerm);
ATerm j_8 (ATerm o_51, ATerm p_51, ATerm);
ATerm k_8 (ATerm x_87 (ATerm), ATerm z_31, ATerm y_31, ATerm);
ATerm e_4 (ATerm);
ATerm get_module_1_0 (ATerm w_87 (ATerm), ATerm);
ATerm m_8 (ATerm q_99 (ATerm), ATerm r_99 (ATerm), ATerm z_38, ATerm y_38, ATerm);
ATerm n_8 (ATerm i_99 (ATerm), ATerm t_38, ATerm s_38, ATerm);
ATerm j_4 (ATerm);
ATerm k_4 (ATerm);
ATerm m_4 (ATerm);
ATerm r_8 (ATerm s_592, ATerm x_592, ATerm f_65, ATerm);
ATerm p_4 (ATerm);
ATerm q_4 (ATerm);
ATerm s_4 (ATerm);
ATerm i_37 (ATerm z_35, ATerm a_36, ATerm b_36, ATerm);
ATerm u_4 (ATerm);
ATerm diff_0_0 (ATerm);
ATerm t_8 (ATerm m_118 (ATerm), ATerm n_118 (ATerm), ATerm o_118 (ATerm), ATerm w_67, ATerm t_67, ATerm a_68, ATerm x_67, ATerm u_67, ATerm v_67, ATerm);
ATerm GnNext_3_0 (ATerm m_118 (ATerm), ATerm n_118 (ATerm), ATerm o_118 (ATerm), ATerm);
ATerm while_not_2_0 (ATerm j_89 (ATerm), ATerm k_89 (ATerm), ATerm);
ATerm for_3_0 (ATerm m_89 (ATerm), ATerm n_89 (ATerm), ATerm o_89 (ATerm), ATerm);
ATerm z_4 (ATerm);
ATerm a_5 (ATerm);
ATerm graph_nodes_roots_3_0 (ATerm j_118 (ATerm), ATerm k_118 (ATerm), ATerm l_118 (ATerm), ATerm);
ATerm filter_1_0 (ATerm p_102 (ATerm), ATerm);
ATerm e_5 (ATerm);
ATerm h_5 (ATerm);
ATerm j_5 (ATerm);
ATerm l_5 (ATerm);
ATerm m_5 (ATerm);
ATerm n_5 (ATerm);
ATerm w_8 (ATerm p_31, ATerm);
ATerm y_8 (ATerm g_52, ATerm h_52, ATerm);
ATerm copy_to_1_0 (ATerm k_0 (ATerm), ATerm);
ATerm z_8 (ATerm y_60, ATerm z_60, ATerm);
ATerm end_scope_1_0 (ATerm e_106 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm n_88 (ATerm), ATerm o_88 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm d_106 (ATerm), ATerm);
ATerm q_5 (ATerm);
ATerm v_5 (ATerm);
ATerm w_5 (ATerm);
ATerm xtc_temp_files_1_0 (ATerm q_116 (ATerm), ATerm);
ATerm a_6 (ATerm);
ATerm xtc_io_1_0 (ATerm r_116 (ATerm), ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm f_6 (ATerm);
ATerm k_6 (ATerm);
ATerm l_6 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm m_6 (ATerm);
ATerm n_6 (ATerm);
ATerm o_6 (ATerm);
ATerm q_6 (ATerm);
ATerm s_6 (ATerm);
ATerm t_6 (ATerm);
ATerm u_6 (ATerm);
ATerm v_6 (ATerm);
ATerm w_6 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm g_9 (ATerm y_68, ATerm z_68, ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm x_6 (ATerm);
ATerm y_6 (ATerm);
ATerm z_6 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm c_7 (ATerm);
ATerm f_7 (ATerm);
ATerm g_7 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm e_9 (ATerm t_60, ATerm u_60, ATerm s_60, ATerm);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm at_end_1_0 (ATerm z_95 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm m_50 (ATerm t_49, ATerm);
ATerm conc_0_0 (ATerm);
ATerm x_8 (ATerm e_69, ATerm d_69, ATerm);
ATerm j_7 (ATerm);
ATerm k_7 (ATerm);
ATerm l_7 (ATerm);
ATerm m_7 (ATerm);
ATerm n_7 (ATerm);
ATerm o_7 (ATerm);
ATerm w_7 (ATerm);
ATerm a_8 (ATerm);
ATerm b_8 (ATerm);
ATerm l_8 (ATerm);
ATerm o_8 (ATerm);
ATerm p_8 (ATerm);
ATerm pack_stratego_options_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm a_9 (ATerm u_48, ATerm v_48, ATerm);
ATerm foldr_2_0 (ATerm m_101 (ATerm), ATerm n_101 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm q_8 (ATerm);
ATerm s_8 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm k_109 (ATerm), ATerm);
ATerm u_8 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm b_9 (ATerm);
ATerm need_help_1_0 (ATerm y_110 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm d_9 (ATerm k_62, ATerm l_62, ATerm);
ATerm f_9 (ATerm);
ATerm h_9 (ATerm);
ATerm i_9 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm fetch_1_0 (ATerm t_95 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm j_9 (ATerm);
ATerm l_9 (ATerm);
ATerm q_9 (ATerm);
ATerm r_9 (ATerm);
ATerm s_9 (ATerm);
ATerm t_9 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm c_74 (ATerm), ATerm d_74 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm p_113 (ATerm), ATerm);
ATerm v_9 (ATerm);
ATerm w_9 (ATerm);
ATerm x_9 (ATerm);
ATerm z_9 (ATerm);
ATerm parse_options_1_0 (ATerm o_113 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm a_111 (ATerm), ATerm b_111 (ATerm), ATerm c_111 (ATerm), ATerm d_111 (ATerm), ATerm);
ATerm f_10 (ATerm);
ATerm j_10 (ATerm);
ATerm m_10 (ATerm);
ATerm n_10 (ATerm);
ATerm q_10 (ATerm);
ATerm pack_stratego_0_0 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm p_7 (ATerm e_55, ATerm f_55, ATerm t)
{
  ATerm e_0 = NULL;
  t = SSL_write_term_to_stream_baf(e_55, f_55);
  e_0 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, e_0);
  return(t);
}
ATerm c_0 (ATerm t)
{
  ATerm r_0 = NULL,s_0 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm t_10 = ATgetArgument(t, 0);
      if(match_cons(t_10, sym_Stream_1))
        {
          r_0 = ATgetArgument(t_10, 0);
        }
      else
        _fail(t);
      s_0 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_7(r_0, s_0, t);
  return(t);
}
ATerm write_to_0_0 (ATerm t)
{
  ATerm o_0 = NULL,q_0 = NULL;
  o_0 = t;
  t = xtc_new_file_0_0(t);
  q_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_0, o_0);
  t = u_7(c_0, q_0, o_0, t);
  t = SSL_close_file(q_0);
  t = (ATerm) ATmakeAppl(sym_FILE_1, q_0);
  return(t);
}
ATerm q_7 (ATerm k_33, ATerm l_33, ATerm t)
{
  ATerm o_1 = NULL,p_1 = NULL;
  t = l_33;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = l_33;
    }
  else
    {
      ATerm u_0 = NULL,x_0 = NULL,n_0 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          if(((o_1 != NULL) && (o_1 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            o_1 = ATgetFirst((ATermList) t);
          if(((p_1 != NULL) && (p_1 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            p_1 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(not_null(l_33));
      if(((u_0 != NULL) && (u_0 != t)))
        _fail(t);
      else
        u_0 = t;
      t = not_null(p_1);
      {
        ATerm e_1 (ATerm t)
        {
          ATerm y_10 = t;
          int a_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm y_0 = NULL;
              y_0 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = y_0;
              ;
              LocalPopChoice(a_11);
            }
          else
            {
              t = y_10;
              {
                ATerm z_0 = NULL;
                t = Cons_2_0(_id, e_1, t);
                z_0 = t;
                t = (ATerm) ATinsert(CheckATermList(z_0), not_null(k_33));
              }
            }
          return(t);
        }
        t = e_1(t);
        if(((x_0 != NULL) && (x_0 != t)))
          _fail(t);
        else
          x_0 = t;
        t = (ATerm) ATinsert(CheckATermList(not_null(x_0)), not_null(o_1));
        if(((n_0 != NULL) && (n_0 != t)))
          _fail(t);
        else
          n_0 = t;
        t = SSLsetAnnotations(not_null(n_0), not_null(u_0));
      }
    }
  return(t);
}
ATerm create_dep_file_0_0 (ATerm t)
{
  ATerm t_1 = NULL,u_1 = NULL,v_1 = NULL,w_1 = NULL,a_2 = NULL,d_2 = NULL,e_2 = NULL,f_2 = NULL,g_2 = NULL;
  u_1 = t;
  t = term_c_11;
  t = get_config_0_0(t);
  {
    ATerm d_11 = t;
    int h_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_i_11;
        t = get_config_0_0(t);
        ;
        LocalPopChoice(h_11);
      }
    else
      {
        t = d_11;
        {
          ATerm l_11 = t;
          if((PushChoice() == 0))
            {
              t = term_n_11;
              t = get_config_0_0(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = l_11;
            }
        }
      }
    t_1 = t;
    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_p_11), term_o_11), t_1);
    g_2 = t;
    t = SSL_concat_strings(g_2);
    f_2 = t;
    t = (ATerm) ATmakeAppl(sym__2, f_2, term_q_11);
    t = open_file_0_0(t);
    v_1 = t;
    t = term_r_11;
    d_2 = t;
    t = (ATerm) ATinsert(CheckATermList(u_1), term_s_11);
    e_2 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_r_11, (ATerm) ATinsert(CheckATermList(u_1), term_s_11));
    t = q_7(d_2, e_2, t);
    w_1 = t;
    t = (ATerm) ATinsert(CheckATermList(w_1), t_1);
    a_2 = t;
    t = SSL_printnl(v_1, a_2);
    t = SSL_close_file(v_1);
    t = (ATerm) ATmakeAppl(sym_FILE_1, f_2);
  }
  return(t);
}
ATerm s_7 (ATerm u_51, ATerm v_51, ATerm t)
{
  ATerm h_2 = NULL;
  t = SSL_fputc(u_51, v_51);
  h_2 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, h_2);
  return(t);
}
ATerm t_7 (ATerm i_55, ATerm j_55, ATerm t)
{
  ATerm p_2 = NULL;
  t = SSL_write_term_to_stream_text(i_55, j_55);
  p_2 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, p_2);
  return(t);
}
ATerm u_7 (ATerm a_108 (ATerm), ATerm c_451, ATerm m_55, ATerm t)
{
  ATerm v_2 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, c_451, term_q_11);
  t = open_stream_0_0(t);
  v_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_2, m_55);
  t = a_108(t);
  t = fclose_0_0(t);
  t = m_55;
  return(t);
}
ATerm p_0 (ATerm t)
{
  ATerm z_2 = NULL,a_3 = NULL,b_3 = NULL,c_3 = NULL,d_3 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm u_11 = ATgetArgument(t, 0);
      if(match_cons(u_11, sym_Stream_1))
        {
          c_3 = ATgetArgument(u_11, 0);
        }
      else
        _fail(t);
      d_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_7(c_3, d_3, t);
  z_2 = t;
  t = term_x_11;
  a_3 = t;
  t = z_2;
  if(match_cons(t, sym_Stream_1))
    {
      b_3 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_x_11, z_2);
  t = s_7(a_3, b_3, t);
  return(t);
}
ATerm write_to_text_0_0 (ATerm t)
{
  ATerm w_2 = NULL,y_2 = NULL;
  w_2 = t;
  t = xtc_new_file_0_0(t);
  y_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_2, w_2);
  t = u_7(p_0, y_2, w_2, t);
  t = SSL_close_file(y_2);
  t = (ATerm) ATmakeAppl(sym_FILE_1, y_2);
  return(t);
}
ATerm basename_1_0 (ATerm i_104 (ATerm), ATerm t)
{
  ATerm o_3 = NULL,t_3 = NULL;
  if(((t_3 != NULL) && (t_3 != t)))
    _fail(t);
  else
    t_3 = t;
  t = SSL_explode_string(not_null(t_3));
  {
    ATerm y_11 = t;
    int z_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_5 (ATerm t)
        {
          ATerm v_4 = NULL,x_4 = NULL,y_4 = NULL;
          v_4 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              x_4 = ATgetFirst((ATermList) t);
              y_4 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          {
            ATerm c_12 = t;
            int d_12 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm c_2 = NULL,k_2 = NULL,c_1 = NULL;
                t = SSLgetAnnotations(v_4);
                c_2 = t;
                t = y_4;
                t = c_5(t);
                k_2 = t;
                t = (ATerm) ATinsert(CheckATermList(k_2), x_4);
                c_1 = t;
                t = SSLsetAnnotations(c_1, c_2);
                ;
                LocalPopChoice(d_12);
              }
            else
              {
                t = c_12;
                {
                  ATerm f_12 = t;
                  int g_12 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm t_2 = NULL,d_1 = NULL;
                      t = SSLgetAnnotations(v_4);
                      t_2 = t;
                      t = x_4;
                      if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 47)))
                        _fail(t);
                      t = (ATerm) ATinsert(CheckATermList(y_4), x_4);
                      d_1 = t;
                      t = SSLsetAnnotations(d_1, t_2);
                      ;
                      LocalPopChoice(g_12);
                    }
                  else
                    {
                      t = f_12;
                      {
                        ATerm l_3 = NULL,p_3 = NULL,g_1 = NULL;
                        t = SSLgetAnnotations(v_4);
                        l_3 = t;
                        t = x_4;
                        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 46)))
                          _fail(t);
                        t = y_4;
                        t = i_104(t);
                        p_3 = t;
                        t = (ATerm) ATinsert(CheckATermList(p_3), x_4);
                        g_1 = t;
                        t = SSLsetAnnotations(g_1, l_3);
                        t = (ATerm) ATempty;
                      }
                    }
                }
              }
          }
          return(t);
        }
        t = c_5(t);
        ;
        LocalPopChoice(z_11);
      }
    else
      {
        t = y_11;
      }
    if(((o_3 != NULL) && (o_3 != t)))
      _fail(t);
    else
      o_3 = t;
    t = SSL_implode_string(not_null(o_3));
  }
  return(t);
}
ATerm at_suffix_rev_1_0 (ATerm h_96 (ATerm), ATerm t)
{
  ATerm e_6 (ATerm t)
  {
    ATerm i_12 = t;
    int j_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_5 = NULL,b_6 = NULL,c_6 = NULL,w_4 = NULL,f_5 = NULL,k_1 = NULL;
        z_5 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            b_6 = ATgetFirst((ATermList) t);
            c_6 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(z_5);
        w_4 = t;
        t = c_6;
        t = e_6(t);
        f_5 = t;
        t = (ATerm) ATinsert(CheckATermList(f_5), b_6);
        k_1 = t;
        t = SSLsetAnnotations(k_1, w_4);
        ;
        LocalPopChoice(j_12);
      }
    else
      {
        t = i_12;
        t = h_96(t);
      }
    return(t);
  }
  t = e_6(t);
  return(t);
}
ATerm get_filename_0_0 (ATerm t)
{
  ATerm h_6 = NULL,i_6 = NULL,j_6 = NULL;
  if(((j_6 != NULL) && (j_6 != t)))
    _fail(t);
  else
    j_6 = t;
  t = SSL_explode_string(not_null(j_6));
  {
    ATerm o_12 = t;
    int r_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_0 (ATerm t)
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm x_12 = ATgetFirst((ATermList) t);
              if(((ATgetType(x_12) != AT_INT) || (ATgetInt((ATermInt) x_12) != 47)))
                _fail(t);
              if(((h_6 != NULL) && (h_6 != (ATerm) ATgetNext((ATermList) t))))
                _fail((ATerm) ATgetNext((ATermList) t));
              else
                h_6 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          return(t);
        }
        t = at_suffix_rev_1_0(t_0, t);
        t = not_null(h_6);
        ;
        LocalPopChoice(r_12);
      }
    else
      {
        t = o_12;
      }
    if(((i_6 != NULL) && (i_6 != t)))
      _fail(t);
    else
      i_6 = t;
    t = SSL_implode_string(not_null(i_6));
  }
  return(t);
}
ATerm map_1_0 (ATerm j_95 (ATerm), ATerm t)
{
  ATerm e_7 (ATerm t)
  {
    ATerm a_7 = NULL,b_7 = NULL,d_7 = NULL;
    a_7 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = a_7;
      }
    else
      {
        ATerm u_5 = NULL,d_6 = NULL,g_6 = NULL,m_1 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            b_7 = ATgetFirst((ATermList) t);
            d_7 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(a_7);
        u_5 = t;
        t = b_7;
        t = j_95(t);
        d_6 = t;
        t = d_7;
        t = e_7(t);
        g_6 = t;
        t = (ATerm) ATinsert(CheckATermList(g_6), d_6);
        m_1 = t;
        t = SSLsetAnnotations(m_1, u_5);
      }
    return(t);
  }
  t = e_7(t);
  return(t);
}
ATerm v_0 (ATerm t)
{
  ATerm y_12 = t;
  int a_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(a_13);
    }
  else
    {
      t = y_12;
    }
  return(t);
}
ATerm w_0 (ATerm t)
{
  t = term_b_13;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm c_13 = t;
  int d_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_8 = NULL;
      v_8 = t;
      t = SSL_is_string(v_8);
      ;
      LocalPopChoice(d_13);
    }
  else
    {
      t = c_13;
      {
        ATerm e_13 = t;
        int f_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(v_0, t);
            ;
            LocalPopChoice(f_13);
          }
        else
          {
            t = e_13;
            {
              ATerm m_9 = NULL,n_9 = NULL,o_9 = NULL;
              m_9 = t;
              if(match_cons(t, sym_Path_1))
                {
                  n_9 = ATgetArgument(t, 0);
                  t = n_9;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      n_9 = ATgetArgument(t, 0);
                      t = n_9;
                      {
                        ATerm g_13 = t;
                        int h_13 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(h_13);
                          }
                        else
                          {
                            t = g_13;
                            t = debug_1_0(w_0, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm c_10 = NULL,d_10 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          n_9 = ATgetArgument(t, 0);
                          o_9 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = n_9;
                      t = eval_config_0_0(t);
                      c_10 = t;
                      t = o_9;
                      t = eval_config_0_0(t);
                      d_10 = t;
                      t = (ATerm) ATmakeAppl(sym__2, c_10, d_10);
                      t = i_8(c_10, d_10, t);
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
  ATerm h_10 = NULL,i_10 = NULL;
  h_10 = t;
  t = term_i_13;
  i_10 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_i_13, h_10);
  t = d_9(i_10, h_10, t);
  {
    ATerm k_13 = t;
    int l_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_10 = NULL,l_10 = NULL;
        t = eval_config_0_0(t);
        k_10 = t;
        t = term_i_13;
        l_10 = t;
        t = SSL_table_put(l_10, h_10, k_10);
        t = k_10;
        ;
        LocalPopChoice(l_13);
      }
    else
      {
        t = k_13;
      }
  }
  return(t);
}
ATerm a_1 (ATerm t)
{
  ATerm s_10 = NULL;
  if(match_cons(t, sym_Specification_1))
    {
      s_10 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_10;
  t = filter_1_0(b_1, t);
  return(t);
}
ATerm b_1 (ATerm t)
{
  ATerm m_13 = t;
  if((PushChoice() == 0))
    {
      ATerm u_10 = NULL,v_10 = NULL,w_10 = NULL,r_1 = NULL;
      w_10 = t;
      if(match_cons(t, sym_Imports_1))
        {
          v_10 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(w_10);
      u_10 = t;
      t = (ATerm) ATmakeAppl(sym_Imports_1, v_10);
      r_1 = t;
      t = SSLsetAnnotations(r_1, u_10);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = m_13;
    }
  return(t);
}
ATerm flatten_stratego_0_0 (ATerm t)
{
  ATerm r_10 = NULL;
  t = map_1_0(a_1, t);
  t = concat_0_0(t);
  r_10 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, r_10);
  return(t);
}
ATerm genzip_4_0 (ATerm m_97 (ATerm), ATerm n_97 (ATerm), ATerm o_97 (ATerm), ATerm p_97 (ATerm), ATerm t)
{
  ATerm k_11 (ATerm t)
  {
    ATerm n_13 = t;
    int o_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_97(t);
        ;
        LocalPopChoice(o_13);
      }
    else
      {
        t = n_13;
        {
          ATerm x_10 = NULL,b_11 = NULL,e_11 = NULL,f_11 = NULL,g_11 = NULL,j_11 = NULL,v_3 = NULL;
          t = n_97(t);
          j_11 = t;
          if(match_cons(t, sym__2))
            {
              b_11 = ATgetArgument(t, 0);
              e_11 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(j_11);
          x_10 = t;
          t = b_11;
          t = p_97(t);
          f_11 = t;
          t = e_11;
          t = k_11(t);
          g_11 = t;
          t = (ATerm) ATmakeAppl(sym__2, f_11, g_11);
          v_3 = t;
          t = SSLsetAnnotations(v_3, x_10);
          t = o_97(t);
        }
      }
    return(t);
  }
  t = k_11(t);
  return(t);
}
ATerm f_1 (ATerm t)
{
  ATerm m_11 = NULL;
  if(match_cons(t, sym_Imports_1))
    {
      m_11 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = m_11;
  return(t);
}
ATerm x_7 (ATerm p_153, ATerm t)
{
  t = p_153;
  t = filter_1_0(f_1, t);
  t = concat_0_0(t);
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm w_11 = NULL;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_p_13;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      ATerm e_12 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          w_11 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, term_q_13);
      e_12 = t;
      t = (ATerm) ATmakeAppl(sym__2, w_11, (ATerm) ATinsert(ATempty, term_q_13));
      t = j_8(w_11, e_12, t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
ATerm pass_keep_0_0 (ATerm t)
{
  ATerm l_12 = NULL,m_12 = NULL,n_12 = NULL,p_12 = NULL;
  t = term_r_13;
  {
    ATerm s_13 = t;
    int t_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        ;
        LocalPopChoice(t_13);
      }
    else
      {
        t = s_13;
        t = term_v_13;
      }
    m_12 = t;
    t = term_v_13;
    p_12 = t;
    t = (ATerm) ATmakeAppl(sym__2, m_12, term_v_13);
    t = y_7(m_12, p_12, t);
    n_12 = t;
    t = SSL_int_to_string(n_12);
    l_12 = t;
    t = (ATerm) ATinsert(ATinsert(ATempty, l_12), term_r_13);
  }
  return(t);
}
ATerm y_7 (ATerm a_49, ATerm b_49, ATerm t)
{
  ATerm w_13 = t;
  int x_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(a_49, b_49);
      ;
      LocalPopChoice(x_13);
    }
  else
    {
      t = w_13;
      t = SSL_subtr(a_49, b_49);
    }
  return(t);
}
ATerm pass_verbose_0_0 (ATerm t)
{
  ATerm q_12 = NULL,s_12 = NULL,t_12 = NULL,v_12 = NULL;
  t = term_y_13;
  {
    ATerm z_13 = t;
    int f_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        ;
        LocalPopChoice(f_14);
      }
    else
      {
        t = z_13;
        t = term_v_13;
      }
    s_12 = t;
    t = term_v_13;
    v_12 = t;
    t = (ATerm) ATmakeAppl(sym__2, s_12, term_v_13);
    t = y_7(s_12, v_12, t);
    t_12 = t;
    t = SSL_int_to_string(t_12);
    q_12 = t;
    t = (ATerm) ATinsert(ATinsert(ATempty, q_12), term_y_13);
  }
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm n_117 (ATerm), ATerm o_117 (ATerm), ATerm t)
{
  t = write_to_0_0(t);
  t = xtc_transform_file_2_0(n_117, o_117, t);
  t = read_from_0_0(t);
  return(t);
}
ATerm z_7 (ATerm x_56, ATerm y_56, ATerm t)
{
  t = SSL_execvp(x_56, y_56);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm a_14 = NULL,b_14 = NULL,c_14 = NULL,d_14 = NULL;
  a_14 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      b_14 = ATgetArgument(t, 0);
      {
        ATerm r_7 = NULL,v_7 = NULL;
        t = SSL_int_to_string(b_14);
        r_7 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_h_14), r_7), term_g_14);
        v_7 = t;
        t = SSL_concat_strings(v_7);
      }
    }
  else
    {
      ATerm k_9 = NULL,p_9 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          b_14 = ATgetArgument(t, 0);
          c_14 = ATgetArgument(t, 1);
          d_14 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(c_14);
      k_9 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, d_14), term_j_14), k_9), term_i_14), b_14);
      p_9 = t;
      t = SSL_concat_strings(p_9);
    }
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm k_14 = NULL;
  if(((k_14 != NULL) && (k_14 != t)))
    _fail(t);
  else
    k_14 = t;
  {
    ATerm l_14 = t;
    int m_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_1 (ATerm t)
        {
          if(match_cons(t, sym_Signal_3))
            {
              ATerm n_14 = ATgetArgument(t, 0);
              if(((k_14 != NULL) && (k_14 != ATgetArgument(t, 1))))
                _fail(ATgetArgument(t, 1));
              else
                k_14 = ATgetArgument(t, 1);
              {
                ATerm o_14 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_n_20), term_g_20), term_b_20), term_x_19), term_r_19), term_m_19), term_f_19), term_b_19), term_s_18), term_p_18), term_k_18), term_f_18), term_a_18), term_u_17), term_q_17), term_m_17), term_g_17), term_x_16), term_r_16), term_l_16), term_g_16), term_z_15), term_r_15), term_n_15), term_i_15), term_e_15), term_y_14), term_u_14);
        t = fetch_elem_1_0(h_1, t);
        ;
        LocalPopChoice(m_14);
      }
    else
      {
        t = l_14;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, not_null(k_14));
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm t_14 = NULL,d_15 = NULL;
  t_14 = t;
  {
    ATerm p_20 = t;
    int q_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm r_20 = ATgetArgument(t, 0);
            d_15 = ATgetArgument(t, 1);
            {
              ATerm s_20 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(q_20);
        {
          ATerm t_20 = t;
          int u_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm y_9 = NULL,a_10 = NULL,b_10 = NULL;
              t = d_15;
              {
                ATerm w_20 = t;
                if((PushChoice() == 0))
                  {
                    if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
                      _fail(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = w_20;
                  }
                t = signal_from_number_0_0(t);
                t = signal_to_descr_0_0(t);
                y_9 = t;
                t = term_a_21;
                a_10 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, y_9), term_b_21);
                b_10 = t;
                t = SSL_printnl(a_10, b_10);
                t = (ATerm) ATmakeAppl(sym__2, term_a_21, (ATerm) ATinsert(ATinsert(ATempty, y_9), term_b_21));
              }
              ;
              LocalPopChoice(u_20);
            }
          else
            {
              t = t_20;
              t = t_14;
            }
        }
      }
    else
      {
        t = p_20;
        t = t_14;
      }
    t = t_14;
  }
  return(t);
}
ATerm fork_0_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_and_wait_1_0 (ATerm v_109 (ATerm), ATerm t)
{
  ATerm t_15 = NULL,u_15 = NULL;
  u_15 = t;
  t = fork_0_0(t);
  t_15 = t;
  {
    ATerm c_21 = t;
    int d_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = u_15;
        t = v_109(t);
        ;
        LocalPopChoice(d_21);
      }
    else
      {
        t = c_21;
        t = SSL_waitpid(t_15);
        t = warn_ifsignaled_0_0(t);
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm e_21 = ATgetArgument(t, 0);
            if(((ATgetType(e_21) != AT_INT) || (ATgetInt((ATermInt) e_21) != 0)))
              _fail(t);
            {
              ATerm f_21 = ATgetArgument(t, 1);
            }
            {
              ATerm g_21 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = u_15;
      }
  }
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm a_16 = NULL;
  ATerm i_1 (ATerm t)
  {
    ATerm e_16 = NULL,f_16 = NULL;
    e_16 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(a_16), e_16);
    t = d_9(not_null(a_16), e_16, t);
    f_16 = t;
    t = (ATerm) ATmakeAppl(sym__2, e_16, f_16);
    return(t);
  }
  if(((a_16 != NULL) && (a_16 != t)))
    _fail(t);
  else
    a_16 = t;
  t = SSL_table_keys(not_null(a_16));
  t = map_1_0(i_1, t);
  return(t);
}
ATerm if_verbose5_1_0 (ATerm o_109 (ATerm), ATerm t)
{
  ATerm k_16 = NULL;
  k_16 = t;
  {
    ATerm i_21 = t;
    int k_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_16 = NULL;
        t = term_y_13;
        t = get_config_0_0(t);
        o_16 = t;
        t = (ATerm) ATmakeAppl(sym__2, o_16, term_t_19);
        t = geq_0_0(t);
        t = k_16;
        t = o_109(t);
        ;
        LocalPopChoice(k_21);
      }
    else
      {
        t = i_21;
        t = k_16;
      }
  }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm n_109 (ATerm), ATerm t)
{
  ATerm w_16 = NULL;
  w_16 = t;
  {
    ATerm l_21 = t;
    int m_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_16 = NULL;
        t = term_y_13;
        t = get_config_0_0(t);
        y_16 = t;
        t = (ATerm) ATmakeAppl(sym__2, y_16, term_a_17);
        t = geq_0_0(t);
        t = w_16;
        t = n_109(t);
        ;
        LocalPopChoice(m_21);
      }
    else
      {
        t = l_21;
        t = w_16;
      }
  }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm p_109 (ATerm), ATerm t)
{
  ATerm d_17 = NULL;
  d_17 = t;
  {
    ATerm n_21 = t;
    int o_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_17 = NULL;
        t = term_y_13;
        t = get_config_0_0(t);
        f_17 = t;
        t = (ATerm) ATmakeAppl(sym__2, f_17, term_g_15);
        t = geq_0_0(t);
        t = d_17;
        t = p_109(t);
        ;
        LocalPopChoice(o_21);
      }
    else
      {
        t = n_21;
        t = d_17;
      }
  }
  return(t);
}
ATerm c_8 (ATerm n_99 (ATerm), ATerm v_38, ATerm u_38, ATerm t)
{
  ATerm m_18 (ATerm t)
  {
    ATerm x_17 = NULL,y_17 = NULL,d_18 = NULL;
    x_17 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = not_null(u_38);
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            y_17 = ATgetFirst((ATermList) t);
            d_18 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm p_21 = t;
          int v_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = x_17;
              {
                ATerm j_1 (ATerm t)
                {
                  t = not_null(u_38);
                  return(t);
                }
                t = m_8(n_99, j_1, not_null(y_17), not_null(d_18), t);
                t = m_18(t);
              }
              ;
              LocalPopChoice(v_21);
            }
          else
            {
              t = p_21;
              {
                ATerm p_10 = NULL,z_10 = NULL,y_3 = NULL;
                t = SSLgetAnnotations(x_17);
                p_10 = t;
                t = d_18;
                t = m_18(t);
                z_10 = t;
                t = (ATerm) ATinsert(CheckATermList(z_10), y_17);
                y_3 = t;
                t = SSLsetAnnotations(y_3, p_10);
              }
            }
        }
      }
    return(t);
  }
  t = not_null(v_38);
  t = m_18(t);
  return(t);
}
ATerm l_1 (ATerm t)
{
  ATerm h_19 = NULL;
  if(match_cons(t, sym__2))
    {
      h_19 = ATgetArgument(t, 0);
      if((h_19 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm d_8 (ATerm q_61, ATerm r_61, ATerm s_61, ATerm t)
{
  ATerm t_18 = NULL,w_18 = NULL,x_18 = NULL;
  t_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_61, r_61);
  {
    ATerm w_21 = t;
    int y_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm z_21 = ATgetArgument(t, 0);
            ATerm a_22 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, q_61, r_61);
        t = d_9(q_61, r_61, t);
        ;
        LocalPopChoice(y_21);
      }
    else
      {
        t = w_21;
        t = (ATerm) ATempty;
      }
    x_18 = t;
    t = (ATerm) ATmakeAppl(sym__2, x_18, s_61);
    t = c_8(l_1, x_18, s_61, t);
    w_18 = t;
    t = SSL_table_put(q_61, r_61, w_18);
    t = t_18;
  }
  return(t);
}
ATerm e_8 (ATerm s_113 (ATerm), ATerm a_62, ATerm z_61, ATerm t)
{
  ATerm n_1 (ATerm t)
  {
    ATerm i_19 = NULL,j_19 = NULL;
    if(match_cons(t, sym__2))
      {
        i_19 = ATgetArgument(t, 0);
        j_19 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, not_null(a_62), i_19, j_19);
    t = s_113(t);
    return(t);
  }
  t = not_null(z_61);
  t = map_1_0(n_1, t);
  return(t);
}
ATerm o_20 (ATerm u_19, ATerm t)
{
  t = SSL_fclose(u_19);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm i_20 = NULL,k_20 = NULL;
  k_20 = t;
  if(match_cons(t, sym_Stream_1))
    {
      i_20 = ATgetArgument(t, 0);
      {
        ATerm b_22 = t;
        int c_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(i_20);
            ;
            LocalPopChoice(c_22);
          }
        else
          {
            t = b_22;
            t = o_20(k_20, t);
          }
      }
    }
  else
    {
      t = o_20(k_20, t);
    }
  return(t);
}
ATerm f_8 (ATerm k_55, ATerm t)
{
  t = SSL_read_term_from_stream(k_55);
  return(t);
}
ATerm g_8 (ATerm w_51, ATerm x_51, ATerm t)
{
  ATerm v_20 = NULL;
  t = SSL_fopen(w_51, x_51);
  v_20 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, v_20);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm x_20 = NULL;
  t = SSL_stdin_stream();
  x_20 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, x_20);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm y_20 = NULL;
  t = SSL_stdout_stream();
  y_20 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, y_20);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm z_20 = NULL;
  t = SSL_stderr_stream();
  z_20 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_20);
  return(t);
}
ATerm h_23 (ATerm h_21, ATerm t)
{
  ATerm j_21 = NULL;
  t = SSL_explode_term(h_21);
  if(match_cons(t, sym__2))
    {
      ATerm e_22 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) e_22) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm f_22 = ATgetArgument(t, 1);
        if(((ATgetType(f_22) == AT_LIST) && !(ATisEmpty(f_22))))
          {
            j_21 = ATgetFirst((ATermList) f_22);
            {
              ATerm l_22 = (ATerm) ATgetNext((ATermList) f_22);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = j_21;
  if(match_cons(t, sym_stderr_0))
    {
      t = j_21;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = j_21;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = j_21;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm j_23 (ATerm q_21, ATerm r_21, ATerm s_21, ATerm t)
{
  ATerm t_21 = NULL,u_21 = NULL,x_21 = NULL,d_22 = NULL,b_4 = NULL;
  t = SSLgetAnnotations(s_21);
  x_21 = t;
  t = q_21;
  if(match_cons(t, sym_Path_1))
    {
      d_22 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, d_22, r_21);
  b_4 = t;
  t = SSLsetAnnotations(b_4, x_21);
  if(match_cons(t, sym__2))
    {
      t_21 = ATgetArgument(t, 0);
      u_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_8(t_21, u_21, t);
  return(t);
}
ATerm m_23 (ATerm g_22, ATerm h_22, ATerm i_22, ATerm t)
{
  ATerm j_22 = NULL,k_22 = NULL,n_22 = NULL,y_22 = NULL,c_4 = NULL;
  t = SSLgetAnnotations(i_22);
  n_22 = t;
  t = SSL_is_string(g_22);
  y_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_22, h_22);
  c_4 = t;
  t = SSLsetAnnotations(c_4, n_22);
  if(match_cons(t, sym__2))
    {
      j_22 = ATgetArgument(t, 0);
      k_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_8(j_22, k_22, t);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  ATerm b_23 = NULL,c_23 = NULL,d_23 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm m_22 = ATgetArgument(t, 0);
      ATerm o_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  b_23 = t;
  if(match_cons(t, sym__2))
    {
      c_23 = ATgetArgument(t, 0);
      d_23 = ATgetArgument(t, 1);
      {
        ATerm p_22 = t;
        int q_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = h_23(b_23, t);
            ;
            LocalPopChoice(q_22);
          }
        else
          {
            t = p_22;
            {
              ATerm r_22 = t;
              int s_22 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = j_23(c_23, d_23, b_23, t);
                  ;
                  LocalPopChoice(s_22);
                }
              else
                {
                  t = r_22;
                  t = m_23(c_23, d_23, b_23, t);
                }
            }
          }
      }
    }
  else
    {
      t = h_23(b_23, t);
    }
  return(t);
}
ATerm q_1 (ATerm t)
{
  t = term_t_22;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm n_23 = NULL,o_23 = NULL,p_23 = NULL;
  ATerm u_22 = t;
  int v_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_23 = NULL;
      q_23 = t;
      t = (ATerm) ATmakeAppl(sym__2, q_23, term_w_22);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(v_22);
    }
  else
    {
      t = u_22;
      t = debug_1_0(q_1, t);
      _fail(t);
    }
  o_23 = t;
  if(match_cons(t, sym_Stream_1))
    {
      p_23 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_8(p_23, t);
  n_23 = t;
  t = o_23;
  t = fclose_0_0(t);
  t = n_23;
  return(t);
}
ATerm s_1 (ATerm t)
{
  t = term_x_22;
  return(t);
}
ATerm x_1 (ATerm t)
{
  t = term_z_22;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm a_23 = t;
  int e_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_23 = NULL,v_23 = NULL;
      u_23 = t;
      t = (ATerm) ATinsert(ATempty, term_f_23);
      v_23 = t;
      t = (ATerm) ATmakeAppl(sym__2, u_23, (ATerm) ATinsert(ATempty, term_f_23));
      t = j_8(u_23, v_23, t);
      LocalPopChoice(e_23);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = a_23;
      {
        ATerm g_23 = t;
        int i_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_23 = t;
            if((PushChoice() == 0))
              {
                ATerm w_23 = NULL,x_23 = NULL;
                w_23 = t;
                t = (ATerm) ATinsert(ATempty, term_q_13);
                x_23 = t;
                t = (ATerm) ATmakeAppl(sym__2, w_23, (ATerm) ATinsert(ATempty, term_q_13));
                t = j_8(w_23, x_23, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = k_23;
              }
            t = debug_1_0(s_1, t);
            ;
            LocalPopChoice(i_23);
          }
        else
          {
            t = g_23;
            t = debug_1_0(x_1, t);
          }
        t = (ATerm) ATempty;
      }
    }
  return(t);
}
ATerm y_1 (ATerm t)
{
  t = debug_1_0(z_1, t);
  return(t);
}
ATerm z_1 (ATerm t)
{
  t = term_l_23;
  return(t);
}
ATerm b_2 (ATerm t)
{
  t = debug_1_0(i_2, t);
  return(t);
}
ATerm i_2 (ATerm t)
{
  t = term_r_23;
  return(t);
}
ATerm j_2 (ATerm t)
{
  ATerm m_24 = NULL,p_24 = NULL,q_24 = NULL;
  m_24 = t;
  t = term_a_21;
  p_24 = t;
  t = (ATerm) ATinsert(ATempty, term_s_23);
  q_24 = t;
  t = SSL_printnl(p_24, q_24);
  t = m_24;
  return(t);
}
ATerm l_2 (ATerm t)
{
  ATerm r_24 = NULL,u_24 = NULL,w_24 = NULL;
  if(match_cons(t, sym__3))
    {
      r_24 = ATgetArgument(t, 0);
      u_24 = ATgetArgument(t, 1);
      w_24 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = d_8(r_24, u_24, w_24, t);
  return(t);
}
ATerm m_2 (ATerm t)
{
  ATerm x_24 = NULL,z_24 = NULL,b_25 = NULL;
  x_24 = t;
  t = term_a_21;
  z_24 = t;
  t = (ATerm) ATinsert(ATempty, term_t_23);
  b_25 = t;
  t = SSL_printnl(z_24, b_25);
  t = x_24;
  return(t);
}
ATerm n_2 (ATerm t)
{
  ATerm e_25 = NULL,f_25 = NULL,g_25 = NULL;
  e_25 = t;
  t = term_a_21;
  f_25 = t;
  t = (ATerm) ATinsert(ATempty, term_s_23);
  g_25 = t;
  t = SSL_printnl(f_25, g_25);
  t = e_25;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm y_23 = NULL,z_23 = NULL,a_24 = NULL,b_24 = NULL,c_24 = NULL,d_24 = NULL,e_24 = NULL,f_24 = NULL,h_24 = NULL,i_24 = NULL;
  y_23 = t;
  t = if_verbose5_1_0(y_1, t);
  {
    ATerm g_24 = t;
    if((PushChoice() == 0))
      {
        ATerm j_24 = NULL,k_24 = NULL;
        t = term_l_24;
        j_24 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, y_23);
        k_24 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_l_24, (ATerm) ATmakeAppl(sym_Imported_1, y_23));
        t = d_9(j_24, k_24, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = g_24;
      }
    a_24 = t;
    t = term_l_24;
    f_24 = t;
    t = term_n_24;
    h_24 = t;
    t = (ATerm) ATinsert(ATempty, y_23);
    i_24 = t;
    t = SSL_table_put(f_24, h_24, i_24);
    t = a_24;
    t = if_verbose4_1_0(b_2, t);
    t = read_repository_file_0_0(t);
    t = if_verbose6_1_0(j_2, t);
    z_23 = t;
    t = term_l_24;
    e_24 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_l_24, z_23);
    t = e_8(l_2, e_24, z_23, t);
    t = if_verbose6_1_0(m_2, t);
    t = term_l_24;
    b_24 = t;
    t = (ATerm) ATmakeAppl(sym_Imported_1, y_23);
    c_24 = t;
    t = (ATerm) ATempty;
    d_24 = t;
    t = SSL_table_put(b_24, c_24, d_24);
    t = (ATerm) ATmakeAppl(sym__3, term_l_24, (ATerm)ATmakeAppl(sym_Imported_1, y_23), (ATerm) ATempty);
    t = if_verbose4_1_0(n_2, t);
  }
  return(t);
}
ATerm repeat_1_0 (ATerm u_88 (ATerm), ATerm t)
{
  ATerm k_25 (ATerm t)
  {
    ATerm o_24 = t;
    int s_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_88(t);
        t = k_25(t);
        ;
        LocalPopChoice(s_24);
      }
    else
      {
        t = o_24;
      }
    return(t);
  }
  t = k_25(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm t_24 = t;
  int v_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_y_24;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(v_24);
    }
  else
    {
      t = t_24;
      {
        ATerm a_25 = t;
        int c_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_25 = NULL;
            t = term_d_25;
            o_25 = t;
            t = SSL_getenv(o_25);
            ;
            LocalPopChoice(c_25);
          }
        else
          {
            t = a_25;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
ATerm o_2 (ATerm t)
{
  t = debug_1_0(q_2, t);
  return(t);
}
ATerm q_2 (ATerm t)
{
  t = term_h_25;
  return(t);
}
ATerm r_2 (ATerm t)
{
  ATerm y_25 = NULL,z_25 = NULL;
  t = term_l_24;
  y_25 = t;
  t = term_i_25;
  z_25 = t;
  t = term_j_25;
  t = d_9(y_25, z_25, t);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm l_25 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = l_25;
      }
  }
  return(t);
}
ATerm s_2 (ATerm t)
{
  t = debug_1_0(u_2, t);
  return(t);
}
ATerm u_2 (ATerm t)
{
  t = term_m_25;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm p_25 = NULL;
  t = if_verbose5_1_0(o_2, t);
  p_25 = t;
  {
    ATerm n_25 = t;
    int q_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_25 = NULL,v_25 = NULL;
        t = term_l_24;
        u_25 = t;
        t = term_n_24;
        v_25 = t;
        t = term_r_25;
        t = d_9(u_25, v_25, t);
        ;
        LocalPopChoice(q_25);
      }
    else
      {
        t = n_25;
        {
          ATerm x_25 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          x_25 = t;
          t = repeat_1_0(r_2, t);
          t = x_25;
        }
      }
    t = p_25;
    t = if_verbose5_1_0(s_2, t);
  }
  return(t);
}
ATerm x_2 (ATerm t)
{
  t = debug_1_0(e_3, t);
  return(t);
}
ATerm e_3 (ATerm t)
{
  t = term_s_25;
  return(t);
}
ATerm d_27 (ATerm d_26, ATerm t)
{
  ATerm h_26 = NULL,i_26 = NULL,k_26 = NULL;
  t = term_l_24;
  i_26 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, d_26);
  k_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_24, (ATerm) ATmakeAppl(sym_Tool_1, d_26));
  t = d_9(i_26, k_26, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm t_25 = ATgetFirst((ATermList) t);
      if(match_cons(t_25, sym__2))
        {
          ATerm a_26 = ATgetArgument(t_25, 0);
          h_26 = ATgetArgument(t_25, 1);
        }
      else
        _fail(t);
      {
        ATerm w_25 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = h_26;
  return(t);
}
ATerm g_3 (ATerm t)
{
  t = debug_1_0(h_3, t);
  return(t);
}
ATerm h_3 (ATerm t)
{
  t = term_s_25;
  return(t);
}
ATerm i_3 (ATerm t)
{
  t = term_l_24;
  t = table_getlist_0_0(t);
  t = debug_1_0(j_3, t);
  return(t);
}
ATerm j_3 (ATerm t)
{
  t = term_b_26;
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm c_26 = t;
  int e_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_26 = NULL,m_26 = NULL,n_26 = NULL;
      t = if_verbose5_1_0(x_2, t);
      t = xtc_load_0_0(t);
      if(((n_26 != NULL) && (n_26 != t)))
        _fail(t);
      else
        n_26 = t;
      if(match_cons(t, sym__2))
        {
          l_26 = ATgetArgument(t, 0);
          m_26 = ATgetArgument(t, 1);
          {
            ATerm f_26 = t;
            int g_26 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm s_26 = NULL,t_26 = NULL,u_26 = NULL;
                t = term_l_24;
                if(((t_26 != NULL) && (t_26 != t)))
                  _fail(t);
                else
                  t_26 = t;
                t = (ATerm) ATmakeAppl(sym_Tool_1, not_null(l_26));
                if(((u_26 != NULL) && (u_26 != t)))
                  _fail(t);
                else
                  u_26 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_l_24, (ATerm) ATmakeAppl(sym_Tool_1, not_null(l_26)));
                t = d_9(not_null(t_26), not_null(u_26), t);
                {
                  ATerm f_3 (ATerm t)
                  {
                    if(match_cons(t, sym__2))
                      {
                        if(((m_26 != NULL) && (m_26 != ATgetArgument(t, 0))))
                          _fail(ATgetArgument(t, 0));
                        else
                          m_26 = ATgetArgument(t, 0);
                        if(((s_26 != NULL) && (s_26 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          s_26 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = fetch_1_0(f_3, t);
                  t = not_null(s_26);
                }
                ;
                LocalPopChoice(g_26);
              }
            else
              {
                t = f_26;
                t = d_27(not_null(n_26), t);
              }
          }
        }
      else
        {
          t = d_27(not_null(n_26), t);
        }
      t = if_verbose5_1_0(g_3, t);
      ;
      LocalPopChoice(e_26);
    }
  else
    {
      t = c_26;
      {
        ATerm c_27 = NULL,t_11 = NULL,v_11 = NULL;
        c_27 = t;
        t = term_a_21;
        t_11 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_o_26), c_27), term_j_26);
        v_11 = t;
        t = SSL_printnl(t_11, v_11);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_o_26), c_27), term_j_26);
        t = if_verbose5_1_0(i_3, t);
        _fail(t);
      }
    }
  return(t);
}
ATerm xtc_command_1_0 (ATerm e_117 (ATerm), ATerm t)
{
  ATerm h_27 = NULL,i_27 = NULL;
  if(((i_27 != NULL) && (i_27 != t)))
    _fail(t);
  else
    i_27 = t;
  t = e_117(t);
  t = xtc_find_0_0(t);
  if(((h_27 != NULL) && (h_27 != t)))
    _fail(t);
  else
    h_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(h_27), not_null(i_27));
  {
    ATerm k_3 (ATerm t)
    {
      ATerm j_27 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, not_null(h_27), not_null(i_27));
      t = z_7(not_null(h_27), not_null(i_27), t);
      t = term_p_26;
      j_27 = t;
      t = SSL_exit(j_27);
      return(t);
    }
    t = fork_and_wait_1_0(k_3, t);
    t = not_null(i_27);
  }
  return(t);
}
ATerm h_8 (ATerm h_106 (ATerm), ATerm i_50, ATerm g_50, ATerm t)
{
  ATerm k_27 = NULL,l_27 = NULL,m_27 = NULL,n_27 = NULL,o_27 = NULL,p_27 = NULL;
  n_27 = t;
  t = h_106(t);
  k_27 = t;
  t = (ATerm) ATmakeAppl(sym__3, k_27, i_50, g_50);
  t = e_9(k_27, i_50, g_50, t);
  {
    ATerm q_26 = t;
    int r_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_27 = NULL;
        t = term_v_26;
        q_27 = t;
        t = (ATerm) ATmakeAppl(sym__2, k_27, term_v_26);
        t = d_9(k_27, q_27, t);
        ;
        LocalPopChoice(r_26);
      }
    else
      {
        t = q_26;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        l_27 = ATgetFirst((ATermList) t);
        m_27 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_v_26;
    o_27 = t;
    t = (ATerm) ATinsert(CheckATermList(m_27), (ATerm) ATinsert(CheckATermList(l_27), i_50));
    p_27 = t;
    t = SSL_table_put(k_27, o_27, p_27);
    t = n_27;
  }
  return(t);
}
ATerm g_28 (ATerm u_27, ATerm t)
{
  t = u_27;
  {
    ATerm w_26 = t;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm x_26 = ATgetArgument(t, 0);
            ATerm y_26 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = w_26;
      }
    t = term_z_26;
    t = debug_1_0(m_3, t);
    t = (ATerm) ATmakeAppl(sym__2, u_27, term_q_11);
    t = open_file_0_0(t);
  }
  return(t);
}
ATerm k_28 (ATerm w_27, ATerm x_27, ATerm y_27, ATerm t)
{
  t = SSL_open_file(w_27, x_27);
  return(t);
}
ATerm m_3 (ATerm t)
{
  t = term_a_27;
  return(t);
}
ATerm open_file_0_0 (ATerm t)
{
  ATerm b_28 = NULL,c_28 = NULL,e_28 = NULL;
  b_28 = t;
  if(match_cons(t, sym__2))
    {
      c_28 = ATgetArgument(t, 0);
      e_28 = ATgetArgument(t, 1);
      {
        ATerm b_27 = t;
        int e_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = g_28(b_28, t);
            ;
            LocalPopChoice(e_27);
          }
        else
          {
            t = b_27;
            t = k_28(c_28, e_28, b_28, t);
          }
      }
    }
  else
    {
      t = g_28(b_28, t);
    }
  return(t);
}
ATerm i_8 (ATerm k_46, ATerm l_46, ATerm t)
{
  t = SSL_strcat(k_46, l_46);
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm new_file_0_0 (ATerm t)
{
  ATerm p_28 = NULL,q_28 = NULL,r_28 = NULL;
  t = term_f_27;
  t = new_0_0(t);
  p_28 = t;
  t = term_g_27;
  q_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_28, term_g_27);
  t = i_8(p_28, q_28, t);
  r_28 = t;
  {
    ATerm r_27 = t;
    int s_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_28 = NULL;
        t = (ATerm) ATinsert(ATempty, term_q_13);
        t_28 = t;
        t = (ATerm) ATmakeAppl(sym__2, r_28, (ATerm) ATinsert(ATempty, term_q_13));
        t = j_8(r_28, t_28, t);
        t = new_file_0_0(t);
        ;
        LocalPopChoice(s_27);
      }
    else
      {
        t = r_27;
        t = r_28;
      }
  }
  return(t);
}
ATerm n_3 (ATerm t)
{
  t = term_t_27;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm y_28 = NULL,z_28 = NULL;
  t = new_file_0_0(t);
  y_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_28, term_q_11);
  t = open_file_0_0(t);
  t = term_f_27;
  z_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_28, term_f_27);
  t = h_8(n_3, y_28, z_28, t);
  t = y_28;
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm t)
{
  ATerm n_29 = NULL,o_29 = NULL;
  n_29 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm a_12 = NULL,b_12 = NULL;
      t = n_29;
      t = xtc_new_file_0_0(t);
      a_12 = t;
      t = m_0(t);
      b_12 = t;
      t = (ATerm) ATmakeAppl(sym__2, b_12, (ATerm) ATinsert(ATinsert(ATempty, a_12), term_c_11));
      t = conc_0_0(t);
      t = xtc_command_1_0(l_0, t);
      t = SSL_close_file(a_12);
      t = (ATerm) ATmakeAppl(sym_FILE_1, a_12);
    }
  else
    {
      ATerm h_12 = NULL,k_12 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          o_29 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = o_29;
      t = xtc_new_file_0_0(t);
      h_12 = t;
      t = m_0(t);
      k_12 = t;
      t = (ATerm) ATmakeAppl(sym__2, k_12, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, h_12), term_c_11), o_29), term_v_27));
      t = conc_0_0(t);
      t = xtc_command_1_0(l_0, t);
      t = SSL_close_file(h_12);
      t = (ATerm) ATmakeAppl(sym_FILE_1, h_12);
    }
  return(t);
}
ATerm k_31 (ATerm z_29, ATerm a_30, ATerm b_30, ATerm t)
{
  ATerm c_30 = NULL,f_30 = NULL,u_12 = NULL,w_12 = NULL,f_4 = NULL;
  t = SSLgetAnnotations(b_30);
  c_30 = t;
  t = z_29;
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
    f_30 = t;
    t = (ATerm) ATmakeAppl(sym__2, f_30, a_30);
    f_4 = t;
    t = SSLsetAnnotations(f_4, c_30);
    w_12 = t;
    t = SSL_explode_term(w_12);
    if(match_cons(t, sym__2))
      {
        ATerm a_28 = ATgetArgument(t, 0);
        if((ATgetSymbol((ATermAppl) a_28) != ATmakeSymbol("", 0, ATtrue)))
          _fail(t);
        {
          ATerm d_28 = ATgetArgument(t, 1);
          if(((ATgetType(d_28) == AT_LIST) && !(ATisEmpty(d_28))))
            {
              ATerm f_28 = ATgetFirst((ATermList) d_28);
              ATerm h_28 = (ATerm) ATgetNext((ATermList) d_28);
              if(((ATgetType(h_28) == AT_LIST) && !(ATisEmpty(h_28))))
                {
                  u_12 = ATgetFirst((ATermList) h_28);
                  {
                    ATerm i_28 = (ATerm) ATgetNext((ATermList) h_28);
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
    t = u_12;
    {
      ATerm j_28 = t;
      int l_28 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm m_28 = t;
          int n_28 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm m_30 = NULL;
              if(match_cons(t, sym_FILE_1))
                {
                  m_30 = ATgetArgument(t, 0);
                  {
                    ATerm z_12 = NULL,h_4 = NULL;
                    t = SSLgetAnnotations(u_12);
                    z_12 = t;
                    t = (ATerm) ATmakeAppl(sym_FILE_1, m_30);
                    h_4 = t;
                    t = SSLsetAnnotations(h_4, z_12);
                  }
                }
              else
                {
                  if(!(match_cons(t, sym_stdin_0)))
                    _fail(t);
                  t = u_12;
                }
              LocalPopChoice(n_28);
              t = xtc_transform_file_2_0(q_3, r_3, t);
            }
          else
            {
              t = m_28;
              t = xtc_transform_term_2_0(s_3, u_3, t);
            }
          t = read_from_0_0(t);
          ;
          LocalPopChoice(l_28);
        }
      else
        {
          t = j_28;
          {
            ATerm w_30 = NULL,x_30 = NULL,y_30 = NULL;
            t = term_a_21;
            x_30 = t;
            t = (ATerm) ATinsert(ATinsert(ATempty, a_30), term_o_28);
            y_30 = t;
            t = SSL_printnl(x_30, y_30);
            t = term_v_13;
            w_30 = t;
            t = SSL_exit(w_30);
            t = (ATerm) ATinsert(ATinsert(ATempty, a_30), term_o_28);
          }
        }
    }
  }
  return(t);
}
ATerm l_31 (ATerm z_30, ATerm a_31, ATerm t)
{
  ATerm j_13 = NULL;
  t = SSL_explode_term(a_31);
  if(match_cons(t, sym__2))
    {
      ATerm s_28 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) s_28) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm u_28 = ATgetArgument(t, 1);
        if(((ATgetType(u_28) == AT_LIST) && !(ATisEmpty(u_28))))
          {
            ATerm v_28 = ATgetFirst((ATermList) u_28);
            ATerm w_28 = (ATerm) ATgetNext((ATermList) u_28);
            if(((ATgetType(w_28) == AT_LIST) && !(ATisEmpty(w_28))))
              {
                j_13 = ATgetFirst((ATermList) w_28);
                {
                  ATerm x_28 = (ATerm) ATgetNext((ATermList) w_28);
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
  t = j_13;
  {
    ATerm a_29 = t;
    int b_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = read_from_0_0(t);
        ;
        LocalPopChoice(b_29);
      }
    else
      {
        t = a_29;
        {
          ATerm c_31 = NULL,d_31 = NULL,e_31 = NULL;
          t = term_a_21;
          d_31 = t;
          t = (ATerm) ATinsert(ATinsert(ATempty, z_30), term_o_28);
          e_31 = t;
          t = SSL_printnl(d_31, e_31);
          t = term_v_13;
          c_31 = t;
          t = SSL_exit(c_31);
          t = (ATerm) ATinsert(ATinsert(ATempty, z_30), term_o_28);
        }
      }
  }
  return(t);
}
ATerm q_3 (ATerm t)
{
  t = term_c_29;
  return(t);
}
ATerm r_3 (ATerm t)
{
  ATerm o_30 = NULL,p_30 = NULL,q_30 = NULL,r_30 = NULL;
  r_30 = t;
  t = pass_verbose_0_0(t);
  o_30 = t;
  t = r_30;
  t = pass_keep_0_0(t);
  p_30 = t;
  t = term_d_29;
  t = get_config_0_0(t);
  q_30 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, q_30), p_30), o_30);
  t = concat_0_0(t);
  return(t);
}
ATerm s_3 (ATerm t)
{
  t = term_c_29;
  return(t);
}
ATerm u_3 (ATerm t)
{
  ATerm s_30 = NULL,t_30 = NULL,u_30 = NULL,v_30 = NULL;
  v_30 = t;
  t = pass_verbose_0_0(t);
  s_30 = t;
  t = v_30;
  t = pass_keep_0_0(t);
  t_30 = t;
  t = term_d_29;
  t = get_config_0_0(t);
  u_30 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, u_30), t_30), s_30);
  t = concat_0_0(t);
  return(t);
}
ATerm parse_module_0_0 (ATerm t)
{
  ATerm f_31 = NULL,g_31 = NULL,h_31 = NULL;
  f_31 = t;
  if(match_cons(t, sym__2))
    {
      g_31 = ATgetArgument(t, 0);
      h_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_31;
  if(match_string(t, "rtree"))
    {
      ATerm e_29 = t;
      int f_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = k_31(g_31, h_31, f_31, t);
          ;
          LocalPopChoice(f_29);
        }
      else
        {
          t = e_29;
          t = l_31(h_31, f_31, t);
        }
    }
  else
    {
      t = k_31(g_31, h_31, f_31, t);
    }
  return(t);
}
ATerm debug_1_0 (ATerm y_107 (ATerm), ATerm t)
{
  ATerm v_31 = NULL,c_32 = NULL,d_32 = NULL,e_32 = NULL;
  v_31 = t;
  t = y_107(t);
  c_32 = t;
  t = term_a_21;
  d_32 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, v_31), c_32);
  e_32 = t;
  t = SSL_printnl(d_32, e_32);
  t = v_31;
  return(t);
}
ATerm if_verbose3_1_0 (ATerm m_109 (ATerm), ATerm t)
{
  ATerm k_32 = NULL;
  k_32 = t;
  {
    ATerm g_29 = t;
    int h_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_32 = NULL;
        t = term_y_13;
        t = get_config_0_0(t);
        m_32 = t;
        t = (ATerm) ATmakeAppl(sym__2, m_32, term_b_15);
        t = geq_0_0(t);
        t = k_32;
        t = m_109(t);
        ;
        LocalPopChoice(h_29);
      }
    else
      {
        t = g_29;
        t = k_32;
      }
  }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm v_95 (ATerm), ATerm t)
{
  ATerm o_32 = NULL;
  ATerm w_3 (ATerm t)
  {
    t = v_95(t);
    if(((o_32 != NULL) && (o_32 != t)))
      _fail(t);
    else
      o_32 = t;
    return(t);
  }
  t = fetch_1_0(w_3, t);
  t = not_null(o_32);
  return(t);
}
ATerm j_8 (ATerm o_51, ATerm p_51, ATerm t)
{
  t = SSL_access(o_51, p_51);
  return(t);
}
ATerm k_8 (ATerm x_87 (ATerm), ATerm z_31, ATerm y_31, ATerm t)
{
  t = x_87(t);
  {
    ATerm i_29 = t;
    int j_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_3 (ATerm t)
        {
          ATerm p_32 = NULL;
          ATerm z_3 (ATerm t)
          {
            ATerm q_32 = NULL,t_32 = NULL,u_32 = NULL,v_32 = NULL,w_32 = NULL;
            t_32 = t;
            t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, t_32), term_o_11), not_null(z_31)), term_k_29), not_null(p_32));
            w_32 = t;
            t = SSL_concat_strings(w_32);
            u_32 = t;
            t = (ATerm) ATinsert(ATempty, term_q_13);
            v_32 = t;
            t = (ATerm) ATmakeAppl(sym__2, u_32, (ATerm) ATinsert(ATempty, term_q_13));
            t = j_8(u_32, v_32, t);
            q_32 = t;
            t = (ATerm) ATmakeAppl(sym__2, t_32, (ATerm) ATmakeAppl(sym_FILE_1, q_32));
            return(t);
          }
          if(((p_32 != NULL) && (p_32 != t)))
            _fail(t);
          else
            p_32 = t;
          t = not_null(y_31);
          t = fetch_elem_1_0(z_3, t);
          return(t);
        }
        t = fetch_elem_1_0(x_3, t);
        ;
        LocalPopChoice(j_29);
      }
    else
      {
        t = i_29;
        {
          ATerm l_29 = t;
          int m_29 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm a_4 (ATerm t)
              {
                ATerm x_32 = NULL,y_32 = NULL,z_32 = NULL,a_33 = NULL,b_33 = NULL,c_33 = NULL;
                x_32 = t;
                t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, x_32), term_o_11), not_null(z_31));
                c_33 = t;
                t = SSL_concat_strings(c_33);
                y_32 = t;
                t = term_l_24;
                a_33 = t;
                t = (ATerm) ATmakeAppl(sym_Tool_1, y_32);
                b_33 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_l_24, (ATerm) ATmakeAppl(sym_Tool_1, y_32));
                t = d_9(a_33, b_33, t);
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    ATerm p_29 = ATgetFirst((ATermList) t);
                    if(match_cons(p_29, sym__2))
                      {
                        ATerm r_29 = ATgetArgument(p_29, 0);
                        z_32 = ATgetArgument(p_29, 1);
                      }
                    else
                      _fail(t);
                    {
                      ATerm q_29 = (ATerm) ATgetNext((ATermList) t);
                    }
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym__2, x_32, (ATerm) ATmakeAppl(sym_FILE_1, z_32));
                return(t);
              }
              t = not_null(y_31);
              t = fetch_elem_1_0(a_4, t);
              ;
              LocalPopChoice(m_29);
            }
          else
            {
              t = l_29;
              {
                ATerm d_33 = NULL,e_33 = NULL,h_33 = NULL;
                t = term_a_21;
                e_33 = t;
                t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_t_29), not_null(z_31)), term_s_29);
                h_33 = t;
                t = SSL_printnl(e_33, h_33);
                t = term_v_13;
                d_33 = t;
                t = SSL_exit(d_33);
                t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_t_29), not_null(z_31)), term_s_29);
              }
            }
        }
      }
  }
  return(t);
}
ATerm e_4 (ATerm t)
{
  t = term_u_29;
  return(t);
}
ATerm get_module_1_0 (ATerm w_87 (ATerm), ATerm t)
{
  ATerm m_33 = NULL,y_33 = NULL,a_34 = NULL,b_34 = NULL;
  t = basename_1_0(_id, t);
  if(((a_34 != NULL) && (a_34 != t)))
    _fail(t);
  else
    a_34 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_w_22), term_x_29), term_w_29), term_v_29);
  if(((b_34 != NULL) && (b_34 != t)))
    _fail(t);
  else
    b_34 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(a_34), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_w_22), term_x_29), term_w_29), term_v_29));
  t = k_8(w_87, not_null(a_34), not_null(b_34), t);
  if(match_cons(t, sym__2))
    {
      ATerm y_29 = ATgetArgument(t, 0);
      ATerm d_30 = ATgetArgument(t, 1);
      if(match_cons(d_30, sym_FILE_1))
        {
          if(((m_33 != NULL) && (m_33 != ATgetArgument(d_30, 0))))
            _fail(ATgetArgument(d_30, 0));
          else
            m_33 = ATgetArgument(d_30, 0);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  {
    ATerm d_4 (ATerm t)
    {
      ATerm d_34 = NULL;
      d_34 = t;
      t = not_null(m_33);
      t = debug_1_0(e_4, t);
      t = d_34;
      return(t);
    }
    t = if_verbose3_1_0(d_4, t);
    t = parse_module_0_0(t);
    if(((y_33 != NULL) && (y_33 != t)))
      _fail(t);
    else
      y_33 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(m_33), not_null(y_33));
  }
  return(t);
}
ATerm m_8 (ATerm q_99 (ATerm), ATerm r_99 (ATerm), ATerm z_38, ATerm y_38, ATerm t)
{
  t = r_99(t);
  {
    ATerm g_4 (ATerm t)
    {
      ATerm e_34 = NULL;
      e_34 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(z_38), e_34);
      t = q_99(t);
      return(t);
    }
    t = fetch_1_0(g_4, t);
    t = not_null(y_38);
  }
  return(t);
}
ATerm n_8 (ATerm i_99 (ATerm), ATerm t_38, ATerm s_38, ATerm t)
{
  ATerm z_34 (ATerm t)
  {
    ATerm u_34 = NULL,v_34 = NULL,w_34 = NULL;
    u_34 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = u_34;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            v_34 = ATgetFirst((ATermList) t);
            w_34 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm e_30 = t;
          int g_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = u_34;
              {
                ATerm i_4 (ATerm t)
                {
                  t = not_null(s_38);
                  return(t);
                }
                t = m_8(i_99, i_4, not_null(v_34), not_null(w_34), t);
                t = z_34(t);
              }
              ;
              LocalPopChoice(g_30);
            }
          else
            {
              t = e_30;
              {
                ATerm u_13 = NULL,e_14 = NULL,l_4 = NULL;
                t = SSLgetAnnotations(u_34);
                u_13 = t;
                t = w_34;
                t = z_34(t);
                e_14 = t;
                t = (ATerm) ATinsert(CheckATermList(e_14), v_34);
                l_4 = t;
                t = SSLsetAnnotations(l_4, u_13);
              }
            }
        }
      }
    return(t);
  }
  t = not_null(t_38);
  t = z_34(t);
  return(t);
}
ATerm j_4 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm h_30 = ATgetArgument(t, 0);
      if(((ATgetType(h_30) != AT_LIST) || !(ATisEmpty(h_30))))
        _fail(t);
      {
        ATerm i_30 = ATgetArgument(t, 1);
        if(((ATgetType(i_30) != AT_LIST) || !(ATisEmpty(i_30))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm k_4 (ATerm t)
{
  ATerm h_35 = NULL,i_35 = NULL,j_35 = NULL,k_35 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm j_30 = ATgetArgument(t, 0);
      if(((ATgetType(j_30) == AT_LIST) && !(ATisEmpty(j_30))))
        {
          h_35 = ATgetFirst((ATermList) j_30);
          i_35 = (ATerm) ATgetNext((ATermList) j_30);
        }
      else
        _fail(t);
      {
        ATerm k_30 = ATgetArgument(t, 1);
        if(((ATgetType(k_30) == AT_LIST) && !(ATisEmpty(k_30))))
          {
            j_35 = ATgetFirst((ATermList) k_30);
            k_35 = (ATerm) ATgetNext((ATermList) k_30);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, h_35, j_35), (ATerm) ATmakeAppl(sym__2, i_35, k_35));
  return(t);
}
ATerm m_4 (ATerm t)
{
  ATerm l_35 = NULL,m_35 = NULL;
  if(match_cons(t, sym__2))
    {
      l_35 = ATgetArgument(t, 0);
      m_35 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(m_35), l_35);
  return(t);
}
ATerm r_8 (ATerm s_592, ATerm x_592, ATerm f_65, ATerm t)
{
  ATerm c_35 = NULL,d_35 = NULL,e_35 = NULL,f_35 = NULL;
  t = SSL_explode_term(x_592);
  if(match_cons(t, sym__2))
    {
      c_35 = ATgetArgument(t, 0);
      e_35 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(s_592);
  if(match_cons(t, sym__2))
    {
      if((c_35 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      d_35 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, d_35, e_35);
  t = genzip_4_0(j_4, k_4, m_4, _id, t);
  f_35 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_35, f_65);
  t = conc_0_0(t);
  return(t);
}
ATerm p_4 (ATerm t)
{
  ATerm u_35 = NULL;
  u_35 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, u_35);
  return(t);
}
ATerm q_4 (ATerm t)
{
  ATerm v_35 = NULL,w_35 = NULL,x_35 = NULL,y_35 = NULL,n_4 = NULL;
  y_35 = t;
  if(match_cons(t, sym__2))
    {
      w_35 = ATgetArgument(t, 0);
      x_35 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_35);
  v_35 = t;
  t = x_35;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, w_35, x_35);
  n_4 = t;
  t = SSLsetAnnotations(n_4, v_35);
  return(t);
}
ATerm s_4 (ATerm t)
{
  ATerm r_36 = NULL,s_36 = NULL,t_36 = NULL,u_36 = NULL,v_36 = NULL;
  r_36 = t;
  if(match_cons(t, sym__2))
    {
      s_36 = ATgetArgument(t, 0);
      t_36 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_36;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_36 = ATgetFirst((ATermList) t);
      v_36 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm l_30 = t;
        int n_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = i_37(s_36, t_36, r_36, t);
            ;
            LocalPopChoice(n_30);
          }
        else
          {
            t = l_30;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(s_36), u_36), v_36);
          }
      }
    }
  else
    {
      t = i_37(s_36, t_36, r_36, t);
    }
  return(t);
}
ATerm i_37 (ATerm z_35, ATerm a_36, ATerm b_36, ATerm t)
{
  ATerm c_36 = NULL,f_36 = NULL,o_4 = NULL,i_36 = NULL,j_36 = NULL,k_36 = NULL,l_36 = NULL;
  t = SSLgetAnnotations(b_36);
  c_36 = t;
  t = a_36;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_36 = ATgetFirst((ATermList) t);
      l_36 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = i_36;
  if(match_cons(t, sym__2))
    {
      j_36 = ATgetArgument(t, 0);
      k_36 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm b_31 = t;
    int i_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = k_36;
        if((j_36 != t))
          {
            _fail(t);
          }
        t = l_36;
        ;
        LocalPopChoice(i_31);
      }
    else
      {
        t = b_31;
        t = a_36;
        t = r_8(j_36, k_36, l_36, t);
      }
    f_36 = t;
    t = (ATerm) ATmakeAppl(sym__2, z_35, f_36);
    o_4 = t;
    t = SSLsetAnnotations(o_4, c_36);
  }
  return(t);
}
ATerm u_4 (ATerm t)
{
  ATerm h_37 = NULL;
  if(match_cons(t, sym__2))
    {
      h_37 = ATgetArgument(t, 0);
      if((h_37 != ATgetArgument(t, 1)))
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
  ATerm j_31 = t;
  int m_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(p_4, q_4, s_4, t);
      ;
      LocalPopChoice(m_31);
    }
  else
    {
      t = j_31;
      {
        ATerm z_36 = NULL,a_37 = NULL,b_37 = NULL;
        z_36 = t;
        if(match_cons(t, sym__2))
          {
            a_37 = ATgetArgument(t, 0);
            b_37 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = z_36;
        t = n_8(u_4, a_37, b_37, t);
      }
    }
  return(t);
}
ATerm t_8 (ATerm m_118 (ATerm), ATerm n_118 (ATerm), ATerm o_118 (ATerm), ATerm w_67, ATerm t_67, ATerm a_68, ATerm x_67, ATerm u_67, ATerm v_67, ATerm t)
{
  ATerm j_37 = NULL,k_37 = NULL,p_37 = NULL,q_37 = NULL,r_37 = NULL,s_37 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, w_67, x_67);
  t = m_118(t);
  j_37 = t;
  t = n_118(t);
  k_37 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_37, a_68);
  t = diff_0_0(t);
  p_37 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_37, t_67);
  t = conc_0_0(t);
  q_37 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_37, a_68);
  t = conc_0_0(t);
  r_37 = t;
  t = (ATerm) ATmakeAppl(sym__3, w_67, j_37, u_67);
  t = o_118(t);
  s_37 = t;
  t = (ATerm) ATmakeAppl(sym__5, q_37, r_37, x_67, s_37, v_67);
  return(t);
}
ATerm GnNext_3_0 (ATerm m_118 (ATerm), ATerm n_118 (ATerm), ATerm o_118 (ATerm), ATerm t)
{
  ATerm u_37 = NULL,v_37 = NULL,w_37 = NULL,d_38 = NULL,e_38 = NULL,f_38 = NULL;
  if(match_cons(t, sym__5))
    {
      ATerm n_31 = ATgetArgument(t, 0);
      if(((ATgetType(n_31) == AT_LIST) && !(ATisEmpty(n_31))))
        {
          u_37 = ATgetFirst((ATermList) n_31);
          v_37 = (ATerm) ATgetNext((ATermList) n_31);
        }
      else
        _fail(t);
      w_37 = ATgetArgument(t, 1);
      d_38 = ATgetArgument(t, 2);
      e_38 = ATgetArgument(t, 3);
      f_38 = ATgetArgument(t, 4);
    }
  else
    _fail(t);
  t = t_8(m_118, n_118, o_118, u_37, v_37, w_37, d_38, e_38, f_38, t);
  return(t);
}
ATerm while_not_2_0 (ATerm j_89 (ATerm), ATerm k_89 (ATerm), ATerm t)
{
  ATerm g_38 (ATerm t)
  {
    ATerm o_31 = t;
    int q_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = j_89(t);
        ;
        LocalPopChoice(q_31);
      }
    else
      {
        t = o_31;
        t = k_89(t);
        t = g_38(t);
      }
    return(t);
  }
  t = g_38(t);
  return(t);
}
ATerm for_3_0 (ATerm m_89 (ATerm), ATerm n_89 (ATerm), ATerm o_89 (ATerm), ATerm t)
{
  t = m_89(t);
  t = while_not_2_0(n_89, o_89, t);
  return(t);
}
ATerm z_4 (ATerm t)
{
  ATerm k_38 = NULL,l_38 = NULL,m_38 = NULL;
  if(match_cons(t, sym__3))
    {
      k_38 = ATgetArgument(t, 0);
      l_38 = ATgetArgument(t, 1);
      m_38 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__5, k_38, k_38, l_38, m_38, (ATerm) ATempty);
  return(t);
}
ATerm a_5 (ATerm t)
{
  ATerm p_38 = NULL,q_38 = NULL;
  if(match_cons(t, sym__5))
    {
      ATerm r_31 = ATgetArgument(t, 0);
      if(((ATgetType(r_31) != AT_LIST) || !(ATisEmpty(r_31))))
        _fail(t);
      {
        ATerm s_31 = ATgetArgument(t, 1);
      }
      {
        ATerm t_31 = ATgetArgument(t, 2);
      }
      p_38 = ATgetArgument(t, 3);
      q_38 = ATgetArgument(t, 4);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, p_38, q_38);
  return(t);
}
ATerm graph_nodes_roots_3_0 (ATerm j_118 (ATerm), ATerm k_118 (ATerm), ATerm l_118 (ATerm), ATerm t)
{
  ATerm j_38 = NULL;
  ATerm b_5 (ATerm t)
  {
    ATerm u_31 = t;
    int w_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = GnNext_3_0(j_118, k_118, l_118, t);
        ;
        LocalPopChoice(w_31);
      }
    else
      {
        t = u_31;
        {
          ATerm b_39 = NULL,c_39 = NULL,e_39 = NULL,h_39 = NULL,i_39 = NULL,j_39 = NULL,k_39 = NULL;
          if(match_cons(t, sym__5))
            {
              b_39 = ATgetArgument(t, 0);
              h_39 = ATgetArgument(t, 1);
              i_39 = ATgetArgument(t, 2);
              j_39 = ATgetArgument(t, 3);
              k_39 = ATgetArgument(t, 4);
            }
          else
            _fail(t);
          t = b_39;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              c_39 = ATgetFirst((ATermList) t);
              e_39 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__5, e_39, h_39, i_39, j_39, (ATerm) ATinsert(CheckATermList(k_39), c_39));
        }
      }
    return(t);
  }
  t = for_3_0(z_4, a_5, b_5, t);
  if(match_cons(t, sym__2))
    {
      if(((j_38 != NULL) && (j_38 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        j_38 = ATgetArgument(t, 0);
      {
        ATerm x_31 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = not_null(j_38);
  return(t);
}
ATerm filter_1_0 (ATerm p_102 (ATerm), ATerm t)
{
  ATerm q_40 = NULL,r_40 = NULL,s_40 = NULL;
  q_40 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = q_40;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          r_40 = ATgetFirst((ATermList) t);
          s_40 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm a_32 = t;
        int b_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_14 = NULL,s_14 = NULL,z_14 = NULL,r_4 = NULL;
            t = SSLgetAnnotations(q_40);
            p_14 = t;
            t = r_40;
            t = p_102(t);
            s_14 = t;
            t = s_40;
            t = filter_1_0(p_102, t);
            z_14 = t;
            t = (ATerm) ATinsert(CheckATermList(z_14), s_14);
            r_4 = t;
            t = SSLsetAnnotations(r_4, p_14);
            ;
            LocalPopChoice(b_32);
          }
        else
          {
            t = a_32;
            t = s_40;
            t = filter_1_0(p_102, t);
          }
      }
    }
  return(t);
}
ATerm e_5 (ATerm t)
{
  ATerm f_32 = t;
  if((PushChoice() == 0))
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-I", 0, ATtrue)))
        _fail(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = f_32;
    }
  return(t);
}
ATerm h_5 (ATerm t)
{
  ATerm g_41 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm g_32 = ATgetArgument(t, 0);
      ATerm h_32 = ATgetArgument(t, 1);
      if(match_cons(h_32, sym_Specification_1))
        {
          g_41 = ATgetArgument(h_32, 0);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  t = x_7(g_41, t);
  return(t);
}
ATerm j_5 (ATerm t)
{
  ATerm h_41 = NULL,i_41 = NULL;
  if(match_cons(t, sym__3))
    {
      ATerm i_32 = ATgetArgument(t, 0);
      h_41 = ATgetArgument(t, 1);
      i_41 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(i_41), h_41);
  return(t);
}
ATerm l_5 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_j_32;
  return(t);
}
ATerm m_5 (ATerm t)
{
  ATerm j_41 = NULL,k_41 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      j_41 = ATgetFirst((ATermList) t);
      k_41 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, j_41, k_41);
  return(t);
}
ATerm n_5 (ATerm t)
{
  ATerm l_41 = NULL,m_41 = NULL,o_41 = NULL,p_41 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm l_32 = ATgetArgument(t, 0);
      if(match_cons(l_32, sym__2))
        {
          l_41 = ATgetArgument(l_32, 0);
          m_41 = ATgetArgument(l_32, 1);
        }
      else
        _fail(t);
      {
        ATerm n_32 = ATgetArgument(t, 1);
        if(match_cons(n_32, sym__2))
          {
            o_41 = ATgetArgument(n_32, 0);
            p_41 = ATgetArgument(n_32, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(o_41), l_41), (ATerm) ATinsert(CheckATermList(p_41), m_41));
  return(t);
}
ATerm w_8 (ATerm p_31, ATerm t)
{
  ATerm w_40 = NULL,x_40 = NULL,y_40 = NULL,z_40 = NULL,a_41 = NULL,b_41 = NULL,t_4 = NULL;
  ATerm r_32 = t;
  int s_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_d_29;
      t = get_config_0_0(t);
      t = filter_1_0(e_5, t);
      ;
      LocalPopChoice(s_32);
    }
  else
    {
      t = r_32;
      t = (ATerm) ATempty;
    }
  if(((w_40 != NULL) && (w_40 != t)))
    _fail(t);
  else
    w_40 = t;
  t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATinsert(ATinsert(ATinsert(ATempty, not_null(p_31)), term_g_33), term_f_33), term_f_27, (ATerm) ATempty);
  {
    ATerm g_5 (ATerm t)
    {
      ATerm c_41 = NULL,e_41 = NULL;
      ATerm k_5 (ATerm t)
      {
        t = (ATerm) ATinsert(CheckATermList(not_null(w_40)), term_o_11);
        return(t);
      }
      if(((e_41 != NULL) && (e_41 != t)))
        _fail(t);
      else
        e_41 = t;
      t = SSL_explode_term(not_null(e_41));
      if(match_cons(t, sym__2))
        {
          ATerm i_33 = ATgetArgument(t, 0);
          if((ATgetSymbol((ATermAppl) i_33) != ATmakeSymbol("", 0, ATtrue)))
            _fail(t);
          {
            ATerm j_33 = ATgetArgument(t, 1);
            if(((ATgetType(j_33) == AT_LIST) && !(ATisEmpty(j_33))))
              {
                if(((c_41 != NULL) && (c_41 != ATgetFirst((ATermList) j_33))))
                  _fail(ATgetFirst((ATermList) j_33));
                else
                  c_41 = ATgetFirst((ATermList) j_33);
                {
                  ATerm n_33 = (ATerm) ATgetNext((ATermList) j_33);
                }
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = not_null(c_41);
      t = get_module_1_0(k_5, t);
      return(t);
    }
    t = graph_nodes_roots_3_0(g_5, h_5, j_5, t);
    t = genzip_4_0(l_5, m_5, n_5, _id, t);
    if(((b_41 != NULL) && (b_41 != t)))
      _fail(t);
    else
      b_41 = t;
    if(match_cons(t, sym__2))
      {
        if(((y_40 != NULL) && (y_40 != ATgetArgument(t, 0))))
          _fail(ATgetArgument(t, 0));
        else
          y_40 = ATgetArgument(t, 0);
        if(((z_40 != NULL) && (z_40 != ATgetArgument(t, 1))))
          _fail(ATgetArgument(t, 1));
        else
          z_40 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(not_null(b_41));
    if(((x_40 != NULL) && (x_40 != t)))
      _fail(t);
    else
      x_40 = t;
    t = not_null(z_40);
    t = flatten_stratego_0_0(t);
    if(((a_41 != NULL) && (a_41 != t)))
      _fail(t);
    else
      a_41 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(y_40), not_null(a_41));
    if(((t_4 != NULL) && (t_4 != t)))
      _fail(t);
    else
      t_4 = t;
    t = SSLsetAnnotations(not_null(t_4), not_null(x_40));
  }
  return(t);
}
ATerm y_8 (ATerm g_52, ATerm h_52, ATerm t)
{
  t = SSL_copy(g_52, h_52);
  return(t);
}
ATerm copy_to_1_0 (ATerm k_0 (ATerm), ATerm t)
{
  ATerm x_42 = NULL,y_42 = NULL;
  x_42 = t;
  if(match_cons(t, sym_FILE_1))
    {
      y_42 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm o_33 = t;
    int p_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_15 = NULL;
        t = x_42;
        t = k_0(t);
        m_15 = t;
        if(match_cons(t, sym_stdout_0))
          {
            t = m_15;
          }
        else
          {
            if(!(match_cons(t, sym_stderr_0)))
              _fail(t);
            t = m_15;
          }
        t = (ATerm) ATmakeAppl(sym__2, y_42, m_15);
        t = y_8(y_42, m_15, t);
        t = (ATerm) ATmakeAppl(sym_FILE_1, y_42);
        ;
        LocalPopChoice(p_33);
      }
    else
      {
        t = o_33;
        {
          ATerm q_33 = t;
          int r_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm x_15 = NULL;
              t = x_42;
              t = k_0(t);
              x_15 = t;
              {
                ATerm s_33 = t;
                if((PushChoice() == 0))
                  {
                    ATerm y_15 = NULL;
                    y_15 = t;
                    if(match_cons(t, sym_stdout_0))
                      {
                        t = y_15;
                      }
                    else
                      {
                        if(match_cons(t, sym_stderr_0))
                          {
                            t = y_15;
                          }
                        else
                          {
                            t = y_15;
                            if((y_42 != t))
                              {
                                _fail(t);
                              }
                            t = y_15;
                          }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = s_33;
                  }
                t = (ATerm) ATmakeAppl(sym__2, y_42, x_15);
                t = y_8(y_42, x_15, t);
                t = (ATerm) ATmakeAppl(sym_FILE_1, y_42);
              }
              ;
              LocalPopChoice(r_33);
            }
          else
            {
              t = q_33;
              t = x_42;
              t = k_0(t);
              if((y_42 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, y_42);
            }
        }
      }
  }
  return(t);
}
ATerm z_8 (ATerm y_60, ATerm z_60, ATerm t)
{
  ATerm e_43 = NULL,g_43 = NULL;
  g_43 = t;
  {
    ATerm t_33 = t;
    int u_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, y_60, z_60);
        t = d_9(y_60, z_60, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm v_33 = ATgetFirst((ATermList) t);
            e_43 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(u_33);
        t = SSL_table_put(y_60, z_60, e_43);
        t = (ATerm) ATmakeAppl(sym__3, y_60, z_60, e_43);
      }
    else
      {
        t = t_33;
        t = SSL_table_remove(y_60, z_60);
        t = (ATerm) ATmakeAppl(sym__2, y_60, z_60);
      }
    t = g_43;
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm e_106 (ATerm), ATerm t)
{
  ATerm h_43 = NULL,k_43 = NULL,l_43 = NULL,m_43 = NULL,r_43 = NULL;
  if(((m_43 != NULL) && (m_43 != t)))
    _fail(t);
  else
    m_43 = t;
  t = e_106(t);
  if(((l_43 != NULL) && (l_43 != t)))
    _fail(t);
  else
    l_43 = t;
  {
    ATerm w_33 = t;
    int x_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_43 = NULL;
        t = term_v_26;
        s_43 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(l_43), term_v_26);
        t = d_9(not_null(l_43), s_43, t);
        ;
        LocalPopChoice(x_33);
      }
    else
      {
        t = w_33;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((k_43 != NULL) && (k_43 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          k_43 = ATgetFirst((ATermList) t);
        if(((h_43 != NULL) && (h_43 != (ATerm) ATgetNext((ATermList) t))))
          _fail((ATerm) ATgetNext((ATermList) t));
        else
          h_43 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_v_26;
    if(((r_43 != NULL) && (r_43 != t)))
      _fail(t);
    else
      r_43 = t;
    t = SSL_table_put(not_null(l_43), not_null(r_43), not_null(h_43));
    t = not_null(k_43);
    {
      ATerm o_5 (ATerm t)
      {
        ATerm t_43 = NULL;
        t_43 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(l_43), t_43);
        t = z_8(not_null(l_43), t_43, t);
        return(t);
      }
      t = map_1_0(o_5, t);
      t = not_null(m_43);
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm n_88 (ATerm), ATerm o_88 (ATerm), ATerm t)
{
  ATerm z_33 = t;
  int c_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = n_88(t);
      t = o_88(t);
      ;
      LocalPopChoice(c_34);
    }
  else
    {
      t = z_33;
      t = o_88(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm d_106 (ATerm), ATerm t)
{
  ATerm v_43 = NULL,y_43 = NULL,z_43 = NULL,a_44 = NULL,b_44 = NULL;
  y_43 = t;
  t = d_106(t);
  v_43 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_43, term_v_26);
  {
    ATerm f_34 = t;
    int g_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_44 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm h_34 = ATgetArgument(t, 0);
            ATerm i_34 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_v_26;
        h_44 = t;
        t = (ATerm) ATmakeAppl(sym__2, v_43, term_v_26);
        t = d_9(v_43, h_44, t);
        ;
        LocalPopChoice(g_34);
      }
    else
      {
        t = f_34;
        t = (ATerm) ATempty;
      }
    z_43 = t;
    t = term_v_26;
    a_44 = t;
    t = (ATerm) ATinsert(CheckATermList(z_43), (ATerm) ATempty);
    b_44 = t;
    t = SSL_table_put(v_43, a_44, b_44);
    t = y_43;
  }
  return(t);
}
ATerm q_5 (ATerm t)
{
  t = term_t_27;
  return(t);
}
ATerm v_5 (ATerm t)
{
  ATerm t_44 = NULL;
  t_44 = t;
  {
    ATerm j_34 = t;
    int k_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(t_44);
        ;
        LocalPopChoice(k_34);
      }
    else
      {
        t = j_34;
        t = t_44;
      }
  }
  return(t);
}
ATerm w_5 (ATerm t)
{
  t = term_t_27;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm q_116 (ATerm), ATerm t)
{
  ATerm m_44 = NULL;
  ATerm r_5 (ATerm t)
  {
    ATerm n_44 = NULL;
    n_44 = t;
    {
      ATerm l_34 = t;
      int m_34 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm p_44 = NULL,q_44 = NULL;
          t = term_t_27;
          p_44 = t;
          t = term_v_26;
          q_44 = t;
          t = term_n_34;
          t = d_9(p_44, q_44, t);
          ;
          LocalPopChoice(m_34);
        }
      else
        {
          t = l_34;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
        }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          if(((m_44 != NULL) && (m_44 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            m_44 = ATgetFirst((ATermList) t);
          {
            ATerm o_34 = (ATerm) ATgetNext((ATermList) t);
          }
        }
      else
        _fail(t);
      t = not_null(m_44);
      t = map_1_0(v_5, t);
      t = n_44;
      t = end_scope_1_0(w_5, t);
    }
    return(t);
  }
  t = begin_scope_1_0(q_5, t);
  t = restore_always_2_0(q_116, r_5, t);
  return(t);
}
ATerm a_6 (ATerm t)
{
  ATerm p_34 = t;
  int q_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_c_11;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(q_34);
    }
  else
    {
      t = p_34;
      t = term_r_34;
    }
  return(t);
}
ATerm xtc_io_1_0 (ATerm r_116 (ATerm), ATerm t)
{
  ATerm x_5 (ATerm t)
  {
    ATerm s_34 = t;
    int t_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_44 = NULL;
        t = term_v_27;
        t = get_config_0_0(t);
        w_44 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, w_44);
        ;
        LocalPopChoice(t_34);
      }
    else
      {
        t = s_34;
        t = term_p_13;
      }
    t = r_116(t);
    t = copy_to_1_0(a_6, t);
    return(t);
  }
  t = xtc_temp_files_1_0(x_5, t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm x_44 = NULL,y_44 = NULL,z_44 = NULL,c_45 = NULL,e_45 = NULL;
  x_44 = t;
  t = term_f_27;
  t = whoami_0_0(t);
  y_44 = t;
  t = term_a_21;
  c_45 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_y_34), y_44), term_x_34);
  e_45 = t;
  t = SSL_printnl(c_45, e_45);
  t = term_v_13;
  z_44 = t;
  t = SSL_exit(z_44);
  t = x_44;
  return(t);
}
ATerm f_6 (ATerm t)
{
  ATerm g_45 = NULL;
  g_45 = t;
  if(match_string(t, "-k"))
    {
      t = g_45;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = g_45;
    }
  return(t);
}
ATerm k_6 (ATerm t)
{
  ATerm h_45 = NULL,i_45 = NULL,j_45 = NULL;
  h_45 = t;
  t = SSL_string_to_int(h_45);
  i_45 = t;
  t = term_r_13;
  j_45 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_13, i_45);
  t = g_9(j_45, i_45, t);
  t = h_45;
  return(t);
}
ATerm l_6 (ATerm t)
{
  t = term_a_35;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(f_6, k_6, l_6, t);
  return(t);
}
ATerm m_6 (ATerm t)
{
  ATerm l_45 = NULL;
  l_45 = t;
  if(match_string(t, "-S"))
    {
      t = l_45;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = l_45;
    }
  return(t);
}
ATerm n_6 (ATerm t)
{
  ATerm m_45 = NULL,n_45 = NULL;
  t = term_y_13;
  m_45 = t;
  t = term_b_35;
  n_45 = t;
  t = term_g_35;
  t = g_9(m_45, n_45, t);
  t = term_n_35;
  return(t);
}
ATerm o_6 (ATerm t)
{
  t = term_o_35;
  return(t);
}
ATerm q_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm s_6 (ATerm t)
{
  ATerm o_45 = NULL,p_45 = NULL,q_45 = NULL;
  o_45 = t;
  t = SSL_string_to_int(o_45);
  p_45 = t;
  t = term_y_13;
  q_45 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_13, p_45);
  t = g_9(q_45, p_45, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, o_45);
  return(t);
}
ATerm t_6 (ATerm t)
{
  t = term_p_35;
  return(t);
}
ATerm u_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm v_6 (ATerm t)
{
  ATerm r_45 = NULL,s_45 = NULL;
  t = term_q_35;
  r_45 = t;
  t = term_f_27;
  s_45 = t;
  t = term_r_35;
  t = g_9(r_45, s_45, t);
  t = term_s_35;
  return(t);
}
ATerm w_6 (ATerm t)
{
  t = term_t_35;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm d_36 = t;
  int e_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(m_6, n_6, o_6, t);
      ;
      LocalPopChoice(e_36);
    }
  else
    {
      t = d_36;
      {
        ATerm g_36 = t;
        int h_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(q_6, s_6, t_6, t);
            ;
            LocalPopChoice(h_36);
          }
        else
          {
            t = g_36;
            t = Option_3_0(u_6, v_6, w_6, t);
          }
      }
    }
  return(t);
}
ATerm g_9 (ATerm y_68, ATerm z_68, ATerm t)
{
  ATerm t_45 = NULL;
  t = term_i_13;
  t_45 = t;
  t = SSL_table_put(t_45, y_68, z_68);
  t = (ATerm) ATmakeAppl(sym__3, term_i_13, y_68, z_68);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm x_45 = NULL,y_45 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm f_46 = NULL,g_46 = NULL,h_46 = NULL;
      t = term_f_27;
      t = d_0(t);
      f_46 = t;
      t = term_m_36;
      g_46 = t;
      t = term_n_36;
      h_46 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_m_36, term_n_36, f_46);
      t = e_9(g_46, h_46, f_46, t);
      _fail(t);
    }
  else
    {
      ATerm n_46 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_45 = ATgetFirst((ATermList) t);
          y_45 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = x_45;
      t = a_0(t);
      t = term_f_27;
      t = b_0(t);
      n_46 = t;
      t = (ATerm) ATinsert(CheckATermList(y_45), n_46);
    }
  return(t);
}
ATerm x_6 (ATerm t)
{
  ATerm p_46 = NULL;
  p_46 = t;
  if(match_string(t, "-o"))
    {
      t = p_46;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = p_46;
    }
  return(t);
}
ATerm y_6 (ATerm t)
{
  ATerm q_46 = NULL,s_46 = NULL;
  q_46 = t;
  t = term_c_11;
  s_46 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_11, q_46);
  t = g_9(s_46, q_46, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, q_46);
  return(t);
}
ATerm z_6 (ATerm t)
{
  t = term_o_36;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(x_6, y_6, z_6, t);
  return(t);
}
ATerm c_7 (ATerm t)
{
  ATerm u_46 = NULL;
  u_46 = t;
  if(match_string(t, "-i"))
    {
      t = u_46;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = u_46;
    }
  return(t);
}
ATerm f_7 (ATerm t)
{
  ATerm w_46 = NULL,x_46 = NULL;
  w_46 = t;
  t = term_v_27;
  x_46 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_27, w_46);
  t = g_9(x_46, w_46, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, w_46);
  return(t);
}
ATerm g_7 (ATerm t)
{
  t = term_p_36;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(c_7, f_7, g_7, t);
  return(t);
}
ATerm e_9 (ATerm t_60, ATerm u_60, ATerm s_60, ATerm t)
{
  ATerm b_47 = NULL,c_47 = NULL,d_47 = NULL;
  b_47 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_60, u_60);
  {
    ATerm q_36 = t;
    int w_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm x_36 = ATgetArgument(t, 0);
            ATerm y_36 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, t_60, u_60);
        t = d_9(t_60, u_60, t);
        ;
        LocalPopChoice(w_36);
      }
    else
      {
        t = q_36;
        t = (ATerm) ATempty;
      }
    c_47 = t;
    t = (ATerm) ATinsert(CheckATermList(c_47), s_60);
    d_47 = t;
    t = SSL_table_put(t_60, u_60, d_47);
    t = b_47;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm l_47 = NULL,m_47 = NULL,n_47 = NULL,o_47 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm p_47 = NULL,q_47 = NULL,r_47 = NULL;
      t = term_f_27;
      t = j_0(t);
      p_47 = t;
      t = term_m_36;
      q_47 = t;
      t = term_n_36;
      r_47 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_m_36, term_n_36, p_47);
      t = e_9(q_47, r_47, p_47, t);
      _fail(t);
    }
  else
    {
      ATerm z_47 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          l_47 = ATgetFirst((ATermList) t);
          m_47 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = m_47;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          n_47 = ATgetFirst((ATermList) t);
          o_47 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = l_47;
      t = h_0(t);
      t = n_47;
      t = i_0(t);
      z_47 = t;
      t = (ATerm) ATinsert(CheckATermList(o_47), z_47);
    }
  return(t);
}
ATerm at_end_1_0 (ATerm z_95 (ATerm), ATerm t)
{
  ATerm p_49 (ATerm t)
  {
    ATerm m_49 = NULL,n_49 = NULL,o_49 = NULL;
    o_49 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        m_49 = ATgetFirst((ATermList) t);
        n_49 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm m_16 = NULL,s_16 = NULL,d_5 = NULL;
          t = SSLgetAnnotations(o_49);
          m_16 = t;
          t = n_49;
          t = p_49(t);
          s_16 = t;
          t = (ATerm) ATinsert(CheckATermList(s_16), m_49);
          d_5 = t;
          t = SSLsetAnnotations(d_5, m_16);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = o_49;
        t = z_95(t);
      }
    return(t);
  }
  t = p_49(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm b_48 = NULL,f_48 = NULL,i_48 = NULL;
  b_48 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = b_48;
    }
  else
    {
      ATerm h_7 (ATerm t)
      {
        t = not_null(i_48);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          if(((f_48 != NULL) && (f_48 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            f_48 = ATgetFirst((ATermList) t);
          if(((i_48 != NULL) && (i_48 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            i_48 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = not_null(f_48);
      t = at_end_1_0(h_7, t);
    }
  return(t);
}
ATerm m_50 (ATerm t_49, ATerm t)
{
  ATerm u_49 = NULL;
  t = SSL_explode_term(t_49);
  if(match_cons(t, sym__2))
    {
      ATerm c_37 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) c_37) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      u_49 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_49;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm w_49 = NULL,x_49 = NULL,y_49 = NULL;
  if(((y_49 != NULL) && (y_49 != t)))
    _fail(t);
  else
    y_49 = t;
  if(match_cons(t, sym__2))
    {
      w_49 = ATgetArgument(t, 0);
      x_49 = ATgetArgument(t, 1);
      {
        ATerm d_37 = t;
        int e_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_7 (ATerm t)
            {
              t = not_null(x_49);
              return(t);
            }
            t = not_null(w_49);
            t = at_end_1_0(i_7, t);
            ;
            LocalPopChoice(e_37);
          }
        else
          {
            t = d_37;
            t = m_50(not_null(y_49), t);
          }
      }
    }
  else
    {
      t = m_50(not_null(y_49), t);
    }
  return(t);
}
ATerm x_8 (ATerm e_69, ATerm d_69, ATerm t)
{
  ATerm n_50 = NULL,o_50 = NULL,p_50 = NULL;
  t = e_69;
  {
    ATerm f_37 = t;
    int g_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        ;
        LocalPopChoice(g_37);
      }
    else
      {
        t = f_37;
        t = (ATerm) ATempty;
      }
    o_50 = t;
    t = (ATerm) ATmakeAppl(sym__2, d_69, o_50);
    t = conc_0_0(t);
    n_50 = t;
    t = term_i_13;
    p_50 = t;
    t = SSL_table_put(p_50, e_69, n_50);
    t = (ATerm) ATmakeAppl(sym__3, term_i_13, e_69, n_50);
  }
  return(t);
}
ATerm j_7 (ATerm t)
{
  ATerm w_50 = NULL;
  w_50 = t;
  if(match_string(t, "-I"))
    {
      t = w_50;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--Include", 0, ATtrue)))
        _fail(t);
      t = w_50;
    }
  return(t);
}
ATerm k_7 (ATerm t)
{
  ATerm x_50 = NULL,y_50 = NULL,z_50 = NULL;
  x_50 = t;
  t = term_d_29;
  y_50 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, x_50), term_d_29);
  z_50 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_29, (ATerm) ATinsert(ATinsert(ATempty, x_50), term_d_29));
  t = x_8(y_50, z_50, t);
  t = term_f_27;
  return(t);
}
ATerm l_7 (ATerm t)
{
  t = term_l_37;
  return(t);
}
ATerm m_7 (ATerm t)
{
  ATerm a_51 = NULL;
  a_51 = t;
  if(match_string(t, "--nodep"))
    {
      t = a_51;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-nodep", 0, ATtrue)))
        _fail(t);
      t = a_51;
    }
  return(t);
}
ATerm n_7 (ATerm t)
{
  ATerm e_51 = NULL,f_51 = NULL;
  t = term_n_11;
  e_51 = t;
  t = term_m_37;
  f_51 = t;
  t = term_n_37;
  t = g_9(e_51, f_51, t);
  t = term_f_27;
  return(t);
}
ATerm o_7 (ATerm t)
{
  t = term_o_37;
  return(t);
}
ATerm w_7 (ATerm t)
{
  ATerm g_51 = NULL;
  g_51 = t;
  if(match_string(t, "--dep"))
    {
      t = g_51;
    }
  else
    {
      if(match_string(t, "-d"))
        {
          t = g_51;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-dep", 0, ATtrue)))
            _fail(t);
          t = g_51;
        }
    }
  return(t);
}
ATerm a_8 (ATerm t)
{
  ATerm h_51 = NULL,i_51 = NULL;
  h_51 = t;
  t = term_i_11;
  i_51 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_i_11, h_51);
  t = g_9(i_51, h_51, t);
  t = term_f_27;
  return(t);
}
ATerm b_8 (ATerm t)
{
  t = term_t_37;
  return(t);
}
ATerm l_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--imports", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm o_8 (ATerm t)
{
  ATerm j_51 = NULL,k_51 = NULL;
  t = term_x_37;
  j_51 = t;
  t = term_f_27;
  k_51 = t;
  t = term_y_37;
  t = g_9(j_51, k_51, t);
  t = term_f_27;
  return(t);
}
ATerm p_8 (ATerm t)
{
  t = term_z_37;
  return(t);
}
ATerm pack_stratego_options_0_0 (ATerm t)
{
  ATerm a_38 = t;
  int b_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ArgOption_3_0(j_7, k_7, l_7, t);
      ;
      LocalPopChoice(b_38);
    }
  else
    {
      t = a_38;
      {
        ATerm c_38 = t;
        int h_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Option_3_0(m_7, n_7, o_7, t);
            ;
            LocalPopChoice(h_38);
          }
        else
          {
            t = c_38;
            {
              ATerm i_38 = t;
              int n_38 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = ArgOption_3_0(w_7, a_8, b_8, t);
                  ;
                  LocalPopChoice(n_38);
                }
              else
                {
                  t = i_38;
                  t = Option_3_0(l_8, o_8, p_8, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm l_51 = NULL,m_51 = NULL,n_51 = NULL,q_51 = NULL;
  t = report_run_time_0_0(t);
  t = term_f_27;
  t = whoami_0_0(t);
  l_51 = t;
  t = term_a_21;
  n_51 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_o_38), l_51);
  q_51 = t;
  t = SSL_printnl(n_51, q_51);
  t = term_v_13;
  m_51 = t;
  t = SSL_exit(m_51);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_r_38;
  t = get_config_0_0(t);
  return(t);
}
ATerm a_9 (ATerm u_48, ATerm v_48, ATerm t)
{
  ATerm w_38 = t;
  int x_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(u_48, v_48);
      ;
      LocalPopChoice(x_38);
    }
  else
    {
      t = w_38;
      t = SSL_addr(u_48, v_48);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm m_101 (ATerm), ATerm n_101 (ATerm), ATerm t)
{
  ATerm s_51 = NULL,t_51 = NULL,a_52 = NULL;
  s_51 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = s_51;
      t = m_101(t);
    }
  else
    {
      ATerm d_52 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          t_51 = ATgetFirst((ATermList) t);
          a_52 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = a_52;
      t = foldr_2_0(m_101, n_101, t);
      d_52 = t;
      t = (ATerm) ATmakeAppl(sym__2, t_51, d_52);
      t = n_101(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm q_8 (ATerm t)
{
  t = term_b_35;
  return(t);
}
ATerm s_8 (ATerm t)
{
  ATerm j_17 = NULL,k_17 = NULL;
  if(match_cons(t, sym__2))
    {
      j_17 = ATgetArgument(t, 0);
      k_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_9(j_17, k_17, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm i_52 = NULL,b_17 = NULL,c_17 = NULL;
  t = times_0_0(t);
  c_17 = t;
  t = SSL_explode_term(c_17);
  if(match_cons(t, sym__2))
    {
      ATerm a_39 = ATgetArgument(t, 0);
      b_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_17;
  t = foldr_2_0(q_8, s_8, t);
  i_52 = t;
  t = SSL_TicksToSeconds(i_52);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm t_52 = NULL,u_52 = NULL,v_52 = NULL;
  t_52 = t;
  if(match_cons(t, sym__2))
    {
      u_52 = ATgetArgument(t, 0);
      v_52 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm d_39 = t;
    int f_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_52;
        if((u_52 != t))
          {
            _fail(t);
          }
        t = t_52;
        ;
        LocalPopChoice(f_39);
      }
    else
      {
        t = d_39;
        t = (ATerm) ATmakeAppl(sym__2, u_52, v_52);
        {
          ATerm g_39 = t;
          int l_39 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(u_52, v_52);
              ;
              LocalPopChoice(l_39);
            }
          else
            {
              t = g_39;
              t = SSL_gtr(u_52, v_52);
            }
          t = (ATerm) ATmakeAppl(sym__2, u_52, v_52);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm k_109 (ATerm), ATerm t)
{
  ATerm z_52 = NULL;
  z_52 = t;
  {
    ATerm m_39 = t;
    int n_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_53 = NULL;
        t = term_y_13;
        t = get_config_0_0(t);
        b_53 = t;
        t = (ATerm) ATmakeAppl(sym__2, b_53, term_v_13);
        t = geq_0_0(t);
        t = z_52;
        t = k_109(t);
        ;
        LocalPopChoice(n_39);
      }
    else
      {
        t = m_39;
        t = z_52;
      }
  }
  return(t);
}
ATerm u_8 (ATerm t)
{
  ATerm d_53 = NULL,e_53 = NULL,g_53 = NULL,h_53 = NULL;
  t = run_time_0_0(t);
  d_53 = t;
  t = term_f_27;
  t = whoami_0_0(t);
  e_53 = t;
  t = term_a_21;
  g_53 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_o_39), d_53), term_i_14), e_53);
  h_53 = t;
  t = SSL_printnl(g_53, h_53);
  t = (ATerm) ATmakeAppl(sym__2, term_a_21, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_o_39), d_53), term_i_14), e_53));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(u_8, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm i_53 = NULL;
  t = report_run_time_0_0(t);
  t = term_b_35;
  i_53 = t;
  t = SSL_exit(i_53);
  return(t);
}
ATerm b_9 (ATerm t)
{
  ATerm q_53 = NULL,r_53 = NULL;
  r_53 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = r_53;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          q_53 = ATgetArgument(t, 0);
          {
            ATerm i_18 = NULL,i_5 = NULL;
            t = SSLgetAnnotations(r_53);
            i_18 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, q_53);
            i_5 = t;
            t = SSLsetAnnotations(i_5, i_18);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = r_53;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm y_110 (ATerm), ATerm t)
{
  ATerm p_39 = t;
  int q_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_r_39;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(q_39);
    }
  else
    {
      t = p_39;
      t = fetch_1_0(b_9, t);
    }
  t = y_110(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm u_53 = NULL,v_53 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_53 = ATgetFirst((ATermList) t);
      v_53 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm z_53 = NULL,a_54 = NULL;
        ATerm c_9 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(z_53)), not_null(a_54));
          return(t);
        }
        t = not_null(v_53);
        t = g_0(t);
        if(((z_53 != NULL) && (z_53 != t)))
          _fail(t);
        else
          z_53 = t;
        t = not_null(u_53);
        t = f_0(t);
        if(((a_54 != NULL) && (a_54 != t)))
          _fail(t);
        else
          a_54 = t;
        t = not_null(v_53);
        t = reverse_acc_2_0(f_0, c_9, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_f_27;
      t = g_0(t);
    }
  return(t);
}
ATerm d_9 (ATerm k_62, ATerm l_62, ATerm t)
{
  t = SSL_table_get(k_62, l_62);
  return(t);
}
ATerm f_9 (ATerm t)
{
  ATerm e_54 = NULL,f_54 = NULL,g_54 = NULL,p_5 = NULL;
  g_54 = t;
  if(match_cons(t, sym_Program_1))
    {
      f_54 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_54);
  e_54 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, f_54);
  p_5 = t;
  t = SSLsetAnnotations(p_5, e_54);
  return(t);
}
ATerm h_9 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm i_9 (ATerm t)
{
  ATerm i_54 = NULL;
  i_54 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, i_54), term_s_39);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm c_54 = NULL,d_54 = NULL;
  ATerm t_39 = t;
  int u_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_r_38;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(u_39);
    }
  else
    {
      t = t_39;
      t = fetch_1_0(f_9, t);
    }
  t = term_v_39;
  t = echo_0_0(t);
  t = term_m_36;
  c_54 = t;
  t = term_n_36;
  d_54 = t;
  t = term_w_39;
  t = d_9(c_54, d_54, t);
  t = reverse_acc_2_0(_id, h_9, t);
  t = map_1_0(i_9, t);
  return(t);
}
ATerm fetch_1_0 (ATerm t_95 (ATerm), ATerm t)
{
  ATerm h_55 (ATerm t)
  {
    ATerm c_55 = NULL,d_55 = NULL,g_55 = NULL;
    c_55 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        d_55 = ATgetFirst((ATermList) t);
        g_55 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm x_39 = t;
      int y_39 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm u_18 = NULL,a_19 = NULL,s_5 = NULL;
          t = SSLgetAnnotations(c_55);
          u_18 = t;
          t = d_55;
          t = t_95(t);
          a_19 = t;
          t = (ATerm) ATinsert(CheckATermList(g_55), a_19);
          s_5 = t;
          t = SSLsetAnnotations(s_5, u_18);
          ;
          LocalPopChoice(y_39);
        }
      else
        {
          t = x_39;
          {
            ATerm n_19 = NULL,w_19 = NULL,t_5 = NULL;
            t = SSLgetAnnotations(c_55);
            n_19 = t;
            t = g_55;
            t = h_55(t);
            w_19 = t;
            t = (ATerm) ATinsert(CheckATermList(w_19), d_55);
            t_5 = t;
            t = SSLsetAnnotations(t_5, n_19);
          }
        }
    }
    return(t);
  }
  t = h_55(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm q_55 = NULL,r_55 = NULL,s_55 = NULL;
  q_55 = t;
  {
    ATerm z_39 = t;
    int a_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = q_55;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm b_40 = ATgetFirst((ATermList) t);
                ATerm c_40 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = q_55;
          }
        ;
        LocalPopChoice(a_40);
      }
    else
      {
        t = z_39;
        t = (ATerm) ATinsert(ATempty, q_55);
      }
    r_55 = t;
    t = term_r_34;
    s_55 = t;
    t = SSL_printnl(s_55, r_55);
    t = q_55;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_r_38;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm j_9 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm l_9 (ATerm t)
{
  ATerm w_55 = NULL,x_55 = NULL;
  t = term_d_40;
  w_55 = t;
  t = term_f_27;
  x_55 = t;
  t = term_e_40;
  t = g_9(w_55, x_55, t);
  return(t);
}
ATerm q_9 (ATerm t)
{
  t = term_f_40;
  return(t);
}
ATerm r_9 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm s_9 (ATerm t)
{
  ATerm y_55 = NULL,z_55 = NULL,a_56 = NULL,b_56 = NULL;
  t = term_d_40;
  a_56 = t;
  t = term_f_27;
  b_56 = t;
  t = term_e_40;
  t = g_9(a_56, b_56, t);
  t = term_g_40;
  y_55 = t;
  t = term_f_27;
  z_55 = t;
  t = term_h_40;
  t = g_9(y_55, z_55, t);
  t = term_i_40;
  return(t);
}
ATerm t_9 (ATerm t)
{
  t = term_j_40;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm k_40 = t;
  int l_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(j_9, l_9, q_9, t);
      ;
      LocalPopChoice(l_40);
    }
  else
    {
      t = k_40;
      t = Option_3_0(r_9, s_9, t_9, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm c_74 (ATerm), ATerm d_74 (ATerm), ATerm t)
{
  ATerm c_56 = NULL,d_56 = NULL,e_56 = NULL,f_56 = NULL,g_56 = NULL,h_56 = NULL,y_5 = NULL;
  h_56 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      d_56 = ATgetFirst((ATermList) t);
      e_56 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_56);
  c_56 = t;
  t = d_56;
  t = c_74(t);
  f_56 = t;
  t = e_56;
  t = d_74(t);
  g_56 = t;
  t = (ATerm) ATinsert(CheckATermList(g_56), f_56);
  y_5 = t;
  t = SSLsetAnnotations(y_5, c_56);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm p_113 (ATerm), ATerm t)
{
  ATerm m_56 = NULL,n_56 = NULL,o_56 = NULL,p_56 = NULL,r_56 = NULL,s_56 = NULL,p_6 = NULL;
  if(((m_56 != NULL) && (m_56 != t)))
    _fail(t);
  else
    m_56 = t;
  {
    ATerm m_40 = t;
    int n_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_o_40;
        t = p_113(t);
        ;
        LocalPopChoice(n_40);
      }
    else
      {
        t = m_40;
      }
    t = not_null(m_56);
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((o_56 != NULL) && (o_56 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          o_56 = ATgetFirst((ATermList) t);
        if(((p_56 != NULL) && (p_56 != (ATerm) ATgetNext((ATermList) t))))
          _fail((ATerm) ATgetNext((ATermList) t));
        else
          p_56 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(not_null(m_56));
    if(((n_56 != NULL) && (n_56 != t)))
      _fail(t);
    else
      n_56 = t;
    t = term_r_38;
    if(((s_56 != NULL) && (s_56 != t)))
      _fail(t);
    else
      s_56 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_r_38, not_null(o_56));
    t = g_9(not_null(s_56), not_null(o_56), t);
    t = not_null(p_56);
    {
      ATerm j_57 (ATerm t)
      {
        ATerm p_40 = t;
        int t_40 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_40 = t;
            int v_40 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm v_56 = NULL;
                v_56 = t;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = v_56;
                ;
                LocalPopChoice(v_40);
              }
            else
              {
                t = u_40;
                t = p_113(t);
                t = Cons_2_0(_id, j_57, t);
              }
            ;
            LocalPopChoice(t_40);
          }
        else
          {
            t = p_40;
            {
              ATerm b_57 = NULL,g_57 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  b_57 = ATgetFirst((ATermList) t);
                  g_57 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(g_57), (ATerm) ATmakeAppl(sym_Undefined_1, b_57));
            }
          }
        return(t);
      }
      t = j_57(t);
      if(((r_56 != NULL) && (r_56 != t)))
        _fail(t);
      else
        r_56 = t;
      t = (ATerm) ATinsert(CheckATermList(not_null(r_56)), (ATerm) ATmakeAppl(sym_Program_1, not_null(o_56)));
      if(((p_6 != NULL) && (p_6 != t)))
        _fail(t);
      else
        p_6 = t;
      t = SSLsetAnnotations(not_null(p_6), not_null(n_56));
    }
  }
  return(t);
}
ATerm v_9 (ATerm t)
{
  ATerm v_57 = NULL;
  v_57 = t;
  if(match_string(t, "--help"))
    {
      t = v_57;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = v_57;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = v_57;
        }
    }
  return(t);
}
ATerm w_9 (ATerm t)
{
  ATerm w_57 = NULL,x_57 = NULL;
  t = term_r_39;
  w_57 = t;
  t = term_f_27;
  x_57 = t;
  t = term_d_41;
  t = g_9(w_57, x_57, t);
  t = term_f_41;
  return(t);
}
ATerm x_9 (ATerm t)
{
  t = term_n_41;
  return(t);
}
ATerm z_9 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm o_113 (ATerm), ATerm t)
{
  ATerm o_57 = NULL,p_57 = NULL,q_57 = NULL,r_57 = NULL,s_57 = NULL,t_57 = NULL,u_57 = NULL;
  if(((q_57 != NULL) && (q_57 != t)))
    _fail(t);
  else
    q_57 = t;
  t = term_m_36;
  if(((s_57 != NULL) && (s_57 != t)))
    _fail(t);
  else
    s_57 = t;
  t = term_n_36;
  if(((t_57 != NULL) && (t_57 != t)))
    _fail(t);
  else
    t_57 = t;
  t = (ATerm) ATempty;
  if(((u_57 != NULL) && (u_57 != t)))
    _fail(t);
  else
    u_57 = t;
  t = SSL_table_put(not_null(s_57), not_null(t_57), not_null(u_57));
  t = not_null(q_57);
  {
    ATerm u_9 (ATerm t)
    {
      ATerm q_41 = t;
      int r_41 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = o_113(t);
          ;
          LocalPopChoice(r_41);
        }
      else
        {
          t = q_41;
          {
            ATerm s_41 = t;
            int t_41 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(v_9, w_9, x_9, t);
                ;
                LocalPopChoice(t_41);
              }
            else
              {
                t = s_41;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(u_9, t);
    {
      ATerm u_41 = t;
      int v_41 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm e_58 = NULL;
          e_58 = t;
          {
            ATerm w_41 = t;
            int x_41 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm e_20 = NULL;
                t = e_58;
                {
                  ATerm y_41 = t;
                  int z_41 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_r_39;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(z_41);
                    }
                  else
                    {
                      t = y_41;
                      t = fetch_1_0(z_9, t);
                    }
                  t = e_58;
                  t = default_system_usage_0_0(t);
                  t = term_b_35;
                  e_20 = t;
                  t = SSL_exit(e_20);
                }
                ;
                LocalPopChoice(x_41);
              }
            else
              {
                t = w_41;
                {
                  ATerm j_20 = NULL;
                  t = term_d_40;
                  t = get_config_0_0(t);
                  t = e_58;
                  t = default_system_about_0_0(t);
                  t = term_b_35;
                  j_20 = t;
                  t = SSL_exit(j_20);
                }
              }
          }
          ;
          LocalPopChoice(v_41);
        }
      else
        {
          t = u_41;
          {
            ATerm a_42 = t;
            int b_42 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm f_58 = NULL,g_58 = NULL,h_58 = NULL;
                ATerm e_10 (ATerm t)
                {
                  ATerm i_58 = NULL,j_58 = NULL,k_58 = NULL,r_6 = NULL;
                  k_58 = t;
                  if(match_cons(t, sym_Undefined_1))
                    {
                      j_58 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(k_58);
                  i_58 = t;
                  t = j_58;
                  if(((o_57 != NULL) && (o_57 != t)))
                    _fail(t);
                  else
                    o_57 = t;
                  t = (ATerm) ATmakeAppl(sym_Undefined_1, j_58);
                  r_6 = t;
                  t = SSLsetAnnotations(r_6, i_58);
                  return(t);
                }
                t = fetch_1_0(e_10, t);
                t = term_a_21;
                if(((g_58 != NULL) && (g_58 != t)))
                  _fail(t);
                else
                  g_58 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(o_57)), term_c_42);
                if(((h_58 != NULL) && (h_58 != t)))
                  _fail(t);
                else
                  h_58 = t;
                t = SSL_printnl(not_null(g_58), not_null(h_58));
                t = (ATerm) ATmakeAppl(sym__2, term_a_21, (ATerm) ATinsert(ATinsert(ATempty, not_null(o_57)), term_c_42));
                t = default_system_usage_0_0(t);
                t = term_v_13;
                if(((f_58 != NULL) && (f_58 != t)))
                  _fail(t);
                else
                  f_58 = t;
                t = SSL_exit(not_null(f_58));
                ;
                LocalPopChoice(b_42);
              }
            else
              {
                t = a_42;
              }
          }
        }
      if(((p_57 != NULL) && (p_57 != t)))
        _fail(t);
      else
        p_57 = t;
      t = term_m_36;
      if(((r_57 != NULL) && (r_57 != t)))
        _fail(t);
      else
        r_57 = t;
      t = SSL_table_destroy(not_null(r_57));
      t = not_null(p_57);
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm a_111 (ATerm), ATerm b_111 (ATerm), ATerm c_111 (ATerm), ATerm d_111 (ATerm), ATerm t)
{
  ATerm p_58 = NULL,q_58 = NULL,r_58 = NULL,s_58 = NULL;
  t = parse_options_1_0(a_111, t);
  p_58 = t;
  t = term_d_42;
  s_58 = t;
  t = SSL_table_create(s_58);
  t = term_d_42;
  q_58 = t;
  t = term_e_42;
  r_58 = t;
  t = SSL_table_put(q_58, r_58, p_58);
  t = p_58;
  t = c_111(t);
  {
    ATerm f_42 = t;
    int g_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(b_111, t);
        ;
        LocalPopChoice(g_42);
      }
    else
      {
        t = f_42;
        {
          ATerm h_42 = t;
          int i_42 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = d_111(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(i_42);
            }
          else
            {
              t = h_42;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm f_10 (ATerm t)
{
  ATerm j_42 = t;
  int k_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = pack_stratego_options_0_0(t);
      ;
      LocalPopChoice(k_42);
    }
  else
    {
      t = j_42;
      {
        ATerm l_42 = t;
        int m_42 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = input_option_0_0(t);
            ;
            LocalPopChoice(m_42);
          }
        else
          {
            t = l_42;
            {
              ATerm n_42 = t;
              int o_42 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = output_option_0_0(t);
                  ;
                  LocalPopChoice(o_42);
                }
              else
                {
                  t = n_42;
                  {
                    ATerm p_42 = t;
                    int q_42 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Option_3_0(j_10, m_10, n_10, t);
                        ;
                        LocalPopChoice(q_42);
                      }
                    else
                      {
                        t = p_42;
                        {
                          ATerm r_42 = t;
                          int s_42 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = verbose_option_0_0(t);
                              ;
                              LocalPopChoice(s_42);
                            }
                          else
                            {
                              t = r_42;
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
ATerm j_10 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm m_10 (ATerm t)
{
  ATerm x_58 = NULL,y_58 = NULL;
  t = term_t_42;
  x_58 = t;
  t = term_f_27;
  y_58 = t;
  t = term_u_42;
  t = g_9(x_58, y_58, t);
  t = term_v_42;
  return(t);
}
ATerm n_10 (ATerm t)
{
  t = term_w_42;
  return(t);
}
ATerm q_10 (ATerm t)
{
  t = get_filename_0_0(t);
  t = basename_1_0(_id, t);
  return(t);
}
ATerm pack_stratego_0_0 (ATerm t)
{
  ATerm v_58 = NULL,w_58 = NULL;
  ATerm g_10 (ATerm t)
  {
    ATerm o_10 (ATerm t)
    {
      ATerm a_59 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          a_59 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = w_8(a_59, t);
      if(match_cons(t, sym__2))
        {
          if(((v_58 != NULL) && (v_58 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            v_58 = ATgetArgument(t, 0);
          if(((w_58 != NULL) && (w_58 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            w_58 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm z_42 = t;
        int a_43 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_x_37;
            t = get_config_0_0(t);
            t = not_null(v_58);
            t = map_1_0(q_10, t);
            t = write_to_text_0_0(t);
            ;
            LocalPopChoice(a_43);
          }
        else
          {
            t = z_42;
            t = not_null(v_58);
            t = create_dep_file_0_0(t);
            t = not_null(w_58);
            t = write_to_0_0(t);
          }
      }
      return(t);
    }
    t = xtc_io_1_0(o_10, t);
    return(t);
  }
  t = option_wrap_4_0(f_10, default_usage_0_0, _id, g_10, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = pack_stratego_0_0(t);
  return(t);
}
