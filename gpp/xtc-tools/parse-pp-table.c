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
ATerm term_w_28;
ATerm term_v_28;
ATerm term_o_28;
ATerm term_z_27;
ATerm term_y_27;
ATerm term_x_27;
ATerm term_w_27;
ATerm term_v_27;
ATerm term_q_27;
ATerm term_p_27;
ATerm term_o_27;
ATerm term_n_27;
ATerm term_m_27;
ATerm term_l_27;
ATerm term_g_27;
ATerm term_k_26;
ATerm term_j_26;
ATerm term_c_26;
ATerm term_z_25;
ATerm term_p_25;
ATerm term_k_25;
ATerm term_j_25;
ATerm term_i_25;
ATerm term_f_25;
ATerm term_c_25;
ATerm term_b_25;
ATerm term_a_25;
ATerm term_x_24;
ATerm term_w_24;
ATerm term_v_24;
ATerm term_s_24;
ATerm term_r_24;
ATerm term_o_24;
ATerm term_e_24;
ATerm term_j_23;
ATerm term_i_23;
ATerm term_h_23;
ATerm term_g_23;
ATerm term_b_23;
ATerm term_a_23;
ATerm term_z_22;
ATerm term_y_22;
ATerm term_x_22;
ATerm term_u_22;
ATerm term_q_22;
ATerm term_i_22;
ATerm term_h_22;
ATerm term_b_22;
ATerm term_a_22;
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
ATerm term_n_21;
ATerm term_m_21;
ATerm term_l_21;
ATerm term_k_21;
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
ATerm term_u_20;
ATerm term_r_20;
ATerm term_q_20;
ATerm term_p_20;
ATerm term_o_20;
ATerm term_n_20;
ATerm term_m_20;
ATerm term_e_20;
ATerm term_c_20;
ATerm term_b_20;
ATerm term_x_19;
ATerm term_w_19;
ATerm term_u_19;
ATerm term_t_19;
ATerm term_s_19;
ATerm term_r_19;
ATerm term_m_19;
ATerm term_l_19;
ATerm term_i_19;
ATerm term_h_19;
ATerm term_e_19;
ATerm term_d_19;
ATerm term_c_19;
ATerm term_y_18;
ATerm term_x_18;
ATerm term_w_18;
ATerm term_u_18;
ATerm term_t_18;
ATerm term_s_18;
ATerm term_r_18;
ATerm term_q_18;
ATerm term_j_18;
ATerm term_i_18;
ATerm term_h_18;
ATerm term_v_17;
ATerm term_u_17;
ATerm term_t_17;
ATerm term_q_17;
ATerm term_p_17;
ATerm term_o_17;
ATerm term_n_17;
ATerm term_m_17;
ATerm term_l_17;
ATerm term_k_17;
ATerm term_h_17;
ATerm term_f_17;
ATerm term_e_17;
ATerm term_d_17;
ATerm term_x_16;
ATerm term_w_16;
ATerm term_v_16;
ATerm term_o_16;
ATerm term_n_16;
ATerm term_m_16;
ATerm term_j_16;
ATerm term_i_16;
ATerm term_f_16;
ATerm term_c_16;
ATerm term_b_16;
ATerm term_a_16;
ATerm term_w_15;
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
ATerm term_f_15;
ATerm term_e_15;
ATerm term_b_15;
ATerm term_a_15;
ATerm term_u_14;
ATerm term_s_14;
ATerm term_r_14;
ATerm term_q_14;
ATerm term_k_14;
ATerm term_h_14;
ATerm term_e_14;
ATerm term_d_14;
ATerm term_b_14;
ATerm term_t_13;
ATerm term_v_12;
ATerm term_r_12;
ATerm term_o_12;
ATerm term_n_12;
ATerm term_k_12;
ATerm term_e_12;
ATerm term_b_12;
ATerm term_v_11;
ATerm term_s_11;
ATerm term_l_11;
ATerm term_i_11;
ATerm term_h_11;
ATerm term_g_11;
ATerm term_e_11;
ATerm term_d_11;
ATerm term_c_11;
ATerm term_r_9;
ATerm term_q_9;
ATerm term_c_9;
ATerm term_b_9;
ATerm term_a_9;
ATerm term_x_8;
ATerm term_s_8;
ATerm term_p_8;
void init_constant_terms (void)
{
  ATprotect(&(term_p_8));
  term_p_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_s_8));
  term_s_8 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_x_8));
  term_x_8 = (ATerm) ATmakeAppl(ATmakeSymbol("implode-asfix", 0, ATtrue));
  ATprotect(&(term_a_9));
  term_a_9 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_b_9));
  term_b_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_c_9));
  term_c_9 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_q_9));
  term_q_9 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_r_9));
  term_r_9 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_14, term_s_8, term_q_14);
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_14, term_u_14, term_a_15);
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_15, term_a_9, term_f_15);
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_15, term_r_9, term_o_15);
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_15, term_r_15, term_s_15);
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_15, term_v_15, term_w_15);
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_16, term_c_16, term_f_16);
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_16, term_m_16, term_n_16);
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_16, term_w_16, term_x_16);
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_h_17));
  term_h_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_k_17));
  term_k_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_17, term_f_17, term_h_17);
  ATprotect(&(term_l_17));
  term_l_17 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_m_17));
  term_m_17 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_n_17));
  term_n_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_17, term_m_17, term_n_17);
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_q_17));
  term_q_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_t_17));
  term_t_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_17, term_q_9, term_q_17);
  ATprotect(&(term_u_17));
  term_u_17 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_v_17));
  term_v_17 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_h_18));
  term_h_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_i_18));
  term_i_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_17, term_v_17, term_h_18);
  ATprotect(&(term_j_18));
  term_j_18 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_q_18));
  term_q_18 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_r_18));
  term_r_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_s_18));
  term_s_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_18, term_q_18, term_r_18);
  ATprotect(&(term_t_18));
  term_t_18 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_u_18));
  term_u_18 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_w_18));
  term_w_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_x_18));
  term_x_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_18, term_u_18, term_w_18);
  ATprotect(&(term_y_18));
  term_y_18 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_c_19));
  term_c_19 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_d_19));
  term_d_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_e_19));
  term_e_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_18, term_c_19, term_d_19);
  ATprotect(&(term_h_19));
  term_h_19 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_i_19));
  term_i_19 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_l_19));
  term_l_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_m_19));
  term_m_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_19, term_i_19, term_l_19);
  ATprotect(&(term_r_19));
  term_r_19 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_s_19));
  term_s_19 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_t_19));
  term_t_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_u_19));
  term_u_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_19, term_s_19, term_t_19);
  ATprotect(&(term_w_19));
  term_w_19 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_x_19));
  term_x_19 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_b_20));
  term_b_20 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_c_20));
  term_c_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_19, term_x_19, term_b_20);
  ATprotect(&(term_e_20));
  term_e_20 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_m_20));
  term_m_20 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_n_20));
  term_n_20 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_o_20));
  term_o_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_20, term_m_20, term_n_20);
  ATprotect(&(term_p_20));
  term_p_20 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_q_20));
  term_q_20 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_r_20));
  term_r_20 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_u_20));
  term_u_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_20, term_q_20, term_r_20);
  ATprotect(&(term_x_20));
  term_x_20 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_y_20));
  term_y_20 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_z_20));
  term_z_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_a_21));
  term_a_21 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_20, term_y_20, term_z_20);
  ATprotect(&(term_b_21));
  term_b_21 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_c_21));
  term_c_21 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_d_21));
  term_d_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_e_21));
  term_e_21 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_21, term_c_21, term_d_21);
  ATprotect(&(term_f_21));
  term_f_21 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_g_21));
  term_g_21 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_l_21));
  term_l_21 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_21, term_g_21, term_k_21);
  ATprotect(&(term_m_21));
  term_m_21 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_n_21));
  term_n_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_p_21));
  term_p_21 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_21, term_c_9, term_n_21);
  ATprotect(&(term_q_21));
  term_q_21 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_r_21));
  term_r_21 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_s_21));
  term_s_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_t_21));
  term_t_21 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_21, term_r_21, term_s_21);
  ATprotect(&(term_u_21));
  term_u_21 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_v_21));
  term_v_21 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_w_21));
  term_w_21 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_x_21));
  term_x_21 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_21, term_v_21, term_w_21);
  ATprotect(&(term_y_21));
  term_y_21 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_z_21));
  term_z_21 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_a_22));
  term_a_22 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_b_22));
  term_b_22 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_21, term_z_21, term_a_22);
  ATprotect(&(term_h_22));
  term_h_22 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_i_22));
  term_i_22 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_q_22));
  term_q_22 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_u_22));
  term_u_22 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file> (file, mode)", 0, ATtrue));
  ATprotect(&(term_x_22));
  term_x_22 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_y_22));
  term_y_22 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_z_22));
  term_z_22 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_a_23));
  term_a_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_b_23));
  term_b_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_g_23));
  term_g_23 = (ATerm) ATmakeAppl(ATmakeSymbol("sglr", 0, ATtrue));
  ATprotect(&(term_h_23));
  term_h_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-2tA", 0, ATtrue));
  ATprotect(&(term_i_23));
  term_i_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_j_23));
  term_j_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_e_24));
  term_e_24 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_o_24));
  term_o_24 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_r_24));
  term_r_24 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_s_24));
  term_s_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_v_24));
  term_v_24 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_w_24));
  term_w_24 = (ATerm) ATmakeAppl(sym_Verbose_1, term_v_24);
  ATprotect(&(term_x_24));
  term_x_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_a_25));
  term_a_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_b_25));
  term_b_25 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_c_25));
  term_c_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_f_25));
  term_f_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_i_25));
  term_i_25 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_j_25));
  term_j_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_k_25));
  term_k_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_p_25));
  term_p_25 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_z_25));
  term_z_25 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_c_26));
  term_c_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_j_26));
  term_j_26 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_k_26));
  term_k_26 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_g_27));
  term_g_27 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_l_27));
  term_l_27 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_m_27));
  term_m_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_n_27));
  term_n_27 = (ATerm) ATmakeAppl(sym__3, term_l_27, term_m_27, term_x_22);
  ATprotect(&(term_o_27));
  term_o_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_p_27));
  term_p_27 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_q_27));
  term_q_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_v_27));
  term_v_27 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_w_27));
  term_w_27 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_x_27));
  term_x_27 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_y_27));
  term_y_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_z_27));
  term_z_27 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_o_28));
  term_o_28 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_v_28));
  term_v_28 = (ATerm) ATmakeAppl(ATmakeSymbol("pp-table.tbl", 0, ATtrue));
  ATprotect(&(term_w_28));
  term_w_28 = (ATerm) ATmakeAppl(ATmakeSymbol("PP-Table-GrammarId", 0, ATtrue));
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
ATerm xtc_sglr_2_0 (ATerm i_93 (ATerm), ATerm j_93 (ATerm), ATerm);
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
ATerm io_parse_pp_table_0_0 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm pass_verbose_0_0 (ATerm t)
{
  ATerm d_1 = NULL,e_1 = NULL,g_1 = NULL;
  t = term_p_8;
  {
    ATerm q_8 = t;
    int r_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        ;
        LocalPopChoice(r_8);
      }
    else
      {
        t = q_8;
        t = term_s_8;
      }
    d_1 = t;
    t = (ATerm) ATmakeAppl(sym__2, d_1, term_s_8);
    {
      ATerm t_8 = t;
      int u_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SSL_subti(d_1, (ATerm) ATmakeInt(1));
          ;
          LocalPopChoice(u_8);
        }
      else
        {
          t = t_8;
          t = SSL_subtr(d_1, (ATerm) ATmakeInt(1));
        }
      g_1 = t;
      t = SSL_int_to_string(g_1);
      e_1 = t;
      t = (ATerm) ATinsert(ATinsert(ATempty, e_1), term_p_8);
    }
  }
  return(t);
}
ATerm xtc_implode_asfix_0_0 (ATerm t)
{
  ATerm c_0 (ATerm t)
  {
    t = term_x_8;
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
    t = term_p_8;
    t = get_config_0_0(t);
    p_1 = t;
    t = (ATerm) ATmakeAppl(sym__2, p_1, term_a_9);
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
      t = (ATerm) ATinsert(ATempty, term_b_9);
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
    t = term_p_8;
    t = get_config_0_0(t);
    a_2 = t;
    t = (ATerm) ATmakeAppl(sym__2, a_2, term_c_9);
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
  ATerm d_9 = t;
  int e_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(e_9);
    }
  else
    {
      t = d_9;
      {
        ATerm k_9 = t;
        int l_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_0 (ATerm t)
            {
              t = filter_1_0(a_77, t);
              return(t);
            }
            t = Cons_2_0(a_77, s_0, t);
            ;
            LocalPopChoice(l_9);
          }
        else
          {
            t = k_9;
            {
              ATerm p_2 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm m_9 = ATgetFirst((ATermList) t);
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
        ATerm n_9 = t;
        if((PushChoice() == 0))
          {
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = n_9;
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
    ATerm w_2 = NULL,x_2 = NULL;
    w_2 = t;
    t = term_p_8;
    t = get_config_0_0(t);
    x_2 = t;
    t = (ATerm) ATmakeAppl(sym__2, x_2, term_q_9);
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
    ATerm a_3 = NULL,c_3 = NULL;
    a_3 = t;
    t = term_p_8;
    t = get_config_0_0(t);
    c_3 = t;
    t = (ATerm) ATmakeAppl(sym__2, c_3, term_r_9);
    t = geq_0_0(t);
    t = a_3;
    t = a_81(t);
    return(t);
  }
  t = try_1_0(w_0, t);
  return(t);
}
ATerm HdMember_p__2_0 (ATerm o_73 (ATerm), ATerm p_73 (ATerm), ATerm t)
{
  ATerm j_3 = NULL,l_3 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      j_3 = ATgetFirst((ATermList) t);
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
      t = (ATerm) ATmakeAppl(sym__2, j_3, m_3);
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
    ATerm p_3 (ATerm t)
    {
      ATerm t_9 = t;
      int f_10 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = n_3;
          ;
          LocalPopChoice(f_10);
        }
      else
        {
          t = t_9;
          {
            ATerm g_10 = t;
            int h_10 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm y_0 (ATerm t)
                {
                  t = n_3;
                  return(t);
                }
                t = HdMember_p__2_0(k_73, y_0, t);
                t = p_3(t);
                ;
                LocalPopChoice(h_10);
              }
            else
              {
                t = g_10;
                t = Cons_2_0(_id, p_3, t);
              }
          }
        }
      return(t);
    }
    t = p_3(t);
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
  ATerm v_3 = NULL,w_3 = NULL,x_3 = NULL,a_4 = NULL,c_4 = NULL;
  if(match_cons(t, sym__3))
    {
      v_3 = ATgetArgument(t, 0);
      w_3 = ATgetArgument(t, 1);
      x_3 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, v_3, w_3);
  {
    ATerm j_10 = t;
    int n_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm o_10 = ATgetArgument(t, 0);
            ATerm u_10 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(v_3, w_3);
        ;
        LocalPopChoice(n_10);
      }
    else
      {
        t = j_10;
        t = (ATerm) ATempty;
      }
    a_4 = t;
    t = (ATerm) ATmakeAppl(sym__2, a_4, x_3);
    t = union_0_0(t);
    c_4 = t;
    t = SSL_table_put(v_3, w_3, c_4);
    t = (ATerm) ATmakeAppl(sym__3, v_3, w_3, x_3);
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
      ATerm f_4 = NULL,g_4 = NULL;
      if(match_cons(t, sym__2))
        {
          f_4 = ATgetArgument(t, 0);
          g_4 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__3, e_4, f_4, g_4);
      t = j_81(t);
      return(t);
    }
    t = map_1_0(a_1, t);
  }
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm w_10 = t;
  int y_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_1 = NULL;
      b_1 = t;
      t = SSL_access(b_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_R__OK_0)));
      LocalPopChoice(y_10);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = w_10;
      {
        ATerm z_10 = t;
        int a_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_11 = t;
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
                t = b_11;
              }
            {
              ATerm c_1 (ATerm t)
              {
                t = term_c_11;
                return(t);
              }
              t = debug_1_0(c_1, t);
            }
            ;
            LocalPopChoice(a_11);
          }
        else
          {
            t = z_10;
            {
              ATerm i_1 (ATerm t)
              {
                t = term_d_11;
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
  ATerm l_4 = NULL,m_4 = NULL,n_4 = NULL;
  l_4 = t;
  {
    ATerm j_1 (ATerm t)
    {
      ATerm m_1 (ATerm t)
      {
        t = term_e_11;
        return(t);
      }
      t = debug_1_0(m_1, t);
      return(t);
    }
    t = if_verbose5_1_0(j_1, t);
    {
      ATerm f_11 = t;
      if((PushChoice() == 0))
        {
          t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Imported_1, l_4));
          PopChoice();
          _fail(t);
        }
      else
        {
          t = f_11;
        }
      m_4 = t;
      t = SSL_table_put((ATerm)ATmakeAppl(sym_XTC_0), (ATerm)ATmakeAppl(sym_Repository_0), (ATerm) ATinsert(ATempty, l_4));
      t = m_4;
      {
        ATerm n_1 (ATerm t)
        {
          ATerm o_1 (ATerm t)
          {
            t = term_g_11;
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
              t = term_h_11;
              return(t);
            }
            t = say_1_0(s_1, t);
            return(t);
          }
          t = if_verbose6_1_0(r_1, t);
          n_4 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_i_11, n_4);
          t = table_putlist_1_0(table_append_0_0, t);
          {
            ATerm t_1 (ATerm t)
            {
              ATerm u_1 (ATerm t)
              {
                t = term_l_11;
                return(t);
              }
              t = say_1_0(u_1, t);
              return(t);
            }
            t = if_verbose6_1_0(t_1, t);
            t = SSL_table_put((ATerm)ATmakeAppl(sym_XTC_0), (ATerm)ATmakeAppl(sym_Imported_1, l_4), (ATerm) ATempty);
            t = (ATerm) ATmakeAppl(sym__3, term_i_11, (ATerm)ATmakeAppl(sym_Imported_1, l_4), (ATerm) ATempty);
            {
              ATerm v_1 (ATerm t)
              {
                ATerm y_1 (ATerm t)
                {
                  t = term_h_11;
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
  ATerm m_11 = t;
  int r_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_s_11;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(r_11);
    }
  else
    {
      t = m_11;
      {
        ATerm t_11 = t;
        int u_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_getenv((ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue)));
            ;
            LocalPopChoice(u_11);
          }
        else
          {
            t = t_11;
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
      t = term_v_11;
      return(t);
    }
    t = debug_1_0(c_2, t);
    return(t);
  }
  t = if_verbose5_1_0(b_2, t);
  p_4 = t;
  {
    ATerm z_11 = t;
    int a_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Repository_0));
        ;
        LocalPopChoice(a_12);
      }
    else
      {
        t = z_11;
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
          t = term_b_12;
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
  ATerm c_12 = t;
  int d_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_2 (ATerm t)
      {
        ATerm j_2 (ATerm t)
        {
          t = term_e_12;
          return(t);
        }
        t = debug_1_0(j_2, t);
        return(t);
      }
      t = if_verbose5_1_0(i_2, t);
      t = xtc_load_0_0(t);
      {
        ATerm f_12 = t;
        int g_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = xtc_find_version_loc_0_0(t);
            ;
            LocalPopChoice(g_12);
          }
        else
          {
            t = f_12;
            {
              ATerm k_1 = NULL,l_1 = NULL;
              k_1 = t;
              t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Tool_1, k_1));
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm h_12 = ATgetFirst((ATermList) t);
                  if(match_cons(h_12, sym__2))
                    {
                      ATerm j_12 = ATgetArgument(h_12, 0);
                      l_1 = ATgetArgument(h_12, 1);
                    }
                  else
                    _fail(t);
                  {
                    ATerm i_12 = (ATerm) ATgetNext((ATermList) t);
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
              t = term_e_12;
              return(t);
            }
            t = debug_1_0(n_2, t);
            return(t);
          }
          t = if_verbose5_1_0(m_2, t);
        }
      }
      ;
      LocalPopChoice(d_12);
    }
  else
    {
      t = c_12;
      {
        ATerm q_4 = NULL;
        q_4 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue))), q_4), (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue))));
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_n_12), q_4), term_k_12);
        {
          ATerm o_2 (ATerm t)
          {
            t = term_i_11;
            t = table_getlist_0_0(t);
            {
              ATerm r_2 (ATerm t)
              {
                t = term_o_12;
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
  ATerm s_4 = NULL,u_4 = NULL,v_4 = NULL;
  ATerm p_12 = t;
  int q_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_4 = NULL;
      w_4 = t;
      t = (ATerm) ATmakeAppl(sym__2, w_4, term_r_12);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(q_12);
    }
  else
    {
      t = p_12;
      {
        ATerm u_2 (ATerm t)
        {
          t = term_v_12;
          return(t);
        }
        t = debug_1_0(u_2, t);
        _fail(t);
      }
    }
  s_4 = t;
  if(match_cons(t, sym_Stream_1))
    {
      v_4 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(v_4);
  u_4 = t;
  t = s_4;
  t = fclose_0_0(t);
  t = u_4;
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm z_4 = NULL,a_5 = NULL;
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
          a_5 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSL_access(a_5, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_F__OK_0)));
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
  ATerm f_6 = NULL,i_6 = NULL;
  i_6 = t;
  if(match_cons(t, sym_Stream_1))
    {
      f_6 = ATgetArgument(t, 0);
      {
        ATerm w_12 = t;
        int x_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(f_6);
            ;
            LocalPopChoice(x_12);
          }
        else
          {
            t = w_12;
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
  ATerm n_6 = NULL;
  t = SSL_stdin_stream();
  n_6 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, n_6);
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
  ATerm f_7 = NULL;
  f_7 = t;
  if(match_cons(t, sym_stderr_0))
    {
      t = f_7;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = f_7;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = f_7;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm y_12 = ATgetArgument(t, 0);
      ATerm z_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm d_13 = t;
    int g_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_2 = NULL,e_2 = NULL;
        d_2 = t;
        t = SSL_explode_term(d_2);
        if(match_cons(t, sym__2))
          {
            ATerm h_13 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) h_13) != ATmakeSymbol("", 0, ATtrue)))
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
        LocalPopChoice(g_13);
      }
    else
      {
        t = d_13;
        {
          ATerm n_13 = t;
          int o_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm k_7 = NULL,l_7 = NULL,m_7 = NULL;
              ATerm y_2 (ATerm t)
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
              t = _2_0(y_2, _id, t);
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
              LocalPopChoice(o_13);
            }
          else
            {
              t = n_13;
              {
                ATerm o_7 = NULL,p_7 = NULL,q_7 = NULL;
                ATerm z_2 (ATerm t)
                {
                  ATerm r_7 = NULL;
                  r_7 = t;
                  t = SSL_is_string(r_7);
                  return(t);
                }
                t = _2_0(z_2, _id, t);
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
  t = (ATerm) ATmakeAppl(sym__2, s_7, term_t_13);
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
  ATerm b_3 (ATerm t)
  {
    ATerm v_7 = NULL,w_7 = NULL,x_7 = NULL;
    if(match_cons(t, sym__2))
      {
        ATerm a_14 = ATgetArgument(t, 0);
        if(match_cons(a_14, sym_Stream_1))
          {
            v_7 = ATgetArgument(a_14, 0);
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
  t = WriteToFile_1_0(b_3, t);
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
  ATerm d_3 (ATerm t)
  {
    ATerm b_8 = NULL;
    b_8 = t;
    t = SSL_explode_string(b_8);
    return(t);
  }
  t = map_1_0(d_3, t);
  t = concat_0_0(t);
  a_8 = t;
  t = SSL_implode_string(a_8);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm v_8 = NULL,w_8 = NULL,y_8 = NULL,z_8 = NULL;
  v_8 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      w_8 = ATgetArgument(t, 0);
      {
        ATerm q_2 = NULL;
        t = SSL_int_to_string(w_8);
        q_2 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_d_14), q_2), term_b_14);
        t = concat_strings_0_0(t);
      }
    }
  else
    {
      ATerm t_3 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          w_8 = ATgetArgument(t, 0);
          y_8 = ATgetArgument(t, 1);
          z_8 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(y_8);
      t_3 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, z_8), term_h_14), t_3), term_e_14), w_8);
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
    ATerm i_14 = t;
    int j_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_b_22), term_x_21), term_t_21), term_p_21), term_l_21), term_e_21), term_a_21), term_u_20), term_o_20), term_c_20), term_u_19), term_m_19), term_e_19), term_x_18), term_s_18), term_i_18), term_t_17), term_o_17), term_k_17), term_d_17), term_o_16), term_i_16), term_a_16), term_t_15), term_p_15), term_m_15), term_b_15), term_r_14);
        {
          ATerm f_3 (ATerm t)
          {
            if(match_cons(t, sym_Signal_3))
              {
                ATerm c_22 = ATgetArgument(t, 0);
                if((g_9 != ATgetArgument(t, 1)))
                  {
                    _fail(ATgetArgument(t, 1));
                  }
                {
                  ATerm d_22 = ATgetArgument(t, 2);
                }
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_elem_1_0(f_3, t);
        }
        ;
        LocalPopChoice(j_14);
      }
    else
      {
        t = i_14;
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
      ATerm i_9 = NULL,j_9 = NULL;
      if(match_cons(t, sym_WaitStatus_3))
        {
          ATerm e_22 = ATgetArgument(t, 0);
          i_9 = ATgetArgument(t, 1);
          {
            ATerm f_22 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = i_9;
      {
        ATerm g_22 = t;
        if((PushChoice() == 0))
          {
            if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
              _fail(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = g_22;
          }
        t = signal_from_number_0_0(t);
        t = signal_to_descr_0_0(t);
        j_9 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, j_9), (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue))));
        t = (ATerm) ATmakeAppl(sym__2, term_h_22, (ATerm) ATinsert(ATinsert(ATempty, j_9), term_i_22));
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
    ATerm j_22 = t;
    int k_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = o_9;
        t = b_64(t);
        ;
        LocalPopChoice(k_22);
      }
    else
      {
        t = j_22;
        t = (ATerm) ATmakeAppl(sym__2, p_9, o_9);
        t = c_64(t);
      }
  }
  return(t);
}
ATerm fork_and_wait_1_0 (ATerm d_64 (ATerm), ATerm t)
{
  ATerm s_9 = NULL;
  ATerm h_3 (ATerm t)
  {
    ATerm u_9 = NULL;
    if(match_cons(t, sym__2))
      {
        u_9 = ATgetArgument(t, 0);
        s_9 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSL_waitpid(u_9);
    t = warn_ifsignaled_0_0(t);
    if(match_cons(t, sym_WaitStatus_3))
      {
        ATerm l_22 = ATgetArgument(t, 0);
        if(((ATgetType(l_22) != AT_INT) || (ATgetInt((ATermInt) l_22) != 0)))
          _fail(t);
        {
          ATerm m_22 = ATgetArgument(t, 1);
        }
        {
          ATerm n_22 = ATgetArgument(t, 2);
        }
      }
    else
      _fail(t);
    t = s_9;
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
    ATerm o_22 = t;
    int p_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get(b_10, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(p_22);
      }
    else
      {
        t = o_22;
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
    ATerm k_3 (ATerm t)
    {
      t = term_q_22;
      return(t);
    }
    t = debug_1_0(k_3, t);
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
      ATerm r_22 = t;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym__2))
            {
              ATerm s_22 = ATgetArgument(t, 0);
              ATerm t_22 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = r_22;
        }
      {
        ATerm q_3 (ATerm t)
        {
          t = term_u_22;
          return(t);
        }
        t = obsolete_1_0(q_3, t);
        t = (ATerm) ATmakeAppl(sym__2, i_10, term_t_13);
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
        ATerm v_22 = t;
        int w_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = s_10(p_10, t);
            ;
            LocalPopChoice(w_22);
          }
        else
          {
            t = v_22;
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
  t = term_x_22;
  t = new_0_0(t);
  v_10 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_10, term_y_22);
  t = conc_strings_0_0(t);
  {
    ATerm s_3 (ATerm t)
    {
      ATerm z_3 = NULL;
      z_3 = t;
      t = SSL_access(z_3, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_F__OK_0)));
      t = new_file_0_0(t);
      return(t);
    }
    t = try_1_0(s_3, t);
  }
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm x_10 = NULL;
  t = new_file_0_0(t);
  x_10 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_10, term_t_13);
  t = open_file_0_0(t);
  t = (ATerm) ATmakeAppl(sym__2, x_10, term_x_22);
  {
    ATerm u_3 (ATerm t)
    {
      t = term_z_22;
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
      ATerm h_4 = NULL,j_4 = NULL;
      t = j_11;
      t = xtc_new_file_0_0(t);
      h_4 = t;
      t = m_0(t);
      j_4 = t;
      t = (ATerm) ATmakeAppl(sym__2, j_4, (ATerm) ATinsert(ATinsert(ATempty, h_4), term_a_23));
      t = conc_0_0(t);
      t = xtc_command_1_0(l_0, t);
      t = SSL_close_file(h_4);
      t = (ATerm) ATmakeAppl(sym_FILE_1, h_4);
    }
  else
    {
      ATerm y_4 = NULL,b_5 = NULL;
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
      b_5 = t;
      t = (ATerm) ATmakeAppl(sym__2, b_5, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, y_4), term_a_23), k_11), term_b_23));
      t = conc_0_0(t);
      t = xtc_command_1_0(l_0, t);
      t = SSL_close_file(y_4);
      t = (ATerm) ATmakeAppl(sym_FILE_1, y_4);
    }
  return(t);
}
ATerm FILE_1_0 (ATerm y_61 (ATerm), ATerm t)
{
  ATerm n_11 = NULL,o_11 = NULL,p_11 = NULL,q_11 = NULL;
  q_11 = t;
  if(match_cons(t, sym_FILE_1))
    {
      o_11 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_11);
  n_11 = t;
  t = o_11;
  t = y_61(t);
  p_11 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FILE_1, p_11), n_11);
  return(t);
}
ATerm xtc_transform_2_0 (ATerm p_83 (ATerm), ATerm q_83 (ATerm), ATerm t)
{
  ATerm c_23 = t;
  int d_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_23 = t;
      int f_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = FILE_1_0(_id, t);
          ;
          LocalPopChoice(f_23);
        }
      else
        {
          t = e_23;
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
        }
      LocalPopChoice(d_23);
      t = xtc_transform_file_2_0(p_83, q_83, t);
    }
  else
    {
      t = c_23;
      t = xtc_transform_term_2_0(p_83, q_83, t);
    }
  return(t);
}
ATerm xtc_sglr_2_0 (ATerm i_93 (ATerm), ATerm j_93 (ATerm), ATerm t)
{
  ATerm y_3 (ATerm t)
  {
    t = term_g_23;
    return(t);
  }
  ATerm b_4 (ATerm t)
  {
    ATerm w_11 = NULL,x_11 = NULL,y_11 = NULL;
    t = term_x_22;
    t = i_93(t);
    t = xtc_find_0_0(t);
    w_11 = t;
    t = term_x_22;
    t = j_93(t);
    x_11 = t;
    t = term_x_22;
    t = pass_v_verbose_0_0(t);
    y_11 = t;
    t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(CheckATermList(y_11), x_11), term_j_23), w_11), term_i_23), term_h_23);
    return(t);
  }
  t = xtc_transform_2_0(y_3, b_4, t);
  return(t);
}
ATerm copy_to_1_0 (ATerm k_0 (ATerm), ATerm t)
{
  ATerm l_12 = NULL,m_12 = NULL;
  l_12 = t;
  if(match_cons(t, sym_FILE_1))
    {
      m_12 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm k_23 = t;
    int l_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_5 = NULL;
        t = l_12;
        t = k_0(t);
        g_5 = t;
        {
          ATerm m_23 = t;
          int n_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(!(match_cons(t, sym_stdout_0)))
                _fail(t);
              ;
              LocalPopChoice(n_23);
            }
          else
            {
              t = m_23;
              if(!(match_cons(t, sym_stderr_0)))
                _fail(t);
            }
          t = SSL_copy(m_12, g_5);
          t = (ATerm) ATmakeAppl(sym_FILE_1, m_12);
        }
        ;
        LocalPopChoice(l_23);
      }
    else
      {
        t = k_23;
        {
          ATerm o_23 = t;
          int p_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm k_5 = NULL;
              t = l_12;
              t = k_0(t);
              k_5 = t;
              {
                ATerm q_23 = t;
                if((PushChoice() == 0))
                  {
                    ATerm r_23 = t;
                    int s_23 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(!(match_cons(t, sym_stdout_0)))
                          _fail(t);
                        ;
                        LocalPopChoice(s_23);
                      }
                    else
                      {
                        t = r_23;
                        {
                          ATerm t_23 = t;
                          int u_23 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              if(!(match_cons(t, sym_stderr_0)))
                                _fail(t);
                              ;
                              LocalPopChoice(u_23);
                            }
                          else
                            {
                              t = t_23;
                              {
                                ATerm l_5 = NULL;
                                l_5 = t;
                                if((m_12 != t))
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
                    t = q_23;
                  }
                t = SSL_copy(m_12, k_5);
                t = (ATerm) ATmakeAppl(sym_FILE_1, m_12);
              }
              ;
              LocalPopChoice(p_23);
            }
          else
            {
              t = o_23;
              t = l_12;
              t = k_0(t);
              if((m_12 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, m_12);
            }
        }
      }
  }
  return(t);
}
ATerm table_pop_0_0 (ATerm t)
{
  ATerm s_12 = NULL,t_12 = NULL,u_12 = NULL;
  if(match_cons(t, sym__2))
    {
      s_12 = ATgetArgument(t, 0);
      t_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm v_23 = t;
    int w_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_5 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm x_23 = ATgetArgument(t, 0);
            ATerm y_23 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(s_12, t_12);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm z_23 = ATgetFirst((ATermList) t);
            n_5 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = n_5;
        ;
        LocalPopChoice(w_23);
      }
    else
      {
        t = v_23;
        t = (ATerm) ATempty;
      }
    u_12 = t;
    t = SSL_table_put(s_12, t_12, u_12);
    t = (ATerm) ATmakeAppl(sym__2, s_12, t_12);
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm v_79 (ATerm), ATerm t)
{
  ATerm a_13 = NULL,b_13 = NULL,c_13 = NULL,e_13 = NULL;
  a_13 = t;
  t = v_79(t);
  b_13 = t;
  {
    ATerm a_24 = t;
    int b_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get(b_13, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(b_24);
      }
    else
      {
        t = a_24;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        e_13 = ATgetFirst((ATermList) t);
        c_13 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSL_table_put(b_13, (ATerm)ATmakeAppl(sym_Scopes_0), c_13);
    t = e_13;
    {
      ATerm i_4 (ATerm t)
      {
        ATerm f_13 = NULL;
        f_13 = t;
        t = (ATerm) ATmakeAppl(sym__2, b_13, f_13);
        t = table_pop_0_0(t);
        return(t);
      }
      t = map_1_0(i_4, t);
      t = a_13;
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm q_80 (ATerm), ATerm r_80 (ATerm), ATerm t)
{
  ATerm c_24 = t;
  int d_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = q_80(t);
      t = r_80(t);
      ;
      LocalPopChoice(d_24);
    }
  else
    {
      t = c_24;
      t = r_80(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm u_79 (ATerm), ATerm t)
{
  ATerm i_13 = NULL,j_13 = NULL,k_13 = NULL;
  i_13 = t;
  t = u_79(t);
  j_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_13, term_e_24);
  {
    ATerm f_24 = t;
    int g_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm h_24 = ATgetArgument(t, 0);
            ATerm i_24 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(j_13, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(g_24);
      }
    else
      {
        t = f_24;
        t = (ATerm) ATempty;
      }
    k_13 = t;
    t = SSL_table_put(j_13, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATinsert(CheckATermList(k_13), (ATerm) ATempty));
    t = i_13;
  }
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm z_82 (ATerm), ATerm t)
{
  ATerm p_13 = NULL;
  ATerm k_4 (ATerm t)
  {
    t = term_z_22;
    return(t);
  }
  t = begin_scope_1_0(k_4, t);
  {
    ATerm o_4 (ATerm t)
    {
      ATerm q_13 = NULL;
      q_13 = t;
      {
        ATerm j_24 = t;
        int k_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_table_get((ATerm)ATmakeAppl(sym_TempFiles_0), (ATerm) ATmakeAppl(sym_Scopes_0));
            ;
            LocalPopChoice(k_24);
          }
        else
          {
            t = j_24;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
          }
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            p_13 = ATgetFirst((ATermList) t);
            {
              ATerm l_24 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        t = p_13;
        {
          ATerm r_4 (ATerm t)
          {
            ATerm t_4 (ATerm t)
            {
              ATerm r_13 = NULL;
              r_13 = t;
              t = SSL_remove(r_13);
              return(t);
            }
            t = try_1_0(t_4, t);
            return(t);
          }
          t = map_1_0(r_4, t);
          t = q_13;
          {
            ATerm x_4 (ATerm t)
            {
              t = term_z_22;
              return(t);
            }
            t = end_scope_1_0(x_4, t);
          }
        }
      }
      return(t);
    }
    t = restore_always_2_0(z_82, o_4, t);
  }
  return(t);
}
ATerm xtc_io_1_0 (ATerm a_83 (ATerm), ATerm t)
{
  ATerm c_5 (ATerm t)
  {
    ATerm m_24 = t;
    int n_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_13 = NULL;
        t = term_b_23;
        t = get_config_0_0(t);
        s_13 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, s_13);
        ;
        LocalPopChoice(n_24);
      }
    else
      {
        t = m_24;
        t = term_o_24;
      }
    t = a_83(t);
    {
      ATerm d_5 (ATerm t)
      {
        ATerm p_24 = t;
        int q_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_a_23;
            t = get_config_0_0(t);
            ;
            LocalPopChoice(q_24);
          }
        else
          {
            t = p_24;
            t = term_r_24;
          }
        return(t);
      }
      t = copy_to_1_0(d_5, t);
    }
    return(t);
  }
  t = xtc_temp_files_1_0(c_5, t);
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  ATerm e_5 (ATerm t)
  {
    ATerm u_13 = NULL;
    u_13 = t;
    if(match_string(t, "-k"))
      {
        t = u_13;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
          _fail(t);
        t = u_13;
      }
    return(t);
  }
  ATerm f_5 (ATerm t)
  {
    ATerm v_13 = NULL,w_13 = NULL;
    v_13 = t;
    t = SSL_string_to_int(v_13);
    w_13 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)), w_13);
    t = v_13;
    return(t);
  }
  ATerm h_5 (ATerm t)
  {
    t = term_s_24;
    return(t);
  }
  t = ArgOption_3_0(e_5, f_5, h_5, t);
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm t_24 = t;
  int u_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_5 (ATerm t)
      {
        ATerm y_13 = NULL;
        y_13 = t;
        if(match_string(t, "-S"))
          {
            t = y_13;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
              _fail(t);
            t = y_13;
          }
        return(t);
      }
      ATerm j_5 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), (ATerm) ATmakeInt(0));
        t = term_w_24;
        return(t);
      }
      ATerm m_5 (ATerm t)
      {
        t = term_x_24;
        return(t);
      }
      t = Option_3_0(i_5, j_5, m_5, t);
      ;
      LocalPopChoice(u_24);
    }
  else
    {
      t = t_24;
      {
        ATerm y_24 = t;
        int z_24 = stack_ptr;
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
              ATerm z_13 = NULL,c_14 = NULL;
              z_13 = t;
              t = SSL_string_to_int(z_13);
              c_14 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), c_14);
              t = (ATerm) ATmakeAppl(sym_Verbose_1, z_13);
              return(t);
            }
            ATerm q_5 (ATerm t)
            {
              t = term_a_25;
              return(t);
            }
            t = ArgOption_3_0(o_5, p_5, q_5, t);
            ;
            LocalPopChoice(z_24);
          }
        else
          {
            t = y_24;
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
                t = term_b_25;
                return(t);
              }
              ATerm t_5 (ATerm t)
              {
                t = term_c_25;
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
  ATerm d_25 = t;
  int e_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0_0(t);
      ;
      LocalPopChoice(e_25);
    }
  else
    {
      t = d_25;
      t = keep_option_0_0(t);
    }
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  ATerm u_5 (ATerm t)
  {
    ATerm f_14 = NULL;
    f_14 = t;
    if(match_string(t, "-o"))
      {
        t = f_14;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
          _fail(t);
        t = f_14;
      }
    return(t);
  }
  ATerm v_5 (ATerm t)
  {
    ATerm g_14 = NULL;
    g_14 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), g_14);
    t = (ATerm) ATmakeAppl(sym_Output_1, g_14);
    return(t);
  }
  ATerm w_5 (ATerm t)
  {
    t = term_f_25;
    return(t);
  }
  t = ArgOption_3_0(u_5, v_5, w_5, t);
  return(t);
}
ATerm aterm_output_option_0_0 (ATerm t)
{
  ATerm g_25 = t;
  int h_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0_0(t);
      ;
      LocalPopChoice(h_25);
    }
  else
    {
      t = g_25;
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
          t = term_i_25;
          return(t);
        }
        ATerm z_5 (ATerm t)
        {
          t = term_j_25;
          return(t);
        }
        t = Option_3_0(x_5, y_5, z_5, t);
      }
    }
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm l_14 = NULL,m_14 = NULL,n_14 = NULL,o_14 = NULL,p_14 = NULL;
  l_14 = t;
  if(match_string(t, "register-usage-info"))
    {
      t = l_14;
      t = register_usage_1_0(j_0, t);
    }
  else
    {
      ATerm t_14 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_14 = ATgetFirst((ATermList) t);
          n_14 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = n_14;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          o_14 = ATgetFirst((ATermList) t);
          p_14 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = m_14;
      t = h_0(t);
      t = o_14;
      t = i_0(t);
      t_14 = t;
      t = (ATerm) ATinsert(CheckATermList(p_14), t_14);
    }
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  ATerm b_6 (ATerm t)
  {
    ATerm v_14 = NULL;
    v_14 = t;
    if(match_string(t, "-i"))
      {
        t = v_14;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
          _fail(t);
        t = v_14;
      }
    return(t);
  }
  ATerm c_6 (ATerm t)
  {
    ATerm w_14 = NULL;
    w_14 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), w_14);
    t = (ATerm) ATmakeAppl(sym_Input_1, w_14);
    return(t);
  }
  ATerm d_6 (ATerm t)
  {
    t = term_k_25;
    return(t);
  }
  t = ArgOption_3_0(b_6, c_6, d_6, t);
  return(t);
}
ATerm io_options_0_0 (ATerm t)
{
  ATerm l_25 = t;
  int m_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      ;
      LocalPopChoice(m_25);
    }
  else
    {
      t = l_25;
      {
        ATerm n_25 = t;
        int o_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0_0(t);
            ;
            LocalPopChoice(o_25);
          }
        else
          {
            t = n_25;
            t = general_options_0_0(t);
          }
      }
    }
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm x_14 = NULL,y_14 = NULL;
  x_14 = t;
  t = term_x_22;
  t = whoami_0_0(t);
  y_14 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue))), y_14), (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue))));
  t = SSL_exit((ATerm) ATmakeInt(1));
  t = x_14;
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm z_14 = NULL;
  t = report_run_time_0_0(t);
  t = term_x_22;
  t = whoami_0_0(t);
  z_14 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue))), z_14));
  t = SSL_exit((ATerm) ATmakeInt(1));
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_p_25;
  t = get_config_0_0(t);
  return(t);
}
ATerm foldr_2_0 (ATerm x_75 (ATerm), ATerm y_75 (ATerm), ATerm t)
{
  ATerm q_25 = t;
  int r_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = x_75(t);
      ;
      LocalPopChoice(r_25);
    }
  else
    {
      t = q_25;
      {
        ATerm c_15 = NULL,d_15 = NULL,g_15 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            c_15 = ATgetFirst((ATermList) t);
            d_15 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = d_15;
        t = foldr_2_0(x_75, y_75, t);
        g_15 = t;
        t = (ATerm) ATmakeAppl(sym__2, c_15, g_15);
        t = y_75(t);
      }
    }
  return(t);
}
ATerm crush_2_0 (ATerm v_73 (ATerm), ATerm w_73 (ATerm), ATerm t)
{
  ATerm h_15 = NULL,i_15 = NULL;
  h_15 = t;
  t = SSL_explode_term(h_15);
  if(match_cons(t, sym__2))
    {
      ATerm s_25 = ATgetArgument(t, 0);
      i_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_15;
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
  ATerm j_15 = NULL;
  t = times_0_0(t);
  {
    ATerm e_6 (ATerm t)
    {
      t = term_v_24;
      return(t);
    }
    ATerm g_6 (ATerm t)
    {
      ATerm k_15 = NULL,l_15 = NULL;
      if(match_cons(t, sym__2))
        {
          k_15 = ATgetArgument(t, 0);
          l_15 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm t_25 = t;
        int u_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(k_15, l_15);
            ;
            LocalPopChoice(u_25);
          }
        else
          {
            t = t_25;
            t = SSL_addr(k_15, l_15);
          }
      }
      return(t);
    }
    t = crush_2_0(e_6, g_6, t);
    j_15 = t;
    t = SSL_TicksToSeconds(j_15);
  }
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm x_15 = NULL,y_15 = NULL,z_15 = NULL;
  x_15 = t;
  if(match_cons(t, sym__2))
    {
      y_15 = ATgetArgument(t, 0);
      z_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm v_25 = t;
    int w_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = z_15;
        if((y_15 != t))
          {
            _fail(t);
          }
        t = x_15;
        ;
        LocalPopChoice(w_25);
      }
    else
      {
        t = v_25;
        t = x_15;
        {
          ATerm x_25 = t;
          int y_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(y_15, z_15);
              ;
              LocalPopChoice(y_25);
            }
          else
            {
              t = x_25;
              t = SSL_gtr(y_15, z_15);
            }
          t = (ATerm) ATmakeAppl(sym__2, y_15, z_15);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm v_80 (ATerm), ATerm t)
{
  ATerm h_6 (ATerm t)
  {
    ATerm d_16 = NULL,e_16 = NULL;
    d_16 = t;
    t = term_p_8;
    t = get_config_0_0(t);
    e_16 = t;
    t = (ATerm) ATmakeAppl(sym__2, e_16, term_s_8);
    t = geq_0_0(t);
    t = d_16;
    t = v_80(t);
    return(t);
  }
  t = try_1_0(h_6, t);
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  ATerm j_6 (ATerm t)
  {
    ATerm g_16 = NULL,h_16 = NULL;
    t = run_time_0_0(t);
    g_16 = t;
    t = term_x_22;
    t = whoami_0_0(t);
    h_16 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue))), g_16), (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue))), h_16));
    t = (ATerm) ATmakeAppl(sym__2, term_h_22, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_z_25), g_16), term_e_14), h_16));
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
  ATerm a_26 = t;
  int b_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_c_26;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(b_26);
    }
  else
    {
      t = a_26;
      {
        ATerm k_6 (ATerm t)
        {
          ATerm d_26 = t;
          int e_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(!(match_cons(t, sym_Help_0)))
                _fail(t);
              ;
              LocalPopChoice(e_26);
            }
          else
            {
              t = d_26;
              {
                ATerm f_26 = t;
                int g_26 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Undefined_1_0(_id, t);
                    ;
                    LocalPopChoice(g_26);
                  }
                else
                  {
                    t = f_26;
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
  ATerm k_16 = NULL,l_16 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_16 = ATgetFirst((ATermList) t);
      l_16 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm p_16 = NULL,q_16 = NULL;
        t = l_16;
        t = g_0(t);
        p_16 = t;
        t = k_16;
        t = f_0(t);
        q_16 = t;
        t = l_16;
        {
          ATerm l_6 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(p_16), q_16);
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
      t = term_x_22;
      t = g_0(t);
    }
  return(t);
}
ATerm reverse_0_0 (ATerm t)
{
  ATerm o_6 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2_0(_id, o_6, t);
  return(t);
}
ATerm Program_1_0 (ATerm f_62 (ATerm), ATerm t)
{
  ATerm r_16 = NULL,s_16 = NULL,t_16 = NULL,u_16 = NULL;
  u_16 = t;
  if(match_cons(t, sym_Program_1))
    {
      s_16 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_16);
  r_16 = t;
  t = s_16;
  t = f_62(t);
  t_16 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, t_16), r_16);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm h_26 = t;
  int i_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_p_25;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(i_26);
    }
  else
    {
      t = h_26;
      {
        ATerm p_6 (ATerm t)
        {
          t = Program_1_0(_id, t);
          return(t);
        }
        t = option_defined_1_0(p_6, t);
      }
    }
  t = try_1_0(_fail, t);
  t = term_j_26;
  t = echo_0_0(t);
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)));
  t = reverse_0_0(t);
  {
    ATerm q_6 (ATerm t)
    {
      ATerm y_16 = NULL;
      y_16 = t;
      t = (ATerm) ATinsert(ATinsert(ATempty, y_16), term_k_26);
      t = echo_0_0(t);
      return(t);
    }
    t = map_1_0(q_6, t);
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
  ATerm z_16 = NULL,a_17 = NULL,b_17 = NULL,c_17 = NULL;
  c_17 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      a_17 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_17);
  z_16 = t;
  t = a_17;
  t = g_62(t);
  b_17 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, b_17), z_16);
  return(t);
}
ATerm fetch_1_0 (ATerm r_69 (ATerm), ATerm t)
{
  ATerm g_17 (ATerm t)
  {
    ATerm l_26 = t;
    int m_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(r_69, _id, t);
        ;
        LocalPopChoice(m_26);
      }
    else
      {
        t = l_26;
        t = Cons_2_0(_id, g_17, t);
      }
    return(t);
  }
  t = g_17(t);
  return(t);
}
ATerm option_defined_1_0 (ATerm w_85 (ATerm), ATerm t)
{
  t = fetch_1_0(w_85, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm i_17 = NULL,j_17 = NULL;
  i_17 = t;
  {
    ATerm n_26 = t;
    int o_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = i_17;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm p_26 = ATgetFirst((ATermList) t);
                ATerm q_26 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = i_17;
          }
        ;
        LocalPopChoice(o_26);
      }
    else
      {
        t = n_26;
        t = (ATerm) ATinsert(ATempty, i_17);
      }
    j_17 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stdout_0), j_17);
    t = i_17;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_p_25;
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
  ATerm r_26 = t;
  int s_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(s_26);
    }
  else
    {
      t = r_26;
      {
        ATerm r_17 = NULL,s_17 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            r_17 = ATgetFirst((ATermList) t);
            s_17 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = r_17;
        {
          ATerm t_6 (ATerm t)
          {
            t = s_17;
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
  ATerm w_17 = NULL,x_17 = NULL;
  w_17 = t;
  t = SSL_explode_term(w_17);
  if(match_cons(t, sym__2))
    {
      ATerm t_26 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) t_26) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      x_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_17;
  t = concat_0_0(t);
  return(t);
}
ATerm at_end_1_0 (ATerm x_69 (ATerm), ATerm t)
{
  ATerm y_17 (ATerm t)
  {
    ATerm u_26 = t;
    int v_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, y_17, t);
        ;
        LocalPopChoice(v_26);
      }
    else
      {
        t = u_26;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = x_69(t);
      }
    return(t);
  }
  t = y_17(t);
  return(t);
}
ATerm conc_two_lists_0_0 (ATerm t)
{
  ATerm z_17 = NULL,a_18 = NULL;
  if(match_cons(t, sym__2))
    {
      a_18 = ATgetArgument(t, 0);
      z_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_18;
  {
    ATerm u_6 (ATerm t)
    {
      t = z_17;
      return(t);
    }
    t = at_end_1_0(u_6, t);
  }
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm w_26 = t;
  int x_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0_0(t);
      ;
      LocalPopChoice(x_26);
    }
  else
    {
      t = w_26;
      t = conc_more_lists_0_0(t);
    }
  return(t);
}
ATerm _2_0 (ATerm q_55 (ATerm), ATerm r_55 (ATerm), ATerm t)
{
  ATerm b_18 = NULL,c_18 = NULL,d_18 = NULL,e_18 = NULL,f_18 = NULL,g_18 = NULL;
  g_18 = t;
  if(match_cons(t, sym__2))
    {
      c_18 = ATgetArgument(t, 0);
      d_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_18);
  b_18 = t;
  t = c_18;
  t = q_55(t);
  e_18 = t;
  t = d_18;
  t = r_55(t);
  f_18 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, e_18, f_18), b_18);
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  ATerm k_18 = NULL;
  ATerm v_6 (ATerm t)
  {
    ATerm l_18 = NULL;
    l_18 = t;
    t = SSL_explode_string(l_18);
    return(t);
  }
  ATerm w_6 (ATerm t)
  {
    ATerm m_18 = NULL;
    m_18 = t;
    t = SSL_explode_string(m_18);
    return(t);
  }
  t = _2_0(v_6, w_6, t);
  t = conc_0_0(t);
  k_18 = t;
  t = SSL_implode_string(k_18);
  return(t);
}
ATerm debug_1_0 (ATerm a_65 (ATerm), ATerm t)
{
  ATerm n_18 = NULL,o_18 = NULL;
  n_18 = t;
  t = a_65(t);
  o_18 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, n_18), o_18));
  t = n_18;
  return(t);
}
ATerm map_1_0 (ATerm h_69 (ATerm), ATerm t)
{
  ATerm p_18 (ATerm t)
  {
    ATerm y_26 = t;
    int z_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(z_26);
      }
    else
      {
        t = y_26;
        t = Cons_2_0(h_69, p_18, t);
      }
    return(t);
  }
  t = p_18(t);
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm a_27 = t;
  int b_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_18 = NULL;
      v_18 = t;
      t = SSL_is_string(v_18);
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
            ATerm x_6 (ATerm t)
            {
              t = try_1_0(eval_config_0_0, t);
              return(t);
            }
            t = map_1_0(x_6, t);
            ;
            LocalPopChoice(d_27);
          }
        else
          {
            t = c_27;
            {
              ATerm z_18 = NULL,a_19 = NULL,b_19 = NULL;
              z_18 = t;
              if(match_cons(t, sym_Path_1))
                {
                  a_19 = ATgetArgument(t, 0);
                  t = a_19;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      a_19 = ATgetArgument(t, 0);
                      t = a_19;
                      {
                        ATerm e_27 = t;
                        int f_27 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(f_27);
                          }
                        else
                          {
                            t = e_27;
                            {
                              ATerm y_6 (ATerm t)
                              {
                                t = term_g_27;
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
                      ATerm f_19 = NULL,g_19 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          a_19 = ATgetArgument(t, 0);
                          b_19 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = a_19;
                      t = eval_config_0_0(t);
                      f_19 = t;
                      t = b_19;
                      t = eval_config_0_0(t);
                      g_19 = t;
                      t = (ATerm) ATmakeAppl(sym__2, f_19, g_19);
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
  ATerm j_19 = NULL;
  j_19 = t;
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), j_19);
  {
    ATerm z_6 (ATerm t)
    {
      ATerm k_19 = NULL;
      t = eval_config_0_0(t);
      k_19 = t;
      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), j_19, k_19);
      t = k_19;
      return(t);
    }
    t = try_1_0(z_6, t);
  }
  return(t);
}
ATerm try_1_0 (ATerm b_80 (ATerm), ATerm t)
{
  ATerm h_27 = t;
  int i_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = b_80(t);
      ;
      LocalPopChoice(i_27);
    }
  else
    {
      t = h_27;
    }
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm j_27 = t;
  int k_27 = stack_ptr;
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
        t = term_n_27;
        return(t);
      }
      ATerm c_7 (ATerm t)
      {
        t = term_o_27;
        return(t);
      }
      t = Option_3_0(a_7, b_7, c_7, t);
      ;
      LocalPopChoice(k_27);
    }
  else
    {
      t = j_27;
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
          t = term_p_27;
          return(t);
        }
        ATerm g_7 (ATerm t)
        {
          t = term_q_27;
          return(t);
        }
        t = Option_3_0(d_7, e_7, g_7, t);
      }
    }
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm n_19 = NULL,o_19 = NULL,p_19 = NULL,q_19 = NULL;
  if(match_cons(t, sym__3))
    {
      n_19 = ATgetArgument(t, 0);
      o_19 = ATgetArgument(t, 1);
      p_19 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, n_19, o_19);
  {
    ATerm r_27 = t;
    int s_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm t_27 = ATgetArgument(t, 0);
            ATerm u_27 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(n_19, o_19);
        ;
        LocalPopChoice(s_27);
      }
    else
      {
        t = r_27;
        t = (ATerm) ATempty;
      }
    q_19 = t;
    t = SSL_table_put(n_19, o_19, (ATerm) ATinsert(CheckATermList(q_19), p_19));
    t = (ATerm) ATmakeAppl(sym__3, n_19, o_19, p_19);
  }
  return(t);
}
ATerm register_usage_1_0 (ATerm b_87 (ATerm), ATerm t)
{
  ATerm v_19 = NULL;
  t = term_x_22;
  t = b_87(t);
  v_19 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_v_27, term_w_27, v_19);
  t = table_push_0_0(t);
  _fail(t);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm y_19 = NULL,z_19 = NULL,a_20 = NULL;
  y_19 = t;
  if(match_string(t, "register-usage-info"))
    {
      t = y_19;
      t = register_usage_1_0(d_0, t);
    }
  else
    {
      ATerm d_20 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          z_19 = ATgetFirst((ATermList) t);
          a_20 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = z_19;
      t = a_0(t);
      t = term_x_22;
      t = b_0(t);
      d_20 = t;
      t = (ATerm) ATinsert(CheckATermList(a_20), d_20);
    }
  return(t);
}
ATerm system_usage_switch_0_0 (ATerm t)
{
  ATerm h_7 (ATerm t)
  {
    ATerm f_20 = NULL;
    f_20 = t;
    if(match_string(t, "--help"))
      {
        t = f_20;
      }
    else
      {
        if(match_string(t, "-h"))
          {
            t = f_20;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
              _fail(t);
            t = f_20;
          }
      }
    return(t);
  }
  ATerm i_7 (ATerm t)
  {
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
    t = term_x_27;
    return(t);
  }
  ATerm j_7 (ATerm t)
  {
    t = term_y_27;
    return(t);
  }
  t = Option_3_0(h_7, i_7, j_7, t);
  return(t);
}
ATerm Cons_2_0 (ATerm z_56 (ATerm), ATerm a_57 (ATerm), ATerm t)
{
  ATerm g_20 = NULL,h_20 = NULL,i_20 = NULL,j_20 = NULL,k_20 = NULL,l_20 = NULL;
  l_20 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_20 = ATgetFirst((ATermList) t);
      i_20 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_20);
  g_20 = t;
  t = h_20;
  t = z_56(t);
  j_20 = t;
  t = i_20;
  t = a_57(t);
  k_20 = t;
  t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(k_20), j_20), g_20);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm z_86 (ATerm), ATerm t)
{
  ATerm s_20 = NULL;
  s_20 = t;
  {
    ATerm c_8 (ATerm t)
    {
      t = term_z_27;
      t = z_86(t);
      return(t);
    }
    t = try_1_0(c_8, t);
    t = s_20;
    {
      ATerm d_8 (ATerm t)
      {
        ATerm t_20 = NULL;
        t_20 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), t_20);
        t = (ATerm) ATmakeAppl(sym_Program_1, t_20);
        return(t);
      }
      ATerm e_8 (ATerm t)
      {
        ATerm a_28 = t;
        int b_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_28 = t;
            int d_28 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(d_28);
              }
            else
              {
                t = c_28;
                t = z_86(t);
                t = Cons_2_0(_id, e_8, t);
              }
            ;
            LocalPopChoice(b_28);
          }
        else
          {
            t = a_28;
            {
              ATerm v_20 = NULL,w_20 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  v_20 = ATgetFirst((ATermList) t);
                  w_20 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(w_20), (ATerm) ATmakeAppl(sym_Undefined_1, v_20));
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
  ATerm h_21 = NULL,i_21 = NULL,j_21 = NULL;
  h_21 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATempty);
  t = h_21;
  {
    ATerm f_8 (ATerm t)
    {
      ATerm e_28 = t;
      int f_28 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = y_86(t);
          ;
          LocalPopChoice(f_28);
        }
      else
        {
          t = e_28;
          {
            ATerm g_28 = t;
            int h_28 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = system_usage_switch_0_0(t);
                ;
                LocalPopChoice(h_28);
              }
            else
              {
                t = g_28;
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
        ATerm i_28 = t;
        int j_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_21 = NULL;
            o_21 = t;
            {
              ATerm k_28 = t;
              int l_28 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = o_21;
                  {
                    ATerm m_28 = t;
                    int n_28 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = term_c_26;
                        t = get_config_0_0(t);
                        ;
                        LocalPopChoice(n_28);
                      }
                    else
                      {
                        t = m_28;
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
                    t = o_21;
                    t = system_usage_0_0(t);
                    t = SSL_exit((ATerm) ATmakeInt(0));
                  }
                  ;
                  LocalPopChoice(l_28);
                }
              else
                {
                  t = k_28;
                  t = term_m_27;
                  t = get_config_0_0(t);
                  t = o_21;
                  t = system_about_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
            }
            ;
            LocalPopChoice(j_28);
          }
        else
          {
            t = i_28;
            {
              ATerm i_8 (ATerm t)
              {
                ATerm j_8 (ATerm t)
                {
                  i_21 = t;
                  return(t);
                }
                t = Undefined_1_0(j_8, t);
                return(t);
              }
              t = option_defined_1_0(i_8, t);
              t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(i_21)), (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue))));
              t = (ATerm) ATmakeAppl(sym__2, term_h_22, (ATerm) ATinsert(ATinsert(ATempty, not_null(i_21)), term_o_28));
              t = system_usage_0_0(t);
              t = SSL_exit((ATerm) ATmakeInt(1));
            }
          }
        return(t);
      }
      t = try_1_0(g_8, t);
      j_21 = t;
      t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)));
      t = j_21;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm d_85 (ATerm), ATerm e_85 (ATerm), ATerm f_85 (ATerm), ATerm g_85 (ATerm), ATerm t)
{
  ATerm x_13 = NULL;
  t = parse_options_1_0(d_85, t);
  x_13 = t;
  t = SSL_table_create((ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), x_13);
  t = x_13;
  t = f_85(t);
  {
    ATerm p_28 = t;
    int q_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(e_85, t);
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
              t = g_85(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(s_28);
            }
          else
            {
              t = r_28;
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
    ATerm t_28 = t;
    int u_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_83(t);
        ;
        LocalPopChoice(u_28);
      }
    else
      {
        t = t_28;
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
ATerm io_parse_pp_table_0_0 (ATerm t)
{
  ATerm m_8 (ATerm t)
  {
    ATerm n_8 (ATerm t)
    {
      t = term_v_28;
      return(t);
    }
    ATerm o_8 (ATerm t)
    {
      t = term_w_28;
      return(t);
    }
    t = xtc_sglr_2_0(n_8, o_8, t);
    t = xtc_implode_asfix_0_0(t);
    return(t);
  }
  t = xtc_io_wrap_1_0(m_8, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = io_parse_pp_table_0_0(t);
  return(t);
}
