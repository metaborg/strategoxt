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
Symbol sym_Undefined_0;
Symbol sym_Scopes_0;
Symbol sym_F__OK_0;
Symbol sym_R__OK_0;
Symbol sym_Stream_1;
Symbol sym_Path_1;
Symbol sym_stdin_0;
Symbol sym_stdout_0;
Symbol sym_stderr_0;
Symbol sym_Var_1;
Symbol sym_Path_1;
Symbol sym_Prefix_2;
Symbol sym_WaitStatus_3;
Symbol sym_Signal_3;
Symbol sym_UnknownSignal_1;
Symbol sym_Version_0;
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
Symbol sym_Strategies_1;
Symbol sym_Specification_1;
Symbol sym_Var_1;
Symbol sym_Var_1;
Symbol sym_SVar_1;
Symbol sym_Call_2;
Symbol sym_Path_2;
Symbol sym_SDef_3;
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
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
  sym_Prefix_2 = ATmakeSymbol("Prefix", 2, ATfalse);
  ATprotectSymbol(sym_Prefix_2);
  sym_WaitStatus_3 = ATmakeSymbol("WaitStatus", 3, ATfalse);
  ATprotectSymbol(sym_WaitStatus_3);
  sym_Signal_3 = ATmakeSymbol("Signal", 3, ATfalse);
  ATprotectSymbol(sym_Signal_3);
  sym_UnknownSignal_1 = ATmakeSymbol("UnknownSignal", 1, ATfalse);
  ATprotectSymbol(sym_UnknownSignal_1);
  sym_Version_0 = ATmakeSymbol("Version", 0, ATfalse);
  ATprotectSymbol(sym_Version_0);
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
  sym_Strategies_1 = ATmakeSymbol("Strategies", 1, ATfalse);
  ATprotectSymbol(sym_Strategies_1);
  sym_Specification_1 = ATmakeSymbol("Specification", 1, ATfalse);
  ATprotectSymbol(sym_Specification_1);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_SVar_1 = ATmakeSymbol("SVar", 1, ATfalse);
  ATprotectSymbol(sym_SVar_1);
  sym_Call_2 = ATmakeSymbol("Call", 2, ATfalse);
  ATprotectSymbol(sym_Call_2);
  sym_Path_2 = ATmakeSymbol("Path", 2, ATfalse);
  ATprotectSymbol(sym_Path_2);
  sym_SDef_3 = ATmakeSymbol("SDef", 3, ATfalse);
  ATprotectSymbol(sym_SDef_3);
  init_constant_terms();
}
void __UnboundVarError (char * var)
{
  fprintf(stderr, "** compiler error: variable '%s' should be bound\nnotify stratego-bugs@cs.uu.nl\n", var);
}
ATerm term_q_50;
ATerm term_p_50;
ATerm term_o_50;
ATerm term_l_50;
ATerm term_k_50;
ATerm term_h_50;
ATerm term_g_50;
ATerm term_f_50;
ATerm term_e_50;
ATerm term_d_50;
ATerm term_c_50;
ATerm term_b_50;
ATerm term_a_50;
ATerm term_z_49;
ATerm term_y_49;
ATerm term_m_49;
ATerm term_l_49;
ATerm term_w_48;
ATerm term_v_48;
ATerm term_u_48;
ATerm term_t_48;
ATerm term_s_48;
ATerm term_n_48;
ATerm term_m_48;
ATerm term_l_48;
ATerm term_k_48;
ATerm term_j_48;
ATerm term_a_48;
ATerm term_z_47;
ATerm term_y_47;
ATerm term_v_47;
ATerm term_u_47;
ATerm term_t_47;
ATerm term_s_47;
ATerm term_r_47;
ATerm term_q_47;
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
ATerm term_w_46;
ATerm term_t_46;
ATerm term_q_46;
ATerm term_n_46;
ATerm term_k_46;
ATerm term_h_46;
ATerm term_g_46;
ATerm term_d_46;
ATerm term_a_46;
ATerm term_z_45;
ATerm term_w_45;
ATerm term_t_45;
ATerm term_q_45;
ATerm term_n_45;
ATerm term_k_45;
ATerm term_h_45;
ATerm term_e_45;
ATerm term_b_45;
ATerm term_y_44;
ATerm term_v_44;
ATerm term_s_44;
ATerm term_p_44;
ATerm term_g_44;
ATerm term_f_44;
ATerm term_e_44;
ATerm term_y_43;
ATerm term_v_43;
ATerm term_s_43;
ATerm term_p_43;
ATerm term_m_43;
ATerm term_l_43;
ATerm term_k_43;
ATerm term_j_43;
ATerm term_h_43;
ATerm term_g_43;
ATerm term_f_43;
ATerm term_z_42;
ATerm term_y_42;
ATerm term_q_41;
ATerm term_p_41;
ATerm term_i_41;
ATerm term_h_41;
ATerm term_o_40;
ATerm term_e_40;
ATerm term_u_39;
ATerm term_t_39;
ATerm term_s_39;
ATerm term_r_39;
ATerm term_q_39;
ATerm term_n_39;
ATerm term_m_39;
ATerm term_l_39;
ATerm term_c_39;
ATerm term_b_39;
ATerm term_y_38;
ATerm term_u_38;
ATerm term_m_38;
ATerm term_g_38;
ATerm term_f_38;
ATerm term_e_38;
ATerm term_d_38;
ATerm term_c_38;
ATerm term_b_38;
ATerm term_a_38;
ATerm term_z_37;
ATerm term_y_37;
ATerm term_x_37;
ATerm term_w_37;
ATerm term_v_37;
ATerm term_u_37;
ATerm term_t_37;
ATerm term_s_37;
ATerm term_r_37;
ATerm term_q_37;
ATerm term_p_37;
ATerm term_o_37;
ATerm term_n_37;
ATerm term_m_37;
ATerm term_l_37;
ATerm term_k_37;
ATerm term_j_37;
ATerm term_i_37;
ATerm term_h_37;
ATerm term_g_37;
ATerm term_f_37;
ATerm term_e_37;
ATerm term_d_37;
ATerm term_c_37;
ATerm term_b_37;
ATerm term_a_37;
ATerm term_z_36;
ATerm term_y_36;
ATerm term_x_36;
ATerm term_w_36;
ATerm term_v_36;
ATerm term_u_36;
ATerm term_t_36;
ATerm term_s_36;
ATerm term_r_36;
ATerm term_q_36;
ATerm term_p_36;
ATerm term_o_36;
ATerm term_n_36;
ATerm term_m_36;
ATerm term_l_36;
ATerm term_k_36;
ATerm term_j_36;
ATerm term_i_36;
ATerm term_h_36;
ATerm term_g_36;
ATerm term_f_36;
ATerm term_e_36;
ATerm term_d_36;
ATerm term_c_36;
ATerm term_b_36;
ATerm term_a_36;
ATerm term_z_35;
ATerm term_y_35;
ATerm term_x_35;
ATerm term_w_35;
ATerm term_v_35;
ATerm term_u_35;
ATerm term_t_35;
ATerm term_s_35;
ATerm term_r_35;
ATerm term_q_35;
ATerm term_p_35;
ATerm term_o_35;
ATerm term_n_35;
ATerm term_m_35;
ATerm term_l_35;
ATerm term_k_35;
ATerm term_j_35;
ATerm term_i_35;
ATerm term_h_35;
ATerm term_g_35;
ATerm term_f_35;
ATerm term_e_35;
ATerm term_d_35;
ATerm term_c_35;
ATerm term_b_35;
ATerm term_a_35;
ATerm term_z_34;
ATerm term_y_34;
ATerm term_x_34;
ATerm term_w_34;
ATerm term_v_34;
ATerm term_u_34;
ATerm term_t_34;
ATerm term_s_34;
ATerm term_r_34;
ATerm term_q_34;
ATerm term_p_34;
ATerm term_o_34;
ATerm term_n_34;
ATerm term_m_34;
ATerm term_l_34;
ATerm term_k_34;
ATerm term_j_34;
ATerm term_i_34;
ATerm term_h_34;
ATerm term_g_34;
ATerm term_f_34;
ATerm term_e_34;
ATerm term_b_34;
ATerm term_a_34;
ATerm term_z_33;
ATerm term_y_33;
ATerm term_w_33;
ATerm term_v_33;
ATerm term_k_33;
ATerm term_j_33;
ATerm term_i_33;
ATerm term_w_32;
ATerm term_t_32;
ATerm term_r_32;
ATerm term_q_32;
ATerm term_p_32;
ATerm term_o_32;
ATerm term_n_32;
ATerm term_m_32;
ATerm term_l_32;
ATerm term_k_32;
ATerm term_j_32;
ATerm term_i_32;
ATerm term_h_32;
ATerm term_g_32;
ATerm term_f_32;
ATerm term_e_32;
ATerm term_d_32;
ATerm term_c_32;
ATerm term_z_31;
ATerm term_y_31;
ATerm term_x_31;
ATerm term_w_31;
ATerm term_v_31;
ATerm term_u_31;
ATerm term_t_31;
ATerm term_s_31;
ATerm term_r_31;
ATerm term_q_31;
ATerm term_p_31;
ATerm term_o_31;
ATerm term_n_31;
ATerm term_m_31;
ATerm term_l_31;
ATerm term_k_31;
ATerm term_j_31;
ATerm term_i_31;
ATerm term_g_31;
ATerm term_f_31;
ATerm term_e_31;
ATerm term_d_31;
ATerm term_c_31;
ATerm term_b_31;
ATerm term_a_31;
ATerm term_z_30;
ATerm term_y_30;
ATerm term_x_30;
ATerm term_w_30;
ATerm term_r_30;
ATerm term_k_30;
ATerm term_j_30;
ATerm term_i_30;
ATerm term_b_30;
ATerm term_a_30;
ATerm term_s_29;
ATerm term_r_29;
ATerm term_q_29;
ATerm term_p_29;
ATerm term_m_29;
ATerm term_l_29;
ATerm term_b_29;
ATerm term_a_29;
ATerm term_o_28;
ATerm term_n_28;
ATerm term_m_28;
ATerm term_j_28;
ATerm term_i_28;
ATerm term_h_28;
ATerm term_g_28;
ATerm term_f_28;
ATerm term_e_28;
ATerm term_d_28;
ATerm term_x_27;
ATerm term_t_27;
ATerm term_s_27;
ATerm term_p_27;
ATerm term_o_27;
ATerm term_k_27;
ATerm term_j_27;
ATerm term_i_27;
ATerm term_h_27;
ATerm term_g_27;
ATerm term_d_27;
ATerm term_w_26;
ATerm term_v_26;
ATerm term_r_26;
ATerm term_n_26;
void init_constant_terms (void)
{
  ATprotect(&(term_n_26));
  term_n_26 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_r_26));
  term_r_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_v_26));
  term_v_26 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_w_26));
  term_w_26 = (ATerm) ATmakeAppl(ATmakeSymbol("linking object code", 0, ATtrue));
  ATprotect(&(term_d_27));
  term_d_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_g_27));
  term_g_27 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_h_27));
  term_h_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-CL", 0, ATtrue));
  ATprotect(&(term_i_27));
  term_i_27 = (ATerm) ATmakeAppl(ATmakeSymbol("gcc", 0, ATtrue));
  ATprotect(&(term_j_27));
  term_j_27 = (ATerm) ATmakeAppl(ATmakeSymbol("compiling C code", 0, ATtrue));
  ATprotect(&(term_k_27));
  term_k_27 = (ATerm) ATmakeAppl(ATmakeSymbol(".o", 0, ATtrue));
  ATprotect(&(term_o_27));
  term_o_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-CI", 0, ATtrue));
  ATprotect(&(term_p_27));
  term_p_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-c", 0, ATtrue));
  ATprotect(&(term_s_27));
  term_s_27 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_t_27));
  term_t_27 = (ATerm) ATmakeAppl(ATmakeSymbol("C compilation succeeded: ", 0, ATtrue));
  ATprotect(&(term_x_27));
  term_x_27 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_d_28));
  term_d_28 = (ATerm) ATmakeAppl(ATmakeSymbol("abox2text", 0, ATtrue));
  ATprotect(&(term_e_28));
  term_e_28 = (ATerm) ATmakeAppl(ATmakeSymbol("ast2abox", 0, ATtrue));
  ATprotect(&(term_f_28));
  term_f_28 = (ATerm) ATmakeAppl(ATmakeSymbol("C-pretty.pp", 0, ATtrue));
  ATprotect(&(term_g_28));
  term_g_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_h_28));
  term_h_28 = (ATerm) ATmakeAppl(ATmakeSymbol("s2c", 0, ATtrue));
  ATprotect(&(term_i_28));
  term_i_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--C-include", 0, ATtrue));
  ATprotect(&(term_j_28));
  term_j_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_m_28));
  term_m_28 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego-Canonical-Format", 0, ATtrue));
  ATprotect(&(term_n_28));
  term_n_28 = (ATerm) ATmakeAppl(ATmakeSymbol("canonicalize", 0, ATtrue));
  ATprotect(&(term_o_28));
  term_o_28 = (ATerm) ATmakeAppl(ATmakeSymbol("back-end", 0, ATtrue));
  ATprotect(&(term_a_29));
  term_a_29 = (ATerm) ATmakeAppl(ATmakeSymbol("back-end succeeded:      ", 0, ATtrue));
  ATprotect(&(term_b_29));
  term_b_29 = (ATerm) ATmakeAppl(ATmakeSymbol(".can", 0, ATtrue));
  ATprotect(&(term_l_29));
  term_l_29 = (ATerm) ATmakeAppl(ATmakeSymbol(".c", 0, ATtrue));
  ATprotect(&(term_m_29));
  term_m_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_p_29));
  term_p_29 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_q_29));
  term_q_29 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego-Optimized-Format", 0, ATtrue));
  ATprotect(&(term_r_29));
  term_r_29 = (ATerm) ATmakeAppl(ATmakeSymbol("optimize2", 0, ATtrue));
  ATprotect(&(term_s_29));
  term_s_29 = (ATerm) ATmakeAppl(ATmakeSymbol("dead-var-elim", 0, ATtrue));
  ATprotect(&(term_a_30));
  term_a_30 = (ATerm) ATmakeAppl(ATmakeSymbol("bound-unbound-vars", 0, ATtrue));
  ATprotect(&(term_b_30));
  term_b_30 = (ATerm) ATmakeAppl(ATmakeSymbol("const-prop", 0, ATtrue));
  ATprotect(&(term_i_30));
  term_i_30 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_j_30));
  term_j_30 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_k_30));
  term_k_30 = (ATerm) ATmakeAppl(ATmakeSymbol("dead-def-elim", 0, ATtrue));
  ATprotect(&(term_r_30));
  term_r_30 = (ATerm) ATmakeAppl(ATmakeSymbol("inline", 0, ATtrue));
  ATprotect(&(term_w_30));
  term_w_30 = (ATerm) ATmakeAppl(ATmakeSymbol("desugar-case", 0, ATtrue));
  ATprotect(&(term_x_30));
  term_x_30 = (ATerm) ATmakeAppl(ATmakeSymbol("compile-match", 0, ATtrue));
  ATprotect(&(term_y_30));
  term_y_30 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_z_30));
  term_z_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-O", 0, ATtrue));
  ATprotect(&(term_a_31));
  term_a_31 = (ATerm) ATmakeAppl(ATmakeSymbol("define-congruences", 0, ATtrue));
  ATprotect(&(term_b_31));
  term_b_31 = (ATerm) ATmakeAppl(ATmakeSymbol("fusion", 0, ATtrue));
  ATprotect(&(term_c_31));
  term_c_31 = (ATerm) ATmakeAppl(ATmakeSymbol("optimize1", 0, ATtrue));
  ATprotect(&(term_d_31));
  term_d_31 = (ATerm) ATmakeAppl(ATmakeSymbol("optimization", 0, ATtrue));
  ATprotect(&(term_e_31));
  term_e_31 = (ATerm) ATmakeAppl(ATmakeSymbol("optimization succeeded:  ", 0, ATtrue));
  ATprotect(&(term_f_31));
  term_f_31 = (ATerm) ATmakeAppl(ATmakeSymbol("optimization level: ", 0, ATtrue));
  ATprotect(&(term_g_31));
  term_g_31 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt1", 0, ATtrue));
  ATprotect(&(term_i_31));
  term_i_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--fusion", 0, ATtrue));
  ATprotect(&(term_j_31));
  term_j_31 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt2", 0, ATtrue));
  ATprotect(&(term_k_31));
  term_k_31 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt3", 0, ATtrue));
  ATprotect(&(term_l_31));
  term_l_31 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt4", 0, ATtrue));
  ATprotect(&(term_m_31));
  term_m_31 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt5", 0, ATtrue));
  ATprotect(&(term_n_31));
  term_n_31 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt6", 0, ATtrue));
  ATprotect(&(term_o_31));
  term_o_31 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt7", 0, ATtrue));
  ATprotect(&(term_p_31));
  term_p_31 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt8", 0, ATtrue));
  ATprotect(&(term_q_31));
  term_q_31 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt", 0, ATtrue));
  ATprotect(&(term_r_31));
  term_r_31 = (ATerm) ATmakeAppl(ATmakeSymbol("rename-defs", 0, ATtrue));
  ATprotect(&(term_s_31));
  term_s_31 = (ATerm) ATmakeAppl(ATmakeSymbol(".rn", 0, ATtrue));
  ATprotect(&(term_t_31));
  term_t_31 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego-Normal-Format", 0, ATtrue));
  ATprotect(&(term_u_31));
  term_u_31 = (ATerm) ATmakeAppl(ATmakeSymbol("stratego-warnings", 0, ATtrue));
  ATprotect(&(term_v_31));
  term_v_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--warning", 0, ATtrue));
  ATprotect(&(term_w_31));
  term_w_31 = (ATerm) ATmakeAppl(ATmakeSymbol("extract", 0, ATtrue));
  ATprotect(&(term_x_31));
  term_x_31 = (ATerm) ATmakeAppl(ATmakeSymbol(".ext", 0, ATtrue));
  ATprotect(&(term_y_31));
  term_y_31 = (ATerm) ATmakeAppl(ATmakeSymbol("extract-all", 0, ATtrue));
  ATprotect(&(term_z_31));
  term_z_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-F", 0, ATtrue));
  ATprotect(&(term_c_32));
  term_c_32 = (ATerm) ATmakeAppl(ATmakeSymbol("extracting all definitions failed", 0, ATtrue));
  ATprotect(&(term_d_32));
  term_d_32 = (ATerm) ATmakeAppl(ATmakeSymbol(".tree", 0, ATtrue));
  ATprotect(&(term_e_32));
  term_e_32 = (ATerm) ATmakeAppl(ATmakeSymbol("abstract syntax (after frontend) written to file", 0, ATtrue));
  ATprotect(&(term_f_32));
  term_f_32 = (ATerm) ATmakeAppl(ATmakeSymbol("frontend", 0, ATtrue));
  ATprotect(&(term_g_32));
  term_g_32 = (ATerm) ATmakeAppl(ATmakeSymbol(".fro", 0, ATtrue));
  ATprotect(&(term_h_32));
  term_h_32 = (ATerm) ATmakeAppl(ATmakeSymbol("repair-types", 0, ATtrue));
  ATprotect(&(term_i_32));
  term_i_32 = (ATerm) ATmakeAppl(ATmakeSymbol("pp-stratego", 0, ATtrue));
  ATprotect(&(term_j_32));
  term_j_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--abstract", 0, ATtrue));
  ATprotect(&(term_k_32));
  term_k_32 = (ATerm) ATmakeAppl(ATmakeSymbol(".txt", 0, ATtrue));
  ATprotect(&(term_l_32));
  term_l_32 = (ATerm) ATmakeAppl(ATmakeSymbol("abstract syntax in", 0, ATtrue));
  ATprotect(&(term_m_32));
  term_m_32 = (ATerm) ATmakeAppl(ATmakeSymbol(" concrete syntax in ", 0, ATtrue));
  ATprotect(&(term_n_32));
  term_n_32 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_o_32));
  term_o_32 = (ATerm) ATmakeAppl(ATmakeSymbol("main", 0, ATtrue));
  ATprotect(&(term_p_32));
  term_p_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-m", 0, ATtrue));
  ATprotect(&(term_q_32));
  term_q_32 = (ATerm) ATmakeAppl(ATmakeSymbol("main strategy is: ", 0, ATtrue));
  ATprotect(&(term_r_32));
  term_r_32 = (ATerm) ATmakeAppl(ATmakeSymbol(".with-main", 0, ATtrue));
  ATprotect(&(term_t_32));
  term_t_32 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_w_32));
  term_w_32 = (ATerm) ATmakeAppl(ATmakeSymbol("baseout", 0, ATtrue));
  ATprotect(&(term_i_33));
  term_i_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--ast", 0, ATtrue));
  ATprotect(&(term_j_33));
  term_j_33 = (ATerm) ATmakeAppl(ATmakeSymbol(".ast", 0, ATtrue));
  ATprotect(&(term_k_33));
  term_k_33 = (ATerm) ATmakeAppl(ATmakeSymbol("abstract syntax (after parsing) written to file", 0, ATtrue));
  ATprotect(&(term_v_33));
  term_v_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--dep", 0, ATtrue));
  ATprotect(&(term_w_33));
  term_w_33 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_y_33));
  term_y_33 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_z_33));
  term_z_33 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_a_34));
  term_a_34 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_b_34));
  term_b_34 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_e_34));
  term_e_34 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_f_34));
  term_f_34 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_g_34));
  term_g_34 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_34, term_p_29, term_f_34);
  ATprotect(&(term_h_34));
  term_h_34 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_i_34));
  term_i_34 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_j_34));
  term_j_34 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_34, term_v_26, term_i_34);
  ATprotect(&(term_k_34));
  term_k_34 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_l_34));
  term_l_34 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_m_34));
  term_m_34 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_34, term_i_30, term_l_34);
  ATprotect(&(term_n_34));
  term_n_34 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_o_34));
  term_o_34 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_p_34));
  term_p_34 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_q_34));
  term_q_34 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_34, term_o_34, term_p_34);
  ATprotect(&(term_r_34));
  term_r_34 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_s_34));
  term_s_34 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_t_34));
  term_t_34 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_u_34));
  term_u_34 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_34, term_s_34, term_t_34);
  ATprotect(&(term_v_34));
  term_v_34 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_w_34));
  term_w_34 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_x_34));
  term_x_34 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_y_34));
  term_y_34 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_34, term_w_34, term_x_34);
  ATprotect(&(term_z_34));
  term_z_34 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_a_35));
  term_a_35 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_b_35));
  term_b_35 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_c_35));
  term_c_35 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_34, term_a_35, term_b_35);
  ATprotect(&(term_d_35));
  term_d_35 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_e_35));
  term_e_35 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_f_35));
  term_f_35 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_g_35));
  term_g_35 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_35, term_e_35, term_f_35);
  ATprotect(&(term_h_35));
  term_h_35 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_i_35));
  term_i_35 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_j_35));
  term_j_35 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_k_35));
  term_k_35 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_35, term_i_35, term_j_35);
  ATprotect(&(term_l_35));
  term_l_35 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_m_35));
  term_m_35 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_n_35));
  term_n_35 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_o_35));
  term_o_35 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_35, term_m_35, term_n_35);
  ATprotect(&(term_p_35));
  term_p_35 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_q_35));
  term_q_35 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_r_35));
  term_r_35 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_s_35));
  term_s_35 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_35, term_q_35, term_r_35);
  ATprotect(&(term_t_35));
  term_t_35 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_u_35));
  term_u_35 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_v_35));
  term_v_35 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_35, term_y_30, term_u_35);
  ATprotect(&(term_w_35));
  term_w_35 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_x_35));
  term_x_35 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_y_35));
  term_y_35 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_z_35));
  term_z_35 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_35, term_x_35, term_y_35);
  ATprotect(&(term_a_36));
  term_a_36 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_b_36));
  term_b_36 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_c_36));
  term_c_36 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_d_36));
  term_d_36 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_36, term_b_36, term_c_36);
  ATprotect(&(term_e_36));
  term_e_36 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_f_36));
  term_f_36 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_g_36));
  term_g_36 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_h_36));
  term_h_36 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_36, term_f_36, term_g_36);
  ATprotect(&(term_i_36));
  term_i_36 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_j_36));
  term_j_36 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_k_36));
  term_k_36 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_l_36));
  term_l_36 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_36, term_j_36, term_k_36);
  ATprotect(&(term_m_36));
  term_m_36 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_n_36));
  term_n_36 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_o_36));
  term_o_36 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_p_36));
  term_p_36 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_36, term_n_36, term_o_36);
  ATprotect(&(term_q_36));
  term_q_36 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_r_36));
  term_r_36 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_s_36));
  term_s_36 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_t_36));
  term_t_36 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_36, term_r_36, term_s_36);
  ATprotect(&(term_u_36));
  term_u_36 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_v_36));
  term_v_36 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_w_36));
  term_w_36 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_x_36));
  term_x_36 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_36, term_v_36, term_w_36);
  ATprotect(&(term_y_36));
  term_y_36 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_z_36));
  term_z_36 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_a_37));
  term_a_37 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_b_37));
  term_b_37 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_36, term_z_36, term_a_37);
  ATprotect(&(term_c_37));
  term_c_37 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_d_37));
  term_d_37 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_e_37));
  term_e_37 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_f_37));
  term_f_37 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_37, term_d_37, term_e_37);
  ATprotect(&(term_g_37));
  term_g_37 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_h_37));
  term_h_37 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_i_37));
  term_i_37 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_j_37));
  term_j_37 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_37, term_h_37, term_i_37);
  ATprotect(&(term_k_37));
  term_k_37 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_l_37));
  term_l_37 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_m_37));
  term_m_37 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_n_37));
  term_n_37 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_37, term_l_37, term_m_37);
  ATprotect(&(term_o_37));
  term_o_37 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_p_37));
  term_p_37 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_q_37));
  term_q_37 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_r_37));
  term_r_37 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_37, term_p_37, term_q_37);
  ATprotect(&(term_s_37));
  term_s_37 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_t_37));
  term_t_37 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_u_37));
  term_u_37 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_37, term_j_30, term_t_37);
  ATprotect(&(term_v_37));
  term_v_37 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_w_37));
  term_w_37 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_x_37));
  term_x_37 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_y_37));
  term_y_37 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_37, term_w_37, term_x_37);
  ATprotect(&(term_z_37));
  term_z_37 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_a_38));
  term_a_38 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_b_38));
  term_b_38 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_c_38));
  term_c_38 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_37, term_a_38, term_b_38);
  ATprotect(&(term_d_38));
  term_d_38 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_e_38));
  term_e_38 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_f_38));
  term_f_38 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_g_38));
  term_g_38 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_38, term_e_38, term_f_38);
  ATprotect(&(term_m_38));
  term_m_38 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_u_38));
  term_u_38 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_y_38));
  term_y_38 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file> (file, mode)", 0, ATtrue));
  ATprotect(&(term_b_39));
  term_b_39 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_c_39));
  term_c_39 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_l_39));
  term_l_39 = (ATerm) ATmakeAppl(ATmakeSymbol("basein: ", 0, ATtrue));
  ATprotect(&(term_m_39));
  term_m_39 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_n_39));
  term_n_39 = (ATerm) ATmakeAppl(ATmakeSymbol("basein", 0, ATtrue));
  ATprotect(&(term_q_39));
  term_q_39 = (ATerm) ATmakeAppl(ATmakeSymbol("baseout: ", 0, ATtrue));
  ATprotect(&(term_r_39));
  term_r_39 = (ATerm) ATmakeAppl(ATmakeSymbol("pack-stratego", 0, ATtrue));
  ATprotect(&(term_s_39));
  term_s_39 = (ATerm) ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue));
  ATprotect(&(term_t_39));
  term_t_39 = (ATerm) ATmakeAppl(ATmakeSymbol("front-end: ", 0, ATtrue));
  ATprotect(&(term_u_39));
  term_u_39 = (ATerm) ATmakeAppl(ATmakeSymbol("front-end succeeded:     ", 0, ATtrue));
  ATprotect(&(term_e_40));
  term_e_40 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_o_40));
  term_o_40 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_h_41));
  term_h_41 = (ATerm) ATmakeAppl(ATmakeSymbol(" user ", 0, ATtrue));
  ATprotect(&(term_i_41));
  term_i_41 = (ATerm) ATmakeAppl(ATmakeSymbol(" system ", 0, ATtrue));
  ATprotect(&(term_p_41));
  term_p_41 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_q_41));
  term_q_41 = (ATerm) ATmakeAppl(ATmakeSymbol("VERSION", 0, ATtrue));
  ATprotect(&(term_y_42));
  term_y_42 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_z_42));
  term_z_42 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_f_43));
  term_f_43 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_g_43));
  term_g_43 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_h_43));
  term_h_43 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_j_43));
  term_j_43 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_k_43));
  term_k_43 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_l_43));
  term_l_43 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_m_43));
  term_m_43 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_p_43));
  term_p_43 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_s_43));
  term_s_43 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_v_43));
  term_v_43 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_y_43));
  term_y_43 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_e_44));
  term_e_44 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_f_44));
  term_f_44 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_g_44));
  term_g_44 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_p_44));
  term_p_44 = (ATerm) ATmakeAppl(ATmakeSymbol("-i file            Main module to compile (required)\n", 0, ATtrue));
  ATprotect(&(term_s_44));
  term_s_44 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f | --output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_v_44));
  term_v_44 = (ATerm) ATmakeAppl(ATmakeSymbol("-I d | --Include d Include modules from directory d", 0, ATtrue));
  ATprotect(&(term_y_44));
  term_y_44 = (ATerm) ATmakeAppl(ATmakeSymbol("--main f | -m f    Main strategy to compile (default: main)\n", 0, ATtrue));
  ATprotect(&(term_b_45));
  term_b_45 = (ATerm) ATmakeAppl(ATmakeSymbol("--C-include h      Include header file h (\"file.h\" or <file.h>)", 0, ATtrue));
  ATprotect(&(term_e_45));
  term_e_45 = (ATerm) ATmakeAppl(ATmakeSymbol("-CI d              Include C headers from directory d", 0, ATtrue));
  ATprotect(&(term_h_45));
  term_h_45 = (ATerm) ATmakeAppl(ATmakeSymbol("-CL d              Include binary libraries from directory d\n", 0, ATtrue));
  ATprotect(&(term_k_45));
  term_k_45 = (ATerm) ATmakeAppl(ATmakeSymbol("-c                 Produce C code only (don't compile)", 0, ATtrue));
  ATprotect(&(term_n_45));
  term_n_45 = (ATerm) ATmakeAppl(ATmakeSymbol("--ast              Produce abstract syntax tree", 0, ATtrue));
  ATprotect(&(term_q_45));
  term_q_45 = (ATerm) ATmakeAppl(ATmakeSymbol("-F                 Produce normalized specification", 0, ATtrue));
  ATprotect(&(term_t_45));
  term_t_45 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep n           Keep intermediate results (0 = keep nothing)", 0, ATtrue));
  ATprotect(&(term_w_45));
  term_w_45 = (ATerm) ATmakeAppl(ATmakeSymbol("-O n               Optimization level (0 = no optimization)", 0, ATtrue));
  ATprotect(&(term_z_45));
  term_z_45 = (ATerm) ATmakeAppl(sym__2, term_i_31, term_n_32);
  ATprotect(&(term_a_46));
  term_a_46 = (ATerm) ATmakeAppl(ATmakeSymbol("--fusion           Toggle specialize applications of innermost (default: on)", 0, ATtrue));
  ATprotect(&(term_d_46));
  term_d_46 = (ATerm) ATmakeAppl(ATmakeSymbol("--trace-all        Instrument all definitions to print tracing information", 0, ATtrue));
  ATprotect(&(term_g_46));
  term_g_46 = (ATerm) ATmakeAppl(ATmakeSymbol("-t", 0, ATtrue));
  ATprotect(&(term_h_46));
  term_h_46 = (ATerm) ATmakeAppl(ATmakeSymbol("-t f               Instrument definition of f to print tracing information\n", 0, ATtrue));
  ATprotect(&(term_k_46));
  term_k_46 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i        Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_n_46));
  term_n_46 = (ATerm) ATmakeAppl(ATmakeSymbol("-S | --silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_q_46));
  term_q_46 = (ATerm) ATmakeAppl(ATmakeSymbol("-h | --help        Show help", 0, ATtrue));
  ATprotect(&(term_t_46));
  term_t_46 = (ATerm) ATmakeAppl(ATmakeSymbol("--man              Show manual page", 0, ATtrue));
  ATprotect(&(term_w_46));
  term_w_46 = (ATerm) ATmakeAppl(ATmakeSymbol("-v | --version     Display program's version", 0, ATtrue));
  ATprotect(&(term_z_46));
  term_z_46 = (ATerm) ATmakeAppl(ATmakeSymbol("-W | --warning     Set warning level (-W all to switch all warnings on)", 0, ATtrue));
  ATprotect(&(term_a_47));
  term_a_47 = (ATerm) ATmakeAppl(ATmakeSymbol("Examples:\n", 0, ATtrue));
  ATprotect(&(term_b_47));
  term_b_47 = (ATerm) ATmakeAppl(ATmakeSymbol("Compile module M.str to an executable\n", 0, ATtrue));
  ATprotect(&(term_c_47));
  term_c_47 = (ATerm) ATmakeAppl(ATmakeSymbol("  strc -i M\n", 0, ATtrue));
  ATprotect(&(term_d_47));
  term_d_47 = (ATerm) ATmakeAppl(ATmakeSymbol("Use strategy foo as main strategy instead of main\n", 0, ATtrue));
  ATprotect(&(term_e_47));
  term_e_47 = (ATerm) ATmakeAppl(ATmakeSymbol("  strc -i M --main foo\n", 0, ATtrue));
  ATprotect(&(term_f_47));
  term_f_47 = (ATerm) ATmakeAppl(ATmakeSymbol("Compile module M.str to C code in file M.c\n", 0, ATtrue));
  ATprotect(&(term_g_47));
  term_g_47 = (ATerm) ATmakeAppl(ATmakeSymbol("  strc -i M -c\n", 0, ATtrue));
  ATprotect(&(term_h_47));
  term_h_47 = (ATerm) ATmakeAppl(ATmakeSymbol("Include modules from directory ../sig\n", 0, ATtrue));
  ATprotect(&(term_i_47));
  term_i_47 = (ATerm) ATmakeAppl(ATmakeSymbol("  strc -i M -I ../sig\n", 0, ATtrue));
  ATprotect(&(term_j_47));
  term_j_47 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_k_47));
  term_k_47 = (ATerm) ATmakeAppl(ATmakeSymbol("Note that strc is a whole program compiler, i.e, it\n", 0, ATtrue));
  ATprotect(&(term_l_47));
  term_l_47 = (ATerm) ATmakeAppl(ATmakeSymbol("compiles all (recursively) imported modules into\n", 0, ATtrue));
  ATprotect(&(term_m_47));
  term_m_47 = (ATerm) ATmakeAppl(ATmakeSymbol("a single C source file.\n", 0, ATtrue));
  ATprotect(&(term_n_47));
  term_n_47 = (ATerm) ATmakeAppl(ATmakeSymbol("Report bugs to <stratego-bugs@cs.uu.nl>\n", 0, ATtrue));
  ATprotect(&(term_q_47));
  term_q_47 = (ATerm) ATmakeAppl(ATmakeSymbol("STRC compiles Stratego programs to C or executable code.\n", 0, ATtrue));
  ATprotect(&(term_r_47));
  term_r_47 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego is a language for program transformation based on the\n", 0, ATtrue));
  ATprotect(&(term_s_47));
  term_s_47 = (ATerm) ATmakeAppl(ATmakeSymbol("paradigm of rewriting strategies.\n", 0, ATtrue));
  ATprotect(&(term_t_47));
  term_t_47 = (ATerm) ATmakeAppl(ATmakeSymbol("For documentation see http://www.stratego-language.org\n", 0, ATtrue));
  ATprotect(&(term_u_47));
  term_u_47 = (ATerm) ATmakeAppl(ATmakeSymbol("Usage: ", 0, ATtrue));
  ATprotect(&(term_v_47));
  term_v_47 = (ATerm) ATmakeAppl(ATmakeSymbol(" -i file [options]", 0, ATtrue));
  ATprotect(&(term_y_47));
  term_y_47 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_z_47));
  term_z_47 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_a_48));
  term_a_48 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_j_48));
  term_j_48 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_k_48));
  term_k_48 = (ATerm) ATmakeAppl(sym__3, term_m_39, term_j_48, term_n_32);
  ATprotect(&(term_l_48));
  term_l_48 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_m_48));
  term_m_48 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_n_48));
  term_n_48 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_s_48));
  term_s_48 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_t_48));
  term_t_48 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_u_48));
  term_u_48 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_v_48));
  term_v_48 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_w_48));
  term_w_48 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_l_49));
  term_l_49 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_m_49));
  term_m_49 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_y_49));
  term_y_49 = (ATerm) ATmakeAppl(ATmakeSymbol("lib.rtree", 0, ATtrue));
  ATprotect(&(term_z_49));
  term_z_49 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego.rtree", 0, ATtrue));
  ATprotect(&(term_a_50));
  term_a_50 = (ATerm) ATmakeAppl(ATmakeSymbol("StrategoRenamed.sdf", 0, ATtrue));
  ATprotect(&(term_b_50));
  term_b_50 = (ATerm) ATmakeAppl(ATmakeSymbol("SRTS", 0, ATtrue));
  ATprotect(&(term_c_50));
  term_c_50 = (ATerm) ATmakeAppl(ATmakeSymbol("/include", 0, ATtrue));
  ATprotect(&(term_d_50));
  term_d_50 = (ATerm) ATmakeAppl(ATmakeSymbol("ATERM", 0, ATtrue));
  ATprotect(&(term_e_50));
  term_e_50 = (ATerm) ATmakeAppl(ATmakeSymbol("/lib", 0, ATtrue));
  ATprotect(&(term_f_50));
  term_f_50 = (ATerm) ATmakeAppl(ATmakeSymbol("--man", 0, ATtrue));
  ATprotect(&(term_g_50));
  term_g_50 = (ATerm) ATmakeAppl(ATmakeSymbol("sc-manual.txt", 0, ATtrue));
  ATprotect(&(term_h_50));
  term_h_50 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_k_50));
  term_k_50 = (ATerm) ATmakeAppl(ATmakeSymbol("no main module specified", 0, ATtrue));
  ATprotect(&(term_l_50));
  term_l_50 = (ATerm) ATmakeAppl(ATmakeSymbol("compiling ", 0, ATtrue));
  ATprotect(&(term_o_50));
  term_o_50 = (ATerm) ATmakeAppl(ATmakeSymbol("-----\ncompilation succeeded:   ", 0, ATtrue));
  ATprotect(&(term_p_50));
  term_p_50 = (ATerm) ATmakeAppl(ATmakeSymbol("compilation succeeded (", 0, ATtrue));
  ATprotect(&(term_q_50));
  term_q_50 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
}
ATerm foldr_2_0 (ATerm x_92 (ATerm), ATerm y_92 (ATerm), ATerm);
ATerm crush_2_0 (ATerm q_96 (ATerm), ATerm r_96 (ATerm), ATerm);
ATerm run_time_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm p_100 (ATerm), ATerm);
ATerm link_object_code_0_0 (ATerm);
ATerm c_to_object_code_0_0 (ATerm);
ATerm c_compile_0_0 (ATerm);
ATerm rename_to_1_0 (ATerm q_0 (ATerm), ATerm);
ATerm xtc_transform_1_0 (ATerm e_109 (ATerm), ATerm);
ATerm abox2text_0_0 (ATerm);
ATerm ac2abox_0_0 (ATerm);
ATerm s2c_0_0 (ATerm);
ATerm stratego_cf_0_0 (ATerm);
ATerm canonicalize_0_0 (ATerm);
ATerm back_end_0_0 (ATerm);
ATerm if_keep1_1_0 (ATerm q_101 (ATerm), ATerm);
ATerm save_as1_1_0 (ATerm c_79 (ATerm), ATerm);
ATerm stratego_of_0_0 (ATerm);
ATerm olevel1_1_0 (ATerm v_109 (ATerm), ATerm);
ATerm optimize2_0_0 (ATerm);
ATerm dead_var_elim_0_0 (ATerm);
ATerm bound_unbound_vars_0_0 (ATerm);
ATerm const_prop_0_0 (ATerm);
ATerm olevel3_1_0 (ATerm x_109 (ATerm), ATerm);
ATerm if_keep5_1_0 (ATerm u_101 (ATerm), ATerm);
ATerm save_as5_1_0 (ATerm g_79 (ATerm), ATerm);
ATerm dead_def_elim_0_0 (ATerm);
ATerm olevel5_1_0 (ATerm z_109 (ATerm), ATerm);
ATerm inline_0_0 (ATerm);
ATerm desugar_case_0_0 (ATerm);
ATerm olevel2_1_0 (ATerm w_109 (ATerm), ATerm);
ATerm compile_match_0_0 (ATerm);
ATerm if_keep4_1_0 (ATerm t_101 (ATerm), ATerm);
ATerm save_as4_1_0 (ATerm f_79 (ATerm), ATerm);
ATerm olevel_2_0 (ATerm t_109 (ATerm), ATerm u_109 (ATerm), ATerm);
ATerm olevel4_1_0 (ATerm y_109 (ATerm), ATerm);
ATerm define_congruences_0_0 (ATerm);
ATerm fusion_0_0 (ATerm);
ATerm optimize1_0_0 (ATerm);
ATerm optimize_0_0 (ATerm);
ATerm rename_defs_0_0 (ATerm);
ATerm stratego_nf_0_0 (ATerm);
ATerm warnings_0_0 (ATerm);
ATerm extract_0_0 (ATerm);
ATerm extract_all_0_0 (ATerm);
ATerm output_frontend_0_0 (ATerm);
ATerm if_keep2_1_0 (ATerm r_101 (ATerm), ATerm);
ATerm save_as2_1_0 (ATerm d_79 (ATerm), ATerm);
ATerm frontend_0_0 (ATerm);
ATerm repair_types_0_0 (ATerm);
ATerm save_as_1_0 (ATerm b_79 (ATerm), ATerm);
ATerm if_keep3_1_0 (ATerm s_101 (ATerm), ATerm);
ATerm save_as3_1_0 (ATerm e_79 (ATerm), ATerm);
ATerm AddMain_1_0 (ATerm z_78 (ATerm), ATerm);
ATerm xtc_io_transform_1_0 (ATerm o_109 (ATerm), ATerm);
ATerm add_main_0_0 (ATerm);
ATerm xtc_exit_0_0 (ATerm);
ATerm xtc_io_exit_0_0 (ATerm);
ATerm get_outfile_1_0 (ATerm a_79 (ATerm), ATerm);
ATerm copy_to_1_0 (ATerm o_0 (ATerm), ATerm);
ATerm output_ast_0_0 (ATerm);
ATerm pass_keep_0_0 (ATerm);
ATerm pass_verbose_0_0 (ATerm);
ATerm dep_name_0_0 (ATerm);
ATerm read_from_0_0 (ATerm);
ATerm WriteToFile_1_0 (ATerm l_99 (ATerm), ATerm);
ATerm WriteToBinaryFile_0_0 (ATerm);
ATerm write_to_0_0 (ATerm);
ATerm xtc_transform_term_2_0 (ATerm m_109 (ATerm), ATerm n_109 (ATerm), ATerm);
ATerm concat_strings_0_0 (ATerm);
ATerm signal_to_descr_0_0 (ATerm);
ATerm fetch_elem_1_0 (ATerm i_87 (ATerm), ATerm);
ATerm signal_from_number_0_0 (ATerm);
ATerm warn_ifsignaled_0_0 (ATerm);
ATerm fork_0_0 (ATerm);
ATerm fork_2_0 (ATerm g_102 (ATerm), ATerm h_102 (ATerm), ATerm);
ATerm fork_and_wait_1_0 (ATerm i_102 (ATerm), ATerm);
ATerm call_0_0 (ATerm);
ATerm xtc_find_warning_0_0 (ATerm);
ATerm xtc_command_1_0 (ATerm d_109 (ATerm), ATerm);
ATerm assert_1_0 (ATerm s_97 (ATerm), ATerm);
ATerm obsolete_1_0 (ATerm e_99 (ATerm), ATerm);
ATerm open_file_0_0 (ATerm);
ATerm new_0_0 (ATerm);
ATerm new_file_0_0 (ATerm);
ATerm xtc_new_file_0_0 (ATerm);
ATerm xtc_transform_file_2_0 (ATerm m_0 (ATerm), ATerm n_0 (ATerm), ATerm);
ATerm FILE_1_0 (ATerm e_71 (ATerm), ATerm);
ATerm xtc_transform_2_0 (ATerm f_109 (ATerm), ATerm g_109 (ATerm), ATerm);
ATerm if_verbose3_1_0 (ATerm q_100 (ATerm), ATerm);
ATerm basename_1_0 (ATerm t_95 (ATerm), ATerm);
ATerm basename_0_0 (ATerm);
ATerm get_infile_0_0 (ATerm);
ATerm parse_0_0 (ATerm);
ATerm front_end_0_0 (ATerm);
ATerm table_pop_0_0 (ATerm);
ATerm end_scope_1_0 (ATerm p_97 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm z_79 (ATerm), ATerm a_80 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm o_97 (ATerm), ATerm);
ATerm xtc_temp_files_1_0 (ATerm p_108 (ATerm), ATerm);
ATerm xtc_input_1_0 (ATerm s_108 (ATerm), ATerm);
ATerm compile_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm o_100 (ATerm), ATerm);
ATerm diff_times_0_0 (ATerm);
ATerm times_0_0 (ATerm);
ATerm profile_p__2_0 (ATerm i_104 (ATerm), ATerm j_104 (ATerm), ATerm);
ATerm debug_1_0 (ATerm x_98 (ATerm), ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm strc_announce_0_0 (ATerm);
ATerm fatal_error_0_0 (ATerm);
ATerm strc_version_0_0 (ATerm);
ATerm try_1_0 (ATerm k_79 (ATerm), ATerm);
ATerm table_getlist_0_0 (ATerm);
ATerm if_verbose5_1_0 (ATerm s_100 (ATerm), ATerm);
ATerm xtc_find_version_loc_0_0 (ATerm);
ATerm filter_1_0 (ATerm a_94 (ATerm), ATerm);
ATerm repeat_1_0 (ATerm g_80 (ATerm), ATerm);
ATerm xtc_import_0_0 (ATerm);
ATerm say_1_0 (ATerm b_99 (ATerm), ATerm);
ATerm if_verbose4_1_0 (ATerm r_100 (ATerm), ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose6_1_0 (ATerm t_100 (ATerm), ATerm);
ATerm HdMember_p__2_0 (ATerm d_91 (ATerm), ATerm e_91 (ATerm), ATerm);
ATerm union_1_0 (ATerm z_90 (ATerm), ATerm);
ATerm union_0_0 (ATerm);
ATerm table_append_0_0 (ATerm);
ATerm table_putlist_1_0 (ATerm r_105 (ATerm), ATerm);
ATerm fclose_0_0 (ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm stdio_stream_0_0 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm read_repository_file_0_0 (ATerm);
ATerm xtc_read_0_0 (ATerm);
ATerm xtc_location_0_0 (ATerm);
ATerm xtc_load_0_0 (ATerm);
ATerm xtc_find_0_0 (ATerm);
ATerm extend_config_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm);
ATerm toggle_config_0_0 (ATerm);
ATerm post_extend_config_0_0 (ATerm);
ATerm sc_options_0_0 (ATerm);
ATerm long_description_1_0 (ATerm i_0 (ATerm), ATerm);
ATerm map_1_0 (ATerm v_86 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm);
ATerm reverse_0_0 (ATerm);
ATerm short_description_1_0 (ATerm f_0 (ATerm), ATerm);
ATerm Program_1_0 (ATerm a_71 (ATerm), ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm b_71 (ATerm), ATerm);
ATerm fetch_1_0 (ATerm g_87 (ATerm), ATerm);
ATerm option_defined_1_0 (ATerm l_104 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm system_about_0_0 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm register_usage_1_0 (ATerm q_105 (ATerm), ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm system_usage_switch_0_0 (ATerm);
ATerm parse_options_p__1_0 (ATerm o_105 (ATerm), ATerm);
ATerm parse_options_1_0 (ATerm n_105 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm conc_more_lists_0_0 (ATerm);
ATerm at_end_1_0 (ATerm m_87 (ATerm), ATerm);
ATerm conc_two_lists_0_0 (ATerm);
ATerm conc_0_0 (ATerm);
ATerm _2_0 (ATerm b_64 (ATerm), ATerm c_64 (ATerm), ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm Cons_2_0 (ATerm k_65 (ATerm), ATerm l_65 (ATerm), ATerm);
ATerm get_path_0_0 (ATerm);
ATerm xtc_find_path_0_0 (ATerm);
ATerm init_sc_config_0_0 (ATerm);
ATerm command_line_options_0_0 (ATerm);
ATerm strc_0_0 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm foldr_2_0 (ATerm x_92 (ATerm), ATerm y_92 (ATerm), ATerm t)
{
  ATerm m_13 = t;
  int n_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = x_92(t);
      ;
      LocalPopChoice(n_14);
    }
  else
    {
      t = m_13;
      {
        ATerm s_0 = NULL,t_0 = NULL,w_0 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            s_0 = ATgetFirst((ATermList) t);
            t_0 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = t_0;
        t = foldr_2_0(x_92, y_92, t);
        w_0 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_0, w_0);
        t = y_92(t);
      }
    }
  return(t);
}
ATerm crush_2_0 (ATerm q_96 (ATerm), ATerm r_96 (ATerm), ATerm t)
{
  ATerm x_0 = NULL,a_1 = NULL;
  x_0 = t;
  t = SSL_explode_term(x_0);
  if(match_cons(t, sym__2))
    {
      ATerm m_26 = ATgetArgument(t, 0);
      a_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_1;
  t = foldr_2_0(q_96, r_96, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm b_1 = NULL;
  t = times_0_0(t);
  {
    ATerm c_0 (ATerm t)
    {
      t = term_n_26;
      return(t);
    }
    ATerm p_0 (ATerm t)
    {
      ATerm c_1 = NULL,d_1 = NULL;
      if(match_cons(t, sym__2))
        {
          c_1 = ATgetArgument(t, 0);
          d_1 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm o_26 = t;
        int p_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(c_1, d_1);
            ;
            LocalPopChoice(p_26);
          }
        else
          {
            t = o_26;
            t = SSL_addr(c_1, d_1);
          }
      }
      return(t);
    }
    t = crush_2_0(c_0, p_0, t);
    b_1 = t;
    t = SSL_TicksToSeconds(b_1);
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm p_100 (ATerm), ATerm t)
{
  ATerm r_0 (ATerm t)
  {
    ATerm h_1 = NULL,i_1 = NULL;
    h_1 = t;
    t = term_r_26;
    t = get_config_0_0(t);
    i_1 = t;
    t = (ATerm) ATmakeAppl(sym__2, i_1, term_v_26);
    t = geq_0_0(t);
    t = h_1;
    t = p_100(t);
    return(t);
  }
  t = try_1_0(r_0, t);
  return(t);
}
ATerm link_object_code_0_0 (ATerm t)
{
  ATerm l_1 = NULL,m_1 = NULL,n_1 = NULL;
  if(match_cons(t, sym_FILE_1))
    {
      l_1 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm u_0 (ATerm t)
    {
      ATerm v_0 (ATerm t)
      {
        t = term_w_26;
        return(t);
      }
      t = say_1_0(v_0, t);
      return(t);
    }
    t = if_verbose2_1_0(u_0, t);
    {
      ATerm y_26 = t;
      int a_27 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = term_d_27;
          t = get_config_0_0(t);
          ;
          LocalPopChoice(a_27);
        }
      else
        {
          t = y_26;
          {
            ATerm z_0 (ATerm t)
            {
              t = term_g_27;
              return(t);
            }
            t = get_outfile_1_0(z_0, t);
          }
        }
      m_1 = t;
      t = term_h_27;
      t = get_config_0_0(t);
      n_1 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_i_27, (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(n_1), m_1), term_d_27), l_1));
      {
        ATerm e_1 (ATerm t)
        {
          ATerm e_0 = NULL;
          e_0 = t;
          t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, e_0));
          t = e_0;
          return(t);
        }
        t = if_verbose3_1_0(e_1, t);
        t = call_0_0(t);
        t = (ATerm) ATmakeAppl(sym_FILE_1, m_1);
      }
    }
  }
  return(t);
}
ATerm c_to_object_code_0_0 (ATerm t)
{
  ATerm o_1 = NULL,p_1 = NULL,q_1 = NULL,r_1 = NULL;
  if(match_cons(t, sym_FILE_1))
    {
      o_1 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm f_1 (ATerm t)
    {
      ATerm g_1 (ATerm t)
      {
        t = term_j_27;
        return(t);
      }
      t = say_1_0(g_1, t);
      return(t);
    }
    t = if_verbose2_1_0(f_1, t);
    {
      ATerm j_1 (ATerm t)
      {
        t = term_k_27;
        return(t);
      }
      t = get_outfile_1_0(j_1, t);
      p_1 = t;
      t = term_o_27;
      t = get_config_0_0(t);
      q_1 = t;
      t = (ATerm) ATmakeAppl(sym__2, q_1, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, p_1), term_d_27), o_1), term_p_27));
      t = conc_0_0(t);
      r_1 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_i_27, r_1);
      {
        ATerm k_1 (ATerm t)
        {
          ATerm y_0 = NULL;
          y_0 = t;
          t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, y_0));
          t = y_0;
          return(t);
        }
        t = if_verbose3_1_0(k_1, t);
        t = call_0_0(t);
        t = (ATerm) ATmakeAppl(sym_FILE_1, p_1);
      }
    }
  }
  return(t);
}
ATerm c_compile_0_0 (ATerm t)
{
  ATerm q_27 = t;
  int r_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_1 = NULL;
      t_1 = t;
      t = term_p_27;
      t = get_config_0_0(t);
      t = t_1;
      ;
      LocalPopChoice(r_27);
    }
  else
    {
      t = q_27;
      {
        ATerm u_1 (ATerm t)
        {
          ATerm y_1 (ATerm t)
          {
            ATerm v_1 = NULL;
            v_1 = t;
            t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(CheckATermList(v_1), (ATerm) ATmakeAppl(ATmakeSymbol("C compilation succeeded: ", 0, ATtrue))));
            t = (ATerm) ATmakeAppl(sym__2, term_s_27, (ATerm) ATinsert(CheckATermList(v_1), term_t_27));
            return(t);
          }
          t = if_verbose1_1_0(y_1, t);
          return(t);
        }
        ATerm x_1 (ATerm t)
        {
          t = c_to_object_code_0_0(t);
          t = link_object_code_0_0(t);
          return(t);
        }
        t = profile_p__2_0(u_1, x_1, t);
      }
    }
  return(t);
}
ATerm rename_to_1_0 (ATerm q_0 (ATerm), ATerm t)
{
  ATerm o_2 = NULL,p_2 = NULL;
  o_2 = t;
  if(match_cons(t, sym_FILE_1))
    {
      p_2 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm u_27 = t;
    int v_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_2;
        t = q_0(t);
        if(!(match_cons(t, sym_stdout_0)))
          _fail(t);
        t = SSL_copy(p_2, (ATerm) ATmakeAppl(sym_stdout_0));
        t = SSL_remove(p_2);
        t = term_x_27;
        ;
        LocalPopChoice(v_27);
      }
    else
      {
        t = u_27;
        {
          ATerm y_27 = t;
          int z_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm s_1 = NULL;
              t = o_2;
              t = q_0(t);
              s_1 = t;
              {
                ATerm a_28 = t;
                if((PushChoice() == 0))
                  {
                    ATerm b_28 = t;
                    int c_28 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(!(match_cons(t, sym_stdout_0)))
                          _fail(t);
                        ;
                        LocalPopChoice(c_28);
                      }
                    else
                      {
                        t = b_28;
                        {
                          ATerm w_1 = NULL;
                          w_1 = t;
                          if((p_2 != t))
                            {
                              _fail(t);
                            }
                          t = w_1;
                        }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = a_28;
                  }
                t = SSL_rename(p_2, s_1);
                t = (ATerm) ATmakeAppl(sym_FILE_1, s_1);
              }
              ;
              LocalPopChoice(z_27);
            }
          else
            {
              t = y_27;
              t = o_2;
              t = q_0(t);
              if((p_2 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, p_2);
            }
        }
      }
  }
  return(t);
}
ATerm xtc_transform_1_0 (ATerm e_109 (ATerm), ATerm t)
{
  ATerm z_1 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = xtc_transform_2_0(e_109, z_1, t);
  return(t);
}
ATerm abox2text_0_0 (ATerm t)
{
  ATerm b_2 (ATerm t)
  {
    t = term_d_28;
    return(t);
  }
  t = xtc_transform_1_0(b_2, t);
  return(t);
}
ATerm ac2abox_0_0 (ATerm t)
{
  ATerm c_2 (ATerm t)
  {
    t = term_e_28;
    return(t);
  }
  ATerm d_2 (ATerm t)
  {
    ATerm w_2 = NULL;
    t = term_f_28;
    t = xtc_find_0_0(t);
    w_2 = t;
    t = (ATerm) ATinsert(ATinsert(ATempty, w_2), term_g_28);
    return(t);
  }
  t = xtc_transform_2_0(c_2, d_2, t);
  return(t);
}
ATerm s2c_0_0 (ATerm t)
{
  ATerm e_2 (ATerm t)
  {
    t = term_h_28;
    return(t);
  }
  ATerm f_2 (ATerm t)
  {
    ATerm z_2 = NULL,d_3 = NULL;
    t = pass_verbose_0_0(t);
    z_2 = t;
    t = term_i_28;
    t = get_config_0_0(t);
    {
      ATerm g_2 (ATerm t)
      {
        ATerm e_3 = NULL;
        e_3 = t;
        t = (ATerm) ATinsert(ATinsert(ATempty, e_3), term_i_28);
        return(t);
      }
      t = map_1_0(g_2, t);
      d_3 = t;
      t = (ATerm) ATinsert(ATinsert(CheckATermList(d_3), (ATerm) ATinsert(ATempty, term_j_28)), z_2);
      t = concat_0_0(t);
    }
    return(t);
  }
  t = xtc_transform_2_0(e_2, f_2, t);
  return(t);
}
ATerm stratego_cf_0_0 (ATerm t)
{
  ATerm h_2 (ATerm t)
  {
    t = term_m_28;
    return(t);
  }
  ATerm i_2 (ATerm t)
  {
    ATerm f_3 = NULL;
    t = pass_verbose_0_0(t);
    f_3 = t;
    t = (ATerm) ATinsert(CheckATermList(f_3), term_j_28);
    return(t);
  }
  t = xtc_transform_2_0(h_2, i_2, t);
  return(t);
}
ATerm canonicalize_0_0 (ATerm t)
{
  ATerm j_2 (ATerm t)
  {
    t = term_n_28;
    return(t);
  }
  ATerm k_2 (ATerm t)
  {
    ATerm g_3 = NULL;
    t = pass_verbose_0_0(t);
    g_3 = t;
    t = (ATerm) ATinsert(CheckATermList(g_3), term_j_28);
    return(t);
  }
  t = xtc_transform_2_0(j_2, k_2, t);
  return(t);
}
ATerm back_end_0_0 (ATerm t)
{
  ATerm m_2 (ATerm t)
  {
    ATerm q_2 (ATerm t)
    {
      t = term_o_28;
      return(t);
    }
    t = say_1_0(q_2, t);
    return(t);
  }
  t = if_verbose2_1_0(m_2, t);
  {
    ATerm r_2 (ATerm t)
    {
      ATerm t_2 (ATerm t)
      {
        ATerm j_3 = NULL;
        j_3 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(CheckATermList(j_3), (ATerm) ATmakeAppl(ATmakeSymbol("back-end succeeded:      ", 0, ATtrue))));
        t = (ATerm) ATmakeAppl(sym__2, term_s_27, (ATerm) ATinsert(CheckATermList(j_3), term_a_29));
        return(t);
      }
      t = if_verbose1_1_0(t_2, t);
      return(t);
    }
    ATerm s_2 (ATerm t)
    {
      t = canonicalize_0_0(t);
      {
        ATerm u_2 (ATerm t)
        {
          t = term_b_29;
          return(t);
        }
        t = save_as1_1_0(u_2, t);
        t = olevel3_1_0(bound_unbound_vars_0_0, t);
        t = stratego_cf_0_0(t);
        t = s2c_0_0(t);
        t = ac2abox_0_0(t);
        t = abox2text_0_0(t);
        {
          ATerm v_2 (ATerm t)
          {
            ATerm x_2 (ATerm t)
            {
              t = term_l_29;
              return(t);
            }
            t = get_outfile_1_0(x_2, t);
            return(t);
          }
          t = rename_to_1_0(v_2, t);
        }
      }
      return(t);
    }
    t = profile_p__2_0(r_2, s_2, t);
  }
  return(t);
}
ATerm if_keep1_1_0 (ATerm q_101 (ATerm), ATerm t)
{
  ATerm y_2 (ATerm t)
  {
    ATerm k_3 = NULL,l_3 = NULL;
    k_3 = t;
    t = term_m_29;
    t = get_config_0_0(t);
    l_3 = t;
    t = (ATerm) ATmakeAppl(sym__2, l_3, term_p_29);
    t = geq_0_0(t);
    t = k_3;
    t = q_101(t);
    return(t);
  }
  t = try_1_0(y_2, t);
  return(t);
}
ATerm save_as1_1_0 (ATerm c_79 (ATerm), ATerm t)
{
  ATerm a_3 (ATerm t)
  {
    t = save_as_1_0(c_79, t);
    return(t);
  }
  t = if_keep1_1_0(a_3, t);
  return(t);
}
ATerm stratego_of_0_0 (ATerm t)
{
  ATerm c_3 (ATerm t)
  {
    t = term_q_29;
    return(t);
  }
  ATerm h_3 (ATerm t)
  {
    ATerm m_3 = NULL;
    t = pass_verbose_0_0(t);
    m_3 = t;
    t = (ATerm) ATinsert(CheckATermList(m_3), term_j_28);
    return(t);
  }
  t = xtc_transform_2_0(c_3, h_3, t);
  return(t);
}
ATerm olevel1_1_0 (ATerm v_109 (ATerm), ATerm t)
{
  ATerm i_3 (ATerm t)
  {
    t = term_p_29;
    return(t);
  }
  t = olevel_2_0(i_3, v_109, t);
  return(t);
}
ATerm optimize2_0_0 (ATerm t)
{
  ATerm q_3 (ATerm t)
  {
    t = term_r_29;
    return(t);
  }
  ATerm s_3 (ATerm t)
  {
    ATerm n_3 = NULL;
    t = pass_verbose_0_0(t);
    n_3 = t;
    t = (ATerm) ATinsert(CheckATermList(n_3), term_j_28);
    return(t);
  }
  t = xtc_transform_2_0(q_3, s_3, t);
  return(t);
}
ATerm dead_var_elim_0_0 (ATerm t)
{
  ATerm w_3 (ATerm t)
  {
    t = term_s_29;
    return(t);
  }
  ATerm x_3 (ATerm t)
  {
    ATerm o_3 = NULL;
    t = pass_verbose_0_0(t);
    o_3 = t;
    t = (ATerm) ATinsert(CheckATermList(o_3), term_j_28);
    return(t);
  }
  t = xtc_transform_2_0(w_3, x_3, t);
  return(t);
}
ATerm bound_unbound_vars_0_0 (ATerm t)
{
  ATerm t_29 = t;
  int w_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_4 (ATerm t)
      {
        t = term_a_30;
        return(t);
      }
      ATerm m_4 (ATerm t)
      {
        ATerm p_3 = NULL;
        t = pass_verbose_0_0(t);
        p_3 = t;
        t = (ATerm) ATinsert(CheckATermList(p_3), term_j_28);
        return(t);
      }
      t = xtc_transform_2_0(c_4, m_4, t);
      ;
      LocalPopChoice(w_29);
    }
  else
    {
      t = t_29;
      {
        ATerm u_4 (ATerm t)
        {
          t = term_a_30;
          return(t);
        }
        ATerm w_4 (ATerm t)
        {
          ATerm r_3 = NULL;
          t = pass_verbose_0_0(t);
          r_3 = t;
          t = (ATerm) ATinsert(CheckATermList(r_3), term_j_28);
          return(t);
        }
        t = xtc_transform_2_0(u_4, w_4, t);
      }
    }
  return(t);
}
ATerm const_prop_0_0 (ATerm t)
{
  ATerm x_4 (ATerm t)
  {
    t = term_b_30;
    return(t);
  }
  ATerm y_4 (ATerm t)
  {
    ATerm t_3 = NULL;
    t = pass_verbose_0_0(t);
    t_3 = t;
    t = (ATerm) ATinsert(CheckATermList(t_3), term_j_28);
    return(t);
  }
  t = xtc_transform_2_0(x_4, y_4, t);
  return(t);
}
ATerm olevel3_1_0 (ATerm x_109 (ATerm), ATerm t)
{
  ATerm h_5 (ATerm t)
  {
    t = term_i_30;
    return(t);
  }
  t = olevel_2_0(h_5, x_109, t);
  return(t);
}
ATerm if_keep5_1_0 (ATerm u_101 (ATerm), ATerm t)
{
  ATerm j_5 (ATerm t)
  {
    ATerm u_3 = NULL,v_3 = NULL;
    u_3 = t;
    t = term_m_29;
    t = get_config_0_0(t);
    v_3 = t;
    t = (ATerm) ATmakeAppl(sym__2, v_3, term_j_30);
    t = geq_0_0(t);
    t = u_3;
    t = u_101(t);
    return(t);
  }
  t = try_1_0(j_5, t);
  return(t);
}
ATerm save_as5_1_0 (ATerm g_79 (ATerm), ATerm t)
{
  ATerm o_5 (ATerm t)
  {
    t = save_as_1_0(g_79, t);
    return(t);
  }
  t = if_keep5_1_0(o_5, t);
  return(t);
}
ATerm dead_def_elim_0_0 (ATerm t)
{
  ATerm q_5 (ATerm t)
  {
    t = term_k_30;
    return(t);
  }
  ATerm r_5 (ATerm t)
  {
    ATerm z_3 = NULL;
    t = pass_verbose_0_0(t);
    z_3 = t;
    t = (ATerm) ATinsert(CheckATermList(z_3), term_j_28);
    return(t);
  }
  t = xtc_transform_2_0(q_5, r_5, t);
  return(t);
}
ATerm olevel5_1_0 (ATerm z_109 (ATerm), ATerm t)
{
  ATerm u_5 (ATerm t)
  {
    t = term_j_30;
    return(t);
  }
  t = olevel_2_0(u_5, z_109, t);
  return(t);
}
ATerm inline_0_0 (ATerm t)
{
  ATerm w_5 (ATerm t)
  {
    t = term_r_30;
    return(t);
  }
  ATerm a_6 (ATerm t)
  {
    ATerm a_4 = NULL;
    t = pass_verbose_0_0(t);
    a_4 = t;
    t = (ATerm) ATinsert(CheckATermList(a_4), term_j_28);
    return(t);
  }
  t = xtc_transform_2_0(w_5, a_6, t);
  return(t);
}
ATerm desugar_case_0_0 (ATerm t)
{
  ATerm b_6 (ATerm t)
  {
    t = term_w_30;
    return(t);
  }
  ATerm e_6 (ATerm t)
  {
    ATerm b_4 = NULL;
    t = pass_verbose_0_0(t);
    b_4 = t;
    t = (ATerm) ATinsert(CheckATermList(b_4), term_j_28);
    return(t);
  }
  t = xtc_transform_2_0(b_6, e_6, t);
  return(t);
}
ATerm olevel2_1_0 (ATerm w_109 (ATerm), ATerm t)
{
  ATerm g_6 (ATerm t)
  {
    t = term_v_26;
    return(t);
  }
  t = olevel_2_0(g_6, w_109, t);
  return(t);
}
ATerm compile_match_0_0 (ATerm t)
{
  ATerm m_6 (ATerm t)
  {
    t = term_x_30;
    return(t);
  }
  ATerm o_6 (ATerm t)
  {
    ATerm d_4 = NULL;
    t = pass_verbose_0_0(t);
    d_4 = t;
    t = (ATerm) ATinsert(CheckATermList(d_4), term_j_28);
    return(t);
  }
  t = xtc_transform_2_0(m_6, o_6, t);
  return(t);
}
ATerm if_keep4_1_0 (ATerm t_101 (ATerm), ATerm t)
{
  ATerm p_6 (ATerm t)
  {
    ATerm e_4 = NULL,f_4 = NULL;
    e_4 = t;
    t = term_m_29;
    t = get_config_0_0(t);
    f_4 = t;
    t = (ATerm) ATmakeAppl(sym__2, f_4, term_y_30);
    t = geq_0_0(t);
    t = e_4;
    t = t_101(t);
    return(t);
  }
  t = try_1_0(p_6, t);
  return(t);
}
ATerm save_as4_1_0 (ATerm f_79 (ATerm), ATerm t)
{
  ATerm t_6 (ATerm t)
  {
    t = save_as_1_0(f_79, t);
    return(t);
  }
  t = if_keep4_1_0(t_6, t);
  return(t);
}
ATerm olevel_2_0 (ATerm t_109 (ATerm), ATerm u_109 (ATerm), ATerm t)
{
  ATerm u_6 (ATerm t)
  {
    ATerm g_4 = NULL,h_4 = NULL,i_4 = NULL;
    g_4 = t;
    t = t_109(t);
    h_4 = t;
    t = term_z_30;
    t = get_config_0_0(t);
    i_4 = t;
    t = (ATerm) ATmakeAppl(sym__2, i_4, h_4);
    t = geq_0_0(t);
    t = g_4;
    t = u_109(t);
    return(t);
  }
  t = try_1_0(u_6, t);
  return(t);
}
ATerm olevel4_1_0 (ATerm y_109 (ATerm), ATerm t)
{
  ATerm v_6 (ATerm t)
  {
    t = term_y_30;
    return(t);
  }
  t = olevel_2_0(v_6, y_109, t);
  return(t);
}
ATerm define_congruences_0_0 (ATerm t)
{
  ATerm w_6 (ATerm t)
  {
    t = term_a_31;
    return(t);
  }
  ATerm x_6 (ATerm t)
  {
    ATerm k_4 = NULL;
    t = pass_verbose_0_0(t);
    k_4 = t;
    t = (ATerm) ATinsert(CheckATermList(k_4), term_j_28);
    return(t);
  }
  t = xtc_transform_2_0(w_6, x_6, t);
  return(t);
}
ATerm fusion_0_0 (ATerm t)
{
  ATerm y_6 (ATerm t)
  {
    t = term_b_31;
    return(t);
  }
  ATerm z_6 (ATerm t)
  {
    ATerm l_4 = NULL;
    t = pass_verbose_0_0(t);
    l_4 = t;
    t = (ATerm) ATinsert(CheckATermList(l_4), term_j_28);
    return(t);
  }
  t = xtc_transform_2_0(y_6, z_6, t);
  return(t);
}
ATerm optimize1_0_0 (ATerm t)
{
  ATerm b_7 (ATerm t)
  {
    t = term_c_31;
    return(t);
  }
  ATerm d_7 (ATerm t)
  {
    ATerm n_4 = NULL;
    t = pass_verbose_0_0(t);
    n_4 = t;
    t = (ATerm) ATinsert(CheckATermList(n_4), term_j_28);
    return(t);
  }
  t = xtc_transform_2_0(b_7, d_7, t);
  return(t);
}
ATerm optimize_0_0 (ATerm t)
{
  ATerm e_7 (ATerm t)
  {
    ATerm f_7 (ATerm t)
    {
      t = term_d_31;
      return(t);
    }
    t = say_1_0(f_7, t);
    return(t);
  }
  t = if_verbose2_1_0(e_7, t);
  {
    ATerm g_7 (ATerm t)
    {
      ATerm i_7 (ATerm t)
      {
        ATerm o_4 = NULL;
        o_4 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(CheckATermList(o_4), (ATerm) ATmakeAppl(ATmakeSymbol("optimization succeeded:  ", 0, ATtrue))));
        t = (ATerm) ATmakeAppl(sym__2, term_s_27, (ATerm) ATinsert(CheckATermList(o_4), term_e_31));
        return(t);
      }
      t = if_verbose1_1_0(i_7, t);
      return(t);
    }
    ATerm h_7 (ATerm t)
    {
      ATerm j_7 (ATerm t)
      {
        ATerm p_4 = NULL;
        p_4 = t;
        t = term_z_30;
        t = get_config_0_0(t);
        {
          ATerm k_7 (ATerm t)
          {
            t = term_f_31;
            return(t);
          }
          t = debug_1_0(k_7, t);
          t = p_4;
        }
        return(t);
      }
      t = if_verbose3_1_0(j_7, t);
      t = olevel1_1_0(optimize1_0_0, t);
      {
        ATerm l_7 (ATerm t)
        {
          t = term_g_31;
          return(t);
        }
        t = save_as1_1_0(l_7, t);
        {
          ATerm m_7 (ATerm t)
          {
            ATerm n_7 (ATerm t)
            {
              ATerm r_4 = NULL;
              r_4 = t;
              {
                ATerm h_31 = t;
                if((PushChoice() == 0))
                  {
                    t = term_i_31;
                    t = get_config_0_0(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = h_31;
                  }
                t = r_4;
                t = fusion_0_0(t);
              }
              return(t);
            }
            t = try_1_0(n_7, t);
            return(t);
          }
          t = olevel2_1_0(m_7, t);
          {
            ATerm o_7 (ATerm t)
            {
              t = term_j_31;
              return(t);
            }
            t = save_as2_1_0(o_7, t);
            {
              ATerm p_7 (ATerm t)
              {
                t = inline_0_0(t);
                t = dead_def_elim_0_0(t);
                return(t);
              }
              t = olevel4_1_0(p_7, t);
              {
                ATerm q_7 (ATerm t)
                {
                  t = term_k_31;
                  return(t);
                }
                t = save_as4_1_0(q_7, t);
                t = olevel4_1_0(optimize2_0_0, t);
                t = define_congruences_0_0(t);
                {
                  ATerm r_7 (ATerm t)
                  {
                    t = const_prop_0_0(t);
                    t = bound_unbound_vars_0_0(t);
                    t = dead_var_elim_0_0(t);
                    return(t);
                  }
                  t = olevel4_1_0(r_7, t);
                  t = olevel4_1_0(optimize2_0_0, t);
                  {
                    ATerm s_7 (ATerm t)
                    {
                      t = term_l_31;
                      return(t);
                    }
                    t = save_as4_1_0(s_7, t);
                    t = olevel2_1_0(compile_match_0_0, t);
                    t = olevel2_1_0(desugar_case_0_0, t);
                    {
                      ATerm t_7 (ATerm t)
                      {
                        t = term_m_31;
                        return(t);
                      }
                      t = save_as2_1_0(t_7, t);
                      t = olevel5_1_0(inline_0_0, t);
                      t = olevel5_1_0(dead_def_elim_0_0, t);
                      {
                        ATerm u_7 (ATerm t)
                        {
                          t = term_n_31;
                          return(t);
                        }
                        t = save_as5_1_0(u_7, t);
                        t = olevel3_1_0(optimize2_0_0, t);
                        {
                          ATerm x_7 (ATerm t)
                          {
                            t = const_prop_0_0(t);
                            t = bound_unbound_vars_0_0(t);
                            t = dead_var_elim_0_0(t);
                            return(t);
                          }
                          t = olevel3_1_0(x_7, t);
                          {
                            ATerm y_7 (ATerm t)
                            {
                              t = term_o_31;
                              return(t);
                            }
                            t = save_as3_1_0(y_7, t);
                            t = olevel1_1_0(optimize2_0_0, t);
                            {
                              ATerm z_7 (ATerm t)
                              {
                                t = term_p_31;
                                return(t);
                              }
                              t = save_as1_1_0(z_7, t);
                              t = olevel1_1_0(stratego_of_0_0, t);
                              {
                                ATerm a_8 (ATerm t)
                                {
                                  t = term_q_31;
                                  return(t);
                                }
                                t = save_as1_1_0(a_8, t);
                              }
                            }
                          }
                        }
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
    t = profile_p__2_0(g_7, h_7, t);
  }
  return(t);
}
ATerm rename_defs_0_0 (ATerm t)
{
  ATerm b_8 (ATerm t)
  {
    t = term_r_31;
    return(t);
  }
  ATerm e_8 (ATerm t)
  {
    ATerm s_4 = NULL;
    t = pass_verbose_0_0(t);
    s_4 = t;
    t = (ATerm) ATinsert(CheckATermList(s_4), term_j_28);
    return(t);
  }
  t = xtc_transform_2_0(b_8, e_8, t);
  {
    ATerm g_8 (ATerm t)
    {
      t = term_s_31;
      return(t);
    }
    t = save_as2_1_0(g_8, t);
  }
  return(t);
}
ATerm stratego_nf_0_0 (ATerm t)
{
  ATerm m_8 (ATerm t)
  {
    t = term_t_31;
    return(t);
  }
  ATerm o_8 (ATerm t)
  {
    ATerm v_4 = NULL;
    t = pass_verbose_0_0(t);
    v_4 = t;
    t = (ATerm) ATinsert(CheckATermList(v_4), term_j_28);
    return(t);
  }
  t = xtc_transform_2_0(m_8, o_8, t);
  return(t);
}
ATerm warnings_0_0 (ATerm t)
{
  ATerm r_8 (ATerm t)
  {
    t = term_u_31;
    return(t);
  }
  ATerm u_8 (ATerm t)
  {
    ATerm z_4 = NULL,a_5 = NULL;
    t = pass_verbose_0_0(t);
    z_4 = t;
    t = term_v_31;
    t = get_config_0_0(t);
    {
      ATerm w_8 (ATerm t)
      {
        ATerm b_5 = NULL;
        b_5 = t;
        t = (ATerm) ATinsert(ATinsert(ATempty, b_5), term_v_31);
        return(t);
      }
      t = map_1_0(w_8, t);
      a_5 = t;
      t = (ATerm) ATinsert(ATinsert(CheckATermList(a_5), (ATerm) ATinsert(ATempty, term_j_28)), z_4);
      t = concat_0_0(t);
    }
    return(t);
  }
  t = xtc_transform_2_0(r_8, u_8, t);
  return(t);
}
ATerm extract_0_0 (ATerm t)
{
  ATerm e_9 (ATerm t)
  {
    t = term_w_31;
    return(t);
  }
  ATerm f_9 (ATerm t)
  {
    ATerm c_5 = NULL;
    t = pass_verbose_0_0(t);
    c_5 = t;
    t = (ATerm) ATinsert(CheckATermList(c_5), term_j_28);
    return(t);
  }
  t = xtc_transform_2_0(e_9, f_9, t);
  {
    ATerm g_9 (ATerm t)
    {
      t = term_x_31;
      return(t);
    }
    t = save_as2_1_0(g_9, t);
  }
  return(t);
}
ATerm extract_all_0_0 (ATerm t)
{
  ATerm h_9 (ATerm t)
  {
    t = term_y_31;
    return(t);
  }
  ATerm i_9 (ATerm t)
  {
    ATerm d_5 = NULL;
    t = pass_verbose_0_0(t);
    d_5 = t;
    t = (ATerm) ATinsert(CheckATermList(d_5), term_j_28);
    return(t);
  }
  t = xtc_transform_2_0(h_9, i_9, t);
  return(t);
}
ATerm output_frontend_0_0 (ATerm t)
{
  ATerm j_9 (ATerm t)
  {
    ATerm g_5 = NULL;
    g_5 = t;
    t = term_z_31;
    t = get_config_0_0(t);
    t = g_5;
    {
      ATerm a_32 = t;
      int b_32 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = extract_all_0_0(t);
          ;
          LocalPopChoice(b_32);
        }
      else
        {
          t = a_32;
          t = (ATerm) ATinsert(ATempty, term_c_32);
          t = fatal_error_0_0(t);
        }
      {
        ATerm k_9 (ATerm t)
        {
          ATerm n_9 (ATerm t)
          {
            t = term_d_32;
            return(t);
          }
          t = get_outfile_1_0(n_9, t);
          return(t);
        }
        t = copy_to_1_0(k_9, t);
        {
          ATerm o_9 (ATerm t)
          {
            t = (ATerm) ATinsert(ATempty, term_e_32);
            return(t);
          }
          t = say_1_0(o_9, t);
          t = xtc_io_exit_0_0(t);
        }
      }
    }
    return(t);
  }
  t = try_1_0(j_9, t);
  return(t);
}
ATerm if_keep2_1_0 (ATerm r_101 (ATerm), ATerm t)
{
  ATerm q_9 (ATerm t)
  {
    ATerm i_5 = NULL,k_5 = NULL;
    i_5 = t;
    t = term_m_29;
    t = get_config_0_0(t);
    k_5 = t;
    t = (ATerm) ATmakeAppl(sym__2, k_5, term_v_26);
    t = geq_0_0(t);
    t = i_5;
    t = r_101(t);
    return(t);
  }
  t = try_1_0(q_9, t);
  return(t);
}
ATerm save_as2_1_0 (ATerm d_79 (ATerm), ATerm t)
{
  ATerm r_9 (ATerm t)
  {
    t = save_as_1_0(d_79, t);
    return(t);
  }
  t = if_keep2_1_0(r_9, t);
  return(t);
}
ATerm frontend_0_0 (ATerm t)
{
  ATerm s_9 (ATerm t)
  {
    t = term_f_32;
    return(t);
  }
  ATerm u_9 (ATerm t)
  {
    ATerm l_5 = NULL;
    t = pass_verbose_0_0(t);
    l_5 = t;
    t = (ATerm) ATinsert(CheckATermList(l_5), term_j_28);
    return(t);
  }
  t = xtc_transform_2_0(s_9, u_9, t);
  {
    ATerm v_9 (ATerm t)
    {
      t = term_g_32;
      return(t);
    }
    t = save_as2_1_0(v_9, t);
  }
  return(t);
}
ATerm repair_types_0_0 (ATerm t)
{
  ATerm w_9 (ATerm t)
  {
    t = term_h_32;
    return(t);
  }
  ATerm x_9 (ATerm t)
  {
    ATerm m_5 = NULL;
    t = pass_verbose_0_0(t);
    m_5 = t;
    t = (ATerm) ATinsert(ATempty, m_5);
    t = concat_0_0(t);
    return(t);
  }
  t = xtc_transform_2_0(w_9, x_9, t);
  return(t);
}
ATerm save_as_1_0 (ATerm b_79 (ATerm), ATerm t)
{
  ATerm n_5 = NULL,p_5 = NULL,s_5 = NULL;
  n_5 = t;
  {
    ATerm y_9 (ATerm t)
    {
      t = get_outfile_1_0(b_79, t);
      if(((p_5 != NULL) && (p_5 != t)))
        _fail(t);
      else
        p_5 = t;
      return(t);
    }
    t = copy_to_1_0(y_9, t);
    {
      ATerm z_9 (ATerm t)
      {
        t = term_i_32;
        return(t);
      }
      ATerm a_10 (ATerm t)
      {
        ATerm t_5 = NULL;
        t = pass_verbose_0_0(t);
        t_5 = t;
        t = (ATerm) ATinsert(CheckATermList(t_5), term_j_32);
        return(t);
      }
      t = xtc_transform_2_0(z_9, a_10, t);
      {
        ATerm b_10 (ATerm t)
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(p_5), term_k_32);
          t = conc_strings_0_0(t);
          if(((s_5 != NULL) && (s_5 != t)))
            _fail(t);
          else
            s_5 = t;
          return(t);
        }
        t = copy_to_1_0(b_10, t);
        {
          ATerm c_10 (ATerm t)
          {
            t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(s_5)), term_m_32), not_null(p_5)), term_l_32);
            return(t);
          }
          t = say_1_0(c_10, t);
          t = n_5;
        }
      }
    }
  }
  return(t);
}
ATerm if_keep3_1_0 (ATerm s_101 (ATerm), ATerm t)
{
  ATerm d_10 (ATerm t)
  {
    ATerm v_5 = NULL,x_5 = NULL;
    v_5 = t;
    t = term_m_29;
    t = get_config_0_0(t);
    x_5 = t;
    t = (ATerm) ATmakeAppl(sym__2, x_5, term_i_30);
    t = geq_0_0(t);
    t = v_5;
    t = s_101(t);
    return(t);
  }
  t = try_1_0(d_10, t);
  return(t);
}
ATerm save_as3_1_0 (ATerm e_79 (ATerm), ATerm t)
{
  ATerm e_10 (ATerm t)
  {
    t = save_as_1_0(e_79, t);
    return(t);
  }
  t = if_keep3_1_0(e_10, t);
  return(t);
}
ATerm AddMain_1_0 (ATerm z_78 (ATerm), ATerm t)
{
  ATerm y_5 = NULL,z_5 = NULL;
  if(match_cons(t, sym_Specification_1))
    {
      y_5 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = term_n_32;
  t = z_78(t);
  z_5 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATinsert(CheckATermList(y_5), (ATerm) ATmakeAppl(sym_Strategies_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDef_3, term_o_32, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, z_5), (ATerm) ATempty))))));
  return(t);
}
ATerm xtc_io_transform_1_0 (ATerm o_109 (ATerm), ATerm t)
{
  t = read_from_0_0(t);
  t = o_109(t);
  t = write_to_0_0(t);
  return(t);
}
ATerm add_main_0_0 (ATerm t)
{
  ATerm c_6 = NULL;
  ATerm k_10 (ATerm t)
  {
    ATerm f_6 = NULL;
    f_6 = t;
    t = term_p_32;
    t = get_config_0_0(t);
    if(((c_6 != NULL) && (c_6 != t)))
      _fail(t);
    else
      c_6 = t;
    {
      ATerm l_10 (ATerm t)
      {
        ATerm m_10 (ATerm t)
        {
          t = term_q_32;
          return(t);
        }
        t = debug_1_0(m_10, t);
        return(t);
      }
      t = if_verbose2_1_0(l_10, t);
      t = f_6;
      {
        ATerm n_10 (ATerm t)
        {
          ATerm o_10 (ATerm t)
          {
            t = not_null(c_6);
            return(t);
          }
          t = AddMain_1_0(o_10, t);
          return(t);
        }
        t = xtc_io_transform_1_0(n_10, t);
      }
    }
    return(t);
  }
  t = try_1_0(k_10, t);
  {
    ATerm p_10 (ATerm t)
    {
      t = term_r_32;
      return(t);
    }
    t = save_as3_1_0(p_10, t);
  }
  return(t);
}
ATerm xtc_exit_0_0 (ATerm t)
{
  ATerm i_6 = NULL,j_6 = NULL;
  ATerm q_10 (ATerm t)
  {
    ATerm k_6 = NULL;
    k_6 = t;
    t = SSL_table_get((ATerm)ATmakeAppl(sym_TempFiles_0), (ATerm) ATmakeAppl(sym_Scopes_0));
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((i_6 != NULL) && (i_6 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          i_6 = ATgetFirst((ATermList) t);
        {
          ATerm s_32 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    t = not_null(i_6);
    {
      ATerm r_10 (ATerm t)
      {
        ATerm t_10 (ATerm t)
        {
          ATerm l_6 = NULL;
          l_6 = t;
          t = SSL_remove(l_6);
          return(t);
        }
        t = try_1_0(t_10, t);
        return(t);
      }
      t = map_1_0(r_10, t);
      t = k_6;
      {
        ATerm u_10 (ATerm t)
        {
          t = term_t_32;
          return(t);
        }
        t = end_scope_1_0(u_10, t);
      }
    }
    return(t);
  }
  t = repeat_1_0(q_10, t);
  j_6 = t;
  t = SSL_exit(j_6);
  return(t);
}
ATerm xtc_io_exit_0_0 (ATerm t)
{
  ATerm v_10 (ATerm t)
  {
    ATerm u_32 = t;
    int v_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_d_27;
        t = get_config_0_0(t);
        ;
        LocalPopChoice(v_32);
      }
    else
      {
        t = u_32;
        t = term_x_27;
      }
    return(t);
  }
  t = copy_to_1_0(v_10, t);
  t = term_n_26;
  t = xtc_exit_0_0(t);
  return(t);
}
ATerm get_outfile_1_0 (ATerm a_79 (ATerm), ATerm t)
{
  ATerm s_6 = NULL,a_7 = NULL;
  t = a_79(t);
  s_6 = t;
  t = term_w_32;
  t = get_config_0_0(t);
  a_7 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_7, s_6);
  t = conc_strings_0_0(t);
  return(t);
}
ATerm copy_to_1_0 (ATerm o_0 (ATerm), ATerm t)
{
  ATerm v_7 = NULL,w_7 = NULL;
  v_7 = t;
  if(match_cons(t, sym_FILE_1))
    {
      w_7 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm x_32 = t;
    int y_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_2 = NULL;
        t = v_7;
        t = o_0(t);
        a_2 = t;
        {
          ATerm z_32 = t;
          int a_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(!(match_cons(t, sym_stdout_0)))
                _fail(t);
              ;
              LocalPopChoice(a_33);
            }
          else
            {
              t = z_32;
              if(!(match_cons(t, sym_stderr_0)))
                _fail(t);
            }
          t = SSL_copy(w_7, a_2);
          t = (ATerm) ATmakeAppl(sym_FILE_1, w_7);
        }
        ;
        LocalPopChoice(y_32);
      }
    else
      {
        t = x_32;
        {
          ATerm b_33 = t;
          int c_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm l_2 = NULL;
              t = v_7;
              t = o_0(t);
              l_2 = t;
              {
                ATerm d_33 = t;
                if((PushChoice() == 0))
                  {
                    ATerm e_33 = t;
                    int f_33 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(!(match_cons(t, sym_stdout_0)))
                          _fail(t);
                        ;
                        LocalPopChoice(f_33);
                      }
                    else
                      {
                        t = e_33;
                        {
                          ATerm g_33 = t;
                          int h_33 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              if(!(match_cons(t, sym_stderr_0)))
                                _fail(t);
                              ;
                              LocalPopChoice(h_33);
                            }
                          else
                            {
                              t = g_33;
                              {
                                ATerm n_2 = NULL;
                                n_2 = t;
                                if((w_7 != t))
                                  {
                                    _fail(t);
                                  }
                                t = n_2;
                              }
                            }
                        }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = d_33;
                  }
                t = SSL_copy(w_7, l_2);
                t = (ATerm) ATmakeAppl(sym_FILE_1, w_7);
              }
              ;
              LocalPopChoice(c_33);
            }
          else
            {
              t = b_33;
              t = v_7;
              t = o_0(t);
              if((w_7 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, w_7);
            }
        }
      }
  }
  return(t);
}
ATerm output_ast_0_0 (ATerm t)
{
  ATerm z_10 (ATerm t)
  {
    ATerm c_8 = NULL,d_8 = NULL;
    c_8 = t;
    t = term_i_33;
    t = get_config_0_0(t);
    t = c_8;
    {
      ATerm b_11 (ATerm t)
      {
        ATerm c_11 (ATerm t)
        {
          t = term_j_33;
          return(t);
        }
        t = get_outfile_1_0(c_11, t);
        return(t);
      }
      t = copy_to_1_0(b_11, t);
      d_8 = t;
      t = (ATerm) ATinsert(ATempty, term_k_33);
      t = echo_0_0(t);
      t = d_8;
      t = xtc_io_exit_0_0(t);
    }
    return(t);
  }
  t = try_1_0(z_10, t);
  return(t);
}
ATerm pass_keep_0_0 (ATerm t)
{
  ATerm f_8 = NULL,h_8 = NULL,i_8 = NULL;
  t = term_m_29;
  {
    ATerm l_33 = t;
    int m_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        ;
        LocalPopChoice(m_33);
      }
    else
      {
        t = l_33;
        t = term_p_29;
      }
    f_8 = t;
    t = (ATerm) ATmakeAppl(sym__2, f_8, term_p_29);
    {
      ATerm n_33 = t;
      int o_33 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SSL_subti(f_8, (ATerm) ATmakeInt(1));
          ;
          LocalPopChoice(o_33);
        }
      else
        {
          t = n_33;
          t = SSL_subtr(f_8, (ATerm) ATmakeInt(1));
        }
      i_8 = t;
      t = SSL_int_to_string(i_8);
      h_8 = t;
      t = (ATerm) ATinsert(ATinsert(ATempty, h_8), term_m_29);
    }
  }
  return(t);
}
ATerm pass_verbose_0_0 (ATerm t)
{
  ATerm j_8 = NULL,k_8 = NULL,l_8 = NULL;
  t = term_r_26;
  {
    ATerm p_33 = t;
    int q_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        ;
        LocalPopChoice(q_33);
      }
    else
      {
        t = p_33;
        t = term_p_29;
      }
    j_8 = t;
    t = (ATerm) ATmakeAppl(sym__2, j_8, term_p_29);
    {
      ATerm r_33 = t;
      int s_33 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SSL_subti(j_8, (ATerm) ATmakeInt(1));
          ;
          LocalPopChoice(s_33);
        }
      else
        {
          t = r_33;
          t = SSL_subtr(j_8, (ATerm) ATmakeInt(1));
        }
      l_8 = t;
      t = SSL_int_to_string(l_8);
      k_8 = t;
      t = (ATerm) ATinsert(ATinsert(ATempty, k_8), term_r_26);
    }
  }
  return(t);
}
ATerm dep_name_0_0 (ATerm t)
{
  ATerm n_8 = NULL;
  ATerm t_33 = t;
  int u_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_d_27;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(u_33);
    }
  else
    {
      t = t_33;
      t = term_w_32;
      t = get_config_0_0(t);
    }
  n_8 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, n_8), term_v_33);
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm p_8 = NULL,q_8 = NULL;
  p_8 = t;
  if(match_cons(t, sym_stdin_0))
    {
      t = p_8;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_FILE_1))
        {
          q_8 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSL_access(q_8, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_F__OK_0)));
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
ATerm WriteToFile_1_0 (ATerm l_99 (ATerm), ATerm t)
{
  ATerm s_8 = NULL,t_8 = NULL,v_8 = NULL;
  if(match_cons(t, sym__2))
    {
      s_8 = ATgetArgument(t, 0);
      t_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, s_8, term_w_33);
  t = open_stream_0_0(t);
  v_8 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_8, t_8);
  t = l_99(t);
  t = fclose_0_0(t);
  t = t_8;
  return(t);
}
ATerm WriteToBinaryFile_0_0 (ATerm t)
{
  ATerm e_11 (ATerm t)
  {
    ATerm x_8 = NULL,y_8 = NULL,z_8 = NULL;
    if(match_cons(t, sym__2))
      {
        ATerm x_33 = ATgetArgument(t, 0);
        if(match_cons(x_33, sym_Stream_1))
          {
            x_8 = ATgetArgument(x_33, 0);
          }
        else
          _fail(t);
        y_8 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSL_write_term_to_stream_baf(x_8, y_8);
    z_8 = t;
    t = (ATerm) ATmakeAppl(sym_Stream_1, z_8);
    return(t);
  }
  t = WriteToFile_1_0(e_11, t);
  return(t);
}
ATerm write_to_0_0 (ATerm t)
{
  ATerm a_9 = NULL,b_9 = NULL;
  a_9 = t;
  t = xtc_new_file_0_0(t);
  b_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_9, a_9);
  t = WriteToBinaryFile_0_0(t);
  t = SSL_close_file(b_9);
  t = (ATerm) ATmakeAppl(sym_FILE_1, b_9);
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm m_109 (ATerm), ATerm n_109 (ATerm), ATerm t)
{
  t = write_to_0_0(t);
  t = xtc_transform_file_2_0(m_109, n_109, t);
  t = read_from_0_0(t);
  return(t);
}
ATerm concat_strings_0_0 (ATerm t)
{
  ATerm c_9 = NULL;
  ATerm f_11 (ATerm t)
  {
    ATerm d_9 = NULL;
    d_9 = t;
    t = SSL_explode_string(d_9);
    return(t);
  }
  t = map_1_0(f_11, t);
  t = concat_0_0(t);
  c_9 = t;
  t = SSL_implode_string(c_9);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm h_10 = NULL,i_10 = NULL,j_10 = NULL,s_10 = NULL;
  h_10 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      i_10 = ATgetArgument(t, 0);
      {
        ATerm b_3 = NULL;
        t = SSL_int_to_string(i_10);
        b_3 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_z_33), b_3), term_y_33);
        t = concat_strings_0_0(t);
      }
    }
  else
    {
      ATerm y_3 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          i_10 = ATgetArgument(t, 0);
          j_10 = ATgetArgument(t, 1);
          s_10 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(j_10);
      y_3 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, s_10), term_b_34), y_3), term_a_34), i_10);
      t = concat_strings_0_0(t);
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm i_87 (ATerm), ATerm t)
{
  ATerm w_10 = NULL;
  ATerm g_11 (ATerm t)
  {
    t = i_87(t);
    if(((w_10 != NULL) && (w_10 != t)))
      _fail(t);
    else
      w_10 = t;
    return(t);
  }
  t = fetch_1_0(g_11, t);
  t = not_null(w_10);
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm x_10 = NULL;
  x_10 = t;
  {
    ATerm c_34 = t;
    int d_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_g_38), term_c_38), term_y_37), term_u_37), term_r_37), term_n_37), term_j_37), term_f_37), term_b_37), term_x_36), term_t_36), term_p_36), term_l_36), term_h_36), term_d_36), term_z_35), term_v_35), term_s_35), term_o_35), term_k_35), term_g_35), term_c_35), term_y_34), term_u_34), term_q_34), term_m_34), term_j_34), term_g_34);
        {
          ATerm h_11 (ATerm t)
          {
            if(match_cons(t, sym_Signal_3))
              {
                ATerm h_38 = ATgetArgument(t, 0);
                if((x_10 != ATgetArgument(t, 1)))
                  {
                    _fail(ATgetArgument(t, 1));
                  }
                {
                  ATerm i_38 = ATgetArgument(t, 2);
                }
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_elem_1_0(h_11, t);
        }
        ;
        LocalPopChoice(d_34);
      }
    else
      {
        t = c_34;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, x_10);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm y_10 = NULL;
  y_10 = t;
  {
    ATerm k_11 (ATerm t)
    {
      ATerm a_11 = NULL,d_11 = NULL;
      if(match_cons(t, sym_WaitStatus_3))
        {
          ATerm j_38 = ATgetArgument(t, 0);
          a_11 = ATgetArgument(t, 1);
          {
            ATerm k_38 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = a_11;
      {
        ATerm l_38 = t;
        if((PushChoice() == 0))
          {
            if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
              _fail(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = l_38;
          }
        t = signal_from_number_0_0(t);
        t = signal_to_descr_0_0(t);
        d_11 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, d_11), (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue))));
        t = (ATerm) ATmakeAppl(sym__2, term_s_27, (ATerm) ATinsert(ATinsert(ATempty, d_11), term_m_38));
      }
      return(t);
    }
    t = try_1_0(k_11, t);
    t = y_10;
  }
  return(t);
}
ATerm fork_0_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_2_0 (ATerm g_102 (ATerm), ATerm h_102 (ATerm), ATerm t)
{
  ATerm i_11 = NULL,j_11 = NULL;
  i_11 = t;
  t = fork_0_0(t);
  j_11 = t;
  {
    ATerm n_38 = t;
    int o_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = i_11;
        t = g_102(t);
        ;
        LocalPopChoice(o_38);
      }
    else
      {
        t = n_38;
        t = (ATerm) ATmakeAppl(sym__2, j_11, i_11);
        t = h_102(t);
      }
  }
  return(t);
}
ATerm fork_and_wait_1_0 (ATerm i_102 (ATerm), ATerm t)
{
  ATerm l_11 = NULL;
  ATerm m_11 (ATerm t)
  {
    ATerm o_11 = NULL;
    if(match_cons(t, sym__2))
      {
        o_11 = ATgetArgument(t, 0);
        if(((l_11 != NULL) && (l_11 != ATgetArgument(t, 1))))
          _fail(ATgetArgument(t, 1));
        else
          l_11 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSL_waitpid(o_11);
    t = warn_ifsignaled_0_0(t);
    if(match_cons(t, sym_WaitStatus_3))
      {
        ATerm p_38 = ATgetArgument(t, 0);
        if(((ATgetType(p_38) != AT_INT) || (ATgetInt((ATermInt) p_38) != 0)))
          _fail(t);
        {
          ATerm q_38 = ATgetArgument(t, 1);
        }
        {
          ATerm r_38 = ATgetArgument(t, 2);
        }
      }
    else
      _fail(t);
    t = not_null(l_11);
    return(t);
  }
  t = fork_2_0(i_102, m_11, t);
  return(t);
}
ATerm call_0_0 (ATerm t)
{
  ATerm p_11 = NULL,q_11 = NULL;
  if(match_cons(t, sym__2))
    {
      p_11 = ATgetArgument(t, 0);
      q_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm n_11 (ATerm t)
    {
      t = SSL_execvp(p_11, q_11);
      return(t);
    }
    t = fork_and_wait_1_0(n_11, t);
  }
  return(t);
}
ATerm xtc_find_warning_0_0 (ATerm t)
{
  t = xtc_find_0_0(t);
  return(t);
}
ATerm xtc_command_1_0 (ATerm d_109 (ATerm), ATerm t)
{
  ATerm t_11 = NULL,u_11 = NULL;
  t_11 = t;
  t = d_109(t);
  t = xtc_find_warning_0_0(t);
  u_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_11, t_11);
  t = call_0_0(t);
  t = t_11;
  return(t);
}
ATerm assert_1_0 (ATerm s_97 (ATerm), ATerm t)
{
  ATerm b_12 = NULL,c_12 = NULL,d_12 = NULL,f_12 = NULL,g_12 = NULL;
  if(match_cons(t, sym__2))
    {
      b_12 = ATgetArgument(t, 0);
      c_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_97(t);
  d_12 = t;
  t = (ATerm) ATmakeAppl(sym__3, d_12, b_12, c_12);
  t = table_push_0_0(t);
  {
    ATerm s_38 = t;
    int t_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get(d_12, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(t_38);
      }
    else
      {
        t = s_38;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        f_12 = ATgetFirst((ATermList) t);
        g_12 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSL_table_put(d_12, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATinsert(CheckATermList(g_12), (ATerm) ATinsert(CheckATermList(f_12), b_12)));
    t = (ATerm) ATmakeAppl(sym__2, b_12, c_12);
  }
  return(t);
}
ATerm obsolete_1_0 (ATerm e_99 (ATerm), ATerm t)
{
  ATerm j_12 = NULL;
  j_12 = t;
  t = e_99(t);
  {
    ATerm r_11 (ATerm t)
    {
      t = term_u_38;
      return(t);
    }
    t = debug_1_0(r_11, t);
    t = j_12;
  }
  return(t);
}
ATerm open_file_0_0 (ATerm t)
{
  ATerm j_13 (ATerm u_12, ATerm t)
  {
    t = u_12;
    {
      ATerm v_38 = t;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym__2))
            {
              ATerm w_38 = ATgetArgument(t, 0);
              ATerm x_38 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = v_38;
        }
      {
        ATerm s_11 (ATerm t)
        {
          t = term_y_38;
          return(t);
        }
        t = obsolete_1_0(s_11, t);
        t = (ATerm) ATmakeAppl(sym__2, u_12, term_w_33);
        t = open_file_0_0(t);
      }
    }
    return(t);
  }
  ATerm k_13 (ATerm w_12, ATerm a_13, ATerm b_13, ATerm t)
  {
    t = SSL_open_file(w_12, a_13);
    return(t);
  }
  ATerm f_13 = NULL,h_13 = NULL,i_13 = NULL;
  f_13 = t;
  if(match_cons(t, sym__2))
    {
      h_13 = ATgetArgument(t, 0);
      i_13 = ATgetArgument(t, 1);
      {
        ATerm z_38 = t;
        int a_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = j_13(f_13, t);
            ;
            LocalPopChoice(a_39);
          }
        else
          {
            t = z_38;
            t = k_13(h_13, i_13, f_13, t);
          }
      }
    }
  else
    {
      t = j_13(f_13, t);
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
  ATerm l_13 = NULL;
  t = term_n_32;
  t = new_0_0(t);
  l_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_13, term_b_39);
  t = conc_strings_0_0(t);
  {
    ATerm v_11 (ATerm t)
    {
      ATerm j_4 = NULL;
      j_4 = t;
      t = SSL_access(j_4, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_F__OK_0)));
      t = new_file_0_0(t);
      return(t);
    }
    t = try_1_0(v_11, t);
  }
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm n_13 = NULL;
  t = new_file_0_0(t);
  n_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_13, term_w_33);
  t = open_file_0_0(t);
  t = (ATerm) ATmakeAppl(sym__2, n_13, term_n_32);
  {
    ATerm w_11 (ATerm t)
    {
      t = term_t_32;
      return(t);
    }
    t = assert_1_0(w_11, t);
    t = n_13;
  }
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm m_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm z_13 = NULL,a_14 = NULL;
  z_13 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm q_4 = NULL,t_4 = NULL;
      t = z_13;
      t = xtc_new_file_0_0(t);
      q_4 = t;
      t = n_0(t);
      t_4 = t;
      t = (ATerm) ATmakeAppl(sym__2, t_4, (ATerm) ATinsert(ATinsert(ATempty, q_4), term_d_27));
      t = conc_0_0(t);
      t = xtc_command_1_0(m_0, t);
      t = SSL_close_file(q_4);
      t = (ATerm) ATmakeAppl(sym_FILE_1, q_4);
    }
  else
    {
      ATerm e_5 = NULL,f_5 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          a_14 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = a_14;
      t = xtc_new_file_0_0(t);
      e_5 = t;
      t = n_0(t);
      f_5 = t;
      t = (ATerm) ATmakeAppl(sym__2, f_5, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, e_5), term_d_27), a_14), term_c_39));
      t = conc_0_0(t);
      t = xtc_command_1_0(m_0, t);
      t = SSL_close_file(e_5);
      t = (ATerm) ATmakeAppl(sym_FILE_1, e_5);
    }
  return(t);
}
ATerm FILE_1_0 (ATerm e_71 (ATerm), ATerm t)
{
  ATerm d_14 = NULL,e_14 = NULL,f_14 = NULL,g_14 = NULL;
  g_14 = t;
  if(match_cons(t, sym_FILE_1))
    {
      e_14 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_14);
  d_14 = t;
  t = e_14;
  t = e_71(t);
  f_14 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FILE_1, f_14), d_14);
  return(t);
}
ATerm xtc_transform_2_0 (ATerm f_109 (ATerm), ATerm g_109 (ATerm), ATerm t)
{
  ATerm d_39 = t;
  int e_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_39 = t;
      int g_39 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = FILE_1_0(_id, t);
          ;
          LocalPopChoice(g_39);
        }
      else
        {
          t = f_39;
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
        }
      LocalPopChoice(e_39);
      t = xtc_transform_file_2_0(f_109, g_109, t);
    }
  else
    {
      t = d_39;
      t = xtc_transform_term_2_0(f_109, g_109, t);
    }
  return(t);
}
ATerm if_verbose3_1_0 (ATerm q_100 (ATerm), ATerm t)
{
  ATerm x_11 (ATerm t)
  {
    ATerm j_14 = NULL,k_14 = NULL;
    j_14 = t;
    t = term_r_26;
    t = get_config_0_0(t);
    k_14 = t;
    t = (ATerm) ATmakeAppl(sym__2, k_14, term_i_30);
    t = geq_0_0(t);
    t = j_14;
    t = q_100(t);
    return(t);
  }
  t = try_1_0(x_11, t);
  return(t);
}
ATerm basename_1_0 (ATerm t_95 (ATerm), ATerm t)
{
  ATerm l_14 = NULL,m_14 = NULL;
  l_14 = t;
  t = SSL_explode_string(l_14);
  {
    ATerm y_11 (ATerm t)
    {
      ATerm h_39 = t;
      int i_39 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Cons_2_0(_id, y_11, t);
          ;
          LocalPopChoice(i_39);
        }
      else
        {
          t = h_39;
          {
            ATerm j_39 = t;
            int k_39 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm z_11 (ATerm t)
                {
                  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 47)))
                    _fail(t);
                  return(t);
                }
                t = Cons_2_0(z_11, _id, t);
                ;
                LocalPopChoice(k_39);
              }
            else
              {
                t = j_39;
                {
                  ATerm a_12 (ATerm t)
                  {
                    if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 46)))
                      _fail(t);
                    return(t);
                  }
                  t = Cons_2_0(a_12, t_95, t);
                  t = (ATerm) ATempty;
                }
              }
          }
        }
      return(t);
    }
    t = try_1_0(y_11, t);
    m_14 = t;
    t = SSL_implode_string(m_14);
  }
  return(t);
}
ATerm basename_0_0 (ATerm t)
{
  t = basename_1_0(_id, t);
  return(t);
}
ATerm get_infile_0_0 (ATerm t)
{
  ATerm p_14 = NULL,r_14 = NULL,s_14 = NULL;
  if(match_cons(t, sym_FILE_1))
    {
      p_14 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = p_14;
  t = basename_0_0(t);
  r_14 = t;
  {
    ATerm e_12 (ATerm t)
    {
      ATerm h_12 (ATerm t)
      {
        t = term_l_39;
        return(t);
      }
      t = debug_1_0(h_12, t);
      return(t);
    }
    t = if_verbose3_1_0(e_12, t);
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("basein", 0, ATtrue)), r_14);
    t = (ATerm) ATmakeAppl(sym__3, term_m_39, term_n_39, r_14);
    {
      ATerm o_39 = t;
      int p_39 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = term_d_27;
          t = get_config_0_0(t);
          t = basename_0_0(t);
          ;
          LocalPopChoice(p_39);
        }
      else
        {
          t = o_39;
          t = r_14;
        }
      s_14 = t;
      {
        ATerm i_12 (ATerm t)
        {
          ATerm k_12 (ATerm t)
          {
            t = term_q_39;
            return(t);
          }
          t = debug_1_0(k_12, t);
          return(t);
        }
        t = if_verbose3_1_0(i_12, t);
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("baseout", 0, ATtrue)), s_14);
        t = (ATerm) ATmakeAppl(sym_FILE_1, r_14);
      }
    }
  }
  return(t);
}
ATerm parse_0_0 (ATerm t)
{
  t = get_infile_0_0(t);
  {
    ATerm l_12 (ATerm t)
    {
      t = term_r_39;
      return(t);
    }
    ATerm m_12 (ATerm t)
    {
      ATerm t_14 = NULL,u_14 = NULL,v_14 = NULL,w_14 = NULL,x_14 = NULL;
      t_14 = t;
      t = dep_name_0_0(t);
      u_14 = t;
      t = t_14;
      t = pass_verbose_0_0(t);
      v_14 = t;
      t = t_14;
      t = pass_keep_0_0(t);
      w_14 = t;
      t = term_s_39;
      t = get_config_0_0(t);
      x_14 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, w_14), v_14), x_14), u_14);
      t = concat_0_0(t);
      return(t);
    }
    t = xtc_transform_2_0(l_12, m_12, t);
  }
  return(t);
}
ATerm front_end_0_0 (ATerm t)
{
  ATerm n_12 (ATerm t)
  {
    ATerm o_12 (ATerm t)
    {
      t = term_t_39;
      return(t);
    }
    t = debug_1_0(o_12, t);
    return(t);
  }
  t = if_verbose2_1_0(n_12, t);
  {
    ATerm p_12 (ATerm t)
    {
      ATerm r_12 (ATerm t)
      {
        ATerm y_14 = NULL;
        y_14 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(CheckATermList(y_14), (ATerm) ATmakeAppl(ATmakeSymbol("front-end succeeded:     ", 0, ATtrue))));
        t = (ATerm) ATmakeAppl(sym__2, term_s_27, (ATerm) ATinsert(CheckATermList(y_14), term_u_39));
        return(t);
      }
      t = if_verbose1_1_0(r_12, t);
      return(t);
    }
    ATerm q_12 (ATerm t)
    {
      t = parse_0_0(t);
      t = output_ast_0_0(t);
      t = add_main_0_0(t);
      t = repair_types_0_0(t);
      t = frontend_0_0(t);
      t = output_frontend_0_0(t);
      t = extract_0_0(t);
      t = warnings_0_0(t);
      t = stratego_nf_0_0(t);
      t = rename_defs_0_0(t);
      return(t);
    }
    t = profile_p__2_0(p_12, q_12, t);
  }
  return(t);
}
ATerm table_pop_0_0 (ATerm t)
{
  ATerm b_15 = NULL,d_15 = NULL,e_15 = NULL;
  if(match_cons(t, sym__2))
    {
      b_15 = ATgetArgument(t, 0);
      d_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm v_39 = t;
    int w_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_6 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm x_39 = ATgetArgument(t, 0);
            ATerm y_39 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(b_15, d_15);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm z_39 = ATgetFirst((ATermList) t);
            d_6 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = d_6;
        ;
        LocalPopChoice(w_39);
      }
    else
      {
        t = v_39;
        t = (ATerm) ATempty;
      }
    e_15 = t;
    t = SSL_table_put(b_15, d_15, e_15);
    t = (ATerm) ATmakeAppl(sym__2, b_15, d_15);
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm p_97 (ATerm), ATerm t)
{
  ATerm k_15 = NULL,l_15 = NULL,m_15 = NULL,n_15 = NULL;
  k_15 = t;
  t = p_97(t);
  l_15 = t;
  {
    ATerm a_40 = t;
    int b_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get(l_15, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(b_40);
      }
    else
      {
        t = a_40;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        n_15 = ATgetFirst((ATermList) t);
        m_15 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSL_table_put(l_15, (ATerm)ATmakeAppl(sym_Scopes_0), m_15);
    t = n_15;
    {
      ATerm s_12 (ATerm t)
      {
        ATerm o_15 = NULL;
        o_15 = t;
        t = (ATerm) ATmakeAppl(sym__2, l_15, o_15);
        t = table_pop_0_0(t);
        return(t);
      }
      t = map_1_0(s_12, t);
      t = k_15;
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm z_79 (ATerm), ATerm a_80 (ATerm), ATerm t)
{
  ATerm c_40 = t;
  int d_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = z_79(t);
      t = a_80(t);
      ;
      LocalPopChoice(d_40);
    }
  else
    {
      t = c_40;
      t = a_80(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm o_97 (ATerm), ATerm t)
{
  ATerm r_15 = NULL,s_15 = NULL,t_15 = NULL;
  r_15 = t;
  t = o_97(t);
  s_15 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_15, term_e_40);
  {
    ATerm f_40 = t;
    int g_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm h_40 = ATgetArgument(t, 0);
            ATerm i_40 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(s_15, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(g_40);
      }
    else
      {
        t = f_40;
        t = (ATerm) ATempty;
      }
    t_15 = t;
    t = SSL_table_put(s_15, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATinsert(CheckATermList(t_15), (ATerm) ATempty));
    t = r_15;
  }
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm p_108 (ATerm), ATerm t)
{
  ATerm y_15 = NULL;
  ATerm t_12 (ATerm t)
  {
    t = term_t_32;
    return(t);
  }
  t = begin_scope_1_0(t_12, t);
  {
    ATerm v_12 (ATerm t)
    {
      ATerm z_15 = NULL;
      z_15 = t;
      {
        ATerm j_40 = t;
        int k_40 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_table_get((ATerm)ATmakeAppl(sym_TempFiles_0), (ATerm) ATmakeAppl(sym_Scopes_0));
            ;
            LocalPopChoice(k_40);
          }
        else
          {
            t = j_40;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
          }
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            if(((y_15 != NULL) && (y_15 != ATgetFirst((ATermList) t))))
              _fail(ATgetFirst((ATermList) t));
            else
              y_15 = ATgetFirst((ATermList) t);
            {
              ATerm l_40 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        t = not_null(y_15);
        {
          ATerm x_12 (ATerm t)
          {
            ATerm y_12 (ATerm t)
            {
              ATerm a_16 = NULL;
              a_16 = t;
              t = SSL_remove(a_16);
              return(t);
            }
            t = try_1_0(y_12, t);
            return(t);
          }
          t = map_1_0(x_12, t);
          t = z_15;
          {
            ATerm z_12 (ATerm t)
            {
              t = term_t_32;
              return(t);
            }
            t = end_scope_1_0(z_12, t);
          }
        }
      }
      return(t);
    }
    t = restore_always_2_0(p_108, v_12, t);
  }
  return(t);
}
ATerm xtc_input_1_0 (ATerm s_108 (ATerm), ATerm t)
{
  ATerm c_13 (ATerm t)
  {
    ATerm m_40 = t;
    int n_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_16 = NULL;
        t = term_c_39;
        t = get_config_0_0(t);
        b_16 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, b_16);
        ;
        LocalPopChoice(n_40);
      }
    else
      {
        t = m_40;
        t = term_o_40;
      }
    t = s_108(t);
    return(t);
  }
  t = xtc_temp_files_1_0(c_13, t);
  return(t);
}
ATerm compile_0_0 (ATerm t)
{
  ATerm d_13 (ATerm t)
  {
    t = front_end_0_0(t);
    t = optimize_0_0(t);
    t = back_end_0_0(t);
    t = c_compile_0_0(t);
    return(t);
  }
  t = xtc_input_1_0(d_13, t);
  return(t);
}
ATerm if_verbose1_1_0 (ATerm o_100 (ATerm), ATerm t)
{
  ATerm e_13 (ATerm t)
  {
    ATerm c_16 = NULL,d_16 = NULL;
    c_16 = t;
    t = term_r_26;
    t = get_config_0_0(t);
    d_16 = t;
    t = (ATerm) ATmakeAppl(sym__2, d_16, term_p_29);
    t = geq_0_0(t);
    t = c_16;
    t = o_100(t);
    return(t);
  }
  t = try_1_0(e_13, t);
  return(t);
}
ATerm diff_times_0_0 (ATerm t)
{
  ATerm i_16 = NULL,j_16 = NULL,k_16 = NULL,l_16 = NULL,m_16 = NULL,n_16 = NULL,p_16 = NULL,q_16 = NULL,r_16 = NULL,s_16 = NULL,t_16 = NULL,u_16 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm p_40 = ATgetArgument(t, 0);
      if(match_cons(p_40, sym__4))
        {
          i_16 = ATgetArgument(p_40, 0);
          j_16 = ATgetArgument(p_40, 1);
          k_16 = ATgetArgument(p_40, 2);
          l_16 = ATgetArgument(p_40, 3);
        }
      else
        _fail(t);
      {
        ATerm q_40 = ATgetArgument(t, 1);
        if(match_cons(q_40, sym__4))
          {
            m_16 = ATgetArgument(q_40, 0);
            n_16 = ATgetArgument(q_40, 1);
            p_16 = ATgetArgument(q_40, 2);
            q_16 = ATgetArgument(q_40, 3);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, i_16, m_16);
  {
    ATerm r_40 = t;
    int s_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_subti(i_16, m_16);
        ;
        LocalPopChoice(s_40);
      }
    else
      {
        t = r_40;
        t = SSL_subtr(i_16, m_16);
      }
    r_16 = t;
    t = (ATerm) ATmakeAppl(sym__2, j_16, n_16);
    {
      ATerm t_40 = t;
      int u_40 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SSL_subti(j_16, n_16);
          ;
          LocalPopChoice(u_40);
        }
      else
        {
          t = t_40;
          t = SSL_subtr(j_16, n_16);
        }
      s_16 = t;
      t = (ATerm) ATmakeAppl(sym__2, k_16, p_16);
      {
        ATerm v_40 = t;
        int w_40 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_subti(k_16, p_16);
            ;
            LocalPopChoice(w_40);
          }
        else
          {
            t = v_40;
            t = SSL_subtr(k_16, p_16);
          }
        t_16 = t;
        t = (ATerm) ATmakeAppl(sym__2, l_16, q_16);
        {
          ATerm x_40 = t;
          int y_40 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_subti(l_16, q_16);
              ;
              LocalPopChoice(y_40);
            }
          else
            {
              t = x_40;
              t = SSL_subtr(l_16, q_16);
            }
          u_16 = t;
          t = (ATerm) ATmakeAppl(sym__4, r_16, s_16, t_16, u_16);
        }
      }
    }
  }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm profile_p__2_0 (ATerm i_104 (ATerm), ATerm j_104 (ATerm), ATerm t)
{
  ATerm v_16 = NULL,w_16 = NULL,x_16 = NULL,y_16 = NULL,z_16 = NULL,a_17 = NULL,b_17 = NULL,c_17 = NULL,d_17 = NULL,h_6 = NULL,n_6 = NULL,q_6 = NULL,r_6 = NULL;
  v_16 = t;
  t = times_0_0(t);
  w_16 = t;
  t = v_16;
  t = j_104(t);
  x_16 = t;
  t = times_0_0(t);
  y_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_16, w_16);
  t = diff_times_0_0(t);
  z_16 = t;
  if(match_cons(t, sym__4))
    {
      h_6 = ATgetArgument(t, 0);
      {
        ATerm z_40 = ATgetArgument(t, 1);
      }
      n_6 = ATgetArgument(t, 2);
      {
        ATerm a_41 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, h_6, n_6);
  {
    ATerm b_41 = t;
    int c_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(h_6, n_6);
        ;
        LocalPopChoice(c_41);
      }
    else
      {
        t = b_41;
        t = SSL_addr(h_6, n_6);
      }
    b_17 = t;
    t = SSL_TicksToSeconds(b_17);
    a_17 = t;
    t = z_16;
    if(match_cons(t, sym__4))
      {
        ATerm d_41 = ATgetArgument(t, 0);
        q_6 = ATgetArgument(t, 1);
        {
          ATerm e_41 = ATgetArgument(t, 2);
        }
        r_6 = ATgetArgument(t, 3);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__2, q_6, r_6);
    {
      ATerm f_41 = t;
      int g_41 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SSL_addi(q_6, r_6);
          ;
          LocalPopChoice(g_41);
        }
      else
        {
          t = f_41;
          t = SSL_addr(q_6, r_6);
        }
      d_17 = t;
      t = SSL_TicksToSeconds(d_17);
      c_17 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, c_17), term_i_41), a_17), term_h_41);
      t = i_104(t);
      t = x_16;
    }
  }
  return(t);
}
ATerm debug_1_0 (ATerm x_98 (ATerm), ATerm t)
{
  ATerm e_17 = NULL,f_17 = NULL;
  e_17 = t;
  t = x_98(t);
  f_17 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, e_17), f_17));
  t = e_17;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm j_41 = t;
  int k_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_17 = NULL;
      l_17 = t;
      t = SSL_is_string(l_17);
      ;
      LocalPopChoice(k_41);
    }
  else
    {
      t = j_41;
      {
        ATerm l_41 = t;
        int m_41 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_13 (ATerm t)
            {
              t = try_1_0(eval_config_0_0, t);
              return(t);
            }
            t = map_1_0(g_13, t);
            ;
            LocalPopChoice(m_41);
          }
        else
          {
            t = l_41;
            {
              ATerm r_17 = NULL,s_17 = NULL,t_17 = NULL;
              r_17 = t;
              if(match_cons(t, sym_Path_1))
                {
                  s_17 = ATgetArgument(t, 0);
                  t = s_17;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      s_17 = ATgetArgument(t, 0);
                      t = s_17;
                      {
                        ATerm n_41 = t;
                        int o_41 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(o_41);
                          }
                        else
                          {
                            t = n_41;
                            {
                              ATerm o_13 (ATerm t)
                              {
                                t = term_p_41;
                                return(t);
                              }
                              t = debug_1_0(o_13, t);
                              _fail(t);
                            }
                          }
                      }
                    }
                  else
                    {
                      ATerm x_17 = NULL,z_17 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          s_17 = ATgetArgument(t, 0);
                          t_17 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = s_17;
                      t = eval_config_0_0(t);
                      x_17 = t;
                      t = t_17;
                      t = eval_config_0_0(t);
                      z_17 = t;
                      t = (ATerm) ATmakeAppl(sym__2, x_17, z_17);
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
  ATerm c_18 = NULL;
  c_18 = t;
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), c_18);
  {
    ATerm p_13 (ATerm t)
    {
      ATerm d_18 = NULL;
      t = eval_config_0_0(t);
      d_18 = t;
      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), c_18, d_18);
      t = d_18;
      return(t);
    }
    t = try_1_0(p_13, t);
  }
  return(t);
}
ATerm strc_announce_0_0 (ATerm t)
{
  t = if_verbose2_1_0(strc_version_0_0, t);
  return(t);
}
ATerm fatal_error_0_0 (ATerm t)
{
  ATerm e_18 = NULL;
  e_18 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), e_18);
  t = SSL_exit((ATerm) ATmakeInt(1));
  t = e_18;
  return(t);
}
ATerm strc_version_0_0 (ATerm t)
{
  ATerm f_18 = NULL,g_18 = NULL;
  f_18 = t;
  t = term_q_41;
  t = get_config_0_0(t);
  g_18 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stdout_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("version 2 of the License, or (at your option) any later version.\n", 0, ATtrue))), (ATerm) ATmakeAppl(ATmakeSymbol("License as published by the Free Software Foundation; either\n", 0, ATtrue))), (ATerm) ATmakeAppl(ATmakeSymbol("modify it under the terms of the GNU Lesser General Public\n", 0, ATtrue))), (ATerm) ATmakeAppl(ATmakeSymbol("This library is free software; you can redistribute it and/or\n", 0, ATtrue))), (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue))), (ATerm) ATmakeAppl(ATmakeSymbol("Copyright (C) 1998-2003 Eelco Visser <visser@acm.org>\n", 0, ATtrue))), (ATerm) ATmakeAppl(ATmakeSymbol("\n\n", 0, ATtrue))), g_18), (ATerm) ATmakeAppl(ATmakeSymbol("STRC ", 0, ATtrue))));
  t = f_18;
  return(t);
}
ATerm try_1_0 (ATerm k_79 (ATerm), ATerm t)
{
  ATerm r_41 = t;
  int s_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = k_79(t);
      ;
      LocalPopChoice(s_41);
    }
  else
    {
      t = r_41;
    }
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm h_18 = NULL;
  h_18 = t;
  t = SSL_table_keys(h_18);
  {
    ATerm q_13 (ATerm t)
    {
      ATerm i_18 = NULL,j_18 = NULL;
      i_18 = t;
      t = SSL_table_get(h_18, i_18);
      j_18 = t;
      t = (ATerm) ATmakeAppl(sym__2, i_18, j_18);
      return(t);
    }
    t = map_1_0(q_13, t);
  }
  return(t);
}
ATerm if_verbose5_1_0 (ATerm s_100 (ATerm), ATerm t)
{
  ATerm r_13 (ATerm t)
  {
    ATerm k_18 = NULL,l_18 = NULL;
    k_18 = t;
    t = term_r_26;
    t = get_config_0_0(t);
    l_18 = t;
    t = (ATerm) ATmakeAppl(sym__2, l_18, term_j_30);
    t = geq_0_0(t);
    t = k_18;
    t = s_100(t);
    return(t);
  }
  t = try_1_0(r_13, t);
  return(t);
}
ATerm xtc_find_version_loc_0_0 (ATerm t)
{
  ATerm p_18 = NULL,q_18 = NULL,r_18 = NULL;
  if(match_cons(t, sym__2))
    {
      p_18 = ATgetArgument(t, 0);
      q_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Tool_1, p_18));
  {
    ATerm s_13 (ATerm t)
    {
      if(match_cons(t, sym__2))
        {
          if((q_18 != ATgetArgument(t, 0)))
            {
              _fail(ATgetArgument(t, 0));
            }
          if(((r_18 != NULL) && (r_18 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            r_18 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      return(t);
    }
    t = fetch_1_0(s_13, t);
    t = not_null(r_18);
  }
  return(t);
}
ATerm filter_1_0 (ATerm a_94 (ATerm), ATerm t)
{
  ATerm t_41 = t;
  int u_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(u_41);
    }
  else
    {
      t = t_41;
      {
        ATerm v_41 = t;
        int w_41 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_13 (ATerm t)
            {
              t = filter_1_0(a_94, t);
              return(t);
            }
            t = Cons_2_0(a_94, t_13, t);
            ;
            LocalPopChoice(w_41);
          }
        else
          {
            t = v_41;
            {
              ATerm v_18 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm x_41 = ATgetFirst((ATermList) t);
                  v_18 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = v_18;
              t = filter_1_0(a_94, t);
            }
          }
      }
    }
  return(t);
}
ATerm repeat_1_0 (ATerm g_80 (ATerm), ATerm t)
{
  ATerm x_18 (ATerm t)
  {
    ATerm u_13 (ATerm t)
    {
      t = g_80(t);
      t = x_18(t);
      return(t);
    }
    t = try_1_0(u_13, t);
    return(t);
  }
  t = x_18(t);
  return(t);
}
ATerm xtc_import_0_0 (ATerm t)
{
  ATerm y_18 = NULL;
  y_18 = t;
  {
    ATerm v_13 (ATerm t)
    {
      t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Import_0));
      t = filter_1_0(xtc_read_0_0, t);
      {
        ATerm y_41 = t;
        if((PushChoice() == 0))
          {
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = y_41;
          }
      }
      return(t);
    }
    t = repeat_1_0(v_13, t);
    t = y_18;
  }
  return(t);
}
ATerm say_1_0 (ATerm b_99 (ATerm), ATerm t)
{
  ATerm a_19 = NULL,c_7 = NULL;
  a_19 = t;
  t = b_99(t);
  c_7 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, c_7));
  t = a_19;
  return(t);
}
ATerm if_verbose4_1_0 (ATerm r_100 (ATerm), ATerm t)
{
  ATerm w_13 (ATerm t)
  {
    ATerm b_19 = NULL,c_19 = NULL;
    b_19 = t;
    t = term_r_26;
    t = get_config_0_0(t);
    c_19 = t;
    t = (ATerm) ATmakeAppl(sym__2, c_19, term_y_30);
    t = geq_0_0(t);
    t = b_19;
    t = r_100(t);
    return(t);
  }
  t = try_1_0(w_13, t);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm l_19 = NULL,m_19 = NULL,n_19 = NULL;
  l_19 = t;
  if(match_cons(t, sym__2))
    {
      m_19 = ATgetArgument(t, 0);
      n_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm z_41 = t;
    int a_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_19;
        if((m_19 != t))
          {
            _fail(t);
          }
        t = l_19;
        ;
        LocalPopChoice(a_42);
      }
    else
      {
        t = z_41;
        t = l_19;
        {
          ATerm b_42 = t;
          int c_42 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(m_19, n_19);
              ;
              LocalPopChoice(c_42);
            }
          else
            {
              t = b_42;
              t = SSL_gtr(m_19, n_19);
            }
          t = (ATerm) ATmakeAppl(sym__2, m_19, n_19);
        }
      }
  }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm t_100 (ATerm), ATerm t)
{
  ATerm x_13 (ATerm t)
  {
    ATerm q_19 = NULL,r_19 = NULL;
    q_19 = t;
    t = term_r_26;
    t = get_config_0_0(t);
    r_19 = t;
    t = (ATerm) ATmakeAppl(sym__2, r_19, term_o_34);
    t = geq_0_0(t);
    t = q_19;
    t = t_100(t);
    return(t);
  }
  t = try_1_0(x_13, t);
  return(t);
}
ATerm HdMember_p__2_0 (ATerm d_91 (ATerm), ATerm e_91 (ATerm), ATerm t)
{
  ATerm w_19 = NULL,x_19 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_19 = ATgetFirst((ATermList) t);
      x_19 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = e_91(t);
  {
    ATerm y_13 (ATerm t)
    {
      ATerm y_19 = NULL;
      y_19 = t;
      t = (ATerm) ATmakeAppl(sym__2, w_19, y_19);
      t = d_91(t);
      return(t);
    }
    t = fetch_1_0(y_13, t);
    t = x_19;
  }
  return(t);
}
ATerm union_1_0 (ATerm z_90 (ATerm), ATerm t)
{
  ATerm z_19 = NULL,c_20 = NULL;
  if(match_cons(t, sym__2))
    {
      c_20 = ATgetArgument(t, 0);
      z_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_20;
  {
    ATerm d_20 (ATerm t)
    {
      ATerm d_42 = t;
      int e_42 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = z_19;
          ;
          LocalPopChoice(e_42);
        }
      else
        {
          t = d_42;
          {
            ATerm f_42 = t;
            int g_42 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm b_14 (ATerm t)
                {
                  t = z_19;
                  return(t);
                }
                t = HdMember_p__2_0(z_90, b_14, t);
                t = d_20(t);
                ;
                LocalPopChoice(g_42);
              }
            else
              {
                t = f_42;
                t = Cons_2_0(_id, d_20, t);
              }
          }
        }
      return(t);
    }
    t = d_20(t);
  }
  return(t);
}
ATerm union_0_0 (ATerm t)
{
  ATerm c_14 (ATerm t)
  {
    ATerm e_20 = NULL;
    if(match_cons(t, sym__2))
      {
        e_20 = ATgetArgument(t, 0);
        if((e_20 != ATgetArgument(t, 1)))
          {
            _fail(ATgetArgument(t, 1));
          }
      }
    else
      _fail(t);
    return(t);
  }
  t = union_1_0(c_14, t);
  return(t);
}
ATerm table_append_0_0 (ATerm t)
{
  ATerm l_20 = NULL,n_20 = NULL,o_20 = NULL,r_20 = NULL,s_20 = NULL;
  if(match_cons(t, sym__3))
    {
      l_20 = ATgetArgument(t, 0);
      n_20 = ATgetArgument(t, 1);
      o_20 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, l_20, n_20);
  {
    ATerm h_42 = t;
    int i_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm j_42 = ATgetArgument(t, 0);
            ATerm k_42 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(l_20, n_20);
        ;
        LocalPopChoice(i_42);
      }
    else
      {
        t = h_42;
        t = (ATerm) ATempty;
      }
    r_20 = t;
    t = (ATerm) ATmakeAppl(sym__2, r_20, o_20);
    t = union_0_0(t);
    s_20 = t;
    t = SSL_table_put(l_20, n_20, s_20);
    t = (ATerm) ATmakeAppl(sym__3, l_20, n_20, o_20);
  }
  return(t);
}
ATerm table_putlist_1_0 (ATerm r_105 (ATerm), ATerm t)
{
  ATerm t_20 = NULL,u_20 = NULL;
  if(match_cons(t, sym__2))
    {
      u_20 = ATgetArgument(t, 0);
      t_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_20;
  {
    ATerm h_14 (ATerm t)
    {
      ATerm v_20 = NULL,w_20 = NULL;
      if(match_cons(t, sym__2))
        {
          v_20 = ATgetArgument(t, 0);
          w_20 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__3, u_20, v_20, w_20);
      t = r_105(t);
      return(t);
    }
    t = map_1_0(h_14, t);
  }
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm t_21 (ATerm m_21, ATerm t)
  {
    t = SSL_fclose(m_21);
    return(t);
  }
  ATerm q_21 = NULL,r_21 = NULL;
  r_21 = t;
  if(match_cons(t, sym_Stream_1))
    {
      q_21 = ATgetArgument(t, 0);
      {
        ATerm l_42 = t;
        int m_42 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(q_21);
            ;
            LocalPopChoice(m_42);
          }
        else
          {
            t = l_42;
            t = t_21(r_21, t);
          }
      }
    }
  else
    {
      t = t_21(r_21, t);
    }
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm u_21 = NULL;
  t = SSL_stdin_stream();
  u_21 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, u_21);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm v_21 = NULL;
  t = SSL_stdout_stream();
  v_21 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, v_21);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm w_21 = NULL;
  t = SSL_stderr_stream();
  w_21 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, w_21);
  return(t);
}
ATerm stdio_stream_0_0 (ATerm t)
{
  ATerm y_21 = NULL;
  y_21 = t;
  if(match_cons(t, sym_stderr_0))
    {
      t = y_21;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = y_21;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = y_21;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm n_42 = ATgetArgument(t, 0);
      ATerm o_42 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm p_42 = t;
    int q_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_9 = NULL,m_9 = NULL;
        l_9 = t;
        t = SSL_explode_term(l_9);
        if(match_cons(t, sym__2))
          {
            ATerm r_42 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) r_42) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm s_42 = ATgetArgument(t, 1);
              if(((ATgetType(s_42) == AT_LIST) && !(ATisEmpty(s_42))))
                {
                  m_9 = ATgetFirst((ATermList) s_42);
                  {
                    ATerm t_42 = (ATerm) ATgetNext((ATermList) s_42);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = m_9;
        t = stdio_stream_0_0(t);
        ;
        LocalPopChoice(q_42);
      }
    else
      {
        t = p_42;
        {
          ATerm u_42 = t;
          int v_42 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm b_22 = NULL,c_22 = NULL,d_22 = NULL;
              ATerm i_14 (ATerm t)
              {
                ATerm e_22 = NULL;
                if(match_cons(t, sym_Path_1))
                  {
                    e_22 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = e_22;
                return(t);
              }
              t = _2_0(i_14, _id, t);
              if(match_cons(t, sym__2))
                {
                  b_22 = ATgetArgument(t, 0);
                  c_22 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_fopen(b_22, c_22);
              d_22 = t;
              t = (ATerm) ATmakeAppl(sym_Stream_1, d_22);
              ;
              LocalPopChoice(v_42);
            }
          else
            {
              t = u_42;
              {
                ATerm f_22 = NULL,g_22 = NULL,h_22 = NULL;
                ATerm o_14 (ATerm t)
                {
                  ATerm i_22 = NULL;
                  i_22 = t;
                  t = SSL_is_string(i_22);
                  return(t);
                }
                t = _2_0(o_14, _id, t);
                if(match_cons(t, sym__2))
                  {
                    f_22 = ATgetArgument(t, 0);
                    g_22 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_fopen(f_22, g_22);
                h_22 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, h_22);
              }
            }
        }
      }
  }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm j_22 = NULL,k_22 = NULL,l_22 = NULL;
  ATerm w_42 = t;
  int x_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_22 = NULL;
      m_22 = t;
      t = (ATerm) ATmakeAppl(sym__2, m_22, term_y_42);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(x_42);
    }
  else
    {
      t = w_42;
      {
        ATerm q_14 (ATerm t)
        {
          t = term_z_42;
          return(t);
        }
        t = debug_1_0(q_14, t);
        _fail(t);
      }
    }
  j_22 = t;
  if(match_cons(t, sym_Stream_1))
    {
      l_22 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(l_22);
  k_22 = t;
  t = j_22;
  t = fclose_0_0(t);
  t = k_22;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm a_43 = t;
  int b_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_9 = NULL;
      p_9 = t;
      t = SSL_access(p_9, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_R__OK_0)));
      LocalPopChoice(b_43);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = a_43;
      {
        ATerm c_43 = t;
        int d_43 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_43 = t;
            if((PushChoice() == 0))
              {
                ATerm t_9 = NULL;
                t_9 = t;
                t = SSL_access(t_9, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_F__OK_0)));
                PopChoice();
                _fail(t);
              }
            else
              {
                t = e_43;
              }
            {
              ATerm z_14 (ATerm t)
              {
                t = term_f_43;
                return(t);
              }
              t = debug_1_0(z_14, t);
            }
            ;
            LocalPopChoice(d_43);
          }
        else
          {
            t = c_43;
            {
              ATerm a_15 (ATerm t)
              {
                t = term_g_43;
                return(t);
              }
              t = debug_1_0(a_15, t);
            }
          }
        t = (ATerm) ATempty;
      }
    }
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm p_22 = NULL,q_22 = NULL,r_22 = NULL;
  p_22 = t;
  {
    ATerm c_15 (ATerm t)
    {
      ATerm f_15 (ATerm t)
      {
        t = term_h_43;
        return(t);
      }
      t = debug_1_0(f_15, t);
      return(t);
    }
    t = if_verbose5_1_0(c_15, t);
    {
      ATerm i_43 = t;
      if((PushChoice() == 0))
        {
          t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Imported_1, p_22));
          PopChoice();
          _fail(t);
        }
      else
        {
          t = i_43;
        }
      q_22 = t;
      t = SSL_table_put((ATerm)ATmakeAppl(sym_XTC_0), (ATerm)ATmakeAppl(sym_Repository_0), (ATerm) ATinsert(ATempty, p_22));
      t = q_22;
      {
        ATerm g_15 (ATerm t)
        {
          ATerm h_15 (ATerm t)
          {
            t = term_j_43;
            return(t);
          }
          t = debug_1_0(h_15, t);
          return(t);
        }
        t = if_verbose4_1_0(g_15, t);
        t = read_repository_file_0_0(t);
        {
          ATerm i_15 (ATerm t)
          {
            ATerm j_15 (ATerm t)
            {
              t = term_k_43;
              return(t);
            }
            t = say_1_0(j_15, t);
            return(t);
          }
          t = if_verbose6_1_0(i_15, t);
          r_22 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_l_43, r_22);
          t = table_putlist_1_0(table_append_0_0, t);
          {
            ATerm p_15 (ATerm t)
            {
              ATerm q_15 (ATerm t)
              {
                t = term_m_43;
                return(t);
              }
              t = say_1_0(q_15, t);
              return(t);
            }
            t = if_verbose6_1_0(p_15, t);
            t = SSL_table_put((ATerm)ATmakeAppl(sym_XTC_0), (ATerm)ATmakeAppl(sym_Imported_1, p_22), (ATerm) ATempty);
            t = (ATerm) ATmakeAppl(sym__3, term_l_43, (ATerm)ATmakeAppl(sym_Imported_1, p_22), (ATerm) ATempty);
            {
              ATerm u_15 (ATerm t)
              {
                ATerm v_15 (ATerm t)
                {
                  t = term_k_43;
                  return(t);
                }
                t = say_1_0(v_15, t);
                return(t);
              }
              t = if_verbose4_1_0(u_15, t);
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
  ATerm n_43 = t;
  int o_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_p_43;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(o_43);
    }
  else
    {
      t = n_43;
      {
        ATerm q_43 = t;
        int r_43 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_getenv((ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue)));
            ;
            LocalPopChoice(r_43);
          }
        else
          {
            t = q_43;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm s_22 = NULL;
  ATerm w_15 (ATerm t)
  {
    ATerm x_15 (ATerm t)
    {
      t = term_s_43;
      return(t);
    }
    t = debug_1_0(x_15, t);
    return(t);
  }
  t = if_verbose5_1_0(w_15, t);
  s_22 = t;
  {
    ATerm t_43 = t;
    int u_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Repository_0));
        ;
        LocalPopChoice(u_43);
      }
    else
      {
        t = t_43;
        t = xtc_location_0_0(t);
        t = xtc_read_0_0(t);
        t = xtc_import_0_0(t);
      }
    t = s_22;
    {
      ATerm e_16 (ATerm t)
      {
        ATerm f_16 (ATerm t)
        {
          t = term_v_43;
          return(t);
        }
        t = debug_1_0(f_16, t);
        return(t);
      }
      t = if_verbose5_1_0(e_16, t);
    }
  }
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm w_43 = t;
  int x_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_16 (ATerm t)
      {
        ATerm h_16 (ATerm t)
        {
          t = term_y_43;
          return(t);
        }
        t = debug_1_0(h_16, t);
        return(t);
      }
      t = if_verbose5_1_0(g_16, t);
      t = xtc_load_0_0(t);
      {
        ATerm z_43 = t;
        int a_44 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = xtc_find_version_loc_0_0(t);
            ;
            LocalPopChoice(a_44);
          }
        else
          {
            t = z_43;
            {
              ATerm f_10 = NULL,g_10 = NULL;
              f_10 = t;
              t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Tool_1, f_10));
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm b_44 = ATgetFirst((ATermList) t);
                  if(match_cons(b_44, sym__2))
                    {
                      ATerm d_44 = ATgetArgument(b_44, 0);
                      g_10 = ATgetArgument(b_44, 1);
                    }
                  else
                    _fail(t);
                  {
                    ATerm c_44 = (ATerm) ATgetNext((ATermList) t);
                  }
                }
              else
                _fail(t);
              t = g_10;
            }
          }
        {
          ATerm o_16 (ATerm t)
          {
            ATerm g_17 (ATerm t)
            {
              t = term_y_43;
              return(t);
            }
            t = debug_1_0(g_17, t);
            return(t);
          }
          t = if_verbose5_1_0(o_16, t);
        }
      }
      ;
      LocalPopChoice(x_43);
    }
  else
    {
      t = w_43;
      {
        ATerm t_22 = NULL;
        t_22 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue))), t_22), (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue))));
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_f_44), t_22), term_e_44);
        {
          ATerm h_17 (ATerm t)
          {
            t = term_l_43;
            t = table_getlist_0_0(t);
            {
              ATerm i_17 (ATerm t)
              {
                t = term_g_44;
                return(t);
              }
              t = debug_1_0(i_17, t);
            }
            return(t);
          }
          t = if_verbose5_1_0(h_17, t);
          _fail(t);
        }
      }
    }
  return(t);
}
ATerm extend_config_0_0 (ATerm t)
{
  ATerm v_22 = NULL,w_22 = NULL,x_22 = NULL,y_22 = NULL;
  if(match_cons(t, sym__2))
    {
      v_22 = ATgetArgument(t, 0);
      w_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_22;
  {
    ATerm h_44 = t;
    int i_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        ;
        LocalPopChoice(i_44);
      }
    else
      {
        t = h_44;
        t = (ATerm) ATempty;
      }
    x_22 = t;
    t = (ATerm) ATmakeAppl(sym__2, w_22, x_22);
    t = conc_0_0(t);
    y_22 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), v_22, y_22);
    t = (ATerm) ATmakeAppl(sym__3, term_m_39, v_22, y_22);
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm b_23 = NULL,c_23 = NULL,d_23 = NULL,e_23 = NULL,f_23 = NULL;
  b_23 = t;
  if(match_string(t, "register-usage-info"))
    {
      t = b_23;
      t = register_usage_1_0(l_0, t);
    }
  else
    {
      ATerm j_23 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          c_23 = ATgetFirst((ATermList) t);
          d_23 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = d_23;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          e_23 = ATgetFirst((ATermList) t);
          f_23 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = c_23;
      t = j_0(t);
      t = e_23;
      t = k_0(t);
      j_23 = t;
      t = (ATerm) ATinsert(CheckATermList(f_23), j_23);
    }
  return(t);
}
ATerm toggle_config_0_0 (ATerm t)
{
  ATerm k_23 = NULL,l_23 = NULL;
  if(match_cons(t, sym__2))
    {
      k_23 = ATgetArgument(t, 0);
      l_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm j_44 = t;
    int k_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = k_23;
        t = get_config_0_0(t);
        t = SSL_table_remove((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), k_23);
        t = (ATerm) ATmakeAppl(sym__2, term_m_39, k_23);
        ;
        LocalPopChoice(k_44);
      }
    else
      {
        t = j_44;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), k_23, l_23);
        t = (ATerm) ATmakeAppl(sym__3, term_m_39, k_23, l_23);
      }
  }
  return(t);
}
ATerm post_extend_config_0_0 (ATerm t)
{
  ATerm m_23 = NULL,n_23 = NULL,o_23 = NULL,p_23 = NULL;
  if(match_cons(t, sym__2))
    {
      m_23 = ATgetArgument(t, 0);
      n_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_23;
  {
    ATerm l_44 = t;
    int m_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        ;
        LocalPopChoice(m_44);
      }
    else
      {
        t = l_44;
        t = (ATerm) ATempty;
      }
    o_23 = t;
    t = (ATerm) ATmakeAppl(sym__2, o_23, n_23);
    t = conc_0_0(t);
    p_23 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), m_23, p_23);
    t = (ATerm) ATmakeAppl(sym__3, term_m_39, m_23, p_23);
  }
  return(t);
}
ATerm sc_options_0_0 (ATerm t)
{
  ATerm n_44 = t;
  int o_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_17 (ATerm t)
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-i", 0, ATtrue)))
          _fail(t);
        return(t);
      }
      ATerm k_17 (ATerm t)
      {
        ATerm x_23 = NULL;
        x_23 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), x_23);
        t = term_n_32;
        return(t);
      }
      ATerm m_17 (ATerm t)
      {
        t = term_p_44;
        return(t);
      }
      t = ArgOption_3_0(j_17, k_17, m_17, t);
      ;
      LocalPopChoice(o_44);
    }
  else
    {
      t = n_44;
      {
        ATerm q_44 = t;
        int r_44 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_17 (ATerm t)
            {
              ATerm y_23 = NULL;
              y_23 = t;
              if(match_string(t, "-o"))
                {
                  t = y_23;
                }
              else
                {
                  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
                    _fail(t);
                  t = y_23;
                }
              return(t);
            }
            ATerm o_17 (ATerm t)
            {
              ATerm z_23 = NULL;
              z_23 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), z_23);
              t = term_n_32;
              return(t);
            }
            ATerm p_17 (ATerm t)
            {
              t = term_s_44;
              return(t);
            }
            t = ArgOption_3_0(n_17, o_17, p_17, t);
            ;
            LocalPopChoice(r_44);
          }
        else
          {
            t = q_44;
            {
              ATerm t_44 = t;
              int u_44 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm q_17 (ATerm t)
                  {
                    ATerm a_24 = NULL;
                    a_24 = t;
                    if(match_string(t, "-I"))
                      {
                        t = a_24;
                      }
                    else
                      {
                        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--Include", 0, ATtrue)))
                          _fail(t);
                        t = a_24;
                      }
                    return(t);
                  }
                  ATerm u_17 (ATerm t)
                  {
                    ATerm b_24 = NULL;
                    b_24 = t;
                    t = (ATerm) ATmakeAppl(sym__2, term_s_39, (ATerm) ATinsert(ATinsert(ATempty, b_24), term_s_39));
                    t = extend_config_0_0(t);
                    t = term_n_32;
                    return(t);
                  }
                  ATerm v_17 (ATerm t)
                  {
                    t = term_v_44;
                    return(t);
                  }
                  t = ArgOption_3_0(q_17, u_17, v_17, t);
                  ;
                  LocalPopChoice(u_44);
                }
              else
                {
                  t = t_44;
                  {
                    ATerm w_44 = t;
                    int x_44 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm w_17 (ATerm t)
                        {
                          ATerm c_24 = NULL;
                          c_24 = t;
                          if(match_string(t, "--main"))
                            {
                              t = c_24;
                            }
                          else
                            {
                              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-m", 0, ATtrue)))
                                _fail(t);
                              t = c_24;
                            }
                          return(t);
                        }
                        ATerm y_17 (ATerm t)
                        {
                          ATerm d_24 = NULL;
                          d_24 = t;
                          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-m", 0, ATtrue)), d_24);
                          t = term_n_32;
                          return(t);
                        }
                        ATerm a_18 (ATerm t)
                        {
                          t = term_y_44;
                          return(t);
                        }
                        t = ArgOption_3_0(w_17, y_17, a_18, t);
                        ;
                        LocalPopChoice(x_44);
                      }
                    else
                      {
                        t = w_44;
                        {
                          ATerm z_44 = t;
                          int a_45 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm b_18 (ATerm t)
                              {
                                if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--C-include", 0, ATtrue)))
                                  _fail(t);
                                return(t);
                              }
                              ATerm m_18 (ATerm t)
                              {
                                ATerm e_24 = NULL;
                                e_24 = t;
                                t = (ATerm) ATmakeAppl(sym__2, term_i_28, (ATerm) ATinsert(ATempty, e_24));
                                t = post_extend_config_0_0(t);
                                t = term_n_32;
                                return(t);
                              }
                              ATerm n_18 (ATerm t)
                              {
                                t = term_b_45;
                                return(t);
                              }
                              t = ArgOption_3_0(b_18, m_18, n_18, t);
                              ;
                              LocalPopChoice(a_45);
                            }
                          else
                            {
                              t = z_44;
                              {
                                ATerm c_45 = t;
                                int d_45 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm o_18 (ATerm t)
                                    {
                                      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-CI", 0, ATtrue)))
                                        _fail(t);
                                      return(t);
                                    }
                                    ATerm s_18 (ATerm t)
                                    {
                                      ATerm f_24 = NULL;
                                      f_24 = t;
                                      t = (ATerm) ATmakeAppl(sym__2, term_o_27, (ATerm) ATinsert(ATempty, f_24));
                                      t = extend_config_0_0(t);
                                      t = term_n_32;
                                      return(t);
                                    }
                                    ATerm t_18 (ATerm t)
                                    {
                                      t = term_e_45;
                                      return(t);
                                    }
                                    t = ArgOption_3_0(o_18, s_18, t_18, t);
                                    ;
                                    LocalPopChoice(d_45);
                                  }
                                else
                                  {
                                    t = c_45;
                                    {
                                      ATerm f_45 = t;
                                      int g_45 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm u_18 (ATerm t)
                                          {
                                            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-CL", 0, ATtrue)))
                                              _fail(t);
                                            return(t);
                                          }
                                          ATerm w_18 (ATerm t)
                                          {
                                            ATerm g_24 = NULL;
                                            g_24 = t;
                                            t = (ATerm) ATmakeAppl(sym__2, term_h_27, (ATerm) ATinsert(ATempty, g_24));
                                            t = extend_config_0_0(t);
                                            t = term_n_32;
                                            return(t);
                                          }
                                          ATerm z_18 (ATerm t)
                                          {
                                            t = term_h_45;
                                            return(t);
                                          }
                                          t = ArgOption_3_0(u_18, w_18, z_18, t);
                                          ;
                                          LocalPopChoice(g_45);
                                        }
                                      else
                                        {
                                          t = f_45;
                                          {
                                            ATerm i_45 = t;
                                            int j_45 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                ATerm d_19 (ATerm t)
                                                {
                                                  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-c", 0, ATtrue)))
                                                    _fail(t);
                                                  return(t);
                                                }
                                                ATerm e_19 (ATerm t)
                                                {
                                                  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-c", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                                                  t = term_n_32;
                                                  return(t);
                                                }
                                                ATerm f_19 (ATerm t)
                                                {
                                                  t = term_k_45;
                                                  return(t);
                                                }
                                                t = Option_3_0(d_19, e_19, f_19, t);
                                                ;
                                                LocalPopChoice(j_45);
                                              }
                                            else
                                              {
                                                t = i_45;
                                                {
                                                  ATerm l_45 = t;
                                                  int m_45 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm g_19 (ATerm t)
                                                      {
                                                        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--ast", 0, ATtrue)))
                                                          _fail(t);
                                                        return(t);
                                                      }
                                                      ATerm h_19 (ATerm t)
                                                      {
                                                        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--ast", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                                                        t = term_n_32;
                                                        return(t);
                                                      }
                                                      ATerm i_19 (ATerm t)
                                                      {
                                                        t = term_n_45;
                                                        return(t);
                                                      }
                                                      t = Option_3_0(g_19, h_19, i_19, t);
                                                      ;
                                                      LocalPopChoice(m_45);
                                                    }
                                                  else
                                                    {
                                                      t = l_45;
                                                      {
                                                        ATerm o_45 = t;
                                                        int p_45 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            ATerm j_19 (ATerm t)
                                                            {
                                                              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-F", 0, ATtrue)))
                                                                _fail(t);
                                                              return(t);
                                                            }
                                                            ATerm k_19 (ATerm t)
                                                            {
                                                              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-F", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                                                              t = term_n_32;
                                                              return(t);
                                                            }
                                                            ATerm o_19 (ATerm t)
                                                            {
                                                              t = term_q_45;
                                                              return(t);
                                                            }
                                                            t = Option_3_0(j_19, k_19, o_19, t);
                                                            ;
                                                            LocalPopChoice(p_45);
                                                          }
                                                        else
                                                          {
                                                            t = o_45;
                                                            {
                                                              ATerm r_45 = t;
                                                              int s_45 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm p_19 (ATerm t)
                                                                  {
                                                                    if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
                                                                      _fail(t);
                                                                    return(t);
                                                                  }
                                                                  ATerm s_19 (ATerm t)
                                                                  {
                                                                    ATerm h_24 = NULL,i_24 = NULL;
                                                                    h_24 = t;
                                                                    t = SSL_string_to_int(h_24);
                                                                    i_24 = t;
                                                                    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)), i_24);
                                                                    t = term_n_32;
                                                                    return(t);
                                                                  }
                                                                  ATerm t_19 (ATerm t)
                                                                  {
                                                                    t = term_t_45;
                                                                    return(t);
                                                                  }
                                                                  t = ArgOption_3_0(p_19, s_19, t_19, t);
                                                                  ;
                                                                  LocalPopChoice(s_45);
                                                                }
                                                              else
                                                                {
                                                                  t = r_45;
                                                                  {
                                                                    ATerm u_45 = t;
                                                                    int v_45 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        ATerm u_19 (ATerm t)
                                                                        {
                                                                          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-O", 0, ATtrue)))
                                                                            _fail(t);
                                                                          return(t);
                                                                        }
                                                                        ATerm v_19 (ATerm t)
                                                                        {
                                                                          ATerm j_24 = NULL,k_24 = NULL;
                                                                          j_24 = t;
                                                                          t = SSL_string_to_int(j_24);
                                                                          k_24 = t;
                                                                          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-O", 0, ATtrue)), k_24);
                                                                          t = term_n_32;
                                                                          return(t);
                                                                        }
                                                                        ATerm a_20 (ATerm t)
                                                                        {
                                                                          t = term_w_45;
                                                                          return(t);
                                                                        }
                                                                        t = ArgOption_3_0(u_19, v_19, a_20, t);
                                                                        ;
                                                                        LocalPopChoice(v_45);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = u_45;
                                                                        {
                                                                          ATerm x_45 = t;
                                                                          int y_45 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              ATerm b_20 (ATerm t)
                                                                              {
                                                                                if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--fusion", 0, ATtrue)))
                                                                                  _fail(t);
                                                                                return(t);
                                                                              }
                                                                              ATerm f_20 (ATerm t)
                                                                              {
                                                                                t = term_z_45;
                                                                                t = toggle_config_0_0(t);
                                                                                t = term_n_32;
                                                                                return(t);
                                                                              }
                                                                              ATerm g_20 (ATerm t)
                                                                              {
                                                                                t = term_a_46;
                                                                                return(t);
                                                                              }
                                                                              t = Option_3_0(b_20, f_20, g_20, t);
                                                                              ;
                                                                              LocalPopChoice(y_45);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = x_45;
                                                                              {
                                                                                ATerm b_46 = t;
                                                                                int c_46 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    ATerm h_20 (ATerm t)
                                                                                    {
                                                                                      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--trace-all", 0, ATtrue)))
                                                                                        _fail(t);
                                                                                      return(t);
                                                                                    }
                                                                                    ATerm i_20 (ATerm t)
                                                                                    {
                                                                                      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--trace-all", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                                                                                      t = term_n_32;
                                                                                      return(t);
                                                                                    }
                                                                                    ATerm j_20 (ATerm t)
                                                                                    {
                                                                                      t = term_d_46;
                                                                                      return(t);
                                                                                    }
                                                                                    t = Option_3_0(h_20, i_20, j_20, t);
                                                                                    ;
                                                                                    LocalPopChoice(c_46);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = b_46;
                                                                                    {
                                                                                      ATerm e_46 = t;
                                                                                      int f_46 = stack_ptr;
                                                                                      if((PushChoice() == 0))
                                                                                        {
                                                                                          ATerm k_20 (ATerm t)
                                                                                          {
                                                                                            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-t", 0, ATtrue)))
                                                                                              _fail(t);
                                                                                            return(t);
                                                                                          }
                                                                                          ATerm m_20 (ATerm t)
                                                                                          {
                                                                                            ATerm l_24 = NULL;
                                                                                            l_24 = t;
                                                                                            t = (ATerm) ATmakeAppl(sym__2, term_g_46, (ATerm) ATinsert(ATempty, l_24));
                                                                                            t = extend_config_0_0(t);
                                                                                            t = term_n_32;
                                                                                            return(t);
                                                                                          }
                                                                                          ATerm p_20 (ATerm t)
                                                                                          {
                                                                                            t = term_h_46;
                                                                                            return(t);
                                                                                          }
                                                                                          t = ArgOption_3_0(k_20, m_20, p_20, t);
                                                                                          ;
                                                                                          LocalPopChoice(f_46);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = e_46;
                                                                                          {
                                                                                            ATerm i_46 = t;
                                                                                            int j_46 = stack_ptr;
                                                                                            if((PushChoice() == 0))
                                                                                              {
                                                                                                ATerm q_20 (ATerm t)
                                                                                                {
                                                                                                  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
                                                                                                    _fail(t);
                                                                                                  return(t);
                                                                                                }
                                                                                                ATerm x_20 (ATerm t)
                                                                                                {
                                                                                                  ATerm m_24 = NULL,n_24 = NULL;
                                                                                                  m_24 = t;
                                                                                                  t = SSL_string_to_int(m_24);
                                                                                                  n_24 = t;
                                                                                                  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), n_24);
                                                                                                  t = term_n_32;
                                                                                                  return(t);
                                                                                                }
                                                                                                ATerm y_20 (ATerm t)
                                                                                                {
                                                                                                  t = term_k_46;
                                                                                                  return(t);
                                                                                                }
                                                                                                t = ArgOption_3_0(q_20, x_20, y_20, t);
                                                                                                ;
                                                                                                LocalPopChoice(j_46);
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                t = i_46;
                                                                                                {
                                                                                                  ATerm l_46 = t;
                                                                                                  int m_46 = stack_ptr;
                                                                                                  if((PushChoice() == 0))
                                                                                                    {
                                                                                                      ATerm z_20 (ATerm t)
                                                                                                      {
                                                                                                        ATerm o_24 = NULL;
                                                                                                        o_24 = t;
                                                                                                        if(match_string(t, "-S"))
                                                                                                          {
                                                                                                            t = o_24;
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
                                                                                                              _fail(t);
                                                                                                            t = o_24;
                                                                                                          }
                                                                                                        return(t);
                                                                                                      }
                                                                                                      ATerm a_21 (ATerm t)
                                                                                                      {
                                                                                                        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), (ATerm) ATmakeInt(0));
                                                                                                        t = term_n_32;
                                                                                                        return(t);
                                                                                                      }
                                                                                                      ATerm b_21 (ATerm t)
                                                                                                      {
                                                                                                        t = term_n_46;
                                                                                                        return(t);
                                                                                                      }
                                                                                                      t = Option_3_0(z_20, a_21, b_21, t);
                                                                                                      ;
                                                                                                      LocalPopChoice(m_46);
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      t = l_46;
                                                                                                      {
                                                                                                        ATerm o_46 = t;
                                                                                                        int p_46 = stack_ptr;
                                                                                                        if((PushChoice() == 0))
                                                                                                          {
                                                                                                            ATerm c_21 (ATerm t)
                                                                                                            {
                                                                                                              ATerm p_24 = NULL;
                                                                                                              p_24 = t;
                                                                                                              if(match_string(t, "-h"))
                                                                                                                {
                                                                                                                  t = p_24;
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--help", 0, ATtrue)))
                                                                                                                    _fail(t);
                                                                                                                  t = p_24;
                                                                                                                }
                                                                                                              return(t);
                                                                                                            }
                                                                                                            ATerm d_21 (ATerm t)
                                                                                                            {
                                                                                                              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                                                                                                              t = term_n_32;
                                                                                                              return(t);
                                                                                                            }
                                                                                                            ATerm e_21 (ATerm t)
                                                                                                            {
                                                                                                              t = term_q_46;
                                                                                                              return(t);
                                                                                                            }
                                                                                                            t = Option_3_0(c_21, d_21, e_21, t);
                                                                                                            ;
                                                                                                            LocalPopChoice(p_46);
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            t = o_46;
                                                                                                            {
                                                                                                              ATerm r_46 = t;
                                                                                                              int s_46 = stack_ptr;
                                                                                                              if((PushChoice() == 0))
                                                                                                                {
                                                                                                                  ATerm f_21 (ATerm t)
                                                                                                                  {
                                                                                                                    if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--man", 0, ATtrue)))
                                                                                                                      _fail(t);
                                                                                                                    return(t);
                                                                                                                  }
                                                                                                                  ATerm g_21 (ATerm t)
                                                                                                                  {
                                                                                                                    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--man", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                                                                                                                    t = term_n_32;
                                                                                                                    return(t);
                                                                                                                  }
                                                                                                                  ATerm h_21 (ATerm t)
                                                                                                                  {
                                                                                                                    t = term_t_46;
                                                                                                                    return(t);
                                                                                                                  }
                                                                                                                  t = Option_3_0(f_21, g_21, h_21, t);
                                                                                                                  ;
                                                                                                                  LocalPopChoice(s_46);
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  t = r_46;
                                                                                                                  {
                                                                                                                    ATerm u_46 = t;
                                                                                                                    int v_46 = stack_ptr;
                                                                                                                    if((PushChoice() == 0))
                                                                                                                      {
                                                                                                                        ATerm i_21 (ATerm t)
                                                                                                                        {
                                                                                                                          ATerm q_24 = NULL;
                                                                                                                          q_24 = t;
                                                                                                                          if(match_string(t, "-v"))
                                                                                                                            {
                                                                                                                              t = q_24;
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
                                                                                                                                _fail(t);
                                                                                                                              t = q_24;
                                                                                                                            }
                                                                                                                          return(t);
                                                                                                                        }
                                                                                                                        ATerm j_21 (ATerm t)
                                                                                                                        {
                                                                                                                          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                                                                                                                          t = term_n_32;
                                                                                                                          return(t);
                                                                                                                        }
                                                                                                                        ATerm k_21 (ATerm t)
                                                                                                                        {
                                                                                                                          t = term_w_46;
                                                                                                                          return(t);
                                                                                                                        }
                                                                                                                        t = Option_3_0(i_21, j_21, k_21, t);
                                                                                                                        ;
                                                                                                                        LocalPopChoice(v_46);
                                                                                                                      }
                                                                                                                    else
                                                                                                                      {
                                                                                                                        t = u_46;
                                                                                                                        {
                                                                                                                          ATerm l_21 (ATerm t)
                                                                                                                          {
                                                                                                                            ATerm r_24 = NULL;
                                                                                                                            r_24 = t;
                                                                                                                            if(match_string(t, "--warning"))
                                                                                                                              {
                                                                                                                                t = r_24;
                                                                                                                              }
                                                                                                                            else
                                                                                                                              {
                                                                                                                                if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-W", 0, ATtrue)))
                                                                                                                                  _fail(t);
                                                                                                                                t = r_24;
                                                                                                                              }
                                                                                                                            return(t);
                                                                                                                          }
                                                                                                                          ATerm n_21 (ATerm t)
                                                                                                                          {
                                                                                                                            ATerm s_24 = NULL;
                                                                                                                            s_24 = t;
                                                                                                                            {
                                                                                                                              ATerm x_46 = t;
                                                                                                                              int y_46 = stack_ptr;
                                                                                                                              if((PushChoice() == 0))
                                                                                                                                {
                                                                                                                                  t = term_v_31;
                                                                                                                                  t = get_config_0_0(t);
                                                                                                                                  {
                                                                                                                                    ATerm p_21 (ATerm t)
                                                                                                                                    {
                                                                                                                                      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("all", 0, ATtrue)))
                                                                                                                                        _fail(t);
                                                                                                                                      return(t);
                                                                                                                                    }
                                                                                                                                    ATerm s_21 (ATerm t)
                                                                                                                                    {
                                                                                                                                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                        _fail(t);
                                                                                                                                      return(t);
                                                                                                                                    }
                                                                                                                                    t = Cons_2_0(p_21, s_21, t);
                                                                                                                                    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--warning", 0, ATtrue)), (ATerm) ATinsert(ATempty, s_24));
                                                                                                                                    t = (ATerm) ATmakeAppl(sym__3, term_m_39, term_v_31, (ATerm) ATinsert(ATempty, s_24));
                                                                                                                                  }
                                                                                                                                  ;
                                                                                                                                  LocalPopChoice(y_46);
                                                                                                                                }
                                                                                                                              else
                                                                                                                                {
                                                                                                                                  t = x_46;
                                                                                                                                  t = (ATerm) ATmakeAppl(sym__2, term_v_31, (ATerm) ATinsert(ATempty, s_24));
                                                                                                                                  t = extend_config_0_0(t);
                                                                                                                                }
                                                                                                                              t = term_n_32;
                                                                                                                            }
                                                                                                                            return(t);
                                                                                                                          }
                                                                                                                          ATerm o_21 (ATerm t)
                                                                                                                          {
                                                                                                                            t = term_z_46;
                                                                                                                            return(t);
                                                                                                                          }
                                                                                                                          t = ArgOption_3_0(l_21, n_21, o_21, t);
                                                                                                                        }
                                                                                                                      }
                                                                                                                  }
                                                                                                                }
                                                                                                            }
                                                                                                          }
                                                                                                      }
                                                                                                    }
                                                                                                }
                                                                                              }
                                                                                          }
                                                                                        }
                                                                                    }
                                                                                  }
                                                                              }
                                                                            }
                                                                        }
                                                                      }
                                                                  }
                                                                }
                                                            }
                                                          }
                                                      }
                                                    }
                                                }
                                              }
                                          }
                                        }
                                    }
                                  }
                              }
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
ATerm long_description_1_0 (ATerm i_0 (ATerm), ATerm t)
{
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_n_47), term_j_47), term_m_47), term_l_47), term_k_47), term_j_47), term_i_47), term_h_47), term_g_47), term_f_47), term_e_47), term_d_47), term_c_47), term_b_47), term_a_47);
  return(t);
}
ATerm map_1_0 (ATerm v_86 (ATerm), ATerm t)
{
  ATerm v_24 (ATerm t)
  {
    ATerm o_47 = t;
    int p_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(p_47);
      }
    else
      {
        t = o_47;
        t = Cons_2_0(v_86, v_24, t);
      }
    return(t);
  }
  t = v_24(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t)
{
  ATerm x_24 = NULL,y_24 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_24 = ATgetFirst((ATermList) t);
      y_24 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm c_25 = NULL,d_25 = NULL;
        t = y_24;
        t = h_0(t);
        c_25 = t;
        t = x_24;
        t = g_0(t);
        d_25 = t;
        t = y_24;
        {
          ATerm x_21 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(c_25), d_25);
            return(t);
          }
          t = reverse_acc_2_0(g_0, x_21, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_n_32;
      t = h_0(t);
    }
  return(t);
}
ATerm reverse_0_0 (ATerm t)
{
  ATerm z_21 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2_0(_id, z_21, t);
  return(t);
}
ATerm short_description_1_0 (ATerm f_0 (ATerm), ATerm t)
{
  ATerm e_25 = NULL;
  t = term_n_32;
  t = f_0(t);
  e_25 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_v_47), e_25), term_u_47), term_j_47), term_t_47), term_j_47), term_s_47), term_r_47), term_j_47), term_q_47);
  return(t);
}
ATerm Program_1_0 (ATerm a_71 (ATerm), ATerm t)
{
  ATerm f_25 = NULL,g_25 = NULL,h_25 = NULL,i_25 = NULL;
  i_25 = t;
  if(match_cons(t, sym_Program_1))
    {
      g_25 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_25);
  f_25 = t;
  t = g_25;
  t = a_71(t);
  h_25 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, h_25), f_25);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm l_25 = NULL;
  ATerm w_47 = t;
  int x_47 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_y_47;
      t = get_config_0_0(t);
      l_25 = t;
      ;
      LocalPopChoice(x_47);
    }
  else
    {
      t = w_47;
      {
        ATerm a_22 (ATerm t)
        {
          ATerm n_22 (ATerm t)
          {
            if(((l_25 != NULL) && (l_25 != t)))
              _fail(t);
            else
              l_25 = t;
            return(t);
          }
          t = Program_1_0(n_22, t);
          return(t);
        }
        t = option_defined_1_0(a_22, t);
      }
    }
  {
    ATerm o_22 (ATerm t)
    {
      ATerm u_22 (ATerm t)
      {
        t = not_null(l_25);
        return(t);
      }
      t = short_description_1_0(u_22, t);
      t = echo_0_0(t);
      return(t);
    }
    t = try_1_0(o_22, t);
    t = term_z_47;
    t = echo_0_0(t);
    t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)));
    t = reverse_0_0(t);
    {
      ATerm z_22 (ATerm t)
      {
        ATerm m_25 = NULL;
        m_25 = t;
        t = (ATerm) ATinsert(ATinsert(ATempty, m_25), term_a_48);
        t = echo_0_0(t);
        return(t);
      }
      t = map_1_0(z_22, t);
      {
        ATerm a_23 (ATerm t)
        {
          ATerm n_25 = NULL;
          ATerm g_23 (ATerm t)
          {
            t = not_null(l_25);
            return(t);
          }
          t = long_description_1_0(g_23, t);
          n_25 = t;
          t = (ATerm) ATinsert(CheckATermList(n_25), term_j_47);
          t = echo_0_0(t);
          return(t);
        }
        t = try_1_0(a_23, t);
      }
    }
  }
  return(t);
}
ATerm system_usage_0_0 (ATerm t)
{
  t = default_system_usage_0_0(t);
  return(t);
}
ATerm Undefined_1_0 (ATerm b_71 (ATerm), ATerm t)
{
  ATerm o_25 = NULL,p_25 = NULL,q_25 = NULL,r_25 = NULL;
  r_25 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      p_25 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_25);
  o_25 = t;
  t = p_25;
  t = b_71(t);
  q_25 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, q_25), o_25);
  return(t);
}
ATerm fetch_1_0 (ATerm g_87 (ATerm), ATerm t)
{
  ATerm u_25 (ATerm t)
  {
    ATerm b_48 = t;
    int c_48 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(g_87, _id, t);
        ;
        LocalPopChoice(c_48);
      }
    else
      {
        t = b_48;
        t = Cons_2_0(_id, u_25, t);
      }
    return(t);
  }
  t = u_25(t);
  return(t);
}
ATerm option_defined_1_0 (ATerm l_104 (ATerm), ATerm t)
{
  t = fetch_1_0(l_104, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm w_25 = NULL,x_25 = NULL;
  w_25 = t;
  {
    ATerm d_48 = t;
    int e_48 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = w_25;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm f_48 = ATgetFirst((ATermList) t);
                ATerm g_48 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = w_25;
          }
        ;
        LocalPopChoice(e_48);
      }
    else
      {
        t = d_48;
        t = (ATerm) ATinsert(ATempty, w_25);
      }
    x_25 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stdout_0), x_25);
    t = w_25;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_y_47;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm system_about_0_0 (ATerm t)
{
  t = default_system_about_0_0(t);
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm h_48 = t;
  int i_48 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_23 (ATerm t)
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
          _fail(t);
        return(t);
      }
      ATerm i_23 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
        t = term_k_48;
        return(t);
      }
      ATerm q_23 (ATerm t)
      {
        t = term_l_48;
        return(t);
      }
      t = Option_3_0(h_23, i_23, q_23, t);
      ;
      LocalPopChoice(i_48);
    }
  else
    {
      t = h_48;
      {
        ATerm r_23 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm s_23 (ATerm t)
        {
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = term_m_48;
          return(t);
        }
        ATerm t_23 (ATerm t)
        {
          t = term_n_48;
          return(t);
        }
        t = Option_3_0(r_23, s_23, t_23, t);
      }
    }
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm h_26 = NULL,j_26 = NULL,k_26 = NULL,l_26 = NULL;
  if(match_cons(t, sym__3))
    {
      h_26 = ATgetArgument(t, 0);
      j_26 = ATgetArgument(t, 1);
      k_26 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, h_26, j_26);
  {
    ATerm o_48 = t;
    int p_48 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm q_48 = ATgetArgument(t, 0);
            ATerm r_48 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(h_26, j_26);
        ;
        LocalPopChoice(p_48);
      }
    else
      {
        t = o_48;
        t = (ATerm) ATempty;
      }
    l_26 = t;
    t = SSL_table_put(h_26, j_26, (ATerm) ATinsert(CheckATermList(l_26), k_26));
    t = (ATerm) ATmakeAppl(sym__3, h_26, j_26, k_26);
  }
  return(t);
}
ATerm register_usage_1_0 (ATerm q_105 (ATerm), ATerm t)
{
  ATerm q_26 = NULL;
  t = term_n_32;
  t = q_105(t);
  q_26 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_s_48, term_t_48, q_26);
  t = table_push_0_0(t);
  _fail(t);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm s_26 = NULL,t_26 = NULL,u_26 = NULL;
  s_26 = t;
  if(match_string(t, "register-usage-info"))
    {
      t = s_26;
      t = register_usage_1_0(d_0, t);
    }
  else
    {
      ATerm x_26 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          t_26 = ATgetFirst((ATermList) t);
          u_26 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = t_26;
      t = a_0(t);
      t = term_n_32;
      t = b_0(t);
      x_26 = t;
      t = (ATerm) ATinsert(CheckATermList(u_26), x_26);
    }
  return(t);
}
ATerm system_usage_switch_0_0 (ATerm t)
{
  ATerm u_23 (ATerm t)
  {
    ATerm z_26 = NULL;
    z_26 = t;
    if(match_string(t, "--help"))
      {
        t = z_26;
      }
    else
      {
        if(match_string(t, "-h"))
          {
            t = z_26;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
              _fail(t);
            t = z_26;
          }
      }
    return(t);
  }
  ATerm v_23 (ATerm t)
  {
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
    t = term_u_48;
    return(t);
  }
  ATerm w_23 (ATerm t)
  {
    t = term_v_48;
    return(t);
  }
  t = Option_3_0(u_23, v_23, w_23, t);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm o_105 (ATerm), ATerm t)
{
  ATerm b_27 = NULL;
  b_27 = t;
  {
    ATerm t_24 (ATerm t)
    {
      t = term_w_48;
      t = o_105(t);
      return(t);
    }
    t = try_1_0(t_24, t);
    t = b_27;
    {
      ATerm u_24 (ATerm t)
      {
        ATerm c_27 = NULL;
        c_27 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), c_27);
        t = (ATerm) ATmakeAppl(sym_Program_1, c_27);
        return(t);
      }
      ATerm w_24 (ATerm t)
      {
        ATerm x_48 = t;
        int y_48 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_48 = t;
            int a_49 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(a_49);
              }
            else
              {
                t = z_48;
                t = o_105(t);
                t = Cons_2_0(_id, w_24, t);
              }
            ;
            LocalPopChoice(y_48);
          }
        else
          {
            t = x_48;
            {
              ATerm e_27 = NULL,f_27 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  e_27 = ATgetFirst((ATermList) t);
                  f_27 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(f_27), (ATerm) ATmakeAppl(sym_Undefined_1, e_27));
            }
          }
        return(t);
      }
      t = Cons_2_0(u_24, w_24, t);
    }
  }
  return(t);
}
ATerm parse_options_1_0 (ATerm n_105 (ATerm), ATerm t)
{
  ATerm l_27 = NULL,m_27 = NULL,n_27 = NULL;
  l_27 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATempty);
  t = l_27;
  {
    ATerm z_24 (ATerm t)
    {
      ATerm b_49 = t;
      int c_49 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = n_105(t);
          ;
          LocalPopChoice(c_49);
        }
      else
        {
          t = b_49;
          {
            ATerm d_49 = t;
            int e_49 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = system_usage_switch_0_0(t);
                ;
                LocalPopChoice(e_49);
              }
            else
              {
                t = d_49;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(z_24, t);
    {
      ATerm a_25 (ATerm t)
      {
        ATerm f_49 = t;
        int g_49 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_27 = NULL;
            w_27 = t;
            {
              ATerm h_49 = t;
              int i_49 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = w_27;
                  {
                    ATerm j_49 = t;
                    int k_49 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = term_l_49;
                        t = get_config_0_0(t);
                        ;
                        LocalPopChoice(k_49);
                      }
                    else
                      {
                        t = j_49;
                        {
                          ATerm b_25 (ATerm t)
                          {
                            if(!(match_cons(t, sym_Help_0)))
                              _fail(t);
                            return(t);
                          }
                          t = option_defined_1_0(b_25, t);
                        }
                      }
                    t = w_27;
                    t = system_usage_0_0(t);
                    t = SSL_exit((ATerm) ATmakeInt(0));
                  }
                  ;
                  LocalPopChoice(i_49);
                }
              else
                {
                  t = h_49;
                  t = term_j_48;
                  t = get_config_0_0(t);
                  t = w_27;
                  t = system_about_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
            }
            ;
            LocalPopChoice(g_49);
          }
        else
          {
            t = f_49;
            {
              ATerm j_25 (ATerm t)
              {
                ATerm k_25 (ATerm t)
                {
                  if(((m_27 != NULL) && (m_27 != t)))
                    _fail(t);
                  else
                    m_27 = t;
                  return(t);
                }
                t = Undefined_1_0(k_25, t);
                return(t);
              }
              t = option_defined_1_0(j_25, t);
              t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(m_27)), (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue))));
              t = (ATerm) ATmakeAppl(sym__2, term_s_27, (ATerm) ATinsert(ATinsert(ATempty, not_null(m_27)), term_m_49));
              t = system_usage_0_0(t);
              t = SSL_exit((ATerm) ATmakeInt(1));
            }
          }
        return(t);
      }
      t = try_1_0(a_25, t);
      n_27 = t;
      t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)));
      t = n_27;
    }
  }
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm n_49 = t;
  int o_49 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(o_49);
    }
  else
    {
      t = n_49;
      {
        ATerm k_28 = NULL,l_28 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            k_28 = ATgetFirst((ATermList) t);
            l_28 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = k_28;
        {
          ATerm s_25 (ATerm t)
          {
            t = l_28;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(s_25, t);
        }
      }
    }
  return(t);
}
ATerm conc_more_lists_0_0 (ATerm t)
{
  ATerm p_28 = NULL,q_28 = NULL;
  p_28 = t;
  t = SSL_explode_term(p_28);
  if(match_cons(t, sym__2))
    {
      ATerm p_49 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) p_49) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      q_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_28;
  t = concat_0_0(t);
  return(t);
}
ATerm at_end_1_0 (ATerm m_87 (ATerm), ATerm t)
{
  ATerm r_28 (ATerm t)
  {
    ATerm q_49 = t;
    int r_49 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, r_28, t);
        ;
        LocalPopChoice(r_49);
      }
    else
      {
        t = q_49;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = m_87(t);
      }
    return(t);
  }
  t = r_28(t);
  return(t);
}
ATerm conc_two_lists_0_0 (ATerm t)
{
  ATerm s_28 = NULL,t_28 = NULL;
  if(match_cons(t, sym__2))
    {
      t_28 = ATgetArgument(t, 0);
      s_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_28;
  {
    ATerm t_25 (ATerm t)
    {
      t = s_28;
      return(t);
    }
    t = at_end_1_0(t_25, t);
  }
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm s_49 = t;
  int t_49 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0_0(t);
      ;
      LocalPopChoice(t_49);
    }
  else
    {
      t = s_49;
      t = conc_more_lists_0_0(t);
    }
  return(t);
}
ATerm _2_0 (ATerm b_64 (ATerm), ATerm c_64 (ATerm), ATerm t)
{
  ATerm u_28 = NULL,v_28 = NULL,w_28 = NULL,x_28 = NULL,y_28 = NULL,z_28 = NULL;
  z_28 = t;
  if(match_cons(t, sym__2))
    {
      v_28 = ATgetArgument(t, 0);
      w_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_28);
  u_28 = t;
  t = v_28;
  t = b_64(t);
  x_28 = t;
  t = w_28;
  t = c_64(t);
  y_28 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, x_28, y_28), u_28);
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  ATerm c_29 = NULL;
  ATerm v_25 (ATerm t)
  {
    ATerm d_29 = NULL;
    d_29 = t;
    t = SSL_explode_string(d_29);
    return(t);
  }
  ATerm y_25 (ATerm t)
  {
    ATerm e_29 = NULL;
    e_29 = t;
    t = SSL_explode_string(e_29);
    return(t);
  }
  t = _2_0(v_25, y_25, t);
  t = conc_0_0(t);
  c_29 = t;
  t = SSL_implode_string(c_29);
  return(t);
}
ATerm Cons_2_0 (ATerm k_65 (ATerm), ATerm l_65 (ATerm), ATerm t)
{
  ATerm f_29 = NULL,g_29 = NULL,h_29 = NULL,i_29 = NULL,j_29 = NULL,k_29 = NULL;
  k_29 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_29 = ATgetFirst((ATermList) t);
      h_29 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_29);
  f_29 = t;
  t = g_29;
  t = k_65(t);
  i_29 = t;
  t = h_29;
  t = l_65(t);
  j_29 = t;
  t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(j_29), i_29), f_29);
  return(t);
}
ATerm get_path_0_0 (ATerm t)
{
  ATerm n_29 = NULL,o_29 = NULL;
  n_29 = t;
  t = SSL_explode_string(n_29);
  {
    ATerm u_49 = t;
    int v_49 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_29 (ATerm t)
        {
          ATerm w_49 = t;
          int x_49 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Cons_2_0(_id, u_29, t);
              ;
              LocalPopChoice(x_49);
            }
          else
            {
              t = w_49;
              {
                ATerm z_25 (ATerm t)
                {
                  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 47)))
                    _fail(t);
                  return(t);
                }
                ATerm a_26 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = Cons_2_0(z_25, a_26, t);
              }
            }
          return(t);
        }
        t = u_29(t);
        ;
        LocalPopChoice(v_49);
      }
    else
      {
        t = u_49;
        t = (ATerm) ATempty;
      }
    o_29 = t;
    t = SSL_implode_string(o_29);
  }
  return(t);
}
ATerm xtc_find_path_0_0 (ATerm t)
{
  t = xtc_find_0_0(t);
  t = get_path_0_0(t);
  return(t);
}
ATerm init_sc_config_0_0 (ATerm t)
{
  ATerm v_29 = NULL,x_29 = NULL,y_29 = NULL,z_29 = NULL,c_30 = NULL,d_30 = NULL,e_30 = NULL,f_30 = NULL,g_30 = NULL,h_30 = NULL,l_30 = NULL,m_30 = NULL,n_30 = NULL,o_30 = NULL;
  v_29 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("VERSION", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("0.9.3", 0, ATtrue)));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), (ATerm) ATmakeInt(1));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)), (ATerm) ATmakeInt(0));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-O", 0, ATtrue)), (ATerm) ATmakeInt(5));
  t = term_y_49;
  t = xtc_find_path_0_0(t);
  x_29 = t;
  t = term_z_49;
  t = xtc_find_path_0_0(t);
  y_29 = t;
  t = term_a_50;
  t = xtc_find_path_0_0(t);
  z_29 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue)), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, z_29), (ATerm) ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue))), y_29), (ATerm) ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue))), x_29), (ATerm) ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue))));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--C-include", 0, ATtrue)), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("<srts/stratego-lib.h>", 0, ATtrue))), (ATerm) ATmakeAppl(ATmakeSymbol("<srts/stratego.h>", 0, ATtrue))));
  t = term_b_50;
  t = xtc_find_path_0_0(t);
  c_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_30, term_c_50);
  t = conc_strings_0_0(t);
  d_30 = t;
  t = term_b_50;
  t = xtc_find_path_0_0(t);
  e_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_30, term_c_50);
  t = conc_strings_0_0(t);
  f_30 = t;
  t = term_d_50;
  t = xtc_find_path_0_0(t);
  g_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_30, term_c_50);
  t = conc_strings_0_0(t);
  h_30 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-CI", 0, ATtrue)), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, h_30), (ATerm) ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue))), f_30), (ATerm) ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue))), d_30), (ATerm) ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue))));
  t = term_b_50;
  t = xtc_find_path_0_0(t);
  l_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_30, term_e_50);
  t = conc_strings_0_0(t);
  m_30 = t;
  t = term_d_50;
  t = xtc_find_path_0_0(t);
  n_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_30, term_e_50);
  t = conc_strings_0_0(t);
  o_30 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-CL", 0, ATtrue)), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("-lm", 0, ATtrue))), (ATerm) ATmakeAppl(ATmakeSymbol("-lATerm-gcc", 0, ATtrue))), o_30), (ATerm) ATmakeAppl(ATmakeSymbol("-L", 0, ATtrue))), (ATerm) ATmakeAppl(ATmakeSymbol("-lstratego.opt", 0, ATtrue))), (ATerm) ATmakeAppl(ATmakeSymbol("-lstratego-lib.opt", 0, ATtrue))), m_30), (ATerm) ATmakeAppl(ATmakeSymbol("-L", 0, ATtrue))));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--warning", 0, ATtrue)), (ATerm) ATempty);
  t = v_29;
  return(t);
}
ATerm command_line_options_0_0 (ATerm t)
{
  t = init_sc_config_0_0(t);
  t = parse_options_1_0(sc_options_0_0, t);
  {
    ATerm b_26 (ATerm t)
    {
      ATerm p_30 = NULL;
      t = term_f_50;
      t = get_config_0_0(t);
      t = term_g_50;
      t = xtc_find_0_0(t);
      p_30 = t;
      t = SSL_copy(p_30, (ATerm) ATmakeAppl(sym_stdout_0));
      t = SSL_exit((ATerm) ATmakeInt(0));
      return(t);
    }
    t = try_1_0(b_26, t);
    {
      ATerm c_26 (ATerm t)
      {
        t = term_h_50;
        t = get_config_0_0(t);
        t = strc_version_0_0(t);
        t = SSL_exit((ATerm) ATmakeInt(0));
        return(t);
      }
      t = try_1_0(c_26, t);
      {
        ATerm i_50 = t;
        int j_50 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_30 = NULL;
            q_30 = t;
            t = term_c_39;
            t = get_config_0_0(t);
            t = q_30;
            ;
            LocalPopChoice(j_50);
          }
        else
          {
            t = i_50;
            t = (ATerm) ATinsert(ATempty, term_k_50);
            t = fatal_error_0_0(t);
          }
        t = strc_announce_0_0(t);
        {
          ATerm d_26 (ATerm t)
          {
            ATerm s_30 = NULL;
            s_30 = t;
            t = term_c_39;
            t = get_config_0_0(t);
            {
              ATerm e_26 (ATerm t)
              {
                t = term_l_50;
                return(t);
              }
              t = debug_1_0(e_26, t);
              t = s_30;
            }
            return(t);
          }
          t = if_verbose1_1_0(d_26, t);
        }
      }
    }
  }
  return(t);
}
ATerm strc_0_0 (ATerm t)
{
  ATerm m_50 = t;
  int n_50 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = command_line_options_0_0(t);
      {
        ATerm f_26 (ATerm t)
        {
          ATerm g_26 (ATerm t)
          {
            ATerm t_30 = NULL;
            t_30 = t;
            t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(CheckATermList(t_30), (ATerm) ATmakeAppl(ATmakeSymbol("-----\ncompilation succeeded:   ", 0, ATtrue))));
            t = (ATerm) ATmakeAppl(sym__2, term_s_27, (ATerm) ATinsert(CheckATermList(t_30), term_o_50));
            return(t);
          }
          t = if_verbose1_1_0(g_26, t);
          return(t);
        }
        t = profile_p__2_0(f_26, compile_0_0, t);
        {
          ATerm i_26 (ATerm t)
          {
            ATerm u_30 = NULL;
            t = run_time_0_0(t);
            u_30 = t;
            t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue))), u_30), (ATerm) ATmakeAppl(ATmakeSymbol("compilation succeeded (", 0, ATtrue))));
            t = (ATerm) ATmakeAppl(sym__2, term_s_27, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_q_50), u_30), term_p_50));
            return(t);
          }
          t = if_verbose2_1_0(i_26, t);
          t = SSL_exit((ATerm) ATmakeInt(0));
        }
      }
      ;
      LocalPopChoice(n_50);
    }
  else
    {
      t = m_50;
      {
        ATerm v_30 = NULL;
        t = run_time_0_0(t);
        v_30 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue))), v_30), (ATerm) ATmakeAppl(ATmakeSymbol("compilation failed (", 0, ATtrue))));
        t = SSL_exit((ATerm) ATmakeInt(1));
      }
    }
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = strc_0_0(t);
  return(t);
}
