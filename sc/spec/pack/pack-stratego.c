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
ATerm term_h_47;
ATerm term_g_47;
ATerm term_f_47;
ATerm term_e_47;
ATerm term_p_46;
ATerm term_o_46;
ATerm term_n_46;
ATerm term_y_45;
ATerm term_x_45;
ATerm term_w_45;
ATerm term_r_45;
ATerm term_m_45;
ATerm term_l_45;
ATerm term_k_45;
ATerm term_j_45;
ATerm term_i_45;
ATerm term_h_45;
ATerm term_g_45;
ATerm term_z_44;
ATerm term_y_44;
ATerm term_v_44;
ATerm term_u_44;
ATerm term_n_44;
ATerm term_b_44;
ATerm term_a_44;
ATerm term_t_43;
ATerm term_s_43;
ATerm term_r_43;
ATerm term_q_43;
ATerm term_p_43;
ATerm term_o_43;
ATerm term_n_43;
ATerm term_m_43;
ATerm term_y_42;
ATerm term_x_42;
ATerm term_w_42;
ATerm term_v_42;
ATerm term_i_42;
ATerm term_h_42;
ATerm term_f_42;
ATerm term_e_42;
ATerm term_b_42;
ATerm term_a_42;
ATerm term_z_41;
ATerm term_y_41;
ATerm term_v_41;
ATerm term_u_41;
ATerm term_t_41;
ATerm term_s_41;
ATerm term_p_41;
ATerm term_h_41;
ATerm term_s_39;
ATerm term_p_39;
ATerm term_a_39;
ATerm term_i_36;
ATerm term_h_36;
ATerm term_g_36;
ATerm term_f_36;
ATerm term_e_36;
ATerm term_d_36;
ATerm term_x_35;
ATerm term_h_35;
ATerm term_t_33;
ATerm term_s_33;
ATerm term_q_33;
ATerm term_p_33;
ATerm term_i_33;
ATerm term_h_33;
ATerm term_d_33;
ATerm term_v_32;
ATerm term_r_32;
ATerm term_o_32;
ATerm term_n_32;
ATerm term_j_32;
ATerm term_c_32;
ATerm term_w_31;
ATerm term_u_31;
ATerm term_r_31;
ATerm term_o_31;
ATerm term_n_31;
ATerm term_m_31;
ATerm term_j_31;
ATerm term_g_31;
ATerm term_z_30;
ATerm term_t_30;
ATerm term_r_30;
ATerm term_q_30;
ATerm term_h_30;
ATerm term_g_30;
ATerm term_x_29;
ATerm term_n_29;
ATerm term_i_29;
ATerm term_g_29;
ATerm term_y_28;
ATerm term_v_26;
ATerm term_u_26;
ATerm term_f_26;
ATerm term_e_26;
ATerm term_d_26;
ATerm term_a_26;
ATerm term_z_25;
ATerm term_y_25;
ATerm term_x_25;
ATerm term_u_25;
ATerm term_r_25;
ATerm term_q_25;
ATerm term_p_25;
ATerm term_o_25;
ATerm term_i_25;
ATerm term_e_25;
ATerm term_d_25;
ATerm term_x_24;
ATerm term_w_24;
ATerm term_u_24;
ATerm term_t_24;
ATerm term_s_24;
ATerm term_r_24;
ATerm term_q_24;
ATerm term_p_24;
ATerm term_o_24;
ATerm term_m_24;
ATerm term_l_24;
ATerm term_i_24;
ATerm term_h_24;
ATerm term_g_24;
ATerm term_f_24;
ATerm term_d_24;
ATerm term_a_24;
ATerm term_y_23;
ATerm term_x_23;
ATerm term_w_23;
ATerm term_v_23;
ATerm term_u_23;
ATerm term_t_23;
ATerm term_s_23;
ATerm term_r_23;
ATerm term_q_23;
ATerm term_o_23;
ATerm term_j_23;
ATerm term_h_23;
ATerm term_g_23;
ATerm term_f_23;
ATerm term_e_23;
ATerm term_d_23;
ATerm term_v_22;
ATerm term_u_22;
ATerm term_q_22;
ATerm term_o_22;
ATerm term_n_22;
ATerm term_m_22;
ATerm term_l_22;
ATerm term_k_22;
ATerm term_j_22;
ATerm term_i_22;
ATerm term_h_22;
ATerm term_e_22;
ATerm term_c_22;
ATerm term_a_22;
ATerm term_z_21;
ATerm term_y_21;
ATerm term_x_21;
ATerm term_w_21;
ATerm term_v_21;
ATerm term_u_21;
ATerm term_t_21;
ATerm term_p_21;
ATerm term_o_21;
ATerm term_l_21;
ATerm term_h_21;
ATerm term_g_21;
ATerm term_f_21;
ATerm term_e_21;
ATerm term_z_20;
ATerm term_y_20;
ATerm term_r_20;
ATerm term_q_20;
ATerm term_p_20;
ATerm term_o_20;
ATerm term_l_20;
ATerm term_i_20;
ATerm term_h_20;
ATerm term_g_20;
ATerm term_a_20;
ATerm term_z_19;
ATerm term_y_19;
ATerm term_x_19;
ATerm term_w_19;
ATerm term_u_19;
ATerm term_t_19;
ATerm term_s_19;
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
ATerm term_l_18;
ATerm term_k_18;
ATerm term_j_18;
ATerm term_i_18;
ATerm term_e_18;
ATerm term_y_17;
ATerm term_t_17;
ATerm term_s_17;
ATerm term_r_17;
ATerm term_l_17;
ATerm term_t_16;
ATerm term_n_15;
ATerm term_f_15;
ATerm term_e_15;
ATerm term_c_15;
ATerm term_b_15;
ATerm term_a_15;
ATerm term_z_14;
ATerm term_w_14;
ATerm term_r_14;
void init_constant_terms (void)
{
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--dep", 0, ATtrue));
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--nodep", 0, ATtrue));
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeAppl(ATmakeSymbol(".", 0, ATtrue));
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeAppl(ATmakeSymbol("dep", 0, ATtrue));
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeAppl(ATmakeSymbol(" \\\n	", 0, ATtrue));
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeAppl(ATmakeSymbol(" :", 0, ATtrue));
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_t_16));
  term_t_16 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_l_17));
  term_l_17 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_r_17));
  term_r_17 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_s_17));
  term_s_17 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_t_17));
  term_t_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_y_17));
  term_y_17 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_e_18));
  term_e_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_i_18));
  term_i_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_j_18));
  term_j_18 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_k_18));
  term_k_18 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_l_18));
  term_l_18 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_a_19));
  term_a_19 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_b_19));
  term_b_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_c_19));
  term_c_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_19, term_y_17, term_b_19);
  ATprotect(&(term_d_19));
  term_d_19 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_e_19));
  term_e_19 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_f_19));
  term_f_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_19, term_e_19, term_f_19);
  ATprotect(&(term_h_19));
  term_h_19 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_i_19));
  term_i_19 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_j_19));
  term_j_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_k_19));
  term_k_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_19, term_i_19, term_j_19);
  ATprotect(&(term_l_19));
  term_l_19 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_m_19));
  term_m_19 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_n_19));
  term_n_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_o_19));
  term_o_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_19, term_m_19, term_n_19);
  ATprotect(&(term_p_19));
  term_p_19 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_s_19));
  term_s_19 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_t_19));
  term_t_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_u_19));
  term_u_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_19, term_s_19, term_t_19);
  ATprotect(&(term_w_19));
  term_w_19 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_x_19));
  term_x_19 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_y_19));
  term_y_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_z_19));
  term_z_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_19, term_x_19, term_y_19);
  ATprotect(&(term_a_20));
  term_a_20 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_g_20));
  term_g_20 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_h_20));
  term_h_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_i_20));
  term_i_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_20, term_g_20, term_h_20);
  ATprotect(&(term_l_20));
  term_l_20 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_o_20));
  term_o_20 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_p_20));
  term_p_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_q_20));
  term_q_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_20, term_o_20, term_p_20);
  ATprotect(&(term_r_20));
  term_r_20 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_y_20));
  term_y_20 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_z_20));
  term_z_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_e_21));
  term_e_21 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_20, term_y_20, term_z_20);
  ATprotect(&(term_f_21));
  term_f_21 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_g_21));
  term_g_21 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_h_21));
  term_h_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_l_21));
  term_l_21 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_21, term_g_21, term_h_21);
  ATprotect(&(term_o_21));
  term_o_21 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_p_21));
  term_p_21 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_t_21));
  term_t_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_u_21));
  term_u_21 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_21, term_p_21, term_t_21);
  ATprotect(&(term_v_21));
  term_v_21 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_w_21));
  term_w_21 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_x_21));
  term_x_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_y_21));
  term_y_21 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_21, term_w_21, term_x_21);
  ATprotect(&(term_z_21));
  term_z_21 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_a_22));
  term_a_22 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_c_22));
  term_c_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_e_22));
  term_e_22 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_21, term_a_22, term_c_22);
  ATprotect(&(term_h_22));
  term_h_22 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_i_22));
  term_i_22 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_j_22));
  term_j_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_k_22));
  term_k_22 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_22, term_i_22, term_j_22);
  ATprotect(&(term_l_22));
  term_l_22 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_m_22));
  term_m_22 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_n_22));
  term_n_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_o_22));
  term_o_22 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_22, term_m_22, term_n_22);
  ATprotect(&(term_q_22));
  term_q_22 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_u_22));
  term_u_22 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_v_22));
  term_v_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_d_23));
  term_d_23 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_22, term_u_22, term_v_22);
  ATprotect(&(term_e_23));
  term_e_23 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_f_23));
  term_f_23 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_g_23));
  term_g_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_h_23));
  term_h_23 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_23, term_f_23, term_g_23);
  ATprotect(&(term_j_23));
  term_j_23 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_o_23));
  term_o_23 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_q_23));
  term_q_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_r_23));
  term_r_23 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_23, term_o_23, term_q_23);
  ATprotect(&(term_s_23));
  term_s_23 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_t_23));
  term_t_23 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_u_23));
  term_u_23 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_v_23));
  term_v_23 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_23, term_t_23, term_u_23);
  ATprotect(&(term_w_23));
  term_w_23 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_x_23));
  term_x_23 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_y_23));
  term_y_23 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_23, term_n_15, term_x_23);
  ATprotect(&(term_a_24));
  term_a_24 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_d_24));
  term_d_24 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_f_24));
  term_f_24 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_g_24));
  term_g_24 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_24, term_d_24, term_f_24);
  ATprotect(&(term_h_24));
  term_h_24 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_i_24));
  term_i_24 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_l_24));
  term_l_24 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_m_24));
  term_m_24 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_24, term_i_24, term_l_24);
  ATprotect(&(term_o_24));
  term_o_24 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_p_24));
  term_p_24 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_q_24));
  term_q_24 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_r_24));
  term_r_24 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_24, term_p_24, term_q_24);
  ATprotect(&(term_s_24));
  term_s_24 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_t_24));
  term_t_24 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_u_24));
  term_u_24 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_w_24));
  term_w_24 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_24, term_t_24, term_u_24);
  ATprotect(&(term_x_24));
  term_x_24 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_d_25));
  term_d_25 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_e_25));
  term_e_25 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_i_25));
  term_i_25 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_24, term_d_25, term_e_25);
  ATprotect(&(term_o_25));
  term_o_25 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_p_25));
  term_p_25 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_q_25));
  term_q_25 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_r_25));
  term_r_25 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_25, term_p_25, term_q_25);
  ATprotect(&(term_u_25));
  term_u_25 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_x_25));
  term_x_25 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_y_25));
  term_y_25 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_z_25));
  term_z_25 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_25, term_x_25, term_y_25);
  ATprotect(&(term_a_26));
  term_a_26 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_d_26));
  term_d_26 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_e_26));
  term_e_26 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_f_26));
  term_f_26 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_26, term_d_26, term_e_26);
  ATprotect(&(term_u_26));
  term_u_26 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_v_26));
  term_v_26 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_y_28));
  term_y_28 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_g_29));
  term_g_29 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_i_29));
  term_i_29 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_n_29));
  term_n_29 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_x_29));
  term_x_29 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_g_30));
  term_g_30 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_h_30));
  term_h_30 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_q_30));
  term_q_30 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_r_30));
  term_r_30 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_t_30));
  term_t_30 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_z_30));
  term_z_30 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_g_31));
  term_g_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_j_31));
  term_j_31 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_m_31));
  term_m_31 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_n_31));
  term_n_31 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_o_31));
  term_o_31 = (ATerm) ATmakeAppl(sym__2, term_t_30, term_n_31);
  ATprotect(&(term_r_31));
  term_r_31 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_u_31));
  term_u_31 = (ATerm) ATmakeAppl(sym__2, term_t_30, term_z_30);
  ATprotect(&(term_w_31));
  term_w_31 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_c_32));
  term_c_32 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_j_32));
  term_j_32 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_n_32));
  term_n_32 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_o_32));
  term_o_32 = (ATerm) ATmakeInt(-1);
  ATprotect(&(term_r_32));
  term_r_32 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_v_32));
  term_v_32 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file> (file, mode)", 0, ATtrue));
  ATprotect(&(term_d_33));
  term_d_33 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_h_33));
  term_h_33 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_i_33));
  term_i_33 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_p_33));
  term_p_33 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_q_33));
  term_q_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_s_33));
  term_s_33 = (ATerm) ATmakeAppl(ATmakeSymbol("parse-stratego", 0, ATtrue));
  ATprotect(&(term_t_33));
  term_t_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue));
  ATprotect(&(term_h_35));
  term_h_35 = (ATerm) ATmakeAppl(ATmakeSymbol("parse error in ", 0, ATtrue));
  ATprotect(&(term_x_35));
  term_x_35 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
  ATprotect(&(term_d_36));
  term_d_36 = (ATerm) ATmakeAppl(ATmakeSymbol("*** module ", 0, ATtrue));
  ATprotect(&(term_e_36));
  term_e_36 = (ATerm) ATmakeAppl(ATmakeSymbol(" not found", 0, ATtrue));
  ATprotect(&(term_f_36));
  term_f_36 = (ATerm) ATmakeAppl(ATmakeSymbol(" reading ", 0, ATtrue));
  ATprotect(&(term_g_36));
  term_g_36 = (ATerm) ATmakeAppl(ATmakeSymbol("rtree", 0, ATtrue));
  ATprotect(&(term_h_36));
  term_h_36 = (ATerm) ATmakeAppl(ATmakeSymbol("str", 0, ATtrue));
  ATprotect(&(term_i_36));
  term_i_36 = (ATerm) ATmakeAppl(ATmakeSymbol("cr", 0, ATtrue));
  ATprotect(&(term_a_39));
  term_a_39 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_p_39));
  term_p_39 = (ATerm) ATmakeAppl(ATmakeSymbol("list-cons", 0, ATtrue));
  ATprotect(&(term_s_39));
  term_s_39 = (ATerm) ATmakeAppl(ATmakeSymbol("tuple-cons", 0, ATtrue));
  ATprotect(&(term_h_41));
  term_h_41 = (ATerm) ATmakeAppl(sym__2, term_p_33, term_r_32);
  ATprotect(&(term_p_41));
  term_p_41 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_s_41));
  term_s_41 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_t_41));
  term_t_41 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_u_41));
  term_u_41 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_v_41));
  term_v_41 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_y_41));
  term_y_41 = (ATerm) ATmakeAppl(sym__2, term_e_18, term_v_41);
  ATprotect(&(term_z_41));
  term_z_41 = (ATerm) ATmakeAppl(sym_Verbose_1, term_v_41);
  ATprotect(&(term_a_42));
  term_a_42 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_b_42));
  term_b_42 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_e_42));
  term_e_42 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_f_42));
  term_f_42 = (ATerm) ATmakeAppl(sym__2, term_e_42, term_h_33);
  ATprotect(&(term_h_42));
  term_h_42 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_i_42));
  term_i_42 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_v_42));
  term_v_42 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_w_42));
  term_w_42 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_x_42));
  term_x_42 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_y_42));
  term_y_42 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_m_43));
  term_m_43 = (ATerm) ATmakeAppl(ATmakeSymbol("-I d | --Include d   Include modules from directory d", 0, ATtrue));
  ATprotect(&(term_n_43));
  term_n_43 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_o_43));
  term_o_43 = (ATerm) ATmakeAppl(sym__2, term_z_14, term_n_43);
  ATprotect(&(term_p_43));
  term_p_43 = (ATerm) ATmakeAppl(ATmakeSymbol("--nodep              Don't create dependency file", 0, ATtrue));
  ATprotect(&(term_q_43));
  term_q_43 = (ATerm) ATmakeAppl(ATmakeSymbol("--dep f | -d f       Write dependency to file f", 0, ATtrue));
  ATprotect(&(term_r_43));
  term_r_43 = (ATerm) ATmakeAppl(ATmakeSymbol("--imports", 0, ATtrue));
  ATprotect(&(term_s_43));
  term_s_43 = (ATerm) ATmakeAppl(sym__2, term_r_43, term_h_33);
  ATprotect(&(term_t_43));
  term_t_43 = (ATerm) ATmakeAppl(ATmakeSymbol("--imports            Produce a list of imported modules only", 0, ATtrue));
  ATprotect(&(term_a_44));
  term_a_44 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_b_44));
  term_b_44 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_n_44));
  term_n_44 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_u_44));
  term_u_44 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_v_44));
  term_v_44 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_y_44));
  term_y_44 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_z_44));
  term_z_44 = (ATerm) ATmakeAppl(sym__2, term_v_42, term_w_42);
  ATprotect(&(term_g_45));
  term_g_45 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_h_45));
  term_h_45 = (ATerm) ATmakeAppl(sym__2, term_g_45, term_h_33);
  ATprotect(&(term_i_45));
  term_i_45 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_j_45));
  term_j_45 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_k_45));
  term_k_45 = (ATerm) ATmakeAppl(sym__2, term_j_45, term_h_33);
  ATprotect(&(term_l_45));
  term_l_45 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_m_45));
  term_m_45 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_r_45));
  term_r_45 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_w_45));
  term_w_45 = (ATerm) ATmakeAppl(sym__2, term_u_44, term_h_33);
  ATprotect(&(term_x_45));
  term_x_45 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_y_45));
  term_y_45 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_n_46));
  term_n_46 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_o_46));
  term_o_46 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_p_46));
  term_p_46 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_e_47));
  term_e_47 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_f_47));
  term_f_47 = (ATerm) ATmakeAppl(sym__2, term_e_47, term_h_33);
  ATprotect(&(term_g_47));
  term_g_47 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_h_47));
  term_h_47 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
}
ATerm p_7 (ATerm e_55, ATerm f_55, ATerm);
ATerm x_1 (ATerm);
ATerm write_to_0_0 (ATerm);
ATerm q_7 (ATerm k_33, ATerm l_33, ATerm);
ATerm create_dep_file_0_0 (ATerm);
ATerm s_7 (ATerm u_51, ATerm v_51, ATerm);
ATerm t_7 (ATerm i_55, ATerm j_55, ATerm);
ATerm u_7 (ATerm a_108 (ATerm), ATerm c_451, ATerm m_55, ATerm);
ATerm z_1 (ATerm);
ATerm write_to_text_0_0 (ATerm);
ATerm a_2 (ATerm);
ATerm b_2 (ATerm);
ATerm basename_1_0 (ATerm i_104 (ATerm), ATerm);
ATerm at_suffix_rev_1_0 (ATerm h_96 (ATerm), ATerm);
ATerm map_1_0 (ATerm j_95 (ATerm), ATerm);
ATerm c_2 (ATerm);
ATerm d_2 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm Imports_1_0 (ATerm i_80 (ATerm), ATerm);
ATerm g_2 (ATerm);
ATerm l_2 (ATerm);
ATerm flatten_stratego_0_0 (ATerm);
ATerm _2_0 (ATerm n_69 (ATerm), ATerm o_69 (ATerm), ATerm);
ATerm genzip_4_0 (ATerm m_97 (ATerm), ATerm n_97 (ATerm), ATerm o_97 (ATerm), ATerm p_97 (ATerm), ATerm);
ATerm m_2 (ATerm);
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
ATerm q_2 (ATerm);
ATerm d_8 (ATerm q_61, ATerm r_61, ATerm s_61, ATerm);
ATerm e_8 (ATerm s_113 (ATerm), ATerm a_62, ATerm z_61, ATerm);
ATerm h_12 (ATerm y_11, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm f_8 (ATerm k_55, ATerm);
ATerm g_8 (ATerm w_51, ATerm x_51, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm x_2 (ATerm);
ATerm y_2 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm z_2 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm a_3 (ATerm);
ATerm b_3 (ATerm);
ATerm read_repository_file_0_0 (ATerm);
ATerm d_3 (ATerm);
ATerm e_3 (ATerm);
ATerm f_3 (ATerm);
ATerm g_3 (ATerm);
ATerm h_3 (ATerm);
ATerm i_3 (ATerm);
ATerm k_3 (ATerm);
ATerm l_3 (ATerm);
ATerm xtc_read_0_0 (ATerm);
ATerm repeat_1_0 (ATerm u_88 (ATerm), ATerm);
ATerm xtc_location_0_0 (ATerm);
ATerm m_3 (ATerm);
ATerm n_3 (ATerm);
ATerm o_3 (ATerm);
ATerm p_3 (ATerm);
ATerm t_3 (ATerm);
ATerm xtc_load_0_0 (ATerm);
ATerm u_3 (ATerm);
ATerm v_3 (ATerm);
ATerm x_15 (ATerm d_15, ATerm);
ATerm x_3 (ATerm);
ATerm d_4 (ATerm);
ATerm e_4 (ATerm);
ATerm f_4 (ATerm);
ATerm xtc_find_0_0 (ATerm);
ATerm xtc_command_1_0 (ATerm e_117 (ATerm), ATerm);
ATerm h_8 (ATerm h_106 (ATerm), ATerm i_50, ATerm g_50, ATerm);
ATerm y_16 (ATerm o_16, ATerm);
ATerm z_16 (ATerm q_16, ATerm r_16, ATerm s_16, ATerm);
ATerm j_4 (ATerm);
ATerm open_file_0_0 (ATerm);
ATerm i_8 (ATerm k_46, ATerm l_46, ATerm);
ATerm new_0_0 (ATerm);
ATerm new_file_0_0 (ATerm);
ATerm k_4 (ATerm);
ATerm xtc_new_file_0_0 (ATerm);
ATerm xtc_transform_file_2_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm);
ATerm FILE_1_0 (ATerm t_79 (ATerm), ATerm);
ATerm l_4 (ATerm);
ATerm v_4 (ATerm);
ATerm w_4 (ATerm);
ATerm y_4 (ATerm);
ATerm i_5 (ATerm);
ATerm parse_module_0_0 (ATerm);
ATerm debug_1_0 (ATerm y_107 (ATerm), ATerm);
ATerm if_verbose3_1_0 (ATerm m_109 (ATerm), ATerm);
ATerm fetch_elem_1_0 (ATerm v_95 (ATerm), ATerm);
ATerm j_8 (ATerm o_51, ATerm p_51, ATerm);
ATerm k_8 (ATerm x_87 (ATerm), ATerm z_31, ATerm y_31, ATerm);
ATerm t_5 (ATerm);
ATerm get_module_1_0 (ATerm w_87 (ATerm), ATerm);
ATerm m_8 (ATerm q_99 (ATerm), ATerm r_99 (ATerm), ATerm z_38, ATerm y_38, ATerm);
ATerm n_8 (ATerm i_99 (ATerm), ATerm t_38, ATerm s_38, ATerm);
ATerm x_5 (ATerm);
ATerm y_5 (ATerm);
ATerm z_5 (ATerm);
ATerm r_8 (ATerm s_592, ATerm x_592, ATerm f_65, ATerm);
ATerm c_6 (ATerm);
ATerm m_6 (ATerm);
ATerm n_6 (ATerm);
ATerm o_6 (ATerm);
ATerm q_6 (ATerm);
ATerm r_6 (ATerm);
ATerm diff_0_0 (ATerm);
ATerm t_8 (ATerm m_118 (ATerm), ATerm n_118 (ATerm), ATerm o_118 (ATerm), ATerm w_67, ATerm t_67, ATerm a_68, ATerm x_67, ATerm u_67, ATerm v_67, ATerm);
ATerm GnNext_3_0 (ATerm m_118 (ATerm), ATerm n_118 (ATerm), ATerm o_118 (ATerm), ATerm);
ATerm while_not_2_0 (ATerm j_89 (ATerm), ATerm k_89 (ATerm), ATerm);
ATerm for_3_0 (ATerm m_89 (ATerm), ATerm n_89 (ATerm), ATerm o_89 (ATerm), ATerm);
ATerm s_6 (ATerm);
ATerm t_6 (ATerm);
ATerm graph_nodes_roots_3_0 (ATerm j_118 (ATerm), ATerm k_118 (ATerm), ATerm l_118 (ATerm), ATerm);
ATerm filter_1_0 (ATerm p_102 (ATerm), ATerm);
ATerm w_6 (ATerm);
ATerm z_6 (ATerm);
ATerm a_7 (ATerm);
ATerm c_7 (ATerm);
ATerm d_7 (ATerm);
ATerm e_7 (ATerm);
ATerm w_8 (ATerm p_31, ATerm);
ATerm y_8 (ATerm g_52, ATerm h_52, ATerm);
ATerm copy_to_1_0 (ATerm k_0 (ATerm), ATerm);
ATerm z_8 (ATerm y_60, ATerm z_60, ATerm);
ATerm end_scope_1_0 (ATerm e_106 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm n_88 (ATerm), ATerm o_88 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm d_106 (ATerm), ATerm);
ATerm g_7 (ATerm);
ATerm i_7 (ATerm);
ATerm j_7 (ATerm);
ATerm xtc_temp_files_1_0 (ATerm q_116 (ATerm), ATerm);
ATerm n_7 (ATerm);
ATerm xtc_io_1_0 (ATerm r_116 (ATerm), ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm o_7 (ATerm);
ATerm r_7 (ATerm);
ATerm v_7 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm w_7 (ATerm);
ATerm b_8 (ATerm);
ATerm l_8 (ATerm);
ATerm u_8 (ATerm);
ATerm v_8 (ATerm);
ATerm f_9 (ATerm);
ATerm i_9 (ATerm);
ATerm j_9 (ATerm);
ATerm k_9 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm g_9 (ATerm y_68, ATerm z_68, ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm l_9 (ATerm);
ATerm m_9 (ATerm);
ATerm n_9 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm o_9 (ATerm);
ATerm p_9 (ATerm);
ATerm s_9 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm e_9 (ATerm t_60, ATerm u_60, ATerm s_60, ATerm);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm at_end_1_0 (ATerm z_95 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm j_34 (ATerm y_33, ATerm);
ATerm conc_0_0 (ATerm);
ATerm x_8 (ATerm e_69, ATerm d_69, ATerm);
ATerm c_10 (ATerm);
ATerm f_10 (ATerm);
ATerm g_10 (ATerm);
ATerm i_10 (ATerm);
ATerm j_10 (ATerm);
ATerm k_10 (ATerm);
ATerm m_10 (ATerm);
ATerm o_10 (ATerm);
ATerm p_10 (ATerm);
ATerm t_10 (ATerm);
ATerm u_10 (ATerm);
ATerm w_10 (ATerm);
ATerm pack_stratego_options_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm a_9 (ATerm u_48, ATerm v_48, ATerm);
ATerm foldr_2_0 (ATerm m_101 (ATerm), ATerm n_101 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm a_11 (ATerm);
ATerm b_11 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm k_109 (ATerm), ATerm);
ATerm c_11 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm g_11 (ATerm);
ATerm need_help_1_0 (ATerm y_110 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm d_9 (ATerm k_62, ATerm l_62, ATerm);
ATerm Program_1_0 (ATerm p_79 (ATerm), ATerm);
ATerm i_11 (ATerm);
ATerm j_11 (ATerm);
ATerm l_11 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm q_79 (ATerm), ATerm);
ATerm fetch_1_0 (ATerm t_95 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm m_11 (ATerm);
ATerm n_11 (ATerm);
ATerm p_11 (ATerm);
ATerm q_11 (ATerm);
ATerm t_11 (ATerm);
ATerm v_11 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm c_74 (ATerm), ATerm d_74 (ATerm), ATerm);
ATerm w_11 (ATerm);
ATerm parse_options_p__1_0 (ATerm p_113 (ATerm), ATerm);
ATerm a_12 (ATerm);
ATerm b_12 (ATerm);
ATerm c_12 (ATerm);
ATerm f_12 (ATerm);
ATerm parse_options_1_0 (ATerm o_113 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm a_111 (ATerm), ATerm b_111 (ATerm), ATerm c_111 (ATerm), ATerm d_111 (ATerm), ATerm);
ATerm n_12 (ATerm);
ATerm p_12 (ATerm);
ATerm q_12 (ATerm);
ATerm r_12 (ATerm);
ATerm e_13 (ATerm);
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
ATerm x_1 (ATerm t)
{
  ATerm r_0 = NULL,s_0 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm y_0 = ATgetArgument(t, 0);
      if(match_cons(y_0, sym_Stream_1))
        {
          r_0 = ATgetArgument(y_0, 0);
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
  ATerm n_0 = NULL,q_0 = NULL;
  n_0 = t;
  t = xtc_new_file_0_0(t);
  q_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_0, n_0);
  t = u_7(x_1, q_0, n_0, t);
  t = SSL_close_file(q_0);
  t = (ATerm) ATmakeAppl(sym_FILE_1, q_0);
  return(t);
}
ATerm q_7 (ATerm k_33, ATerm l_33, ATerm t)
{
  t = l_33;
  {
    ATerm l_14 = t;
    int m_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(m_14);
      }
    else
      {
        t = l_14;
        {
          ATerm y_1 (ATerm t)
          {
            ATerm o_14 = t;
            int p_14 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(p_14);
              }
            else
              {
                t = o_14;
                {
                  ATerm v_0 = NULL;
                  t = Cons_2_0(_id, y_1, t);
                  v_0 = t;
                  t = (ATerm) ATinsert(CheckATermList(v_0), k_33);
                }
              }
            return(t);
          }
          t = Cons_2_0(_id, y_1, t);
        }
      }
  }
  return(t);
}
ATerm create_dep_file_0_0 (ATerm t)
{
  ATerm z_0 = NULL,a_1 = NULL,b_1 = NULL,c_1 = NULL,g_1 = NULL,h_1 = NULL,i_1 = NULL,j_1 = NULL,k_1 = NULL;
  z_0 = t;
  t = term_r_14;
  t = get_config_0_0(t);
  {
    ATerm t_14 = t;
    int v_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_w_14;
        t = get_config_0_0(t);
        ;
        LocalPopChoice(v_14);
      }
    else
      {
        t = t_14;
        {
          ATerm y_14 = t;
          if((PushChoice() == 0))
            {
              t = term_z_14;
              t = get_config_0_0(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = y_14;
            }
        }
      }
    a_1 = t;
    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_b_15), term_a_15), a_1);
    h_1 = t;
    t = SSL_concat_strings(h_1);
    g_1 = t;
    t = (ATerm) ATmakeAppl(sym__2, g_1, term_c_15);
    t = open_file_0_0(t);
    b_1 = t;
    t = term_e_15;
    i_1 = t;
    t = (ATerm) ATinsert(CheckATermList(z_0), term_f_15);
    j_1 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_e_15, (ATerm) ATinsert(CheckATermList(z_0), term_f_15));
    t = q_7(i_1, j_1, t);
    c_1 = t;
    t = (ATerm) ATinsert(CheckATermList(c_1), a_1);
    k_1 = t;
    t = SSL_printnl(b_1, k_1);
    t = SSL_close_file(b_1);
    t = (ATerm) ATmakeAppl(sym_FILE_1, g_1);
  }
  return(t);
}
ATerm s_7 (ATerm u_51, ATerm v_51, ATerm t)
{
  ATerm l_1 = NULL;
  t = SSL_fputc(u_51, v_51);
  l_1 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, l_1);
  return(t);
}
ATerm t_7 (ATerm i_55, ATerm j_55, ATerm t)
{
  ATerm m_1 = NULL;
  t = SSL_write_term_to_stream_text(i_55, j_55);
  m_1 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, m_1);
  return(t);
}
ATerm u_7 (ATerm a_108 (ATerm), ATerm c_451, ATerm m_55, ATerm t)
{
  ATerm n_1 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, c_451, term_c_15);
  t = open_stream_0_0(t);
  n_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_1, m_55);
  t = a_108(t);
  t = fclose_0_0(t);
  t = m_55;
  return(t);
}
ATerm z_1 (ATerm t)
{
  ATerm q_1 = NULL,t_1 = NULL,v_1 = NULL,e_2 = NULL,f_2 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm g_15 = ATgetArgument(t, 0);
      if(match_cons(g_15, sym_Stream_1))
        {
          t_1 = ATgetArgument(g_15, 0);
        }
      else
        _fail(t);
      v_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_7(t_1, v_1, t);
  q_1 = t;
  t = term_n_15;
  e_2 = t;
  t = q_1;
  if(match_cons(t, sym_Stream_1))
    {
      f_2 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_n_15, q_1);
  t = s_7(e_2, f_2, t);
  return(t);
}
ATerm write_to_text_0_0 (ATerm t)
{
  ATerm o_1 = NULL,p_1 = NULL;
  o_1 = t;
  t = xtc_new_file_0_0(t);
  p_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_1, o_1);
  t = u_7(z_1, p_1, o_1, t);
  t = SSL_close_file(p_1);
  t = (ATerm) ATmakeAppl(sym_FILE_1, p_1);
  return(t);
}
ATerm a_2 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 47)))
    _fail(t);
  return(t);
}
ATerm b_2 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 46)))
    _fail(t);
  return(t);
}
ATerm basename_1_0 (ATerm i_104 (ATerm), ATerm t)
{
  ATerm h_2 = NULL,i_2 = NULL;
  h_2 = t;
  t = SSL_explode_string(h_2);
  {
    ATerm o_15 = t;
    int s_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_2 (ATerm t)
        {
          ATerm t_15 = t;
          int u_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Cons_2_0(_id, v_2, t);
              ;
              LocalPopChoice(u_15);
            }
          else
            {
              t = t_15;
              {
                ATerm v_15 = t;
                int y_15 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Cons_2_0(a_2, _id, t);
                    ;
                    LocalPopChoice(y_15);
                  }
                else
                  {
                    t = v_15;
                    t = Cons_2_0(b_2, i_104, t);
                    t = (ATerm) ATempty;
                  }
              }
            }
          return(t);
        }
        t = v_2(t);
        ;
        LocalPopChoice(s_15);
      }
    else
      {
        t = o_15;
      }
    i_2 = t;
    t = SSL_implode_string(i_2);
  }
  return(t);
}
ATerm at_suffix_rev_1_0 (ATerm h_96 (ATerm), ATerm t)
{
  ATerm w_2 (ATerm t)
  {
    ATerm j_16 = t;
    int k_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, w_2, t);
        ;
        LocalPopChoice(k_16);
      }
    else
      {
        t = j_16;
        t = h_96(t);
      }
    return(t);
  }
  t = w_2(t);
  return(t);
}
ATerm map_1_0 (ATerm j_95 (ATerm), ATerm t)
{
  ATerm c_3 (ATerm t)
  {
    ATerm l_16 = t;
    int m_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(m_16);
      }
    else
      {
        t = l_16;
        t = Cons_2_0(j_95, c_3, t);
      }
    return(t);
  }
  t = c_3(t);
  return(t);
}
ATerm c_2 (ATerm t)
{
  ATerm n_16 = t;
  int p_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(p_16);
    }
  else
    {
      t = n_16;
    }
  return(t);
}
ATerm d_2 (ATerm t)
{
  t = term_t_16;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm u_16 = t;
  int d_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_3 = NULL;
      s_3 = t;
      t = SSL_is_string(s_3);
      ;
      LocalPopChoice(d_17);
    }
  else
    {
      t = u_16;
      {
        ATerm f_17 = t;
        int i_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(c_2, t);
            ;
            LocalPopChoice(i_17);
          }
        else
          {
            t = f_17;
            {
              ATerm y_3 = NULL,z_3 = NULL,a_4 = NULL;
              y_3 = t;
              if(match_cons(t, sym_Path_1))
                {
                  z_3 = ATgetArgument(t, 0);
                  t = z_3;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      z_3 = ATgetArgument(t, 0);
                      t = z_3;
                      {
                        ATerm j_17 = t;
                        int k_17 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(k_17);
                          }
                        else
                          {
                            t = j_17;
                            t = debug_1_0(d_2, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm h_4 = NULL,i_4 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          z_3 = ATgetArgument(t, 0);
                          a_4 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = z_3;
                      t = eval_config_0_0(t);
                      h_4 = t;
                      t = a_4;
                      t = eval_config_0_0(t);
                      i_4 = t;
                      t = (ATerm) ATmakeAppl(sym__2, h_4, i_4);
                      t = i_8(h_4, i_4, t);
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
  ATerm m_4 = NULL,n_4 = NULL;
  m_4 = t;
  t = term_l_17;
  n_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_17, m_4);
  t = d_9(n_4, m_4, t);
  {
    ATerm m_17 = t;
    int n_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_4 = NULL,p_4 = NULL;
        t = eval_config_0_0(t);
        o_4 = t;
        t = term_l_17;
        p_4 = t;
        t = SSL_table_put(p_4, m_4, o_4);
        t = o_4;
        ;
        LocalPopChoice(n_17);
      }
    else
      {
        t = m_17;
      }
  }
  return(t);
}
ATerm Imports_1_0 (ATerm i_80 (ATerm), ATerm t)
{
  ATerm q_4 = NULL,r_4 = NULL,s_4 = NULL,t_4 = NULL,c_0 = NULL,o_0 = NULL;
  t_4 = t;
  if(match_cons(t, sym_Imports_1))
    {
      r_4 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_4);
  q_4 = t;
  t = r_4;
  t = i_80(t);
  s_4 = t;
  o_0 = t;
  t = (ATerm) ATmakeAppl(sym_Imports_1, s_4);
  c_0 = t;
  t = SSLsetAnnotations(c_0, q_4);
  return(t);
}
ATerm g_2 (ATerm t)
{
  ATerm z_4 = NULL;
  if(match_cons(t, sym_Specification_1))
    {
      z_4 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = z_4;
  t = filter_1_0(l_2, t);
  return(t);
}
ATerm l_2 (ATerm t)
{
  ATerm o_17 = t;
  if((PushChoice() == 0))
    {
      t = Imports_1_0(_id, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = o_17;
    }
  return(t);
}
ATerm flatten_stratego_0_0 (ATerm t)
{
  ATerm x_4 = NULL;
  t = map_1_0(g_2, t);
  t = concat_0_0(t);
  x_4 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, x_4);
  return(t);
}
ATerm _2_0 (ATerm n_69 (ATerm), ATerm o_69 (ATerm), ATerm t)
{
  ATerm a_5 = NULL,b_5 = NULL,c_5 = NULL,d_5 = NULL,e_5 = NULL,h_5 = NULL,p_0 = NULL,t_0 = NULL;
  h_5 = t;
  if(match_cons(t, sym__2))
    {
      b_5 = ATgetArgument(t, 0);
      c_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_5);
  a_5 = t;
  t = b_5;
  t = n_69(t);
  d_5 = t;
  t = c_5;
  t = o_69(t);
  e_5 = t;
  t_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_5, e_5);
  p_0 = t;
  t = SSLsetAnnotations(p_0, a_5);
  return(t);
}
ATerm genzip_4_0 (ATerm m_97 (ATerm), ATerm n_97 (ATerm), ATerm o_97 (ATerm), ATerm p_97 (ATerm), ATerm t)
{
  ATerm n_5 (ATerm t)
  {
    ATerm p_17 = t;
    int q_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_97(t);
        ;
        LocalPopChoice(q_17);
      }
    else
      {
        t = p_17;
        t = n_97(t);
        t = _2_0(p_97, n_5, t);
        t = o_97(t);
      }
    return(t);
  }
  t = n_5(t);
  return(t);
}
ATerm m_2 (ATerm t)
{
  ATerm o_5 = NULL;
  if(match_cons(t, sym_Imports_1))
    {
      o_5 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = o_5;
  return(t);
}
ATerm x_7 (ATerm p_153, ATerm t)
{
  t = p_153;
  t = filter_1_0(m_2, t);
  t = concat_0_0(t);
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm s_5 = NULL;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_r_17;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      ATerm v_5 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          s_5 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, term_s_17);
      v_5 = t;
      t = (ATerm) ATmakeAppl(sym__2, s_5, (ATerm) ATinsert(ATempty, term_s_17));
      t = j_8(s_5, v_5, t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
ATerm pass_keep_0_0 (ATerm t)
{
  ATerm a_6 = NULL,b_6 = NULL,d_6 = NULL,e_6 = NULL;
  t = term_t_17;
  {
    ATerm v_17 = t;
    int x_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        ;
        LocalPopChoice(x_17);
      }
    else
      {
        t = v_17;
        t = term_y_17;
      }
    a_6 = t;
    t = term_y_17;
    d_6 = t;
    t = (ATerm) ATmakeAppl(sym__2, a_6, term_y_17);
    t = y_7(a_6, d_6, t);
    e_6 = t;
    t = SSL_int_to_string(e_6);
    b_6 = t;
    t = (ATerm) ATinsert(ATinsert(ATempty, b_6), term_t_17);
  }
  return(t);
}
ATerm y_7 (ATerm a_49, ATerm b_49, ATerm t)
{
  ATerm z_17 = t;
  int a_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(a_49, b_49);
      ;
      LocalPopChoice(a_18);
    }
  else
    {
      t = z_17;
      t = SSL_subtr(a_49, b_49);
    }
  return(t);
}
ATerm pass_verbose_0_0 (ATerm t)
{
  ATerm f_6 = NULL,g_6 = NULL,h_6 = NULL,i_6 = NULL;
  t = term_e_18;
  {
    ATerm f_18 = t;
    int h_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        ;
        LocalPopChoice(h_18);
      }
    else
      {
        t = f_18;
        t = term_y_17;
      }
    f_6 = t;
    t = term_y_17;
    h_6 = t;
    t = (ATerm) ATmakeAppl(sym__2, f_6, term_y_17);
    t = y_7(f_6, h_6, t);
    i_6 = t;
    t = SSL_int_to_string(i_6);
    g_6 = t;
    t = (ATerm) ATinsert(ATinsert(ATempty, g_6), term_e_18);
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
  ATerm o_8 = NULL,p_8 = NULL,q_8 = NULL,s_8 = NULL;
  o_8 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      p_8 = ATgetArgument(t, 0);
      {
        ATerm s_1 = NULL,u_1 = NULL;
        t = SSL_int_to_string(p_8);
        s_1 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_j_18), s_1), term_i_18);
        u_1 = t;
        t = SSL_concat_strings(u_1);
      }
    }
  else
    {
      ATerm j_2 = NULL,k_2 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          p_8 = ATgetArgument(t, 0);
          q_8 = ATgetArgument(t, 1);
          s_8 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(q_8);
      j_2 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, s_8), term_l_18), j_2), term_k_18), p_8);
      k_2 = t;
      t = SSL_concat_strings(k_2);
    }
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm b_9 = NULL;
  b_9 = t;
  {
    ATerm t_18 = t;
    int y_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_f_26), term_z_25), term_r_25), term_i_25), term_w_24), term_r_24), term_m_24), term_g_24), term_y_23), term_v_23), term_r_23), term_h_23), term_d_23), term_o_22), term_k_22), term_e_22), term_y_21), term_u_21), term_l_21), term_e_21), term_q_20), term_i_20), term_z_19), term_u_19), term_o_19), term_k_19), term_g_19), term_c_19);
        {
          ATerm n_2 (ATerm t)
          {
            if(match_cons(t, sym_Signal_3))
              {
                ATerm n_26 = ATgetArgument(t, 0);
                if((b_9 != ATgetArgument(t, 1)))
                  {
                    _fail(ATgetArgument(t, 1));
                  }
                {
                  ATerm o_26 = ATgetArgument(t, 2);
                }
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_elem_1_0(n_2, t);
        }
        ;
        LocalPopChoice(y_18);
      }
    else
      {
        t = t_18;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, b_9);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm h_9 = NULL;
  h_9 = t;
  {
    ATerm p_26 = t;
    int q_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_9 = NULL,r_2 = NULL,s_2 = NULL,t_2 = NULL;
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm r_26 = ATgetArgument(t, 0);
            r_9 = ATgetArgument(t, 1);
            {
              ATerm s_26 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = r_9;
        {
          ATerm t_26 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = t_26;
            }
          t = signal_from_number_0_0(t);
          t = signal_to_descr_0_0(t);
          r_2 = t;
          t = term_u_26;
          s_2 = t;
          t = (ATerm) ATinsert(ATinsert(ATempty, r_2), term_v_26);
          t_2 = t;
          t = SSL_printnl(s_2, t_2);
          t = (ATerm) ATmakeAppl(sym__2, term_u_26, (ATerm) ATinsert(ATinsert(ATempty, r_2), term_v_26));
        }
        ;
        LocalPopChoice(q_26);
      }
    else
      {
        t = p_26;
      }
    t = h_9;
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
  ATerm v_9 = NULL,w_9 = NULL;
  v_9 = t;
  t = fork_0_0(t);
  w_9 = t;
  {
    ATerm x_26 = t;
    int c_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = v_9;
        t = v_109(t);
        ;
        LocalPopChoice(c_27);
      }
    else
      {
        t = x_26;
        t = SSL_waitpid(w_9);
        t = warn_ifsignaled_0_0(t);
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm d_27 = ATgetArgument(t, 0);
            if(((ATgetType(d_27) != AT_INT) || (ATgetInt((ATermInt) d_27) != 0)))
              _fail(t);
            {
              ATerm g_27 = ATgetArgument(t, 1);
            }
            {
              ATerm h_27 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = v_9;
      }
  }
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm y_9 = NULL;
  y_9 = t;
  t = SSL_table_keys(y_9);
  {
    ATerm o_2 (ATerm t)
    {
      ATerm z_9 = NULL,a_10 = NULL;
      z_9 = t;
      t = (ATerm) ATmakeAppl(sym__2, y_9, z_9);
      t = d_9(y_9, z_9, t);
      a_10 = t;
      t = (ATerm) ATmakeAppl(sym__2, z_9, a_10);
      return(t);
    }
    t = map_1_0(o_2, t);
  }
  return(t);
}
ATerm if_verbose5_1_0 (ATerm o_109 (ATerm), ATerm t)
{
  ATerm i_27 = t;
  int l_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_10 = NULL,d_10 = NULL;
      b_10 = t;
      t = term_e_18;
      t = get_config_0_0(t);
      d_10 = t;
      t = (ATerm) ATmakeAppl(sym__2, d_10, term_d_25);
      t = geq_0_0(t);
      t = b_10;
      t = o_109(t);
      ;
      LocalPopChoice(l_27);
    }
  else
    {
      t = i_27;
    }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm n_109 (ATerm), ATerm t)
{
  ATerm m_27 = t;
  int n_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_10 = NULL,h_10 = NULL;
      e_10 = t;
      t = term_e_18;
      t = get_config_0_0(t);
      h_10 = t;
      t = (ATerm) ATmakeAppl(sym__2, h_10, term_w_21);
      t = geq_0_0(t);
      t = e_10;
      t = n_109(t);
      ;
      LocalPopChoice(n_27);
    }
  else
    {
      t = m_27;
    }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm p_109 (ATerm), ATerm t)
{
  ATerm s_27 = t;
  int t_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_10 = NULL,n_10 = NULL;
      l_10 = t;
      t = term_e_18;
      t = get_config_0_0(t);
      n_10 = t;
      t = (ATerm) ATmakeAppl(sym__2, n_10, term_m_19);
      t = geq_0_0(t);
      t = l_10;
      t = p_109(t);
      ;
      LocalPopChoice(t_27);
    }
  else
    {
      t = s_27;
    }
  return(t);
}
ATerm c_8 (ATerm n_99 (ATerm), ATerm v_38, ATerm u_38, ATerm t)
{
  t = v_38;
  {
    ATerm v_10 (ATerm t)
    {
      ATerm u_27 = t;
      int v_27 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = u_38;
          ;
          LocalPopChoice(v_27);
        }
      else
        {
          t = u_27;
          {
            ATerm w_27 = t;
            int x_27 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm q_10 = NULL,r_10 = NULL,s_10 = NULL;
                q_10 = t;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    r_10 = ATgetFirst((ATermList) t);
                    s_10 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = q_10;
                {
                  ATerm p_2 (ATerm t)
                  {
                    t = u_38;
                    return(t);
                  }
                  t = m_8(n_99, p_2, r_10, s_10, t);
                  t = v_10(t);
                }
                ;
                LocalPopChoice(x_27);
              }
            else
              {
                t = w_27;
                t = Cons_2_0(_id, v_10, t);
              }
          }
        }
      return(t);
    }
    t = v_10(t);
  }
  return(t);
}
ATerm q_2 (ATerm t)
{
  ATerm d_11 = NULL;
  if(match_cons(t, sym__2))
    {
      d_11 = ATgetArgument(t, 0);
      if((d_11 != ATgetArgument(t, 1)))
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
  ATerm x_10 = NULL,y_10 = NULL,z_10 = NULL;
  x_10 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_61, r_61);
  {
    ATerm y_27 = t;
    int z_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm a_28 = ATgetArgument(t, 0);
            ATerm b_28 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, q_61, r_61);
        t = d_9(q_61, r_61, t);
        ;
        LocalPopChoice(z_27);
      }
    else
      {
        t = y_27;
        t = (ATerm) ATempty;
      }
    y_10 = t;
    t = (ATerm) ATmakeAppl(sym__2, y_10, s_61);
    t = c_8(q_2, y_10, s_61, t);
    z_10 = t;
    t = SSL_table_put(q_61, r_61, z_10);
    t = x_10;
  }
  return(t);
}
ATerm e_8 (ATerm s_113 (ATerm), ATerm a_62, ATerm z_61, ATerm t)
{
  t = z_61;
  {
    ATerm u_2 (ATerm t)
    {
      ATerm e_11 = NULL,f_11 = NULL;
      if(match_cons(t, sym__2))
        {
          e_11 = ATgetArgument(t, 0);
          f_11 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__3, a_62, e_11, f_11);
      t = s_113(t);
      return(t);
    }
    t = map_1_0(u_2, t);
  }
  return(t);
}
ATerm h_12 (ATerm y_11, ATerm t)
{
  t = SSL_fclose(y_11);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm d_12 = NULL,e_12 = NULL;
  e_12 = t;
  if(match_cons(t, sym_Stream_1))
    {
      d_12 = ATgetArgument(t, 0);
      {
        ATerm c_28 = t;
        int d_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(d_12);
            ;
            LocalPopChoice(d_28);
          }
        else
          {
            t = c_28;
            t = h_12(e_12, t);
          }
      }
    }
  else
    {
      t = h_12(e_12, t);
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
  ATerm i_12 = NULL;
  t = SSL_fopen(w_51, x_51);
  i_12 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, i_12);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm j_12 = NULL;
  t = SSL_stdin_stream();
  j_12 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, j_12);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm k_12 = NULL;
  t = SSL_stdout_stream();
  k_12 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, k_12);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm l_12 = NULL;
  t = SSL_stderr_stream();
  l_12 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, l_12);
  return(t);
}
ATerm x_2 (ATerm t)
{
  ATerm v_12 = NULL;
  if(match_cons(t, sym_Path_1))
    {
      v_12 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = v_12;
  return(t);
}
ATerm y_2 (ATerm t)
{
  ATerm y_12 = NULL;
  y_12 = t;
  t = SSL_is_string(y_12);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm e_28 = ATgetArgument(t, 0);
      ATerm f_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm g_28 = t;
    int h_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_12 = NULL,j_3 = NULL;
        s_12 = t;
        t = SSL_explode_term(s_12);
        if(match_cons(t, sym__2))
          {
            ATerm k_28 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) k_28) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm l_28 = ATgetArgument(t, 1);
              if(((ATgetType(l_28) == AT_LIST) && !(ATisEmpty(l_28))))
                {
                  j_3 = ATgetFirst((ATermList) l_28);
                  {
                    ATerm m_28 = (ATerm) ATgetNext((ATermList) l_28);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = j_3;
        if(match_cons(t, sym_stderr_0))
          {
            t = j_3;
            t = stderr_stream_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_stdout_0))
              {
                t = j_3;
                t = stdout_stream_0_0(t);
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = j_3;
                t = stdin_stream_0_0(t);
              }
          }
        ;
        LocalPopChoice(h_28);
      }
    else
      {
        t = g_28;
        {
          ATerm p_28 = t;
          int q_28 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm t_12 = NULL,u_12 = NULL;
              t = _2_0(x_2, _id, t);
              if(match_cons(t, sym__2))
                {
                  t_12 = ATgetArgument(t, 0);
                  u_12 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = g_8(t_12, u_12, t);
              ;
              LocalPopChoice(q_28);
            }
          else
            {
              t = p_28;
              {
                ATerm w_12 = NULL,x_12 = NULL;
                t = _2_0(y_2, _id, t);
                if(match_cons(t, sym__2))
                  {
                    w_12 = ATgetArgument(t, 0);
                    x_12 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = g_8(w_12, x_12, t);
              }
            }
        }
      }
  }
  return(t);
}
ATerm z_2 (ATerm t)
{
  t = term_y_28;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm a_13 = NULL,b_13 = NULL,c_13 = NULL;
  ATerm e_29 = t;
  int f_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_13 = NULL;
      d_13 = t;
      t = (ATerm) ATmakeAppl(sym__2, d_13, term_g_29);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(f_29);
    }
  else
    {
      t = e_29;
      t = debug_1_0(z_2, t);
      _fail(t);
    }
  a_13 = t;
  if(match_cons(t, sym_Stream_1))
    {
      c_13 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_8(c_13, t);
  b_13 = t;
  t = a_13;
  t = fclose_0_0(t);
  t = b_13;
  return(t);
}
ATerm a_3 (ATerm t)
{
  t = term_i_29;
  return(t);
}
ATerm b_3 (ATerm t)
{
  t = term_n_29;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm o_29 = t;
  int q_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_13 = NULL,g_13 = NULL;
      f_13 = t;
      t = (ATerm) ATinsert(ATempty, term_x_29);
      g_13 = t;
      t = (ATerm) ATmakeAppl(sym__2, f_13, (ATerm) ATinsert(ATempty, term_x_29));
      t = j_8(f_13, g_13, t);
      LocalPopChoice(q_29);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = o_29;
      {
        ATerm c_30 = t;
        int e_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_30 = t;
            if((PushChoice() == 0))
              {
                ATerm h_13 = NULL,i_13 = NULL;
                h_13 = t;
                t = (ATerm) ATinsert(ATempty, term_s_17);
                i_13 = t;
                t = (ATerm) ATmakeAppl(sym__2, h_13, (ATerm) ATinsert(ATempty, term_s_17));
                t = j_8(h_13, i_13, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = f_30;
              }
            t = debug_1_0(a_3, t);
            ;
            LocalPopChoice(e_30);
          }
        else
          {
            t = c_30;
            t = debug_1_0(b_3, t);
          }
        t = (ATerm) ATempty;
      }
    }
  return(t);
}
ATerm d_3 (ATerm t)
{
  t = debug_1_0(e_3, t);
  return(t);
}
ATerm e_3 (ATerm t)
{
  t = term_g_30;
  return(t);
}
ATerm f_3 (ATerm t)
{
  t = debug_1_0(g_3, t);
  return(t);
}
ATerm g_3 (ATerm t)
{
  t = term_h_30;
  return(t);
}
ATerm h_3 (ATerm t)
{
  ATerm v_13 = NULL,w_13 = NULL,x_13 = NULL;
  v_13 = t;
  t = term_u_26;
  w_13 = t;
  t = (ATerm) ATinsert(ATempty, term_q_30);
  x_13 = t;
  t = SSL_printnl(w_13, x_13);
  t = v_13;
  return(t);
}
ATerm i_3 (ATerm t)
{
  ATerm y_13 = NULL,z_13 = NULL,a_14 = NULL;
  if(match_cons(t, sym__3))
    {
      y_13 = ATgetArgument(t, 0);
      z_13 = ATgetArgument(t, 1);
      a_14 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = d_8(y_13, z_13, a_14, t);
  return(t);
}
ATerm k_3 (ATerm t)
{
  ATerm b_14 = NULL,c_14 = NULL,d_14 = NULL;
  b_14 = t;
  t = term_u_26;
  c_14 = t;
  t = (ATerm) ATinsert(ATempty, term_r_30);
  d_14 = t;
  t = SSL_printnl(c_14, d_14);
  t = b_14;
  return(t);
}
ATerm l_3 (ATerm t)
{
  ATerm e_14 = NULL,f_14 = NULL,g_14 = NULL;
  e_14 = t;
  t = term_u_26;
  f_14 = t;
  t = (ATerm) ATinsert(ATempty, term_q_30);
  g_14 = t;
  t = SSL_printnl(f_14, g_14);
  t = e_14;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm j_13 = NULL,k_13 = NULL,l_13 = NULL,m_13 = NULL,n_13 = NULL,o_13 = NULL,p_13 = NULL,q_13 = NULL,r_13 = NULL,s_13 = NULL;
  j_13 = t;
  t = if_verbose5_1_0(d_3, t);
  {
    ATerm s_30 = t;
    if((PushChoice() == 0))
      {
        ATerm t_13 = NULL,u_13 = NULL;
        t = term_t_30;
        t_13 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, j_13);
        u_13 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_t_30, (ATerm) ATmakeAppl(sym_Imported_1, j_13));
        t = d_9(t_13, u_13, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = s_30;
      }
    k_13 = t;
    t = term_t_30;
    m_13 = t;
    t = term_z_30;
    n_13 = t;
    t = (ATerm) ATinsert(ATempty, j_13);
    o_13 = t;
    t = SSL_table_put(m_13, n_13, o_13);
    t = k_13;
    t = if_verbose4_1_0(f_3, t);
    t = read_repository_file_0_0(t);
    t = if_verbose6_1_0(h_3, t);
    l_13 = t;
    t = term_t_30;
    p_13 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_t_30, l_13);
    t = e_8(i_3, p_13, l_13, t);
    t = if_verbose6_1_0(k_3, t);
    t = term_t_30;
    q_13 = t;
    t = (ATerm) ATmakeAppl(sym_Imported_1, j_13);
    r_13 = t;
    t = (ATerm) ATempty;
    s_13 = t;
    t = SSL_table_put(q_13, r_13, s_13);
    t = (ATerm) ATmakeAppl(sym__3, term_t_30, (ATerm)ATmakeAppl(sym_Imported_1, j_13), (ATerm) ATempty);
    t = if_verbose4_1_0(l_3, t);
  }
  return(t);
}
ATerm repeat_1_0 (ATerm u_88 (ATerm), ATerm t)
{
  ATerm h_14 (ATerm t)
  {
    ATerm a_31 = t;
    int b_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_88(t);
        t = h_14(t);
        ;
        LocalPopChoice(b_31);
      }
    else
      {
        t = a_31;
      }
    return(t);
  }
  t = h_14(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm c_31 = t;
  int e_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_g_31;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(e_31);
    }
  else
    {
      t = c_31;
      {
        ATerm h_31 = t;
        int i_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_14 = NULL;
            t = term_j_31;
            i_14 = t;
            t = SSL_getenv(i_14);
            ;
            LocalPopChoice(i_31);
          }
        else
          {
            t = h_31;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
ATerm m_3 (ATerm t)
{
  t = debug_1_0(n_3, t);
  return(t);
}
ATerm n_3 (ATerm t)
{
  t = term_m_31;
  return(t);
}
ATerm o_3 (ATerm t)
{
  ATerm u_14 = NULL,x_14 = NULL;
  t = term_t_30;
  u_14 = t;
  t = term_n_31;
  x_14 = t;
  t = term_o_31;
  t = d_9(u_14, x_14, t);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm q_31 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = q_31;
      }
  }
  return(t);
}
ATerm p_3 (ATerm t)
{
  t = debug_1_0(t_3, t);
  return(t);
}
ATerm t_3 (ATerm t)
{
  t = term_r_31;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm k_14 = NULL;
  t = if_verbose5_1_0(m_3, t);
  k_14 = t;
  {
    ATerm s_31 = t;
    int t_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_14 = NULL,q_14 = NULL;
        t = term_t_30;
        n_14 = t;
        t = term_z_30;
        q_14 = t;
        t = term_u_31;
        t = d_9(n_14, q_14, t);
        ;
        LocalPopChoice(t_31);
      }
    else
      {
        t = s_31;
        {
          ATerm s_14 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          s_14 = t;
          t = repeat_1_0(o_3, t);
          t = s_14;
        }
      }
    t = k_14;
    t = if_verbose5_1_0(p_3, t);
  }
  return(t);
}
ATerm u_3 (ATerm t)
{
  t = debug_1_0(v_3, t);
  return(t);
}
ATerm v_3 (ATerm t)
{
  t = term_w_31;
  return(t);
}
ATerm x_15 (ATerm d_15, ATerm t)
{
  ATerm h_15 = NULL,i_15 = NULL,j_15 = NULL;
  t = term_t_30;
  i_15 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, d_15);
  j_15 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_30, (ATerm) ATmakeAppl(sym_Tool_1, d_15));
  t = d_9(i_15, j_15, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm x_31 = ATgetFirst((ATermList) t);
      if(match_cons(x_31, sym__2))
        {
          ATerm b_32 = ATgetArgument(x_31, 0);
          h_15 = ATgetArgument(x_31, 1);
        }
      else
        _fail(t);
      {
        ATerm a_32 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = h_15;
  return(t);
}
ATerm x_3 (ATerm t)
{
  t = debug_1_0(d_4, t);
  return(t);
}
ATerm d_4 (ATerm t)
{
  t = term_w_31;
  return(t);
}
ATerm e_4 (ATerm t)
{
  t = term_t_30;
  t = table_getlist_0_0(t);
  t = debug_1_0(f_4, t);
  return(t);
}
ATerm f_4 (ATerm t)
{
  t = term_c_32;
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm d_32 = t;
  int f_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = if_verbose5_1_0(u_3, t);
      t = xtc_load_0_0(t);
      {
        ATerm k_15 = NULL,l_15 = NULL,m_15 = NULL;
        m_15 = t;
        if(match_cons(t, sym__2))
          {
            k_15 = ATgetArgument(t, 0);
            l_15 = ATgetArgument(t, 1);
            {
              ATerm g_32 = t;
              int h_32 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm p_15 = NULL,q_15 = NULL,r_15 = NULL;
                  t = term_t_30;
                  q_15 = t;
                  t = (ATerm) ATmakeAppl(sym_Tool_1, k_15);
                  r_15 = t;
                  t = (ATerm) ATmakeAppl(sym__2, term_t_30, (ATerm) ATmakeAppl(sym_Tool_1, k_15));
                  t = d_9(q_15, r_15, t);
                  {
                    ATerm w_3 (ATerm t)
                    {
                      if(match_cons(t, sym__2))
                        {
                          if((l_15 != ATgetArgument(t, 0)))
                            {
                              _fail(ATgetArgument(t, 0));
                            }
                          if(((p_15 != NULL) && (p_15 != ATgetArgument(t, 1))))
                            _fail(ATgetArgument(t, 1));
                          else
                            p_15 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      return(t);
                    }
                    t = fetch_1_0(w_3, t);
                    t = not_null(p_15);
                  }
                  ;
                  LocalPopChoice(h_32);
                }
              else
                {
                  t = g_32;
                  t = x_15(m_15, t);
                }
            }
          }
        else
          {
            t = x_15(m_15, t);
          }
        t = if_verbose5_1_0(x_3, t);
      }
      ;
      LocalPopChoice(f_32);
    }
  else
    {
      t = d_32;
      {
        ATerm w_15 = NULL,q_3 = NULL,r_3 = NULL;
        w_15 = t;
        t = term_u_26;
        q_3 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_n_32), w_15), term_j_32);
        r_3 = t;
        t = SSL_printnl(q_3, r_3);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_n_32), w_15), term_j_32);
        t = if_verbose5_1_0(e_4, t);
        _fail(t);
      }
    }
  return(t);
}
ATerm xtc_command_1_0 (ATerm e_117 (ATerm), ATerm t)
{
  ATerm z_15 = NULL,a_16 = NULL;
  z_15 = t;
  t = e_117(t);
  t = xtc_find_0_0(t);
  a_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_16, z_15);
  {
    ATerm g_4 (ATerm t)
    {
      ATerm b_16 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, a_16, z_15);
      t = z_7(a_16, z_15, t);
      t = term_o_32;
      b_16 = t;
      t = SSL_exit(b_16);
      return(t);
    }
    t = fork_and_wait_1_0(g_4, t);
    t = z_15;
  }
  return(t);
}
ATerm h_8 (ATerm h_106 (ATerm), ATerm i_50, ATerm g_50, ATerm t)
{
  ATerm c_16 = NULL,d_16 = NULL,e_16 = NULL,f_16 = NULL,g_16 = NULL,h_16 = NULL;
  c_16 = t;
  t = h_106(t);
  d_16 = t;
  t = (ATerm) ATmakeAppl(sym__3, d_16, i_50, g_50);
  t = e_9(d_16, i_50, g_50, t);
  {
    ATerm p_32 = t;
    int q_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_16 = NULL;
        t = term_r_32;
        i_16 = t;
        t = (ATerm) ATmakeAppl(sym__2, d_16, term_r_32);
        t = d_9(d_16, i_16, t);
        ;
        LocalPopChoice(q_32);
      }
    else
      {
        t = p_32;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        e_16 = ATgetFirst((ATermList) t);
        f_16 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_r_32;
    g_16 = t;
    t = (ATerm) ATinsert(CheckATermList(f_16), (ATerm) ATinsert(CheckATermList(e_16), i_50));
    h_16 = t;
    t = SSL_table_put(d_16, g_16, h_16);
    t = c_16;
  }
  return(t);
}
ATerm y_16 (ATerm o_16, ATerm t)
{
  t = o_16;
  {
    ATerm s_32 = t;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm t_32 = ATgetArgument(t, 0);
            ATerm u_32 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = s_32;
      }
    t = term_v_32;
    t = debug_1_0(j_4, t);
    t = (ATerm) ATmakeAppl(sym__2, o_16, term_c_15);
    t = open_file_0_0(t);
  }
  return(t);
}
ATerm z_16 (ATerm q_16, ATerm r_16, ATerm s_16, ATerm t)
{
  t = SSL_open_file(q_16, r_16);
  return(t);
}
ATerm j_4 (ATerm t)
{
  t = term_d_33;
  return(t);
}
ATerm open_file_0_0 (ATerm t)
{
  ATerm v_16 = NULL,w_16 = NULL,x_16 = NULL;
  v_16 = t;
  if(match_cons(t, sym__2))
    {
      w_16 = ATgetArgument(t, 0);
      x_16 = ATgetArgument(t, 1);
      {
        ATerm e_33 = t;
        int f_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = y_16(v_16, t);
            ;
            LocalPopChoice(f_33);
          }
        else
          {
            t = e_33;
            t = z_16(w_16, x_16, v_16, t);
          }
      }
    }
  else
    {
      t = y_16(v_16, t);
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
  ATerm a_17 = NULL,b_17 = NULL;
  t = term_h_33;
  t = new_0_0(t);
  a_17 = t;
  t = term_i_33;
  b_17 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_17, term_i_33);
  t = i_8(a_17, b_17, t);
  {
    ATerm n_33 = t;
    int o_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_17 = NULL,e_17 = NULL;
        c_17 = t;
        t = (ATerm) ATinsert(ATempty, term_s_17);
        e_17 = t;
        t = (ATerm) ATmakeAppl(sym__2, c_17, (ATerm) ATinsert(ATempty, term_s_17));
        t = j_8(c_17, e_17, t);
        t = new_file_0_0(t);
        ;
        LocalPopChoice(o_33);
      }
    else
      {
        t = n_33;
      }
  }
  return(t);
}
ATerm k_4 (ATerm t)
{
  t = term_p_33;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm g_17 = NULL,h_17 = NULL;
  t = new_file_0_0(t);
  g_17 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_17, term_c_15);
  t = open_file_0_0(t);
  t = term_h_33;
  h_17 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_17, term_h_33);
  t = h_8(k_4, g_17, h_17, t);
  t = g_17;
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm t)
{
  ATerm u_17 = NULL,w_17 = NULL;
  u_17 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm b_4 = NULL,c_4 = NULL;
      t = u_17;
      t = xtc_new_file_0_0(t);
      b_4 = t;
      t = m_0(t);
      c_4 = t;
      t = (ATerm) ATmakeAppl(sym__2, c_4, (ATerm) ATinsert(ATinsert(ATempty, b_4), term_r_14));
      t = conc_0_0(t);
      t = xtc_command_1_0(l_0, t);
      t = SSL_close_file(b_4);
      t = (ATerm) ATmakeAppl(sym_FILE_1, b_4);
    }
  else
    {
      ATerm f_5 = NULL,g_5 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          w_17 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = w_17;
      t = xtc_new_file_0_0(t);
      f_5 = t;
      t = m_0(t);
      g_5 = t;
      t = (ATerm) ATmakeAppl(sym__2, g_5, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, f_5), term_r_14), w_17), term_q_33));
      t = conc_0_0(t);
      t = xtc_command_1_0(l_0, t);
      t = SSL_close_file(f_5);
      t = (ATerm) ATmakeAppl(sym_FILE_1, f_5);
    }
  return(t);
}
ATerm FILE_1_0 (ATerm t_79 (ATerm), ATerm t)
{
  ATerm b_18 = NULL,c_18 = NULL,d_18 = NULL,g_18 = NULL,u_0 = NULL,w_0 = NULL;
  g_18 = t;
  if(match_cons(t, sym_FILE_1))
    {
      c_18 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_18);
  b_18 = t;
  t = c_18;
  t = t_79(t);
  d_18 = t;
  w_0 = t;
  t = (ATerm) ATmakeAppl(sym_FILE_1, d_18);
  u_0 = t;
  t = SSLsetAnnotations(u_0, b_18);
  return(t);
}
ATerm l_4 (ATerm t)
{
  ATerm r_33 = t;
  if((PushChoice() == 0))
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("rtree", 0, ATtrue)))
        _fail(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = r_33;
    }
  return(t);
}
ATerm v_4 (ATerm t)
{
  t = term_s_33;
  return(t);
}
ATerm w_4 (ATerm t)
{
  ATerm n_18 = NULL,o_18 = NULL,p_18 = NULL,q_18 = NULL;
  n_18 = t;
  t = pass_verbose_0_0(t);
  o_18 = t;
  t = n_18;
  t = pass_keep_0_0(t);
  p_18 = t;
  t = term_t_33;
  t = get_config_0_0(t);
  q_18 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, q_18), p_18), o_18);
  t = concat_0_0(t);
  return(t);
}
ATerm y_4 (ATerm t)
{
  t = term_s_33;
  return(t);
}
ATerm i_5 (ATerm t)
{
  ATerm r_18 = NULL,s_18 = NULL,u_18 = NULL,v_18 = NULL;
  r_18 = t;
  t = pass_verbose_0_0(t);
  s_18 = t;
  t = r_18;
  t = pass_keep_0_0(t);
  u_18 = t;
  t = term_t_33;
  t = get_config_0_0(t);
  v_18 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, v_18), u_18), s_18);
  t = concat_0_0(t);
  return(t);
}
ATerm parse_module_0_0 (ATerm t)
{
  ATerm u_33 = t;
  int w_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_18 = NULL,m_5 = NULL,p_5 = NULL;
      ATerm u_4 (ATerm t)
      {
        if(((m_18 != NULL) && (m_18 != t)))
          _fail(t);
        else
          m_18 = t;
        return(t);
      }
      t = _2_0(l_4, u_4, t);
      m_5 = t;
      t = SSL_explode_term(m_5);
      if(match_cons(t, sym__2))
        {
          ATerm x_33 = ATgetArgument(t, 0);
          if((ATgetSymbol((ATermAppl) x_33) != ATmakeSymbol("", 0, ATtrue)))
            _fail(t);
          {
            ATerm z_33 = ATgetArgument(t, 1);
            if(((ATgetType(z_33) == AT_LIST) && !(ATisEmpty(z_33))))
              {
                ATerm a_34 = ATgetFirst((ATermList) z_33);
                ATerm f_34 = (ATerm) ATgetNext((ATermList) z_33);
                if(((ATgetType(f_34) == AT_LIST) && !(ATisEmpty(f_34))))
                  {
                    p_5 = ATgetFirst((ATermList) f_34);
                    {
                      ATerm g_34 = (ATerm) ATgetNext((ATermList) f_34);
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
      t = p_5;
      {
        ATerm h_34 = t;
        int i_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_34 = t;
            int o_34 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm p_34 = t;
                int g_35 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = FILE_1_0(_id, t);
                    ;
                    LocalPopChoice(g_35);
                  }
                else
                  {
                    t = p_34;
                    if(!(match_cons(t, sym_stdin_0)))
                      _fail(t);
                  }
                LocalPopChoice(o_34);
                t = xtc_transform_file_2_0(v_4, w_4, t);
              }
            else
              {
                t = n_34;
                t = xtc_transform_term_2_0(y_4, i_5, t);
              }
            t = read_from_0_0(t);
            ;
            LocalPopChoice(i_34);
          }
        else
          {
            t = h_34;
            {
              ATerm w_18 = NULL,x_18 = NULL,z_18 = NULL;
              t = term_u_26;
              w_18 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(m_18)), term_h_35);
              x_18 = t;
              t = SSL_printnl(w_18, x_18);
              t = term_y_17;
              z_18 = t;
              t = SSL_exit(z_18);
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(m_18)), term_h_35);
            }
          }
      }
      ;
      LocalPopChoice(w_33);
    }
  else
    {
      t = u_33;
      {
        ATerm q_19 = NULL,r_19 = NULL,v_19 = NULL,p_6 = NULL;
        q_19 = t;
        if(match_cons(t, sym__2))
          {
            r_19 = ATgetArgument(t, 0);
            v_19 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = r_19;
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("rtree", 0, ATtrue)))
          _fail(t);
        t = SSL_explode_term(q_19);
        if(match_cons(t, sym__2))
          {
            ATerm i_35 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) i_35) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm j_35 = ATgetArgument(t, 1);
              if(((ATgetType(j_35) == AT_LIST) && !(ATisEmpty(j_35))))
                {
                  ATerm k_35 = ATgetFirst((ATermList) j_35);
                  ATerm n_35 = (ATerm) ATgetNext((ATermList) j_35);
                  if(((ATgetType(n_35) == AT_LIST) && !(ATisEmpty(n_35))))
                    {
                      p_6 = ATgetFirst((ATermList) n_35);
                      {
                        ATerm o_35 = (ATerm) ATgetNext((ATermList) n_35);
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
        t = p_6;
        {
          ATerm q_35 = t;
          int r_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = read_from_0_0(t);
              ;
              LocalPopChoice(r_35);
            }
          else
            {
              t = q_35;
              {
                ATerm j_6 = NULL,k_6 = NULL,l_6 = NULL;
                t = term_u_26;
                j_6 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, v_19), term_h_35);
                k_6 = t;
                t = SSL_printnl(j_6, k_6);
                t = term_y_17;
                l_6 = t;
                t = SSL_exit(l_6);
                t = (ATerm) ATinsert(ATinsert(ATempty, v_19), term_h_35);
              }
            }
        }
      }
    }
  return(t);
}
ATerm debug_1_0 (ATerm y_107 (ATerm), ATerm t)
{
  ATerm b_20 = NULL,c_20 = NULL,d_20 = NULL,e_20 = NULL;
  b_20 = t;
  t = y_107(t);
  c_20 = t;
  t = term_u_26;
  d_20 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, b_20), c_20);
  e_20 = t;
  t = SSL_printnl(d_20, e_20);
  t = b_20;
  return(t);
}
ATerm if_verbose3_1_0 (ATerm m_109 (ATerm), ATerm t)
{
  ATerm s_35 = t;
  int t_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_20 = NULL,j_20 = NULL;
      f_20 = t;
      t = term_e_18;
      t = get_config_0_0(t);
      j_20 = t;
      t = (ATerm) ATmakeAppl(sym__2, j_20, term_i_19);
      t = geq_0_0(t);
      t = f_20;
      t = m_109(t);
      ;
      LocalPopChoice(t_35);
    }
  else
    {
      t = s_35;
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm v_95 (ATerm), ATerm t)
{
  ATerm k_20 = NULL;
  ATerm j_5 (ATerm t)
  {
    t = v_95(t);
    if(((k_20 != NULL) && (k_20 != t)))
      _fail(t);
    else
      k_20 = t;
    return(t);
  }
  t = fetch_1_0(j_5, t);
  t = not_null(k_20);
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
    ATerm u_35 = t;
    int v_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_5 (ATerm t)
        {
          ATerm m_20 = NULL;
          ATerm l_5 (ATerm t)
          {
            ATerm n_20 = NULL,s_20 = NULL,t_20 = NULL,u_20 = NULL,v_20 = NULL;
            n_20 = t;
            t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, n_20), term_a_15), z_31), term_x_35), not_null(m_20));
            t_20 = t;
            t = SSL_concat_strings(t_20);
            u_20 = t;
            t = (ATerm) ATinsert(ATempty, term_s_17);
            v_20 = t;
            t = (ATerm) ATmakeAppl(sym__2, u_20, (ATerm) ATinsert(ATempty, term_s_17));
            t = j_8(u_20, v_20, t);
            s_20 = t;
            t = (ATerm) ATmakeAppl(sym__2, n_20, (ATerm) ATmakeAppl(sym_FILE_1, s_20));
            return(t);
          }
          if(((m_20 != NULL) && (m_20 != t)))
            _fail(t);
          else
            m_20 = t;
          t = y_31;
          t = fetch_elem_1_0(l_5, t);
          return(t);
        }
        t = fetch_elem_1_0(k_5, t);
        ;
        LocalPopChoice(v_35);
      }
    else
      {
        t = u_35;
        {
          ATerm y_35 = t;
          int z_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = y_31;
              {
                ATerm q_5 (ATerm t)
                {
                  ATerm w_20 = NULL,x_20 = NULL,a_21 = NULL,b_21 = NULL,c_21 = NULL,d_21 = NULL;
                  w_20 = t;
                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, w_20), term_a_15), z_31);
                  x_20 = t;
                  t = SSL_concat_strings(x_20);
                  a_21 = t;
                  t = term_t_30;
                  c_21 = t;
                  t = (ATerm) ATmakeAppl(sym_Tool_1, a_21);
                  d_21 = t;
                  t = (ATerm) ATmakeAppl(sym__2, term_t_30, (ATerm) ATmakeAppl(sym_Tool_1, a_21));
                  t = d_9(c_21, d_21, t);
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      ATerm a_36 = ATgetFirst((ATermList) t);
                      if(match_cons(a_36, sym__2))
                        {
                          ATerm c_36 = ATgetArgument(a_36, 0);
                          b_21 = ATgetArgument(a_36, 1);
                        }
                      else
                        _fail(t);
                      {
                        ATerm b_36 = (ATerm) ATgetNext((ATermList) t);
                      }
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym__2, w_20, (ATerm) ATmakeAppl(sym_FILE_1, b_21));
                  return(t);
                }
                t = fetch_elem_1_0(q_5, t);
              }
              ;
              LocalPopChoice(z_35);
            }
          else
            {
              t = y_35;
              {
                ATerm i_21 = NULL,j_21 = NULL,k_21 = NULL;
                t = term_u_26;
                i_21 = t;
                t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_e_36), z_31), term_d_36);
                j_21 = t;
                t = SSL_printnl(i_21, j_21);
                t = term_y_17;
                k_21 = t;
                t = SSL_exit(k_21);
                t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_e_36), z_31), term_d_36);
              }
            }
        }
      }
  }
  return(t);
}
ATerm t_5 (ATerm t)
{
  t = term_f_36;
  return(t);
}
ATerm get_module_1_0 (ATerm w_87 (ATerm), ATerm t)
{
  ATerm m_21 = NULL,n_21 = NULL,q_21 = NULL,r_21 = NULL;
  t = basename_1_0(_id, t);
  m_21 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_g_29), term_i_36), term_h_36), term_g_36);
  r_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_21, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_g_29), term_i_36), term_h_36), term_g_36));
  t = k_8(w_87, m_21, r_21, t);
  if(match_cons(t, sym__2))
    {
      ATerm j_36 = ATgetArgument(t, 0);
      ATerm k_36 = ATgetArgument(t, 1);
      if(match_cons(k_36, sym_FILE_1))
        {
          n_21 = ATgetArgument(k_36, 0);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  {
    ATerm r_5 (ATerm t)
    {
      ATerm s_21 = NULL;
      s_21 = t;
      t = n_21;
      t = debug_1_0(t_5, t);
      t = s_21;
      return(t);
    }
    t = if_verbose3_1_0(r_5, t);
    t = parse_module_0_0(t);
    q_21 = t;
    t = (ATerm) ATmakeAppl(sym__2, n_21, q_21);
  }
  return(t);
}
ATerm m_8 (ATerm q_99 (ATerm), ATerm r_99 (ATerm), ATerm z_38, ATerm y_38, ATerm t)
{
  t = r_99(t);
  {
    ATerm u_5 (ATerm t)
    {
      ATerm b_22 = NULL;
      b_22 = t;
      t = (ATerm) ATmakeAppl(sym__2, z_38, b_22);
      t = q_99(t);
      return(t);
    }
    t = fetch_1_0(u_5, t);
    t = y_38;
  }
  return(t);
}
ATerm n_8 (ATerm i_99 (ATerm), ATerm t_38, ATerm s_38, ATerm t)
{
  t = t_38;
  {
    ATerm p_22 (ATerm t)
    {
      ATerm l_36 = t;
      int m_36 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          ;
          LocalPopChoice(m_36);
        }
      else
        {
          t = l_36;
          {
            ATerm q_36 = t;
            int r_36 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm d_22 = NULL,f_22 = NULL,g_22 = NULL;
                d_22 = t;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    f_22 = ATgetFirst((ATermList) t);
                    g_22 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = d_22;
                {
                  ATerm w_5 (ATerm t)
                  {
                    t = s_38;
                    return(t);
                  }
                  t = m_8(i_99, w_5, f_22, g_22, t);
                  t = p_22(t);
                }
                ;
                LocalPopChoice(r_36);
              }
            else
              {
                t = q_36;
                t = Cons_2_0(_id, p_22, t);
              }
          }
        }
      return(t);
    }
    t = p_22(t);
  }
  return(t);
}
ATerm x_5 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm t_36 = ATgetArgument(t, 0);
      if(((ATgetType(t_36) != AT_LIST) || !(ATisEmpty(t_36))))
        _fail(t);
      {
        ATerm v_36 = ATgetArgument(t, 1);
        if(((ATgetType(v_36) != AT_LIST) || !(ATisEmpty(v_36))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm y_5 (ATerm t)
{
  ATerm x_22 = NULL,y_22 = NULL,z_22 = NULL,a_23 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm b_37 = ATgetArgument(t, 0);
      if(((ATgetType(b_37) == AT_LIST) && !(ATisEmpty(b_37))))
        {
          x_22 = ATgetFirst((ATermList) b_37);
          y_22 = (ATerm) ATgetNext((ATermList) b_37);
        }
      else
        _fail(t);
      {
        ATerm e_37 = ATgetArgument(t, 1);
        if(((ATgetType(e_37) == AT_LIST) && !(ATisEmpty(e_37))))
          {
            z_22 = ATgetFirst((ATermList) e_37);
            a_23 = (ATerm) ATgetNext((ATermList) e_37);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, x_22, z_22), (ATerm) ATmakeAppl(sym__2, y_22, a_23));
  return(t);
}
ATerm z_5 (ATerm t)
{
  ATerm b_23 = NULL,c_23 = NULL;
  if(match_cons(t, sym__2))
    {
      b_23 = ATgetArgument(t, 0);
      c_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(c_23), b_23);
  return(t);
}
ATerm r_8 (ATerm s_592, ATerm x_592, ATerm f_65, ATerm t)
{
  ATerm r_22 = NULL,s_22 = NULL,t_22 = NULL,w_22 = NULL;
  t = SSL_explode_term(x_592);
  if(match_cons(t, sym__2))
    {
      r_22 = ATgetArgument(t, 0);
      s_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(s_592);
  if(match_cons(t, sym__2))
    {
      if((r_22 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      t_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, t_22, s_22);
  t = genzip_4_0(x_5, y_5, z_5, _id, t);
  w_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_22, f_65);
  t = conc_0_0(t);
  return(t);
}
ATerm c_6 (ATerm t)
{
  ATerm i_23 = NULL;
  i_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, i_23);
  return(t);
}
ATerm m_6 (ATerm t)
{
  t = _2_0(_id, o_6, t);
  return(t);
}
ATerm n_6 (ATerm t)
{
  ATerm f_37 = t;
  int g_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = _2_0(_id, q_6, t);
      ;
      LocalPopChoice(g_37);
    }
  else
    {
      t = f_37;
      {
        ATerm z_23 = NULL,b_24 = NULL,c_24 = NULL,e_24 = NULL;
        if(match_cons(t, sym__2))
          {
            z_23 = ATgetArgument(t, 0);
            b_24 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = b_24;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            c_24 = ATgetFirst((ATermList) t);
            e_24 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(z_23), c_24), e_24);
      }
    }
  return(t);
}
ATerm o_6 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm q_6 (ATerm t)
{
  ATerm k_23 = NULL,l_23 = NULL,m_23 = NULL,n_23 = NULL,p_23 = NULL;
  k_23 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      l_23 = ATgetFirst((ATermList) t);
      p_23 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = l_23;
  if(match_cons(t, sym__2))
    {
      m_23 = ATgetArgument(t, 0);
      n_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm h_37 = t;
    int k_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_23;
        if((m_23 != t))
          {
            _fail(t);
          }
        t = p_23;
        ;
        LocalPopChoice(k_37);
      }
    else
      {
        t = h_37;
        t = k_23;
        t = r_8(m_23, n_23, p_23, t);
      }
  }
  return(t);
}
ATerm r_6 (ATerm t)
{
  ATerm v_24 = NULL;
  if(match_cons(t, sym__2))
    {
      v_24 = ATgetArgument(t, 0);
      if((v_24 != ATgetArgument(t, 1)))
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
  ATerm l_37 = t;
  int n_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(c_6, m_6, n_6, t);
      ;
      LocalPopChoice(n_37);
    }
  else
    {
      t = l_37;
      {
        ATerm j_24 = NULL,k_24 = NULL,n_24 = NULL;
        j_24 = t;
        if(match_cons(t, sym__2))
          {
            k_24 = ATgetArgument(t, 0);
            n_24 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = j_24;
        t = n_8(r_6, k_24, n_24, t);
      }
    }
  return(t);
}
ATerm t_8 (ATerm m_118 (ATerm), ATerm n_118 (ATerm), ATerm o_118 (ATerm), ATerm w_67, ATerm t_67, ATerm a_68, ATerm x_67, ATerm u_67, ATerm v_67, ATerm t)
{
  ATerm y_24 = NULL,z_24 = NULL,a_25 = NULL,b_25 = NULL,c_25 = NULL,f_25 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, w_67, x_67);
  t = m_118(t);
  y_24 = t;
  t = n_118(t);
  z_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_24, a_68);
  t = diff_0_0(t);
  a_25 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_25, t_67);
  t = conc_0_0(t);
  b_25 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_25, a_68);
  t = conc_0_0(t);
  c_25 = t;
  t = (ATerm) ATmakeAppl(sym__3, w_67, y_24, u_67);
  t = o_118(t);
  f_25 = t;
  t = (ATerm) ATmakeAppl(sym__5, b_25, c_25, x_67, f_25, v_67);
  return(t);
}
ATerm GnNext_3_0 (ATerm m_118 (ATerm), ATerm n_118 (ATerm), ATerm o_118 (ATerm), ATerm t)
{
  ATerm g_25 = NULL,h_25 = NULL,j_25 = NULL,k_25 = NULL,l_25 = NULL,m_25 = NULL;
  if(match_cons(t, sym__5))
    {
      ATerm o_37 = ATgetArgument(t, 0);
      if(((ATgetType(o_37) == AT_LIST) && !(ATisEmpty(o_37))))
        {
          g_25 = ATgetFirst((ATermList) o_37);
          h_25 = (ATerm) ATgetNext((ATermList) o_37);
        }
      else
        _fail(t);
      j_25 = ATgetArgument(t, 1);
      k_25 = ATgetArgument(t, 2);
      l_25 = ATgetArgument(t, 3);
      m_25 = ATgetArgument(t, 4);
    }
  else
    _fail(t);
  t = t_8(m_118, n_118, o_118, g_25, h_25, j_25, k_25, l_25, m_25, t);
  return(t);
}
ATerm while_not_2_0 (ATerm j_89 (ATerm), ATerm k_89 (ATerm), ATerm t)
{
  ATerm n_25 (ATerm t)
  {
    ATerm s_37 = t;
    int t_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = j_89(t);
        ;
        LocalPopChoice(t_37);
      }
    else
      {
        t = s_37;
        t = k_89(t);
        t = n_25(t);
      }
    return(t);
  }
  t = n_25(t);
  return(t);
}
ATerm for_3_0 (ATerm m_89 (ATerm), ATerm n_89 (ATerm), ATerm o_89 (ATerm), ATerm t)
{
  t = m_89(t);
  t = while_not_2_0(n_89, o_89, t);
  return(t);
}
ATerm s_6 (ATerm t)
{
  ATerm t_25 = NULL,v_25 = NULL,w_25 = NULL;
  if(match_cons(t, sym__3))
    {
      t_25 = ATgetArgument(t, 0);
      v_25 = ATgetArgument(t, 1);
      w_25 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__5, t_25, t_25, v_25, w_25, (ATerm) ATempty);
  return(t);
}
ATerm t_6 (ATerm t)
{
  ATerm b_26 = NULL,c_26 = NULL;
  if(match_cons(t, sym__5))
    {
      ATerm u_37 = ATgetArgument(t, 0);
      if(((ATgetType(u_37) != AT_LIST) || !(ATisEmpty(u_37))))
        _fail(t);
      {
        ATerm v_37 = ATgetArgument(t, 1);
      }
      {
        ATerm w_37 = ATgetArgument(t, 2);
      }
      b_26 = ATgetArgument(t, 3);
      c_26 = ATgetArgument(t, 4);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, b_26, c_26);
  return(t);
}
ATerm graph_nodes_roots_3_0 (ATerm j_118 (ATerm), ATerm k_118 (ATerm), ATerm l_118 (ATerm), ATerm t)
{
  ATerm s_25 = NULL;
  ATerm u_6 (ATerm t)
  {
    ATerm x_37 = t;
    int f_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = GnNext_3_0(j_118, k_118, l_118, t);
        ;
        LocalPopChoice(f_38);
      }
    else
      {
        t = x_37;
        {
          ATerm g_26 = NULL,h_26 = NULL,i_26 = NULL,j_26 = NULL,k_26 = NULL,l_26 = NULL,m_26 = NULL;
          if(match_cons(t, sym__5))
            {
              g_26 = ATgetArgument(t, 0);
              j_26 = ATgetArgument(t, 1);
              k_26 = ATgetArgument(t, 2);
              l_26 = ATgetArgument(t, 3);
              m_26 = ATgetArgument(t, 4);
            }
          else
            _fail(t);
          t = g_26;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              h_26 = ATgetFirst((ATermList) t);
              i_26 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__5, i_26, j_26, k_26, l_26, (ATerm) ATinsert(CheckATermList(m_26), h_26));
        }
      }
    return(t);
  }
  t = for_3_0(s_6, t_6, u_6, t);
  if(match_cons(t, sym__2))
    {
      s_25 = ATgetArgument(t, 0);
      {
        ATerm g_38 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = s_25;
  return(t);
}
ATerm filter_1_0 (ATerm p_102 (ATerm), ATerm t)
{
  ATerm h_38 = t;
  int j_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(j_38);
    }
  else
    {
      t = h_38;
      {
        ATerm k_38 = t;
        int l_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_6 (ATerm t)
            {
              t = filter_1_0(p_102, t);
              return(t);
            }
            t = Cons_2_0(p_102, v_6, t);
            ;
            LocalPopChoice(l_38);
          }
        else
          {
            t = k_38;
            {
              ATerm w_26 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm m_38 = ATgetFirst((ATermList) t);
                  w_26 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = w_26;
              t = filter_1_0(p_102, t);
            }
          }
      }
    }
  return(t);
}
ATerm w_6 (ATerm t)
{
  ATerm n_38 = t;
  if((PushChoice() == 0))
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-I", 0, ATtrue)))
        _fail(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = n_38;
    }
  return(t);
}
ATerm z_6 (ATerm t)
{
  ATerm b_27 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm o_38 = ATgetArgument(t, 0);
      ATerm p_38 = ATgetArgument(t, 1);
      if(match_cons(p_38, sym_Specification_1))
        {
          b_27 = ATgetArgument(p_38, 0);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  t = x_7(b_27, t);
  return(t);
}
ATerm a_7 (ATerm t)
{
  ATerm e_27 = NULL,f_27 = NULL;
  if(match_cons(t, sym__3))
    {
      ATerm q_38 = ATgetArgument(t, 0);
      e_27 = ATgetArgument(t, 1);
      f_27 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(f_27), e_27);
  return(t);
}
ATerm c_7 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_a_39;
  return(t);
}
ATerm d_7 (ATerm t)
{
  ATerm j_27 = NULL,k_27 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      j_27 = ATgetFirst((ATermList) t);
      k_27 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, j_27, k_27);
  return(t);
}
ATerm e_7 (ATerm t)
{
  ATerm o_27 = NULL,p_27 = NULL,q_27 = NULL,r_27 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm b_39 = ATgetArgument(t, 0);
      if(match_cons(b_39, sym__2))
        {
          o_27 = ATgetArgument(b_39, 0);
          p_27 = ATgetArgument(b_39, 1);
        }
      else
        _fail(t);
      {
        ATerm c_39 = ATgetArgument(t, 1);
        if(match_cons(c_39, sym__2))
          {
            q_27 = ATgetArgument(c_39, 0);
            r_27 = ATgetArgument(c_39, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(q_27), o_27), (ATerm) ATinsert(CheckATermList(r_27), p_27));
  return(t);
}
ATerm w_8 (ATerm p_31, ATerm t)
{
  ATerm y_26 = NULL;
  ATerm d_39 = t;
  int m_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_t_33;
      t = get_config_0_0(t);
      t = filter_1_0(w_6, t);
      ;
      LocalPopChoice(m_39);
    }
  else
    {
      t = d_39;
      t = (ATerm) ATempty;
    }
  y_26 = t;
  t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATinsert(ATinsert(ATinsert(ATempty, p_31), term_s_39), term_p_39), term_h_33, (ATerm) ATempty);
  {
    ATerm y_6 (ATerm t)
    {
      ATerm z_26 = NULL,a_27 = NULL;
      ATerm b_7 (ATerm t)
      {
        t = (ATerm) ATinsert(CheckATermList(y_26), term_a_15);
        return(t);
      }
      if(((z_26 != NULL) && (z_26 != t)))
        _fail(t);
      else
        z_26 = t;
      t = SSL_explode_term(not_null(z_26));
      if(match_cons(t, sym__2))
        {
          ATerm t_39 = ATgetArgument(t, 0);
          if((ATgetSymbol((ATermAppl) t_39) != ATmakeSymbol("", 0, ATtrue)))
            _fail(t);
          {
            ATerm u_39 = ATgetArgument(t, 1);
            if(((ATgetType(u_39) == AT_LIST) && !(ATisEmpty(u_39))))
              {
                if(((a_27 != NULL) && (a_27 != ATgetFirst((ATermList) u_39))))
                  _fail(ATgetFirst((ATermList) u_39));
                else
                  a_27 = ATgetFirst((ATermList) u_39);
                {
                  ATerm v_39 = (ATerm) ATgetNext((ATermList) u_39);
                }
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = not_null(a_27);
      t = get_module_1_0(b_7, t);
      return(t);
    }
    t = graph_nodes_roots_3_0(y_6, z_6, a_7, t);
    t = genzip_4_0(c_7, d_7, e_7, _id, t);
    t = _2_0(_id, flatten_stratego_0_0, t);
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
  ATerm i_28 = NULL,j_28 = NULL;
  i_28 = t;
  if(match_cons(t, sym_FILE_1))
    {
      j_28 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm w_39 = t;
    int x_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_6 = NULL;
        t = i_28;
        t = k_0(t);
        x_6 = t;
        {
          ATerm z_39 = t;
          int a_40 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(!(match_cons(t, sym_stdout_0)))
                _fail(t);
              ;
              LocalPopChoice(a_40);
            }
          else
            {
              t = z_39;
              if(!(match_cons(t, sym_stderr_0)))
                _fail(t);
            }
          t = (ATerm) ATmakeAppl(sym__2, j_28, x_6);
          t = y_8(j_28, x_6, t);
          t = (ATerm) ATmakeAppl(sym_FILE_1, j_28);
        }
        ;
        LocalPopChoice(x_39);
      }
    else
      {
        t = w_39;
        {
          ATerm b_40 = t;
          int c_40 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm l_7 = NULL;
              t = i_28;
              t = k_0(t);
              l_7 = t;
              {
                ATerm e_40 = t;
                if((PushChoice() == 0))
                  {
                    ATerm g_40 = t;
                    int h_40 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(!(match_cons(t, sym_stdout_0)))
                          _fail(t);
                        ;
                        LocalPopChoice(h_40);
                      }
                    else
                      {
                        t = g_40;
                        {
                          ATerm i_40 = t;
                          int j_40 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              if(!(match_cons(t, sym_stderr_0)))
                                _fail(t);
                              ;
                              LocalPopChoice(j_40);
                            }
                          else
                            {
                              t = i_40;
                              {
                                ATerm m_7 = NULL;
                                m_7 = t;
                                if((j_28 != t))
                                  {
                                    _fail(t);
                                  }
                                t = m_7;
                              }
                            }
                        }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = e_40;
                  }
                t = (ATerm) ATmakeAppl(sym__2, j_28, l_7);
                t = y_8(j_28, l_7, t);
                t = (ATerm) ATmakeAppl(sym_FILE_1, j_28);
              }
              ;
              LocalPopChoice(c_40);
            }
          else
            {
              t = b_40;
              t = i_28;
              t = k_0(t);
              if((j_28 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, j_28);
            }
        }
      }
  }
  return(t);
}
ATerm z_8 (ATerm y_60, ATerm z_60, ATerm t)
{
  ATerm n_28 = NULL,o_28 = NULL;
  n_28 = t;
  {
    ATerm l_40 = t;
    int n_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, y_60, z_60);
        t = d_9(y_60, z_60, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm o_40 = ATgetFirst((ATermList) t);
            o_28 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(n_40);
        t = SSL_table_put(y_60, z_60, o_28);
        t = (ATerm) ATmakeAppl(sym__3, y_60, z_60, o_28);
      }
    else
      {
        t = l_40;
        t = SSL_table_remove(y_60, z_60);
        t = (ATerm) ATmakeAppl(sym__2, y_60, z_60);
      }
    t = n_28;
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm e_106 (ATerm), ATerm t)
{
  ATerm r_28 = NULL,s_28 = NULL,t_28 = NULL,u_28 = NULL,v_28 = NULL;
  r_28 = t;
  t = e_106(t);
  s_28 = t;
  {
    ATerm p_40 = t;
    int q_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_28 = NULL;
        t = term_r_32;
        w_28 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_28, term_r_32);
        t = d_9(s_28, w_28, t);
        ;
        LocalPopChoice(q_40);
      }
    else
      {
        t = p_40;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        u_28 = ATgetFirst((ATermList) t);
        t_28 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_r_32;
    v_28 = t;
    t = SSL_table_put(s_28, v_28, t_28);
    t = u_28;
    {
      ATerm f_7 (ATerm t)
      {
        ATerm x_28 = NULL;
        x_28 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_28, x_28);
        t = z_8(s_28, x_28, t);
        return(t);
      }
      t = map_1_0(f_7, t);
      t = r_28;
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm n_88 (ATerm), ATerm o_88 (ATerm), ATerm t)
{
  ATerm r_40 = t;
  int s_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = n_88(t);
      t = o_88(t);
      ;
      LocalPopChoice(s_40);
    }
  else
    {
      t = r_40;
      t = o_88(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm d_106 (ATerm), ATerm t)
{
  ATerm z_28 = NULL,a_29 = NULL,b_29 = NULL,c_29 = NULL,d_29 = NULL;
  z_28 = t;
  t = d_106(t);
  a_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_29, term_r_32);
  {
    ATerm t_40 = t;
    int u_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_29 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm v_40 = ATgetArgument(t, 0);
            ATerm w_40 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_r_32;
        h_29 = t;
        t = (ATerm) ATmakeAppl(sym__2, a_29, term_r_32);
        t = d_9(a_29, h_29, t);
        ;
        LocalPopChoice(u_40);
      }
    else
      {
        t = t_40;
        t = (ATerm) ATempty;
      }
    b_29 = t;
    t = term_r_32;
    c_29 = t;
    t = (ATerm) ATinsert(CheckATermList(b_29), (ATerm) ATempty);
    d_29 = t;
    t = SSL_table_put(a_29, c_29, d_29);
    t = z_28;
  }
  return(t);
}
ATerm g_7 (ATerm t)
{
  t = term_p_33;
  return(t);
}
ATerm i_7 (ATerm t)
{
  ATerm x_40 = t;
  int y_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_29 = NULL;
      p_29 = t;
      t = SSL_remove(p_29);
      ;
      LocalPopChoice(y_40);
    }
  else
    {
      t = x_40;
    }
  return(t);
}
ATerm j_7 (ATerm t)
{
  t = term_p_33;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm q_116 (ATerm), ATerm t)
{
  ATerm j_29 = NULL;
  t = begin_scope_1_0(g_7, t);
  {
    ATerm h_7 (ATerm t)
    {
      ATerm k_29 = NULL;
      k_29 = t;
      {
        ATerm z_40 = t;
        int g_41 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_29 = NULL,m_29 = NULL;
            t = term_p_33;
            l_29 = t;
            t = term_r_32;
            m_29 = t;
            t = term_h_41;
            t = d_9(l_29, m_29, t);
            ;
            LocalPopChoice(g_41);
          }
        else
          {
            t = z_40;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
          }
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            if(((j_29 != NULL) && (j_29 != ATgetFirst((ATermList) t))))
              _fail(ATgetFirst((ATermList) t));
            else
              j_29 = ATgetFirst((ATermList) t);
            {
              ATerm m_41 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        t = not_null(j_29);
        t = map_1_0(i_7, t);
        t = k_29;
        t = end_scope_1_0(j_7, t);
      }
      return(t);
    }
    t = restore_always_2_0(q_116, h_7, t);
  }
  return(t);
}
ATerm n_7 (ATerm t)
{
  ATerm n_41 = t;
  int o_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_r_14;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(o_41);
    }
  else
    {
      t = n_41;
      t = term_p_41;
    }
  return(t);
}
ATerm xtc_io_1_0 (ATerm r_116 (ATerm), ATerm t)
{
  ATerm k_7 (ATerm t)
  {
    ATerm q_41 = t;
    int r_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_29 = NULL;
        t = term_q_33;
        t = get_config_0_0(t);
        r_29 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, r_29);
        ;
        LocalPopChoice(r_41);
      }
    else
      {
        t = q_41;
        t = term_r_17;
      }
    t = r_116(t);
    t = copy_to_1_0(n_7, t);
    return(t);
  }
  t = xtc_temp_files_1_0(k_7, t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm s_29 = NULL,t_29 = NULL,u_29 = NULL,v_29 = NULL,w_29 = NULL;
  s_29 = t;
  t = term_h_33;
  t = whoami_0_0(t);
  t_29 = t;
  t = term_u_26;
  u_29 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_t_41), t_29), term_s_41);
  v_29 = t;
  t = SSL_printnl(u_29, v_29);
  t = term_y_17;
  w_29 = t;
  t = SSL_exit(w_29);
  t = s_29;
  return(t);
}
ATerm o_7 (ATerm t)
{
  ATerm y_29 = NULL;
  y_29 = t;
  if(match_string(t, "-k"))
    {
      t = y_29;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = y_29;
    }
  return(t);
}
ATerm r_7 (ATerm t)
{
  ATerm z_29 = NULL,a_30 = NULL,b_30 = NULL;
  z_29 = t;
  t = SSL_string_to_int(z_29);
  a_30 = t;
  t = term_t_17;
  b_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_17, a_30);
  t = g_9(b_30, a_30, t);
  t = z_29;
  return(t);
}
ATerm v_7 (ATerm t)
{
  t = term_u_41;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(o_7, r_7, v_7, t);
  return(t);
}
ATerm w_7 (ATerm t)
{
  ATerm d_30 = NULL;
  d_30 = t;
  if(match_string(t, "-S"))
    {
      t = d_30;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = d_30;
    }
  return(t);
}
ATerm b_8 (ATerm t)
{
  ATerm i_30 = NULL,j_30 = NULL;
  t = term_e_18;
  i_30 = t;
  t = term_v_41;
  j_30 = t;
  t = term_y_41;
  t = g_9(i_30, j_30, t);
  t = term_z_41;
  return(t);
}
ATerm l_8 (ATerm t)
{
  t = term_a_42;
  return(t);
}
ATerm u_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm v_8 (ATerm t)
{
  ATerm k_30 = NULL,l_30 = NULL,m_30 = NULL;
  k_30 = t;
  t = SSL_string_to_int(k_30);
  l_30 = t;
  t = term_e_18;
  m_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_18, l_30);
  t = g_9(m_30, l_30, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, k_30);
  return(t);
}
ATerm f_9 (ATerm t)
{
  t = term_b_42;
  return(t);
}
ATerm i_9 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm j_9 (ATerm t)
{
  ATerm n_30 = NULL,o_30 = NULL;
  t = term_e_42;
  n_30 = t;
  t = term_h_33;
  o_30 = t;
  t = term_f_42;
  t = g_9(n_30, o_30, t);
  t = term_h_42;
  return(t);
}
ATerm k_9 (ATerm t)
{
  t = term_i_42;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm p_42 = t;
  int r_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(w_7, b_8, l_8, t);
      ;
      LocalPopChoice(r_42);
    }
  else
    {
      t = p_42;
      {
        ATerm t_42 = t;
        int u_42 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(u_8, v_8, f_9, t);
            ;
            LocalPopChoice(u_42);
          }
        else
          {
            t = t_42;
            t = Option_3_0(i_9, j_9, k_9, t);
          }
      }
    }
  return(t);
}
ATerm g_9 (ATerm y_68, ATerm z_68, ATerm t)
{
  ATerm p_30 = NULL;
  t = term_l_17;
  p_30 = t;
  t = SSL_table_put(p_30, y_68, z_68);
  t = (ATerm) ATmakeAppl(sym__3, term_l_17, y_68, z_68);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm u_30 = NULL,v_30 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm w_30 = NULL,x_30 = NULL,y_30 = NULL;
      t = term_h_33;
      t = d_0(t);
      w_30 = t;
      t = term_v_42;
      x_30 = t;
      t = term_w_42;
      y_30 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_v_42, term_w_42, w_30);
      t = e_9(x_30, y_30, w_30, t);
      _fail(t);
    }
  else
    {
      ATerm d_31 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          u_30 = ATgetFirst((ATermList) t);
          v_30 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = u_30;
      t = a_0(t);
      t = term_h_33;
      t = b_0(t);
      d_31 = t;
      t = (ATerm) ATinsert(CheckATermList(v_30), d_31);
    }
  return(t);
}
ATerm l_9 (ATerm t)
{
  ATerm f_31 = NULL;
  f_31 = t;
  if(match_string(t, "-o"))
    {
      t = f_31;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = f_31;
    }
  return(t);
}
ATerm m_9 (ATerm t)
{
  ATerm k_31 = NULL,l_31 = NULL;
  k_31 = t;
  t = term_r_14;
  l_31 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_14, k_31);
  t = g_9(l_31, k_31, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, k_31);
  return(t);
}
ATerm n_9 (ATerm t)
{
  t = term_x_42;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(l_9, m_9, n_9, t);
  return(t);
}
ATerm o_9 (ATerm t)
{
  ATerm v_31 = NULL;
  v_31 = t;
  if(match_string(t, "-i"))
    {
      t = v_31;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = v_31;
    }
  return(t);
}
ATerm p_9 (ATerm t)
{
  ATerm e_32 = NULL,i_32 = NULL;
  e_32 = t;
  t = term_q_33;
  i_32 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_q_33, e_32);
  t = g_9(i_32, e_32, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, e_32);
  return(t);
}
ATerm s_9 (ATerm t)
{
  t = term_y_42;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(o_9, p_9, s_9, t);
  return(t);
}
ATerm e_9 (ATerm t_60, ATerm u_60, ATerm s_60, ATerm t)
{
  ATerm k_32 = NULL,l_32 = NULL,m_32 = NULL;
  k_32 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_60, u_60);
  {
    ATerm z_42 = t;
    int a_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm b_43 = ATgetArgument(t, 0);
            ATerm c_43 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, t_60, u_60);
        t = d_9(t_60, u_60, t);
        ;
        LocalPopChoice(a_43);
      }
    else
      {
        t = z_42;
        t = (ATerm) ATempty;
      }
    l_32 = t;
    t = (ATerm) ATinsert(CheckATermList(l_32), s_60);
    m_32 = t;
    t = SSL_table_put(t_60, u_60, m_32);
    t = k_32;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm w_32 = NULL,x_32 = NULL,y_32 = NULL,z_32 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm a_33 = NULL,b_33 = NULL,c_33 = NULL;
      t = term_h_33;
      t = j_0(t);
      a_33 = t;
      t = term_v_42;
      b_33 = t;
      t = term_w_42;
      c_33 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_v_42, term_w_42, a_33);
      t = e_9(b_33, c_33, a_33, t);
      _fail(t);
    }
  else
    {
      ATerm g_33 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          w_32 = ATgetFirst((ATermList) t);
          x_32 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = x_32;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          y_32 = ATgetFirst((ATermList) t);
          z_32 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = w_32;
      t = h_0(t);
      t = y_32;
      t = i_0(t);
      g_33 = t;
      t = (ATerm) ATinsert(CheckATermList(z_32), g_33);
    }
  return(t);
}
ATerm at_end_1_0 (ATerm z_95 (ATerm), ATerm t)
{
  ATerm v_33 (ATerm t)
  {
    ATerm d_43 = t;
    int e_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, v_33, t);
        ;
        LocalPopChoice(e_43);
      }
    else
      {
        t = d_43;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = z_95(t);
      }
    return(t);
  }
  t = v_33(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm f_43 = t;
  int g_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(g_43);
    }
  else
    {
      t = f_43;
      {
        ATerm j_33 = NULL,m_33 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            j_33 = ATgetFirst((ATermList) t);
            m_33 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = j_33;
        {
          ATerm t_9 (ATerm t)
          {
            t = m_33;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(t_9, t);
        }
      }
    }
  return(t);
}
ATerm j_34 (ATerm y_33, ATerm t)
{
  ATerm b_34 = NULL;
  t = SSL_explode_term(y_33);
  if(match_cons(t, sym__2))
    {
      ATerm h_43 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) h_43) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      b_34 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_34;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm c_34 = NULL,d_34 = NULL,e_34 = NULL;
  e_34 = t;
  if(match_cons(t, sym__2))
    {
      c_34 = ATgetArgument(t, 0);
      d_34 = ATgetArgument(t, 1);
      {
        ATerm i_43 = t;
        int j_43 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_9 (ATerm t)
            {
              t = d_34;
              return(t);
            }
            t = c_34;
            t = at_end_1_0(x_9, t);
            ;
            LocalPopChoice(j_43);
          }
        else
          {
            t = i_43;
            t = j_34(e_34, t);
          }
      }
    }
  else
    {
      t = j_34(e_34, t);
    }
  return(t);
}
ATerm x_8 (ATerm e_69, ATerm d_69, ATerm t)
{
  ATerm k_34 = NULL,l_34 = NULL,m_34 = NULL;
  t = e_69;
  {
    ATerm k_43 = t;
    int l_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        ;
        LocalPopChoice(l_43);
      }
    else
      {
        t = k_43;
        t = (ATerm) ATempty;
      }
    k_34 = t;
    t = (ATerm) ATmakeAppl(sym__2, d_69, k_34);
    t = conc_0_0(t);
    l_34 = t;
    t = term_l_17;
    m_34 = t;
    t = SSL_table_put(m_34, e_69, l_34);
    t = (ATerm) ATmakeAppl(sym__3, term_l_17, e_69, l_34);
  }
  return(t);
}
ATerm c_10 (ATerm t)
{
  ATerm q_34 = NULL;
  q_34 = t;
  if(match_string(t, "-I"))
    {
      t = q_34;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--Include", 0, ATtrue)))
        _fail(t);
      t = q_34;
    }
  return(t);
}
ATerm f_10 (ATerm t)
{
  ATerm r_34 = NULL,s_34 = NULL,t_34 = NULL;
  r_34 = t;
  t = term_t_33;
  s_34 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, r_34), term_t_33);
  t_34 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_33, (ATerm) ATinsert(ATinsert(ATempty, r_34), term_t_33));
  t = x_8(s_34, t_34, t);
  t = term_h_33;
  return(t);
}
ATerm g_10 (ATerm t)
{
  t = term_m_43;
  return(t);
}
ATerm i_10 (ATerm t)
{
  ATerm u_34 = NULL;
  u_34 = t;
  if(match_string(t, "--nodep"))
    {
      t = u_34;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-nodep", 0, ATtrue)))
        _fail(t);
      t = u_34;
    }
  return(t);
}
ATerm j_10 (ATerm t)
{
  ATerm v_34 = NULL,w_34 = NULL;
  t = term_z_14;
  v_34 = t;
  t = term_n_43;
  w_34 = t;
  t = term_o_43;
  t = g_9(v_34, w_34, t);
  t = term_h_33;
  return(t);
}
ATerm k_10 (ATerm t)
{
  t = term_p_43;
  return(t);
}
ATerm m_10 (ATerm t)
{
  ATerm x_34 = NULL;
  x_34 = t;
  if(match_string(t, "--dep"))
    {
      t = x_34;
    }
  else
    {
      if(match_string(t, "-d"))
        {
          t = x_34;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-dep", 0, ATtrue)))
            _fail(t);
          t = x_34;
        }
    }
  return(t);
}
ATerm o_10 (ATerm t)
{
  ATerm y_34 = NULL,z_34 = NULL;
  y_34 = t;
  t = term_w_14;
  z_34 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_14, y_34);
  t = g_9(z_34, y_34, t);
  t = term_h_33;
  return(t);
}
ATerm p_10 (ATerm t)
{
  t = term_q_43;
  return(t);
}
ATerm t_10 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--imports", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm u_10 (ATerm t)
{
  ATerm a_35 = NULL,b_35 = NULL;
  t = term_r_43;
  a_35 = t;
  t = term_h_33;
  b_35 = t;
  t = term_s_43;
  t = g_9(a_35, b_35, t);
  t = term_h_33;
  return(t);
}
ATerm w_10 (ATerm t)
{
  t = term_t_43;
  return(t);
}
ATerm pack_stratego_options_0_0 (ATerm t)
{
  ATerm u_43 = t;
  int v_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ArgOption_3_0(c_10, f_10, g_10, t);
      ;
      LocalPopChoice(v_43);
    }
  else
    {
      t = u_43;
      {
        ATerm w_43 = t;
        int x_43 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Option_3_0(i_10, j_10, k_10, t);
            ;
            LocalPopChoice(x_43);
          }
        else
          {
            t = w_43;
            {
              ATerm y_43 = t;
              int z_43 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = ArgOption_3_0(m_10, o_10, p_10, t);
                  ;
                  LocalPopChoice(z_43);
                }
              else
                {
                  t = y_43;
                  t = Option_3_0(t_10, u_10, w_10, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm c_35 = NULL,d_35 = NULL,e_35 = NULL,f_35 = NULL;
  t = report_run_time_0_0(t);
  t = term_h_33;
  t = whoami_0_0(t);
  c_35 = t;
  t = term_u_26;
  d_35 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_a_44), c_35);
  e_35 = t;
  t = SSL_printnl(d_35, e_35);
  t = term_y_17;
  f_35 = t;
  t = SSL_exit(f_35);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_b_44;
  t = get_config_0_0(t);
  return(t);
}
ATerm a_9 (ATerm u_48, ATerm v_48, ATerm t)
{
  ATerm c_44 = t;
  int d_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(u_48, v_48);
      ;
      LocalPopChoice(d_44);
    }
  else
    {
      t = c_44;
      t = SSL_addr(u_48, v_48);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm m_101 (ATerm), ATerm n_101 (ATerm), ATerm t)
{
  ATerm e_44 = t;
  int f_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = m_101(t);
      ;
      LocalPopChoice(f_44);
    }
  else
    {
      t = e_44;
      {
        ATerm l_35 = NULL,m_35 = NULL,p_35 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            l_35 = ATgetFirst((ATermList) t);
            m_35 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = m_35;
        t = foldr_2_0(m_101, n_101, t);
        p_35 = t;
        t = (ATerm) ATmakeAppl(sym__2, l_35, p_35);
        t = n_101(t);
      }
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm a_11 (ATerm t)
{
  t = term_v_41;
  return(t);
}
ATerm b_11 (ATerm t)
{
  ATerm q_9 = NULL,u_9 = NULL;
  if(match_cons(t, sym__2))
    {
      q_9 = ATgetArgument(t, 0);
      u_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_9(q_9, u_9, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm w_35 = NULL,a_8 = NULL,c_9 = NULL;
  t = times_0_0(t);
  a_8 = t;
  t = SSL_explode_term(a_8);
  if(match_cons(t, sym__2))
    {
      ATerm g_44 = ATgetArgument(t, 0);
      c_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_9;
  t = foldr_2_0(a_11, b_11, t);
  w_35 = t;
  t = SSL_TicksToSeconds(w_35);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm n_36 = NULL,o_36 = NULL,p_36 = NULL;
  n_36 = t;
  if(match_cons(t, sym__2))
    {
      o_36 = ATgetArgument(t, 0);
      p_36 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm h_44 = t;
    int i_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_36;
        if((o_36 != t))
          {
            _fail(t);
          }
        t = n_36;
        ;
        LocalPopChoice(i_44);
      }
    else
      {
        t = h_44;
        t = (ATerm) ATmakeAppl(sym__2, o_36, p_36);
        {
          ATerm j_44 = t;
          int k_44 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(o_36, p_36);
              ;
              LocalPopChoice(k_44);
            }
          else
            {
              t = j_44;
              t = SSL_gtr(o_36, p_36);
            }
          t = (ATerm) ATmakeAppl(sym__2, o_36, p_36);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm k_109 (ATerm), ATerm t)
{
  ATerm l_44 = t;
  int m_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_36 = NULL,u_36 = NULL;
      s_36 = t;
      t = term_e_18;
      t = get_config_0_0(t);
      u_36 = t;
      t = (ATerm) ATmakeAppl(sym__2, u_36, term_y_17);
      t = geq_0_0(t);
      t = s_36;
      t = k_109(t);
      ;
      LocalPopChoice(m_44);
    }
  else
    {
      t = l_44;
    }
  return(t);
}
ATerm c_11 (ATerm t)
{
  ATerm w_36 = NULL,x_36 = NULL,y_36 = NULL,z_36 = NULL;
  t = run_time_0_0(t);
  w_36 = t;
  t = term_h_33;
  t = whoami_0_0(t);
  x_36 = t;
  t = term_u_26;
  y_36 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_n_44), w_36), term_k_18), x_36);
  z_36 = t;
  t = SSL_printnl(y_36, z_36);
  t = (ATerm) ATmakeAppl(sym__2, term_u_26, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_n_44), w_36), term_k_18), x_36));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(c_11, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm a_37 = NULL;
  t = report_run_time_0_0(t);
  t = term_v_41;
  a_37 = t;
  t = SSL_exit(a_37);
  return(t);
}
ATerm g_11 (ATerm t)
{
  ATerm o_44 = t;
  int p_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(!(match_cons(t, sym_Help_0)))
        _fail(t);
      ;
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
            t = Undefined_1_0(_id, t);
            ;
            LocalPopChoice(r_44);
          }
        else
          {
            t = q_44;
            if(!(match_cons(t, sym_Version_0)))
              _fail(t);
          }
      }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm y_110 (ATerm), ATerm t)
{
  ATerm s_44 = t;
  int t_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_u_44;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(t_44);
    }
  else
    {
      t = s_44;
      t = fetch_1_0(g_11, t);
    }
  t = y_110(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm c_37 = NULL,d_37 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_37 = ATgetFirst((ATermList) t);
      d_37 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm i_37 = NULL,j_37 = NULL;
        t = d_37;
        t = g_0(t);
        i_37 = t;
        t = c_37;
        t = f_0(t);
        j_37 = t;
        t = d_37;
        {
          ATerm h_11 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(i_37), j_37);
            return(t);
          }
          t = reverse_acc_2_0(f_0, h_11, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_h_33;
      t = g_0(t);
    }
  return(t);
}
ATerm d_9 (ATerm k_62, ATerm l_62, ATerm t)
{
  t = SSL_table_get(k_62, l_62);
  return(t);
}
ATerm Program_1_0 (ATerm p_79 (ATerm), ATerm t)
{
  ATerm m_37 = NULL,p_37 = NULL,q_37 = NULL,r_37 = NULL,x_0 = NULL,d_1 = NULL;
  r_37 = t;
  if(match_cons(t, sym_Program_1))
    {
      p_37 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_37);
  m_37 = t;
  t = p_37;
  t = p_79(t);
  q_37 = t;
  d_1 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, q_37);
  x_0 = t;
  t = SSLsetAnnotations(x_0, m_37);
  return(t);
}
ATerm i_11 (ATerm t)
{
  t = Program_1_0(_id, t);
  return(t);
}
ATerm j_11 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm l_11 (ATerm t)
{
  ATerm a_38 = NULL;
  a_38 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, a_38), term_v_44);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm y_37 = NULL,z_37 = NULL;
  ATerm w_44 = t;
  int x_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_b_44;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(x_44);
    }
  else
    {
      t = w_44;
      t = fetch_1_0(i_11, t);
    }
  t = term_y_44;
  t = echo_0_0(t);
  t = term_v_42;
  y_37 = t;
  t = term_w_42;
  z_37 = t;
  t = term_z_44;
  t = d_9(y_37, z_37, t);
  t = reverse_acc_2_0(_id, j_11, t);
  t = map_1_0(l_11, t);
  return(t);
}
ATerm Undefined_1_0 (ATerm q_79 (ATerm), ATerm t)
{
  ATerm b_38 = NULL,c_38 = NULL,d_38 = NULL,e_38 = NULL,e_1 = NULL,f_1 = NULL;
  e_38 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      c_38 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_38);
  b_38 = t;
  t = c_38;
  t = q_79(t);
  d_38 = t;
  f_1 = t;
  t = (ATerm) ATmakeAppl(sym_Undefined_1, d_38);
  e_1 = t;
  t = SSLsetAnnotations(e_1, b_38);
  return(t);
}
ATerm fetch_1_0 (ATerm t_95 (ATerm), ATerm t)
{
  ATerm i_38 (ATerm t)
  {
    ATerm a_45 = t;
    int b_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(t_95, _id, t);
        ;
        LocalPopChoice(b_45);
      }
    else
      {
        t = a_45;
        t = Cons_2_0(_id, i_38, t);
      }
    return(t);
  }
  t = i_38(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm r_38 = NULL,w_38 = NULL,x_38 = NULL;
  r_38 = t;
  {
    ATerm c_45 = t;
    int d_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = r_38;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm e_45 = ATgetFirst((ATermList) t);
                ATerm f_45 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = r_38;
          }
        ;
        LocalPopChoice(d_45);
      }
    else
      {
        t = c_45;
        t = (ATerm) ATinsert(ATempty, r_38);
      }
    w_38 = t;
    t = term_p_41;
    x_38 = t;
    t = SSL_printnl(x_38, w_38);
    t = r_38;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_b_44;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm m_11 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm n_11 (ATerm t)
{
  ATerm e_39 = NULL,f_39 = NULL;
  t = term_g_45;
  e_39 = t;
  t = term_h_33;
  f_39 = t;
  t = term_h_45;
  t = g_9(e_39, f_39, t);
  return(t);
}
ATerm p_11 (ATerm t)
{
  t = term_i_45;
  return(t);
}
ATerm q_11 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm t_11 (ATerm t)
{
  ATerm g_39 = NULL,h_39 = NULL,i_39 = NULL,j_39 = NULL;
  t = term_g_45;
  g_39 = t;
  t = term_h_33;
  h_39 = t;
  t = term_h_45;
  t = g_9(g_39, h_39, t);
  t = term_j_45;
  i_39 = t;
  t = term_h_33;
  j_39 = t;
  t = term_k_45;
  t = g_9(i_39, j_39, t);
  t = term_l_45;
  return(t);
}
ATerm v_11 (ATerm t)
{
  t = term_m_45;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm n_45 = t;
  int o_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(m_11, n_11, p_11, t);
      ;
      LocalPopChoice(o_45);
    }
  else
    {
      t = n_45;
      t = Option_3_0(q_11, t_11, v_11, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm c_74 (ATerm), ATerm d_74 (ATerm), ATerm t)
{
  ATerm k_39 = NULL,l_39 = NULL,n_39 = NULL,o_39 = NULL,q_39 = NULL,r_39 = NULL,r_1 = NULL,w_1 = NULL;
  r_39 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      l_39 = ATgetFirst((ATermList) t);
      n_39 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_39);
  k_39 = t;
  t = l_39;
  t = c_74(t);
  o_39 = t;
  t = n_39;
  t = d_74(t);
  q_39 = t;
  w_1 = t;
  t = (ATerm) ATinsert(CheckATermList(q_39), o_39);
  r_1 = t;
  t = SSLsetAnnotations(r_1, k_39);
  return(t);
}
ATerm w_11 (ATerm t)
{
  ATerm d_40 = NULL,f_40 = NULL;
  d_40 = t;
  t = term_b_44;
  f_40 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_44, d_40);
  t = g_9(f_40, d_40, t);
  t = (ATerm) ATmakeAppl(sym_Program_1, d_40);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm p_113 (ATerm), ATerm t)
{
  ATerm y_39 = NULL;
  y_39 = t;
  {
    ATerm p_45 = t;
    int q_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_r_45;
        t = p_113(t);
        ;
        LocalPopChoice(q_45);
      }
    else
      {
        t = p_45;
      }
    t = y_39;
    {
      ATerm x_11 (ATerm t)
      {
        ATerm s_45 = t;
        int t_45 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_45 = t;
            int v_45 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(v_45);
              }
            else
              {
                t = u_45;
                t = p_113(t);
                t = Cons_2_0(_id, x_11, t);
              }
            ;
            LocalPopChoice(t_45);
          }
        else
          {
            t = s_45;
            {
              ATerm k_40 = NULL,m_40 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  k_40 = ATgetFirst((ATermList) t);
                  m_40 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(m_40), (ATerm) ATmakeAppl(sym_Undefined_1, k_40));
            }
          }
        return(t);
      }
      t = Cons_2_0(w_11, x_11, t);
    }
  }
  return(t);
}
ATerm a_12 (ATerm t)
{
  ATerm j_41 = NULL;
  j_41 = t;
  if(match_string(t, "--help"))
    {
      t = j_41;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = j_41;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = j_41;
        }
    }
  return(t);
}
ATerm b_12 (ATerm t)
{
  ATerm k_41 = NULL,l_41 = NULL;
  t = term_u_44;
  k_41 = t;
  t = term_h_33;
  l_41 = t;
  t = term_w_45;
  t = g_9(k_41, l_41, t);
  t = term_x_45;
  return(t);
}
ATerm c_12 (ATerm t)
{
  t = term_y_45;
  return(t);
}
ATerm f_12 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm o_113 (ATerm), ATerm t)
{
  ATerm a_41 = NULL,b_41 = NULL,c_41 = NULL,d_41 = NULL,e_41 = NULL,f_41 = NULL,i_41 = NULL;
  a_41 = t;
  t = term_v_42;
  d_41 = t;
  t = term_w_42;
  e_41 = t;
  t = (ATerm) ATempty;
  f_41 = t;
  t = SSL_table_put(d_41, e_41, f_41);
  t = a_41;
  {
    ATerm z_11 (ATerm t)
    {
      ATerm z_45 = t;
      int a_46 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = o_113(t);
          ;
          LocalPopChoice(a_46);
        }
      else
        {
          t = z_45;
          {
            ATerm b_46 = t;
            int c_46 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(a_12, b_12, c_12, t);
                ;
                LocalPopChoice(c_46);
              }
            else
              {
                t = b_46;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(z_11, t);
    {
      ATerm d_46 = t;
      int e_46 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm w_41 = NULL;
          w_41 = t;
          {
            ATerm f_46 = t;
            int g_46 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm k_11 = NULL;
                t = w_41;
                {
                  ATerm h_46 = t;
                  int i_46 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_u_44;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(i_46);
                    }
                  else
                    {
                      t = h_46;
                      t = fetch_1_0(f_12, t);
                    }
                  t = w_41;
                  t = default_system_usage_0_0(t);
                  t = term_v_41;
                  k_11 = t;
                  t = SSL_exit(k_11);
                }
                ;
                LocalPopChoice(g_46);
              }
            else
              {
                t = f_46;
                {
                  ATerm o_11 = NULL;
                  t = term_g_45;
                  t = get_config_0_0(t);
                  t = w_41;
                  t = default_system_about_0_0(t);
                  t = term_v_41;
                  o_11 = t;
                  t = SSL_exit(o_11);
                }
              }
          }
          ;
          LocalPopChoice(e_46);
        }
      else
        {
          t = d_46;
          {
            ATerm j_46 = t;
            int m_46 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm x_41 = NULL,c_42 = NULL,d_42 = NULL;
                ATerm g_12 (ATerm t)
                {
                  ATerm m_12 (ATerm t)
                  {
                    if(((b_41 != NULL) && (b_41 != t)))
                      _fail(t);
                    else
                      b_41 = t;
                    return(t);
                  }
                  t = Undefined_1_0(m_12, t);
                  return(t);
                }
                t = fetch_1_0(g_12, t);
                t = term_u_26;
                x_41 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(b_41)), term_n_46);
                c_42 = t;
                t = SSL_printnl(x_41, c_42);
                t = (ATerm) ATmakeAppl(sym__2, term_u_26, (ATerm) ATinsert(ATinsert(ATempty, not_null(b_41)), term_n_46));
                t = default_system_usage_0_0(t);
                t = term_y_17;
                d_42 = t;
                t = SSL_exit(d_42);
                ;
                LocalPopChoice(m_46);
              }
            else
              {
                t = j_46;
              }
          }
        }
      c_41 = t;
      t = term_v_42;
      i_41 = t;
      t = SSL_table_destroy(i_41);
      t = c_41;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm a_111 (ATerm), ATerm b_111 (ATerm), ATerm c_111 (ATerm), ATerm d_111 (ATerm), ATerm t)
{
  ATerm g_42 = NULL,j_42 = NULL,k_42 = NULL,l_42 = NULL;
  t = parse_options_1_0(a_111, t);
  g_42 = t;
  t = term_o_46;
  j_42 = t;
  t = SSL_table_create(j_42);
  t = term_o_46;
  k_42 = t;
  t = term_p_46;
  l_42 = t;
  t = SSL_table_put(k_42, l_42, g_42);
  t = g_42;
  t = c_111(t);
  {
    ATerm q_46 = t;
    int r_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(b_111, t);
        ;
        LocalPopChoice(r_46);
      }
    else
      {
        t = q_46;
        {
          ATerm s_46 = t;
          int t_46 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = d_111(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(t_46);
            }
          else
            {
              t = s_46;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm n_12 (ATerm t)
{
  ATerm u_46 = t;
  int v_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = pack_stratego_options_0_0(t);
      ;
      LocalPopChoice(v_46);
    }
  else
    {
      t = u_46;
      {
        ATerm w_46 = t;
        int x_46 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = input_option_0_0(t);
            ;
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
                  t = output_option_0_0(t);
                  ;
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
                        t = Option_3_0(p_12, q_12, r_12, t);
                        ;
                        LocalPopChoice(b_47);
                      }
                    else
                      {
                        t = a_47;
                        {
                          ATerm c_47 = t;
                          int d_47 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = verbose_option_0_0(t);
                              ;
                              LocalPopChoice(d_47);
                            }
                          else
                            {
                              t = c_47;
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
ATerm p_12 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm q_12 (ATerm t)
{
  ATerm o_42 = NULL,q_42 = NULL;
  t = term_e_47;
  o_42 = t;
  t = term_h_33;
  q_42 = t;
  t = term_f_47;
  t = g_9(o_42, q_42, t);
  t = term_g_47;
  return(t);
}
ATerm r_12 (ATerm t)
{
  t = term_h_47;
  return(t);
}
ATerm e_13 (ATerm t)
{
  ATerm r_11 = NULL,s_11 = NULL,u_11 = NULL;
  s_11 = t;
  t = SSL_explode_string(s_11);
  {
    ATerm i_47 = t;
    int j_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_14 (ATerm t)
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm k_47 = ATgetFirst((ATermList) t);
              if(((ATgetType(k_47) != AT_INT) || (ATgetInt((ATermInt) k_47) != 47)))
                _fail(t);
              if(((r_11 != NULL) && (r_11 != (ATerm) ATgetNext((ATermList) t))))
                _fail((ATerm) ATgetNext((ATermList) t));
              else
                r_11 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          return(t);
        }
        t = at_suffix_rev_1_0(j_14, t);
        t = not_null(r_11);
        ;
        LocalPopChoice(j_47);
      }
    else
      {
        t = i_47;
      }
    u_11 = t;
    t = SSL_implode_string(u_11);
    t = basename_1_0(_id, t);
  }
  return(t);
}
ATerm pack_stratego_0_0 (ATerm t)
{
  ATerm m_42 = NULL,n_42 = NULL;
  ATerm o_12 (ATerm t)
  {
    ATerm z_12 (ATerm t)
    {
      ATerm s_42 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          s_42 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = w_8(s_42, t);
      if(match_cons(t, sym__2))
        {
          if(((m_42 != NULL) && (m_42 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            m_42 = ATgetArgument(t, 0);
          if(((n_42 != NULL) && (n_42 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            n_42 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm l_47 = t;
        int m_47 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_r_43;
            t = get_config_0_0(t);
            t = not_null(m_42);
            t = map_1_0(e_13, t);
            t = write_to_text_0_0(t);
            ;
            LocalPopChoice(m_47);
          }
        else
          {
            t = l_47;
            t = not_null(m_42);
            t = create_dep_file_0_0(t);
            t = not_null(n_42);
            t = write_to_0_0(t);
          }
      }
      return(t);
    }
    t = xtc_io_1_0(z_12, t);
    return(t);
  }
  t = option_wrap_4_0(n_12, default_usage_0_0, _id, o_12, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = pack_stratego_0_0(t);
  return(t);
}
