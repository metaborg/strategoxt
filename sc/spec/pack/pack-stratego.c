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
ATerm term_u_64;
ATerm term_t_64;
ATerm term_s_64;
ATerm term_d_64;
ATerm term_c_64;
ATerm term_b_64;
ATerm term_k_63;
ATerm term_j_63;
ATerm term_e_63;
ATerm term_z_62;
ATerm term_y_62;
ATerm term_x_62;
ATerm term_w_62;
ATerm term_v_62;
ATerm term_u_62;
ATerm term_l_62;
ATerm term_g_62;
ATerm term_d_62;
ATerm term_w_61;
ATerm term_g_61;
ATerm term_f_61;
ATerm term_y_60;
ATerm term_x_60;
ATerm term_w_60;
ATerm term_v_60;
ATerm term_u_60;
ATerm term_t_60;
ATerm term_b_60;
ATerm term_a_60;
ATerm term_z_59;
ATerm term_y_59;
ATerm term_t_59;
ATerm term_s_59;
ATerm term_r_59;
ATerm term_q_59;
ATerm term_p_59;
ATerm term_o_59;
ATerm term_n_59;
ATerm term_m_59;
ATerm term_l_59;
ATerm term_k_59;
ATerm term_f_59;
ATerm term_u_57;
ATerm term_t_57;
ATerm term_m_57;
ATerm term_u_55;
ATerm term_r_55;
ATerm term_q_55;
ATerm term_p_55;
ATerm term_o_55;
ATerm term_n_55;
ATerm term_h_55;
ATerm term_t_54;
ATerm term_b_54;
ATerm term_a_54;
ATerm term_t_53;
ATerm term_n_53;
ATerm term_k_53;
ATerm term_j_53;
ATerm term_d_53;
ATerm term_c_53;
ATerm term_y_52;
ATerm term_v_52;
ATerm term_u_52;
ATerm term_m_52;
ATerm term_l_52;
ATerm term_i_52;
ATerm term_g_52;
ATerm term_f_52;
ATerm term_e_52;
ATerm term_z_51;
ATerm term_u_51;
ATerm term_t_51;
ATerm term_r_51;
ATerm term_q_51;
ATerm term_p_51;
ATerm term_o_51;
ATerm term_n_51;
ATerm term_m_51;
ATerm term_i_51;
ATerm term_f_51;
ATerm term_e_51;
ATerm term_r_49;
ATerm term_j_49;
ATerm term_i_49;
ATerm term_h_49;
ATerm term_g_49;
ATerm term_f_49;
ATerm term_e_49;
ATerm term_d_49;
ATerm term_c_49;
ATerm term_b_49;
ATerm term_a_49;
ATerm term_z_48;
ATerm term_y_48;
ATerm term_x_48;
ATerm term_w_48;
ATerm term_v_48;
ATerm term_u_48;
ATerm term_t_48;
ATerm term_s_48;
ATerm term_r_48;
ATerm term_q_48;
ATerm term_p_48;
ATerm term_o_48;
ATerm term_n_48;
ATerm term_m_48;
ATerm term_l_48;
ATerm term_k_48;
ATerm term_j_48;
ATerm term_i_48;
ATerm term_h_48;
ATerm term_g_48;
ATerm term_f_48;
ATerm term_e_48;
ATerm term_d_48;
ATerm term_c_48;
ATerm term_b_48;
ATerm term_a_48;
ATerm term_z_47;
ATerm term_y_47;
ATerm term_x_47;
ATerm term_w_47;
ATerm term_v_47;
ATerm term_u_47;
ATerm term_t_47;
ATerm term_s_47;
ATerm term_r_47;
ATerm term_q_47;
ATerm term_p_47;
ATerm term_o_47;
ATerm term_n_47;
ATerm term_m_47;
ATerm term_l_47;
ATerm term_k_47;
ATerm term_j_47;
ATerm term_i_47;
ATerm term_h_47;
ATerm term_g_47;
ATerm term_f_47;
ATerm term_e_47;
ATerm term_d_47;
ATerm term_c_47;
ATerm term_b_47;
ATerm term_a_47;
ATerm term_z_46;
ATerm term_y_46;
ATerm term_x_46;
ATerm term_w_46;
ATerm term_v_46;
ATerm term_u_46;
ATerm term_t_46;
ATerm term_s_46;
ATerm term_r_46;
ATerm term_q_46;
ATerm term_p_46;
ATerm term_o_46;
ATerm term_n_46;
ATerm term_m_46;
ATerm term_l_46;
ATerm term_k_46;
ATerm term_j_46;
ATerm term_i_46;
ATerm term_h_46;
ATerm term_g_46;
ATerm term_f_46;
ATerm term_e_46;
ATerm term_d_46;
ATerm term_c_46;
ATerm term_b_46;
ATerm term_a_46;
ATerm term_z_45;
ATerm term_y_45;
ATerm term_x_45;
ATerm term_w_45;
ATerm term_v_45;
ATerm term_u_45;
ATerm term_t_45;
ATerm term_s_45;
ATerm term_r_45;
ATerm term_q_45;
ATerm term_p_45;
ATerm term_o_45;
ATerm term_n_45;
ATerm term_m_45;
ATerm term_l_45;
ATerm term_k_45;
ATerm term_j_45;
ATerm term_i_45;
ATerm term_h_45;
ATerm term_g_45;
ATerm term_f_45;
ATerm term_e_45;
ATerm term_b_45;
ATerm term_a_45;
ATerm term_z_44;
ATerm term_y_44;
ATerm term_r_44;
ATerm term_o_44;
ATerm term_j_44;
ATerm term_i_44;
ATerm term_h_44;
ATerm term_y_43;
ATerm term_x_43;
ATerm term_c_43;
ATerm term_a_43;
ATerm term_z_42;
ATerm term_y_42;
ATerm term_x_42;
ATerm term_w_42;
ATerm term_t_42;
ATerm term_p_42;
ATerm term_k_42;
ATerm term_j_42;
void init_constant_terms (void)
{
  ATprotect(&(term_j_42));
  term_j_42 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_k_42));
  term_k_42 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_p_42));
  term_p_42 = (ATerm) ATmakeAppl(ATmakeSymbol("--dep", 0, ATtrue));
  ATprotect(&(term_t_42));
  term_t_42 = (ATerm) ATmakeAppl(ATmakeSymbol("--nodep", 0, ATtrue));
  ATprotect(&(term_w_42));
  term_w_42 = (ATerm) ATmakeAppl(ATmakeSymbol(".", 0, ATtrue));
  ATprotect(&(term_x_42));
  term_x_42 = (ATerm) ATmakeAppl(ATmakeSymbol("dep", 0, ATtrue));
  ATprotect(&(term_y_42));
  term_y_42 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_z_42));
  term_z_42 = (ATerm) ATmakeAppl(ATmakeSymbol(" \\\n	", 0, ATtrue));
  ATprotect(&(term_a_43));
  term_a_43 = (ATerm) ATmakeAppl(ATmakeSymbol(" :", 0, ATtrue));
  ATprotect(&(term_c_43));
  term_c_43 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_x_43));
  term_x_43 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_y_43));
  term_y_43 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_h_44));
  term_h_44 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_i_44));
  term_i_44 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_j_44));
  term_j_44 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_o_44));
  term_o_44 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_r_44));
  term_r_44 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_y_44));
  term_y_44 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_z_44));
  term_z_44 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_a_45));
  term_a_45 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_b_45));
  term_b_45 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_e_45));
  term_e_45 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_f_45));
  term_f_45 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_g_45));
  term_g_45 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_45, term_o_44, term_f_45);
  ATprotect(&(term_h_45));
  term_h_45 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_i_45));
  term_i_45 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_j_45));
  term_j_45 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_k_45));
  term_k_45 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_45, term_i_45, term_j_45);
  ATprotect(&(term_l_45));
  term_l_45 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_m_45));
  term_m_45 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_n_45));
  term_n_45 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_o_45));
  term_o_45 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_45, term_m_45, term_n_45);
  ATprotect(&(term_p_45));
  term_p_45 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_q_45));
  term_q_45 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_r_45));
  term_r_45 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_s_45));
  term_s_45 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_45, term_q_45, term_r_45);
  ATprotect(&(term_t_45));
  term_t_45 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_u_45));
  term_u_45 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_v_45));
  term_v_45 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_w_45));
  term_w_45 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_45, term_u_45, term_v_45);
  ATprotect(&(term_x_45));
  term_x_45 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_y_45));
  term_y_45 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_z_45));
  term_z_45 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_a_46));
  term_a_46 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_45, term_y_45, term_z_45);
  ATprotect(&(term_b_46));
  term_b_46 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_c_46));
  term_c_46 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_d_46));
  term_d_46 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_e_46));
  term_e_46 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_46, term_c_46, term_d_46);
  ATprotect(&(term_f_46));
  term_f_46 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_g_46));
  term_g_46 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_h_46));
  term_h_46 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_i_46));
  term_i_46 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_46, term_g_46, term_h_46);
  ATprotect(&(term_j_46));
  term_j_46 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_k_46));
  term_k_46 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_l_46));
  term_l_46 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_m_46));
  term_m_46 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_46, term_k_46, term_l_46);
  ATprotect(&(term_n_46));
  term_n_46 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_o_46));
  term_o_46 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_p_46));
  term_p_46 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_q_46));
  term_q_46 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_46, term_o_46, term_p_46);
  ATprotect(&(term_r_46));
  term_r_46 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_s_46));
  term_s_46 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_t_46));
  term_t_46 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_u_46));
  term_u_46 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_46, term_s_46, term_t_46);
  ATprotect(&(term_v_46));
  term_v_46 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_w_46));
  term_w_46 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_x_46));
  term_x_46 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_y_46));
  term_y_46 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_46, term_w_46, term_x_46);
  ATprotect(&(term_z_46));
  term_z_46 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_a_47));
  term_a_47 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_b_47));
  term_b_47 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_c_47));
  term_c_47 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_46, term_a_47, term_b_47);
  ATprotect(&(term_d_47));
  term_d_47 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_e_47));
  term_e_47 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_f_47));
  term_f_47 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_g_47));
  term_g_47 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_47, term_e_47, term_f_47);
  ATprotect(&(term_h_47));
  term_h_47 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_i_47));
  term_i_47 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_j_47));
  term_j_47 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_k_47));
  term_k_47 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_47, term_i_47, term_j_47);
  ATprotect(&(term_l_47));
  term_l_47 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_m_47));
  term_m_47 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_n_47));
  term_n_47 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_o_47));
  term_o_47 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_47, term_m_47, term_n_47);
  ATprotect(&(term_p_47));
  term_p_47 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_q_47));
  term_q_47 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_r_47));
  term_r_47 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_s_47));
  term_s_47 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_47, term_q_47, term_r_47);
  ATprotect(&(term_t_47));
  term_t_47 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_u_47));
  term_u_47 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_v_47));
  term_v_47 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_w_47));
  term_w_47 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_47, term_u_47, term_v_47);
  ATprotect(&(term_x_47));
  term_x_47 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_y_47));
  term_y_47 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_z_47));
  term_z_47 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_a_48));
  term_a_48 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_47, term_y_47, term_z_47);
  ATprotect(&(term_b_48));
  term_b_48 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_c_48));
  term_c_48 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_d_48));
  term_d_48 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_48, term_c_43, term_c_48);
  ATprotect(&(term_e_48));
  term_e_48 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_f_48));
  term_f_48 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_g_48));
  term_g_48 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_h_48));
  term_h_48 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_48, term_f_48, term_g_48);
  ATprotect(&(term_i_48));
  term_i_48 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_j_48));
  term_j_48 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_k_48));
  term_k_48 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_l_48));
  term_l_48 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_48, term_j_48, term_k_48);
  ATprotect(&(term_m_48));
  term_m_48 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_n_48));
  term_n_48 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_o_48));
  term_o_48 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_p_48));
  term_p_48 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_48, term_n_48, term_o_48);
  ATprotect(&(term_q_48));
  term_q_48 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_r_48));
  term_r_48 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_s_48));
  term_s_48 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_t_48));
  term_t_48 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_48, term_r_48, term_s_48);
  ATprotect(&(term_u_48));
  term_u_48 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_v_48));
  term_v_48 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_w_48));
  term_w_48 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_x_48));
  term_x_48 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_48, term_v_48, term_w_48);
  ATprotect(&(term_y_48));
  term_y_48 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_z_48));
  term_z_48 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_a_49));
  term_a_49 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_b_49));
  term_b_49 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_48, term_z_48, term_a_49);
  ATprotect(&(term_c_49));
  term_c_49 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_d_49));
  term_d_49 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_e_49));
  term_e_49 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_f_49));
  term_f_49 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_49, term_d_49, term_e_49);
  ATprotect(&(term_g_49));
  term_g_49 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_h_49));
  term_h_49 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_i_49));
  term_i_49 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_j_49));
  term_j_49 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_49, term_h_49, term_i_49);
  ATprotect(&(term_r_49));
  term_r_49 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_e_51));
  term_e_51 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_f_51));
  term_f_51 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_i_51));
  term_i_51 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_m_51));
  term_m_51 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_n_51));
  term_n_51 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_o_51));
  term_o_51 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_p_51));
  term_p_51 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_q_51));
  term_q_51 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_r_51));
  term_r_51 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_t_51));
  term_t_51 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_u_51));
  term_u_51 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_z_51));
  term_z_51 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_e_52));
  term_e_52 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_f_52));
  term_f_52 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_g_52));
  term_g_52 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_i_52));
  term_i_52 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_l_52));
  term_l_52 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_m_52));
  term_m_52 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_u_52));
  term_u_52 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_v_52));
  term_v_52 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_y_52));
  term_y_52 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_c_53));
  term_c_53 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_d_53));
  term_d_53 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file> (file, mode)", 0, ATtrue));
  ATprotect(&(term_j_53));
  term_j_53 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_k_53));
  term_k_53 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_n_53));
  term_n_53 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_t_53));
  term_t_53 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_a_54));
  term_a_54 = (ATerm) ATmakeAppl(ATmakeSymbol("parse-stratego", 0, ATtrue));
  ATprotect(&(term_b_54));
  term_b_54 = (ATerm) ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue));
  ATprotect(&(term_t_54));
  term_t_54 = (ATerm) ATmakeAppl(ATmakeSymbol("parse error in ", 0, ATtrue));
  ATprotect(&(term_h_55));
  term_h_55 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
  ATprotect(&(term_n_55));
  term_n_55 = (ATerm) ATmakeAppl(ATmakeSymbol("*** module ", 0, ATtrue));
  ATprotect(&(term_o_55));
  term_o_55 = (ATerm) ATmakeAppl(ATmakeSymbol(" not found", 0, ATtrue));
  ATprotect(&(term_p_55));
  term_p_55 = (ATerm) ATmakeAppl(ATmakeSymbol("rtree", 0, ATtrue));
  ATprotect(&(term_q_55));
  term_q_55 = (ATerm) ATmakeAppl(ATmakeSymbol("str", 0, ATtrue));
  ATprotect(&(term_r_55));
  term_r_55 = (ATerm) ATmakeAppl(ATmakeSymbol("cr", 0, ATtrue));
  ATprotect(&(term_u_55));
  term_u_55 = (ATerm) ATmakeAppl(ATmakeSymbol(" reading ", 0, ATtrue));
  ATprotect(&(term_m_57));
  term_m_57 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_t_57));
  term_t_57 = (ATerm) ATmakeAppl(ATmakeSymbol("list-cons", 0, ATtrue));
  ATprotect(&(term_u_57));
  term_u_57 = (ATerm) ATmakeAppl(ATmakeSymbol("tuple-cons", 0, ATtrue));
  ATprotect(&(term_f_59));
  term_f_59 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_k_59));
  term_k_59 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_l_59));
  term_l_59 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_m_59));
  term_m_59 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_n_59));
  term_n_59 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_o_59));
  term_o_59 = (ATerm) ATmakeAppl(sym_Verbose_1, term_n_59);
  ATprotect(&(term_p_59));
  term_p_59 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_q_59));
  term_q_59 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_r_59));
  term_r_59 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_s_59));
  term_s_59 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_t_59));
  term_t_59 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_y_59));
  term_y_59 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_z_59));
  term_z_59 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_a_60));
  term_a_60 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_b_60));
  term_b_60 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_t_60));
  term_t_60 = (ATerm) ATmakeAppl(ATmakeSymbol("-I d | --Include d   Include modules from directory d", 0, ATtrue));
  ATprotect(&(term_u_60));
  term_u_60 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_v_60));
  term_v_60 = (ATerm) ATmakeAppl(ATmakeSymbol("--nodep              Don't create dependency file", 0, ATtrue));
  ATprotect(&(term_w_60));
  term_w_60 = (ATerm) ATmakeAppl(ATmakeSymbol("--dep f | -d f       Write dependency to file f", 0, ATtrue));
  ATprotect(&(term_x_60));
  term_x_60 = (ATerm) ATmakeAppl(ATmakeSymbol("--imports", 0, ATtrue));
  ATprotect(&(term_y_60));
  term_y_60 = (ATerm) ATmakeAppl(ATmakeSymbol("--imports            Produce a list of imported modules only", 0, ATtrue));
  ATprotect(&(term_f_61));
  term_f_61 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_g_61));
  term_g_61 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_w_61));
  term_w_61 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_d_62));
  term_d_62 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_g_62));
  term_g_62 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_l_62));
  term_l_62 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_u_62));
  term_u_62 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_v_62));
  term_v_62 = (ATerm) ATmakeAppl(sym__3, term_k_42, term_u_62, term_j_53);
  ATprotect(&(term_w_62));
  term_w_62 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_x_62));
  term_x_62 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_y_62));
  term_y_62 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_z_62));
  term_z_62 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_e_63));
  term_e_63 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_j_63));
  term_j_63 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_k_63));
  term_k_63 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_b_64));
  term_b_64 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_c_64));
  term_c_64 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_d_64));
  term_d_64 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_s_64));
  term_s_64 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_t_64));
  term_t_64 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_u_64));
  term_u_64 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
}
ATerm v_36 (ATerm);
ATerm write_to_0_0 (ATerm);
ATerm separate_by_0_0 (ATerm);
ATerm create_dep_file_0_0 (ATerm);
ATerm WriteToFile_1_0 (ATerm o_107 (ATerm), ATerm);
ATerm x_36 (ATerm);
ATerm write_to_text_0_0 (ATerm);
ATerm y_36 (ATerm);
ATerm z_36 (ATerm);
ATerm basename_1_0 (ATerm w_103 (ATerm), ATerm);
ATerm at_suffix_rev_1_0 (ATerm x_95 (ATerm), ATerm);
ATerm map_1_0 (ATerm y_94 (ATerm), ATerm);
ATerm a_37 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm Imports_1_0 (ATerm c_80 (ATerm), ATerm);
ATerm b_37 (ATerm);
ATerm c_37 (ATerm);
ATerm flatten_stratego_0_0 (ATerm);
ATerm _2_0 (ATerm h_69 (ATerm), ATerm i_69 (ATerm), ATerm);
ATerm genzip_4_0 (ATerm c_97 (ATerm), ATerm d_97 (ATerm), ATerm e_97 (ATerm), ATerm f_97 (ATerm), ATerm);
ATerm filter_1_0 (ATerm d_102 (ATerm), ATerm);
ATerm read_from_0_0 (ATerm);
ATerm pass_keep_0_0 (ATerm);
ATerm pass_verbose_0_0 (ATerm);
ATerm xtc_transform_term_2_0 (ATerm b_117 (ATerm), ATerm c_117 (ATerm), ATerm);
ATerm signal_to_descr_0_0 (ATerm);
ATerm signal_from_number_0_0 (ATerm);
ATerm warn_ifsignaled_0_0 (ATerm);
ATerm fork_0_0 (ATerm);
ATerm fork_and_wait_1_0 (ATerm j_109 (ATerm), ATerm);
ATerm if_verbose5_1_0 (ATerm c_109 (ATerm), ATerm);
ATerm if_verbose4_1_0 (ATerm b_109 (ATerm), ATerm);
ATerm if_verbose6_1_0 (ATerm d_109 (ATerm), ATerm);
ATerm union_1_0 (ATerm d_99 (ATerm), ATerm);
ATerm g_37 (ATerm);
ATerm table_append_0_0 (ATerm);
ATerm table_putlist_1_0 (ATerm g_113 (ATerm), ATerm);
ATerm p_10 (ATerm f_10, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm i_37 (ATerm);
ATerm j_37 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm read_repository_file_0_0 (ATerm);
ATerm k_37 (ATerm);
ATerm l_37 (ATerm);
ATerm m_37 (ATerm);
ATerm n_37 (ATerm);
ATerm o_37 (ATerm);
ATerm xtc_read_0_0 (ATerm);
ATerm repeat_1_0 (ATerm j_88 (ATerm), ATerm);
ATerm xtc_location_0_0 (ATerm);
ATerm p_37 (ATerm);
ATerm q_37 (ATerm);
ATerm r_37 (ATerm);
ATerm xtc_load_0_0 (ATerm);
ATerm s_37 (ATerm);
ATerm u_37 (ATerm);
ATerm v_37 (ATerm);
ATerm w_37 (ATerm);
ATerm xtc_find_0_0 (ATerm);
ATerm assert_1_0 (ATerm v_105 (ATerm), ATerm);
ATerm u_12 (ATerm j_12, ATerm);
ATerm v_12 (ATerm l_12, ATerm m_12, ATerm n_12, ATerm);
ATerm open_file_0_0 (ATerm);
ATerm x_37 (ATerm);
ATerm y_37 (ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm new_0_0 (ATerm);
ATerm new_file_0_0 (ATerm);
ATerm a_38 (ATerm);
ATerm xtc_new_file_0_0 (ATerm);
ATerm xtc_transform_file_2_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm);
ATerm FILE_1_0 (ATerm n_79 (ATerm), ATerm);
ATerm f_38 (ATerm);
ATerm h_38 (ATerm);
ATerm i_38 (ATerm);
ATerm j_38 (ATerm);
ATerm k_38 (ATerm);
ATerm parse_module_0_0 (ATerm);
ATerm if_verbose3_1_0 (ATerm a_109 (ATerm), ATerm);
ATerm l_38 (ATerm);
ATerm concat_strings_0_0 (ATerm);
ATerm fetch_elem_1_0 (ATerm l_95 (ATerm), ATerm);
ATerm find_module_1_0 (ATerm m_87 (ATerm), ATerm);
ATerm get_module_1_0 (ATerm l_87 (ATerm), ATerm);
ATerm diff_1_0 (ATerm y_98 (ATerm), ATerm);
ATerm s_38 (ATerm);
ATerm t_38 (ATerm);
ATerm u_38 (ATerm);
ATerm UfDecompose_0_0 (ATerm);
ATerm w_38 (ATerm);
ATerm x_38 (ATerm);
ATerm y_38 (ATerm);
ATerm z_38 (ATerm);
ATerm a_39 (ATerm);
ATerm b_39 (ATerm);
ATerm diff_0_0 (ATerm);
ATerm GnNext_3_0 (ATerm a_118 (ATerm), ATerm b_118 (ATerm), ATerm c_118 (ATerm), ATerm);
ATerm while_not_2_0 (ATerm y_88 (ATerm), ATerm z_88 (ATerm), ATerm);
ATerm for_3_0 (ATerm b_89 (ATerm), ATerm c_89 (ATerm), ATerm d_89 (ATerm), ATerm);
ATerm e_39 (ATerm);
ATerm f_39 (ATerm);
ATerm graph_nodes_roots_3_0 (ATerm x_117 (ATerm), ATerm y_117 (ATerm), ATerm z_117 (ATerm), ATerm);
ATerm h_39 (ATerm);
ATerm j_39 (ATerm);
ATerm k_39 (ATerm);
ATerm m_39 (ATerm);
ATerm n_39 (ATerm);
ATerm o_39 (ATerm);
ATerm p_39 (ATerm);
ATerm pack_stratego_modules_0_0 (ATerm);
ATerm copy_to_1_0 (ATerm k_0 (ATerm), ATerm);
ATerm table_pop_0_0 (ATerm);
ATerm end_scope_1_0 (ATerm s_105 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm c_88 (ATerm), ATerm d_88 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm r_105 (ATerm), ATerm);
ATerm r_39 (ATerm);
ATerm t_39 (ATerm);
ATerm u_39 (ATerm);
ATerm xtc_temp_files_1_0 (ATerm e_116 (ATerm), ATerm);
ATerm w_39 (ATerm);
ATerm xtc_io_1_0 (ATerm f_116 (ATerm), ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm x_39 (ATerm);
ATerm y_39 (ATerm);
ATerm z_39 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm a_40 (ATerm);
ATerm b_40 (ATerm);
ATerm c_40 (ATerm);
ATerm d_40 (ATerm);
ATerm e_40 (ATerm);
ATerm f_40 (ATerm);
ATerm g_40 (ATerm);
ATerm h_40 (ATerm);
ATerm i_40 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm j_40 (ATerm);
ATerm k_40 (ATerm);
ATerm l_40 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm m_40 (ATerm);
ATerm n_40 (ATerm);
ATerm o_40 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm at_end_1_0 (ATerm p_95 (ATerm), ATerm);
ATerm extend_config_0_0 (ATerm);
ATerm r_40 (ATerm);
ATerm s_40 (ATerm);
ATerm t_40 (ATerm);
ATerm u_40 (ATerm);
ATerm v_40 (ATerm);
ATerm w_40 (ATerm);
ATerm x_40 (ATerm);
ATerm y_40 (ATerm);
ATerm z_40 (ATerm);
ATerm a_41 (ATerm);
ATerm b_41 (ATerm);
ATerm c_41 (ATerm);
ATerm pack_stratego_options_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm foldr_2_0 (ATerm a_101 (ATerm), ATerm b_101 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm d_41 (ATerm);
ATerm e_41 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm y_108 (ATerm), ATerm);
ATerm f_41 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm g_41 (ATerm);
ATerm need_help_1_0 (ATerm m_110 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm Program_1_0 (ATerm j_79 (ATerm), ATerm);
ATerm i_41 (ATerm);
ATerm j_41 (ATerm);
ATerm k_41 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm k_79 (ATerm), ATerm);
ATerm fetch_1_0 (ATerm j_95 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm l_41 (ATerm);
ATerm m_41 (ATerm);
ATerm n_41 (ATerm);
ATerm o_41 (ATerm);
ATerm p_41 (ATerm);
ATerm q_41 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm w_73 (ATerm), ATerm x_73 (ATerm), ATerm);
ATerm r_41 (ATerm);
ATerm parse_options_p__1_0 (ATerm d_113 (ATerm), ATerm);
ATerm u_41 (ATerm);
ATerm v_41 (ATerm);
ATerm w_41 (ATerm);
ATerm x_41 (ATerm);
ATerm parse_options_1_0 (ATerm c_113 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm o_110 (ATerm), ATerm p_110 (ATerm), ATerm q_110 (ATerm), ATerm r_110 (ATerm), ATerm);
ATerm a_42 (ATerm);
ATerm c_42 (ATerm);
ATerm d_42 (ATerm);
ATerm e_42 (ATerm);
ATerm g_42 (ATerm);
ATerm pack_stratego_0_0 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm v_36 (ATerm t)
{
  ATerm p_0 = NULL,q_0 = NULL,r_0 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm z_0 = ATgetArgument(t, 0);
      if(match_cons(z_0, sym_Stream_1))
        {
          p_0 = ATgetArgument(z_0, 0);
        }
      else
        _fail(t);
      q_0 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_write_term_to_stream_baf(p_0, q_0);
  r_0 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, r_0);
  return(t);
}
ATerm write_to_0_0 (ATerm t)
{
  ATerm f_0 = NULL,n_0 = NULL;
  f_0 = t;
  t = xtc_new_file_0_0(t);
  n_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_0, f_0);
  t = WriteToFile_1_0(v_36, t);
  t = SSL_close_file(n_0);
  t = (ATerm) ATmakeAppl(sym_FILE_1, n_0);
  return(t);
}
ATerm separate_by_0_0 (ATerm t)
{
  ATerm s_0 = NULL,v_0 = NULL;
  if(match_cons(t, sym__2))
    {
      s_0 = ATgetArgument(t, 0);
      v_0 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_0;
  {
    ATerm p_13 = t;
    int o_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(o_25);
      }
    else
      {
        t = p_13;
        {
          ATerm w_36 (ATerm t)
          {
            ATerm r_29 = t;
            int i_42 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(i_42);
              }
            else
              {
                t = r_29;
                {
                  ATerm y_0 = NULL;
                  t = Cons_2_0(_id, w_36, t);
                  y_0 = t;
                  t = (ATerm) ATinsert(CheckATermList(y_0), s_0);
                }
              }
            return(t);
          }
          t = Cons_2_0(_id, w_36, t);
        }
      }
  }
  return(t);
}
ATerm create_dep_file_0_0 (ATerm t)
{
  ATerm c_1 = NULL,g_1 = NULL,h_1 = NULL,i_1 = NULL,j_1 = NULL,b_0 = NULL,o_0 = NULL,t_0 = NULL,w_0 = NULL,n_2 = NULL,o_2 = NULL;
  c_1 = t;
  t = term_j_42;
  t_0 = t;
  t = term_k_42;
  b_0 = t;
  t = t_0;
  w_0 = t;
  t = term_j_42;
  o_0 = t;
  t = SSL_table_get(b_0, o_0);
  {
    ATerm l_42 = t;
    int m_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_0 = NULL,x_0 = NULL,a_1 = NULL,b_1 = NULL,d_1 = NULL;
        t = eval_config_0_0(t);
        u_0 = t;
        b_1 = t;
        t = term_k_42;
        x_0 = t;
        t = b_1;
        d_1 = t;
        t = term_j_42;
        a_1 = t;
        t = SSL_table_put(x_0, a_1, u_0);
        t = u_0;
        ;
        LocalPopChoice(m_42);
      }
    else
      {
        t = l_42;
      }
    {
      ATerm n_42 = t;
      int o_42 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm f_1 = NULL,r_1 = NULL,u_1 = NULL,x_1 = NULL;
          t = term_p_42;
          u_1 = t;
          t = term_k_42;
          f_1 = t;
          t = u_1;
          x_1 = t;
          t = term_p_42;
          r_1 = t;
          t = SSL_table_get(f_1, r_1);
          {
            ATerm q_42 = t;
            int r_42 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm e_1 = NULL,y_1 = NULL,z_1 = NULL,a_2 = NULL,b_2 = NULL;
                t = eval_config_0_0(t);
                e_1 = t;
                a_2 = t;
                t = term_k_42;
                y_1 = t;
                t = a_2;
                b_2 = t;
                t = term_p_42;
                z_1 = t;
                t = SSL_table_put(y_1, z_1, e_1);
                t = e_1;
                ;
                LocalPopChoice(r_42);
              }
            else
              {
                t = q_42;
              }
          }
          ;
          LocalPopChoice(o_42);
        }
      else
        {
          t = n_42;
          {
            ATerm s_42 = t;
            if((PushChoice() == 0))
              {
                ATerm c_2 = NULL,e_2 = NULL,h_2 = NULL,i_2 = NULL;
                t = term_t_42;
                h_2 = t;
                t = term_k_42;
                c_2 = t;
                t = h_2;
                i_2 = t;
                t = term_t_42;
                e_2 = t;
                t = SSL_table_get(c_2, e_2);
                {
                  ATerm u_42 = t;
                  int v_42 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm v_1 = NULL,j_2 = NULL,k_2 = NULL,l_2 = NULL,m_2 = NULL;
                      t = eval_config_0_0(t);
                      v_1 = t;
                      l_2 = t;
                      t = term_k_42;
                      j_2 = t;
                      t = l_2;
                      m_2 = t;
                      t = term_t_42;
                      k_2 = t;
                      t = SSL_table_put(j_2, k_2, v_1);
                      t = v_1;
                      ;
                      LocalPopChoice(v_42);
                    }
                  else
                    {
                      t = u_42;
                    }
                }
                PopChoice();
                _fail(t);
              }
            else
              {
                t = s_42;
              }
          }
        }
      g_1 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_x_42), term_w_42), g_1);
      t = concat_strings_0_0(t);
      h_1 = t;
      t = (ATerm) ATmakeAppl(sym__2, h_1, term_y_42);
      t = open_file_0_0(t);
      i_1 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_z_42, (ATerm) ATinsert(CheckATermList(c_1), term_a_43));
      t = separate_by_0_0(t);
      j_1 = t;
      o_2 = t;
      t = (ATerm) ATinsert(CheckATermList(j_1), g_1);
      n_2 = t;
      t = SSL_printnl(i_1, n_2);
      t = SSL_close_file(i_1);
      t = (ATerm) ATmakeAppl(sym_FILE_1, h_1);
    }
  }
  return(t);
}
ATerm WriteToFile_1_0 (ATerm o_107 (ATerm), ATerm t)
{
  ATerm k_1 = NULL,l_1 = NULL,m_1 = NULL;
  if(match_cons(t, sym__2))
    {
      k_1 = ATgetArgument(t, 0);
      l_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, k_1, term_y_42);
  t = open_stream_0_0(t);
  m_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_1, l_1);
  t = o_107(t);
  t = fclose_0_0(t);
  t = l_1;
  return(t);
}
ATerm x_36 (ATerm t)
{
  ATerm p_1 = NULL,q_1 = NULL,s_1 = NULL,t_1 = NULL,p_2 = NULL,q_2 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm b_43 = ATgetArgument(t, 0);
      if(match_cons(b_43, sym_Stream_1))
        {
          p_1 = ATgetArgument(b_43, 0);
        }
      else
        _fail(t);
      q_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_write_term_to_stream_text(p_1, q_1);
  s_1 = t;
  q_2 = t;
  t = term_c_43;
  p_2 = t;
  t = SSL_fputc(p_2, s_1);
  t_1 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, t_1);
  return(t);
}
ATerm write_to_text_0_0 (ATerm t)
{
  ATerm n_1 = NULL,o_1 = NULL;
  n_1 = t;
  t = xtc_new_file_0_0(t);
  o_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_1, n_1);
  t = WriteToFile_1_0(x_36, t);
  t = SSL_close_file(o_1);
  t = (ATerm) ATmakeAppl(sym_FILE_1, o_1);
  return(t);
}
ATerm y_36 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 47)))
    _fail(t);
  return(t);
}
ATerm z_36 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 46)))
    _fail(t);
  return(t);
}
ATerm basename_1_0 (ATerm w_103 (ATerm), ATerm t)
{
  ATerm w_1 = NULL,d_2 = NULL;
  w_1 = t;
  t = SSL_explode_string(w_1);
  {
    ATerm d_43 = t;
    int e_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_2 (ATerm t)
        {
          ATerm f_43 = t;
          int g_43 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Cons_2_0(_id, f_2, t);
              ;
              LocalPopChoice(g_43);
            }
          else
            {
              t = f_43;
              {
                ATerm h_43 = t;
                int i_43 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Cons_2_0(y_36, _id, t);
                    ;
                    LocalPopChoice(i_43);
                  }
                else
                  {
                    t = h_43;
                    t = Cons_2_0(z_36, w_103, t);
                    t = (ATerm) ATempty;
                  }
              }
            }
          return(t);
        }
        t = f_2(t);
        ;
        LocalPopChoice(e_43);
      }
    else
      {
        t = d_43;
      }
    d_2 = t;
    t = SSL_implode_string(d_2);
  }
  return(t);
}
ATerm at_suffix_rev_1_0 (ATerm x_95 (ATerm), ATerm t)
{
  ATerm g_2 (ATerm t)
  {
    ATerm j_43 = t;
    int k_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, g_2, t);
        ;
        LocalPopChoice(k_43);
      }
    else
      {
        t = j_43;
        t = x_95(t);
      }
    return(t);
  }
  t = g_2(t);
  return(t);
}
ATerm map_1_0 (ATerm y_94 (ATerm), ATerm t)
{
  ATerm w_2 (ATerm t)
  {
    ATerm l_43 = t;
    int m_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(m_43);
      }
    else
      {
        t = l_43;
        t = Cons_2_0(y_94, w_2, t);
      }
    return(t);
  }
  t = w_2(t);
  return(t);
}
ATerm a_37 (ATerm t)
{
  ATerm n_43 = t;
  int o_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(o_43);
    }
  else
    {
      t = n_43;
    }
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm p_43 = t;
  int q_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_3 = NULL;
      d_3 = t;
      t = SSL_is_string(d_3);
      ;
      LocalPopChoice(q_43);
    }
  else
    {
      t = p_43;
      {
        ATerm r_43 = t;
        int s_43 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(a_37, t);
            ;
            LocalPopChoice(s_43);
          }
        else
          {
            t = r_43;
            {
              ATerm k_3 = NULL,q_3 = NULL,s_3 = NULL;
              k_3 = t;
              if(match_cons(t, sym_Path_1))
                {
                  q_3 = ATgetArgument(t, 0);
                  t = q_3;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      q_3 = ATgetArgument(t, 0);
                      t = q_3;
                      {
                        ATerm t_43 = t;
                        int u_43 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm r_2 = NULL,s_2 = NULL;
                            s_2 = t;
                            t = term_k_42;
                            r_2 = t;
                            t = SSL_table_get(r_2, q_3);
                            {
                              ATerm v_43 = t;
                              int w_43 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm a_3 = NULL,t_2 = NULL,u_2 = NULL;
                                  t = eval_config_0_0(t);
                                  a_3 = t;
                                  u_2 = t;
                                  t = term_k_42;
                                  t_2 = t;
                                  t = SSL_table_put(t_2, q_3, a_3);
                                  t = a_3;
                                  ;
                                  LocalPopChoice(w_43);
                                }
                              else
                                {
                                  t = v_43;
                                }
                            }
                            ;
                            LocalPopChoice(u_43);
                          }
                        else
                          {
                            t = t_43;
                            {
                              ATerm v_2 = NULL,x_2 = NULL,y_2 = NULL,z_2 = NULL;
                              t = term_x_43;
                              y_2 = t;
                              t = term_y_43;
                              v_2 = t;
                              t = y_2;
                              z_2 = t;
                              t = (ATerm) ATinsert(ATinsert(ATempty, q_3), term_x_43);
                              x_2 = t;
                              t = SSL_printnl(v_2, x_2);
                              t = q_3;
                              _fail(t);
                            }
                          }
                      }
                    }
                  else
                    {
                      ATerm y_3 = NULL,z_3 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          q_3 = ATgetArgument(t, 0);
                          s_3 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = q_3;
                      t = eval_config_0_0(t);
                      y_3 = t;
                      t = s_3;
                      t = eval_config_0_0(t);
                      z_3 = t;
                      t = (ATerm) ATmakeAppl(sym__2, y_3, z_3);
                      t = conc_strings_0_0(t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm Imports_1_0 (ATerm c_80 (ATerm), ATerm t)
{
  ATerm f_4 = NULL,g_4 = NULL,h_4 = NULL,i_4 = NULL,b_3 = NULL,c_3 = NULL;
  i_4 = t;
  if(match_cons(t, sym_Imports_1))
    {
      g_4 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_4);
  f_4 = t;
  t = g_4;
  t = c_80(t);
  h_4 = t;
  c_3 = t;
  t = (ATerm) ATmakeAppl(sym_Imports_1, h_4);
  b_3 = t;
  t = SSLsetAnnotations(b_3, f_4);
  return(t);
}
ATerm b_37 (ATerm t)
{
  ATerm m_4 = NULL;
  if(match_cons(t, sym_Specification_1))
    {
      m_4 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = m_4;
  t = filter_1_0(c_37, t);
  return(t);
}
ATerm c_37 (ATerm t)
{
  ATerm z_43 = t;
  if((PushChoice() == 0))
    {
      t = Imports_1_0(_id, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = z_43;
    }
  return(t);
}
ATerm flatten_stratego_0_0 (ATerm t)
{
  ATerm l_4 = NULL;
  t = map_1_0(b_37, t);
  t = concat_0_0(t);
  l_4 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, l_4);
  return(t);
}
ATerm _2_0 (ATerm h_69 (ATerm), ATerm i_69 (ATerm), ATerm t)
{
  ATerm n_4 = NULL,o_4 = NULL,p_4 = NULL,q_4 = NULL,r_4 = NULL,s_4 = NULL,e_3 = NULL,f_3 = NULL;
  s_4 = t;
  if(match_cons(t, sym__2))
    {
      o_4 = ATgetArgument(t, 0);
      p_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_4);
  n_4 = t;
  t = o_4;
  t = h_69(t);
  q_4 = t;
  t = p_4;
  t = i_69(t);
  r_4 = t;
  f_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_4, r_4);
  e_3 = t;
  t = SSLsetAnnotations(e_3, n_4);
  return(t);
}
ATerm genzip_4_0 (ATerm c_97 (ATerm), ATerm d_97 (ATerm), ATerm e_97 (ATerm), ATerm f_97 (ATerm), ATerm t)
{
  ATerm w_4 (ATerm t)
  {
    ATerm a_44 = t;
    int b_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = c_97(t);
        ;
        LocalPopChoice(b_44);
      }
    else
      {
        t = a_44;
        t = d_97(t);
        t = _2_0(f_97, w_4, t);
        t = e_97(t);
      }
    return(t);
  }
  t = w_4(t);
  return(t);
}
ATerm filter_1_0 (ATerm d_102 (ATerm), ATerm t)
{
  ATerm c_44 = t;
  int d_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(d_44);
    }
  else
    {
      t = c_44;
      {
        ATerm e_44 = t;
        int f_44 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_37 (ATerm t)
            {
              t = filter_1_0(d_102, t);
              return(t);
            }
            t = Cons_2_0(d_102, d_37, t);
            ;
            LocalPopChoice(f_44);
          }
        else
          {
            t = e_44;
            {
              ATerm b_5 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm g_44 = ATgetFirst((ATermList) t);
                  b_5 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = b_5;
              t = filter_1_0(d_102, t);
            }
          }
      }
    }
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm l_5 = NULL,n_5 = NULL;
  l_5 = t;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_h_44;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      ATerm g_3 = NULL,h_3 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          n_5 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = n_5;
      h_3 = t;
      t = (ATerm) ATinsert(ATempty, term_i_44);
      g_3 = t;
      t = SSL_access(n_5, g_3);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
ATerm pass_keep_0_0 (ATerm t)
{
  ATerm s_5 = NULL,u_5 = NULL,v_5 = NULL;
  t = term_j_44;
  {
    ATerm k_44 = t;
    int l_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_3 = NULL,j_3 = NULL,l_3 = NULL,m_3 = NULL;
        l_3 = t;
        t = term_k_42;
        i_3 = t;
        t = l_3;
        m_3 = t;
        t = term_j_44;
        j_3 = t;
        t = SSL_table_get(i_3, j_3);
        {
          ATerm m_44 = t;
          int n_44 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm b_4 = NULL,n_3 = NULL,o_3 = NULL,p_3 = NULL,r_3 = NULL;
              t = eval_config_0_0(t);
              b_4 = t;
              p_3 = t;
              t = term_k_42;
              n_3 = t;
              t = p_3;
              r_3 = t;
              t = term_j_44;
              o_3 = t;
              t = SSL_table_put(n_3, o_3, b_4);
              t = b_4;
              ;
              LocalPopChoice(n_44);
            }
          else
            {
              t = m_44;
            }
        }
        ;
        LocalPopChoice(l_44);
      }
    else
      {
        t = k_44;
        t = term_o_44;
      }
    s_5 = t;
    t = (ATerm) ATmakeAppl(sym__2, s_5, term_o_44);
    {
      ATerm p_44 = t;
      int q_44 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm t_3 = NULL,u_3 = NULL;
          u_3 = t;
          t = term_o_44;
          t_3 = t;
          t = SSL_subti(s_5, t_3);
          ;
          LocalPopChoice(q_44);
        }
      else
        {
          t = p_44;
          {
            ATerm v_3 = NULL,w_3 = NULL;
            w_3 = t;
            t = term_o_44;
            v_3 = t;
            t = SSL_subtr(s_5, v_3);
          }
        }
      v_5 = t;
      t = SSL_int_to_string(v_5);
      u_5 = t;
      t = (ATerm) ATinsert(ATinsert(ATempty, u_5), term_j_44);
    }
  }
  return(t);
}
ATerm pass_verbose_0_0 (ATerm t)
{
  ATerm x_5 = NULL,y_5 = NULL,a_6 = NULL;
  t = term_r_44;
  {
    ATerm s_44 = t;
    int t_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_3 = NULL,a_4 = NULL,c_4 = NULL,d_4 = NULL;
        c_4 = t;
        t = term_k_42;
        x_3 = t;
        t = c_4;
        d_4 = t;
        t = term_r_44;
        a_4 = t;
        t = SSL_table_get(x_3, a_4);
        {
          ATerm u_44 = t;
          int v_44 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm d_5 = NULL,e_4 = NULL,j_4 = NULL,k_4 = NULL,t_4 = NULL;
              t = eval_config_0_0(t);
              d_5 = t;
              k_4 = t;
              t = term_k_42;
              e_4 = t;
              t = k_4;
              t_4 = t;
              t = term_r_44;
              j_4 = t;
              t = SSL_table_put(e_4, j_4, d_5);
              t = d_5;
              ;
              LocalPopChoice(v_44);
            }
          else
            {
              t = u_44;
            }
        }
        ;
        LocalPopChoice(t_44);
      }
    else
      {
        t = s_44;
        t = term_o_44;
      }
    x_5 = t;
    t = (ATerm) ATmakeAppl(sym__2, x_5, term_o_44);
    {
      ATerm w_44 = t;
      int x_44 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm u_4 = NULL,v_4 = NULL;
          v_4 = t;
          t = term_o_44;
          u_4 = t;
          t = SSL_subti(x_5, u_4);
          ;
          LocalPopChoice(x_44);
        }
      else
        {
          t = w_44;
          {
            ATerm x_4 = NULL,y_4 = NULL;
            y_4 = t;
            t = term_o_44;
            x_4 = t;
            t = SSL_subtr(x_5, x_4);
          }
        }
      a_6 = t;
      t = SSL_int_to_string(a_6);
      y_5 = t;
      t = (ATerm) ATinsert(ATinsert(ATempty, y_5), term_r_44);
    }
  }
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm b_117 (ATerm), ATerm c_117 (ATerm), ATerm t)
{
  t = write_to_0_0(t);
  t = xtc_transform_file_2_0(b_117, c_117, t);
  t = read_from_0_0(t);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm z_6 = NULL,a_7 = NULL,b_7 = NULL,c_7 = NULL;
  z_6 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      a_7 = ATgetArgument(t, 0);
      {
        ATerm k_5 = NULL;
        t = SSL_int_to_string(a_7);
        k_5 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_z_44), k_5), term_y_44);
        t = concat_strings_0_0(t);
      }
    }
  else
    {
      ATerm j_6 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          a_7 = ATgetArgument(t, 0);
          b_7 = ATgetArgument(t, 1);
          c_7 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(b_7);
      j_6 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, c_7), term_b_45), j_6), term_a_45), a_7);
      t = concat_strings_0_0(t);
    }
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm i_7 = NULL;
  i_7 = t;
  {
    ATerm c_45 = t;
    int d_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_j_49), term_f_49), term_b_49), term_x_48), term_t_48), term_p_48), term_l_48), term_h_48), term_d_48), term_a_48), term_w_47), term_s_47), term_o_47), term_k_47), term_g_47), term_c_47), term_y_46), term_u_46), term_q_46), term_m_46), term_i_46), term_e_46), term_a_46), term_w_45), term_s_45), term_o_45), term_k_45), term_g_45);
        {
          ATerm e_37 (ATerm t)
          {
            if(match_cons(t, sym_Signal_3))
              {
                ATerm k_49 = ATgetArgument(t, 0);
                if((i_7 != ATgetArgument(t, 1)))
                  {
                    _fail(ATgetArgument(t, 1));
                  }
                {
                  ATerm l_49 = ATgetArgument(t, 2);
                }
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_elem_1_0(e_37, t);
        }
        ;
        LocalPopChoice(d_45);
      }
    else
      {
        t = c_45;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, i_7);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm u_7 = NULL;
  u_7 = t;
  {
    ATerm m_49 = t;
    int n_49 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_8 = NULL,x_6 = NULL,z_4 = NULL,a_5 = NULL,c_5 = NULL,e_5 = NULL;
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm o_49 = ATgetArgument(t, 0);
            a_8 = ATgetArgument(t, 1);
            {
              ATerm p_49 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = a_8;
        {
          ATerm q_49 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = q_49;
            }
          t = signal_from_number_0_0(t);
          t = signal_to_descr_0_0(t);
          x_6 = t;
          c_5 = t;
          t = term_y_43;
          z_4 = t;
          t = c_5;
          e_5 = t;
          t = (ATerm) ATinsert(ATinsert(ATempty, x_6), term_r_49);
          a_5 = t;
          t = SSL_printnl(z_4, a_5);
          t = (ATerm) ATmakeAppl(sym__2, term_y_43, (ATerm) ATinsert(ATinsert(ATempty, x_6), term_r_49));
        }
        ;
        LocalPopChoice(n_49);
      }
    else
      {
        t = m_49;
      }
    t = u_7;
  }
  return(t);
}
ATerm fork_0_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_and_wait_1_0 (ATerm j_109 (ATerm), ATerm t)
{
  ATerm h_8 = NULL,i_8 = NULL;
  h_8 = t;
  t = fork_0_0(t);
  i_8 = t;
  {
    ATerm s_49 = t;
    int t_49 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = h_8;
        t = j_109(t);
        ;
        LocalPopChoice(t_49);
      }
    else
      {
        t = s_49;
        t = SSL_waitpid(i_8);
        t = warn_ifsignaled_0_0(t);
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm u_49 = ATgetArgument(t, 0);
            if(((ATgetType(u_49) != AT_INT) || (ATgetInt((ATermInt) u_49) != 0)))
              _fail(t);
            {
              ATerm v_49 = ATgetArgument(t, 1);
            }
            {
              ATerm w_49 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = h_8;
      }
  }
  return(t);
}
ATerm if_verbose5_1_0 (ATerm c_109 (ATerm), ATerm t)
{
  ATerm x_49 = t;
  int y_49 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_8 = NULL,p_8 = NULL,f_5 = NULL,g_5 = NULL,h_5 = NULL,i_5 = NULL;
      n_8 = t;
      t = term_r_44;
      h_5 = t;
      t = term_k_42;
      f_5 = t;
      t = h_5;
      i_5 = t;
      t = term_r_44;
      g_5 = t;
      t = SSL_table_get(f_5, g_5);
      {
        ATerm z_49 = t;
        int a_50 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_7 = NULL,j_5 = NULL,m_5 = NULL,o_5 = NULL,p_5 = NULL;
            t = eval_config_0_0(t);
            k_7 = t;
            o_5 = t;
            t = term_k_42;
            j_5 = t;
            t = o_5;
            p_5 = t;
            t = term_r_44;
            m_5 = t;
            t = SSL_table_put(j_5, m_5, k_7);
            t = k_7;
            ;
            LocalPopChoice(a_50);
          }
        else
          {
            t = z_49;
          }
        p_8 = t;
        t = (ATerm) ATmakeAppl(sym__2, p_8, term_v_48);
        t = geq_0_0(t);
        t = n_8;
        t = c_109(t);
      }
      ;
      LocalPopChoice(y_49);
    }
  else
    {
      t = x_49;
    }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm b_109 (ATerm), ATerm t)
{
  ATerm b_50 = t;
  int c_50 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_8 = NULL,v_8 = NULL,q_5 = NULL,r_5 = NULL,t_5 = NULL,w_5 = NULL;
      t_8 = t;
      t = term_r_44;
      t_5 = t;
      t = term_k_42;
      q_5 = t;
      t = t_5;
      w_5 = t;
      t = term_r_44;
      r_5 = t;
      t = SSL_table_get(q_5, r_5);
      {
        ATerm d_50 = t;
        int e_50 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_7 = NULL,z_5 = NULL,b_6 = NULL,c_6 = NULL,d_6 = NULL;
            t = eval_config_0_0(t);
            o_7 = t;
            c_6 = t;
            t = term_k_42;
            z_5 = t;
            t = c_6;
            d_6 = t;
            t = term_r_44;
            b_6 = t;
            t = SSL_table_put(z_5, b_6, o_7);
            t = o_7;
            ;
            LocalPopChoice(e_50);
          }
        else
          {
            t = d_50;
          }
        v_8 = t;
        t = (ATerm) ATmakeAppl(sym__2, v_8, term_w_46);
        t = geq_0_0(t);
        t = t_8;
        t = b_109(t);
      }
      ;
      LocalPopChoice(c_50);
    }
  else
    {
      t = b_50;
    }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm d_109 (ATerm), ATerm t)
{
  ATerm f_50 = t;
  int g_50 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_8 = NULL,y_8 = NULL,e_6 = NULL,f_6 = NULL,g_6 = NULL,h_6 = NULL;
      w_8 = t;
      t = term_r_44;
      g_6 = t;
      t = term_k_42;
      e_6 = t;
      t = g_6;
      h_6 = t;
      t = term_r_44;
      f_6 = t;
      t = SSL_table_get(e_6, f_6);
      {
        ATerm h_50 = t;
        int i_50 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_7 = NULL,i_6 = NULL,k_6 = NULL,l_6 = NULL,m_6 = NULL;
            t = eval_config_0_0(t);
            s_7 = t;
            l_6 = t;
            t = term_k_42;
            i_6 = t;
            t = l_6;
            m_6 = t;
            t = term_r_44;
            k_6 = t;
            t = SSL_table_put(i_6, k_6, s_7);
            t = s_7;
            ;
            LocalPopChoice(i_50);
          }
        else
          {
            t = h_50;
          }
        y_8 = t;
        t = (ATerm) ATmakeAppl(sym__2, y_8, term_q_45);
        t = geq_0_0(t);
        t = w_8;
        t = d_109(t);
      }
      ;
      LocalPopChoice(g_50);
    }
  else
    {
      t = f_50;
    }
  return(t);
}
ATerm union_1_0 (ATerm d_99 (ATerm), ATerm t)
{
  ATerm z_8 = NULL,a_9 = NULL;
  if(match_cons(t, sym__2))
    {
      z_8 = ATgetArgument(t, 0);
      a_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_8;
  {
    ATerm b_9 (ATerm t)
    {
      ATerm j_50 = t;
      int k_50 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = a_9;
          ;
          LocalPopChoice(k_50);
        }
      else
        {
          t = j_50;
          {
            ATerm l_50 = t;
            int m_50 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm t_7 = NULL,b_8 = NULL;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    t_7 = ATgetFirst((ATermList) t);
                    b_8 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = a_9;
                {
                  ATerm f_37 (ATerm t)
                  {
                    ATerm c_8 = NULL;
                    c_8 = t;
                    t = (ATerm) ATmakeAppl(sym__2, t_7, c_8);
                    t = d_99(t);
                    return(t);
                  }
                  t = fetch_1_0(f_37, t);
                  t = b_8;
                  t = b_9(t);
                }
                ;
                LocalPopChoice(m_50);
              }
            else
              {
                t = l_50;
                t = Cons_2_0(_id, b_9, t);
              }
          }
        }
      return(t);
    }
    t = b_9(t);
  }
  return(t);
}
ATerm g_37 (ATerm t)
{
  ATerm m_9 = NULL;
  if(match_cons(t, sym__2))
    {
      m_9 = ATgetArgument(t, 0);
      if((m_9 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm table_append_0_0 (ATerm t)
{
  ATerm e_9 = NULL,f_9 = NULL,g_9 = NULL,h_9 = NULL,i_9 = NULL;
  if(match_cons(t, sym__3))
    {
      e_9 = ATgetArgument(t, 0);
      f_9 = ATgetArgument(t, 1);
      g_9 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, e_9, f_9);
  {
    ATerm n_50 = t;
    int o_50 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm p_50 = ATgetArgument(t, 0);
            ATerm q_50 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(e_9, f_9);
        ;
        LocalPopChoice(o_50);
      }
    else
      {
        t = n_50;
        t = (ATerm) ATempty;
      }
    h_9 = t;
    t = (ATerm) ATmakeAppl(sym__2, h_9, g_9);
    t = union_1_0(g_37, t);
    i_9 = t;
    t = SSL_table_put(e_9, f_9, i_9);
    t = (ATerm) ATmakeAppl(sym__3, e_9, f_9, g_9);
  }
  return(t);
}
ATerm table_putlist_1_0 (ATerm g_113 (ATerm), ATerm t)
{
  ATerm r_9 = NULL,s_9 = NULL;
  if(match_cons(t, sym__2))
    {
      s_9 = ATgetArgument(t, 0);
      r_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_9;
  {
    ATerm h_37 (ATerm t)
    {
      ATerm t_9 = NULL,u_9 = NULL;
      if(match_cons(t, sym__2))
        {
          t_9 = ATgetArgument(t, 0);
          u_9 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__3, s_9, t_9, u_9);
      t = g_113(t);
      return(t);
    }
    t = map_1_0(h_37, t);
  }
  return(t);
}
ATerm p_10 (ATerm f_10, ATerm t)
{
  t = SSL_fclose(f_10);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm k_10 = NULL,m_10 = NULL;
  m_10 = t;
  if(match_cons(t, sym_Stream_1))
    {
      k_10 = ATgetArgument(t, 0);
      {
        ATerm r_50 = t;
        int s_50 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(k_10);
            ;
            LocalPopChoice(s_50);
          }
        else
          {
            t = r_50;
            t = p_10(m_10, t);
          }
      }
    }
  else
    {
      t = p_10(m_10, t);
    }
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm q_10 = NULL;
  t = SSL_stdin_stream();
  q_10 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, q_10);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm r_10 = NULL;
  t = SSL_stdout_stream();
  r_10 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, r_10);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm s_10 = NULL;
  t = SSL_stderr_stream();
  s_10 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, s_10);
  return(t);
}
ATerm i_37 (ATerm t)
{
  ATerm z_10 = NULL;
  if(match_cons(t, sym_Path_1))
    {
      z_10 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = z_10;
  return(t);
}
ATerm j_37 (ATerm t)
{
  ATerm d_11 = NULL;
  d_11 = t;
  t = SSL_is_string(d_11);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm t_50 = ATgetArgument(t, 0);
      ATerm u_50 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm v_50 = t;
    int w_50 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_9 = NULL,c_10 = NULL;
        y_9 = t;
        t = SSL_explode_term(y_9);
        if(match_cons(t, sym__2))
          {
            ATerm x_50 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) x_50) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm y_50 = ATgetArgument(t, 1);
              if(((ATgetType(y_50) == AT_LIST) && !(ATisEmpty(y_50))))
                {
                  c_10 = ATgetFirst((ATermList) y_50);
                  {
                    ATerm z_50 = (ATerm) ATgetNext((ATermList) y_50);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = c_10;
        if(match_cons(t, sym_stderr_0))
          {
            t = c_10;
            t = stderr_stream_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_stdout_0))
              {
                t = c_10;
                t = stdout_stream_0_0(t);
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = c_10;
                t = stdin_stream_0_0(t);
              }
          }
        ;
        LocalPopChoice(w_50);
      }
    else
      {
        t = v_50;
        {
          ATerm a_51 = t;
          int b_51 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm w_10 = NULL,x_10 = NULL,y_10 = NULL;
              t = _2_0(i_37, _id, t);
              if(match_cons(t, sym__2))
                {
                  w_10 = ATgetArgument(t, 0);
                  x_10 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_fopen(w_10, x_10);
              y_10 = t;
              t = (ATerm) ATmakeAppl(sym_Stream_1, y_10);
              ;
              LocalPopChoice(b_51);
            }
          else
            {
              t = a_51;
              {
                ATerm a_11 = NULL,b_11 = NULL,c_11 = NULL;
                t = _2_0(j_37, _id, t);
                if(match_cons(t, sym__2))
                  {
                    a_11 = ATgetArgument(t, 0);
                    b_11 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_fopen(a_11, b_11);
                c_11 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, c_11);
              }
            }
        }
      }
  }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm e_11 = NULL,f_11 = NULL,g_11 = NULL;
  ATerm c_51 = t;
  int d_51 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_11 = NULL;
      h_11 = t;
      t = (ATerm) ATmakeAppl(sym__2, h_11, term_e_51);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(d_51);
    }
  else
    {
      t = c_51;
      {
        ATerm e_10 = NULL,n_6 = NULL,o_6 = NULL,p_6 = NULL,q_6 = NULL;
        e_10 = t;
        t = term_f_51;
        p_6 = t;
        t = term_y_43;
        n_6 = t;
        t = p_6;
        q_6 = t;
        t = (ATerm) ATinsert(ATinsert(ATempty, e_10), term_f_51);
        o_6 = t;
        t = SSL_printnl(n_6, o_6);
        t = e_10;
        _fail(t);
      }
    }
  e_11 = t;
  if(match_cons(t, sym_Stream_1))
    {
      g_11 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(g_11);
  f_11 = t;
  t = e_11;
  t = fclose_0_0(t);
  t = f_11;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm g_51 = t;
  int h_51 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_11 = NULL,r_6 = NULL,s_6 = NULL;
      j_11 = t;
      s_6 = t;
      t = (ATerm) ATinsert(ATempty, term_i_51);
      r_6 = t;
      t = SSL_access(j_11, r_6);
      LocalPopChoice(h_51);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = g_51;
      {
        ATerm j_51 = t;
        int k_51 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_10 = NULL,v_6 = NULL,w_6 = NULL,y_6 = NULL,d_7 = NULL;
            ATerm l_51 = t;
            if((PushChoice() == 0))
              {
                ATerm k_11 = NULL,t_6 = NULL,u_6 = NULL;
                k_11 = t;
                u_6 = t;
                t = (ATerm) ATinsert(ATempty, term_i_44);
                t_6 = t;
                t = SSL_access(k_11, t_6);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = l_51;
              }
            l_10 = t;
            t = term_m_51;
            y_6 = t;
            t = term_y_43;
            v_6 = t;
            t = y_6;
            d_7 = t;
            t = (ATerm) ATinsert(ATinsert(ATempty, l_10), term_m_51);
            w_6 = t;
            t = SSL_printnl(v_6, w_6);
            t = l_10;
            ;
            LocalPopChoice(k_51);
          }
        else
          {
            t = j_51;
            {
              ATerm u_10 = NULL,e_7 = NULL,f_7 = NULL,g_7 = NULL,h_7 = NULL;
              u_10 = t;
              t = term_n_51;
              g_7 = t;
              t = term_y_43;
              e_7 = t;
              t = g_7;
              h_7 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, u_10), term_n_51);
              f_7 = t;
              t = SSL_printnl(e_7, f_7);
              t = u_10;
            }
          }
        t = (ATerm) ATempty;
      }
    }
  return(t);
}
ATerm k_37 (ATerm t)
{
  ATerm h_12 = NULL,j_7 = NULL,l_7 = NULL,m_7 = NULL,n_7 = NULL;
  h_12 = t;
  t = term_o_51;
  m_7 = t;
  t = term_y_43;
  j_7 = t;
  t = m_7;
  n_7 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, h_12), term_o_51);
  l_7 = t;
  t = SSL_printnl(j_7, l_7);
  t = h_12;
  return(t);
}
ATerm l_37 (ATerm t)
{
  ATerm w_12 = NULL,f_8 = NULL,g_8 = NULL,j_8 = NULL,k_8 = NULL;
  w_12 = t;
  t = term_p_51;
  j_8 = t;
  t = term_y_43;
  f_8 = t;
  t = j_8;
  k_8 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, w_12), term_p_51);
  g_8 = t;
  t = SSL_printnl(f_8, g_8);
  t = w_12;
  return(t);
}
ATerm m_37 (ATerm t)
{
  ATerm o_11 = NULL,l_8 = NULL,m_8 = NULL,o_8 = NULL,q_8 = NULL;
  o_11 = t;
  o_8 = t;
  t = term_y_43;
  l_8 = t;
  t = o_8;
  q_8 = t;
  t = (ATerm) ATinsert(ATempty, term_q_51);
  m_8 = t;
  t = SSL_printnl(l_8, m_8);
  t = o_11;
  return(t);
}
ATerm n_37 (ATerm t)
{
  ATerm p_11 = NULL,r_8 = NULL,s_8 = NULL,u_8 = NULL,x_8 = NULL;
  p_11 = t;
  u_8 = t;
  t = term_y_43;
  r_8 = t;
  t = u_8;
  x_8 = t;
  t = (ATerm) ATinsert(ATempty, term_r_51);
  s_8 = t;
  t = SSL_printnl(r_8, s_8);
  t = p_11;
  return(t);
}
ATerm o_37 (ATerm t)
{
  ATerm q_11 = NULL,o_9 = NULL,p_9 = NULL,q_9 = NULL,v_9 = NULL;
  q_11 = t;
  q_9 = t;
  t = term_y_43;
  o_9 = t;
  t = q_9;
  v_9 = t;
  t = (ATerm) ATinsert(ATempty, term_q_51);
  p_9 = t;
  t = SSL_printnl(o_9, p_9);
  t = q_11;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm l_11 = NULL,m_11 = NULL,n_11 = NULL,w_7 = NULL,x_7 = NULL,y_7 = NULL,z_7 = NULL,d_8 = NULL,e_8 = NULL,c_9 = NULL,d_9 = NULL,j_9 = NULL,k_9 = NULL,l_9 = NULL,n_9 = NULL;
  l_11 = t;
  t = if_verbose5_1_0(k_37, t);
  {
    ATerm s_51 = t;
    if((PushChoice() == 0))
      {
        ATerm p_7 = NULL,q_7 = NULL,r_7 = NULL,v_7 = NULL;
        r_7 = t;
        t = term_t_51;
        p_7 = t;
        t = r_7;
        v_7 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, l_11);
        q_7 = t;
        t = SSL_table_get(p_7, q_7);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = s_51;
      }
    m_11 = t;
    z_7 = t;
    t = term_t_51;
    w_7 = t;
    t = z_7;
    d_8 = t;
    t = term_u_51;
    x_7 = t;
    t = d_8;
    e_8 = t;
    t = (ATerm) ATinsert(ATempty, l_11);
    y_7 = t;
    t = SSL_table_put(w_7, x_7, y_7);
    t = m_11;
    t = if_verbose4_1_0(l_37, t);
    t = read_repository_file_0_0(t);
    t = if_verbose6_1_0(m_37, t);
    n_11 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_t_51, n_11);
    t = table_putlist_1_0(table_append_0_0, t);
    t = if_verbose6_1_0(n_37, t);
    k_9 = t;
    t = term_t_51;
    c_9 = t;
    t = k_9;
    l_9 = t;
    t = (ATerm) ATmakeAppl(sym_Imported_1, l_11);
    d_9 = t;
    t = l_9;
    n_9 = t;
    t = (ATerm) ATempty;
    j_9 = t;
    t = SSL_table_put(c_9, d_9, j_9);
    t = (ATerm) ATmakeAppl(sym__3, term_t_51, (ATerm)ATmakeAppl(sym_Imported_1, l_11), (ATerm) ATempty);
    t = if_verbose4_1_0(o_37, t);
  }
  return(t);
}
ATerm repeat_1_0 (ATerm j_88 (ATerm), ATerm t)
{
  ATerm r_11 (ATerm t)
  {
    ATerm v_51 = t;
    int w_51 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = j_88(t);
        t = r_11(t);
        ;
        LocalPopChoice(w_51);
      }
    else
      {
        t = v_51;
      }
    return(t);
  }
  t = r_11(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm x_51 = t;
  int y_51 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_9 = NULL,x_9 = NULL,z_9 = NULL,a_10 = NULL;
      t = term_z_51;
      z_9 = t;
      t = term_k_42;
      w_9 = t;
      t = z_9;
      a_10 = t;
      t = term_z_51;
      x_9 = t;
      t = SSL_table_get(w_9, x_9);
      {
        ATerm a_52 = t;
        int b_52 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_13 = NULL,b_10 = NULL,d_10 = NULL,g_10 = NULL,h_10 = NULL;
            t = eval_config_0_0(t);
            n_13 = t;
            g_10 = t;
            t = term_k_42;
            b_10 = t;
            t = g_10;
            h_10 = t;
            t = term_z_51;
            d_10 = t;
            t = SSL_table_put(b_10, d_10, n_13);
            t = n_13;
            ;
            LocalPopChoice(b_52);
          }
        else
          {
            t = a_52;
          }
      }
      ;
      LocalPopChoice(y_51);
    }
  else
    {
      t = x_51;
      {
        ATerm c_52 = t;
        int d_52 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_10 = NULL,j_10 = NULL;
            j_10 = t;
            t = term_e_52;
            i_10 = t;
            t = SSL_getenv(i_10);
            ;
            LocalPopChoice(d_52);
          }
        else
          {
            t = c_52;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
ATerm p_37 (ATerm t)
{
  ATerm s_13 = NULL,n_10 = NULL,o_10 = NULL,t_10 = NULL,v_10 = NULL;
  s_13 = t;
  t = term_f_52;
  t_10 = t;
  t = term_y_43;
  n_10 = t;
  t = t_10;
  v_10 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, s_13), term_f_52);
  o_10 = t;
  t = SSL_printnl(n_10, o_10);
  t = s_13;
  return(t);
}
ATerm q_37 (ATerm t)
{
  ATerm y_11 = NULL,z_11 = NULL,a_12 = NULL,g_12 = NULL;
  a_12 = t;
  t = term_t_51;
  y_11 = t;
  t = a_12;
  g_12 = t;
  t = term_g_52;
  z_11 = t;
  t = SSL_table_get(y_11, z_11);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm h_52 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = h_52;
      }
  }
  return(t);
}
ATerm r_37 (ATerm t)
{
  ATerm v_13 = NULL,i_12 = NULL,k_12 = NULL,o_12 = NULL,p_12 = NULL;
  v_13 = t;
  t = term_i_52;
  o_12 = t;
  t = term_y_43;
  i_12 = t;
  t = o_12;
  p_12 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, v_13), term_i_52);
  k_12 = t;
  t = SSL_printnl(i_12, k_12);
  t = v_13;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm s_11 = NULL;
  t = if_verbose5_1_0(p_37, t);
  s_11 = t;
  {
    ATerm j_52 = t;
    int k_52 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_11 = NULL,u_11 = NULL,v_11 = NULL,w_11 = NULL;
        v_11 = t;
        t = term_t_51;
        i_11 = t;
        t = v_11;
        w_11 = t;
        t = term_u_51;
        u_11 = t;
        t = SSL_table_get(i_11, u_11);
        ;
        LocalPopChoice(k_52);
      }
    else
      {
        t = j_52;
        {
          ATerm t_11 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          t_11 = t;
          t = repeat_1_0(q_37, t);
          t = t_11;
        }
      }
    t = s_11;
    t = if_verbose5_1_0(r_37, t);
  }
  return(t);
}
ATerm s_37 (ATerm t)
{
  ATerm g_14 = NULL,r_12 = NULL,x_12 = NULL,b_13 = NULL,d_13 = NULL;
  g_14 = t;
  t = term_l_52;
  b_13 = t;
  t = term_y_43;
  r_12 = t;
  t = b_13;
  d_13 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, g_14), term_l_52);
  x_12 = t;
  t = SSL_printnl(r_12, x_12);
  t = g_14;
  return(t);
}
ATerm u_37 (ATerm t)
{
  ATerm e_17 = NULL,t_13 = NULL,u_13 = NULL,w_13 = NULL,x_13 = NULL;
  e_17 = t;
  t = term_l_52;
  w_13 = t;
  t = term_y_43;
  t_13 = t;
  t = w_13;
  x_13 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, e_17), term_l_52);
  u_13 = t;
  t = SSL_printnl(t_13, u_13);
  t = e_17;
  return(t);
}
ATerm v_37 (ATerm t)
{
  ATerm f_21 = NULL,c_14 = NULL,d_14 = NULL,h_14 = NULL,i_14 = NULL,j_14 = NULL,k_14 = NULL;
  t = term_t_51;
  d_14 = t;
  t = term_t_51;
  c_14 = t;
  t = SSL_table_keys(c_14);
  t = map_1_0(w_37, t);
  f_21 = t;
  t = term_m_52;
  j_14 = t;
  t = term_y_43;
  h_14 = t;
  t = j_14;
  k_14 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, f_21), term_m_52);
  i_14 = t;
  t = SSL_printnl(h_14, i_14);
  t = f_21;
  return(t);
}
ATerm w_37 (ATerm t)
{
  ATerm d_21 = NULL,e_21 = NULL,e_14 = NULL,f_14 = NULL;
  d_21 = t;
  f_14 = t;
  t = term_t_51;
  e_14 = t;
  t = SSL_table_get(e_14, d_21);
  e_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_21, e_21);
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm n_52 = t;
  int o_52 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = if_verbose5_1_0(s_37, t);
      t = xtc_load_0_0(t);
      {
        ATerm p_52 = t;
        int q_52 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_15 = NULL,p_15 = NULL,j_16 = NULL,e_13 = NULL,g_13 = NULL,h_13 = NULL,i_13 = NULL;
            if(match_cons(t, sym__2))
              {
                n_15 = ATgetArgument(t, 0);
                p_15 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            h_13 = t;
            t = term_t_51;
            e_13 = t;
            t = h_13;
            i_13 = t;
            t = (ATerm) ATmakeAppl(sym_Tool_1, n_15);
            g_13 = t;
            t = SSL_table_get(e_13, g_13);
            {
              ATerm t_37 (ATerm t)
              {
                if(match_cons(t, sym__2))
                  {
                    if((p_15 != ATgetArgument(t, 0)))
                      {
                        _fail(ATgetArgument(t, 0));
                      }
                    if(((j_16 != NULL) && (j_16 != ATgetArgument(t, 1))))
                      _fail(ATgetArgument(t, 1));
                    else
                      j_16 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                return(t);
              }
              t = fetch_1_0(t_37, t);
              t = not_null(j_16);
            }
            ;
            LocalPopChoice(q_52);
          }
        else
          {
            t = p_52;
            {
              ATerm y_16 = NULL,b_17 = NULL,k_13 = NULL,l_13 = NULL,m_13 = NULL,q_13 = NULL;
              y_16 = t;
              m_13 = t;
              t = term_t_51;
              k_13 = t;
              t = m_13;
              q_13 = t;
              t = (ATerm) ATmakeAppl(sym_Tool_1, y_16);
              l_13 = t;
              t = SSL_table_get(k_13, l_13);
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm r_52 = ATgetFirst((ATermList) t);
                  if(match_cons(r_52, sym__2))
                    {
                      ATerm t_52 = ATgetArgument(r_52, 0);
                      b_17 = ATgetArgument(r_52, 1);
                    }
                  else
                    _fail(t);
                  {
                    ATerm s_52 = (ATerm) ATgetNext((ATermList) t);
                  }
                }
              else
                _fail(t);
              t = b_17;
            }
          }
        t = if_verbose5_1_0(u_37, t);
      }
      ;
      LocalPopChoice(o_52);
    }
  else
    {
      t = n_52;
      {
        ATerm x_11 = NULL,y_13 = NULL,z_13 = NULL,a_14 = NULL,b_14 = NULL;
        x_11 = t;
        a_14 = t;
        t = term_y_43;
        y_13 = t;
        t = a_14;
        b_14 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_v_52), x_11), term_u_52);
        z_13 = t;
        t = SSL_printnl(y_13, z_13);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_v_52), x_11), term_u_52);
        t = if_verbose5_1_0(v_37, t);
        _fail(t);
      }
    }
  return(t);
}
ATerm assert_1_0 (ATerm v_105 (ATerm), ATerm t)
{
  ATerm b_12 = NULL,c_12 = NULL,d_12 = NULL,e_12 = NULL,f_12 = NULL,p_14 = NULL,q_14 = NULL,v_14 = NULL,w_14 = NULL;
  if(match_cons(t, sym__2))
    {
      b_12 = ATgetArgument(t, 0);
      c_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_105(t);
  d_12 = t;
  t = (ATerm) ATmakeAppl(sym__3, d_12, b_12, c_12);
  t = table_push_0_0(t);
  {
    ATerm w_52 = t;
    int x_52 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_14 = NULL,m_14 = NULL;
        m_14 = t;
        t = term_y_52;
        l_14 = t;
        t = SSL_table_get(d_12, l_14);
        ;
        LocalPopChoice(x_52);
      }
    else
      {
        t = w_52;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        e_12 = ATgetFirst((ATermList) t);
        f_12 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    v_14 = t;
    t = term_y_52;
    p_14 = t;
    t = v_14;
    w_14 = t;
    t = (ATerm) ATinsert(CheckATermList(f_12), (ATerm) ATinsert(CheckATermList(e_12), b_12));
    q_14 = t;
    t = SSL_table_put(d_12, p_14, q_14);
    t = (ATerm) ATmakeAppl(sym__2, b_12, c_12);
  }
  return(t);
}
ATerm u_12 (ATerm j_12, ATerm t)
{
  ATerm x_14 = NULL,y_14 = NULL,z_14 = NULL,j_15 = NULL;
  t = j_12;
  {
    ATerm z_52 = t;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm a_53 = ATgetArgument(t, 0);
            ATerm b_53 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = z_52;
      }
    t = term_c_53;
    z_14 = t;
    t = term_y_43;
    x_14 = t;
    t = z_14;
    j_15 = t;
    t = (ATerm) ATinsert(ATinsert(ATempty, term_d_53), term_c_53);
    y_14 = t;
    t = SSL_printnl(x_14, y_14);
    t = (ATerm) ATmakeAppl(sym__2, j_12, term_y_42);
    t = open_file_0_0(t);
  }
  return(t);
}
ATerm v_12 (ATerm l_12, ATerm m_12, ATerm n_12, ATerm t)
{
  t = SSL_open_file(l_12, m_12);
  return(t);
}
ATerm open_file_0_0 (ATerm t)
{
  ATerm q_12 = NULL,s_12 = NULL,t_12 = NULL;
  q_12 = t;
  if(match_cons(t, sym__2))
    {
      s_12 = ATgetArgument(t, 0);
      t_12 = ATgetArgument(t, 1);
      {
        ATerm e_53 = t;
        int f_53 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = u_12(q_12, t);
            ;
            LocalPopChoice(f_53);
          }
        else
          {
            t = e_53;
            t = v_12(s_12, t_12, q_12, t);
          }
      }
    }
  else
    {
      t = u_12(q_12, t);
    }
  return(t);
}
ATerm x_37 (ATerm t)
{
  ATerm z_12 = NULL;
  z_12 = t;
  t = SSL_explode_string(z_12);
  return(t);
}
ATerm y_37 (ATerm t)
{
  ATerm a_13 = NULL;
  a_13 = t;
  t = SSL_explode_string(a_13);
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  ATerm y_12 = NULL;
  t = _2_0(x_37, y_37, t);
  {
    ATerm g_53 = t;
    int h_53 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_13 = NULL,f_13 = NULL;
        if(match_cons(t, sym__2))
          {
            c_13 = ATgetArgument(t, 0);
            f_13 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = c_13;
        {
          ATerm z_37 (ATerm t)
          {
            t = f_13;
            return(t);
          }
          t = at_end_1_0(z_37, t);
        }
        ;
        LocalPopChoice(h_53);
      }
    else
      {
        t = g_53;
        {
          ATerm t_22 = NULL,w_22 = NULL;
          t_22 = t;
          t = SSL_explode_term(t_22);
          if(match_cons(t, sym__2))
            {
              ATerm i_53 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) i_53) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              w_22 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = w_22;
          t = concat_0_0(t);
        }
      }
    y_12 = t;
    t = SSL_implode_string(y_12);
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
  ATerm j_13 = NULL;
  t = term_j_53;
  t = new_0_0(t);
  j_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_13, term_k_53);
  t = conc_strings_0_0(t);
  {
    ATerm l_53 = t;
    int m_53 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_13 = NULL,k_15 = NULL,l_15 = NULL;
        o_13 = t;
        l_15 = t;
        t = (ATerm) ATinsert(ATempty, term_i_44);
        k_15 = t;
        t = SSL_access(o_13, k_15);
        t = new_file_0_0(t);
        ;
        LocalPopChoice(m_53);
      }
    else
      {
        t = l_53;
      }
  }
  return(t);
}
ATerm a_38 (ATerm t)
{
  t = term_n_53;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm r_13 = NULL;
  t = new_file_0_0(t);
  r_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_13, term_y_42);
  t = open_file_0_0(t);
  t = (ATerm) ATmakeAppl(sym__2, r_13, term_j_53);
  t = assert_1_0(a_38, t);
  t = r_13;
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm t)
{
  ATerm n_14 = NULL,o_14 = NULL;
  n_14 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm x_24 = NULL,i_25 = NULL,y_26 = NULL,e_27 = NULL;
      t = n_14;
      t = xtc_new_file_0_0(t);
      x_24 = t;
      t = m_0(t);
      i_25 = t;
      t = (ATerm) ATmakeAppl(sym__2, i_25, (ATerm) ATinsert(ATinsert(ATempty, x_24), term_j_42));
      {
        ATerm o_53 = t;
        int p_53 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym__2))
              {
                ATerm q_53 = ATgetArgument(t, 0);
                ATerm r_53 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = i_25;
            {
              ATerm b_38 (ATerm t)
              {
                t = (ATerm) ATinsert(ATinsert(ATempty, x_24), term_j_42);
                return(t);
              }
              t = at_end_1_0(b_38, t);
            }
            ;
            LocalPopChoice(p_53);
          }
        else
          {
            t = o_53;
            {
              ATerm x_26 = NULL,m_15 = NULL,o_15 = NULL;
              o_15 = t;
              t = (ATerm) ATmakeAppl(sym__2, i_25, (ATerm) ATinsert(ATinsert(ATempty, x_24), term_j_42));
              m_15 = t;
              t = SSL_explode_term(m_15);
              if(match_cons(t, sym__2))
                {
                  ATerm s_53 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) s_53) != ATmakeSymbol("", 0, ATtrue)))
                    _fail(t);
                  x_26 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = x_26;
              t = concat_0_0(t);
            }
          }
        y_26 = t;
        t = l_0(t);
        t = xtc_find_0_0(t);
        e_27 = t;
        t = (ATerm) ATmakeAppl(sym__2, e_27, y_26);
        {
          ATerm c_38 (ATerm t)
          {
            t = SSL_execvp(e_27, y_26);
            return(t);
          }
          t = fork_and_wait_1_0(c_38, t);
          t = SSL_close_file(x_24);
          t = (ATerm) ATmakeAppl(sym_FILE_1, x_24);
        }
      }
    }
  else
    {
      ATerm a_29 = NULL,b_29 = NULL,w_29 = NULL,x_29 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          o_14 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = o_14;
      t = xtc_new_file_0_0(t);
      a_29 = t;
      t = m_0(t);
      b_29 = t;
      t = (ATerm) ATmakeAppl(sym__2, b_29, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, a_29), term_j_42), o_14), term_t_53));
      {
        ATerm u_53 = t;
        int v_53 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym__2))
              {
                ATerm w_53 = ATgetArgument(t, 0);
                ATerm x_53 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = b_29;
            {
              ATerm d_38 (ATerm t)
              {
                t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, a_29), term_j_42), o_14), term_t_53);
                return(t);
              }
              t = at_end_1_0(d_38, t);
            }
            ;
            LocalPopChoice(v_53);
          }
        else
          {
            t = u_53;
            {
              ATerm v_29 = NULL,t_15 = NULL,u_15 = NULL;
              u_15 = t;
              t = (ATerm) ATmakeAppl(sym__2, b_29, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, a_29), term_j_42), o_14), term_t_53));
              t_15 = t;
              t = SSL_explode_term(t_15);
              if(match_cons(t, sym__2))
                {
                  ATerm y_53 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) y_53) != ATmakeSymbol("", 0, ATtrue)))
                    _fail(t);
                  v_29 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = v_29;
              t = concat_0_0(t);
            }
          }
        w_29 = t;
        t = l_0(t);
        t = xtc_find_0_0(t);
        x_29 = t;
        t = (ATerm) ATmakeAppl(sym__2, x_29, w_29);
        {
          ATerm e_38 (ATerm t)
          {
            t = SSL_execvp(x_29, w_29);
            return(t);
          }
          t = fork_and_wait_1_0(e_38, t);
          t = SSL_close_file(a_29);
          t = (ATerm) ATmakeAppl(sym_FILE_1, a_29);
        }
      }
    }
  return(t);
}
ATerm FILE_1_0 (ATerm n_79 (ATerm), ATerm t)
{
  ATerm r_14 = NULL,s_14 = NULL,t_14 = NULL,u_14 = NULL,v_15 = NULL,x_15 = NULL;
  u_14 = t;
  if(match_cons(t, sym_FILE_1))
    {
      s_14 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_14);
  r_14 = t;
  t = s_14;
  t = n_79(t);
  t_14 = t;
  x_15 = t;
  t = (ATerm) ATmakeAppl(sym_FILE_1, t_14);
  v_15 = t;
  t = SSLsetAnnotations(v_15, r_14);
  return(t);
}
ATerm f_38 (ATerm t)
{
  ATerm z_53 = t;
  if((PushChoice() == 0))
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("rtree", 0, ATtrue)))
        _fail(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = z_53;
    }
  return(t);
}
ATerm h_38 (ATerm t)
{
  t = term_a_54;
  return(t);
}
ATerm i_38 (ATerm t)
{
  ATerm b_15 = NULL,c_15 = NULL,d_15 = NULL,e_15 = NULL,z_15 = NULL,a_16 = NULL,m_16 = NULL,n_16 = NULL;
  b_15 = t;
  t = pass_verbose_0_0(t);
  c_15 = t;
  t = b_15;
  t = pass_keep_0_0(t);
  d_15 = t;
  t = term_b_54;
  m_16 = t;
  t = term_k_42;
  z_15 = t;
  t = m_16;
  n_16 = t;
  t = term_b_54;
  a_16 = t;
  t = SSL_table_get(z_15, a_16);
  {
    ATerm c_54 = t;
    int d_54 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_30 = NULL,s_16 = NULL,t_16 = NULL,u_16 = NULL,v_16 = NULL;
        t = eval_config_0_0(t);
        u_30 = t;
        u_16 = t;
        t = term_k_42;
        s_16 = t;
        t = u_16;
        v_16 = t;
        t = term_b_54;
        t_16 = t;
        t = SSL_table_put(s_16, t_16, u_30);
        t = u_30;
        ;
        LocalPopChoice(d_54);
      }
    else
      {
        t = c_54;
      }
    e_15 = t;
    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, e_15), d_15), c_15);
    t = concat_0_0(t);
  }
  return(t);
}
ATerm j_38 (ATerm t)
{
  t = term_a_54;
  return(t);
}
ATerm k_38 (ATerm t)
{
  ATerm f_15 = NULL,g_15 = NULL,h_15 = NULL,i_15 = NULL,w_16 = NULL,x_16 = NULL,z_16 = NULL,g_17 = NULL;
  f_15 = t;
  t = pass_verbose_0_0(t);
  g_15 = t;
  t = f_15;
  t = pass_keep_0_0(t);
  h_15 = t;
  t = term_b_54;
  z_16 = t;
  t = term_k_42;
  w_16 = t;
  t = z_16;
  g_17 = t;
  t = term_b_54;
  x_16 = t;
  t = SSL_table_get(w_16, x_16);
  {
    ATerm e_54 = t;
    int f_54 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_30 = NULL,h_17 = NULL,i_17 = NULL,l_17 = NULL,s_17 = NULL;
        t = eval_config_0_0(t);
        y_30 = t;
        l_17 = t;
        t = term_k_42;
        h_17 = t;
        t = l_17;
        s_17 = t;
        t = term_b_54;
        i_17 = t;
        t = SSL_table_put(h_17, i_17, y_30);
        t = y_30;
        ;
        LocalPopChoice(f_54);
      }
    else
      {
        t = e_54;
      }
    i_15 = t;
    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, i_15), h_15), g_15);
    t = concat_0_0(t);
  }
  return(t);
}
ATerm parse_module_0_0 (ATerm t)
{
  ATerm g_54 = t;
  int h_54 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_15 = NULL,p_30 = NULL,q_30 = NULL;
      ATerm g_38 (ATerm t)
      {
        if(((a_15 != NULL) && (a_15 != t)))
          _fail(t);
        else
          a_15 = t;
        return(t);
      }
      t = _2_0(f_38, g_38, t);
      p_30 = t;
      t = SSL_explode_term(p_30);
      if(match_cons(t, sym__2))
        {
          ATerm i_54 = ATgetArgument(t, 0);
          if((ATgetSymbol((ATermAppl) i_54) != ATmakeSymbol("", 0, ATtrue)))
            _fail(t);
          {
            ATerm j_54 = ATgetArgument(t, 1);
            if(((ATgetType(j_54) == AT_LIST) && !(ATisEmpty(j_54))))
              {
                ATerm k_54 = ATgetFirst((ATermList) j_54);
                ATerm l_54 = (ATerm) ATgetNext((ATermList) j_54);
                if(((ATgetType(l_54) == AT_LIST) && !(ATisEmpty(l_54))))
                  {
                    q_30 = ATgetFirst((ATermList) l_54);
                    {
                      ATerm m_54 = (ATerm) ATgetNext((ATermList) l_54);
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
      t = q_30;
      {
        ATerm n_54 = t;
        int o_54 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_54 = t;
            int q_54 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm r_54 = t;
                int s_54 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = FILE_1_0(_id, t);
                    ;
                    LocalPopChoice(s_54);
                  }
                else
                  {
                    t = r_54;
                    if(!(match_cons(t, sym_stdin_0)))
                      _fail(t);
                  }
                LocalPopChoice(q_54);
                t = xtc_transform_file_2_0(h_38, i_38, t);
              }
            else
              {
                t = p_54;
                t = xtc_transform_term_2_0(j_38, k_38, t);
              }
            t = read_from_0_0(t);
            ;
            LocalPopChoice(o_54);
          }
        else
          {
            t = n_54;
            {
              ATerm x_17 = NULL,y_17 = NULL,z_17 = NULL,a_18 = NULL,b_18 = NULL,c_18 = NULL;
              z_17 = t;
              t = term_y_43;
              x_17 = t;
              t = z_17;
              a_18 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(a_15)), term_t_54);
              y_17 = t;
              t = SSL_printnl(x_17, y_17);
              c_18 = t;
              t = term_o_44;
              b_18 = t;
              t = SSL_exit(b_18);
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(a_15)), term_t_54);
            }
          }
      }
      ;
      LocalPopChoice(h_54);
    }
  else
    {
      t = g_54;
      {
        ATerm q_15 = NULL,r_15 = NULL,s_15 = NULL,l_31 = NULL;
        q_15 = t;
        if(match_cons(t, sym__2))
          {
            r_15 = ATgetArgument(t, 0);
            s_15 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = r_15;
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("rtree", 0, ATtrue)))
          _fail(t);
        t = SSL_explode_term(q_15);
        if(match_cons(t, sym__2))
          {
            ATerm u_54 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) u_54) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm v_54 = ATgetArgument(t, 1);
              if(((ATgetType(v_54) == AT_LIST) && !(ATisEmpty(v_54))))
                {
                  ATerm w_54 = ATgetFirst((ATermList) v_54);
                  ATerm x_54 = (ATerm) ATgetNext((ATermList) v_54);
                  if(((ATgetType(x_54) == AT_LIST) && !(ATisEmpty(x_54))))
                    {
                      l_31 = ATgetFirst((ATermList) x_54);
                      {
                        ATerm y_54 = (ATerm) ATgetNext((ATermList) x_54);
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
        t = l_31;
        {
          ATerm z_54 = t;
          int a_55 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = read_from_0_0(t);
              ;
              LocalPopChoice(a_55);
            }
          else
            {
              t = z_54;
              {
                ATerm d_18 = NULL,e_18 = NULL,g_18 = NULL,l_18 = NULL,m_18 = NULL,n_18 = NULL;
                g_18 = t;
                t = term_y_43;
                d_18 = t;
                t = g_18;
                l_18 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, s_15), term_t_54);
                e_18 = t;
                t = SSL_printnl(d_18, e_18);
                n_18 = t;
                t = term_o_44;
                m_18 = t;
                t = SSL_exit(m_18);
                t = (ATerm) ATinsert(ATinsert(ATempty, s_15), term_t_54);
              }
            }
        }
      }
    }
  return(t);
}
ATerm if_verbose3_1_0 (ATerm a_109 (ATerm), ATerm t)
{
  ATerm b_55 = t;
  int c_55 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_15 = NULL,y_15 = NULL,s_18 = NULL,t_18 = NULL,u_18 = NULL,v_18 = NULL;
      w_15 = t;
      t = term_r_44;
      u_18 = t;
      t = term_k_42;
      s_18 = t;
      t = u_18;
      v_18 = t;
      t = term_r_44;
      t_18 = t;
      t = SSL_table_get(s_18, t_18);
      {
        ATerm d_55 = t;
        int e_55 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_31 = NULL,x_18 = NULL,y_18 = NULL,g_19 = NULL,m_19 = NULL;
            t = eval_config_0_0(t);
            p_31 = t;
            g_19 = t;
            t = term_k_42;
            x_18 = t;
            t = g_19;
            m_19 = t;
            t = term_r_44;
            y_18 = t;
            t = SSL_table_put(x_18, y_18, p_31);
            t = p_31;
            ;
            LocalPopChoice(e_55);
          }
        else
          {
            t = d_55;
          }
        y_15 = t;
        t = (ATerm) ATmakeAppl(sym__2, y_15, term_m_45);
        t = geq_0_0(t);
        t = w_15;
        t = a_109(t);
      }
      ;
      LocalPopChoice(c_55);
    }
  else
    {
      t = b_55;
    }
  return(t);
}
ATerm l_38 (ATerm t)
{
  ATerm c_16 = NULL;
  c_16 = t;
  t = SSL_explode_string(c_16);
  return(t);
}
ATerm concat_strings_0_0 (ATerm t)
{
  ATerm b_16 = NULL;
  t = map_1_0(l_38, t);
  t = concat_0_0(t);
  b_16 = t;
  t = SSL_implode_string(b_16);
  return(t);
}
ATerm fetch_elem_1_0 (ATerm l_95 (ATerm), ATerm t)
{
  ATerm d_16 = NULL;
  ATerm m_38 (ATerm t)
  {
    t = l_95(t);
    if(((d_16 != NULL) && (d_16 != t)))
      _fail(t);
    else
      d_16 = t;
    return(t);
  }
  t = fetch_1_0(m_38, t);
  t = not_null(d_16);
  return(t);
}
ATerm find_module_1_0 (ATerm m_87 (ATerm), ATerm t)
{
  ATerm e_16 = NULL,f_16 = NULL;
  if(match_cons(t, sym__2))
    {
      f_16 = ATgetArgument(t, 0);
      e_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_87(t);
  {
    ATerm f_55 = t;
    int g_55 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_38 (ATerm t)
        {
          ATerm g_16 = NULL;
          ATerm o_38 (ATerm t)
          {
            ATerm h_16 = NULL,i_16 = NULL,k_16 = NULL,n_19 = NULL,o_19 = NULL;
            h_16 = t;
            t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, h_16), term_w_42), f_16), term_h_55), not_null(g_16));
            t = concat_strings_0_0(t);
            k_16 = t;
            o_19 = t;
            t = (ATerm) ATinsert(ATempty, term_i_44);
            n_19 = t;
            t = SSL_access(k_16, n_19);
            i_16 = t;
            t = (ATerm) ATmakeAppl(sym__2, h_16, (ATerm) ATmakeAppl(sym_FILE_1, i_16));
            return(t);
          }
          if(((g_16 != NULL) && (g_16 != t)))
            _fail(t);
          else
            g_16 = t;
          t = e_16;
          t = fetch_elem_1_0(o_38, t);
          return(t);
        }
        t = fetch_elem_1_0(n_38, t);
        ;
        LocalPopChoice(g_55);
      }
    else
      {
        t = f_55;
        {
          ATerm i_55 = t;
          int j_55 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = e_16;
              {
                ATerm p_38 (ATerm t)
                {
                  ATerm l_16 = NULL,s_31 = NULL,t_31 = NULL,p_19 = NULL,q_19 = NULL,r_19 = NULL,t_19 = NULL;
                  l_16 = t;
                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, l_16), term_w_42), f_16);
                  t = concat_strings_0_0(t);
                  s_31 = t;
                  r_19 = t;
                  t = term_t_51;
                  p_19 = t;
                  t = r_19;
                  t_19 = t;
                  t = (ATerm) ATmakeAppl(sym_Tool_1, s_31);
                  q_19 = t;
                  t = SSL_table_get(p_19, q_19);
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      ATerm k_55 = ATgetFirst((ATermList) t);
                      if(match_cons(k_55, sym__2))
                        {
                          ATerm m_55 = ATgetArgument(k_55, 0);
                          t_31 = ATgetArgument(k_55, 1);
                        }
                      else
                        _fail(t);
                      {
                        ATerm l_55 = (ATerm) ATgetNext((ATermList) t);
                      }
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym__2, l_16, (ATerm) ATmakeAppl(sym_FILE_1, t_31));
                  return(t);
                }
                t = fetch_elem_1_0(p_38, t);
              }
              ;
              LocalPopChoice(j_55);
            }
          else
            {
              t = i_55;
              {
                ATerm u_19 = NULL,b_20 = NULL,c_20 = NULL,k_20 = NULL,l_20 = NULL,m_20 = NULL;
                c_20 = t;
                t = term_y_43;
                u_19 = t;
                t = c_20;
                k_20 = t;
                t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_o_55), f_16), term_n_55);
                b_20 = t;
                t = SSL_printnl(u_19, b_20);
                m_20 = t;
                t = term_o_44;
                l_20 = t;
                t = SSL_exit(l_20);
                t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_o_55), f_16), term_n_55);
              }
            }
        }
      }
  }
  return(t);
}
ATerm get_module_1_0 (ATerm l_87 (ATerm), ATerm t)
{
  ATerm o_16 = NULL,p_16 = NULL,q_16 = NULL;
  t = basename_1_0(_id, t);
  o_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_16, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_e_51), term_r_55), term_q_55), term_p_55));
  t = find_module_1_0(l_87, t);
  if(match_cons(t, sym__2))
    {
      ATerm s_55 = ATgetArgument(t, 0);
      ATerm t_55 = ATgetArgument(t, 1);
      if(match_cons(t_55, sym_FILE_1))
        {
          p_16 = ATgetArgument(t_55, 0);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  {
    ATerm q_38 (ATerm t)
    {
      ATerm r_16 = NULL,n_20 = NULL,o_20 = NULL,p_20 = NULL,x_20 = NULL;
      r_16 = t;
      t = term_u_55;
      p_20 = t;
      t = term_y_43;
      n_20 = t;
      t = p_20;
      x_20 = t;
      t = (ATerm) ATinsert(ATinsert(ATempty, p_16), term_u_55);
      o_20 = t;
      t = SSL_printnl(n_20, o_20);
      t = r_16;
      return(t);
    }
    t = if_verbose3_1_0(q_38, t);
    t = parse_module_0_0(t);
    q_16 = t;
    t = (ATerm) ATmakeAppl(sym__2, p_16, q_16);
  }
  return(t);
}
ATerm diff_1_0 (ATerm y_98 (ATerm), ATerm t)
{
  ATerm a_17 = NULL,c_17 = NULL;
  if(match_cons(t, sym__2))
    {
      a_17 = ATgetArgument(t, 0);
      c_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_17;
  {
    ATerm d_17 (ATerm t)
    {
      ATerm v_55 = t;
      int w_55 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          ;
          LocalPopChoice(w_55);
        }
      else
        {
          t = v_55;
          {
            ATerm x_55 = t;
            int y_55 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm x_31 = NULL,y_31 = NULL;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    x_31 = ATgetFirst((ATermList) t);
                    y_31 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = c_17;
                {
                  ATerm r_38 (ATerm t)
                  {
                    ATerm z_31 = NULL;
                    z_31 = t;
                    t = (ATerm) ATmakeAppl(sym__2, x_31, z_31);
                    t = y_98(t);
                    return(t);
                  }
                  t = fetch_1_0(r_38, t);
                  t = y_31;
                  t = d_17(t);
                }
                ;
                LocalPopChoice(y_55);
              }
            else
              {
                t = x_55;
                t = Cons_2_0(_id, d_17, t);
              }
          }
        }
      return(t);
    }
    t = d_17(t);
  }
  return(t);
}
ATerm s_38 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm z_55 = ATgetArgument(t, 0);
      if(((ATgetType(z_55) != AT_LIST) || !(ATisEmpty(z_55))))
        _fail(t);
      {
        ATerm a_56 = ATgetArgument(t, 1);
        if(((ATgetType(a_56) != AT_LIST) || !(ATisEmpty(a_56))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm t_38 (ATerm t)
{
  ATerm q_17 = NULL,r_17 = NULL,t_17 = NULL,u_17 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm b_56 = ATgetArgument(t, 0);
      if(((ATgetType(b_56) == AT_LIST) && !(ATisEmpty(b_56))))
        {
          q_17 = ATgetFirst((ATermList) b_56);
          t_17 = (ATerm) ATgetNext((ATermList) b_56);
        }
      else
        _fail(t);
      {
        ATerm c_56 = ATgetArgument(t, 1);
        if(((ATgetType(c_56) == AT_LIST) && !(ATisEmpty(c_56))))
          {
            r_17 = ATgetFirst((ATermList) c_56);
            u_17 = (ATerm) ATgetNext((ATermList) c_56);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, q_17, r_17), (ATerm) ATmakeAppl(sym__2, t_17, u_17));
  return(t);
}
ATerm u_38 (ATerm t)
{
  ATerm v_17 = NULL,w_17 = NULL;
  if(match_cons(t, sym__2))
    {
      v_17 = ATgetArgument(t, 0);
      w_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(w_17), v_17);
  return(t);
}
ATerm UfDecompose_0_0 (ATerm t)
{
  ATerm f_17 = NULL,j_17 = NULL,k_17 = NULL,m_17 = NULL,n_17 = NULL,o_17 = NULL,p_17 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm d_56 = ATgetFirst((ATermList) t);
      if(match_cons(d_56, sym__2))
        {
          f_17 = ATgetArgument(d_56, 0);
          j_17 = ATgetArgument(d_56, 1);
        }
      else
        _fail(t);
      k_17 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSL_explode_term(j_17);
  if(match_cons(t, sym__2))
    {
      m_17 = ATgetArgument(t, 0);
      n_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(f_17);
  if(match_cons(t, sym__2))
    {
      if((m_17 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      o_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, o_17, n_17);
  t = genzip_4_0(s_38, t_38, u_38, _id, t);
  p_17 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_17, k_17);
  {
    ATerm e_56 = t;
    int f_56 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm g_56 = ATgetArgument(t, 0);
            ATerm h_56 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = p_17;
        {
          ATerm v_38 (ATerm t)
          {
            t = k_17;
            return(t);
          }
          t = at_end_1_0(v_38, t);
        }
        ;
        LocalPopChoice(f_56);
      }
    else
      {
        t = e_56;
        {
          ATerm f_32 = NULL,g_21 = NULL,h_21 = NULL;
          h_21 = t;
          t = (ATerm) ATmakeAppl(sym__2, p_17, k_17);
          g_21 = t;
          t = SSL_explode_term(g_21);
          if(match_cons(t, sym__2))
            {
              ATerm i_56 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) i_56) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              f_32 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = f_32;
          t = concat_0_0(t);
        }
      }
  }
  return(t);
}
ATerm w_38 (ATerm t)
{
  ATerm f_18 = NULL;
  f_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, f_18);
  return(t);
}
ATerm x_38 (ATerm t)
{
  t = _2_0(_id, z_38, t);
  return(t);
}
ATerm y_38 (ATerm t)
{
  ATerm j_56 = t;
  int k_56 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = _2_0(_id, a_39, t);
      ;
      LocalPopChoice(k_56);
    }
  else
    {
      t = j_56;
      {
        ATerm o_18 = NULL,p_18 = NULL,q_18 = NULL,r_18 = NULL;
        if(match_cons(t, sym__2))
          {
            o_18 = ATgetArgument(t, 0);
            p_18 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = p_18;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            q_18 = ATgetFirst((ATermList) t);
            r_18 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(o_18), q_18), r_18);
      }
    }
  return(t);
}
ATerm z_38 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm a_39 (ATerm t)
{
  ATerm l_56 = t;
  int m_56 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_18 = NULL,i_18 = NULL,j_18 = NULL,k_18 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_18 = ATgetFirst((ATermList) t);
          k_18 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = h_18;
      if(match_cons(t, sym__2))
        {
          i_18 = ATgetArgument(t, 0);
          j_18 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = j_18;
      if((i_18 != t))
        {
          _fail(t);
        }
      t = k_18;
      ;
      LocalPopChoice(m_56);
    }
  else
    {
      t = l_56;
      t = UfDecompose_0_0(t);
    }
  return(t);
}
ATerm b_39 (ATerm t)
{
  ATerm w_18 = NULL;
  if(match_cons(t, sym__2))
    {
      w_18 = ATgetArgument(t, 0);
      if((w_18 != ATgetArgument(t, 1)))
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
  ATerm n_56 = t;
  int o_56 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(w_38, x_38, y_38, t);
      ;
      LocalPopChoice(o_56);
    }
  else
    {
      t = n_56;
      t = diff_1_0(b_39, t);
    }
  return(t);
}
ATerm GnNext_3_0 (ATerm a_118 (ATerm), ATerm b_118 (ATerm), ATerm c_118 (ATerm), ATerm t)
{
  ATerm z_18 = NULL,a_19 = NULL,b_19 = NULL,c_19 = NULL,d_19 = NULL,e_19 = NULL,f_19 = NULL,h_19 = NULL,i_19 = NULL,j_19 = NULL,k_19 = NULL,l_19 = NULL;
  if(match_cons(t, sym__5))
    {
      ATerm p_56 = ATgetArgument(t, 0);
      if(((ATgetType(p_56) == AT_LIST) && !(ATisEmpty(p_56))))
        {
          z_18 = ATgetFirst((ATermList) p_56);
          a_19 = (ATerm) ATgetNext((ATermList) p_56);
        }
      else
        _fail(t);
      b_19 = ATgetArgument(t, 1);
      c_19 = ATgetArgument(t, 2);
      d_19 = ATgetArgument(t, 3);
      e_19 = ATgetArgument(t, 4);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, z_18, c_19);
  t = a_118(t);
  f_19 = t;
  t = b_118(t);
  h_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_19, b_19);
  t = diff_0_0(t);
  i_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_19, a_19);
  {
    ATerm q_56 = t;
    int r_56 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm s_56 = ATgetArgument(t, 0);
            ATerm t_56 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = i_19;
        {
          ATerm c_39 (ATerm t)
          {
            t = a_19;
            return(t);
          }
          t = at_end_1_0(c_39, t);
        }
        ;
        LocalPopChoice(r_56);
      }
    else
      {
        t = q_56;
        {
          ATerm j_32 = NULL,i_21 = NULL,j_21 = NULL;
          j_21 = t;
          t = (ATerm) ATmakeAppl(sym__2, i_19, a_19);
          i_21 = t;
          t = SSL_explode_term(i_21);
          if(match_cons(t, sym__2))
            {
              ATerm u_56 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) u_56) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              j_32 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = j_32;
          t = concat_0_0(t);
        }
      }
    j_19 = t;
    t = (ATerm) ATmakeAppl(sym__2, i_19, b_19);
    {
      ATerm v_56 = t;
      int w_56 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym__2))
            {
              ATerm x_56 = ATgetArgument(t, 0);
              ATerm y_56 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = i_19;
          {
            ATerm d_39 (ATerm t)
            {
              t = b_19;
              return(t);
            }
            t = at_end_1_0(d_39, t);
          }
          ;
          LocalPopChoice(w_56);
        }
      else
        {
          t = v_56;
          {
            ATerm n_32 = NULL,k_21 = NULL,l_21 = NULL;
            l_21 = t;
            t = (ATerm) ATmakeAppl(sym__2, i_19, b_19);
            k_21 = t;
            t = SSL_explode_term(k_21);
            if(match_cons(t, sym__2))
              {
                ATerm z_56 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) z_56) != ATmakeSymbol("", 0, ATtrue)))
                  _fail(t);
                n_32 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = n_32;
            t = concat_0_0(t);
          }
        }
      k_19 = t;
      t = (ATerm) ATmakeAppl(sym__3, z_18, f_19, d_19);
      t = c_118(t);
      l_19 = t;
      t = (ATerm) ATmakeAppl(sym__5, j_19, k_19, c_19, l_19, e_19);
    }
  }
  return(t);
}
ATerm while_not_2_0 (ATerm y_88 (ATerm), ATerm z_88 (ATerm), ATerm t)
{
  ATerm s_19 (ATerm t)
  {
    ATerm a_57 = t;
    int b_57 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_88(t);
        ;
        LocalPopChoice(b_57);
      }
    else
      {
        t = a_57;
        t = z_88(t);
        t = s_19(t);
      }
    return(t);
  }
  t = s_19(t);
  return(t);
}
ATerm for_3_0 (ATerm b_89 (ATerm), ATerm c_89 (ATerm), ATerm d_89 (ATerm), ATerm t)
{
  t = b_89(t);
  t = while_not_2_0(c_89, d_89, t);
  return(t);
}
ATerm e_39 (ATerm t)
{
  ATerm w_19 = NULL,x_19 = NULL,y_19 = NULL;
  if(match_cons(t, sym__3))
    {
      w_19 = ATgetArgument(t, 0);
      x_19 = ATgetArgument(t, 1);
      y_19 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__5, w_19, w_19, x_19, y_19, (ATerm) ATempty);
  return(t);
}
ATerm f_39 (ATerm t)
{
  ATerm z_19 = NULL,a_20 = NULL;
  if(match_cons(t, sym__5))
    {
      ATerm c_57 = ATgetArgument(t, 0);
      if(((ATgetType(c_57) != AT_LIST) || !(ATisEmpty(c_57))))
        _fail(t);
      {
        ATerm d_57 = ATgetArgument(t, 1);
      }
      {
        ATerm e_57 = ATgetArgument(t, 2);
      }
      z_19 = ATgetArgument(t, 3);
      a_20 = ATgetArgument(t, 4);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, z_19, a_20);
  return(t);
}
ATerm graph_nodes_roots_3_0 (ATerm x_117 (ATerm), ATerm y_117 (ATerm), ATerm z_117 (ATerm), ATerm t)
{
  ATerm v_19 = NULL;
  ATerm g_39 (ATerm t)
  {
    ATerm f_57 = t;
    int g_57 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = GnNext_3_0(x_117, y_117, z_117, t);
        ;
        LocalPopChoice(g_57);
      }
    else
      {
        t = f_57;
        {
          ATerm d_20 = NULL,e_20 = NULL,f_20 = NULL,g_20 = NULL,h_20 = NULL,i_20 = NULL,j_20 = NULL;
          if(match_cons(t, sym__5))
            {
              d_20 = ATgetArgument(t, 0);
              g_20 = ATgetArgument(t, 1);
              h_20 = ATgetArgument(t, 2);
              i_20 = ATgetArgument(t, 3);
              j_20 = ATgetArgument(t, 4);
            }
          else
            _fail(t);
          t = d_20;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              e_20 = ATgetFirst((ATermList) t);
              f_20 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__5, f_20, g_20, h_20, i_20, (ATerm) ATinsert(CheckATermList(j_20), e_20));
        }
      }
    return(t);
  }
  t = for_3_0(e_39, f_39, g_39, t);
  if(match_cons(t, sym__2))
    {
      v_19 = ATgetArgument(t, 0);
      {
        ATerm h_57 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = v_19;
  return(t);
}
ATerm h_39 (ATerm t)
{
  ATerm i_57 = t;
  if((PushChoice() == 0))
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-I", 0, ATtrue)))
        _fail(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = i_57;
    }
  return(t);
}
ATerm j_39 (ATerm t)
{
  ATerm s_20 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm j_57 = ATgetArgument(t, 0);
      ATerm k_57 = ATgetArgument(t, 1);
      if(match_cons(k_57, sym_Specification_1))
        {
          s_20 = ATgetArgument(k_57, 0);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  t = s_20;
  t = filter_1_0(m_39, t);
  t = concat_0_0(t);
  return(t);
}
ATerm k_39 (ATerm t)
{
  ATerm u_20 = NULL,v_20 = NULL;
  if(match_cons(t, sym__3))
    {
      ATerm l_57 = ATgetArgument(t, 0);
      u_20 = ATgetArgument(t, 1);
      v_20 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(v_20), u_20);
  return(t);
}
ATerm m_39 (ATerm t)
{
  ATerm t_20 = NULL;
  if(match_cons(t, sym_Imports_1))
    {
      t_20 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_20;
  return(t);
}
ATerm n_39 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_m_57;
  return(t);
}
ATerm o_39 (ATerm t)
{
  ATerm w_20 = NULL,y_20 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_20 = ATgetFirst((ATermList) t);
      y_20 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, w_20, y_20);
  return(t);
}
ATerm p_39 (ATerm t)
{
  ATerm z_20 = NULL,a_21 = NULL,b_21 = NULL,c_21 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm n_57 = ATgetArgument(t, 0);
      if(match_cons(n_57, sym__2))
        {
          z_20 = ATgetArgument(n_57, 0);
          b_21 = ATgetArgument(n_57, 1);
        }
      else
        _fail(t);
      {
        ATerm o_57 = ATgetArgument(t, 1);
        if(match_cons(o_57, sym__2))
          {
            a_21 = ATgetArgument(o_57, 0);
            c_21 = ATgetArgument(o_57, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(a_21), z_20), (ATerm) ATinsert(CheckATermList(c_21), b_21));
  return(t);
}
ATerm pack_stratego_modules_0_0 (ATerm t)
{
  ATerm q_20 = NULL,r_20 = NULL;
  if(match_cons(t, sym_FILE_1))
    {
      q_20 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm p_57 = t;
    int q_57 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_21 = NULL,n_21 = NULL,o_21 = NULL,r_21 = NULL;
        t = term_b_54;
        o_21 = t;
        t = term_k_42;
        m_21 = t;
        t = o_21;
        r_21 = t;
        t = term_b_54;
        n_21 = t;
        t = SSL_table_get(m_21, n_21);
        {
          ATerm r_57 = t;
          int s_57 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm r_32 = NULL,s_21 = NULL,t_21 = NULL,u_21 = NULL,v_21 = NULL;
              t = eval_config_0_0(t);
              r_32 = t;
              u_21 = t;
              t = term_k_42;
              s_21 = t;
              t = u_21;
              v_21 = t;
              t = term_b_54;
              t_21 = t;
              t = SSL_table_put(s_21, t_21, r_32);
              t = r_32;
              ;
              LocalPopChoice(s_57);
            }
          else
            {
              t = r_57;
            }
          t = filter_1_0(h_39, t);
        }
        ;
        LocalPopChoice(q_57);
      }
    else
      {
        t = p_57;
        t = (ATerm) ATempty;
      }
    r_20 = t;
    t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATinsert(ATinsert(ATinsert(ATempty, q_20), term_u_57), term_t_57), term_j_53, (ATerm) ATempty);
    {
      ATerm i_39 (ATerm t)
      {
        ATerm u_32 = NULL,v_32 = NULL;
        ATerm l_39 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(r_20), term_w_42);
          return(t);
        }
        if(((u_32 != NULL) && (u_32 != t)))
          _fail(t);
        else
          u_32 = t;
        t = SSL_explode_term(not_null(u_32));
        if(match_cons(t, sym__2))
          {
            ATerm v_57 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) v_57) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm w_57 = ATgetArgument(t, 1);
              if(((ATgetType(w_57) == AT_LIST) && !(ATisEmpty(w_57))))
                {
                  if(((v_32 != NULL) && (v_32 != ATgetFirst((ATermList) w_57))))
                    _fail(ATgetFirst((ATermList) w_57));
                  else
                    v_32 = ATgetFirst((ATermList) w_57);
                  {
                    ATerm x_57 = (ATerm) ATgetNext((ATermList) w_57);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = not_null(v_32);
        t = get_module_1_0(l_39, t);
        return(t);
      }
      t = graph_nodes_roots_3_0(i_39, j_39, k_39, t);
      t = genzip_4_0(n_39, o_39, p_39, _id, t);
      t = _2_0(_id, flatten_stratego_0_0, t);
    }
  }
  return(t);
}
ATerm copy_to_1_0 (ATerm k_0 (ATerm), ATerm t)
{
  ATerm p_21 = NULL,q_21 = NULL;
  p_21 = t;
  if(match_cons(t, sym_FILE_1))
    {
      q_21 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm y_57 = t;
    int z_57 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_32 = NULL;
        t = p_21;
        t = k_0(t);
        z_32 = t;
        {
          ATerm a_58 = t;
          int b_58 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(!(match_cons(t, sym_stdout_0)))
                _fail(t);
              ;
              LocalPopChoice(b_58);
            }
          else
            {
              t = a_58;
              if(!(match_cons(t, sym_stderr_0)))
                _fail(t);
            }
          t = SSL_copy(q_21, z_32);
          t = (ATerm) ATmakeAppl(sym_FILE_1, q_21);
        }
        ;
        LocalPopChoice(z_57);
      }
    else
      {
        t = y_57;
        {
          ATerm c_58 = t;
          int d_58 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm f_33 = NULL;
              t = p_21;
              t = k_0(t);
              f_33 = t;
              {
                ATerm e_58 = t;
                if((PushChoice() == 0))
                  {
                    ATerm f_58 = t;
                    int g_58 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(!(match_cons(t, sym_stdout_0)))
                          _fail(t);
                        ;
                        LocalPopChoice(g_58);
                      }
                    else
                      {
                        t = f_58;
                        {
                          ATerm h_58 = t;
                          int i_58 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              if(!(match_cons(t, sym_stderr_0)))
                                _fail(t);
                              ;
                              LocalPopChoice(i_58);
                            }
                          else
                            {
                              t = h_58;
                              {
                                ATerm g_33 = NULL;
                                g_33 = t;
                                if((q_21 != t))
                                  {
                                    _fail(t);
                                  }
                                t = g_33;
                              }
                            }
                        }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = e_58;
                  }
                t = SSL_copy(q_21, f_33);
                t = (ATerm) ATmakeAppl(sym_FILE_1, q_21);
              }
              ;
              LocalPopChoice(d_58);
            }
          else
            {
              t = c_58;
              t = p_21;
              t = k_0(t);
              if((q_21 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, q_21);
            }
        }
      }
  }
  return(t);
}
ATerm table_pop_0_0 (ATerm t)
{
  ATerm w_21 = NULL,x_21 = NULL,y_21 = NULL;
  if(match_cons(t, sym__2))
    {
      w_21 = ATgetArgument(t, 0);
      x_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, w_21, x_21);
  {
    ATerm j_58 = t;
    int k_58 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_33 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm l_58 = ATgetArgument(t, 0);
            ATerm m_58 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(w_21, x_21);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm n_58 = ATgetFirst((ATermList) t);
            k_33 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = k_33;
        ;
        LocalPopChoice(k_58);
      }
    else
      {
        t = j_58;
        t = (ATerm) ATempty;
      }
    y_21 = t;
    t = SSL_table_put(w_21, x_21, y_21);
    t = (ATerm) ATmakeAppl(sym__2, w_21, x_21);
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm s_105 (ATerm), ATerm t)
{
  ATerm e_22 = NULL,f_22 = NULL,g_22 = NULL,h_22 = NULL,b_22 = NULL,c_22 = NULL;
  e_22 = t;
  t = s_105(t);
  f_22 = t;
  {
    ATerm o_58 = t;
    int p_58 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_21 = NULL,a_22 = NULL;
        a_22 = t;
        t = term_y_52;
        z_21 = t;
        t = SSL_table_get(f_22, z_21);
        ;
        LocalPopChoice(p_58);
      }
    else
      {
        t = o_58;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        h_22 = ATgetFirst((ATermList) t);
        g_22 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    c_22 = t;
    t = term_y_52;
    b_22 = t;
    t = SSL_table_put(f_22, b_22, g_22);
    t = h_22;
    {
      ATerm q_39 (ATerm t)
      {
        ATerm i_22 = NULL;
        i_22 = t;
        t = (ATerm) ATmakeAppl(sym__2, f_22, i_22);
        t = table_pop_0_0(t);
        return(t);
      }
      t = map_1_0(q_39, t);
      t = e_22;
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm c_88 (ATerm), ATerm d_88 (ATerm), ATerm t)
{
  ATerm q_58 = t;
  int r_58 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = c_88(t);
      t = d_88(t);
      ;
      LocalPopChoice(r_58);
    }
  else
    {
      t = q_58;
      t = d_88(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm r_105 (ATerm), ATerm t)
{
  ATerm m_22 = NULL,o_22 = NULL,p_22 = NULL,k_22 = NULL,l_22 = NULL,n_22 = NULL,q_22 = NULL;
  m_22 = t;
  t = r_105(t);
  o_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_22, term_y_52);
  {
    ATerm s_58 = t;
    int t_58 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_22 = NULL,j_22 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm u_58 = ATgetArgument(t, 0);
            ATerm v_58 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        j_22 = t;
        t = term_y_52;
        d_22 = t;
        t = SSL_table_get(o_22, d_22);
        ;
        LocalPopChoice(t_58);
      }
    else
      {
        t = s_58;
        t = (ATerm) ATempty;
      }
    p_22 = t;
    n_22 = t;
    t = term_y_52;
    k_22 = t;
    t = n_22;
    q_22 = t;
    t = (ATerm) ATinsert(CheckATermList(p_22), (ATerm) ATempty);
    l_22 = t;
    t = SSL_table_put(o_22, k_22, l_22);
    t = m_22;
  }
  return(t);
}
ATerm r_39 (ATerm t)
{
  t = term_n_53;
  return(t);
}
ATerm t_39 (ATerm t)
{
  ATerm w_58 = t;
  int x_58 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_23 = NULL;
      d_23 = t;
      t = SSL_remove(d_23);
      ;
      LocalPopChoice(x_58);
    }
  else
    {
      t = w_58;
    }
  return(t);
}
ATerm u_39 (ATerm t)
{
  t = term_n_53;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm e_116 (ATerm), ATerm t)
{
  ATerm y_22 = NULL;
  t = begin_scope_1_0(r_39, t);
  {
    ATerm s_39 (ATerm t)
    {
      ATerm z_22 = NULL;
      z_22 = t;
      {
        ATerm y_58 = t;
        int z_58 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_22 = NULL,s_22 = NULL,u_22 = NULL,v_22 = NULL;
            u_22 = t;
            t = term_n_53;
            r_22 = t;
            t = u_22;
            v_22 = t;
            t = term_y_52;
            s_22 = t;
            t = SSL_table_get(r_22, s_22);
            ;
            LocalPopChoice(z_58);
          }
        else
          {
            t = y_58;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
          }
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            if(((y_22 != NULL) && (y_22 != ATgetFirst((ATermList) t))))
              _fail(ATgetFirst((ATermList) t));
            else
              y_22 = ATgetFirst((ATermList) t);
            {
              ATerm a_59 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        t = not_null(y_22);
        t = map_1_0(t_39, t);
        t = z_22;
        t = end_scope_1_0(u_39, t);
      }
      return(t);
    }
    t = restore_always_2_0(e_116, s_39, t);
  }
  return(t);
}
ATerm w_39 (ATerm t)
{
  ATerm b_59 = t;
  int c_59 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_23 = NULL,v_23 = NULL,w_23 = NULL,y_23 = NULL;
      t = term_j_42;
      w_23 = t;
      t = term_k_42;
      r_23 = t;
      t = w_23;
      y_23 = t;
      t = term_j_42;
      v_23 = t;
      t = SSL_table_get(r_23, v_23);
      {
        ATerm d_59 = t;
        int e_59 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_33 = NULL,b_24 = NULL,d_24 = NULL,e_24 = NULL,g_24 = NULL;
            t = eval_config_0_0(t);
            v_33 = t;
            e_24 = t;
            t = term_k_42;
            b_24 = t;
            t = e_24;
            g_24 = t;
            t = term_j_42;
            d_24 = t;
            t = SSL_table_put(b_24, d_24, v_33);
            t = v_33;
            ;
            LocalPopChoice(e_59);
          }
        else
          {
            t = d_59;
          }
      }
      ;
      LocalPopChoice(c_59);
    }
  else
    {
      t = b_59;
      t = term_f_59;
    }
  return(t);
}
ATerm xtc_io_1_0 (ATerm f_116 (ATerm), ATerm t)
{
  ATerm v_39 (ATerm t)
  {
    ATerm g_59 = t;
    int h_59 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_23 = NULL,x_22 = NULL,a_23 = NULL,b_23 = NULL,c_23 = NULL;
        t = term_t_53;
        b_23 = t;
        t = term_k_42;
        x_22 = t;
        t = b_23;
        c_23 = t;
        t = term_t_53;
        a_23 = t;
        t = SSL_table_get(x_22, a_23);
        {
          ATerm i_59 = t;
          int j_59 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm r_33 = NULL,e_23 = NULL,i_23 = NULL,m_23 = NULL,q_23 = NULL;
              t = eval_config_0_0(t);
              r_33 = t;
              m_23 = t;
              t = term_k_42;
              e_23 = t;
              t = m_23;
              q_23 = t;
              t = term_t_53;
              i_23 = t;
              t = SSL_table_put(e_23, i_23, r_33);
              t = r_33;
              ;
              LocalPopChoice(j_59);
            }
          else
            {
              t = i_59;
            }
          f_23 = t;
          t = (ATerm) ATmakeAppl(sym_FILE_1, f_23);
        }
        ;
        LocalPopChoice(h_59);
      }
    else
      {
        t = g_59;
        t = term_h_44;
      }
    t = f_116(t);
    t = copy_to_1_0(w_39, t);
    return(t);
  }
  t = xtc_temp_files_1_0(v_39, t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm g_23 = NULL,h_23 = NULL,h_24 = NULL,i_24 = NULL,j_24 = NULL,k_24 = NULL,l_24 = NULL,m_24 = NULL;
  g_23 = t;
  t = term_j_53;
  t = whoami_0_0(t);
  h_23 = t;
  j_24 = t;
  t = term_y_43;
  h_24 = t;
  t = j_24;
  k_24 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_l_59), h_23), term_k_59);
  i_24 = t;
  t = SSL_printnl(h_24, i_24);
  m_24 = t;
  t = term_o_44;
  l_24 = t;
  t = SSL_exit(l_24);
  t = g_23;
  return(t);
}
ATerm x_39 (ATerm t)
{
  ATerm j_23 = NULL;
  j_23 = t;
  if(match_string(t, "-k"))
    {
      t = j_23;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = j_23;
    }
  return(t);
}
ATerm y_39 (ATerm t)
{
  ATerm k_23 = NULL,l_23 = NULL,o_24 = NULL,s_24 = NULL,t_24 = NULL,u_24 = NULL;
  k_23 = t;
  t = SSL_string_to_int(k_23);
  l_23 = t;
  t_24 = t;
  t = term_k_42;
  o_24 = t;
  t = t_24;
  u_24 = t;
  t = term_j_44;
  s_24 = t;
  t = SSL_table_put(o_24, s_24, l_23);
  t = k_23;
  return(t);
}
ATerm z_39 (ATerm t)
{
  t = term_m_59;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(x_39, y_39, z_39, t);
  return(t);
}
ATerm a_40 (ATerm t)
{
  ATerm n_23 = NULL;
  n_23 = t;
  if(match_string(t, "-S"))
    {
      t = n_23;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = n_23;
    }
  return(t);
}
ATerm b_40 (ATerm t)
{
  ATerm v_24 = NULL,w_24 = NULL,y_24 = NULL,e_25 = NULL,f_25 = NULL,g_25 = NULL;
  e_25 = t;
  t = term_k_42;
  v_24 = t;
  t = e_25;
  f_25 = t;
  t = term_r_44;
  w_24 = t;
  t = f_25;
  g_25 = t;
  t = term_n_59;
  y_24 = t;
  t = SSL_table_put(v_24, w_24, y_24);
  t = term_o_59;
  return(t);
}
ATerm c_40 (ATerm t)
{
  t = term_p_59;
  return(t);
}
ATerm d_40 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm e_40 (ATerm t)
{
  ATerm o_23 = NULL,p_23 = NULL,j_25 = NULL,m_25 = NULL,n_25 = NULL,p_25 = NULL;
  o_23 = t;
  t = SSL_string_to_int(o_23);
  p_23 = t;
  n_25 = t;
  t = term_k_42;
  j_25 = t;
  t = n_25;
  p_25 = t;
  t = term_r_44;
  m_25 = t;
  t = SSL_table_put(j_25, m_25, p_23);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, o_23);
  return(t);
}
ATerm f_40 (ATerm t)
{
  t = term_q_59;
  return(t);
}
ATerm g_40 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm h_40 (ATerm t)
{
  ATerm q_25 = NULL,s_25 = NULL,x_25 = NULL,y_25 = NULL,z_25 = NULL,a_26 = NULL;
  y_25 = t;
  t = term_k_42;
  q_25 = t;
  t = y_25;
  z_25 = t;
  t = term_r_59;
  s_25 = t;
  t = z_25;
  a_26 = t;
  t = term_j_53;
  x_25 = t;
  t = SSL_table_put(q_25, s_25, x_25);
  t = term_s_59;
  return(t);
}
ATerm i_40 (ATerm t)
{
  t = term_t_59;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm u_59 = t;
  int v_59 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(a_40, b_40, c_40, t);
      ;
      LocalPopChoice(v_59);
    }
  else
    {
      t = u_59;
      {
        ATerm w_59 = t;
        int x_59 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(d_40, e_40, f_40, t);
            ;
            LocalPopChoice(x_59);
          }
        else
          {
            t = w_59;
            t = Option_3_0(g_40, h_40, i_40, t);
          }
      }
    }
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm s_23 = NULL,t_23 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm u_23 = NULL;
      t = term_j_53;
      t = d_0(t);
      u_23 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_y_59, term_z_59, u_23);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm x_23 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          s_23 = ATgetFirst((ATermList) t);
          t_23 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = s_23;
      t = a_0(t);
      t = term_j_53;
      t = c_0(t);
      x_23 = t;
      t = (ATerm) ATinsert(CheckATermList(t_23), x_23);
    }
  return(t);
}
ATerm j_40 (ATerm t)
{
  ATerm z_23 = NULL;
  z_23 = t;
  if(match_string(t, "-o"))
    {
      t = z_23;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = z_23;
    }
  return(t);
}
ATerm k_40 (ATerm t)
{
  ATerm a_24 = NULL,b_26 = NULL,c_26 = NULL,d_26 = NULL,e_26 = NULL;
  a_24 = t;
  d_26 = t;
  t = term_k_42;
  b_26 = t;
  t = d_26;
  e_26 = t;
  t = term_j_42;
  c_26 = t;
  t = SSL_table_put(b_26, c_26, a_24);
  t = (ATerm) ATmakeAppl(sym_Output_1, a_24);
  return(t);
}
ATerm l_40 (ATerm t)
{
  t = term_a_60;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(j_40, k_40, l_40, t);
  return(t);
}
ATerm m_40 (ATerm t)
{
  ATerm c_24 = NULL;
  c_24 = t;
  if(match_string(t, "-i"))
    {
      t = c_24;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = c_24;
    }
  return(t);
}
ATerm n_40 (ATerm t)
{
  ATerm f_24 = NULL,l_26 = NULL,m_26 = NULL,p_26 = NULL,q_26 = NULL;
  f_24 = t;
  p_26 = t;
  t = term_k_42;
  l_26 = t;
  t = p_26;
  q_26 = t;
  t = term_t_53;
  m_26 = t;
  t = SSL_table_put(l_26, m_26, f_24);
  t = (ATerm) ATmakeAppl(sym_Input_1, f_24);
  return(t);
}
ATerm o_40 (ATerm t)
{
  t = term_b_60;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(m_40, n_40, o_40, t);
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm n_24 = NULL,p_24 = NULL,q_24 = NULL,r_24 = NULL,s_26 = NULL,t_26 = NULL;
  if(match_cons(t, sym__3))
    {
      n_24 = ATgetArgument(t, 0);
      p_24 = ATgetArgument(t, 1);
      q_24 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, n_24, p_24);
  {
    ATerm c_60 = t;
    int d_60 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm e_60 = ATgetArgument(t, 0);
            ATerm f_60 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(n_24, p_24);
        ;
        LocalPopChoice(d_60);
      }
    else
      {
        t = c_60;
        t = (ATerm) ATempty;
      }
    r_24 = t;
    t_26 = t;
    t = (ATerm) ATinsert(CheckATermList(r_24), q_24);
    s_26 = t;
    t = SSL_table_put(n_24, p_24, s_26);
    t = (ATerm) ATmakeAppl(sym__3, n_24, p_24, q_24);
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm z_24 = NULL,a_25 = NULL,b_25 = NULL,c_25 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm d_25 = NULL;
      t = term_j_53;
      t = j_0(t);
      d_25 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_y_59, term_z_59, d_25);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm h_25 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          z_24 = ATgetFirst((ATermList) t);
          a_25 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = a_25;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          b_25 = ATgetFirst((ATermList) t);
          c_25 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = z_24;
      t = h_0(t);
      t = b_25;
      t = i_0(t);
      h_25 = t;
      t = (ATerm) ATinsert(CheckATermList(c_25), h_25);
    }
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm g_60 = t;
  int h_60 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(h_60);
    }
  else
    {
      t = g_60;
      {
        ATerm k_25 = NULL,l_25 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            k_25 = ATgetFirst((ATermList) t);
            l_25 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = k_25;
        {
          ATerm p_40 (ATerm t)
          {
            t = l_25;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(p_40, t);
        }
      }
    }
  return(t);
}
ATerm at_end_1_0 (ATerm p_95 (ATerm), ATerm t)
{
  ATerm r_25 (ATerm t)
  {
    ATerm i_60 = t;
    int j_60 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, r_25, t);
        ;
        LocalPopChoice(j_60);
      }
    else
      {
        t = i_60;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = p_95(t);
      }
    return(t);
  }
  t = r_25(t);
  return(t);
}
ATerm extend_config_0_0 (ATerm t)
{
  ATerm t_25 = NULL,u_25 = NULL,v_25 = NULL,w_25 = NULL,d_27 = NULL,f_27 = NULL;
  if(match_cons(t, sym__2))
    {
      t_25 = ATgetArgument(t, 0);
      u_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_25;
  {
    ATerm k_60 = t;
    int l_60 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_26 = NULL,w_26 = NULL;
        w_26 = t;
        t = term_k_42;
        v_26 = t;
        t = SSL_table_get(v_26, t_25);
        {
          ATerm m_60 = t;
          int n_60 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm z_33 = NULL,z_26 = NULL,a_27 = NULL;
              t = eval_config_0_0(t);
              z_33 = t;
              a_27 = t;
              t = term_k_42;
              z_26 = t;
              t = SSL_table_put(z_26, t_25, z_33);
              t = z_33;
              ;
              LocalPopChoice(n_60);
            }
          else
            {
              t = m_60;
            }
        }
        ;
        LocalPopChoice(l_60);
      }
    else
      {
        t = k_60;
        t = (ATerm) ATempty;
      }
    v_25 = t;
    t = (ATerm) ATmakeAppl(sym__2, u_25, v_25);
    {
      ATerm o_60 = t;
      int p_60 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym__2))
            {
              ATerm q_60 = ATgetArgument(t, 0);
              ATerm r_60 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = u_25;
          {
            ATerm q_40 (ATerm t)
            {
              t = v_25;
              return(t);
            }
            t = at_end_1_0(q_40, t);
          }
          ;
          LocalPopChoice(p_60);
        }
      else
        {
          t = o_60;
          {
            ATerm d_34 = NULL,b_27 = NULL,c_27 = NULL;
            c_27 = t;
            t = (ATerm) ATmakeAppl(sym__2, u_25, v_25);
            b_27 = t;
            t = SSL_explode_term(b_27);
            if(match_cons(t, sym__2))
              {
                ATerm s_60 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) s_60) != ATmakeSymbol("", 0, ATtrue)))
                  _fail(t);
                d_34 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = d_34;
            t = concat_0_0(t);
          }
        }
      w_25 = t;
      f_27 = t;
      t = term_k_42;
      d_27 = t;
      t = SSL_table_put(d_27, t_25, w_25);
      t = (ATerm) ATmakeAppl(sym__3, term_k_42, t_25, w_25);
    }
  }
  return(t);
}
ATerm r_40 (ATerm t)
{
  ATerm f_26 = NULL;
  f_26 = t;
  if(match_string(t, "-I"))
    {
      t = f_26;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--Include", 0, ATtrue)))
        _fail(t);
      t = f_26;
    }
  return(t);
}
ATerm s_40 (ATerm t)
{
  ATerm g_26 = NULL;
  g_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_54, (ATerm) ATinsert(ATinsert(ATempty, g_26), term_b_54));
  t = extend_config_0_0(t);
  t = term_j_53;
  return(t);
}
ATerm t_40 (ATerm t)
{
  t = term_t_60;
  return(t);
}
ATerm u_40 (ATerm t)
{
  ATerm h_26 = NULL;
  h_26 = t;
  if(match_string(t, "--nodep"))
    {
      t = h_26;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-nodep", 0, ATtrue)))
        _fail(t);
      t = h_26;
    }
  return(t);
}
ATerm v_40 (ATerm t)
{
  ATerm g_27 = NULL,k_27 = NULL,l_27 = NULL,n_27 = NULL,o_27 = NULL,q_27 = NULL;
  n_27 = t;
  t = term_k_42;
  g_27 = t;
  t = n_27;
  o_27 = t;
  t = term_t_42;
  k_27 = t;
  t = o_27;
  q_27 = t;
  t = term_u_60;
  l_27 = t;
  t = SSL_table_put(g_27, k_27, l_27);
  t = term_j_53;
  return(t);
}
ATerm w_40 (ATerm t)
{
  t = term_v_60;
  return(t);
}
ATerm x_40 (ATerm t)
{
  ATerm i_26 = NULL;
  i_26 = t;
  if(match_string(t, "--dep"))
    {
      t = i_26;
    }
  else
    {
      if(match_string(t, "-d"))
        {
          t = i_26;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-dep", 0, ATtrue)))
            _fail(t);
          t = i_26;
        }
    }
  return(t);
}
ATerm y_40 (ATerm t)
{
  ATerm j_26 = NULL,t_27 = NULL,w_27 = NULL,x_27 = NULL,y_27 = NULL;
  j_26 = t;
  x_27 = t;
  t = term_k_42;
  t_27 = t;
  t = x_27;
  y_27 = t;
  t = term_p_42;
  w_27 = t;
  t = SSL_table_put(t_27, w_27, j_26);
  t = term_j_53;
  return(t);
}
ATerm z_40 (ATerm t)
{
  t = term_w_60;
  return(t);
}
ATerm a_41 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--imports", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm b_41 (ATerm t)
{
  ATerm f_28 = NULL,g_28 = NULL,m_28 = NULL,n_28 = NULL,p_28 = NULL,s_28 = NULL;
  n_28 = t;
  t = term_k_42;
  f_28 = t;
  t = n_28;
  p_28 = t;
  t = term_x_60;
  g_28 = t;
  t = p_28;
  s_28 = t;
  t = term_j_53;
  m_28 = t;
  t = SSL_table_put(f_28, g_28, m_28);
  t = term_j_53;
  return(t);
}
ATerm c_41 (ATerm t)
{
  t = term_y_60;
  return(t);
}
ATerm pack_stratego_options_0_0 (ATerm t)
{
  ATerm z_60 = t;
  int a_61 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ArgOption_3_0(r_40, s_40, t_40, t);
      ;
      LocalPopChoice(a_61);
    }
  else
    {
      t = z_60;
      {
        ATerm b_61 = t;
        int c_61 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Option_3_0(u_40, v_40, w_40, t);
            ;
            LocalPopChoice(c_61);
          }
        else
          {
            t = b_61;
            {
              ATerm d_61 = t;
              int e_61 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = ArgOption_3_0(x_40, y_40, z_40, t);
                  ;
                  LocalPopChoice(e_61);
                }
              else
                {
                  t = d_61;
                  t = Option_3_0(a_41, b_41, c_41, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm k_26 = NULL,f_29 = NULL,t_28 = NULL,u_28 = NULL,c_29 = NULL,d_29 = NULL,g_29 = NULL;
  t = report_run_time_0_0(t);
  t = term_j_53;
  t = whoami_0_0(t);
  k_26 = t;
  c_29 = t;
  t = term_y_43;
  t_28 = t;
  t = c_29;
  d_29 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_f_61), k_26);
  u_28 = t;
  t = SSL_printnl(t_28, u_28);
  g_29 = t;
  t = term_o_44;
  f_29 = t;
  t = SSL_exit(f_29);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm h_29 = NULL,i_29 = NULL,j_29 = NULL,m_29 = NULL;
  t = term_g_61;
  j_29 = t;
  t = term_k_42;
  h_29 = t;
  t = j_29;
  m_29 = t;
  t = term_g_61;
  i_29 = t;
  t = SSL_table_get(h_29, i_29);
  {
    ATerm h_61 = t;
    int i_61 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_34 = NULL,p_29 = NULL,q_29 = NULL,s_29 = NULL,t_29 = NULL;
        t = eval_config_0_0(t);
        h_34 = t;
        s_29 = t;
        t = term_k_42;
        p_29 = t;
        t = s_29;
        t_29 = t;
        t = term_g_61;
        q_29 = t;
        t = SSL_table_put(p_29, q_29, h_34);
        t = h_34;
        ;
        LocalPopChoice(i_61);
      }
    else
      {
        t = h_61;
      }
  }
  return(t);
}
ATerm foldr_2_0 (ATerm a_101 (ATerm), ATerm b_101 (ATerm), ATerm t)
{
  ATerm j_61 = t;
  int k_61 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = a_101(t);
      ;
      LocalPopChoice(k_61);
    }
  else
    {
      t = j_61;
      {
        ATerm n_26 = NULL,o_26 = NULL,r_26 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            n_26 = ATgetFirst((ATermList) t);
            o_26 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = o_26;
        t = foldr_2_0(a_101, b_101, t);
        r_26 = t;
        t = (ATerm) ATmakeAppl(sym__2, n_26, r_26);
        t = b_101(t);
      }
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm d_41 (ATerm t)
{
  t = term_n_59;
  return(t);
}
ATerm e_41 (ATerm t)
{
  ATerm m_34 = NULL,n_34 = NULL;
  if(match_cons(t, sym__2))
    {
      m_34 = ATgetArgument(t, 0);
      n_34 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm l_61 = t;
    int m_61 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(m_34, n_34);
        ;
        LocalPopChoice(m_61);
      }
    else
      {
        t = l_61;
        t = SSL_addr(m_34, n_34);
      }
  }
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm u_26 = NULL,i_34 = NULL,j_34 = NULL;
  t = times_0_0(t);
  i_34 = t;
  t = SSL_explode_term(i_34);
  if(match_cons(t, sym__2))
    {
      ATerm n_61 = ATgetArgument(t, 0);
      j_34 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_34;
  t = foldr_2_0(d_41, e_41, t);
  u_26 = t;
  t = SSL_TicksToSeconds(u_26);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm h_27 = NULL,i_27 = NULL,j_27 = NULL;
  h_27 = t;
  if(match_cons(t, sym__2))
    {
      i_27 = ATgetArgument(t, 0);
      j_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm o_61 = t;
    int p_61 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = j_27;
        if((i_27 != t))
          {
            _fail(t);
          }
        t = h_27;
        ;
        LocalPopChoice(p_61);
      }
    else
      {
        t = o_61;
        t = h_27;
        {
          ATerm q_61 = t;
          int r_61 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(i_27, j_27);
              ;
              LocalPopChoice(r_61);
            }
          else
            {
              t = q_61;
              t = SSL_gtr(i_27, j_27);
            }
          t = (ATerm) ATmakeAppl(sym__2, i_27, j_27);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm y_108 (ATerm), ATerm t)
{
  ATerm s_61 = t;
  int t_61 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_27 = NULL,p_27 = NULL,u_29 = NULL,y_29 = NULL,z_29 = NULL,b_30 = NULL;
      m_27 = t;
      t = term_r_44;
      z_29 = t;
      t = term_k_42;
      u_29 = t;
      t = z_29;
      b_30 = t;
      t = term_r_44;
      y_29 = t;
      t = SSL_table_get(u_29, y_29);
      {
        ATerm u_61 = t;
        int v_61 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_35 = NULL,f_30 = NULL,g_30 = NULL,h_30 = NULL,i_30 = NULL;
            t = eval_config_0_0(t);
            a_35 = t;
            h_30 = t;
            t = term_k_42;
            f_30 = t;
            t = h_30;
            i_30 = t;
            t = term_r_44;
            g_30 = t;
            t = SSL_table_put(f_30, g_30, a_35);
            t = a_35;
            ;
            LocalPopChoice(v_61);
          }
        else
          {
            t = u_61;
          }
        p_27 = t;
        t = (ATerm) ATmakeAppl(sym__2, p_27, term_o_44);
        t = geq_0_0(t);
        t = m_27;
        t = y_108(t);
      }
      ;
      LocalPopChoice(t_61);
    }
  else
    {
      t = s_61;
    }
  return(t);
}
ATerm f_41 (ATerm t)
{
  ATerm r_27 = NULL,s_27 = NULL,k_30 = NULL,l_30 = NULL,r_30 = NULL,s_30 = NULL;
  t = run_time_0_0(t);
  r_27 = t;
  t = term_j_53;
  t = whoami_0_0(t);
  s_27 = t;
  r_30 = t;
  t = term_y_43;
  k_30 = t;
  t = r_30;
  s_30 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_w_61), r_27), term_a_45), s_27);
  l_30 = t;
  t = SSL_printnl(k_30, l_30);
  t = (ATerm) ATmakeAppl(sym__2, term_y_43, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_w_61), r_27), term_a_45), s_27));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(f_41, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm t_30 = NULL,v_30 = NULL;
  t = report_run_time_0_0(t);
  v_30 = t;
  t = term_n_59;
  t_30 = t;
  t = SSL_exit(t_30);
  return(t);
}
ATerm g_41 (ATerm t)
{
  ATerm x_61 = t;
  int y_61 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(!(match_cons(t, sym_Help_0)))
        _fail(t);
      ;
      LocalPopChoice(y_61);
    }
  else
    {
      t = x_61;
      {
        ATerm z_61 = t;
        int a_62 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Undefined_1_0(_id, t);
            ;
            LocalPopChoice(a_62);
          }
        else
          {
            t = z_61;
            if(!(match_cons(t, sym_Version_0)))
              _fail(t);
          }
      }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm m_110 (ATerm), ATerm t)
{
  ATerm b_62 = t;
  int c_62 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_30 = NULL,x_30 = NULL,z_30 = NULL,a_31 = NULL;
      t = term_d_62;
      z_30 = t;
      t = term_k_42;
      w_30 = t;
      t = z_30;
      a_31 = t;
      t = term_d_62;
      x_30 = t;
      t = SSL_table_get(w_30, x_30);
      {
        ATerm e_62 = t;
        int f_62 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_35 = NULL,b_31 = NULL,c_31 = NULL,d_31 = NULL,e_31 = NULL;
            t = eval_config_0_0(t);
            e_35 = t;
            d_31 = t;
            t = term_k_42;
            b_31 = t;
            t = d_31;
            e_31 = t;
            t = term_d_62;
            c_31 = t;
            t = SSL_table_put(b_31, c_31, e_35);
            t = e_35;
            ;
            LocalPopChoice(f_62);
          }
        else
          {
            t = e_62;
          }
      }
      ;
      LocalPopChoice(c_62);
    }
  else
    {
      t = b_62;
      t = fetch_1_0(g_41, t);
    }
  t = m_110(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm u_27 = NULL,v_27 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_27 = ATgetFirst((ATermList) t);
      v_27 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm z_27 = NULL,a_28 = NULL;
        t = v_27;
        t = g_0(t);
        z_27 = t;
        t = u_27;
        t = e_0(t);
        a_28 = t;
        t = v_27;
        {
          ATerm h_41 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(z_27), a_28);
            return(t);
          }
          t = reverse_acc_2_0(e_0, h_41, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_j_53;
      t = g_0(t);
    }
  return(t);
}
ATerm Program_1_0 (ATerm j_79 (ATerm), ATerm t)
{
  ATerm b_28 = NULL,c_28 = NULL,d_28 = NULL,e_28 = NULL,f_31 = NULL,g_31 = NULL;
  e_28 = t;
  if(match_cons(t, sym_Program_1))
    {
      c_28 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_28);
  b_28 = t;
  t = c_28;
  t = j_79(t);
  d_28 = t;
  g_31 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, d_28);
  f_31 = t;
  t = SSLsetAnnotations(f_31, b_28);
  return(t);
}
ATerm i_41 (ATerm t)
{
  t = Program_1_0(_id, t);
  return(t);
}
ATerm j_41 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm k_41 (ATerm t)
{
  ATerm h_28 = NULL;
  h_28 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, h_28), term_g_62);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm r_31 = NULL,u_31 = NULL,v_31 = NULL,w_31 = NULL;
  ATerm h_62 = t;
  int i_62 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_31 = NULL,i_31 = NULL,j_31 = NULL,k_31 = NULL;
      t = term_g_61;
      j_31 = t;
      t = term_k_42;
      h_31 = t;
      t = j_31;
      k_31 = t;
      t = term_g_61;
      i_31 = t;
      t = SSL_table_get(h_31, i_31);
      {
        ATerm j_62 = t;
        int k_62 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_35 = NULL,m_31 = NULL,n_31 = NULL,o_31 = NULL,q_31 = NULL;
            t = eval_config_0_0(t);
            i_35 = t;
            o_31 = t;
            t = term_k_42;
            m_31 = t;
            t = o_31;
            q_31 = t;
            t = term_g_61;
            n_31 = t;
            t = SSL_table_put(m_31, n_31, i_35);
            t = i_35;
            ;
            LocalPopChoice(k_62);
          }
        else
          {
            t = j_62;
          }
      }
      ;
      LocalPopChoice(i_62);
    }
  else
    {
      t = h_62;
      t = fetch_1_0(i_41, t);
    }
  t = term_l_62;
  t = echo_0_0(t);
  v_31 = t;
  t = term_y_59;
  r_31 = t;
  t = v_31;
  w_31 = t;
  t = term_z_59;
  u_31 = t;
  t = SSL_table_get(r_31, u_31);
  t = reverse_acc_2_0(_id, j_41, t);
  t = map_1_0(k_41, t);
  return(t);
}
ATerm Undefined_1_0 (ATerm k_79 (ATerm), ATerm t)
{
  ATerm i_28 = NULL,j_28 = NULL,k_28 = NULL,l_28 = NULL,a_32 = NULL,b_32 = NULL;
  l_28 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      j_28 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_28);
  i_28 = t;
  t = j_28;
  t = k_79(t);
  k_28 = t;
  b_32 = t;
  t = (ATerm) ATmakeAppl(sym_Undefined_1, k_28);
  a_32 = t;
  t = SSLsetAnnotations(a_32, i_28);
  return(t);
}
ATerm fetch_1_0 (ATerm j_95 (ATerm), ATerm t)
{
  ATerm o_28 (ATerm t)
  {
    ATerm m_62 = t;
    int n_62 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(j_95, _id, t);
        ;
        LocalPopChoice(n_62);
      }
    else
      {
        t = m_62;
        t = Cons_2_0(_id, o_28, t);
      }
    return(t);
  }
  t = o_28(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm q_28 = NULL,r_28 = NULL,c_32 = NULL,d_32 = NULL;
  q_28 = t;
  {
    ATerm o_62 = t;
    int p_62 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = q_28;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm q_62 = ATgetFirst((ATermList) t);
                ATerm r_62 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = q_28;
          }
        ;
        LocalPopChoice(p_62);
      }
    else
      {
        t = o_62;
        t = (ATerm) ATinsert(ATempty, q_28);
      }
    r_28 = t;
    d_32 = t;
    t = term_f_59;
    c_32 = t;
    t = SSL_printnl(c_32, r_28);
    t = q_28;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm e_32 = NULL,g_32 = NULL,h_32 = NULL,i_32 = NULL;
  t = term_g_61;
  h_32 = t;
  t = term_k_42;
  e_32 = t;
  t = h_32;
  i_32 = t;
  t = term_g_61;
  g_32 = t;
  t = SSL_table_get(e_32, g_32);
  {
    ATerm s_62 = t;
    int t_62 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_35 = NULL,k_32 = NULL,l_32 = NULL,m_32 = NULL,o_32 = NULL;
        t = eval_config_0_0(t);
        m_35 = t;
        m_32 = t;
        t = term_k_42;
        k_32 = t;
        t = m_32;
        o_32 = t;
        t = term_g_61;
        l_32 = t;
        t = SSL_table_put(k_32, l_32, m_35);
        t = m_35;
        ;
        LocalPopChoice(t_62);
      }
    else
      {
        t = s_62;
      }
    t = echo_0_0(t);
  }
  return(t);
}
ATerm l_41 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm m_41 (ATerm t)
{
  ATerm p_32 = NULL,q_32 = NULL,s_32 = NULL,t_32 = NULL,w_32 = NULL,x_32 = NULL;
  t_32 = t;
  t = term_k_42;
  p_32 = t;
  t = t_32;
  w_32 = t;
  t = term_u_62;
  q_32 = t;
  t = w_32;
  x_32 = t;
  t = term_j_53;
  s_32 = t;
  t = SSL_table_put(p_32, q_32, s_32);
  t = term_v_62;
  return(t);
}
ATerm n_41 (ATerm t)
{
  t = term_w_62;
  return(t);
}
ATerm o_41 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm p_41 (ATerm t)
{
  ATerm y_32 = NULL,a_33 = NULL,b_33 = NULL,c_33 = NULL,d_33 = NULL,e_33 = NULL,h_33 = NULL,i_33 = NULL,j_33 = NULL,l_33 = NULL,m_33 = NULL,n_33 = NULL;
  c_33 = t;
  t = term_k_42;
  y_32 = t;
  t = c_33;
  d_33 = t;
  t = term_u_62;
  a_33 = t;
  t = d_33;
  e_33 = t;
  t = term_j_53;
  b_33 = t;
  t = SSL_table_put(y_32, a_33, b_33);
  l_33 = t;
  t = term_k_42;
  h_33 = t;
  t = l_33;
  m_33 = t;
  t = term_x_62;
  i_33 = t;
  t = m_33;
  n_33 = t;
  t = term_j_53;
  j_33 = t;
  t = SSL_table_put(h_33, i_33, j_33);
  t = term_y_62;
  return(t);
}
ATerm q_41 (ATerm t)
{
  t = term_z_62;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm a_63 = t;
  int b_63 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(l_41, m_41, n_41, t);
      ;
      LocalPopChoice(b_63);
    }
  else
    {
      t = a_63;
      t = Option_3_0(o_41, p_41, q_41, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm w_73 (ATerm), ATerm x_73 (ATerm), ATerm t)
{
  ATerm v_28 = NULL,w_28 = NULL,x_28 = NULL,y_28 = NULL,z_28 = NULL,e_29 = NULL,o_33 = NULL,p_33 = NULL;
  e_29 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_28 = ATgetFirst((ATermList) t);
      x_28 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_29);
  v_28 = t;
  t = w_28;
  t = w_73(t);
  y_28 = t;
  t = x_28;
  t = x_73(t);
  z_28 = t;
  p_33 = t;
  t = (ATerm) ATinsert(CheckATermList(z_28), y_28);
  o_33 = t;
  t = SSLsetAnnotations(o_33, v_28);
  return(t);
}
ATerm r_41 (ATerm t)
{
  ATerm l_29 = NULL,q_33 = NULL,s_33 = NULL,t_33 = NULL,u_33 = NULL;
  l_29 = t;
  t_33 = t;
  t = term_k_42;
  q_33 = t;
  t = t_33;
  u_33 = t;
  t = term_g_61;
  s_33 = t;
  t = SSL_table_put(q_33, s_33, l_29);
  t = (ATerm) ATmakeAppl(sym_Program_1, l_29);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm d_113 (ATerm), ATerm t)
{
  ATerm k_29 = NULL;
  k_29 = t;
  {
    ATerm c_63 = t;
    int d_63 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_e_63;
        t = d_113(t);
        ;
        LocalPopChoice(d_63);
      }
    else
      {
        t = c_63;
      }
    t = k_29;
    {
      ATerm s_41 (ATerm t)
      {
        ATerm f_63 = t;
        int g_63 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_63 = t;
            int i_63 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(i_63);
              }
            else
              {
                t = h_63;
                t = d_113(t);
                t = Cons_2_0(_id, s_41, t);
              }
            ;
            LocalPopChoice(g_63);
          }
        else
          {
            t = f_63;
            {
              ATerm n_29 = NULL,o_29 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  n_29 = ATgetFirst((ATermList) t);
                  o_29 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(o_29), (ATerm) ATmakeAppl(sym_Undefined_1, n_29));
            }
          }
        return(t);
      }
      t = Cons_2_0(r_41, s_41, t);
    }
  }
  return(t);
}
ATerm u_41 (ATerm t)
{
  ATerm e_30 = NULL;
  e_30 = t;
  if(match_string(t, "--help"))
    {
      t = e_30;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = e_30;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = e_30;
        }
    }
  return(t);
}
ATerm v_41 (ATerm t)
{
  ATerm e_34 = NULL,f_34 = NULL,g_34 = NULL,k_34 = NULL,l_34 = NULL,o_34 = NULL;
  k_34 = t;
  t = term_k_42;
  e_34 = t;
  t = k_34;
  l_34 = t;
  t = term_d_62;
  f_34 = t;
  t = l_34;
  o_34 = t;
  t = term_j_53;
  g_34 = t;
  t = SSL_table_put(e_34, f_34, g_34);
  t = term_j_63;
  return(t);
}
ATerm w_41 (ATerm t)
{
  t = term_k_63;
  return(t);
}
ATerm x_41 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm c_113 (ATerm), ATerm t)
{
  ATerm a_30 = NULL,c_30 = NULL,d_30 = NULL,w_33 = NULL,x_33 = NULL,y_33 = NULL,a_34 = NULL,b_34 = NULL,c_34 = NULL,t_35 = NULL,u_35 = NULL;
  a_30 = t;
  a_34 = t;
  t = term_y_59;
  w_33 = t;
  t = a_34;
  b_34 = t;
  t = term_z_59;
  x_33 = t;
  t = b_34;
  c_34 = t;
  t = (ATerm) ATempty;
  y_33 = t;
  t = SSL_table_put(w_33, x_33, y_33);
  t = a_30;
  {
    ATerm t_41 (ATerm t)
    {
      ATerm l_63 = t;
      int m_63 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = c_113(t);
          ;
          LocalPopChoice(m_63);
        }
      else
        {
          t = l_63;
          {
            ATerm n_63 = t;
            int o_63 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(u_41, v_41, w_41, t);
                ;
                LocalPopChoice(o_63);
              }
            else
              {
                t = n_63;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(t_41, t);
    {
      ATerm p_63 = t;
      int q_63 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm j_30 = NULL;
          j_30 = t;
          {
            ATerm r_63 = t;
            int s_63 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm x_34 = NULL,y_34 = NULL;
                t = j_30;
                {
                  ATerm t_63 = t;
                  int u_63 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm p_34 = NULL,q_34 = NULL,r_34 = NULL,s_34 = NULL;
                      t = term_d_62;
                      r_34 = t;
                      t = term_k_42;
                      p_34 = t;
                      t = r_34;
                      s_34 = t;
                      t = term_d_62;
                      q_34 = t;
                      t = SSL_table_get(p_34, q_34);
                      {
                        ATerm v_63 = t;
                        int w_63 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm b_36 = NULL,t_34 = NULL,u_34 = NULL,v_34 = NULL,w_34 = NULL;
                            t = eval_config_0_0(t);
                            b_36 = t;
                            v_34 = t;
                            t = term_k_42;
                            t_34 = t;
                            t = v_34;
                            w_34 = t;
                            t = term_d_62;
                            u_34 = t;
                            t = SSL_table_put(t_34, u_34, b_36);
                            t = b_36;
                            ;
                            LocalPopChoice(w_63);
                          }
                        else
                          {
                            t = v_63;
                          }
                      }
                      ;
                      LocalPopChoice(u_63);
                    }
                  else
                    {
                      t = t_63;
                      t = fetch_1_0(x_41, t);
                    }
                  t = j_30;
                  t = default_system_usage_0_0(t);
                  y_34 = t;
                  t = term_n_59;
                  x_34 = t;
                  t = SSL_exit(x_34);
                }
                ;
                LocalPopChoice(s_63);
              }
            else
              {
                t = r_63;
                {
                  ATerm z_34 = NULL,b_35 = NULL,c_35 = NULL,d_35 = NULL,k_35 = NULL,l_35 = NULL;
                  t = term_u_62;
                  c_35 = t;
                  t = term_k_42;
                  z_34 = t;
                  t = c_35;
                  d_35 = t;
                  t = term_u_62;
                  b_35 = t;
                  t = SSL_table_get(z_34, b_35);
                  {
                    ATerm x_63 = t;
                    int y_63 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm i_36 = NULL,f_35 = NULL,g_35 = NULL,h_35 = NULL,j_35 = NULL;
                        t = eval_config_0_0(t);
                        i_36 = t;
                        h_35 = t;
                        t = term_k_42;
                        f_35 = t;
                        t = h_35;
                        j_35 = t;
                        t = term_u_62;
                        g_35 = t;
                        t = SSL_table_put(f_35, g_35, i_36);
                        t = i_36;
                        ;
                        LocalPopChoice(y_63);
                      }
                    else
                      {
                        t = x_63;
                      }
                    t = j_30;
                    t = default_system_about_0_0(t);
                    l_35 = t;
                    t = term_n_59;
                    k_35 = t;
                    t = SSL_exit(k_35);
                  }
                }
              }
          }
          ;
          LocalPopChoice(q_63);
        }
      else
        {
          t = p_63;
          {
            ATerm z_63 = t;
            int a_64 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm n_35 = NULL,o_35 = NULL,p_35 = NULL,q_35 = NULL,r_35 = NULL,s_35 = NULL;
                ATerm y_41 (ATerm t)
                {
                  ATerm z_41 (ATerm t)
                  {
                    if(((c_30 != NULL) && (c_30 != t)))
                      _fail(t);
                    else
                      c_30 = t;
                    return(t);
                  }
                  t = Undefined_1_0(z_41, t);
                  return(t);
                }
                t = fetch_1_0(y_41, t);
                p_35 = t;
                t = term_y_43;
                n_35 = t;
                t = p_35;
                q_35 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(c_30)), term_b_64);
                o_35 = t;
                t = SSL_printnl(n_35, o_35);
                t = (ATerm) ATmakeAppl(sym__2, term_y_43, (ATerm) ATinsert(ATinsert(ATempty, not_null(c_30)), term_b_64));
                t = default_system_usage_0_0(t);
                s_35 = t;
                t = term_o_44;
                r_35 = t;
                t = SSL_exit(r_35);
                ;
                LocalPopChoice(a_64);
              }
            else
              {
                t = z_63;
              }
          }
        }
      d_30 = t;
      u_35 = t;
      t = term_y_59;
      t_35 = t;
      t = SSL_table_destroy(t_35);
      t = d_30;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm o_110 (ATerm), ATerm p_110 (ATerm), ATerm q_110 (ATerm), ATerm r_110 (ATerm), ATerm t)
{
  ATerm m_30 = NULL,v_35 = NULL,w_35 = NULL,x_35 = NULL,y_35 = NULL,z_35 = NULL,a_36 = NULL;
  t = parse_options_1_0(o_110, t);
  m_30 = t;
  w_35 = t;
  t = term_c_64;
  v_35 = t;
  t = SSL_table_create(v_35);
  z_35 = t;
  t = term_c_64;
  x_35 = t;
  t = z_35;
  a_36 = t;
  t = term_d_64;
  y_35 = t;
  t = SSL_table_put(x_35, y_35, m_30);
  t = m_30;
  t = q_110(t);
  {
    ATerm e_64 = t;
    int f_64 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(p_110, t);
        ;
        LocalPopChoice(f_64);
      }
    else
      {
        t = e_64;
        {
          ATerm g_64 = t;
          int h_64 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = r_110(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(h_64);
            }
          else
            {
              t = g_64;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm a_42 (ATerm t)
{
  ATerm i_64 = t;
  int j_64 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = pack_stratego_options_0_0(t);
      ;
      LocalPopChoice(j_64);
    }
  else
    {
      t = i_64;
      {
        ATerm k_64 = t;
        int l_64 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = input_option_0_0(t);
            ;
            LocalPopChoice(l_64);
          }
        else
          {
            t = k_64;
            {
              ATerm m_64 = t;
              int n_64 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = output_option_0_0(t);
                  ;
                  LocalPopChoice(n_64);
                }
              else
                {
                  t = m_64;
                  {
                    ATerm o_64 = t;
                    int p_64 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Option_3_0(c_42, d_42, e_42, t);
                        ;
                        LocalPopChoice(p_64);
                      }
                    else
                      {
                        t = o_64;
                        {
                          ATerm q_64 = t;
                          int r_64 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = verbose_option_0_0(t);
                              ;
                              LocalPopChoice(r_64);
                            }
                          else
                            {
                              t = q_64;
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
ATerm c_42 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm d_42 (ATerm t)
{
  ATerm c_36 = NULL,d_36 = NULL,e_36 = NULL,f_36 = NULL,g_36 = NULL,h_36 = NULL;
  f_36 = t;
  t = term_k_42;
  c_36 = t;
  t = f_36;
  g_36 = t;
  t = term_s_64;
  d_36 = t;
  t = g_36;
  h_36 = t;
  t = term_j_53;
  e_36 = t;
  t = SSL_table_put(c_36, d_36, e_36);
  t = term_t_64;
  return(t);
}
ATerm e_42 (ATerm t)
{
  t = term_u_64;
  return(t);
}
ATerm g_42 (ATerm t)
{
  ATerm q_36 = NULL,r_36 = NULL,s_36 = NULL;
  r_36 = t;
  t = SSL_explode_string(r_36);
  {
    ATerm v_64 = t;
    int w_64 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_42 (ATerm t)
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm x_64 = ATgetFirst((ATermList) t);
              if(((ATgetType(x_64) != AT_INT) || (ATgetInt((ATermInt) x_64) != 47)))
                _fail(t);
              if(((q_36 != NULL) && (q_36 != (ATerm) ATgetNext((ATermList) t))))
                _fail((ATerm) ATgetNext((ATermList) t));
              else
                q_36 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          return(t);
        }
        t = at_suffix_rev_1_0(h_42, t);
        t = not_null(q_36);
        ;
        LocalPopChoice(w_64);
      }
    else
      {
        t = v_64;
      }
    s_36 = t;
    t = SSL_implode_string(s_36);
    t = basename_1_0(_id, t);
  }
  return(t);
}
ATerm pack_stratego_0_0 (ATerm t)
{
  ATerm n_30 = NULL,o_30 = NULL;
  ATerm b_42 (ATerm t)
  {
    ATerm f_42 (ATerm t)
    {
      t = pack_stratego_modules_0_0(t);
      if(match_cons(t, sym__2))
        {
          if(((n_30 != NULL) && (n_30 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            n_30 = ATgetArgument(t, 0);
          if(((o_30 != NULL) && (o_30 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            o_30 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm y_64 = t;
        int z_64 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_36 = NULL,k_36 = NULL,l_36 = NULL,n_36 = NULL;
            t = term_x_60;
            l_36 = t;
            t = term_k_42;
            j_36 = t;
            t = l_36;
            n_36 = t;
            t = term_x_60;
            k_36 = t;
            t = SSL_table_get(j_36, k_36);
            {
              ATerm a_65 = t;
              int b_65 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm m_36 = NULL,o_36 = NULL,p_36 = NULL,t_36 = NULL,u_36 = NULL;
                  t = eval_config_0_0(t);
                  m_36 = t;
                  t_36 = t;
                  t = term_k_42;
                  o_36 = t;
                  t = t_36;
                  u_36 = t;
                  t = term_x_60;
                  p_36 = t;
                  t = SSL_table_put(o_36, p_36, m_36);
                  t = m_36;
                  ;
                  LocalPopChoice(b_65);
                }
              else
                {
                  t = a_65;
                }
              t = not_null(n_30);
              t = map_1_0(g_42, t);
              t = write_to_text_0_0(t);
            }
            ;
            LocalPopChoice(z_64);
          }
        else
          {
            t = y_64;
            t = not_null(n_30);
            t = create_dep_file_0_0(t);
            t = not_null(o_30);
            t = write_to_0_0(t);
          }
      }
      return(t);
    }
    t = xtc_io_1_0(f_42, t);
    return(t);
  }
  t = option_wrap_4_0(a_42, default_usage_0_0, _id, b_42, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = pack_stratego_0_0(t);
  return(t);
}
