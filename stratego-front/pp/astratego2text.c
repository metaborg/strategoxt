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
Symbol sym_Nil_0;
Symbol sym_Cons_2;
Symbol sym_Tool_1;
Symbol sym_Repository_0;
Symbol sym_Import_0;
Symbol sym_Imported_1;
Symbol sym_XTC_0;
Symbol sym_WaitStatus_3;
Symbol sym_Undefined_0;
Symbol sym_Scopes_0;
Symbol sym_Signal_3;
Symbol sym_UnknownSignal_1;
Symbol sym_Var_1;
Symbol sym_Path_1;
Symbol sym_Prefix_2;
Symbol sym_F__OK_0;
Symbol sym_R__OK_0;
Symbol sym_Stream_1;
Symbol sym_Path_1;
Symbol sym_stdin_0;
Symbol sym_stdout_0;
Symbol sym_stderr_0;
Symbol sym_FILE_1;
Symbol sym_TempFiles_0;
Symbol sym_Verbose_1;
Symbol sym_Version_0;
Symbol sym_Input_1;
Symbol sym_Output_1;
Symbol sym_Binary_0;
Symbol sym_Statistics_0;
Symbol sym_Help_0;
Symbol sym_Program_1;
Symbol sym_Undefined_1;
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
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
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
  sym_WaitStatus_3 = ATmakeSymbol("WaitStatus", 3, ATfalse);
  ATprotectSymbol(sym_WaitStatus_3);
  sym_Undefined_0 = ATmakeSymbol("Undefined", 0, ATfalse);
  ATprotectSymbol(sym_Undefined_0);
  sym_Scopes_0 = ATmakeSymbol("Scopes", 0, ATfalse);
  ATprotectSymbol(sym_Scopes_0);
  sym_Signal_3 = ATmakeSymbol("Signal", 3, ATfalse);
  ATprotectSymbol(sym_Signal_3);
  sym_UnknownSignal_1 = ATmakeSymbol("UnknownSignal", 1, ATfalse);
  ATprotectSymbol(sym_UnknownSignal_1);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
  sym_Prefix_2 = ATmakeSymbol("Prefix", 2, ATfalse);
  ATprotectSymbol(sym_Prefix_2);
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
  sym_FILE_1 = ATmakeSymbol("FILE", 1, ATfalse);
  ATprotectSymbol(sym_FILE_1);
  sym_TempFiles_0 = ATmakeSymbol("TempFiles", 0, ATfalse);
  ATprotectSymbol(sym_TempFiles_0);
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
  init_constant_terms();
}
void __UnboundVarError (char * var)
{
  fprintf(stderr, "** compiler error: variable '%s' should be bound\nnotify stratego-bugs@cs.uu.nl\n", var);
}
ATerm term_e_28;
ATerm term_d_28;
ATerm term_c_28;
ATerm term_b_28;
ATerm term_u_27;
ATerm term_f_27;
ATerm term_e_27;
ATerm term_d_27;
ATerm term_c_27;
ATerm term_b_27;
ATerm term_w_26;
ATerm term_v_26;
ATerm term_u_26;
ATerm term_t_26;
ATerm term_s_26;
ATerm term_r_26;
ATerm term_m_26;
ATerm term_q_25;
ATerm term_p_25;
ATerm term_i_25;
ATerm term_f_25;
ATerm term_v_24;
ATerm term_q_24;
ATerm term_p_24;
ATerm term_o_24;
ATerm term_l_24;
ATerm term_i_24;
ATerm term_h_24;
ATerm term_g_24;
ATerm term_d_24;
ATerm term_c_24;
ATerm term_b_24;
ATerm term_y_23;
ATerm term_x_23;
ATerm term_u_23;
ATerm term_k_23;
ATerm term_l_22;
ATerm term_k_22;
ATerm term_j_22;
ATerm term_i_22;
ATerm term_h_22;
ATerm term_e_22;
ATerm term_a_22;
ATerm term_s_21;
ATerm term_r_21;
ATerm term_l_21;
ATerm term_k_21;
ATerm term_j_21;
ATerm term_i_21;
ATerm term_h_21;
ATerm term_g_21;
ATerm term_f_21;
ATerm term_e_21;
ATerm term_d_21;
ATerm term_c_21;
ATerm term_b_21;
ATerm term_a_21;
ATerm term_z_20;
ATerm term_y_20;
ATerm term_x_20;
ATerm term_w_20;
ATerm term_v_20;
ATerm term_u_20;
ATerm term_t_20;
ATerm term_s_20;
ATerm term_r_20;
ATerm term_q_20;
ATerm term_o_20;
ATerm term_n_20;
ATerm term_l_20;
ATerm term_k_20;
ATerm term_j_20;
ATerm term_i_20;
ATerm term_e_20;
ATerm term_d_20;
ATerm term_c_20;
ATerm term_b_20;
ATerm term_a_20;
ATerm term_x_19;
ATerm term_w_19;
ATerm term_t_19;
ATerm term_s_19;
ATerm term_r_19;
ATerm term_q_19;
ATerm term_p_19;
ATerm term_h_19;
ATerm term_f_19;
ATerm term_e_19;
ATerm term_a_19;
ATerm term_y_18;
ATerm term_x_18;
ATerm term_w_18;
ATerm term_v_18;
ATerm term_q_18;
ATerm term_p_18;
ATerm term_m_18;
ATerm term_l_18;
ATerm term_i_18;
ATerm term_h_18;
ATerm term_g_18;
ATerm term_c_18;
ATerm term_b_18;
ATerm term_a_18;
ATerm term_y_17;
ATerm term_x_17;
ATerm term_w_17;
ATerm term_v_17;
ATerm term_u_17;
ATerm term_n_17;
ATerm term_m_17;
ATerm term_a_17;
ATerm term_z_16;
ATerm term_y_16;
ATerm term_x_16;
ATerm term_w_16;
ATerm term_t_16;
ATerm term_s_16;
ATerm term_r_16;
ATerm term_q_16;
ATerm term_p_16;
ATerm term_m_16;
ATerm term_k_16;
ATerm term_j_16;
ATerm term_d_16;
ATerm term_c_16;
ATerm term_v_15;
ATerm term_u_15;
ATerm term_t_15;
ATerm term_q_15;
ATerm term_p_15;
ATerm term_o_15;
ATerm term_l_15;
ATerm term_i_15;
ATerm term_h_15;
ATerm term_g_15;
ATerm term_f_15;
ATerm term_d_15;
ATerm term_a_15;
ATerm term_z_14;
ATerm term_y_14;
ATerm term_x_14;
ATerm term_w_14;
ATerm term_v_14;
ATerm term_u_14;
ATerm term_t_14;
ATerm term_m_14;
ATerm term_l_14;
ATerm term_i_14;
ATerm term_h_14;
ATerm term_b_14;
ATerm term_z_13;
ATerm term_y_13;
ATerm term_x_13;
ATerm term_v_13;
ATerm term_o_13;
ATerm term_m_13;
ATerm term_l_13;
ATerm term_i_13;
ATerm term_a_13;
ATerm term_c_12;
ATerm term_y_11;
ATerm term_v_11;
ATerm term_u_11;
ATerm term_r_11;
ATerm term_l_11;
ATerm term_i_11;
ATerm term_f_11;
ATerm term_y_10;
ATerm term_t_10;
ATerm term_s_10;
ATerm term_r_10;
ATerm term_q_10;
ATerm term_o_10;
ATerm term_n_10;
ATerm term_m_10;
ATerm term_a_9;
ATerm term_z_8;
ATerm term_m_8;
ATerm term_l_8;
void init_constant_terms (void)
{
  ATprotect(&(term_l_8));
  term_l_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_m_8));
  term_m_8 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_z_8));
  term_z_8 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_a_9));
  term_a_9 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_m_10));
  term_m_10 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_q_10));
  term_q_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_r_10));
  term_r_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_s_10));
  term_s_10 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_13, term_x_13, term_y_13);
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_14, term_h_14, term_i_14);
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_14, term_t_14, term_u_14);
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_14, term_a_9, term_x_14);
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_14, term_a_15, term_d_15);
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_15, term_h_15, term_i_15);
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_15, term_p_15, term_q_15);
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_15, term_v_15, term_c_16);
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_16, term_k_16, term_m_16);
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_t_16));
  term_t_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_16, term_r_16, term_s_16);
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_16, term_x_16, term_y_16);
  ATprotect(&(term_a_17));
  term_a_17 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_m_17));
  term_m_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_n_17));
  term_n_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_17, term_z_8, term_m_17);
  ATprotect(&(term_u_17));
  term_u_17 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_v_17));
  term_v_17 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_w_17));
  term_w_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_17, term_v_17, term_w_17);
  ATprotect(&(term_y_17));
  term_y_17 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_a_18));
  term_a_18 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_17, term_a_18, term_b_18);
  ATprotect(&(term_g_18));
  term_g_18 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_h_18));
  term_h_18 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_i_18));
  term_i_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_l_18));
  term_l_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_18, term_h_18, term_i_18);
  ATprotect(&(term_m_18));
  term_m_18 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_p_18));
  term_p_18 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_q_18));
  term_q_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_v_18));
  term_v_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_18, term_p_18, term_q_18);
  ATprotect(&(term_w_18));
  term_w_18 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_x_18));
  term_x_18 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_y_18));
  term_y_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_a_19));
  term_a_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_18, term_x_18, term_y_18);
  ATprotect(&(term_e_19));
  term_e_19 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_f_19));
  term_f_19 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_h_19));
  term_h_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_p_19));
  term_p_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_19, term_f_19, term_h_19);
  ATprotect(&(term_q_19));
  term_q_19 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_r_19));
  term_r_19 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_s_19));
  term_s_19 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_t_19));
  term_t_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_19, term_r_19, term_s_19);
  ATprotect(&(term_w_19));
  term_w_19 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_x_19));
  term_x_19 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_a_20));
  term_a_20 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_b_20));
  term_b_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_19, term_x_19, term_a_20);
  ATprotect(&(term_c_20));
  term_c_20 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_d_20));
  term_d_20 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_e_20));
  term_e_20 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_i_20));
  term_i_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_20, term_d_20, term_e_20);
  ATprotect(&(term_j_20));
  term_j_20 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_k_20));
  term_k_20 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_l_20));
  term_l_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_n_20));
  term_n_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_20, term_k_20, term_l_20);
  ATprotect(&(term_o_20));
  term_o_20 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_q_20));
  term_q_20 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_r_20));
  term_r_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_s_20));
  term_s_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_20, term_q_20, term_r_20);
  ATprotect(&(term_t_20));
  term_t_20 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_u_20));
  term_u_20 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_v_20));
  term_v_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_w_20));
  term_w_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_20, term_u_20, term_v_20);
  ATprotect(&(term_x_20));
  term_x_20 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_y_20));
  term_y_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_z_20));
  term_z_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_20, term_m_8, term_y_20);
  ATprotect(&(term_a_21));
  term_a_21 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_b_21));
  term_b_21 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_c_21));
  term_c_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_d_21));
  term_d_21 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_21, term_b_21, term_c_21);
  ATprotect(&(term_e_21));
  term_e_21 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_f_21));
  term_f_21 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_g_21));
  term_g_21 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_h_21));
  term_h_21 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_21, term_f_21, term_g_21);
  ATprotect(&(term_i_21));
  term_i_21 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_j_21));
  term_j_21 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_l_21));
  term_l_21 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_21, term_j_21, term_k_21);
  ATprotect(&(term_r_21));
  term_r_21 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_s_21));
  term_s_21 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_a_22));
  term_a_22 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_e_22));
  term_e_22 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file> (file, mode)", 0, ATtrue));
  ATprotect(&(term_h_22));
  term_h_22 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_i_22));
  term_i_22 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_j_22));
  term_j_22 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_k_22));
  term_k_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_l_22));
  term_l_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_k_23));
  term_k_23 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_u_23));
  term_u_23 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_x_23));
  term_x_23 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_y_23));
  term_y_23 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_b_24));
  term_b_24 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_c_24));
  term_c_24 = (ATerm) ATmakeAppl(sym_Verbose_1, term_b_24);
  ATprotect(&(term_d_24));
  term_d_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_g_24));
  term_g_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_h_24));
  term_h_24 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_i_24));
  term_i_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_l_24));
  term_l_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_o_24));
  term_o_24 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_p_24));
  term_p_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_q_24));
  term_q_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_v_24));
  term_v_24 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_f_25));
  term_f_25 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_i_25));
  term_i_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_p_25));
  term_p_25 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_q_25));
  term_q_25 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_m_26));
  term_m_26 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_r_26));
  term_r_26 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_s_26));
  term_s_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_t_26));
  term_t_26 = (ATerm) ATmakeAppl(sym__3, term_r_26, term_s_26, term_h_22);
  ATprotect(&(term_u_26));
  term_u_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_v_26));
  term_v_26 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_w_26));
  term_w_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_b_27));
  term_b_27 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_c_27));
  term_c_27 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_d_27));
  term_d_27 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_e_27));
  term_e_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_f_27));
  term_f_27 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_u_27));
  term_u_27 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_b_28));
  term_b_28 = (ATerm) ATmakeAppl(ATmakeSymbol("ast2abox", 0, ATtrue));
  ATprotect(&(term_c_28));
  term_c_28 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego-pretty.pp", 0, ATtrue));
  ATprotect(&(term_d_28));
  term_d_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_e_28));
  term_e_28 = (ATerm) ATmakeAppl(ATmakeSymbol("abox2text", 0, ATtrue));
}
ATerm xtc_transform_1_0 (ATerm s_83 (ATerm), ATerm);
ATerm table_getlist_0_0 (ATerm);
ATerm if_verbose5_1_0 (ATerm d_81 (ATerm), ATerm);
ATerm xtc_find_version_loc_0_0 (ATerm);
ATerm filter_1_0 (ATerm e_77 (ATerm), ATerm);
ATerm repeat_1_0 (ATerm y_78 (ATerm), ATerm);
ATerm xtc_import_0_0 (ATerm);
ATerm say_1_0 (ATerm h_65 (ATerm), ATerm);
ATerm if_verbose4_1_0 (ATerm c_81 (ATerm), ATerm);
ATerm if_verbose6_1_0 (ATerm e_81 (ATerm), ATerm);
ATerm HdMember_p__2_0 (ATerm s_73 (ATerm), ATerm t_73 (ATerm), ATerm);
ATerm union_1_0 (ATerm o_73 (ATerm), ATerm);
ATerm union_0_0 (ATerm);
ATerm table_append_0_0 (ATerm);
ATerm table_putlist_1_0 (ATerm n_81 (ATerm), ATerm);
ATerm read_repository_file_0_0 (ATerm);
ATerm xtc_read_0_0 (ATerm);
ATerm xtc_location_0_0 (ATerm);
ATerm xtc_load_0_0 (ATerm);
ATerm xtc_find_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm read_from_0_0 (ATerm);
ATerm fclose_0_0 (ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm stdio_stream_0_0 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm WriteToFile_1_0 (ATerm r_65 (ATerm), ATerm);
ATerm WriteToBinaryFile_0_0 (ATerm);
ATerm write_to_0_0 (ATerm);
ATerm xtc_transform_term_2_0 (ATerm a_84 (ATerm), ATerm b_84 (ATerm), ATerm);
ATerm concat_strings_0_0 (ATerm);
ATerm signal_to_descr_0_0 (ATerm);
ATerm fetch_elem_1_0 (ATerm x_69 (ATerm), ATerm);
ATerm signal_from_number_0_0 (ATerm);
ATerm warn_ifsignaled_0_0 (ATerm);
ATerm fork_0_0 (ATerm);
ATerm fork_2_0 (ATerm e_64 (ATerm), ATerm f_64 (ATerm), ATerm);
ATerm fork_and_wait_1_0 (ATerm g_64 (ATerm), ATerm);
ATerm call_0_0 (ATerm);
ATerm xtc_find_warning_0_0 (ATerm);
ATerm xtc_command_1_0 (ATerm r_83 (ATerm), ATerm);
ATerm assert_1_0 (ATerm c_80 (ATerm), ATerm);
ATerm obsolete_1_0 (ATerm k_65 (ATerm), ATerm);
ATerm open_file_0_0 (ATerm);
ATerm new_0_0 (ATerm);
ATerm new_file_0_0 (ATerm);
ATerm xtc_new_file_0_0 (ATerm);
ATerm xtc_transform_file_2_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm);
ATerm FILE_1_0 (ATerm b_62 (ATerm), ATerm);
ATerm xtc_transform_2_0 (ATerm t_83 (ATerm), ATerm u_83 (ATerm), ATerm);
ATerm copy_to_1_0 (ATerm k_0 (ATerm), ATerm);
ATerm table_pop_0_0 (ATerm);
ATerm end_scope_1_0 (ATerm z_79 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm u_80 (ATerm), ATerm v_80 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm y_79 (ATerm), ATerm);
ATerm xtc_temp_files_1_0 (ATerm d_83 (ATerm), ATerm);
ATerm xtc_io_1_0 (ATerm e_83 (ATerm), ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm general_options_0_0 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm aterm_output_option_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm input_option_0_0 (ATerm);
ATerm io_options_0_0 (ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm foldr_2_0 (ATerm b_76 (ATerm), ATerm c_76 (ATerm), ATerm);
ATerm crush_2_0 (ATerm z_73 (ATerm), ATerm a_74 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm z_80 (ATerm), ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm need_help_1_0 (ATerm f_85 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm reverse_0_0 (ATerm);
ATerm Program_1_0 (ATerm i_62 (ATerm), ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm j_62 (ATerm), ATerm);
ATerm fetch_1_0 (ATerm v_69 (ATerm), ATerm);
ATerm option_defined_1_0 (ATerm a_86 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm system_about_0_0 (ATerm);
ATerm concat_0_0 (ATerm);
ATerm conc_more_lists_0_0 (ATerm);
ATerm at_end_1_0 (ATerm b_70 (ATerm), ATerm);
ATerm conc_two_lists_0_0 (ATerm);
ATerm conc_0_0 (ATerm);
ATerm _2_0 (ATerm t_55 (ATerm), ATerm u_55 (ATerm), ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm debug_1_0 (ATerm d_65 (ATerm), ATerm);
ATerm map_1_0 (ATerm k_69 (ATerm), ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm try_1_0 (ATerm f_80 (ATerm), ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm register_usage_1_0 (ATerm f_87 (ATerm), ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm system_usage_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm c_57 (ATerm), ATerm d_57 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm d_87 (ATerm), ATerm);
ATerm parse_options_1_0 (ATerm c_87 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm h_85 (ATerm), ATerm i_85 (ATerm), ATerm j_85 (ATerm), ATerm k_85 (ATerm), ATerm);
ATerm option_wrap_2_0 (ATerm l_85 (ATerm), ATerm m_85 (ATerm), ATerm);
ATerm xtc_io_wrap_2_0 (ATerm i_83 (ATerm), ATerm j_83 (ATerm), ATerm);
ATerm xtc_io_wrap_1_0 (ATerm h_83 (ATerm), ATerm);
ATerm xtc_iowrap_1_0 (ATerm n_83 (ATerm), ATerm);
ATerm astratego2text_0_0 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm xtc_transform_1_0 (ATerm s_83 (ATerm), ATerm t)
{
  ATerm f_0 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = xtc_transform_2_0(s_83, f_0, t);
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm b_0 = NULL;
  b_0 = t;
  t = SSL_table_keys(b_0);
  {
    ATerm s_0 (ATerm t)
    {
      ATerm n_0 = NULL,p_0 = NULL;
      n_0 = t;
      t = SSL_table_get(b_0, n_0);
      p_0 = t;
      t = (ATerm) ATmakeAppl(sym__2, n_0, p_0);
      return(t);
    }
    t = map_1_0(s_0, t);
  }
  return(t);
}
ATerm if_verbose5_1_0 (ATerm d_81 (ATerm), ATerm t)
{
  ATerm t_0 (ATerm t)
  {
    ATerm q_0 = NULL,r_0 = NULL;
    q_0 = t;
    t = term_l_8;
    t = get_config_0_0(t);
    r_0 = t;
    t = (ATerm) ATmakeAppl(sym__2, r_0, term_m_8);
    t = geq_0_0(t);
    t = q_0;
    t = d_81(t);
    return(t);
  }
  t = try_1_0(t_0, t);
  return(t);
}
ATerm xtc_find_version_loc_0_0 (ATerm t)
{
  ATerm a_1 = NULL,b_1 = NULL,c_1 = NULL;
  if(match_cons(t, sym__2))
    {
      a_1 = ATgetArgument(t, 0);
      b_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Tool_1, a_1));
  {
    ATerm u_0 (ATerm t)
    {
      if(match_cons(t, sym__2))
        {
          if((b_1 != ATgetArgument(t, 0)))
            {
              _fail(ATgetArgument(t, 0));
            }
          if(((c_1 != NULL) && (c_1 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            c_1 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      return(t);
    }
    t = fetch_1_0(u_0, t);
    t = not_null(c_1);
  }
  return(t);
}
ATerm filter_1_0 (ATerm e_77 (ATerm), ATerm t)
{
  ATerm n_8 = t;
  int q_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(q_8);
    }
  else
    {
      t = n_8;
      {
        ATerm r_8 = t;
        int s_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_0 (ATerm t)
            {
              t = filter_1_0(e_77, t);
              return(t);
            }
            t = Cons_2_0(e_77, v_0, t);
            ;
            LocalPopChoice(s_8);
          }
        else
          {
            t = r_8;
            {
              ATerm s_1 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm w_8 = ATgetFirst((ATermList) t);
                  s_1 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = s_1;
              t = filter_1_0(e_77, t);
            }
          }
      }
    }
  return(t);
}
ATerm repeat_1_0 (ATerm y_78 (ATerm), ATerm t)
{
  ATerm v_1 (ATerm t)
  {
    ATerm w_0 (ATerm t)
    {
      t = y_78(t);
      t = v_1(t);
      return(t);
    }
    t = try_1_0(w_0, t);
    return(t);
  }
  t = v_1(t);
  return(t);
}
ATerm xtc_import_0_0 (ATerm t)
{
  ATerm w_1 = NULL;
  w_1 = t;
  {
    ATerm x_0 (ATerm t)
    {
      t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Import_0));
      t = filter_1_0(xtc_read_0_0, t);
      {
        ATerm y_8 = t;
        if((PushChoice() == 0))
          {
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = y_8;
          }
      }
      return(t);
    }
    t = repeat_1_0(x_0, t);
    t = w_1;
  }
  return(t);
}
ATerm say_1_0 (ATerm h_65 (ATerm), ATerm t)
{
  ATerm b_2 = NULL,o_0 = NULL;
  b_2 = t;
  t = h_65(t);
  o_0 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, o_0));
  t = b_2;
  return(t);
}
ATerm if_verbose4_1_0 (ATerm c_81 (ATerm), ATerm t)
{
  ATerm y_0 (ATerm t)
  {
    ATerm c_2 = NULL,d_2 = NULL;
    c_2 = t;
    t = term_l_8;
    t = get_config_0_0(t);
    d_2 = t;
    t = (ATerm) ATmakeAppl(sym__2, d_2, term_z_8);
    t = geq_0_0(t);
    t = c_2;
    t = c_81(t);
    return(t);
  }
  t = try_1_0(y_0, t);
  return(t);
}
ATerm if_verbose6_1_0 (ATerm e_81 (ATerm), ATerm t)
{
  ATerm z_0 (ATerm t)
  {
    ATerm g_2 = NULL,h_2 = NULL;
    g_2 = t;
    t = term_l_8;
    t = get_config_0_0(t);
    h_2 = t;
    t = (ATerm) ATmakeAppl(sym__2, h_2, term_a_9);
    t = geq_0_0(t);
    t = g_2;
    t = e_81(t);
    return(t);
  }
  t = try_1_0(z_0, t);
  return(t);
}
ATerm HdMember_p__2_0 (ATerm s_73 (ATerm), ATerm t_73 (ATerm), ATerm t)
{
  ATerm m_2 = NULL,n_2 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_2 = ATgetFirst((ATermList) t);
      n_2 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = t_73(t);
  {
    ATerm d_1 (ATerm t)
    {
      ATerm o_2 = NULL;
      o_2 = t;
      t = (ATerm) ATmakeAppl(sym__2, m_2, o_2);
      t = s_73(t);
      return(t);
    }
    t = fetch_1_0(d_1, t);
    t = n_2;
  }
  return(t);
}
ATerm union_1_0 (ATerm o_73 (ATerm), ATerm t)
{
  ATerm p_2 = NULL,q_2 = NULL;
  if(match_cons(t, sym__2))
    {
      q_2 = ATgetArgument(t, 0);
      p_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_2;
  {
    ATerm t_2 (ATerm t)
    {
      ATerm c_9 = t;
      int f_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = p_2;
          ;
          LocalPopChoice(f_9);
        }
      else
        {
          t = c_9;
          {
            ATerm h_9 = t;
            int r_9 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm e_1 (ATerm t)
                {
                  t = p_2;
                  return(t);
                }
                t = HdMember_p__2_0(o_73, e_1, t);
                t = t_2(t);
                ;
                LocalPopChoice(r_9);
              }
            else
              {
                t = h_9;
                t = Cons_2_0(_id, t_2, t);
              }
          }
        }
      return(t);
    }
    t = t_2(t);
  }
  return(t);
}
ATerm union_0_0 (ATerm t)
{
  ATerm f_1 (ATerm t)
  {
    ATerm v_2 = NULL;
    if(match_cons(t, sym__2))
      {
        v_2 = ATgetArgument(t, 0);
        if((v_2 != ATgetArgument(t, 1)))
          {
            _fail(ATgetArgument(t, 1));
          }
      }
    else
      _fail(t);
    return(t);
  }
  t = union_1_0(f_1, t);
  return(t);
}
ATerm table_append_0_0 (ATerm t)
{
  ATerm a_3 = NULL,b_3 = NULL,c_3 = NULL,e_3 = NULL,f_3 = NULL;
  if(match_cons(t, sym__3))
    {
      a_3 = ATgetArgument(t, 0);
      b_3 = ATgetArgument(t, 1);
      c_3 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, a_3, b_3);
  {
    ATerm s_9 = t;
    int t_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm v_9 = ATgetArgument(t, 0);
            ATerm z_9 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(a_3, b_3);
        ;
        LocalPopChoice(t_9);
      }
    else
      {
        t = s_9;
        t = (ATerm) ATempty;
      }
    e_3 = t;
    t = (ATerm) ATmakeAppl(sym__2, e_3, c_3);
    t = union_0_0(t);
    f_3 = t;
    t = SSL_table_put(a_3, b_3, f_3);
    t = (ATerm) ATmakeAppl(sym__3, a_3, b_3, c_3);
  }
  return(t);
}
ATerm table_putlist_1_0 (ATerm n_81 (ATerm), ATerm t)
{
  ATerm g_3 = NULL,h_3 = NULL;
  if(match_cons(t, sym__2))
    {
      h_3 = ATgetArgument(t, 0);
      g_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_3;
  {
    ATerm g_1 (ATerm t)
    {
      ATerm i_3 = NULL,k_3 = NULL;
      if(match_cons(t, sym__2))
        {
          i_3 = ATgetArgument(t, 0);
          k_3 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__3, h_3, i_3, k_3);
      t = n_81(t);
      return(t);
    }
    t = map_1_0(g_1, t);
  }
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm a_10 = t;
  int g_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_1 = NULL;
      n_1 = t;
      t = SSL_access(n_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_R__OK_0)));
      LocalPopChoice(g_10);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = a_10;
      {
        ATerm i_10 = t;
        int k_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_10 = t;
            if((PushChoice() == 0))
              {
                ATerm p_1 = NULL;
                p_1 = t;
                t = SSL_access(p_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_F__OK_0)));
                PopChoice();
                _fail(t);
              }
            else
              {
                t = l_10;
              }
            {
              ATerm h_1 (ATerm t)
              {
                t = term_m_10;
                return(t);
              }
              t = debug_1_0(h_1, t);
            }
            ;
            LocalPopChoice(k_10);
          }
        else
          {
            t = i_10;
            {
              ATerm i_1 (ATerm t)
              {
                t = term_n_10;
                return(t);
              }
              t = debug_1_0(i_1, t);
            }
          }
        t = (ATerm) ATempty;
      }
    }
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm n_3 = NULL,o_3 = NULL,p_3 = NULL;
  n_3 = t;
  {
    ATerm j_1 (ATerm t)
    {
      ATerm k_1 (ATerm t)
      {
        t = term_o_10;
        return(t);
      }
      t = debug_1_0(k_1, t);
      return(t);
    }
    t = if_verbose5_1_0(j_1, t);
    {
      ATerm p_10 = t;
      if((PushChoice() == 0))
        {
          t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Imported_1, n_3));
          PopChoice();
          _fail(t);
        }
      else
        {
          t = p_10;
        }
      o_3 = t;
      t = SSL_table_put((ATerm)ATmakeAppl(sym_XTC_0), (ATerm)ATmakeAppl(sym_Repository_0), (ATerm) ATinsert(ATempty, n_3));
      t = o_3;
      {
        ATerm l_1 (ATerm t)
        {
          ATerm m_1 (ATerm t)
          {
            t = term_q_10;
            return(t);
          }
          t = debug_1_0(m_1, t);
          return(t);
        }
        t = if_verbose4_1_0(l_1, t);
        t = read_repository_file_0_0(t);
        {
          ATerm o_1 (ATerm t)
          {
            ATerm q_1 (ATerm t)
            {
              t = term_r_10;
              return(t);
            }
            t = say_1_0(q_1, t);
            return(t);
          }
          t = if_verbose6_1_0(o_1, t);
          p_3 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_s_10, p_3);
          t = table_putlist_1_0(table_append_0_0, t);
          {
            ATerm r_1 (ATerm t)
            {
              ATerm t_1 (ATerm t)
              {
                t = term_t_10;
                return(t);
              }
              t = say_1_0(t_1, t);
              return(t);
            }
            t = if_verbose6_1_0(r_1, t);
            t = SSL_table_put((ATerm)ATmakeAppl(sym_XTC_0), (ATerm)ATmakeAppl(sym_Imported_1, n_3), (ATerm) ATempty);
            t = (ATerm) ATmakeAppl(sym__3, term_s_10, (ATerm)ATmakeAppl(sym_Imported_1, n_3), (ATerm) ATempty);
            {
              ATerm x_1 (ATerm t)
              {
                ATerm z_1 (ATerm t)
                {
                  t = term_r_10;
                  return(t);
                }
                t = say_1_0(z_1, t);
                return(t);
              }
              t = if_verbose4_1_0(x_1, t);
            }
          }
        }
      }
    }
  }
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm u_10 = t;
  int x_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_y_10;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(x_10);
    }
  else
    {
      t = u_10;
      {
        ATerm d_11 = t;
        int e_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_getenv((ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue)));
            ;
            LocalPopChoice(e_11);
          }
        else
          {
            t = d_11;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm q_3 = NULL;
  ATerm a_2 (ATerm t)
  {
    ATerm e_2 (ATerm t)
    {
      t = term_f_11;
      return(t);
    }
    t = debug_1_0(e_2, t);
    return(t);
  }
  t = if_verbose5_1_0(a_2, t);
  q_3 = t;
  {
    ATerm g_11 = t;
    int h_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Repository_0));
        ;
        LocalPopChoice(h_11);
      }
    else
      {
        t = g_11;
        t = xtc_location_0_0(t);
        t = xtc_read_0_0(t);
        t = xtc_import_0_0(t);
      }
    t = q_3;
    {
      ATerm f_2 (ATerm t)
      {
        ATerm i_2 (ATerm t)
        {
          t = term_i_11;
          return(t);
        }
        t = debug_1_0(i_2, t);
        return(t);
      }
      t = if_verbose5_1_0(f_2, t);
    }
  }
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm j_11 = t;
  int k_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_2 (ATerm t)
      {
        ATerm k_2 (ATerm t)
        {
          t = term_l_11;
          return(t);
        }
        t = debug_1_0(k_2, t);
        return(t);
      }
      t = if_verbose5_1_0(j_2, t);
      t = xtc_load_0_0(t);
      {
        ATerm m_11 = t;
        int n_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = xtc_find_version_loc_0_0(t);
            ;
            LocalPopChoice(n_11);
          }
        else
          {
            t = m_11;
            {
              ATerm u_1 = NULL,y_1 = NULL;
              u_1 = t;
              t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Tool_1, u_1));
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm o_11 = ATgetFirst((ATermList) t);
                  if(match_cons(o_11, sym__2))
                    {
                      ATerm q_11 = ATgetArgument(o_11, 0);
                      y_1 = ATgetArgument(o_11, 1);
                    }
                  else
                    _fail(t);
                  {
                    ATerm p_11 = (ATerm) ATgetNext((ATermList) t);
                  }
                }
              else
                _fail(t);
              t = y_1;
            }
          }
        {
          ATerm l_2 (ATerm t)
          {
            ATerm r_2 (ATerm t)
            {
              t = term_l_11;
              return(t);
            }
            t = debug_1_0(r_2, t);
            return(t);
          }
          t = if_verbose5_1_0(l_2, t);
        }
      }
      ;
      LocalPopChoice(k_11);
    }
  else
    {
      t = j_11;
      {
        ATerm t_3 = NULL;
        t_3 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue))), t_3), (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue))));
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_u_11), t_3), term_r_11);
        {
          ATerm s_2 (ATerm t)
          {
            t = term_s_10;
            t = table_getlist_0_0(t);
            {
              ATerm u_2 (ATerm t)
              {
                t = term_v_11;
                return(t);
              }
              t = debug_1_0(u_2, t);
            }
            return(t);
          }
          t = if_verbose5_1_0(s_2, t);
          _fail(t);
        }
      }
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm w_3 = NULL,x_3 = NULL,y_3 = NULL;
  ATerm w_11 = t;
  int x_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_3 = NULL;
      z_3 = t;
      t = (ATerm) ATmakeAppl(sym__2, z_3, term_y_11);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(x_11);
    }
  else
    {
      t = w_11;
      {
        ATerm w_2 (ATerm t)
        {
          t = term_c_12;
          return(t);
        }
        t = debug_1_0(w_2, t);
        _fail(t);
      }
    }
  w_3 = t;
  if(match_cons(t, sym_Stream_1))
    {
      y_3 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(y_3);
  x_3 = t;
  t = w_3;
  t = fclose_0_0(t);
  t = x_3;
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm f_4 = NULL,g_4 = NULL;
  f_4 = t;
  if(match_cons(t, sym_stdin_0))
    {
      t = f_4;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_FILE_1))
        {
          g_4 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSL_access(g_4, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_F__OK_0)));
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm f_5 (ATerm r_4, ATerm t)
  {
    t = SSL_fclose(r_4);
    return(t);
  }
  ATerm w_4 = NULL,x_4 = NULL;
  x_4 = t;
  if(match_cons(t, sym_Stream_1))
    {
      w_4 = ATgetArgument(t, 0);
      {
        ATerm d_12 = t;
        int e_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(w_4);
            ;
            LocalPopChoice(e_12);
          }
        else
          {
            t = d_12;
            t = f_5(x_4, t);
          }
      }
    }
  else
    {
      t = f_5(x_4, t);
    }
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm g_5 = NULL;
  t = SSL_stdin_stream();
  g_5 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, g_5);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm i_5 = NULL;
  t = SSL_stdout_stream();
  i_5 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, i_5);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm j_5 = NULL;
  t = SSL_stderr_stream();
  j_5 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, j_5);
  return(t);
}
ATerm stdio_stream_0_0 (ATerm t)
{
  ATerm o_5 = NULL;
  o_5 = t;
  if(match_cons(t, sym_stderr_0))
    {
      t = o_5;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = o_5;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = o_5;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm f_12 = ATgetArgument(t, 0);
      ATerm g_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm m_12 = t;
    int n_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_3 = NULL,m_3 = NULL;
        j_3 = t;
        t = SSL_explode_term(j_3);
        if(match_cons(t, sym__2))
          {
            ATerm r_12 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) r_12) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm s_12 = ATgetArgument(t, 1);
              if(((ATgetType(s_12) == AT_LIST) && !(ATisEmpty(s_12))))
                {
                  m_3 = ATgetFirst((ATermList) s_12);
                  {
                    ATerm t_12 = (ATerm) ATgetNext((ATermList) s_12);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = m_3;
        t = stdio_stream_0_0(t);
        ;
        LocalPopChoice(n_12);
      }
    else
      {
        t = m_12;
        {
          ATerm u_12 = t;
          int v_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm t_5 = NULL,u_5 = NULL,w_5 = NULL;
              ATerm x_2 (ATerm t)
              {
                ATerm x_5 = NULL;
                if(match_cons(t, sym_Path_1))
                  {
                    x_5 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = x_5;
                return(t);
              }
              t = _2_0(x_2, _id, t);
              if(match_cons(t, sym__2))
                {
                  t_5 = ATgetArgument(t, 0);
                  u_5 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_fopen(t_5, u_5);
              w_5 = t;
              t = (ATerm) ATmakeAppl(sym_Stream_1, w_5);
              ;
              LocalPopChoice(v_12);
            }
          else
            {
              t = u_12;
              {
                ATerm a_6 = NULL,b_6 = NULL,f_6 = NULL;
                ATerm y_2 (ATerm t)
                {
                  ATerm g_6 = NULL;
                  g_6 = t;
                  t = SSL_is_string(g_6);
                  return(t);
                }
                t = _2_0(y_2, _id, t);
                if(match_cons(t, sym__2))
                  {
                    a_6 = ATgetArgument(t, 0);
                    b_6 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_fopen(a_6, b_6);
                f_6 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, f_6);
              }
            }
        }
      }
  }
  return(t);
}
ATerm WriteToFile_1_0 (ATerm r_65 (ATerm), ATerm t)
{
  ATerm h_6 = NULL,i_6 = NULL,y_6 = NULL;
  if(match_cons(t, sym__2))
    {
      h_6 = ATgetArgument(t, 0);
      i_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, h_6, term_a_13);
  t = open_stream_0_0(t);
  y_6 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_6, i_6);
  t = r_65(t);
  t = fclose_0_0(t);
  t = i_6;
  return(t);
}
ATerm WriteToBinaryFile_0_0 (ATerm t)
{
  ATerm z_2 (ATerm t)
  {
    ATerm z_6 = NULL,a_7 = NULL,c_7 = NULL;
    if(match_cons(t, sym__2))
      {
        ATerm e_13 = ATgetArgument(t, 0);
        if(match_cons(e_13, sym_Stream_1))
          {
            z_6 = ATgetArgument(e_13, 0);
          }
        else
          _fail(t);
        a_7 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSL_write_term_to_stream_baf(z_6, a_7);
    c_7 = t;
    t = (ATerm) ATmakeAppl(sym_Stream_1, c_7);
    return(t);
  }
  t = WriteToFile_1_0(z_2, t);
  return(t);
}
ATerm write_to_0_0 (ATerm t)
{
  ATerm d_7 = NULL,i_7 = NULL;
  d_7 = t;
  t = xtc_new_file_0_0(t);
  i_7 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_7, d_7);
  t = WriteToBinaryFile_0_0(t);
  t = SSL_close_file(i_7);
  t = (ATerm) ATmakeAppl(sym_FILE_1, i_7);
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm a_84 (ATerm), ATerm b_84 (ATerm), ATerm t)
{
  t = write_to_0_0(t);
  t = xtc_transform_file_2_0(a_84, b_84, t);
  t = read_from_0_0(t);
  return(t);
}
ATerm concat_strings_0_0 (ATerm t)
{
  ATerm j_7 = NULL;
  ATerm d_3 (ATerm t)
  {
    ATerm k_7 = NULL;
    k_7 = t;
    t = SSL_explode_string(k_7);
    return(t);
  }
  t = map_1_0(d_3, t);
  t = concat_0_0(t);
  j_7 = t;
  t = SSL_implode_string(j_7);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm e_8 = NULL,f_8 = NULL,j_8 = NULL,k_8 = NULL;
  e_8 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      f_8 = ATgetArgument(t, 0);
      {
        ATerm a_4 = NULL;
        t = SSL_int_to_string(f_8);
        a_4 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_l_13), a_4), term_i_13);
        t = concat_strings_0_0(t);
      }
    }
  else
    {
      ATerm m_4 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          f_8 = ATgetArgument(t, 0);
          j_8 = ATgetArgument(t, 1);
          k_8 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(j_8);
      m_4 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, k_8), term_o_13), m_4), term_m_13), f_8);
      t = concat_strings_0_0(t);
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm x_69 (ATerm), ATerm t)
{
  ATerm o_8 = NULL;
  ATerm l_3 (ATerm t)
  {
    t = x_69(t);
    if(((o_8 != NULL) && (o_8 != t)))
      _fail(t);
    else
      o_8 = t;
    return(t);
  }
  t = fetch_1_0(l_3, t);
  t = not_null(o_8);
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm p_8 = NULL;
  p_8 = t;
  {
    ATerm p_13 = t;
    int r_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_l_21), term_h_21), term_d_21), term_z_20), term_w_20), term_s_20), term_n_20), term_i_20), term_b_20), term_t_19), term_p_19), term_a_19), term_v_18), term_l_18), term_c_18), term_x_17), term_n_17), term_z_16), term_t_16), term_p_16), term_d_16), term_t_15), term_l_15), term_f_15), term_y_14), term_v_14), term_l_14), term_z_13);
        {
          ATerm r_3 (ATerm t)
          {
            if(match_cons(t, sym_Signal_3))
              {
                ATerm m_21 = ATgetArgument(t, 0);
                if((p_8 != ATgetArgument(t, 1)))
                  {
                    _fail(ATgetArgument(t, 1));
                  }
                {
                  ATerm n_21 = ATgetArgument(t, 2);
                }
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_elem_1_0(r_3, t);
        }
        ;
        LocalPopChoice(r_13);
      }
    else
      {
        t = p_13;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, p_8);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm t_8 = NULL;
  t_8 = t;
  {
    ATerm s_3 (ATerm t)
    {
      ATerm u_8 = NULL,v_8 = NULL;
      if(match_cons(t, sym_WaitStatus_3))
        {
          ATerm o_21 = ATgetArgument(t, 0);
          u_8 = ATgetArgument(t, 1);
          {
            ATerm p_21 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = u_8;
      {
        ATerm q_21 = t;
        if((PushChoice() == 0))
          {
            if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
              _fail(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = q_21;
          }
        t = signal_from_number_0_0(t);
        t = signal_to_descr_0_0(t);
        v_8 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, v_8), (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue))));
        t = (ATerm) ATmakeAppl(sym__2, term_r_21, (ATerm) ATinsert(ATinsert(ATempty, v_8), term_s_21));
      }
      return(t);
    }
    t = try_1_0(s_3, t);
    t = t_8;
  }
  return(t);
}
ATerm fork_0_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_2_0 (ATerm e_64 (ATerm), ATerm f_64 (ATerm), ATerm t)
{
  ATerm x_8 = NULL,b_9 = NULL;
  x_8 = t;
  t = fork_0_0(t);
  b_9 = t;
  {
    ATerm t_21 = t;
    int u_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = x_8;
        t = e_64(t);
        ;
        LocalPopChoice(u_21);
      }
    else
      {
        t = t_21;
        t = (ATerm) ATmakeAppl(sym__2, b_9, x_8);
        t = f_64(t);
      }
  }
  return(t);
}
ATerm fork_and_wait_1_0 (ATerm g_64 (ATerm), ATerm t)
{
  ATerm d_9 = NULL;
  ATerm u_3 (ATerm t)
  {
    ATerm e_9 = NULL;
    if(match_cons(t, sym__2))
      {
        e_9 = ATgetArgument(t, 0);
        if(((d_9 != NULL) && (d_9 != ATgetArgument(t, 1))))
          _fail(ATgetArgument(t, 1));
        else
          d_9 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSL_waitpid(e_9);
    t = warn_ifsignaled_0_0(t);
    if(match_cons(t, sym_WaitStatus_3))
      {
        ATerm v_21 = ATgetArgument(t, 0);
        if(((ATgetType(v_21) != AT_INT) || (ATgetInt((ATermInt) v_21) != 0)))
          _fail(t);
        {
          ATerm w_21 = ATgetArgument(t, 1);
        }
        {
          ATerm x_21 = ATgetArgument(t, 2);
        }
      }
    else
      _fail(t);
    t = not_null(d_9);
    return(t);
  }
  t = fork_2_0(g_64, u_3, t);
  return(t);
}
ATerm call_0_0 (ATerm t)
{
  ATerm g_9 = NULL,i_9 = NULL;
  if(match_cons(t, sym__2))
    {
      g_9 = ATgetArgument(t, 0);
      i_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm v_3 (ATerm t)
    {
      t = SSL_execvp(g_9, i_9);
      return(t);
    }
    t = fork_and_wait_1_0(v_3, t);
  }
  return(t);
}
ATerm xtc_find_warning_0_0 (ATerm t)
{
  t = xtc_find_0_0(t);
  return(t);
}
ATerm xtc_command_1_0 (ATerm r_83 (ATerm), ATerm t)
{
  ATerm j_9 = NULL,k_9 = NULL;
  j_9 = t;
  t = r_83(t);
  t = xtc_find_warning_0_0(t);
  k_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_9, j_9);
  t = call_0_0(t);
  t = j_9;
  return(t);
}
ATerm assert_1_0 (ATerm c_80 (ATerm), ATerm t)
{
  ATerm l_9 = NULL,m_9 = NULL,n_9 = NULL,o_9 = NULL,p_9 = NULL;
  if(match_cons(t, sym__2))
    {
      l_9 = ATgetArgument(t, 0);
      m_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_80(t);
  n_9 = t;
  t = (ATerm) ATmakeAppl(sym__3, n_9, l_9, m_9);
  t = table_push_0_0(t);
  {
    ATerm y_21 = t;
    int z_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get(n_9, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(z_21);
      }
    else
      {
        t = y_21;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        o_9 = ATgetFirst((ATermList) t);
        p_9 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSL_table_put(n_9, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATinsert(CheckATermList(p_9), (ATerm) ATinsert(CheckATermList(o_9), l_9)));
    t = (ATerm) ATmakeAppl(sym__2, l_9, m_9);
  }
  return(t);
}
ATerm obsolete_1_0 (ATerm k_65 (ATerm), ATerm t)
{
  ATerm q_9 = NULL;
  q_9 = t;
  t = k_65(t);
  {
    ATerm b_4 (ATerm t)
    {
      t = term_a_22;
      return(t);
    }
    t = debug_1_0(b_4, t);
    t = q_9;
  }
  return(t);
}
ATerm open_file_0_0 (ATerm t)
{
  ATerm e_10 (ATerm u_9, ATerm t)
  {
    t = u_9;
    {
      ATerm b_22 = t;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym__2))
            {
              ATerm c_22 = ATgetArgument(t, 0);
              ATerm d_22 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = b_22;
        }
      {
        ATerm c_4 (ATerm t)
        {
          t = term_e_22;
          return(t);
        }
        t = obsolete_1_0(c_4, t);
        t = (ATerm) ATmakeAppl(sym__2, u_9, term_a_13);
        t = open_file_0_0(t);
      }
    }
    return(t);
  }
  ATerm f_10 (ATerm w_9, ATerm x_9, ATerm y_9, ATerm t)
  {
    t = SSL_open_file(w_9, x_9);
    return(t);
  }
  ATerm b_10 = NULL,c_10 = NULL,d_10 = NULL;
  b_10 = t;
  if(match_cons(t, sym__2))
    {
      c_10 = ATgetArgument(t, 0);
      d_10 = ATgetArgument(t, 1);
      {
        ATerm f_22 = t;
        int g_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = e_10(b_10, t);
            ;
            LocalPopChoice(g_22);
          }
        else
          {
            t = f_22;
            t = f_10(c_10, d_10, b_10, t);
          }
      }
    }
  else
    {
      t = e_10(b_10, t);
    }
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm new_file_0_0 (ATerm t)
{
  ATerm h_10 = NULL;
  t = term_h_22;
  t = new_0_0(t);
  h_10 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_10, term_i_22);
  t = conc_strings_0_0(t);
  {
    ATerm d_4 (ATerm t)
    {
      ATerm v_4 = NULL;
      v_4 = t;
      t = SSL_access(v_4, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_F__OK_0)));
      t = new_file_0_0(t);
      return(t);
    }
    t = try_1_0(d_4, t);
  }
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm j_10 = NULL;
  t = new_file_0_0(t);
  j_10 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_10, term_a_13);
  t = open_file_0_0(t);
  t = (ATerm) ATmakeAppl(sym__2, j_10, term_h_22);
  {
    ATerm e_4 (ATerm t)
    {
      t = term_j_22;
      return(t);
    }
    t = assert_1_0(e_4, t);
    t = j_10;
  }
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm t)
{
  ATerm v_10 = NULL,w_10 = NULL;
  v_10 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm z_4 = NULL,a_5 = NULL;
      t = v_10;
      t = xtc_new_file_0_0(t);
      z_4 = t;
      t = m_0(t);
      a_5 = t;
      t = (ATerm) ATmakeAppl(sym__2, a_5, (ATerm) ATinsert(ATinsert(ATempty, z_4), term_k_22));
      t = conc_0_0(t);
      t = xtc_command_1_0(l_0, t);
      t = SSL_close_file(z_4);
      t = (ATerm) ATmakeAppl(sym_FILE_1, z_4);
    }
  else
    {
      ATerm h_5 = NULL,k_5 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          w_10 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = w_10;
      t = xtc_new_file_0_0(t);
      h_5 = t;
      t = m_0(t);
      k_5 = t;
      t = (ATerm) ATmakeAppl(sym__2, k_5, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, h_5), term_k_22), w_10), term_l_22));
      t = conc_0_0(t);
      t = xtc_command_1_0(l_0, t);
      t = SSL_close_file(h_5);
      t = (ATerm) ATmakeAppl(sym_FILE_1, h_5);
    }
  return(t);
}
ATerm FILE_1_0 (ATerm b_62 (ATerm), ATerm t)
{
  ATerm z_10 = NULL,a_11 = NULL,b_11 = NULL,c_11 = NULL;
  c_11 = t;
  if(match_cons(t, sym_FILE_1))
    {
      a_11 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_11);
  z_10 = t;
  t = a_11;
  t = b_62(t);
  b_11 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FILE_1, b_11), z_10);
  return(t);
}
ATerm xtc_transform_2_0 (ATerm t_83 (ATerm), ATerm u_83 (ATerm), ATerm t)
{
  ATerm m_22 = t;
  int n_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_22 = t;
      int p_22 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = FILE_1_0(_id, t);
          ;
          LocalPopChoice(p_22);
        }
      else
        {
          t = o_22;
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
        }
      LocalPopChoice(n_22);
      t = xtc_transform_file_2_0(t_83, u_83, t);
    }
  else
    {
      t = m_22;
      t = xtc_transform_term_2_0(t_83, u_83, t);
    }
  return(t);
}
ATerm copy_to_1_0 (ATerm k_0 (ATerm), ATerm t)
{
  ATerm s_11 = NULL,t_11 = NULL;
  s_11 = t;
  if(match_cons(t, sym_FILE_1))
    {
      t_11 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm q_22 = t;
    int r_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_5 = NULL;
        t = s_11;
        t = k_0(t);
        q_5 = t;
        {
          ATerm s_22 = t;
          int t_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(!(match_cons(t, sym_stdout_0)))
                _fail(t);
              ;
              LocalPopChoice(t_22);
            }
          else
            {
              t = s_22;
              if(!(match_cons(t, sym_stderr_0)))
                _fail(t);
            }
          t = SSL_copy(t_11, q_5);
          t = (ATerm) ATmakeAppl(sym_FILE_1, t_11);
        }
        ;
        LocalPopChoice(r_22);
      }
    else
      {
        t = q_22;
        {
          ATerm u_22 = t;
          int v_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm z_5 = NULL;
              t = s_11;
              t = k_0(t);
              z_5 = t;
              {
                ATerm w_22 = t;
                if((PushChoice() == 0))
                  {
                    ATerm x_22 = t;
                    int y_22 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(!(match_cons(t, sym_stdout_0)))
                          _fail(t);
                        ;
                        LocalPopChoice(y_22);
                      }
                    else
                      {
                        t = x_22;
                        {
                          ATerm z_22 = t;
                          int a_23 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              if(!(match_cons(t, sym_stderr_0)))
                                _fail(t);
                              ;
                              LocalPopChoice(a_23);
                            }
                          else
                            {
                              t = z_22;
                              {
                                ATerm c_6 = NULL;
                                c_6 = t;
                                if((t_11 != t))
                                  {
                                    _fail(t);
                                  }
                                t = c_6;
                              }
                            }
                        }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = w_22;
                  }
                t = SSL_copy(t_11, z_5);
                t = (ATerm) ATmakeAppl(sym_FILE_1, t_11);
              }
              ;
              LocalPopChoice(v_22);
            }
          else
            {
              t = u_22;
              t = s_11;
              t = k_0(t);
              if((t_11 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, t_11);
            }
        }
      }
  }
  return(t);
}
ATerm table_pop_0_0 (ATerm t)
{
  ATerm z_11 = NULL,a_12 = NULL,b_12 = NULL;
  if(match_cons(t, sym__2))
    {
      z_11 = ATgetArgument(t, 0);
      a_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm b_23 = t;
    int c_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_6 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm d_23 = ATgetArgument(t, 0);
            ATerm e_23 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(z_11, a_12);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm f_23 = ATgetFirst((ATermList) t);
            e_6 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = e_6;
        ;
        LocalPopChoice(c_23);
      }
    else
      {
        t = b_23;
        t = (ATerm) ATempty;
      }
    b_12 = t;
    t = SSL_table_put(z_11, a_12, b_12);
    t = (ATerm) ATmakeAppl(sym__2, z_11, a_12);
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm z_79 (ATerm), ATerm t)
{
  ATerm h_12 = NULL,i_12 = NULL,j_12 = NULL,k_12 = NULL;
  h_12 = t;
  t = z_79(t);
  i_12 = t;
  {
    ATerm g_23 = t;
    int h_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get(i_12, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(h_23);
      }
    else
      {
        t = g_23;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        k_12 = ATgetFirst((ATermList) t);
        j_12 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSL_table_put(i_12, (ATerm)ATmakeAppl(sym_Scopes_0), j_12);
    t = k_12;
    {
      ATerm h_4 (ATerm t)
      {
        ATerm l_12 = NULL;
        l_12 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_12, l_12);
        t = table_pop_0_0(t);
        return(t);
      }
      t = map_1_0(h_4, t);
      t = h_12;
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm u_80 (ATerm), ATerm v_80 (ATerm), ATerm t)
{
  ATerm i_23 = t;
  int j_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = u_80(t);
      t = v_80(t);
      ;
      LocalPopChoice(j_23);
    }
  else
    {
      t = i_23;
      t = v_80(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm y_79 (ATerm), ATerm t)
{
  ATerm o_12 = NULL,p_12 = NULL,q_12 = NULL;
  o_12 = t;
  t = y_79(t);
  p_12 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_12, term_k_23);
  {
    ATerm l_23 = t;
    int m_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm n_23 = ATgetArgument(t, 0);
            ATerm o_23 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(p_12, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(m_23);
      }
    else
      {
        t = l_23;
        t = (ATerm) ATempty;
      }
    q_12 = t;
    t = SSL_table_put(p_12, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATinsert(CheckATermList(q_12), (ATerm) ATempty));
    t = o_12;
  }
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm d_83 (ATerm), ATerm t)
{
  ATerm w_12 = NULL;
  ATerm i_4 (ATerm t)
  {
    t = term_j_22;
    return(t);
  }
  t = begin_scope_1_0(i_4, t);
  {
    ATerm j_4 (ATerm t)
    {
      ATerm x_12 = NULL;
      x_12 = t;
      {
        ATerm p_23 = t;
        int q_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_table_get((ATerm)ATmakeAppl(sym_TempFiles_0), (ATerm) ATmakeAppl(sym_Scopes_0));
            ;
            LocalPopChoice(q_23);
          }
        else
          {
            t = p_23;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
          }
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            if(((w_12 != NULL) && (w_12 != ATgetFirst((ATermList) t))))
              _fail(ATgetFirst((ATermList) t));
            else
              w_12 = ATgetFirst((ATermList) t);
            {
              ATerm r_23 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        t = not_null(w_12);
        {
          ATerm k_4 (ATerm t)
          {
            ATerm l_4 (ATerm t)
            {
              ATerm y_12 = NULL;
              y_12 = t;
              t = SSL_remove(y_12);
              return(t);
            }
            t = try_1_0(l_4, t);
            return(t);
          }
          t = map_1_0(k_4, t);
          t = x_12;
          {
            ATerm n_4 (ATerm t)
            {
              t = term_j_22;
              return(t);
            }
            t = end_scope_1_0(n_4, t);
          }
        }
      }
      return(t);
    }
    t = restore_always_2_0(d_83, j_4, t);
  }
  return(t);
}
ATerm xtc_io_1_0 (ATerm e_83 (ATerm), ATerm t)
{
  ATerm o_4 (ATerm t)
  {
    ATerm s_23 = t;
    int t_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_12 = NULL;
        t = term_l_22;
        t = get_config_0_0(t);
        z_12 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, z_12);
        ;
        LocalPopChoice(t_23);
      }
    else
      {
        t = s_23;
        t = term_u_23;
      }
    t = e_83(t);
    {
      ATerm p_4 (ATerm t)
      {
        ATerm v_23 = t;
        int w_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_k_22;
            t = get_config_0_0(t);
            ;
            LocalPopChoice(w_23);
          }
        else
          {
            t = v_23;
            t = term_x_23;
          }
        return(t);
      }
      t = copy_to_1_0(p_4, t);
    }
    return(t);
  }
  t = xtc_temp_files_1_0(o_4, t);
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  ATerm q_4 (ATerm t)
  {
    ATerm b_13 = NULL;
    b_13 = t;
    if(match_string(t, "-k"))
      {
        t = b_13;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
          _fail(t);
        t = b_13;
      }
    return(t);
  }
  ATerm s_4 (ATerm t)
  {
    ATerm c_13 = NULL,d_13 = NULL;
    c_13 = t;
    t = SSL_string_to_int(c_13);
    d_13 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)), d_13);
    t = c_13;
    return(t);
  }
  ATerm t_4 (ATerm t)
  {
    t = term_y_23;
    return(t);
  }
  t = ArgOption_3_0(q_4, s_4, t_4, t);
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm z_23 = t;
  int a_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_4 (ATerm t)
      {
        ATerm f_13 = NULL;
        f_13 = t;
        if(match_string(t, "-S"))
          {
            t = f_13;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
              _fail(t);
            t = f_13;
          }
        return(t);
      }
      ATerm y_4 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), (ATerm) ATmakeInt(0));
        t = term_c_24;
        return(t);
      }
      ATerm b_5 (ATerm t)
      {
        t = term_d_24;
        return(t);
      }
      t = Option_3_0(u_4, y_4, b_5, t);
      ;
      LocalPopChoice(a_24);
    }
  else
    {
      t = z_23;
      {
        ATerm e_24 = t;
        int f_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_5 (ATerm t)
            {
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
                _fail(t);
              return(t);
            }
            ATerm d_5 (ATerm t)
            {
              ATerm g_13 = NULL,h_13 = NULL;
              g_13 = t;
              t = SSL_string_to_int(g_13);
              h_13 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), h_13);
              t = (ATerm) ATmakeAppl(sym_Verbose_1, g_13);
              return(t);
            }
            ATerm e_5 (ATerm t)
            {
              t = term_g_24;
              return(t);
            }
            t = ArgOption_3_0(c_5, d_5, e_5, t);
            ;
            LocalPopChoice(f_24);
          }
        else
          {
            t = e_24;
            {
              ATerm l_5 (ATerm t)
              {
                if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
                  _fail(t);
                return(t);
              }
              ATerm m_5 (ATerm t)
              {
                t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                t = term_h_24;
                return(t);
              }
              ATerm n_5 (ATerm t)
              {
                t = term_i_24;
                return(t);
              }
              t = Option_3_0(l_5, m_5, n_5, t);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0_0 (ATerm t)
{
  ATerm j_24 = t;
  int k_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0_0(t);
      ;
      LocalPopChoice(k_24);
    }
  else
    {
      t = j_24;
      t = keep_option_0_0(t);
    }
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  ATerm p_5 (ATerm t)
  {
    ATerm j_13 = NULL;
    j_13 = t;
    if(match_string(t, "-o"))
      {
        t = j_13;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
          _fail(t);
        t = j_13;
      }
    return(t);
  }
  ATerm r_5 (ATerm t)
  {
    ATerm k_13 = NULL;
    k_13 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), k_13);
    t = (ATerm) ATmakeAppl(sym_Output_1, k_13);
    return(t);
  }
  ATerm s_5 (ATerm t)
  {
    t = term_l_24;
    return(t);
  }
  t = ArgOption_3_0(p_5, r_5, s_5, t);
  return(t);
}
ATerm aterm_output_option_0_0 (ATerm t)
{
  ATerm m_24 = t;
  int n_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0_0(t);
      ;
      LocalPopChoice(n_24);
    }
  else
    {
      t = m_24;
      {
        ATerm v_5 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm y_5 (ATerm t)
        {
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = term_o_24;
          return(t);
        }
        ATerm d_6 (ATerm t)
        {
          t = term_p_24;
          return(t);
        }
        t = Option_3_0(v_5, y_5, d_6, t);
      }
    }
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm n_13 = NULL,q_13 = NULL,s_13 = NULL,t_13 = NULL,u_13 = NULL;
  n_13 = t;
  if(match_string(t, "register-usage-info"))
    {
      t = n_13;
      t = register_usage_1_0(j_0, t);
    }
  else
    {
      ATerm a_14 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          q_13 = ATgetFirst((ATermList) t);
          s_13 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = s_13;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          t_13 = ATgetFirst((ATermList) t);
          u_13 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = q_13;
      t = h_0(t);
      t = t_13;
      t = i_0(t);
      a_14 = t;
      t = (ATerm) ATinsert(CheckATermList(u_13), a_14);
    }
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  ATerm j_6 (ATerm t)
  {
    ATerm c_14 = NULL;
    c_14 = t;
    if(match_string(t, "-i"))
      {
        t = c_14;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
          _fail(t);
        t = c_14;
      }
    return(t);
  }
  ATerm k_6 (ATerm t)
  {
    ATerm d_14 = NULL;
    d_14 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), d_14);
    t = (ATerm) ATmakeAppl(sym_Input_1, d_14);
    return(t);
  }
  ATerm l_6 (ATerm t)
  {
    t = term_q_24;
    return(t);
  }
  t = ArgOption_3_0(j_6, k_6, l_6, t);
  return(t);
}
ATerm io_options_0_0 (ATerm t)
{
  ATerm r_24 = t;
  int s_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      ;
      LocalPopChoice(s_24);
    }
  else
    {
      t = r_24;
      {
        ATerm t_24 = t;
        int u_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0_0(t);
            ;
            LocalPopChoice(u_24);
          }
        else
          {
            t = t_24;
            t = general_options_0_0(t);
          }
      }
    }
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm e_14 = NULL,f_14 = NULL;
  e_14 = t;
  t = term_h_22;
  t = whoami_0_0(t);
  f_14 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue))), f_14), (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue))));
  t = SSL_exit((ATerm) ATmakeInt(1));
  t = e_14;
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm g_14 = NULL;
  t = report_run_time_0_0(t);
  t = term_h_22;
  t = whoami_0_0(t);
  g_14 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue))), g_14));
  t = SSL_exit((ATerm) ATmakeInt(1));
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_v_24;
  t = get_config_0_0(t);
  return(t);
}
ATerm foldr_2_0 (ATerm b_76 (ATerm), ATerm c_76 (ATerm), ATerm t)
{
  ATerm w_24 = t;
  int x_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = b_76(t);
      ;
      LocalPopChoice(x_24);
    }
  else
    {
      t = w_24;
      {
        ATerm j_14 = NULL,k_14 = NULL,n_14 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            j_14 = ATgetFirst((ATermList) t);
            k_14 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = k_14;
        t = foldr_2_0(b_76, c_76, t);
        n_14 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_14, n_14);
        t = c_76(t);
      }
    }
  return(t);
}
ATerm crush_2_0 (ATerm z_73 (ATerm), ATerm a_74 (ATerm), ATerm t)
{
  ATerm o_14 = NULL,p_14 = NULL;
  o_14 = t;
  t = SSL_explode_term(o_14);
  if(match_cons(t, sym__2))
    {
      ATerm y_24 = ATgetArgument(t, 0);
      p_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_14;
  t = foldr_2_0(z_73, a_74, t);
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm q_14 = NULL;
  t = times_0_0(t);
  {
    ATerm m_6 (ATerm t)
    {
      t = term_b_24;
      return(t);
    }
    ATerm n_6 (ATerm t)
    {
      ATerm r_14 = NULL,s_14 = NULL;
      if(match_cons(t, sym__2))
        {
          r_14 = ATgetArgument(t, 0);
          s_14 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm z_24 = t;
        int a_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(r_14, s_14);
            ;
            LocalPopChoice(a_25);
          }
        else
          {
            t = z_24;
            t = SSL_addr(r_14, s_14);
          }
      }
      return(t);
    }
    t = crush_2_0(m_6, n_6, t);
    q_14 = t;
    t = SSL_TicksToSeconds(q_14);
  }
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm b_15 = NULL,c_15 = NULL,e_15 = NULL;
  b_15 = t;
  if(match_cons(t, sym__2))
    {
      c_15 = ATgetArgument(t, 0);
      e_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm b_25 = t;
    int c_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_15;
        if((c_15 != t))
          {
            _fail(t);
          }
        t = b_15;
        ;
        LocalPopChoice(c_25);
      }
    else
      {
        t = b_25;
        t = b_15;
        {
          ATerm d_25 = t;
          int e_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(c_15, e_15);
              ;
              LocalPopChoice(e_25);
            }
          else
            {
              t = d_25;
              t = SSL_gtr(c_15, e_15);
            }
          t = (ATerm) ATmakeAppl(sym__2, c_15, e_15);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm z_80 (ATerm), ATerm t)
{
  ATerm o_6 (ATerm t)
  {
    ATerm j_15 = NULL,k_15 = NULL;
    j_15 = t;
    t = term_l_8;
    t = get_config_0_0(t);
    k_15 = t;
    t = (ATerm) ATmakeAppl(sym__2, k_15, term_x_13);
    t = geq_0_0(t);
    t = j_15;
    t = z_80(t);
    return(t);
  }
  t = try_1_0(o_6, t);
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  ATerm p_6 (ATerm t)
  {
    ATerm m_15 = NULL,n_15 = NULL;
    t = run_time_0_0(t);
    m_15 = t;
    t = term_h_22;
    t = whoami_0_0(t);
    n_15 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue))), m_15), (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue))), n_15));
    t = (ATerm) ATmakeAppl(sym__2, term_r_21, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_f_25), m_15), term_m_13), n_15));
    return(t);
  }
  t = if_verbose1_1_0(p_6, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  t = report_run_time_0_0(t);
  t = SSL_exit((ATerm) ATmakeInt(0));
  return(t);
}
ATerm need_help_1_0 (ATerm f_85 (ATerm), ATerm t)
{
  ATerm g_25 = t;
  int h_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_i_25;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(h_25);
    }
  else
    {
      t = g_25;
      {
        ATerm q_6 (ATerm t)
        {
          ATerm j_25 = t;
          int k_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(!(match_cons(t, sym_Help_0)))
                _fail(t);
              ;
              LocalPopChoice(k_25);
            }
          else
            {
              t = j_25;
              {
                ATerm l_25 = t;
                int m_25 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Undefined_1_0(_id, t);
                    ;
                    LocalPopChoice(m_25);
                  }
                else
                  {
                    t = l_25;
                    if(!(match_cons(t, sym_Version_0)))
                      _fail(t);
                  }
              }
            }
          return(t);
        }
        t = option_defined_1_0(q_6, t);
      }
    }
  t = f_85(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm r_15 = NULL,s_15 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_15 = ATgetFirst((ATermList) t);
      s_15 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm w_15 = NULL,x_15 = NULL;
        t = s_15;
        t = g_0(t);
        w_15 = t;
        t = r_15;
        t = e_0(t);
        x_15 = t;
        t = s_15;
        {
          ATerm r_6 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(w_15), x_15);
            return(t);
          }
          t = reverse_acc_2_0(e_0, r_6, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_h_22;
      t = g_0(t);
    }
  return(t);
}
ATerm reverse_0_0 (ATerm t)
{
  ATerm s_6 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2_0(_id, s_6, t);
  return(t);
}
ATerm Program_1_0 (ATerm i_62 (ATerm), ATerm t)
{
  ATerm y_15 = NULL,z_15 = NULL,a_16 = NULL,b_16 = NULL;
  b_16 = t;
  if(match_cons(t, sym_Program_1))
    {
      z_15 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_16);
  y_15 = t;
  t = z_15;
  t = i_62(t);
  a_16 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, a_16), y_15);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm n_25 = t;
  int o_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_v_24;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(o_25);
    }
  else
    {
      t = n_25;
      {
        ATerm t_6 (ATerm t)
        {
          t = Program_1_0(_id, t);
          return(t);
        }
        t = option_defined_1_0(t_6, t);
      }
    }
  t = try_1_0(_fail, t);
  t = term_p_25;
  t = echo_0_0(t);
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)));
  t = reverse_0_0(t);
  {
    ATerm u_6 (ATerm t)
    {
      ATerm e_16 = NULL;
      e_16 = t;
      t = (ATerm) ATinsert(ATinsert(ATempty, e_16), term_q_25);
      t = echo_0_0(t);
      return(t);
    }
    t = map_1_0(u_6, t);
    t = try_1_0(_fail, t);
  }
  return(t);
}
ATerm system_usage_0_0 (ATerm t)
{
  t = default_system_usage_0_0(t);
  return(t);
}
ATerm Undefined_1_0 (ATerm j_62 (ATerm), ATerm t)
{
  ATerm f_16 = NULL,g_16 = NULL,h_16 = NULL,i_16 = NULL;
  i_16 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      g_16 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_16);
  f_16 = t;
  t = g_16;
  t = j_62(t);
  h_16 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, h_16), f_16);
  return(t);
}
ATerm fetch_1_0 (ATerm v_69 (ATerm), ATerm t)
{
  ATerm l_16 (ATerm t)
  {
    ATerm r_25 = t;
    int s_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(v_69, _id, t);
        ;
        LocalPopChoice(s_25);
      }
    else
      {
        t = r_25;
        t = Cons_2_0(_id, l_16, t);
      }
    return(t);
  }
  t = l_16(t);
  return(t);
}
ATerm option_defined_1_0 (ATerm a_86 (ATerm), ATerm t)
{
  t = fetch_1_0(a_86, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm n_16 = NULL,o_16 = NULL;
  n_16 = t;
  {
    ATerm t_25 = t;
    int u_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = n_16;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm v_25 = ATgetFirst((ATermList) t);
                ATerm w_25 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = n_16;
          }
        ;
        LocalPopChoice(u_25);
      }
    else
      {
        t = t_25;
        t = (ATerm) ATinsert(ATempty, n_16);
      }
    o_16 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stdout_0), o_16);
    t = n_16;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_v_24;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm system_about_0_0 (ATerm t)
{
  t = default_system_about_0_0(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm x_25 = t;
  int y_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(y_25);
    }
  else
    {
      t = x_25;
      {
        ATerm u_16 = NULL,v_16 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            u_16 = ATgetFirst((ATermList) t);
            v_16 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = u_16;
        {
          ATerm v_6 (ATerm t)
          {
            t = v_16;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(v_6, t);
        }
      }
    }
  return(t);
}
ATerm conc_more_lists_0_0 (ATerm t)
{
  ATerm b_17 = NULL,c_17 = NULL;
  b_17 = t;
  t = SSL_explode_term(b_17);
  if(match_cons(t, sym__2))
    {
      ATerm z_25 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) z_25) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      c_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_17;
  t = concat_0_0(t);
  return(t);
}
ATerm at_end_1_0 (ATerm b_70 (ATerm), ATerm t)
{
  ATerm d_17 (ATerm t)
  {
    ATerm a_26 = t;
    int b_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, d_17, t);
        ;
        LocalPopChoice(b_26);
      }
    else
      {
        t = a_26;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = b_70(t);
      }
    return(t);
  }
  t = d_17(t);
  return(t);
}
ATerm conc_two_lists_0_0 (ATerm t)
{
  ATerm e_17 = NULL,f_17 = NULL;
  if(match_cons(t, sym__2))
    {
      f_17 = ATgetArgument(t, 0);
      e_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_17;
  {
    ATerm w_6 (ATerm t)
    {
      t = e_17;
      return(t);
    }
    t = at_end_1_0(w_6, t);
  }
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm c_26 = t;
  int d_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0_0(t);
      ;
      LocalPopChoice(d_26);
    }
  else
    {
      t = c_26;
      t = conc_more_lists_0_0(t);
    }
  return(t);
}
ATerm _2_0 (ATerm t_55 (ATerm), ATerm u_55 (ATerm), ATerm t)
{
  ATerm g_17 = NULL,h_17 = NULL,i_17 = NULL,j_17 = NULL,k_17 = NULL,l_17 = NULL;
  l_17 = t;
  if(match_cons(t, sym__2))
    {
      h_17 = ATgetArgument(t, 0);
      i_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_17);
  g_17 = t;
  t = h_17;
  t = t_55(t);
  j_17 = t;
  t = i_17;
  t = u_55(t);
  k_17 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, j_17, k_17), g_17);
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  ATerm o_17 = NULL;
  ATerm x_6 (ATerm t)
  {
    ATerm p_17 = NULL;
    p_17 = t;
    t = SSL_explode_string(p_17);
    return(t);
  }
  ATerm b_7 (ATerm t)
  {
    ATerm q_17 = NULL;
    q_17 = t;
    t = SSL_explode_string(q_17);
    return(t);
  }
  t = _2_0(x_6, b_7, t);
  t = conc_0_0(t);
  o_17 = t;
  t = SSL_implode_string(o_17);
  return(t);
}
ATerm debug_1_0 (ATerm d_65 (ATerm), ATerm t)
{
  ATerm r_17 = NULL,s_17 = NULL;
  r_17 = t;
  t = d_65(t);
  s_17 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, r_17), s_17));
  t = r_17;
  return(t);
}
ATerm map_1_0 (ATerm k_69 (ATerm), ATerm t)
{
  ATerm t_17 (ATerm t)
  {
    ATerm e_26 = t;
    int f_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(f_26);
      }
    else
      {
        t = e_26;
        t = Cons_2_0(k_69, t_17, t);
      }
    return(t);
  }
  t = t_17(t);
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm g_26 = t;
  int h_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_17 = NULL;
      z_17 = t;
      t = SSL_is_string(z_17);
      ;
      LocalPopChoice(h_26);
    }
  else
    {
      t = g_26;
      {
        ATerm i_26 = t;
        int j_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_7 (ATerm t)
            {
              t = try_1_0(eval_config_0_0, t);
              return(t);
            }
            t = map_1_0(e_7, t);
            ;
            LocalPopChoice(j_26);
          }
        else
          {
            t = i_26;
            {
              ATerm d_18 = NULL,e_18 = NULL,f_18 = NULL;
              d_18 = t;
              if(match_cons(t, sym_Path_1))
                {
                  e_18 = ATgetArgument(t, 0);
                  t = e_18;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      e_18 = ATgetArgument(t, 0);
                      t = e_18;
                      {
                        ATerm k_26 = t;
                        int l_26 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(l_26);
                          }
                        else
                          {
                            t = k_26;
                            {
                              ATerm f_7 (ATerm t)
                              {
                                t = term_m_26;
                                return(t);
                              }
                              t = debug_1_0(f_7, t);
                              _fail(t);
                            }
                          }
                      }
                    }
                  else
                    {
                      ATerm j_18 = NULL,k_18 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          e_18 = ATgetArgument(t, 0);
                          f_18 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = e_18;
                      t = eval_config_0_0(t);
                      j_18 = t;
                      t = f_18;
                      t = eval_config_0_0(t);
                      k_18 = t;
                      t = (ATerm) ATmakeAppl(sym__2, j_18, k_18);
                      t = conc_strings_0_0(t);
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
  ATerm n_18 = NULL;
  n_18 = t;
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), n_18);
  {
    ATerm g_7 (ATerm t)
    {
      ATerm o_18 = NULL;
      t = eval_config_0_0(t);
      o_18 = t;
      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), n_18, o_18);
      t = o_18;
      return(t);
    }
    t = try_1_0(g_7, t);
  }
  return(t);
}
ATerm try_1_0 (ATerm f_80 (ATerm), ATerm t)
{
  ATerm n_26 = t;
  int o_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = f_80(t);
      ;
      LocalPopChoice(o_26);
    }
  else
    {
      t = n_26;
    }
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm p_26 = t;
  int q_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_7 (ATerm t)
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
          _fail(t);
        return(t);
      }
      ATerm l_7 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
        t = term_t_26;
        return(t);
      }
      ATerm m_7 (ATerm t)
      {
        t = term_u_26;
        return(t);
      }
      t = Option_3_0(h_7, l_7, m_7, t);
      ;
      LocalPopChoice(q_26);
    }
  else
    {
      t = p_26;
      {
        ATerm n_7 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm o_7 (ATerm t)
        {
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = term_v_26;
          return(t);
        }
        ATerm p_7 (ATerm t)
        {
          t = term_w_26;
          return(t);
        }
        t = Option_3_0(n_7, o_7, p_7, t);
      }
    }
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm r_18 = NULL,s_18 = NULL,t_18 = NULL,u_18 = NULL;
  if(match_cons(t, sym__3))
    {
      r_18 = ATgetArgument(t, 0);
      s_18 = ATgetArgument(t, 1);
      t_18 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, r_18, s_18);
  {
    ATerm x_26 = t;
    int y_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm z_26 = ATgetArgument(t, 0);
            ATerm a_27 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(r_18, s_18);
        ;
        LocalPopChoice(y_26);
      }
    else
      {
        t = x_26;
        t = (ATerm) ATempty;
      }
    u_18 = t;
    t = SSL_table_put(r_18, s_18, (ATerm) ATinsert(CheckATermList(u_18), t_18));
    t = (ATerm) ATmakeAppl(sym__3, r_18, s_18, t_18);
  }
  return(t);
}
ATerm register_usage_1_0 (ATerm f_87 (ATerm), ATerm t)
{
  ATerm z_18 = NULL;
  t = term_h_22;
  t = f_87(t);
  z_18 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_b_27, term_c_27, z_18);
  t = table_push_0_0(t);
  _fail(t);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm b_19 = NULL,c_19 = NULL,d_19 = NULL;
  b_19 = t;
  if(match_string(t, "register-usage-info"))
    {
      t = b_19;
      t = register_usage_1_0(d_0, t);
    }
  else
    {
      ATerm g_19 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          c_19 = ATgetFirst((ATermList) t);
          d_19 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = c_19;
      t = a_0(t);
      t = term_h_22;
      t = c_0(t);
      g_19 = t;
      t = (ATerm) ATinsert(CheckATermList(d_19), g_19);
    }
  return(t);
}
ATerm system_usage_switch_0_0 (ATerm t)
{
  ATerm q_7 (ATerm t)
  {
    ATerm i_19 = NULL;
    i_19 = t;
    if(match_string(t, "--help"))
      {
        t = i_19;
      }
    else
      {
        if(match_string(t, "-h"))
          {
            t = i_19;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
              _fail(t);
            t = i_19;
          }
      }
    return(t);
  }
  ATerm r_7 (ATerm t)
  {
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
    t = term_d_27;
    return(t);
  }
  ATerm s_7 (ATerm t)
  {
    t = term_e_27;
    return(t);
  }
  t = Option_3_0(q_7, r_7, s_7, t);
  return(t);
}
ATerm Cons_2_0 (ATerm c_57 (ATerm), ATerm d_57 (ATerm), ATerm t)
{
  ATerm j_19 = NULL,k_19 = NULL,l_19 = NULL,m_19 = NULL,n_19 = NULL,o_19 = NULL;
  o_19 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_19 = ATgetFirst((ATermList) t);
      l_19 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_19);
  j_19 = t;
  t = k_19;
  t = c_57(t);
  m_19 = t;
  t = l_19;
  t = d_57(t);
  n_19 = t;
  t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(n_19), m_19), j_19);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm d_87 (ATerm), ATerm t)
{
  ATerm u_19 = NULL;
  u_19 = t;
  {
    ATerm t_7 (ATerm t)
    {
      t = term_f_27;
      t = d_87(t);
      return(t);
    }
    t = try_1_0(t_7, t);
    t = u_19;
    {
      ATerm u_7 (ATerm t)
      {
        ATerm v_19 = NULL;
        v_19 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), v_19);
        t = (ATerm) ATmakeAppl(sym_Program_1, v_19);
        return(t);
      }
      ATerm v_7 (ATerm t)
      {
        ATerm g_27 = t;
        int h_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_27 = t;
            int j_27 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(j_27);
              }
            else
              {
                t = i_27;
                t = d_87(t);
                t = Cons_2_0(_id, v_7, t);
              }
            ;
            LocalPopChoice(h_27);
          }
        else
          {
            t = g_27;
            {
              ATerm y_19 = NULL,z_19 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  y_19 = ATgetFirst((ATermList) t);
                  z_19 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(z_19), (ATerm) ATmakeAppl(sym_Undefined_1, y_19));
            }
          }
        return(t);
      }
      t = Cons_2_0(u_7, v_7, t);
    }
  }
  return(t);
}
ATerm parse_options_1_0 (ATerm c_87 (ATerm), ATerm t)
{
  ATerm f_20 = NULL,g_20 = NULL,h_20 = NULL;
  f_20 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATempty);
  t = f_20;
  {
    ATerm w_7 (ATerm t)
    {
      ATerm k_27 = t;
      int l_27 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = c_87(t);
          ;
          LocalPopChoice(l_27);
        }
      else
        {
          t = k_27;
          {
            ATerm m_27 = t;
            int n_27 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = system_usage_switch_0_0(t);
                ;
                LocalPopChoice(n_27);
              }
            else
              {
                t = m_27;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(w_7, t);
    {
      ATerm x_7 (ATerm t)
      {
        ATerm o_27 = t;
        int p_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_20 = NULL;
            m_20 = t;
            {
              ATerm q_27 = t;
              int r_27 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = m_20;
                  {
                    ATerm s_27 = t;
                    int t_27 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = term_i_25;
                        t = get_config_0_0(t);
                        ;
                        LocalPopChoice(t_27);
                      }
                    else
                      {
                        t = s_27;
                        {
                          ATerm y_7 (ATerm t)
                          {
                            if(!(match_cons(t, sym_Help_0)))
                              _fail(t);
                            return(t);
                          }
                          t = option_defined_1_0(y_7, t);
                        }
                      }
                    t = m_20;
                    t = system_usage_0_0(t);
                    t = SSL_exit((ATerm) ATmakeInt(0));
                  }
                  ;
                  LocalPopChoice(r_27);
                }
              else
                {
                  t = q_27;
                  t = term_s_26;
                  t = get_config_0_0(t);
                  t = m_20;
                  t = system_about_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
            }
            ;
            LocalPopChoice(p_27);
          }
        else
          {
            t = o_27;
            {
              ATerm z_7 (ATerm t)
              {
                ATerm a_8 (ATerm t)
                {
                  if(((g_20 != NULL) && (g_20 != t)))
                    _fail(t);
                  else
                    g_20 = t;
                  return(t);
                }
                t = Undefined_1_0(a_8, t);
                return(t);
              }
              t = option_defined_1_0(z_7, t);
              t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(g_20)), (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue))));
              t = (ATerm) ATmakeAppl(sym__2, term_r_21, (ATerm) ATinsert(ATinsert(ATempty, not_null(g_20)), term_u_27));
              t = system_usage_0_0(t);
              t = SSL_exit((ATerm) ATmakeInt(1));
            }
          }
        return(t);
      }
      t = try_1_0(x_7, t);
      h_20 = t;
      t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)));
      t = h_20;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm h_85 (ATerm), ATerm i_85 (ATerm), ATerm j_85 (ATerm), ATerm k_85 (ATerm), ATerm t)
{
  ATerm w_13 = NULL;
  t = parse_options_1_0(h_85, t);
  w_13 = t;
  t = SSL_table_create((ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), w_13);
  t = w_13;
  t = j_85(t);
  {
    ATerm v_27 = t;
    int w_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(i_85, t);
        ;
        LocalPopChoice(w_27);
      }
    else
      {
        t = v_27;
        {
          ATerm x_27 = t;
          int y_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = k_85(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(y_27);
            }
          else
            {
              t = x_27;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm option_wrap_2_0 (ATerm l_85 (ATerm), ATerm m_85 (ATerm), ATerm t)
{
  t = option_wrap_4_0(l_85, default_usage_0_0, _id, m_85, t);
  return(t);
}
ATerm xtc_io_wrap_2_0 (ATerm i_83 (ATerm), ATerm j_83 (ATerm), ATerm t)
{
  ATerm b_8 (ATerm t)
  {
    ATerm z_27 = t;
    int a_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = i_83(t);
        ;
        LocalPopChoice(a_28);
      }
    else
      {
        t = z_27;
        t = io_options_0_0(t);
      }
    return(t);
  }
  ATerm c_8 (ATerm t)
  {
    t = xtc_io_1_0(j_83, t);
    return(t);
  }
  t = option_wrap_2_0(b_8, c_8, t);
  return(t);
}
ATerm xtc_io_wrap_1_0 (ATerm h_83 (ATerm), ATerm t)
{
  t = xtc_io_wrap_2_0(_fail, h_83, t);
  return(t);
}
ATerm xtc_iowrap_1_0 (ATerm n_83 (ATerm), ATerm t)
{
  t = xtc_io_wrap_1_0(n_83, t);
  return(t);
}
ATerm astratego2text_0_0 (ATerm t)
{
  ATerm d_8 (ATerm t)
  {
    ATerm g_8 (ATerm t)
    {
      t = term_b_28;
      return(t);
    }
    ATerm h_8 (ATerm t)
    {
      ATerm p_20 = NULL;
      t = term_c_28;
      t = xtc_find_0_0(t);
      p_20 = t;
      t = (ATerm) ATinsert(ATinsert(ATempty, p_20), term_d_28);
      return(t);
    }
    t = xtc_transform_2_0(g_8, h_8, t);
    {
      ATerm i_8 (ATerm t)
      {
        t = term_e_28;
        return(t);
      }
      t = xtc_transform_1_0(i_8, t);
    }
    return(t);
  }
  t = xtc_iowrap_1_0(d_8, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = astratego2text_0_0(t);
  return(t);
}
