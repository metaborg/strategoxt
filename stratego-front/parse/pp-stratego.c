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
ATerm term_d_29;
ATerm term_c_29;
ATerm term_b_29;
ATerm term_a_29;
ATerm term_z_28;
ATerm term_w_28;
ATerm term_v_28;
ATerm term_u_28;
ATerm term_l_28;
ATerm term_w_27;
ATerm term_v_27;
ATerm term_u_27;
ATerm term_t_27;
ATerm term_s_27;
ATerm term_n_27;
ATerm term_m_27;
ATerm term_l_27;
ATerm term_k_27;
ATerm term_j_27;
ATerm term_i_27;
ATerm term_x_26;
ATerm term_w_26;
ATerm term_n_26;
ATerm term_k_26;
ATerm term_a_26;
ATerm term_z_25;
ATerm term_y_25;
ATerm term_r_25;
ATerm term_q_25;
ATerm term_p_25;
ATerm term_m_25;
ATerm term_j_25;
ATerm term_i_25;
ATerm term_h_25;
ATerm term_e_25;
ATerm term_d_25;
ATerm term_c_25;
ATerm term_z_24;
ATerm term_y_24;
ATerm term_v_24;
ATerm term_l_24;
ATerm term_q_23;
ATerm term_y_22;
ATerm term_x_22;
ATerm term_w_22;
ATerm term_v_22;
ATerm term_u_22;
ATerm term_r_22;
ATerm term_n_22;
ATerm term_f_22;
ATerm term_e_22;
ATerm term_y_21;
ATerm term_x_21;
ATerm term_w_21;
ATerm term_v_21;
ATerm term_u_21;
ATerm term_t_21;
ATerm term_s_21;
ATerm term_r_21;
ATerm term_p_21;
ATerm term_n_21;
ATerm term_l_21;
ATerm term_k_21;
ATerm term_i_21;
ATerm term_h_21;
ATerm term_g_21;
ATerm term_f_21;
ATerm term_d_21;
ATerm term_c_21;
ATerm term_b_21;
ATerm term_y_20;
ATerm term_x_20;
ATerm term_w_20;
ATerm term_v_20;
ATerm term_u_20;
ATerm term_t_20;
ATerm term_s_20;
ATerm term_p_20;
ATerm term_m_20;
ATerm term_l_20;
ATerm term_k_20;
ATerm term_j_20;
ATerm term_i_20;
ATerm term_h_20;
ATerm term_z_19;
ATerm term_x_19;
ATerm term_w_19;
ATerm term_v_19;
ATerm term_r_19;
ATerm term_p_19;
ATerm term_o_19;
ATerm term_n_19;
ATerm term_m_19;
ATerm term_h_19;
ATerm term_g_19;
ATerm term_f_19;
ATerm term_e_19;
ATerm term_d_19;
ATerm term_a_19;
ATerm term_y_18;
ATerm term_x_18;
ATerm term_w_18;
ATerm term_q_18;
ATerm term_p_18;
ATerm term_o_18;
ATerm term_h_18;
ATerm term_g_18;
ATerm term_f_18;
ATerm term_c_18;
ATerm term_a_18;
ATerm term_x_17;
ATerm term_u_17;
ATerm term_t_17;
ATerm term_p_17;
ATerm term_o_17;
ATerm term_n_17;
ATerm term_m_17;
ATerm term_l_17;
ATerm term_k_17;
ATerm term_j_17;
ATerm term_i_17;
ATerm term_d_17;
ATerm term_c_17;
ATerm term_z_16;
ATerm term_y_16;
ATerm term_v_16;
ATerm term_u_16;
ATerm term_n_16;
ATerm term_k_16;
ATerm term_i_16;
ATerm term_h_16;
ATerm term_g_16;
ATerm term_a_16;
ATerm term_z_15;
ATerm term_w_15;
ATerm term_s_15;
ATerm term_o_15;
ATerm term_j_15;
ATerm term_i_15;
ATerm term_h_15;
ATerm term_g_15;
ATerm term_c_15;
ATerm term_b_15;
ATerm term_a_15;
ATerm term_v_14;
ATerm term_t_14;
ATerm term_s_14;
ATerm term_q_14;
ATerm term_p_14;
ATerm term_o_14;
ATerm term_n_14;
ATerm term_m_14;
ATerm term_i_14;
ATerm term_h_14;
ATerm term_g_14;
ATerm term_f_14;
ATerm term_e_14;
ATerm term_b_14;
ATerm term_a_14;
ATerm term_z_13;
ATerm term_w_13;
ATerm term_v_13;
ATerm term_u_13;
ATerm term_t_13;
ATerm term_r_13;
ATerm term_x_12;
ATerm term_w_12;
ATerm term_o_12;
ATerm term_n_12;
ATerm term_m_12;
ATerm term_t_11;
ATerm term_q_11;
ATerm term_j_11;
ATerm term_e_11;
ATerm term_b_11;
ATerm term_a_11;
ATerm term_z_10;
ATerm term_y_10;
ATerm term_w_10;
ATerm term_v_10;
ATerm term_u_10;
ATerm term_e_9;
ATerm term_d_9;
ATerm term_q_8;
ATerm term_p_8;
void init_constant_terms (void)
{
  ATprotect(&(term_p_8));
  term_p_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_q_8));
  term_q_8 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_d_9));
  term_d_9 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_e_9));
  term_e_9 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_v_10));
  term_v_10 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_z_10));
  term_z_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_a_11));
  term_a_11 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_13, term_a_14, term_b_14);
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_g_14));
  term_g_14 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_14, term_g_14, term_h_14);
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_o_14));
  term_o_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_14, term_n_14, term_o_14);
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_14, term_e_9, term_s_14);
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_14, term_a_15, term_b_15);
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_15, term_h_15, term_i_15);
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_15, term_s_15, term_w_15);
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_16, term_g_16, term_h_16);
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_u_16));
  term_u_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_16, term_n_16, term_u_16);
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_c_17));
  term_c_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_16, term_z_16, term_c_17);
  ATprotect(&(term_i_17));
  term_i_17 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_j_17));
  term_j_17 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_k_17));
  term_k_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_l_17));
  term_l_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_17, term_j_17, term_k_17);
  ATprotect(&(term_m_17));
  term_m_17 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_n_17));
  term_n_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_17, term_d_9, term_n_17);
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_t_17));
  term_t_17 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_u_17));
  term_u_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_17, term_t_17, term_u_17);
  ATprotect(&(term_a_18));
  term_a_18 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_f_18));
  term_f_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_g_18));
  term_g_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_18, term_c_18, term_f_18);
  ATprotect(&(term_h_18));
  term_h_18 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_o_18));
  term_o_18 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_p_18));
  term_p_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_q_18));
  term_q_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_18, term_o_18, term_p_18);
  ATprotect(&(term_w_18));
  term_w_18 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_x_18));
  term_x_18 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_y_18));
  term_y_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_a_19));
  term_a_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_18, term_x_18, term_y_18);
  ATprotect(&(term_d_19));
  term_d_19 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_e_19));
  term_e_19 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_f_19));
  term_f_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_19, term_e_19, term_f_19);
  ATprotect(&(term_h_19));
  term_h_19 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_m_19));
  term_m_19 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_n_19));
  term_n_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_o_19));
  term_o_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_19, term_m_19, term_n_19);
  ATprotect(&(term_p_19));
  term_p_19 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_r_19));
  term_r_19 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_v_19));
  term_v_19 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_w_19));
  term_w_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_19, term_r_19, term_v_19);
  ATprotect(&(term_x_19));
  term_x_19 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_z_19));
  term_z_19 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_h_20));
  term_h_20 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_i_20));
  term_i_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_19, term_z_19, term_h_20);
  ATprotect(&(term_j_20));
  term_j_20 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_k_20));
  term_k_20 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_l_20));
  term_l_20 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_m_20));
  term_m_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_20, term_k_20, term_l_20);
  ATprotect(&(term_p_20));
  term_p_20 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_s_20));
  term_s_20 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_t_20));
  term_t_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_u_20));
  term_u_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_20, term_s_20, term_t_20);
  ATprotect(&(term_v_20));
  term_v_20 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_w_20));
  term_w_20 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_x_20));
  term_x_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_y_20));
  term_y_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_20, term_w_20, term_x_20);
  ATprotect(&(term_b_21));
  term_b_21 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_c_21));
  term_c_21 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_d_21));
  term_d_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_f_21));
  term_f_21 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_21, term_c_21, term_d_21);
  ATprotect(&(term_g_21));
  term_g_21 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_h_21));
  term_h_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_i_21));
  term_i_21 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_21, term_q_8, term_h_21);
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_l_21));
  term_l_21 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_n_21));
  term_n_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_p_21));
  term_p_21 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_21, term_l_21, term_n_21);
  ATprotect(&(term_r_21));
  term_r_21 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_s_21));
  term_s_21 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_t_21));
  term_t_21 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_u_21));
  term_u_21 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_21, term_s_21, term_t_21);
  ATprotect(&(term_v_21));
  term_v_21 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_w_21));
  term_w_21 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_x_21));
  term_x_21 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_y_21));
  term_y_21 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_21, term_w_21, term_x_21);
  ATprotect(&(term_e_22));
  term_e_22 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_f_22));
  term_f_22 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_n_22));
  term_n_22 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_r_22));
  term_r_22 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file> (file, mode)", 0, ATtrue));
  ATprotect(&(term_u_22));
  term_u_22 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_v_22));
  term_v_22 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_w_22));
  term_w_22 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_x_22));
  term_x_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_y_22));
  term_y_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_q_23));
  term_q_23 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_l_24));
  term_l_24 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_v_24));
  term_v_24 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_y_24));
  term_y_24 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_z_24));
  term_z_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_c_25));
  term_c_25 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_d_25));
  term_d_25 = (ATerm) ATmakeAppl(sym_Verbose_1, term_c_25);
  ATprotect(&(term_e_25));
  term_e_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_h_25));
  term_h_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_i_25));
  term_i_25 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_j_25));
  term_j_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_m_25));
  term_m_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_p_25));
  term_p_25 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_q_25));
  term_q_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_r_25));
  term_r_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_y_25));
  term_y_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-a | --abstract  source is abstract syntax", 0, ATtrue));
  ATprotect(&(term_z_25));
  term_z_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--annotations    print annotations on abstract syntax", 0, ATtrue));
  ATprotect(&(term_a_26));
  term_a_26 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_k_26));
  term_k_26 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_n_26));
  term_n_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_w_26));
  term_w_26 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_x_26));
  term_x_26 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_i_27));
  term_i_27 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_j_27));
  term_j_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_k_27));
  term_k_27 = (ATerm) ATmakeAppl(sym__3, term_i_27, term_j_27, term_u_22);
  ATprotect(&(term_l_27));
  term_l_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_m_27));
  term_m_27 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_n_27));
  term_n_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_s_27));
  term_s_27 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_t_27));
  term_t_27 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_u_27));
  term_u_27 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_v_27));
  term_v_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_w_27));
  term_w_27 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_l_28));
  term_l_28 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_u_28));
  term_u_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--abstract", 0, ATtrue));
  ATprotect(&(term_v_28));
  term_v_28 = (ATerm) ATmakeAppl(ATmakeSymbol("parse-stratego", 0, ATtrue));
  ATprotect(&(term_w_28));
  term_w_28 = (ATerm) ATmakeAppl(ATmakeSymbol("stratego-ensugar", 0, ATtrue));
  ATprotect(&(term_z_28));
  term_z_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--annotations", 0, ATtrue));
  ATprotect(&(term_a_29));
  term_a_29 = (ATerm) ATmakeAppl(ATmakeSymbol("annos-to-term", 0, ATtrue));
  ATprotect(&(term_b_29));
  term_b_29 = (ATerm) ATmakeAppl(ATmakeSymbol("ast2text", 0, ATtrue));
  ATprotect(&(term_c_29));
  term_c_29 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego-pretty.pp", 0, ATtrue));
  ATprotect(&(term_d_29));
  term_d_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
}
ATerm table_getlist_0_0 (ATerm);
ATerm if_verbose5_1_0 (ATerm v_80 (ATerm), ATerm);
ATerm xtc_find_version_loc_0_0 (ATerm);
ATerm filter_1_0 (ATerm w_76 (ATerm), ATerm);
ATerm repeat_1_0 (ATerm q_78 (ATerm), ATerm);
ATerm xtc_import_0_0 (ATerm);
ATerm say_1_0 (ATerm a_65 (ATerm), ATerm);
ATerm if_verbose4_1_0 (ATerm u_80 (ATerm), ATerm);
ATerm if_verbose6_1_0 (ATerm w_80 (ATerm), ATerm);
ATerm HdMember_p__2_0 (ATerm k_73 (ATerm), ATerm l_73 (ATerm), ATerm);
ATerm union_1_0 (ATerm g_73 (ATerm), ATerm);
ATerm union_0_0 (ATerm);
ATerm table_append_0_0 (ATerm);
ATerm table_putlist_1_0 (ATerm f_81 (ATerm), ATerm);
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
ATerm WriteToFile_1_0 (ATerm k_65 (ATerm), ATerm);
ATerm WriteToBinaryFile_0_0 (ATerm);
ATerm write_to_0_0 (ATerm);
ATerm xtc_transform_term_2_0 (ATerm s_83 (ATerm), ATerm t_83 (ATerm), ATerm);
ATerm concat_strings_0_0 (ATerm);
ATerm signal_to_descr_0_0 (ATerm);
ATerm fetch_elem_1_0 (ATerm p_69 (ATerm), ATerm);
ATerm signal_from_number_0_0 (ATerm);
ATerm warn_ifsignaled_0_0 (ATerm);
ATerm fork_0_0 (ATerm);
ATerm fork_2_0 (ATerm x_63 (ATerm), ATerm y_63 (ATerm), ATerm);
ATerm fork_and_wait_1_0 (ATerm z_63 (ATerm), ATerm);
ATerm call_0_0 (ATerm);
ATerm xtc_find_warning_0_0 (ATerm);
ATerm xtc_command_1_0 (ATerm j_83 (ATerm), ATerm);
ATerm assert_1_0 (ATerm u_79 (ATerm), ATerm);
ATerm obsolete_1_0 (ATerm d_65 (ATerm), ATerm);
ATerm open_file_0_0 (ATerm);
ATerm new_0_0 (ATerm);
ATerm new_file_0_0 (ATerm);
ATerm xtc_new_file_0_0 (ATerm);
ATerm xtc_transform_file_2_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm);
ATerm FILE_1_0 (ATerm u_61 (ATerm), ATerm);
ATerm xtc_transform_2_0 (ATerm l_83 (ATerm), ATerm m_83 (ATerm), ATerm);
ATerm xtc_transform_1_0 (ATerm k_83 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm conc_more_lists_0_0 (ATerm);
ATerm at_end_1_0 (ATerm t_69 (ATerm), ATerm);
ATerm conc_two_lists_0_0 (ATerm);
ATerm conc_0_0 (ATerm);
ATerm _2_0 (ATerm m_55 (ATerm), ATerm n_55 (ATerm), ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm debug_1_0 (ATerm w_64 (ATerm), ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm copy_to_1_0 (ATerm k_0 (ATerm), ATerm);
ATerm table_pop_0_0 (ATerm);
ATerm end_scope_1_0 (ATerm r_79 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm m_80 (ATerm), ATerm n_80 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm q_79 (ATerm), ATerm);
ATerm xtc_temp_files_1_0 (ATerm v_82 (ATerm), ATerm);
ATerm xtc_io_1_0 (ATerm w_82 (ATerm), ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm general_options_0_0 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm aterm_output_option_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm input_option_0_0 (ATerm);
ATerm io_options_0_0 (ATerm);
ATerm pp_stratego_options_0_0 (ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm foldr_2_0 (ATerm t_75 (ATerm), ATerm u_75 (ATerm), ATerm);
ATerm crush_2_0 (ATerm r_73 (ATerm), ATerm s_73 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm r_80 (ATerm), ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm need_help_1_0 (ATerm x_84 (ATerm), ATerm);
ATerm map_1_0 (ATerm d_69 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm reverse_0_0 (ATerm);
ATerm Program_1_0 (ATerm b_62 (ATerm), ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm c_62 (ATerm), ATerm);
ATerm fetch_1_0 (ATerm n_69 (ATerm), ATerm);
ATerm option_defined_1_0 (ATerm s_85 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm system_about_0_0 (ATerm);
ATerm try_1_0 (ATerm x_79 (ATerm), ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm register_usage_1_0 (ATerm x_86 (ATerm), ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm system_usage_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm v_56 (ATerm), ATerm w_56 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm v_86 (ATerm), ATerm);
ATerm parse_options_1_0 (ATerm u_86 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm z_84 (ATerm), ATerm a_85 (ATerm), ATerm b_85 (ATerm), ATerm c_85 (ATerm), ATerm);
ATerm option_wrap_2_0 (ATerm d_85 (ATerm), ATerm e_85 (ATerm), ATerm);
ATerm pp_stratego_0_0 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm c_1 = NULL;
  c_1 = t;
  t = SSL_table_keys(c_1);
  {
    ATerm c_0 (ATerm t)
    {
      ATerm d_1 = NULL,l_1 = NULL;
      d_1 = t;
      t = SSL_table_get(c_1, d_1);
      l_1 = t;
      t = (ATerm) ATmakeAppl(sym__2, d_1, l_1);
      return(t);
    }
    t = map_1_0(c_0, t);
  }
  return(t);
}
ATerm if_verbose5_1_0 (ATerm v_80 (ATerm), ATerm t)
{
  ATerm n_0 (ATerm t)
  {
    ATerm m_1 = NULL,s_1 = NULL;
    m_1 = t;
    t = term_p_8;
    t = get_config_0_0(t);
    s_1 = t;
    t = (ATerm) ATmakeAppl(sym__2, s_1, term_q_8);
    t = geq_0_0(t);
    t = m_1;
    t = v_80(t);
    return(t);
  }
  t = try_1_0(n_0, t);
  return(t);
}
ATerm xtc_find_version_loc_0_0 (ATerm t)
{
  ATerm x_1 = NULL,b_2 = NULL,c_2 = NULL;
  if(match_cons(t, sym__2))
    {
      x_1 = ATgetArgument(t, 0);
      b_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Tool_1, x_1));
  {
    ATerm o_0 (ATerm t)
    {
      if(match_cons(t, sym__2))
        {
          if((b_2 != ATgetArgument(t, 0)))
            {
              _fail(ATgetArgument(t, 0));
            }
          c_2 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      return(t);
    }
    t = fetch_1_0(o_0, t);
    t = not_null(c_2);
  }
  return(t);
}
ATerm filter_1_0 (ATerm w_76 (ATerm), ATerm t)
{
  ATerm u_8 = t;
  int v_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(v_8);
    }
  else
    {
      t = u_8;
      {
        ATerm w_8 = t;
        int y_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_0 (ATerm t)
            {
              t = filter_1_0(w_76, t);
              return(t);
            }
            t = Cons_2_0(w_76, p_0, t);
            ;
            LocalPopChoice(y_8);
          }
        else
          {
            t = w_8;
            {
              ATerm i_2 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm z_8 = ATgetFirst((ATermList) t);
                  i_2 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = i_2;
              t = filter_1_0(w_76, t);
            }
          }
      }
    }
  return(t);
}
ATerm repeat_1_0 (ATerm q_78 (ATerm), ATerm t)
{
  ATerm k_2 (ATerm t)
  {
    ATerm q_0 (ATerm t)
    {
      t = q_78(t);
      t = k_2(t);
      return(t);
    }
    t = try_1_0(q_0, t);
    return(t);
  }
  t = k_2(t);
  return(t);
}
ATerm xtc_import_0_0 (ATerm t)
{
  ATerm l_2 = NULL;
  l_2 = t;
  {
    ATerm r_0 (ATerm t)
    {
      t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Import_0));
      t = filter_1_0(xtc_read_0_0, t);
      {
        ATerm c_9 = t;
        if((PushChoice() == 0))
          {
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = c_9;
          }
      }
      return(t);
    }
    t = repeat_1_0(r_0, t);
    t = l_2;
  }
  return(t);
}
ATerm say_1_0 (ATerm a_65 (ATerm), ATerm t)
{
  ATerm o_2 = NULL,e_0 = NULL;
  o_2 = t;
  t = a_65(t);
  e_0 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, e_0));
  t = o_2;
  return(t);
}
ATerm if_verbose4_1_0 (ATerm u_80 (ATerm), ATerm t)
{
  ATerm s_0 (ATerm t)
  {
    ATerm p_2 = NULL,q_2 = NULL;
    p_2 = t;
    t = term_p_8;
    t = get_config_0_0(t);
    q_2 = t;
    t = (ATerm) ATmakeAppl(sym__2, q_2, term_d_9);
    t = geq_0_0(t);
    t = p_2;
    t = u_80(t);
    return(t);
  }
  t = try_1_0(s_0, t);
  return(t);
}
ATerm if_verbose6_1_0 (ATerm w_80 (ATerm), ATerm t)
{
  ATerm t_0 (ATerm t)
  {
    ATerm r_2 = NULL,t_2 = NULL;
    r_2 = t;
    t = term_p_8;
    t = get_config_0_0(t);
    t_2 = t;
    t = (ATerm) ATmakeAppl(sym__2, t_2, term_e_9);
    t = geq_0_0(t);
    t = r_2;
    t = w_80(t);
    return(t);
  }
  t = try_1_0(t_0, t);
  return(t);
}
ATerm HdMember_p__2_0 (ATerm k_73 (ATerm), ATerm l_73 (ATerm), ATerm t)
{
  ATerm y_2 = NULL,b_3 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      y_2 = ATgetFirst((ATermList) t);
      b_3 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = l_73(t);
  {
    ATerm u_0 (ATerm t)
    {
      ATerm d_3 = NULL;
      d_3 = t;
      t = (ATerm) ATmakeAppl(sym__2, y_2, d_3);
      t = k_73(t);
      return(t);
    }
    t = fetch_1_0(u_0, t);
    t = b_3;
  }
  return(t);
}
ATerm union_1_0 (ATerm g_73 (ATerm), ATerm t)
{
  ATerm f_3 = NULL,g_3 = NULL;
  if(match_cons(t, sym__2))
    {
      g_3 = ATgetArgument(t, 0);
      f_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_3;
  {
    ATerm i_3 (ATerm t)
    {
      ATerm i_9 = t;
      int j_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = f_3;
          ;
          LocalPopChoice(j_9);
        }
      else
        {
          t = i_9;
          {
            ATerm l_9 = t;
            int n_9 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm v_0 (ATerm t)
                {
                  t = f_3;
                  return(t);
                }
                t = HdMember_p__2_0(g_73, v_0, t);
                t = i_3(t);
                ;
                LocalPopChoice(n_9);
              }
            else
              {
                t = l_9;
                t = Cons_2_0(_id, i_3, t);
              }
          }
        }
      return(t);
    }
    t = i_3(t);
  }
  return(t);
}
ATerm union_0_0 (ATerm t)
{
  ATerm w_0 (ATerm t)
  {
    ATerm j_3 = NULL;
    if(match_cons(t, sym__2))
      {
        j_3 = ATgetArgument(t, 0);
        if((j_3 != ATgetArgument(t, 1)))
          {
            _fail(ATgetArgument(t, 1));
          }
      }
    else
      _fail(t);
    return(t);
  }
  t = union_1_0(w_0, t);
  return(t);
}
ATerm table_append_0_0 (ATerm t)
{
  ATerm n_3 = NULL,o_3 = NULL,p_3 = NULL,q_3 = NULL,s_3 = NULL;
  if(match_cons(t, sym__3))
    {
      n_3 = ATgetArgument(t, 0);
      o_3 = ATgetArgument(t, 1);
      p_3 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, n_3, o_3);
  {
    ATerm a_10 = t;
    int b_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm c_10 = ATgetArgument(t, 0);
            ATerm e_10 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(n_3, o_3);
        ;
        LocalPopChoice(b_10);
      }
    else
      {
        t = a_10;
        t = (ATerm) ATempty;
      }
    q_3 = t;
    t = (ATerm) ATmakeAppl(sym__2, q_3, p_3);
    t = union_0_0(t);
    s_3 = t;
    t = SSL_table_put(n_3, o_3, s_3);
    t = (ATerm) ATmakeAppl(sym__3, n_3, o_3, p_3);
  }
  return(t);
}
ATerm table_putlist_1_0 (ATerm f_81 (ATerm), ATerm t)
{
  ATerm t_3 = NULL,x_3 = NULL;
  if(match_cons(t, sym__2))
    {
      x_3 = ATgetArgument(t, 0);
      t_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_3;
  {
    ATerm x_0 (ATerm t)
    {
      ATerm y_3 = NULL,z_3 = NULL;
      if(match_cons(t, sym__2))
        {
          y_3 = ATgetArgument(t, 0);
          z_3 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__3, x_3, y_3, z_3);
      t = f_81(t);
      return(t);
    }
    t = map_1_0(x_0, t);
  }
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm i_10 = t;
  int j_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_1 = NULL;
      b_1 = t;
      t = SSL_access(b_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_R__OK_0)));
      LocalPopChoice(j_10);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = i_10;
      {
        ATerm p_10 = t;
        int r_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_10 = t;
            if((PushChoice() == 0))
              {
                ATerm f_1 = NULL;
                f_1 = t;
                t = SSL_access(f_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_F__OK_0)));
                PopChoice();
                _fail(t);
              }
            else
              {
                t = t_10;
              }
            {
              ATerm y_0 (ATerm t)
              {
                t = term_u_10;
                return(t);
              }
              t = debug_1_0(y_0, t);
            }
            ;
            LocalPopChoice(r_10);
          }
        else
          {
            t = p_10;
            {
              ATerm z_0 (ATerm t)
              {
                t = term_v_10;
                return(t);
              }
              t = debug_1_0(z_0, t);
            }
          }
        t = (ATerm) ATempty;
      }
    }
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm d_4 = NULL,f_4 = NULL,g_4 = NULL;
  d_4 = t;
  {
    ATerm a_1 (ATerm t)
    {
      ATerm e_1 (ATerm t)
      {
        t = term_w_10;
        return(t);
      }
      t = debug_1_0(e_1, t);
      return(t);
    }
    t = if_verbose5_1_0(a_1, t);
    {
      ATerm x_10 = t;
      if((PushChoice() == 0))
        {
          t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Imported_1, d_4));
          PopChoice();
          _fail(t);
        }
      else
        {
          t = x_10;
        }
      f_4 = t;
      t = SSL_table_put((ATerm)ATmakeAppl(sym_XTC_0), (ATerm)ATmakeAppl(sym_Repository_0), (ATerm) ATinsert(ATempty, d_4));
      t = f_4;
      {
        ATerm g_1 (ATerm t)
        {
          ATerm h_1 (ATerm t)
          {
            t = term_y_10;
            return(t);
          }
          t = debug_1_0(h_1, t);
          return(t);
        }
        t = if_verbose4_1_0(g_1, t);
        t = read_repository_file_0_0(t);
        {
          ATerm k_1 (ATerm t)
          {
            ATerm n_1 (ATerm t)
            {
              t = term_z_10;
              return(t);
            }
            t = say_1_0(n_1, t);
            return(t);
          }
          t = if_verbose6_1_0(k_1, t);
          g_4 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_a_11, g_4);
          t = table_putlist_1_0(table_append_0_0, t);
          {
            ATerm o_1 (ATerm t)
            {
              ATerm p_1 (ATerm t)
              {
                t = term_b_11;
                return(t);
              }
              t = say_1_0(p_1, t);
              return(t);
            }
            t = if_verbose6_1_0(o_1, t);
            t = SSL_table_put((ATerm)ATmakeAppl(sym_XTC_0), (ATerm)ATmakeAppl(sym_Imported_1, d_4), (ATerm) ATempty);
            t = (ATerm) ATmakeAppl(sym__3, term_a_11, (ATerm)ATmakeAppl(sym_Imported_1, d_4), (ATerm) ATempty);
            {
              ATerm q_1 (ATerm t)
              {
                ATerm r_1 (ATerm t)
                {
                  t = term_z_10;
                  return(t);
                }
                t = say_1_0(r_1, t);
                return(t);
              }
              t = if_verbose4_1_0(q_1, t);
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
  ATerm c_11 = t;
  int d_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_e_11;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(d_11);
    }
  else
    {
      t = c_11;
      {
        ATerm f_11 = t;
        int g_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_getenv((ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue)));
            ;
            LocalPopChoice(g_11);
          }
        else
          {
            t = f_11;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm h_4 = NULL;
  ATerm t_1 (ATerm t)
  {
    ATerm u_1 (ATerm t)
    {
      t = term_j_11;
      return(t);
    }
    t = debug_1_0(u_1, t);
    return(t);
  }
  t = if_verbose5_1_0(t_1, t);
  h_4 = t;
  {
    ATerm k_11 = t;
    int l_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Repository_0));
        ;
        LocalPopChoice(l_11);
      }
    else
      {
        t = k_11;
        t = xtc_location_0_0(t);
        t = xtc_read_0_0(t);
        t = xtc_import_0_0(t);
      }
    t = h_4;
    {
      ATerm v_1 (ATerm t)
      {
        ATerm w_1 (ATerm t)
        {
          t = term_q_11;
          return(t);
        }
        t = debug_1_0(w_1, t);
        return(t);
      }
      t = if_verbose5_1_0(v_1, t);
    }
  }
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm r_11 = t;
  int s_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_1 (ATerm t)
      {
        ATerm z_1 (ATerm t)
        {
          t = term_t_11;
          return(t);
        }
        t = debug_1_0(z_1, t);
        return(t);
      }
      t = if_verbose5_1_0(y_1, t);
      t = xtc_load_0_0(t);
      {
        ATerm u_11 = t;
        int x_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = xtc_find_version_loc_0_0(t);
            ;
            LocalPopChoice(x_11);
          }
        else
          {
            t = u_11;
            {
              ATerm i_1 = NULL,j_1 = NULL;
              i_1 = t;
              t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Tool_1, i_1));
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm y_11 = ATgetFirst((ATermList) t);
                  if(match_cons(y_11, sym__2))
                    {
                      ATerm j_12 = ATgetArgument(y_11, 0);
                      j_1 = ATgetArgument(y_11, 1);
                    }
                  else
                    _fail(t);
                  {
                    ATerm z_11 = (ATerm) ATgetNext((ATermList) t);
                  }
                }
              else
                _fail(t);
              t = j_1;
            }
          }
        {
          ATerm a_2 (ATerm t)
          {
            ATerm f_2 (ATerm t)
            {
              t = term_t_11;
              return(t);
            }
            t = debug_1_0(f_2, t);
            return(t);
          }
          t = if_verbose5_1_0(a_2, t);
        }
      }
      ;
      LocalPopChoice(s_11);
    }
  else
    {
      t = r_11;
      {
        ATerm i_4 = NULL;
        i_4 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue))), i_4), (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue))));
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_n_12), i_4), term_m_12);
        {
          ATerm g_2 (ATerm t)
          {
            t = term_a_11;
            t = table_getlist_0_0(t);
            {
              ATerm h_2 (ATerm t)
              {
                t = term_o_12;
                return(t);
              }
              t = debug_1_0(h_2, t);
            }
            return(t);
          }
          t = if_verbose5_1_0(g_2, t);
          _fail(t);
        }
      }
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm l_4 = NULL,o_4 = NULL,p_4 = NULL;
  ATerm u_12 = t;
  int v_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_4 = NULL;
      q_4 = t;
      t = (ATerm) ATmakeAppl(sym__2, q_4, term_w_12);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(v_12);
    }
  else
    {
      t = u_12;
      {
        ATerm j_2 (ATerm t)
        {
          t = term_x_12;
          return(t);
        }
        t = debug_1_0(j_2, t);
        _fail(t);
      }
    }
  l_4 = t;
  if(match_cons(t, sym_Stream_1))
    {
      p_4 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(p_4);
  o_4 = t;
  t = l_4;
  t = fclose_0_0(t);
  t = o_4;
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm t_4 = NULL,u_4 = NULL;
  t_4 = t;
  if(match_cons(t, sym_stdin_0))
    {
      t = t_4;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_FILE_1))
        {
          u_4 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSL_access(u_4, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_F__OK_0)));
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm e_6 (ATerm s_5, ATerm t)
  {
    t = SSL_fclose(s_5);
    return(t);
  }
  ATerm x_5 = NULL,a_6 = NULL;
  a_6 = t;
  if(match_cons(t, sym_Stream_1))
    {
      x_5 = ATgetArgument(t, 0);
      {
        ATerm y_12 = t;
        int a_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(x_5);
            ;
            LocalPopChoice(a_13);
          }
        else
          {
            t = y_12;
            t = e_6(a_6, t);
          }
      }
    }
  else
    {
      t = e_6(a_6, t);
    }
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm f_6 = NULL;
  t = SSL_stdin_stream();
  f_6 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_6);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm j_6 = NULL;
  t = SSL_stdout_stream();
  j_6 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, j_6);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm k_6 = NULL;
  t = SSL_stderr_stream();
  k_6 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, k_6);
  return(t);
}
ATerm stdio_stream_0_0 (ATerm t)
{
  ATerm c_7 = NULL;
  c_7 = t;
  if(match_cons(t, sym_stderr_0))
    {
      t = c_7;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = c_7;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = c_7;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm b_13 = ATgetArgument(t, 0);
      ATerm c_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm g_13 = t;
    int h_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_2 = NULL,e_2 = NULL;
        d_2 = t;
        t = SSL_explode_term(d_2);
        if(match_cons(t, sym__2))
          {
            ATerm i_13 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) i_13) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm l_13 = ATgetArgument(t, 1);
              if(((ATgetType(l_13) == AT_LIST) && !(ATisEmpty(l_13))))
                {
                  e_2 = ATgetFirst((ATermList) l_13);
                  {
                    ATerm m_13 = (ATerm) ATgetNext((ATermList) l_13);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = e_2;
        t = stdio_stream_0_0(t);
        ;
        LocalPopChoice(h_13);
      }
    else
      {
        t = g_13;
        {
          ATerm p_13 = t;
          int q_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm f_7 = NULL,g_7 = NULL,h_7 = NULL;
              ATerm m_2 (ATerm t)
              {
                ATerm i_7 = NULL;
                if(match_cons(t, sym_Path_1))
                  {
                    i_7 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = i_7;
                return(t);
              }
              t = _2_0(m_2, _id, t);
              if(match_cons(t, sym__2))
                {
                  f_7 = ATgetArgument(t, 0);
                  g_7 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_fopen(f_7, g_7);
              h_7 = t;
              t = (ATerm) ATmakeAppl(sym_Stream_1, h_7);
              ;
              LocalPopChoice(q_13);
            }
          else
            {
              t = p_13;
              {
                ATerm j_7 = NULL,k_7 = NULL,l_7 = NULL;
                ATerm n_2 (ATerm t)
                {
                  ATerm m_7 = NULL;
                  m_7 = t;
                  t = SSL_is_string(m_7);
                  return(t);
                }
                t = _2_0(n_2, _id, t);
                if(match_cons(t, sym__2))
                  {
                    j_7 = ATgetArgument(t, 0);
                    k_7 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_fopen(j_7, k_7);
                l_7 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, l_7);
              }
            }
        }
      }
  }
  return(t);
}
ATerm WriteToFile_1_0 (ATerm k_65 (ATerm), ATerm t)
{
  ATerm n_7 = NULL,o_7 = NULL,p_7 = NULL;
  if(match_cons(t, sym__2))
    {
      n_7 = ATgetArgument(t, 0);
      o_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, n_7, term_r_13);
  t = open_stream_0_0(t);
  p_7 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_7, o_7);
  t = k_65(t);
  t = fclose_0_0(t);
  t = o_7;
  return(t);
}
ATerm WriteToBinaryFile_0_0 (ATerm t)
{
  ATerm s_2 (ATerm t)
  {
    ATerm q_7 = NULL,r_7 = NULL,s_7 = NULL;
    if(match_cons(t, sym__2))
      {
        ATerm s_13 = ATgetArgument(t, 0);
        if(match_cons(s_13, sym_Stream_1))
          {
            q_7 = ATgetArgument(s_13, 0);
          }
        else
          _fail(t);
        r_7 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSL_write_term_to_stream_baf(q_7, r_7);
    s_7 = t;
    t = (ATerm) ATmakeAppl(sym_Stream_1, s_7);
    return(t);
  }
  t = WriteToFile_1_0(s_2, t);
  return(t);
}
ATerm write_to_0_0 (ATerm t)
{
  ATerm t_7 = NULL,u_7 = NULL;
  t_7 = t;
  t = xtc_new_file_0_0(t);
  u_7 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_7, t_7);
  t = WriteToBinaryFile_0_0(t);
  t = SSL_close_file(u_7);
  t = (ATerm) ATmakeAppl(sym_FILE_1, u_7);
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm s_83 (ATerm), ATerm t_83 (ATerm), ATerm t)
{
  t = write_to_0_0(t);
  t = xtc_transform_file_2_0(s_83, t_83, t);
  t = read_from_0_0(t);
  return(t);
}
ATerm concat_strings_0_0 (ATerm t)
{
  ATerm v_7 = NULL;
  ATerm u_2 (ATerm t)
  {
    ATerm w_7 = NULL;
    w_7 = t;
    t = SSL_explode_string(w_7);
    return(t);
  }
  t = map_1_0(u_2, t);
  t = concat_0_0(t);
  v_7 = t;
  t = SSL_implode_string(v_7);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm r_8 = NULL,s_8 = NULL,t_8 = NULL,x_8 = NULL;
  r_8 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      s_8 = ATgetArgument(t, 0);
      {
        ATerm z_2 = NULL;
        t = SSL_int_to_string(s_8);
        z_2 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_u_13), z_2), term_t_13);
        t = concat_strings_0_0(t);
      }
    }
  else
    {
      ATerm v_3 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          s_8 = ATgetArgument(t, 0);
          t_8 = ATgetArgument(t, 1);
          x_8 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(t_8);
      v_3 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, x_8), term_w_13), v_3), term_v_13), s_8);
      t = concat_strings_0_0(t);
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm p_69 (ATerm), ATerm t)
{
  ATerm a_9 = NULL;
  ATerm v_2 (ATerm t)
  {
    t = p_69(t);
    a_9 = t;
    return(t);
  }
  t = fetch_1_0(v_2, t);
  t = not_null(a_9);
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm b_9 = NULL;
  b_9 = t;
  {
    ATerm x_13 = t;
    int y_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_y_21), term_u_21), term_p_21), term_i_21), term_f_21), term_y_20), term_u_20), term_m_20), term_i_20), term_w_19), term_o_19), term_g_19), term_a_19), term_q_18), term_g_18), term_x_17), term_o_17), term_l_17), term_d_17), term_v_16), term_i_16), term_z_15), term_j_15), term_c_15), term_t_14), term_p_14), term_i_14), term_e_14);
        {
          ATerm w_2 (ATerm t)
          {
            if(match_cons(t, sym_Signal_3))
              {
                ATerm z_21 = ATgetArgument(t, 0);
                if((b_9 != ATgetArgument(t, 1)))
                  {
                    _fail(ATgetArgument(t, 1));
                  }
                {
                  ATerm a_22 = ATgetArgument(t, 2);
                }
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_elem_1_0(w_2, t);
        }
        ;
        LocalPopChoice(y_13);
      }
    else
      {
        t = x_13;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, b_9);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm f_9 = NULL;
  f_9 = t;
  {
    ATerm x_2 (ATerm t)
    {
      ATerm g_9 = NULL,h_9 = NULL;
      if(match_cons(t, sym_WaitStatus_3))
        {
          ATerm b_22 = ATgetArgument(t, 0);
          g_9 = ATgetArgument(t, 1);
          {
            ATerm c_22 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = g_9;
      {
        ATerm d_22 = t;
        if((PushChoice() == 0))
          {
            if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
              _fail(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = d_22;
          }
        t = signal_from_number_0_0(t);
        t = signal_to_descr_0_0(t);
        h_9 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, h_9), (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue))));
        t = (ATerm) ATmakeAppl(sym__2, term_e_22, (ATerm) ATinsert(ATinsert(ATempty, h_9), term_f_22));
      }
      return(t);
    }
    t = try_1_0(x_2, t);
    t = f_9;
  }
  return(t);
}
ATerm fork_0_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_2_0 (ATerm x_63 (ATerm), ATerm y_63 (ATerm), ATerm t)
{
  ATerm k_9 = NULL,m_9 = NULL;
  k_9 = t;
  t = fork_0_0(t);
  m_9 = t;
  {
    ATerm g_22 = t;
    int h_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = k_9;
        t = x_63(t);
        ;
        LocalPopChoice(h_22);
      }
    else
      {
        t = g_22;
        t = (ATerm) ATmakeAppl(sym__2, m_9, k_9);
        t = y_63(t);
      }
  }
  return(t);
}
ATerm fork_and_wait_1_0 (ATerm z_63 (ATerm), ATerm t)
{
  ATerm o_9 = NULL;
  ATerm a_3 (ATerm t)
  {
    ATerm p_9 = NULL;
    if(match_cons(t, sym__2))
      {
        p_9 = ATgetArgument(t, 0);
        o_9 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSL_waitpid(p_9);
    t = warn_ifsignaled_0_0(t);
    if(match_cons(t, sym_WaitStatus_3))
      {
        ATerm i_22 = ATgetArgument(t, 0);
        if(((ATgetType(i_22) != AT_INT) || (ATgetInt((ATermInt) i_22) != 0)))
          _fail(t);
        {
          ATerm j_22 = ATgetArgument(t, 1);
        }
        {
          ATerm k_22 = ATgetArgument(t, 2);
        }
      }
    else
      _fail(t);
    t = o_9;
    return(t);
  }
  t = fork_2_0(z_63, a_3, t);
  return(t);
}
ATerm call_0_0 (ATerm t)
{
  ATerm q_9 = NULL,r_9 = NULL;
  if(match_cons(t, sym__2))
    {
      q_9 = ATgetArgument(t, 0);
      r_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm c_3 (ATerm t)
    {
      t = SSL_execvp(q_9, r_9);
      return(t);
    }
    t = fork_and_wait_1_0(c_3, t);
  }
  return(t);
}
ATerm xtc_find_warning_0_0 (ATerm t)
{
  t = xtc_find_0_0(t);
  return(t);
}
ATerm xtc_command_1_0 (ATerm j_83 (ATerm), ATerm t)
{
  ATerm s_9 = NULL,t_9 = NULL;
  s_9 = t;
  t = j_83(t);
  t = xtc_find_warning_0_0(t);
  t_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_9, s_9);
  t = call_0_0(t);
  t = s_9;
  return(t);
}
ATerm assert_1_0 (ATerm u_79 (ATerm), ATerm t)
{
  ATerm u_9 = NULL,v_9 = NULL,w_9 = NULL,x_9 = NULL,y_9 = NULL;
  if(match_cons(t, sym__2))
    {
      u_9 = ATgetArgument(t, 0);
      v_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_79(t);
  w_9 = t;
  t = (ATerm) ATmakeAppl(sym__3, w_9, u_9, v_9);
  t = table_push_0_0(t);
  {
    ATerm l_22 = t;
    int m_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get(w_9, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(m_22);
      }
    else
      {
        t = l_22;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        x_9 = ATgetFirst((ATermList) t);
        y_9 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSL_table_put(w_9, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATinsert(CheckATermList(y_9), (ATerm) ATinsert(CheckATermList(x_9), u_9)));
    t = (ATerm) ATmakeAppl(sym__2, u_9, v_9);
  }
  return(t);
}
ATerm obsolete_1_0 (ATerm d_65 (ATerm), ATerm t)
{
  ATerm z_9 = NULL;
  z_9 = t;
  t = d_65(t);
  {
    ATerm e_3 (ATerm t)
    {
      t = term_n_22;
      return(t);
    }
    t = debug_1_0(e_3, t);
    t = z_9;
  }
  return(t);
}
ATerm open_file_0_0 (ATerm t)
{
  ATerm n_10 (ATerm d_10, ATerm t)
  {
    t = d_10;
    {
      ATerm o_22 = t;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym__2))
            {
              ATerm p_22 = ATgetArgument(t, 0);
              ATerm q_22 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = o_22;
        }
      {
        ATerm h_3 (ATerm t)
        {
          t = term_r_22;
          return(t);
        }
        t = obsolete_1_0(h_3, t);
        t = (ATerm) ATmakeAppl(sym__2, d_10, term_r_13);
        t = open_file_0_0(t);
      }
    }
    return(t);
  }
  ATerm o_10 (ATerm f_10, ATerm g_10, ATerm h_10, ATerm t)
  {
    t = SSL_open_file(f_10, g_10);
    return(t);
  }
  ATerm k_10 = NULL,l_10 = NULL,m_10 = NULL;
  k_10 = t;
  if(match_cons(t, sym__2))
    {
      l_10 = ATgetArgument(t, 0);
      m_10 = ATgetArgument(t, 1);
      {
        ATerm s_22 = t;
        int t_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = n_10(k_10, t);
            ;
            LocalPopChoice(t_22);
          }
        else
          {
            t = s_22;
            t = o_10(l_10, m_10, k_10, t);
          }
      }
    }
  else
    {
      t = n_10(k_10, t);
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
  ATerm q_10 = NULL;
  t = term_u_22;
  t = new_0_0(t);
  q_10 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_10, term_v_22);
  t = conc_strings_0_0(t);
  {
    ATerm k_3 (ATerm t)
    {
      ATerm b_4 = NULL;
      b_4 = t;
      t = SSL_access(b_4, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_F__OK_0)));
      t = new_file_0_0(t);
      return(t);
    }
    t = try_1_0(k_3, t);
  }
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm s_10 = NULL;
  t = new_file_0_0(t);
  s_10 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_10, term_r_13);
  t = open_file_0_0(t);
  t = (ATerm) ATmakeAppl(sym__2, s_10, term_u_22);
  {
    ATerm l_3 (ATerm t)
    {
      t = term_w_22;
      return(t);
    }
    t = assert_1_0(l_3, t);
    t = s_10;
  }
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm t)
{
  ATerm h_11 = NULL,i_11 = NULL;
  h_11 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm e_4 = NULL,k_4 = NULL;
      t = h_11;
      t = xtc_new_file_0_0(t);
      e_4 = t;
      t = m_0(t);
      k_4 = t;
      t = (ATerm) ATmakeAppl(sym__2, k_4, (ATerm) ATinsert(ATinsert(ATempty, e_4), term_x_22));
      t = conc_0_0(t);
      t = xtc_command_1_0(l_0, t);
      t = SSL_close_file(e_4);
      t = (ATerm) ATmakeAppl(sym_FILE_1, e_4);
    }
  else
    {
      ATerm w_4 = NULL,x_4 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          i_11 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = i_11;
      t = xtc_new_file_0_0(t);
      w_4 = t;
      t = m_0(t);
      x_4 = t;
      t = (ATerm) ATmakeAppl(sym__2, x_4, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, w_4), term_x_22), i_11), term_y_22));
      t = conc_0_0(t);
      t = xtc_command_1_0(l_0, t);
      t = SSL_close_file(w_4);
      t = (ATerm) ATmakeAppl(sym_FILE_1, w_4);
    }
  return(t);
}
ATerm FILE_1_0 (ATerm u_61 (ATerm), ATerm t)
{
  ATerm m_11 = NULL,n_11 = NULL,o_11 = NULL,p_11 = NULL;
  p_11 = t;
  if(match_cons(t, sym_FILE_1))
    {
      n_11 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_11);
  m_11 = t;
  t = n_11;
  t = u_61(t);
  o_11 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FILE_1, o_11), m_11);
  return(t);
}
ATerm xtc_transform_2_0 (ATerm l_83 (ATerm), ATerm m_83 (ATerm), ATerm t)
{
  ATerm z_22 = t;
  int a_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_23 = t;
      int c_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = FILE_1_0(_id, t);
          ;
          LocalPopChoice(c_23);
        }
      else
        {
          t = b_23;
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
        }
      LocalPopChoice(a_23);
      t = xtc_transform_file_2_0(l_83, m_83, t);
    }
  else
    {
      t = z_22;
      t = xtc_transform_term_2_0(l_83, m_83, t);
    }
  return(t);
}
ATerm xtc_transform_1_0 (ATerm k_83 (ATerm), ATerm t)
{
  ATerm m_3 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = xtc_transform_2_0(k_83, m_3, t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm d_23 = t;
  int e_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(e_23);
    }
  else
    {
      t = d_23;
      {
        ATerm v_11 = NULL,w_11 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            v_11 = ATgetFirst((ATermList) t);
            w_11 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = v_11;
        {
          ATerm r_3 (ATerm t)
          {
            t = w_11;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(r_3, t);
        }
      }
    }
  return(t);
}
ATerm conc_more_lists_0_0 (ATerm t)
{
  ATerm a_12 = NULL,b_12 = NULL;
  a_12 = t;
  t = SSL_explode_term(a_12);
  if(match_cons(t, sym__2))
    {
      ATerm f_23 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) f_23) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      b_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_12;
  t = concat_0_0(t);
  return(t);
}
ATerm at_end_1_0 (ATerm t_69 (ATerm), ATerm t)
{
  ATerm c_12 (ATerm t)
  {
    ATerm g_23 = t;
    int h_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, c_12, t);
        ;
        LocalPopChoice(h_23);
      }
    else
      {
        t = g_23;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = t_69(t);
      }
    return(t);
  }
  t = c_12(t);
  return(t);
}
ATerm conc_two_lists_0_0 (ATerm t)
{
  ATerm d_12 = NULL,e_12 = NULL;
  if(match_cons(t, sym__2))
    {
      e_12 = ATgetArgument(t, 0);
      d_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_12;
  {
    ATerm u_3 (ATerm t)
    {
      t = d_12;
      return(t);
    }
    t = at_end_1_0(u_3, t);
  }
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm i_23 = t;
  int j_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0_0(t);
      ;
      LocalPopChoice(j_23);
    }
  else
    {
      t = i_23;
      t = conc_more_lists_0_0(t);
    }
  return(t);
}
ATerm _2_0 (ATerm m_55 (ATerm), ATerm n_55 (ATerm), ATerm t)
{
  ATerm f_12 = NULL,g_12 = NULL,h_12 = NULL,i_12 = NULL,k_12 = NULL,l_12 = NULL;
  l_12 = t;
  if(match_cons(t, sym__2))
    {
      g_12 = ATgetArgument(t, 0);
      h_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_12);
  f_12 = t;
  t = g_12;
  t = m_55(t);
  i_12 = t;
  t = h_12;
  t = n_55(t);
  k_12 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, i_12, k_12), f_12);
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  ATerm p_12 = NULL;
  ATerm w_3 (ATerm t)
  {
    ATerm q_12 = NULL;
    q_12 = t;
    t = SSL_explode_string(q_12);
    return(t);
  }
  ATerm a_4 (ATerm t)
  {
    ATerm r_12 = NULL;
    r_12 = t;
    t = SSL_explode_string(r_12);
    return(t);
  }
  t = _2_0(w_3, a_4, t);
  t = conc_0_0(t);
  p_12 = t;
  t = SSL_implode_string(p_12);
  return(t);
}
ATerm debug_1_0 (ATerm w_64 (ATerm), ATerm t)
{
  ATerm s_12 = NULL,t_12 = NULL;
  s_12 = t;
  t = w_64(t);
  t_12 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, s_12), t_12));
  t = s_12;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm k_23 = t;
  int l_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_12 = NULL;
      z_12 = t;
      t = SSL_is_string(z_12);
      ;
      LocalPopChoice(l_23);
    }
  else
    {
      t = k_23;
      {
        ATerm m_23 = t;
        int n_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_4 (ATerm t)
            {
              t = try_1_0(eval_config_0_0, t);
              return(t);
            }
            t = map_1_0(c_4, t);
            ;
            LocalPopChoice(n_23);
          }
        else
          {
            t = m_23;
            {
              ATerm d_13 = NULL,e_13 = NULL,f_13 = NULL;
              d_13 = t;
              if(match_cons(t, sym_Path_1))
                {
                  e_13 = ATgetArgument(t, 0);
                  t = e_13;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      e_13 = ATgetArgument(t, 0);
                      t = e_13;
                      {
                        ATerm o_23 = t;
                        int p_23 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(p_23);
                          }
                        else
                          {
                            t = o_23;
                            {
                              ATerm j_4 (ATerm t)
                              {
                                t = term_q_23;
                                return(t);
                              }
                              t = debug_1_0(j_4, t);
                              _fail(t);
                            }
                          }
                      }
                    }
                  else
                    {
                      ATerm j_13 = NULL,k_13 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          e_13 = ATgetArgument(t, 0);
                          f_13 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = e_13;
                      t = eval_config_0_0(t);
                      j_13 = t;
                      t = f_13;
                      t = eval_config_0_0(t);
                      k_13 = t;
                      t = (ATerm) ATmakeAppl(sym__2, j_13, k_13);
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
  ATerm n_13 = NULL;
  n_13 = t;
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), n_13);
  {
    ATerm m_4 (ATerm t)
    {
      ATerm o_13 = NULL;
      t = eval_config_0_0(t);
      o_13 = t;
      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), n_13, o_13);
      t = o_13;
      return(t);
    }
    t = try_1_0(m_4, t);
  }
  return(t);
}
ATerm copy_to_1_0 (ATerm k_0 (ATerm), ATerm t)
{
  ATerm c_14 = NULL,d_14 = NULL;
  c_14 = t;
  if(match_cons(t, sym_FILE_1))
    {
      d_14 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm r_23 = t;
    int s_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_5 = NULL;
        t = c_14;
        t = k_0(t);
        g_5 = t;
        {
          ATerm t_23 = t;
          int u_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(!(match_cons(t, sym_stdout_0)))
                _fail(t);
              ;
              LocalPopChoice(u_23);
            }
          else
            {
              t = t_23;
              if(!(match_cons(t, sym_stderr_0)))
                _fail(t);
            }
          t = SSL_copy(d_14, g_5);
          t = (ATerm) ATmakeAppl(sym_FILE_1, d_14);
        }
        ;
        LocalPopChoice(s_23);
      }
    else
      {
        t = r_23;
        {
          ATerm v_23 = t;
          int w_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm l_5 = NULL;
              t = c_14;
              t = k_0(t);
              l_5 = t;
              {
                ATerm x_23 = t;
                if((PushChoice() == 0))
                  {
                    ATerm y_23 = t;
                    int z_23 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(!(match_cons(t, sym_stdout_0)))
                          _fail(t);
                        ;
                        LocalPopChoice(z_23);
                      }
                    else
                      {
                        t = y_23;
                        {
                          ATerm a_24 = t;
                          int b_24 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              if(!(match_cons(t, sym_stderr_0)))
                                _fail(t);
                              ;
                              LocalPopChoice(b_24);
                            }
                          else
                            {
                              t = a_24;
                              {
                                ATerm o_5 = NULL;
                                o_5 = t;
                                if((d_14 != t))
                                  {
                                    _fail(t);
                                  }
                                t = o_5;
                              }
                            }
                        }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = x_23;
                  }
                t = SSL_copy(d_14, l_5);
                t = (ATerm) ATmakeAppl(sym_FILE_1, d_14);
              }
              ;
              LocalPopChoice(w_23);
            }
          else
            {
              t = v_23;
              t = c_14;
              t = k_0(t);
              if((d_14 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, d_14);
            }
        }
      }
  }
  return(t);
}
ATerm table_pop_0_0 (ATerm t)
{
  ATerm j_14 = NULL,k_14 = NULL,l_14 = NULL;
  if(match_cons(t, sym__2))
    {
      j_14 = ATgetArgument(t, 0);
      k_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm c_24 = t;
    int d_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_5 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm e_24 = ATgetArgument(t, 0);
            ATerm f_24 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(j_14, k_14);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm g_24 = ATgetFirst((ATermList) t);
            q_5 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = q_5;
        ;
        LocalPopChoice(d_24);
      }
    else
      {
        t = c_24;
        t = (ATerm) ATempty;
      }
    l_14 = t;
    t = SSL_table_put(j_14, k_14, l_14);
    t = (ATerm) ATmakeAppl(sym__2, j_14, k_14);
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm r_79 (ATerm), ATerm t)
{
  ATerm r_14 = NULL,u_14 = NULL,w_14 = NULL,x_14 = NULL;
  r_14 = t;
  t = r_79(t);
  u_14 = t;
  {
    ATerm h_24 = t;
    int i_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get(u_14, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(i_24);
      }
    else
      {
        t = h_24;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        x_14 = ATgetFirst((ATermList) t);
        w_14 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSL_table_put(u_14, (ATerm)ATmakeAppl(sym_Scopes_0), w_14);
    t = x_14;
    {
      ATerm n_4 (ATerm t)
      {
        ATerm y_14 = NULL;
        y_14 = t;
        t = (ATerm) ATmakeAppl(sym__2, u_14, y_14);
        t = table_pop_0_0(t);
        return(t);
      }
      t = map_1_0(n_4, t);
      t = r_14;
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm m_80 (ATerm), ATerm n_80 (ATerm), ATerm t)
{
  ATerm j_24 = t;
  int k_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = m_80(t);
      t = n_80(t);
      ;
      LocalPopChoice(k_24);
    }
  else
    {
      t = j_24;
      t = n_80(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm q_79 (ATerm), ATerm t)
{
  ATerm d_15 = NULL,e_15 = NULL,f_15 = NULL;
  d_15 = t;
  t = q_79(t);
  e_15 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_15, term_l_24);
  {
    ATerm m_24 = t;
    int n_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm o_24 = ATgetArgument(t, 0);
            ATerm p_24 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(e_15, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(n_24);
      }
    else
      {
        t = m_24;
        t = (ATerm) ATempty;
      }
    f_15 = t;
    t = SSL_table_put(e_15, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATinsert(CheckATermList(f_15), (ATerm) ATempty));
    t = d_15;
  }
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm v_82 (ATerm), ATerm t)
{
  ATerm k_15 = NULL;
  ATerm r_4 (ATerm t)
  {
    t = term_w_22;
    return(t);
  }
  t = begin_scope_1_0(r_4, t);
  {
    ATerm s_4 (ATerm t)
    {
      ATerm l_15 = NULL;
      l_15 = t;
      {
        ATerm q_24 = t;
        int r_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_table_get((ATerm)ATmakeAppl(sym_TempFiles_0), (ATerm) ATmakeAppl(sym_Scopes_0));
            ;
            LocalPopChoice(r_24);
          }
        else
          {
            t = q_24;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
          }
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            k_15 = ATgetFirst((ATermList) t);
            {
              ATerm s_24 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        t = k_15;
        {
          ATerm v_4 (ATerm t)
          {
            ATerm y_4 (ATerm t)
            {
              ATerm m_15 = NULL;
              m_15 = t;
              t = SSL_remove(m_15);
              return(t);
            }
            t = try_1_0(y_4, t);
            return(t);
          }
          t = map_1_0(v_4, t);
          t = l_15;
          {
            ATerm z_4 (ATerm t)
            {
              t = term_w_22;
              return(t);
            }
            t = end_scope_1_0(z_4, t);
          }
        }
      }
      return(t);
    }
    t = restore_always_2_0(v_82, s_4, t);
  }
  return(t);
}
ATerm xtc_io_1_0 (ATerm w_82 (ATerm), ATerm t)
{
  ATerm a_5 (ATerm t)
  {
    ATerm t_24 = t;
    int u_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_15 = NULL;
        t = term_y_22;
        t = get_config_0_0(t);
        n_15 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, n_15);
        ;
        LocalPopChoice(u_24);
      }
    else
      {
        t = t_24;
        t = term_v_24;
      }
    t = w_82(t);
    {
      ATerm b_5 (ATerm t)
      {
        ATerm w_24 = t;
        int x_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_x_22;
            t = get_config_0_0(t);
            ;
            LocalPopChoice(x_24);
          }
        else
          {
            t = w_24;
            t = term_y_24;
          }
        return(t);
      }
      t = copy_to_1_0(b_5, t);
    }
    return(t);
  }
  t = xtc_temp_files_1_0(a_5, t);
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  ATerm c_5 (ATerm t)
  {
    ATerm p_15 = NULL;
    p_15 = t;
    if(match_string(t, "-k"))
      {
        t = p_15;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
          _fail(t);
        t = p_15;
      }
    return(t);
  }
  ATerm d_5 (ATerm t)
  {
    ATerm q_15 = NULL,r_15 = NULL;
    q_15 = t;
    t = SSL_string_to_int(q_15);
    r_15 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)), r_15);
    t = q_15;
    return(t);
  }
  ATerm e_5 (ATerm t)
  {
    t = term_z_24;
    return(t);
  }
  t = ArgOption_3_0(c_5, d_5, e_5, t);
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm a_25 = t;
  int b_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_5 (ATerm t)
      {
        ATerm t_15 = NULL;
        t_15 = t;
        if(match_string(t, "-S"))
          {
            t = t_15;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
              _fail(t);
            t = t_15;
          }
        return(t);
      }
      ATerm h_5 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), (ATerm) ATmakeInt(0));
        t = term_d_25;
        return(t);
      }
      ATerm i_5 (ATerm t)
      {
        t = term_e_25;
        return(t);
      }
      t = Option_3_0(f_5, h_5, i_5, t);
      ;
      LocalPopChoice(b_25);
    }
  else
    {
      t = a_25;
      {
        ATerm f_25 = t;
        int g_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_5 (ATerm t)
            {
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
                _fail(t);
              return(t);
            }
            ATerm k_5 (ATerm t)
            {
              ATerm u_15 = NULL,v_15 = NULL;
              u_15 = t;
              t = SSL_string_to_int(u_15);
              v_15 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), v_15);
              t = (ATerm) ATmakeAppl(sym_Verbose_1, u_15);
              return(t);
            }
            ATerm m_5 (ATerm t)
            {
              t = term_h_25;
              return(t);
            }
            t = ArgOption_3_0(j_5, k_5, m_5, t);
            ;
            LocalPopChoice(g_25);
          }
        else
          {
            t = f_25;
            {
              ATerm n_5 (ATerm t)
              {
                if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
                  _fail(t);
                return(t);
              }
              ATerm p_5 (ATerm t)
              {
                t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                t = term_i_25;
                return(t);
              }
              ATerm r_5 (ATerm t)
              {
                t = term_j_25;
                return(t);
              }
              t = Option_3_0(n_5, p_5, r_5, t);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0_0 (ATerm t)
{
  ATerm k_25 = t;
  int l_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0_0(t);
      ;
      LocalPopChoice(l_25);
    }
  else
    {
      t = k_25;
      t = keep_option_0_0(t);
    }
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  ATerm t_5 (ATerm t)
  {
    ATerm x_15 = NULL;
    x_15 = t;
    if(match_string(t, "-o"))
      {
        t = x_15;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
          _fail(t);
        t = x_15;
      }
    return(t);
  }
  ATerm u_5 (ATerm t)
  {
    ATerm y_15 = NULL;
    y_15 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), y_15);
    t = (ATerm) ATmakeAppl(sym_Output_1, y_15);
    return(t);
  }
  ATerm v_5 (ATerm t)
  {
    t = term_m_25;
    return(t);
  }
  t = ArgOption_3_0(t_5, u_5, v_5, t);
  return(t);
}
ATerm aterm_output_option_0_0 (ATerm t)
{
  ATerm n_25 = t;
  int o_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0_0(t);
      ;
      LocalPopChoice(o_25);
    }
  else
    {
      t = n_25;
      {
        ATerm w_5 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm y_5 (ATerm t)
        {
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = term_p_25;
          return(t);
        }
        ATerm z_5 (ATerm t)
        {
          t = term_q_25;
          return(t);
        }
        t = Option_3_0(w_5, y_5, z_5, t);
      }
    }
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm b_16 = NULL,c_16 = NULL,d_16 = NULL,e_16 = NULL,f_16 = NULL;
  b_16 = t;
  if(match_string(t, "register-usage-info"))
    {
      t = b_16;
      t = register_usage_1_0(j_0, t);
    }
  else
    {
      ATerm j_16 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          c_16 = ATgetFirst((ATermList) t);
          d_16 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = d_16;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          e_16 = ATgetFirst((ATermList) t);
          f_16 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = c_16;
      t = h_0(t);
      t = e_16;
      t = i_0(t);
      j_16 = t;
      t = (ATerm) ATinsert(CheckATermList(f_16), j_16);
    }
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  ATerm b_6 (ATerm t)
  {
    ATerm l_16 = NULL;
    l_16 = t;
    if(match_string(t, "-i"))
      {
        t = l_16;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
          _fail(t);
        t = l_16;
      }
    return(t);
  }
  ATerm c_6 (ATerm t)
  {
    ATerm m_16 = NULL;
    m_16 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), m_16);
    t = (ATerm) ATmakeAppl(sym_Input_1, m_16);
    return(t);
  }
  ATerm d_6 (ATerm t)
  {
    t = term_r_25;
    return(t);
  }
  t = ArgOption_3_0(b_6, c_6, d_6, t);
  return(t);
}
ATerm io_options_0_0 (ATerm t)
{
  ATerm s_25 = t;
  int t_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      ;
      LocalPopChoice(t_25);
    }
  else
    {
      t = s_25;
      {
        ATerm u_25 = t;
        int v_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0_0(t);
            ;
            LocalPopChoice(v_25);
          }
        else
          {
            t = u_25;
            t = general_options_0_0(t);
          }
      }
    }
  return(t);
}
ATerm pp_stratego_options_0_0 (ATerm t)
{
  ATerm w_25 = t;
  int x_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_6 (ATerm t)
      {
        ATerm o_16 = NULL;
        o_16 = t;
        if(match_string(t, "-a"))
          {
            t = o_16;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--abstract", 0, ATtrue)))
              _fail(t);
            t = o_16;
          }
        return(t);
      }
      ATerm h_6 (ATerm t)
      {
        ATerm p_16 = NULL;
        p_16 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--abstract", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
        t = p_16;
        return(t);
      }
      ATerm i_6 (ATerm t)
      {
        t = term_y_25;
        return(t);
      }
      t = Option_3_0(g_6, h_6, i_6, t);
      ;
      LocalPopChoice(x_25);
    }
  else
    {
      t = w_25;
      {
        ATerm l_6 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--annotations", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm m_6 (ATerm t)
        {
          ATerm q_16 = NULL;
          q_16 = t;
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--annotations", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = q_16;
          return(t);
        }
        ATerm n_6 (ATerm t)
        {
          t = term_z_25;
          return(t);
        }
        t = Option_3_0(l_6, m_6, n_6, t);
      }
    }
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm r_16 = NULL,s_16 = NULL;
  r_16 = t;
  t = term_u_22;
  t = whoami_0_0(t);
  s_16 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue))), s_16), (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue))));
  t = SSL_exit((ATerm) ATmakeInt(1));
  t = r_16;
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm t_16 = NULL;
  t = report_run_time_0_0(t);
  t = term_u_22;
  t = whoami_0_0(t);
  t_16 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue))), t_16));
  t = SSL_exit((ATerm) ATmakeInt(1));
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_a_26;
  t = get_config_0_0(t);
  return(t);
}
ATerm foldr_2_0 (ATerm t_75 (ATerm), ATerm u_75 (ATerm), ATerm t)
{
  ATerm b_26 = t;
  int c_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = t_75(t);
      ;
      LocalPopChoice(c_26);
    }
  else
    {
      t = b_26;
      {
        ATerm w_16 = NULL,x_16 = NULL,a_17 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            w_16 = ATgetFirst((ATermList) t);
            x_16 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = x_16;
        t = foldr_2_0(t_75, u_75, t);
        a_17 = t;
        t = (ATerm) ATmakeAppl(sym__2, w_16, a_17);
        t = u_75(t);
      }
    }
  return(t);
}
ATerm crush_2_0 (ATerm r_73 (ATerm), ATerm s_73 (ATerm), ATerm t)
{
  ATerm b_17 = NULL,e_17 = NULL;
  b_17 = t;
  t = SSL_explode_term(b_17);
  if(match_cons(t, sym__2))
    {
      ATerm d_26 = ATgetArgument(t, 0);
      e_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_17;
  t = foldr_2_0(r_73, s_73, t);
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm f_17 = NULL;
  t = times_0_0(t);
  {
    ATerm o_6 (ATerm t)
    {
      t = term_c_25;
      return(t);
    }
    ATerm p_6 (ATerm t)
    {
      ATerm g_17 = NULL,h_17 = NULL;
      if(match_cons(t, sym__2))
        {
          g_17 = ATgetArgument(t, 0);
          h_17 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm e_26 = t;
        int f_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(g_17, h_17);
            ;
            LocalPopChoice(f_26);
          }
        else
          {
            t = e_26;
            t = SSL_addr(g_17, h_17);
          }
      }
      return(t);
    }
    t = crush_2_0(o_6, p_6, t);
    f_17 = t;
    t = SSL_TicksToSeconds(f_17);
  }
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm q_17 = NULL,r_17 = NULL,s_17 = NULL;
  q_17 = t;
  if(match_cons(t, sym__2))
    {
      r_17 = ATgetArgument(t, 0);
      s_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm g_26 = t;
    int h_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = s_17;
        if((r_17 != t))
          {
            _fail(t);
          }
        t = q_17;
        ;
        LocalPopChoice(h_26);
      }
    else
      {
        t = g_26;
        t = q_17;
        {
          ATerm i_26 = t;
          int j_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(r_17, s_17);
              ;
              LocalPopChoice(j_26);
            }
          else
            {
              t = i_26;
              t = SSL_gtr(r_17, s_17);
            }
          t = (ATerm) ATmakeAppl(sym__2, r_17, s_17);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm r_80 (ATerm), ATerm t)
{
  ATerm q_6 (ATerm t)
  {
    ATerm v_17 = NULL,w_17 = NULL;
    v_17 = t;
    t = term_p_8;
    t = get_config_0_0(t);
    w_17 = t;
    t = (ATerm) ATmakeAppl(sym__2, w_17, term_a_14);
    t = geq_0_0(t);
    t = v_17;
    t = r_80(t);
    return(t);
  }
  t = try_1_0(q_6, t);
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  ATerm r_6 (ATerm t)
  {
    ATerm y_17 = NULL,z_17 = NULL;
    t = run_time_0_0(t);
    y_17 = t;
    t = term_u_22;
    t = whoami_0_0(t);
    z_17 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue))), y_17), (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue))), z_17));
    t = (ATerm) ATmakeAppl(sym__2, term_e_22, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_k_26), y_17), term_v_13), z_17));
    return(t);
  }
  t = if_verbose1_1_0(r_6, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  t = report_run_time_0_0(t);
  t = SSL_exit((ATerm) ATmakeInt(0));
  return(t);
}
ATerm need_help_1_0 (ATerm x_84 (ATerm), ATerm t)
{
  ATerm l_26 = t;
  int m_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_n_26;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(m_26);
    }
  else
    {
      t = l_26;
      {
        ATerm s_6 (ATerm t)
        {
          ATerm o_26 = t;
          int p_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(!(match_cons(t, sym_Help_0)))
                _fail(t);
              ;
              LocalPopChoice(p_26);
            }
          else
            {
              t = o_26;
              {
                ATerm q_26 = t;
                int r_26 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Undefined_1_0(_id, t);
                    ;
                    LocalPopChoice(r_26);
                  }
                else
                  {
                    t = q_26;
                    if(!(match_cons(t, sym_Version_0)))
                      _fail(t);
                  }
              }
            }
          return(t);
        }
        t = option_defined_1_0(s_6, t);
      }
    }
  t = x_84(t);
  return(t);
}
ATerm map_1_0 (ATerm d_69 (ATerm), ATerm t)
{
  ATerm b_18 (ATerm t)
  {
    ATerm s_26 = t;
    int t_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(t_26);
      }
    else
      {
        t = s_26;
        t = Cons_2_0(d_69, b_18, t);
      }
    return(t);
  }
  t = b_18(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm d_18 = NULL,e_18 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      d_18 = ATgetFirst((ATermList) t);
      e_18 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm i_18 = NULL,j_18 = NULL;
        t = e_18;
        t = g_0(t);
        i_18 = t;
        t = d_18;
        t = f_0(t);
        j_18 = t;
        t = e_18;
        {
          ATerm t_6 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(i_18), j_18);
            return(t);
          }
          t = reverse_acc_2_0(f_0, t_6, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_u_22;
      t = g_0(t);
    }
  return(t);
}
ATerm reverse_0_0 (ATerm t)
{
  ATerm u_6 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2_0(_id, u_6, t);
  return(t);
}
ATerm Program_1_0 (ATerm b_62 (ATerm), ATerm t)
{
  ATerm k_18 = NULL,l_18 = NULL,m_18 = NULL,n_18 = NULL;
  n_18 = t;
  if(match_cons(t, sym_Program_1))
    {
      l_18 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_18);
  k_18 = t;
  t = l_18;
  t = b_62(t);
  m_18 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, m_18), k_18);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm u_26 = t;
  int v_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_a_26;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(v_26);
    }
  else
    {
      t = u_26;
      {
        ATerm v_6 (ATerm t)
        {
          t = Program_1_0(_id, t);
          return(t);
        }
        t = option_defined_1_0(v_6, t);
      }
    }
  t = try_1_0(_fail, t);
  t = term_w_26;
  t = echo_0_0(t);
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)));
  t = reverse_0_0(t);
  {
    ATerm w_6 (ATerm t)
    {
      ATerm r_18 = NULL;
      r_18 = t;
      t = (ATerm) ATinsert(ATinsert(ATempty, r_18), term_x_26);
      t = echo_0_0(t);
      return(t);
    }
    t = map_1_0(w_6, t);
    t = try_1_0(_fail, t);
  }
  return(t);
}
ATerm system_usage_0_0 (ATerm t)
{
  t = default_system_usage_0_0(t);
  return(t);
}
ATerm Undefined_1_0 (ATerm c_62 (ATerm), ATerm t)
{
  ATerm s_18 = NULL,t_18 = NULL,u_18 = NULL,v_18 = NULL;
  v_18 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      t_18 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_18);
  s_18 = t;
  t = t_18;
  t = c_62(t);
  u_18 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, u_18), s_18);
  return(t);
}
ATerm fetch_1_0 (ATerm n_69 (ATerm), ATerm t)
{
  ATerm z_18 (ATerm t)
  {
    ATerm y_26 = t;
    int z_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(n_69, _id, t);
        ;
        LocalPopChoice(z_26);
      }
    else
      {
        t = y_26;
        t = Cons_2_0(_id, z_18, t);
      }
    return(t);
  }
  t = z_18(t);
  return(t);
}
ATerm option_defined_1_0 (ATerm s_85 (ATerm), ATerm t)
{
  t = fetch_1_0(s_85, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm b_19 = NULL,c_19 = NULL;
  b_19 = t;
  {
    ATerm a_27 = t;
    int b_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = b_19;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm c_27 = ATgetFirst((ATermList) t);
                ATerm d_27 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = b_19;
          }
        ;
        LocalPopChoice(b_27);
      }
    else
      {
        t = a_27;
        t = (ATerm) ATinsert(ATempty, b_19);
      }
    c_19 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stdout_0), c_19);
    t = b_19;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_a_26;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm system_about_0_0 (ATerm t)
{
  t = default_system_about_0_0(t);
  return(t);
}
ATerm try_1_0 (ATerm x_79 (ATerm), ATerm t)
{
  ATerm e_27 = t;
  int f_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = x_79(t);
      ;
      LocalPopChoice(f_27);
    }
  else
    {
      t = e_27;
    }
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm g_27 = t;
  int h_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_6 (ATerm t)
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
          _fail(t);
        return(t);
      }
      ATerm y_6 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
        t = term_k_27;
        return(t);
      }
      ATerm z_6 (ATerm t)
      {
        t = term_l_27;
        return(t);
      }
      t = Option_3_0(x_6, y_6, z_6, t);
      ;
      LocalPopChoice(h_27);
    }
  else
    {
      t = g_27;
      {
        ATerm a_7 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm b_7 (ATerm t)
        {
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = term_m_27;
          return(t);
        }
        ATerm d_7 (ATerm t)
        {
          t = term_n_27;
          return(t);
        }
        t = Option_3_0(a_7, b_7, d_7, t);
      }
    }
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm i_19 = NULL,j_19 = NULL,k_19 = NULL,l_19 = NULL;
  if(match_cons(t, sym__3))
    {
      i_19 = ATgetArgument(t, 0);
      j_19 = ATgetArgument(t, 1);
      k_19 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, i_19, j_19);
  {
    ATerm o_27 = t;
    int p_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm q_27 = ATgetArgument(t, 0);
            ATerm r_27 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(i_19, j_19);
        ;
        LocalPopChoice(p_27);
      }
    else
      {
        t = o_27;
        t = (ATerm) ATempty;
      }
    l_19 = t;
    t = SSL_table_put(i_19, j_19, (ATerm) ATinsert(CheckATermList(l_19), k_19));
    t = (ATerm) ATmakeAppl(sym__3, i_19, j_19, k_19);
  }
  return(t);
}
ATerm register_usage_1_0 (ATerm x_86 (ATerm), ATerm t)
{
  ATerm q_19 = NULL;
  t = term_u_22;
  t = x_86(t);
  q_19 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_s_27, term_t_27, q_19);
  t = table_push_0_0(t);
  _fail(t);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm s_19 = NULL,t_19 = NULL,u_19 = NULL;
  s_19 = t;
  if(match_string(t, "register-usage-info"))
    {
      t = s_19;
      t = register_usage_1_0(d_0, t);
    }
  else
    {
      ATerm y_19 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          t_19 = ATgetFirst((ATermList) t);
          u_19 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = t_19;
      t = a_0(t);
      t = term_u_22;
      t = b_0(t);
      y_19 = t;
      t = (ATerm) ATinsert(CheckATermList(u_19), y_19);
    }
  return(t);
}
ATerm system_usage_switch_0_0 (ATerm t)
{
  ATerm e_7 (ATerm t)
  {
    ATerm a_20 = NULL;
    a_20 = t;
    if(match_string(t, "--help"))
      {
        t = a_20;
      }
    else
      {
        if(match_string(t, "-h"))
          {
            t = a_20;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
              _fail(t);
            t = a_20;
          }
      }
    return(t);
  }
  ATerm x_7 (ATerm t)
  {
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
    t = term_u_27;
    return(t);
  }
  ATerm y_7 (ATerm t)
  {
    t = term_v_27;
    return(t);
  }
  t = Option_3_0(e_7, x_7, y_7, t);
  return(t);
}
ATerm Cons_2_0 (ATerm v_56 (ATerm), ATerm w_56 (ATerm), ATerm t)
{
  ATerm b_20 = NULL,c_20 = NULL,d_20 = NULL,e_20 = NULL,f_20 = NULL,g_20 = NULL;
  g_20 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_20 = ATgetFirst((ATermList) t);
      d_20 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_20);
  b_20 = t;
  t = c_20;
  t = v_56(t);
  e_20 = t;
  t = d_20;
  t = w_56(t);
  f_20 = t;
  t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(f_20), e_20), b_20);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm v_86 (ATerm), ATerm t)
{
  ATerm n_20 = NULL;
  n_20 = t;
  {
    ATerm z_7 (ATerm t)
    {
      t = term_w_27;
      t = v_86(t);
      return(t);
    }
    t = try_1_0(z_7, t);
    t = n_20;
    {
      ATerm a_8 (ATerm t)
      {
        ATerm o_20 = NULL;
        o_20 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), o_20);
        t = (ATerm) ATmakeAppl(sym_Program_1, o_20);
        return(t);
      }
      ATerm b_8 (ATerm t)
      {
        ATerm x_27 = t;
        int y_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_27 = t;
            int a_28 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(a_28);
              }
            else
              {
                t = z_27;
                t = v_86(t);
                t = Cons_2_0(_id, b_8, t);
              }
            ;
            LocalPopChoice(y_27);
          }
        else
          {
            t = x_27;
            {
              ATerm q_20 = NULL,r_20 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  q_20 = ATgetFirst((ATermList) t);
                  r_20 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(r_20), (ATerm) ATmakeAppl(sym_Undefined_1, q_20));
            }
          }
        return(t);
      }
      t = Cons_2_0(a_8, b_8, t);
    }
  }
  return(t);
}
ATerm parse_options_1_0 (ATerm u_86 (ATerm), ATerm t)
{
  ATerm z_20 = NULL,a_21 = NULL,e_21 = NULL;
  z_20 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATempty);
  t = z_20;
  {
    ATerm c_8 (ATerm t)
    {
      ATerm b_28 = t;
      int c_28 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = u_86(t);
          ;
          LocalPopChoice(c_28);
        }
      else
        {
          t = b_28;
          {
            ATerm d_28 = t;
            int e_28 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = system_usage_switch_0_0(t);
                ;
                LocalPopChoice(e_28);
              }
            else
              {
                t = d_28;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(c_8, t);
    {
      ATerm d_8 (ATerm t)
      {
        ATerm f_28 = t;
        int g_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_21 = NULL;
            j_21 = t;
            {
              ATerm h_28 = t;
              int i_28 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = j_21;
                  {
                    ATerm j_28 = t;
                    int k_28 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = term_n_26;
                        t = get_config_0_0(t);
                        ;
                        LocalPopChoice(k_28);
                      }
                    else
                      {
                        t = j_28;
                        {
                          ATerm e_8 (ATerm t)
                          {
                            if(!(match_cons(t, sym_Help_0)))
                              _fail(t);
                            return(t);
                          }
                          t = option_defined_1_0(e_8, t);
                        }
                      }
                    t = j_21;
                    t = system_usage_0_0(t);
                    t = SSL_exit((ATerm) ATmakeInt(0));
                  }
                  ;
                  LocalPopChoice(i_28);
                }
              else
                {
                  t = h_28;
                  t = term_j_27;
                  t = get_config_0_0(t);
                  t = j_21;
                  t = system_about_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
            }
            ;
            LocalPopChoice(g_28);
          }
        else
          {
            t = f_28;
            {
              ATerm f_8 (ATerm t)
              {
                ATerm g_8 (ATerm t)
                {
                  a_21 = t;
                  return(t);
                }
                t = Undefined_1_0(g_8, t);
                return(t);
              }
              t = option_defined_1_0(f_8, t);
              t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(a_21)), (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue))));
              t = (ATerm) ATmakeAppl(sym__2, term_e_22, (ATerm) ATinsert(ATinsert(ATempty, not_null(a_21)), term_l_28));
              t = system_usage_0_0(t);
              t = SSL_exit((ATerm) ATmakeInt(1));
            }
          }
        return(t);
      }
      t = try_1_0(d_8, t);
      e_21 = t;
      t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)));
      t = e_21;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm z_84 (ATerm), ATerm a_85 (ATerm), ATerm b_85 (ATerm), ATerm c_85 (ATerm), ATerm t)
{
  ATerm z_14 = NULL;
  t = parse_options_1_0(z_84, t);
  z_14 = t;
  t = SSL_table_create((ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), z_14);
  t = z_14;
  t = b_85(t);
  {
    ATerm m_28 = t;
    int n_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(a_85, t);
        ;
        LocalPopChoice(n_28);
      }
    else
      {
        t = m_28;
        {
          ATerm o_28 = t;
          int p_28 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = c_85(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(p_28);
            }
          else
            {
              t = o_28;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm option_wrap_2_0 (ATerm d_85 (ATerm), ATerm e_85 (ATerm), ATerm t)
{
  t = option_wrap_4_0(d_85, default_usage_0_0, _id, e_85, t);
  return(t);
}
ATerm pp_stratego_0_0 (ATerm t)
{
  ATerm h_8 (ATerm t)
  {
    ATerm q_28 = t;
    int r_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = pp_stratego_options_0_0(t);
        ;
        LocalPopChoice(r_28);
      }
    else
      {
        t = q_28;
        t = io_options_0_0(t);
      }
    return(t);
  }
  ATerm i_8 (ATerm t)
  {
    ATerm j_8 (ATerm t)
    {
      ATerm s_28 = t;
      int t_28 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm m_21 = NULL;
          m_21 = t;
          t = term_u_28;
          t = get_config_0_0(t);
          t = m_21;
          ;
          LocalPopChoice(t_28);
        }
      else
        {
          t = s_28;
          {
            ATerm k_8 (ATerm t)
            {
              t = term_v_28;
              return(t);
            }
            t = xtc_transform_1_0(k_8, t);
          }
        }
      {
        ATerm l_8 (ATerm t)
        {
          t = term_w_28;
          return(t);
        }
        t = xtc_transform_1_0(l_8, t);
        {
          ATerm x_28 = t;
          int y_28 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm o_21 = NULL;
              o_21 = t;
              t = term_z_28;
              t = get_config_0_0(t);
              t = o_21;
              ;
              LocalPopChoice(y_28);
            }
          else
            {
              t = x_28;
              {
                ATerm m_8 (ATerm t)
                {
                  t = term_a_29;
                  return(t);
                }
                t = xtc_transform_1_0(m_8, t);
              }
            }
          {
            ATerm n_8 (ATerm t)
            {
              t = term_b_29;
              return(t);
            }
            ATerm o_8 (ATerm t)
            {
              ATerm q_21 = NULL;
              t = term_c_29;
              t = xtc_find_0_0(t);
              q_21 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, q_21), term_d_29);
              return(t);
            }
            t = xtc_transform_2_0(n_8, o_8, t);
          }
        }
      }
      return(t);
    }
    t = xtc_io_1_0(j_8, t);
    return(t);
  }
  t = option_wrap_2_0(h_8, i_8, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = pp_stratego_0_0(t);
  return(t);
}
