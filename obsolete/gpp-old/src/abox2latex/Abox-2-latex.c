#include <srts/stratego.h>
#include <ssl/stratego-lib.h>
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
Symbol sym_WaitStatus_3;
Symbol sym_Pipe_2;
Symbol sym_Program_1;
Symbol sym_Undefined_1;
Symbol sym_Var_1;
Symbol sym_Path_1;
Symbol sym_Prefix_2;
Symbol sym_Silent_0;
Symbol sym_Verbose_1;
Symbol sym_Version_0;
Symbol sym_Input_1;
Symbol sym_Output_1;
Symbol sym_Binary_0;
Symbol sym_Statistics_0;
Symbol sym_Help_0;
Symbol sym_Runtime_1;
Symbol sym_DeclVersion_1;
Symbol sym_stdin_0;
Symbol sym_stdout_0;
Symbol sym_stderr_0;
Symbol sym_Scopes_0;
Symbol sym_Keys_0;
Symbol sym_Keys_1;
Symbol sym_Keys_2;
Symbol sym_Keys_3;
Symbol sym_Keys_4;
Symbol sym_Keys_5;
Symbol sym_Keys_6;
Symbol sym_Keys_7;
Symbol sym_Keys_8;
Symbol sym_Keys_9;
Symbol sym_Keys_10;
Symbol sym_Defined_0;
Symbol sym_Defined_1;
Symbol sym_Defined_2;
Symbol sym_Defined_3;
Symbol sym_Defined_4;
Symbol sym_Defined_5;
Symbol sym_Defined_6;
Symbol sym_Defined_7;
Symbol sym_Defined_8;
Symbol sym_Defined_9;
Symbol sym_Defined_10;
Symbol sym_Undefined_0;
Symbol sym_Infinite_0;
Symbol sym_Anno_2;
Symbol sym_None_0;
Symbol sym_Some_1;
Symbol sym_CUT_0;
Symbol sym_BOXENV_2;
Symbol sym_HBOX_2;
Symbol sym_VBOX_3;
Symbol sym_HVBOX_4;
Symbol sym_ABOX_2;
Symbol sym_ALTBOX_2;
Symbol sym_CBOX_1;
Symbol sym_LBOX_2;
Symbol sym_LBLBOX_2;
Symbol sym_REFBOX_2;
Symbol sym_C_0;
Symbol sym_R_0;
Symbol sym_L_0;
Symbol sym_EOR_0;
Symbol sym_CSEP_0;
Symbol sym_BOXFONT_2;
Symbol sym_BOXCOLOR_1;
Symbol sym_SOpt_2;
Symbol sym_SOptB_2;
Symbol sym_VS_0;
Symbol sym_HS_0;
Symbol sym_IS_0;
Symbol sym_H_2;
Symbol sym_V_2;
Symbol sym_HV_2;
Symbol sym_ALT_2;
Symbol sym_A_3;
Symbol sym_R_2;
Symbol sym_AL_1;
Symbol sym_AC_1;
Symbol sym_AR_1;
Symbol sym_AOPTIONS_1;
Symbol sym_FNAT_2;
Symbol sym_FFID_2;
Symbol sym_F_1;
Symbol sym_FBOX_2;
Symbol sym_FN_0;
Symbol sym_FM_0;
Symbol sym_SE_0;
Symbol sym_SH_0;
Symbol sym_SZ_0;
Symbol sym_CL_0;
Symbol sym_KW_0;
Symbol sym_VAR_0;
Symbol sym_NUM_0;
Symbol sym_MATH_0;
Symbol sym_LBL_2;
Symbol sym_REF_2;
Symbol sym_C_2;
Symbol sym_L_2;
Symbol sym_LNAT_2;
Symbol sym_S_1;
Symbol sym_Arg_1;
Symbol sym_Arg2_2;
Symbol sym_PP_Table_1;
Symbol sym_selector_2;
Symbol sym_Path1_1;
Symbol sym_Path_2;
Symbol sym_PP_Entry_2;
Symbol sym_LatexTable_1;
Symbol sym_Width_1;
Symbol sym_Verbose_0;
Symbol sym_Nil_0;
Symbol sym_Cons_2;
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
  sym_WaitStatus_3 = ATmakeSymbol("WaitStatus", 3, ATfalse);
  ATprotectSymbol(sym_WaitStatus_3);
  sym_Pipe_2 = ATmakeSymbol("Pipe", 2, ATfalse);
  ATprotectSymbol(sym_Pipe_2);
  sym_Program_1 = ATmakeSymbol("Program", 1, ATfalse);
  ATprotectSymbol(sym_Program_1);
  sym_Undefined_1 = ATmakeSymbol("Undefined", 1, ATfalse);
  ATprotectSymbol(sym_Undefined_1);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
  sym_Prefix_2 = ATmakeSymbol("Prefix", 2, ATfalse);
  ATprotectSymbol(sym_Prefix_2);
  sym_Silent_0 = ATmakeSymbol("Silent", 0, ATfalse);
  ATprotectSymbol(sym_Silent_0);
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
  sym_Runtime_1 = ATmakeSymbol("Runtime", 1, ATfalse);
  ATprotectSymbol(sym_Runtime_1);
  sym_DeclVersion_1 = ATmakeSymbol("DeclVersion", 1, ATfalse);
  ATprotectSymbol(sym_DeclVersion_1);
  sym_stdin_0 = ATmakeSymbol("stdin", 0, ATfalse);
  ATprotectSymbol(sym_stdin_0);
  sym_stdout_0 = ATmakeSymbol("stdout", 0, ATfalse);
  ATprotectSymbol(sym_stdout_0);
  sym_stderr_0 = ATmakeSymbol("stderr", 0, ATfalse);
  ATprotectSymbol(sym_stderr_0);
  sym_Scopes_0 = ATmakeSymbol("Scopes", 0, ATfalse);
  ATprotectSymbol(sym_Scopes_0);
  sym_Keys_0 = ATmakeSymbol("Keys", 0, ATfalse);
  ATprotectSymbol(sym_Keys_0);
  sym_Keys_1 = ATmakeSymbol("Keys", 1, ATfalse);
  ATprotectSymbol(sym_Keys_1);
  sym_Keys_2 = ATmakeSymbol("Keys", 2, ATfalse);
  ATprotectSymbol(sym_Keys_2);
  sym_Keys_3 = ATmakeSymbol("Keys", 3, ATfalse);
  ATprotectSymbol(sym_Keys_3);
  sym_Keys_4 = ATmakeSymbol("Keys", 4, ATfalse);
  ATprotectSymbol(sym_Keys_4);
  sym_Keys_5 = ATmakeSymbol("Keys", 5, ATfalse);
  ATprotectSymbol(sym_Keys_5);
  sym_Keys_6 = ATmakeSymbol("Keys", 6, ATfalse);
  ATprotectSymbol(sym_Keys_6);
  sym_Keys_7 = ATmakeSymbol("Keys", 7, ATfalse);
  ATprotectSymbol(sym_Keys_7);
  sym_Keys_8 = ATmakeSymbol("Keys", 8, ATfalse);
  ATprotectSymbol(sym_Keys_8);
  sym_Keys_9 = ATmakeSymbol("Keys", 9, ATfalse);
  ATprotectSymbol(sym_Keys_9);
  sym_Keys_10 = ATmakeSymbol("Keys", 10, ATfalse);
  ATprotectSymbol(sym_Keys_10);
  sym_Defined_0 = ATmakeSymbol("Defined", 0, ATfalse);
  ATprotectSymbol(sym_Defined_0);
  sym_Defined_1 = ATmakeSymbol("Defined", 1, ATfalse);
  ATprotectSymbol(sym_Defined_1);
  sym_Defined_2 = ATmakeSymbol("Defined", 2, ATfalse);
  ATprotectSymbol(sym_Defined_2);
  sym_Defined_3 = ATmakeSymbol("Defined", 3, ATfalse);
  ATprotectSymbol(sym_Defined_3);
  sym_Defined_4 = ATmakeSymbol("Defined", 4, ATfalse);
  ATprotectSymbol(sym_Defined_4);
  sym_Defined_5 = ATmakeSymbol("Defined", 5, ATfalse);
  ATprotectSymbol(sym_Defined_5);
  sym_Defined_6 = ATmakeSymbol("Defined", 6, ATfalse);
  ATprotectSymbol(sym_Defined_6);
  sym_Defined_7 = ATmakeSymbol("Defined", 7, ATfalse);
  ATprotectSymbol(sym_Defined_7);
  sym_Defined_8 = ATmakeSymbol("Defined", 8, ATfalse);
  ATprotectSymbol(sym_Defined_8);
  sym_Defined_9 = ATmakeSymbol("Defined", 9, ATfalse);
  ATprotectSymbol(sym_Defined_9);
  sym_Defined_10 = ATmakeSymbol("Defined", 10, ATfalse);
  ATprotectSymbol(sym_Defined_10);
  sym_Undefined_0 = ATmakeSymbol("Undefined", 0, ATfalse);
  ATprotectSymbol(sym_Undefined_0);
  sym_Infinite_0 = ATmakeSymbol("Infinite", 0, ATfalse);
  ATprotectSymbol(sym_Infinite_0);
  sym_Anno_2 = ATmakeSymbol("Anno", 2, ATfalse);
  ATprotectSymbol(sym_Anno_2);
  sym_None_0 = ATmakeSymbol("None", 0, ATfalse);
  ATprotectSymbol(sym_None_0);
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
  sym_CUT_0 = ATmakeSymbol("CUT", 0, ATfalse);
  ATprotectSymbol(sym_CUT_0);
  sym_BOXENV_2 = ATmakeSymbol("BOXENV", 2, ATfalse);
  ATprotectSymbol(sym_BOXENV_2);
  sym_HBOX_2 = ATmakeSymbol("HBOX", 2, ATfalse);
  ATprotectSymbol(sym_HBOX_2);
  sym_VBOX_3 = ATmakeSymbol("VBOX", 3, ATfalse);
  ATprotectSymbol(sym_VBOX_3);
  sym_HVBOX_4 = ATmakeSymbol("HVBOX", 4, ATfalse);
  ATprotectSymbol(sym_HVBOX_4);
  sym_ABOX_2 = ATmakeSymbol("ABOX", 2, ATfalse);
  ATprotectSymbol(sym_ABOX_2);
  sym_ALTBOX_2 = ATmakeSymbol("ALTBOX", 2, ATfalse);
  ATprotectSymbol(sym_ALTBOX_2);
  sym_CBOX_1 = ATmakeSymbol("CBOX", 1, ATfalse);
  ATprotectSymbol(sym_CBOX_1);
  sym_LBOX_2 = ATmakeSymbol("LBOX", 2, ATfalse);
  ATprotectSymbol(sym_LBOX_2);
  sym_LBLBOX_2 = ATmakeSymbol("LBLBOX", 2, ATfalse);
  ATprotectSymbol(sym_LBLBOX_2);
  sym_REFBOX_2 = ATmakeSymbol("REFBOX", 2, ATfalse);
  ATprotectSymbol(sym_REFBOX_2);
  sym_C_0 = ATmakeSymbol("C", 0, ATfalse);
  ATprotectSymbol(sym_C_0);
  sym_R_0 = ATmakeSymbol("R", 0, ATfalse);
  ATprotectSymbol(sym_R_0);
  sym_L_0 = ATmakeSymbol("L", 0, ATfalse);
  ATprotectSymbol(sym_L_0);
  sym_EOR_0 = ATmakeSymbol("EOR", 0, ATfalse);
  ATprotectSymbol(sym_EOR_0);
  sym_CSEP_0 = ATmakeSymbol("CSEP", 0, ATfalse);
  ATprotectSymbol(sym_CSEP_0);
  sym_BOXFONT_2 = ATmakeSymbol("BOXFONT", 2, ATfalse);
  ATprotectSymbol(sym_BOXFONT_2);
  sym_BOXCOLOR_1 = ATmakeSymbol("BOXCOLOR", 1, ATfalse);
  ATprotectSymbol(sym_BOXCOLOR_1);
  sym_SOpt_2 = ATmakeSymbol("SOpt", 2, ATfalse);
  ATprotectSymbol(sym_SOpt_2);
  sym_SOptB_2 = ATmakeSymbol("SOptB", 2, ATfalse);
  ATprotectSymbol(sym_SOptB_2);
  sym_VS_0 = ATmakeSymbol("VS", 0, ATfalse);
  ATprotectSymbol(sym_VS_0);
  sym_HS_0 = ATmakeSymbol("HS", 0, ATfalse);
  ATprotectSymbol(sym_HS_0);
  sym_IS_0 = ATmakeSymbol("IS", 0, ATfalse);
  ATprotectSymbol(sym_IS_0);
  sym_H_2 = ATmakeSymbol("H", 2, ATfalse);
  ATprotectSymbol(sym_H_2);
  sym_V_2 = ATmakeSymbol("V", 2, ATfalse);
  ATprotectSymbol(sym_V_2);
  sym_HV_2 = ATmakeSymbol("HV", 2, ATfalse);
  ATprotectSymbol(sym_HV_2);
  sym_ALT_2 = ATmakeSymbol("ALT", 2, ATfalse);
  ATprotectSymbol(sym_ALT_2);
  sym_A_3 = ATmakeSymbol("A", 3, ATfalse);
  ATprotectSymbol(sym_A_3);
  sym_R_2 = ATmakeSymbol("R", 2, ATfalse);
  ATprotectSymbol(sym_R_2);
  sym_AL_1 = ATmakeSymbol("AL", 1, ATfalse);
  ATprotectSymbol(sym_AL_1);
  sym_AC_1 = ATmakeSymbol("AC", 1, ATfalse);
  ATprotectSymbol(sym_AC_1);
  sym_AR_1 = ATmakeSymbol("AR", 1, ATfalse);
  ATprotectSymbol(sym_AR_1);
  sym_AOPTIONS_1 = ATmakeSymbol("AOPTIONS", 1, ATfalse);
  ATprotectSymbol(sym_AOPTIONS_1);
  sym_FNAT_2 = ATmakeSymbol("FNAT", 2, ATfalse);
  ATprotectSymbol(sym_FNAT_2);
  sym_FFID_2 = ATmakeSymbol("FFID", 2, ATfalse);
  ATprotectSymbol(sym_FFID_2);
  sym_F_1 = ATmakeSymbol("F", 1, ATfalse);
  ATprotectSymbol(sym_F_1);
  sym_FBOX_2 = ATmakeSymbol("FBOX", 2, ATfalse);
  ATprotectSymbol(sym_FBOX_2);
  sym_FN_0 = ATmakeSymbol("FN", 0, ATfalse);
  ATprotectSymbol(sym_FN_0);
  sym_FM_0 = ATmakeSymbol("FM", 0, ATfalse);
  ATprotectSymbol(sym_FM_0);
  sym_SE_0 = ATmakeSymbol("SE", 0, ATfalse);
  ATprotectSymbol(sym_SE_0);
  sym_SH_0 = ATmakeSymbol("SH", 0, ATfalse);
  ATprotectSymbol(sym_SH_0);
  sym_SZ_0 = ATmakeSymbol("SZ", 0, ATfalse);
  ATprotectSymbol(sym_SZ_0);
  sym_CL_0 = ATmakeSymbol("CL", 0, ATfalse);
  ATprotectSymbol(sym_CL_0);
  sym_KW_0 = ATmakeSymbol("KW", 0, ATfalse);
  ATprotectSymbol(sym_KW_0);
  sym_VAR_0 = ATmakeSymbol("VAR", 0, ATfalse);
  ATprotectSymbol(sym_VAR_0);
  sym_NUM_0 = ATmakeSymbol("NUM", 0, ATfalse);
  ATprotectSymbol(sym_NUM_0);
  sym_MATH_0 = ATmakeSymbol("MATH", 0, ATfalse);
  ATprotectSymbol(sym_MATH_0);
  sym_LBL_2 = ATmakeSymbol("LBL", 2, ATfalse);
  ATprotectSymbol(sym_LBL_2);
  sym_REF_2 = ATmakeSymbol("REF", 2, ATfalse);
  ATprotectSymbol(sym_REF_2);
  sym_C_2 = ATmakeSymbol("C", 2, ATfalse);
  ATprotectSymbol(sym_C_2);
  sym_L_2 = ATmakeSymbol("L", 2, ATfalse);
  ATprotectSymbol(sym_L_2);
  sym_LNAT_2 = ATmakeSymbol("LNAT", 2, ATfalse);
  ATprotectSymbol(sym_LNAT_2);
  sym_S_1 = ATmakeSymbol("S", 1, ATfalse);
  ATprotectSymbol(sym_S_1);
  sym_Arg_1 = ATmakeSymbol("Arg", 1, ATfalse);
  ATprotectSymbol(sym_Arg_1);
  sym_Arg2_2 = ATmakeSymbol("Arg2", 2, ATfalse);
  ATprotectSymbol(sym_Arg2_2);
  sym_PP_Table_1 = ATmakeSymbol("PP-Table", 1, ATfalse);
  ATprotectSymbol(sym_PP_Table_1);
  sym_selector_2 = ATmakeSymbol("selector", 2, ATfalse);
  ATprotectSymbol(sym_selector_2);
  sym_Path1_1 = ATmakeSymbol("Path1", 1, ATfalse);
  ATprotectSymbol(sym_Path1_1);
  sym_Path_2 = ATmakeSymbol("Path", 2, ATfalse);
  ATprotectSymbol(sym_Path_2);
  sym_PP_Entry_2 = ATmakeSymbol("PP-Entry", 2, ATfalse);
  ATprotectSymbol(sym_PP_Entry_2);
  sym_LatexTable_1 = ATmakeSymbol("LatexTable", 1, ATfalse);
  ATprotectSymbol(sym_LatexTable_1);
  sym_Width_1 = ATmakeSymbol("Width", 1, ATfalse);
  ATprotectSymbol(sym_Width_1);
  sym_Verbose_0 = ATmakeSymbol("Verbose", 0, ATfalse);
  ATprotectSymbol(sym_Verbose_0);
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
  init_constant_terms();
}
ATerm term_i_30;
ATerm term_o_29;
ATerm term_g_29;
ATerm term_o_28;
ATerm term_j_28;
ATerm term_i_28;
ATerm term_v_27;
ATerm term_u_27;
ATerm term_t_27;
ATerm term_p_27;
ATerm term_o_27;
ATerm term_n_27;
ATerm term_b_27;
ATerm term_a_27;
ATerm term_z_26;
ATerm term_u_26;
ATerm term_t_26;
ATerm term_s_26;
ATerm term_p_26;
ATerm term_o_26;
ATerm term_l_26;
ATerm term_k_26;
ATerm term_j_26;
ATerm term_i_26;
ATerm term_f_26;
ATerm term_x_25;
ATerm term_u_25;
ATerm term_t_25;
ATerm term_q_25;
ATerm term_p_25;
ATerm term_f_25;
ATerm term_e_25;
ATerm term_t_24;
ATerm term_n_24;
ATerm term_m_24;
ATerm term_h_24;
ATerm term_c_24;
ATerm term_z_23;
ATerm term_e_23;
ATerm term_w_21;
ATerm term_u_21;
ATerm term_s_21;
ATerm term_u_19;
ATerm term_o_19;
ATerm term_i_19;
ATerm term_h_19;
ATerm term_c_19;
ATerm term_c_18;
ATerm term_m_17;
ATerm term_l_17;
ATerm term_h_17;
ATerm term_v_16;
ATerm term_u_15;
ATerm term_p_15;
ATerm term_k_14;
ATerm term_j_14;
ATerm term_i_14;
ATerm term_h_14;
ATerm term_g_14;
ATerm term_f_14;
ATerm term_e_14;
ATerm term_d_14;
ATerm term_c_13;
ATerm term_b_13;
ATerm term_a_13;
ATerm term_z_12;
ATerm term_y_12;
ATerm term_x_12;
ATerm term_s_12;
ATerm term_r_12;
ATerm term_k_12;
ATerm term_j_12;
ATerm term_g_12;
ATerm term_d_12;
ATerm term_a_12;
ATerm term_r_11;
ATerm term_q_11;
ATerm term_p_11;
ATerm term_o_11;
ATerm term_m_11;
ATerm term_l_11;
ATerm term_k_11;
ATerm term_i_11;
ATerm term_h_11;
ATerm term_g_11;
ATerm term_f_11;
ATerm term_a_11;
ATerm term_x_10;
ATerm term_w_10;
ATerm term_v_10;
ATerm term_u_10;
ATerm term_t_10;
ATerm term_s_10;
ATerm term_n_10;
ATerm term_k_10;
ATerm term_j_10;
ATerm term_i_10;
ATerm term_h_10;
ATerm term_g_10;
ATerm term_f_10;
ATerm term_a_10;
ATerm term_x_9;
ATerm term_w_9;
ATerm term_v_9;
ATerm term_u_9;
ATerm term_t_9;
ATerm term_s_9;
ATerm term_n_9;
ATerm term_k_9;
ATerm term_j_9;
ATerm term_i_9;
ATerm term_h_9;
ATerm term_g_9;
ATerm term_f_9;
ATerm term_a_9;
ATerm term_x_8;
ATerm term_w_8;
ATerm term_v_8;
ATerm term_u_8;
ATerm term_t_8;
ATerm term_q_8;
ATerm term_o_8;
ATerm term_n_8;
ATerm term_m_8;
ATerm term_l_8;
ATerm term_j_8;
ATerm term_l_7;
ATerm term_k_7;
ATerm term_h_7;
ATerm term_f_7;
ATerm term_a_7;
ATerm term_q_6;
ATerm term_o_6;
ATerm term_h_6;
ATerm term_g_6;
ATerm term_f_6;
void init_constant_terms (void)
{
  ATprotect(&(term_f_6));
  term_f_6 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_g_6));
  term_g_6 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_h_6));
  term_h_6 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_o_6));
  term_o_6 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_q_6));
  term_q_6 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_a_7));
  term_a_7 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_f_7));
  term_f_7 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_h_7));
  term_h_7 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_k_7));
  term_k_7 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_l_7));
  term_l_7 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_j_8));
  term_j_8 = (ATerm) ATmakeAppl(ATmakeSymbol("\\\ncopies{", 0, ATtrue));
  ATprotect(&(term_l_8));
  term_l_8 = (ATerm) ATmakeAppl(ATmakeSymbol("}{", 0, ATtrue));
  ATprotect(&(term_m_8));
  term_m_8 = (ATerm) ATmakeAppl(ATmakeSymbol("}%", 0, ATtrue));
  ATprotect(&(term_n_8));
  term_n_8 = (ATerm) ATmakeAppl(ATmakeSymbol("\\begin{LBOX}{=}%\n", 0, ATtrue));
  ATprotect(&(term_o_8));
  term_o_8 = (ATerm) ATmakeAppl(ATmakeSymbol("%\n\\end{LBOX}%\n", 0, ATtrue));
  ATprotect(&(term_q_8));
  term_q_8 = (ATerm) ATmakeAppl(ATmakeSymbol("\\begin{LBOX}{", 0, ATtrue));
  ATprotect(&(term_t_8));
  term_t_8 = (ATerm) ATmakeAppl(ATmakeSymbol("}%\n", 0, ATtrue));
  ATprotect(&(term_u_8));
  term_u_8 = (ATerm) ATmakeAppl(ATmakeSymbol("\\boxlabel{", 0, ATtrue));
  ATprotect(&(term_v_8));
  term_v_8 = (ATerm) ATmakeAppl(ATmakeSymbol("}", 0, ATtrue));
  ATprotect(&(term_w_8));
  term_w_8 = (ATerm) ATmakeAppl(ATmakeSymbol("\\boxref{", 0, ATtrue));
  ATprotect(&(term_x_8));
  term_x_8 = (ATerm) ATmakeAppl(ATmakeSymbol("\\KWf{", 0, ATtrue));
  ATprotect(&(term_a_9));
  term_a_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\\VARf{", 0, ATtrue));
  ATprotect(&(term_f_9));
  term_f_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\\NUMf{", 0, ATtrue));
  ATprotect(&(term_g_9));
  term_g_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\\MATHf{", 0, ATtrue));
  ATprotect(&(term_h_9));
  term_h_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\\textsf{", 0, ATtrue));
  ATprotect(&(term_i_9));
  term_i_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\\textrm{", 0, ATtrue));
  ATprotect(&(term_j_9));
  term_j_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\\texttt{", 0, ATtrue));
  ATprotect(&(term_k_9));
  term_k_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\\textmd{", 0, ATtrue));
  ATprotect(&(term_n_9));
  term_n_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\\textbf{", 0, ATtrue));
  ATprotect(&(term_s_9));
  term_s_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\\textup{", 0, ATtrue));
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\\textit{", 0, ATtrue));
  ATprotect(&(term_u_9));
  term_u_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\\textsc{", 0, ATtrue));
  ATprotect(&(term_v_9));
  term_v_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\\textsl{", 0, ATtrue));
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\\emph{", 0, ATtrue));
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\\tiny{", 0, ATtrue));
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\scriptsize{", 0, ATtrue));
  ATprotect(&(term_f_10));
  term_f_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\footnotesize{", 0, ATtrue));
  ATprotect(&(term_g_10));
  term_g_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\small{", 0, ATtrue));
  ATprotect(&(term_h_10));
  term_h_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\normalsize{", 0, ATtrue));
  ATprotect(&(term_i_10));
  term_i_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\large{", 0, ATtrue));
  ATprotect(&(term_j_10));
  term_j_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\Large{", 0, ATtrue));
  ATprotect(&(term_k_10));
  term_k_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\LARGE{", 0, ATtrue));
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\huge{", 0, ATtrue));
  ATprotect(&(term_s_10));
  term_s_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\Huge{", 0, ATtrue));
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\textcolor{", 0, ATtrue));
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\begin{boxenv}%\n", 0, ATtrue));
  ATprotect(&(term_v_10));
  term_v_10 = (ATerm) ATmakeAppl(ATmakeSymbol("%\n\\end{boxenv}\n", 0, ATtrue));
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\begin{boxenv}{", 0, ATtrue));
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\begin{HBOX}{", 0, ATtrue));
  ATprotect(&(term_a_11));
  term_a_11 = (ATerm) ATmakeAppl(ATmakeSymbol("%\n\\end{HBOX}%\n", 0, ATtrue));
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeAppl(ATmakeSymbol("\\begin{VBOX}{", 0, ATtrue));
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeAppl(ATmakeSymbol("%\n\\end{VBOX}%\n", 0, ATtrue));
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeAppl(ATmakeSymbol("\\begin{HVBOX}{", 0, ATtrue));
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(ATmakeSymbol("%\n\\end{HVBOX}%\n", 0, ATtrue));
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeAppl(ATmakeSymbol("\\begin{ABOX}{", 0, ATtrue));
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeAppl(ATmakeSymbol("\\crcr%\n\\end{ABOX}%\n", 0, ATtrue));
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeAppl(ATmakeSymbol("\\begin{ALTBOX}{%\n", 0, ATtrue));
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeAppl(ATmakeSymbol("%\n}", 0, ATtrue));
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeAppl(ATmakeSymbol("%\n}%\n\\end{ALTBOX}%\n", 0, ATtrue));
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(ATmakeSymbol("%\n\\begin{latextext}%\n", 0, ATtrue));
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeAppl(ATmakeSymbol("%\n\\end{latextext}%\n", 0, ATtrue));
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeAppl(ATmakeSymbol("\\hfill#\\hfill", 0, ATtrue));
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeAppl(ATmakeSymbol("\\hfill#", 0, ATtrue));
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeAppl(ATmakeSymbol("#\\hfill", 0, ATtrue));
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeAppl(ATmakeSymbol("\\cr", 0, ATtrue));
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeAppl(ATmakeSymbol("&", 0, ATtrue));
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeInt(39);
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeInt(96);
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(ATmakeSymbol("latex-abbrevs", 0, ATtrue));
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeAppl(ATmakeSymbol("\\boxspace{}", 0, ATtrue));
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(ATmakeSymbol("\\#", 0, ATtrue));
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeAppl(ATmakeSymbol("\\$", 0, ATtrue));
  ATprotect(&(term_b_13));
  term_b_13 = (ATerm) ATmakeAppl(ATmakeSymbol("\\%", 0, ATtrue));
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeAppl(ATmakeSymbol("\\&", 0, ATtrue));
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeAppl(ATmakeSymbol("\\mbox{-}", 0, ATtrue));
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeAppl(ATmakeSymbol("\\ensuremath{<}", 0, ATtrue));
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeAppl(ATmakeSymbol("\\ensuremath{>}", 0, ATtrue));
  ATprotect(&(term_g_14));
  term_g_14 = (ATerm) ATmakeAppl(ATmakeSymbol("\\ensuremath{\\backslash}", 0, ATtrue));
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeAppl(ATmakeSymbol("\\^{}", 0, ATtrue));
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeAppl(ATmakeSymbol("\\_", 0, ATtrue));
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeAppl(ATmakeSymbol("\\{", 0, ATtrue));
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeAppl(ATmakeSymbol("\\ensuremath{\\vert}", 0, ATtrue));
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeAppl(ATmakeSymbol("\\}", 0, ATtrue));
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeAppl(ATmakeSymbol("\\~{}", 0, ATtrue));
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_h_17));
  term_h_17 = (ATerm) ATmakeAppl(ATmakeSymbol("~", 0, ATtrue));
  ATprotect(&(term_l_17));
  term_l_17 = (ATerm) ATmakeAppl(ATmakeSymbol("1", 0, ATtrue));
  ATprotect(&(term_m_17));
  term_m_17 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeAppl(ATmakeSymbol("0", 0, ATtrue));
  ATprotect(&(term_c_19));
  term_c_19 = (ATerm) ATmakeAppl(sym_CSEP_0);
  ATprotect(&(term_h_19));
  term_h_19 = (ATerm) ATmakeAppl(sym_L_0);
  ATprotect(&(term_i_19));
  term_i_19 = (ATerm) ATmakeAppl(sym_C_0);
  ATprotect(&(term_o_19));
  term_o_19 = (ATerm) ATmakeAppl(sym_R_0);
  ATprotect(&(term_u_19));
  term_u_19 = (ATerm) ATmakeAppl(sym_EOR_0);
  ATprotect(&(term_s_21));
  term_s_21 = (ATerm) ATmakeInt(61);
  ATprotect(&(term_u_21));
  term_u_21 = (ATerm) ATmakeAppl(ATmakeSymbol("\\ ", 0, ATtrue));
  ATprotect(&(term_w_21));
  term_w_21 = (ATerm) ATmakeAppl(ATmakeSymbol("\n\n", 0, ATtrue));
  ATprotect(&(term_e_23));
  term_e_23 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_z_23));
  term_z_23 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_c_24));
  term_c_24 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file>(file, mode)", 0, ATtrue));
  ATprotect(&(term_h_24));
  term_h_24 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_m_24));
  term_m_24 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_n_24));
  term_n_24 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-i abox] [-o latex] [-t table ... ] [-w width] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_t_24));
  term_t_24 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_e_25));
  term_e_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_f_25));
  term_f_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_p_25));
  term_p_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_q_25));
  term_q_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_t_25));
  term_t_25 = (ATerm) ATmakeAppl(sym__2, term_f_7, term_a_7);
  ATprotect(&(term_u_25));
  term_u_25 = (ATerm) ATmakeAppl(sym_Verbose_1, term_a_7);
  ATprotect(&(term_x_25));
  term_x_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_f_26));
  term_f_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_i_26));
  term_i_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_j_26));
  term_j_26 = (ATerm) ATmakeAppl(sym__2, term_i_26, term_m_17);
  ATprotect(&(term_k_26));
  term_k_26 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_l_26));
  term_l_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_o_26));
  term_o_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_p_26));
  term_p_26 = (ATerm) ATmakeAppl(sym__2, term_o_26, term_m_17);
  ATprotect(&(term_s_26));
  term_s_26 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_t_26));
  term_t_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_u_26));
  term_u_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_z_26));
  term_z_26 = (ATerm) ATmakeAppl(sym__2, term_u_26, term_m_17);
  ATprotect(&(term_a_27));
  term_a_27 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_b_27));
  term_b_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_n_27));
  term_n_27 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_o_27));
  term_o_27 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_p_27));
  term_p_27 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_t_27));
  term_t_27 = (ATerm) ATmakeAppl(sym__2, term_o_27, term_p_27);
  ATprotect(&(term_u_27));
  term_u_27 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_v_27));
  term_v_27 = (ATerm) ATmakeAppl(ATmakeSymbol("\nDescription:\n", 0, ATtrue));
  ATprotect(&(term_i_28));
  term_i_28 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_j_28));
  term_j_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_o_28));
  term_o_28 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_g_29));
  term_g_29 = (ATerm) ATmakeAppl(sym__3, term_o_27, term_p_27, (ATerm) ATempty);
  ATprotect(&(term_o_29));
  term_o_29 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_i_30));
  term_i_30 = (ATerm) ATmakeAppl(sym_stdout_0);
}
ATerm report_failure_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm ticks_to_seconds_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm g_72 (ATerm), ATerm h_72 (ATerm));
ATerm crush_2 (ATerm, ATerm v_73 (ATerm), ATerm w_73 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm s_65 (ATerm));
ATerm report_success_0 (ATerm);
ATerm print_0 (ATerm);
ATerm split_2 (ATerm, ATerm u_70 (ATerm), ATerm v_70 (ATerm));
ATerm is_string_0 (ATerm);
ATerm try_1 (ATerm, ATerm l_86 (ATerm));
ATerm topdown_1 (ATerm, ATerm h_82 (ATerm));
ATerm abox2latex_0 (ATerm);
ATerm CSEP_0 (ATerm);
ATerm EOR_0 (ATerm);
ATerm L_0 (ATerm);
ATerm R_0 (ATerm);
ATerm C_0 (ATerm);
ATerm int_to_string_0 (ATerm);
ATerm is_int_0 (ATerm);
ATerm Latex2text_0 (ATerm);
ATerm bottomup_1 (ATerm, ATerm i_82 (ATerm));
ATerm latex2text_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm flat_list_0 (ATerm);
ATerm replace_quotes_0 (ATerm);
ATerm listtd_1 (ATerm, ATerm w_78 (ATerm));
ATerm latex_string_0 (ATerm);
ATerm Tl_0 (ATerm);
ATerm remove_trailing_1 (ATerm, ATerm d_87 (ATerm));
ATerm at_suffix_1 (ATerm, ATerm k_78 (ATerm));
ATerm LatexComment_0 (ATerm);
ATerm make_latex_comment_0 (ATerm);
ATerm MATH_0 (ATerm);
ATerm NUM_0 (ATerm);
ATerm VAR_0 (ATerm);
ATerm KW_0 (ATerm);
ATerm CL_0 (ATerm);
ATerm FFID_2 (ATerm, ATerm o_59 (ATerm), ATerm p_59 (ATerm));
ATerm SZ_0 (ATerm);
ATerm SH_0 (ATerm);
ATerm SE_0 (ATerm);
ATerm FM_0 (ATerm);
ATerm toh_0 (ATerm);
ATerm HS_0 (ATerm);
ATerm Hspace_0 (ATerm);
ATerm Sep_1 (ATerm, ATerm k_79 (ATerm));
ATerm separate_by_1 (ATerm, ATerm l_79 (ATerm));
ATerm filter_1 (ATerm, ATerm m_71 (ATerm));
ATerm IS_0 (ATerm);
ATerm Ispace_0 (ATerm);
ATerm VS_0 (ATerm);
ATerm SOpt_2 (ATerm, ATerm r_58 (ATerm), ATerm s_58 (ATerm));
ATerm Vspace_0 (ATerm);
ATerm C_2 (ATerm, ATerm x_59 (ATerm), ATerm y_59 (ATerm));
ATerm table_row_0 (ATerm);
ATerm MkRows_0 (ATerm);
ATerm at_last_1 (ATerm, ATerm p_78 (ATerm));
ATerm table_def_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm subt_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm while_not_2 (ATerm, ATerm f_86 (ATerm), ATerm g_86 (ATerm));
ATerm for_3 (ATerm, ATerm i_86 (ATerm), ATerm j_86 (ATerm), ATerm k_86 (ATerm));
ATerm _2 (ATerm, ATerm k_51 (ATerm), ATerm l_51 (ATerm));
ATerm copy_0 (ATerm);
ATerm R_2 (ATerm, ATerm g_59 (ATerm), ATerm h_59 (ATerm));
ATerm construct_rows_0 (ATerm);
ATerm Abox2latex_0 (ATerm);
ATerm abox2latex_1 (ATerm, ATerm g_87 (ATerm));
ATerm option_defined_1 (ATerm, ATerm q_65 (ATerm));
ATerm Snd_0 (ATerm);
ATerm input_file_0 (ATerm);
ATerm StoreEntries_0 (ATerm);
ATerm ReadFromFile_0 (ATerm);
ATerm table_create_0 (ATerm);
ATerm load_tables_0 (ATerm);
ATerm fetch_1 (ATerm, ATerm a_78 (ATerm));
ATerm HdMember_1 (ATerm, ATerm m_73 (ATerm));
ATerm union_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm i_72 (ATerm), ATerm j_72 (ATerm), ATerm k_72 (ATerm));
ATerm crush_3 (ATerm, ATerm x_73 (ATerm), ATerm y_73 (ATerm), ATerm z_73 (ATerm));
ATerm collect_om_1 (ATerm, ATerm o_74 (ATerm));
ATerm collect_1 (ATerm, ATerm q_74 (ATerm));
ATerm debug_1 (ATerm, ATerm j_68 (ATerm));
ATerm obsolete_1 (ATerm, ATerm q_68 (ATerm));
ATerm open_file_0 (ATerm);
ATerm usage_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm r_67 (ATerm));
ATerm ArgOption_2 (ATerm, ATerm l_65 (ATerm), ATerm m_65 (ATerm));
ATerm string_to_int_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm));
ATerm io_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm g_78 (ATerm));
ATerm concat_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm s_64 (ATerm));
ATerm map_1 (ATerm, ATerm s_77 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm h_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm r_64 (ATerm));
ATerm Program_1 (ATerm, ATerm y_52 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm z_52 (ATerm));
ATerm Help_0 (ATerm);
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm w_64 (ATerm));
ATerm Option_3 (ATerm, ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm r_60 (ATerm), ATerm s_60 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm u_64 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm t_64 (ATerm));
ATerm Abox_2_latex_0 (ATerm);
ATerm main_0 (ATerm);
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_f_6, (ATerm) ATinsert(ATempty, term_g_6));
  {
    t = printnl_0(t);
    {
      t = term_h_6;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm conc_strings_0 (ATerm t)
{
  t = _2(t, explode_string_0, explode_string_0);
  {
    t = conc_0(t);
    t = implode_string_0(t);
  }
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm i_6 = t;
  int j_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(j_6);
    }
  else
    {
      t = i_6;
      {
        ATerm k_6 = t;
        int l_6 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_0 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, a_0);
            LocalPopChoice(l_6);
          }
        else
          {
            t = k_6;
            {
              ATerm u_0 = NULL,v_0 = NULL,w_0 = NULL;
              u_0 = t;
              q_0 :
              if(match_cons(u_0, sym_Path_1))
                {
                  v_0 = ATgetArgument(u_0, 0);
                  t = not_null(v_0);
                }
              else
                {
                  if(match_cons(u_0, sym_Var_1))
                    {
                      v_0 = ATgetArgument(u_0, 0);
                      {
                        t = not_null(v_0);
                        {
                          ATerm m_6 = t;
                          int n_6 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(n_6);
                            }
                          else
                            {
                              t = m_6;
                              {
                                ATerm b_0 (ATerm t)
                                {
                                  t = term_o_6;
                                  return(t);
                                }
                                t = debug_1(t, b_0);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(u_0, sym_Prefix_2))
                        {
                          v_0 = ATgetArgument(u_0, 0);
                          w_0 = ATgetArgument(u_0, 1);
                          {
                            ATerm h_1 = NULL,m_1 = NULL;
                            ATerm p_6;
                            p_6 = t;
                            {
                              ATerm i_1 = NULL;
                              t = not_null(v_0);
                              {
                                t = eval_config_0(t);
                                {
                                  i_1 = t;
                                  if(((h_1 != NULL) && (h_1 != i_1)))
                                    _fail(i_1);
                                  else
                                    h_1 = i_1;
                                }
                              }
                            }
                            t = p_6;
                            {
                              ATerm n_1 = NULL;
                              t = not_null(w_0);
                              {
                                t = eval_config_0(t);
                                {
                                  n_1 = t;
                                  if(((m_1 != NULL) && (m_1 != n_1)))
                                    _fail(n_1);
                                  else
                                    m_1 = n_1;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(h_1), not_null(m_1));
                                t = conc_strings_0(t);
                              }
                            }
                          }
                        }
                      else
                        {
                          _fail(t);
                        }
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm get_config_0 (ATerm t)
{
  ATerm e_2 = NULL;
  e_2 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_q_6, not_null(e_2));
    {
      t = table_get_0(t);
      {
        ATerm e_0 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm r_6;
            r_6 = t;
            {
              ATerm g_2 = NULL;
              ATerm k_2 = NULL;
              k_2 = t;
              if(((g_2 != NULL) && (g_2 != k_2)))
                _fail(k_2);
              else
                g_2 = k_2;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_q_6, not_null(e_2), not_null(g_2));
                t = table_put_0(t);
              }
            }
            t = r_6;
          }
          return(t);
        }
        t = try_1(t, e_0);
      }
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm y_2 = NULL;
  y_2 = t;
  t = SSL_TicksToSeconds(not_null(y_2));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm j_3 = NULL,k_3 = NULL,l_3 = NULL;
  j_3 = t;
  f_3 :
  if(match_cons(j_3, sym__2))
    {
      k_3 = ATgetArgument(j_3, 0);
      l_3 = ATgetArgument(j_3, 1);
      {
        ATerm u_6 = t;
        int v_6 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(k_3), not_null(l_3));
            LocalPopChoice(v_6);
          }
        else
          {
            t = u_6;
            t = SSL_addr(not_null(k_3), not_null(l_3));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm g_72 (ATerm), ATerm h_72 (ATerm))
{
  ATerm w_6 = t;
  int x_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = g_72(t);
      LocalPopChoice(x_6);
    }
  else
    {
      t = w_6;
      {
        ATerm b_4 = NULL,c_4 = NULL,d_4 = NULL;
        b_4 = t;
        x_3 :
        if(((ATgetType(b_4) == AT_LIST) && ((ATermList) b_4 != ATempty)))
          {
            c_4 = ATgetFirst((ATermList) b_4);
            d_4 = (ATerm) ATgetNext((ATermList) b_4);
            {
              ATerm j_4 = NULL;
              ATerm p_5 = NULL;
              t = not_null(d_4);
              {
                t = foldr_2(t, g_72, h_72);
                {
                  p_5 = t;
                  if(((j_4 != NULL) && (j_4 != p_5)))
                    _fail(p_5);
                  else
                    j_4 = p_5;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(c_4), not_null(j_4));
                t = h_72(t);
              }
            }
          }
        else
          {
            _fail(t);
          }
      }
    }
  return(t);
}
ATerm crush_2 (ATerm t, ATerm v_73 (ATerm), ATerm w_73 (ATerm))
{
  ATerm t_6 = NULL;
  ATerm y_6 = NULL;
  t_6 = t;
  {
    ATerm z_6 = NULL;
    ATerm b_7 = NULL,c_7 = NULL,d_7 = NULL;
    t = not_null(t_6);
    {
      z_6 = t;
      {
        t = SSL_explode_term(not_null(z_6));
        {
          b_7 = t;
          s_6 :
          if(match_cons(b_7, sym__2))
            {
              c_7 = ATgetArgument(b_7, 0);
              d_7 = ATgetArgument(b_7, 1);
              if(((y_6 != NULL) && (y_6 != d_7)))
                _fail(d_7);
              else
                y_6 = d_7;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(y_6);
      t = foldr_2(t, v_73, w_73);
    }
  }
  return(t);
}
ATerm times_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm run_time_0 (ATerm t)
{
  t = times_0(t);
  {
    ATerm f_0 (ATerm t)
    {
      t = term_a_7;
      return(t);
    }
    t = crush_2(t, f_0, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm s_65 (ATerm))
{
  ATerm m_0 (ATerm t)
  {
    ATerm e_7;
    e_7 = t;
    {
      ATerm i_7 = NULL;
      ATerm j_7 = NULL;
      t = term_f_7;
      {
        t = get_config_0(t);
        {
          j_7 = t;
          if(((i_7 != NULL) && (i_7 != j_7)))
            _fail(j_7);
          else
            i_7 = j_7;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(i_7), term_h_6);
        t = geq_0(t);
      }
    }
    t = e_7;
    t = s_65(t);
    return(t);
  }
  t = try_1(t, m_0);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm n_0 (ATerm t)
  {
    ATerm n_7 = NULL,p_7 = NULL;
    ATerm g_7;
    g_7 = t;
    {
      ATerm o_7 = NULL;
      t = run_time_0(t);
      {
        o_7 = t;
        if(((n_7 != NULL) && (n_7 != o_7)))
          _fail(o_7);
        else
          n_7 = o_7;
      }
    }
    t = g_7;
    {
      ATerm q_7 = NULL;
      t = term_h_7;
      {
        t = get_config_0(t);
        {
          q_7 = t;
          if(((p_7 != NULL) && (p_7 != q_7)))
            _fail(q_7);
          else
            p_7 = q_7;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_f_6, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_l_7), not_null(n_7)), term_k_7), not_null(p_7)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, n_0);
  {
    t = term_a_7;
    t = exit_0(t);
  }
  return(t);
}
ATerm print_0 (ATerm t)
{
  ATerm v_7 = NULL,w_7 = NULL,x_7 = NULL;
  v_7 = t;
  u_7 :
  if(match_cons(v_7, sym__2))
    {
      w_7 = ATgetArgument(v_7, 0);
      x_7 = ATgetArgument(v_7, 1);
      {
        ATerm m_7;
        m_7 = t;
        t = SSL_print(not_null(w_7), not_null(x_7));
        t = m_7;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm split_2 (ATerm t, ATerm u_70 (ATerm), ATerm v_70 (ATerm))
{
  ATerm d_8 = NULL,f_8 = NULL;
  ATerm r_7;
  r_7 = t;
  {
    ATerm e_8 = NULL;
    t = u_70(t);
    {
      e_8 = t;
      if(((d_8 != NULL) && (d_8 != e_8)))
        _fail(e_8);
      else
        d_8 = e_8;
    }
  }
  t = r_7;
  {
    ATerm g_8 = NULL;
    t = v_70(t);
    {
      g_8 = t;
      if(((f_8 != NULL) && (f_8 != g_8)))
        _fail(g_8);
      else
        f_8 = g_8;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(d_8), not_null(f_8));
  }
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm k_8 = NULL;
  k_8 = t;
  t = SSL_is_string(not_null(k_8));
  return(t);
}
ATerm try_1 (ATerm t, ATerm l_86 (ATerm))
{
  ATerm s_7 = t;
  int t_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = l_86(t);
      LocalPopChoice(t_7);
    }
  else
    {
      t = s_7;
      {
      }
    }
  return(t);
}
ATerm topdown_1 (ATerm t, ATerm h_82 (ATerm))
{
  t = h_82(t);
  {
    ATerm o_0 (ATerm t)
    {
      t = topdown_1(t, h_82);
      return(t);
    }
    t = _all(t, o_0);
  }
  return(t);
}
ATerm abox2latex_0 (ATerm t)
{
  ATerm p_8 = NULL;
  ATerm r_8 = NULL;
  p_8 = t;
  {
    ATerm s_8 = NULL;
    t = not_null(p_8);
    {
      ATerm p_0 (ATerm t)
      {
        t = try_1(t, Abox2latex_0);
        return(t);
      }
      t = topdown_1(t, p_0);
      {
        s_8 = t;
        if(((r_8 != NULL) && (r_8 != s_8)))
          _fail(s_8);
        else
          r_8 = s_8;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym_BOXENV_2, (ATerm)ATempty, not_null(r_8));
      t = latex2text_0(t);
    }
  }
  return(t);
}
ATerm CSEP_0 (ATerm t)
{
  ATerm z_8 = NULL;
  z_8 = t;
  y_8 :
  if(match_cons(z_8, sym_CSEP_0))
    {
      ATerm b_9 = NULL,d_9 = NULL;
      ATerm y_7;
      y_7 = t;
      {
        ATerm c_9 = NULL;
        t = SSLgetAnnotations(not_null(z_8));
        {
          c_9 = t;
          if(((b_9 != NULL) && (b_9 != c_9)))
            _fail(c_9);
          else
            b_9 = c_9;
        }
      }
      t = y_7;
      {
        ATerm e_9 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_CSEP_0), not_null(b_9));
        {
          e_9 = t;
          if(((d_9 != NULL) && (d_9 != e_9)))
            _fail(e_9);
          else
            d_9 = e_9;
        }
        t = not_null(d_9);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm EOR_0 (ATerm t)
{
  ATerm m_9 = NULL;
  m_9 = t;
  l_9 :
  if(match_cons(m_9, sym_EOR_0))
    {
      ATerm o_9 = NULL,q_9 = NULL;
      ATerm z_7;
      z_7 = t;
      {
        ATerm p_9 = NULL;
        t = SSLgetAnnotations(not_null(m_9));
        {
          p_9 = t;
          if(((o_9 != NULL) && (o_9 != p_9)))
            _fail(p_9);
          else
            o_9 = p_9;
        }
      }
      t = z_7;
      {
        ATerm r_9 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_EOR_0), not_null(o_9));
        {
          r_9 = t;
          if(((q_9 != NULL) && (q_9 != r_9)))
            _fail(r_9);
          else
            q_9 = r_9;
        }
        t = not_null(q_9);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm L_0 (ATerm t)
{
  ATerm z_9 = NULL;
  z_9 = t;
  y_9 :
  if(match_cons(z_9, sym_L_0))
    {
      ATerm b_10 = NULL,d_10 = NULL;
      ATerm a_8;
      a_8 = t;
      {
        ATerm c_10 = NULL;
        t = SSLgetAnnotations(not_null(z_9));
        {
          c_10 = t;
          if(((b_10 != NULL) && (b_10 != c_10)))
            _fail(c_10);
          else
            b_10 = c_10;
        }
      }
      t = a_8;
      {
        ATerm e_10 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_L_0), not_null(b_10));
        {
          e_10 = t;
          if(((d_10 != NULL) && (d_10 != e_10)))
            _fail(e_10);
          else
            d_10 = e_10;
        }
        t = not_null(d_10);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm R_0 (ATerm t)
{
  ATerm m_10 = NULL;
  m_10 = t;
  l_10 :
  if(match_cons(m_10, sym_R_0))
    {
      ATerm o_10 = NULL,q_10 = NULL;
      ATerm b_8;
      b_8 = t;
      {
        ATerm p_10 = NULL;
        t = SSLgetAnnotations(not_null(m_10));
        {
          p_10 = t;
          if(((o_10 != NULL) && (o_10 != p_10)))
            _fail(p_10);
          else
            o_10 = p_10;
        }
      }
      t = b_8;
      {
        ATerm r_10 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_R_0), not_null(o_10));
        {
          r_10 = t;
          if(((q_10 != NULL) && (q_10 != r_10)))
            _fail(r_10);
          else
            q_10 = r_10;
        }
        t = not_null(q_10);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm C_0 (ATerm t)
{
  ATerm z_10 = NULL;
  z_10 = t;
  y_10 :
  if(match_cons(z_10, sym_C_0))
    {
      ATerm b_11 = NULL,d_11 = NULL;
      ATerm c_8;
      c_8 = t;
      {
        ATerm c_11 = NULL;
        t = SSLgetAnnotations(not_null(z_10));
        {
          c_11 = t;
          if(((b_11 != NULL) && (b_11 != c_11)))
            _fail(c_11);
          else
            b_11 = c_11;
        }
      }
      t = c_8;
      {
        ATerm e_11 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_C_0), not_null(b_11));
        {
          e_11 = t;
          if(((d_11 != NULL) && (d_11 != e_11)))
            _fail(e_11);
          else
            d_11 = e_11;
        }
        t = not_null(d_11);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm int_to_string_0 (ATerm t)
{
  ATerm j_11 = NULL;
  j_11 = t;
  t = SSL_int_to_string(not_null(j_11));
  return(t);
}
ATerm is_int_0 (ATerm t)
{
  ATerm n_11 = NULL;
  n_11 = t;
  t = SSL_is_int(not_null(n_11));
  return(t);
}
ATerm Latex2text_0 (ATerm t)
{
  ATerm i_13 = NULL,j_13 = NULL,k_13 = NULL,l_13 = NULL,m_13 = NULL,n_13 = NULL,o_13 = NULL,p_13 = NULL,q_13 = NULL,r_13 = NULL,s_13 = NULL,t_13 = NULL;
  ATerm h_8 = t;
  int i_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_13 = NULL,v_13 = NULL,w_13 = NULL,x_13 = NULL,y_13 = NULL,z_13 = NULL,a_14 = NULL;
      ATerm l_14 (ATerm t)
      {
        ATerm b_14 = NULL;
        if(((q_13 != NULL) && (q_13 != y_13)))
          _fail(y_13);
        else
          q_13 = y_13;
        {
          if(((t_13 != NULL) && (t_13 != a_14)))
            _fail(a_14);
          else
            t_13 = a_14;
          {
            t = not_null(q_13);
            {
              t = is_int_0(t);
              {
                ATerm c_14 = NULL;
                t = not_null(q_13);
                {
                  t = int_to_string_0(t);
                  {
                    c_14 = t;
                    if(((b_14 != NULL) && (b_14 != c_14)))
                      _fail(c_14);
                    else
                      b_14 = c_14;
                  }
                }
                t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_m_8), not_null(t_13)), term_l_8), not_null(b_14)), term_j_8);
              }
            }
          }
        }
        return(t);
      }
      ATerm m_14 (ATerm t)
      {
        if(((t_13 != NULL) && (t_13 != a_14)))
          _fail(a_14);
        else
          t_13 = a_14;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_o_8), not_null(t_13)), term_n_8);
        return(t);
      }
      ATerm n_14 (ATerm t)
      {
        if(((q_13 != NULL) && (q_13 != y_13)))
          _fail(y_13);
        else
          q_13 = y_13;
        {
          if(((t_13 != NULL) && (t_13 != a_14)))
            _fail(a_14);
          else
            t_13 = a_14;
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_o_8), not_null(t_13)), term_t_8), not_null(q_13)), term_q_8);
        }
        return(t);
      }
      ATerm o_14 (ATerm t)
      {
        if(((r_13 != NULL) && (r_13 != y_13)))
          _fail(y_13);
        else
          r_13 = y_13;
        {
          if(((t_13 != NULL) && (t_13 != a_14)))
            _fail(a_14);
          else
            t_13 = a_14;
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(t_13)), term_v_8), not_null(r_13)), term_u_8);
        }
        return(t);
      }
      ATerm p_14 (ATerm t)
      {
        if(((r_13 != NULL) && (r_13 != y_13)))
          _fail(y_13);
        else
          r_13 = y_13;
        {
          if(((t_13 != NULL) && (t_13 != a_14)))
            _fail(a_14);
          else
            t_13 = a_14;
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_v_8), not_null(t_13)), term_l_8), not_null(r_13)), term_w_8);
        }
        return(t);
      }
      ATerm q_14 (ATerm t)
      {
        if(((t_13 != NULL) && (t_13 != a_14)))
          _fail(a_14);
        else
          t_13 = a_14;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_v_8), not_null(t_13)), term_x_8);
        return(t);
      }
      ATerm r_14 (ATerm t)
      {
        if(((t_13 != NULL) && (t_13 != a_14)))
          _fail(a_14);
        else
          t_13 = a_14;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_v_8), not_null(t_13)), term_a_9);
        return(t);
      }
      ATerm s_14 (ATerm t)
      {
        if(((t_13 != NULL) && (t_13 != a_14)))
          _fail(a_14);
        else
          t_13 = a_14;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_v_8), not_null(t_13)), term_f_9);
        return(t);
      }
      ATerm t_14 (ATerm t)
      {
        if(((t_13 != NULL) && (t_13 != a_14)))
          _fail(a_14);
        else
          t_13 = a_14;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_v_8), not_null(t_13)), term_g_9);
        return(t);
      }
      ATerm u_14 (ATerm t)
      {
        if(((t_13 != NULL) && (t_13 != a_14)))
          _fail(a_14);
        else
          t_13 = a_14;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_v_8), not_null(t_13)), term_h_9);
        return(t);
      }
      ATerm v_14 (ATerm t)
      {
        if(((t_13 != NULL) && (t_13 != a_14)))
          _fail(a_14);
        else
          t_13 = a_14;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_v_8), not_null(t_13)), term_i_9);
        return(t);
      }
      ATerm w_14 (ATerm t)
      {
        if(((t_13 != NULL) && (t_13 != a_14)))
          _fail(a_14);
        else
          t_13 = a_14;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_v_8), not_null(t_13)), term_j_9);
        return(t);
      }
      ATerm x_14 (ATerm t)
      {
        if(((t_13 != NULL) && (t_13 != a_14)))
          _fail(a_14);
        else
          t_13 = a_14;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_v_8), not_null(t_13)), term_k_9);
        return(t);
      }
      ATerm y_14 (ATerm t)
      {
        if(((t_13 != NULL) && (t_13 != a_14)))
          _fail(a_14);
        else
          t_13 = a_14;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_v_8), not_null(t_13)), term_n_9);
        return(t);
      }
      ATerm z_14 (ATerm t)
      {
        if(((t_13 != NULL) && (t_13 != a_14)))
          _fail(a_14);
        else
          t_13 = a_14;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_v_8), not_null(t_13)), term_s_9);
        return(t);
      }
      ATerm a_15 (ATerm t)
      {
        if(((t_13 != NULL) && (t_13 != a_14)))
          _fail(a_14);
        else
          t_13 = a_14;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_v_8), not_null(t_13)), term_t_9);
        return(t);
      }
      ATerm b_15 (ATerm t)
      {
        if(((t_13 != NULL) && (t_13 != a_14)))
          _fail(a_14);
        else
          t_13 = a_14;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_v_8), not_null(t_13)), term_u_9);
        return(t);
      }
      ATerm c_15 (ATerm t)
      {
        if(((t_13 != NULL) && (t_13 != a_14)))
          _fail(a_14);
        else
          t_13 = a_14;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_v_8), not_null(t_13)), term_v_9);
        return(t);
      }
      ATerm d_15 (ATerm t)
      {
        if(((t_13 != NULL) && (t_13 != a_14)))
          _fail(a_14);
        else
          t_13 = a_14;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_v_8), not_null(t_13)), term_w_9);
        return(t);
      }
      ATerm e_15 (ATerm t)
      {
        if(((t_13 != NULL) && (t_13 != a_14)))
          _fail(a_14);
        else
          t_13 = a_14;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_v_8), not_null(t_13)), term_x_9);
        return(t);
      }
      ATerm f_15 (ATerm t)
      {
        if(((t_13 != NULL) && (t_13 != a_14)))
          _fail(a_14);
        else
          t_13 = a_14;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_v_8), not_null(t_13)), term_a_10);
        return(t);
      }
      ATerm g_15 (ATerm t)
      {
        if(((t_13 != NULL) && (t_13 != a_14)))
          _fail(a_14);
        else
          t_13 = a_14;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_v_8), not_null(t_13)), term_f_10);
        return(t);
      }
      ATerm h_15 (ATerm t)
      {
        if(((t_13 != NULL) && (t_13 != a_14)))
          _fail(a_14);
        else
          t_13 = a_14;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_v_8), not_null(t_13)), term_g_10);
        return(t);
      }
      ATerm i_15 (ATerm t)
      {
        if(((t_13 != NULL) && (t_13 != a_14)))
          _fail(a_14);
        else
          t_13 = a_14;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_v_8), not_null(t_13)), term_h_10);
        return(t);
      }
      ATerm j_15 (ATerm t)
      {
        if(((t_13 != NULL) && (t_13 != a_14)))
          _fail(a_14);
        else
          t_13 = a_14;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_v_8), not_null(t_13)), term_i_10);
        return(t);
      }
      ATerm k_15 (ATerm t)
      {
        if(((t_13 != NULL) && (t_13 != a_14)))
          _fail(a_14);
        else
          t_13 = a_14;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_v_8), not_null(t_13)), term_j_10);
        return(t);
      }
      ATerm l_15 (ATerm t)
      {
        if(((t_13 != NULL) && (t_13 != a_14)))
          _fail(a_14);
        else
          t_13 = a_14;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_v_8), not_null(t_13)), term_k_10);
        return(t);
      }
      ATerm m_15 (ATerm t)
      {
        if(((t_13 != NULL) && (t_13 != a_14)))
          _fail(a_14);
        else
          t_13 = a_14;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_v_8), not_null(t_13)), term_n_10);
        return(t);
      }
      ATerm n_15 (ATerm t)
      {
        if(((t_13 != NULL) && (t_13 != a_14)))
          _fail(a_14);
        else
          t_13 = a_14;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_v_8), not_null(t_13)), term_s_10);
        return(t);
      }
      ATerm o_15 (ATerm t)
      {
        if(((s_13 != NULL) && (s_13 != z_13)))
          _fail(z_13);
        else
          s_13 = z_13;
        {
          if(((t_13 != NULL) && (t_13 != a_14)))
            _fail(a_14);
          else
            t_13 = a_14;
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_v_8), not_null(t_13)), term_l_8), not_null(s_13)), term_t_10);
        }
        return(t);
      }
      x_13 = t;
      d_13 :
      if(match_cons(x_13, sym_BOXENV_2))
        {
          y_13 = ATgetArgument(x_13, 0);
          a_14 = ATgetArgument(x_13, 1);
          e_13 :
          if(((ATermList) y_13 == ATempty))
            {
              {
                if(((n_13 != NULL) && (n_13 != a_14)))
                  _fail(a_14);
                else
                  n_13 = a_14;
                t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_v_10), not_null(n_13)), term_u_10);
              }
            }
          else
            {
              if(((ATgetType(y_13) == AT_LIST) && ((ATermList) y_13 != ATempty)))
                {
                  z_13 = ATgetFirst((ATermList) y_13);
                  u_13 = (ATerm) ATgetNext((ATermList) y_13);
                  f_13 :
                  if(((ATermList) u_13 == ATempty))
                    {
                      {
                        if(((i_13 != NULL) && (i_13 != z_13)))
                          _fail(z_13);
                        else
                          i_13 = z_13;
                        {
                          if(((n_13 != NULL) && (n_13 != a_14)))
                            _fail(a_14);
                          else
                            n_13 = a_14;
                          t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_v_10), not_null(n_13)), term_t_8), not_null(i_13)), term_w_10);
                        }
                      }
                    }
                  else
                    {
                      _fail(t);
                    }
                }
              else
                {
                  _fail(t);
                }
            }
        }
      else
        {
          if(match_cons(x_13, sym_HBOX_2))
            {
              y_13 = ATgetArgument(x_13, 0);
              a_14 = ATgetArgument(x_13, 1);
              {
                if(((j_13 != NULL) && (j_13 != y_13)))
                  _fail(y_13);
                else
                  j_13 = y_13;
                {
                  if(((n_13 != NULL) && (n_13 != a_14)))
                    _fail(a_14);
                  else
                    n_13 = a_14;
                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_a_11), not_null(n_13)), term_t_8), not_null(j_13)), term_x_10);
                }
              }
            }
          else
            {
              if(match_cons(x_13, sym_VBOX_3))
                {
                  y_13 = ATgetArgument(x_13, 0);
                  a_14 = ATgetArgument(x_13, 1);
                  v_13 = ATgetArgument(x_13, 2);
                  {
                    if(((k_13 != NULL) && (k_13 != y_13)))
                      _fail(y_13);
                    else
                      k_13 = y_13;
                    {
                      if(((l_13 != NULL) && (l_13 != a_14)))
                        _fail(a_14);
                      else
                        l_13 = a_14;
                      {
                        if(((n_13 != NULL) && (n_13 != v_13)))
                          _fail(v_13);
                        else
                          n_13 = v_13;
                        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_g_11), not_null(n_13)), term_t_8), not_null(l_13)), term_l_8), not_null(k_13)), term_f_11);
                      }
                    }
                  }
                }
              else
                {
                  if(match_cons(x_13, sym_HVBOX_4))
                    {
                      y_13 = ATgetArgument(x_13, 0);
                      a_14 = ATgetArgument(x_13, 1);
                      v_13 = ATgetArgument(x_13, 2);
                      w_13 = ATgetArgument(x_13, 3);
                      {
                        if(((j_13 != NULL) && (j_13 != y_13)))
                          _fail(y_13);
                        else
                          j_13 = y_13;
                        {
                          if(((k_13 != NULL) && (k_13 != a_14)))
                            _fail(a_14);
                          else
                            k_13 = a_14;
                          {
                            if(((l_13 != NULL) && (l_13 != v_13)))
                              _fail(v_13);
                            else
                              l_13 = v_13;
                            {
                              if(((n_13 != NULL) && (n_13 != w_13)))
                                _fail(w_13);
                              else
                                n_13 = w_13;
                              t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_i_11), not_null(n_13)), term_t_8), not_null(l_13)), term_l_8), not_null(k_13)), term_l_8), not_null(j_13)), term_h_11);
                            }
                          }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(x_13, sym_ABOX_2))
                        {
                          y_13 = ATgetArgument(x_13, 0);
                          a_14 = ATgetArgument(x_13, 1);
                          {
                            if(((m_13 != NULL) && (m_13 != y_13)))
                              _fail(y_13);
                            else
                              m_13 = y_13;
                            {
                              if(((n_13 != NULL) && (n_13 != a_14)))
                                _fail(a_14);
                              else
                                n_13 = a_14;
                              t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_l_11), not_null(n_13)), term_t_8), not_null(m_13)), term_k_11);
                            }
                          }
                        }
                      else
                        {
                          if(match_cons(x_13, sym_ALTBOX_2))
                            {
                              y_13 = ATgetArgument(x_13, 0);
                              a_14 = ATgetArgument(x_13, 1);
                              {
                                if(((o_13 != NULL) && (o_13 != y_13)))
                                  _fail(y_13);
                                else
                                  o_13 = y_13;
                                {
                                  if(((p_13 != NULL) && (p_13 != a_14)))
                                    _fail(a_14);
                                  else
                                    p_13 = a_14;
                                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_p_11), not_null(p_13)), term_o_11), not_null(o_13)), term_m_11);
                                }
                              }
                            }
                          else
                            {
                              if(match_cons(x_13, sym_CBOX_1))
                                {
                                  y_13 = ATgetArgument(x_13, 0);
                                  {
                                    if(((t_13 != NULL) && (t_13 != y_13)))
                                      _fail(y_13);
                                    else
                                      t_13 = y_13;
                                    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_r_11), not_null(t_13)), term_q_11);
                                  }
                                }
                              else
                                {
                                  if(match_cons(x_13, sym_LBOX_2))
                                    {
                                      y_13 = ATgetArgument(x_13, 0);
                                      a_14 = ATgetArgument(x_13, 1);
                                      g_13 :
                                      if(match_string(y_13, "="))
                                        {
                                          ATerm s_11 = t;
                                          int t_11 = stack_ptr;
                                          if((PushChoice() == 0))
                                            {
                                              t = l_14(t);
                                              LocalPopChoice(t_11);
                                            }
                                          else
                                            {
                                              t = s_11;
                                              {
                                                ATerm u_11 = t;
                                                int v_11 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = m_14(t);
                                                    LocalPopChoice(v_11);
                                                  }
                                                else
                                                  {
                                                    t = u_11;
                                                    t = n_14(t);
                                                  }
                                              }
                                            }
                                        }
                                      else
                                        {
                                          ATerm w_11 = t;
                                          int x_11 = stack_ptr;
                                          if((PushChoice() == 0))
                                            {
                                              t = l_14(t);
                                              LocalPopChoice(x_11);
                                            }
                                          else
                                            {
                                              t = w_11;
                                              t = n_14(t);
                                            }
                                        }
                                    }
                                  else
                                    {
                                      if(match_cons(x_13, sym_LBLBOX_2))
                                        {
                                          y_13 = ATgetArgument(x_13, 0);
                                          a_14 = ATgetArgument(x_13, 1);
                                          t = o_14(t);
                                        }
                                      else
                                        {
                                          if(match_cons(x_13, sym_REFBOX_2))
                                            {
                                              y_13 = ATgetArgument(x_13, 0);
                                              a_14 = ATgetArgument(x_13, 1);
                                              t = p_14(t);
                                            }
                                          else
                                            {
                                              if(match_cons(x_13, sym_BOXFONT_2))
                                                {
                                                  y_13 = ATgetArgument(x_13, 0);
                                                  a_14 = ATgetArgument(x_13, 1);
                                                  h_13 :
                                                  if(match_cons(y_13, sym_KW_0))
                                                    {
                                                      t = q_14(t);
                                                    }
                                                  else
                                                    {
                                                      if(match_cons(y_13, sym_VAR_0))
                                                        {
                                                          t = r_14(t);
                                                        }
                                                      else
                                                        {
                                                          if(match_cons(y_13, sym_NUM_0))
                                                            {
                                                              t = s_14(t);
                                                            }
                                                          else
                                                            {
                                                              if(match_cons(y_13, sym_MATH_0))
                                                                {
                                                                  t = t_14(t);
                                                                }
                                                              else
                                                                {
                                                                  if(match_string(y_13, "sf"))
                                                                    {
                                                                      t = u_14(t);
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_string(y_13, "rm"))
                                                                        {
                                                                          t = v_14(t);
                                                                        }
                                                                      else
                                                                        {
                                                                          if(match_string(y_13, "tt"))
                                                                            {
                                                                              t = w_14(t);
                                                                            }
                                                                          else
                                                                            {
                                                                              if(match_string(y_13, "md"))
                                                                                {
                                                                                  t = x_14(t);
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(match_string(y_13, "bf"))
                                                                                    {
                                                                                      t = y_14(t);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(match_string(y_13, "up"))
                                                                                        {
                                                                                          t = z_14(t);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          if(match_string(y_13, "it"))
                                                                                            {
                                                                                              t = a_15(t);
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              if(match_string(y_13, "sc"))
                                                                                                {
                                                                                                  t = b_15(t);
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  if(match_string(y_13, "sl"))
                                                                                                    {
                                                                                                      t = c_15(t);
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      if(match_string(y_13, "em"))
                                                                                                        {
                                                                                                          t = d_15(t);
                                                                                                        }
                                                                                                      else
                                                                                                        {
                                                                                                          if(match_string(y_13, "tiny"))
                                                                                                            {
                                                                                                              t = e_15(t);
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              if(match_string(y_13, "scriptsize"))
                                                                                                                {
                                                                                                                  t = f_15(t);
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  if(match_string(y_13, "footnotesize"))
                                                                                                                    {
                                                                                                                      t = g_15(t);
                                                                                                                    }
                                                                                                                  else
                                                                                                                    {
                                                                                                                      if(match_string(y_13, "small"))
                                                                                                                        {
                                                                                                                          t = h_15(t);
                                                                                                                        }
                                                                                                                      else
                                                                                                                        {
                                                                                                                          if(match_string(y_13, "normalsize"))
                                                                                                                            {
                                                                                                                              t = i_15(t);
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              if(match_string(y_13, "large"))
                                                                                                                                {
                                                                                                                                  t = j_15(t);
                                                                                                                                }
                                                                                                                              else
                                                                                                                                {
                                                                                                                                  if(match_string(y_13, "Large"))
                                                                                                                                    {
                                                                                                                                      t = k_15(t);
                                                                                                                                    }
                                                                                                                                  else
                                                                                                                                    {
                                                                                                                                      if(match_string(y_13, "LARGE"))
                                                                                                                                        {
                                                                                                                                          t = l_15(t);
                                                                                                                                        }
                                                                                                                                      else
                                                                                                                                        {
                                                                                                                                          if(match_string(y_13, "huge"))
                                                                                                                                            {
                                                                                                                                              t = m_15(t);
                                                                                                                                            }
                                                                                                                                          else
                                                                                                                                            {
                                                                                                                                              if(match_string(y_13, "Huge"))
                                                                                                                                                {
                                                                                                                                                  t = n_15(t);
                                                                                                                                                }
                                                                                                                                              else
                                                                                                                                                {
                                                                                                                                                  if(match_cons(y_13, sym_BOXCOLOR_1))
                                                                                                                                                    {
                                                                                                                                                      z_13 = ATgetArgument(y_13, 0);
                                                                                                                                                      t = o_15(t);
                                                                                                                                                    }
                                                                                                                                                  else
                                                                                                                                                    {
                                                                                                                                                      _fail(t);
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
                                              else
                                                {
                                                  _fail(t);
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
      LocalPopChoice(i_8);
    }
  else
    {
      t = h_8;
      {
        ATerm y_11 = t;
        int z_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = C_0(t);
            t = term_a_12;
            LocalPopChoice(z_11);
          }
        else
          {
            t = y_11;
            {
              ATerm b_12 = t;
              int c_12 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = R_0(t);
                  t = term_d_12;
                  LocalPopChoice(c_12);
                }
              else
                {
                  t = b_12;
                  {
                    ATerm e_12 = t;
                    int f_12 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = L_0(t);
                        t = term_g_12;
                        LocalPopChoice(f_12);
                      }
                    else
                      {
                        t = e_12;
                        {
                          ATerm h_12 = t;
                          int i_12 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = EOR_0(t);
                              t = term_j_12;
                              LocalPopChoice(i_12);
                            }
                          else
                            {
                              t = h_12;
                              {
                                t = CSEP_0(t);
                                t = term_k_12;
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
ATerm bottomup_1 (ATerm t, ATerm i_82 (ATerm))
{
  ATerm r_0 (ATerm t)
  {
    t = bottomup_1(t, i_82);
    return(t);
  }
  t = _all(t, r_0);
  t = i_82(t);
  return(t);
}
ATerm latex2text_0 (ATerm t)
{
  ATerm s_0 (ATerm t)
  {
    t = try_1(t, Latex2text_0);
    return(t);
  }
  t = bottomup_1(t, s_0);
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm r_15 = NULL,s_15 = NULL,t_15 = NULL;
  r_15 = t;
  q_15 :
  if(((ATermList) r_15 == ATempty))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(r_15) == AT_LIST) && ((ATermList) r_15 != ATempty)))
        {
          s_15 = ATgetFirst((ATermList) r_15);
          t_15 = (ATerm) ATgetNext((ATermList) r_15);
          {
          }
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm flat_list_0 (ATerm t)
{
  ATerm y_15 = NULL,z_15 = NULL;
  ATerm l_12 = t;
  int m_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(m_12);
    }
  else
    {
      t = l_12;
      {
        ATerm n_12 = t;
        int o_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_16 = NULL,b_16 = NULL,c_16 = NULL;
            ATerm f_16 (ATerm t)
            {
              if(((y_15 != NULL) && (y_15 != b_16)))
                _fail(b_16);
              else
                y_15 = b_16;
              {
                if(((z_15 != NULL) && (z_15 != c_16)))
                  _fail(c_16);
                else
                  z_15 = c_16;
                {
                  t = not_null(y_15);
                  {
                    t = is_list_0(t);
                    {
                      t = (ATerm) ATmakeAppl(sym__2, not_null(y_15), not_null(z_15));
                      {
                        t = conc_0(t);
                        t = flat_list_0(t);
                      }
                    }
                  }
                }
              }
              return(t);
            }
            a_16 = t;
            w_15 :
            if(((ATgetType(a_16) == AT_LIST) && ((ATermList) a_16 != ATempty)))
              {
                b_16 = ATgetFirst((ATermList) a_16);
                c_16 = (ATerm) ATgetNext((ATermList) a_16);
                x_15 :
                if(((ATermList) b_16 == ATempty))
                  {
                    {
                      ATerm p_12 = t;
                      int q_12 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          if(((z_15 != NULL) && (z_15 != c_16)))
                            _fail(c_16);
                          else
                            z_15 = c_16;
                          {
                            ATerm t_0 (ATerm t)
                            {
                              t = not_null(z_15);
                              t = flat_list_0(t);
                              return(t);
                            }
                            t = Cons_2(t, Nil_0, t_0);
                          }
                          LocalPopChoice(q_12);
                        }
                      else
                        {
                          t = p_12;
                          t = f_16(t);
                        }
                    }
                  }
                else
                  {
                    t = f_16(t);
                  }
              }
            else
              {
                _fail(t);
              }
            LocalPopChoice(o_12);
          }
        else
          {
            t = n_12;
            t = Cons_2(t, _id, flat_list_0);
          }
      }
    }
  return(t);
}
ATerm replace_quotes_0 (ATerm t)
{
  ATerm m_16 = NULL,p_16 = NULL;
  ATerm x_0 (ATerm t)
  {
    ATerm n_16 = NULL;
    n_16 = t;
    g_16 :
    if(!(match_int(n_16, 34)))
      {
        _fail(t);
      }
    return(t);
  }
  ATerm y_0 (ATerm t)
  {
    ATerm o_16 = NULL;
    o_16 = t;
    if(((m_16 != NULL) && (m_16 != o_16)))
      _fail(o_16);
    else
      m_16 = o_16;
    return(t);
  }
  t = Cons_2(t, x_0, y_0);
  {
    ATerm u_16 = NULL;
    t = not_null(m_16);
    {
      ATerm z_0 (ATerm t)
      {
        ATerm q_16 = NULL,r_16 = NULL,s_16 = NULL;
        q_16 = t;
        j_16 :
        if(((ATgetType(q_16) == AT_LIST) && ((ATermList) q_16 != ATempty)))
          {
            r_16 = ATgetFirst((ATermList) q_16);
            s_16 = (ATerm) ATgetNext((ATermList) q_16);
            k_16 :
            if(match_int(r_16, 34))
              {
                t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(s_16)), term_r_12), term_r_12);
              }
            else
              {
                _fail(t);
              }
          }
        else
          {
            _fail(t);
          }
        return(t);
      }
      t = at_suffix_1(t, z_0);
      {
        u_16 = t;
        if(((p_16 != NULL) && (p_16 != u_16)))
          _fail(u_16);
        else
          p_16 = u_16;
      }
    }
    t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(p_16)), term_s_12), term_s_12);
  }
  return(t);
}
ATerm listtd_1 (ATerm t, ATerm w_78 (ATerm))
{
  ATerm y_16 (ATerm t)
  {
    t = w_78(t);
    {
      ATerm t_12 = t;
      int u_12 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Nil_0(t);
          LocalPopChoice(u_12);
        }
      else
        {
          t = t_12;
          t = Cons_2(t, _id, y_16);
        }
    }
    return(t);
  }
  t = y_16(t);
  return(t);
}
ATerm latex_string_0 (ATerm t)
{
  ATerm q_17 = NULL;
  ATerm v_12 = t;
  int w_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_17 = NULL;
      r_17 = t;
      {
        if(((q_17 != NULL) && (q_17 != r_17)))
          _fail(r_17);
        else
          q_17 = r_17;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_x_12, not_null(q_17));
          t = table_get_0(t);
        }
      }
      LocalPopChoice(w_12);
    }
  else
    {
      t = v_12;
      {
        t = explode_string_0(t);
        {
          ATerm a_1 (ATerm t)
          {
            t = try_1(t, replace_quotes_0);
            return(t);
          }
          t = listtd_1(t, a_1);
          {
            ATerm b_1 (ATerm t)
            {
              ATerm c_1 (ATerm t)
              {
                ATerm s_17 = NULL;
                s_17 = t;
                p_17 :
                if(match_int(s_17, 32))
                  {
                    t = term_y_12;
                    t = explode_string_0(t);
                  }
                else
                  {
                    if(match_int(s_17, 35))
                      {
                        t = term_z_12;
                        t = explode_string_0(t);
                      }
                    else
                      {
                        if(match_int(s_17, 36))
                          {
                            t = term_a_13;
                            t = explode_string_0(t);
                          }
                        else
                          {
                            if(match_int(s_17, 37))
                              {
                                t = term_b_13;
                                t = explode_string_0(t);
                              }
                            else
                              {
                                if(match_int(s_17, 38))
                                  {
                                    t = term_c_13;
                                    t = explode_string_0(t);
                                  }
                                else
                                  {
                                    if(match_int(s_17, 45))
                                      {
                                        t = term_d_14;
                                        t = explode_string_0(t);
                                      }
                                    else
                                      {
                                        if(match_int(s_17, 60))
                                          {
                                            t = term_e_14;
                                            t = explode_string_0(t);
                                          }
                                        else
                                          {
                                            if(match_int(s_17, 62))
                                              {
                                                t = term_f_14;
                                                t = explode_string_0(t);
                                              }
                                            else
                                              {
                                                if(match_int(s_17, 92))
                                                  {
                                                    t = term_g_14;
                                                    t = explode_string_0(t);
                                                  }
                                                else
                                                  {
                                                    if(match_int(s_17, 94))
                                                      {
                                                        t = term_h_14;
                                                        t = explode_string_0(t);
                                                      }
                                                    else
                                                      {
                                                        if(match_int(s_17, 95))
                                                          {
                                                            t = term_i_14;
                                                            t = explode_string_0(t);
                                                          }
                                                        else
                                                          {
                                                            if(match_int(s_17, 123))
                                                              {
                                                                t = term_j_14;
                                                                t = explode_string_0(t);
                                                              }
                                                            else
                                                              {
                                                                if(match_int(s_17, 124))
                                                                  {
                                                                    t = term_k_14;
                                                                    t = explode_string_0(t);
                                                                  }
                                                                else
                                                                  {
                                                                    if(match_int(s_17, 125))
                                                                      {
                                                                        t = term_p_15;
                                                                        t = explode_string_0(t);
                                                                      }
                                                                    else
                                                                      {
                                                                        if(match_int(s_17, 126))
                                                                          {
                                                                            t = term_u_15;
                                                                            t = explode_string_0(t);
                                                                          }
                                                                        else
                                                                          {
                                                                            _fail(t);
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
              t = try_1(t, c_1);
              return(t);
            }
            t = map_1(t, b_1);
            {
              t = flat_list_0(t);
              t = implode_string_0(t);
            }
          }
        }
      }
    }
  return(t);
}
ATerm Tl_0 (ATerm t)
{
  ATerm l_18 = NULL,m_18 = NULL,n_18 = NULL;
  l_18 = t;
  k_18 :
  if(((ATgetType(l_18) == AT_LIST) && ((ATermList) l_18 != ATempty)))
    {
      m_18 = ATgetFirst((ATermList) l_18);
      n_18 = (ATerm) ATgetNext((ATermList) l_18);
      t = not_null(n_18);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm remove_trailing_1 (ATerm t, ATerm d_87 (ATerm))
{
  ATerm r_18 (ATerm t)
  {
    ATerm v_15 = t;
    int d_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, d_87, _id);
        {
          t = Tl_0(t);
          t = r_18(t);
        }
        LocalPopChoice(d_16);
      }
    else
      {
        t = v_15;
        {
        }
      }
    return(t);
  }
  t = r_18(t);
  return(t);
}
ATerm at_suffix_1 (ATerm t, ATerm k_78 (ATerm))
{
  ATerm s_18 (ATerm t)
  {
    ATerm e_16 = t;
    int h_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = k_78(t);
        LocalPopChoice(h_16);
      }
    else
      {
        t = e_16;
        t = Cons_2(t, _id, s_18);
      }
    return(t);
  }
  t = s_18(t);
  return(t);
}
ATerm LatexComment_0 (ATerm t)
{
  ATerm y_18 = NULL;
  ATerm d_1 (ATerm t)
  {
    ATerm x_18 = NULL;
    x_18 = t;
    t_18 :
    if(!(match_int(x_18, 9)))
      {
        if(!(match_int(x_18, 32)))
          {
            _fail(t);
          }
      }
    return(t);
  }
  t = remove_trailing_1(t, d_1);
  {
    ATerm e_1 (ATerm t)
    {
      ATerm f_1 (ATerm t)
      {
        ATerm g_1 (ATerm t)
        {
          ATerm z_18 = NULL;
          z_18 = t;
          u_18 :
          if(!(match_int(z_18, 37)))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm j_1 (ATerm t)
        {
          ATerm k_1 (ATerm t)
          {
            ATerm a_19 = NULL;
            a_19 = t;
            v_18 :
            if(!(match_int(a_19, 37)))
              {
                _fail(t);
              }
            return(t);
          }
          ATerm l_1 (ATerm t)
          {
            ATerm b_19 = NULL;
            b_19 = t;
            if(((y_18 != NULL) && (y_18 != b_19)))
              _fail(b_19);
            else
              y_18 = b_19;
            return(t);
          }
          t = Cons_2(t, k_1, l_1);
          return(t);
        }
        t = Cons_2(t, g_1, j_1);
        t = not_null(y_18);
        return(t);
      }
      t = at_suffix_1(t, f_1);
      return(t);
    }
    t = try_1(t, e_1);
    t = implode_string_0(t);
  }
  return(t);
}
ATerm make_latex_comment_0 (ATerm t)
{
  t = explode_string_0(t);
  {
    t = reverse_0(t);
    {
      ATerm o_1 (ATerm t)
      {
        t = (ATerm) ATempty;
        return(t);
      }
      t = split_2(t, _id, o_1);
      {
        ATerm n_20 (ATerm t)
        {
          ATerm p_19 = NULL,q_19 = NULL,r_19 = NULL,s_19 = NULL,t_19 = NULL;
          ATerm q_20 (ATerm t)
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(s_19), (ATerm) ATinsert(CheckATermList(not_null(t_19)), not_null(r_19)));
            t = n_20(t);
            return(t);
          }
          p_19 = t;
          j_19 :
          if(match_cons(p_19, sym__2))
            {
              q_19 = ATgetArgument(p_19, 0);
              t_19 = ATgetArgument(p_19, 1);
              k_19 :
              if(((ATermList) q_19 == ATempty))
                {
                  {
                    ATerm x_19 = NULL;
                    ATerm y_19 = NULL;
                    t = not_null(t_19);
                    {
                      t = LatexComment_0(t);
                      {
                        y_19 = t;
                        if(((x_19 != NULL) && (x_19 != y_19)))
                          _fail(y_19);
                        else
                          x_19 = y_19;
                      }
                    }
                    t = (ATerm) ATinsert(ATempty, not_null(x_19));
                  }
                }
              else
                {
                  if(((ATgetType(q_19) == AT_LIST) && ((ATermList) q_19 != ATempty)))
                    {
                      r_19 = ATgetFirst((ATermList) q_19);
                      s_19 = (ATerm) ATgetNext((ATermList) q_19);
                      l_19 :
                      if(match_int(r_19, 10))
                        {
                          ATerm i_16 = t;
                          int l_16 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm c_20 = NULL,e_20 = NULL;
                              ATerm t_16;
                              t_16 = t;
                              {
                                ATerm d_20 = NULL;
                                t = not_null(t_19);
                                {
                                  t = LatexComment_0(t);
                                  {
                                    d_20 = t;
                                    if(((c_20 != NULL) && (c_20 != d_20)))
                                      _fail(d_20);
                                    else
                                      c_20 = d_20;
                                  }
                                }
                              }
                              t = t_16;
                              {
                                ATerm f_20 = NULL;
                                t = (ATerm) ATmakeAppl(sym__2, not_null(s_19), (ATerm) ATempty);
                                {
                                  t = n_20(t);
                                  {
                                    f_20 = t;
                                    if(((e_20 != NULL) && (e_20 != f_20)))
                                      _fail(f_20);
                                    else
                                      e_20 = f_20;
                                  }
                                }
                                t = (ATerm) ATinsert(CheckATermList(not_null(e_20)), not_null(c_20));
                              }
                              LocalPopChoice(l_16);
                            }
                          else
                            {
                              t = i_16;
                              t = q_20(t);
                            }
                        }
                      else
                        {
                          t = q_20(t);
                        }
                    }
                  else
                    {
                      _fail(t);
                    }
                }
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = n_20(t);
        {
          ATerm p_1 (ATerm t)
          {
            ATerm j_20 = NULL;
            j_20 = t;
            m_19 :
            if(!(match_string(j_20, "")))
              {
                _fail(t);
              }
            return(t);
          }
          t = remove_trailing_1(t, p_1);
          {
            t = reverse_0(t);
            {
              ATerm q_1 (ATerm t)
              {
                ATerm k_20 = NULL;
                k_20 = t;
                n_19 :
                if(!(match_string(k_20, "")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              t = remove_trailing_1(t, q_1);
              {
                ATerm r_1 (ATerm t)
                {
                  ATerm l_20 = NULL;
                  l_20 = t;
                  t = (ATerm) ATinsert(ATinsert(ATempty, term_v_16), not_null(l_20));
                  return(t);
                }
                t = map_1(t, r_1);
              }
            }
          }
        }
      }
    }
  }
  return(t);
}
ATerm MATH_0 (ATerm t)
{
  ATerm z_20 = NULL;
  z_20 = t;
  y_20 :
  if(match_cons(z_20, sym_MATH_0))
    {
      ATerm b_21 = NULL,d_21 = NULL;
      ATerm w_16;
      w_16 = t;
      {
        ATerm c_21 = NULL;
        t = SSLgetAnnotations(not_null(z_20));
        {
          c_21 = t;
          if(((b_21 != NULL) && (b_21 != c_21)))
            _fail(c_21);
          else
            b_21 = c_21;
        }
      }
      t = w_16;
      {
        ATerm e_21 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_MATH_0), not_null(b_21));
        {
          e_21 = t;
          if(((d_21 != NULL) && (d_21 != e_21)))
            _fail(e_21);
          else
            d_21 = e_21;
        }
        t = not_null(d_21);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm NUM_0 (ATerm t)
{
  ATerm m_21 = NULL;
  m_21 = t;
  l_21 :
  if(match_cons(m_21, sym_NUM_0))
    {
      ATerm o_21 = NULL,q_21 = NULL;
      ATerm x_16;
      x_16 = t;
      {
        ATerm p_21 = NULL;
        t = SSLgetAnnotations(not_null(m_21));
        {
          p_21 = t;
          if(((o_21 != NULL) && (o_21 != p_21)))
            _fail(p_21);
          else
            o_21 = p_21;
        }
      }
      t = x_16;
      {
        ATerm r_21 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_NUM_0), not_null(o_21));
        {
          r_21 = t;
          if(((q_21 != NULL) && (q_21 != r_21)))
            _fail(r_21);
          else
            q_21 = r_21;
        }
        t = not_null(q_21);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm VAR_0 (ATerm t)
{
  ATerm z_21 = NULL;
  z_21 = t;
  y_21 :
  if(match_cons(z_21, sym_VAR_0))
    {
      ATerm b_22 = NULL,d_22 = NULL;
      ATerm z_16;
      z_16 = t;
      {
        ATerm c_22 = NULL;
        t = SSLgetAnnotations(not_null(z_21));
        {
          c_22 = t;
          if(((b_22 != NULL) && (b_22 != c_22)))
            _fail(c_22);
          else
            b_22 = c_22;
        }
      }
      t = z_16;
      {
        ATerm e_22 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_VAR_0), not_null(b_22));
        {
          e_22 = t;
          if(((d_22 != NULL) && (d_22 != e_22)))
            _fail(e_22);
          else
            d_22 = e_22;
        }
        t = not_null(d_22);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm KW_0 (ATerm t)
{
  ATerm m_22 = NULL;
  m_22 = t;
  l_22 :
  if(match_cons(m_22, sym_KW_0))
    {
      ATerm o_22 = NULL,q_22 = NULL;
      ATerm a_17;
      a_17 = t;
      {
        ATerm p_22 = NULL;
        t = SSLgetAnnotations(not_null(m_22));
        {
          p_22 = t;
          if(((o_22 != NULL) && (o_22 != p_22)))
            _fail(p_22);
          else
            o_22 = p_22;
        }
      }
      t = a_17;
      {
        ATerm r_22 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_KW_0), not_null(o_22));
        {
          r_22 = t;
          if(((q_22 != NULL) && (q_22 != r_22)))
            _fail(r_22);
          else
            q_22 = r_22;
        }
        t = not_null(q_22);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm CL_0 (ATerm t)
{
  ATerm z_22 = NULL;
  z_22 = t;
  y_22 :
  if(match_cons(z_22, sym_CL_0))
    {
      ATerm b_23 = NULL,d_23 = NULL;
      ATerm b_17;
      b_17 = t;
      {
        ATerm c_23 = NULL;
        t = SSLgetAnnotations(not_null(z_22));
        {
          c_23 = t;
          if(((b_23 != NULL) && (b_23 != c_23)))
            _fail(c_23);
          else
            b_23 = c_23;
        }
      }
      t = b_17;
      {
        ATerm l_23 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_CL_0), not_null(b_23));
        {
          l_23 = t;
          if(((d_23 != NULL) && (d_23 != l_23)))
            _fail(l_23);
          else
            d_23 = l_23;
        }
        t = not_null(d_23);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm FFID_2 (ATerm t, ATerm o_59 (ATerm), ATerm p_59 (ATerm))
{
  ATerm v_23 = NULL,w_23 = NULL,x_23 = NULL;
  v_23 = t;
  u_23 :
  if(match_cons(v_23, sym_FFID_2))
    {
      w_23 = ATgetArgument(v_23, 0);
      x_23 = ATgetArgument(v_23, 1);
      {
        ATerm e_24 = NULL,g_24 = NULL;
        ATerm f_24 = NULL;
        t = SSLgetAnnotations(not_null(v_23));
        {
          f_24 = t;
          if(((e_24 != NULL) && (e_24 != f_24)))
            _fail(f_24);
          else
            e_24 = f_24;
        }
        {
          t = not_null(w_23);
          {
            ATerm i_24 = NULL;
            t = o_59(t);
            {
              g_24 = t;
              {
                t = not_null(x_23);
                {
                  ATerm k_24 = NULL;
                  t = p_59(t);
                  {
                    i_24 = t;
                    {
                      ATerm l_24 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FFID_2, not_null(g_24), not_null(i_24)), not_null(e_24));
                      {
                        l_24 = t;
                        if(((k_24 != NULL) && (k_24 != l_24)))
                          _fail(l_24);
                        else
                          k_24 = l_24;
                      }
                      t = not_null(k_24);
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm SZ_0 (ATerm t)
{
  ATerm w_24 = NULL;
  w_24 = t;
  v_24 :
  if(match_cons(w_24, sym_SZ_0))
    {
      ATerm y_24 = NULL,a_25 = NULL;
      ATerm c_17;
      c_17 = t;
      {
        ATerm z_24 = NULL;
        t = SSLgetAnnotations(not_null(w_24));
        {
          z_24 = t;
          if(((y_24 != NULL) && (y_24 != z_24)))
            _fail(z_24);
          else
            y_24 = z_24;
        }
      }
      t = c_17;
      {
        ATerm b_25 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SZ_0), not_null(y_24));
        {
          b_25 = t;
          if(((a_25 != NULL) && (a_25 != b_25)))
            _fail(b_25);
          else
            a_25 = b_25;
        }
        t = not_null(a_25);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm SH_0 (ATerm t)
{
  ATerm j_25 = NULL;
  j_25 = t;
  i_25 :
  if(match_cons(j_25, sym_SH_0))
    {
      ATerm l_25 = NULL,n_25 = NULL;
      ATerm d_17;
      d_17 = t;
      {
        ATerm m_25 = NULL;
        t = SSLgetAnnotations(not_null(j_25));
        {
          m_25 = t;
          if(((l_25 != NULL) && (l_25 != m_25)))
            _fail(m_25);
          else
            l_25 = m_25;
        }
      }
      t = d_17;
      {
        ATerm o_25 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SH_0), not_null(l_25));
        {
          o_25 = t;
          if(((n_25 != NULL) && (n_25 != o_25)))
            _fail(o_25);
          else
            n_25 = o_25;
        }
        t = not_null(n_25);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm SE_0 (ATerm t)
{
  ATerm w_25 = NULL;
  w_25 = t;
  v_25 :
  if(match_cons(w_25, sym_SE_0))
    {
      ATerm y_25 = NULL,a_26 = NULL;
      ATerm e_17;
      e_17 = t;
      {
        ATerm z_25 = NULL;
        t = SSLgetAnnotations(not_null(w_25));
        {
          z_25 = t;
          if(((y_25 != NULL) && (y_25 != z_25)))
            _fail(z_25);
          else
            y_25 = z_25;
        }
      }
      t = e_17;
      {
        ATerm b_26 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SE_0), not_null(y_25));
        {
          b_26 = t;
          if(((a_26 != NULL) && (a_26 != b_26)))
            _fail(b_26);
          else
            a_26 = b_26;
        }
        t = not_null(a_26);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm FM_0 (ATerm t)
{
  ATerm r_26 = NULL;
  r_26 = t;
  q_26 :
  if(match_cons(r_26, sym_FM_0))
    {
      ATerm v_26 = NULL,x_26 = NULL;
      ATerm f_17;
      f_17 = t;
      {
        ATerm w_26 = NULL;
        t = SSLgetAnnotations(not_null(r_26));
        {
          w_26 = t;
          if(((v_26 != NULL) && (v_26 != w_26)))
            _fail(w_26);
          else
            v_26 = w_26;
        }
      }
      t = f_17;
      {
        ATerm y_26 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FM_0), not_null(v_26));
        {
          y_26 = t;
          if(((x_26 != NULL) && (x_26 != y_26)))
            _fail(y_26);
          else
            x_26 = y_26;
        }
        t = not_null(x_26);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm toh_0 (ATerm t)
{
  ATerm s_1 (ATerm t)
  {
    ATerm g_17 = t;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = g_17;
      }
    return(t);
  }
  t = filter_1(t, s_1);
  {
    ATerm t_1 (ATerm t)
    {
      t = term_h_17;
      return(t);
    }
    t = separate_by_1(t, t_1);
  }
  return(t);
}
ATerm HS_0 (ATerm t)
{
  ATerm i_27 = NULL;
  i_27 = t;
  h_27 :
  if(match_cons(i_27, sym_HS_0))
    {
      ATerm k_27 = NULL,r_27 = NULL;
      ATerm i_17;
      i_17 = t;
      {
        ATerm q_27 = NULL;
        t = SSLgetAnnotations(not_null(i_27));
        {
          q_27 = t;
          if(((k_27 != NULL) && (k_27 != q_27)))
            _fail(q_27);
          else
            k_27 = q_27;
        }
      }
      t = i_17;
      {
        ATerm s_27 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_HS_0), not_null(k_27));
        {
          s_27 = t;
          if(((r_27 != NULL) && (r_27 != s_27)))
            _fail(s_27);
          else
            r_27 = s_27;
        }
        t = not_null(r_27);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Hspace_0 (ATerm t)
{
  ATerm y_27 = NULL;
  ATerm j_17 = t;
  int k_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_1 (ATerm t)
      {
        ATerm v_1 (ATerm t)
        {
          ATerm z_27 = NULL;
          z_27 = t;
          if(((y_27 != NULL) && (y_27 != z_27)))
            _fail(z_27);
          else
            y_27 = z_27;
          return(t);
        }
        t = SOpt_2(t, HS_0, v_1);
        return(t);
      }
      t = fetch_1(t, u_1);
      t = not_null(y_27);
      LocalPopChoice(k_17);
    }
  else
    {
      t = j_17;
      t = term_l_17;
    }
  return(t);
}
ATerm Sep_1 (ATerm t, ATerm k_79 (ATerm))
{
  ATerm e_28 = NULL,f_28 = NULL,g_28 = NULL;
  e_28 = t;
  d_28 :
  if(((ATgetType(e_28) == AT_LIST) && ((ATermList) e_28 != ATempty)))
    {
      f_28 = ATgetFirst((ATermList) e_28);
      g_28 = (ATerm) ATgetNext((ATermList) e_28);
      {
        ATerm k_28 = NULL;
        ATerm l_28 = NULL;
        t = term_m_17;
        {
          t = k_79(t);
          {
            l_28 = t;
            if(((k_28 != NULL) && (k_28 != l_28)))
              _fail(l_28);
            else
              k_28 = l_28;
          }
        }
        t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(g_28)), not_null(f_28)), not_null(k_28));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm separate_by_1 (ATerm t, ATerm l_79 (ATerm))
{
  ATerm n_17 = t;
  int o_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(o_17);
    }
  else
    {
      t = n_17;
      {
        ATerm w_1 (ATerm t)
        {
          ATerm t_17 = t;
          int u_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(u_17);
            }
          else
            {
              t = t_17;
              {
                t = Cons_2(t, _id, w_1);
                t = Sep_1(t, l_79);
              }
            }
          return(t);
        }
        t = Cons_2(t, _id, w_1);
      }
    }
  return(t);
}
ATerm filter_1 (ATerm t, ATerm m_71 (ATerm))
{
  ATerm v_17 = t;
  int w_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(w_17);
    }
  else
    {
      t = v_17;
      {
        ATerm x_17 = t;
        int y_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_1 (ATerm t)
            {
              t = filter_1(t, m_71);
              return(t);
            }
            t = Cons_2(t, m_71, x_1);
            LocalPopChoice(y_17);
          }
        else
          {
            t = x_17;
            {
              ATerm r_28 = NULL,s_28 = NULL,t_28 = NULL;
              r_28 = t;
              q_28 :
              if(((ATgetType(r_28) == AT_LIST) && ((ATermList) r_28 != ATempty)))
                {
                  s_28 = ATgetFirst((ATermList) r_28);
                  t_28 = (ATerm) ATgetNext((ATermList) r_28);
                  {
                    t = not_null(t_28);
                    t = filter_1(t, m_71);
                  }
                }
              else
                {
                  _fail(t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm IS_0 (ATerm t)
{
  ATerm a_29 = NULL;
  a_29 = t;
  z_28 :
  if(match_cons(a_29, sym_IS_0))
    {
      ATerm c_29 = NULL,e_29 = NULL;
      ATerm z_17;
      z_17 = t;
      {
        ATerm d_29 = NULL;
        t = SSLgetAnnotations(not_null(a_29));
        {
          d_29 = t;
          if(((c_29 != NULL) && (c_29 != d_29)))
            _fail(d_29);
          else
            c_29 = d_29;
        }
      }
      t = z_17;
      {
        ATerm f_29 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_IS_0), not_null(c_29));
        {
          f_29 = t;
          if(((e_29 != NULL) && (e_29 != f_29)))
            _fail(f_29);
          else
            e_29 = f_29;
        }
        t = not_null(e_29);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Ispace_0 (ATerm t)
{
  ATerm k_29 = NULL;
  ATerm a_18 = t;
  int b_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_1 (ATerm t)
      {
        ATerm z_1 (ATerm t)
        {
          ATerm l_29 = NULL;
          l_29 = t;
          if(((k_29 != NULL) && (k_29 != l_29)))
            _fail(l_29);
          else
            k_29 = l_29;
          return(t);
        }
        t = SOpt_2(t, IS_0, z_1);
        return(t);
      }
      t = fetch_1(t, y_1);
      t = not_null(k_29);
      LocalPopChoice(b_18);
    }
  else
    {
      t = a_18;
      t = term_c_18;
    }
  return(t);
}
ATerm VS_0 (ATerm t)
{
  ATerm r_29 = NULL;
  r_29 = t;
  q_29 :
  if(match_cons(r_29, sym_VS_0))
    {
      ATerm t_29 = NULL,v_29 = NULL;
      ATerm d_18;
      d_18 = t;
      {
        ATerm u_29 = NULL;
        t = SSLgetAnnotations(not_null(r_29));
        {
          u_29 = t;
          if(((t_29 != NULL) && (t_29 != u_29)))
            _fail(u_29);
          else
            t_29 = u_29;
        }
      }
      t = d_18;
      {
        ATerm w_29 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_VS_0), not_null(t_29));
        {
          w_29 = t;
          if(((v_29 != NULL) && (v_29 != w_29)))
            _fail(w_29);
          else
            v_29 = w_29;
        }
        t = not_null(v_29);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm SOpt_2 (ATerm t, ATerm r_58 (ATerm), ATerm s_58 (ATerm))
{
  ATerm m_30 = NULL,n_30 = NULL,o_30 = NULL;
  m_30 = t;
  h_30 :
  if(match_cons(m_30, sym_SOpt_2))
    {
      n_30 = ATgetArgument(m_30, 0);
      o_30 = ATgetArgument(m_30, 1);
      {
        ATerm t_30 = NULL,v_30 = NULL;
        ATerm u_30 = NULL;
        t = SSLgetAnnotations(not_null(m_30));
        {
          u_30 = t;
          if(((t_30 != NULL) && (t_30 != u_30)))
            _fail(u_30);
          else
            t_30 = u_30;
        }
        {
          t = not_null(n_30);
          {
            ATerm x_30 = NULL;
            t = r_58(t);
            {
              v_30 = t;
              {
                t = not_null(o_30);
                {
                  ATerm z_30 = NULL;
                  t = s_58(t);
                  {
                    x_30 = t;
                    {
                      ATerm a_31 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SOpt_2, not_null(v_30), not_null(x_30)), not_null(t_30));
                      {
                        a_31 = t;
                        if(((z_30 != NULL) && (z_30 != a_31)))
                          _fail(a_31);
                        else
                          z_30 = a_31;
                      }
                      t = not_null(z_30);
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Vspace_0 (ATerm t)
{
  ATerm h_31 = NULL;
  ATerm e_18 = t;
  int f_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_2 (ATerm t)
      {
        ATerm b_2 (ATerm t)
        {
          ATerm i_31 = NULL;
          i_31 = t;
          if(((h_31 != NULL) && (h_31 != i_31)))
            _fail(i_31);
          else
            h_31 = i_31;
          return(t);
        }
        t = SOpt_2(t, VS_0, b_2);
        return(t);
      }
      t = fetch_1(t, a_2);
      t = not_null(h_31);
      LocalPopChoice(f_18);
    }
  else
    {
      t = e_18;
      t = term_c_18;
    }
  return(t);
}
ATerm C_2 (ATerm t, ATerm x_59 (ATerm), ATerm y_59 (ATerm))
{
  ATerm q_31 = NULL,r_31 = NULL,s_31 = NULL;
  q_31 = t;
  p_31 :
  if(match_cons(q_31, sym_C_2))
    {
      r_31 = ATgetArgument(q_31, 0);
      s_31 = ATgetArgument(q_31, 1);
      {
        ATerm z_31 = NULL,d_32 = NULL;
        ATerm c_32 = NULL;
        t = SSLgetAnnotations(not_null(q_31));
        {
          c_32 = t;
          if(((z_31 != NULL) && (z_31 != c_32)))
            _fail(c_32);
          else
            z_31 = c_32;
        }
        {
          t = not_null(r_31);
          {
            ATerm f_32 = NULL;
            t = x_59(t);
            {
              d_32 = t;
              {
                t = not_null(s_31);
                {
                  ATerm h_32 = NULL;
                  t = y_59(t);
                  {
                    f_32 = t;
                    {
                      ATerm i_32 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_C_2, not_null(d_32), not_null(f_32)), not_null(z_31));
                      {
                        i_32 = t;
                        if(((h_32 != NULL) && (h_32 != i_32)))
                          _fail(i_32);
                        else
                          h_32 = i_32;
                      }
                      t = not_null(h_32);
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_row_0 (ATerm t)
{
  ATerm w_32 = NULL,x_32 = NULL,y_32 = NULL;
  w_32 = t;
  t_32 :
  if(match_cons(w_32, sym_R_2))
    {
      x_32 = ATgetArgument(w_32, 0);
      y_32 = ATgetArgument(w_32, 1);
      {
        t = not_null(y_32);
        {
          ATerm o_33 (ATerm t)
          {
            ATerm b_33 = NULL,e_33 = NULL,f_33 = NULL;
            ATerm g_18 = t;
            int h_18 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                LocalPopChoice(h_18);
              }
            else
              {
                t = g_18;
                {
                  ATerm i_18 = t;
                  int j_18 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = Cons_2(t, _id, Nil_0);
                      LocalPopChoice(j_18);
                    }
                  else
                    {
                      t = i_18;
                      {
                        ATerm o_18 = t;
                        int p_18 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm c_2 (ATerm t)
                            {
                              t = C_2(t, _id, _id);
                              return(t);
                            }
                            ATerm d_2 (ATerm t)
                            {
                              t = Cons_2(t, _id, o_33);
                              return(t);
                            }
                            t = Cons_2(t, c_2, d_2);
                            LocalPopChoice(p_18);
                          }
                        else
                          {
                            t = o_18;
                            {
                              ATerm q_18 = t;
                              int w_18 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm f_2 (ATerm t)
                                  {
                                    ATerm h_2 (ATerm t)
                                    {
                                      t = C_2(t, _id, _id);
                                      return(t);
                                    }
                                    t = Cons_2(t, h_2, o_33);
                                    return(t);
                                  }
                                  t = Cons_2(t, _id, f_2);
                                  LocalPopChoice(w_18);
                                }
                              else
                                {
                                  t = q_18;
                                  {
                                    ATerm g_33 = NULL,h_33 = NULL,i_33 = NULL,j_33 = NULL,k_33 = NULL;
                                    g_33 = t;
                                    r_32 :
                                    if(((ATgetType(g_33) == AT_LIST) && ((ATermList) g_33 != ATempty)))
                                      {
                                        h_33 = ATgetFirst((ATermList) g_33);
                                        i_33 = (ATerm) ATgetNext((ATermList) g_33);
                                        s_32 :
                                        if(((ATgetType(i_33) == AT_LIST) && ((ATermList) i_33 != ATempty)))
                                          {
                                            j_33 = ATgetFirst((ATermList) i_33);
                                            k_33 = (ATerm) ATgetNext((ATermList) i_33);
                                            {
                                              ATerm l_33 = NULL;
                                              if(((b_33 != NULL) && (b_33 != h_33)))
                                                _fail(h_33);
                                              else
                                                b_33 = h_33;
                                              {
                                                if(((e_33 != NULL) && (e_33 != j_33)))
                                                  _fail(j_33);
                                                else
                                                  e_33 = j_33;
                                                {
                                                  if(((f_33 != NULL) && (f_33 != k_33)))
                                                    _fail(k_33);
                                                  else
                                                    f_33 = k_33;
                                                  {
                                                    ATerm m_33 = NULL;
                                                    t = (ATerm) ATinsert(CheckATermList(not_null(f_33)), not_null(e_33));
                                                    {
                                                      t = o_33(t);
                                                      {
                                                        m_33 = t;
                                                        if(((l_33 != NULL) && (l_33 != m_33)))
                                                          _fail(m_33);
                                                        else
                                                          l_33 = m_33;
                                                      }
                                                    }
                                                    t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(l_33)), term_c_19), not_null(b_33));
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        else
                                          {
                                            _fail(t);
                                          }
                                      }
                                    else
                                      {
                                        _fail(t);
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
          t = o_33(t);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm MkRows_0 (ATerm t)
{
  ATerm u_33 = NULL,v_33 = NULL;
  ATerm d_19 = t;
  int e_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_33 = NULL,x_33 = NULL,y_33 = NULL;
      w_33 = t;
      t_33 :
      if(match_cons(w_33, sym_LBL_2))
        {
          x_33 = ATgetArgument(w_33, 0);
          y_33 = ATgetArgument(w_33, 1);
          {
            ATerm z_33 = NULL;
            if(((u_33 != NULL) && (u_33 != x_33)))
              _fail(x_33);
            else
              u_33 = x_33;
            {
              if(((v_33 != NULL) && (v_33 != y_33)))
                _fail(y_33);
              else
                v_33 = y_33;
              {
                t = not_null(v_33);
                {
                  t = table_row_0(t);
                  {
                    ATerm a_34 = NULL;
                    t = not_null(v_33);
                    {
                      t = table_row_0(t);
                      {
                        a_34 = t;
                        if(((z_33 != NULL) && (z_33 != a_34)))
                          _fail(a_34);
                        else
                          z_33 = a_34;
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym_LBLBOX_2, not_null(u_33), not_null(z_33));
                  }
                }
              }
            }
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(e_19);
    }
  else
    {
      t = d_19;
      t = table_row_0(t);
    }
  return(t);
}
ATerm at_last_1 (ATerm t, ATerm p_78 (ATerm))
{
  ATerm d_34 (ATerm t)
  {
    ATerm f_19 = t;
    int g_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, Nil_0);
        t = p_78(t);
        LocalPopChoice(g_19);
      }
    else
      {
        t = f_19;
        t = Cons_2(t, _id, d_34);
      }
    return(t);
  }
  t = d_34(t);
  return(t);
}
ATerm table_def_0 (ATerm t)
{
  ATerm t_34 = NULL,u_34 = NULL;
  t_34 = t;
  p_34 :
  if(match_cons(t_34, sym_AOPTIONS_1))
    {
      u_34 = ATgetArgument(t_34, 0);
      {
        t = not_null(u_34);
        {
          ATerm i_2 (ATerm t)
          {
            ATerm w_34 = NULL,x_34 = NULL;
            w_34 = t;
            o_34 :
            if(match_cons(w_34, sym_AL_1))
              {
                x_34 = ATgetArgument(w_34, 0);
                {
                  ATerm z_34 = NULL;
                  ATerm a_35 = NULL,c_35 = NULL;
                  ATerm b_35 = NULL;
                  t = not_null(x_34);
                  {
                    t = Hspace_0(t);
                    {
                      t = string_to_int_0(t);
                      {
                        b_35 = t;
                        if(((a_35 != NULL) && (a_35 != b_35)))
                          _fail(b_35);
                        else
                          a_35 = b_35;
                      }
                    }
                  }
                  {
                    t = (ATerm) ATmakeAppl(sym__2, not_null(a_35), term_h_17);
                    {
                      t = copy_0(t);
                      {
                        c_35 = t;
                        if(((z_34 != NULL) && (z_34 != c_35)))
                          _fail(c_35);
                        else
                          z_34 = c_35;
                      }
                    }
                  }
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(z_34)), term_h_19);
                }
              }
            else
              {
                if(match_cons(w_34, sym_AC_1))
                  {
                    x_34 = ATgetArgument(w_34, 0);
                    {
                      ATerm e_35 = NULL;
                      ATerm f_35 = NULL,h_35 = NULL;
                      ATerm g_35 = NULL;
                      t = not_null(x_34);
                      {
                        t = Hspace_0(t);
                        {
                          t = string_to_int_0(t);
                          {
                            g_35 = t;
                            if(((f_35 != NULL) && (f_35 != g_35)))
                              _fail(g_35);
                            else
                              f_35 = g_35;
                          }
                        }
                      }
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(f_35), term_h_17);
                        {
                          t = copy_0(t);
                          {
                            h_35 = t;
                            if(((e_35 != NULL) && (e_35 != h_35)))
                              _fail(h_35);
                            else
                              e_35 = h_35;
                          }
                        }
                      }
                      t = (ATerm) ATinsert(ATinsert(ATempty, not_null(e_35)), term_i_19);
                    }
                  }
                else
                  {
                    if(match_cons(w_34, sym_AR_1))
                      {
                        x_34 = ATgetArgument(w_34, 0);
                        {
                          ATerm j_35 = NULL;
                          ATerm k_35 = NULL,m_35 = NULL;
                          ATerm l_35 = NULL;
                          t = not_null(x_34);
                          {
                            t = Hspace_0(t);
                            {
                              t = string_to_int_0(t);
                              {
                                l_35 = t;
                                if(((k_35 != NULL) && (k_35 != l_35)))
                                  _fail(l_35);
                                else
                                  k_35 = l_35;
                              }
                            }
                          }
                          {
                            t = (ATerm) ATmakeAppl(sym__2, not_null(k_35), term_h_17);
                            {
                              t = copy_0(t);
                              {
                                m_35 = t;
                                if(((j_35 != NULL) && (j_35 != m_35)))
                                  _fail(m_35);
                                else
                                  j_35 = m_35;
                              }
                            }
                          }
                          t = (ATerm) ATinsert(ATinsert(ATempty, not_null(j_35)), term_o_19);
                        }
                      }
                    else
                      {
                        _fail(t);
                      }
                  }
              }
            return(t);
          }
          t = map_1(t, i_2);
          {
            ATerm j_2 (ATerm t)
            {
              t = (ATerm) ATinsert(ATempty, term_c_19);
              return(t);
            }
            t = separate_by_1(t, j_2);
            {
              t = concat_0(t);
              {
                ATerm l_2 (ATerm t)
                {
                  t = (ATerm) ATinsert(ATempty, term_u_19);
                  return(t);
                }
                t = at_last_1(t, l_2);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm conc_0 (ATerm t)
{
  ATerm z_35 = NULL,a_36 = NULL,b_36 = NULL;
  z_35 = t;
  y_35 :
  if(match_cons(z_35, sym__2))
    {
      a_36 = ATgetArgument(z_35, 0);
      b_36 = ATgetArgument(z_35, 1);
      {
        t = not_null(a_36);
        {
          ATerm m_2 (ATerm t)
          {
            t = not_null(b_36);
            return(t);
          }
          t = at_end_1(t, m_2);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm subt_0 (ATerm t)
{
  ATerm h_36 = NULL,i_36 = NULL,j_36 = NULL;
  h_36 = t;
  g_36 :
  if(match_cons(h_36, sym__2))
    {
      i_36 = ATgetArgument(h_36, 0);
      j_36 = ATgetArgument(h_36, 1);
      {
        ATerm v_19 = t;
        int w_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_subti(not_null(i_36), not_null(j_36));
            LocalPopChoice(w_19);
          }
        else
          {
            t = v_19;
            t = SSL_subtr(not_null(i_36), not_null(j_36));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm p_36 = NULL,q_36 = NULL,r_36 = NULL;
  p_36 = t;
  o_36 :
  if(match_cons(p_36, sym__2))
    {
      q_36 = ATgetArgument(p_36, 0);
      r_36 = ATgetArgument(p_36, 1);
      {
        ATerm z_19;
        z_19 = t;
        {
          ATerm a_20 = t;
          int b_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(q_36), not_null(r_36));
              LocalPopChoice(b_20);
            }
          else
            {
              t = a_20;
              t = SSL_gtr(not_null(q_36), not_null(r_36));
            }
        }
        t = z_19;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm geq_0 (ATerm t)
{
  ATerm x_36 = NULL;
  ATerm g_20 = t;
  int h_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_36 = NULL,z_36 = NULL,a_37 = NULL;
      y_36 = t;
      w_36 :
      if(match_cons(y_36, sym__2))
        {
          z_36 = ATgetArgument(y_36, 0);
          a_37 = ATgetArgument(y_36, 1);
          {
            if(((x_36 != NULL) && (x_36 != z_36)))
              _fail(z_36);
            else
              x_36 = z_36;
            if(((x_36 != NULL) && (x_36 != a_37)))
              _fail(a_37);
            else
              x_36 = a_37;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(h_20);
    }
  else
    {
      t = g_20;
      t = gt_0(t);
    }
  return(t);
}
ATerm while_not_2 (ATerm t, ATerm f_86 (ATerm), ATerm g_86 (ATerm))
{
  ATerm c_37 (ATerm t)
  {
    ATerm i_20 = t;
    int m_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = f_86(t);
        LocalPopChoice(m_20);
      }
    else
      {
        t = i_20;
        {
          t = g_86(t);
          t = c_37(t);
        }
      }
    return(t);
  }
  t = c_37(t);
  return(t);
}
ATerm for_3 (ATerm t, ATerm i_86 (ATerm), ATerm j_86 (ATerm), ATerm k_86 (ATerm))
{
  t = i_86(t);
  t = while_not_2(t, j_86, k_86);
  return(t);
}
ATerm _2 (ATerm t, ATerm k_51 (ATerm), ATerm l_51 (ATerm))
{
  ATerm j_37 = NULL,k_37 = NULL,l_37 = NULL;
  j_37 = t;
  i_37 :
  if(match_cons(j_37, sym__2))
    {
      k_37 = ATgetArgument(j_37, 0);
      l_37 = ATgetArgument(j_37, 1);
      {
        ATerm p_37 = NULL,r_37 = NULL;
        ATerm q_37 = NULL;
        t = SSLgetAnnotations(not_null(j_37));
        {
          q_37 = t;
          if(((p_37 != NULL) && (p_37 != q_37)))
            _fail(q_37);
          else
            p_37 = q_37;
        }
        {
          t = not_null(k_37);
          {
            ATerm t_37 = NULL;
            t = k_51(t);
            {
              r_37 = t;
              {
                t = not_null(l_37);
                {
                  ATerm v_37 = NULL;
                  t = l_51(t);
                  {
                    t_37 = t;
                    {
                      ATerm w_37 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(r_37), not_null(t_37)), not_null(p_37));
                      {
                        w_37 = t;
                        if(((v_37 != NULL) && (v_37 != w_37)))
                          _fail(w_37);
                        else
                          v_37 = w_37;
                      }
                      t = not_null(v_37);
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm copy_0 (ATerm t)
{
  ATerm o_20 = t;
  int p_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_2 (ATerm t)
      {
        ATerm o_38 = NULL;
        o_38 = t;
        c_38 :
        if(!(match_int(o_38, 0)))
          {
            _fail(t);
          }
        return(t);
      }
      t = _2(t, n_2, _id);
      t = (ATerm) ATempty;
      LocalPopChoice(p_20);
    }
  else
    {
      t = o_20;
      {
        ATerm o_2 (ATerm t)
        {
          ATerm p_38 = NULL,q_38 = NULL,r_38 = NULL;
          p_38 = t;
          e_38 :
          if(match_cons(p_38, sym__2))
            {
              q_38 = ATgetArgument(p_38, 0);
              r_38 = ATgetArgument(p_38, 1);
              t = (ATerm) ATmakeAppl(sym__3, not_null(q_38), not_null(r_38), (ATerm) ATempty);
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        ATerm p_2 (ATerm t)
        {
          ATerm u_38 = NULL,v_38 = NULL,w_38 = NULL,x_38 = NULL;
          u_38 = t;
          g_38 :
          if(match_cons(u_38, sym__3))
            {
              v_38 = ATgetArgument(u_38, 0);
              w_38 = ATgetArgument(u_38, 1);
              x_38 = ATgetArgument(u_38, 2);
              h_38 :
              if(match_int(v_38, 0))
                {
                  t = not_null(x_38);
                }
              else
                {
                  _fail(t);
                }
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        ATerm q_2 (ATerm t)
        {
          ATerm a_39 = NULL,b_39 = NULL,c_39 = NULL,d_39 = NULL;
          a_39 = t;
          k_38 :
          if(match_cons(a_39, sym__3))
            {
              b_39 = ATgetArgument(a_39, 0);
              c_39 = ATgetArgument(a_39, 1);
              d_39 = ATgetArgument(a_39, 2);
              {
                ATerm h_39 = NULL;
                ATerm r_20;
                r_20 = t;
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(b_39), term_h_6);
                  t = geq_0(t);
                }
                t = r_20;
                {
                  ATerm i_39 = NULL;
                  t = (ATerm) ATmakeAppl(sym__2, not_null(b_39), term_h_6);
                  {
                    t = subt_0(t);
                    {
                      i_39 = t;
                      if(((h_39 != NULL) && (h_39 != i_39)))
                        _fail(i_39);
                      else
                        h_39 = i_39;
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym__3, not_null(h_39), not_null(c_39), (ATerm) ATinsert(CheckATermList(not_null(d_39)), not_null(c_39)));
                }
              }
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = for_3(t, o_2, p_2, q_2);
      }
    }
  return(t);
}
ATerm R_2 (ATerm t, ATerm g_59 (ATerm), ATerm h_59 (ATerm))
{
  ATerm e_40 = NULL,f_40 = NULL,g_40 = NULL;
  e_40 = t;
  d_40 :
  if(match_cons(e_40, sym_R_2))
    {
      f_40 = ATgetArgument(e_40, 0);
      g_40 = ATgetArgument(e_40, 1);
      {
        ATerm k_40 = NULL,m_40 = NULL;
        ATerm l_40 = NULL;
        t = SSLgetAnnotations(not_null(e_40));
        {
          l_40 = t;
          if(((k_40 != NULL) && (k_40 != l_40)))
            _fail(l_40);
          else
            k_40 = l_40;
        }
        {
          t = not_null(f_40);
          {
            ATerm o_40 = NULL;
            t = g_59(t);
            {
              m_40 = t;
              {
                t = not_null(g_40);
                {
                  ATerm q_40 = NULL;
                  t = h_59(t);
                  {
                    o_40 = t;
                    {
                      ATerm r_40 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_R_2, not_null(m_40), not_null(o_40)), not_null(k_40));
                      {
                        r_40 = t;
                        if(((q_40 != NULL) && (q_40 != r_40)))
                          _fail(r_40);
                        else
                          q_40 = r_40;
                      }
                      t = not_null(q_40);
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm construct_rows_0 (ATerm t)
{
  ATerm r_2 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = split_2(t, _id, r_2);
  {
    ATerm l_42 (ATerm t)
    {
      ATerm m_41 = NULL,n_41 = NULL,o_41 = NULL,p_41 = NULL,q_41 = NULL,r_41 = NULL,s_41 = NULL;
      ATerm o_42 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(r_41), (ATerm) ATinsert(CheckATermList(not_null(s_41)), not_null(q_41)));
        t = l_42(t);
        return(t);
      }
      o_41 = t;
      j_41 :
      if(match_cons(o_41, sym__2))
        {
          p_41 = ATgetArgument(o_41, 0);
          s_41 = ATgetArgument(o_41, 1);
          k_41 :
          if(((ATermList) p_41 == ATempty))
            {
              {
                ATerm x_41 = NULL;
                ATerm y_41 = NULL;
                t = not_null(s_41);
                {
                  t = reverse_0(t);
                  {
                    y_41 = t;
                    if(((x_41 != NULL) && (x_41 != y_41)))
                      _fail(y_41);
                    else
                      x_41 = y_41;
                  }
                }
                t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_R_2, (ATerm)ATempty, not_null(x_41)));
              }
            }
          else
            {
              if(((ATgetType(p_41) == AT_LIST) && ((ATermList) p_41 != ATempty)))
                {
                  q_41 = ATgetFirst((ATermList) p_41);
                  r_41 = (ATerm) ATgetNext((ATermList) p_41);
                  l_41 :
                  if(match_cons(q_41, sym_R_2))
                    {
                      m_41 = ATgetArgument(q_41, 0);
                      n_41 = ATgetArgument(q_41, 1);
                      {
                        ATerm s_20 = t;
                        int t_20 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm d_42 = NULL,f_42 = NULL;
                            ATerm u_20;
                            u_20 = t;
                            {
                              ATerm e_42 = NULL;
                              t = not_null(s_41);
                              {
                                t = reverse_0(t);
                                {
                                  e_42 = t;
                                  if(((d_42 != NULL) && (d_42 != e_42)))
                                    _fail(e_42);
                                  else
                                    d_42 = e_42;
                                }
                              }
                            }
                            t = u_20;
                            {
                              ATerm g_42 = NULL;
                              t = (ATerm) ATmakeAppl(sym__2, not_null(r_41), (ATerm) ATempty);
                              {
                                t = l_42(t);
                                {
                                  g_42 = t;
                                  if(((f_42 != NULL) && (f_42 != g_42)))
                                    _fail(g_42);
                                  else
                                    f_42 = g_42;
                                }
                              }
                              t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(f_42)), (ATerm) ATmakeAppl(sym_R_2, not_null(m_41), not_null(n_41))), (ATerm) ATmakeAppl(sym_R_2, (ATerm)ATempty, not_null(d_42)));
                            }
                            LocalPopChoice(t_20);
                          }
                        else
                          {
                            t = s_20;
                            t = o_42(t);
                          }
                      }
                    }
                  else
                    {
                      t = o_42(t);
                    }
                }
              else
                {
                  _fail(t);
                }
            }
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = l_42(t);
    {
      ATerm s_2 (ATerm t)
      {
        ATerm v_20 = t;
        if((PushChoice() == 0))
          {
            t = R_2(t, _id, Nil_0);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = v_20;
          }
        return(t);
      }
      t = filter_1(t, s_2);
    }
  }
  return(t);
}
ATerm Abox2latex_0 (ATerm t)
{
  ATerm l_44 = NULL,m_44 = NULL,n_44 = NULL,o_44 = NULL,p_44 = NULL,q_44 = NULL,r_44 = NULL;
  ATerm b_52 (ATerm t)
  {
    t = not_null(r_44);
    {
      ATerm w_20 = t;
      int x_20 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = KW_0(t);
          LocalPopChoice(x_20);
        }
      else
        {
          t = w_20;
          {
            ATerm a_21 = t;
            int f_21 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = VAR_0(t);
                LocalPopChoice(f_21);
              }
            else
              {
                t = a_21;
                {
                  ATerm g_21 = t;
                  int h_21 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = NUM_0(t);
                      LocalPopChoice(h_21);
                    }
                  else
                    {
                      t = g_21;
                      t = MATH_0(t);
                    }
                }
              }
          }
        }
    }
    t = (ATerm) ATmakeAppl(sym_BOXFONT_2, not_null(r_44), not_null(p_44));
    return(t);
  }
  ATerm c_52 (ATerm t)
  {
    ATerm j_51 = NULL;
    ATerm p_51 = NULL;
    t = not_null(p_44);
    {
      ATerm t_2 (ATerm t)
      {
        ATerm m_51 = NULL,n_51 = NULL;
        m_51 = t;
        f_44 :
        if(match_cons(m_51, sym_S_1))
          {
            n_51 = ATgetArgument(m_51, 0);
            {
              t = not_null(n_51);
              t = make_latex_comment_0(t);
            }
          }
        else
          {
            _fail(t);
          }
        return(t);
      }
      t = map_1(t, t_2);
      {
        p_51 = t;
        if(((j_51 != NULL) && (j_51 != p_51)))
          _fail(p_51);
        else
          j_51 = p_51;
      }
    }
    t = (ATerm) ATmakeAppl(sym_CBOX_1, not_null(j_51));
    return(t);
  }
  ATerm d_52 (ATerm t)
  {
    t = not_null(r_44);
    t = latex_string_0(t);
    return(t);
  }
  q_44 = t;
  h_44 :
  if(match_cons(q_44, sym_REF_2))
    {
      r_44 = ATgetArgument(q_44, 0);
      p_44 = ATgetArgument(q_44, 1);
      t = (ATerm) ATmakeAppl(sym_REFBOX_2, not_null(r_44), not_null(p_44));
    }
  else
    {
      if(match_cons(q_44, sym_LBL_2))
        {
          r_44 = ATgetArgument(q_44, 0);
          p_44 = ATgetArgument(q_44, 1);
          t = (ATerm) ATmakeAppl(sym_LBLBOX_2, not_null(r_44), not_null(p_44));
        }
      else
        {
          if(match_cons(q_44, sym_L_2))
            {
              r_44 = ATgetArgument(q_44, 0);
              p_44 = ATgetArgument(q_44, 1);
              {
                ATerm y_44 = NULL;
                ATerm i_21 = t;
                int j_21 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm z_44 = NULL;
                    t = not_null(r_44);
                    {
                      t = string_to_int_0(t);
                      {
                        z_44 = t;
                        if(((y_44 != NULL) && (y_44 != z_44)))
                          _fail(z_44);
                        else
                          y_44 = z_44;
                      }
                    }
                    LocalPopChoice(j_21);
                  }
                else
                  {
                    t = i_21;
                    {
                      ATerm k_21 = t;
                      int n_21 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm b_45 = NULL;
                          t = not_null(r_44);
                          {
                            t = explode_string_0(t);
                            {
                              ATerm u_2 (ATerm t)
                              {
                                ATerm a_45 = NULL;
                                a_45 = t;
                                g_43 :
                                if(!(match_int(a_45, 61)))
                                  {
                                    _fail(t);
                                  }
                                return(t);
                              }
                              t = Cons_2(t, u_2, _id);
                              {
                                t = (ATerm) ATinsert(ATempty, term_s_21);
                                {
                                  t = implode_string_0(t);
                                  {
                                    b_45 = t;
                                    if(((y_44 != NULL) && (y_44 != b_45)))
                                      _fail(b_45);
                                    else
                                      y_44 = b_45;
                                  }
                                }
                              }
                            }
                          }
                          LocalPopChoice(n_21);
                        }
                      else
                        {
                          t = k_21;
                          {
                            ATerm c_45 = NULL;
                            t = not_null(r_44);
                            {
                              c_45 = t;
                              if(((y_44 != NULL) && (y_44 != c_45)))
                                _fail(c_45);
                              else
                                y_44 = c_45;
                            }
                          }
                        }
                    }
                  }
                t = (ATerm) ATmakeAppl(sym_LBOX_2, not_null(y_44), not_null(p_44));
              }
            }
          else
            {
              if(match_cons(q_44, sym_ALT_2))
                {
                  r_44 = ATgetArgument(q_44, 0);
                  p_44 = ATgetArgument(q_44, 1);
                  t = (ATerm) ATmakeAppl(sym_ALTBOX_2, not_null(r_44), not_null(p_44));
                }
              else
                {
                  if(match_cons(q_44, sym_A_3))
                    {
                      r_44 = ATgetArgument(q_44, 0);
                      p_44 = ATgetArgument(q_44, 1);
                      l_44 = ATgetArgument(q_44, 2);
                      {
                        ATerm i_45 = NULL,j_45 = NULL,k_45 = NULL,l_45 = NULL,o_45 = NULL;
                        ATerm p_45 = NULL;
                        t = not_null(l_44);
                        {
                          ATerm q_45 = NULL;
                          t = construct_rows_0(t);
                          {
                            p_45 = t;
                            {
                              if(((l_45 != NULL) && (l_45 != p_45)))
                                _fail(p_45);
                              else
                                l_45 = p_45;
                              {
                                t = not_null(p_44);
                                {
                                  t = Vspace_0(t);
                                  {
                                    ATerm r_45 = NULL,t_45 = NULL;
                                    t = string_to_int_0(t);
                                    {
                                      q_45 = t;
                                      {
                                        if(((i_45 != NULL) && (i_45 != q_45)))
                                          _fail(q_45);
                                        else
                                          i_45 = q_45;
                                        {
                                          ATerm s_45 = NULL;
                                          t = (ATerm) ATmakeAppl(sym__2, not_null(i_45), term_u_19);
                                          {
                                            t = copy_0(t);
                                            {
                                              s_45 = t;
                                              if(((r_45 != NULL) && (r_45 != s_45)))
                                                _fail(s_45);
                                              else
                                                r_45 = s_45;
                                            }
                                          }
                                          {
                                            t = (ATerm) ATmakeAppl(sym__2, not_null(r_45), (ATerm) ATinsert(ATinsert(ATempty, term_v_16), term_u_19));
                                            {
                                              ATerm u_45 = NULL;
                                              t = conc_0(t);
                                              {
                                                t_45 = t;
                                                {
                                                  if(((k_45 != NULL) && (k_45 != t_45)))
                                                    _fail(t_45);
                                                  else
                                                    k_45 = t_45;
                                                  {
                                                    t = not_null(r_44);
                                                    {
                                                      ATerm v_45 = NULL;
                                                      t = table_def_0(t);
                                                      {
                                                        u_45 = t;
                                                        {
                                                          if(((j_45 != NULL) && (j_45 != u_45)))
                                                            _fail(u_45);
                                                          else
                                                            j_45 = u_45;
                                                          {
                                                            t = not_null(l_45);
                                                            {
                                                              t = map_1(t, MkRows_0);
                                                              {
                                                                ATerm v_2 (ATerm t)
                                                                {
                                                                  t = not_null(k_45);
                                                                  return(t);
                                                                }
                                                                t = separate_by_1(t, v_2);
                                                                {
                                                                  v_45 = t;
                                                                  if(((o_45 != NULL) && (o_45 != v_45)))
                                                                    _fail(v_45);
                                                                  else
                                                                    o_45 = v_45;
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
                        t = (ATerm) ATmakeAppl(sym_ABOX_2, not_null(j_45), not_null(o_45));
                      }
                    }
                  else
                    {
                      if(match_cons(q_44, sym_HV_2))
                        {
                          r_44 = ATgetArgument(q_44, 0);
                          p_44 = ATgetArgument(q_44, 1);
                          {
                            ATerm y_45 = NULL,c_46 = NULL,d_46 = NULL,e_46 = NULL;
                            ATerm f_46 = NULL;
                            t = not_null(r_44);
                            {
                              ATerm g_46 = NULL;
                              t = Hspace_0(t);
                              {
                                f_46 = t;
                                {
                                  if(((y_45 != NULL) && (y_45 != f_46)))
                                    _fail(f_46);
                                  else
                                    y_45 = f_46;
                                  {
                                    t = not_null(r_44);
                                    {
                                      ATerm n_46 = NULL;
                                      t = Vspace_0(t);
                                      {
                                        g_46 = t;
                                        {
                                          if(((c_46 != NULL) && (c_46 != g_46)))
                                            _fail(g_46);
                                          else
                                            c_46 = g_46;
                                          {
                                            t = not_null(r_44);
                                            {
                                              ATerm o_46 = NULL;
                                              t = Ispace_0(t);
                                              {
                                                n_46 = t;
                                                {
                                                  if(((d_46 != NULL) && (d_46 != n_46)))
                                                    _fail(n_46);
                                                  else
                                                    d_46 = n_46;
                                                  {
                                                    t = not_null(p_44);
                                                    {
                                                      ATerm w_2 (ATerm t)
                                                      {
                                                        ATerm t_21 = t;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = Nil_0(t);
                                                            PopChoice();
                                                            _fail(t);
                                                          }
                                                        else
                                                          {
                                                            t = t_21;
                                                          }
                                                        return(t);
                                                      }
                                                      t = filter_1(t, w_2);
                                                      {
                                                        ATerm x_2 (ATerm t)
                                                        {
                                                          t = term_u_21;
                                                          return(t);
                                                        }
                                                        t = separate_by_1(t, x_2);
                                                        {
                                                          o_46 = t;
                                                          if(((e_46 != NULL) && (e_46 != o_46)))
                                                            _fail(o_46);
                                                          else
                                                            e_46 = o_46;
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
                            t = (ATerm) ATmakeAppl(sym_HVBOX_4, not_null(y_45), not_null(c_46), not_null(d_46), not_null(e_46));
                          }
                        }
                      else
                        {
                          if(match_cons(q_44, sym_V_2))
                            {
                              r_44 = ATgetArgument(q_44, 0);
                              p_44 = ATgetArgument(q_44, 1);
                              {
                                ATerm r_46 = NULL,s_46 = NULL,t_46 = NULL;
                                ATerm u_46 = NULL;
                                t = not_null(r_44);
                                {
                                  ATerm v_46 = NULL;
                                  t = Vspace_0(t);
                                  {
                                    u_46 = t;
                                    {
                                      if(((r_46 != NULL) && (r_46 != u_46)))
                                        _fail(u_46);
                                      else
                                        r_46 = u_46;
                                      {
                                        t = not_null(r_44);
                                        {
                                          ATerm w_46 = NULL;
                                          t = Ispace_0(t);
                                          {
                                            v_46 = t;
                                            {
                                              if(((s_46 != NULL) && (s_46 != v_46)))
                                                _fail(v_46);
                                              else
                                                s_46 = v_46;
                                              {
                                                t = not_null(p_44);
                                                {
                                                  ATerm z_2 (ATerm t)
                                                  {
                                                    ATerm v_21 = t;
                                                    if((PushChoice() == 0))
                                                      {
                                                        t = Nil_0(t);
                                                        PopChoice();
                                                        _fail(t);
                                                      }
                                                    else
                                                      {
                                                        t = v_21;
                                                      }
                                                    return(t);
                                                  }
                                                  t = filter_1(t, z_2);
                                                  {
                                                    ATerm a_3 (ATerm t)
                                                    {
                                                      t = term_w_21;
                                                      return(t);
                                                    }
                                                    t = separate_by_1(t, a_3);
                                                    {
                                                      w_46 = t;
                                                      if(((t_46 != NULL) && (t_46 != w_46)))
                                                        _fail(w_46);
                                                      else
                                                        t_46 = w_46;
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
                                t = (ATerm) ATmakeAppl(sym_VBOX_3, not_null(r_46), not_null(s_46), not_null(t_46));
                              }
                            }
                          else
                            {
                              if(match_cons(q_44, sym_H_2))
                                {
                                  r_44 = ATgetArgument(q_44, 0);
                                  p_44 = ATgetArgument(q_44, 1);
                                  {
                                    ATerm z_46 = NULL,a_47 = NULL;
                                    ATerm b_47 = NULL;
                                    t = not_null(r_44);
                                    {
                                      ATerm c_47 = NULL;
                                      t = Hspace_0(t);
                                      {
                                        b_47 = t;
                                        {
                                          if(((z_46 != NULL) && (z_46 != b_47)))
                                            _fail(b_47);
                                          else
                                            z_46 = b_47;
                                          {
                                            t = not_null(p_44);
                                            {
                                              t = toh_0(t);
                                              {
                                                c_47 = t;
                                                if(((a_47 != NULL) && (a_47 != c_47)))
                                                  _fail(c_47);
                                                else
                                                  a_47 = c_47;
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                    t = (ATerm) ATmakeAppl(sym_HBOX_2, not_null(z_46), not_null(a_47));
                                  }
                                }
                              else
                                {
                                  if(match_cons(q_44, sym_FBOX_2))
                                    {
                                      r_44 = ATgetArgument(q_44, 0);
                                      p_44 = ATgetArgument(q_44, 1);
                                      i_44 :
                                      if(match_cons(r_44, sym_F_1))
                                        {
                                          o_44 = ATgetArgument(r_44, 0);
                                          j_44 :
                                          if(((ATgetType(o_44) == AT_LIST) && ((ATermList) o_44 != ATempty)))
                                            {
                                              m_44 = ATgetFirst((ATermList) o_44);
                                              n_44 = (ATerm) ATgetNext((ATermList) o_44);
                                              {
                                                ATerm x_21 = t;
                                                int a_22 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    ATerm g_47 = NULL,h_47 = NULL;
                                                    t = not_null(m_44);
                                                    {
                                                      ATerm f_22 = t;
                                                      int g_22 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm b_3 (ATerm t)
                                                          {
                                                            ATerm i_47 = NULL;
                                                            i_47 = t;
                                                            if(((h_47 != NULL) && (h_47 != i_47)))
                                                              _fail(i_47);
                                                            else
                                                              h_47 = i_47;
                                                            return(t);
                                                          }
                                                          t = FFID_2(t, FM_0, b_3);
                                                          LocalPopChoice(g_22);
                                                        }
                                                      else
                                                        {
                                                          t = f_22;
                                                          {
                                                            ATerm h_22 = t;
                                                            int i_22 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm c_3 (ATerm t)
                                                                {
                                                                  ATerm j_47 = NULL;
                                                                  j_47 = t;
                                                                  if(((h_47 != NULL) && (h_47 != j_47)))
                                                                    _fail(j_47);
                                                                  else
                                                                    h_47 = j_47;
                                                                  return(t);
                                                                }
                                                                t = FFID_2(t, SE_0, c_3);
                                                                LocalPopChoice(i_22);
                                                              }
                                                            else
                                                              {
                                                                t = h_22;
                                                                {
                                                                  ATerm j_22 = t;
                                                                  int k_22 = stack_ptr;
                                                                  if((PushChoice() == 0))
                                                                    {
                                                                      ATerm d_3 (ATerm t)
                                                                      {
                                                                        ATerm k_47 = NULL;
                                                                        k_47 = t;
                                                                        if(((h_47 != NULL) && (h_47 != k_47)))
                                                                          _fail(k_47);
                                                                        else
                                                                          h_47 = k_47;
                                                                        return(t);
                                                                      }
                                                                      t = FFID_2(t, SH_0, d_3);
                                                                      LocalPopChoice(k_22);
                                                                    }
                                                                  else
                                                                    {
                                                                      t = j_22;
                                                                      {
                                                                        ATerm n_22 = t;
                                                                        int s_22 = stack_ptr;
                                                                        if((PushChoice() == 0))
                                                                          {
                                                                            ATerm e_3 (ATerm t)
                                                                            {
                                                                              ATerm l_47 = NULL;
                                                                              l_47 = t;
                                                                              if(((h_47 != NULL) && (h_47 != l_47)))
                                                                                _fail(l_47);
                                                                              else
                                                                                h_47 = l_47;
                                                                              return(t);
                                                                            }
                                                                            t = FFID_2(t, SZ_0, e_3);
                                                                            LocalPopChoice(s_22);
                                                                          }
                                                                        else
                                                                          {
                                                                            t = n_22;
                                                                            {
                                                                              ATerm n_47 = NULL;
                                                                              ATerm g_3 (ATerm t)
                                                                              {
                                                                                ATerm m_47 = NULL;
                                                                                m_47 = t;
                                                                                if(((g_47 != NULL) && (g_47 != m_47)))
                                                                                  _fail(m_47);
                                                                                else
                                                                                  g_47 = m_47;
                                                                                return(t);
                                                                              }
                                                                              t = FFID_2(t, CL_0, g_3);
                                                                              {
                                                                                t = (ATerm) ATmakeAppl(sym_BOXCOLOR_1, not_null(g_47));
                                                                                {
                                                                                  n_47 = t;
                                                                                  if(((h_47 != NULL) && (h_47 != n_47)))
                                                                                    _fail(n_47);
                                                                                  else
                                                                                    h_47 = n_47;
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
                                                    t = (ATerm) ATmakeAppl(sym_BOXFONT_2, not_null(h_47), (ATerm) ATmakeAppl(sym_FBOX_2, (ATerm)ATmakeAppl(sym_F_1, not_null(n_44)), not_null(p_44)));
                                                    LocalPopChoice(a_22);
                                                  }
                                                else
                                                  {
                                                    t = x_21;
                                                    t = b_52(t);
                                                  }
                                              }
                                            }
                                          else
                                            {
                                              if(((ATermList) o_44 == ATempty))
                                                {
                                                  {
                                                    ATerm t_22 = t;
                                                    int u_22 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        t = not_null(p_44);
                                                        LocalPopChoice(u_22);
                                                      }
                                                    else
                                                      {
                                                        t = t_22;
                                                        t = b_52(t);
                                                      }
                                                  }
                                                }
                                              else
                                                {
                                                  t = b_52(t);
                                                }
                                            }
                                        }
                                      else
                                        {
                                          t = b_52(t);
                                        }
                                    }
                                  else
                                    {
                                      if(match_cons(q_44, sym_C_2))
                                        {
                                          r_44 = ATgetArgument(q_44, 0);
                                          p_44 = ATgetArgument(q_44, 1);
                                          k_44 :
                                          if(((ATermList) r_44 == ATempty))
                                            {
                                              t = c_52(t);
                                            }
                                          else
                                            {
                                              _fail(t);
                                            }
                                        }
                                      else
                                        {
                                          if(match_cons(q_44, sym_S_1))
                                            {
                                              r_44 = ATgetArgument(q_44, 0);
                                              t = d_52(t);
                                            }
                                          else
                                            {
                                              _fail(t);
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
ATerm abox2latex_1 (ATerm t, ATerm g_87 (ATerm))
{
  ATerm j_53 = NULL;
  ATerm l_53 = NULL,n_53 = NULL;
  j_53 = t;
  {
    ATerm v_22;
    v_22 = t;
    {
      ATerm m_53 = NULL;
      t = term_m_17;
      {
        t = g_87(t);
        {
          m_53 = t;
          if(((l_53 != NULL) && (l_53 != m_53)))
            _fail(m_53);
          else
            l_53 = m_53;
        }
      }
    }
    t = v_22;
    {
      ATerm o_53 = NULL;
      t = not_null(j_53);
      {
        ATerm h_3 (ATerm t)
        {
          t = try_1(t, Abox2latex_0);
          return(t);
        }
        t = topdown_1(t, h_3);
        {
          o_53 = t;
          if(((n_53 != NULL) && (n_53 != o_53)))
            _fail(o_53);
          else
            n_53 = o_53;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym_BOXENV_2, (ATerm)ATinsert(ATempty, not_null(l_53)), not_null(n_53));
        t = latex2text_0(t);
      }
    }
  }
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm q_65 (ATerm))
{
  t = fetch_1(t, q_65);
  return(t);
}
ATerm Snd_0 (ATerm t)
{
  ATerm z_53 = NULL;
  ATerm b_54 = NULL,c_54 = NULL,d_54 = NULL;
  z_53 = t;
  {
    ATerm e_54 = NULL;
    ATerm g_54 = NULL,h_54 = NULL,i_54 = NULL,j_54 = NULL,k_54 = NULL,l_54 = NULL,m_54 = NULL;
    t = not_null(z_53);
    {
      e_54 = t;
      {
        t = SSL_explode_term(not_null(e_54));
        {
          g_54 = t;
          v_53 :
          if(match_cons(g_54, sym__2))
            {
              h_54 = ATgetArgument(g_54, 0);
              i_54 = ATgetArgument(g_54, 1);
              w_53 :
              if(match_string(h_54, ""))
                {
                  x_53 :
                  if(((ATgetType(i_54) == AT_LIST) && ((ATermList) i_54 != ATempty)))
                    {
                      j_54 = ATgetFirst((ATermList) i_54);
                      k_54 = (ATerm) ATgetNext((ATermList) i_54);
                      y_53 :
                      if(((ATgetType(k_54) == AT_LIST) && ((ATermList) k_54 != ATempty)))
                        {
                          l_54 = ATgetFirst((ATermList) k_54);
                          m_54 = (ATerm) ATgetNext((ATermList) k_54);
                          {
                            if(((b_54 != NULL) && (b_54 != j_54)))
                              _fail(j_54);
                            else
                              b_54 = j_54;
                            {
                              if(((d_54 != NULL) && (d_54 != l_54)))
                                _fail(l_54);
                              else
                                d_54 = l_54;
                              if(((c_54 != NULL) && (c_54 != m_54)))
                                _fail(m_54);
                              else
                                c_54 = m_54;
                            }
                          }
                        }
                      else
                        {
                          _fail(t);
                        }
                    }
                  else
                    {
                      _fail(t);
                    }
                }
              else
                {
                  _fail(t);
                }
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    t = not_null(d_54);
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm t_54 = NULL;
  ATerm w_22;
  w_22 = t;
  {
    ATerm x_22 = t;
    int a_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_3 (ATerm t)
        {
          ATerm u_54 = NULL,v_54 = NULL;
          u_54 = t;
          r_54 :
          if(match_cons(u_54, sym_Input_1))
            {
              v_54 = ATgetArgument(u_54, 0);
              if(((t_54 != NULL) && (t_54 != v_54)))
                _fail(v_54);
              else
                t_54 = v_54;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, i_3);
        LocalPopChoice(a_23);
      }
    else
      {
        t = x_22;
        {
          ATerm w_54 = NULL;
          t = term_e_23;
          {
            w_54 = t;
            if(((t_54 != NULL) && (t_54 != w_54)))
              _fail(w_54);
            else
              t_54 = w_54;
          }
        }
      }
  }
  t = w_22;
  {
    ATerm m_3 (ATerm t)
    {
      t = not_null(t_54);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, m_3);
  }
  return(t);
}
ATerm StoreEntries_0 (ATerm t)
{
  ATerm n_3 (ATerm t)
  {
    ATerm d_55 = NULL,e_55 = NULL,f_55 = NULL,g_55 = NULL,h_55 = NULL;
    d_55 = t;
    a_55 :
    if(((ATgetType(d_55) == AT_LIST) && ((ATermList) d_55 != ATempty)))
      {
        e_55 = ATgetFirst((ATermList) d_55);
        f_55 = (ATerm) ATgetNext((ATermList) d_55);
        b_55 :
        if(((ATgetType(f_55) == AT_LIST) && ((ATermList) f_55 != ATempty)))
          {
            g_55 = ATgetFirst((ATermList) f_55);
            h_55 = (ATerm) ATgetNext((ATermList) f_55);
            c_55 :
            if(((ATermList) h_55 == ATempty))
              {
                {
                  t = (ATerm) ATmakeAppl(sym__3, term_x_12, not_null(e_55), not_null(g_55));
                  t = table_put_0(t);
                }
              }
            else
              {
                _fail(t);
              }
          }
        else
          {
            _fail(t);
          }
      }
    else
      {
        _fail(t);
      }
    return(t);
  }
  t = map_1(t, n_3);
  return(t);
}
ATerm ReadFromFile_0 (ATerm t)
{
  ATerm m_55 = NULL;
  m_55 = t;
  t = SSL_ReadFromFile(not_null(m_55));
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm q_55 = NULL;
  q_55 = t;
  t = SSL_table_create(not_null(q_55));
  return(t);
}
ATerm load_tables_0 (ATerm t)
{
  ATerm f_23;
  f_23 = t;
  {
    t = term_x_12;
    t = table_create_0(t);
  }
  t = f_23;
  {
    t = reverse_0(t);
    {
      ATerm o_3 (ATerm t)
      {
        t = ReadFromFile_0(t);
        t = StoreEntries_0(t);
        return(t);
      }
      t = map_1(t, o_3);
    }
  }
  return(t);
}
ATerm fetch_1 (ATerm t, ATerm a_78 (ATerm))
{
  ATerm t_55 (ATerm t)
  {
    ATerm g_23 = t;
    int h_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, a_78, _id);
        LocalPopChoice(h_23);
      }
    else
      {
        t = g_23;
        t = Cons_2(t, _id, t_55);
      }
    return(t);
  }
  t = t_55(t);
  return(t);
}
ATerm HdMember_1 (ATerm t, ATerm m_73 (ATerm))
{
  ATerm x_55 = NULL,y_55 = NULL,z_55 = NULL;
  x_55 = t;
  w_55 :
  if(((ATgetType(x_55) == AT_LIST) && ((ATermList) x_55 != ATempty)))
    {
      y_55 = ATgetFirst((ATermList) x_55);
      z_55 = (ATerm) ATgetNext((ATermList) x_55);
      {
        t = m_73(t);
        {
          ATerm p_3 (ATerm t)
          {
            ATerm c_56 = NULL;
            c_56 = t;
            if(((y_55 != NULL) && (y_55 != c_56)))
              _fail(c_56);
            else
              y_55 = c_56;
            return(t);
          }
          t = fetch_1(t, p_3);
        }
        t = not_null(z_55);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm union_0 (ATerm t)
{
  ATerm h_56 = NULL,i_56 = NULL,j_56 = NULL;
  h_56 = t;
  g_56 :
  if(match_cons(h_56, sym__2))
    {
      i_56 = ATgetArgument(h_56, 0);
      j_56 = ATgetArgument(h_56, 1);
      {
        t = not_null(i_56);
        {
          ATerm n_56 (ATerm t)
          {
            ATerm i_23 = t;
            int j_23 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(j_56);
                LocalPopChoice(j_23);
              }
            else
              {
                t = i_23;
                {
                  ATerm k_23 = t;
                  int m_23 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm q_3 (ATerm t)
                      {
                        t = not_null(j_56);
                        return(t);
                      }
                      t = HdMember_1(t, q_3);
                      t = n_56(t);
                      LocalPopChoice(m_23);
                    }
                  else
                    {
                      t = k_23;
                      t = Cons_2(t, _id, n_56);
                    }
                }
              }
            return(t);
          }
          t = n_56(t);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_3 (ATerm t, ATerm i_72 (ATerm), ATerm j_72 (ATerm), ATerm k_72 (ATerm))
{
  ATerm n_23 = t;
  int o_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = i_72(t);
      LocalPopChoice(o_23);
    }
  else
    {
      t = n_23;
      {
        ATerm s_56 = NULL,t_56 = NULL,u_56 = NULL;
        s_56 = t;
        r_56 :
        if(((ATgetType(s_56) == AT_LIST) && ((ATermList) s_56 != ATempty)))
          {
            t_56 = ATgetFirst((ATermList) s_56);
            u_56 = (ATerm) ATgetNext((ATermList) s_56);
            {
              ATerm x_56 = NULL,z_56 = NULL;
              ATerm p_23;
              p_23 = t;
              {
                ATerm y_56 = NULL;
                t = not_null(t_56);
                {
                  t = k_72(t);
                  {
                    y_56 = t;
                    if(((x_56 != NULL) && (x_56 != y_56)))
                      _fail(y_56);
                    else
                      x_56 = y_56;
                  }
                }
              }
              t = p_23;
              {
                ATerm a_57 = NULL;
                t = not_null(u_56);
                {
                  t = foldr_3(t, i_72, j_72, k_72);
                  {
                    a_57 = t;
                    if(((z_56 != NULL) && (z_56 != a_57)))
                      _fail(a_57);
                    else
                      z_56 = a_57;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(x_56), not_null(z_56));
                  t = j_72(t);
                }
              }
            }
          }
        else
          {
            _fail(t);
          }
      }
    }
  return(t);
}
ATerm crush_3 (ATerm t, ATerm x_73 (ATerm), ATerm y_73 (ATerm), ATerm z_73 (ATerm))
{
  ATerm i_57 = NULL;
  ATerm k_57 = NULL;
  i_57 = t;
  {
    ATerm l_57 = NULL;
    ATerm n_57 = NULL,o_57 = NULL,p_57 = NULL;
    t = not_null(i_57);
    {
      l_57 = t;
      {
        t = SSL_explode_term(not_null(l_57));
        {
          n_57 = t;
          h_57 :
          if(match_cons(n_57, sym__2))
            {
              o_57 = ATgetArgument(n_57, 0);
              p_57 = ATgetArgument(n_57, 1);
              if(((k_57 != NULL) && (k_57 != p_57)))
                _fail(p_57);
              else
                k_57 = p_57;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(k_57);
      t = foldr_3(t, x_73, y_73, z_73);
    }
  }
  return(t);
}
ATerm collect_om_1 (ATerm t, ATerm o_74 (ATerm))
{
  ATerm w_57 (ATerm t)
  {
    ATerm q_23 = t;
    int r_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_57 = NULL;
        ATerm v_57 = NULL;
        t = o_74(t);
        {
          v_57 = t;
          if(((u_57 != NULL) && (u_57 != v_57)))
            _fail(v_57);
          else
            u_57 = v_57;
        }
        t = (ATerm) ATinsert(ATempty, not_null(u_57));
        LocalPopChoice(r_23);
      }
    else
      {
        t = q_23;
        {
          ATerm r_3 (ATerm t)
          {
            t = (ATerm) ATempty;
            return(t);
          }
          t = crush_3(t, r_3, union_0, w_57);
        }
      }
    return(t);
  }
  t = w_57(t);
  return(t);
}
ATerm collect_1 (ATerm t, ATerm q_74 (ATerm))
{
  t = collect_om_1(t, q_74);
  return(t);
}
ATerm debug_1 (ATerm t, ATerm j_68 (ATerm))
{
  ATerm s_23;
  s_23 = t;
  {
    ATerm a_58 = NULL,c_58 = NULL;
    ATerm t_23;
    t_23 = t;
    {
      ATerm b_58 = NULL;
      t = j_68(t);
      {
        b_58 = t;
        if(((a_58 != NULL) && (a_58 != b_58)))
          _fail(b_58);
        else
          a_58 = b_58;
      }
    }
    t = t_23;
    {
      ATerm d_58 = NULL;
      d_58 = t;
      if(((c_58 != NULL) && (c_58 != d_58)))
        _fail(d_58);
      else
        c_58 = d_58;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_f_6, (ATerm) ATinsert(ATinsert(ATempty, not_null(c_58)), not_null(a_58)));
        t = printnl_0(t);
      }
    }
  }
  t = s_23;
  return(t);
}
ATerm obsolete_1 (ATerm t, ATerm q_68 (ATerm))
{
  ATerm y_23;
  y_23 = t;
  {
    t = q_68(t);
    {
      ATerm s_3 (ATerm t)
      {
        t = term_z_23;
        return(t);
      }
      t = debug_1(t, s_3);
    }
  }
  t = y_23;
  return(t);
}
ATerm open_file_0 (ATerm t)
{
  ATerm k_58 = NULL,l_58 = NULL;
  ATerm a_24 = t;
  int b_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_58 = NULL,n_58 = NULL,o_58 = NULL;
      m_58 = t;
      h_58 :
      if(match_cons(m_58, sym__2))
        {
          n_58 = ATgetArgument(m_58, 0);
          o_58 = ATgetArgument(m_58, 1);
          {
            if(((l_58 != NULL) && (l_58 != n_58)))
              _fail(n_58);
            else
              l_58 = n_58;
            {
              if(((k_58 != NULL) && (k_58 != o_58)))
                _fail(o_58);
              else
                k_58 = o_58;
              t = SSL_open_file(not_null(l_58), not_null(k_58));
            }
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(b_24);
    }
  else
    {
      t = a_24;
      {
        ATerm p_58 = NULL;
        ATerm q_58 = NULL;
        ATerm t_3 (ATerm t)
        {
          t = term_c_24;
          return(t);
        }
        t = obsolete_1(t, t_3);
        {
          p_58 = t;
          {
            if(((l_58 != NULL) && (l_58 != p_58)))
              _fail(p_58);
            else
              l_58 = p_58;
            {
              ATerm d_24;
              d_24 = t;
              {
                ATerm t_58 = NULL;
                t = term_h_24;
                {
                  t_58 = t;
                  if(((q_58 != NULL) && (q_58 != t_58)))
                    _fail(t_58);
                  else
                    q_58 = t_58;
                }
              }
              t = d_24;
              t = SSL_open_file(not_null(l_58), not_null(q_58));
            }
          }
        }
      }
    }
  return(t);
}
ATerm usage_0 (ATerm t)
{
  ATerm z_58 = NULL;
  ATerm j_24;
  j_24 = t;
  {
    ATerm u_3 (ATerm t)
    {
      ATerm a_59 = NULL,b_59 = NULL;
      a_59 = t;
      y_58 :
      if(match_cons(a_59, sym_Program_1))
        {
          b_59 = ATgetArgument(a_59, 0);
          if(((z_58 != NULL) && (z_58 != b_59)))
            _fail(b_59);
          else
            z_58 = b_59;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = option_defined_1(t, u_3);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_f_6, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_n_24), not_null(z_58)), term_m_24));
      {
        t = printnl_0(t);
        {
          t = term_a_7;
          t = exit_0(t);
        }
      }
    }
  }
  t = j_24;
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm j_59 = NULL;
  j_59 = t;
  i_59 :
  if(match_cons(j_59, sym_Version_0))
    {
      ATerm l_59 = NULL,n_59 = NULL;
      ATerm o_24;
      o_24 = t;
      {
        ATerm m_59 = NULL;
        t = SSLgetAnnotations(not_null(j_59));
        {
          m_59 = t;
          if(((l_59 != NULL) && (l_59 != m_59)))
            _fail(m_59);
          else
            l_59 = m_59;
        }
      }
      t = o_24;
      {
        ATerm q_59 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(l_59));
        {
          q_59 = t;
          if(((n_59 != NULL) && (n_59 != q_59)))
            _fail(q_59);
          else
            n_59 = q_59;
        }
        t = not_null(n_59);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm r_67 (ATerm))
{
  ATerm v_3 (ATerm t)
  {
    ATerm p_24 = t;
    int q_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(q_24);
      }
    else
      {
        t = p_24;
        {
          ATerm r_24 = t;
          int s_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(s_24);
            }
          else
            {
              t = r_24;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, v_3);
  t = r_67(t);
  return(t);
}
ATerm ArgOption_2 (ATerm t, ATerm l_65 (ATerm), ATerm m_65 (ATerm))
{
  ATerm w_3 (ATerm t)
  {
    t = term_t_24;
    return(t);
  }
  t = ArgOption_3(t, l_65, m_65, w_3);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm v_59 = NULL;
  v_59 = t;
  t = SSL_string_to_int(not_null(v_59));
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm f_60 = NULL,g_60 = NULL,h_60 = NULL,i_60 = NULL,j_60 = NULL;
  f_60 = t;
  d_60 :
  if(match_string(f_60, "register-usage-info"))
    {
      t = register_usage_1(t, l_0);
    }
  else
    {
      if(((ATgetType(f_60) == AT_LIST) && ((ATermList) f_60 != ATempty)))
        {
          g_60 = ATgetFirst((ATermList) f_60);
          h_60 = (ATerm) ATgetNext((ATermList) f_60);
          e_60 :
          if(((ATgetType(h_60) == AT_LIST) && ((ATermList) h_60 != ATempty)))
            {
              i_60 = ATgetFirst((ATermList) h_60);
              j_60 = (ATerm) ATgetNext((ATermList) h_60);
              {
                ATerm n_60 = NULL;
                ATerm u_24;
                u_24 = t;
                {
                  t = not_null(g_60);
                  t = j_0(t);
                }
                t = u_24;
                {
                  ATerm o_60 = NULL;
                  t = not_null(i_60);
                  {
                    t = k_0(t);
                    {
                      o_60 = t;
                      if(((n_60 != NULL) && (n_60 != o_60)))
                        _fail(o_60);
                      else
                        n_60 = o_60;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(j_60)), not_null(n_60));
                }
              }
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm x_24 = t;
  int c_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_3 (ATerm t)
      {
        ATerm h_61 = NULL;
        h_61 = t;
        u_60 :
        if(!(match_string(h_61, "-i")))
          {
            if(!(match_string(h_61, "--input")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm z_3 (ATerm t)
      {
        ATerm k_61 = NULL;
        ATerm d_25;
        d_25 = t;
        {
          ATerm i_61 = NULL;
          ATerm j_61 = NULL;
          j_61 = t;
          if(((i_61 != NULL) && (i_61 != j_61)))
            _fail(j_61);
          else
            i_61 = j_61;
          {
            t = (ATerm) ATmakeAppl(sym__2, term_e_25, not_null(i_61));
            t = set_config_0(t);
          }
        }
        t = d_25;
        {
          ATerm l_61 = NULL;
          l_61 = t;
          if(((k_61 != NULL) && (k_61 != l_61)))
            _fail(l_61);
          else
            k_61 = l_61;
          t = (ATerm) ATmakeAppl(sym_Input_1, not_null(k_61));
        }
        return(t);
      }
      ATerm a_4 (ATerm t)
      {
        t = term_f_25;
        return(t);
      }
      t = ArgOption_3(t, y_3, z_3, a_4);
      LocalPopChoice(c_25);
    }
  else
    {
      t = x_24;
      {
        ATerm g_25 = t;
        int h_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_4 (ATerm t)
            {
              ATerm m_61 = NULL;
              m_61 = t;
              x_60 :
              if(!(match_string(m_61, "-o")))
                {
                  if(!(match_string(m_61, "--output")))
                    {
                      _fail(t);
                    }
                }
              return(t);
            }
            ATerm f_4 (ATerm t)
            {
              ATerm p_61 = NULL;
              ATerm k_25;
              k_25 = t;
              {
                ATerm n_61 = NULL;
                ATerm o_61 = NULL;
                o_61 = t;
                if(((n_61 != NULL) && (n_61 != o_61)))
                  _fail(o_61);
                else
                  n_61 = o_61;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_p_25, not_null(n_61));
                  t = set_config_0(t);
                }
              }
              t = k_25;
              {
                ATerm q_61 = NULL;
                q_61 = t;
                if(((p_61 != NULL) && (p_61 != q_61)))
                  _fail(q_61);
                else
                  p_61 = q_61;
                t = (ATerm) ATmakeAppl(sym_Output_1, not_null(p_61));
              }
              return(t);
            }
            ATerm g_4 (ATerm t)
            {
              t = term_q_25;
              return(t);
            }
            t = ArgOption_3(t, e_4, f_4, g_4);
            LocalPopChoice(h_25);
          }
        else
          {
            t = g_25;
            {
              ATerm r_25 = t;
              int s_25 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm h_4 (ATerm t)
                  {
                    ATerm r_61 = NULL;
                    r_61 = t;
                    a_61 :
                    if(!(match_string(r_61, "-S")))
                      {
                        if(!(match_string(r_61, "--silent")))
                          {
                            _fail(t);
                          }
                      }
                    return(t);
                  }
                  ATerm i_4 (ATerm t)
                  {
                    t = term_t_25;
                    t = set_config_0(t);
                    t = term_u_25;
                    return(t);
                  }
                  ATerm k_4 (ATerm t)
                  {
                    t = term_x_25;
                    return(t);
                  }
                  t = Option_3(t, h_4, i_4, k_4);
                  LocalPopChoice(s_25);
                }
              else
                {
                  t = r_25;
                  {
                    ATerm c_26 = t;
                    int d_26 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm l_4 (ATerm t)
                        {
                          ATerm s_61 = NULL;
                          s_61 = t;
                          b_61 :
                          if(!(match_string(s_61, "--verbose")))
                            {
                              _fail(t);
                            }
                          return(t);
                        }
                        ATerm m_4 (ATerm t)
                        {
                          ATerm v_61 = NULL;
                          ATerm e_26;
                          e_26 = t;
                          {
                            ATerm t_61 = NULL;
                            ATerm u_61 = NULL;
                            t = string_to_int_0(t);
                            {
                              u_61 = t;
                              if(((t_61 != NULL) && (t_61 != u_61)))
                                _fail(u_61);
                              else
                                t_61 = u_61;
                            }
                            {
                              t = (ATerm) ATmakeAppl(sym__2, term_f_7, not_null(t_61));
                              t = set_config_0(t);
                            }
                          }
                          t = e_26;
                          {
                            ATerm w_61 = NULL;
                            w_61 = t;
                            if(((v_61 != NULL) && (v_61 != w_61)))
                              _fail(w_61);
                            else
                              v_61 = w_61;
                            t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(v_61));
                          }
                          return(t);
                        }
                        ATerm n_4 (ATerm t)
                        {
                          t = term_f_26;
                          return(t);
                        }
                        t = ArgOption_3(t, l_4, m_4, n_4);
                        LocalPopChoice(d_26);
                      }
                    else
                      {
                        t = c_26;
                        {
                          ATerm g_26 = t;
                          int h_26 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm o_4 (ATerm t)
                              {
                                ATerm x_61 = NULL;
                                x_61 = t;
                                e_61 :
                                if(!(match_string(x_61, "-v")))
                                  {
                                    if(!(match_string(x_61, "--version")))
                                      {
                                        _fail(t);
                                      }
                                  }
                                return(t);
                              }
                              ATerm p_4 (ATerm t)
                              {
                                t = term_j_26;
                                t = set_config_0(t);
                                t = term_k_26;
                                return(t);
                              }
                              ATerm q_4 (ATerm t)
                              {
                                t = term_l_26;
                                return(t);
                              }
                              t = Option_3(t, o_4, p_4, q_4);
                              LocalPopChoice(h_26);
                            }
                          else
                            {
                              t = g_26;
                              {
                                ATerm m_26 = t;
                                int n_26 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm r_4 (ATerm t)
                                    {
                                      ATerm y_61 = NULL;
                                      y_61 = t;
                                      f_61 :
                                      if(!(match_string(y_61, "-b")))
                                        {
                                          _fail(t);
                                        }
                                      return(t);
                                    }
                                    ATerm s_4 (ATerm t)
                                    {
                                      t = term_p_26;
                                      t = set_config_0(t);
                                      t = term_s_26;
                                      return(t);
                                    }
                                    ATerm t_4 (ATerm t)
                                    {
                                      t = term_t_26;
                                      return(t);
                                    }
                                    t = Option_3(t, r_4, s_4, t_4);
                                    LocalPopChoice(n_26);
                                  }
                                else
                                  {
                                    t = m_26;
                                    {
                                      ATerm u_4 (ATerm t)
                                      {
                                        ATerm z_61 = NULL;
                                        z_61 = t;
                                        g_61 :
                                        if(!(match_string(z_61, "-s")))
                                          {
                                            _fail(t);
                                          }
                                        return(t);
                                      }
                                      ATerm v_4 (ATerm t)
                                      {
                                        t = term_z_26;
                                        t = set_config_0(t);
                                        t = term_a_27;
                                        return(t);
                                      }
                                      ATerm w_4 (ATerm t)
                                      {
                                        t = term_b_27;
                                        return(t);
                                      }
                                      t = Option_3(t, u_4, v_4, w_4);
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
ATerm table_destroy_0 (ATerm t)
{
  ATerm h_62 = NULL;
  h_62 = t;
  t = SSL_table_destroy(not_null(h_62));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm l_62 = NULL;
  l_62 = t;
  t = SSL_exit(not_null(l_62));
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm p_62 = NULL;
  p_62 = t;
  t = SSL_implode_string(not_null(p_62));
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm g_78 (ATerm))
{
  ATerm s_62 (ATerm t)
  {
    ATerm c_27 = t;
    int d_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, s_62);
        LocalPopChoice(d_27);
      }
    else
      {
        t = c_27;
        {
          t = Nil_0(t);
          t = g_78(t);
        }
      }
    return(t);
  }
  t = s_62(t);
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm e_27 = t;
  int f_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(f_27);
    }
  else
    {
      t = e_27;
      {
        ATerm v_62 = NULL,w_62 = NULL,x_62 = NULL;
        v_62 = t;
        u_62 :
        if(((ATgetType(v_62) == AT_LIST) && ((ATermList) v_62 != ATempty)))
          {
            w_62 = ATgetFirst((ATermList) v_62);
            x_62 = (ATerm) ATgetNext((ATermList) v_62);
            {
              t = not_null(w_62);
              {
                ATerm x_4 (ATerm t)
                {
                  t = not_null(x_62);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, x_4);
              }
            }
          }
        else
          {
            _fail(t);
          }
      }
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm d_63 = NULL;
  d_63 = t;
  t = SSL_explode_string(not_null(d_63));
  return(t);
}
ATerm concat_strings_0 (ATerm t)
{
  t = map_1(t, explode_string_0);
  {
    t = concat_0(t);
    t = implode_string_0(t);
  }
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm s_64 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm s_77 (ATerm))
{
  ATerm g_63 (ATerm t)
  {
    ATerm g_27 = t;
    int j_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(j_27);
      }
    else
      {
        t = g_27;
        t = Cons_2(t, s_77, g_63);
      }
    return(t);
  }
  t = g_63(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm h_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm n_63 = NULL,o_63 = NULL,p_63 = NULL;
  p_63 = t;
  m_63 :
  if(((ATgetType(p_63) == AT_LIST) && ((ATermList) p_63 != ATempty)))
    {
      n_63 = ATgetFirst((ATermList) p_63);
      o_63 = (ATerm) ATgetNext((ATermList) p_63);
      {
        ATerm s_63 = NULL;
        t = not_null(o_63);
        {
          ATerm l_27;
          l_27 = t;
          {
            ATerm t_63 = NULL,v_63 = NULL,x_63 = NULL;
            ATerm m_27;
            m_27 = t;
            {
              ATerm u_63 = NULL;
              t = i_0(t);
              {
                u_63 = t;
                if(((t_63 != NULL) && (t_63 != u_63)))
                  _fail(u_63);
                else
                  t_63 = u_63;
              }
            }
            t = m_27;
            {
              ATerm w_63 = NULL;
              t = not_null(n_63);
              {
                t = h_0(t);
                {
                  w_63 = t;
                  if(((v_63 != NULL) && (v_63 != w_63)))
                    _fail(w_63);
                  else
                    v_63 = w_63;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(t_63)), not_null(v_63));
                {
                  x_63 = t;
                  if(((s_63 != NULL) && (s_63 != x_63)))
                    _fail(x_63);
                  else
                    s_63 = x_63;
                }
              }
            }
          }
          t = l_27;
          {
            ATerm y_4 (ATerm t)
            {
              t = not_null(s_63);
              return(t);
            }
            t = reverse_acc_2(t, h_0, y_4);
          }
        }
      }
    }
  else
    {
      if(((ATermList) p_63 == ATempty))
        {
          {
            t = term_m_17;
            t = i_0(t);
          }
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm reverse_0 (ATerm t)
{
  ATerm z_4 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, z_4);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm r_64 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm y_52 (ATerm))
{
  ATerm i_64 = NULL,j_64 = NULL;
  i_64 = t;
  h_64 :
  if(match_cons(i_64, sym_Program_1))
    {
      j_64 = ATgetArgument(i_64, 0);
      {
        ATerm m_64 = NULL,o_64 = NULL;
        ATerm n_64 = NULL;
        t = SSLgetAnnotations(not_null(i_64));
        {
          n_64 = t;
          if(((m_64 != NULL) && (m_64 != n_64)))
            _fail(n_64);
          else
            m_64 = n_64;
        }
        {
          t = not_null(j_64);
          {
            ATerm q_64 = NULL;
            t = y_52(t);
            {
              o_64 = t;
              {
                ATerm x_64 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(o_64)), not_null(m_64));
                {
                  x_64 = t;
                  if(((q_64 != NULL) && (q_64 != x_64)))
                    _fail(x_64);
                  else
                    q_64 = x_64;
                }
                t = not_null(q_64);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm system_usage_0 (ATerm t)
{
  ATerm g_65 = NULL;
  ATerm a_5 (ATerm t)
  {
    ATerm b_5 (ATerm t)
    {
      ATerm h_65 = NULL;
      h_65 = t;
      if(((g_65 != NULL) && (g_65 != h_65)))
        _fail(h_65);
      else
        g_65 = h_65;
      return(t);
    }
    t = Program_1(t, b_5);
    return(t);
  }
  t = option_defined_1(t, a_5);
  {
    ATerm c_5 (ATerm t)
    {
      ATerm i_65 = NULL;
      ATerm j_65 = NULL;
      t = term_m_17;
      {
        ATerm d_5 (ATerm t)
        {
          t = not_null(g_65);
          return(t);
        }
        t = short_description_1(t, d_5);
        {
          t = concat_strings_0(t);
          {
            j_65 = t;
            if(((i_65 != NULL) && (i_65 != j_65)))
              _fail(j_65);
            else
              i_65 = j_65;
          }
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_f_6, (ATerm) ATinsert(ATempty, not_null(i_65)));
        t = printnl_0(t);
      }
      return(t);
    }
    t = try_1(t, c_5);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_f_6, (ATerm) ATinsert(ATempty, term_n_27));
      {
        t = printnl_0(t);
        {
          t = term_t_27;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm e_5 (ATerm t)
                {
                  ATerm k_65 = NULL;
                  k_65 = t;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, term_f_6, (ATerm) ATinsert(ATinsert(ATempty, not_null(k_65)), term_u_27));
                    t = printnl_0(t);
                  }
                  return(t);
                }
                t = map_1(t, e_5);
                {
                  ATerm f_5 (ATerm t)
                  {
                    ATerm o_65 = NULL;
                    ATerm p_65 = NULL;
                    t = term_m_17;
                    {
                      ATerm g_5 (ATerm t)
                      {
                        t = not_null(g_65);
                        return(t);
                      }
                      t = long_description_1(t, g_5);
                      {
                        t = concat_strings_0(t);
                        {
                          p_65 = t;
                          if(((o_65 != NULL) && (o_65 != p_65)))
                            _fail(p_65);
                          else
                            o_65 = p_65;
                        }
                      }
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_f_6, (ATerm) ATinsert(ATinsert(ATempty, not_null(o_65)), term_v_27));
                      t = printnl_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, f_5);
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
ATerm printnl_0 (ATerm t)
{
  ATerm y_65 = NULL,z_65 = NULL,a_66 = NULL;
  y_65 = t;
  x_65 :
  if(match_cons(y_65, sym__2))
    {
      z_65 = ATgetArgument(y_65, 0);
      a_66 = ATgetArgument(y_65, 1);
      {
        ATerm w_27;
        w_27 = t;
        t = SSL_printnl(not_null(z_65), not_null(a_66));
        t = w_27;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm z_52 (ATerm))
{
  ATerm j_66 = NULL,k_66 = NULL;
  j_66 = t;
  i_66 :
  if(match_cons(j_66, sym_Undefined_1))
    {
      k_66 = ATgetArgument(j_66, 0);
      {
        ATerm n_66 = NULL,p_66 = NULL;
        ATerm o_66 = NULL;
        t = SSLgetAnnotations(not_null(j_66));
        {
          o_66 = t;
          if(((n_66 != NULL) && (n_66 != o_66)))
            _fail(o_66);
          else
            n_66 = o_66;
        }
        {
          t = not_null(k_66);
          {
            ATerm r_66 = NULL;
            t = z_52(t);
            {
              p_66 = t;
              {
                ATerm s_66 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(p_66)), not_null(n_66));
                {
                  s_66 = t;
                  if(((r_66 != NULL) && (r_66 != s_66)))
                    _fail(s_66);
                  else
                    r_66 = s_66;
                }
                t = not_null(r_66);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm b_67 = NULL;
  b_67 = t;
  a_67 :
  if(match_cons(b_67, sym_Help_0))
    {
      ATerm d_67 = NULL,f_67 = NULL;
      ATerm x_27;
      x_27 = t;
      {
        ATerm e_67 = NULL;
        t = SSLgetAnnotations(not_null(b_67));
        {
          e_67 = t;
          if(((d_67 != NULL) && (d_67 != e_67)))
            _fail(e_67);
          else
            d_67 = e_67;
        }
      }
      t = x_27;
      {
        ATerm g_67 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(d_67));
        {
          g_67 = t;
          if(((f_67 != NULL) && (f_67 != g_67)))
            _fail(g_67);
          else
            f_67 = g_67;
        }
        t = not_null(f_67);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm m_67 = NULL,n_67 = NULL,o_67 = NULL;
  m_67 = t;
  l_67 :
  if(match_cons(m_67, sym__2))
    {
      n_67 = ATgetArgument(m_67, 0);
      o_67 = ATgetArgument(m_67, 1);
      t = SSL_table_get(not_null(n_67), not_null(o_67));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm w_67 = NULL,x_67 = NULL,y_67 = NULL,z_67 = NULL;
  w_67 = t;
  v_67 :
  if(match_cons(w_67, sym__3))
    {
      x_67 = ATgetArgument(w_67, 0);
      y_67 = ATgetArgument(w_67, 1);
      z_67 = ATgetArgument(w_67, 2);
      {
        ATerm a_28;
        a_28 = t;
        {
          ATerm d_68 = NULL;
          ATerm e_68 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(x_67), not_null(y_67));
          {
            ATerm b_28 = t;
            int c_28 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(c_28);
              }
            else
              {
                t = b_28;
                t = (ATerm) ATempty;
              }
            {
              e_68 = t;
              if(((d_68 != NULL) && (d_68 != e_68)))
                _fail(e_68);
              else
                d_68 = e_68;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(x_67), not_null(y_67), (ATerm) ATinsert(CheckATermList(not_null(d_68)), not_null(z_67)));
            t = table_put_0(t);
          }
        }
        t = a_28;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm w_64 (ATerm))
{
  ATerm i_68 = NULL;
  ATerm k_68 = NULL;
  t = term_m_17;
  {
    t = w_64(t);
    {
      k_68 = t;
      if(((i_68 != NULL) && (i_68 != k_68)))
        _fail(k_68);
      else
        i_68 = k_68;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_o_27, term_p_27, not_null(i_68));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm))
{
  ATerm r_68 = NULL,s_68 = NULL,t_68 = NULL;
  r_68 = t;
  p_68 :
  if(match_string(r_68, "register-usage-info"))
    {
      t = register_usage_1(t, g_0);
    }
  else
    {
      if(((ATgetType(r_68) == AT_LIST) && ((ATermList) r_68 != ATempty)))
        {
          s_68 = ATgetFirst((ATermList) r_68);
          t_68 = (ATerm) ATgetNext((ATermList) r_68);
          {
            ATerm w_68 = NULL;
            ATerm h_28;
            h_28 = t;
            {
              t = not_null(s_68);
              t = c_0(t);
            }
            t = h_28;
            {
              ATerm x_68 = NULL;
              t = term_m_17;
              {
                t = d_0(t);
                {
                  x_68 = t;
                  if(((w_68 != NULL) && (w_68 != x_68)))
                    _fail(x_68);
                  else
                    w_68 = x_68;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(t_68)), not_null(w_68));
            }
          }
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm system_usage_switch_0 (ATerm t)
{
  ATerm h_5 (ATerm t)
  {
    ATerm c_69 = NULL;
    c_69 = t;
    b_69 :
    if(!(match_string(c_69, "--help")))
      {
        if(!(match_string(c_69, "-h")))
          {
            if(!(match_string(c_69, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm i_5 (ATerm t)
  {
    t = term_i_28;
    return(t);
  }
  ATerm j_5 (ATerm t)
  {
    t = term_j_28;
    return(t);
  }
  t = Option_3(t, h_5, i_5, j_5);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm f_69 = NULL,g_69 = NULL,h_69 = NULL;
  f_69 = t;
  e_69 :
  if(((ATgetType(f_69) == AT_LIST) && ((ATermList) f_69 != ATempty)))
    {
      g_69 = ATgetFirst((ATermList) f_69);
      h_69 = (ATerm) ATgetNext((ATermList) f_69);
      t = (ATerm) ATinsert(CheckATermList(not_null(h_69)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(g_69)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm r_60 (ATerm), ATerm s_60 (ATerm))
{
  ATerm r_69 = NULL,s_69 = NULL,t_69 = NULL;
  r_69 = t;
  q_69 :
  if(((ATgetType(r_69) == AT_LIST) && ((ATermList) r_69 != ATempty)))
    {
      s_69 = ATgetFirst((ATermList) r_69);
      t_69 = (ATerm) ATgetNext((ATermList) r_69);
      {
        ATerm x_69 = NULL,z_69 = NULL;
        ATerm y_69 = NULL;
        t = SSLgetAnnotations(not_null(r_69));
        {
          y_69 = t;
          if(((x_69 != NULL) && (x_69 != y_69)))
            _fail(y_69);
          else
            x_69 = y_69;
        }
        {
          t = not_null(s_69);
          {
            ATerm b_70 = NULL;
            t = r_60(t);
            {
              z_69 = t;
              {
                t = not_null(t_69);
                {
                  ATerm d_70 = NULL;
                  t = s_60(t);
                  {
                    b_70 = t;
                    {
                      ATerm e_70 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(b_70)), not_null(z_69)), not_null(x_69));
                      {
                        e_70 = t;
                        if(((d_70 != NULL) && (d_70 != e_70)))
                          _fail(e_70);
                        else
                          d_70 = e_70;
                      }
                      t = not_null(d_70);
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Nil_0 (ATerm t)
{
  ATerm o_70 = NULL;
  o_70 = t;
  n_70 :
  if(((ATermList) o_70 == ATempty))
    {
      {
        ATerm q_70 = NULL,s_70 = NULL;
        ATerm m_28;
        m_28 = t;
        {
          ATerm r_70 = NULL;
          t = SSLgetAnnotations(not_null(o_70));
          {
            r_70 = t;
            if(((q_70 != NULL) && (q_70 != r_70)))
              _fail(r_70);
            else
              q_70 = r_70;
          }
        }
        t = m_28;
        {
          ATerm t_70 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(q_70));
          {
            t_70 = t;
            if(((s_70 != NULL) && (s_70 != t_70)))
              _fail(t_70);
            else
              s_70 = t_70;
          }
          t = not_null(s_70);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm set_config_0 (ATerm t)
{
  ATerm b_71 = NULL,c_71 = NULL,d_71 = NULL;
  b_71 = t;
  a_71 :
  if(match_cons(b_71, sym__2))
    {
      c_71 = ATgetArgument(b_71, 0);
      d_71 = ATgetArgument(b_71, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_q_6, not_null(c_71), not_null(d_71));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm u_64 (ATerm))
{
  ATerm n_28;
  n_28 = t;
  {
    ATerm k_5 (ATerm t)
    {
      t = term_o_28;
      t = u_64(t);
      return(t);
    }
    t = try_1(t, k_5);
  }
  t = n_28;
  {
    ATerm l_5 (ATerm t)
    {
      ATerm l_71 = NULL;
      ATerm p_28;
      p_28 = t;
      {
        ATerm j_71 = NULL;
        ATerm k_71 = NULL;
        k_71 = t;
        if(((j_71 != NULL) && (j_71 != k_71)))
          _fail(k_71);
        else
          j_71 = k_71;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_h_7, not_null(j_71));
          t = set_config_0(t);
        }
      }
      t = p_28;
      {
        ATerm n_71 = NULL;
        n_71 = t;
        if(((l_71 != NULL) && (l_71 != n_71)))
          _fail(n_71);
        else
          l_71 = n_71;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(l_71));
      }
      return(t);
    }
    ATerm m_5 (ATerm t)
    {
      ATerm u_28 = t;
      int v_28 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm w_28 = t;
          int x_28 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(x_28);
            }
          else
            {
              t = w_28;
              {
                t = u_64(t);
                t = Cons_2(t, _id, m_5);
              }
            }
          LocalPopChoice(v_28);
        }
      else
        {
          t = u_28;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, l_5, m_5);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm t_71 = NULL,u_71 = NULL,v_71 = NULL;
  ATerm y_28;
  y_28 = t;
  {
    ATerm w_71 = NULL,x_71 = NULL,y_71 = NULL,z_71 = NULL;
    w_71 = t;
    s_71 :
    if(match_cons(w_71, sym__3))
      {
        x_71 = ATgetArgument(w_71, 0);
        y_71 = ATgetArgument(w_71, 1);
        z_71 = ATgetArgument(w_71, 2);
        {
          if(((t_71 != NULL) && (t_71 != x_71)))
            _fail(x_71);
          else
            t_71 = x_71;
          {
            if(((u_71 != NULL) && (u_71 != y_71)))
              _fail(y_71);
            else
              u_71 = y_71;
            {
              if(((v_71 != NULL) && (v_71 != z_71)))
                _fail(z_71);
              else
                v_71 = z_71;
              t = SSL_table_put(not_null(t_71), not_null(u_71), not_null(v_71));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = y_28;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm t_64 (ATerm))
{
  ATerm c_72 = NULL;
  ATerm b_29;
  b_29 = t;
  {
    t = term_g_29;
    t = table_put_0(t);
  }
  t = b_29;
  {
    ATerm n_5 (ATerm t)
    {
      ATerm h_29 = t;
      int i_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = t_64(t);
          LocalPopChoice(i_29);
        }
      else
        {
          t = h_29;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, n_5);
    {
      ATerm o_5 (ATerm t)
      {
        ATerm j_29 = t;
        int m_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = option_defined_1(t, Help_0);
            {
              t = system_usage_0(t);
              {
                t = term_a_7;
                t = exit_0(t);
              }
            }
            LocalPopChoice(m_29);
          }
        else
          {
            t = j_29;
            {
              ATerm q_5 (ATerm t)
              {
                ATerm r_5 (ATerm t)
                {
                  ATerm d_72 = NULL;
                  d_72 = t;
                  if(((c_72 != NULL) && (c_72 != d_72)))
                    _fail(d_72);
                  else
                    c_72 = d_72;
                  return(t);
                }
                t = Undefined_1(t, r_5);
                return(t);
              }
              t = option_defined_1(t, q_5);
              {
                ATerm n_29;
                n_29 = t;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_f_6, (ATerm) ATinsert(ATinsert(ATempty, not_null(c_72)), term_o_29));
                  t = printnl_0(t);
                }
                t = n_29;
                {
                  t = system_usage_0(t);
                  {
                    t = term_h_6;
                    t = exit_0(t);
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, o_5);
      {
        ATerm p_29;
        p_29 = t;
        {
          t = term_o_27;
          t = table_destroy_0(t);
        }
        t = p_29;
      }
    }
  }
  return(t);
}
ATerm Abox_2_latex_0 (ATerm t)
{
  ATerm d_73 = NULL;
  ATerm f_73 = NULL,g_73 = NULL;
  ATerm s_5 (ATerm t)
  {
    ATerm s_29 = t;
    int x_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = io_options_0(t);
        LocalPopChoice(x_29);
      }
    else
      {
        t = s_29;
        {
          ATerm y_29 = t;
          int z_29 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm t_5 (ATerm t)
              {
                ATerm x_72 = NULL;
                x_72 = t;
                f_72 :
                if(!(match_string(x_72, "-t")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm u_5 (ATerm t)
              {
                ATerm y_72 = NULL;
                y_72 = t;
                t = (ATerm) ATmakeAppl(sym_LatexTable_1, not_null(y_72));
                return(t);
              }
              t = ArgOption_2(t, t_5, u_5);
              LocalPopChoice(z_29);
            }
          else
            {
              t = y_29;
              {
                ATerm v_5 (ATerm t)
                {
                  ATerm a_73 = NULL;
                  a_73 = t;
                  m_72 :
                  if(!(match_string(a_73, "-w")))
                    {
                      _fail(t);
                    }
                  return(t);
                }
                ATerm w_5 (ATerm t)
                {
                  ATerm b_73 = NULL;
                  b_73 = t;
                  t = (ATerm) ATmakeAppl(sym_Width_1, not_null(b_73));
                  return(t);
                }
                t = ArgOption_2(t, v_5, w_5);
              }
            }
        }
      }
    return(t);
  }
  t = parse_options_1(t, s_5);
  {
    d_73 = t;
    {
      ATerm a_30 = t;
      int b_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = need_help_1(t, usage_0);
          LocalPopChoice(b_30);
        }
      else
        {
          t = a_30;
          {
            ATerm c_30 = t;
            int d_30 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm e_30;
                e_30 = t;
                {
                  ATerm f_30 = t;
                  int g_30 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm x_5 (ATerm t)
                      {
                        ATerm h_73 = NULL,i_73 = NULL;
                        h_73 = t;
                        q_72 :
                        if(match_cons(h_73, sym_Output_1))
                          {
                            i_73 = ATgetArgument(h_73, 0);
                            {
                              if(((g_73 != NULL) && (g_73 != i_73)))
                                _fail(i_73);
                              else
                                g_73 = i_73;
                              {
                                t = not_null(g_73);
                                t = open_file_0(t);
                              }
                            }
                          }
                        else
                          {
                            _fail(t);
                          }
                        return(t);
                      }
                      t = option_defined_1(t, x_5);
                      LocalPopChoice(g_30);
                    }
                  else
                    {
                      t = f_30;
                      {
                        ATerm j_73 = NULL;
                        t = term_i_30;
                        {
                          j_73 = t;
                          if(((g_73 != NULL) && (g_73 != j_73)))
                            _fail(j_73);
                          else
                            g_73 = j_73;
                        }
                      }
                    }
                }
                t = e_30;
                {
                  ATerm j_30;
                  j_30 = t;
                  {
                    ATerm y_5 (ATerm t)
                    {
                      ATerm k_73 = NULL,l_73 = NULL;
                      k_73 = t;
                      t_72 :
                      if(match_cons(k_73, sym_LatexTable_1))
                        {
                          l_73 = ATgetArgument(k_73, 0);
                          t = not_null(l_73);
                        }
                      else
                        {
                          _fail(t);
                        }
                      return(t);
                    }
                    t = collect_1(t, y_5);
                    t = load_tables_0(t);
                  }
                  t = j_30;
                  {
                    t = input_file_0(t);
                    {
                      t = Snd_0(t);
                      {
                        ATerm k_30 = t;
                        int l_30 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm p_30;
                            p_30 = t;
                            {
                              t = not_null(d_73);
                              {
                                ATerm z_5 (ATerm t)
                                {
                                  ATerm o_73 = NULL,q_73 = NULL;
                                  o_73 = t;
                                  v_72 :
                                  if(match_cons(o_73, sym_Width_1))
                                    {
                                      q_73 = ATgetArgument(o_73, 0);
                                      if(((f_73 != NULL) && (f_73 != q_73)))
                                        _fail(q_73);
                                      else
                                        f_73 = q_73;
                                    }
                                  else
                                    {
                                      _fail(t);
                                    }
                                  return(t);
                                }
                                t = option_defined_1(t, z_5);
                              }
                            }
                            t = p_30;
                            {
                              ATerm a_6 (ATerm t)
                              {
                                t = not_null(f_73);
                                return(t);
                              }
                              t = abox2latex_1(t, a_6);
                            }
                            LocalPopChoice(l_30);
                          }
                        else
                          {
                            t = k_30;
                            t = abox2latex_0(t);
                          }
                        {
                          ATerm b_6 (ATerm t)
                          {
                            ATerm c_6 (ATerm t)
                            {
                              t = is_string_0(t);
                              {
                                ATerm q_30;
                                q_30 = t;
                                {
                                  ATerm d_6 (ATerm t)
                                  {
                                    t = not_null(g_73);
                                    return(t);
                                  }
                                  ATerm e_6 (ATerm t)
                                  {
                                    ATerm r_73 = NULL;
                                    r_73 = t;
                                    t = (ATerm) ATinsert(ATempty, not_null(r_73));
                                    return(t);
                                  }
                                  t = split_2(t, d_6, e_6);
                                  t = print_0(t);
                                }
                                t = q_30;
                              }
                              return(t);
                            }
                            t = try_1(t, c_6);
                            return(t);
                          }
                          t = topdown_1(t, b_6);
                          t = report_success_0(t);
                        }
                      }
                    }
                  }
                }
                LocalPopChoice(d_30);
              }
            else
              {
                t = c_30;
                t = report_failure_0(t);
              }
          }
        }
    }
  }
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = Abox_2_latex_0(t);
  return(t);
}
