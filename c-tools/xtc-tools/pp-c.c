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
ATerm term_m_30;
ATerm term_l_30;
ATerm term_k_30;
ATerm term_d_30;
ATerm term_o_29;
ATerm term_n_29;
ATerm term_m_29;
ATerm term_l_29;
ATerm term_k_29;
ATerm term_f_29;
ATerm term_e_29;
ATerm term_d_29;
ATerm term_c_29;
ATerm term_b_29;
ATerm term_a_29;
ATerm term_v_28;
ATerm term_z_27;
ATerm term_y_27;
ATerm term_r_27;
ATerm term_o_27;
ATerm term_e_27;
ATerm term_z_26;
ATerm term_y_26;
ATerm term_x_26;
ATerm term_u_26;
ATerm term_r_26;
ATerm term_q_26;
ATerm term_p_26;
ATerm term_m_26;
ATerm term_l_26;
ATerm term_k_26;
ATerm term_h_26;
ATerm term_g_26;
ATerm term_d_26;
ATerm term_t_25;
ATerm term_u_24;
ATerm term_t_24;
ATerm term_s_24;
ATerm term_r_24;
ATerm term_q_24;
ATerm term_n_24;
ATerm term_j_24;
ATerm term_b_24;
ATerm term_a_24;
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
ATerm term_j_23;
ATerm term_i_23;
ATerm term_h_23;
ATerm term_g_23;
ATerm term_e_23;
ATerm term_d_23;
ATerm term_b_23;
ATerm term_a_23;
ATerm term_z_22;
ATerm term_y_22;
ATerm term_u_22;
ATerm term_t_22;
ATerm term_s_22;
ATerm term_r_22;
ATerm term_q_22;
ATerm term_n_22;
ATerm term_k_22;
ATerm term_j_22;
ATerm term_i_22;
ATerm term_h_22;
ATerm term_g_22;
ATerm term_f_22;
ATerm term_x_21;
ATerm term_v_21;
ATerm term_u_21;
ATerm term_q_21;
ATerm term_o_21;
ATerm term_n_21;
ATerm term_m_21;
ATerm term_l_21;
ATerm term_g_21;
ATerm term_f_21;
ATerm term_e_21;
ATerm term_d_21;
ATerm term_c_21;
ATerm term_z_20;
ATerm term_y_20;
ATerm term_x_20;
ATerm term_w_20;
ATerm term_t_20;
ATerm term_s_20;
ATerm term_r_20;
ATerm term_n_20;
ATerm term_m_20;
ATerm term_l_20;
ATerm term_j_20;
ATerm term_i_20;
ATerm term_h_20;
ATerm term_g_20;
ATerm term_f_20;
ATerm term_y_19;
ATerm term_x_19;
ATerm term_w_19;
ATerm term_v_19;
ATerm term_j_19;
ATerm term_i_19;
ATerm term_h_19;
ATerm term_e_19;
ATerm term_d_19;
ATerm term_c_19;
ATerm term_b_19;
ATerm term_a_19;
ATerm term_x_18;
ATerm term_v_18;
ATerm term_u_18;
ATerm term_t_18;
ATerm term_n_18;
ATerm term_m_18;
ATerm term_l_18;
ATerm term_e_18;
ATerm term_d_18;
ATerm term_c_18;
ATerm term_z_17;
ATerm term_y_17;
ATerm term_x_17;
ATerm term_w_17;
ATerm term_t_17;
ATerm term_q_17;
ATerm term_p_17;
ATerm term_l_17;
ATerm term_k_17;
ATerm term_j_17;
ATerm term_i_17;
ATerm term_h_17;
ATerm term_g_17;
ATerm term_f_17;
ATerm term_e_17;
ATerm term_x_16;
ATerm term_w_16;
ATerm term_t_16;
ATerm term_s_16;
ATerm term_o_16;
ATerm term_l_16;
ATerm term_j_16;
ATerm term_i_16;
ATerm term_h_16;
ATerm term_g_16;
ATerm term_y_15;
ATerm term_x_15;
ATerm term_u_15;
ATerm term_q_15;
ATerm term_h_15;
ATerm term_n_14;
ATerm term_m_14;
ATerm term_g_14;
ATerm term_f_14;
ATerm term_e_14;
ATerm term_w_13;
ATerm term_t_13;
ATerm term_q_13;
ATerm term_n_13;
ATerm term_k_13;
ATerm term_f_13;
ATerm term_e_13;
ATerm term_b_13;
ATerm term_z_12;
ATerm term_y_12;
ATerm term_x_12;
ATerm term_x_11;
ATerm term_k_11;
ATerm term_s_10;
ATerm term_r_10;
ATerm term_q_10;
ATerm term_k_9;
ATerm term_f_9;
ATerm term_a_9;
ATerm term_w_1;
void init_constant_terms (void)
{
  ATprotect(&(term_w_1));
  term_w_1 = (ATerm) ATmakeAppl(ATmakeSymbol("abox2text", 0, ATtrue));
  ATprotect(&(term_a_9));
  term_a_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_f_9));
  term_f_9 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_k_9));
  term_k_9 = (ATerm) ATmakeAppl(ATmakeSymbol("abox-format", 0, ATtrue));
  ATprotect(&(term_q_10));
  term_q_10 = (ATerm) ATmakeInt(46);
  ATprotect(&(term_r_10));
  term_r_10 = (ATerm) ATmakeAppl(ATmakeSymbol(".", 0, ATtrue));
  ATprotect(&(term_s_10));
  term_s_10 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_b_13));
  term_b_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_g_14));
  term_g_14 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_16, term_f_9, term_h_16);
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_l_16));
  term_l_16 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_16, term_l_16, term_o_16);
  ATprotect(&(term_t_16));
  term_t_16 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_16, term_w_16, term_x_16);
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_g_17));
  term_g_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_h_17));
  term_h_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_17, term_x_11, term_g_17);
  ATprotect(&(term_i_17));
  term_i_17 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_j_17));
  term_j_17 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_k_17));
  term_k_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_l_17));
  term_l_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_17, term_j_17, term_k_17);
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_q_17));
  term_q_17 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_t_17));
  term_t_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_w_17));
  term_w_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_17, term_q_17, term_t_17);
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_y_17));
  term_y_17 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_z_17));
  term_z_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_17, term_y_17, term_z_17);
  ATprotect(&(term_d_18));
  term_d_18 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_e_18));
  term_e_18 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_l_18));
  term_l_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_m_18));
  term_m_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_18, term_e_18, term_l_18);
  ATprotect(&(term_n_18));
  term_n_18 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_t_18));
  term_t_18 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_u_18));
  term_u_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_v_18));
  term_v_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_18, term_t_18, term_u_18);
  ATprotect(&(term_x_18));
  term_x_18 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_a_19));
  term_a_19 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_b_19));
  term_b_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_c_19));
  term_c_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_18, term_a_19, term_b_19);
  ATprotect(&(term_d_19));
  term_d_19 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_e_19));
  term_e_19 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_h_19));
  term_h_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_i_19));
  term_i_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_19, term_e_19, term_h_19);
  ATprotect(&(term_j_19));
  term_j_19 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_v_19));
  term_v_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_w_19));
  term_w_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_19, term_k_11, term_v_19);
  ATprotect(&(term_x_19));
  term_x_19 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_y_19));
  term_y_19 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_f_20));
  term_f_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_g_20));
  term_g_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_19, term_y_19, term_f_20);
  ATprotect(&(term_h_20));
  term_h_20 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_i_20));
  term_i_20 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_j_20));
  term_j_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_l_20));
  term_l_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_20, term_i_20, term_j_20);
  ATprotect(&(term_m_20));
  term_m_20 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_n_20));
  term_n_20 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_r_20));
  term_r_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_s_20));
  term_s_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_20, term_n_20, term_r_20);
  ATprotect(&(term_t_20));
  term_t_20 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_w_20));
  term_w_20 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_x_20));
  term_x_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_y_20));
  term_y_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_20, term_w_20, term_x_20);
  ATprotect(&(term_z_20));
  term_z_20 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_c_21));
  term_c_21 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_d_21));
  term_d_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_e_21));
  term_e_21 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_20, term_c_21, term_d_21);
  ATprotect(&(term_f_21));
  term_f_21 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_g_21));
  term_g_21 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_l_21));
  term_l_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_m_21));
  term_m_21 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_21, term_g_21, term_l_21);
  ATprotect(&(term_n_21));
  term_n_21 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_o_21));
  term_o_21 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_q_21));
  term_q_21 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_u_21));
  term_u_21 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_21, term_o_21, term_q_21);
  ATprotect(&(term_v_21));
  term_v_21 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_x_21));
  term_x_21 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_f_22));
  term_f_22 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_g_22));
  term_g_22 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_21, term_x_21, term_f_22);
  ATprotect(&(term_h_22));
  term_h_22 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_i_22));
  term_i_22 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_j_22));
  term_j_22 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_k_22));
  term_k_22 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_22, term_i_22, term_j_22);
  ATprotect(&(term_n_22));
  term_n_22 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_q_22));
  term_q_22 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_r_22));
  term_r_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_s_22));
  term_s_22 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_22, term_q_22, term_r_22);
  ATprotect(&(term_t_22));
  term_t_22 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_u_22));
  term_u_22 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_y_22));
  term_y_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_z_22));
  term_z_22 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_22, term_u_22, term_y_22);
  ATprotect(&(term_a_23));
  term_a_23 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_b_23));
  term_b_23 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_d_23));
  term_d_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_e_23));
  term_e_23 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_23, term_b_23, term_d_23);
  ATprotect(&(term_g_23));
  term_g_23 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_h_23));
  term_h_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_i_23));
  term_i_23 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_23, term_s_10, term_h_23);
  ATprotect(&(term_j_23));
  term_j_23 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_k_23));
  term_k_23 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_l_23));
  term_l_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_m_23));
  term_m_23 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_23, term_k_23, term_l_23);
  ATprotect(&(term_n_23));
  term_n_23 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_o_23));
  term_o_23 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_p_23));
  term_p_23 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_q_23));
  term_q_23 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_23, term_o_23, term_p_23);
  ATprotect(&(term_r_23));
  term_r_23 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_s_23));
  term_s_23 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_t_23));
  term_t_23 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_u_23));
  term_u_23 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_23, term_s_23, term_t_23);
  ATprotect(&(term_a_24));
  term_a_24 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_b_24));
  term_b_24 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_j_24));
  term_j_24 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_n_24));
  term_n_24 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file> (file, mode)", 0, ATtrue));
  ATprotect(&(term_q_24));
  term_q_24 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_r_24));
  term_r_24 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_s_24));
  term_s_24 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_t_24));
  term_t_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_u_24));
  term_u_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_t_25));
  term_t_25 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_d_26));
  term_d_26 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_g_26));
  term_g_26 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_h_26));
  term_h_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_k_26));
  term_k_26 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_l_26));
  term_l_26 = (ATerm) ATmakeAppl(sym_Verbose_1, term_k_26);
  ATprotect(&(term_m_26));
  term_m_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_p_26));
  term_p_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_q_26));
  term_q_26 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_r_26));
  term_r_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_u_26));
  term_u_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_x_26));
  term_x_26 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_y_26));
  term_y_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_z_26));
  term_z_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_e_27));
  term_e_27 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_o_27));
  term_o_27 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_r_27));
  term_r_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_y_27));
  term_y_27 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_z_27));
  term_z_27 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_v_28));
  term_v_28 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_a_29));
  term_a_29 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_b_29));
  term_b_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_c_29));
  term_c_29 = (ATerm) ATmakeAppl(sym__3, term_a_29, term_b_29, term_q_24);
  ATprotect(&(term_d_29));
  term_d_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_e_29));
  term_e_29 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_f_29));
  term_f_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_k_29));
  term_k_29 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_l_29));
  term_l_29 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_m_29));
  term_m_29 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_n_29));
  term_n_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_o_29));
  term_o_29 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_d_30));
  term_d_30 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_k_30));
  term_k_30 = (ATerm) ATmakeAppl(ATmakeSymbol("ast2abox", 0, ATtrue));
  ATprotect(&(term_l_30));
  term_l_30 = (ATerm) ATmakeAppl(ATmakeSymbol("C.pp.af", 0, ATtrue));
  ATprotect(&(term_m_30));
  term_m_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
}
ATerm xtc_abox2text_0_0 (ATerm);
ATerm pass_verbose_0_0 (ATerm);
ATerm xtc_abox_format_0_0 (ATerm);
ATerm separate_by_0_0 (ATerm);
ATerm at_last_1_0 (ATerm i_70 (ATerm), ATerm);
ATerm init_0_0 (ATerm);
ATerm elem_1_0 (ATerm q_69 (ATerm), ATerm);
ATerm elem_0_0 (ATerm);
ATerm at_suffix_1_0 (ATerm b_70 (ATerm), ATerm);
ATerm split_fetch_1_0 (ATerm u_69 (ATerm), ATerm);
ATerm list_tokenize_1_0 (ATerm r_92 (ATerm), ATerm);
ATerm string_tokenize_0_0 (ATerm);
ATerm remove_extension_0_0 (ATerm);
ATerm table_getlist_0_0 (ATerm);
ATerm if_verbose5_1_0 (ATerm v_78 (ATerm), ATerm);
ATerm xtc_find_version_loc_0_0 (ATerm);
ATerm filter_1_0 (ATerm a_77 (ATerm), ATerm);
ATerm repeat_1_0 (ATerm b_85 (ATerm), ATerm);
ATerm xtc_import_0_0 (ATerm);
ATerm say_1_0 (ATerm e_65 (ATerm), ATerm);
ATerm if_verbose4_1_0 (ATerm u_78 (ATerm), ATerm);
ATerm if_verbose6_1_0 (ATerm w_78 (ATerm), ATerm);
ATerm HdMember_p__2_0 (ATerm o_73 (ATerm), ATerm p_73 (ATerm), ATerm);
ATerm union_1_0 (ATerm k_73 (ATerm), ATerm);
ATerm union_0_0 (ATerm);
ATerm table_append_0_0 (ATerm);
ATerm table_putlist_1_0 (ATerm f_79 (ATerm), ATerm);
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
ATerm WriteToFile_1_0 (ATerm o_65 (ATerm), ATerm);
ATerm WriteToBinaryFile_0_0 (ATerm);
ATerm write_to_0_0 (ATerm);
ATerm xtc_transform_term_2_0 (ATerm s_81 (ATerm), ATerm t_81 (ATerm), ATerm);
ATerm concat_strings_0_0 (ATerm);
ATerm signal_to_descr_0_0 (ATerm);
ATerm fetch_elem_1_0 (ATerm t_69 (ATerm), ATerm);
ATerm signal_from_number_0_0 (ATerm);
ATerm warn_ifsignaled_0_0 (ATerm);
ATerm fork_0_0 (ATerm);
ATerm fork_2_0 (ATerm b_64 (ATerm), ATerm c_64 (ATerm), ATerm);
ATerm fork_and_wait_1_0 (ATerm d_64 (ATerm), ATerm);
ATerm call_0_0 (ATerm);
ATerm xtc_find_warning_0_0 (ATerm);
ATerm xtc_command_1_0 (ATerm j_81 (ATerm), ATerm);
ATerm assert_1_0 (ATerm u_77 (ATerm), ATerm);
ATerm obsolete_1_0 (ATerm h_65 (ATerm), ATerm);
ATerm open_file_0_0 (ATerm);
ATerm new_0_0 (ATerm);
ATerm new_file_0_0 (ATerm);
ATerm xtc_new_file_0_0 (ATerm);
ATerm xtc_transform_file_2_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm);
ATerm FILE_1_0 (ATerm y_61 (ATerm), ATerm);
ATerm xtc_transform_2_0 (ATerm l_81 (ATerm), ATerm m_81 (ATerm), ATerm);
ATerm copy_to_1_0 (ATerm k_0 (ATerm), ATerm);
ATerm table_pop_0_0 (ATerm);
ATerm end_scope_1_0 (ATerm r_77 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm m_78 (ATerm), ATerm n_78 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm q_77 (ATerm), ATerm);
ATerm xtc_temp_files_1_0 (ATerm v_80 (ATerm), ATerm);
ATerm xtc_io_1_0 (ATerm w_80 (ATerm), ATerm);
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
ATerm foldr_2_0 (ATerm x_75 (ATerm), ATerm y_75 (ATerm), ATerm);
ATerm crush_2_0 (ATerm v_73 (ATerm), ATerm w_73 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm r_78 (ATerm), ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm need_help_1_0 (ATerm x_82 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm reverse_0_0 (ATerm);
ATerm Program_1_0 (ATerm f_62 (ATerm), ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm g_62 (ATerm), ATerm);
ATerm fetch_1_0 (ATerm r_69 (ATerm), ATerm);
ATerm option_defined_1_0 (ATerm s_83 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm system_about_0_0 (ATerm);
ATerm concat_0_0 (ATerm);
ATerm conc_more_lists_0_0 (ATerm);
ATerm at_end_1_0 (ATerm x_69 (ATerm), ATerm);
ATerm conc_two_lists_0_0 (ATerm);
ATerm conc_0_0 (ATerm);
ATerm _2_0 (ATerm q_55 (ATerm), ATerm r_55 (ATerm), ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm debug_1_0 (ATerm a_65 (ATerm), ATerm);
ATerm map_1_0 (ATerm h_69 (ATerm), ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm try_1_0 (ATerm x_77 (ATerm), ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm register_usage_1_0 (ATerm x_84 (ATerm), ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm system_usage_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm z_56 (ATerm), ATerm a_57 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm v_84 (ATerm), ATerm);
ATerm parse_options_1_0 (ATerm u_84 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm z_82 (ATerm), ATerm a_83 (ATerm), ATerm b_83 (ATerm), ATerm c_83 (ATerm), ATerm);
ATerm option_wrap_2_0 (ATerm d_83 (ATerm), ATerm e_83 (ATerm), ATerm);
ATerm xtc_io_wrap_2_0 (ATerm a_81 (ATerm), ATerm b_81 (ATerm), ATerm);
ATerm xtc_io_wrap_1_0 (ATerm z_80 (ATerm), ATerm);
ATerm io_pp_c_0_0 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm xtc_abox2text_0_0 (ATerm t)
{
  ATerm c_0 (ATerm t)
  {
    t = term_w_1;
    return(t);
  }
  t = xtc_transform_2_0(c_0, pass_verbose_0_0, t);
  return(t);
}
ATerm pass_verbose_0_0 (ATerm t)
{
  ATerm i_1 = NULL,k_1 = NULL,l_1 = NULL;
  t = term_a_9;
  {
    ATerm b_9 = t;
    int c_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        ;
        LocalPopChoice(c_9);
      }
    else
      {
        t = b_9;
        t = term_f_9;
      }
    i_1 = t;
    t = (ATerm) ATmakeAppl(sym__2, i_1, term_f_9);
    {
      ATerm g_9 = t;
      int h_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SSL_subti(i_1, (ATerm) ATmakeInt(1));
          ;
          LocalPopChoice(h_9);
        }
      else
        {
          t = g_9;
          t = SSL_subtr(i_1, (ATerm) ATmakeInt(1));
        }
      l_1 = t;
      t = SSL_int_to_string(l_1);
      k_1 = t;
      t = (ATerm) ATinsert(ATinsert(ATempty, k_1), term_a_9);
    }
  }
  return(t);
}
ATerm xtc_abox_format_0_0 (ATerm t)
{
  ATerm n_0 (ATerm t)
  {
    t = term_k_9;
    return(t);
  }
  t = xtc_transform_2_0(n_0, pass_verbose_0_0, t);
  return(t);
}
ATerm separate_by_0_0 (ATerm t)
{
  ATerm m_1 = NULL,n_1 = NULL;
  if(match_cons(t, sym__2))
    {
      m_1 = ATgetArgument(t, 0);
      n_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_1;
  {
    ATerm p_9 = t;
    int q_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(q_9);
      }
    else
      {
        t = p_9;
        {
          ATerm o_0 (ATerm t)
          {
            ATerm r_9 = t;
            int x_9 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(x_9);
              }
            else
              {
                t = r_9;
                {
                  ATerm o_1 = NULL;
                  t = Cons_2_0(_id, o_0, t);
                  o_1 = t;
                  t = (ATerm) ATinsert(CheckATermList(o_1), m_1);
                }
              }
            return(t);
          }
          t = Cons_2_0(_id, o_0, t);
        }
      }
  }
  return(t);
}
ATerm at_last_1_0 (ATerm i_70 (ATerm), ATerm t)
{
  ATerm x_1 (ATerm t)
  {
    ATerm y_9 = t;
    int z_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_0 (ATerm t)
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          return(t);
        }
        t = Cons_2_0(_id, p_0, t);
        t = i_70(t);
        ;
        LocalPopChoice(z_9);
      }
    else
      {
        t = y_9;
        t = Cons_2_0(_id, x_1, t);
      }
    return(t);
  }
  t = x_1(t);
  return(t);
}
ATerm init_0_0 (ATerm t)
{
  ATerm q_0 (ATerm t)
  {
    ATerm d_2 = NULL;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        ATerm e_10 = ATgetFirst((ATermList) t);
        d_2 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = d_2;
    return(t);
  }
  t = at_last_1_0(q_0, t);
  return(t);
}
ATerm elem_1_0 (ATerm q_69 (ATerm), ATerm t)
{
  ATerm e_2 = NULL,g_2 = NULL;
  if(match_cons(t, sym__2))
    {
      e_2 = ATgetArgument(t, 0);
      g_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_2;
  {
    ATerm r_0 (ATerm t)
    {
      ATerm h_2 = NULL;
      h_2 = t;
      t = (ATerm) ATmakeAppl(sym__2, e_2, h_2);
      t = q_69(t);
      t = h_2;
      return(t);
    }
    t = SRTS_one(r_0, t);
  }
  return(t);
}
ATerm elem_0_0 (ATerm t)
{
  ATerm s_0 (ATerm t)
  {
    ATerm i_2 = NULL;
    if(match_cons(t, sym__2))
      {
        i_2 = ATgetArgument(t, 0);
        if((i_2 != ATgetArgument(t, 1)))
          {
            _fail(ATgetArgument(t, 1));
          }
      }
    else
      _fail(t);
    return(t);
  }
  t = elem_1_0(s_0, t);
  return(t);
}
ATerm at_suffix_1_0 (ATerm b_70 (ATerm), ATerm t)
{
  ATerm m_2 (ATerm t)
  {
    ATerm g_10 = t;
    int h_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = b_70(t);
        ;
        LocalPopChoice(h_10);
      }
    else
      {
        t = g_10;
        t = Cons_2_0(_id, m_2, t);
      }
    return(t);
  }
  t = m_2(t);
  return(t);
}
ATerm split_fetch_1_0 (ATerm u_69 (ATerm), ATerm t)
{
  ATerm n_2 = NULL,o_2 = NULL;
  ATerm t_0 (ATerm t)
  {
    t = Cons_2_0(u_69, _id, t);
    {
      ATerm u_0 (ATerm t)
      {
        n_2 = t;
        return(t);
      }
      t = Cons_2_0(_id, u_0, t);
      t = (ATerm) ATempty;
    }
    return(t);
  }
  t = at_suffix_1_0(t_0, t);
  o_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_2, not_null(n_2));
  return(t);
}
ATerm list_tokenize_1_0 (ATerm r_92 (ATerm), ATerm t)
{
  ATerm y_2 = NULL,b_3 = NULL;
  ATerm i_10 = t;
  int j_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = split_fetch_1_0(r_92, t);
      ;
      LocalPopChoice(j_10);
    }
  else
    {
      t = i_10;
      {
        ATerm v_2 = NULL;
        v_2 = t;
        t = (ATerm) ATmakeAppl(sym__2, v_2, (ATerm) ATempty);
      }
    }
  if(match_cons(t, sym__2))
    {
      y_2 = ATgetArgument(t, 0);
      b_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_2;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = b_3;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = (ATerm) ATempty;
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm k_10 = ATgetFirst((ATermList) t);
              ATerm l_10 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = b_3;
          t = list_tokenize_1_0(r_92, t);
        }
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          ATerm m_10 = ATgetFirst((ATermList) t);
          ATerm n_10 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = b_3;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = (ATerm) ATinsert(ATempty, y_2);
        }
      else
        {
          ATerm n_3 = NULL;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm o_10 = ATgetFirst((ATermList) t);
              ATerm p_10 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = b_3;
          t = list_tokenize_1_0(r_92, t);
          n_3 = t;
          t = (ATerm) ATinsert(CheckATermList(n_3), y_2);
        }
    }
  return(t);
}
ATerm string_tokenize_0_0 (ATerm t)
{
  ATerm p_3 = NULL,q_3 = NULL;
  ATerm v_0 (ATerm t)
  {
    ATerm r_3 = NULL;
    r_3 = t;
    t = SSL_explode_string(r_3);
    return(t);
  }
  t = _2_0(_id, v_0, t);
  if(match_cons(t, sym__2))
    {
      p_3 = ATgetArgument(t, 0);
      q_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_3;
  {
    ATerm w_0 (ATerm t)
    {
      ATerm s_3 = NULL;
      s_3 = t;
      t = (ATerm) ATmakeAppl(sym__2, s_3, p_3);
      t = elem_0_0(t);
      return(t);
    }
    t = list_tokenize_1_0(w_0, t);
    {
      ATerm x_0 (ATerm t)
      {
        ATerm t_3 = NULL;
        t_3 = t;
        t = SSL_implode_string(t_3);
        return(t);
      }
      t = map_1_0(x_0, t);
    }
  }
  return(t);
}
ATerm remove_extension_0_0 (ATerm t)
{
  ATerm v_3 = NULL,w_3 = NULL;
  v_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, term_q_10), v_3);
  t = string_tokenize_0_0(t);
  t = init_0_0(t);
  w_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_10, w_3);
  t = separate_by_0_0(t);
  t = concat_strings_0_0(t);
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm y_3 = NULL;
  y_3 = t;
  t = SSL_table_keys(y_3);
  {
    ATerm y_0 (ATerm t)
    {
      ATerm z_3 = NULL,a_4 = NULL;
      z_3 = t;
      t = SSL_table_get(y_3, z_3);
      a_4 = t;
      t = (ATerm) ATmakeAppl(sym__2, z_3, a_4);
      return(t);
    }
    t = map_1_0(y_0, t);
  }
  return(t);
}
ATerm if_verbose5_1_0 (ATerm v_78 (ATerm), ATerm t)
{
  ATerm z_0 (ATerm t)
  {
    ATerm b_4 = NULL,e_4 = NULL;
    b_4 = t;
    t = term_a_9;
    t = get_config_0_0(t);
    e_4 = t;
    t = (ATerm) ATmakeAppl(sym__2, e_4, term_s_10);
    t = geq_0_0(t);
    t = b_4;
    t = v_78(t);
    return(t);
  }
  t = try_1_0(z_0, t);
  return(t);
}
ATerm xtc_find_version_loc_0_0 (ATerm t)
{
  ATerm j_4 = NULL,k_4 = NULL,m_4 = NULL;
  if(match_cons(t, sym__2))
    {
      j_4 = ATgetArgument(t, 0);
      k_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Tool_1, j_4));
  {
    ATerm a_1 (ATerm t)
    {
      if(match_cons(t, sym__2))
        {
          if((k_4 != ATgetArgument(t, 0)))
            {
              _fail(ATgetArgument(t, 0));
            }
          m_4 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      return(t);
    }
    t = fetch_1_0(a_1, t);
    t = not_null(m_4);
  }
  return(t);
}
ATerm filter_1_0 (ATerm a_77 (ATerm), ATerm t)
{
  ATerm t_10 = t;
  int u_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(u_10);
    }
  else
    {
      t = t_10;
      {
        ATerm v_10 = t;
        int a_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_1 (ATerm t)
            {
              t = filter_1_0(a_77, t);
              return(t);
            }
            t = Cons_2_0(a_77, c_1, t);
            ;
            LocalPopChoice(a_11);
          }
        else
          {
            t = v_10;
            {
              ATerm t_4 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm b_11 = ATgetFirst((ATermList) t);
                  t_4 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = t_4;
              t = filter_1_0(a_77, t);
            }
          }
      }
    }
  return(t);
}
ATerm repeat_1_0 (ATerm b_85 (ATerm), ATerm t)
{
  ATerm v_4 (ATerm t)
  {
    ATerm e_1 (ATerm t)
    {
      t = b_85(t);
      t = v_4(t);
      return(t);
    }
    t = try_1_0(e_1, t);
    return(t);
  }
  t = v_4(t);
  return(t);
}
ATerm xtc_import_0_0 (ATerm t)
{
  ATerm w_4 = NULL;
  w_4 = t;
  {
    ATerm f_1 (ATerm t)
    {
      t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Import_0));
      t = filter_1_0(xtc_read_0_0, t);
      {
        ATerm h_11 = t;
        if((PushChoice() == 0))
          {
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = h_11;
          }
      }
      return(t);
    }
    t = repeat_1_0(f_1, t);
    t = w_4;
  }
  return(t);
}
ATerm say_1_0 (ATerm e_65 (ATerm), ATerm t)
{
  ATerm z_4 = NULL,e_0 = NULL;
  z_4 = t;
  t = e_65(t);
  e_0 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, e_0));
  t = z_4;
  return(t);
}
ATerm if_verbose4_1_0 (ATerm u_78 (ATerm), ATerm t)
{
  ATerm j_1 (ATerm t)
  {
    ATerm a_5 = NULL,b_5 = NULL;
    a_5 = t;
    t = term_a_9;
    t = get_config_0_0(t);
    b_5 = t;
    t = (ATerm) ATmakeAppl(sym__2, b_5, term_k_11);
    t = geq_0_0(t);
    t = a_5;
    t = u_78(t);
    return(t);
  }
  t = try_1_0(j_1, t);
  return(t);
}
ATerm if_verbose6_1_0 (ATerm w_78 (ATerm), ATerm t)
{
  ATerm p_1 (ATerm t)
  {
    ATerm c_5 = NULL,d_5 = NULL;
    c_5 = t;
    t = term_a_9;
    t = get_config_0_0(t);
    d_5 = t;
    t = (ATerm) ATmakeAppl(sym__2, d_5, term_x_11);
    t = geq_0_0(t);
    t = c_5;
    t = w_78(t);
    return(t);
  }
  t = try_1_0(p_1, t);
  return(t);
}
ATerm HdMember_p__2_0 (ATerm o_73 (ATerm), ATerm p_73 (ATerm), ATerm t)
{
  ATerm r_5 = NULL,s_5 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_5 = ATgetFirst((ATermList) t);
      s_5 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = p_73(t);
  {
    ATerm q_1 (ATerm t)
    {
      ATerm e_6 = NULL;
      e_6 = t;
      t = (ATerm) ATmakeAppl(sym__2, r_5, e_6);
      t = o_73(t);
      return(t);
    }
    t = fetch_1_0(q_1, t);
    t = s_5;
  }
  return(t);
}
ATerm union_1_0 (ATerm k_73 (ATerm), ATerm t)
{
  ATerm h_6 = NULL,i_6 = NULL;
  if(match_cons(t, sym__2))
    {
      i_6 = ATgetArgument(t, 0);
      h_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_6;
  {
    ATerm m_6 (ATerm t)
    {
      ATerm y_11 = t;
      int z_11 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = h_6;
          ;
          LocalPopChoice(z_11);
        }
      else
        {
          t = y_11;
          {
            ATerm b_12 = t;
            int e_12 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm r_1 (ATerm t)
                {
                  t = h_6;
                  return(t);
                }
                t = HdMember_p__2_0(k_73, r_1, t);
                t = m_6(t);
                ;
                LocalPopChoice(e_12);
              }
            else
              {
                t = b_12;
                t = Cons_2_0(_id, m_6, t);
              }
          }
        }
      return(t);
    }
    t = m_6(t);
  }
  return(t);
}
ATerm union_0_0 (ATerm t)
{
  ATerm s_1 (ATerm t)
  {
    ATerm n_6 = NULL;
    if(match_cons(t, sym__2))
      {
        n_6 = ATgetArgument(t, 0);
        if((n_6 != ATgetArgument(t, 1)))
          {
            _fail(ATgetArgument(t, 1));
          }
      }
    else
      _fail(t);
    return(t);
  }
  t = union_1_0(s_1, t);
  return(t);
}
ATerm table_append_0_0 (ATerm t)
{
  ATerm s_6 = NULL,v_6 = NULL,w_6 = NULL,z_6 = NULL,a_7 = NULL;
  if(match_cons(t, sym__3))
    {
      s_6 = ATgetArgument(t, 0);
      v_6 = ATgetArgument(t, 1);
      w_6 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, s_6, v_6);
  {
    ATerm g_12 = t;
    int h_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm n_12 = ATgetArgument(t, 0);
            ATerm p_12 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(s_6, v_6);
        ;
        LocalPopChoice(h_12);
      }
    else
      {
        t = g_12;
        t = (ATerm) ATempty;
      }
    z_6 = t;
    t = (ATerm) ATmakeAppl(sym__2, z_6, w_6);
    t = union_0_0(t);
    a_7 = t;
    t = SSL_table_put(s_6, v_6, a_7);
    t = (ATerm) ATmakeAppl(sym__3, s_6, v_6, w_6);
  }
  return(t);
}
ATerm table_putlist_1_0 (ATerm f_79 (ATerm), ATerm t)
{
  ATerm e_7 = NULL,f_7 = NULL;
  if(match_cons(t, sym__2))
    {
      f_7 = ATgetArgument(t, 0);
      e_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_7;
  {
    ATerm t_1 (ATerm t)
    {
      ATerm g_7 = NULL,j_7 = NULL;
      if(match_cons(t, sym__2))
        {
          g_7 = ATgetArgument(t, 0);
          j_7 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__3, f_7, g_7, j_7);
      t = f_79(t);
      return(t);
    }
    t = map_1_0(t_1, t);
  }
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm s_12 = t;
  int t_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_1 = NULL;
      b_1 = t;
      t = SSL_access(b_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_R__OK_0)));
      LocalPopChoice(t_12);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = s_12;
      {
        ATerm u_12 = t;
        int v_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_12 = t;
            if((PushChoice() == 0))
              {
                ATerm d_1 = NULL;
                d_1 = t;
                t = SSL_access(d_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_F__OK_0)));
                PopChoice();
                _fail(t);
              }
            else
              {
                t = w_12;
              }
            {
              ATerm u_1 (ATerm t)
              {
                t = term_x_12;
                return(t);
              }
              t = debug_1_0(u_1, t);
            }
            ;
            LocalPopChoice(v_12);
          }
        else
          {
            t = u_12;
            {
              ATerm v_1 (ATerm t)
              {
                t = term_y_12;
                return(t);
              }
              t = debug_1_0(v_1, t);
            }
          }
        t = (ATerm) ATempty;
      }
    }
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm p_7 = NULL,r_7 = NULL,s_7 = NULL;
  p_7 = t;
  {
    ATerm y_1 (ATerm t)
    {
      ATerm z_1 (ATerm t)
      {
        t = term_z_12;
        return(t);
      }
      t = debug_1_0(z_1, t);
      return(t);
    }
    t = if_verbose5_1_0(y_1, t);
    {
      ATerm a_13 = t;
      if((PushChoice() == 0))
        {
          t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Imported_1, p_7));
          PopChoice();
          _fail(t);
        }
      else
        {
          t = a_13;
        }
      r_7 = t;
      t = SSL_table_put((ATerm)ATmakeAppl(sym_XTC_0), (ATerm)ATmakeAppl(sym_Repository_0), (ATerm) ATinsert(ATempty, p_7));
      t = r_7;
      {
        ATerm c_2 (ATerm t)
        {
          ATerm f_2 (ATerm t)
          {
            t = term_b_13;
            return(t);
          }
          t = debug_1_0(f_2, t);
          return(t);
        }
        t = if_verbose4_1_0(c_2, t);
        t = read_repository_file_0_0(t);
        {
          ATerm j_2 (ATerm t)
          {
            ATerm l_2 (ATerm t)
            {
              t = term_e_13;
              return(t);
            }
            t = say_1_0(l_2, t);
            return(t);
          }
          t = if_verbose6_1_0(j_2, t);
          s_7 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_f_13, s_7);
          t = table_putlist_1_0(table_append_0_0, t);
          {
            ATerm p_2 (ATerm t)
            {
              ATerm q_2 (ATerm t)
              {
                t = term_k_13;
                return(t);
              }
              t = say_1_0(q_2, t);
              return(t);
            }
            t = if_verbose6_1_0(p_2, t);
            t = SSL_table_put((ATerm)ATmakeAppl(sym_XTC_0), (ATerm)ATmakeAppl(sym_Imported_1, p_7), (ATerm) ATempty);
            t = (ATerm) ATmakeAppl(sym__3, term_f_13, (ATerm)ATmakeAppl(sym_Imported_1, p_7), (ATerm) ATempty);
            {
              ATerm r_2 (ATerm t)
              {
                ATerm s_2 (ATerm t)
                {
                  t = term_e_13;
                  return(t);
                }
                t = say_1_0(s_2, t);
                return(t);
              }
              t = if_verbose4_1_0(r_2, t);
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
  ATerm l_13 = t;
  int m_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_n_13;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(m_13);
    }
  else
    {
      t = l_13;
      {
        ATerm o_13 = t;
        int p_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_getenv((ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue)));
            ;
            LocalPopChoice(p_13);
          }
        else
          {
            t = o_13;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm v_7 = NULL;
  ATerm t_2 (ATerm t)
  {
    ATerm u_2 (ATerm t)
    {
      t = term_q_13;
      return(t);
    }
    t = debug_1_0(u_2, t);
    return(t);
  }
  t = if_verbose5_1_0(t_2, t);
  v_7 = t;
  {
    ATerm r_13 = t;
    int s_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Repository_0));
        ;
        LocalPopChoice(s_13);
      }
    else
      {
        t = r_13;
        t = xtc_location_0_0(t);
        t = xtc_read_0_0(t);
        t = xtc_import_0_0(t);
      }
    t = v_7;
    {
      ATerm w_2 (ATerm t)
      {
        ATerm x_2 (ATerm t)
        {
          t = term_t_13;
          return(t);
        }
        t = debug_1_0(x_2, t);
        return(t);
      }
      t = if_verbose5_1_0(w_2, t);
    }
  }
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm u_13 = t;
  int v_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_2 (ATerm t)
      {
        ATerm a_3 (ATerm t)
        {
          t = term_w_13;
          return(t);
        }
        t = debug_1_0(a_3, t);
        return(t);
      }
      t = if_verbose5_1_0(z_2, t);
      t = xtc_load_0_0(t);
      {
        ATerm x_13 = t;
        int y_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = xtc_find_version_loc_0_0(t);
            ;
            LocalPopChoice(y_13);
          }
        else
          {
            t = x_13;
            {
              ATerm g_1 = NULL,h_1 = NULL;
              g_1 = t;
              t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Tool_1, g_1));
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm z_13 = ATgetFirst((ATermList) t);
                  if(match_cons(z_13, sym__2))
                    {
                      ATerm d_14 = ATgetArgument(z_13, 0);
                      h_1 = ATgetArgument(z_13, 1);
                    }
                  else
                    _fail(t);
                  {
                    ATerm c_14 = (ATerm) ATgetNext((ATermList) t);
                  }
                }
              else
                _fail(t);
              t = h_1;
            }
          }
        {
          ATerm d_3 (ATerm t)
          {
            ATerm e_3 (ATerm t)
            {
              t = term_w_13;
              return(t);
            }
            t = debug_1_0(e_3, t);
            return(t);
          }
          t = if_verbose5_1_0(d_3, t);
        }
      }
      ;
      LocalPopChoice(v_13);
    }
  else
    {
      t = u_13;
      {
        ATerm w_7 = NULL;
        w_7 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue))), w_7), (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue))));
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_f_14), w_7), term_e_14);
        {
          ATerm g_3 (ATerm t)
          {
            t = term_f_13;
            t = table_getlist_0_0(t);
            {
              ATerm h_3 (ATerm t)
              {
                t = term_g_14;
                return(t);
              }
              t = debug_1_0(h_3, t);
            }
            return(t);
          }
          t = if_verbose5_1_0(g_3, t);
          _fail(t);
        }
      }
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm y_7 = NULL,z_7 = NULL,a_8 = NULL;
  ATerm k_14 = t;
  int l_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_8 = NULL;
      b_8 = t;
      t = (ATerm) ATmakeAppl(sym__2, b_8, term_m_14);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(l_14);
    }
  else
    {
      t = k_14;
      {
        ATerm i_3 (ATerm t)
        {
          t = term_n_14;
          return(t);
        }
        t = debug_1_0(i_3, t);
        _fail(t);
      }
    }
  y_7 = t;
  if(match_cons(t, sym_Stream_1))
    {
      a_8 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(a_8);
  z_7 = t;
  t = y_7;
  t = fclose_0_0(t);
  t = z_7;
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm e_8 = NULL,f_8 = NULL;
  e_8 = t;
  if(match_cons(t, sym_stdin_0))
    {
      t = e_8;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_FILE_1))
        {
          f_8 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSL_access(f_8, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_F__OK_0)));
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm u_8 (ATerm o_8, ATerm t)
  {
    t = SSL_fclose(o_8);
    return(t);
  }
  ATerm r_8 = NULL,s_8 = NULL;
  s_8 = t;
  if(match_cons(t, sym_Stream_1))
    {
      r_8 = ATgetArgument(t, 0);
      {
        ATerm o_14 = t;
        int p_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(r_8);
            ;
            LocalPopChoice(p_14);
          }
        else
          {
            t = o_14;
            t = u_8(s_8, t);
          }
      }
    }
  else
    {
      t = u_8(s_8, t);
    }
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm v_8 = NULL;
  t = SSL_stdin_stream();
  v_8 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, v_8);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm w_8 = NULL;
  t = SSL_stdout_stream();
  w_8 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, w_8);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm x_8 = NULL;
  t = SSL_stderr_stream();
  x_8 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, x_8);
  return(t);
}
ATerm stdio_stream_0_0 (ATerm t)
{
  ATerm z_8 = NULL;
  z_8 = t;
  if(match_cons(t, sym_stderr_0))
    {
      t = z_8;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = z_8;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = z_8;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm q_14 = ATgetArgument(t, 0);
      ATerm r_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm u_14 = t;
    int v_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_2 = NULL,b_2 = NULL;
        a_2 = t;
        t = SSL_explode_term(a_2);
        if(match_cons(t, sym__2))
          {
            ATerm z_14 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) z_14) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm a_15 = ATgetArgument(t, 1);
              if(((ATgetType(a_15) == AT_LIST) && !(ATisEmpty(a_15))))
                {
                  b_2 = ATgetFirst((ATermList) a_15);
                  {
                    ATerm e_15 = (ATerm) ATgetNext((ATermList) a_15);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = b_2;
        t = stdio_stream_0_0(t);
        ;
        LocalPopChoice(v_14);
      }
    else
      {
        t = u_14;
        {
          ATerm f_15 = t;
          int g_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm d_9 = NULL,e_9 = NULL,i_9 = NULL;
              ATerm j_3 (ATerm t)
              {
                ATerm j_9 = NULL;
                if(match_cons(t, sym_Path_1))
                  {
                    j_9 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = j_9;
                return(t);
              }
              t = _2_0(j_3, _id, t);
              if(match_cons(t, sym__2))
                {
                  d_9 = ATgetArgument(t, 0);
                  e_9 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_fopen(d_9, e_9);
              i_9 = t;
              t = (ATerm) ATmakeAppl(sym_Stream_1, i_9);
              ;
              LocalPopChoice(g_15);
            }
          else
            {
              t = f_15;
              {
                ATerm l_9 = NULL,m_9 = NULL,n_9 = NULL;
                ATerm l_3 (ATerm t)
                {
                  ATerm o_9 = NULL;
                  o_9 = t;
                  t = SSL_is_string(o_9);
                  return(t);
                }
                t = _2_0(l_3, _id, t);
                if(match_cons(t, sym__2))
                  {
                    l_9 = ATgetArgument(t, 0);
                    m_9 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_fopen(l_9, m_9);
                n_9 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, n_9);
              }
            }
        }
      }
  }
  return(t);
}
ATerm WriteToFile_1_0 (ATerm o_65 (ATerm), ATerm t)
{
  ATerm s_9 = NULL,t_9 = NULL,u_9 = NULL;
  if(match_cons(t, sym__2))
    {
      s_9 = ATgetArgument(t, 0);
      t_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, s_9, term_h_15);
  t = open_stream_0_0(t);
  u_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_9, t_9);
  t = o_65(t);
  t = fclose_0_0(t);
  t = t_9;
  return(t);
}
ATerm WriteToBinaryFile_0_0 (ATerm t)
{
  ATerm m_3 (ATerm t)
  {
    ATerm v_9 = NULL,w_9 = NULL,a_10 = NULL;
    if(match_cons(t, sym__2))
      {
        ATerm m_15 = ATgetArgument(t, 0);
        if(match_cons(m_15, sym_Stream_1))
          {
            v_9 = ATgetArgument(m_15, 0);
          }
        else
          _fail(t);
        w_9 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSL_write_term_to_stream_baf(v_9, w_9);
    a_10 = t;
    t = (ATerm) ATmakeAppl(sym_Stream_1, a_10);
    return(t);
  }
  t = WriteToFile_1_0(m_3, t);
  return(t);
}
ATerm write_to_0_0 (ATerm t)
{
  ATerm b_10 = NULL,c_10 = NULL;
  b_10 = t;
  t = xtc_new_file_0_0(t);
  c_10 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_10, b_10);
  t = WriteToBinaryFile_0_0(t);
  t = SSL_close_file(c_10);
  t = (ATerm) ATmakeAppl(sym_FILE_1, c_10);
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm s_81 (ATerm), ATerm t_81 (ATerm), ATerm t)
{
  t = write_to_0_0(t);
  t = xtc_transform_file_2_0(s_81, t_81, t);
  t = read_from_0_0(t);
  return(t);
}
ATerm concat_strings_0_0 (ATerm t)
{
  ATerm d_10 = NULL;
  ATerm u_3 (ATerm t)
  {
    ATerm f_10 = NULL;
    f_10 = t;
    t = SSL_explode_string(f_10);
    return(t);
  }
  t = map_1_0(u_3, t);
  t = concat_0_0(t);
  d_10 = t;
  t = SSL_implode_string(d_10);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm w_10 = NULL,x_10 = NULL,y_10 = NULL,z_10 = NULL;
  w_10 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      x_10 = ATgetArgument(t, 0);
      {
        ATerm k_2 = NULL;
        t = SSL_int_to_string(x_10);
        k_2 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_u_15), k_2), term_q_15);
        t = concat_strings_0_0(t);
      }
    }
  else
    {
      ATerm c_3 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          x_10 = ATgetArgument(t, 0);
          y_10 = ATgetArgument(t, 1);
          z_10 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(y_10);
      c_3 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, z_10), term_y_15), c_3), term_x_15), x_10);
      t = concat_strings_0_0(t);
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm t_69 (ATerm), ATerm t)
{
  ATerm c_11 = NULL;
  ATerm x_3 (ATerm t)
  {
    t = t_69(t);
    c_11 = t;
    return(t);
  }
  t = fetch_1_0(x_3, t);
  t = not_null(c_11);
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm d_11 = NULL;
  d_11 = t;
  {
    ATerm c_16 = t;
    int e_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_u_23), term_q_23), term_m_23), term_i_23), term_e_23), term_z_22), term_s_22), term_k_22), term_g_22), term_u_21), term_m_21), term_e_21), term_y_20), term_s_20), term_l_20), term_g_20), term_w_19), term_i_19), term_c_19), term_v_18), term_m_18), term_c_18), term_w_17), term_l_17), term_h_17), term_e_17), term_s_16), term_i_16);
        {
          ATerm c_4 (ATerm t)
          {
            if(match_cons(t, sym_Signal_3))
              {
                ATerm v_23 = ATgetArgument(t, 0);
                if((d_11 != ATgetArgument(t, 1)))
                  {
                    _fail(ATgetArgument(t, 1));
                  }
                {
                  ATerm w_23 = ATgetArgument(t, 2);
                }
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_elem_1_0(c_4, t);
        }
        ;
        LocalPopChoice(e_16);
      }
    else
      {
        t = c_16;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, d_11);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm e_11 = NULL;
  e_11 = t;
  {
    ATerm g_4 (ATerm t)
    {
      ATerm f_11 = NULL,g_11 = NULL;
      if(match_cons(t, sym_WaitStatus_3))
        {
          ATerm x_23 = ATgetArgument(t, 0);
          f_11 = ATgetArgument(t, 1);
          {
            ATerm y_23 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = f_11;
      {
        ATerm z_23 = t;
        if((PushChoice() == 0))
          {
            if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
              _fail(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = z_23;
          }
        t = signal_from_number_0_0(t);
        t = signal_to_descr_0_0(t);
        g_11 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, g_11), (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue))));
        t = (ATerm) ATmakeAppl(sym__2, term_a_24, (ATerm) ATinsert(ATinsert(ATempty, g_11), term_b_24));
      }
      return(t);
    }
    t = try_1_0(g_4, t);
    t = e_11;
  }
  return(t);
}
ATerm fork_0_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_2_0 (ATerm b_64 (ATerm), ATerm c_64 (ATerm), ATerm t)
{
  ATerm i_11 = NULL,j_11 = NULL;
  i_11 = t;
  t = fork_0_0(t);
  j_11 = t;
  {
    ATerm c_24 = t;
    int d_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = i_11;
        t = b_64(t);
        ;
        LocalPopChoice(d_24);
      }
    else
      {
        t = c_24;
        t = (ATerm) ATmakeAppl(sym__2, j_11, i_11);
        t = c_64(t);
      }
  }
  return(t);
}
ATerm fork_and_wait_1_0 (ATerm d_64 (ATerm), ATerm t)
{
  ATerm l_11 = NULL;
  ATerm h_4 (ATerm t)
  {
    ATerm m_11 = NULL;
    if(match_cons(t, sym__2))
      {
        m_11 = ATgetArgument(t, 0);
        l_11 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSL_waitpid(m_11);
    t = warn_ifsignaled_0_0(t);
    if(match_cons(t, sym_WaitStatus_3))
      {
        ATerm e_24 = ATgetArgument(t, 0);
        if(((ATgetType(e_24) != AT_INT) || (ATgetInt((ATermInt) e_24) != 0)))
          _fail(t);
        {
          ATerm f_24 = ATgetArgument(t, 1);
        }
        {
          ATerm g_24 = ATgetArgument(t, 2);
        }
      }
    else
      _fail(t);
    t = l_11;
    return(t);
  }
  t = fork_2_0(d_64, h_4, t);
  return(t);
}
ATerm call_0_0 (ATerm t)
{
  ATerm n_11 = NULL,o_11 = NULL;
  if(match_cons(t, sym__2))
    {
      n_11 = ATgetArgument(t, 0);
      o_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm i_4 (ATerm t)
    {
      t = SSL_execvp(n_11, o_11);
      return(t);
    }
    t = fork_and_wait_1_0(i_4, t);
  }
  return(t);
}
ATerm xtc_find_warning_0_0 (ATerm t)
{
  t = xtc_find_0_0(t);
  return(t);
}
ATerm xtc_command_1_0 (ATerm j_81 (ATerm), ATerm t)
{
  ATerm p_11 = NULL,q_11 = NULL;
  p_11 = t;
  t = j_81(t);
  t = xtc_find_warning_0_0(t);
  q_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_11, p_11);
  t = call_0_0(t);
  t = p_11;
  return(t);
}
ATerm assert_1_0 (ATerm u_77 (ATerm), ATerm t)
{
  ATerm r_11 = NULL,s_11 = NULL,t_11 = NULL,u_11 = NULL,v_11 = NULL;
  if(match_cons(t, sym__2))
    {
      r_11 = ATgetArgument(t, 0);
      s_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_77(t);
  t_11 = t;
  t = (ATerm) ATmakeAppl(sym__3, t_11, r_11, s_11);
  t = table_push_0_0(t);
  {
    ATerm h_24 = t;
    int i_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get(t_11, (ATerm) ATmakeAppl(sym_Scopes_0));
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
        u_11 = ATgetFirst((ATermList) t);
        v_11 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSL_table_put(t_11, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATinsert(CheckATermList(v_11), (ATerm) ATinsert(CheckATermList(u_11), r_11)));
    t = (ATerm) ATmakeAppl(sym__2, r_11, s_11);
  }
  return(t);
}
ATerm obsolete_1_0 (ATerm h_65 (ATerm), ATerm t)
{
  ATerm w_11 = NULL;
  w_11 = t;
  t = h_65(t);
  {
    ATerm l_4 (ATerm t)
    {
      t = term_j_24;
      return(t);
    }
    t = debug_1_0(l_4, t);
    t = w_11;
  }
  return(t);
}
ATerm open_file_0_0 (ATerm t)
{
  ATerm l_12 (ATerm a_12, ATerm t)
  {
    t = a_12;
    {
      ATerm k_24 = t;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym__2))
            {
              ATerm l_24 = ATgetArgument(t, 0);
              ATerm m_24 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = k_24;
        }
      {
        ATerm n_4 (ATerm t)
        {
          t = term_n_24;
          return(t);
        }
        t = obsolete_1_0(n_4, t);
        t = (ATerm) ATmakeAppl(sym__2, a_12, term_h_15);
        t = open_file_0_0(t);
      }
    }
    return(t);
  }
  ATerm m_12 (ATerm c_12, ATerm d_12, ATerm f_12, ATerm t)
  {
    t = SSL_open_file(c_12, d_12);
    return(t);
  }
  ATerm i_12 = NULL,j_12 = NULL,k_12 = NULL;
  i_12 = t;
  if(match_cons(t, sym__2))
    {
      j_12 = ATgetArgument(t, 0);
      k_12 = ATgetArgument(t, 1);
      {
        ATerm o_24 = t;
        int p_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = l_12(i_12, t);
            ;
            LocalPopChoice(p_24);
          }
        else
          {
            t = o_24;
            t = m_12(j_12, k_12, i_12, t);
          }
      }
    }
  else
    {
      t = l_12(i_12, t);
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
  ATerm o_12 = NULL;
  t = term_q_24;
  t = new_0_0(t);
  o_12 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_12, term_r_24);
  t = conc_strings_0_0(t);
  {
    ATerm o_4 (ATerm t)
    {
      ATerm f_3 = NULL;
      f_3 = t;
      t = SSL_access(f_3, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_F__OK_0)));
      t = new_file_0_0(t);
      return(t);
    }
    t = try_1_0(o_4, t);
  }
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm q_12 = NULL;
  t = new_file_0_0(t);
  q_12 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_12, term_h_15);
  t = open_file_0_0(t);
  t = (ATerm) ATmakeAppl(sym__2, q_12, term_q_24);
  {
    ATerm q_4 (ATerm t)
    {
      t = term_s_24;
      return(t);
    }
    t = assert_1_0(q_4, t);
    t = q_12;
  }
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm t)
{
  ATerm c_13 = NULL,d_13 = NULL;
  c_13 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm k_3 = NULL,o_3 = NULL;
      t = c_13;
      t = xtc_new_file_0_0(t);
      k_3 = t;
      t = m_0(t);
      o_3 = t;
      t = (ATerm) ATmakeAppl(sym__2, o_3, (ATerm) ATinsert(ATinsert(ATempty, k_3), term_t_24));
      t = conc_0_0(t);
      t = xtc_command_1_0(l_0, t);
      t = SSL_close_file(k_3);
      t = (ATerm) ATmakeAppl(sym_FILE_1, k_3);
    }
  else
    {
      ATerm d_4 = NULL,f_4 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          d_13 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = d_13;
      t = xtc_new_file_0_0(t);
      d_4 = t;
      t = m_0(t);
      f_4 = t;
      t = (ATerm) ATmakeAppl(sym__2, f_4, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, d_4), term_t_24), d_13), term_u_24));
      t = conc_0_0(t);
      t = xtc_command_1_0(l_0, t);
      t = SSL_close_file(d_4);
      t = (ATerm) ATmakeAppl(sym_FILE_1, d_4);
    }
  return(t);
}
ATerm FILE_1_0 (ATerm y_61 (ATerm), ATerm t)
{
  ATerm g_13 = NULL,h_13 = NULL,i_13 = NULL,j_13 = NULL;
  j_13 = t;
  if(match_cons(t, sym_FILE_1))
    {
      h_13 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_13);
  g_13 = t;
  t = h_13;
  t = y_61(t);
  i_13 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FILE_1, i_13), g_13);
  return(t);
}
ATerm xtc_transform_2_0 (ATerm l_81 (ATerm), ATerm m_81 (ATerm), ATerm t)
{
  ATerm v_24 = t;
  int w_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_24 = t;
      int y_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = FILE_1_0(_id, t);
          ;
          LocalPopChoice(y_24);
        }
      else
        {
          t = x_24;
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
        }
      LocalPopChoice(w_24);
      t = xtc_transform_file_2_0(l_81, m_81, t);
    }
  else
    {
      t = v_24;
      t = xtc_transform_term_2_0(l_81, m_81, t);
    }
  return(t);
}
ATerm copy_to_1_0 (ATerm k_0 (ATerm), ATerm t)
{
  ATerm a_14 = NULL,b_14 = NULL;
  a_14 = t;
  if(match_cons(t, sym_FILE_1))
    {
      b_14 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm z_24 = t;
    int a_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_4 = NULL;
        t = a_14;
        t = k_0(t);
        p_4 = t;
        {
          ATerm b_25 = t;
          int c_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(!(match_cons(t, sym_stdout_0)))
                _fail(t);
              ;
              LocalPopChoice(c_25);
            }
          else
            {
              t = b_25;
              if(!(match_cons(t, sym_stderr_0)))
                _fail(t);
            }
          t = SSL_copy(b_14, p_4);
          t = (ATerm) ATmakeAppl(sym_FILE_1, b_14);
        }
        ;
        LocalPopChoice(a_25);
      }
    else
      {
        t = z_24;
        {
          ATerm d_25 = t;
          int e_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm g_5 = NULL;
              t = a_14;
              t = k_0(t);
              g_5 = t;
              {
                ATerm f_25 = t;
                if((PushChoice() == 0))
                  {
                    ATerm g_25 = t;
                    int h_25 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(!(match_cons(t, sym_stdout_0)))
                          _fail(t);
                        ;
                        LocalPopChoice(h_25);
                      }
                    else
                      {
                        t = g_25;
                        {
                          ATerm i_25 = t;
                          int j_25 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              if(!(match_cons(t, sym_stderr_0)))
                                _fail(t);
                              ;
                              LocalPopChoice(j_25);
                            }
                          else
                            {
                              t = i_25;
                              {
                                ATerm j_5 = NULL;
                                j_5 = t;
                                if((b_14 != t))
                                  {
                                    _fail(t);
                                  }
                                t = j_5;
                              }
                            }
                        }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = f_25;
                  }
                t = SSL_copy(b_14, g_5);
                t = (ATerm) ATmakeAppl(sym_FILE_1, b_14);
              }
              ;
              LocalPopChoice(e_25);
            }
          else
            {
              t = d_25;
              t = a_14;
              t = k_0(t);
              if((b_14 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, b_14);
            }
        }
      }
  }
  return(t);
}
ATerm table_pop_0_0 (ATerm t)
{
  ATerm h_14 = NULL,i_14 = NULL,j_14 = NULL;
  if(match_cons(t, sym__2))
    {
      h_14 = ATgetArgument(t, 0);
      i_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm k_25 = t;
    int l_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_5 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm m_25 = ATgetArgument(t, 0);
            ATerm n_25 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(h_14, i_14);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm o_25 = ATgetFirst((ATermList) t);
            l_5 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = l_5;
        ;
        LocalPopChoice(l_25);
      }
    else
      {
        t = k_25;
        t = (ATerm) ATempty;
      }
    j_14 = t;
    t = SSL_table_put(h_14, i_14, j_14);
    t = (ATerm) ATmakeAppl(sym__2, h_14, i_14);
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm r_77 (ATerm), ATerm t)
{
  ATerm s_14 = NULL,t_14 = NULL,w_14 = NULL,x_14 = NULL;
  s_14 = t;
  t = r_77(t);
  t_14 = t;
  {
    ATerm p_25 = t;
    int q_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get(t_14, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(q_25);
      }
    else
      {
        t = p_25;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        x_14 = ATgetFirst((ATermList) t);
        w_14 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSL_table_put(t_14, (ATerm)ATmakeAppl(sym_Scopes_0), w_14);
    t = x_14;
    {
      ATerm r_4 (ATerm t)
      {
        ATerm y_14 = NULL;
        y_14 = t;
        t = (ATerm) ATmakeAppl(sym__2, t_14, y_14);
        t = table_pop_0_0(t);
        return(t);
      }
      t = map_1_0(r_4, t);
      t = s_14;
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm m_78 (ATerm), ATerm n_78 (ATerm), ATerm t)
{
  ATerm r_25 = t;
  int s_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = m_78(t);
      t = n_78(t);
      ;
      LocalPopChoice(s_25);
    }
  else
    {
      t = r_25;
      t = n_78(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm q_77 (ATerm), ATerm t)
{
  ATerm b_15 = NULL,c_15 = NULL,d_15 = NULL;
  b_15 = t;
  t = q_77(t);
  c_15 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_15, term_t_25);
  {
    ATerm u_25 = t;
    int v_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm w_25 = ATgetArgument(t, 0);
            ATerm x_25 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(c_15, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(v_25);
      }
    else
      {
        t = u_25;
        t = (ATerm) ATempty;
      }
    d_15 = t;
    t = SSL_table_put(c_15, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATinsert(CheckATermList(d_15), (ATerm) ATempty));
    t = b_15;
  }
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm v_80 (ATerm), ATerm t)
{
  ATerm i_15 = NULL;
  ATerm s_4 (ATerm t)
  {
    t = term_s_24;
    return(t);
  }
  t = begin_scope_1_0(s_4, t);
  {
    ATerm u_4 (ATerm t)
    {
      ATerm j_15 = NULL;
      j_15 = t;
      {
        ATerm y_25 = t;
        int z_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_table_get((ATerm)ATmakeAppl(sym_TempFiles_0), (ATerm) ATmakeAppl(sym_Scopes_0));
            ;
            LocalPopChoice(z_25);
          }
        else
          {
            t = y_25;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
          }
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            i_15 = ATgetFirst((ATermList) t);
            {
              ATerm a_26 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        t = i_15;
        {
          ATerm x_4 (ATerm t)
          {
            ATerm y_4 (ATerm t)
            {
              ATerm k_15 = NULL;
              k_15 = t;
              t = SSL_remove(k_15);
              return(t);
            }
            t = try_1_0(y_4, t);
            return(t);
          }
          t = map_1_0(x_4, t);
          t = j_15;
          {
            ATerm e_5 (ATerm t)
            {
              t = term_s_24;
              return(t);
            }
            t = end_scope_1_0(e_5, t);
          }
        }
      }
      return(t);
    }
    t = restore_always_2_0(v_80, u_4, t);
  }
  return(t);
}
ATerm xtc_io_1_0 (ATerm w_80 (ATerm), ATerm t)
{
  ATerm f_5 (ATerm t)
  {
    ATerm b_26 = t;
    int c_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_15 = NULL;
        t = term_u_24;
        t = get_config_0_0(t);
        l_15 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, l_15);
        ;
        LocalPopChoice(c_26);
      }
    else
      {
        t = b_26;
        t = term_d_26;
      }
    t = w_80(t);
    {
      ATerm h_5 (ATerm t)
      {
        ATerm e_26 = t;
        int f_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_t_24;
            t = get_config_0_0(t);
            ;
            LocalPopChoice(f_26);
          }
        else
          {
            t = e_26;
            t = term_g_26;
          }
        return(t);
      }
      t = copy_to_1_0(h_5, t);
    }
    return(t);
  }
  t = xtc_temp_files_1_0(f_5, t);
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  ATerm i_5 (ATerm t)
  {
    ATerm n_15 = NULL;
    n_15 = t;
    if(match_string(t, "-k"))
      {
        t = n_15;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
          _fail(t);
        t = n_15;
      }
    return(t);
  }
  ATerm k_5 (ATerm t)
  {
    ATerm o_15 = NULL,p_15 = NULL;
    o_15 = t;
    t = SSL_string_to_int(o_15);
    p_15 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)), p_15);
    t = o_15;
    return(t);
  }
  ATerm m_5 (ATerm t)
  {
    t = term_h_26;
    return(t);
  }
  t = ArgOption_3_0(i_5, k_5, m_5, t);
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm i_26 = t;
  int j_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_5 (ATerm t)
      {
        ATerm r_15 = NULL;
        r_15 = t;
        if(match_string(t, "-S"))
          {
            t = r_15;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
              _fail(t);
            t = r_15;
          }
        return(t);
      }
      ATerm o_5 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), (ATerm) ATmakeInt(0));
        t = term_l_26;
        return(t);
      }
      ATerm p_5 (ATerm t)
      {
        t = term_m_26;
        return(t);
      }
      t = Option_3_0(n_5, o_5, p_5, t);
      ;
      LocalPopChoice(j_26);
    }
  else
    {
      t = i_26;
      {
        ATerm n_26 = t;
        int o_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_5 (ATerm t)
            {
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
                _fail(t);
              return(t);
            }
            ATerm t_5 (ATerm t)
            {
              ATerm s_15 = NULL,t_15 = NULL;
              s_15 = t;
              t = SSL_string_to_int(s_15);
              t_15 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), t_15);
              t = (ATerm) ATmakeAppl(sym_Verbose_1, s_15);
              return(t);
            }
            ATerm u_5 (ATerm t)
            {
              t = term_p_26;
              return(t);
            }
            t = ArgOption_3_0(q_5, t_5, u_5, t);
            ;
            LocalPopChoice(o_26);
          }
        else
          {
            t = n_26;
            {
              ATerm v_5 (ATerm t)
              {
                if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
                  _fail(t);
                return(t);
              }
              ATerm w_5 (ATerm t)
              {
                t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                t = term_q_26;
                return(t);
              }
              ATerm x_5 (ATerm t)
              {
                t = term_r_26;
                return(t);
              }
              t = Option_3_0(v_5, w_5, x_5, t);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0_0 (ATerm t)
{
  ATerm s_26 = t;
  int t_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0_0(t);
      ;
      LocalPopChoice(t_26);
    }
  else
    {
      t = s_26;
      t = keep_option_0_0(t);
    }
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  ATerm y_5 (ATerm t)
  {
    ATerm v_15 = NULL;
    v_15 = t;
    if(match_string(t, "-o"))
      {
        t = v_15;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
          _fail(t);
        t = v_15;
      }
    return(t);
  }
  ATerm z_5 (ATerm t)
  {
    ATerm w_15 = NULL;
    w_15 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), w_15);
    t = (ATerm) ATmakeAppl(sym_Output_1, w_15);
    return(t);
  }
  ATerm a_6 (ATerm t)
  {
    t = term_u_26;
    return(t);
  }
  t = ArgOption_3_0(y_5, z_5, a_6, t);
  return(t);
}
ATerm aterm_output_option_0_0 (ATerm t)
{
  ATerm v_26 = t;
  int w_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0_0(t);
      ;
      LocalPopChoice(w_26);
    }
  else
    {
      t = v_26;
      {
        ATerm b_6 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm c_6 (ATerm t)
        {
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = term_x_26;
          return(t);
        }
        ATerm d_6 (ATerm t)
        {
          t = term_y_26;
          return(t);
        }
        t = Option_3_0(b_6, c_6, d_6, t);
      }
    }
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm z_15 = NULL,a_16 = NULL,b_16 = NULL,d_16 = NULL,f_16 = NULL;
  z_15 = t;
  if(match_string(t, "register-usage-info"))
    {
      t = z_15;
      t = register_usage_1_0(j_0, t);
    }
  else
    {
      ATerm k_16 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_16 = ATgetFirst((ATermList) t);
          b_16 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = b_16;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          d_16 = ATgetFirst((ATermList) t);
          f_16 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = a_16;
      t = h_0(t);
      t = d_16;
      t = i_0(t);
      k_16 = t;
      t = (ATerm) ATinsert(CheckATermList(f_16), k_16);
    }
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  ATerm f_6 (ATerm t)
  {
    ATerm m_16 = NULL;
    m_16 = t;
    if(match_string(t, "-i"))
      {
        t = m_16;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
          _fail(t);
        t = m_16;
      }
    return(t);
  }
  ATerm g_6 (ATerm t)
  {
    ATerm n_16 = NULL;
    n_16 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), n_16);
    t = (ATerm) ATmakeAppl(sym_Input_1, n_16);
    return(t);
  }
  ATerm j_6 (ATerm t)
  {
    t = term_z_26;
    return(t);
  }
  t = ArgOption_3_0(f_6, g_6, j_6, t);
  return(t);
}
ATerm io_options_0_0 (ATerm t)
{
  ATerm a_27 = t;
  int b_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      ;
      LocalPopChoice(b_27);
    }
  else
    {
      t = a_27;
      {
        ATerm c_27 = t;
        int d_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0_0(t);
            ;
            LocalPopChoice(d_27);
          }
        else
          {
            t = c_27;
            t = general_options_0_0(t);
          }
      }
    }
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm p_16 = NULL,q_16 = NULL;
  p_16 = t;
  t = term_q_24;
  t = whoami_0_0(t);
  q_16 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue))), q_16), (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue))));
  t = SSL_exit((ATerm) ATmakeInt(1));
  t = p_16;
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm r_16 = NULL;
  t = report_run_time_0_0(t);
  t = term_q_24;
  t = whoami_0_0(t);
  r_16 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue))), r_16));
  t = SSL_exit((ATerm) ATmakeInt(1));
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_e_27;
  t = get_config_0_0(t);
  return(t);
}
ATerm foldr_2_0 (ATerm x_75 (ATerm), ATerm y_75 (ATerm), ATerm t)
{
  ATerm f_27 = t;
  int g_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = x_75(t);
      ;
      LocalPopChoice(g_27);
    }
  else
    {
      t = f_27;
      {
        ATerm u_16 = NULL,v_16 = NULL,y_16 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            u_16 = ATgetFirst((ATermList) t);
            v_16 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = v_16;
        t = foldr_2_0(x_75, y_75, t);
        y_16 = t;
        t = (ATerm) ATmakeAppl(sym__2, u_16, y_16);
        t = y_75(t);
      }
    }
  return(t);
}
ATerm crush_2_0 (ATerm v_73 (ATerm), ATerm w_73 (ATerm), ATerm t)
{
  ATerm z_16 = NULL,a_17 = NULL;
  z_16 = t;
  t = SSL_explode_term(z_16);
  if(match_cons(t, sym__2))
    {
      ATerm h_27 = ATgetArgument(t, 0);
      a_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_17;
  t = foldr_2_0(v_73, w_73, t);
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm b_17 = NULL;
  t = times_0_0(t);
  {
    ATerm k_6 (ATerm t)
    {
      t = term_k_26;
      return(t);
    }
    ATerm l_6 (ATerm t)
    {
      ATerm c_17 = NULL,d_17 = NULL;
      if(match_cons(t, sym__2))
        {
          c_17 = ATgetArgument(t, 0);
          d_17 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm i_27 = t;
        int j_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(c_17, d_17);
            ;
            LocalPopChoice(j_27);
          }
        else
          {
            t = i_27;
            t = SSL_addr(c_17, d_17);
          }
      }
      return(t);
    }
    t = crush_2_0(k_6, l_6, t);
    b_17 = t;
    t = SSL_TicksToSeconds(b_17);
  }
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm m_17 = NULL,n_17 = NULL,o_17 = NULL;
  m_17 = t;
  if(match_cons(t, sym__2))
    {
      n_17 = ATgetArgument(t, 0);
      o_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm k_27 = t;
    int l_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_17;
        if((n_17 != t))
          {
            _fail(t);
          }
        t = m_17;
        ;
        LocalPopChoice(l_27);
      }
    else
      {
        t = k_27;
        t = m_17;
        {
          ATerm m_27 = t;
          int n_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(n_17, o_17);
              ;
              LocalPopChoice(n_27);
            }
          else
            {
              t = m_27;
              t = SSL_gtr(n_17, o_17);
            }
          t = (ATerm) ATmakeAppl(sym__2, n_17, o_17);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm r_78 (ATerm), ATerm t)
{
  ATerm o_6 (ATerm t)
  {
    ATerm r_17 = NULL,s_17 = NULL;
    r_17 = t;
    t = term_a_9;
    t = get_config_0_0(t);
    s_17 = t;
    t = (ATerm) ATmakeAppl(sym__2, s_17, term_f_9);
    t = geq_0_0(t);
    t = r_17;
    t = r_78(t);
    return(t);
  }
  t = try_1_0(o_6, t);
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  ATerm p_6 (ATerm t)
  {
    ATerm u_17 = NULL,v_17 = NULL;
    t = run_time_0_0(t);
    u_17 = t;
    t = term_q_24;
    t = whoami_0_0(t);
    v_17 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue))), u_17), (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue))), v_17));
    t = (ATerm) ATmakeAppl(sym__2, term_a_24, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_o_27), u_17), term_x_15), v_17));
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
ATerm need_help_1_0 (ATerm x_82 (ATerm), ATerm t)
{
  ATerm p_27 = t;
  int q_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_r_27;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(q_27);
    }
  else
    {
      t = p_27;
      {
        ATerm q_6 (ATerm t)
        {
          ATerm s_27 = t;
          int t_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(!(match_cons(t, sym_Help_0)))
                _fail(t);
              ;
              LocalPopChoice(t_27);
            }
          else
            {
              t = s_27;
              {
                ATerm u_27 = t;
                int v_27 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Undefined_1_0(_id, t);
                    ;
                    LocalPopChoice(v_27);
                  }
                else
                  {
                    t = u_27;
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
  t = x_82(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm a_18 = NULL,b_18 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_18 = ATgetFirst((ATermList) t);
      b_18 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm f_18 = NULL,g_18 = NULL;
        t = b_18;
        t = g_0(t);
        f_18 = t;
        t = a_18;
        t = f_0(t);
        g_18 = t;
        t = b_18;
        {
          ATerm r_6 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(f_18), g_18);
            return(t);
          }
          t = reverse_acc_2_0(f_0, r_6, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_q_24;
      t = g_0(t);
    }
  return(t);
}
ATerm reverse_0_0 (ATerm t)
{
  ATerm t_6 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2_0(_id, t_6, t);
  return(t);
}
ATerm Program_1_0 (ATerm f_62 (ATerm), ATerm t)
{
  ATerm h_18 = NULL,i_18 = NULL,j_18 = NULL,k_18 = NULL;
  k_18 = t;
  if(match_cons(t, sym_Program_1))
    {
      i_18 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_18);
  h_18 = t;
  t = i_18;
  t = f_62(t);
  j_18 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, j_18), h_18);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm w_27 = t;
  int x_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_e_27;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(x_27);
    }
  else
    {
      t = w_27;
      {
        ATerm u_6 (ATerm t)
        {
          t = Program_1_0(_id, t);
          return(t);
        }
        t = option_defined_1_0(u_6, t);
      }
    }
  t = try_1_0(_fail, t);
  t = term_y_27;
  t = echo_0_0(t);
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)));
  t = reverse_0_0(t);
  {
    ATerm x_6 (ATerm t)
    {
      ATerm o_18 = NULL;
      o_18 = t;
      t = (ATerm) ATinsert(ATinsert(ATempty, o_18), term_z_27);
      t = echo_0_0(t);
      return(t);
    }
    t = map_1_0(x_6, t);
    t = try_1_0(_fail, t);
  }
  return(t);
}
ATerm system_usage_0_0 (ATerm t)
{
  t = default_system_usage_0_0(t);
  return(t);
}
ATerm Undefined_1_0 (ATerm g_62 (ATerm), ATerm t)
{
  ATerm p_18 = NULL,q_18 = NULL,r_18 = NULL,s_18 = NULL;
  s_18 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      q_18 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_18);
  p_18 = t;
  t = q_18;
  t = g_62(t);
  r_18 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, r_18), p_18);
  return(t);
}
ATerm fetch_1_0 (ATerm r_69 (ATerm), ATerm t)
{
  ATerm w_18 (ATerm t)
  {
    ATerm a_28 = t;
    int b_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(r_69, _id, t);
        ;
        LocalPopChoice(b_28);
      }
    else
      {
        t = a_28;
        t = Cons_2_0(_id, w_18, t);
      }
    return(t);
  }
  t = w_18(t);
  return(t);
}
ATerm option_defined_1_0 (ATerm s_83 (ATerm), ATerm t)
{
  t = fetch_1_0(s_83, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm y_18 = NULL,z_18 = NULL;
  y_18 = t;
  {
    ATerm c_28 = t;
    int d_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = y_18;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm e_28 = ATgetFirst((ATermList) t);
                ATerm f_28 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = y_18;
          }
        ;
        LocalPopChoice(d_28);
      }
    else
      {
        t = c_28;
        t = (ATerm) ATinsert(ATempty, y_18);
      }
    z_18 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stdout_0), z_18);
    t = y_18;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_e_27;
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
  ATerm g_28 = t;
  int h_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(h_28);
    }
  else
    {
      t = g_28;
      {
        ATerm f_19 = NULL,g_19 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            f_19 = ATgetFirst((ATermList) t);
            g_19 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = f_19;
        {
          ATerm y_6 (ATerm t)
          {
            t = g_19;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(y_6, t);
        }
      }
    }
  return(t);
}
ATerm conc_more_lists_0_0 (ATerm t)
{
  ATerm k_19 = NULL,l_19 = NULL;
  k_19 = t;
  t = SSL_explode_term(k_19);
  if(match_cons(t, sym__2))
    {
      ATerm i_28 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) i_28) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      l_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_19;
  t = concat_0_0(t);
  return(t);
}
ATerm at_end_1_0 (ATerm x_69 (ATerm), ATerm t)
{
  ATerm m_19 (ATerm t)
  {
    ATerm j_28 = t;
    int k_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, m_19, t);
        ;
        LocalPopChoice(k_28);
      }
    else
      {
        t = j_28;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = x_69(t);
      }
    return(t);
  }
  t = m_19(t);
  return(t);
}
ATerm conc_two_lists_0_0 (ATerm t)
{
  ATerm n_19 = NULL,o_19 = NULL;
  if(match_cons(t, sym__2))
    {
      o_19 = ATgetArgument(t, 0);
      n_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_19;
  {
    ATerm b_7 (ATerm t)
    {
      t = n_19;
      return(t);
    }
    t = at_end_1_0(b_7, t);
  }
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm l_28 = t;
  int m_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0_0(t);
      ;
      LocalPopChoice(m_28);
    }
  else
    {
      t = l_28;
      t = conc_more_lists_0_0(t);
    }
  return(t);
}
ATerm _2_0 (ATerm q_55 (ATerm), ATerm r_55 (ATerm), ATerm t)
{
  ATerm p_19 = NULL,q_19 = NULL,r_19 = NULL,s_19 = NULL,t_19 = NULL,u_19 = NULL;
  u_19 = t;
  if(match_cons(t, sym__2))
    {
      q_19 = ATgetArgument(t, 0);
      r_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_19);
  p_19 = t;
  t = q_19;
  t = q_55(t);
  s_19 = t;
  t = r_19;
  t = r_55(t);
  t_19 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, s_19, t_19), p_19);
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  ATerm z_19 = NULL;
  ATerm c_7 (ATerm t)
  {
    ATerm a_20 = NULL;
    a_20 = t;
    t = SSL_explode_string(a_20);
    return(t);
  }
  ATerm d_7 (ATerm t)
  {
    ATerm b_20 = NULL;
    b_20 = t;
    t = SSL_explode_string(b_20);
    return(t);
  }
  t = _2_0(c_7, d_7, t);
  t = conc_0_0(t);
  z_19 = t;
  t = SSL_implode_string(z_19);
  return(t);
}
ATerm debug_1_0 (ATerm a_65 (ATerm), ATerm t)
{
  ATerm c_20 = NULL,d_20 = NULL;
  c_20 = t;
  t = a_65(t);
  d_20 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, c_20), d_20));
  t = c_20;
  return(t);
}
ATerm map_1_0 (ATerm h_69 (ATerm), ATerm t)
{
  ATerm e_20 (ATerm t)
  {
    ATerm n_28 = t;
    int o_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(o_28);
      }
    else
      {
        t = n_28;
        t = Cons_2_0(h_69, e_20, t);
      }
    return(t);
  }
  t = e_20(t);
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm p_28 = t;
  int q_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_20 = NULL;
      k_20 = t;
      t = SSL_is_string(k_20);
      ;
      LocalPopChoice(q_28);
    }
  else
    {
      t = p_28;
      {
        ATerm r_28 = t;
        int s_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_7 (ATerm t)
            {
              t = try_1_0(eval_config_0_0, t);
              return(t);
            }
            t = map_1_0(h_7, t);
            ;
            LocalPopChoice(s_28);
          }
        else
          {
            t = r_28;
            {
              ATerm o_20 = NULL,p_20 = NULL,q_20 = NULL;
              o_20 = t;
              if(match_cons(t, sym_Path_1))
                {
                  p_20 = ATgetArgument(t, 0);
                  t = p_20;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      p_20 = ATgetArgument(t, 0);
                      t = p_20;
                      {
                        ATerm t_28 = t;
                        int u_28 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(u_28);
                          }
                        else
                          {
                            t = t_28;
                            {
                              ATerm i_7 (ATerm t)
                              {
                                t = term_v_28;
                                return(t);
                              }
                              t = debug_1_0(i_7, t);
                              _fail(t);
                            }
                          }
                      }
                    }
                  else
                    {
                      ATerm u_20 = NULL,v_20 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          p_20 = ATgetArgument(t, 0);
                          q_20 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = p_20;
                      t = eval_config_0_0(t);
                      u_20 = t;
                      t = q_20;
                      t = eval_config_0_0(t);
                      v_20 = t;
                      t = (ATerm) ATmakeAppl(sym__2, u_20, v_20);
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
  ATerm a_21 = NULL;
  a_21 = t;
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), a_21);
  {
    ATerm k_7 (ATerm t)
    {
      ATerm b_21 = NULL;
      t = eval_config_0_0(t);
      b_21 = t;
      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), a_21, b_21);
      t = b_21;
      return(t);
    }
    t = try_1_0(k_7, t);
  }
  return(t);
}
ATerm try_1_0 (ATerm x_77 (ATerm), ATerm t)
{
  ATerm w_28 = t;
  int x_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = x_77(t);
      ;
      LocalPopChoice(x_28);
    }
  else
    {
      t = w_28;
    }
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm y_28 = t;
  int z_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_7 (ATerm t)
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
          _fail(t);
        return(t);
      }
      ATerm m_7 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
        t = term_c_29;
        return(t);
      }
      ATerm n_7 (ATerm t)
      {
        t = term_d_29;
        return(t);
      }
      t = Option_3_0(l_7, m_7, n_7, t);
      ;
      LocalPopChoice(z_28);
    }
  else
    {
      t = y_28;
      {
        ATerm o_7 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm q_7 (ATerm t)
        {
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = term_e_29;
          return(t);
        }
        ATerm t_7 (ATerm t)
        {
          t = term_f_29;
          return(t);
        }
        t = Option_3_0(o_7, q_7, t_7, t);
      }
    }
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm h_21 = NULL,i_21 = NULL,j_21 = NULL,k_21 = NULL;
  if(match_cons(t, sym__3))
    {
      h_21 = ATgetArgument(t, 0);
      i_21 = ATgetArgument(t, 1);
      j_21 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, h_21, i_21);
  {
    ATerm g_29 = t;
    int h_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm i_29 = ATgetArgument(t, 0);
            ATerm j_29 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(h_21, i_21);
        ;
        LocalPopChoice(h_29);
      }
    else
      {
        t = g_29;
        t = (ATerm) ATempty;
      }
    k_21 = t;
    t = SSL_table_put(h_21, i_21, (ATerm) ATinsert(CheckATermList(k_21), j_21));
    t = (ATerm) ATmakeAppl(sym__3, h_21, i_21, j_21);
  }
  return(t);
}
ATerm register_usage_1_0 (ATerm x_84 (ATerm), ATerm t)
{
  ATerm p_21 = NULL;
  t = term_q_24;
  t = x_84(t);
  p_21 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_k_29, term_l_29, p_21);
  t = table_push_0_0(t);
  _fail(t);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm r_21 = NULL,s_21 = NULL,t_21 = NULL;
  r_21 = t;
  if(match_string(t, "register-usage-info"))
    {
      t = r_21;
      t = register_usage_1_0(d_0, t);
    }
  else
    {
      ATerm w_21 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          s_21 = ATgetFirst((ATermList) t);
          t_21 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = s_21;
      t = a_0(t);
      t = term_q_24;
      t = b_0(t);
      w_21 = t;
      t = (ATerm) ATinsert(CheckATermList(t_21), w_21);
    }
  return(t);
}
ATerm system_usage_switch_0_0 (ATerm t)
{
  ATerm u_7 (ATerm t)
  {
    ATerm y_21 = NULL;
    y_21 = t;
    if(match_string(t, "--help"))
      {
        t = y_21;
      }
    else
      {
        if(match_string(t, "-h"))
          {
            t = y_21;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
              _fail(t);
            t = y_21;
          }
      }
    return(t);
  }
  ATerm x_7 (ATerm t)
  {
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
    t = term_m_29;
    return(t);
  }
  ATerm c_8 (ATerm t)
  {
    t = term_n_29;
    return(t);
  }
  t = Option_3_0(u_7, x_7, c_8, t);
  return(t);
}
ATerm Cons_2_0 (ATerm z_56 (ATerm), ATerm a_57 (ATerm), ATerm t)
{
  ATerm z_21 = NULL,a_22 = NULL,b_22 = NULL,c_22 = NULL,d_22 = NULL,e_22 = NULL;
  e_22 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_22 = ATgetFirst((ATermList) t);
      b_22 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_22);
  z_21 = t;
  t = a_22;
  t = z_56(t);
  c_22 = t;
  t = b_22;
  t = a_57(t);
  d_22 = t;
  t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(d_22), c_22), z_21);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm v_84 (ATerm), ATerm t)
{
  ATerm l_22 = NULL;
  l_22 = t;
  {
    ATerm d_8 (ATerm t)
    {
      t = term_o_29;
      t = v_84(t);
      return(t);
    }
    t = try_1_0(d_8, t);
    t = l_22;
    {
      ATerm g_8 (ATerm t)
      {
        ATerm m_22 = NULL;
        m_22 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), m_22);
        t = (ATerm) ATmakeAppl(sym_Program_1, m_22);
        return(t);
      }
      ATerm h_8 (ATerm t)
      {
        ATerm p_29 = t;
        int q_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_29 = t;
            int s_29 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(s_29);
              }
            else
              {
                t = r_29;
                t = v_84(t);
                t = Cons_2_0(_id, h_8, t);
              }
            ;
            LocalPopChoice(q_29);
          }
        else
          {
            t = p_29;
            {
              ATerm o_22 = NULL,p_22 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  o_22 = ATgetFirst((ATermList) t);
                  p_22 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(p_22), (ATerm) ATmakeAppl(sym_Undefined_1, o_22));
            }
          }
        return(t);
      }
      t = Cons_2_0(g_8, h_8, t);
    }
  }
  return(t);
}
ATerm parse_options_1_0 (ATerm u_84 (ATerm), ATerm t)
{
  ATerm v_22 = NULL,w_22 = NULL,x_22 = NULL;
  v_22 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATempty);
  t = v_22;
  {
    ATerm i_8 (ATerm t)
    {
      ATerm t_29 = t;
      int u_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = u_84(t);
          ;
          LocalPopChoice(u_29);
        }
      else
        {
          t = t_29;
          {
            ATerm v_29 = t;
            int w_29 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = system_usage_switch_0_0(t);
                ;
                LocalPopChoice(w_29);
              }
            else
              {
                t = v_29;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(i_8, t);
    {
      ATerm j_8 (ATerm t)
      {
        ATerm x_29 = t;
        int y_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_23 = NULL;
            c_23 = t;
            {
              ATerm z_29 = t;
              int a_30 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = c_23;
                  {
                    ATerm b_30 = t;
                    int c_30 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = term_r_27;
                        t = get_config_0_0(t);
                        ;
                        LocalPopChoice(c_30);
                      }
                    else
                      {
                        t = b_30;
                        {
                          ATerm k_8 (ATerm t)
                          {
                            if(!(match_cons(t, sym_Help_0)))
                              _fail(t);
                            return(t);
                          }
                          t = option_defined_1_0(k_8, t);
                        }
                      }
                    t = c_23;
                    t = system_usage_0_0(t);
                    t = SSL_exit((ATerm) ATmakeInt(0));
                  }
                  ;
                  LocalPopChoice(a_30);
                }
              else
                {
                  t = z_29;
                  t = term_b_29;
                  t = get_config_0_0(t);
                  t = c_23;
                  t = system_about_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
            }
            ;
            LocalPopChoice(y_29);
          }
        else
          {
            t = x_29;
            {
              ATerm l_8 (ATerm t)
              {
                ATerm m_8 (ATerm t)
                {
                  w_22 = t;
                  return(t);
                }
                t = Undefined_1_0(m_8, t);
                return(t);
              }
              t = option_defined_1_0(l_8, t);
              t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(w_22)), (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue))));
              t = (ATerm) ATmakeAppl(sym__2, term_a_24, (ATerm) ATinsert(ATinsert(ATempty, not_null(w_22)), term_d_30));
              t = system_usage_0_0(t);
              t = SSL_exit((ATerm) ATmakeInt(1));
            }
          }
        return(t);
      }
      t = try_1_0(j_8, t);
      x_22 = t;
      t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)));
      t = x_22;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm z_82 (ATerm), ATerm a_83 (ATerm), ATerm b_83 (ATerm), ATerm c_83 (ATerm), ATerm t)
{
  ATerm r_12 = NULL;
  t = parse_options_1_0(z_82, t);
  r_12 = t;
  t = SSL_table_create((ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), r_12);
  t = r_12;
  t = b_83(t);
  {
    ATerm e_30 = t;
    int f_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(a_83, t);
        ;
        LocalPopChoice(f_30);
      }
    else
      {
        t = e_30;
        {
          ATerm g_30 = t;
          int h_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = c_83(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(h_30);
            }
          else
            {
              t = g_30;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm option_wrap_2_0 (ATerm d_83 (ATerm), ATerm e_83 (ATerm), ATerm t)
{
  t = option_wrap_4_0(d_83, default_usage_0_0, _id, e_83, t);
  return(t);
}
ATerm xtc_io_wrap_2_0 (ATerm a_81 (ATerm), ATerm b_81 (ATerm), ATerm t)
{
  ATerm n_8 (ATerm t)
  {
    ATerm i_30 = t;
    int j_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_81(t);
        ;
        LocalPopChoice(j_30);
      }
    else
      {
        t = i_30;
        t = io_options_0_0(t);
      }
    return(t);
  }
  ATerm p_8 (ATerm t)
  {
    t = xtc_io_1_0(b_81, t);
    return(t);
  }
  t = option_wrap_2_0(n_8, p_8, t);
  return(t);
}
ATerm xtc_io_wrap_1_0 (ATerm z_80 (ATerm), ATerm t)
{
  t = xtc_io_wrap_2_0(_fail, z_80, t);
  return(t);
}
ATerm io_pp_c_0_0 (ATerm t)
{
  ATerm q_8 (ATerm t)
  {
    ATerm t_8 (ATerm t)
    {
      t = term_k_30;
      return(t);
    }
    ATerm y_8 (ATerm t)
    {
      ATerm f_23 = NULL;
      t = term_l_30;
      t = xtc_find_0_0(t);
      t = remove_extension_0_0(t);
      f_23 = t;
      t = (ATerm) ATinsert(ATinsert(ATempty, f_23), term_m_30);
      return(t);
    }
    t = xtc_transform_2_0(t_8, y_8, t);
    t = xtc_abox_format_0_0(t);
    t = xtc_abox2text_0_0(t);
    return(t);
  }
  t = xtc_io_wrap_1_0(q_8, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = io_pp_c_0_0(t);
  return(t);
}
