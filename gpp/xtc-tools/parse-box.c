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
ATerm term_s_28;
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
ATerm term_d_27;
ATerm term_h_26;
ATerm term_g_26;
ATerm term_z_25;
ATerm term_w_25;
ATerm term_m_25;
ATerm term_h_25;
ATerm term_g_25;
ATerm term_f_25;
ATerm term_c_25;
ATerm term_z_24;
ATerm term_y_24;
ATerm term_x_24;
ATerm term_u_24;
ATerm term_t_24;
ATerm term_s_24;
ATerm term_p_24;
ATerm term_o_24;
ATerm term_l_24;
ATerm term_b_24;
ATerm term_g_23;
ATerm term_f_23;
ATerm term_e_23;
ATerm term_z_22;
ATerm term_y_22;
ATerm term_x_22;
ATerm term_w_22;
ATerm term_v_22;
ATerm term_s_22;
ATerm term_o_22;
ATerm term_g_22;
ATerm term_f_22;
ATerm term_z_21;
ATerm term_y_21;
ATerm term_x_21;
ATerm term_w_21;
ATerm term_v_21;
ATerm term_u_21;
ATerm term_t_21;
ATerm term_s_21;
ATerm term_r_21;
ATerm term_q_21;
ATerm term_p_21;
ATerm term_o_21;
ATerm term_m_21;
ATerm term_l_21;
ATerm term_k_21;
ATerm term_j_21;
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
ATerm term_t_20;
ATerm term_q_20;
ATerm term_p_20;
ATerm term_o_20;
ATerm term_n_20;
ATerm term_m_20;
ATerm term_l_20;
ATerm term_d_20;
ATerm term_b_20;
ATerm term_a_20;
ATerm term_x_19;
ATerm term_v_19;
ATerm term_t_19;
ATerm term_s_19;
ATerm term_r_19;
ATerm term_q_19;
ATerm term_l_19;
ATerm term_k_19;
ATerm term_h_19;
ATerm term_g_19;
ATerm term_d_19;
ATerm term_c_19;
ATerm term_b_19;
ATerm term_x_18;
ATerm term_w_18;
ATerm term_v_18;
ATerm term_t_18;
ATerm term_s_18;
ATerm term_r_18;
ATerm term_q_18;
ATerm term_p_18;
ATerm term_i_18;
ATerm term_h_18;
ATerm term_g_18;
ATerm term_u_17;
ATerm term_t_17;
ATerm term_s_17;
ATerm term_p_17;
ATerm term_o_17;
ATerm term_n_17;
ATerm term_m_17;
ATerm term_l_17;
ATerm term_k_17;
ATerm term_j_17;
ATerm term_g_17;
ATerm term_e_17;
ATerm term_d_17;
ATerm term_c_17;
ATerm term_w_16;
ATerm term_v_16;
ATerm term_u_16;
ATerm term_n_16;
ATerm term_m_16;
ATerm term_l_16;
ATerm term_i_16;
ATerm term_h_16;
ATerm term_e_16;
ATerm term_b_16;
ATerm term_a_16;
ATerm term_z_15;
ATerm term_v_15;
ATerm term_u_15;
ATerm term_t_15;
ATerm term_s_15;
ATerm term_r_15;
ATerm term_q_15;
ATerm term_p_15;
ATerm term_o_15;
ATerm term_n_15;
ATerm term_m_15;
ATerm term_l_15;
ATerm term_e_15;
ATerm term_d_15;
ATerm term_a_15;
ATerm term_z_14;
ATerm term_t_14;
ATerm term_r_14;
ATerm term_q_14;
ATerm term_p_14;
ATerm term_j_14;
ATerm term_i_14;
ATerm term_d_14;
ATerm term_c_14;
ATerm term_a_14;
ATerm term_z_13;
ATerm term_n_13;
ATerm term_q_12;
ATerm term_p_12;
ATerm term_m_12;
ATerm term_j_12;
ATerm term_i_12;
ATerm term_c_12;
ATerm term_z_11;
ATerm term_u_11;
ATerm term_q_11;
ATerm term_i_11;
ATerm term_h_11;
ATerm term_g_11;
ATerm term_f_11;
ATerm term_d_11;
ATerm term_c_11;
ATerm term_b_11;
ATerm term_q_9;
ATerm term_n_9;
ATerm term_b_9;
ATerm term_a_9;
ATerm term_w_8;
ATerm term_u_8;
ATerm term_r_8;
ATerm term_o_8;
void init_constant_terms (void)
{
  ATprotect(&(term_o_8));
  term_o_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_r_8));
  term_r_8 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_u_8));
  term_u_8 = (ATerm) ATmakeAppl(ATmakeSymbol("implode-asfix", 0, ATtrue));
  ATprotect(&(term_w_8));
  term_w_8 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_a_9));
  term_a_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_b_9));
  term_b_9 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_n_9));
  term_n_9 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_q_9));
  term_q_9 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_14, term_r_8, term_j_14);
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_14, term_r_14, term_t_14);
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_15, term_w_8, term_d_15);
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_15, term_q_9, term_m_15);
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_15, term_p_15, term_q_15);
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_15, term_t_15, term_u_15);
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_15, term_a_16, term_b_16);
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_l_16));
  term_l_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_16, term_i_16, term_l_16);
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_u_16));
  term_u_16 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_16, term_u_16, term_v_16);
  ATprotect(&(term_c_17));
  term_c_17 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_g_17));
  term_g_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_17, term_d_17, term_e_17);
  ATprotect(&(term_j_17));
  term_j_17 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_k_17));
  term_k_17 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_l_17));
  term_l_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_m_17));
  term_m_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_17, term_k_17, term_l_17);
  ATprotect(&(term_n_17));
  term_n_17 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_17, term_n_9, term_o_17);
  ATprotect(&(term_s_17));
  term_s_17 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_t_17));
  term_t_17 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_u_17));
  term_u_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_g_18));
  term_g_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_17, term_t_17, term_u_17);
  ATprotect(&(term_h_18));
  term_h_18 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_i_18));
  term_i_18 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_p_18));
  term_p_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_q_18));
  term_q_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_18, term_i_18, term_p_18);
  ATprotect(&(term_r_18));
  term_r_18 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_s_18));
  term_s_18 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_t_18));
  term_t_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_v_18));
  term_v_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_18, term_s_18, term_t_18);
  ATprotect(&(term_w_18));
  term_w_18 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_x_18));
  term_x_18 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_b_19));
  term_b_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_c_19));
  term_c_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_18, term_x_18, term_b_19);
  ATprotect(&(term_d_19));
  term_d_19 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_h_19));
  term_h_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_k_19));
  term_k_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_19, term_g_19, term_h_19);
  ATprotect(&(term_l_19));
  term_l_19 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_q_19));
  term_q_19 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_r_19));
  term_r_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_s_19));
  term_s_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_19, term_q_19, term_r_19);
  ATprotect(&(term_t_19));
  term_t_19 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_v_19));
  term_v_19 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_x_19));
  term_x_19 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_a_20));
  term_a_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_19, term_v_19, term_x_19);
  ATprotect(&(term_b_20));
  term_b_20 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_d_20));
  term_d_20 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_l_20));
  term_l_20 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_m_20));
  term_m_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_20, term_d_20, term_l_20);
  ATprotect(&(term_n_20));
  term_n_20 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_o_20));
  term_o_20 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_p_20));
  term_p_20 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_q_20));
  term_q_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_20, term_o_20, term_p_20);
  ATprotect(&(term_t_20));
  term_t_20 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_w_20));
  term_w_20 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_x_20));
  term_x_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_y_20));
  term_y_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_20, term_w_20, term_x_20);
  ATprotect(&(term_z_20));
  term_z_20 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_a_21));
  term_a_21 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_b_21));
  term_b_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_c_21));
  term_c_21 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_20, term_a_21, term_b_21);
  ATprotect(&(term_d_21));
  term_d_21 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_e_21));
  term_e_21 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_f_21));
  term_f_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_j_21));
  term_j_21 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_21, term_e_21, term_f_21);
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_l_21));
  term_l_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_m_21));
  term_m_21 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_21, term_b_9, term_l_21);
  ATprotect(&(term_o_21));
  term_o_21 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_p_21));
  term_p_21 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_q_21));
  term_q_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_r_21));
  term_r_21 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_21, term_p_21, term_q_21);
  ATprotect(&(term_s_21));
  term_s_21 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_t_21));
  term_t_21 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_u_21));
  term_u_21 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_v_21));
  term_v_21 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_21, term_t_21, term_u_21);
  ATprotect(&(term_w_21));
  term_w_21 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_x_21));
  term_x_21 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_y_21));
  term_y_21 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_z_21));
  term_z_21 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_21, term_x_21, term_y_21);
  ATprotect(&(term_f_22));
  term_f_22 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_g_22));
  term_g_22 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_o_22));
  term_o_22 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_s_22));
  term_s_22 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file> (file, mode)", 0, ATtrue));
  ATprotect(&(term_v_22));
  term_v_22 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_w_22));
  term_w_22 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_x_22));
  term_x_22 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_y_22));
  term_y_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_z_22));
  term_z_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_e_23));
  term_e_23 = (ATerm) ATmakeAppl(ATmakeSymbol("sglr", 0, ATtrue));
  ATprotect(&(term_f_23));
  term_f_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-2tA", 0, ATtrue));
  ATprotect(&(term_g_23));
  term_g_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_b_24));
  term_b_24 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_l_24));
  term_l_24 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_o_24));
  term_o_24 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_p_24));
  term_p_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_s_24));
  term_s_24 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_t_24));
  term_t_24 = (ATerm) ATmakeAppl(sym_Verbose_1, term_s_24);
  ATprotect(&(term_u_24));
  term_u_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_x_24));
  term_x_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_y_24));
  term_y_24 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_z_24));
  term_z_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_c_25));
  term_c_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_f_25));
  term_f_25 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_g_25));
  term_g_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_h_25));
  term_h_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_m_25));
  term_m_25 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_w_25));
  term_w_25 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_z_25));
  term_z_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_g_26));
  term_g_26 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_h_26));
  term_h_26 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_d_27));
  term_d_27 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_i_27));
  term_i_27 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_j_27));
  term_j_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_k_27));
  term_k_27 = (ATerm) ATmakeAppl(sym__3, term_i_27, term_j_27, term_v_22);
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
  ATprotect(&(term_s_28));
  term_s_28 = (ATerm) ATmakeAppl(ATmakeSymbol("Box.tbl", 0, ATtrue));
}
ATerm pass_verbose_0_0 (ATerm);
ATerm xtc_implode_asfix_0_0 (ATerm);
ATerm if_verbose3_1_0 (ATerm x_80 (ATerm), ATerm);
ATerm pass_v_verbose_0_0 (ATerm);
ATerm table_getlist_0_0 (ATerm);
ATerm if_verbose5_1_0 (ATerm z_80 (ATerm), ATerm);
ATerm xtc_find_version_loc_0_0 (ATerm);
ATerm filter_1_0 (ATerm a_77 (ATerm), ATerm);
ATerm repeat_1_0 (ATerm u_78 (ATerm), ATerm);
ATerm xtc_import_0_0 (ATerm);
ATerm say_1_0 (ATerm e_65 (ATerm), ATerm);
ATerm if_verbose4_1_0 (ATerm y_80 (ATerm), ATerm);
ATerm if_verbose6_1_0 (ATerm a_81 (ATerm), ATerm);
ATerm HdMember_p__2_0 (ATerm o_73 (ATerm), ATerm p_73 (ATerm), ATerm);
ATerm union_1_0 (ATerm k_73 (ATerm), ATerm);
ATerm union_0_0 (ATerm);
ATerm table_append_0_0 (ATerm);
ATerm table_putlist_1_0 (ATerm j_81 (ATerm), ATerm);
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
ATerm xtc_transform_term_2_0 (ATerm w_83 (ATerm), ATerm x_83 (ATerm), ATerm);
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
ATerm xtc_command_1_0 (ATerm n_83 (ATerm), ATerm);
ATerm assert_1_0 (ATerm y_79 (ATerm), ATerm);
ATerm obsolete_1_0 (ATerm h_65 (ATerm), ATerm);
ATerm open_file_0_0 (ATerm);
ATerm new_0_0 (ATerm);
ATerm new_file_0_0 (ATerm);
ATerm xtc_new_file_0_0 (ATerm);
ATerm xtc_transform_file_2_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm);
ATerm FILE_1_0 (ATerm y_61 (ATerm), ATerm);
ATerm xtc_transform_2_0 (ATerm p_83 (ATerm), ATerm q_83 (ATerm), ATerm);
ATerm xtc_sglr_1_0 (ATerm h_93 (ATerm), ATerm);
ATerm copy_to_1_0 (ATerm k_0 (ATerm), ATerm);
ATerm table_pop_0_0 (ATerm);
ATerm end_scope_1_0 (ATerm v_79 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm q_80 (ATerm), ATerm r_80 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm u_79 (ATerm), ATerm);
ATerm xtc_temp_files_1_0 (ATerm z_82 (ATerm), ATerm);
ATerm xtc_io_1_0 (ATerm a_83 (ATerm), ATerm);
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
ATerm if_verbose1_1_0 (ATerm v_80 (ATerm), ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm need_help_1_0 (ATerm b_85 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm reverse_0_0 (ATerm);
ATerm Program_1_0 (ATerm f_62 (ATerm), ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm g_62 (ATerm), ATerm);
ATerm fetch_1_0 (ATerm r_69 (ATerm), ATerm);
ATerm option_defined_1_0 (ATerm w_85 (ATerm), ATerm);
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
ATerm try_1_0 (ATerm b_80 (ATerm), ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm register_usage_1_0 (ATerm b_87 (ATerm), ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm system_usage_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm z_56 (ATerm), ATerm a_57 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm z_86 (ATerm), ATerm);
ATerm parse_options_1_0 (ATerm y_86 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm d_85 (ATerm), ATerm e_85 (ATerm), ATerm f_85 (ATerm), ATerm g_85 (ATerm), ATerm);
ATerm option_wrap_2_0 (ATerm h_85 (ATerm), ATerm i_85 (ATerm), ATerm);
ATerm xtc_io_wrap_2_0 (ATerm e_83 (ATerm), ATerm f_83 (ATerm), ATerm);
ATerm xtc_io_wrap_1_0 (ATerm d_83 (ATerm), ATerm);
ATerm io_parse_box_0_0 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm pass_verbose_0_0 (ATerm t)
{
  ATerm d_1 = NULL,e_1 = NULL,g_1 = NULL;
  t = term_o_8;
  {
    ATerm p_8 = t;
    int q_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        ;
        LocalPopChoice(q_8);
      }
    else
      {
        t = p_8;
        t = term_r_8;
      }
    d_1 = t;
    t = (ATerm) ATmakeAppl(sym__2, d_1, term_r_8);
    {
      ATerm s_8 = t;
      int t_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SSL_subti(d_1, (ATerm) ATmakeInt(1));
          ;
          LocalPopChoice(t_8);
        }
      else
        {
          t = s_8;
          t = SSL_subtr(d_1, (ATerm) ATmakeInt(1));
        }
      g_1 = t;
      t = SSL_int_to_string(g_1);
      e_1 = t;
      t = (ATerm) ATinsert(ATinsert(ATempty, e_1), term_o_8);
    }
  }
  return(t);
}
ATerm xtc_implode_asfix_0_0 (ATerm t)
{
  ATerm c_0 (ATerm t)
  {
    t = term_u_8;
    return(t);
  }
  t = xtc_transform_2_0(c_0, pass_verbose_0_0, t);
  return(t);
}
ATerm if_verbose3_1_0 (ATerm x_80 (ATerm), ATerm t)
{
  ATerm n_0 (ATerm t)
  {
    ATerm h_1 = NULL,p_1 = NULL;
    h_1 = t;
    t = term_o_8;
    t = get_config_0_0(t);
    p_1 = t;
    t = (ATerm) ATmakeAppl(sym__2, p_1, term_w_8);
    t = geq_0_0(t);
    t = h_1;
    t = x_80(t);
    return(t);
  }
  t = try_1_0(n_0, t);
  return(t);
}
ATerm pass_v_verbose_0_0 (ATerm t)
{
  t = (ATerm) ATempty;
  {
    ATerm o_0 (ATerm t)
    {
      t = (ATerm) ATinsert(ATempty, term_a_9);
      return(t);
    }
    t = if_verbose3_1_0(o_0, t);
  }
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm q_1 = NULL;
  q_1 = t;
  t = SSL_table_keys(q_1);
  {
    ATerm p_0 (ATerm t)
    {
      ATerm w_1 = NULL,x_1 = NULL;
      w_1 = t;
      t = SSL_table_get(q_1, w_1);
      x_1 = t;
      t = (ATerm) ATmakeAppl(sym__2, w_1, x_1);
      return(t);
    }
    t = map_1_0(p_0, t);
  }
  return(t);
}
ATerm if_verbose5_1_0 (ATerm z_80 (ATerm), ATerm t)
{
  ATerm q_0 (ATerm t)
  {
    ATerm z_1 = NULL,a_2 = NULL;
    z_1 = t;
    t = term_o_8;
    t = get_config_0_0(t);
    a_2 = t;
    t = (ATerm) ATmakeAppl(sym__2, a_2, term_b_9);
    t = geq_0_0(t);
    t = z_1;
    t = z_80(t);
    return(t);
  }
  t = try_1_0(q_0, t);
  return(t);
}
ATerm xtc_find_version_loc_0_0 (ATerm t)
{
  ATerm h_2 = NULL,k_2 = NULL,l_2 = NULL;
  if(match_cons(t, sym__2))
    {
      h_2 = ATgetArgument(t, 0);
      k_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Tool_1, h_2));
  {
    ATerm r_0 (ATerm t)
    {
      if(match_cons(t, sym__2))
        {
          if((k_2 != ATgetArgument(t, 0)))
            {
              _fail(ATgetArgument(t, 0));
            }
          l_2 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      return(t);
    }
    t = fetch_1_0(r_0, t);
    t = not_null(l_2);
  }
  return(t);
}
ATerm filter_1_0 (ATerm a_77 (ATerm), ATerm t)
{
  ATerm c_9 = t;
  int d_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(d_9);
    }
  else
    {
      t = c_9;
      {
        ATerm e_9 = t;
        int j_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_0 (ATerm t)
            {
              t = filter_1_0(a_77, t);
              return(t);
            }
            t = Cons_2_0(a_77, s_0, t);
            ;
            LocalPopChoice(j_9);
          }
        else
          {
            t = e_9;
            {
              ATerm p_2 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm k_9 = ATgetFirst((ATermList) t);
                  p_2 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = p_2;
              t = filter_1_0(a_77, t);
            }
          }
      }
    }
  return(t);
}
ATerm repeat_1_0 (ATerm u_78 (ATerm), ATerm t)
{
  ATerm s_2 (ATerm t)
  {
    ATerm t_0 (ATerm t)
    {
      t = u_78(t);
      t = s_2(t);
      return(t);
    }
    t = try_1_0(t_0, t);
    return(t);
  }
  t = s_2(t);
  return(t);
}
ATerm xtc_import_0_0 (ATerm t)
{
  ATerm t_2 = NULL;
  t_2 = t;
  {
    ATerm u_0 (ATerm t)
    {
      t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Import_0));
      t = filter_1_0(xtc_read_0_0, t);
      {
        ATerm l_9 = t;
        if((PushChoice() == 0))
          {
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = l_9;
          }
      }
      return(t);
    }
    t = repeat_1_0(u_0, t);
    t = t_2;
  }
  return(t);
}
ATerm say_1_0 (ATerm e_65 (ATerm), ATerm t)
{
  ATerm v_2 = NULL,e_0 = NULL;
  v_2 = t;
  t = e_65(t);
  e_0 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, e_0));
  t = v_2;
  return(t);
}
ATerm if_verbose4_1_0 (ATerm y_80 (ATerm), ATerm t)
{
  ATerm v_0 (ATerm t)
  {
    ATerm w_2 = NULL,z_2 = NULL;
    w_2 = t;
    t = term_o_8;
    t = get_config_0_0(t);
    z_2 = t;
    t = (ATerm) ATmakeAppl(sym__2, z_2, term_n_9);
    t = geq_0_0(t);
    t = w_2;
    t = y_80(t);
    return(t);
  }
  t = try_1_0(v_0, t);
  return(t);
}
ATerm if_verbose6_1_0 (ATerm a_81 (ATerm), ATerm t)
{
  ATerm w_0 (ATerm t)
  {
    ATerm b_3 = NULL,d_3 = NULL;
    b_3 = t;
    t = term_o_8;
    t = get_config_0_0(t);
    d_3 = t;
    t = (ATerm) ATmakeAppl(sym__2, d_3, term_q_9);
    t = geq_0_0(t);
    t = b_3;
    t = a_81(t);
    return(t);
  }
  t = try_1_0(w_0, t);
  return(t);
}
ATerm HdMember_p__2_0 (ATerm o_73 (ATerm), ATerm p_73 (ATerm), ATerm t)
{
  ATerm k_3 = NULL,l_3 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_3 = ATgetFirst((ATermList) t);
      l_3 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = p_73(t);
  {
    ATerm x_0 (ATerm t)
    {
      ATerm m_3 = NULL;
      m_3 = t;
      t = (ATerm) ATmakeAppl(sym__2, k_3, m_3);
      t = o_73(t);
      return(t);
    }
    t = fetch_1_0(x_0, t);
    t = l_3;
  }
  return(t);
}
ATerm union_1_0 (ATerm k_73 (ATerm), ATerm t)
{
  ATerm n_3 = NULL,o_3 = NULL;
  if(match_cons(t, sym__2))
    {
      o_3 = ATgetArgument(t, 0);
      n_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_3;
  {
    ATerm q_3 (ATerm t)
    {
      ATerm r_9 = t;
      int s_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = n_3;
          ;
          LocalPopChoice(s_9);
        }
      else
        {
          t = r_9;
          {
            ATerm f_10 = t;
            int g_10 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm y_0 (ATerm t)
                {
                  t = n_3;
                  return(t);
                }
                t = HdMember_p__2_0(k_73, y_0, t);
                t = q_3(t);
                ;
                LocalPopChoice(g_10);
              }
            else
              {
                t = f_10;
                t = Cons_2_0(_id, q_3, t);
              }
          }
        }
      return(t);
    }
    t = q_3(t);
  }
  return(t);
}
ATerm union_0_0 (ATerm t)
{
  ATerm z_0 (ATerm t)
  {
    ATerm r_3 = NULL;
    if(match_cons(t, sym__2))
      {
        r_3 = ATgetArgument(t, 0);
        if((r_3 != ATgetArgument(t, 1)))
          {
            _fail(ATgetArgument(t, 1));
          }
      }
    else
      _fail(t);
    return(t);
  }
  t = union_1_0(z_0, t);
  return(t);
}
ATerm table_append_0_0 (ATerm t)
{
  ATerm v_3 = NULL,w_3 = NULL,z_3 = NULL,b_4 = NULL,c_4 = NULL;
  if(match_cons(t, sym__3))
    {
      v_3 = ATgetArgument(t, 0);
      w_3 = ATgetArgument(t, 1);
      z_3 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, v_3, w_3);
  {
    ATerm h_10 = t;
    int j_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm n_10 = ATgetArgument(t, 0);
            ATerm o_10 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(v_3, w_3);
        ;
        LocalPopChoice(j_10);
      }
    else
      {
        t = h_10;
        t = (ATerm) ATempty;
      }
    b_4 = t;
    t = (ATerm) ATmakeAppl(sym__2, b_4, z_3);
    t = union_0_0(t);
    c_4 = t;
    t = SSL_table_put(v_3, w_3, c_4);
    t = (ATerm) ATmakeAppl(sym__3, v_3, w_3, z_3);
  }
  return(t);
}
ATerm table_putlist_1_0 (ATerm j_81 (ATerm), ATerm t)
{
  ATerm d_4 = NULL,e_4 = NULL;
  if(match_cons(t, sym__2))
    {
      e_4 = ATgetArgument(t, 0);
      d_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_4;
  {
    ATerm a_1 (ATerm t)
    {
      ATerm f_4 = NULL,h_4 = NULL;
      if(match_cons(t, sym__2))
        {
          f_4 = ATgetArgument(t, 0);
          h_4 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__3, e_4, f_4, h_4);
      t = j_81(t);
      return(t);
    }
    t = map_1_0(a_1, t);
  }
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm u_10 = t;
  int w_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_1 = NULL;
      b_1 = t;
      t = SSL_access(b_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_R__OK_0)));
      LocalPopChoice(w_10);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = u_10;
      {
        ATerm y_10 = t;
        int z_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_11 = t;
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
                t = a_11;
              }
            {
              ATerm c_1 (ATerm t)
              {
                t = term_b_11;
                return(t);
              }
              t = debug_1_0(c_1, t);
            }
            ;
            LocalPopChoice(z_10);
          }
        else
          {
            t = y_10;
            {
              ATerm i_1 (ATerm t)
              {
                t = term_c_11;
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
  ATerm l_4 = NULL,m_4 = NULL,o_4 = NULL;
  l_4 = t;
  {
    ATerm j_1 (ATerm t)
    {
      ATerm m_1 (ATerm t)
      {
        t = term_d_11;
        return(t);
      }
      t = debug_1_0(m_1, t);
      return(t);
    }
    t = if_verbose5_1_0(j_1, t);
    {
      ATerm e_11 = t;
      if((PushChoice() == 0))
        {
          t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Imported_1, l_4));
          PopChoice();
          _fail(t);
        }
      else
        {
          t = e_11;
        }
      m_4 = t;
      t = SSL_table_put((ATerm)ATmakeAppl(sym_XTC_0), (ATerm)ATmakeAppl(sym_Repository_0), (ATerm) ATinsert(ATempty, l_4));
      t = m_4;
      {
        ATerm n_1 (ATerm t)
        {
          ATerm o_1 (ATerm t)
          {
            t = term_f_11;
            return(t);
          }
          t = debug_1_0(o_1, t);
          return(t);
        }
        t = if_verbose4_1_0(n_1, t);
        t = read_repository_file_0_0(t);
        {
          ATerm r_1 (ATerm t)
          {
            ATerm s_1 (ATerm t)
            {
              t = term_g_11;
              return(t);
            }
            t = say_1_0(s_1, t);
            return(t);
          }
          t = if_verbose6_1_0(r_1, t);
          o_4 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_h_11, o_4);
          t = table_putlist_1_0(table_append_0_0, t);
          {
            ATerm t_1 (ATerm t)
            {
              ATerm u_1 (ATerm t)
              {
                t = term_i_11;
                return(t);
              }
              t = say_1_0(u_1, t);
              return(t);
            }
            t = if_verbose6_1_0(t_1, t);
            t = SSL_table_put((ATerm)ATmakeAppl(sym_XTC_0), (ATerm)ATmakeAppl(sym_Imported_1, l_4), (ATerm) ATempty);
            t = (ATerm) ATmakeAppl(sym__3, term_h_11, (ATerm)ATmakeAppl(sym_Imported_1, l_4), (ATerm) ATempty);
            {
              ATerm v_1 (ATerm t)
              {
                ATerm y_1 (ATerm t)
                {
                  t = term_g_11;
                  return(t);
                }
                t = say_1_0(y_1, t);
                return(t);
              }
              t = if_verbose4_1_0(v_1, t);
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
  ATerm l_11 = t;
  int m_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_q_11;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(m_11);
    }
  else
    {
      t = l_11;
      {
        ATerm s_11 = t;
        int t_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_getenv((ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue)));
            ;
            LocalPopChoice(t_11);
          }
        else
          {
            t = s_11;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm p_4 = NULL;
  ATerm b_2 (ATerm t)
  {
    ATerm c_2 (ATerm t)
    {
      t = term_u_11;
      return(t);
    }
    t = debug_1_0(c_2, t);
    return(t);
  }
  t = if_verbose5_1_0(b_2, t);
  p_4 = t;
  {
    ATerm v_11 = t;
    int y_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Repository_0));
        ;
        LocalPopChoice(y_11);
      }
    else
      {
        t = v_11;
        t = xtc_location_0_0(t);
        t = xtc_read_0_0(t);
        t = xtc_import_0_0(t);
      }
    t = p_4;
    {
      ATerm f_2 (ATerm t)
      {
        ATerm g_2 (ATerm t)
        {
          t = term_z_11;
          return(t);
        }
        t = debug_1_0(g_2, t);
        return(t);
      }
      t = if_verbose5_1_0(f_2, t);
    }
  }
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm a_12 = t;
  int b_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_2 (ATerm t)
      {
        ATerm j_2 (ATerm t)
        {
          t = term_c_12;
          return(t);
        }
        t = debug_1_0(j_2, t);
        return(t);
      }
      t = if_verbose5_1_0(i_2, t);
      t = xtc_load_0_0(t);
      {
        ATerm d_12 = t;
        int e_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = xtc_find_version_loc_0_0(t);
            ;
            LocalPopChoice(e_12);
          }
        else
          {
            t = d_12;
            {
              ATerm k_1 = NULL,l_1 = NULL;
              k_1 = t;
              t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Tool_1, k_1));
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm f_12 = ATgetFirst((ATermList) t);
                  if(match_cons(f_12, sym__2))
                    {
                      ATerm h_12 = ATgetArgument(f_12, 0);
                      l_1 = ATgetArgument(f_12, 1);
                    }
                  else
                    _fail(t);
                  {
                    ATerm g_12 = (ATerm) ATgetNext((ATermList) t);
                  }
                }
              else
                _fail(t);
              t = l_1;
            }
          }
        {
          ATerm m_2 (ATerm t)
          {
            ATerm n_2 (ATerm t)
            {
              t = term_c_12;
              return(t);
            }
            t = debug_1_0(n_2, t);
            return(t);
          }
          t = if_verbose5_1_0(m_2, t);
        }
      }
      ;
      LocalPopChoice(b_12);
    }
  else
    {
      t = a_12;
      {
        ATerm q_4 = NULL;
        q_4 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue))), q_4), (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue))));
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_j_12), q_4), term_i_12);
        {
          ATerm o_2 (ATerm t)
          {
            t = term_h_11;
            t = table_getlist_0_0(t);
            {
              ATerm r_2 (ATerm t)
              {
                t = term_m_12;
                return(t);
              }
              t = debug_1_0(r_2, t);
            }
            return(t);
          }
          t = if_verbose5_1_0(o_2, t);
          _fail(t);
        }
      }
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm t_4 = NULL,u_4 = NULL,v_4 = NULL;
  ATerm n_12 = t;
  int o_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_4 = NULL;
      w_4 = t;
      t = (ATerm) ATmakeAppl(sym__2, w_4, term_p_12);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(o_12);
    }
  else
    {
      t = n_12;
      {
        ATerm u_2 (ATerm t)
        {
          t = term_q_12;
          return(t);
        }
        t = debug_1_0(u_2, t);
        _fail(t);
      }
    }
  t_4 = t;
  if(match_cons(t, sym_Stream_1))
    {
      v_4 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(v_4);
  u_4 = t;
  t = t_4;
  t = fclose_0_0(t);
  t = u_4;
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm z_4 = NULL,c_5 = NULL;
  z_4 = t;
  if(match_cons(t, sym_stdin_0))
    {
      t = z_4;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_FILE_1))
        {
          c_5 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSL_access(c_5, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_F__OK_0)));
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm m_6 (ATerm a_6, ATerm t)
  {
    t = SSL_fclose(a_6);
    return(t);
  }
  ATerm h_6 = NULL,i_6 = NULL;
  i_6 = t;
  if(match_cons(t, sym_Stream_1))
    {
      h_6 = ATgetArgument(t, 0);
      {
        ATerm u_12 = t;
        int v_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(h_6);
            ;
            LocalPopChoice(v_12);
          }
        else
          {
            t = u_12;
            t = m_6(i_6, t);
          }
      }
    }
  else
    {
      t = m_6(i_6, t);
    }
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm q_6 = NULL;
  t = SSL_stdin_stream();
  q_6 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, q_6);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm r_6 = NULL;
  t = SSL_stdout_stream();
  r_6 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, r_6);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm s_6 = NULL;
  t = SSL_stderr_stream();
  s_6 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, s_6);
  return(t);
}
ATerm stdio_stream_0_0 (ATerm t)
{
  ATerm h_7 = NULL;
  h_7 = t;
  if(match_cons(t, sym_stderr_0))
    {
      t = h_7;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = h_7;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = h_7;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm w_12 = ATgetArgument(t, 0);
      ATerm x_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm y_12 = t;
    int c_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_2 = NULL,e_2 = NULL;
        d_2 = t;
        t = SSL_explode_term(d_2);
        if(match_cons(t, sym__2))
          {
            ATerm f_13 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) f_13) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm g_13 = ATgetArgument(t, 1);
              if(((ATgetType(g_13) == AT_LIST) && !(ATisEmpty(g_13))))
                {
                  e_2 = ATgetFirst((ATermList) g_13);
                  {
                    ATerm k_13 = (ATerm) ATgetNext((ATermList) g_13);
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
        LocalPopChoice(c_13);
      }
    else
      {
        t = y_12;
        {
          ATerm l_13 = t;
          int m_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm k_7 = NULL,l_7 = NULL,m_7 = NULL;
              ATerm x_2 (ATerm t)
              {
                ATerm n_7 = NULL;
                if(match_cons(t, sym_Path_1))
                  {
                    n_7 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = n_7;
                return(t);
              }
              t = _2_0(x_2, _id, t);
              if(match_cons(t, sym__2))
                {
                  k_7 = ATgetArgument(t, 0);
                  l_7 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_fopen(k_7, l_7);
              m_7 = t;
              t = (ATerm) ATmakeAppl(sym_Stream_1, m_7);
              ;
              LocalPopChoice(m_13);
            }
          else
            {
              t = l_13;
              {
                ATerm o_7 = NULL,p_7 = NULL,q_7 = NULL;
                ATerm y_2 (ATerm t)
                {
                  ATerm r_7 = NULL;
                  r_7 = t;
                  t = SSL_is_string(r_7);
                  return(t);
                }
                t = _2_0(y_2, _id, t);
                if(match_cons(t, sym__2))
                  {
                    o_7 = ATgetArgument(t, 0);
                    p_7 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_fopen(o_7, p_7);
                q_7 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, q_7);
              }
            }
        }
      }
  }
  return(t);
}
ATerm WriteToFile_1_0 (ATerm o_65 (ATerm), ATerm t)
{
  ATerm s_7 = NULL,t_7 = NULL,u_7 = NULL;
  if(match_cons(t, sym__2))
    {
      s_7 = ATgetArgument(t, 0);
      t_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, s_7, term_n_13);
  t = open_stream_0_0(t);
  u_7 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_7, t_7);
  t = o_65(t);
  t = fclose_0_0(t);
  t = t_7;
  return(t);
}
ATerm WriteToBinaryFile_0_0 (ATerm t)
{
  ATerm a_3 (ATerm t)
  {
    ATerm v_7 = NULL,w_7 = NULL,x_7 = NULL;
    if(match_cons(t, sym__2))
      {
        ATerm s_13 = ATgetArgument(t, 0);
        if(match_cons(s_13, sym_Stream_1))
          {
            v_7 = ATgetArgument(s_13, 0);
          }
        else
          _fail(t);
        w_7 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSL_write_term_to_stream_baf(v_7, w_7);
    x_7 = t;
    t = (ATerm) ATmakeAppl(sym_Stream_1, x_7);
    return(t);
  }
  t = WriteToFile_1_0(a_3, t);
  return(t);
}
ATerm write_to_0_0 (ATerm t)
{
  ATerm y_7 = NULL,z_7 = NULL;
  y_7 = t;
  t = xtc_new_file_0_0(t);
  z_7 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_7, y_7);
  t = WriteToBinaryFile_0_0(t);
  t = SSL_close_file(z_7);
  t = (ATerm) ATmakeAppl(sym_FILE_1, z_7);
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm w_83 (ATerm), ATerm x_83 (ATerm), ATerm t)
{
  t = write_to_0_0(t);
  t = xtc_transform_file_2_0(w_83, x_83, t);
  t = read_from_0_0(t);
  return(t);
}
ATerm concat_strings_0_0 (ATerm t)
{
  ATerm a_8 = NULL;
  ATerm c_3 (ATerm t)
  {
    ATerm b_8 = NULL;
    b_8 = t;
    t = SSL_explode_string(b_8);
    return(t);
  }
  t = map_1_0(c_3, t);
  t = concat_0_0(t);
  a_8 = t;
  t = SSL_implode_string(a_8);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm v_8 = NULL,x_8 = NULL,y_8 = NULL,z_8 = NULL;
  v_8 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      x_8 = ATgetArgument(t, 0);
      {
        ATerm q_2 = NULL;
        t = SSL_int_to_string(x_8);
        q_2 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_a_14), q_2), term_z_13);
        t = concat_strings_0_0(t);
      }
    }
  else
    {
      ATerm s_3 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          x_8 = ATgetArgument(t, 0);
          y_8 = ATgetArgument(t, 1);
          z_8 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(y_8);
      s_3 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, z_8), term_d_14), s_3), term_c_14), x_8);
      t = concat_strings_0_0(t);
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm t_69 (ATerm), ATerm t)
{
  ATerm f_9 = NULL;
  ATerm e_3 (ATerm t)
  {
    t = t_69(t);
    f_9 = t;
    return(t);
  }
  t = fetch_1_0(e_3, t);
  t = not_null(f_9);
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm g_9 = NULL;
  g_9 = t;
  {
    ATerm g_14 = t;
    int h_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_z_21), term_v_21), term_r_21), term_m_21), term_j_21), term_c_21), term_y_20), term_q_20), term_m_20), term_a_20), term_s_19), term_k_19), term_c_19), term_v_18), term_q_18), term_g_18), term_p_17), term_m_17), term_g_17), term_w_16), term_m_16), term_e_16), term_v_15), term_r_15), term_n_15), term_e_15), term_z_14), term_p_14);
        {
          ATerm f_3 (ATerm t)
          {
            if(match_cons(t, sym_Signal_3))
              {
                ATerm a_22 = ATgetArgument(t, 0);
                if((g_9 != ATgetArgument(t, 1)))
                  {
                    _fail(ATgetArgument(t, 1));
                  }
                {
                  ATerm b_22 = ATgetArgument(t, 2);
                }
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_elem_1_0(f_3, t);
        }
        ;
        LocalPopChoice(h_14);
      }
    else
      {
        t = g_14;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, g_9);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm h_9 = NULL;
  h_9 = t;
  {
    ATerm g_3 (ATerm t)
    {
      ATerm i_9 = NULL,m_9 = NULL;
      if(match_cons(t, sym_WaitStatus_3))
        {
          ATerm c_22 = ATgetArgument(t, 0);
          i_9 = ATgetArgument(t, 1);
          {
            ATerm d_22 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = i_9;
      {
        ATerm e_22 = t;
        if((PushChoice() == 0))
          {
            if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
              _fail(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = e_22;
          }
        t = signal_from_number_0_0(t);
        t = signal_to_descr_0_0(t);
        m_9 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, m_9), (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue))));
        t = (ATerm) ATmakeAppl(sym__2, term_f_22, (ATerm) ATinsert(ATinsert(ATempty, m_9), term_g_22));
      }
      return(t);
    }
    t = try_1_0(g_3, t);
    t = h_9;
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
  ATerm o_9 = NULL,p_9 = NULL;
  o_9 = t;
  t = fork_0_0(t);
  p_9 = t;
  {
    ATerm h_22 = t;
    int i_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = o_9;
        t = b_64(t);
        ;
        LocalPopChoice(i_22);
      }
    else
      {
        t = h_22;
        t = (ATerm) ATmakeAppl(sym__2, p_9, o_9);
        t = c_64(t);
      }
  }
  return(t);
}
ATerm fork_and_wait_1_0 (ATerm d_64 (ATerm), ATerm t)
{
  ATerm t_9 = NULL;
  ATerm h_3 (ATerm t)
  {
    ATerm u_9 = NULL;
    if(match_cons(t, sym__2))
      {
        u_9 = ATgetArgument(t, 0);
        t_9 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSL_waitpid(u_9);
    t = warn_ifsignaled_0_0(t);
    if(match_cons(t, sym_WaitStatus_3))
      {
        ATerm j_22 = ATgetArgument(t, 0);
        if(((ATgetType(j_22) != AT_INT) || (ATgetInt((ATermInt) j_22) != 0)))
          _fail(t);
        {
          ATerm k_22 = ATgetArgument(t, 1);
        }
        {
          ATerm l_22 = ATgetArgument(t, 2);
        }
      }
    else
      _fail(t);
    t = t_9;
    return(t);
  }
  t = fork_2_0(d_64, h_3, t);
  return(t);
}
ATerm call_0_0 (ATerm t)
{
  ATerm v_9 = NULL,w_9 = NULL;
  if(match_cons(t, sym__2))
    {
      v_9 = ATgetArgument(t, 0);
      w_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm i_3 (ATerm t)
    {
      t = SSL_execvp(v_9, w_9);
      return(t);
    }
    t = fork_and_wait_1_0(i_3, t);
  }
  return(t);
}
ATerm xtc_find_warning_0_0 (ATerm t)
{
  t = xtc_find_0_0(t);
  return(t);
}
ATerm xtc_command_1_0 (ATerm n_83 (ATerm), ATerm t)
{
  ATerm x_9 = NULL,y_9 = NULL;
  x_9 = t;
  t = n_83(t);
  t = xtc_find_warning_0_0(t);
  y_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_9, x_9);
  t = call_0_0(t);
  t = x_9;
  return(t);
}
ATerm assert_1_0 (ATerm y_79 (ATerm), ATerm t)
{
  ATerm z_9 = NULL,a_10 = NULL,b_10 = NULL,c_10 = NULL,d_10 = NULL;
  if(match_cons(t, sym__2))
    {
      z_9 = ATgetArgument(t, 0);
      a_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_79(t);
  b_10 = t;
  t = (ATerm) ATmakeAppl(sym__3, b_10, z_9, a_10);
  t = table_push_0_0(t);
  {
    ATerm m_22 = t;
    int n_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get(b_10, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(n_22);
      }
    else
      {
        t = m_22;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        c_10 = ATgetFirst((ATermList) t);
        d_10 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSL_table_put(b_10, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATinsert(CheckATermList(d_10), (ATerm) ATinsert(CheckATermList(c_10), z_9)));
    t = (ATerm) ATmakeAppl(sym__2, z_9, a_10);
  }
  return(t);
}
ATerm obsolete_1_0 (ATerm h_65 (ATerm), ATerm t)
{
  ATerm e_10 = NULL;
  e_10 = t;
  t = h_65(t);
  {
    ATerm j_3 (ATerm t)
    {
      t = term_o_22;
      return(t);
    }
    t = debug_1_0(j_3, t);
    t = e_10;
  }
  return(t);
}
ATerm open_file_0_0 (ATerm t)
{
  ATerm s_10 (ATerm i_10, ATerm t)
  {
    t = i_10;
    {
      ATerm p_22 = t;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym__2))
            {
              ATerm q_22 = ATgetArgument(t, 0);
              ATerm r_22 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = p_22;
        }
      {
        ATerm p_3 (ATerm t)
        {
          t = term_s_22;
          return(t);
        }
        t = obsolete_1_0(p_3, t);
        t = (ATerm) ATmakeAppl(sym__2, i_10, term_n_13);
        t = open_file_0_0(t);
      }
    }
    return(t);
  }
  ATerm t_10 (ATerm k_10, ATerm l_10, ATerm m_10, ATerm t)
  {
    t = SSL_open_file(k_10, l_10);
    return(t);
  }
  ATerm p_10 = NULL,q_10 = NULL,r_10 = NULL;
  p_10 = t;
  if(match_cons(t, sym__2))
    {
      q_10 = ATgetArgument(t, 0);
      r_10 = ATgetArgument(t, 1);
      {
        ATerm t_22 = t;
        int u_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = s_10(p_10, t);
            ;
            LocalPopChoice(u_22);
          }
        else
          {
            t = t_22;
            t = t_10(q_10, r_10, p_10, t);
          }
      }
    }
  else
    {
      t = s_10(p_10, t);
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
  ATerm v_10 = NULL;
  t = term_v_22;
  t = new_0_0(t);
  v_10 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_10, term_w_22);
  t = conc_strings_0_0(t);
  {
    ATerm t_3 (ATerm t)
    {
      ATerm y_3 = NULL;
      y_3 = t;
      t = SSL_access(y_3, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_F__OK_0)));
      t = new_file_0_0(t);
      return(t);
    }
    t = try_1_0(t_3, t);
  }
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm x_10 = NULL;
  t = new_file_0_0(t);
  x_10 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_10, term_n_13);
  t = open_file_0_0(t);
  t = (ATerm) ATmakeAppl(sym__2, x_10, term_v_22);
  {
    ATerm u_3 (ATerm t)
    {
      t = term_x_22;
      return(t);
    }
    t = assert_1_0(u_3, t);
    t = x_10;
  }
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm t)
{
  ATerm j_11 = NULL,k_11 = NULL;
  j_11 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm g_4 = NULL,i_4 = NULL;
      t = j_11;
      t = xtc_new_file_0_0(t);
      g_4 = t;
      t = m_0(t);
      i_4 = t;
      t = (ATerm) ATmakeAppl(sym__2, i_4, (ATerm) ATinsert(ATinsert(ATempty, g_4), term_y_22));
      t = conc_0_0(t);
      t = xtc_command_1_0(l_0, t);
      t = SSL_close_file(g_4);
      t = (ATerm) ATmakeAppl(sym_FILE_1, g_4);
    }
  else
    {
      ATerm y_4 = NULL,a_5 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          k_11 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = k_11;
      t = xtc_new_file_0_0(t);
      y_4 = t;
      t = m_0(t);
      a_5 = t;
      t = (ATerm) ATmakeAppl(sym__2, a_5, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, y_4), term_y_22), k_11), term_z_22));
      t = conc_0_0(t);
      t = xtc_command_1_0(l_0, t);
      t = SSL_close_file(y_4);
      t = (ATerm) ATmakeAppl(sym_FILE_1, y_4);
    }
  return(t);
}
ATerm FILE_1_0 (ATerm y_61 (ATerm), ATerm t)
{
  ATerm n_11 = NULL,o_11 = NULL,p_11 = NULL,r_11 = NULL;
  r_11 = t;
  if(match_cons(t, sym_FILE_1))
    {
      o_11 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_11);
  n_11 = t;
  t = o_11;
  t = y_61(t);
  p_11 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FILE_1, p_11), n_11);
  return(t);
}
ATerm xtc_transform_2_0 (ATerm p_83 (ATerm), ATerm q_83 (ATerm), ATerm t)
{
  ATerm a_23 = t;
  int b_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_23 = t;
      int d_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = FILE_1_0(_id, t);
          ;
          LocalPopChoice(d_23);
        }
      else
        {
          t = c_23;
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
        }
      LocalPopChoice(b_23);
      t = xtc_transform_file_2_0(p_83, q_83, t);
    }
  else
    {
      t = a_23;
      t = xtc_transform_term_2_0(p_83, q_83, t);
    }
  return(t);
}
ATerm xtc_sglr_1_0 (ATerm h_93 (ATerm), ATerm t)
{
  ATerm x_3 (ATerm t)
  {
    t = term_e_23;
    return(t);
  }
  ATerm a_4 (ATerm t)
  {
    ATerm w_11 = NULL,x_11 = NULL;
    t = term_v_22;
    t = h_93(t);
    t = xtc_find_0_0(t);
    w_11 = t;
    t = term_v_22;
    t = pass_v_verbose_0_0(t);
    x_11 = t;
    t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(x_11), w_11), term_g_23), term_f_23);
    return(t);
  }
  t = xtc_transform_2_0(x_3, a_4, t);
  return(t);
}
ATerm copy_to_1_0 (ATerm k_0 (ATerm), ATerm t)
{
  ATerm k_12 = NULL,l_12 = NULL;
  k_12 = t;
  if(match_cons(t, sym_FILE_1))
    {
      l_12 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm h_23 = t;
    int i_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_5 = NULL;
        t = k_12;
        t = k_0(t);
        g_5 = t;
        {
          ATerm j_23 = t;
          int k_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(!(match_cons(t, sym_stdout_0)))
                _fail(t);
              ;
              LocalPopChoice(k_23);
            }
          else
            {
              t = j_23;
              if(!(match_cons(t, sym_stderr_0)))
                _fail(t);
            }
          t = SSL_copy(l_12, g_5);
          t = (ATerm) ATmakeAppl(sym_FILE_1, l_12);
        }
        ;
        LocalPopChoice(i_23);
      }
    else
      {
        t = h_23;
        {
          ATerm l_23 = t;
          int m_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm k_5 = NULL;
              t = k_12;
              t = k_0(t);
              k_5 = t;
              {
                ATerm n_23 = t;
                if((PushChoice() == 0))
                  {
                    ATerm o_23 = t;
                    int p_23 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(!(match_cons(t, sym_stdout_0)))
                          _fail(t);
                        ;
                        LocalPopChoice(p_23);
                      }
                    else
                      {
                        t = o_23;
                        {
                          ATerm q_23 = t;
                          int r_23 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              if(!(match_cons(t, sym_stderr_0)))
                                _fail(t);
                              ;
                              LocalPopChoice(r_23);
                            }
                          else
                            {
                              t = q_23;
                              {
                                ATerm l_5 = NULL;
                                l_5 = t;
                                if((l_12 != t))
                                  {
                                    _fail(t);
                                  }
                                t = l_5;
                              }
                            }
                        }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = n_23;
                  }
                t = SSL_copy(l_12, k_5);
                t = (ATerm) ATmakeAppl(sym_FILE_1, l_12);
              }
              ;
              LocalPopChoice(m_23);
            }
          else
            {
              t = l_23;
              t = k_12;
              t = k_0(t);
              if((l_12 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, l_12);
            }
        }
      }
  }
  return(t);
}
ATerm table_pop_0_0 (ATerm t)
{
  ATerm r_12 = NULL,s_12 = NULL,t_12 = NULL;
  if(match_cons(t, sym__2))
    {
      r_12 = ATgetArgument(t, 0);
      s_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm s_23 = t;
    int t_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_5 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm u_23 = ATgetArgument(t, 0);
            ATerm v_23 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(r_12, s_12);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm w_23 = ATgetFirst((ATermList) t);
            n_5 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = n_5;
        ;
        LocalPopChoice(t_23);
      }
    else
      {
        t = s_23;
        t = (ATerm) ATempty;
      }
    t_12 = t;
    t = SSL_table_put(r_12, s_12, t_12);
    t = (ATerm) ATmakeAppl(sym__2, r_12, s_12);
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm v_79 (ATerm), ATerm t)
{
  ATerm z_12 = NULL,a_13 = NULL,b_13 = NULL,d_13 = NULL;
  z_12 = t;
  t = v_79(t);
  a_13 = t;
  {
    ATerm x_23 = t;
    int y_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get(a_13, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(y_23);
      }
    else
      {
        t = x_23;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        d_13 = ATgetFirst((ATermList) t);
        b_13 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSL_table_put(a_13, (ATerm)ATmakeAppl(sym_Scopes_0), b_13);
    t = d_13;
    {
      ATerm j_4 (ATerm t)
      {
        ATerm e_13 = NULL;
        e_13 = t;
        t = (ATerm) ATmakeAppl(sym__2, a_13, e_13);
        t = table_pop_0_0(t);
        return(t);
      }
      t = map_1_0(j_4, t);
      t = z_12;
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm q_80 (ATerm), ATerm r_80 (ATerm), ATerm t)
{
  ATerm z_23 = t;
  int a_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = q_80(t);
      t = r_80(t);
      ;
      LocalPopChoice(a_24);
    }
  else
    {
      t = z_23;
      t = r_80(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm u_79 (ATerm), ATerm t)
{
  ATerm h_13 = NULL,i_13 = NULL,j_13 = NULL;
  h_13 = t;
  t = u_79(t);
  i_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_13, term_b_24);
  {
    ATerm c_24 = t;
    int d_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm e_24 = ATgetArgument(t, 0);
            ATerm f_24 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(i_13, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(d_24);
      }
    else
      {
        t = c_24;
        t = (ATerm) ATempty;
      }
    j_13 = t;
    t = SSL_table_put(i_13, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATinsert(CheckATermList(j_13), (ATerm) ATempty));
    t = h_13;
  }
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm z_82 (ATerm), ATerm t)
{
  ATerm o_13 = NULL;
  ATerm k_4 (ATerm t)
  {
    t = term_x_22;
    return(t);
  }
  t = begin_scope_1_0(k_4, t);
  {
    ATerm n_4 (ATerm t)
    {
      ATerm p_13 = NULL;
      p_13 = t;
      {
        ATerm g_24 = t;
        int h_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_table_get((ATerm)ATmakeAppl(sym_TempFiles_0), (ATerm) ATmakeAppl(sym_Scopes_0));
            ;
            LocalPopChoice(h_24);
          }
        else
          {
            t = g_24;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
          }
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            o_13 = ATgetFirst((ATermList) t);
            {
              ATerm i_24 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        t = o_13;
        {
          ATerm r_4 (ATerm t)
          {
            ATerm s_4 (ATerm t)
            {
              ATerm q_13 = NULL;
              q_13 = t;
              t = SSL_remove(q_13);
              return(t);
            }
            t = try_1_0(s_4, t);
            return(t);
          }
          t = map_1_0(r_4, t);
          t = p_13;
          {
            ATerm x_4 (ATerm t)
            {
              t = term_x_22;
              return(t);
            }
            t = end_scope_1_0(x_4, t);
          }
        }
      }
      return(t);
    }
    t = restore_always_2_0(z_82, n_4, t);
  }
  return(t);
}
ATerm xtc_io_1_0 (ATerm a_83 (ATerm), ATerm t)
{
  ATerm b_5 (ATerm t)
  {
    ATerm j_24 = t;
    int k_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_13 = NULL;
        t = term_z_22;
        t = get_config_0_0(t);
        r_13 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, r_13);
        ;
        LocalPopChoice(k_24);
      }
    else
      {
        t = j_24;
        t = term_l_24;
      }
    t = a_83(t);
    {
      ATerm d_5 (ATerm t)
      {
        ATerm m_24 = t;
        int n_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_y_22;
            t = get_config_0_0(t);
            ;
            LocalPopChoice(n_24);
          }
        else
          {
            t = m_24;
            t = term_o_24;
          }
        return(t);
      }
      t = copy_to_1_0(d_5, t);
    }
    return(t);
  }
  t = xtc_temp_files_1_0(b_5, t);
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  ATerm e_5 (ATerm t)
  {
    ATerm t_13 = NULL;
    t_13 = t;
    if(match_string(t, "-k"))
      {
        t = t_13;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
          _fail(t);
        t = t_13;
      }
    return(t);
  }
  ATerm f_5 (ATerm t)
  {
    ATerm u_13 = NULL,v_13 = NULL;
    u_13 = t;
    t = SSL_string_to_int(u_13);
    v_13 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)), v_13);
    t = u_13;
    return(t);
  }
  ATerm h_5 (ATerm t)
  {
    t = term_p_24;
    return(t);
  }
  t = ArgOption_3_0(e_5, f_5, h_5, t);
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm q_24 = t;
  int r_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_5 (ATerm t)
      {
        ATerm x_13 = NULL;
        x_13 = t;
        if(match_string(t, "-S"))
          {
            t = x_13;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
              _fail(t);
            t = x_13;
          }
        return(t);
      }
      ATerm j_5 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), (ATerm) ATmakeInt(0));
        t = term_t_24;
        return(t);
      }
      ATerm m_5 (ATerm t)
      {
        t = term_u_24;
        return(t);
      }
      t = Option_3_0(i_5, j_5, m_5, t);
      ;
      LocalPopChoice(r_24);
    }
  else
    {
      t = q_24;
      {
        ATerm v_24 = t;
        int w_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_5 (ATerm t)
            {
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
                _fail(t);
              return(t);
            }
            ATerm p_5 (ATerm t)
            {
              ATerm y_13 = NULL,b_14 = NULL;
              y_13 = t;
              t = SSL_string_to_int(y_13);
              b_14 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), b_14);
              t = (ATerm) ATmakeAppl(sym_Verbose_1, y_13);
              return(t);
            }
            ATerm q_5 (ATerm t)
            {
              t = term_x_24;
              return(t);
            }
            t = ArgOption_3_0(o_5, p_5, q_5, t);
            ;
            LocalPopChoice(w_24);
          }
        else
          {
            t = v_24;
            {
              ATerm r_5 (ATerm t)
              {
                if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
                  _fail(t);
                return(t);
              }
              ATerm s_5 (ATerm t)
              {
                t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                t = term_y_24;
                return(t);
              }
              ATerm t_5 (ATerm t)
              {
                t = term_z_24;
                return(t);
              }
              t = Option_3_0(r_5, s_5, t_5, t);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0_0 (ATerm t)
{
  ATerm a_25 = t;
  int b_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0_0(t);
      ;
      LocalPopChoice(b_25);
    }
  else
    {
      t = a_25;
      t = keep_option_0_0(t);
    }
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  ATerm u_5 (ATerm t)
  {
    ATerm e_14 = NULL;
    e_14 = t;
    if(match_string(t, "-o"))
      {
        t = e_14;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
          _fail(t);
        t = e_14;
      }
    return(t);
  }
  ATerm v_5 (ATerm t)
  {
    ATerm f_14 = NULL;
    f_14 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), f_14);
    t = (ATerm) ATmakeAppl(sym_Output_1, f_14);
    return(t);
  }
  ATerm w_5 (ATerm t)
  {
    t = term_c_25;
    return(t);
  }
  t = ArgOption_3_0(u_5, v_5, w_5, t);
  return(t);
}
ATerm aterm_output_option_0_0 (ATerm t)
{
  ATerm d_25 = t;
  int e_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0_0(t);
      ;
      LocalPopChoice(e_25);
    }
  else
    {
      t = d_25;
      {
        ATerm x_5 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm y_5 (ATerm t)
        {
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = term_f_25;
          return(t);
        }
        ATerm z_5 (ATerm t)
        {
          t = term_g_25;
          return(t);
        }
        t = Option_3_0(x_5, y_5, z_5, t);
      }
    }
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm k_14 = NULL,l_14 = NULL,m_14 = NULL,n_14 = NULL,o_14 = NULL;
  k_14 = t;
  if(match_string(t, "register-usage-info"))
    {
      t = k_14;
      t = register_usage_1_0(j_0, t);
    }
  else
    {
      ATerm s_14 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          l_14 = ATgetFirst((ATermList) t);
          m_14 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = m_14;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          n_14 = ATgetFirst((ATermList) t);
          o_14 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = l_14;
      t = h_0(t);
      t = n_14;
      t = i_0(t);
      s_14 = t;
      t = (ATerm) ATinsert(CheckATermList(o_14), s_14);
    }
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  ATerm b_6 (ATerm t)
  {
    ATerm u_14 = NULL;
    u_14 = t;
    if(match_string(t, "-i"))
      {
        t = u_14;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
          _fail(t);
        t = u_14;
      }
    return(t);
  }
  ATerm c_6 (ATerm t)
  {
    ATerm v_14 = NULL;
    v_14 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), v_14);
    t = (ATerm) ATmakeAppl(sym_Input_1, v_14);
    return(t);
  }
  ATerm d_6 (ATerm t)
  {
    t = term_h_25;
    return(t);
  }
  t = ArgOption_3_0(b_6, c_6, d_6, t);
  return(t);
}
ATerm io_options_0_0 (ATerm t)
{
  ATerm i_25 = t;
  int j_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      ;
      LocalPopChoice(j_25);
    }
  else
    {
      t = i_25;
      {
        ATerm k_25 = t;
        int l_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0_0(t);
            ;
            LocalPopChoice(l_25);
          }
        else
          {
            t = k_25;
            t = general_options_0_0(t);
          }
      }
    }
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm w_14 = NULL,x_14 = NULL;
  w_14 = t;
  t = term_v_22;
  t = whoami_0_0(t);
  x_14 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue))), x_14), (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue))));
  t = SSL_exit((ATerm) ATmakeInt(1));
  t = w_14;
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm y_14 = NULL;
  t = report_run_time_0_0(t);
  t = term_v_22;
  t = whoami_0_0(t);
  y_14 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue))), y_14));
  t = SSL_exit((ATerm) ATmakeInt(1));
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_m_25;
  t = get_config_0_0(t);
  return(t);
}
ATerm foldr_2_0 (ATerm x_75 (ATerm), ATerm y_75 (ATerm), ATerm t)
{
  ATerm n_25 = t;
  int o_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = x_75(t);
      ;
      LocalPopChoice(o_25);
    }
  else
    {
      t = n_25;
      {
        ATerm b_15 = NULL,c_15 = NULL,f_15 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            b_15 = ATgetFirst((ATermList) t);
            c_15 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = c_15;
        t = foldr_2_0(x_75, y_75, t);
        f_15 = t;
        t = (ATerm) ATmakeAppl(sym__2, b_15, f_15);
        t = y_75(t);
      }
    }
  return(t);
}
ATerm crush_2_0 (ATerm v_73 (ATerm), ATerm w_73 (ATerm), ATerm t)
{
  ATerm g_15 = NULL,h_15 = NULL;
  g_15 = t;
  t = SSL_explode_term(g_15);
  if(match_cons(t, sym__2))
    {
      ATerm p_25 = ATgetArgument(t, 0);
      h_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_15;
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
  ATerm i_15 = NULL;
  t = times_0_0(t);
  {
    ATerm e_6 (ATerm t)
    {
      t = term_s_24;
      return(t);
    }
    ATerm f_6 (ATerm t)
    {
      ATerm j_15 = NULL,k_15 = NULL;
      if(match_cons(t, sym__2))
        {
          j_15 = ATgetArgument(t, 0);
          k_15 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm q_25 = t;
        int r_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(j_15, k_15);
            ;
            LocalPopChoice(r_25);
          }
        else
          {
            t = q_25;
            t = SSL_addr(j_15, k_15);
          }
      }
      return(t);
    }
    t = crush_2_0(e_6, f_6, t);
    i_15 = t;
    t = SSL_TicksToSeconds(i_15);
  }
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm w_15 = NULL,x_15 = NULL,y_15 = NULL;
  w_15 = t;
  if(match_cons(t, sym__2))
    {
      x_15 = ATgetArgument(t, 0);
      y_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm s_25 = t;
    int t_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_15;
        if((x_15 != t))
          {
            _fail(t);
          }
        t = w_15;
        ;
        LocalPopChoice(t_25);
      }
    else
      {
        t = s_25;
        t = w_15;
        {
          ATerm u_25 = t;
          int v_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(x_15, y_15);
              ;
              LocalPopChoice(v_25);
            }
          else
            {
              t = u_25;
              t = SSL_gtr(x_15, y_15);
            }
          t = (ATerm) ATmakeAppl(sym__2, x_15, y_15);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm v_80 (ATerm), ATerm t)
{
  ATerm g_6 (ATerm t)
  {
    ATerm c_16 = NULL,d_16 = NULL;
    c_16 = t;
    t = term_o_8;
    t = get_config_0_0(t);
    d_16 = t;
    t = (ATerm) ATmakeAppl(sym__2, d_16, term_r_8);
    t = geq_0_0(t);
    t = c_16;
    t = v_80(t);
    return(t);
  }
  t = try_1_0(g_6, t);
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  ATerm j_6 (ATerm t)
  {
    ATerm f_16 = NULL,g_16 = NULL;
    t = run_time_0_0(t);
    f_16 = t;
    t = term_v_22;
    t = whoami_0_0(t);
    g_16 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue))), f_16), (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue))), g_16));
    t = (ATerm) ATmakeAppl(sym__2, term_f_22, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_w_25), f_16), term_c_14), g_16));
    return(t);
  }
  t = if_verbose1_1_0(j_6, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  t = report_run_time_0_0(t);
  t = SSL_exit((ATerm) ATmakeInt(0));
  return(t);
}
ATerm need_help_1_0 (ATerm b_85 (ATerm), ATerm t)
{
  ATerm x_25 = t;
  int y_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_z_25;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(y_25);
    }
  else
    {
      t = x_25;
      {
        ATerm k_6 (ATerm t)
        {
          ATerm a_26 = t;
          int b_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(!(match_cons(t, sym_Help_0)))
                _fail(t);
              ;
              LocalPopChoice(b_26);
            }
          else
            {
              t = a_26;
              {
                ATerm c_26 = t;
                int d_26 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Undefined_1_0(_id, t);
                    ;
                    LocalPopChoice(d_26);
                  }
                else
                  {
                    t = c_26;
                    if(!(match_cons(t, sym_Version_0)))
                      _fail(t);
                  }
              }
            }
          return(t);
        }
        t = option_defined_1_0(k_6, t);
      }
    }
  t = b_85(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm j_16 = NULL,k_16 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      j_16 = ATgetFirst((ATermList) t);
      k_16 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm o_16 = NULL,p_16 = NULL;
        t = k_16;
        t = g_0(t);
        o_16 = t;
        t = j_16;
        t = f_0(t);
        p_16 = t;
        t = k_16;
        {
          ATerm l_6 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(o_16), p_16);
            return(t);
          }
          t = reverse_acc_2_0(f_0, l_6, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_v_22;
      t = g_0(t);
    }
  return(t);
}
ATerm reverse_0_0 (ATerm t)
{
  ATerm n_6 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2_0(_id, n_6, t);
  return(t);
}
ATerm Program_1_0 (ATerm f_62 (ATerm), ATerm t)
{
  ATerm q_16 = NULL,r_16 = NULL,s_16 = NULL,t_16 = NULL;
  t_16 = t;
  if(match_cons(t, sym_Program_1))
    {
      r_16 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_16);
  q_16 = t;
  t = r_16;
  t = f_62(t);
  s_16 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, s_16), q_16);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm e_26 = t;
  int f_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_m_25;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(f_26);
    }
  else
    {
      t = e_26;
      {
        ATerm o_6 (ATerm t)
        {
          t = Program_1_0(_id, t);
          return(t);
        }
        t = option_defined_1_0(o_6, t);
      }
    }
  t = try_1_0(_fail, t);
  t = term_g_26;
  t = echo_0_0(t);
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)));
  t = reverse_0_0(t);
  {
    ATerm p_6 (ATerm t)
    {
      ATerm x_16 = NULL;
      x_16 = t;
      t = (ATerm) ATinsert(ATinsert(ATempty, x_16), term_h_26);
      t = echo_0_0(t);
      return(t);
    }
    t = map_1_0(p_6, t);
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
  ATerm y_16 = NULL,z_16 = NULL,a_17 = NULL,b_17 = NULL;
  b_17 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      z_16 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_17);
  y_16 = t;
  t = z_16;
  t = g_62(t);
  a_17 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, a_17), y_16);
  return(t);
}
ATerm fetch_1_0 (ATerm r_69 (ATerm), ATerm t)
{
  ATerm f_17 (ATerm t)
  {
    ATerm i_26 = t;
    int j_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(r_69, _id, t);
        ;
        LocalPopChoice(j_26);
      }
    else
      {
        t = i_26;
        t = Cons_2_0(_id, f_17, t);
      }
    return(t);
  }
  t = f_17(t);
  return(t);
}
ATerm option_defined_1_0 (ATerm w_85 (ATerm), ATerm t)
{
  t = fetch_1_0(w_85, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm h_17 = NULL,i_17 = NULL;
  h_17 = t;
  {
    ATerm k_26 = t;
    int l_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = h_17;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm m_26 = ATgetFirst((ATermList) t);
                ATerm n_26 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = h_17;
          }
        ;
        LocalPopChoice(l_26);
      }
    else
      {
        t = k_26;
        t = (ATerm) ATinsert(ATempty, h_17);
      }
    i_17 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stdout_0), i_17);
    t = h_17;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_m_25;
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
  ATerm o_26 = t;
  int p_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(p_26);
    }
  else
    {
      t = o_26;
      {
        ATerm q_17 = NULL,r_17 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            q_17 = ATgetFirst((ATermList) t);
            r_17 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = q_17;
        {
          ATerm t_6 (ATerm t)
          {
            t = r_17;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(t_6, t);
        }
      }
    }
  return(t);
}
ATerm conc_more_lists_0_0 (ATerm t)
{
  ATerm v_17 = NULL,w_17 = NULL;
  v_17 = t;
  t = SSL_explode_term(v_17);
  if(match_cons(t, sym__2))
    {
      ATerm q_26 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) q_26) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      w_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_17;
  t = concat_0_0(t);
  return(t);
}
ATerm at_end_1_0 (ATerm x_69 (ATerm), ATerm t)
{
  ATerm x_17 (ATerm t)
  {
    ATerm r_26 = t;
    int s_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, x_17, t);
        ;
        LocalPopChoice(s_26);
      }
    else
      {
        t = r_26;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = x_69(t);
      }
    return(t);
  }
  t = x_17(t);
  return(t);
}
ATerm conc_two_lists_0_0 (ATerm t)
{
  ATerm y_17 = NULL,z_17 = NULL;
  if(match_cons(t, sym__2))
    {
      z_17 = ATgetArgument(t, 0);
      y_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_17;
  {
    ATerm u_6 (ATerm t)
    {
      t = y_17;
      return(t);
    }
    t = at_end_1_0(u_6, t);
  }
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm t_26 = t;
  int u_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0_0(t);
      ;
      LocalPopChoice(u_26);
    }
  else
    {
      t = t_26;
      t = conc_more_lists_0_0(t);
    }
  return(t);
}
ATerm _2_0 (ATerm q_55 (ATerm), ATerm r_55 (ATerm), ATerm t)
{
  ATerm a_18 = NULL,b_18 = NULL,c_18 = NULL,d_18 = NULL,e_18 = NULL,f_18 = NULL;
  f_18 = t;
  if(match_cons(t, sym__2))
    {
      b_18 = ATgetArgument(t, 0);
      c_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_18);
  a_18 = t;
  t = b_18;
  t = q_55(t);
  d_18 = t;
  t = c_18;
  t = r_55(t);
  e_18 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, d_18, e_18), a_18);
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  ATerm j_18 = NULL;
  ATerm v_6 (ATerm t)
  {
    ATerm k_18 = NULL;
    k_18 = t;
    t = SSL_explode_string(k_18);
    return(t);
  }
  ATerm w_6 (ATerm t)
  {
    ATerm l_18 = NULL;
    l_18 = t;
    t = SSL_explode_string(l_18);
    return(t);
  }
  t = _2_0(v_6, w_6, t);
  t = conc_0_0(t);
  j_18 = t;
  t = SSL_implode_string(j_18);
  return(t);
}
ATerm debug_1_0 (ATerm a_65 (ATerm), ATerm t)
{
  ATerm m_18 = NULL,n_18 = NULL;
  m_18 = t;
  t = a_65(t);
  n_18 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, m_18), n_18));
  t = m_18;
  return(t);
}
ATerm map_1_0 (ATerm h_69 (ATerm), ATerm t)
{
  ATerm o_18 (ATerm t)
  {
    ATerm v_26 = t;
    int w_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(w_26);
      }
    else
      {
        t = v_26;
        t = Cons_2_0(h_69, o_18, t);
      }
    return(t);
  }
  t = o_18(t);
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm x_26 = t;
  int y_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_18 = NULL;
      u_18 = t;
      t = SSL_is_string(u_18);
      ;
      LocalPopChoice(y_26);
    }
  else
    {
      t = x_26;
      {
        ATerm z_26 = t;
        int a_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_6 (ATerm t)
            {
              t = try_1_0(eval_config_0_0, t);
              return(t);
            }
            t = map_1_0(x_6, t);
            ;
            LocalPopChoice(a_27);
          }
        else
          {
            t = z_26;
            {
              ATerm y_18 = NULL,z_18 = NULL,a_19 = NULL;
              y_18 = t;
              if(match_cons(t, sym_Path_1))
                {
                  z_18 = ATgetArgument(t, 0);
                  t = z_18;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      z_18 = ATgetArgument(t, 0);
                      t = z_18;
                      {
                        ATerm b_27 = t;
                        int c_27 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(c_27);
                          }
                        else
                          {
                            t = b_27;
                            {
                              ATerm y_6 (ATerm t)
                              {
                                t = term_d_27;
                                return(t);
                              }
                              t = debug_1_0(y_6, t);
                              _fail(t);
                            }
                          }
                      }
                    }
                  else
                    {
                      ATerm e_19 = NULL,f_19 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          z_18 = ATgetArgument(t, 0);
                          a_19 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = z_18;
                      t = eval_config_0_0(t);
                      e_19 = t;
                      t = a_19;
                      t = eval_config_0_0(t);
                      f_19 = t;
                      t = (ATerm) ATmakeAppl(sym__2, e_19, f_19);
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
  ATerm i_19 = NULL;
  i_19 = t;
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), i_19);
  {
    ATerm z_6 (ATerm t)
    {
      ATerm j_19 = NULL;
      t = eval_config_0_0(t);
      j_19 = t;
      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), i_19, j_19);
      t = j_19;
      return(t);
    }
    t = try_1_0(z_6, t);
  }
  return(t);
}
ATerm try_1_0 (ATerm b_80 (ATerm), ATerm t)
{
  ATerm e_27 = t;
  int f_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = b_80(t);
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
      ATerm a_7 (ATerm t)
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
          _fail(t);
        return(t);
      }
      ATerm b_7 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
        t = term_k_27;
        return(t);
      }
      ATerm c_7 (ATerm t)
      {
        t = term_l_27;
        return(t);
      }
      t = Option_3_0(a_7, b_7, c_7, t);
      ;
      LocalPopChoice(h_27);
    }
  else
    {
      t = g_27;
      {
        ATerm d_7 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm e_7 (ATerm t)
        {
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = term_m_27;
          return(t);
        }
        ATerm f_7 (ATerm t)
        {
          t = term_n_27;
          return(t);
        }
        t = Option_3_0(d_7, e_7, f_7, t);
      }
    }
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm m_19 = NULL,n_19 = NULL,o_19 = NULL,p_19 = NULL;
  if(match_cons(t, sym__3))
    {
      m_19 = ATgetArgument(t, 0);
      n_19 = ATgetArgument(t, 1);
      o_19 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, m_19, n_19);
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
        t = SSL_table_get(m_19, n_19);
        ;
        LocalPopChoice(p_27);
      }
    else
      {
        t = o_27;
        t = (ATerm) ATempty;
      }
    p_19 = t;
    t = SSL_table_put(m_19, n_19, (ATerm) ATinsert(CheckATermList(p_19), o_19));
    t = (ATerm) ATmakeAppl(sym__3, m_19, n_19, o_19);
  }
  return(t);
}
ATerm register_usage_1_0 (ATerm b_87 (ATerm), ATerm t)
{
  ATerm u_19 = NULL;
  t = term_v_22;
  t = b_87(t);
  u_19 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_s_27, term_t_27, u_19);
  t = table_push_0_0(t);
  _fail(t);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm w_19 = NULL,y_19 = NULL,z_19 = NULL;
  w_19 = t;
  if(match_string(t, "register-usage-info"))
    {
      t = w_19;
      t = register_usage_1_0(d_0, t);
    }
  else
    {
      ATerm c_20 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          y_19 = ATgetFirst((ATermList) t);
          z_19 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = y_19;
      t = a_0(t);
      t = term_v_22;
      t = b_0(t);
      c_20 = t;
      t = (ATerm) ATinsert(CheckATermList(z_19), c_20);
    }
  return(t);
}
ATerm system_usage_switch_0_0 (ATerm t)
{
  ATerm g_7 (ATerm t)
  {
    ATerm e_20 = NULL;
    e_20 = t;
    if(match_string(t, "--help"))
      {
        t = e_20;
      }
    else
      {
        if(match_string(t, "-h"))
          {
            t = e_20;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
              _fail(t);
            t = e_20;
          }
      }
    return(t);
  }
  ATerm i_7 (ATerm t)
  {
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
    t = term_u_27;
    return(t);
  }
  ATerm j_7 (ATerm t)
  {
    t = term_v_27;
    return(t);
  }
  t = Option_3_0(g_7, i_7, j_7, t);
  return(t);
}
ATerm Cons_2_0 (ATerm z_56 (ATerm), ATerm a_57 (ATerm), ATerm t)
{
  ATerm f_20 = NULL,g_20 = NULL,h_20 = NULL,i_20 = NULL,j_20 = NULL,k_20 = NULL;
  k_20 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_20 = ATgetFirst((ATermList) t);
      h_20 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_20);
  f_20 = t;
  t = g_20;
  t = z_56(t);
  i_20 = t;
  t = h_20;
  t = a_57(t);
  j_20 = t;
  t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(j_20), i_20), f_20);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm z_86 (ATerm), ATerm t)
{
  ATerm r_20 = NULL;
  r_20 = t;
  {
    ATerm c_8 (ATerm t)
    {
      t = term_w_27;
      t = z_86(t);
      return(t);
    }
    t = try_1_0(c_8, t);
    t = r_20;
    {
      ATerm d_8 (ATerm t)
      {
        ATerm s_20 = NULL;
        s_20 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), s_20);
        t = (ATerm) ATmakeAppl(sym_Program_1, s_20);
        return(t);
      }
      ATerm e_8 (ATerm t)
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
                t = z_86(t);
                t = Cons_2_0(_id, e_8, t);
              }
            ;
            LocalPopChoice(y_27);
          }
        else
          {
            t = x_27;
            {
              ATerm u_20 = NULL,v_20 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  u_20 = ATgetFirst((ATermList) t);
                  v_20 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(v_20), (ATerm) ATmakeAppl(sym_Undefined_1, u_20));
            }
          }
        return(t);
      }
      t = Cons_2_0(d_8, e_8, t);
    }
  }
  return(t);
}
ATerm parse_options_1_0 (ATerm y_86 (ATerm), ATerm t)
{
  ATerm g_21 = NULL,h_21 = NULL,i_21 = NULL;
  g_21 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATempty);
  t = g_21;
  {
    ATerm f_8 (ATerm t)
    {
      ATerm b_28 = t;
      int c_28 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = y_86(t);
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
    t = parse_options_p__1_0(f_8, t);
    {
      ATerm g_8 (ATerm t)
      {
        ATerm f_28 = t;
        int g_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_21 = NULL;
            n_21 = t;
            {
              ATerm h_28 = t;
              int i_28 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = n_21;
                  {
                    ATerm j_28 = t;
                    int k_28 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = term_z_25;
                        t = get_config_0_0(t);
                        ;
                        LocalPopChoice(k_28);
                      }
                    else
                      {
                        t = j_28;
                        {
                          ATerm h_8 (ATerm t)
                          {
                            if(!(match_cons(t, sym_Help_0)))
                              _fail(t);
                            return(t);
                          }
                          t = option_defined_1_0(h_8, t);
                        }
                      }
                    t = n_21;
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
                  t = n_21;
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
              ATerm i_8 (ATerm t)
              {
                ATerm j_8 (ATerm t)
                {
                  h_21 = t;
                  return(t);
                }
                t = Undefined_1_0(j_8, t);
                return(t);
              }
              t = option_defined_1_0(i_8, t);
              t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(h_21)), (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue))));
              t = (ATerm) ATmakeAppl(sym__2, term_f_22, (ATerm) ATinsert(ATinsert(ATempty, not_null(h_21)), term_l_28));
              t = system_usage_0_0(t);
              t = SSL_exit((ATerm) ATmakeInt(1));
            }
          }
        return(t);
      }
      t = try_1_0(g_8, t);
      i_21 = t;
      t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)));
      t = i_21;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm d_85 (ATerm), ATerm e_85 (ATerm), ATerm f_85 (ATerm), ATerm g_85 (ATerm), ATerm t)
{
  ATerm w_13 = NULL;
  t = parse_options_1_0(d_85, t);
  w_13 = t;
  t = SSL_table_create((ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), w_13);
  t = w_13;
  t = f_85(t);
  {
    ATerm m_28 = t;
    int n_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(e_85, t);
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
              t = g_85(t);
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
ATerm option_wrap_2_0 (ATerm h_85 (ATerm), ATerm i_85 (ATerm), ATerm t)
{
  t = option_wrap_4_0(h_85, default_usage_0_0, _id, i_85, t);
  return(t);
}
ATerm xtc_io_wrap_2_0 (ATerm e_83 (ATerm), ATerm f_83 (ATerm), ATerm t)
{
  ATerm k_8 (ATerm t)
  {
    ATerm q_28 = t;
    int r_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_83(t);
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
  ATerm l_8 (ATerm t)
  {
    t = xtc_io_1_0(f_83, t);
    return(t);
  }
  t = option_wrap_2_0(k_8, l_8, t);
  return(t);
}
ATerm xtc_io_wrap_1_0 (ATerm d_83 (ATerm), ATerm t)
{
  t = xtc_io_wrap_2_0(_fail, d_83, t);
  return(t);
}
ATerm io_parse_box_0_0 (ATerm t)
{
  ATerm m_8 (ATerm t)
  {
    ATerm n_8 (ATerm t)
    {
      t = term_s_28;
      return(t);
    }
    t = xtc_sglr_1_0(n_8, t);
    t = xtc_implode_asfix_0_0(t);
    return(t);
  }
  t = xtc_io_wrap_1_0(m_8, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = io_parse_box_0_0(t);
  return(t);
}
