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
ATerm term_d_21;
ATerm term_c_21;
ATerm term_b_21;
ATerm term_a_21;
ATerm term_z_20;
ATerm term_x_20;
ATerm term_w_20;
ATerm term_v_20;
ATerm term_u_20;
ATerm term_t_20;
ATerm term_s_20;
ATerm term_o_20;
ATerm term_n_20;
ATerm term_m_20;
ATerm term_l_20;
ATerm term_k_20;
ATerm term_h_20;
ATerm term_e_20;
ATerm term_d_20;
ATerm term_c_20;
ATerm term_b_20;
ATerm term_a_20;
ATerm term_z_19;
ATerm term_v_19;
ATerm term_q_19;
ATerm term_o_19;
ATerm term_n_19;
ATerm term_j_19;
ATerm term_h_19;
ATerm term_g_19;
ATerm term_f_19;
ATerm term_e_19;
ATerm term_z_18;
ATerm term_y_18;
ATerm term_v_18;
ATerm term_u_18;
ATerm term_r_18;
ATerm term_q_18;
ATerm term_p_18;
ATerm term_l_18;
ATerm term_k_18;
ATerm term_j_18;
ATerm term_h_18;
ATerm term_g_18;
ATerm term_f_18;
ATerm term_e_18;
ATerm term_d_18;
ATerm term_w_17;
ATerm term_v_17;
ATerm term_u_17;
ATerm term_i_17;
ATerm term_h_17;
ATerm term_g_17;
ATerm term_d_17;
ATerm term_c_17;
ATerm term_b_17;
ATerm term_a_17;
ATerm term_z_16;
ATerm term_y_16;
ATerm term_x_16;
ATerm term_u_16;
ATerm term_s_16;
ATerm term_r_16;
ATerm term_q_16;
ATerm term_k_16;
ATerm term_j_16;
ATerm term_i_16;
ATerm term_b_16;
ATerm term_a_16;
ATerm term_z_15;
ATerm term_w_15;
ATerm term_v_15;
ATerm term_s_15;
ATerm term_p_15;
ATerm term_o_15;
ATerm term_n_15;
ATerm term_j_15;
ATerm term_i_15;
ATerm term_h_15;
ATerm term_g_15;
ATerm term_f_15;
ATerm term_e_15;
ATerm term_d_15;
ATerm term_c_15;
ATerm term_b_15;
ATerm term_a_15;
ATerm term_z_14;
ATerm term_s_14;
ATerm term_r_14;
ATerm term_o_14;
ATerm term_n_14;
ATerm term_h_14;
ATerm term_f_14;
ATerm term_e_14;
ATerm term_d_14;
ATerm term_x_13;
ATerm term_w_13;
ATerm term_v_13;
ATerm term_u_13;
ATerm term_q_13;
ATerm term_p_13;
ATerm term_o_13;
ATerm term_b_13;
ATerm term_a_13;
ATerm term_z_12;
ATerm term_y_12;
ATerm term_t_12;
ATerm term_x_11;
ATerm term_w_11;
ATerm term_t_11;
ATerm term_s_11;
ATerm term_r_11;
ATerm term_l_11;
ATerm term_f_11;
ATerm term_z_10;
ATerm term_w_10;
ATerm term_t_10;
ATerm term_s_10;
ATerm term_r_10;
ATerm term_q_10;
ATerm term_n_10;
ATerm term_l_10;
ATerm term_f_10;
ATerm term_u_8;
ATerm term_s_8;
ATerm term_i_8;
ATerm term_h_8;
void init_constant_terms (void)
{
  ATprotect(&(term_h_8));
  term_h_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_i_8));
  term_i_8 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_s_8));
  term_s_8 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_u_8));
  term_u_8 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_f_10));
  term_f_10 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_l_10));
  term_l_10 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_q_10));
  term_q_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_r_10));
  term_r_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_s_10));
  term_s_10 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_z_10));
  term_z_10 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_b_13));
  term_b_13 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_13, term_p_13, term_q_13);
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_13, term_w_13, term_x_13);
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_14, term_f_14, term_h_14);
  ATprotect(&(term_o_14));
  term_o_14 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_14, term_u_8, term_r_14);
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_14, term_a_15, term_b_15);
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_15, term_e_15, term_f_15);
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_15, term_i_15, term_j_15);
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_15, term_p_15, term_s_15);
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_15, term_z_15, term_a_16);
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_16, term_j_16, term_k_16);
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_u_16));
  term_u_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_16, term_s_16, term_u_16);
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_a_17));
  term_a_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_16, term_s_8, term_z_16);
  ATprotect(&(term_b_17));
  term_b_17 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_c_17));
  term_c_17 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_g_17));
  term_g_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_17, term_c_17, term_d_17);
  ATprotect(&(term_h_17));
  term_h_17 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_i_17));
  term_i_17 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_u_17));
  term_u_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_v_17));
  term_v_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_17, term_i_17, term_u_17);
  ATprotect(&(term_w_17));
  term_w_17 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_d_18));
  term_d_18 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_e_18));
  term_e_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_f_18));
  term_f_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_17, term_d_18, term_e_18);
  ATprotect(&(term_g_18));
  term_g_18 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_h_18));
  term_h_18 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_j_18));
  term_j_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_k_18));
  term_k_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_18, term_h_18, term_j_18);
  ATprotect(&(term_l_18));
  term_l_18 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_p_18));
  term_p_18 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_q_18));
  term_q_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_r_18));
  term_r_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_18, term_p_18, term_q_18);
  ATprotect(&(term_u_18));
  term_u_18 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_v_18));
  term_v_18 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_y_18));
  term_y_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_z_18));
  term_z_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_18, term_v_18, term_y_18);
  ATprotect(&(term_e_19));
  term_e_19 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_f_19));
  term_f_19 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_h_19));
  term_h_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_19, term_f_19, term_g_19);
  ATprotect(&(term_j_19));
  term_j_19 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_n_19));
  term_n_19 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_o_19));
  term_o_19 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_q_19));
  term_q_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_19, term_n_19, term_o_19);
  ATprotect(&(term_v_19));
  term_v_19 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_z_19));
  term_z_19 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_a_20));
  term_a_20 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_b_20));
  term_b_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_19, term_z_19, term_a_20);
  ATprotect(&(term_c_20));
  term_c_20 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_d_20));
  term_d_20 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_e_20));
  term_e_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_h_20));
  term_h_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_20, term_d_20, term_e_20);
  ATprotect(&(term_k_20));
  term_k_20 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_l_20));
  term_l_20 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_m_20));
  term_m_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_n_20));
  term_n_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_20, term_l_20, term_m_20);
  ATprotect(&(term_o_20));
  term_o_20 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_s_20));
  term_s_20 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_t_20));
  term_t_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_u_20));
  term_u_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_20, term_s_20, term_t_20);
  ATprotect(&(term_v_20));
  term_v_20 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_w_20));
  term_w_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_x_20));
  term_x_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_20, term_i_8, term_w_20);
  ATprotect(&(term_z_20));
  term_z_20 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_a_21));
  term_a_21 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_b_21));
  term_b_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_c_21));
  term_c_21 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_20, term_a_21, term_b_21);
  ATprotect(&(term_d_21));
  term_d_21 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_f_21));
  term_f_21 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_g_21));
  term_g_21 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_h_21));
  term_h_21 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_21, term_f_21, term_g_21);
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
ATerm xtc_transform_1_0 (ATerm k_83 (ATerm), ATerm);
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
ATerm concat_0_0 (ATerm);
ATerm conc_more_lists_0_0 (ATerm);
ATerm at_end_1_0 (ATerm t_69 (ATerm), ATerm);
ATerm conc_two_lists_0_0 (ATerm);
ATerm conc_0_0 (ATerm);
ATerm _2_0 (ATerm m_55 (ATerm), ATerm n_55 (ATerm), ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm debug_1_0 (ATerm w_64 (ATerm), ATerm);
ATerm map_1_0 (ATerm d_69 (ATerm), ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
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
ATerm xtc_io_wrap_2_0 (ATerm a_83 (ATerm), ATerm b_83 (ATerm), ATerm);
ATerm xtc_io_wrap_1_0 (ATerm z_82 (ATerm), ATerm);
ATerm xtc_iowrap_1_0 (ATerm f_83 (ATerm), ATerm);
ATerm astratego2text_0_0 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm xtc_transform_1_0 (ATerm k_83 (ATerm), ATerm t)
{
  ATerm c_0 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = xtc_transform_2_0(k_83, c_0, t);
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm c_1 = NULL;
  c_1 = t;
  t = SSL_table_keys(c_1);
  {
    ATerm n_0 (ATerm t)
    {
      ATerm d_1 = NULL,l_1 = NULL;
      d_1 = t;
      t = SSL_table_get(c_1, d_1);
      l_1 = t;
      t = (ATerm) ATmakeAppl(sym__2, d_1, l_1);
      return(t);
    }
    t = map_1_0(n_0, t);
  }
  return(t);
}
ATerm if_verbose5_1_0 (ATerm v_80 (ATerm), ATerm t)
{
  ATerm o_0 (ATerm t)
  {
    ATerm m_1 = NULL,s_1 = NULL;
    m_1 = t;
    t = term_h_8;
    t = get_config_0_0(t);
    s_1 = t;
    t = (ATerm) ATmakeAppl(sym__2, s_1, term_i_8);
    t = geq_0_0(t);
    t = m_1;
    t = v_80(t);
    return(t);
  }
  t = try_1_0(o_0, t);
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
    ATerm p_0 (ATerm t)
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
    t = fetch_1_0(p_0, t);
    t = not_null(c_2);
  }
  return(t);
}
ATerm filter_1_0 (ATerm w_76 (ATerm), ATerm t)
{
  ATerm j_8 = t;
  int k_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(k_8);
    }
  else
    {
      t = j_8;
      {
        ATerm l_8 = t;
        int m_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_0 (ATerm t)
            {
              t = filter_1_0(w_76, t);
              return(t);
            }
            t = Cons_2_0(w_76, q_0, t);
            ;
            LocalPopChoice(m_8);
          }
        else
          {
            t = l_8;
            {
              ATerm i_2 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm q_8 = ATgetFirst((ATermList) t);
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
    ATerm r_0 (ATerm t)
    {
      t = q_78(t);
      t = k_2(t);
      return(t);
    }
    t = try_1_0(r_0, t);
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
    ATerm s_0 (ATerm t)
    {
      t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Import_0));
      t = filter_1_0(xtc_read_0_0, t);
      {
        ATerm r_8 = t;
        if((PushChoice() == 0))
          {
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = r_8;
          }
      }
      return(t);
    }
    t = repeat_1_0(s_0, t);
    t = l_2;
  }
  return(t);
}
ATerm say_1_0 (ATerm a_65 (ATerm), ATerm t)
{
  ATerm n_2 = NULL,e_0 = NULL;
  n_2 = t;
  t = a_65(t);
  e_0 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, e_0));
  t = n_2;
  return(t);
}
ATerm if_verbose4_1_0 (ATerm u_80 (ATerm), ATerm t)
{
  ATerm t_0 (ATerm t)
  {
    ATerm o_2 = NULL,p_2 = NULL;
    o_2 = t;
    t = term_h_8;
    t = get_config_0_0(t);
    p_2 = t;
    t = (ATerm) ATmakeAppl(sym__2, p_2, term_s_8);
    t = geq_0_0(t);
    t = o_2;
    t = u_80(t);
    return(t);
  }
  t = try_1_0(t_0, t);
  return(t);
}
ATerm if_verbose6_1_0 (ATerm w_80 (ATerm), ATerm t)
{
  ATerm u_0 (ATerm t)
  {
    ATerm q_2 = NULL,t_2 = NULL;
    q_2 = t;
    t = term_h_8;
    t = get_config_0_0(t);
    t_2 = t;
    t = (ATerm) ATmakeAppl(sym__2, t_2, term_u_8);
    t = geq_0_0(t);
    t = q_2;
    t = w_80(t);
    return(t);
  }
  t = try_1_0(u_0, t);
  return(t);
}
ATerm HdMember_p__2_0 (ATerm k_73 (ATerm), ATerm l_73 (ATerm), ATerm t)
{
  ATerm b_3 = NULL,c_3 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_3 = ATgetFirst((ATermList) t);
      c_3 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = l_73(t);
  {
    ATerm v_0 (ATerm t)
    {
      ATerm e_3 = NULL;
      e_3 = t;
      t = (ATerm) ATmakeAppl(sym__2, b_3, e_3);
      t = k_73(t);
      return(t);
    }
    t = fetch_1_0(v_0, t);
    t = c_3;
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
    ATerm h_3 (ATerm t)
    {
      ATerm v_8 = t;
      int y_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = f_3;
          ;
          LocalPopChoice(y_8);
        }
      else
        {
          t = v_8;
          {
            ATerm z_8 = t;
            int a_9 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm w_0 (ATerm t)
                {
                  t = f_3;
                  return(t);
                }
                t = HdMember_p__2_0(g_73, w_0, t);
                t = h_3(t);
                ;
                LocalPopChoice(a_9);
              }
            else
              {
                t = z_8;
                t = Cons_2_0(_id, h_3, t);
              }
          }
        }
      return(t);
    }
    t = h_3(t);
  }
  return(t);
}
ATerm union_0_0 (ATerm t)
{
  ATerm x_0 (ATerm t)
  {
    ATerm i_3 = NULL;
    if(match_cons(t, sym__2))
      {
        i_3 = ATgetArgument(t, 0);
        if((i_3 != ATgetArgument(t, 1)))
          {
            _fail(ATgetArgument(t, 1));
          }
      }
    else
      _fail(t);
    return(t);
  }
  t = union_1_0(x_0, t);
  return(t);
}
ATerm table_append_0_0 (ATerm t)
{
  ATerm n_3 = NULL,o_3 = NULL,p_3 = NULL,q_3 = NULL,t_3 = NULL;
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
    ATerm e_9 = t;
    int f_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm h_9 = ATgetArgument(t, 0);
            ATerm j_9 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(n_3, o_3);
        ;
        LocalPopChoice(f_9);
      }
    else
      {
        t = e_9;
        t = (ATerm) ATempty;
      }
    q_3 = t;
    t = (ATerm) ATmakeAppl(sym__2, q_3, p_3);
    t = union_0_0(t);
    t_3 = t;
    t = SSL_table_put(n_3, o_3, t_3);
    t = (ATerm) ATmakeAppl(sym__3, n_3, o_3, p_3);
  }
  return(t);
}
ATerm table_putlist_1_0 (ATerm f_81 (ATerm), ATerm t)
{
  ATerm v_3 = NULL,w_3 = NULL;
  if(match_cons(t, sym__2))
    {
      w_3 = ATgetArgument(t, 0);
      v_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_3;
  {
    ATerm y_0 (ATerm t)
    {
      ATerm x_3 = NULL,y_3 = NULL;
      if(match_cons(t, sym__2))
        {
          x_3 = ATgetArgument(t, 0);
          y_3 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__3, w_3, x_3, y_3);
      t = f_81(t);
      return(t);
    }
    t = map_1_0(y_0, t);
  }
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm w_9 = t;
  int x_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_1 = NULL;
      b_1 = t;
      t = SSL_access(b_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_R__OK_0)));
      LocalPopChoice(x_9);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = w_9;
      {
        ATerm y_9 = t;
        int a_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_10 = t;
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
                t = e_10;
              }
            {
              ATerm z_0 (ATerm t)
              {
                t = term_f_10;
                return(t);
              }
              t = debug_1_0(z_0, t);
            }
            ;
            LocalPopChoice(a_10);
          }
        else
          {
            t = y_9;
            {
              ATerm a_1 (ATerm t)
              {
                t = term_l_10;
                return(t);
              }
              t = debug_1_0(a_1, t);
            }
          }
        t = (ATerm) ATempty;
      }
    }
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm b_4 = NULL,e_4 = NULL,f_4 = NULL;
  b_4 = t;
  {
    ATerm e_1 (ATerm t)
    {
      ATerm g_1 (ATerm t)
      {
        t = term_n_10;
        return(t);
      }
      t = debug_1_0(g_1, t);
      return(t);
    }
    t = if_verbose5_1_0(e_1, t);
    {
      ATerm p_10 = t;
      if((PushChoice() == 0))
        {
          t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Imported_1, b_4));
          PopChoice();
          _fail(t);
        }
      else
        {
          t = p_10;
        }
      e_4 = t;
      t = SSL_table_put((ATerm)ATmakeAppl(sym_XTC_0), (ATerm)ATmakeAppl(sym_Repository_0), (ATerm) ATinsert(ATempty, b_4));
      t = e_4;
      {
        ATerm h_1 (ATerm t)
        {
          ATerm k_1 (ATerm t)
          {
            t = term_q_10;
            return(t);
          }
          t = debug_1_0(k_1, t);
          return(t);
        }
        t = if_verbose4_1_0(h_1, t);
        t = read_repository_file_0_0(t);
        {
          ATerm n_1 (ATerm t)
          {
            ATerm o_1 (ATerm t)
            {
              t = term_r_10;
              return(t);
            }
            t = say_1_0(o_1, t);
            return(t);
          }
          t = if_verbose6_1_0(n_1, t);
          f_4 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_s_10, f_4);
          t = table_putlist_1_0(table_append_0_0, t);
          {
            ATerm p_1 (ATerm t)
            {
              ATerm q_1 (ATerm t)
              {
                t = term_t_10;
                return(t);
              }
              t = say_1_0(q_1, t);
              return(t);
            }
            t = if_verbose6_1_0(p_1, t);
            t = SSL_table_put((ATerm)ATmakeAppl(sym_XTC_0), (ATerm)ATmakeAppl(sym_Imported_1, b_4), (ATerm) ATempty);
            t = (ATerm) ATmakeAppl(sym__3, term_s_10, (ATerm)ATmakeAppl(sym_Imported_1, b_4), (ATerm) ATempty);
            {
              ATerm r_1 (ATerm t)
              {
                ATerm t_1 (ATerm t)
                {
                  t = term_r_10;
                  return(t);
                }
                t = say_1_0(t_1, t);
                return(t);
              }
              t = if_verbose4_1_0(r_1, t);
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
  int v_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_w_10;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(v_10);
    }
  else
    {
      t = u_10;
      {
        ATerm x_10 = t;
        int y_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_getenv((ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue)));
            ;
            LocalPopChoice(y_10);
          }
        else
          {
            t = x_10;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm g_4 = NULL;
  ATerm u_1 (ATerm t)
  {
    ATerm v_1 (ATerm t)
    {
      t = term_z_10;
      return(t);
    }
    t = debug_1_0(v_1, t);
    return(t);
  }
  t = if_verbose5_1_0(u_1, t);
  g_4 = t;
  {
    ATerm c_11 = t;
    int d_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Repository_0));
        ;
        LocalPopChoice(d_11);
      }
    else
      {
        t = c_11;
        t = xtc_location_0_0(t);
        t = xtc_read_0_0(t);
        t = xtc_import_0_0(t);
      }
    t = g_4;
    {
      ATerm w_1 (ATerm t)
      {
        ATerm y_1 (ATerm t)
        {
          t = term_f_11;
          return(t);
        }
        t = debug_1_0(y_1, t);
        return(t);
      }
      t = if_verbose5_1_0(w_1, t);
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
      ATerm z_1 (ATerm t)
      {
        ATerm a_2 (ATerm t)
        {
          t = term_l_11;
          return(t);
        }
        t = debug_1_0(a_2, t);
        return(t);
      }
      t = if_verbose5_1_0(z_1, t);
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
              ATerm i_1 = NULL,j_1 = NULL;
              i_1 = t;
              t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Tool_1, i_1));
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm o_11 = ATgetFirst((ATermList) t);
                  if(match_cons(o_11, sym__2))
                    {
                      ATerm q_11 = ATgetArgument(o_11, 0);
                      j_1 = ATgetArgument(o_11, 1);
                    }
                  else
                    _fail(t);
                  {
                    ATerm p_11 = (ATerm) ATgetNext((ATermList) t);
                  }
                }
              else
                _fail(t);
              t = j_1;
            }
          }
        {
          ATerm f_2 (ATerm t)
          {
            ATerm g_2 (ATerm t)
            {
              t = term_l_11;
              return(t);
            }
            t = debug_1_0(g_2, t);
            return(t);
          }
          t = if_verbose5_1_0(f_2, t);
        }
      }
      ;
      LocalPopChoice(k_11);
    }
  else
    {
      t = j_11;
      {
        ATerm i_4 = NULL;
        i_4 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue))), i_4), (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue))));
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_s_11), i_4), term_r_11);
        {
          ATerm h_2 (ATerm t)
          {
            t = term_s_10;
            t = table_getlist_0_0(t);
            {
              ATerm j_2 (ATerm t)
              {
                t = term_t_11;
                return(t);
              }
              t = debug_1_0(j_2, t);
            }
            return(t);
          }
          t = if_verbose5_1_0(h_2, t);
          _fail(t);
        }
      }
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm k_4 = NULL,l_4 = NULL,n_4 = NULL;
  ATerm u_11 = t;
  int v_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_4 = NULL;
      o_4 = t;
      t = (ATerm) ATmakeAppl(sym__2, o_4, term_w_11);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(v_11);
    }
  else
    {
      t = u_11;
      {
        ATerm m_2 (ATerm t)
        {
          t = term_x_11;
          return(t);
        }
        t = debug_1_0(m_2, t);
        _fail(t);
      }
    }
  k_4 = t;
  if(match_cons(t, sym_Stream_1))
    {
      n_4 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(n_4);
  l_4 = t;
  t = k_4;
  t = fclose_0_0(t);
  t = l_4;
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm r_4 = NULL,s_4 = NULL;
  r_4 = t;
  if(match_cons(t, sym_stdin_0))
    {
      t = r_4;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_FILE_1))
        {
          s_4 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSL_access(s_4, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_F__OK_0)));
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm a_6 (ATerm o_5, ATerm t)
  {
    t = SSL_fclose(o_5);
    return(t);
  }
  ATerm t_5 = NULL,w_5 = NULL;
  w_5 = t;
  if(match_cons(t, sym_Stream_1))
    {
      t_5 = ATgetArgument(t, 0);
      {
        ATerm a_12 = t;
        int b_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(t_5);
            ;
            LocalPopChoice(b_12);
          }
        else
          {
            t = a_12;
            t = a_6(w_5, t);
          }
      }
    }
  else
    {
      t = a_6(w_5, t);
    }
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm b_6 = NULL;
  t = SSL_stdin_stream();
  b_6 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, b_6);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm f_6 = NULL;
  t = SSL_stdout_stream();
  f_6 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_6);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm g_6 = NULL;
  t = SSL_stderr_stream();
  g_6 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, g_6);
  return(t);
}
ATerm stdio_stream_0_0 (ATerm t)
{
  ATerm y_6 = NULL;
  y_6 = t;
  if(match_cons(t, sym_stderr_0))
    {
      t = y_6;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = y_6;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = y_6;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm c_12 = ATgetArgument(t, 0);
      ATerm d_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm e_12 = t;
    int i_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_2 = NULL,e_2 = NULL;
        d_2 = t;
        t = SSL_explode_term(d_2);
        if(match_cons(t, sym__2))
          {
            ATerm j_12 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) j_12) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm k_12 = ATgetArgument(t, 1);
              if(((ATgetType(k_12) == AT_LIST) && !(ATisEmpty(k_12))))
                {
                  e_2 = ATgetFirst((ATermList) k_12);
                  {
                    ATerm l_12 = (ATerm) ATgetNext((ATermList) k_12);
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
        LocalPopChoice(i_12);
      }
    else
      {
        t = e_12;
        {
          ATerm m_12 = t;
          int r_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm b_7 = NULL,c_7 = NULL,d_7 = NULL;
              ATerm r_2 (ATerm t)
              {
                ATerm e_7 = NULL;
                if(match_cons(t, sym_Path_1))
                  {
                    e_7 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = e_7;
                return(t);
              }
              t = _2_0(r_2, _id, t);
              if(match_cons(t, sym__2))
                {
                  b_7 = ATgetArgument(t, 0);
                  c_7 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_fopen(b_7, c_7);
              d_7 = t;
              t = (ATerm) ATmakeAppl(sym_Stream_1, d_7);
              ;
              LocalPopChoice(r_12);
            }
          else
            {
              t = m_12;
              {
                ATerm f_7 = NULL,g_7 = NULL,h_7 = NULL;
                ATerm s_2 (ATerm t)
                {
                  ATerm i_7 = NULL;
                  i_7 = t;
                  t = SSL_is_string(i_7);
                  return(t);
                }
                t = _2_0(s_2, _id, t);
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
              }
            }
        }
      }
  }
  return(t);
}
ATerm WriteToFile_1_0 (ATerm k_65 (ATerm), ATerm t)
{
  ATerm j_7 = NULL,k_7 = NULL,l_7 = NULL;
  if(match_cons(t, sym__2))
    {
      j_7 = ATgetArgument(t, 0);
      k_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, j_7, term_t_12);
  t = open_stream_0_0(t);
  l_7 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_7, k_7);
  t = k_65(t);
  t = fclose_0_0(t);
  t = k_7;
  return(t);
}
ATerm WriteToBinaryFile_0_0 (ATerm t)
{
  ATerm v_2 (ATerm t)
  {
    ATerm m_7 = NULL,n_7 = NULL,o_7 = NULL;
    if(match_cons(t, sym__2))
      {
        ATerm u_12 = ATgetArgument(t, 0);
        if(match_cons(u_12, sym_Stream_1))
          {
            m_7 = ATgetArgument(u_12, 0);
          }
        else
          _fail(t);
        n_7 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSL_write_term_to_stream_baf(m_7, n_7);
    o_7 = t;
    t = (ATerm) ATmakeAppl(sym_Stream_1, o_7);
    return(t);
  }
  t = WriteToFile_1_0(v_2, t);
  return(t);
}
ATerm write_to_0_0 (ATerm t)
{
  ATerm p_7 = NULL,q_7 = NULL;
  p_7 = t;
  t = xtc_new_file_0_0(t);
  q_7 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_7, p_7);
  t = WriteToBinaryFile_0_0(t);
  t = SSL_close_file(q_7);
  t = (ATerm) ATmakeAppl(sym_FILE_1, q_7);
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
  ATerm r_7 = NULL;
  ATerm w_2 (ATerm t)
  {
    ATerm s_7 = NULL;
    s_7 = t;
    t = SSL_explode_string(s_7);
    return(t);
  }
  t = map_1_0(w_2, t);
  t = concat_0_0(t);
  r_7 = t;
  t = SSL_implode_string(r_7);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm n_8 = NULL,o_8 = NULL,p_8 = NULL,t_8 = NULL;
  n_8 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      o_8 = ATgetArgument(t, 0);
      {
        ATerm u_2 = NULL;
        t = SSL_int_to_string(o_8);
        u_2 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_z_12), u_2), term_y_12);
        t = concat_strings_0_0(t);
      }
    }
  else
    {
      ATerm u_3 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          o_8 = ATgetArgument(t, 0);
          p_8 = ATgetArgument(t, 1);
          t_8 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(p_8);
      u_3 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, t_8), term_b_13), u_3), term_a_13), o_8);
      t = concat_strings_0_0(t);
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm p_69 (ATerm), ATerm t)
{
  ATerm w_8 = NULL;
  ATerm x_2 (ATerm t)
  {
    t = p_69(t);
    w_8 = t;
    return(t);
  }
  t = fetch_1_0(x_2, t);
  t = not_null(w_8);
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm x_8 = NULL;
  x_8 = t;
  {
    ATerm g_13 = t;
    int k_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_l_21), term_h_21), term_c_21), term_x_20), term_u_20), term_n_20), term_h_20), term_b_20), term_q_19), term_h_19), term_z_18), term_r_18), term_k_18), term_f_18), term_v_17), term_g_17), term_a_17), term_x_16), term_q_16), term_b_16), term_v_15), term_n_15), term_g_15), term_c_15), term_s_14), term_n_14), term_d_14), term_u_13);
        {
          ATerm y_2 (ATerm t)
          {
            if(match_cons(t, sym_Signal_3))
              {
                ATerm m_21 = ATgetArgument(t, 0);
                if((x_8 != ATgetArgument(t, 1)))
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
          t = fetch_elem_1_0(y_2, t);
        }
        ;
        LocalPopChoice(k_13);
      }
    else
      {
        t = g_13;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, x_8);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm b_9 = NULL;
  b_9 = t;
  {
    ATerm z_2 (ATerm t)
    {
      ATerm c_9 = NULL,d_9 = NULL;
      if(match_cons(t, sym_WaitStatus_3))
        {
          ATerm o_21 = ATgetArgument(t, 0);
          c_9 = ATgetArgument(t, 1);
          {
            ATerm p_21 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = c_9;
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
        d_9 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, d_9), (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue))));
        t = (ATerm) ATmakeAppl(sym__2, term_r_21, (ATerm) ATinsert(ATinsert(ATempty, d_9), term_s_21));
      }
      return(t);
    }
    t = try_1_0(z_2, t);
    t = b_9;
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
  ATerm g_9 = NULL,i_9 = NULL;
  g_9 = t;
  t = fork_0_0(t);
  i_9 = t;
  {
    ATerm t_21 = t;
    int u_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = g_9;
        t = x_63(t);
        ;
        LocalPopChoice(u_21);
      }
    else
      {
        t = t_21;
        t = (ATerm) ATmakeAppl(sym__2, i_9, g_9);
        t = y_63(t);
      }
  }
  return(t);
}
ATerm fork_and_wait_1_0 (ATerm z_63 (ATerm), ATerm t)
{
  ATerm k_9 = NULL;
  ATerm a_3 (ATerm t)
  {
    ATerm l_9 = NULL;
    if(match_cons(t, sym__2))
      {
        l_9 = ATgetArgument(t, 0);
        k_9 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSL_waitpid(l_9);
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
    t = k_9;
    return(t);
  }
  t = fork_2_0(z_63, a_3, t);
  return(t);
}
ATerm call_0_0 (ATerm t)
{
  ATerm m_9 = NULL,n_9 = NULL;
  if(match_cons(t, sym__2))
    {
      m_9 = ATgetArgument(t, 0);
      n_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm d_3 (ATerm t)
    {
      t = SSL_execvp(m_9, n_9);
      return(t);
    }
    t = fork_and_wait_1_0(d_3, t);
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
  ATerm o_9 = NULL,p_9 = NULL;
  o_9 = t;
  t = j_83(t);
  t = xtc_find_warning_0_0(t);
  p_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_9, o_9);
  t = call_0_0(t);
  t = o_9;
  return(t);
}
ATerm assert_1_0 (ATerm u_79 (ATerm), ATerm t)
{
  ATerm q_9 = NULL,r_9 = NULL,s_9 = NULL,t_9 = NULL,u_9 = NULL;
  if(match_cons(t, sym__2))
    {
      q_9 = ATgetArgument(t, 0);
      r_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_79(t);
  s_9 = t;
  t = (ATerm) ATmakeAppl(sym__3, s_9, q_9, r_9);
  t = table_push_0_0(t);
  {
    ATerm y_21 = t;
    int z_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get(s_9, (ATerm) ATmakeAppl(sym_Scopes_0));
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
        t_9 = ATgetFirst((ATermList) t);
        u_9 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSL_table_put(s_9, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATinsert(CheckATermList(u_9), (ATerm) ATinsert(CheckATermList(t_9), q_9)));
    t = (ATerm) ATmakeAppl(sym__2, q_9, r_9);
  }
  return(t);
}
ATerm obsolete_1_0 (ATerm d_65 (ATerm), ATerm t)
{
  ATerm v_9 = NULL;
  v_9 = t;
  t = d_65(t);
  {
    ATerm j_3 (ATerm t)
    {
      t = term_a_22;
      return(t);
    }
    t = debug_1_0(j_3, t);
    t = v_9;
  }
  return(t);
}
ATerm open_file_0_0 (ATerm t)
{
  ATerm j_10 (ATerm z_9, ATerm t)
  {
    t = z_9;
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
        ATerm k_3 (ATerm t)
        {
          t = term_e_22;
          return(t);
        }
        t = obsolete_1_0(k_3, t);
        t = (ATerm) ATmakeAppl(sym__2, z_9, term_t_12);
        t = open_file_0_0(t);
      }
    }
    return(t);
  }
  ATerm k_10 (ATerm b_10, ATerm c_10, ATerm d_10, ATerm t)
  {
    t = SSL_open_file(b_10, c_10);
    return(t);
  }
  ATerm g_10 = NULL,h_10 = NULL,i_10 = NULL;
  g_10 = t;
  if(match_cons(t, sym__2))
    {
      h_10 = ATgetArgument(t, 0);
      i_10 = ATgetArgument(t, 1);
      {
        ATerm f_22 = t;
        int g_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = j_10(g_10, t);
            ;
            LocalPopChoice(g_22);
          }
        else
          {
            t = f_22;
            t = k_10(h_10, i_10, g_10, t);
          }
      }
    }
  else
    {
      t = j_10(g_10, t);
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
  ATerm m_10 = NULL;
  t = term_h_22;
  t = new_0_0(t);
  m_10 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_10, term_i_22);
  t = conc_strings_0_0(t);
  {
    ATerm l_3 (ATerm t)
    {
      ATerm c_4 = NULL;
      c_4 = t;
      t = SSL_access(c_4, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_F__OK_0)));
      t = new_file_0_0(t);
      return(t);
    }
    t = try_1_0(l_3, t);
  }
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm o_10 = NULL;
  t = new_file_0_0(t);
  o_10 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_10, term_t_12);
  t = open_file_0_0(t);
  t = (ATerm) ATmakeAppl(sym__2, o_10, term_h_22);
  {
    ATerm m_3 (ATerm t)
    {
      t = term_j_22;
      return(t);
    }
    t = assert_1_0(m_3, t);
    t = o_10;
  }
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm t)
{
  ATerm a_11 = NULL,b_11 = NULL;
  a_11 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm h_4 = NULL,m_4 = NULL;
      t = a_11;
      t = xtc_new_file_0_0(t);
      h_4 = t;
      t = m_0(t);
      m_4 = t;
      t = (ATerm) ATmakeAppl(sym__2, m_4, (ATerm) ATinsert(ATinsert(ATempty, h_4), term_k_22));
      t = conc_0_0(t);
      t = xtc_command_1_0(l_0, t);
      t = SSL_close_file(h_4);
      t = (ATerm) ATmakeAppl(sym_FILE_1, h_4);
    }
  else
    {
      ATerm w_4 = NULL,x_4 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          b_11 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = b_11;
      t = xtc_new_file_0_0(t);
      w_4 = t;
      t = m_0(t);
      x_4 = t;
      t = (ATerm) ATmakeAppl(sym__2, x_4, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, w_4), term_k_22), b_11), term_l_22));
      t = conc_0_0(t);
      t = xtc_command_1_0(l_0, t);
      t = SSL_close_file(w_4);
      t = (ATerm) ATmakeAppl(sym_FILE_1, w_4);
    }
  return(t);
}
ATerm FILE_1_0 (ATerm u_61 (ATerm), ATerm t)
{
  ATerm e_11 = NULL,g_11 = NULL,h_11 = NULL,i_11 = NULL;
  i_11 = t;
  if(match_cons(t, sym_FILE_1))
    {
      g_11 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_11);
  e_11 = t;
  t = g_11;
  t = u_61(t);
  h_11 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FILE_1, h_11), e_11);
  return(t);
}
ATerm xtc_transform_2_0 (ATerm l_83 (ATerm), ATerm m_83 (ATerm), ATerm t)
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
      t = xtc_transform_file_2_0(l_83, m_83, t);
    }
  else
    {
      t = m_22;
      t = xtc_transform_term_2_0(l_83, m_83, t);
    }
  return(t);
}
ATerm copy_to_1_0 (ATerm k_0 (ATerm), ATerm t)
{
  ATerm y_11 = NULL,z_11 = NULL;
  y_11 = t;
  if(match_cons(t, sym_FILE_1))
    {
      z_11 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm q_22 = t;
    int r_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_5 = NULL;
        t = y_11;
        t = k_0(t);
        b_5 = t;
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
          t = SSL_copy(z_11, b_5);
          t = (ATerm) ATmakeAppl(sym_FILE_1, z_11);
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
              ATerm g_5 = NULL;
              t = y_11;
              t = k_0(t);
              g_5 = t;
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
                                ATerm h_5 = NULL;
                                h_5 = t;
                                if((z_11 != t))
                                  {
                                    _fail(t);
                                  }
                                t = h_5;
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
                t = SSL_copy(z_11, g_5);
                t = (ATerm) ATmakeAppl(sym_FILE_1, z_11);
              }
              ;
              LocalPopChoice(v_22);
            }
          else
            {
              t = u_22;
              t = y_11;
              t = k_0(t);
              if((z_11 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, z_11);
            }
        }
      }
  }
  return(t);
}
ATerm table_pop_0_0 (ATerm t)
{
  ATerm f_12 = NULL,g_12 = NULL,h_12 = NULL;
  if(match_cons(t, sym__2))
    {
      f_12 = ATgetArgument(t, 0);
      g_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm b_23 = t;
    int c_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_5 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm d_23 = ATgetArgument(t, 0);
            ATerm e_23 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(f_12, g_12);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm f_23 = ATgetFirst((ATermList) t);
            l_5 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = l_5;
        ;
        LocalPopChoice(c_23);
      }
    else
      {
        t = b_23;
        t = (ATerm) ATempty;
      }
    h_12 = t;
    t = SSL_table_put(f_12, g_12, h_12);
    t = (ATerm) ATmakeAppl(sym__2, f_12, g_12);
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm r_79 (ATerm), ATerm t)
{
  ATerm n_12 = NULL,o_12 = NULL,p_12 = NULL,q_12 = NULL;
  n_12 = t;
  t = r_79(t);
  o_12 = t;
  {
    ATerm g_23 = t;
    int h_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get(o_12, (ATerm) ATmakeAppl(sym_Scopes_0));
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
        q_12 = ATgetFirst((ATermList) t);
        p_12 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSL_table_put(o_12, (ATerm)ATmakeAppl(sym_Scopes_0), p_12);
    t = q_12;
    {
      ATerm r_3 (ATerm t)
      {
        ATerm s_12 = NULL;
        s_12 = t;
        t = (ATerm) ATmakeAppl(sym__2, o_12, s_12);
        t = table_pop_0_0(t);
        return(t);
      }
      t = map_1_0(r_3, t);
      t = n_12;
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm m_80 (ATerm), ATerm n_80 (ATerm), ATerm t)
{
  ATerm i_23 = t;
  int j_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = m_80(t);
      t = n_80(t);
      ;
      LocalPopChoice(j_23);
    }
  else
    {
      t = i_23;
      t = n_80(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm q_79 (ATerm), ATerm t)
{
  ATerm v_12 = NULL,w_12 = NULL,x_12 = NULL;
  v_12 = t;
  t = q_79(t);
  w_12 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_12, term_k_23);
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
        t = SSL_table_get(w_12, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(m_23);
      }
    else
      {
        t = l_23;
        t = (ATerm) ATempty;
      }
    x_12 = t;
    t = SSL_table_put(w_12, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATinsert(CheckATermList(x_12), (ATerm) ATempty));
    t = v_12;
  }
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm v_82 (ATerm), ATerm t)
{
  ATerm c_13 = NULL;
  ATerm s_3 (ATerm t)
  {
    t = term_j_22;
    return(t);
  }
  t = begin_scope_1_0(s_3, t);
  {
    ATerm z_3 (ATerm t)
    {
      ATerm d_13 = NULL;
      d_13 = t;
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
            c_13 = ATgetFirst((ATermList) t);
            {
              ATerm r_23 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        t = c_13;
        {
          ATerm a_4 (ATerm t)
          {
            ATerm d_4 (ATerm t)
            {
              ATerm e_13 = NULL;
              e_13 = t;
              t = SSL_remove(e_13);
              return(t);
            }
            t = try_1_0(d_4, t);
            return(t);
          }
          t = map_1_0(a_4, t);
          t = d_13;
          {
            ATerm j_4 (ATerm t)
            {
              t = term_j_22;
              return(t);
            }
            t = end_scope_1_0(j_4, t);
          }
        }
      }
      return(t);
    }
    t = restore_always_2_0(v_82, z_3, t);
  }
  return(t);
}
ATerm xtc_io_1_0 (ATerm w_82 (ATerm), ATerm t)
{
  ATerm p_4 (ATerm t)
  {
    ATerm s_23 = t;
    int t_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_13 = NULL;
        t = term_l_22;
        t = get_config_0_0(t);
        f_13 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, f_13);
        ;
        LocalPopChoice(t_23);
      }
    else
      {
        t = s_23;
        t = term_u_23;
      }
    t = w_82(t);
    {
      ATerm q_4 (ATerm t)
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
      t = copy_to_1_0(q_4, t);
    }
    return(t);
  }
  t = xtc_temp_files_1_0(p_4, t);
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  ATerm t_4 (ATerm t)
  {
    ATerm h_13 = NULL;
    h_13 = t;
    if(match_string(t, "-k"))
      {
        t = h_13;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
          _fail(t);
        t = h_13;
      }
    return(t);
  }
  ATerm u_4 (ATerm t)
  {
    ATerm i_13 = NULL,j_13 = NULL;
    i_13 = t;
    t = SSL_string_to_int(i_13);
    j_13 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)), j_13);
    t = i_13;
    return(t);
  }
  ATerm v_4 (ATerm t)
  {
    t = term_y_23;
    return(t);
  }
  t = ArgOption_3_0(t_4, u_4, v_4, t);
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm z_23 = t;
  int a_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_4 (ATerm t)
      {
        ATerm l_13 = NULL;
        l_13 = t;
        if(match_string(t, "-S"))
          {
            t = l_13;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
              _fail(t);
            t = l_13;
          }
        return(t);
      }
      ATerm z_4 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), (ATerm) ATmakeInt(0));
        t = term_c_24;
        return(t);
      }
      ATerm a_5 (ATerm t)
      {
        t = term_d_24;
        return(t);
      }
      t = Option_3_0(y_4, z_4, a_5, t);
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
              ATerm m_13 = NULL,n_13 = NULL;
              m_13 = t;
              t = SSL_string_to_int(m_13);
              n_13 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), n_13);
              t = (ATerm) ATmakeAppl(sym_Verbose_1, m_13);
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
              ATerm f_5 (ATerm t)
              {
                if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
                  _fail(t);
                return(t);
              }
              ATerm i_5 (ATerm t)
              {
                t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                t = term_h_24;
                return(t);
              }
              ATerm j_5 (ATerm t)
              {
                t = term_i_24;
                return(t);
              }
              t = Option_3_0(f_5, i_5, j_5, t);
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
  ATerm k_5 (ATerm t)
  {
    ATerm s_13 = NULL;
    s_13 = t;
    if(match_string(t, "-o"))
      {
        t = s_13;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
          _fail(t);
        t = s_13;
      }
    return(t);
  }
  ATerm m_5 (ATerm t)
  {
    ATerm t_13 = NULL;
    t_13 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), t_13);
    t = (ATerm) ATmakeAppl(sym_Output_1, t_13);
    return(t);
  }
  ATerm n_5 (ATerm t)
  {
    t = term_l_24;
    return(t);
  }
  t = ArgOption_3_0(k_5, m_5, n_5, t);
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
        ATerm p_5 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm q_5 (ATerm t)
        {
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = term_o_24;
          return(t);
        }
        ATerm r_5 (ATerm t)
        {
          t = term_p_24;
          return(t);
        }
        t = Option_3_0(p_5, q_5, r_5, t);
      }
    }
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm y_13 = NULL,z_13 = NULL,a_14 = NULL,b_14 = NULL,c_14 = NULL;
  y_13 = t;
  if(match_string(t, "register-usage-info"))
    {
      t = y_13;
      t = register_usage_1_0(j_0, t);
    }
  else
    {
      ATerm g_14 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          z_13 = ATgetFirst((ATermList) t);
          a_14 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = a_14;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          b_14 = ATgetFirst((ATermList) t);
          c_14 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = z_13;
      t = h_0(t);
      t = b_14;
      t = i_0(t);
      g_14 = t;
      t = (ATerm) ATinsert(CheckATermList(c_14), g_14);
    }
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  ATerm s_5 (ATerm t)
  {
    ATerm i_14 = NULL;
    i_14 = t;
    if(match_string(t, "-i"))
      {
        t = i_14;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
          _fail(t);
        t = i_14;
      }
    return(t);
  }
  ATerm u_5 (ATerm t)
  {
    ATerm j_14 = NULL;
    j_14 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), j_14);
    t = (ATerm) ATmakeAppl(sym_Input_1, j_14);
    return(t);
  }
  ATerm v_5 (ATerm t)
  {
    t = term_q_24;
    return(t);
  }
  t = ArgOption_3_0(s_5, u_5, v_5, t);
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
  ATerm k_14 = NULL,l_14 = NULL;
  k_14 = t;
  t = term_h_22;
  t = whoami_0_0(t);
  l_14 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue))), l_14), (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue))));
  t = SSL_exit((ATerm) ATmakeInt(1));
  t = k_14;
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm m_14 = NULL;
  t = report_run_time_0_0(t);
  t = term_h_22;
  t = whoami_0_0(t);
  m_14 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue))), m_14));
  t = SSL_exit((ATerm) ATmakeInt(1));
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_v_24;
  t = get_config_0_0(t);
  return(t);
}
ATerm foldr_2_0 (ATerm t_75 (ATerm), ATerm u_75 (ATerm), ATerm t)
{
  ATerm w_24 = t;
  int x_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = t_75(t);
      ;
      LocalPopChoice(x_24);
    }
  else
    {
      t = w_24;
      {
        ATerm p_14 = NULL,q_14 = NULL,t_14 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            p_14 = ATgetFirst((ATermList) t);
            q_14 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = q_14;
        t = foldr_2_0(t_75, u_75, t);
        t_14 = t;
        t = (ATerm) ATmakeAppl(sym__2, p_14, t_14);
        t = u_75(t);
      }
    }
  return(t);
}
ATerm crush_2_0 (ATerm r_73 (ATerm), ATerm s_73 (ATerm), ATerm t)
{
  ATerm u_14 = NULL,v_14 = NULL;
  u_14 = t;
  t = SSL_explode_term(u_14);
  if(match_cons(t, sym__2))
    {
      ATerm y_24 = ATgetArgument(t, 0);
      v_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_14;
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
  ATerm w_14 = NULL;
  t = times_0_0(t);
  {
    ATerm x_5 (ATerm t)
    {
      t = term_b_24;
      return(t);
    }
    ATerm y_5 (ATerm t)
    {
      ATerm x_14 = NULL,y_14 = NULL;
      if(match_cons(t, sym__2))
        {
          x_14 = ATgetArgument(t, 0);
          y_14 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm z_24 = t;
        int a_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(x_14, y_14);
            ;
            LocalPopChoice(a_25);
          }
        else
          {
            t = z_24;
            t = SSL_addr(x_14, y_14);
          }
      }
      return(t);
    }
    t = crush_2_0(x_5, y_5, t);
    w_14 = t;
    t = SSL_TicksToSeconds(w_14);
  }
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm k_15 = NULL,l_15 = NULL,m_15 = NULL;
  k_15 = t;
  if(match_cons(t, sym__2))
    {
      l_15 = ATgetArgument(t, 0);
      m_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm b_25 = t;
    int c_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_15;
        if((l_15 != t))
          {
            _fail(t);
          }
        t = k_15;
        ;
        LocalPopChoice(c_25);
      }
    else
      {
        t = b_25;
        t = k_15;
        {
          ATerm d_25 = t;
          int e_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(l_15, m_15);
              ;
              LocalPopChoice(e_25);
            }
          else
            {
              t = d_25;
              t = SSL_gtr(l_15, m_15);
            }
          t = (ATerm) ATmakeAppl(sym__2, l_15, m_15);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm r_80 (ATerm), ATerm t)
{
  ATerm z_5 (ATerm t)
  {
    ATerm q_15 = NULL,r_15 = NULL;
    q_15 = t;
    t = term_h_8;
    t = get_config_0_0(t);
    r_15 = t;
    t = (ATerm) ATmakeAppl(sym__2, r_15, term_p_13);
    t = geq_0_0(t);
    t = q_15;
    t = r_80(t);
    return(t);
  }
  t = try_1_0(z_5, t);
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  ATerm c_6 (ATerm t)
  {
    ATerm t_15 = NULL,u_15 = NULL;
    t = run_time_0_0(t);
    t_15 = t;
    t = term_h_22;
    t = whoami_0_0(t);
    u_15 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue))), t_15), (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue))), u_15));
    t = (ATerm) ATmakeAppl(sym__2, term_r_21, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_f_25), t_15), term_a_13), u_15));
    return(t);
  }
  t = if_verbose1_1_0(c_6, t);
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
        ATerm d_6 (ATerm t)
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
        t = option_defined_1_0(d_6, t);
      }
    }
  t = x_84(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm x_15 = NULL,y_15 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_15 = ATgetFirst((ATermList) t);
      y_15 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm c_16 = NULL,d_16 = NULL;
        t = y_15;
        t = g_0(t);
        c_16 = t;
        t = x_15;
        t = f_0(t);
        d_16 = t;
        t = y_15;
        {
          ATerm e_6 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(c_16), d_16);
            return(t);
          }
          t = reverse_acc_2_0(f_0, e_6, t);
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
  ATerm h_6 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2_0(_id, h_6, t);
  return(t);
}
ATerm Program_1_0 (ATerm b_62 (ATerm), ATerm t)
{
  ATerm e_16 = NULL,f_16 = NULL,g_16 = NULL,h_16 = NULL;
  h_16 = t;
  if(match_cons(t, sym_Program_1))
    {
      f_16 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_16);
  e_16 = t;
  t = f_16;
  t = b_62(t);
  g_16 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, g_16), e_16);
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
        ATerm i_6 (ATerm t)
        {
          t = Program_1_0(_id, t);
          return(t);
        }
        t = option_defined_1_0(i_6, t);
      }
    }
  t = try_1_0(_fail, t);
  t = term_p_25;
  t = echo_0_0(t);
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)));
  t = reverse_0_0(t);
  {
    ATerm j_6 (ATerm t)
    {
      ATerm l_16 = NULL;
      l_16 = t;
      t = (ATerm) ATinsert(ATinsert(ATempty, l_16), term_q_25);
      t = echo_0_0(t);
      return(t);
    }
    t = map_1_0(j_6, t);
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
  ATerm m_16 = NULL,n_16 = NULL,o_16 = NULL,p_16 = NULL;
  p_16 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      n_16 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_16);
  m_16 = t;
  t = n_16;
  t = c_62(t);
  o_16 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, o_16), m_16);
  return(t);
}
ATerm fetch_1_0 (ATerm n_69 (ATerm), ATerm t)
{
  ATerm t_16 (ATerm t)
  {
    ATerm r_25 = t;
    int s_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(n_69, _id, t);
        ;
        LocalPopChoice(s_25);
      }
    else
      {
        t = r_25;
        t = Cons_2_0(_id, t_16, t);
      }
    return(t);
  }
  t = t_16(t);
  return(t);
}
ATerm option_defined_1_0 (ATerm s_85 (ATerm), ATerm t)
{
  t = fetch_1_0(s_85, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm v_16 = NULL,w_16 = NULL;
  v_16 = t;
  {
    ATerm t_25 = t;
    int u_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = v_16;
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
            t = v_16;
          }
        ;
        LocalPopChoice(u_25);
      }
    else
      {
        t = t_25;
        t = (ATerm) ATinsert(ATempty, v_16);
      }
    w_16 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stdout_0), w_16);
    t = v_16;
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
        ATerm e_17 = NULL,f_17 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            e_17 = ATgetFirst((ATermList) t);
            f_17 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = e_17;
        {
          ATerm k_6 (ATerm t)
          {
            t = f_17;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(k_6, t);
        }
      }
    }
  return(t);
}
ATerm conc_more_lists_0_0 (ATerm t)
{
  ATerm j_17 = NULL,k_17 = NULL;
  j_17 = t;
  t = SSL_explode_term(j_17);
  if(match_cons(t, sym__2))
    {
      ATerm z_25 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) z_25) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      k_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_17;
  t = concat_0_0(t);
  return(t);
}
ATerm at_end_1_0 (ATerm t_69 (ATerm), ATerm t)
{
  ATerm l_17 (ATerm t)
  {
    ATerm a_26 = t;
    int b_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, l_17, t);
        ;
        LocalPopChoice(b_26);
      }
    else
      {
        t = a_26;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = t_69(t);
      }
    return(t);
  }
  t = l_17(t);
  return(t);
}
ATerm conc_two_lists_0_0 (ATerm t)
{
  ATerm m_17 = NULL,n_17 = NULL;
  if(match_cons(t, sym__2))
    {
      n_17 = ATgetArgument(t, 0);
      m_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_17;
  {
    ATerm l_6 (ATerm t)
    {
      t = m_17;
      return(t);
    }
    t = at_end_1_0(l_6, t);
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
ATerm _2_0 (ATerm m_55 (ATerm), ATerm n_55 (ATerm), ATerm t)
{
  ATerm o_17 = NULL,p_17 = NULL,q_17 = NULL,r_17 = NULL,s_17 = NULL,t_17 = NULL;
  t_17 = t;
  if(match_cons(t, sym__2))
    {
      p_17 = ATgetArgument(t, 0);
      q_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_17);
  o_17 = t;
  t = p_17;
  t = m_55(t);
  r_17 = t;
  t = q_17;
  t = n_55(t);
  s_17 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, r_17, s_17), o_17);
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  ATerm x_17 = NULL;
  ATerm m_6 (ATerm t)
  {
    ATerm y_17 = NULL;
    y_17 = t;
    t = SSL_explode_string(y_17);
    return(t);
  }
  ATerm n_6 (ATerm t)
  {
    ATerm z_17 = NULL;
    z_17 = t;
    t = SSL_explode_string(z_17);
    return(t);
  }
  t = _2_0(m_6, n_6, t);
  t = conc_0_0(t);
  x_17 = t;
  t = SSL_implode_string(x_17);
  return(t);
}
ATerm debug_1_0 (ATerm w_64 (ATerm), ATerm t)
{
  ATerm a_18 = NULL,b_18 = NULL;
  a_18 = t;
  t = w_64(t);
  b_18 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, a_18), b_18));
  t = a_18;
  return(t);
}
ATerm map_1_0 (ATerm d_69 (ATerm), ATerm t)
{
  ATerm c_18 (ATerm t)
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
        t = Cons_2_0(d_69, c_18, t);
      }
    return(t);
  }
  t = c_18(t);
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm g_26 = t;
  int h_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_18 = NULL;
      i_18 = t;
      t = SSL_is_string(i_18);
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
            ATerm o_6 (ATerm t)
            {
              t = try_1_0(eval_config_0_0, t);
              return(t);
            }
            t = map_1_0(o_6, t);
            ;
            LocalPopChoice(j_26);
          }
        else
          {
            t = i_26;
            {
              ATerm m_18 = NULL,n_18 = NULL,o_18 = NULL;
              m_18 = t;
              if(match_cons(t, sym_Path_1))
                {
                  n_18 = ATgetArgument(t, 0);
                  t = n_18;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      n_18 = ATgetArgument(t, 0);
                      t = n_18;
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
                              ATerm p_6 (ATerm t)
                              {
                                t = term_m_26;
                                return(t);
                              }
                              t = debug_1_0(p_6, t);
                              _fail(t);
                            }
                          }
                      }
                    }
                  else
                    {
                      ATerm s_18 = NULL,t_18 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          n_18 = ATgetArgument(t, 0);
                          o_18 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = n_18;
                      t = eval_config_0_0(t);
                      s_18 = t;
                      t = o_18;
                      t = eval_config_0_0(t);
                      t_18 = t;
                      t = (ATerm) ATmakeAppl(sym__2, s_18, t_18);
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
  ATerm w_18 = NULL;
  w_18 = t;
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), w_18);
  {
    ATerm q_6 (ATerm t)
    {
      ATerm x_18 = NULL;
      t = eval_config_0_0(t);
      x_18 = t;
      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), w_18, x_18);
      t = x_18;
      return(t);
    }
    t = try_1_0(q_6, t);
  }
  return(t);
}
ATerm try_1_0 (ATerm x_79 (ATerm), ATerm t)
{
  ATerm n_26 = t;
  int o_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = x_79(t);
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
      ATerm r_6 (ATerm t)
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
          _fail(t);
        return(t);
      }
      ATerm s_6 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
        t = term_t_26;
        return(t);
      }
      ATerm t_6 (ATerm t)
      {
        t = term_u_26;
        return(t);
      }
      t = Option_3_0(r_6, s_6, t_6, t);
      ;
      LocalPopChoice(q_26);
    }
  else
    {
      t = p_26;
      {
        ATerm u_6 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm v_6 (ATerm t)
        {
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = term_v_26;
          return(t);
        }
        ATerm w_6 (ATerm t)
        {
          t = term_w_26;
          return(t);
        }
        t = Option_3_0(u_6, v_6, w_6, t);
      }
    }
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm a_19 = NULL,b_19 = NULL,c_19 = NULL,d_19 = NULL;
  if(match_cons(t, sym__3))
    {
      a_19 = ATgetArgument(t, 0);
      b_19 = ATgetArgument(t, 1);
      c_19 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, a_19, b_19);
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
        t = SSL_table_get(a_19, b_19);
        ;
        LocalPopChoice(y_26);
      }
    else
      {
        t = x_26;
        t = (ATerm) ATempty;
      }
    d_19 = t;
    t = SSL_table_put(a_19, b_19, (ATerm) ATinsert(CheckATermList(d_19), c_19));
    t = (ATerm) ATmakeAppl(sym__3, a_19, b_19, c_19);
  }
  return(t);
}
ATerm register_usage_1_0 (ATerm x_86 (ATerm), ATerm t)
{
  ATerm i_19 = NULL;
  t = term_h_22;
  t = x_86(t);
  i_19 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_b_27, term_c_27, i_19);
  t = table_push_0_0(t);
  _fail(t);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm k_19 = NULL,l_19 = NULL,m_19 = NULL;
  k_19 = t;
  if(match_string(t, "register-usage-info"))
    {
      t = k_19;
      t = register_usage_1_0(d_0, t);
    }
  else
    {
      ATerm p_19 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          l_19 = ATgetFirst((ATermList) t);
          m_19 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = l_19;
      t = a_0(t);
      t = term_h_22;
      t = b_0(t);
      p_19 = t;
      t = (ATerm) ATinsert(CheckATermList(m_19), p_19);
    }
  return(t);
}
ATerm system_usage_switch_0_0 (ATerm t)
{
  ATerm x_6 (ATerm t)
  {
    ATerm r_19 = NULL;
    r_19 = t;
    if(match_string(t, "--help"))
      {
        t = r_19;
      }
    else
      {
        if(match_string(t, "-h"))
          {
            t = r_19;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
              _fail(t);
            t = r_19;
          }
      }
    return(t);
  }
  ATerm z_6 (ATerm t)
  {
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
    t = term_d_27;
    return(t);
  }
  ATerm a_7 (ATerm t)
  {
    t = term_e_27;
    return(t);
  }
  t = Option_3_0(x_6, z_6, a_7, t);
  return(t);
}
ATerm Cons_2_0 (ATerm v_56 (ATerm), ATerm w_56 (ATerm), ATerm t)
{
  ATerm s_19 = NULL,t_19 = NULL,u_19 = NULL,w_19 = NULL,x_19 = NULL,y_19 = NULL;
  y_19 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_19 = ATgetFirst((ATermList) t);
      u_19 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_19);
  s_19 = t;
  t = t_19;
  t = v_56(t);
  w_19 = t;
  t = u_19;
  t = w_56(t);
  x_19 = t;
  t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(x_19), w_19), s_19);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm v_86 (ATerm), ATerm t)
{
  ATerm f_20 = NULL;
  f_20 = t;
  {
    ATerm t_7 (ATerm t)
    {
      t = term_f_27;
      t = v_86(t);
      return(t);
    }
    t = try_1_0(t_7, t);
    t = f_20;
    {
      ATerm u_7 (ATerm t)
      {
        ATerm g_20 = NULL;
        g_20 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), g_20);
        t = (ATerm) ATmakeAppl(sym_Program_1, g_20);
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
                t = v_86(t);
                t = Cons_2_0(_id, v_7, t);
              }
            ;
            LocalPopChoice(h_27);
          }
        else
          {
            t = g_27;
            {
              ATerm i_20 = NULL,j_20 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  i_20 = ATgetFirst((ATermList) t);
                  j_20 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(j_20), (ATerm) ATmakeAppl(sym_Undefined_1, i_20));
            }
          }
        return(t);
      }
      t = Cons_2_0(u_7, v_7, t);
    }
  }
  return(t);
}
ATerm parse_options_1_0 (ATerm u_86 (ATerm), ATerm t)
{
  ATerm p_20 = NULL,q_20 = NULL,r_20 = NULL;
  p_20 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATempty);
  t = p_20;
  {
    ATerm w_7 (ATerm t)
    {
      ATerm k_27 = t;
      int l_27 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = u_86(t);
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
            ATerm y_20 = NULL;
            y_20 = t;
            {
              ATerm q_27 = t;
              int r_27 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = y_20;
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
                    t = y_20;
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
                  t = y_20;
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
                  q_20 = t;
                  return(t);
                }
                t = Undefined_1_0(a_8, t);
                return(t);
              }
              t = option_defined_1_0(z_7, t);
              t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(q_20)), (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue))));
              t = (ATerm) ATmakeAppl(sym__2, term_r_21, (ATerm) ATinsert(ATinsert(ATempty, not_null(q_20)), term_u_27));
              t = system_usage_0_0(t);
              t = SSL_exit((ATerm) ATmakeInt(1));
            }
          }
        return(t);
      }
      t = try_1_0(x_7, t);
      r_20 = t;
      t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)));
      t = r_20;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm z_84 (ATerm), ATerm a_85 (ATerm), ATerm b_85 (ATerm), ATerm c_85 (ATerm), ATerm t)
{
  ATerm r_13 = NULL;
  t = parse_options_1_0(z_84, t);
  r_13 = t;
  t = SSL_table_create((ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), r_13);
  t = r_13;
  t = b_85(t);
  {
    ATerm v_27 = t;
    int w_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(a_85, t);
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
              t = c_85(t);
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
ATerm option_wrap_2_0 (ATerm d_85 (ATerm), ATerm e_85 (ATerm), ATerm t)
{
  t = option_wrap_4_0(d_85, default_usage_0_0, _id, e_85, t);
  return(t);
}
ATerm xtc_io_wrap_2_0 (ATerm a_83 (ATerm), ATerm b_83 (ATerm), ATerm t)
{
  ATerm b_8 (ATerm t)
  {
    ATerm z_27 = t;
    int a_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_83(t);
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
    t = xtc_io_1_0(b_83, t);
    return(t);
  }
  t = option_wrap_2_0(b_8, c_8, t);
  return(t);
}
ATerm xtc_io_wrap_1_0 (ATerm z_82 (ATerm), ATerm t)
{
  t = xtc_io_wrap_2_0(_fail, z_82, t);
  return(t);
}
ATerm xtc_iowrap_1_0 (ATerm f_83 (ATerm), ATerm t)
{
  t = xtc_io_wrap_1_0(f_83, t);
  return(t);
}
ATerm astratego2text_0_0 (ATerm t)
{
  ATerm d_8 (ATerm t)
  {
    ATerm e_8 (ATerm t)
    {
      t = term_b_28;
      return(t);
    }
    ATerm f_8 (ATerm t)
    {
      ATerm e_21 = NULL;
      t = term_c_28;
      t = xtc_find_0_0(t);
      e_21 = t;
      t = (ATerm) ATinsert(ATinsert(ATempty, e_21), term_d_28);
      return(t);
    }
    t = xtc_transform_2_0(e_8, f_8, t);
    {
      ATerm g_8 (ATerm t)
      {
        t = term_e_28;
        return(t);
      }
      t = xtc_transform_1_0(g_8, t);
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
