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
ATerm term_m_28;
ATerm term_l_28;
ATerm term_k_28;
ATerm term_d_28;
ATerm term_o_27;
ATerm term_n_27;
ATerm term_m_27;
ATerm term_l_27;
ATerm term_k_27;
ATerm term_f_27;
ATerm term_e_27;
ATerm term_d_27;
ATerm term_c_27;
ATerm term_b_27;
ATerm term_a_27;
ATerm term_v_26;
ATerm term_z_25;
ATerm term_y_25;
ATerm term_r_25;
ATerm term_o_25;
ATerm term_e_25;
ATerm term_z_24;
ATerm term_y_24;
ATerm term_x_24;
ATerm term_u_24;
ATerm term_r_24;
ATerm term_q_24;
ATerm term_p_24;
ATerm term_m_24;
ATerm term_l_24;
ATerm term_k_24;
ATerm term_h_24;
ATerm term_g_24;
ATerm term_d_24;
ATerm term_t_23;
ATerm term_u_22;
ATerm term_t_22;
ATerm term_s_22;
ATerm term_r_22;
ATerm term_q_22;
ATerm term_n_22;
ATerm term_j_22;
ATerm term_b_22;
ATerm term_a_22;
ATerm term_u_21;
ATerm term_t_21;
ATerm term_s_21;
ATerm term_r_21;
ATerm term_q_21;
ATerm term_p_21;
ATerm term_o_21;
ATerm term_n_21;
ATerm term_m_21;
ATerm term_l_21;
ATerm term_k_21;
ATerm term_i_21;
ATerm term_h_21;
ATerm term_f_21;
ATerm term_e_21;
ATerm term_d_21;
ATerm term_c_21;
ATerm term_b_21;
ATerm term_a_21;
ATerm term_z_20;
ATerm term_y_20;
ATerm term_x_20;
ATerm term_t_20;
ATerm term_s_20;
ATerm term_r_20;
ATerm term_q_20;
ATerm term_p_20;
ATerm term_m_20;
ATerm term_j_20;
ATerm term_i_20;
ATerm term_h_20;
ATerm term_g_20;
ATerm term_f_20;
ATerm term_e_20;
ATerm term_x_19;
ATerm term_v_19;
ATerm term_t_19;
ATerm term_s_19;
ATerm term_o_19;
ATerm term_m_19;
ATerm term_l_19;
ATerm term_k_19;
ATerm term_j_19;
ATerm term_e_19;
ATerm term_d_19;
ATerm term_a_19;
ATerm term_z_18;
ATerm term_w_18;
ATerm term_v_18;
ATerm term_u_18;
ATerm term_q_18;
ATerm term_p_18;
ATerm term_o_18;
ATerm term_m_18;
ATerm term_l_18;
ATerm term_k_18;
ATerm term_j_18;
ATerm term_i_18;
ATerm term_b_18;
ATerm term_a_18;
ATerm term_z_17;
ATerm term_n_17;
ATerm term_m_17;
ATerm term_l_17;
ATerm term_i_17;
ATerm term_h_17;
ATerm term_g_17;
ATerm term_f_17;
ATerm term_e_17;
ATerm term_d_17;
ATerm term_c_17;
ATerm term_z_16;
ATerm term_x_16;
ATerm term_w_16;
ATerm term_v_16;
ATerm term_p_16;
ATerm term_o_16;
ATerm term_n_16;
ATerm term_g_16;
ATerm term_f_16;
ATerm term_e_16;
ATerm term_b_16;
ATerm term_a_16;
ATerm term_x_15;
ATerm term_w_15;
ATerm term_t_15;
ATerm term_s_15;
ATerm term_p_15;
ATerm term_n_15;
ATerm term_m_15;
ATerm term_l_15;
ATerm term_k_15;
ATerm term_j_15;
ATerm term_i_15;
ATerm term_h_15;
ATerm term_g_15;
ATerm term_f_15;
ATerm term_e_15;
ATerm term_x_14;
ATerm term_w_14;
ATerm term_t_14;
ATerm term_s_14;
ATerm term_m_14;
ATerm term_k_14;
ATerm term_j_14;
ATerm term_i_14;
ATerm term_e_14;
ATerm term_d_14;
ATerm term_y_13;
ATerm term_x_13;
ATerm term_t_13;
ATerm term_p_13;
ATerm term_g_13;
ATerm term_j_12;
ATerm term_i_12;
ATerm term_f_12;
ATerm term_c_12;
ATerm term_b_12;
ATerm term_v_11;
ATerm term_s_11;
ATerm term_p_11;
ATerm term_i_11;
ATerm term_d_11;
ATerm term_c_11;
ATerm term_b_11;
ATerm term_a_11;
ATerm term_y_10;
ATerm term_x_10;
ATerm term_w_10;
ATerm term_j_9;
ATerm term_i_9;
ATerm term_w_8;
ATerm term_t_8;
ATerm term_o_8;
ATerm term_l_8;
ATerm term_k_8;
void init_constant_terms (void)
{
  ATprotect(&(term_k_8));
  term_k_8 = (ATerm) ATmakeAppl(ATmakeSymbol("abox2text", 0, ATtrue));
  ATprotect(&(term_l_8));
  term_l_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_o_8));
  term_o_8 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_t_8));
  term_t_8 = (ATerm) ATmakeAppl(ATmakeSymbol("abox-format", 0, ATtrue));
  ATprotect(&(term_w_8));
  term_w_8 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_i_9));
  term_i_9 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_j_9));
  term_j_9 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_a_11));
  term_a_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_14, term_o_8, term_e_14);
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_14, term_k_14, term_m_14);
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_14, term_w_14, term_x_14);
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_15, term_j_9, term_g_15);
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_15, term_j_15, term_k_15);
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_15, term_n_15, term_p_15);
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_15, term_w_15, term_x_15);
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_16, term_e_16, term_f_16);
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_16, term_o_16, term_p_16);
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_c_17));
  term_c_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_16, term_x_16, term_z_16);
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_g_17));
  term_g_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_17, term_e_17, term_f_17);
  ATprotect(&(term_h_17));
  term_h_17 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_i_17));
  term_i_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_l_17));
  term_l_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_17, term_i_9, term_i_17);
  ATprotect(&(term_m_17));
  term_m_17 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_n_17));
  term_n_17 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_z_17));
  term_z_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_a_18));
  term_a_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_17, term_n_17, term_z_17);
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_i_18));
  term_i_18 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_j_18));
  term_j_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_k_18));
  term_k_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_18, term_i_18, term_j_18);
  ATprotect(&(term_l_18));
  term_l_18 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_m_18));
  term_m_18 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_o_18));
  term_o_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_p_18));
  term_p_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_18, term_m_18, term_o_18);
  ATprotect(&(term_q_18));
  term_q_18 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_u_18));
  term_u_18 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_v_18));
  term_v_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_w_18));
  term_w_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_18, term_u_18, term_v_18);
  ATprotect(&(term_z_18));
  term_z_18 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_a_19));
  term_a_19 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_d_19));
  term_d_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_e_19));
  term_e_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_18, term_a_19, term_d_19);
  ATprotect(&(term_j_19));
  term_j_19 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_k_19));
  term_k_19 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_l_19));
  term_l_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_m_19));
  term_m_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_19, term_k_19, term_l_19);
  ATprotect(&(term_o_19));
  term_o_19 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_s_19));
  term_s_19 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_t_19));
  term_t_19 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_v_19));
  term_v_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_19, term_s_19, term_t_19);
  ATprotect(&(term_x_19));
  term_x_19 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_e_20));
  term_e_20 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_f_20));
  term_f_20 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_g_20));
  term_g_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_19, term_e_20, term_f_20);
  ATprotect(&(term_h_20));
  term_h_20 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_i_20));
  term_i_20 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_j_20));
  term_j_20 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_m_20));
  term_m_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_20, term_i_20, term_j_20);
  ATprotect(&(term_p_20));
  term_p_20 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_q_20));
  term_q_20 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_r_20));
  term_r_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_s_20));
  term_s_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_20, term_q_20, term_r_20);
  ATprotect(&(term_t_20));
  term_t_20 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_x_20));
  term_x_20 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_y_20));
  term_y_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_z_20));
  term_z_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_20, term_x_20, term_y_20);
  ATprotect(&(term_a_21));
  term_a_21 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_b_21));
  term_b_21 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_c_21));
  term_c_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_d_21));
  term_d_21 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_21, term_b_21, term_c_21);
  ATprotect(&(term_e_21));
  term_e_21 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_f_21));
  term_f_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_h_21));
  term_h_21 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_21, term_w_8, term_f_21);
  ATprotect(&(term_i_21));
  term_i_21 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_l_21));
  term_l_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_m_21));
  term_m_21 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_21, term_k_21, term_l_21);
  ATprotect(&(term_n_21));
  term_n_21 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_o_21));
  term_o_21 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_p_21));
  term_p_21 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_q_21));
  term_q_21 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_21, term_o_21, term_p_21);
  ATprotect(&(term_r_21));
  term_r_21 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_s_21));
  term_s_21 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_t_21));
  term_t_21 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_u_21));
  term_u_21 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_21, term_s_21, term_t_21);
  ATprotect(&(term_a_22));
  term_a_22 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_b_22));
  term_b_22 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_j_22));
  term_j_22 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_n_22));
  term_n_22 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file> (file, mode)", 0, ATtrue));
  ATprotect(&(term_q_22));
  term_q_22 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_r_22));
  term_r_22 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_s_22));
  term_s_22 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_t_22));
  term_t_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_u_22));
  term_u_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_t_23));
  term_t_23 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_d_24));
  term_d_24 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_g_24));
  term_g_24 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_h_24));
  term_h_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_k_24));
  term_k_24 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_l_24));
  term_l_24 = (ATerm) ATmakeAppl(sym_Verbose_1, term_k_24);
  ATprotect(&(term_m_24));
  term_m_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_p_24));
  term_p_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_q_24));
  term_q_24 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_r_24));
  term_r_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_u_24));
  term_u_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_x_24));
  term_x_24 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_y_24));
  term_y_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_z_24));
  term_z_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_e_25));
  term_e_25 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_o_25));
  term_o_25 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_r_25));
  term_r_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_y_25));
  term_y_25 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_z_25));
  term_z_25 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_v_26));
  term_v_26 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_a_27));
  term_a_27 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_b_27));
  term_b_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_c_27));
  term_c_27 = (ATerm) ATmakeAppl(sym__3, term_a_27, term_b_27, term_q_22);
  ATprotect(&(term_d_27));
  term_d_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_e_27));
  term_e_27 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_f_27));
  term_f_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_k_27));
  term_k_27 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_l_27));
  term_l_27 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_m_27));
  term_m_27 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_n_27));
  term_n_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_o_27));
  term_o_27 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_d_28));
  term_d_28 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_k_28));
  term_k_28 = (ATerm) ATmakeAppl(ATmakeSymbol("ast2abox", 0, ATtrue));
  ATprotect(&(term_l_28));
  term_l_28 = (ATerm) ATmakeAppl(ATmakeSymbol("Box.pp.af", 0, ATtrue));
  ATprotect(&(term_m_28));
  term_m_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
}
ATerm xtc_abox2text_0_0 (ATerm);
ATerm pass_verbose_0_0 (ATerm);
ATerm xtc_abox_format_0_0 (ATerm);
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
ATerm io_pp_box_0_0 (ATerm);
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
    t = term_k_8;
    return(t);
  }
  t = xtc_transform_2_0(c_0, pass_verbose_0_0, t);
  return(t);
}
ATerm pass_verbose_0_0 (ATerm t)
{
  ATerm c_1 = NULL,d_1 = NULL,e_1 = NULL;
  t = term_l_8;
  {
    ATerm m_8 = t;
    int n_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        ;
        LocalPopChoice(n_8);
      }
    else
      {
        t = m_8;
        t = term_o_8;
      }
    c_1 = t;
    t = (ATerm) ATmakeAppl(sym__2, c_1, term_o_8);
    {
      ATerm p_8 = t;
      int q_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SSL_subti(c_1, (ATerm) ATmakeInt(1));
          ;
          LocalPopChoice(q_8);
        }
      else
        {
          t = p_8;
          t = SSL_subtr(c_1, (ATerm) ATmakeInt(1));
        }
      e_1 = t;
      t = SSL_int_to_string(e_1);
      d_1 = t;
      t = (ATerm) ATinsert(ATinsert(ATempty, d_1), term_l_8);
    }
  }
  return(t);
}
ATerm xtc_abox_format_0_0 (ATerm t)
{
  ATerm n_0 (ATerm t)
  {
    t = term_t_8;
    return(t);
  }
  t = xtc_transform_2_0(n_0, pass_verbose_0_0, t);
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm n_1 = NULL;
  n_1 = t;
  t = SSL_table_keys(n_1);
  {
    ATerm o_0 (ATerm t)
    {
      ATerm o_1 = NULL,u_1 = NULL;
      o_1 = t;
      t = SSL_table_get(n_1, o_1);
      u_1 = t;
      t = (ATerm) ATmakeAppl(sym__2, o_1, u_1);
      return(t);
    }
    t = map_1_0(o_0, t);
  }
  return(t);
}
ATerm if_verbose5_1_0 (ATerm v_78 (ATerm), ATerm t)
{
  ATerm p_0 (ATerm t)
  {
    ATerm v_1 = NULL,x_1 = NULL;
    v_1 = t;
    t = term_l_8;
    t = get_config_0_0(t);
    x_1 = t;
    t = (ATerm) ATmakeAppl(sym__2, x_1, term_w_8);
    t = geq_0_0(t);
    t = v_1;
    t = v_78(t);
    return(t);
  }
  t = try_1_0(p_0, t);
  return(t);
}
ATerm xtc_find_version_loc_0_0 (ATerm t)
{
  ATerm e_2 = NULL,f_2 = NULL,i_2 = NULL;
  if(match_cons(t, sym__2))
    {
      e_2 = ATgetArgument(t, 0);
      f_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Tool_1, e_2));
  {
    ATerm q_0 (ATerm t)
    {
      if(match_cons(t, sym__2))
        {
          if((f_2 != ATgetArgument(t, 0)))
            {
              _fail(ATgetArgument(t, 0));
            }
          i_2 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      return(t);
    }
    t = fetch_1_0(q_0, t);
    t = not_null(i_2);
  }
  return(t);
}
ATerm filter_1_0 (ATerm a_77 (ATerm), ATerm t)
{
  ATerm x_8 = t;
  int y_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(y_8);
    }
  else
    {
      t = x_8;
      {
        ATerm z_8 = t;
        int a_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_0 (ATerm t)
            {
              t = filter_1_0(a_77, t);
              return(t);
            }
            t = Cons_2_0(a_77, r_0, t);
            ;
            LocalPopChoice(a_9);
          }
        else
          {
            t = z_8;
            {
              ATerm m_2 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm g_9 = ATgetFirst((ATermList) t);
                  m_2 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = m_2;
              t = filter_1_0(a_77, t);
            }
          }
      }
    }
  return(t);
}
ATerm repeat_1_0 (ATerm b_85 (ATerm), ATerm t)
{
  ATerm o_2 (ATerm t)
  {
    ATerm s_0 (ATerm t)
    {
      t = b_85(t);
      t = o_2(t);
      return(t);
    }
    t = try_1_0(s_0, t);
    return(t);
  }
  t = o_2(t);
  return(t);
}
ATerm xtc_import_0_0 (ATerm t)
{
  ATerm p_2 = NULL;
  p_2 = t;
  {
    ATerm t_0 (ATerm t)
    {
      t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Import_0));
      t = filter_1_0(xtc_read_0_0, t);
      {
        ATerm h_9 = t;
        if((PushChoice() == 0))
          {
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = h_9;
          }
      }
      return(t);
    }
    t = repeat_1_0(t_0, t);
    t = p_2;
  }
  return(t);
}
ATerm say_1_0 (ATerm e_65 (ATerm), ATerm t)
{
  ATerm r_2 = NULL,e_0 = NULL;
  r_2 = t;
  t = e_65(t);
  e_0 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, e_0));
  t = r_2;
  return(t);
}
ATerm if_verbose4_1_0 (ATerm u_78 (ATerm), ATerm t)
{
  ATerm u_0 (ATerm t)
  {
    ATerm s_2 = NULL,v_2 = NULL;
    s_2 = t;
    t = term_l_8;
    t = get_config_0_0(t);
    v_2 = t;
    t = (ATerm) ATmakeAppl(sym__2, v_2, term_i_9);
    t = geq_0_0(t);
    t = s_2;
    t = u_78(t);
    return(t);
  }
  t = try_1_0(u_0, t);
  return(t);
}
ATerm if_verbose6_1_0 (ATerm w_78 (ATerm), ATerm t)
{
  ATerm v_0 (ATerm t)
  {
    ATerm x_2 = NULL,z_2 = NULL;
    x_2 = t;
    t = term_l_8;
    t = get_config_0_0(t);
    z_2 = t;
    t = (ATerm) ATmakeAppl(sym__2, z_2, term_j_9);
    t = geq_0_0(t);
    t = x_2;
    t = w_78(t);
    return(t);
  }
  t = try_1_0(v_0, t);
  return(t);
}
ATerm HdMember_p__2_0 (ATerm o_73 (ATerm), ATerm p_73 (ATerm), ATerm t)
{
  ATerm g_3 = NULL,h_3 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_3 = ATgetFirst((ATermList) t);
      h_3 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = p_73(t);
  {
    ATerm w_0 (ATerm t)
    {
      ATerm i_3 = NULL;
      i_3 = t;
      t = (ATerm) ATmakeAppl(sym__2, g_3, i_3);
      t = o_73(t);
      return(t);
    }
    t = fetch_1_0(w_0, t);
    t = h_3;
  }
  return(t);
}
ATerm union_1_0 (ATerm k_73 (ATerm), ATerm t)
{
  ATerm j_3 = NULL,k_3 = NULL;
  if(match_cons(t, sym__2))
    {
      k_3 = ATgetArgument(t, 0);
      j_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_3;
  {
    ATerm m_3 (ATerm t)
    {
      ATerm m_9 = t;
      int n_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = j_3;
          ;
          LocalPopChoice(n_9);
        }
      else
        {
          t = m_9;
          {
            ATerm p_9 = t;
            int b_10 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm x_0 (ATerm t)
                {
                  t = j_3;
                  return(t);
                }
                t = HdMember_p__2_0(k_73, x_0, t);
                t = m_3(t);
                ;
                LocalPopChoice(b_10);
              }
            else
              {
                t = p_9;
                t = Cons_2_0(_id, m_3, t);
              }
          }
        }
      return(t);
    }
    t = m_3(t);
  }
  return(t);
}
ATerm union_0_0 (ATerm t)
{
  ATerm y_0 (ATerm t)
  {
    ATerm n_3 = NULL;
    if(match_cons(t, sym__2))
      {
        n_3 = ATgetArgument(t, 0);
        if((n_3 != ATgetArgument(t, 1)))
          {
            _fail(ATgetArgument(t, 1));
          }
      }
    else
      _fail(t);
    return(t);
  }
  t = union_1_0(y_0, t);
  return(t);
}
ATerm table_append_0_0 (ATerm t)
{
  ATerm r_3 = NULL,s_3 = NULL,v_3 = NULL,x_3 = NULL,y_3 = NULL;
  if(match_cons(t, sym__3))
    {
      r_3 = ATgetArgument(t, 0);
      s_3 = ATgetArgument(t, 1);
      v_3 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, r_3, s_3);
  {
    ATerm c_10 = t;
    int d_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm f_10 = ATgetArgument(t, 0);
            ATerm j_10 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(r_3, s_3);
        ;
        LocalPopChoice(d_10);
      }
    else
      {
        t = c_10;
        t = (ATerm) ATempty;
      }
    x_3 = t;
    t = (ATerm) ATmakeAppl(sym__2, x_3, v_3);
    t = union_0_0(t);
    y_3 = t;
    t = SSL_table_put(r_3, s_3, y_3);
    t = (ATerm) ATmakeAppl(sym__3, r_3, s_3, v_3);
  }
  return(t);
}
ATerm table_putlist_1_0 (ATerm f_79 (ATerm), ATerm t)
{
  ATerm z_3 = NULL,a_4 = NULL;
  if(match_cons(t, sym__2))
    {
      a_4 = ATgetArgument(t, 0);
      z_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_3;
  {
    ATerm z_0 (ATerm t)
    {
      ATerm b_4 = NULL,d_4 = NULL;
      if(match_cons(t, sym__2))
        {
          b_4 = ATgetArgument(t, 0);
          d_4 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__3, a_4, b_4, d_4);
      t = f_79(t);
      return(t);
    }
    t = map_1_0(z_0, t);
  }
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm k_10 = t;
  int q_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_1 = NULL;
      b_1 = t;
      t = SSL_access(b_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_R__OK_0)));
      LocalPopChoice(q_10);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = k_10;
      {
        ATerm s_10 = t;
        int u_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_10 = t;
            if((PushChoice() == 0))
              {
                ATerm g_1 = NULL;
                g_1 = t;
                t = SSL_access(g_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_F__OK_0)));
                PopChoice();
                _fail(t);
              }
            else
              {
                t = v_10;
              }
            {
              ATerm a_1 (ATerm t)
              {
                t = term_w_10;
                return(t);
              }
              t = debug_1_0(a_1, t);
            }
            ;
            LocalPopChoice(u_10);
          }
        else
          {
            t = s_10;
            {
              ATerm f_1 (ATerm t)
              {
                t = term_x_10;
                return(t);
              }
              t = debug_1_0(f_1, t);
            }
          }
        t = (ATerm) ATempty;
      }
    }
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm h_4 = NULL,i_4 = NULL,k_4 = NULL;
  h_4 = t;
  {
    ATerm h_1 (ATerm t)
    {
      ATerm i_1 (ATerm t)
      {
        t = term_y_10;
        return(t);
      }
      t = debug_1_0(i_1, t);
      return(t);
    }
    t = if_verbose5_1_0(h_1, t);
    {
      ATerm z_10 = t;
      if((PushChoice() == 0))
        {
          t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Imported_1, h_4));
          PopChoice();
          _fail(t);
        }
      else
        {
          t = z_10;
        }
      i_4 = t;
      t = SSL_table_put((ATerm)ATmakeAppl(sym_XTC_0), (ATerm)ATmakeAppl(sym_Repository_0), (ATerm) ATinsert(ATempty, h_4));
      t = i_4;
      {
        ATerm l_1 (ATerm t)
        {
          ATerm m_1 (ATerm t)
          {
            t = term_a_11;
            return(t);
          }
          t = debug_1_0(m_1, t);
          return(t);
        }
        t = if_verbose4_1_0(l_1, t);
        t = read_repository_file_0_0(t);
        {
          ATerm p_1 (ATerm t)
          {
            ATerm q_1 (ATerm t)
            {
              t = term_b_11;
              return(t);
            }
            t = say_1_0(q_1, t);
            return(t);
          }
          t = if_verbose6_1_0(p_1, t);
          k_4 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_c_11, k_4);
          t = table_putlist_1_0(table_append_0_0, t);
          {
            ATerm r_1 (ATerm t)
            {
              ATerm s_1 (ATerm t)
              {
                t = term_d_11;
                return(t);
              }
              t = say_1_0(s_1, t);
              return(t);
            }
            t = if_verbose6_1_0(r_1, t);
            t = SSL_table_put((ATerm)ATmakeAppl(sym_XTC_0), (ATerm)ATmakeAppl(sym_Imported_1, h_4), (ATerm) ATempty);
            t = (ATerm) ATmakeAppl(sym__3, term_c_11, (ATerm)ATmakeAppl(sym_Imported_1, h_4), (ATerm) ATempty);
            {
              ATerm t_1 (ATerm t)
              {
                ATerm w_1 (ATerm t)
                {
                  t = term_b_11;
                  return(t);
                }
                t = say_1_0(w_1, t);
                return(t);
              }
              t = if_verbose4_1_0(t_1, t);
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
  ATerm e_11 = t;
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
      t = e_11;
      {
        ATerm n_11 = t;
        int o_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_getenv((ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue)));
            ;
            LocalPopChoice(o_11);
          }
        else
          {
            t = n_11;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm l_4 = NULL;
  ATerm y_1 (ATerm t)
  {
    ATerm z_1 (ATerm t)
    {
      t = term_p_11;
      return(t);
    }
    t = debug_1_0(z_1, t);
    return(t);
  }
  t = if_verbose5_1_0(y_1, t);
  l_4 = t;
  {
    ATerm q_11 = t;
    int r_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Repository_0));
        ;
        LocalPopChoice(r_11);
      }
    else
      {
        t = q_11;
        t = xtc_location_0_0(t);
        t = xtc_read_0_0(t);
        t = xtc_import_0_0(t);
      }
    t = l_4;
    {
      ATerm a_2 (ATerm t)
      {
        ATerm b_2 (ATerm t)
        {
          t = term_s_11;
          return(t);
        }
        t = debug_1_0(b_2, t);
        return(t);
      }
      t = if_verbose5_1_0(a_2, t);
    }
  }
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm t_11 = t;
  int u_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_2 (ATerm t)
      {
        ATerm h_2 (ATerm t)
        {
          t = term_v_11;
          return(t);
        }
        t = debug_1_0(h_2, t);
        return(t);
      }
      t = if_verbose5_1_0(d_2, t);
      t = xtc_load_0_0(t);
      {
        ATerm w_11 = t;
        int x_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = xtc_find_version_loc_0_0(t);
            ;
            LocalPopChoice(x_11);
          }
        else
          {
            t = w_11;
            {
              ATerm j_1 = NULL,k_1 = NULL;
              j_1 = t;
              t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Tool_1, j_1));
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm y_11 = ATgetFirst((ATermList) t);
                  if(match_cons(y_11, sym__2))
                    {
                      ATerm a_12 = ATgetArgument(y_11, 0);
                      k_1 = ATgetArgument(y_11, 1);
                    }
                  else
                    _fail(t);
                  {
                    ATerm z_11 = (ATerm) ATgetNext((ATermList) t);
                  }
                }
              else
                _fail(t);
              t = k_1;
            }
          }
        {
          ATerm j_2 (ATerm t)
          {
            ATerm k_2 (ATerm t)
            {
              t = term_v_11;
              return(t);
            }
            t = debug_1_0(k_2, t);
            return(t);
          }
          t = if_verbose5_1_0(j_2, t);
        }
      }
      ;
      LocalPopChoice(u_11);
    }
  else
    {
      t = t_11;
      {
        ATerm m_4 = NULL;
        m_4 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue))), m_4), (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue))));
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_c_12), m_4), term_b_12);
        {
          ATerm l_2 (ATerm t)
          {
            t = term_c_11;
            t = table_getlist_0_0(t);
            {
              ATerm n_2 (ATerm t)
              {
                t = term_f_12;
                return(t);
              }
              t = debug_1_0(n_2, t);
            }
            return(t);
          }
          t = if_verbose5_1_0(l_2, t);
          _fail(t);
        }
      }
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm p_4 = NULL,q_4 = NULL,r_4 = NULL;
  ATerm g_12 = t;
  int h_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_4 = NULL;
      s_4 = t;
      t = (ATerm) ATmakeAppl(sym__2, s_4, term_i_12);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(h_12);
    }
  else
    {
      t = g_12;
      {
        ATerm q_2 (ATerm t)
        {
          t = term_j_12;
          return(t);
        }
        t = debug_1_0(q_2, t);
        _fail(t);
      }
    }
  p_4 = t;
  if(match_cons(t, sym_Stream_1))
    {
      r_4 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(r_4);
  q_4 = t;
  t = p_4;
  t = fclose_0_0(t);
  t = q_4;
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm v_4 = NULL,y_4 = NULL;
  v_4 = t;
  if(match_cons(t, sym_stdin_0))
    {
      t = v_4;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_FILE_1))
        {
          y_4 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSL_access(y_4, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_F__OK_0)));
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm i_6 (ATerm w_5, ATerm t)
  {
    t = SSL_fclose(w_5);
    return(t);
  }
  ATerm b_6 = NULL,e_6 = NULL;
  e_6 = t;
  if(match_cons(t, sym_Stream_1))
    {
      b_6 = ATgetArgument(t, 0);
      {
        ATerm n_12 = t;
        int o_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(b_6);
            ;
            LocalPopChoice(o_12);
          }
        else
          {
            t = n_12;
            t = i_6(e_6, t);
          }
      }
    }
  else
    {
      t = i_6(e_6, t);
    }
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm j_6 = NULL;
  t = SSL_stdin_stream();
  j_6 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, j_6);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm n_6 = NULL;
  t = SSL_stdout_stream();
  n_6 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, n_6);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm o_6 = NULL;
  t = SSL_stderr_stream();
  o_6 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, o_6);
  return(t);
}
ATerm stdio_stream_0_0 (ATerm t)
{
  ATerm b_7 = NULL;
  b_7 = t;
  if(match_cons(t, sym_stderr_0))
    {
      t = b_7;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = b_7;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = b_7;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm p_12 = ATgetArgument(t, 0);
      ATerm q_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm r_12 = t;
    int x_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_2 = NULL,g_2 = NULL;
        c_2 = t;
        t = SSL_explode_term(c_2);
        if(match_cons(t, sym__2))
          {
            ATerm y_12 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) y_12) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm z_12 = ATgetArgument(t, 1);
              if(((ATgetType(z_12) == AT_LIST) && !(ATisEmpty(z_12))))
                {
                  g_2 = ATgetFirst((ATermList) z_12);
                  {
                    ATerm d_13 = (ATerm) ATgetNext((ATermList) z_12);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = g_2;
        t = stdio_stream_0_0(t);
        ;
        LocalPopChoice(x_12);
      }
    else
      {
        t = r_12;
        {
          ATerm e_13 = t;
          int f_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm g_7 = NULL,h_7 = NULL,i_7 = NULL;
              ATerm t_2 (ATerm t)
              {
                ATerm j_7 = NULL;
                if(match_cons(t, sym_Path_1))
                  {
                    j_7 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = j_7;
                return(t);
              }
              t = _2_0(t_2, _id, t);
              if(match_cons(t, sym__2))
                {
                  g_7 = ATgetArgument(t, 0);
                  h_7 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_fopen(g_7, h_7);
              i_7 = t;
              t = (ATerm) ATmakeAppl(sym_Stream_1, i_7);
              ;
              LocalPopChoice(f_13);
            }
          else
            {
              t = e_13;
              {
                ATerm k_7 = NULL,l_7 = NULL,m_7 = NULL;
                ATerm w_2 (ATerm t)
                {
                  ATerm n_7 = NULL;
                  n_7 = t;
                  t = SSL_is_string(n_7);
                  return(t);
                }
                t = _2_0(w_2, _id, t);
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
              }
            }
        }
      }
  }
  return(t);
}
ATerm WriteToFile_1_0 (ATerm o_65 (ATerm), ATerm t)
{
  ATerm o_7 = NULL,p_7 = NULL,q_7 = NULL;
  if(match_cons(t, sym__2))
    {
      o_7 = ATgetArgument(t, 0);
      p_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, o_7, term_g_13);
  t = open_stream_0_0(t);
  q_7 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_7, p_7);
  t = o_65(t);
  t = fclose_0_0(t);
  t = p_7;
  return(t);
}
ATerm WriteToBinaryFile_0_0 (ATerm t)
{
  ATerm y_2 (ATerm t)
  {
    ATerm r_7 = NULL,s_7 = NULL,t_7 = NULL;
    if(match_cons(t, sym__2))
      {
        ATerm l_13 = ATgetArgument(t, 0);
        if(match_cons(l_13, sym_Stream_1))
          {
            r_7 = ATgetArgument(l_13, 0);
          }
        else
          _fail(t);
        s_7 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSL_write_term_to_stream_baf(r_7, s_7);
    t_7 = t;
    t = (ATerm) ATmakeAppl(sym_Stream_1, t_7);
    return(t);
  }
  t = WriteToFile_1_0(y_2, t);
  return(t);
}
ATerm write_to_0_0 (ATerm t)
{
  ATerm u_7 = NULL,v_7 = NULL;
  u_7 = t;
  t = xtc_new_file_0_0(t);
  v_7 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_7, u_7);
  t = WriteToBinaryFile_0_0(t);
  t = SSL_close_file(v_7);
  t = (ATerm) ATmakeAppl(sym_FILE_1, v_7);
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
  ATerm w_7 = NULL;
  ATerm a_3 (ATerm t)
  {
    ATerm x_7 = NULL;
    x_7 = t;
    t = SSL_explode_string(x_7);
    return(t);
  }
  t = map_1_0(a_3, t);
  t = concat_0_0(t);
  w_7 = t;
  t = SSL_implode_string(w_7);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm r_8 = NULL,s_8 = NULL,u_8 = NULL,v_8 = NULL;
  r_8 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      s_8 = ATgetArgument(t, 0);
      {
        ATerm u_2 = NULL;
        t = SSL_int_to_string(s_8);
        u_2 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_t_13), u_2), term_p_13);
        t = concat_strings_0_0(t);
      }
    }
  else
    {
      ATerm u_3 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          s_8 = ATgetArgument(t, 0);
          u_8 = ATgetArgument(t, 1);
          v_8 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(u_8);
      u_3 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, v_8), term_y_13), u_3), term_x_13), s_8);
      t = concat_strings_0_0(t);
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm t_69 (ATerm), ATerm t)
{
  ATerm b_9 = NULL;
  ATerm b_3 (ATerm t)
  {
    t = t_69(t);
    b_9 = t;
    return(t);
  }
  t = fetch_1_0(b_3, t);
  t = not_null(b_9);
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm c_9 = NULL;
  c_9 = t;
  {
    ATerm z_13 = t;
    int a_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_u_21), term_q_21), term_m_21), term_h_21), term_d_21), term_z_20), term_s_20), term_m_20), term_g_20), term_v_19), term_m_19), term_e_19), term_w_18), term_p_18), term_k_18), term_a_18), term_l_17), term_g_17), term_c_17), term_v_16), term_g_16), term_a_16), term_s_15), term_l_15), term_h_15), term_e_15), term_s_14), term_i_14);
        {
          ATerm c_3 (ATerm t)
          {
            if(match_cons(t, sym_Signal_3))
              {
                ATerm v_21 = ATgetArgument(t, 0);
                if((c_9 != ATgetArgument(t, 1)))
                  {
                    _fail(ATgetArgument(t, 1));
                  }
                {
                  ATerm w_21 = ATgetArgument(t, 2);
                }
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_elem_1_0(c_3, t);
        }
        ;
        LocalPopChoice(a_14);
      }
    else
      {
        t = z_13;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, c_9);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm d_9 = NULL;
  d_9 = t;
  {
    ATerm d_3 (ATerm t)
    {
      ATerm e_9 = NULL,f_9 = NULL;
      if(match_cons(t, sym_WaitStatus_3))
        {
          ATerm x_21 = ATgetArgument(t, 0);
          e_9 = ATgetArgument(t, 1);
          {
            ATerm y_21 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = e_9;
      {
        ATerm z_21 = t;
        if((PushChoice() == 0))
          {
            if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
              _fail(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = z_21;
          }
        t = signal_from_number_0_0(t);
        t = signal_to_descr_0_0(t);
        f_9 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, f_9), (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue))));
        t = (ATerm) ATmakeAppl(sym__2, term_a_22, (ATerm) ATinsert(ATinsert(ATempty, f_9), term_b_22));
      }
      return(t);
    }
    t = try_1_0(d_3, t);
    t = d_9;
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
  ATerm k_9 = NULL,l_9 = NULL;
  k_9 = t;
  t = fork_0_0(t);
  l_9 = t;
  {
    ATerm c_22 = t;
    int d_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = k_9;
        t = b_64(t);
        ;
        LocalPopChoice(d_22);
      }
    else
      {
        t = c_22;
        t = (ATerm) ATmakeAppl(sym__2, l_9, k_9);
        t = c_64(t);
      }
  }
  return(t);
}
ATerm fork_and_wait_1_0 (ATerm d_64 (ATerm), ATerm t)
{
  ATerm o_9 = NULL;
  ATerm e_3 (ATerm t)
  {
    ATerm q_9 = NULL;
    if(match_cons(t, sym__2))
      {
        q_9 = ATgetArgument(t, 0);
        o_9 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSL_waitpid(q_9);
    t = warn_ifsignaled_0_0(t);
    if(match_cons(t, sym_WaitStatus_3))
      {
        ATerm e_22 = ATgetArgument(t, 0);
        if(((ATgetType(e_22) != AT_INT) || (ATgetInt((ATermInt) e_22) != 0)))
          _fail(t);
        {
          ATerm f_22 = ATgetArgument(t, 1);
        }
        {
          ATerm g_22 = ATgetArgument(t, 2);
        }
      }
    else
      _fail(t);
    t = o_9;
    return(t);
  }
  t = fork_2_0(d_64, e_3, t);
  return(t);
}
ATerm call_0_0 (ATerm t)
{
  ATerm r_9 = NULL,s_9 = NULL;
  if(match_cons(t, sym__2))
    {
      r_9 = ATgetArgument(t, 0);
      s_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm f_3 (ATerm t)
    {
      t = SSL_execvp(r_9, s_9);
      return(t);
    }
    t = fork_and_wait_1_0(f_3, t);
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
  ATerm t_9 = NULL,u_9 = NULL;
  t_9 = t;
  t = j_81(t);
  t = xtc_find_warning_0_0(t);
  u_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_9, t_9);
  t = call_0_0(t);
  t = t_9;
  return(t);
}
ATerm assert_1_0 (ATerm u_77 (ATerm), ATerm t)
{
  ATerm v_9 = NULL,w_9 = NULL,x_9 = NULL,y_9 = NULL,z_9 = NULL;
  if(match_cons(t, sym__2))
    {
      v_9 = ATgetArgument(t, 0);
      w_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_77(t);
  x_9 = t;
  t = (ATerm) ATmakeAppl(sym__3, x_9, v_9, w_9);
  t = table_push_0_0(t);
  {
    ATerm h_22 = t;
    int i_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get(x_9, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(i_22);
      }
    else
      {
        t = h_22;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        y_9 = ATgetFirst((ATermList) t);
        z_9 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSL_table_put(x_9, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATinsert(CheckATermList(z_9), (ATerm) ATinsert(CheckATermList(y_9), v_9)));
    t = (ATerm) ATmakeAppl(sym__2, v_9, w_9);
  }
  return(t);
}
ATerm obsolete_1_0 (ATerm h_65 (ATerm), ATerm t)
{
  ATerm a_10 = NULL;
  a_10 = t;
  t = h_65(t);
  {
    ATerm l_3 (ATerm t)
    {
      t = term_j_22;
      return(t);
    }
    t = debug_1_0(l_3, t);
    t = a_10;
  }
  return(t);
}
ATerm open_file_0_0 (ATerm t)
{
  ATerm o_10 (ATerm e_10, ATerm t)
  {
    t = e_10;
    {
      ATerm k_22 = t;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym__2))
            {
              ATerm l_22 = ATgetArgument(t, 0);
              ATerm m_22 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = k_22;
        }
      {
        ATerm o_3 (ATerm t)
        {
          t = term_n_22;
          return(t);
        }
        t = obsolete_1_0(o_3, t);
        t = (ATerm) ATmakeAppl(sym__2, e_10, term_g_13);
        t = open_file_0_0(t);
      }
    }
    return(t);
  }
  ATerm p_10 (ATerm g_10, ATerm h_10, ATerm i_10, ATerm t)
  {
    t = SSL_open_file(g_10, h_10);
    return(t);
  }
  ATerm l_10 = NULL,m_10 = NULL,n_10 = NULL;
  l_10 = t;
  if(match_cons(t, sym__2))
    {
      m_10 = ATgetArgument(t, 0);
      n_10 = ATgetArgument(t, 1);
      {
        ATerm o_22 = t;
        int p_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = o_10(l_10, t);
            ;
            LocalPopChoice(p_22);
          }
        else
          {
            t = o_22;
            t = p_10(m_10, n_10, l_10, t);
          }
      }
    }
  else
    {
      t = o_10(l_10, t);
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
  ATerm r_10 = NULL;
  t = term_q_22;
  t = new_0_0(t);
  r_10 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_10, term_r_22);
  t = conc_strings_0_0(t);
  {
    ATerm p_3 (ATerm t)
    {
      ATerm c_4 = NULL;
      c_4 = t;
      t = SSL_access(c_4, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_F__OK_0)));
      t = new_file_0_0(t);
      return(t);
    }
    t = try_1_0(p_3, t);
  }
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm t_10 = NULL;
  t = new_file_0_0(t);
  t_10 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_10, term_g_13);
  t = open_file_0_0(t);
  t = (ATerm) ATmakeAppl(sym__2, t_10, term_q_22);
  {
    ATerm q_3 (ATerm t)
    {
      t = term_s_22;
      return(t);
    }
    t = assert_1_0(q_3, t);
    t = t_10;
  }
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm t)
{
  ATerm f_11 = NULL,g_11 = NULL;
  f_11 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm f_4 = NULL,j_4 = NULL;
      t = f_11;
      t = xtc_new_file_0_0(t);
      f_4 = t;
      t = m_0(t);
      j_4 = t;
      t = (ATerm) ATmakeAppl(sym__2, j_4, (ATerm) ATinsert(ATinsert(ATempty, f_4), term_t_22));
      t = conc_0_0(t);
      t = xtc_command_1_0(l_0, t);
      t = SSL_close_file(f_4);
      t = (ATerm) ATmakeAppl(sym_FILE_1, f_4);
    }
  else
    {
      ATerm x_4 = NULL,a_5 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          g_11 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = g_11;
      t = xtc_new_file_0_0(t);
      x_4 = t;
      t = m_0(t);
      a_5 = t;
      t = (ATerm) ATmakeAppl(sym__2, a_5, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, x_4), term_t_22), g_11), term_u_22));
      t = conc_0_0(t);
      t = xtc_command_1_0(l_0, t);
      t = SSL_close_file(x_4);
      t = (ATerm) ATmakeAppl(sym_FILE_1, x_4);
    }
  return(t);
}
ATerm FILE_1_0 (ATerm y_61 (ATerm), ATerm t)
{
  ATerm j_11 = NULL,k_11 = NULL,l_11 = NULL,m_11 = NULL;
  m_11 = t;
  if(match_cons(t, sym_FILE_1))
    {
      k_11 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_11);
  j_11 = t;
  t = k_11;
  t = y_61(t);
  l_11 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FILE_1, l_11), j_11);
  return(t);
}
ATerm xtc_transform_2_0 (ATerm l_81 (ATerm), ATerm m_81 (ATerm), ATerm t)
{
  ATerm v_22 = t;
  int w_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_22 = t;
      int y_22 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = FILE_1_0(_id, t);
          ;
          LocalPopChoice(y_22);
        }
      else
        {
          t = x_22;
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
        }
      LocalPopChoice(w_22);
      t = xtc_transform_file_2_0(l_81, m_81, t);
    }
  else
    {
      t = v_22;
      t = xtc_transform_term_2_0(l_81, m_81, t);
    }
  return(t);
}
ATerm copy_to_1_0 (ATerm k_0 (ATerm), ATerm t)
{
  ATerm d_12 = NULL,e_12 = NULL;
  d_12 = t;
  if(match_cons(t, sym_FILE_1))
    {
      e_12 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm z_22 = t;
    int a_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_5 = NULL;
        t = d_12;
        t = k_0(t);
        e_5 = t;
        {
          ATerm b_23 = t;
          int c_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(!(match_cons(t, sym_stdout_0)))
                _fail(t);
              ;
              LocalPopChoice(c_23);
            }
          else
            {
              t = b_23;
              if(!(match_cons(t, sym_stderr_0)))
                _fail(t);
            }
          t = SSL_copy(e_12, e_5);
          t = (ATerm) ATmakeAppl(sym_FILE_1, e_12);
        }
        ;
        LocalPopChoice(a_23);
      }
    else
      {
        t = z_22;
        {
          ATerm d_23 = t;
          int e_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm i_5 = NULL;
              t = d_12;
              t = k_0(t);
              i_5 = t;
              {
                ATerm f_23 = t;
                if((PushChoice() == 0))
                  {
                    ATerm g_23 = t;
                    int h_23 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(!(match_cons(t, sym_stdout_0)))
                          _fail(t);
                        ;
                        LocalPopChoice(h_23);
                      }
                    else
                      {
                        t = g_23;
                        {
                          ATerm i_23 = t;
                          int j_23 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              if(!(match_cons(t, sym_stderr_0)))
                                _fail(t);
                              ;
                              LocalPopChoice(j_23);
                            }
                          else
                            {
                              t = i_23;
                              {
                                ATerm j_5 = NULL;
                                j_5 = t;
                                if((e_12 != t))
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
                    t = f_23;
                  }
                t = SSL_copy(e_12, i_5);
                t = (ATerm) ATmakeAppl(sym_FILE_1, e_12);
              }
              ;
              LocalPopChoice(e_23);
            }
          else
            {
              t = d_23;
              t = d_12;
              t = k_0(t);
              if((e_12 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, e_12);
            }
        }
      }
  }
  return(t);
}
ATerm table_pop_0_0 (ATerm t)
{
  ATerm k_12 = NULL,l_12 = NULL,m_12 = NULL;
  if(match_cons(t, sym__2))
    {
      k_12 = ATgetArgument(t, 0);
      l_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm k_23 = t;
    int l_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_5 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm m_23 = ATgetArgument(t, 0);
            ATerm n_23 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(k_12, l_12);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm o_23 = ATgetFirst((ATermList) t);
            l_5 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = l_5;
        ;
        LocalPopChoice(l_23);
      }
    else
      {
        t = k_23;
        t = (ATerm) ATempty;
      }
    m_12 = t;
    t = SSL_table_put(k_12, l_12, m_12);
    t = (ATerm) ATmakeAppl(sym__2, k_12, l_12);
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm r_77 (ATerm), ATerm t)
{
  ATerm s_12 = NULL,t_12 = NULL,u_12 = NULL,v_12 = NULL;
  s_12 = t;
  t = r_77(t);
  t_12 = t;
  {
    ATerm p_23 = t;
    int q_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get(t_12, (ATerm) ATmakeAppl(sym_Scopes_0));
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
        v_12 = ATgetFirst((ATermList) t);
        u_12 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSL_table_put(t_12, (ATerm)ATmakeAppl(sym_Scopes_0), u_12);
    t = v_12;
    {
      ATerm t_3 (ATerm t)
      {
        ATerm w_12 = NULL;
        w_12 = t;
        t = (ATerm) ATmakeAppl(sym__2, t_12, w_12);
        t = table_pop_0_0(t);
        return(t);
      }
      t = map_1_0(t_3, t);
      t = s_12;
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm m_78 (ATerm), ATerm n_78 (ATerm), ATerm t)
{
  ATerm r_23 = t;
  int s_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = m_78(t);
      t = n_78(t);
      ;
      LocalPopChoice(s_23);
    }
  else
    {
      t = r_23;
      t = n_78(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm q_77 (ATerm), ATerm t)
{
  ATerm a_13 = NULL,b_13 = NULL,c_13 = NULL;
  a_13 = t;
  t = q_77(t);
  b_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_13, term_t_23);
  {
    ATerm u_23 = t;
    int v_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm w_23 = ATgetArgument(t, 0);
            ATerm x_23 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(b_13, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(v_23);
      }
    else
      {
        t = u_23;
        t = (ATerm) ATempty;
      }
    c_13 = t;
    t = SSL_table_put(b_13, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATinsert(CheckATermList(c_13), (ATerm) ATempty));
    t = a_13;
  }
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm v_80 (ATerm), ATerm t)
{
  ATerm h_13 = NULL;
  ATerm w_3 (ATerm t)
  {
    t = term_s_22;
    return(t);
  }
  t = begin_scope_1_0(w_3, t);
  {
    ATerm e_4 (ATerm t)
    {
      ATerm i_13 = NULL;
      i_13 = t;
      {
        ATerm y_23 = t;
        int z_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_table_get((ATerm)ATmakeAppl(sym_TempFiles_0), (ATerm) ATmakeAppl(sym_Scopes_0));
            ;
            LocalPopChoice(z_23);
          }
        else
          {
            t = y_23;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
          }
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            h_13 = ATgetFirst((ATermList) t);
            {
              ATerm a_24 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        t = h_13;
        {
          ATerm g_4 (ATerm t)
          {
            ATerm n_4 (ATerm t)
            {
              ATerm j_13 = NULL;
              j_13 = t;
              t = SSL_remove(j_13);
              return(t);
            }
            t = try_1_0(n_4, t);
            return(t);
          }
          t = map_1_0(g_4, t);
          t = i_13;
          {
            ATerm o_4 (ATerm t)
            {
              t = term_s_22;
              return(t);
            }
            t = end_scope_1_0(o_4, t);
          }
        }
      }
      return(t);
    }
    t = restore_always_2_0(v_80, e_4, t);
  }
  return(t);
}
ATerm xtc_io_1_0 (ATerm w_80 (ATerm), ATerm t)
{
  ATerm t_4 (ATerm t)
  {
    ATerm b_24 = t;
    int c_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_13 = NULL;
        t = term_u_22;
        t = get_config_0_0(t);
        k_13 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, k_13);
        ;
        LocalPopChoice(c_24);
      }
    else
      {
        t = b_24;
        t = term_d_24;
      }
    t = w_80(t);
    {
      ATerm u_4 (ATerm t)
      {
        ATerm e_24 = t;
        int f_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_t_22;
            t = get_config_0_0(t);
            ;
            LocalPopChoice(f_24);
          }
        else
          {
            t = e_24;
            t = term_g_24;
          }
        return(t);
      }
      t = copy_to_1_0(u_4, t);
    }
    return(t);
  }
  t = xtc_temp_files_1_0(t_4, t);
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  ATerm w_4 (ATerm t)
  {
    ATerm m_13 = NULL;
    m_13 = t;
    if(match_string(t, "-k"))
      {
        t = m_13;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
          _fail(t);
        t = m_13;
      }
    return(t);
  }
  ATerm z_4 (ATerm t)
  {
    ATerm n_13 = NULL,o_13 = NULL;
    n_13 = t;
    t = SSL_string_to_int(n_13);
    o_13 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)), o_13);
    t = n_13;
    return(t);
  }
  ATerm b_5 (ATerm t)
  {
    t = term_h_24;
    return(t);
  }
  t = ArgOption_3_0(w_4, z_4, b_5, t);
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm i_24 = t;
  int j_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_5 (ATerm t)
      {
        ATerm q_13 = NULL;
        q_13 = t;
        if(match_string(t, "-S"))
          {
            t = q_13;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
              _fail(t);
            t = q_13;
          }
        return(t);
      }
      ATerm d_5 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), (ATerm) ATmakeInt(0));
        t = term_l_24;
        return(t);
      }
      ATerm f_5 (ATerm t)
      {
        t = term_m_24;
        return(t);
      }
      t = Option_3_0(c_5, d_5, f_5, t);
      ;
      LocalPopChoice(j_24);
    }
  else
    {
      t = i_24;
      {
        ATerm n_24 = t;
        int o_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_5 (ATerm t)
            {
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
                _fail(t);
              return(t);
            }
            ATerm h_5 (ATerm t)
            {
              ATerm r_13 = NULL,s_13 = NULL;
              r_13 = t;
              t = SSL_string_to_int(r_13);
              s_13 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), s_13);
              t = (ATerm) ATmakeAppl(sym_Verbose_1, r_13);
              return(t);
            }
            ATerm k_5 (ATerm t)
            {
              t = term_p_24;
              return(t);
            }
            t = ArgOption_3_0(g_5, h_5, k_5, t);
            ;
            LocalPopChoice(o_24);
          }
        else
          {
            t = n_24;
            {
              ATerm m_5 (ATerm t)
              {
                if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
                  _fail(t);
                return(t);
              }
              ATerm n_5 (ATerm t)
              {
                t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                t = term_q_24;
                return(t);
              }
              ATerm o_5 (ATerm t)
              {
                t = term_r_24;
                return(t);
              }
              t = Option_3_0(m_5, n_5, o_5, t);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0_0 (ATerm t)
{
  ATerm s_24 = t;
  int t_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0_0(t);
      ;
      LocalPopChoice(t_24);
    }
  else
    {
      t = s_24;
      t = keep_option_0_0(t);
    }
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  ATerm p_5 (ATerm t)
  {
    ATerm u_13 = NULL;
    u_13 = t;
    if(match_string(t, "-o"))
      {
        t = u_13;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
          _fail(t);
        t = u_13;
      }
    return(t);
  }
  ATerm q_5 (ATerm t)
  {
    ATerm v_13 = NULL;
    v_13 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), v_13);
    t = (ATerm) ATmakeAppl(sym_Output_1, v_13);
    return(t);
  }
  ATerm r_5 (ATerm t)
  {
    t = term_u_24;
    return(t);
  }
  t = ArgOption_3_0(p_5, q_5, r_5, t);
  return(t);
}
ATerm aterm_output_option_0_0 (ATerm t)
{
  ATerm v_24 = t;
  int w_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0_0(t);
      ;
      LocalPopChoice(w_24);
    }
  else
    {
      t = v_24;
      {
        ATerm s_5 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm t_5 (ATerm t)
        {
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = term_x_24;
          return(t);
        }
        ATerm u_5 (ATerm t)
        {
          t = term_y_24;
          return(t);
        }
        t = Option_3_0(s_5, t_5, u_5, t);
      }
    }
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm b_14 = NULL,c_14 = NULL,f_14 = NULL,g_14 = NULL,h_14 = NULL;
  b_14 = t;
  if(match_string(t, "register-usage-info"))
    {
      t = b_14;
      t = register_usage_1_0(j_0, t);
    }
  else
    {
      ATerm l_14 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          c_14 = ATgetFirst((ATermList) t);
          f_14 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = f_14;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          g_14 = ATgetFirst((ATermList) t);
          h_14 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = c_14;
      t = h_0(t);
      t = g_14;
      t = i_0(t);
      l_14 = t;
      t = (ATerm) ATinsert(CheckATermList(h_14), l_14);
    }
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  ATerm v_5 (ATerm t)
  {
    ATerm n_14 = NULL;
    n_14 = t;
    if(match_string(t, "-i"))
      {
        t = n_14;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
          _fail(t);
        t = n_14;
      }
    return(t);
  }
  ATerm x_5 (ATerm t)
  {
    ATerm o_14 = NULL;
    o_14 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), o_14);
    t = (ATerm) ATmakeAppl(sym_Input_1, o_14);
    return(t);
  }
  ATerm y_5 (ATerm t)
  {
    t = term_z_24;
    return(t);
  }
  t = ArgOption_3_0(v_5, x_5, y_5, t);
  return(t);
}
ATerm io_options_0_0 (ATerm t)
{
  ATerm a_25 = t;
  int b_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      ;
      LocalPopChoice(b_25);
    }
  else
    {
      t = a_25;
      {
        ATerm c_25 = t;
        int d_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0_0(t);
            ;
            LocalPopChoice(d_25);
          }
        else
          {
            t = c_25;
            t = general_options_0_0(t);
          }
      }
    }
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm p_14 = NULL,q_14 = NULL;
  p_14 = t;
  t = term_q_22;
  t = whoami_0_0(t);
  q_14 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue))), q_14), (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue))));
  t = SSL_exit((ATerm) ATmakeInt(1));
  t = p_14;
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm r_14 = NULL;
  t = report_run_time_0_0(t);
  t = term_q_22;
  t = whoami_0_0(t);
  r_14 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue))), r_14));
  t = SSL_exit((ATerm) ATmakeInt(1));
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_e_25;
  t = get_config_0_0(t);
  return(t);
}
ATerm foldr_2_0 (ATerm x_75 (ATerm), ATerm y_75 (ATerm), ATerm t)
{
  ATerm f_25 = t;
  int g_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = x_75(t);
      ;
      LocalPopChoice(g_25);
    }
  else
    {
      t = f_25;
      {
        ATerm u_14 = NULL,v_14 = NULL,y_14 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            u_14 = ATgetFirst((ATermList) t);
            v_14 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = v_14;
        t = foldr_2_0(x_75, y_75, t);
        y_14 = t;
        t = (ATerm) ATmakeAppl(sym__2, u_14, y_14);
        t = y_75(t);
      }
    }
  return(t);
}
ATerm crush_2_0 (ATerm v_73 (ATerm), ATerm w_73 (ATerm), ATerm t)
{
  ATerm z_14 = NULL,a_15 = NULL;
  z_14 = t;
  t = SSL_explode_term(z_14);
  if(match_cons(t, sym__2))
    {
      ATerm h_25 = ATgetArgument(t, 0);
      a_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_15;
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
  ATerm b_15 = NULL;
  t = times_0_0(t);
  {
    ATerm z_5 (ATerm t)
    {
      t = term_k_24;
      return(t);
    }
    ATerm a_6 (ATerm t)
    {
      ATerm c_15 = NULL,d_15 = NULL;
      if(match_cons(t, sym__2))
        {
          c_15 = ATgetArgument(t, 0);
          d_15 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm i_25 = t;
        int j_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(c_15, d_15);
            ;
            LocalPopChoice(j_25);
          }
        else
          {
            t = i_25;
            t = SSL_addr(c_15, d_15);
          }
      }
      return(t);
    }
    t = crush_2_0(z_5, a_6, t);
    b_15 = t;
    t = SSL_TicksToSeconds(b_15);
  }
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm o_15 = NULL,q_15 = NULL,r_15 = NULL;
  o_15 = t;
  if(match_cons(t, sym__2))
    {
      q_15 = ATgetArgument(t, 0);
      r_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm k_25 = t;
    int l_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_15;
        if((q_15 != t))
          {
            _fail(t);
          }
        t = o_15;
        ;
        LocalPopChoice(l_25);
      }
    else
      {
        t = k_25;
        t = o_15;
        {
          ATerm m_25 = t;
          int n_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(q_15, r_15);
              ;
              LocalPopChoice(n_25);
            }
          else
            {
              t = m_25;
              t = SSL_gtr(q_15, r_15);
            }
          t = (ATerm) ATmakeAppl(sym__2, q_15, r_15);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm r_78 (ATerm), ATerm t)
{
  ATerm c_6 (ATerm t)
  {
    ATerm u_15 = NULL,v_15 = NULL;
    u_15 = t;
    t = term_l_8;
    t = get_config_0_0(t);
    v_15 = t;
    t = (ATerm) ATmakeAppl(sym__2, v_15, term_o_8);
    t = geq_0_0(t);
    t = u_15;
    t = r_78(t);
    return(t);
  }
  t = try_1_0(c_6, t);
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  ATerm d_6 (ATerm t)
  {
    ATerm y_15 = NULL,z_15 = NULL;
    t = run_time_0_0(t);
    y_15 = t;
    t = term_q_22;
    t = whoami_0_0(t);
    z_15 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue))), y_15), (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue))), z_15));
    t = (ATerm) ATmakeAppl(sym__2, term_a_22, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_o_25), y_15), term_x_13), z_15));
    return(t);
  }
  t = if_verbose1_1_0(d_6, t);
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
  ATerm p_25 = t;
  int q_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_r_25;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(q_25);
    }
  else
    {
      t = p_25;
      {
        ATerm f_6 (ATerm t)
        {
          ATerm s_25 = t;
          int t_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(!(match_cons(t, sym_Help_0)))
                _fail(t);
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
                    t = Undefined_1_0(_id, t);
                    ;
                    LocalPopChoice(v_25);
                  }
                else
                  {
                    t = u_25;
                    if(!(match_cons(t, sym_Version_0)))
                      _fail(t);
                  }
              }
            }
          return(t);
        }
        t = option_defined_1_0(f_6, t);
      }
    }
  t = x_82(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm c_16 = NULL,d_16 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_16 = ATgetFirst((ATermList) t);
      d_16 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm h_16 = NULL,i_16 = NULL;
        t = d_16;
        t = g_0(t);
        h_16 = t;
        t = c_16;
        t = f_0(t);
        i_16 = t;
        t = d_16;
        {
          ATerm g_6 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(h_16), i_16);
            return(t);
          }
          t = reverse_acc_2_0(f_0, g_6, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_q_22;
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
ATerm Program_1_0 (ATerm f_62 (ATerm), ATerm t)
{
  ATerm j_16 = NULL,k_16 = NULL,l_16 = NULL,m_16 = NULL;
  m_16 = t;
  if(match_cons(t, sym_Program_1))
    {
      k_16 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_16);
  j_16 = t;
  t = k_16;
  t = f_62(t);
  l_16 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, l_16), j_16);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm w_25 = t;
  int x_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_e_25;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(x_25);
    }
  else
    {
      t = w_25;
      {
        ATerm k_6 (ATerm t)
        {
          t = Program_1_0(_id, t);
          return(t);
        }
        t = option_defined_1_0(k_6, t);
      }
    }
  t = try_1_0(_fail, t);
  t = term_y_25;
  t = echo_0_0(t);
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)));
  t = reverse_0_0(t);
  {
    ATerm l_6 (ATerm t)
    {
      ATerm q_16 = NULL;
      q_16 = t;
      t = (ATerm) ATinsert(ATinsert(ATempty, q_16), term_z_25);
      t = echo_0_0(t);
      return(t);
    }
    t = map_1_0(l_6, t);
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
  ATerm r_16 = NULL,s_16 = NULL,t_16 = NULL,u_16 = NULL;
  u_16 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      s_16 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_16);
  r_16 = t;
  t = s_16;
  t = g_62(t);
  t_16 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, t_16), r_16);
  return(t);
}
ATerm fetch_1_0 (ATerm r_69 (ATerm), ATerm t)
{
  ATerm y_16 (ATerm t)
  {
    ATerm a_26 = t;
    int b_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(r_69, _id, t);
        ;
        LocalPopChoice(b_26);
      }
    else
      {
        t = a_26;
        t = Cons_2_0(_id, y_16, t);
      }
    return(t);
  }
  t = y_16(t);
  return(t);
}
ATerm option_defined_1_0 (ATerm s_83 (ATerm), ATerm t)
{
  t = fetch_1_0(s_83, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm a_17 = NULL,b_17 = NULL;
  a_17 = t;
  {
    ATerm c_26 = t;
    int d_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = a_17;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm e_26 = ATgetFirst((ATermList) t);
                ATerm f_26 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = a_17;
          }
        ;
        LocalPopChoice(d_26);
      }
    else
      {
        t = c_26;
        t = (ATerm) ATinsert(ATempty, a_17);
      }
    b_17 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stdout_0), b_17);
    t = a_17;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_e_25;
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
  ATerm g_26 = t;
  int h_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(h_26);
    }
  else
    {
      t = g_26;
      {
        ATerm j_17 = NULL,k_17 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            j_17 = ATgetFirst((ATermList) t);
            k_17 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = j_17;
        {
          ATerm m_6 (ATerm t)
          {
            t = k_17;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(m_6, t);
        }
      }
    }
  return(t);
}
ATerm conc_more_lists_0_0 (ATerm t)
{
  ATerm o_17 = NULL,p_17 = NULL;
  o_17 = t;
  t = SSL_explode_term(o_17);
  if(match_cons(t, sym__2))
    {
      ATerm i_26 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) i_26) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      p_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_17;
  t = concat_0_0(t);
  return(t);
}
ATerm at_end_1_0 (ATerm x_69 (ATerm), ATerm t)
{
  ATerm q_17 (ATerm t)
  {
    ATerm j_26 = t;
    int k_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, q_17, t);
        ;
        LocalPopChoice(k_26);
      }
    else
      {
        t = j_26;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = x_69(t);
      }
    return(t);
  }
  t = q_17(t);
  return(t);
}
ATerm conc_two_lists_0_0 (ATerm t)
{
  ATerm r_17 = NULL,s_17 = NULL;
  if(match_cons(t, sym__2))
    {
      s_17 = ATgetArgument(t, 0);
      r_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_17;
  {
    ATerm p_6 (ATerm t)
    {
      t = r_17;
      return(t);
    }
    t = at_end_1_0(p_6, t);
  }
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm l_26 = t;
  int m_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0_0(t);
      ;
      LocalPopChoice(m_26);
    }
  else
    {
      t = l_26;
      t = conc_more_lists_0_0(t);
    }
  return(t);
}
ATerm _2_0 (ATerm q_55 (ATerm), ATerm r_55 (ATerm), ATerm t)
{
  ATerm t_17 = NULL,u_17 = NULL,v_17 = NULL,w_17 = NULL,x_17 = NULL,y_17 = NULL;
  y_17 = t;
  if(match_cons(t, sym__2))
    {
      u_17 = ATgetArgument(t, 0);
      v_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_17);
  t_17 = t;
  t = u_17;
  t = q_55(t);
  w_17 = t;
  t = v_17;
  t = r_55(t);
  x_17 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, w_17, x_17), t_17);
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  ATerm c_18 = NULL;
  ATerm q_6 (ATerm t)
  {
    ATerm d_18 = NULL;
    d_18 = t;
    t = SSL_explode_string(d_18);
    return(t);
  }
  ATerm r_6 (ATerm t)
  {
    ATerm e_18 = NULL;
    e_18 = t;
    t = SSL_explode_string(e_18);
    return(t);
  }
  t = _2_0(q_6, r_6, t);
  t = conc_0_0(t);
  c_18 = t;
  t = SSL_implode_string(c_18);
  return(t);
}
ATerm debug_1_0 (ATerm a_65 (ATerm), ATerm t)
{
  ATerm f_18 = NULL,g_18 = NULL;
  f_18 = t;
  t = a_65(t);
  g_18 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, f_18), g_18));
  t = f_18;
  return(t);
}
ATerm map_1_0 (ATerm h_69 (ATerm), ATerm t)
{
  ATerm h_18 (ATerm t)
  {
    ATerm n_26 = t;
    int o_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(o_26);
      }
    else
      {
        t = n_26;
        t = Cons_2_0(h_69, h_18, t);
      }
    return(t);
  }
  t = h_18(t);
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm p_26 = t;
  int q_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_18 = NULL;
      n_18 = t;
      t = SSL_is_string(n_18);
      ;
      LocalPopChoice(q_26);
    }
  else
    {
      t = p_26;
      {
        ATerm r_26 = t;
        int s_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_6 (ATerm t)
            {
              t = try_1_0(eval_config_0_0, t);
              return(t);
            }
            t = map_1_0(s_6, t);
            ;
            LocalPopChoice(s_26);
          }
        else
          {
            t = r_26;
            {
              ATerm r_18 = NULL,s_18 = NULL,t_18 = NULL;
              r_18 = t;
              if(match_cons(t, sym_Path_1))
                {
                  s_18 = ATgetArgument(t, 0);
                  t = s_18;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      s_18 = ATgetArgument(t, 0);
                      t = s_18;
                      {
                        ATerm t_26 = t;
                        int u_26 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(u_26);
                          }
                        else
                          {
                            t = t_26;
                            {
                              ATerm t_6 (ATerm t)
                              {
                                t = term_v_26;
                                return(t);
                              }
                              t = debug_1_0(t_6, t);
                              _fail(t);
                            }
                          }
                      }
                    }
                  else
                    {
                      ATerm x_18 = NULL,y_18 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          s_18 = ATgetArgument(t, 0);
                          t_18 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = s_18;
                      t = eval_config_0_0(t);
                      x_18 = t;
                      t = t_18;
                      t = eval_config_0_0(t);
                      y_18 = t;
                      t = (ATerm) ATmakeAppl(sym__2, x_18, y_18);
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
  ATerm b_19 = NULL;
  b_19 = t;
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), b_19);
  {
    ATerm u_6 (ATerm t)
    {
      ATerm c_19 = NULL;
      t = eval_config_0_0(t);
      c_19 = t;
      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), b_19, c_19);
      t = c_19;
      return(t);
    }
    t = try_1_0(u_6, t);
  }
  return(t);
}
ATerm try_1_0 (ATerm x_77 (ATerm), ATerm t)
{
  ATerm w_26 = t;
  int x_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = x_77(t);
      ;
      LocalPopChoice(x_26);
    }
  else
    {
      t = w_26;
    }
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm y_26 = t;
  int z_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_6 (ATerm t)
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
          _fail(t);
        return(t);
      }
      ATerm w_6 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
        t = term_c_27;
        return(t);
      }
      ATerm x_6 (ATerm t)
      {
        t = term_d_27;
        return(t);
      }
      t = Option_3_0(v_6, w_6, x_6, t);
      ;
      LocalPopChoice(z_26);
    }
  else
    {
      t = y_26;
      {
        ATerm y_6 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm z_6 (ATerm t)
        {
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = term_e_27;
          return(t);
        }
        ATerm a_7 (ATerm t)
        {
          t = term_f_27;
          return(t);
        }
        t = Option_3_0(y_6, z_6, a_7, t);
      }
    }
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm f_19 = NULL,g_19 = NULL,h_19 = NULL,i_19 = NULL;
  if(match_cons(t, sym__3))
    {
      f_19 = ATgetArgument(t, 0);
      g_19 = ATgetArgument(t, 1);
      h_19 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, f_19, g_19);
  {
    ATerm g_27 = t;
    int h_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm i_27 = ATgetArgument(t, 0);
            ATerm j_27 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(f_19, g_19);
        ;
        LocalPopChoice(h_27);
      }
    else
      {
        t = g_27;
        t = (ATerm) ATempty;
      }
    i_19 = t;
    t = SSL_table_put(f_19, g_19, (ATerm) ATinsert(CheckATermList(i_19), h_19));
    t = (ATerm) ATmakeAppl(sym__3, f_19, g_19, h_19);
  }
  return(t);
}
ATerm register_usage_1_0 (ATerm x_84 (ATerm), ATerm t)
{
  ATerm n_19 = NULL;
  t = term_q_22;
  t = x_84(t);
  n_19 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_k_27, term_l_27, n_19);
  t = table_push_0_0(t);
  _fail(t);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm p_19 = NULL,q_19 = NULL,r_19 = NULL;
  p_19 = t;
  if(match_string(t, "register-usage-info"))
    {
      t = p_19;
      t = register_usage_1_0(d_0, t);
    }
  else
    {
      ATerm u_19 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          q_19 = ATgetFirst((ATermList) t);
          r_19 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = q_19;
      t = a_0(t);
      t = term_q_22;
      t = b_0(t);
      u_19 = t;
      t = (ATerm) ATinsert(CheckATermList(r_19), u_19);
    }
  return(t);
}
ATerm system_usage_switch_0_0 (ATerm t)
{
  ATerm c_7 (ATerm t)
  {
    ATerm w_19 = NULL;
    w_19 = t;
    if(match_string(t, "--help"))
      {
        t = w_19;
      }
    else
      {
        if(match_string(t, "-h"))
          {
            t = w_19;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
              _fail(t);
            t = w_19;
          }
      }
    return(t);
  }
  ATerm d_7 (ATerm t)
  {
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
    t = term_m_27;
    return(t);
  }
  ATerm e_7 (ATerm t)
  {
    t = term_n_27;
    return(t);
  }
  t = Option_3_0(c_7, d_7, e_7, t);
  return(t);
}
ATerm Cons_2_0 (ATerm z_56 (ATerm), ATerm a_57 (ATerm), ATerm t)
{
  ATerm y_19 = NULL,z_19 = NULL,a_20 = NULL,b_20 = NULL,c_20 = NULL,d_20 = NULL;
  d_20 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_19 = ATgetFirst((ATermList) t);
      a_20 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_20);
  y_19 = t;
  t = z_19;
  t = z_56(t);
  b_20 = t;
  t = a_20;
  t = a_57(t);
  c_20 = t;
  t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(c_20), b_20), y_19);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm v_84 (ATerm), ATerm t)
{
  ATerm k_20 = NULL;
  k_20 = t;
  {
    ATerm f_7 (ATerm t)
    {
      t = term_o_27;
      t = v_84(t);
      return(t);
    }
    t = try_1_0(f_7, t);
    t = k_20;
    {
      ATerm y_7 (ATerm t)
      {
        ATerm l_20 = NULL;
        l_20 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), l_20);
        t = (ATerm) ATmakeAppl(sym_Program_1, l_20);
        return(t);
      }
      ATerm z_7 (ATerm t)
      {
        ATerm p_27 = t;
        int q_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_27 = t;
            int s_27 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(s_27);
              }
            else
              {
                t = r_27;
                t = v_84(t);
                t = Cons_2_0(_id, z_7, t);
              }
            ;
            LocalPopChoice(q_27);
          }
        else
          {
            t = p_27;
            {
              ATerm n_20 = NULL,o_20 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  n_20 = ATgetFirst((ATermList) t);
                  o_20 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(o_20), (ATerm) ATmakeAppl(sym_Undefined_1, n_20));
            }
          }
        return(t);
      }
      t = Cons_2_0(y_7, z_7, t);
    }
  }
  return(t);
}
ATerm parse_options_1_0 (ATerm u_84 (ATerm), ATerm t)
{
  ATerm u_20 = NULL,v_20 = NULL,w_20 = NULL;
  u_20 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATempty);
  t = u_20;
  {
    ATerm a_8 (ATerm t)
    {
      ATerm t_27 = t;
      int u_27 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = u_84(t);
          ;
          LocalPopChoice(u_27);
        }
      else
        {
          t = t_27;
          {
            ATerm v_27 = t;
            int w_27 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = system_usage_switch_0_0(t);
                ;
                LocalPopChoice(w_27);
              }
            else
              {
                t = v_27;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(a_8, t);
    {
      ATerm b_8 (ATerm t)
      {
        ATerm x_27 = t;
        int y_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_21 = NULL;
            g_21 = t;
            {
              ATerm z_27 = t;
              int a_28 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = g_21;
                  {
                    ATerm b_28 = t;
                    int c_28 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = term_r_25;
                        t = get_config_0_0(t);
                        ;
                        LocalPopChoice(c_28);
                      }
                    else
                      {
                        t = b_28;
                        {
                          ATerm c_8 (ATerm t)
                          {
                            if(!(match_cons(t, sym_Help_0)))
                              _fail(t);
                            return(t);
                          }
                          t = option_defined_1_0(c_8, t);
                        }
                      }
                    t = g_21;
                    t = system_usage_0_0(t);
                    t = SSL_exit((ATerm) ATmakeInt(0));
                  }
                  ;
                  LocalPopChoice(a_28);
                }
              else
                {
                  t = z_27;
                  t = term_b_27;
                  t = get_config_0_0(t);
                  t = g_21;
                  t = system_about_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
            }
            ;
            LocalPopChoice(y_27);
          }
        else
          {
            t = x_27;
            {
              ATerm d_8 (ATerm t)
              {
                ATerm e_8 (ATerm t)
                {
                  v_20 = t;
                  return(t);
                }
                t = Undefined_1_0(e_8, t);
                return(t);
              }
              t = option_defined_1_0(d_8, t);
              t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(v_20)), (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue))));
              t = (ATerm) ATmakeAppl(sym__2, term_a_22, (ATerm) ATinsert(ATinsert(ATempty, not_null(v_20)), term_d_28));
              t = system_usage_0_0(t);
              t = SSL_exit((ATerm) ATmakeInt(1));
            }
          }
        return(t);
      }
      t = try_1_0(b_8, t);
      w_20 = t;
      t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)));
      t = w_20;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm z_82 (ATerm), ATerm a_83 (ATerm), ATerm b_83 (ATerm), ATerm c_83 (ATerm), ATerm t)
{
  ATerm w_13 = NULL;
  t = parse_options_1_0(z_82, t);
  w_13 = t;
  t = SSL_table_create((ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), w_13);
  t = w_13;
  t = b_83(t);
  {
    ATerm e_28 = t;
    int f_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(a_83, t);
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
              t = c_83(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(h_28);
            }
          else
            {
              t = g_28;
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
  ATerm f_8 (ATerm t)
  {
    ATerm i_28 = t;
    int j_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_81(t);
        ;
        LocalPopChoice(j_28);
      }
    else
      {
        t = i_28;
        t = io_options_0_0(t);
      }
    return(t);
  }
  ATerm g_8 (ATerm t)
  {
    t = xtc_io_1_0(b_81, t);
    return(t);
  }
  t = option_wrap_2_0(f_8, g_8, t);
  return(t);
}
ATerm xtc_io_wrap_1_0 (ATerm z_80 (ATerm), ATerm t)
{
  t = xtc_io_wrap_2_0(_fail, z_80, t);
  return(t);
}
ATerm io_pp_box_0_0 (ATerm t)
{
  ATerm h_8 (ATerm t)
  {
    ATerm i_8 (ATerm t)
    {
      t = term_k_28;
      return(t);
    }
    ATerm j_8 (ATerm t)
    {
      ATerm j_21 = NULL;
      t = term_l_28;
      t = xtc_find_0_0(t);
      j_21 = t;
      t = (ATerm) ATinsert(ATinsert(ATempty, j_21), term_m_28);
      return(t);
    }
    t = xtc_transform_2_0(i_8, j_8, t);
    t = xtc_abox_format_0_0(t);
    t = xtc_abox2text_0_0(t);
    return(t);
  }
  t = xtc_io_wrap_1_0(h_8, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = io_pp_box_0_0(t);
  return(t);
}
