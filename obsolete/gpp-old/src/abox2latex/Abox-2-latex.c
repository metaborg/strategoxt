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
Symbol sym_Nil_0;
Symbol sym_Cons_2;
Symbol sym_LatexTable_1;
Symbol sym_Width_1;
Symbol sym_Verbose_0;
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
Symbol sym_None_0;
Symbol sym_Some_1;
Symbol sym_Anno_2;
Symbol sym_Infinite_0;
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
Symbol sym_Dummy_0;
Symbol sym_Scopes_0;
Symbol sym_stdin_0;
Symbol sym_stdout_0;
Symbol sym_stderr_0;
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
Symbol sym_Var_1;
Symbol sym_Path_1;
Symbol sym_Prefix_2;
Symbol sym_Program_1;
Symbol sym_Undefined_1;
Symbol sym_WaitStatus_3;
Symbol sym_Pipe_2;
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
  sym_LatexTable_1 = ATmakeSymbol("LatexTable", 1, ATfalse);
  ATprotectSymbol(sym_LatexTable_1);
  sym_Width_1 = ATmakeSymbol("Width", 1, ATfalse);
  ATprotectSymbol(sym_Width_1);
  sym_Verbose_0 = ATmakeSymbol("Verbose", 0, ATfalse);
  ATprotectSymbol(sym_Verbose_0);
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
  sym_None_0 = ATmakeSymbol("None", 0, ATfalse);
  ATprotectSymbol(sym_None_0);
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
  sym_Anno_2 = ATmakeSymbol("Anno", 2, ATfalse);
  ATprotectSymbol(sym_Anno_2);
  sym_Infinite_0 = ATmakeSymbol("Infinite", 0, ATfalse);
  ATprotectSymbol(sym_Infinite_0);
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
  sym_Dummy_0 = ATmakeSymbol("Dummy", 0, ATfalse);
  ATprotectSymbol(sym_Dummy_0);
  sym_Scopes_0 = ATmakeSymbol("Scopes", 0, ATfalse);
  ATprotectSymbol(sym_Scopes_0);
  sym_stdin_0 = ATmakeSymbol("stdin", 0, ATfalse);
  ATprotectSymbol(sym_stdin_0);
  sym_stdout_0 = ATmakeSymbol("stdout", 0, ATfalse);
  ATprotectSymbol(sym_stdout_0);
  sym_stderr_0 = ATmakeSymbol("stderr", 0, ATfalse);
  ATprotectSymbol(sym_stderr_0);
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
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
  sym_Prefix_2 = ATmakeSymbol("Prefix", 2, ATfalse);
  ATprotectSymbol(sym_Prefix_2);
  sym_Program_1 = ATmakeSymbol("Program", 1, ATfalse);
  ATprotectSymbol(sym_Program_1);
  sym_Undefined_1 = ATmakeSymbol("Undefined", 1, ATfalse);
  ATprotectSymbol(sym_Undefined_1);
  sym_WaitStatus_3 = ATmakeSymbol("WaitStatus", 3, ATfalse);
  ATprotectSymbol(sym_WaitStatus_3);
  sym_Pipe_2 = ATmakeSymbol("Pipe", 2, ATfalse);
  ATprotectSymbol(sym_Pipe_2);
  init_constant_terms();
}
ATerm term_c_31;
ATerm term_i_30;
ATerm term_s_29;
ATerm term_h_29;
ATerm term_g_29;
ATerm term_f_29;
ATerm term_e_29;
ATerm term_q_28;
ATerm term_k_28;
ATerm term_s_26;
ATerm term_q_26;
ATerm term_p_26;
ATerm term_o_26;
ATerm term_n_26;
ATerm term_e_26;
ATerm term_w_25;
ATerm term_v_25;
ATerm term_r_25;
ATerm term_n_25;
ATerm term_k_25;
ATerm term_j_25;
ATerm term_g_25;
ATerm term_f_25;
ATerm term_t_24;
ATerm term_s_24;
ATerm term_o_24;
ATerm term_n_24;
ATerm term_m_24;
ATerm term_h_24;
ATerm term_g_24;
ATerm term_f_24;
ATerm term_c_24;
ATerm term_b_24;
ATerm term_z_23;
ATerm term_y_23;
ATerm term_x_23;
ATerm term_w_23;
ATerm term_v_23;
ATerm term_n_23;
ATerm term_m_23;
ATerm term_k_23;
ATerm term_i_23;
ATerm term_f_23;
ATerm term_r_22;
ATerm term_y_21;
ATerm term_w_21;
ATerm term_s_21;
ATerm term_r_20;
ATerm term_q_20;
ATerm term_p_20;
ATerm term_k_20;
ATerm term_d_20;
ATerm term_j_19;
ATerm term_s_18;
ATerm term_l_18;
ATerm term_f_18;
ATerm term_d_18;
ATerm term_h_17;
ATerm term_d_17;
ATerm term_s_16;
ATerm term_e_16;
ATerm term_d_16;
ATerm term_c_16;
ATerm term_b_16;
ATerm term_a_16;
ATerm term_z_15;
ATerm term_y_15;
ATerm term_x_15;
ATerm term_v_15;
ATerm term_u_15;
ATerm term_t_15;
ATerm term_r_15;
ATerm term_j_15;
ATerm term_g_15;
ATerm term_f_15;
ATerm term_r_14;
ATerm term_i_13;
ATerm term_h_13;
ATerm term_w_11;
ATerm term_v_11;
ATerm term_s_11;
ATerm term_p_11;
ATerm term_m_11;
ATerm term_d_11;
ATerm term_c_11;
ATerm term_b_11;
ATerm term_a_11;
ATerm term_z_10;
ATerm term_y_10;
ATerm term_x_10;
ATerm term_w_10;
ATerm term_v_10;
ATerm term_u_10;
ATerm term_t_10;
ATerm term_s_10;
ATerm term_r_10;
ATerm term_q_10;
ATerm term_o_10;
ATerm term_n_10;
ATerm term_m_10;
ATerm term_k_10;
ATerm term_j_10;
ATerm term_i_10;
ATerm term_h_10;
ATerm term_c_10;
ATerm term_z_9;
ATerm term_y_9;
ATerm term_x_9;
ATerm term_w_9;
ATerm term_v_9;
ATerm term_u_9;
ATerm term_p_9;
ATerm term_m_9;
ATerm term_l_9;
ATerm term_k_9;
ATerm term_j_9;
ATerm term_i_9;
ATerm term_h_9;
ATerm term_c_9;
ATerm term_z_8;
ATerm term_y_8;
ATerm term_x_8;
ATerm term_w_8;
ATerm term_v_8;
ATerm term_u_8;
ATerm term_p_8;
ATerm term_m_8;
ATerm term_l_8;
ATerm term_k_8;
ATerm term_j_8;
ATerm term_i_8;
ATerm term_h_8;
ATerm term_c_8;
ATerm term_z_7;
ATerm term_d_7;
ATerm term_c_7;
ATerm term_b_7;
ATerm term_x_6;
ATerm term_r_6;
ATerm term_m_6;
ATerm term_l_6;
ATerm term_k_6;
void init_constant_terms (void)
{
  ATprotect(&(term_k_6));
  term_k_6 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_l_6));
  term_l_6 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_m_6));
  term_m_6 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_r_6));
  term_r_6 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_x_6));
  term_x_6 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_b_7));
  term_b_7 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_c_7));
  term_c_7 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_d_7));
  term_d_7 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_z_7));
  term_z_7 = (ATerm) ATmakeAppl(ATmakeSymbol("\\\ncopies{", 0, ATtrue));
  ATprotect(&(term_c_8));
  term_c_8 = (ATerm) ATmakeAppl(ATmakeSymbol("}{", 0, ATtrue));
  ATprotect(&(term_h_8));
  term_h_8 = (ATerm) ATmakeAppl(ATmakeSymbol("}%", 0, ATtrue));
  ATprotect(&(term_i_8));
  term_i_8 = (ATerm) ATmakeAppl(ATmakeSymbol("\\begin{LBOX}{=}%\n", 0, ATtrue));
  ATprotect(&(term_j_8));
  term_j_8 = (ATerm) ATmakeAppl(ATmakeSymbol("%\n\\end{LBOX}%\n", 0, ATtrue));
  ATprotect(&(term_k_8));
  term_k_8 = (ATerm) ATmakeAppl(ATmakeSymbol("\\begin{LBOX}{", 0, ATtrue));
  ATprotect(&(term_l_8));
  term_l_8 = (ATerm) ATmakeAppl(ATmakeSymbol("}%\n", 0, ATtrue));
  ATprotect(&(term_m_8));
  term_m_8 = (ATerm) ATmakeAppl(ATmakeSymbol("\\boxlabel{", 0, ATtrue));
  ATprotect(&(term_p_8));
  term_p_8 = (ATerm) ATmakeAppl(ATmakeSymbol("}", 0, ATtrue));
  ATprotect(&(term_u_8));
  term_u_8 = (ATerm) ATmakeAppl(ATmakeSymbol("\\boxref{", 0, ATtrue));
  ATprotect(&(term_v_8));
  term_v_8 = (ATerm) ATmakeAppl(ATmakeSymbol("\\KWf{", 0, ATtrue));
  ATprotect(&(term_w_8));
  term_w_8 = (ATerm) ATmakeAppl(ATmakeSymbol("\\VARf{", 0, ATtrue));
  ATprotect(&(term_x_8));
  term_x_8 = (ATerm) ATmakeAppl(ATmakeSymbol("\\NUMf{", 0, ATtrue));
  ATprotect(&(term_y_8));
  term_y_8 = (ATerm) ATmakeAppl(ATmakeSymbol("\\MATHf{", 0, ATtrue));
  ATprotect(&(term_z_8));
  term_z_8 = (ATerm) ATmakeAppl(ATmakeSymbol("\\textsf{", 0, ATtrue));
  ATprotect(&(term_c_9));
  term_c_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\\textrm{", 0, ATtrue));
  ATprotect(&(term_h_9));
  term_h_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\\texttt{", 0, ATtrue));
  ATprotect(&(term_i_9));
  term_i_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\\textmd{", 0, ATtrue));
  ATprotect(&(term_j_9));
  term_j_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\\textbf{", 0, ATtrue));
  ATprotect(&(term_k_9));
  term_k_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\\textup{", 0, ATtrue));
  ATprotect(&(term_l_9));
  term_l_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\\textit{", 0, ATtrue));
  ATprotect(&(term_m_9));
  term_m_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\\textsc{", 0, ATtrue));
  ATprotect(&(term_p_9));
  term_p_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\\textsl{", 0, ATtrue));
  ATprotect(&(term_u_9));
  term_u_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\\emph{", 0, ATtrue));
  ATprotect(&(term_v_9));
  term_v_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\\tiny{", 0, ATtrue));
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\\scriptsize{", 0, ATtrue));
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\\footnotesize{", 0, ATtrue));
  ATprotect(&(term_y_9));
  term_y_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\\small{", 0, ATtrue));
  ATprotect(&(term_z_9));
  term_z_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\\normalsize{", 0, ATtrue));
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\large{", 0, ATtrue));
  ATprotect(&(term_h_10));
  term_h_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\Large{", 0, ATtrue));
  ATprotect(&(term_i_10));
  term_i_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\LARGE{", 0, ATtrue));
  ATprotect(&(term_j_10));
  term_j_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\huge{", 0, ATtrue));
  ATprotect(&(term_k_10));
  term_k_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\Huge{", 0, ATtrue));
  ATprotect(&(term_m_10));
  term_m_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\textcolor{", 0, ATtrue));
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\begin{boxenv}%\n", 0, ATtrue));
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeAppl(ATmakeSymbol("%\n\\end{boxenv}\n", 0, ATtrue));
  ATprotect(&(term_q_10));
  term_q_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\begin{boxenv}{", 0, ATtrue));
  ATprotect(&(term_r_10));
  term_r_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\begin{HBOX}{", 0, ATtrue));
  ATprotect(&(term_s_10));
  term_s_10 = (ATerm) ATmakeAppl(ATmakeSymbol("%\n\\end{HBOX}%\n", 0, ATtrue));
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\begin{VBOX}{", 0, ATtrue));
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeAppl(ATmakeSymbol("%\n\\end{VBOX}%\n", 0, ATtrue));
  ATprotect(&(term_v_10));
  term_v_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\begin{HVBOX}{", 0, ATtrue));
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeAppl(ATmakeSymbol("%\n\\end{HVBOX}%\n", 0, ATtrue));
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\begin{ABOX}{", 0, ATtrue));
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\crcr%\n\\end{ABOX}%\n", 0, ATtrue));
  ATprotect(&(term_z_10));
  term_z_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\begin{ALTBOX}{%\n", 0, ATtrue));
  ATprotect(&(term_a_11));
  term_a_11 = (ATerm) ATmakeAppl(ATmakeSymbol("%\n}", 0, ATtrue));
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeAppl(ATmakeSymbol("%\n}%\n\\end{ALTBOX}%\n", 0, ATtrue));
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeAppl(ATmakeSymbol("%\n\\begin{latextext}%\n", 0, ATtrue));
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeAppl(ATmakeSymbol("%\n\\end{latextext}%\n", 0, ATtrue));
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeAppl(ATmakeSymbol("\\hfill#\\hfill", 0, ATtrue));
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeAppl(ATmakeSymbol("\\hfill#", 0, ATtrue));
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeAppl(ATmakeSymbol("#\\hfill", 0, ATtrue));
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeAppl(ATmakeSymbol("\\cr", 0, ATtrue));
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeAppl(ATmakeSymbol("&", 0, ATtrue));
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeInt(39);
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeInt(96);
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(ATmakeSymbol("latex-abbrevs", 0, ATtrue));
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeAppl(ATmakeSymbol("\\boxspace{}", 0, ATtrue));
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeAppl(ATmakeSymbol("\\#", 0, ATtrue));
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(ATmakeSymbol("\\$", 0, ATtrue));
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeAppl(ATmakeSymbol("\\%", 0, ATtrue));
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeAppl(ATmakeSymbol("\\&", 0, ATtrue));
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeAppl(ATmakeSymbol("\\mbox{-}", 0, ATtrue));
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeAppl(ATmakeSymbol("\\ensuremath{<}", 0, ATtrue));
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeAppl(ATmakeSymbol("\\ensuremath{>}", 0, ATtrue));
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(ATmakeSymbol("\\ensuremath{\\backslash}", 0, ATtrue));
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeAppl(ATmakeSymbol("\\^{}", 0, ATtrue));
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeAppl(ATmakeSymbol("\\_", 0, ATtrue));
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(ATmakeSymbol("\\{", 0, ATtrue));
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeAppl(ATmakeSymbol("\\ensuremath{\\vert}", 0, ATtrue));
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeAppl(ATmakeSymbol("\\}", 0, ATtrue));
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeAppl(ATmakeSymbol("\\~{}", 0, ATtrue));
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeAppl(ATmakeSymbol("~", 0, ATtrue));
  ATprotect(&(term_h_17));
  term_h_17 = (ATerm) ATmakeAppl(ATmakeSymbol("1", 0, ATtrue));
  ATprotect(&(term_d_18));
  term_d_18 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_f_18));
  term_f_18 = (ATerm) ATmakeAppl(ATmakeSymbol("dissuasive library strategy: ", 0, ATtrue));
  ATprotect(&(term_l_18));
  term_l_18 = (ATerm) ATmakeAppl(ATmakeSymbol("separate-by/1; Use separate-by/0 and term wrap patterns: <separate-by> (a, <id>)", 0, ATtrue));
  ATprotect(&(term_s_18));
  term_s_18 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_j_19));
  term_j_19 = (ATerm) ATmakeAppl(ATmakeSymbol("0", 0, ATtrue));
  ATprotect(&(term_d_20));
  term_d_20 = (ATerm) ATmakeAppl(sym_CSEP_0);
  ATprotect(&(term_k_20));
  term_k_20 = (ATerm) ATmakeAppl(sym_L_0);
  ATprotect(&(term_p_20));
  term_p_20 = (ATerm) ATmakeAppl(sym_C_0);
  ATprotect(&(term_q_20));
  term_q_20 = (ATerm) ATmakeAppl(sym_R_0);
  ATprotect(&(term_r_20));
  term_r_20 = (ATerm) ATmakeAppl(sym_EOR_0);
  ATprotect(&(term_s_21));
  term_s_21 = (ATerm) ATmakeInt(61);
  ATprotect(&(term_w_21));
  term_w_21 = (ATerm) ATmakeAppl(ATmakeSymbol("\\ ", 0, ATtrue));
  ATprotect(&(term_y_21));
  term_y_21 = (ATerm) ATmakeAppl(ATmakeSymbol("\n\n", 0, ATtrue));
  ATprotect(&(term_r_22));
  term_r_22 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_f_23));
  term_f_23 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_i_23));
  term_i_23 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file>(file, mode)", 0, ATtrue));
  ATprotect(&(term_k_23));
  term_k_23 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_m_23));
  term_m_23 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_n_23));
  term_n_23 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-i abox] [-o latex] [-t table ... ] [-w width] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_v_23));
  term_v_23 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_w_23));
  term_w_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_x_23));
  term_x_23 = (ATerm) ATmakeAppl(sym__2, term_w_23, term_s_18);
  ATprotect(&(term_y_23));
  term_y_23 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_z_23));
  term_z_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_b_24));
  term_b_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_c_24));
  term_c_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_f_24));
  term_f_24 = (ATerm) ATmakeAppl(sym__2, term_x_6, term_r_6);
  ATprotect(&(term_g_24));
  term_g_24 = (ATerm) ATmakeAppl(sym_Verbose_1, term_r_6);
  ATprotect(&(term_h_24));
  term_h_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_m_24));
  term_m_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_n_24));
  term_n_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_o_24));
  term_o_24 = (ATerm) ATmakeAppl(sym__2, term_n_24, term_s_18);
  ATprotect(&(term_s_24));
  term_s_24 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_t_24));
  term_t_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_f_25));
  term_f_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_g_25));
  term_g_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_j_25));
  term_j_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_k_25));
  term_k_25 = (ATerm) ATmakeAppl(sym__2, term_j_25, term_s_18);
  ATprotect(&(term_n_25));
  term_n_25 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_r_25));
  term_r_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_v_25));
  term_v_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_w_25));
  term_w_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_e_26));
  term_e_26 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_n_26));
  term_n_26 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_o_26));
  term_o_26 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_p_26));
  term_p_26 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_q_26));
  term_q_26 = (ATerm) ATmakeAppl(sym__2, term_o_26, term_p_26);
  ATprotect(&(term_s_26));
  term_s_26 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_k_28));
  term_k_28 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_q_28));
  term_q_28 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_e_29));
  term_e_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_f_29));
  term_f_29 = (ATerm) ATmakeAppl(sym__2, term_e_29, term_s_18);
  ATprotect(&(term_g_29));
  term_g_29 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_h_29));
  term_h_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_s_29));
  term_s_29 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_i_30));
  term_i_30 = (ATerm) ATmakeAppl(sym__3, term_o_26, term_p_26, (ATerm) ATempty);
  ATprotect(&(term_c_31));
  term_c_31 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm report_failure_0 (ATerm);
ATerm ticks_to_seconds_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm l_78 (ATerm), ATerm m_78 (ATerm));
ATerm crush_2 (ATerm, ATerm j_77 (ATerm), ATerm k_77 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm r_85 (ATerm));
ATerm report_success_0 (ATerm);
ATerm print_0 (ATerm);
ATerm split_2 (ATerm, ATerm a_80 (ATerm), ATerm b_80 (ATerm));
ATerm is_string_0 (ATerm);
ATerm try_1 (ATerm, ATerm g_64 (ATerm));
ATerm topdown_1 (ATerm, ATerm u_65 (ATerm));
ATerm abox2latex_0 (ATerm);
ATerm CSEP_0 (ATerm);
ATerm EOR_0 (ATerm);
ATerm L_0 (ATerm);
ATerm R_0 (ATerm);
ATerm C_0 (ATerm);
ATerm int_to_string_0 (ATerm);
ATerm is_int_0 (ATerm);
ATerm Latex2text_0 (ATerm);
ATerm bottomup_1 (ATerm, ATerm v_65 (ATerm));
ATerm latex2text_0 (ATerm);
ATerm flat_list_0 (ATerm);
ATerm replace_quotes_0 (ATerm);
ATerm listtd_1 (ATerm, ATerm e_73 (ATerm));
ATerm latex_string_0 (ATerm);
ATerm Tl_0 (ATerm);
ATerm remove_trailing_1 (ATerm, ATerm d_64 (ATerm));
ATerm at_suffix_1 (ATerm, ATerm q_72 (ATerm));
ATerm LatexComment_0 (ATerm);
ATerm make_latex_comment_0 (ATerm);
ATerm MATH_0 (ATerm);
ATerm NUM_0 (ATerm);
ATerm VAR_0 (ATerm);
ATerm KW_0 (ATerm);
ATerm CL_0 (ATerm);
ATerm FFID_2 (ATerm, ATerm t_56 (ATerm), ATerm u_56 (ATerm));
ATerm SZ_0 (ATerm);
ATerm SH_0 (ATerm);
ATerm SE_0 (ATerm);
ATerm FM_0 (ATerm);
ATerm toh_0 (ATerm);
ATerm HS_0 (ATerm);
ATerm Hspace_0 (ATerm);
ATerm separate_by_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm s_85 (ATerm));
ATerm dissuader_1 (ATerm, ATerm d_83 (ATerm));
ATerm separate_by_1 (ATerm, ATerm t_71 (ATerm));
ATerm filter_1 (ATerm, ATerm o_79 (ATerm));
ATerm IS_0 (ATerm);
ATerm Ispace_0 (ATerm);
ATerm VS_0 (ATerm);
ATerm SOpt_2 (ATerm, ATerm w_55 (ATerm), ATerm x_55 (ATerm));
ATerm Vspace_0 (ATerm);
ATerm C_2 (ATerm, ATerm c_57 (ATerm), ATerm d_57 (ATerm));
ATerm table_row_0 (ATerm);
ATerm MkRows_0 (ATerm);
ATerm at_last_1 (ATerm, ATerm x_72 (ATerm));
ATerm table_def_0 (ATerm);
ATerm subt_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm while_not_2 (ATerm, ATerm l_65 (ATerm), ATerm m_65 (ATerm));
ATerm for_3 (ATerm, ATerm o_65 (ATerm), ATerm p_65 (ATerm), ATerm q_65 (ATerm));
ATerm copy_0 (ATerm);
ATerm R_2 (ATerm, ATerm l_56 (ATerm), ATerm m_56 (ATerm));
ATerm construct_rows_0 (ATerm);
ATerm Abox2latex_0 (ATerm);
ATerm abox2latex_1 (ATerm, ATerm z_63 (ATerm));
ATerm option_defined_1 (ATerm, ATerm u_86 (ATerm));
ATerm Snd_0 (ATerm);
ATerm input_file_0 (ATerm);
ATerm StoreEntries_0 (ATerm);
ATerm ReadFromFile_0 (ATerm);
ATerm table_create_0 (ATerm);
ATerm load_tables_0 (ATerm);
ATerm eq_0 (ATerm);
ATerm fetch_1 (ATerm, ATerm g_72 (ATerm));
ATerm HdMember_p__2 (ATerm, ATerm y_77 (ATerm), ATerm z_77 (ATerm));
ATerm union_1 (ATerm, ATerm u_77 (ATerm));
ATerm union_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm n_78 (ATerm), ATerm o_78 (ATerm), ATerm p_78 (ATerm));
ATerm crush_3 (ATerm, ATerm l_77 (ATerm), ATerm m_77 (ATerm), ATerm n_77 (ATerm));
ATerm collect_om_1 (ATerm, ATerm k_76 (ATerm));
ATerm collect_1 (ATerm, ATerm m_76 (ATerm));
ATerm obsolete_1 (ATerm, ATerm c_83 (ATerm));
ATerm open_file_0 (ATerm);
ATerm usage_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm x_83 (ATerm));
ATerm ArgOption_2 (ATerm, ATerm n_87 (ATerm), ATerm o_87 (ATerm));
ATerm version_option_0 (ATerm);
ATerm keep_option_0 (ATerm);
ATerm string_to_int_0 (ATerm);
ATerm verbose_option_0 (ATerm);
ATerm general_options_0 (ATerm);
ATerm output_option_0 (ATerm);
ATerm aterm_output_option_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm));
ATerm input_option_0 (ATerm);
ATerm io_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm v_87 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm h_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm u_87 (ATerm));
ATerm Program_1 (ATerm, ATerm l_63 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm w_82 (ATerm));
ATerm Undefined_1 (ATerm, ATerm m_63 (ATerm));
ATerm Help_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm m_72 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm _2 (ATerm, ATerm j_54 (ATerm), ATerm k_54 (ATerm));
ATerm conc_strings_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm debug_1 (ATerm, ATerm v_82 (ATerm));
ATerm map_1 (ATerm, ATerm x_71 (ATerm));
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm z_87 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm s_55 (ATerm), ATerm t_55 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm x_87 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm w_87 (ATerm));
ATerm Abox_2_latex_0 (ATerm);
ATerm main_0 (ATerm);
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_k_6, (ATerm) ATinsert(ATempty, term_l_6));
  {
    t = printnl_0(t);
    {
      t = term_m_6;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm e_0 = NULL;
  e_0 = t;
  t = SSL_TicksToSeconds(not_null(e_0));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm v_0 = NULL,a_1 = NULL,b_1 = NULL;
  v_0 = t;
  u_0 :
  if(match_cons(v_0, sym__2))
    {
      a_1 = ATgetArgument(v_0, 0);
      b_1 = ATgetArgument(v_0, 1);
      {
        ATerm n_6 = t;
        int o_6 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(a_1), not_null(b_1));
            LocalPopChoice(o_6);
          }
        else
          {
            t = n_6;
            t = SSL_addr(not_null(a_1), not_null(b_1));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm l_78 (ATerm), ATerm m_78 (ATerm))
{
  ATerm p_6 = t;
  int q_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = l_78(t);
      LocalPopChoice(q_6);
    }
  else
    {
      t = p_6;
      {
        ATerm s_1 = NULL,t_1 = NULL,u_1 = NULL;
        s_1 = t;
        n_1 :
        if(((ATgetType(s_1) == AT_LIST) && !(ATisEmpty(s_1))))
          {
            t_1 = ATgetFirst((ATermList) s_1);
            u_1 = (ATerm) ATgetNext((ATermList) s_1);
            {
              ATerm e_2 = NULL;
              ATerm f_2 = NULL;
              t = not_null(u_1);
              {
                t = foldr_2(t, l_78, m_78);
                {
                  f_2 = t;
                  if(((e_2 != NULL) && (e_2 != f_2)))
                    _fail(f_2);
                  else
                    e_2 = f_2;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(t_1), not_null(e_2));
                t = m_78(t);
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
ATerm crush_2 (ATerm t, ATerm j_77 (ATerm), ATerm k_77 (ATerm))
{
  ATerm e_3 = NULL;
  ATerm j_3 = NULL;
  e_3 = t;
  {
    ATerm k_3 = NULL;
    ATerm p_3 = NULL,q_3 = NULL,r_3 = NULL;
    t = not_null(e_3);
    {
      k_3 = t;
      {
        t = SSL_explode_term(not_null(k_3));
        {
          p_3 = t;
          d_3 :
          if(match_cons(p_3, sym__2))
            {
              q_3 = ATgetArgument(p_3, 0);
              r_3 = ATgetArgument(p_3, 1);
              if(((j_3 != NULL) && (j_3 != r_3)))
                _fail(r_3);
              else
                j_3 = r_3;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(j_3);
      t = foldr_2(t, j_77, k_77);
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
    ATerm b_0 (ATerm t)
    {
      t = term_r_6;
      return(t);
    }
    t = crush_2(t, b_0, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm r_85 (ATerm))
{
  ATerm s_6 = t;
  int v_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_6;
      w_6 = t;
      {
        ATerm c_4 = NULL;
        ATerm d_4 = NULL;
        t = term_x_6;
        {
          t = get_config_0(t);
          {
            d_4 = t;
            if(((c_4 != NULL) && (c_4 != d_4)))
              _fail(d_4);
            else
              c_4 = d_4;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(c_4), term_m_6);
          t = geq_0(t);
        }
      }
      t = w_6;
      t = r_85(t);
      LocalPopChoice(v_6);
    }
  else
    {
      t = s_6;
      {
      }
    }
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm c_0 (ATerm t)
  {
    ATerm i_5 = NULL,k_5 = NULL;
    ATerm a_7;
    a_7 = t;
    {
      ATerm j_5 = NULL;
      t = run_time_0(t);
      {
        j_5 = t;
        if(((i_5 != NULL) && (i_5 != j_5)))
          _fail(j_5);
        else
          i_5 = j_5;
      }
    }
    t = a_7;
    {
      ATerm y_5 = NULL;
      t = term_b_7;
      {
        t = get_config_0(t);
        {
          y_5 = t;
          if(((k_5 != NULL) && (k_5 != y_5)))
            _fail(y_5);
          else
            k_5 = y_5;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_k_6, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_d_7), not_null(i_5)), term_c_7), not_null(k_5)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, c_0);
  {
    t = term_r_6;
    t = exit_0(t);
  }
  return(t);
}
ATerm print_0 (ATerm t)
{
  ATerm u_6 = NULL,y_6 = NULL,z_6 = NULL;
  u_6 = t;
  t_6 :
  if(match_cons(u_6, sym__2))
    {
      y_6 = ATgetArgument(u_6, 0);
      z_6 = ATgetArgument(u_6, 1);
      {
        ATerm e_7;
        e_7 = t;
        t = SSL_print(not_null(y_6), not_null(z_6));
        t = e_7;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm split_2 (ATerm t, ATerm a_80 (ATerm), ATerm b_80 (ATerm))
{
  ATerm f_7 = NULL,h_7 = NULL;
  ATerm j_7;
  j_7 = t;
  {
    ATerm g_7 = NULL;
    t = a_80(t);
    {
      g_7 = t;
      if(((f_7 != NULL) && (f_7 != g_7)))
        _fail(g_7);
      else
        f_7 = g_7;
    }
  }
  t = j_7;
  {
    ATerm i_7 = NULL;
    t = b_80(t);
    {
      i_7 = t;
      if(((h_7 != NULL) && (h_7 != i_7)))
        _fail(i_7);
      else
        h_7 = i_7;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(f_7), not_null(h_7));
  }
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm m_7 = NULL;
  m_7 = t;
  t = SSL_is_string(not_null(m_7));
  return(t);
}
ATerm try_1 (ATerm t, ATerm g_64 (ATerm))
{
  ATerm k_7 = t;
  int l_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = g_64(t);
      LocalPopChoice(l_7);
    }
  else
    {
      t = k_7;
      {
      }
    }
  return(t);
}
ATerm topdown_1 (ATerm t, ATerm u_65 (ATerm))
{
  t = u_65(t);
  {
    ATerm f_0 (ATerm t)
    {
      t = topdown_1(t, u_65);
      return(t);
    }
    t = _all(t, f_0);
  }
  return(t);
}
ATerm abox2latex_0 (ATerm t)
{
  ATerm r_7 = NULL;
  ATerm t_7 = NULL;
  r_7 = t;
  {
    ATerm u_7 = NULL;
    t = not_null(r_7);
    {
      ATerm m_0 (ATerm t)
      {
        ATerm n_7 = t;
        int o_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Abox2latex_0(t);
            LocalPopChoice(o_7);
          }
        else
          {
            t = n_7;
            {
            }
          }
        return(t);
      }
      t = topdown_1(t, m_0);
      {
        u_7 = t;
        if(((t_7 != NULL) && (t_7 != u_7)))
          _fail(u_7);
        else
          t_7 = u_7;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym_BOXENV_2, (ATerm)ATempty, not_null(t_7));
      t = latex2text_0(t);
    }
  }
  return(t);
}
ATerm CSEP_0 (ATerm t)
{
  ATerm b_8 = NULL;
  b_8 = t;
  a_8 :
  if(match_cons(b_8, sym_CSEP_0))
    {
      ATerm d_8 = NULL,f_8 = NULL;
      ATerm p_7;
      p_7 = t;
      {
        ATerm e_8 = NULL;
        t = SSLgetAnnotations(not_null(b_8));
        {
          e_8 = t;
          if(((d_8 != NULL) && (d_8 != e_8)))
            _fail(e_8);
          else
            d_8 = e_8;
        }
      }
      t = p_7;
      {
        ATerm g_8 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_CSEP_0), not_null(d_8));
        {
          g_8 = t;
          if(((f_8 != NULL) && (f_8 != g_8)))
            _fail(g_8);
          else
            f_8 = g_8;
        }
        t = not_null(f_8);
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
  ATerm o_8 = NULL;
  o_8 = t;
  n_8 :
  if(match_cons(o_8, sym_EOR_0))
    {
      ATerm q_8 = NULL,s_8 = NULL;
      ATerm q_7;
      q_7 = t;
      {
        ATerm r_8 = NULL;
        t = SSLgetAnnotations(not_null(o_8));
        {
          r_8 = t;
          if(((q_8 != NULL) && (q_8 != r_8)))
            _fail(r_8);
          else
            q_8 = r_8;
        }
      }
      t = q_7;
      {
        ATerm t_8 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_EOR_0), not_null(q_8));
        {
          t_8 = t;
          if(((s_8 != NULL) && (s_8 != t_8)))
            _fail(t_8);
          else
            s_8 = t_8;
        }
        t = not_null(s_8);
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
  ATerm b_9 = NULL;
  b_9 = t;
  a_9 :
  if(match_cons(b_9, sym_L_0))
    {
      ATerm d_9 = NULL,f_9 = NULL;
      ATerm s_7;
      s_7 = t;
      {
        ATerm e_9 = NULL;
        t = SSLgetAnnotations(not_null(b_9));
        {
          e_9 = t;
          if(((d_9 != NULL) && (d_9 != e_9)))
            _fail(e_9);
          else
            d_9 = e_9;
        }
      }
      t = s_7;
      {
        ATerm g_9 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_L_0), not_null(d_9));
        {
          g_9 = t;
          if(((f_9 != NULL) && (f_9 != g_9)))
            _fail(g_9);
          else
            f_9 = g_9;
        }
        t = not_null(f_9);
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
  ATerm o_9 = NULL;
  o_9 = t;
  n_9 :
  if(match_cons(o_9, sym_R_0))
    {
      ATerm q_9 = NULL,s_9 = NULL;
      ATerm v_7;
      v_7 = t;
      {
        ATerm r_9 = NULL;
        t = SSLgetAnnotations(not_null(o_9));
        {
          r_9 = t;
          if(((q_9 != NULL) && (q_9 != r_9)))
            _fail(r_9);
          else
            q_9 = r_9;
        }
      }
      t = v_7;
      {
        ATerm t_9 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_R_0), not_null(q_9));
        {
          t_9 = t;
          if(((s_9 != NULL) && (s_9 != t_9)))
            _fail(t_9);
          else
            s_9 = t_9;
        }
        t = not_null(s_9);
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
  ATerm b_10 = NULL;
  b_10 = t;
  a_10 :
  if(match_cons(b_10, sym_C_0))
    {
      ATerm d_10 = NULL,f_10 = NULL;
      ATerm w_7;
      w_7 = t;
      {
        ATerm e_10 = NULL;
        t = SSLgetAnnotations(not_null(b_10));
        {
          e_10 = t;
          if(((d_10 != NULL) && (d_10 != e_10)))
            _fail(e_10);
          else
            d_10 = e_10;
        }
      }
      t = w_7;
      {
        ATerm g_10 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_C_0), not_null(d_10));
        {
          g_10 = t;
          if(((f_10 != NULL) && (f_10 != g_10)))
            _fail(g_10);
          else
            f_10 = g_10;
        }
        t = not_null(f_10);
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
  ATerm l_10 = NULL;
  l_10 = t;
  t = SSL_int_to_string(not_null(l_10));
  return(t);
}
ATerm is_int_0 (ATerm t)
{
  ATerm p_10 = NULL;
  p_10 = t;
  t = SSL_is_int(not_null(p_10));
  return(t);
}
ATerm Latex2text_0 (ATerm t)
{
  ATerm k_12 = NULL,l_12 = NULL,m_12 = NULL,n_12 = NULL,o_12 = NULL,p_12 = NULL,q_12 = NULL,r_12 = NULL,s_12 = NULL,t_12 = NULL,u_12 = NULL,v_12 = NULL;
  ATerm x_7 = t;
  int y_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_12 = NULL,x_12 = NULL,y_12 = NULL,z_12 = NULL,a_13 = NULL,b_13 = NULL,c_13 = NULL;
      ATerm n_13 (ATerm t)
      {
        ATerm d_13 = NULL;
        if(((s_12 != NULL) && (s_12 != a_13)))
          _fail(a_13);
        else
          s_12 = a_13;
        {
          if(((v_12 != NULL) && (v_12 != c_13)))
            _fail(c_13);
          else
            v_12 = c_13;
          {
            t = not_null(s_12);
            {
              t = is_int_0(t);
              {
                ATerm e_13 = NULL;
                t = not_null(s_12);
                {
                  t = int_to_string_0(t);
                  {
                    e_13 = t;
                    if(((d_13 != NULL) && (d_13 != e_13)))
                      _fail(e_13);
                    else
                      d_13 = e_13;
                  }
                }
                t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_h_8), not_null(v_12)), term_c_8), not_null(d_13)), term_z_7);
              }
            }
          }
        }
        return(t);
      }
      ATerm o_13 (ATerm t)
      {
        if(((v_12 != NULL) && (v_12 != c_13)))
          _fail(c_13);
        else
          v_12 = c_13;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_j_8), not_null(v_12)), term_i_8);
        return(t);
      }
      ATerm p_13 (ATerm t)
      {
        if(((s_12 != NULL) && (s_12 != a_13)))
          _fail(a_13);
        else
          s_12 = a_13;
        {
          if(((v_12 != NULL) && (v_12 != c_13)))
            _fail(c_13);
          else
            v_12 = c_13;
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_j_8), not_null(v_12)), term_l_8), not_null(s_12)), term_k_8);
        }
        return(t);
      }
      ATerm q_13 (ATerm t)
      {
        if(((t_12 != NULL) && (t_12 != a_13)))
          _fail(a_13);
        else
          t_12 = a_13;
        {
          if(((v_12 != NULL) && (v_12 != c_13)))
            _fail(c_13);
          else
            v_12 = c_13;
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(v_12)), term_p_8), not_null(t_12)), term_m_8);
        }
        return(t);
      }
      ATerm r_13 (ATerm t)
      {
        if(((t_12 != NULL) && (t_12 != a_13)))
          _fail(a_13);
        else
          t_12 = a_13;
        {
          if(((v_12 != NULL) && (v_12 != c_13)))
            _fail(c_13);
          else
            v_12 = c_13;
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_p_8), not_null(v_12)), term_c_8), not_null(t_12)), term_u_8);
        }
        return(t);
      }
      ATerm s_13 (ATerm t)
      {
        if(((v_12 != NULL) && (v_12 != c_13)))
          _fail(c_13);
        else
          v_12 = c_13;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_p_8), not_null(v_12)), term_v_8);
        return(t);
      }
      ATerm t_13 (ATerm t)
      {
        if(((v_12 != NULL) && (v_12 != c_13)))
          _fail(c_13);
        else
          v_12 = c_13;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_p_8), not_null(v_12)), term_w_8);
        return(t);
      }
      ATerm u_13 (ATerm t)
      {
        if(((v_12 != NULL) && (v_12 != c_13)))
          _fail(c_13);
        else
          v_12 = c_13;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_p_8), not_null(v_12)), term_x_8);
        return(t);
      }
      ATerm v_13 (ATerm t)
      {
        if(((v_12 != NULL) && (v_12 != c_13)))
          _fail(c_13);
        else
          v_12 = c_13;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_p_8), not_null(v_12)), term_y_8);
        return(t);
      }
      ATerm w_13 (ATerm t)
      {
        if(((v_12 != NULL) && (v_12 != c_13)))
          _fail(c_13);
        else
          v_12 = c_13;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_p_8), not_null(v_12)), term_z_8);
        return(t);
      }
      ATerm x_13 (ATerm t)
      {
        if(((v_12 != NULL) && (v_12 != c_13)))
          _fail(c_13);
        else
          v_12 = c_13;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_p_8), not_null(v_12)), term_c_9);
        return(t);
      }
      ATerm y_13 (ATerm t)
      {
        if(((v_12 != NULL) && (v_12 != c_13)))
          _fail(c_13);
        else
          v_12 = c_13;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_p_8), not_null(v_12)), term_h_9);
        return(t);
      }
      ATerm z_13 (ATerm t)
      {
        if(((v_12 != NULL) && (v_12 != c_13)))
          _fail(c_13);
        else
          v_12 = c_13;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_p_8), not_null(v_12)), term_i_9);
        return(t);
      }
      ATerm a_14 (ATerm t)
      {
        if(((v_12 != NULL) && (v_12 != c_13)))
          _fail(c_13);
        else
          v_12 = c_13;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_p_8), not_null(v_12)), term_j_9);
        return(t);
      }
      ATerm b_14 (ATerm t)
      {
        if(((v_12 != NULL) && (v_12 != c_13)))
          _fail(c_13);
        else
          v_12 = c_13;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_p_8), not_null(v_12)), term_k_9);
        return(t);
      }
      ATerm c_14 (ATerm t)
      {
        if(((v_12 != NULL) && (v_12 != c_13)))
          _fail(c_13);
        else
          v_12 = c_13;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_p_8), not_null(v_12)), term_l_9);
        return(t);
      }
      ATerm d_14 (ATerm t)
      {
        if(((v_12 != NULL) && (v_12 != c_13)))
          _fail(c_13);
        else
          v_12 = c_13;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_p_8), not_null(v_12)), term_m_9);
        return(t);
      }
      ATerm e_14 (ATerm t)
      {
        if(((v_12 != NULL) && (v_12 != c_13)))
          _fail(c_13);
        else
          v_12 = c_13;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_p_8), not_null(v_12)), term_p_9);
        return(t);
      }
      ATerm f_14 (ATerm t)
      {
        if(((v_12 != NULL) && (v_12 != c_13)))
          _fail(c_13);
        else
          v_12 = c_13;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_p_8), not_null(v_12)), term_u_9);
        return(t);
      }
      ATerm g_14 (ATerm t)
      {
        if(((v_12 != NULL) && (v_12 != c_13)))
          _fail(c_13);
        else
          v_12 = c_13;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_p_8), not_null(v_12)), term_v_9);
        return(t);
      }
      ATerm h_14 (ATerm t)
      {
        if(((v_12 != NULL) && (v_12 != c_13)))
          _fail(c_13);
        else
          v_12 = c_13;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_p_8), not_null(v_12)), term_w_9);
        return(t);
      }
      ATerm i_14 (ATerm t)
      {
        if(((v_12 != NULL) && (v_12 != c_13)))
          _fail(c_13);
        else
          v_12 = c_13;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_p_8), not_null(v_12)), term_x_9);
        return(t);
      }
      ATerm j_14 (ATerm t)
      {
        if(((v_12 != NULL) && (v_12 != c_13)))
          _fail(c_13);
        else
          v_12 = c_13;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_p_8), not_null(v_12)), term_y_9);
        return(t);
      }
      ATerm k_14 (ATerm t)
      {
        if(((v_12 != NULL) && (v_12 != c_13)))
          _fail(c_13);
        else
          v_12 = c_13;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_p_8), not_null(v_12)), term_z_9);
        return(t);
      }
      ATerm l_14 (ATerm t)
      {
        if(((v_12 != NULL) && (v_12 != c_13)))
          _fail(c_13);
        else
          v_12 = c_13;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_p_8), not_null(v_12)), term_c_10);
        return(t);
      }
      ATerm m_14 (ATerm t)
      {
        if(((v_12 != NULL) && (v_12 != c_13)))
          _fail(c_13);
        else
          v_12 = c_13;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_p_8), not_null(v_12)), term_h_10);
        return(t);
      }
      ATerm n_14 (ATerm t)
      {
        if(((v_12 != NULL) && (v_12 != c_13)))
          _fail(c_13);
        else
          v_12 = c_13;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_p_8), not_null(v_12)), term_i_10);
        return(t);
      }
      ATerm o_14 (ATerm t)
      {
        if(((v_12 != NULL) && (v_12 != c_13)))
          _fail(c_13);
        else
          v_12 = c_13;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_p_8), not_null(v_12)), term_j_10);
        return(t);
      }
      ATerm p_14 (ATerm t)
      {
        if(((v_12 != NULL) && (v_12 != c_13)))
          _fail(c_13);
        else
          v_12 = c_13;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_p_8), not_null(v_12)), term_k_10);
        return(t);
      }
      ATerm q_14 (ATerm t)
      {
        if(((u_12 != NULL) && (u_12 != b_13)))
          _fail(b_13);
        else
          u_12 = b_13;
        {
          if(((v_12 != NULL) && (v_12 != c_13)))
            _fail(c_13);
          else
            v_12 = c_13;
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_p_8), not_null(v_12)), term_c_8), not_null(u_12)), term_m_10);
        }
        return(t);
      }
      z_12 = t;
      f_12 :
      if(match_cons(z_12, sym_BOXENV_2))
        {
          a_13 = ATgetArgument(z_12, 0);
          c_13 = ATgetArgument(z_12, 1);
          g_12 :
          if(((ATgetType(a_13) == AT_LIST) && ATisEmpty(a_13)))
            {
              {
                if(((p_12 != NULL) && (p_12 != c_13)))
                  _fail(c_13);
                else
                  p_12 = c_13;
                t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_o_10), not_null(p_12)), term_n_10);
              }
            }
          else
            {
              if(((ATgetType(a_13) == AT_LIST) && !(ATisEmpty(a_13))))
                {
                  b_13 = ATgetFirst((ATermList) a_13);
                  w_12 = (ATerm) ATgetNext((ATermList) a_13);
                  h_12 :
                  if(((ATgetType(w_12) == AT_LIST) && ATisEmpty(w_12)))
                    {
                      {
                        if(((k_12 != NULL) && (k_12 != b_13)))
                          _fail(b_13);
                        else
                          k_12 = b_13;
                        {
                          if(((p_12 != NULL) && (p_12 != c_13)))
                            _fail(c_13);
                          else
                            p_12 = c_13;
                          t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_o_10), not_null(p_12)), term_l_8), not_null(k_12)), term_q_10);
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
          if(match_cons(z_12, sym_HBOX_2))
            {
              a_13 = ATgetArgument(z_12, 0);
              c_13 = ATgetArgument(z_12, 1);
              {
                if(((l_12 != NULL) && (l_12 != a_13)))
                  _fail(a_13);
                else
                  l_12 = a_13;
                {
                  if(((p_12 != NULL) && (p_12 != c_13)))
                    _fail(c_13);
                  else
                    p_12 = c_13;
                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_s_10), not_null(p_12)), term_l_8), not_null(l_12)), term_r_10);
                }
              }
            }
          else
            {
              if(match_cons(z_12, sym_VBOX_3))
                {
                  a_13 = ATgetArgument(z_12, 0);
                  c_13 = ATgetArgument(z_12, 1);
                  x_12 = ATgetArgument(z_12, 2);
                  {
                    if(((m_12 != NULL) && (m_12 != a_13)))
                      _fail(a_13);
                    else
                      m_12 = a_13;
                    {
                      if(((n_12 != NULL) && (n_12 != c_13)))
                        _fail(c_13);
                      else
                        n_12 = c_13;
                      {
                        if(((p_12 != NULL) && (p_12 != x_12)))
                          _fail(x_12);
                        else
                          p_12 = x_12;
                        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_u_10), not_null(p_12)), term_l_8), not_null(n_12)), term_c_8), not_null(m_12)), term_t_10);
                      }
                    }
                  }
                }
              else
                {
                  if(match_cons(z_12, sym_HVBOX_4))
                    {
                      a_13 = ATgetArgument(z_12, 0);
                      c_13 = ATgetArgument(z_12, 1);
                      x_12 = ATgetArgument(z_12, 2);
                      y_12 = ATgetArgument(z_12, 3);
                      {
                        if(((l_12 != NULL) && (l_12 != a_13)))
                          _fail(a_13);
                        else
                          l_12 = a_13;
                        {
                          if(((m_12 != NULL) && (m_12 != c_13)))
                            _fail(c_13);
                          else
                            m_12 = c_13;
                          {
                            if(((n_12 != NULL) && (n_12 != x_12)))
                              _fail(x_12);
                            else
                              n_12 = x_12;
                            {
                              if(((p_12 != NULL) && (p_12 != y_12)))
                                _fail(y_12);
                              else
                                p_12 = y_12;
                              t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_w_10), not_null(p_12)), term_l_8), not_null(n_12)), term_c_8), not_null(m_12)), term_c_8), not_null(l_12)), term_v_10);
                            }
                          }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(z_12, sym_ABOX_2))
                        {
                          a_13 = ATgetArgument(z_12, 0);
                          c_13 = ATgetArgument(z_12, 1);
                          {
                            if(((o_12 != NULL) && (o_12 != a_13)))
                              _fail(a_13);
                            else
                              o_12 = a_13;
                            {
                              if(((p_12 != NULL) && (p_12 != c_13)))
                                _fail(c_13);
                              else
                                p_12 = c_13;
                              t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_y_10), not_null(p_12)), term_l_8), not_null(o_12)), term_x_10);
                            }
                          }
                        }
                      else
                        {
                          if(match_cons(z_12, sym_ALTBOX_2))
                            {
                              a_13 = ATgetArgument(z_12, 0);
                              c_13 = ATgetArgument(z_12, 1);
                              {
                                if(((q_12 != NULL) && (q_12 != a_13)))
                                  _fail(a_13);
                                else
                                  q_12 = a_13;
                                {
                                  if(((r_12 != NULL) && (r_12 != c_13)))
                                    _fail(c_13);
                                  else
                                    r_12 = c_13;
                                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_b_11), not_null(r_12)), term_a_11), not_null(q_12)), term_z_10);
                                }
                              }
                            }
                          else
                            {
                              if(match_cons(z_12, sym_CBOX_1))
                                {
                                  a_13 = ATgetArgument(z_12, 0);
                                  {
                                    if(((v_12 != NULL) && (v_12 != a_13)))
                                      _fail(a_13);
                                    else
                                      v_12 = a_13;
                                    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_d_11), not_null(v_12)), term_c_11);
                                  }
                                }
                              else
                                {
                                  if(match_cons(z_12, sym_LBOX_2))
                                    {
                                      a_13 = ATgetArgument(z_12, 0);
                                      c_13 = ATgetArgument(z_12, 1);
                                      i_12 :
                                      if(match_string(a_13, "="))
                                        {
                                          ATerm e_11 = t;
                                          int f_11 = stack_ptr;
                                          if((PushChoice() == 0))
                                            {
                                              t = n_13(t);
                                              LocalPopChoice(f_11);
                                            }
                                          else
                                            {
                                              t = e_11;
                                              {
                                                ATerm g_11 = t;
                                                int h_11 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = o_13(t);
                                                    LocalPopChoice(h_11);
                                                  }
                                                else
                                                  {
                                                    t = g_11;
                                                    t = p_13(t);
                                                  }
                                              }
                                            }
                                        }
                                      else
                                        {
                                          ATerm i_11 = t;
                                          int j_11 = stack_ptr;
                                          if((PushChoice() == 0))
                                            {
                                              t = n_13(t);
                                              LocalPopChoice(j_11);
                                            }
                                          else
                                            {
                                              t = i_11;
                                              t = p_13(t);
                                            }
                                        }
                                    }
                                  else
                                    {
                                      if(match_cons(z_12, sym_LBLBOX_2))
                                        {
                                          a_13 = ATgetArgument(z_12, 0);
                                          c_13 = ATgetArgument(z_12, 1);
                                          t = q_13(t);
                                        }
                                      else
                                        {
                                          if(match_cons(z_12, sym_REFBOX_2))
                                            {
                                              a_13 = ATgetArgument(z_12, 0);
                                              c_13 = ATgetArgument(z_12, 1);
                                              t = r_13(t);
                                            }
                                          else
                                            {
                                              if(match_cons(z_12, sym_BOXFONT_2))
                                                {
                                                  a_13 = ATgetArgument(z_12, 0);
                                                  c_13 = ATgetArgument(z_12, 1);
                                                  j_12 :
                                                  if(match_cons(a_13, sym_KW_0))
                                                    {
                                                      t = s_13(t);
                                                    }
                                                  else
                                                    {
                                                      if(match_cons(a_13, sym_VAR_0))
                                                        {
                                                          t = t_13(t);
                                                        }
                                                      else
                                                        {
                                                          if(match_cons(a_13, sym_NUM_0))
                                                            {
                                                              t = u_13(t);
                                                            }
                                                          else
                                                            {
                                                              if(match_cons(a_13, sym_MATH_0))
                                                                {
                                                                  t = v_13(t);
                                                                }
                                                              else
                                                                {
                                                                  if(match_string(a_13, "sf"))
                                                                    {
                                                                      t = w_13(t);
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_string(a_13, "rm"))
                                                                        {
                                                                          t = x_13(t);
                                                                        }
                                                                      else
                                                                        {
                                                                          if(match_string(a_13, "tt"))
                                                                            {
                                                                              t = y_13(t);
                                                                            }
                                                                          else
                                                                            {
                                                                              if(match_string(a_13, "md"))
                                                                                {
                                                                                  t = z_13(t);
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(match_string(a_13, "bf"))
                                                                                    {
                                                                                      t = a_14(t);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(match_string(a_13, "up"))
                                                                                        {
                                                                                          t = b_14(t);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          if(match_string(a_13, "it"))
                                                                                            {
                                                                                              t = c_14(t);
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              if(match_string(a_13, "sc"))
                                                                                                {
                                                                                                  t = d_14(t);
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  if(match_string(a_13, "sl"))
                                                                                                    {
                                                                                                      t = e_14(t);
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      if(match_string(a_13, "em"))
                                                                                                        {
                                                                                                          t = f_14(t);
                                                                                                        }
                                                                                                      else
                                                                                                        {
                                                                                                          if(match_string(a_13, "tiny"))
                                                                                                            {
                                                                                                              t = g_14(t);
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              if(match_string(a_13, "scriptsize"))
                                                                                                                {
                                                                                                                  t = h_14(t);
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  if(match_string(a_13, "footnotesize"))
                                                                                                                    {
                                                                                                                      t = i_14(t);
                                                                                                                    }
                                                                                                                  else
                                                                                                                    {
                                                                                                                      if(match_string(a_13, "small"))
                                                                                                                        {
                                                                                                                          t = j_14(t);
                                                                                                                        }
                                                                                                                      else
                                                                                                                        {
                                                                                                                          if(match_string(a_13, "normalsize"))
                                                                                                                            {
                                                                                                                              t = k_14(t);
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              if(match_string(a_13, "large"))
                                                                                                                                {
                                                                                                                                  t = l_14(t);
                                                                                                                                }
                                                                                                                              else
                                                                                                                                {
                                                                                                                                  if(match_string(a_13, "Large"))
                                                                                                                                    {
                                                                                                                                      t = m_14(t);
                                                                                                                                    }
                                                                                                                                  else
                                                                                                                                    {
                                                                                                                                      if(match_string(a_13, "LARGE"))
                                                                                                                                        {
                                                                                                                                          t = n_14(t);
                                                                                                                                        }
                                                                                                                                      else
                                                                                                                                        {
                                                                                                                                          if(match_string(a_13, "huge"))
                                                                                                                                            {
                                                                                                                                              t = o_14(t);
                                                                                                                                            }
                                                                                                                                          else
                                                                                                                                            {
                                                                                                                                              if(match_string(a_13, "Huge"))
                                                                                                                                                {
                                                                                                                                                  t = p_14(t);
                                                                                                                                                }
                                                                                                                                              else
                                                                                                                                                {
                                                                                                                                                  if(match_cons(a_13, sym_BOXCOLOR_1))
                                                                                                                                                    {
                                                                                                                                                      b_13 = ATgetArgument(a_13, 0);
                                                                                                                                                      t = q_14(t);
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
      LocalPopChoice(y_7);
    }
  else
    {
      t = x_7;
      {
        ATerm k_11 = t;
        int l_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = C_0(t);
            t = term_m_11;
            LocalPopChoice(l_11);
          }
        else
          {
            t = k_11;
            {
              ATerm n_11 = t;
              int o_11 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = R_0(t);
                  t = term_p_11;
                  LocalPopChoice(o_11);
                }
              else
                {
                  t = n_11;
                  {
                    ATerm q_11 = t;
                    int r_11 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = L_0(t);
                        t = term_s_11;
                        LocalPopChoice(r_11);
                      }
                    else
                      {
                        t = q_11;
                        {
                          ATerm t_11 = t;
                          int u_11 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = EOR_0(t);
                              t = term_v_11;
                              LocalPopChoice(u_11);
                            }
                          else
                            {
                              t = t_11;
                              {
                                t = CSEP_0(t);
                                t = term_w_11;
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
ATerm bottomup_1 (ATerm t, ATerm v_65 (ATerm))
{
  ATerm n_0 (ATerm t)
  {
    t = bottomup_1(t, v_65);
    return(t);
  }
  t = _all(t, n_0);
  t = v_65(t);
  return(t);
}
ATerm latex2text_0 (ATerm t)
{
  ATerm o_0 (ATerm t)
  {
    ATerm x_11 = t;
    int y_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Latex2text_0(t);
        LocalPopChoice(y_11);
      }
    else
      {
        t = x_11;
        {
        }
      }
    return(t);
  }
  t = bottomup_1(t, o_0);
  return(t);
}
ATerm flat_list_0 (ATerm t)
{
  ATerm w_14 = NULL,x_14 = NULL;
  ATerm z_11 = t;
  int a_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(a_12);
    }
  else
    {
      t = z_11;
      {
        ATerm b_12 = t;
        int c_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_14 = NULL,z_14 = NULL,a_15 = NULL;
            ATerm d_15 (ATerm t)
            {
              if(((w_14 != NULL) && (w_14 != z_14)))
                _fail(z_14);
              else
                w_14 = z_14;
              {
                if(((x_14 != NULL) && (x_14 != a_15)))
                  _fail(a_15);
                else
                  x_14 = a_15;
                {
                  t = not_null(w_14);
                  {
                    t = is_list_0(t);
                    {
                      t = (ATerm) ATmakeAppl(sym__2, not_null(w_14), not_null(x_14));
                      {
                        ATerm d_12 = t;
                        int e_12 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = conc_two_lists_0(t);
                            LocalPopChoice(e_12);
                          }
                        else
                          {
                            t = d_12;
                            t = conc_more_lists_0(t);
                          }
                        t = flat_list_0(t);
                      }
                    }
                  }
                }
              }
              return(t);
            }
            y_14 = t;
            u_14 :
            if(((ATgetType(y_14) == AT_LIST) && !(ATisEmpty(y_14))))
              {
                z_14 = ATgetFirst((ATermList) y_14);
                a_15 = (ATerm) ATgetNext((ATermList) y_14);
                v_14 :
                if(((ATgetType(z_14) == AT_LIST) && ATisEmpty(z_14)))
                  {
                    {
                      ATerm f_13 = t;
                      int g_13 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          if(((x_14 != NULL) && (x_14 != a_15)))
                            _fail(a_15);
                          else
                            x_14 = a_15;
                          {
                            ATerm p_0 (ATerm t)
                            {
                              t = not_null(x_14);
                              t = flat_list_0(t);
                              return(t);
                            }
                            t = Cons_2(t, Nil_0, p_0);
                          }
                          LocalPopChoice(g_13);
                        }
                      else
                        {
                          t = f_13;
                          t = d_15(t);
                        }
                    }
                  }
                else
                  {
                    t = d_15(t);
                  }
              }
            else
              {
                _fail(t);
              }
            LocalPopChoice(c_12);
          }
        else
          {
            t = b_12;
            t = Cons_2(t, _id, flat_list_0);
          }
      }
    }
  return(t);
}
ATerm replace_quotes_0 (ATerm t)
{
  ATerm k_15 = NULL,n_15 = NULL;
  ATerm q_0 (ATerm t)
  {
    ATerm l_15 = NULL;
    l_15 = t;
    e_15 :
    if(!(match_int(l_15, 34)))
      {
        _fail(t);
      }
    return(t);
  }
  ATerm r_0 (ATerm t)
  {
    ATerm m_15 = NULL;
    m_15 = t;
    if(((k_15 != NULL) && (k_15 != m_15)))
      _fail(m_15);
    else
      k_15 = m_15;
    return(t);
  }
  t = Cons_2(t, q_0, r_0);
  {
    ATerm s_15 = NULL;
    t = not_null(k_15);
    {
      ATerm s_0 (ATerm t)
      {
        ATerm o_15 = NULL,p_15 = NULL,q_15 = NULL;
        o_15 = t;
        h_15 :
        if(((ATgetType(o_15) == AT_LIST) && !(ATisEmpty(o_15))))
          {
            p_15 = ATgetFirst((ATermList) o_15);
            q_15 = (ATerm) ATgetNext((ATermList) o_15);
            i_15 :
            if(match_int(p_15, 34))
              {
                t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(q_15)), term_h_13), term_h_13);
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
      t = at_suffix_1(t, s_0);
      {
        s_15 = t;
        if(((n_15 != NULL) && (n_15 != s_15)))
          _fail(s_15);
        else
          n_15 = s_15;
      }
    }
    t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(n_15)), term_i_13), term_i_13);
  }
  return(t);
}
ATerm listtd_1 (ATerm t, ATerm e_73 (ATerm))
{
  ATerm w_15 (ATerm t)
  {
    t = e_73(t);
    {
      ATerm j_13 = t;
      int k_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Nil_0(t);
          LocalPopChoice(k_13);
        }
      else
        {
          t = j_13;
          t = Cons_2(t, _id, w_15);
        }
    }
    return(t);
  }
  t = w_15(t);
  return(t);
}
ATerm latex_string_0 (ATerm t)
{
  ATerm o_16 = NULL;
  ATerm l_13 = t;
  int m_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_16 = NULL;
      p_16 = t;
      {
        if(((o_16 != NULL) && (o_16 != p_16)))
          _fail(p_16);
        else
          o_16 = p_16;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_r_14, not_null(o_16));
          t = table_get_0(t);
        }
      }
      LocalPopChoice(m_13);
    }
  else
    {
      t = l_13;
      {
        t = explode_string_0(t);
        {
          ATerm t_0 (ATerm t)
          {
            ATerm s_14 = t;
            int t_14 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = replace_quotes_0(t);
                LocalPopChoice(t_14);
              }
            else
              {
                t = s_14;
                {
                }
              }
            return(t);
          }
          t = listtd_1(t, t_0);
          {
            ATerm w_0 (ATerm t)
            {
              ATerm b_15 = t;
              int c_15 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm q_16 = NULL;
                  q_16 = t;
                  n_16 :
                  if(match_int(q_16, 32))
                    {
                      t = term_f_15;
                      t = explode_string_0(t);
                    }
                  else
                    {
                      if(match_int(q_16, 35))
                        {
                          t = term_g_15;
                          t = explode_string_0(t);
                        }
                      else
                        {
                          if(match_int(q_16, 36))
                            {
                              t = term_j_15;
                              t = explode_string_0(t);
                            }
                          else
                            {
                              if(match_int(q_16, 37))
                                {
                                  t = term_r_15;
                                  t = explode_string_0(t);
                                }
                              else
                                {
                                  if(match_int(q_16, 38))
                                    {
                                      t = term_t_15;
                                      t = explode_string_0(t);
                                    }
                                  else
                                    {
                                      if(match_int(q_16, 45))
                                        {
                                          t = term_u_15;
                                          t = explode_string_0(t);
                                        }
                                      else
                                        {
                                          if(match_int(q_16, 60))
                                            {
                                              t = term_v_15;
                                              t = explode_string_0(t);
                                            }
                                          else
                                            {
                                              if(match_int(q_16, 62))
                                                {
                                                  t = term_x_15;
                                                  t = explode_string_0(t);
                                                }
                                              else
                                                {
                                                  if(match_int(q_16, 92))
                                                    {
                                                      t = term_y_15;
                                                      t = explode_string_0(t);
                                                    }
                                                  else
                                                    {
                                                      if(match_int(q_16, 94))
                                                        {
                                                          t = term_z_15;
                                                          t = explode_string_0(t);
                                                        }
                                                      else
                                                        {
                                                          if(match_int(q_16, 95))
                                                            {
                                                              t = term_a_16;
                                                              t = explode_string_0(t);
                                                            }
                                                          else
                                                            {
                                                              if(match_int(q_16, 123))
                                                                {
                                                                  t = term_b_16;
                                                                  t = explode_string_0(t);
                                                                }
                                                              else
                                                                {
                                                                  if(match_int(q_16, 124))
                                                                    {
                                                                      t = term_c_16;
                                                                      t = explode_string_0(t);
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_int(q_16, 125))
                                                                        {
                                                                          t = term_d_16;
                                                                          t = explode_string_0(t);
                                                                        }
                                                                      else
                                                                        {
                                                                          if(match_int(q_16, 126))
                                                                            {
                                                                              t = term_e_16;
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
                  LocalPopChoice(c_15);
                }
              else
                {
                  t = b_15;
                  {
                  }
                }
              return(t);
            }
            t = map_1(t, w_0);
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
  ATerm j_17 = NULL,k_17 = NULL,l_17 = NULL;
  j_17 = t;
  i_17 :
  if(((ATgetType(j_17) == AT_LIST) && !(ATisEmpty(j_17))))
    {
      k_17 = ATgetFirst((ATermList) j_17);
      l_17 = (ATerm) ATgetNext((ATermList) j_17);
      t = not_null(l_17);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm remove_trailing_1 (ATerm t, ATerm d_64 (ATerm))
{
  ATerm o_17 (ATerm t)
  {
    ATerm f_16 = t;
    int g_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, d_64, _id);
        {
          t = Tl_0(t);
          t = o_17(t);
        }
        LocalPopChoice(g_16);
      }
    else
      {
        t = f_16;
        {
        }
      }
    return(t);
  }
  t = o_17(t);
  return(t);
}
ATerm at_suffix_1 (ATerm t, ATerm q_72 (ATerm))
{
  ATerm p_17 (ATerm t)
  {
    ATerm h_16 = t;
    int i_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = q_72(t);
        LocalPopChoice(i_16);
      }
    else
      {
        t = h_16;
        t = Cons_2(t, _id, p_17);
      }
    return(t);
  }
  t = p_17(t);
  return(t);
}
ATerm LatexComment_0 (ATerm t)
{
  ATerm v_17 = NULL;
  ATerm x_0 (ATerm t)
  {
    ATerm u_17 = NULL;
    u_17 = t;
    q_17 :
    if(!(match_int(u_17, 9)))
      {
        if(!(match_int(u_17, 32)))
          {
            _fail(t);
          }
      }
    return(t);
  }
  t = remove_trailing_1(t, x_0);
  {
    ATerm j_16 = t;
    int k_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_0 (ATerm t)
        {
          ATerm z_0 (ATerm t)
          {
            ATerm w_17 = NULL;
            w_17 = t;
            r_17 :
            if(!(match_int(w_17, 37)))
              {
                _fail(t);
              }
            return(t);
          }
          ATerm c_1 (ATerm t)
          {
            ATerm d_1 (ATerm t)
            {
              ATerm x_17 = NULL;
              x_17 = t;
              s_17 :
              if(!(match_int(x_17, 37)))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm e_1 (ATerm t)
            {
              ATerm y_17 = NULL;
              y_17 = t;
              if(((v_17 != NULL) && (v_17 != y_17)))
                _fail(y_17);
              else
                v_17 = y_17;
              return(t);
            }
            t = Cons_2(t, d_1, e_1);
            return(t);
          }
          t = Cons_2(t, z_0, c_1);
          t = not_null(v_17);
          return(t);
        }
        t = at_suffix_1(t, y_0);
        LocalPopChoice(k_16);
      }
    else
      {
        t = j_16;
        {
        }
      }
    t = implode_string_0(t);
  }
  return(t);
}
ATerm make_latex_comment_0 (ATerm t)
{
  t = explode_string_0(t);
  {
    ATerm f_1 (ATerm t)
    {
      t = (ATerm) ATempty;
      return(t);
    }
    t = reverse_acc_2(t, _id, f_1);
    {
      ATerm g_1 (ATerm t)
      {
        t = (ATerm) ATempty;
        return(t);
      }
      t = split_2(t, _id, g_1);
      {
        ATerm k_19 (ATerm t)
        {
          ATerm m_18 = NULL,n_18 = NULL,o_18 = NULL,p_18 = NULL,q_18 = NULL;
          ATerm n_19 (ATerm t)
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(p_18), (ATerm) ATinsert(CheckATermList(not_null(q_18)), not_null(o_18)));
            t = k_19(t);
            return(t);
          }
          m_18 = t;
          g_18 :
          if(match_cons(m_18, sym__2))
            {
              n_18 = ATgetArgument(m_18, 0);
              q_18 = ATgetArgument(m_18, 1);
              h_18 :
              if(((ATgetType(n_18) == AT_LIST) && ATisEmpty(n_18)))
                {
                  {
                    ATerm u_18 = NULL;
                    ATerm v_18 = NULL;
                    t = not_null(q_18);
                    {
                      t = LatexComment_0(t);
                      {
                        v_18 = t;
                        if(((u_18 != NULL) && (u_18 != v_18)))
                          _fail(v_18);
                        else
                          u_18 = v_18;
                      }
                    }
                    t = (ATerm) ATinsert(ATempty, not_null(u_18));
                  }
                }
              else
                {
                  if(((ATgetType(n_18) == AT_LIST) && !(ATisEmpty(n_18))))
                    {
                      o_18 = ATgetFirst((ATermList) n_18);
                      p_18 = (ATerm) ATgetNext((ATermList) n_18);
                      i_18 :
                      if(match_int(o_18, 10))
                        {
                          ATerm l_16 = t;
                          int m_16 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm z_18 = NULL,b_19 = NULL;
                              ATerm r_16;
                              r_16 = t;
                              {
                                ATerm a_19 = NULL;
                                t = not_null(q_18);
                                {
                                  t = LatexComment_0(t);
                                  {
                                    a_19 = t;
                                    if(((z_18 != NULL) && (z_18 != a_19)))
                                      _fail(a_19);
                                    else
                                      z_18 = a_19;
                                  }
                                }
                              }
                              t = r_16;
                              {
                                ATerm c_19 = NULL;
                                t = (ATerm) ATmakeAppl(sym__2, not_null(p_18), (ATerm) ATempty);
                                {
                                  t = k_19(t);
                                  {
                                    c_19 = t;
                                    if(((b_19 != NULL) && (b_19 != c_19)))
                                      _fail(c_19);
                                    else
                                      b_19 = c_19;
                                  }
                                }
                                t = (ATerm) ATinsert(CheckATermList(not_null(b_19)), not_null(z_18));
                              }
                              LocalPopChoice(m_16);
                            }
                          else
                            {
                              t = l_16;
                              t = n_19(t);
                            }
                        }
                      else
                        {
                          t = n_19(t);
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
        t = k_19(t);
        {
          ATerm h_1 (ATerm t)
          {
            ATerm g_19 = NULL;
            g_19 = t;
            j_18 :
            if(!(match_string(g_19, "")))
              {
                _fail(t);
              }
            return(t);
          }
          t = remove_trailing_1(t, h_1);
          {
            ATerm i_1 (ATerm t)
            {
              t = (ATerm) ATempty;
              return(t);
            }
            t = reverse_acc_2(t, _id, i_1);
            {
              ATerm j_1 (ATerm t)
              {
                ATerm h_19 = NULL;
                h_19 = t;
                k_18 :
                if(!(match_string(h_19, "")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              t = remove_trailing_1(t, j_1);
              {
                ATerm k_1 (ATerm t)
                {
                  ATerm i_19 = NULL;
                  i_19 = t;
                  t = (ATerm) ATinsert(ATinsert(ATempty, term_s_16), not_null(i_19));
                  return(t);
                }
                t = map_1(t, k_1);
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
  ATerm w_19 = NULL;
  w_19 = t;
  v_19 :
  if(match_cons(w_19, sym_MATH_0))
    {
      ATerm y_19 = NULL,a_20 = NULL;
      ATerm t_16;
      t_16 = t;
      {
        ATerm z_19 = NULL;
        t = SSLgetAnnotations(not_null(w_19));
        {
          z_19 = t;
          if(((y_19 != NULL) && (y_19 != z_19)))
            _fail(z_19);
          else
            y_19 = z_19;
        }
      }
      t = t_16;
      {
        ATerm b_20 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_MATH_0), not_null(y_19));
        {
          b_20 = t;
          if(((a_20 != NULL) && (a_20 != b_20)))
            _fail(b_20);
          else
            a_20 = b_20;
        }
        t = not_null(a_20);
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
  ATerm j_20 = NULL;
  j_20 = t;
  i_20 :
  if(match_cons(j_20, sym_NUM_0))
    {
      ATerm l_20 = NULL,n_20 = NULL;
      ATerm u_16;
      u_16 = t;
      {
        ATerm m_20 = NULL;
        t = SSLgetAnnotations(not_null(j_20));
        {
          m_20 = t;
          if(((l_20 != NULL) && (l_20 != m_20)))
            _fail(m_20);
          else
            l_20 = m_20;
        }
      }
      t = u_16;
      {
        ATerm o_20 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_NUM_0), not_null(l_20));
        {
          o_20 = t;
          if(((n_20 != NULL) && (n_20 != o_20)))
            _fail(o_20);
          else
            n_20 = o_20;
        }
        t = not_null(n_20);
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
  ATerm p_23 = NULL;
  p_23 = t;
  o_23 :
  if(match_cons(p_23, sym_VAR_0))
    {
      ATerm l_24 = NULL,q_24 = NULL;
      ATerm v_16;
      v_16 = t;
      {
        ATerm p_24 = NULL;
        t = SSLgetAnnotations(not_null(p_23));
        {
          p_24 = t;
          if(((l_24 != NULL) && (l_24 != p_24)))
            _fail(p_24);
          else
            l_24 = p_24;
        }
      }
      t = v_16;
      {
        ATerm r_24 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_VAR_0), not_null(l_24));
        {
          r_24 = t;
          if(((q_24 != NULL) && (q_24 != r_24)))
            _fail(r_24);
          else
            q_24 = r_24;
        }
        t = not_null(q_24);
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
  ATerm z_24 = NULL;
  z_24 = t;
  y_24 :
  if(match_cons(z_24, sym_KW_0))
    {
      ATerm b_25 = NULL,d_25 = NULL;
      ATerm w_16;
      w_16 = t;
      {
        ATerm c_25 = NULL;
        t = SSLgetAnnotations(not_null(z_24));
        {
          c_25 = t;
          if(((b_25 != NULL) && (b_25 != c_25)))
            _fail(c_25);
          else
            b_25 = c_25;
        }
      }
      t = w_16;
      {
        ATerm e_25 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_KW_0), not_null(b_25));
        {
          e_25 = t;
          if(((d_25 != NULL) && (d_25 != e_25)))
            _fail(e_25);
          else
            d_25 = e_25;
        }
        t = not_null(d_25);
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
  ATerm m_25 = NULL;
  m_25 = t;
  l_25 :
  if(match_cons(m_25, sym_CL_0))
    {
      ATerm o_25 = NULL,q_25 = NULL;
      ATerm x_16;
      x_16 = t;
      {
        ATerm p_25 = NULL;
        t = SSLgetAnnotations(not_null(m_25));
        {
          p_25 = t;
          if(((o_25 != NULL) && (o_25 != p_25)))
            _fail(p_25);
          else
            o_25 = p_25;
        }
      }
      t = x_16;
      {
        ATerm t_25 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_CL_0), not_null(o_25));
        {
          t_25 = t;
          if(((q_25 != NULL) && (q_25 != t_25)))
            _fail(t_25);
          else
            q_25 = t_25;
        }
        t = not_null(q_25);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm FFID_2 (ATerm t, ATerm t_56 (ATerm), ATerm u_56 (ATerm))
{
  ATerm i_26 = NULL,j_26 = NULL,k_26 = NULL;
  i_26 = t;
  h_26 :
  if(match_cons(i_26, sym_FFID_2))
    {
      j_26 = ATgetArgument(i_26, 0);
      k_26 = ATgetArgument(i_26, 1);
      {
        ATerm r_26 = NULL,u_26 = NULL;
        ATerm t_26 = NULL;
        t = SSLgetAnnotations(not_null(i_26));
        {
          t_26 = t;
          if(((r_26 != NULL) && (r_26 != t_26)))
            _fail(t_26);
          else
            r_26 = t_26;
        }
        {
          t = not_null(j_26);
          {
            ATerm w_26 = NULL;
            t = t_56(t);
            {
              u_26 = t;
              {
                t = not_null(k_26);
                {
                  ATerm y_26 = NULL;
                  t = u_56(t);
                  {
                    w_26 = t;
                    {
                      ATerm z_26 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FFID_2, not_null(u_26), not_null(w_26)), not_null(r_26));
                      {
                        z_26 = t;
                        if(((y_26 != NULL) && (y_26 != z_26)))
                          _fail(z_26);
                        else
                          y_26 = z_26;
                      }
                      t = not_null(y_26);
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
  ATerm j_27 = NULL;
  j_27 = t;
  i_27 :
  if(match_cons(j_27, sym_SZ_0))
    {
      ATerm l_27 = NULL,n_27 = NULL;
      ATerm y_16;
      y_16 = t;
      {
        ATerm m_27 = NULL;
        t = SSLgetAnnotations(not_null(j_27));
        {
          m_27 = t;
          if(((l_27 != NULL) && (l_27 != m_27)))
            _fail(m_27);
          else
            l_27 = m_27;
        }
      }
      t = y_16;
      {
        ATerm o_27 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SZ_0), not_null(l_27));
        {
          o_27 = t;
          if(((n_27 != NULL) && (n_27 != o_27)))
            _fail(o_27);
          else
            n_27 = o_27;
        }
        t = not_null(n_27);
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
  ATerm w_27 = NULL;
  w_27 = t;
  v_27 :
  if(match_cons(w_27, sym_SH_0))
    {
      ATerm y_27 = NULL,a_28 = NULL;
      ATerm z_16;
      z_16 = t;
      {
        ATerm z_27 = NULL;
        t = SSLgetAnnotations(not_null(w_27));
        {
          z_27 = t;
          if(((y_27 != NULL) && (y_27 != z_27)))
            _fail(z_27);
          else
            y_27 = z_27;
        }
      }
      t = z_16;
      {
        ATerm b_28 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SH_0), not_null(y_27));
        {
          b_28 = t;
          if(((a_28 != NULL) && (a_28 != b_28)))
            _fail(b_28);
          else
            a_28 = b_28;
        }
        t = not_null(a_28);
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
  ATerm j_28 = NULL;
  j_28 = t;
  i_28 :
  if(match_cons(j_28, sym_SE_0))
    {
      ATerm l_28 = NULL,n_28 = NULL;
      ATerm a_17;
      a_17 = t;
      {
        ATerm m_28 = NULL;
        t = SSLgetAnnotations(not_null(j_28));
        {
          m_28 = t;
          if(((l_28 != NULL) && (l_28 != m_28)))
            _fail(m_28);
          else
            l_28 = m_28;
        }
      }
      t = a_17;
      {
        ATerm o_28 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SE_0), not_null(l_28));
        {
          o_28 = t;
          if(((n_28 != NULL) && (n_28 != o_28)))
            _fail(o_28);
          else
            n_28 = o_28;
        }
        t = not_null(n_28);
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
  ATerm w_28 = NULL;
  w_28 = t;
  v_28 :
  if(match_cons(w_28, sym_FM_0))
    {
      ATerm y_28 = NULL,a_29 = NULL;
      ATerm b_17;
      b_17 = t;
      {
        ATerm z_28 = NULL;
        t = SSLgetAnnotations(not_null(w_28));
        {
          z_28 = t;
          if(((y_28 != NULL) && (y_28 != z_28)))
            _fail(z_28);
          else
            y_28 = z_28;
        }
      }
      t = b_17;
      {
        ATerm b_29 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FM_0), not_null(y_28));
        {
          b_29 = t;
          if(((a_29 != NULL) && (a_29 != b_29)))
            _fail(b_29);
          else
            a_29 = b_29;
        }
        t = not_null(a_29);
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
  ATerm l_1 (ATerm t)
  {
    ATerm c_17 = t;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = c_17;
      }
    return(t);
  }
  t = filter_1(t, l_1);
  {
    ATerm m_1 (ATerm t)
    {
      t = term_d_17;
      return(t);
    }
    t = separate_by_1(t, m_1);
  }
  return(t);
}
ATerm HS_0 (ATerm t)
{
  ATerm j_29 = NULL;
  j_29 = t;
  i_29 :
  if(match_cons(j_29, sym_HS_0))
    {
      ATerm l_29 = NULL,n_29 = NULL;
      ATerm e_17;
      e_17 = t;
      {
        ATerm m_29 = NULL;
        t = SSLgetAnnotations(not_null(j_29));
        {
          m_29 = t;
          if(((l_29 != NULL) && (l_29 != m_29)))
            _fail(m_29);
          else
            l_29 = m_29;
        }
      }
      t = e_17;
      {
        ATerm o_29 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_HS_0), not_null(l_29));
        {
          o_29 = t;
          if(((n_29 != NULL) && (n_29 != o_29)))
            _fail(o_29);
          else
            n_29 = o_29;
        }
        t = not_null(n_29);
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
  ATerm t_29 = NULL;
  ATerm f_17 = t;
  int g_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_1 (ATerm t)
      {
        ATerm p_1 (ATerm t)
        {
          ATerm u_29 = NULL;
          u_29 = t;
          if(((t_29 != NULL) && (t_29 != u_29)))
            _fail(u_29);
          else
            t_29 = u_29;
          return(t);
        }
        t = SOpt_2(t, HS_0, p_1);
        return(t);
      }
      t = fetch_1(t, o_1);
      t = not_null(t_29);
      LocalPopChoice(g_17);
    }
  else
    {
      t = f_17;
      t = term_h_17;
    }
  return(t);
}
ATerm separate_by_0 (ATerm t)
{
  ATerm z_29 = NULL,a_30 = NULL,b_30 = NULL;
  z_29 = t;
  y_29 :
  if(match_cons(z_29, sym__2))
    {
      a_30 = ATgetArgument(z_29, 0);
      b_30 = ATgetArgument(z_29, 1);
      {
        t = not_null(b_30);
        {
          ATerm m_17 = t;
          int n_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(n_17);
            }
          else
            {
              t = m_17;
              {
                ATerm q_1 (ATerm t)
                {
                  ATerm t_17 = t;
                  int z_17 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = Nil_0(t);
                      LocalPopChoice(z_17);
                    }
                  else
                    {
                      t = t_17;
                      {
                        ATerm e_30 = NULL;
                        t = Cons_2(t, _id, q_1);
                        {
                          ATerm f_30 = NULL;
                          f_30 = t;
                          if(((e_30 != NULL) && (e_30 != f_30)))
                            _fail(f_30);
                          else
                            e_30 = f_30;
                          t = (ATerm) ATinsert(CheckATermList(not_null(e_30)), not_null(a_30));
                        }
                      }
                    }
                  return(t);
                }
                t = Cons_2(t, _id, q_1);
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
ATerm if_verbose2_1 (ATerm t, ATerm s_85 (ATerm))
{
  ATerm a_18 = t;
  int b_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_18;
      c_18 = t;
      {
        ATerm k_30 = NULL;
        ATerm l_30 = NULL;
        t = term_x_6;
        {
          t = get_config_0(t);
          {
            l_30 = t;
            if(((k_30 != NULL) && (k_30 != l_30)))
              _fail(l_30);
            else
              k_30 = l_30;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(k_30), term_d_18);
          t = geq_0(t);
        }
      }
      t = c_18;
      t = s_85(t);
      LocalPopChoice(b_18);
    }
  else
    {
      t = a_18;
      {
      }
    }
  return(t);
}
ATerm dissuader_1 (ATerm t, ATerm d_83 (ATerm))
{
  ATerm e_18;
  e_18 = t;
  {
    ATerm r_1 (ATerm t)
    {
      t = d_83(t);
      {
        ATerm v_1 (ATerm t)
        {
          t = term_f_18;
          return(t);
        }
        t = debug_1(t, v_1);
      }
      return(t);
    }
    t = if_verbose2_1(t, r_1);
  }
  t = e_18;
  return(t);
}
ATerm separate_by_1 (ATerm t, ATerm t_71 (ATerm))
{
  ATerm p_30 = NULL,r_30 = NULL;
  ATerm w_1 (ATerm t)
  {
    t = term_l_18;
    return(t);
  }
  t = dissuader_1(t, w_1);
  {
    ATerm r_18;
    r_18 = t;
    {
      ATerm q_30 = NULL;
      q_30 = t;
      if(((p_30 != NULL) && (p_30 != q_30)))
        _fail(q_30);
      else
        p_30 = q_30;
    }
    t = r_18;
    {
      ATerm s_30 = NULL;
      t = term_s_18;
      {
        t = t_71(t);
        {
          s_30 = t;
          if(((r_30 != NULL) && (r_30 != s_30)))
            _fail(s_30);
          else
            r_30 = s_30;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(r_30), not_null(p_30));
        t = separate_by_0(t);
      }
    }
  }
  return(t);
}
ATerm filter_1 (ATerm t, ATerm o_79 (ATerm))
{
  ATerm t_18 = t;
  int w_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(w_18);
    }
  else
    {
      t = t_18;
      {
        ATerm x_18 = t;
        int y_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_1 (ATerm t)
            {
              t = filter_1(t, o_79);
              return(t);
            }
            t = Cons_2(t, o_79, x_1);
            LocalPopChoice(y_18);
          }
        else
          {
            t = x_18;
            {
              ATerm x_30 = NULL,y_30 = NULL,z_30 = NULL;
              x_30 = t;
              w_30 :
              if(((ATgetType(x_30) == AT_LIST) && !(ATisEmpty(x_30))))
                {
                  y_30 = ATgetFirst((ATermList) x_30);
                  z_30 = (ATerm) ATgetNext((ATermList) x_30);
                  {
                    t = not_null(z_30);
                    t = filter_1(t, o_79);
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
  ATerm i_31 = NULL;
  i_31 = t;
  h_31 :
  if(match_cons(i_31, sym_IS_0))
    {
      ATerm m_31 = NULL,r_31 = NULL;
      ATerm d_19;
      d_19 = t;
      {
        ATerm n_31 = NULL;
        t = SSLgetAnnotations(not_null(i_31));
        {
          n_31 = t;
          if(((m_31 != NULL) && (m_31 != n_31)))
            _fail(n_31);
          else
            m_31 = n_31;
        }
      }
      t = d_19;
      {
        ATerm s_31 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_IS_0), not_null(m_31));
        {
          s_31 = t;
          if(((r_31 != NULL) && (r_31 != s_31)))
            _fail(s_31);
          else
            r_31 = s_31;
        }
        t = not_null(r_31);
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
  ATerm x_31 = NULL;
  ATerm e_19 = t;
  int f_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_1 (ATerm t)
      {
        ATerm z_1 (ATerm t)
        {
          ATerm y_31 = NULL;
          y_31 = t;
          if(((x_31 != NULL) && (x_31 != y_31)))
            _fail(y_31);
          else
            x_31 = y_31;
          return(t);
        }
        t = SOpt_2(t, IS_0, z_1);
        return(t);
      }
      t = fetch_1(t, y_1);
      t = not_null(x_31);
      LocalPopChoice(f_19);
    }
  else
    {
      t = e_19;
      t = term_j_19;
    }
  return(t);
}
ATerm VS_0 (ATerm t)
{
  ATerm p_32 = NULL;
  p_32 = t;
  o_32 :
  if(match_cons(p_32, sym_VS_0))
    {
      ATerm r_32 = NULL,t_32 = NULL;
      ATerm l_19;
      l_19 = t;
      {
        ATerm s_32 = NULL;
        t = SSLgetAnnotations(not_null(p_32));
        {
          s_32 = t;
          if(((r_32 != NULL) && (r_32 != s_32)))
            _fail(s_32);
          else
            r_32 = s_32;
        }
      }
      t = l_19;
      {
        ATerm u_32 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_VS_0), not_null(r_32));
        {
          u_32 = t;
          if(((t_32 != NULL) && (t_32 != u_32)))
            _fail(u_32);
          else
            t_32 = u_32;
        }
        t = not_null(t_32);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm SOpt_2 (ATerm t, ATerm w_55 (ATerm), ATerm x_55 (ATerm))
{
  ATerm e_33 = NULL,f_33 = NULL,g_33 = NULL;
  e_33 = t;
  d_33 :
  if(match_cons(e_33, sym_SOpt_2))
    {
      f_33 = ATgetArgument(e_33, 0);
      g_33 = ATgetArgument(e_33, 1);
      {
        ATerm k_33 = NULL,m_33 = NULL;
        ATerm l_33 = NULL;
        t = SSLgetAnnotations(not_null(e_33));
        {
          l_33 = t;
          if(((k_33 != NULL) && (k_33 != l_33)))
            _fail(l_33);
          else
            k_33 = l_33;
        }
        {
          t = not_null(f_33);
          {
            ATerm o_33 = NULL;
            t = w_55(t);
            {
              m_33 = t;
              {
                t = not_null(g_33);
                {
                  ATerm q_33 = NULL;
                  t = x_55(t);
                  {
                    o_33 = t;
                    {
                      ATerm u_33 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SOpt_2, not_null(m_33), not_null(o_33)), not_null(k_33));
                      {
                        u_33 = t;
                        if(((q_33 != NULL) && (q_33 != u_33)))
                          _fail(u_33);
                        else
                          q_33 = u_33;
                      }
                      t = not_null(q_33);
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
  ATerm b_34 = NULL;
  ATerm m_19 = t;
  int o_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_2 (ATerm t)
      {
        ATerm b_2 (ATerm t)
        {
          ATerm c_34 = NULL;
          c_34 = t;
          if(((b_34 != NULL) && (b_34 != c_34)))
            _fail(c_34);
          else
            b_34 = c_34;
          return(t);
        }
        t = SOpt_2(t, VS_0, b_2);
        return(t);
      }
      t = fetch_1(t, a_2);
      t = not_null(b_34);
      LocalPopChoice(o_19);
    }
  else
    {
      t = m_19;
      t = term_j_19;
    }
  return(t);
}
ATerm C_2 (ATerm t, ATerm c_57 (ATerm), ATerm d_57 (ATerm))
{
  ATerm k_34 = NULL,l_34 = NULL,m_34 = NULL;
  k_34 = t;
  j_34 :
  if(match_cons(k_34, sym_C_2))
    {
      l_34 = ATgetArgument(k_34, 0);
      m_34 = ATgetArgument(k_34, 1);
      {
        ATerm q_34 = NULL,s_34 = NULL;
        ATerm r_34 = NULL;
        t = SSLgetAnnotations(not_null(k_34));
        {
          r_34 = t;
          if(((q_34 != NULL) && (q_34 != r_34)))
            _fail(r_34);
          else
            q_34 = r_34;
        }
        {
          t = not_null(l_34);
          {
            ATerm u_34 = NULL;
            t = c_57(t);
            {
              s_34 = t;
              {
                t = not_null(m_34);
                {
                  ATerm w_34 = NULL;
                  t = d_57(t);
                  {
                    u_34 = t;
                    {
                      ATerm x_34 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_C_2, not_null(s_34), not_null(u_34)), not_null(q_34));
                      {
                        x_34 = t;
                        if(((w_34 != NULL) && (w_34 != x_34)))
                          _fail(x_34);
                        else
                          w_34 = x_34;
                      }
                      t = not_null(w_34);
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
  ATerm j_35 = NULL,k_35 = NULL,l_35 = NULL;
  j_35 = t;
  i_35 :
  if(match_cons(j_35, sym_R_2))
    {
      k_35 = ATgetArgument(j_35, 0);
      l_35 = ATgetArgument(j_35, 1);
      {
        t = not_null(l_35);
        {
          ATerm y_35 (ATerm t)
          {
            ATerm n_35 = NULL,o_35 = NULL,p_35 = NULL;
            ATerm p_19 = t;
            int q_19 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                LocalPopChoice(q_19);
              }
            else
              {
                t = p_19;
                {
                  ATerm r_19 = t;
                  int s_19 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = Cons_2(t, _id, Nil_0);
                      LocalPopChoice(s_19);
                    }
                  else
                    {
                      t = r_19;
                      {
                        ATerm t_19 = t;
                        int u_19 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm c_2 (ATerm t)
                            {
                              t = C_2(t, _id, _id);
                              return(t);
                            }
                            ATerm d_2 (ATerm t)
                            {
                              t = Cons_2(t, _id, y_35);
                              return(t);
                            }
                            t = Cons_2(t, c_2, d_2);
                            LocalPopChoice(u_19);
                          }
                        else
                          {
                            t = t_19;
                            {
                              ATerm x_19 = t;
                              int c_20 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm g_2 (ATerm t)
                                  {
                                    ATerm h_2 (ATerm t)
                                    {
                                      t = C_2(t, _id, _id);
                                      return(t);
                                    }
                                    t = Cons_2(t, h_2, y_35);
                                    return(t);
                                  }
                                  t = Cons_2(t, _id, g_2);
                                  LocalPopChoice(c_20);
                                }
                              else
                                {
                                  t = x_19;
                                  {
                                    ATerm q_35 = NULL,r_35 = NULL,s_35 = NULL,t_35 = NULL,u_35 = NULL;
                                    q_35 = t;
                                    g_35 :
                                    if(((ATgetType(q_35) == AT_LIST) && !(ATisEmpty(q_35))))
                                      {
                                        r_35 = ATgetFirst((ATermList) q_35);
                                        s_35 = (ATerm) ATgetNext((ATermList) q_35);
                                        h_35 :
                                        if(((ATgetType(s_35) == AT_LIST) && !(ATisEmpty(s_35))))
                                          {
                                            t_35 = ATgetFirst((ATermList) s_35);
                                            u_35 = (ATerm) ATgetNext((ATermList) s_35);
                                            {
                                              ATerm v_35 = NULL;
                                              if(((n_35 != NULL) && (n_35 != r_35)))
                                                _fail(r_35);
                                              else
                                                n_35 = r_35;
                                              {
                                                if(((o_35 != NULL) && (o_35 != t_35)))
                                                  _fail(t_35);
                                                else
                                                  o_35 = t_35;
                                                {
                                                  if(((p_35 != NULL) && (p_35 != u_35)))
                                                    _fail(u_35);
                                                  else
                                                    p_35 = u_35;
                                                  {
                                                    ATerm w_35 = NULL;
                                                    t = (ATerm) ATinsert(CheckATermList(not_null(p_35)), not_null(o_35));
                                                    {
                                                      t = y_35(t);
                                                      {
                                                        w_35 = t;
                                                        if(((v_35 != NULL) && (v_35 != w_35)))
                                                          _fail(w_35);
                                                        else
                                                          v_35 = w_35;
                                                      }
                                                    }
                                                    t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(v_35)), term_d_20), not_null(n_35));
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
          t = y_35(t);
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
  ATerm e_36 = NULL,f_36 = NULL;
  ATerm e_20 = t;
  int f_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_36 = NULL,h_36 = NULL,i_36 = NULL;
      g_36 = t;
      d_36 :
      if(match_cons(g_36, sym_LBL_2))
        {
          h_36 = ATgetArgument(g_36, 0);
          i_36 = ATgetArgument(g_36, 1);
          {
            ATerm j_36 = NULL;
            if(((e_36 != NULL) && (e_36 != h_36)))
              _fail(h_36);
            else
              e_36 = h_36;
            {
              if(((f_36 != NULL) && (f_36 != i_36)))
                _fail(i_36);
              else
                f_36 = i_36;
              {
                t = not_null(f_36);
                {
                  t = table_row_0(t);
                  {
                    ATerm k_36 = NULL;
                    t = not_null(f_36);
                    {
                      t = table_row_0(t);
                      {
                        k_36 = t;
                        if(((j_36 != NULL) && (j_36 != k_36)))
                          _fail(k_36);
                        else
                          j_36 = k_36;
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym_LBLBOX_2, not_null(e_36), not_null(j_36));
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
      LocalPopChoice(f_20);
    }
  else
    {
      t = e_20;
      t = table_row_0(t);
    }
  return(t);
}
ATerm at_last_1 (ATerm t, ATerm x_72 (ATerm))
{
  ATerm n_36 (ATerm t)
  {
    ATerm g_20 = t;
    int h_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, Nil_0);
        t = x_72(t);
        LocalPopChoice(h_20);
      }
    else
      {
        t = g_20;
        t = Cons_2(t, _id, n_36);
      }
    return(t);
  }
  t = n_36(t);
  return(t);
}
ATerm table_def_0 (ATerm t)
{
  ATerm a_37 = NULL,b_37 = NULL;
  a_37 = t;
  z_36 :
  if(match_cons(a_37, sym_AOPTIONS_1))
    {
      b_37 = ATgetArgument(a_37, 0);
      {
        t = not_null(b_37);
        {
          ATerm i_2 (ATerm t)
          {
            ATerm d_37 = NULL,e_37 = NULL;
            d_37 = t;
            y_36 :
            if(match_cons(d_37, sym_AL_1))
              {
                e_37 = ATgetArgument(d_37, 0);
                {
                  ATerm g_37 = NULL;
                  ATerm h_37 = NULL,j_37 = NULL;
                  ATerm i_37 = NULL;
                  t = not_null(e_37);
                  {
                    t = Hspace_0(t);
                    {
                      t = string_to_int_0(t);
                      {
                        i_37 = t;
                        if(((h_37 != NULL) && (h_37 != i_37)))
                          _fail(i_37);
                        else
                          h_37 = i_37;
                      }
                    }
                  }
                  {
                    t = (ATerm) ATmakeAppl(sym__2, not_null(h_37), term_d_17);
                    {
                      t = copy_0(t);
                      {
                        j_37 = t;
                        if(((g_37 != NULL) && (g_37 != j_37)))
                          _fail(j_37);
                        else
                          g_37 = j_37;
                      }
                    }
                  }
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(g_37)), term_k_20);
                }
              }
            else
              {
                if(match_cons(d_37, sym_AC_1))
                  {
                    e_37 = ATgetArgument(d_37, 0);
                    {
                      ATerm l_37 = NULL;
                      ATerm m_37 = NULL,o_37 = NULL;
                      ATerm n_37 = NULL;
                      t = not_null(e_37);
                      {
                        t = Hspace_0(t);
                        {
                          t = string_to_int_0(t);
                          {
                            n_37 = t;
                            if(((m_37 != NULL) && (m_37 != n_37)))
                              _fail(n_37);
                            else
                              m_37 = n_37;
                          }
                        }
                      }
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(m_37), term_d_17);
                        {
                          t = copy_0(t);
                          {
                            o_37 = t;
                            if(((l_37 != NULL) && (l_37 != o_37)))
                              _fail(o_37);
                            else
                              l_37 = o_37;
                          }
                        }
                      }
                      t = (ATerm) ATinsert(ATinsert(ATempty, not_null(l_37)), term_p_20);
                    }
                  }
                else
                  {
                    if(match_cons(d_37, sym_AR_1))
                      {
                        e_37 = ATgetArgument(d_37, 0);
                        {
                          ATerm q_37 = NULL;
                          ATerm r_37 = NULL,t_37 = NULL;
                          ATerm s_37 = NULL;
                          t = not_null(e_37);
                          {
                            t = Hspace_0(t);
                            {
                              t = string_to_int_0(t);
                              {
                                s_37 = t;
                                if(((r_37 != NULL) && (r_37 != s_37)))
                                  _fail(s_37);
                                else
                                  r_37 = s_37;
                              }
                            }
                          }
                          {
                            t = (ATerm) ATmakeAppl(sym__2, not_null(r_37), term_d_17);
                            {
                              t = copy_0(t);
                              {
                                t_37 = t;
                                if(((q_37 != NULL) && (q_37 != t_37)))
                                  _fail(t_37);
                                else
                                  q_37 = t_37;
                              }
                            }
                          }
                          t = (ATerm) ATinsert(ATinsert(ATempty, not_null(q_37)), term_q_20);
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
              t = (ATerm) ATinsert(ATempty, term_d_20);
              return(t);
            }
            t = separate_by_1(t, j_2);
            {
              t = concat_0(t);
              {
                ATerm k_2 (ATerm t)
                {
                  t = (ATerm) ATinsert(ATempty, term_r_20);
                  return(t);
                }
                t = at_last_1(t, k_2);
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
ATerm subt_0 (ATerm t)
{
  ATerm g_38 = NULL,h_38 = NULL,i_38 = NULL;
  g_38 = t;
  f_38 :
  if(match_cons(g_38, sym__2))
    {
      h_38 = ATgetArgument(g_38, 0);
      i_38 = ATgetArgument(g_38, 1);
      {
        ATerm s_20 = t;
        int t_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_subti(not_null(h_38), not_null(i_38));
            LocalPopChoice(t_20);
          }
        else
          {
            t = s_20;
            t = SSL_subtr(not_null(h_38), not_null(i_38));
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
  ATerm o_38 = NULL,s_38 = NULL,t_38 = NULL;
  o_38 = t;
  n_38 :
  if(match_cons(o_38, sym__2))
    {
      s_38 = ATgetArgument(o_38, 0);
      t_38 = ATgetArgument(o_38, 1);
      {
        ATerm u_20;
        u_20 = t;
        {
          ATerm v_20 = t;
          int w_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(s_38), not_null(t_38));
              LocalPopChoice(w_20);
            }
          else
            {
              t = v_20;
              t = SSL_gtr(not_null(s_38), not_null(t_38));
            }
        }
        t = u_20;
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
  ATerm z_38 = NULL;
  ATerm x_20 = t;
  int y_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_39 = NULL,b_39 = NULL,c_39 = NULL;
      a_39 = t;
      y_38 :
      if(match_cons(a_39, sym__2))
        {
          b_39 = ATgetArgument(a_39, 0);
          c_39 = ATgetArgument(a_39, 1);
          {
            if(((z_38 != NULL) && (z_38 != b_39)))
              _fail(b_39);
            else
              z_38 = b_39;
            if(((z_38 != NULL) && (z_38 != c_39)))
              _fail(c_39);
            else
              z_38 = c_39;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(y_20);
    }
  else
    {
      t = x_20;
      t = gt_0(t);
    }
  return(t);
}
ATerm while_not_2 (ATerm t, ATerm l_65 (ATerm), ATerm m_65 (ATerm))
{
  ATerm e_39 (ATerm t)
  {
    ATerm z_20 = t;
    int a_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_65(t);
        LocalPopChoice(a_21);
      }
    else
      {
        t = z_20;
        {
          t = m_65(t);
          t = e_39(t);
        }
      }
    return(t);
  }
  t = e_39(t);
  return(t);
}
ATerm for_3 (ATerm t, ATerm o_65 (ATerm), ATerm p_65 (ATerm), ATerm q_65 (ATerm))
{
  t = o_65(t);
  t = while_not_2(t, p_65, q_65);
  return(t);
}
ATerm copy_0 (ATerm t)
{
  ATerm b_21 = t;
  int c_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_2 (ATerm t)
      {
        ATerm o_39 = NULL,p_39 = NULL,q_39 = NULL;
        o_39 = t;
        g_39 :
        if(match_cons(o_39, sym__2))
          {
            p_39 = ATgetArgument(o_39, 0);
            q_39 = ATgetArgument(o_39, 1);
            t = (ATerm) ATmakeAppl(sym__3, not_null(p_39), not_null(q_39), (ATerm) ATempty);
          }
        else
          {
            _fail(t);
          }
        return(t);
      }
      ATerm m_2 (ATerm t)
      {
        ATerm t_39 = NULL,u_39 = NULL,v_39 = NULL,w_39 = NULL;
        t_39 = t;
        i_39 :
        if(match_cons(t_39, sym__3))
          {
            u_39 = ATgetArgument(t_39, 0);
            v_39 = ATgetArgument(t_39, 1);
            w_39 = ATgetArgument(t_39, 2);
            j_39 :
            if(match_int(u_39, 0))
              {
                t = not_null(w_39);
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
      ATerm n_2 (ATerm t)
      {
        ATerm z_39 = NULL,a_40 = NULL,b_40 = NULL,c_40 = NULL;
        z_39 = t;
        m_39 :
        if(match_cons(z_39, sym__3))
          {
            a_40 = ATgetArgument(z_39, 0);
            b_40 = ATgetArgument(z_39, 1);
            c_40 = ATgetArgument(z_39, 2);
            {
              ATerm g_40 = NULL;
              ATerm d_21;
              d_21 = t;
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(a_40), term_m_6);
                t = geq_0(t);
              }
              t = d_21;
              {
                ATerm j_40 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(a_40), term_m_6);
                {
                  t = subt_0(t);
                  {
                    j_40 = t;
                    if(((g_40 != NULL) && (g_40 != j_40)))
                      _fail(j_40);
                    else
                      g_40 = j_40;
                  }
                }
                t = (ATerm) ATmakeAppl(sym__3, not_null(g_40), not_null(b_40), (ATerm) ATinsert(CheckATermList(not_null(c_40)), not_null(b_40)));
              }
            }
          }
        else
          {
            _fail(t);
          }
        return(t);
      }
      t = for_3(t, l_2, m_2, n_2);
      LocalPopChoice(c_21);
    }
  else
    {
      t = b_21;
      {
        ATerm o_2 (ATerm t)
        {
          ATerm k_40 = NULL;
          k_40 = t;
          n_39 :
          if(!(match_int(k_40, 0)))
            {
              _fail(t);
            }
          return(t);
        }
        t = _2(t, o_2, _id);
        t = (ATerm) ATempty;
      }
    }
  return(t);
}
ATerm R_2 (ATerm t, ATerm l_56 (ATerm), ATerm m_56 (ATerm))
{
  ATerm a_41 = NULL,b_41 = NULL,c_41 = NULL;
  a_41 = t;
  z_40 :
  if(match_cons(a_41, sym_R_2))
    {
      b_41 = ATgetArgument(a_41, 0);
      c_41 = ATgetArgument(a_41, 1);
      {
        ATerm g_41 = NULL,i_41 = NULL;
        ATerm h_41 = NULL;
        t = SSLgetAnnotations(not_null(a_41));
        {
          h_41 = t;
          if(((g_41 != NULL) && (g_41 != h_41)))
            _fail(h_41);
          else
            g_41 = h_41;
        }
        {
          t = not_null(b_41);
          {
            ATerm k_41 = NULL;
            t = l_56(t);
            {
              i_41 = t;
              {
                t = not_null(c_41);
                {
                  ATerm m_41 = NULL;
                  t = m_56(t);
                  {
                    k_41 = t;
                    {
                      ATerm p_41 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_R_2, not_null(i_41), not_null(k_41)), not_null(g_41));
                      {
                        p_41 = t;
                        if(((m_41 != NULL) && (m_41 != p_41)))
                          _fail(p_41);
                        else
                          m_41 = p_41;
                      }
                      t = not_null(m_41);
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
  ATerm p_2 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = split_2(t, _id, p_2);
  {
    ATerm m_43 (ATerm t)
    {
      ATerm f_42 = NULL,g_42 = NULL,h_42 = NULL,i_42 = NULL,j_42 = NULL,k_42 = NULL,l_42 = NULL;
      ATerm p_43 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(k_42), (ATerm) ATinsert(CheckATermList(not_null(l_42)), not_null(j_42)));
        t = m_43(t);
        return(t);
      }
      h_42 = t;
      c_42 :
      if(match_cons(h_42, sym__2))
        {
          i_42 = ATgetArgument(h_42, 0);
          l_42 = ATgetArgument(h_42, 1);
          d_42 :
          if(((ATgetType(i_42) == AT_LIST) && ATisEmpty(i_42)))
            {
              {
                ATerm q_42 = NULL;
                ATerm r_42 = NULL;
                t = not_null(l_42);
                {
                  ATerm q_2 (ATerm t)
                  {
                    t = (ATerm) ATempty;
                    return(t);
                  }
                  t = reverse_acc_2(t, _id, q_2);
                  {
                    r_42 = t;
                    if(((q_42 != NULL) && (q_42 != r_42)))
                      _fail(r_42);
                    else
                      q_42 = r_42;
                  }
                }
                t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_R_2, (ATerm)ATempty, not_null(q_42)));
              }
            }
          else
            {
              if(((ATgetType(i_42) == AT_LIST) && !(ATisEmpty(i_42))))
                {
                  j_42 = ATgetFirst((ATermList) i_42);
                  k_42 = (ATerm) ATgetNext((ATermList) i_42);
                  e_42 :
                  if(match_cons(j_42, sym_R_2))
                    {
                      f_42 = ATgetArgument(j_42, 0);
                      g_42 = ATgetArgument(j_42, 1);
                      {
                        ATerm e_21 = t;
                        int f_21 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm c_43 = NULL,e_43 = NULL;
                            ATerm g_21;
                            g_21 = t;
                            {
                              ATerm d_43 = NULL;
                              t = not_null(l_42);
                              {
                                ATerm r_2 (ATerm t)
                                {
                                  t = (ATerm) ATempty;
                                  return(t);
                                }
                                t = reverse_acc_2(t, _id, r_2);
                                {
                                  d_43 = t;
                                  if(((c_43 != NULL) && (c_43 != d_43)))
                                    _fail(d_43);
                                  else
                                    c_43 = d_43;
                                }
                              }
                            }
                            t = g_21;
                            {
                              ATerm g_43 = NULL;
                              t = (ATerm) ATmakeAppl(sym__2, not_null(k_42), (ATerm) ATempty);
                              {
                                t = m_43(t);
                                {
                                  g_43 = t;
                                  if(((e_43 != NULL) && (e_43 != g_43)))
                                    _fail(g_43);
                                  else
                                    e_43 = g_43;
                                }
                              }
                              t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(e_43)), (ATerm) ATmakeAppl(sym_R_2, not_null(f_42), not_null(g_42))), (ATerm) ATmakeAppl(sym_R_2, (ATerm)ATempty, not_null(c_43)));
                            }
                            LocalPopChoice(f_21);
                          }
                        else
                          {
                            t = e_21;
                            t = p_43(t);
                          }
                      }
                    }
                  else
                    {
                      t = p_43(t);
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
    t = m_43(t);
    {
      ATerm s_2 (ATerm t)
      {
        ATerm h_21 = t;
        if((PushChoice() == 0))
          {
            t = R_2(t, _id, Nil_0);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = h_21;
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
  ATerm m_45 = NULL,n_45 = NULL,o_45 = NULL,p_45 = NULL,q_45 = NULL,r_45 = NULL,s_45 = NULL;
  ATerm t_49 (ATerm t)
  {
    t = not_null(s_45);
    {
      ATerm i_21 = t;
      int j_21 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = KW_0(t);
          LocalPopChoice(j_21);
        }
      else
        {
          t = i_21;
          {
            ATerm k_21 = t;
            int l_21 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = VAR_0(t);
                LocalPopChoice(l_21);
              }
            else
              {
                t = k_21;
                {
                  ATerm m_21 = t;
                  int n_21 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = NUM_0(t);
                      LocalPopChoice(n_21);
                    }
                  else
                    {
                      t = m_21;
                      t = MATH_0(t);
                    }
                }
              }
          }
        }
    }
    t = (ATerm) ATmakeAppl(sym_BOXFONT_2, not_null(s_45), not_null(q_45));
    return(t);
  }
  ATerm u_49 (ATerm t)
  {
    ATerm a_49 = NULL;
    ATerm e_49 = NULL;
    t = not_null(q_45);
    {
      ATerm t_2 (ATerm t)
      {
        ATerm b_49 = NULL,c_49 = NULL;
        b_49 = t;
        g_45 :
        if(match_cons(b_49, sym_S_1))
          {
            c_49 = ATgetArgument(b_49, 0);
            {
              t = not_null(c_49);
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
        e_49 = t;
        if(((a_49 != NULL) && (a_49 != e_49)))
          _fail(e_49);
        else
          a_49 = e_49;
      }
    }
    t = (ATerm) ATmakeAppl(sym_CBOX_1, not_null(a_49));
    return(t);
  }
  ATerm v_49 (ATerm t)
  {
    t = not_null(s_45);
    t = latex_string_0(t);
    return(t);
  }
  r_45 = t;
  i_45 :
  if(match_cons(r_45, sym_REF_2))
    {
      s_45 = ATgetArgument(r_45, 0);
      q_45 = ATgetArgument(r_45, 1);
      t = (ATerm) ATmakeAppl(sym_REFBOX_2, not_null(s_45), not_null(q_45));
    }
  else
    {
      if(match_cons(r_45, sym_LBL_2))
        {
          s_45 = ATgetArgument(r_45, 0);
          q_45 = ATgetArgument(r_45, 1);
          t = (ATerm) ATmakeAppl(sym_LBLBOX_2, not_null(s_45), not_null(q_45));
        }
      else
        {
          if(match_cons(r_45, sym_L_2))
            {
              s_45 = ATgetArgument(r_45, 0);
              q_45 = ATgetArgument(r_45, 1);
              {
                ATerm z_45 = NULL;
                ATerm o_21 = t;
                int p_21 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm a_46 = NULL;
                    t = not_null(s_45);
                    {
                      t = string_to_int_0(t);
                      {
                        a_46 = t;
                        if(((z_45 != NULL) && (z_45 != a_46)))
                          _fail(a_46);
                        else
                          z_45 = a_46;
                      }
                    }
                    LocalPopChoice(p_21);
                  }
                else
                  {
                    t = o_21;
                    {
                      ATerm q_21 = t;
                      int r_21 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm d_46 = NULL;
                          t = not_null(s_45);
                          {
                            t = explode_string_0(t);
                            {
                              ATerm u_2 (ATerm t)
                              {
                                ATerm b_46 = NULL;
                                b_46 = t;
                                h_44 :
                                if(!(match_int(b_46, 61)))
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
                                    d_46 = t;
                                    if(((z_45 != NULL) && (z_45 != d_46)))
                                      _fail(d_46);
                                    else
                                      z_45 = d_46;
                                  }
                                }
                              }
                            }
                          }
                          LocalPopChoice(r_21);
                        }
                      else
                        {
                          t = q_21;
                          {
                            ATerm e_46 = NULL;
                            t = not_null(s_45);
                            {
                              e_46 = t;
                              if(((z_45 != NULL) && (z_45 != e_46)))
                                _fail(e_46);
                              else
                                z_45 = e_46;
                            }
                          }
                        }
                    }
                  }
                t = (ATerm) ATmakeAppl(sym_LBOX_2, not_null(z_45), not_null(q_45));
              }
            }
          else
            {
              if(match_cons(r_45, sym_ALT_2))
                {
                  s_45 = ATgetArgument(r_45, 0);
                  q_45 = ATgetArgument(r_45, 1);
                  t = (ATerm) ATmakeAppl(sym_ALTBOX_2, not_null(s_45), not_null(q_45));
                }
              else
                {
                  if(match_cons(r_45, sym_A_3))
                    {
                      s_45 = ATgetArgument(r_45, 0);
                      q_45 = ATgetArgument(r_45, 1);
                      m_45 = ATgetArgument(r_45, 2);
                      {
                        ATerm k_46 = NULL,l_46 = NULL,o_46 = NULL,p_46 = NULL,q_46 = NULL;
                        ATerm r_46 = NULL;
                        t = not_null(m_45);
                        {
                          ATerm s_46 = NULL;
                          t = construct_rows_0(t);
                          {
                            r_46 = t;
                            {
                              if(((o_46 != NULL) && (o_46 != r_46)))
                                _fail(r_46);
                              else
                                o_46 = r_46;
                              {
                                t = not_null(q_45);
                                {
                                  t = Vspace_0(t);
                                  {
                                    ATerm t_46 = NULL,f_47 = NULL;
                                    t = string_to_int_0(t);
                                    {
                                      s_46 = t;
                                      {
                                        if(((k_46 != NULL) && (k_46 != s_46)))
                                          _fail(s_46);
                                        else
                                          k_46 = s_46;
                                        {
                                          ATerm u_46 = NULL;
                                          t = (ATerm) ATmakeAppl(sym__2, not_null(k_46), term_r_20);
                                          {
                                            t = copy_0(t);
                                            {
                                              u_46 = t;
                                              if(((t_46 != NULL) && (t_46 != u_46)))
                                                _fail(u_46);
                                              else
                                                t_46 = u_46;
                                            }
                                          }
                                          {
                                            t = (ATerm) ATmakeAppl(sym__2, not_null(t_46), (ATerm) ATinsert(ATinsert(ATempty, term_s_16), term_r_20));
                                            {
                                              ATerm g_47 = NULL;
                                              ATerm t_21 = t;
                                              int u_21 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  t = conc_two_lists_0(t);
                                                  LocalPopChoice(u_21);
                                                }
                                              else
                                                {
                                                  t = t_21;
                                                  t = conc_more_lists_0(t);
                                                }
                                              {
                                                f_47 = t;
                                                {
                                                  if(((p_46 != NULL) && (p_46 != f_47)))
                                                    _fail(f_47);
                                                  else
                                                    p_46 = f_47;
                                                  {
                                                    t = not_null(s_45);
                                                    {
                                                      ATerm h_47 = NULL;
                                                      t = table_def_0(t);
                                                      {
                                                        g_47 = t;
                                                        {
                                                          if(((l_46 != NULL) && (l_46 != g_47)))
                                                            _fail(g_47);
                                                          else
                                                            l_46 = g_47;
                                                          {
                                                            t = not_null(o_46);
                                                            {
                                                              t = map_1(t, MkRows_0);
                                                              {
                                                                ATerm v_2 (ATerm t)
                                                                {
                                                                  t = not_null(p_46);
                                                                  return(t);
                                                                }
                                                                t = separate_by_1(t, v_2);
                                                                {
                                                                  h_47 = t;
                                                                  if(((q_46 != NULL) && (q_46 != h_47)))
                                                                    _fail(h_47);
                                                                  else
                                                                    q_46 = h_47;
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
                        t = (ATerm) ATmakeAppl(sym_ABOX_2, not_null(l_46), not_null(q_46));
                      }
                    }
                  else
                    {
                      if(match_cons(r_45, sym_HV_2))
                        {
                          s_45 = ATgetArgument(r_45, 0);
                          q_45 = ATgetArgument(r_45, 1);
                          {
                            ATerm k_47 = NULL,l_47 = NULL,m_47 = NULL,r_47 = NULL;
                            ATerm s_47 = NULL;
                            t = not_null(s_45);
                            {
                              ATerm t_47 = NULL;
                              t = Hspace_0(t);
                              {
                                s_47 = t;
                                {
                                  if(((k_47 != NULL) && (k_47 != s_47)))
                                    _fail(s_47);
                                  else
                                    k_47 = s_47;
                                  {
                                    t = not_null(s_45);
                                    {
                                      ATerm u_47 = NULL;
                                      t = Vspace_0(t);
                                      {
                                        t_47 = t;
                                        {
                                          if(((l_47 != NULL) && (l_47 != t_47)))
                                            _fail(t_47);
                                          else
                                            l_47 = t_47;
                                          {
                                            t = not_null(s_45);
                                            {
                                              ATerm v_47 = NULL;
                                              t = Ispace_0(t);
                                              {
                                                u_47 = t;
                                                {
                                                  if(((m_47 != NULL) && (m_47 != u_47)))
                                                    _fail(u_47);
                                                  else
                                                    m_47 = u_47;
                                                  {
                                                    t = not_null(q_45);
                                                    {
                                                      ATerm w_2 (ATerm t)
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
                                                      t = filter_1(t, w_2);
                                                      {
                                                        ATerm x_2 (ATerm t)
                                                        {
                                                          t = term_w_21;
                                                          return(t);
                                                        }
                                                        t = separate_by_1(t, x_2);
                                                        {
                                                          v_47 = t;
                                                          if(((r_47 != NULL) && (r_47 != v_47)))
                                                            _fail(v_47);
                                                          else
                                                            r_47 = v_47;
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
                            t = (ATerm) ATmakeAppl(sym_HVBOX_4, not_null(k_47), not_null(l_47), not_null(m_47), not_null(r_47));
                          }
                        }
                      else
                        {
                          if(match_cons(r_45, sym_V_2))
                            {
                              s_45 = ATgetArgument(r_45, 0);
                              q_45 = ATgetArgument(r_45, 1);
                              {
                                ATerm y_47 = NULL,z_47 = NULL,a_48 = NULL;
                                ATerm b_48 = NULL;
                                t = not_null(s_45);
                                {
                                  ATerm c_48 = NULL;
                                  t = Vspace_0(t);
                                  {
                                    b_48 = t;
                                    {
                                      if(((y_47 != NULL) && (y_47 != b_48)))
                                        _fail(b_48);
                                      else
                                        y_47 = b_48;
                                      {
                                        t = not_null(s_45);
                                        {
                                          ATerm d_48 = NULL;
                                          t = Ispace_0(t);
                                          {
                                            c_48 = t;
                                            {
                                              if(((z_47 != NULL) && (z_47 != c_48)))
                                                _fail(c_48);
                                              else
                                                z_47 = c_48;
                                              {
                                                t = not_null(q_45);
                                                {
                                                  ATerm y_2 (ATerm t)
                                                  {
                                                    ATerm x_21 = t;
                                                    if((PushChoice() == 0))
                                                      {
                                                        t = Nil_0(t);
                                                        PopChoice();
                                                        _fail(t);
                                                      }
                                                    else
                                                      {
                                                        t = x_21;
                                                      }
                                                    return(t);
                                                  }
                                                  t = filter_1(t, y_2);
                                                  {
                                                    ATerm z_2 (ATerm t)
                                                    {
                                                      t = term_y_21;
                                                      return(t);
                                                    }
                                                    t = separate_by_1(t, z_2);
                                                    {
                                                      d_48 = t;
                                                      if(((a_48 != NULL) && (a_48 != d_48)))
                                                        _fail(d_48);
                                                      else
                                                        a_48 = d_48;
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
                                t = (ATerm) ATmakeAppl(sym_VBOX_3, not_null(y_47), not_null(z_47), not_null(a_48));
                              }
                            }
                          else
                            {
                              if(match_cons(r_45, sym_H_2))
                                {
                                  s_45 = ATgetArgument(r_45, 0);
                                  q_45 = ATgetArgument(r_45, 1);
                                  {
                                    ATerm g_48 = NULL,h_48 = NULL;
                                    ATerm i_48 = NULL;
                                    t = not_null(s_45);
                                    {
                                      ATerm j_48 = NULL;
                                      t = Hspace_0(t);
                                      {
                                        i_48 = t;
                                        {
                                          if(((g_48 != NULL) && (g_48 != i_48)))
                                            _fail(i_48);
                                          else
                                            g_48 = i_48;
                                          {
                                            t = not_null(q_45);
                                            {
                                              t = toh_0(t);
                                              {
                                                j_48 = t;
                                                if(((h_48 != NULL) && (h_48 != j_48)))
                                                  _fail(j_48);
                                                else
                                                  h_48 = j_48;
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                    t = (ATerm) ATmakeAppl(sym_HBOX_2, not_null(g_48), not_null(h_48));
                                  }
                                }
                              else
                                {
                                  if(match_cons(r_45, sym_FBOX_2))
                                    {
                                      s_45 = ATgetArgument(r_45, 0);
                                      q_45 = ATgetArgument(r_45, 1);
                                      j_45 :
                                      if(match_cons(s_45, sym_F_1))
                                        {
                                          p_45 = ATgetArgument(s_45, 0);
                                          k_45 :
                                          if(((ATgetType(p_45) == AT_LIST) && !(ATisEmpty(p_45))))
                                            {
                                              n_45 = ATgetFirst((ATermList) p_45);
                                              o_45 = (ATerm) ATgetNext((ATermList) p_45);
                                              {
                                                ATerm z_21 = t;
                                                int a_22 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    ATerm o_48 = NULL,p_48 = NULL;
                                                    t = not_null(n_45);
                                                    {
                                                      ATerm b_22 = t;
                                                      int c_22 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm a_3 (ATerm t)
                                                          {
                                                            ATerm q_48 = NULL;
                                                            q_48 = t;
                                                            if(((p_48 != NULL) && (p_48 != q_48)))
                                                              _fail(q_48);
                                                            else
                                                              p_48 = q_48;
                                                            return(t);
                                                          }
                                                          t = FFID_2(t, FM_0, a_3);
                                                          LocalPopChoice(c_22);
                                                        }
                                                      else
                                                        {
                                                          t = b_22;
                                                          {
                                                            ATerm d_22 = t;
                                                            int e_22 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm b_3 (ATerm t)
                                                                {
                                                                  ATerm r_48 = NULL;
                                                                  r_48 = t;
                                                                  if(((p_48 != NULL) && (p_48 != r_48)))
                                                                    _fail(r_48);
                                                                  else
                                                                    p_48 = r_48;
                                                                  return(t);
                                                                }
                                                                t = FFID_2(t, SE_0, b_3);
                                                                LocalPopChoice(e_22);
                                                              }
                                                            else
                                                              {
                                                                t = d_22;
                                                                {
                                                                  ATerm f_22 = t;
                                                                  int g_22 = stack_ptr;
                                                                  if((PushChoice() == 0))
                                                                    {
                                                                      ATerm c_3 (ATerm t)
                                                                      {
                                                                        ATerm s_48 = NULL;
                                                                        s_48 = t;
                                                                        if(((p_48 != NULL) && (p_48 != s_48)))
                                                                          _fail(s_48);
                                                                        else
                                                                          p_48 = s_48;
                                                                        return(t);
                                                                      }
                                                                      t = FFID_2(t, SH_0, c_3);
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
                                                                            ATerm f_3 (ATerm t)
                                                                            {
                                                                              ATerm t_48 = NULL;
                                                                              t_48 = t;
                                                                              if(((p_48 != NULL) && (p_48 != t_48)))
                                                                                _fail(t_48);
                                                                              else
                                                                                p_48 = t_48;
                                                                              return(t);
                                                                            }
                                                                            t = FFID_2(t, SZ_0, f_3);
                                                                            LocalPopChoice(i_22);
                                                                          }
                                                                        else
                                                                          {
                                                                            t = h_22;
                                                                            {
                                                                              ATerm v_48 = NULL;
                                                                              ATerm g_3 (ATerm t)
                                                                              {
                                                                                ATerm u_48 = NULL;
                                                                                u_48 = t;
                                                                                if(((o_48 != NULL) && (o_48 != u_48)))
                                                                                  _fail(u_48);
                                                                                else
                                                                                  o_48 = u_48;
                                                                                return(t);
                                                                              }
                                                                              t = FFID_2(t, CL_0, g_3);
                                                                              {
                                                                                t = (ATerm) ATmakeAppl(sym_BOXCOLOR_1, not_null(o_48));
                                                                                {
                                                                                  v_48 = t;
                                                                                  if(((p_48 != NULL) && (p_48 != v_48)))
                                                                                    _fail(v_48);
                                                                                  else
                                                                                    p_48 = v_48;
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
                                                    t = (ATerm) ATmakeAppl(sym_BOXFONT_2, not_null(p_48), (ATerm) ATmakeAppl(sym_FBOX_2, (ATerm)ATmakeAppl(sym_F_1, not_null(o_45)), not_null(q_45)));
                                                    LocalPopChoice(a_22);
                                                  }
                                                else
                                                  {
                                                    t = z_21;
                                                    t = t_49(t);
                                                  }
                                              }
                                            }
                                          else
                                            {
                                              if(((ATgetType(p_45) == AT_LIST) && ATisEmpty(p_45)))
                                                {
                                                  {
                                                    ATerm j_22 = t;
                                                    int k_22 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        t = not_null(q_45);
                                                        LocalPopChoice(k_22);
                                                      }
                                                    else
                                                      {
                                                        t = j_22;
                                                        t = t_49(t);
                                                      }
                                                  }
                                                }
                                              else
                                                {
                                                  t = t_49(t);
                                                }
                                            }
                                        }
                                      else
                                        {
                                          t = t_49(t);
                                        }
                                    }
                                  else
                                    {
                                      if(match_cons(r_45, sym_C_2))
                                        {
                                          s_45 = ATgetArgument(r_45, 0);
                                          q_45 = ATgetArgument(r_45, 1);
                                          l_45 :
                                          if(((ATgetType(s_45) == AT_LIST) && ATisEmpty(s_45)))
                                            {
                                              t = u_49(t);
                                            }
                                          else
                                            {
                                              _fail(t);
                                            }
                                        }
                                      else
                                        {
                                          if(match_cons(r_45, sym_S_1))
                                            {
                                              s_45 = ATgetArgument(r_45, 0);
                                              t = v_49(t);
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
ATerm abox2latex_1 (ATerm t, ATerm z_63 (ATerm))
{
  ATerm g_51 = NULL;
  ATerm i_51 = NULL,k_51 = NULL;
  g_51 = t;
  {
    ATerm l_22;
    l_22 = t;
    {
      ATerm j_51 = NULL;
      t = term_s_18;
      {
        t = z_63(t);
        {
          j_51 = t;
          if(((i_51 != NULL) && (i_51 != j_51)))
            _fail(j_51);
          else
            i_51 = j_51;
        }
      }
    }
    t = l_22;
    {
      ATerm l_51 = NULL;
      t = not_null(g_51);
      {
        ATerm h_3 (ATerm t)
        {
          ATerm m_22 = t;
          int n_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Abox2latex_0(t);
              LocalPopChoice(n_22);
            }
          else
            {
              t = m_22;
              {
              }
            }
          return(t);
        }
        t = topdown_1(t, h_3);
        {
          l_51 = t;
          if(((k_51 != NULL) && (k_51 != l_51)))
            _fail(l_51);
          else
            k_51 = l_51;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym_BOXENV_2, (ATerm)ATinsert(ATempty, not_null(i_51)), not_null(k_51));
        t = latex2text_0(t);
      }
    }
  }
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm u_86 (ATerm))
{
  t = fetch_1(t, u_86);
  return(t);
}
ATerm Snd_0 (ATerm t)
{
  ATerm w_51 = NULL;
  ATerm y_51 = NULL,z_51 = NULL,a_52 = NULL;
  w_51 = t;
  {
    ATerm b_52 = NULL;
    ATerm d_52 = NULL,e_52 = NULL,f_52 = NULL,g_52 = NULL,h_52 = NULL,i_52 = NULL,j_52 = NULL;
    t = not_null(w_51);
    {
      b_52 = t;
      {
        t = SSL_explode_term(not_null(b_52));
        {
          d_52 = t;
          s_51 :
          if(match_cons(d_52, sym__2))
            {
              e_52 = ATgetArgument(d_52, 0);
              f_52 = ATgetArgument(d_52, 1);
              t_51 :
              if(match_string(e_52, ""))
                {
                  u_51 :
                  if(((ATgetType(f_52) == AT_LIST) && !(ATisEmpty(f_52))))
                    {
                      g_52 = ATgetFirst((ATermList) f_52);
                      h_52 = (ATerm) ATgetNext((ATermList) f_52);
                      v_51 :
                      if(((ATgetType(h_52) == AT_LIST) && !(ATisEmpty(h_52))))
                        {
                          i_52 = ATgetFirst((ATermList) h_52);
                          j_52 = (ATerm) ATgetNext((ATermList) h_52);
                          {
                            if(((y_51 != NULL) && (y_51 != g_52)))
                              _fail(g_52);
                            else
                              y_51 = g_52;
                            {
                              if(((a_52 != NULL) && (a_52 != i_52)))
                                _fail(i_52);
                              else
                                a_52 = i_52;
                              if(((z_51 != NULL) && (z_51 != j_52)))
                                _fail(j_52);
                              else
                                z_51 = j_52;
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
    t = not_null(a_52);
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm q_52 = NULL;
  ATerm o_22;
  o_22 = t;
  {
    ATerm p_22 = t;
    int q_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_3 (ATerm t)
        {
          ATerm r_52 = NULL,s_52 = NULL;
          r_52 = t;
          o_52 :
          if(match_cons(r_52, sym_Input_1))
            {
              s_52 = ATgetArgument(r_52, 0);
              if(((q_52 != NULL) && (q_52 != s_52)))
                _fail(s_52);
              else
                q_52 = s_52;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = fetch_1(t, i_3);
        LocalPopChoice(q_22);
      }
    else
      {
        t = p_22;
        {
          ATerm t_52 = NULL;
          t = term_r_22;
          {
            t_52 = t;
            if(((q_52 != NULL) && (q_52 != t_52)))
              _fail(t_52);
            else
              q_52 = t_52;
          }
        }
      }
  }
  t = o_22;
  {
    ATerm l_3 (ATerm t)
    {
      t = not_null(q_52);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, l_3);
  }
  return(t);
}
ATerm StoreEntries_0 (ATerm t)
{
  ATerm m_3 (ATerm t)
  {
    ATerm a_53 = NULL,b_53 = NULL,c_53 = NULL,d_53 = NULL,e_53 = NULL;
    a_53 = t;
    x_52 :
    if(((ATgetType(a_53) == AT_LIST) && !(ATisEmpty(a_53))))
      {
        b_53 = ATgetFirst((ATermList) a_53);
        c_53 = (ATerm) ATgetNext((ATermList) a_53);
        y_52 :
        if(((ATgetType(c_53) == AT_LIST) && !(ATisEmpty(c_53))))
          {
            d_53 = ATgetFirst((ATermList) c_53);
            e_53 = (ATerm) ATgetNext((ATermList) c_53);
            z_52 :
            if(((ATgetType(e_53) == AT_LIST) && ATisEmpty(e_53)))
              {
                {
                  t = (ATerm) ATmakeAppl(sym__3, term_r_14, not_null(b_53), not_null(d_53));
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
  t = map_1(t, m_3);
  return(t);
}
ATerm ReadFromFile_0 (ATerm t)
{
  ATerm j_53 = NULL;
  j_53 = t;
  t = SSL_ReadFromFile(not_null(j_53));
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm n_53 = NULL;
  n_53 = t;
  t = SSL_table_create(not_null(n_53));
  return(t);
}
ATerm load_tables_0 (ATerm t)
{
  ATerm s_22;
  s_22 = t;
  {
    t = term_r_14;
    t = table_create_0(t);
  }
  t = s_22;
  {
    ATerm n_3 (ATerm t)
    {
      t = (ATerm) ATempty;
      return(t);
    }
    t = reverse_acc_2(t, _id, n_3);
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
ATerm eq_0 (ATerm t)
{
  ATerm s_53 = NULL,t_53 = NULL,u_53 = NULL;
  s_53 = t;
  r_53 :
  if(match_cons(s_53, sym__2))
    {
      t_53 = ATgetArgument(s_53, 0);
      u_53 = ATgetArgument(s_53, 1);
      if(((t_53 != NULL) && (t_53 != u_53)))
        _fail(u_53);
      else
        t_53 = u_53;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm fetch_1 (ATerm t, ATerm g_72 (ATerm))
{
  ATerm x_53 (ATerm t)
  {
    ATerm t_22 = t;
    int u_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, g_72, _id);
        LocalPopChoice(u_22);
      }
    else
      {
        t = t_22;
        t = Cons_2(t, _id, x_53);
      }
    return(t);
  }
  t = x_53(t);
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm y_77 (ATerm), ATerm z_77 (ATerm))
{
  ATerm b_54 = NULL,c_54 = NULL,d_54 = NULL;
  b_54 = t;
  a_54 :
  if(((ATgetType(b_54) == AT_LIST) && !(ATisEmpty(b_54))))
    {
      c_54 = ATgetFirst((ATermList) b_54);
      d_54 = (ATerm) ATgetNext((ATermList) b_54);
      {
        t = z_77(t);
        {
          ATerm s_3 (ATerm t)
          {
            ATerm g_54 = NULL;
            g_54 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(c_54), not_null(g_54));
              t = y_77(t);
            }
            return(t);
          }
          t = fetch_1(t, s_3);
        }
        t = not_null(d_54);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm union_1 (ATerm t, ATerm u_77 (ATerm))
{
  ATerm o_54 = NULL,p_54 = NULL,q_54 = NULL;
  o_54 = t;
  n_54 :
  if(match_cons(o_54, sym__2))
    {
      p_54 = ATgetArgument(o_54, 0);
      q_54 = ATgetArgument(o_54, 1);
      {
        t = not_null(p_54);
        {
          ATerm u_54 (ATerm t)
          {
            ATerm v_22 = t;
            int w_22 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(q_54);
                LocalPopChoice(w_22);
              }
            else
              {
                t = v_22;
                {
                  ATerm x_22 = t;
                  int y_22 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm t_3 (ATerm t)
                      {
                        t = not_null(q_54);
                        return(t);
                      }
                      t = HdMember_p__2(t, u_77, t_3);
                      t = u_54(t);
                      LocalPopChoice(y_22);
                    }
                  else
                    {
                      t = x_22;
                      t = Cons_2(t, _id, u_54);
                    }
                }
              }
            return(t);
          }
          t = u_54(t);
        }
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
  t = union_1(t, eq_0);
  return(t);
}
ATerm foldr_3 (ATerm t, ATerm n_78 (ATerm), ATerm o_78 (ATerm), ATerm p_78 (ATerm))
{
  ATerm z_22 = t;
  int a_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = n_78(t);
      LocalPopChoice(a_23);
    }
  else
    {
      t = z_22;
      {
        ATerm z_54 = NULL,a_55 = NULL,b_55 = NULL;
        z_54 = t;
        y_54 :
        if(((ATgetType(z_54) == AT_LIST) && !(ATisEmpty(z_54))))
          {
            a_55 = ATgetFirst((ATermList) z_54);
            b_55 = (ATerm) ATgetNext((ATermList) z_54);
            {
              ATerm e_55 = NULL,g_55 = NULL;
              ATerm b_23;
              b_23 = t;
              {
                ATerm f_55 = NULL;
                t = not_null(a_55);
                {
                  t = p_78(t);
                  {
                    f_55 = t;
                    if(((e_55 != NULL) && (e_55 != f_55)))
                      _fail(f_55);
                    else
                      e_55 = f_55;
                  }
                }
              }
              t = b_23;
              {
                ATerm h_55 = NULL;
                t = not_null(b_55);
                {
                  t = foldr_3(t, n_78, o_78, p_78);
                  {
                    h_55 = t;
                    if(((g_55 != NULL) && (g_55 != h_55)))
                      _fail(h_55);
                    else
                      g_55 = h_55;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(e_55), not_null(g_55));
                  t = o_78(t);
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
ATerm crush_3 (ATerm t, ATerm l_77 (ATerm), ATerm m_77 (ATerm), ATerm n_77 (ATerm))
{
  ATerm p_55 = NULL;
  ATerm r_55 = NULL;
  p_55 = t;
  {
    ATerm u_55 = NULL;
    ATerm y_55 = NULL,z_55 = NULL,a_56 = NULL;
    t = not_null(p_55);
    {
      u_55 = t;
      {
        t = SSL_explode_term(not_null(u_55));
        {
          y_55 = t;
          o_55 :
          if(match_cons(y_55, sym__2))
            {
              z_55 = ATgetArgument(y_55, 0);
              a_56 = ATgetArgument(y_55, 1);
              if(((r_55 != NULL) && (r_55 != a_56)))
                _fail(a_56);
              else
                r_55 = a_56;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(r_55);
      t = foldr_3(t, l_77, m_77, n_77);
    }
  }
  return(t);
}
ATerm collect_om_1 (ATerm t, ATerm k_76 (ATerm))
{
  ATerm h_56 (ATerm t)
  {
    ATerm c_23 = t;
    int d_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_56 = NULL;
        ATerm g_56 = NULL;
        t = k_76(t);
        {
          g_56 = t;
          if(((f_56 != NULL) && (f_56 != g_56)))
            _fail(g_56);
          else
            f_56 = g_56;
        }
        t = (ATerm) ATinsert(ATempty, not_null(f_56));
        LocalPopChoice(d_23);
      }
    else
      {
        t = c_23;
        {
          ATerm u_3 (ATerm t)
          {
            t = (ATerm) ATempty;
            return(t);
          }
          ATerm v_3 (ATerm t)
          {
            t = union_1(t, eq_0);
            return(t);
          }
          t = crush_3(t, u_3, v_3, h_56);
        }
      }
    return(t);
  }
  t = h_56(t);
  return(t);
}
ATerm collect_1 (ATerm t, ATerm m_76 (ATerm))
{
  t = collect_om_1(t, m_76);
  return(t);
}
ATerm obsolete_1 (ATerm t, ATerm c_83 (ATerm))
{
  ATerm e_23;
  e_23 = t;
  {
    t = c_83(t);
    {
      ATerm w_3 (ATerm t)
      {
        t = term_f_23;
        return(t);
      }
      t = debug_1(t, w_3);
    }
  }
  t = e_23;
  return(t);
}
ATerm open_file_0 (ATerm t)
{
  ATerm p_56 = NULL,q_56 = NULL;
  ATerm g_23 = t;
  int h_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_56 = NULL,s_56 = NULL,v_56 = NULL;
      r_56 = t;
      k_56 :
      if(match_cons(r_56, sym__2))
        {
          s_56 = ATgetArgument(r_56, 0);
          v_56 = ATgetArgument(r_56, 1);
          {
            if(((q_56 != NULL) && (q_56 != s_56)))
              _fail(s_56);
            else
              q_56 = s_56;
            if(((p_56 != NULL) && (p_56 != v_56)))
              _fail(v_56);
            else
              p_56 = v_56;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(h_23);
      t = SSL_open_file(not_null(q_56), not_null(p_56));
    }
  else
    {
      t = g_23;
      {
        ATerm w_56 = NULL;
        ATerm x_56 = NULL;
        ATerm x_3 (ATerm t)
        {
          t = term_i_23;
          return(t);
        }
        t = obsolete_1(t, x_3);
        {
          w_56 = t;
          {
            if(((q_56 != NULL) && (q_56 != w_56)))
              _fail(w_56);
            else
              q_56 = w_56;
            {
              ATerm j_23;
              j_23 = t;
              {
                ATerm y_56 = NULL;
                t = term_k_23;
                {
                  y_56 = t;
                  if(((x_56 != NULL) && (x_56 != y_56)))
                    _fail(y_56);
                  else
                    x_56 = y_56;
                }
              }
              t = j_23;
              t = SSL_open_file(not_null(q_56), not_null(x_56));
            }
          }
        }
      }
    }
  return(t);
}
ATerm usage_0 (ATerm t)
{
  ATerm g_57 = NULL;
  ATerm l_23;
  l_23 = t;
  {
    ATerm y_3 (ATerm t)
    {
      ATerm h_57 = NULL,i_57 = NULL;
      h_57 = t;
      f_57 :
      if(match_cons(h_57, sym_Program_1))
        {
          i_57 = ATgetArgument(h_57, 0);
          if(((g_57 != NULL) && (g_57 != i_57)))
            _fail(i_57);
          else
            g_57 = i_57;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = fetch_1(t, y_3);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_k_6, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_n_23), not_null(g_57)), term_m_23));
      {
        t = printnl_0(t);
        {
          t = term_r_6;
          t = exit_0(t);
        }
      }
    }
  }
  t = l_23;
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm o_57 = NULL;
  o_57 = t;
  n_57 :
  if(match_cons(o_57, sym_Version_0))
    {
      ATerm q_57 = NULL,s_57 = NULL;
      ATerm q_23;
      q_23 = t;
      {
        ATerm r_57 = NULL;
        t = SSLgetAnnotations(not_null(o_57));
        {
          r_57 = t;
          if(((q_57 != NULL) && (q_57 != r_57)))
            _fail(r_57);
          else
            q_57 = r_57;
        }
      }
      t = q_23;
      {
        ATerm t_57 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(q_57));
        {
          t_57 = t;
          if(((s_57 != NULL) && (s_57 != t_57)))
            _fail(t_57);
          else
            s_57 = t_57;
        }
        t = not_null(s_57);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm x_83 (ATerm))
{
  ATerm z_3 (ATerm t)
  {
    ATerm r_23 = t;
    int s_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
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
              t = Undefined_1(t, _id);
              LocalPopChoice(u_23);
            }
          else
            {
              t = t_23;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = fetch_1(t, z_3);
  t = x_83(t);
  return(t);
}
ATerm ArgOption_2 (ATerm t, ATerm n_87 (ATerm), ATerm o_87 (ATerm))
{
  ATerm a_4 (ATerm t)
  {
    t = term_v_23;
    return(t);
  }
  t = ArgOption_3(t, n_87, o_87, a_4);
  return(t);
}
ATerm version_option_0 (ATerm t)
{
  ATerm b_4 (ATerm t)
  {
    ATerm y_57 = NULL;
    y_57 = t;
    x_57 :
    if(!(match_string(y_57, "-v")))
      {
        if(!(match_string(y_57, "--version")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm e_4 (ATerm t)
  {
    t = term_x_23;
    t = set_config_0(t);
    t = term_y_23;
    return(t);
  }
  ATerm f_4 (ATerm t)
  {
    t = term_z_23;
    return(t);
  }
  t = Option_3(t, b_4, e_4, f_4);
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm g_4 (ATerm t)
  {
    ATerm b_58 = NULL;
    b_58 = t;
    z_57 :
    if(!(match_string(b_58, "-k")))
      {
        if(!(match_string(b_58, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm h_4 (ATerm t)
  {
    ATerm a_24;
    a_24 = t;
    {
      ATerm c_58 = NULL;
      ATerm d_58 = NULL;
      t = string_to_int_0(t);
      {
        d_58 = t;
        if(((c_58 != NULL) && (c_58 != d_58)))
          _fail(d_58);
        else
          c_58 = d_58;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_b_24, not_null(c_58));
        t = set_config_0(t);
      }
    }
    t = a_24;
    return(t);
  }
  ATerm i_4 (ATerm t)
  {
    t = term_c_24;
    return(t);
  }
  t = ArgOption_3(t, g_4, h_4, i_4);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm g_58 = NULL;
  g_58 = t;
  t = SSL_string_to_int(not_null(g_58));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm d_24 = t;
  int e_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_4 (ATerm t)
      {
        ATerm o_58 = NULL;
        o_58 = t;
        j_58 :
        if(!(match_string(o_58, "-S")))
          {
            if(!(match_string(o_58, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm k_4 (ATerm t)
      {
        t = term_f_24;
        t = set_config_0(t);
        t = term_g_24;
        return(t);
      }
      ATerm l_4 (ATerm t)
      {
        t = term_h_24;
        return(t);
      }
      t = Option_3(t, j_4, k_4, l_4);
      LocalPopChoice(e_24);
    }
  else
    {
      t = d_24;
      {
        ATerm i_24 = t;
        int j_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_4 (ATerm t)
            {
              ATerm p_58 = NULL;
              p_58 = t;
              k_58 :
              if(!(match_string(p_58, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm n_4 (ATerm t)
            {
              ATerm s_58 = NULL;
              ATerm k_24;
              k_24 = t;
              {
                ATerm q_58 = NULL;
                ATerm r_58 = NULL;
                t = string_to_int_0(t);
                {
                  r_58 = t;
                  if(((q_58 != NULL) && (q_58 != r_58)))
                    _fail(r_58);
                  else
                    q_58 = r_58;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_x_6, not_null(q_58));
                  t = set_config_0(t);
                }
              }
              t = k_24;
              {
                ATerm t_58 = NULL;
                t_58 = t;
                if(((s_58 != NULL) && (s_58 != t_58)))
                  _fail(t_58);
                else
                  s_58 = t_58;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(s_58));
              }
              return(t);
            }
            ATerm o_4 (ATerm t)
            {
              t = term_m_24;
              return(t);
            }
            t = ArgOption_3(t, m_4, n_4, o_4);
            LocalPopChoice(j_24);
          }
        else
          {
            t = i_24;
            {
              ATerm p_4 (ATerm t)
              {
                ATerm u_58 = NULL;
                u_58 = t;
                n_58 :
                if(!(match_string(u_58, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm q_4 (ATerm t)
              {
                t = term_o_24;
                t = set_config_0(t);
                t = term_s_24;
                return(t);
              }
              ATerm r_4 (ATerm t)
              {
                t = term_t_24;
                return(t);
              }
              t = Option_3(t, p_4, q_4, r_4);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0 (ATerm t)
{
  ATerm u_24 = t;
  int v_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      LocalPopChoice(v_24);
    }
  else
    {
      t = u_24;
      {
        ATerm w_24 = t;
        int x_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = keep_option_0(t);
            LocalPopChoice(x_24);
          }
        else
          {
            t = w_24;
            t = version_option_0(t);
          }
      }
    }
  return(t);
}
ATerm output_option_0 (ATerm t)
{
  ATerm s_4 (ATerm t)
  {
    ATerm a_59 = NULL;
    a_59 = t;
    x_58 :
    if(!(match_string(a_59, "-o")))
      {
        if(!(match_string(a_59, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm t_4 (ATerm t)
  {
    ATerm d_59 = NULL;
    ATerm a_25;
    a_25 = t;
    {
      ATerm b_59 = NULL;
      ATerm c_59 = NULL;
      c_59 = t;
      if(((b_59 != NULL) && (b_59 != c_59)))
        _fail(c_59);
      else
        b_59 = c_59;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_f_25, not_null(b_59));
        t = set_config_0(t);
      }
    }
    t = a_25;
    {
      ATerm e_59 = NULL;
      e_59 = t;
      if(((d_59 != NULL) && (d_59 != e_59)))
        _fail(e_59);
      else
        d_59 = e_59;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(d_59));
    }
    return(t);
  }
  ATerm u_4 (ATerm t)
  {
    t = term_g_25;
    return(t);
  }
  t = ArgOption_3(t, s_4, t_4, u_4);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm h_25 = t;
  int i_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      LocalPopChoice(i_25);
    }
  else
    {
      t = h_25;
      {
        ATerm v_4 (ATerm t)
        {
          ATerm i_59 = NULL;
          i_59 = t;
          h_59 :
          if(!(match_string(i_59, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm w_4 (ATerm t)
        {
          t = term_k_25;
          t = set_config_0(t);
          t = term_n_25;
          return(t);
        }
        ATerm x_4 (ATerm t)
        {
          t = term_r_25;
          return(t);
        }
        t = Option_3(t, v_4, w_4, x_4);
      }
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm o_59 = NULL,p_59 = NULL,q_59 = NULL,r_59 = NULL,s_59 = NULL;
  o_59 = t;
  m_59 :
  if(match_string(o_59, "register-usage-info"))
    {
      t = register_usage_1(t, l_0);
    }
  else
    {
      if(((ATgetType(o_59) == AT_LIST) && !(ATisEmpty(o_59))))
        {
          p_59 = ATgetFirst((ATermList) o_59);
          q_59 = (ATerm) ATgetNext((ATermList) o_59);
          n_59 :
          if(((ATgetType(q_59) == AT_LIST) && !(ATisEmpty(q_59))))
            {
              r_59 = ATgetFirst((ATermList) q_59);
              s_59 = (ATerm) ATgetNext((ATermList) q_59);
              {
                ATerm w_59 = NULL;
                ATerm s_25;
                s_25 = t;
                {
                  t = not_null(p_59);
                  t = j_0(t);
                }
                t = s_25;
                {
                  ATerm x_59 = NULL;
                  t = not_null(r_59);
                  {
                    t = k_0(t);
                    {
                      x_59 = t;
                      if(((w_59 != NULL) && (w_59 != x_59)))
                        _fail(x_59);
                      else
                        w_59 = x_59;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(s_59)), not_null(w_59));
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
ATerm input_option_0 (ATerm t)
{
  ATerm y_4 (ATerm t)
  {
    ATerm e_60 = NULL;
    e_60 = t;
    b_60 :
    if(!(match_string(e_60, "-i")))
      {
        if(!(match_string(e_60, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm z_4 (ATerm t)
  {
    ATerm h_60 = NULL;
    ATerm u_25;
    u_25 = t;
    {
      ATerm f_60 = NULL;
      ATerm g_60 = NULL;
      g_60 = t;
      if(((f_60 != NULL) && (f_60 != g_60)))
        _fail(g_60);
      else
        f_60 = g_60;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_v_25, not_null(f_60));
        t = set_config_0(t);
      }
    }
    t = u_25;
    {
      ATerm i_60 = NULL;
      i_60 = t;
      if(((h_60 != NULL) && (h_60 != i_60)))
        _fail(i_60);
      else
        h_60 = i_60;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(h_60));
    }
    return(t);
  }
  ATerm a_5 (ATerm t)
  {
    t = term_w_25;
    return(t);
  }
  t = ArgOption_3(t, y_4, z_4, a_5);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm x_25 = t;
  int y_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      LocalPopChoice(y_25);
    }
  else
    {
      t = x_25;
      {
        ATerm z_25 = t;
        int a_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0(t);
            LocalPopChoice(a_26);
          }
        else
          {
            t = z_25;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm m_60 = NULL;
  m_60 = t;
  t = SSL_table_destroy(not_null(m_60));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm q_60 = NULL;
  q_60 = t;
  t = SSL_exit(not_null(q_60));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm u_60 = NULL,v_60 = NULL,w_60 = NULL;
  u_60 = t;
  t_60 :
  if(((ATgetType(u_60) == AT_LIST) && ATisEmpty(u_60)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(u_60) == AT_LIST) && !(ATisEmpty(u_60))))
        {
          v_60 = ATgetFirst((ATermList) u_60);
          w_60 = (ATerm) ATgetNext((ATermList) u_60);
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
ATerm echo_0 (ATerm t)
{
  ATerm b_26;
  b_26 = t;
  {
    ATerm z_60 = NULL;
    ATerm c_61 = NULL;
    ATerm c_26 = t;
    int d_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        LocalPopChoice(d_26);
      }
    else
      {
        t = c_26;
        {
          ATerm a_61 = NULL;
          ATerm b_61 = NULL;
          b_61 = t;
          if(((a_61 != NULL) && (a_61 != b_61)))
            _fail(b_61);
          else
            a_61 = b_61;
          t = (ATerm) ATinsert(ATempty, not_null(a_61));
        }
      }
    {
      c_61 = t;
      if(((z_60 != NULL) && (z_60 != c_61)))
        _fail(c_61);
      else
        z_60 = c_61;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_e_26, not_null(z_60));
      t = printnl_0(t);
    }
  }
  t = b_26;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm v_87 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm h_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm l_61 = NULL,m_61 = NULL,n_61 = NULL;
  n_61 = t;
  k_61 :
  if(((ATgetType(n_61) == AT_LIST) && !(ATisEmpty(n_61))))
    {
      l_61 = ATgetFirst((ATermList) n_61);
      m_61 = (ATerm) ATgetNext((ATermList) n_61);
      {
        ATerm q_61 = NULL;
        t = not_null(m_61);
        {
          ATerm f_26;
          f_26 = t;
          {
            ATerm r_61 = NULL,t_61 = NULL,v_61 = NULL;
            ATerm g_26;
            g_26 = t;
            {
              ATerm s_61 = NULL;
              t = i_0(t);
              {
                s_61 = t;
                if(((r_61 != NULL) && (r_61 != s_61)))
                  _fail(s_61);
                else
                  r_61 = s_61;
              }
            }
            t = g_26;
            {
              ATerm u_61 = NULL;
              t = not_null(l_61);
              {
                t = h_0(t);
                {
                  u_61 = t;
                  if(((t_61 != NULL) && (t_61 != u_61)))
                    _fail(u_61);
                  else
                    t_61 = u_61;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(r_61)), not_null(t_61));
                {
                  v_61 = t;
                  if(((q_61 != NULL) && (q_61 != v_61)))
                    _fail(v_61);
                  else
                    q_61 = v_61;
                }
              }
            }
          }
          t = f_26;
          {
            ATerm b_5 (ATerm t)
            {
              t = not_null(q_61);
              return(t);
            }
            t = reverse_acc_2(t, h_0, b_5);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(n_61) == AT_LIST) && ATisEmpty(n_61)))
        {
          {
            t = term_s_18;
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
  ATerm c_5 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, c_5);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm u_87 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm l_63 (ATerm))
{
  ATerm g_62 = NULL,h_62 = NULL;
  g_62 = t;
  f_62 :
  if(match_cons(g_62, sym_Program_1))
    {
      h_62 = ATgetArgument(g_62, 0);
      {
        ATerm k_62 = NULL,m_62 = NULL;
        ATerm l_62 = NULL;
        t = SSLgetAnnotations(not_null(g_62));
        {
          l_62 = t;
          if(((k_62 != NULL) && (k_62 != l_62)))
            _fail(l_62);
          else
            k_62 = l_62;
        }
        {
          t = not_null(h_62);
          {
            ATerm o_62 = NULL;
            t = l_63(t);
            {
              m_62 = t;
              {
                ATerm p_62 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(m_62)), not_null(k_62));
                {
                  p_62 = t;
                  if(((o_62 != NULL) && (o_62 != p_62)))
                    _fail(p_62);
                  else
                    o_62 = p_62;
                }
                t = not_null(o_62);
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
  ATerm x_62 = NULL;
  ATerm l_26 = t;
  int m_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_62 = NULL;
      t = term_b_7;
      {
        t = get_config_0(t);
        {
          y_62 = t;
          if(((x_62 != NULL) && (x_62 != y_62)))
            _fail(y_62);
          else
            x_62 = y_62;
        }
      }
      LocalPopChoice(m_26);
    }
  else
    {
      t = l_26;
      {
        ATerm d_5 (ATerm t)
        {
          ATerm e_5 (ATerm t)
          {
            ATerm z_62 = NULL;
            z_62 = t;
            if(((x_62 != NULL) && (x_62 != z_62)))
              _fail(z_62);
            else
              x_62 = z_62;
            return(t);
          }
          t = Program_1(t, e_5);
          return(t);
        }
        t = fetch_1(t, d_5);
      }
    }
  {
    t = term_n_26;
    {
      t = echo_0(t);
      {
        t = term_q_26;
        {
          t = table_get_0(t);
          {
            ATerm f_5 (ATerm t)
            {
              t = (ATerm) ATempty;
              return(t);
            }
            t = reverse_acc_2(t, _id, f_5);
            {
              ATerm g_5 (ATerm t)
              {
                ATerm a_63 = NULL;
                ATerm b_63 = NULL;
                b_63 = t;
                if(((a_63 != NULL) && (a_63 != b_63)))
                  _fail(b_63);
                else
                  a_63 = b_63;
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(a_63)), term_s_26);
                  t = echo_0(t);
                }
                return(t);
              }
              t = map_1(t, g_5);
            }
          }
        }
      }
    }
  }
  return(t);
}
ATerm debug_0 (ATerm t)
{
  ATerm v_26;
  v_26 = t;
  {
    ATerm g_63 = NULL;
    ATerm h_63 = NULL;
    h_63 = t;
    if(((g_63 != NULL) && (g_63 != h_63)))
      _fail(h_63);
    else
      g_63 = h_63;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_k_6, (ATerm) ATinsert(ATempty, not_null(g_63)));
      t = printnl_0(t);
    }
  }
  t = v_26;
  return(t);
}
ATerm say_1 (ATerm t, ATerm w_82 (ATerm))
{
  ATerm x_26;
  x_26 = t;
  {
    t = w_82(t);
    t = debug_0(t);
  }
  t = x_26;
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm m_63 (ATerm))
{
  ATerm q_63 = NULL,r_63 = NULL;
  q_63 = t;
  p_63 :
  if(match_cons(q_63, sym_Undefined_1))
    {
      r_63 = ATgetArgument(q_63, 0);
      {
        ATerm u_63 = NULL,a_64 = NULL;
        ATerm v_63 = NULL;
        t = SSLgetAnnotations(not_null(q_63));
        {
          v_63 = t;
          if(((u_63 != NULL) && (u_63 != v_63)))
            _fail(v_63);
          else
            u_63 = v_63;
        }
        {
          t = not_null(r_63);
          {
            ATerm f_64 = NULL;
            t = m_63(t);
            {
              a_64 = t;
              {
                ATerm h_64 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(a_64)), not_null(u_63));
                {
                  h_64 = t;
                  if(((f_64 != NULL) && (f_64 != h_64)))
                    _fail(h_64);
                  else
                    f_64 = h_64;
                }
                t = not_null(f_64);
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
  ATerm q_64 = NULL;
  q_64 = t;
  p_64 :
  if(match_cons(q_64, sym_Help_0))
    {
      ATerm s_64 = NULL,u_64 = NULL;
      ATerm a_27;
      a_27 = t;
      {
        ATerm t_64 = NULL;
        t = SSLgetAnnotations(not_null(q_64));
        {
          t_64 = t;
          if(((s_64 != NULL) && (s_64 != t_64)))
            _fail(t_64);
          else
            s_64 = t_64;
        }
      }
      t = a_27;
      {
        ATerm v_64 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(s_64));
        {
          v_64 = t;
          if(((u_64 != NULL) && (u_64 != v_64)))
            _fail(v_64);
          else
            u_64 = v_64;
        }
        t = not_null(u_64);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm a_65 = NULL;
  a_65 = t;
  t = SSL_implode_string(not_null(a_65));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm b_27 = t;
  int c_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(c_27);
    }
  else
    {
      t = b_27;
      {
        ATerm f_65 = NULL,g_65 = NULL,h_65 = NULL;
        f_65 = t;
        e_65 :
        if(((ATgetType(f_65) == AT_LIST) && !(ATisEmpty(f_65))))
          {
            g_65 = ATgetFirst((ATermList) f_65);
            h_65 = (ATerm) ATgetNext((ATermList) f_65);
            {
              t = not_null(g_65);
              {
                ATerm h_5 (ATerm t)
                {
                  t = not_null(h_65);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, h_5);
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
ATerm conc_more_lists_0 (ATerm t)
{
  ATerm z_65 = NULL;
  ATerm b_66 = NULL;
  z_65 = t;
  {
    ATerm c_66 = NULL;
    ATerm e_66 = NULL,f_66 = NULL,g_66 = NULL;
    t = not_null(z_65);
    {
      c_66 = t;
      {
        t = SSL_explode_term(not_null(c_66));
        {
          e_66 = t;
          x_65 :
          if(match_cons(e_66, sym__2))
            {
              f_66 = ATgetArgument(e_66, 0);
              g_66 = ATgetArgument(e_66, 1);
              y_65 :
              if(match_string(f_66, ""))
                {
                  if(((b_66 != NULL) && (b_66 != g_66)))
                    _fail(g_66);
                  else
                    b_66 = g_66;
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
    {
      t = not_null(b_66);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm m_72 (ATerm))
{
  ATerm k_66 (ATerm t)
  {
    ATerm d_27 = t;
    int e_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, k_66);
        LocalPopChoice(e_27);
      }
    else
      {
        t = d_27;
        {
          t = Nil_0(t);
          t = m_72(t);
        }
      }
    return(t);
  }
  t = k_66(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm n_66 = NULL,o_66 = NULL,p_66 = NULL;
  n_66 = t;
  m_66 :
  if(match_cons(n_66, sym__2))
    {
      o_66 = ATgetArgument(n_66, 0);
      p_66 = ATgetArgument(n_66, 1);
      {
        t = not_null(o_66);
        {
          ATerm l_5 (ATerm t)
          {
            t = not_null(p_66);
            return(t);
          }
          t = at_end_1(t, l_5);
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
  ATerm f_27 = t;
  int g_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      LocalPopChoice(g_27);
    }
  else
    {
      t = f_27;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm u_66 = NULL;
  u_66 = t;
  t = SSL_explode_string(not_null(u_66));
  return(t);
}
ATerm _2 (ATerm t, ATerm j_54 (ATerm), ATerm k_54 (ATerm))
{
  ATerm d_67 = NULL,e_67 = NULL,f_67 = NULL;
  d_67 = t;
  c_67 :
  if(match_cons(d_67, sym__2))
    {
      e_67 = ATgetArgument(d_67, 0);
      f_67 = ATgetArgument(d_67, 1);
      {
        ATerm j_67 = NULL,l_67 = NULL;
        ATerm k_67 = NULL;
        t = SSLgetAnnotations(not_null(d_67));
        {
          k_67 = t;
          if(((j_67 != NULL) && (j_67 != k_67)))
            _fail(k_67);
          else
            j_67 = k_67;
        }
        {
          t = not_null(e_67);
          {
            ATerm n_67 = NULL;
            t = j_54(t);
            {
              l_67 = t;
              {
                t = not_null(f_67);
                {
                  ATerm p_67 = NULL;
                  t = k_54(t);
                  {
                    n_67 = t;
                    {
                      ATerm q_67 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(l_67), not_null(n_67)), not_null(j_67));
                      {
                        q_67 = t;
                        if(((p_67 != NULL) && (p_67 != q_67)))
                          _fail(q_67);
                        else
                          p_67 = q_67;
                      }
                      t = not_null(p_67);
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
ATerm conc_strings_0 (ATerm t)
{
  t = _2(t, explode_string_0, explode_string_0);
  {
    ATerm h_27 = t;
    int k_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = conc_two_lists_0(t);
        LocalPopChoice(k_27);
      }
    else
      {
        t = h_27;
        t = conc_more_lists_0(t);
      }
    t = implode_string_0(t);
  }
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm y_67 = NULL,z_67 = NULL,a_68 = NULL;
  y_67 = t;
  x_67 :
  if(match_cons(y_67, sym__2))
    {
      z_67 = ATgetArgument(y_67, 0);
      a_68 = ATgetArgument(y_67, 1);
      {
        ATerm p_27;
        p_27 = t;
        t = SSL_printnl(not_null(z_67), not_null(a_68));
        t = p_27;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm v_82 (ATerm))
{
  ATerm q_27;
  q_27 = t;
  {
    ATerm g_68 = NULL,i_68 = NULL;
    ATerm r_27;
    r_27 = t;
    {
      ATerm h_68 = NULL;
      t = v_82(t);
      {
        h_68 = t;
        if(((g_68 != NULL) && (g_68 != h_68)))
          _fail(h_68);
        else
          g_68 = h_68;
      }
    }
    t = r_27;
    {
      ATerm j_68 = NULL;
      j_68 = t;
      if(((i_68 != NULL) && (i_68 != j_68)))
        _fail(j_68);
      else
        i_68 = j_68;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_k_6, (ATerm) ATinsert(ATinsert(ATempty, not_null(i_68)), not_null(g_68)));
        t = printnl_0(t);
      }
    }
  }
  t = q_27;
  return(t);
}
ATerm map_1 (ATerm t, ATerm x_71 (ATerm))
{
  ATerm m_68 (ATerm t)
  {
    ATerm s_27 = t;
    int t_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(t_27);
      }
    else
      {
        t = s_27;
        t = Cons_2(t, x_71, m_68);
      }
    return(t);
  }
  t = m_68(t);
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm u_27 = t;
  int x_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(x_27);
    }
  else
    {
      t = u_27;
      {
        ATerm c_28 = t;
        int d_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_5 (ATerm t)
            {
              ATerm e_28 = t;
              int f_28 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = eval_config_0(t);
                  LocalPopChoice(f_28);
                }
              else
                {
                  t = e_28;
                  {
                  }
                }
              return(t);
            }
            t = map_1(t, m_5);
            LocalPopChoice(d_28);
          }
        else
          {
            t = c_28;
            {
              ATerm t_68 = NULL,u_68 = NULL,v_68 = NULL;
              t_68 = t;
              s_68 :
              if(match_cons(t_68, sym_Path_1))
                {
                  u_68 = ATgetArgument(t_68, 0);
                  t = not_null(u_68);
                }
              else
                {
                  if(match_cons(t_68, sym_Var_1))
                    {
                      u_68 = ATgetArgument(t_68, 0);
                      {
                        t = not_null(u_68);
                        {
                          ATerm g_28 = t;
                          int h_28 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(h_28);
                            }
                          else
                            {
                              t = g_28;
                              {
                                ATerm n_5 (ATerm t)
                                {
                                  t = term_k_28;
                                  return(t);
                                }
                                t = debug_1(t, n_5);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(t_68, sym_Prefix_2))
                        {
                          u_68 = ATgetArgument(t_68, 0);
                          v_68 = ATgetArgument(t_68, 1);
                          {
                            ATerm a_69 = NULL,c_69 = NULL;
                            ATerm p_28;
                            p_28 = t;
                            {
                              ATerm b_69 = NULL;
                              t = not_null(u_68);
                              {
                                t = eval_config_0(t);
                                {
                                  b_69 = t;
                                  if(((a_69 != NULL) && (a_69 != b_69)))
                                    _fail(b_69);
                                  else
                                    a_69 = b_69;
                                }
                              }
                            }
                            t = p_28;
                            {
                              ATerm d_69 = NULL;
                              t = not_null(v_68);
                              {
                                t = eval_config_0(t);
                                {
                                  d_69 = t;
                                  if(((c_69 != NULL) && (c_69 != d_69)))
                                    _fail(d_69);
                                  else
                                    c_69 = d_69;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(a_69), not_null(c_69));
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
  ATerm l_69 = NULL;
  l_69 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_q_28, not_null(l_69));
    {
      t = table_get_0(t);
      {
        ATerm r_28 = t;
        int s_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = eval_config_0(t);
            {
              ATerm t_28;
              t_28 = t;
              {
                ATerm n_69 = NULL;
                ATerm o_69 = NULL;
                o_69 = t;
                if(((n_69 != NULL) && (n_69 != o_69)))
                  _fail(o_69);
                else
                  n_69 = o_69;
                {
                  t = (ATerm) ATmakeAppl(sym__3, term_q_28, not_null(l_69), not_null(n_69));
                  t = table_put_0(t);
                }
              }
              t = t_28;
            }
            LocalPopChoice(s_28);
          }
        else
          {
            t = r_28;
            {
            }
          }
      }
    }
  }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm t_69 = NULL,u_69 = NULL,v_69 = NULL;
  t_69 = t;
  s_69 :
  if(match_cons(t_69, sym__2))
    {
      u_69 = ATgetArgument(t_69, 0);
      v_69 = ATgetArgument(t_69, 1);
      t = SSL_table_get(not_null(u_69), not_null(v_69));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm c_70 = NULL,d_70 = NULL,e_70 = NULL,f_70 = NULL;
  c_70 = t;
  b_70 :
  if(match_cons(c_70, sym__3))
    {
      d_70 = ATgetArgument(c_70, 0);
      e_70 = ATgetArgument(c_70, 1);
      f_70 = ATgetArgument(c_70, 2);
      {
        ATerm u_28;
        u_28 = t;
        {
          ATerm j_70 = NULL;
          ATerm k_70 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(d_70), not_null(e_70));
          {
            ATerm x_28 = t;
            int c_29 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(c_29);
              }
            else
              {
                t = x_28;
                t = (ATerm) ATempty;
              }
            {
              k_70 = t;
              if(((j_70 != NULL) && (j_70 != k_70)))
                _fail(k_70);
              else
                j_70 = k_70;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(d_70), not_null(e_70), (ATerm) ATinsert(CheckATermList(not_null(j_70)), not_null(f_70)));
            t = table_put_0(t);
          }
        }
        t = u_28;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm z_87 (ATerm))
{
  ATerm o_70 = NULL;
  ATerm p_70 = NULL;
  t = term_s_18;
  {
    t = z_87(t);
    {
      p_70 = t;
      if(((o_70 != NULL) && (o_70 != p_70)))
        _fail(p_70);
      else
        o_70 = p_70;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_o_26, term_p_26, not_null(o_70));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm))
{
  ATerm v_70 = NULL,w_70 = NULL,x_70 = NULL;
  v_70 = t;
  u_70 :
  if(match_string(v_70, "register-usage-info"))
    {
      t = register_usage_1(t, g_0);
    }
  else
    {
      if(((ATgetType(v_70) == AT_LIST) && !(ATisEmpty(v_70))))
        {
          w_70 = ATgetFirst((ATermList) v_70);
          x_70 = (ATerm) ATgetNext((ATermList) v_70);
          {
            ATerm a_71 = NULL;
            ATerm d_29;
            d_29 = t;
            {
              t = not_null(w_70);
              t = a_0(t);
            }
            t = d_29;
            {
              ATerm b_71 = NULL;
              t = term_s_18;
              {
                t = d_0(t);
                {
                  b_71 = t;
                  if(((a_71 != NULL) && (a_71 != b_71)))
                    _fail(b_71);
                  else
                    a_71 = b_71;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(x_70)), not_null(a_71));
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
  ATerm o_5 (ATerm t)
  {
    ATerm g_71 = NULL;
    g_71 = t;
    f_71 :
    if(!(match_string(g_71, "--help")))
      {
        if(!(match_string(g_71, "-h")))
          {
            if(!(match_string(g_71, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm p_5 (ATerm t)
  {
    t = term_f_29;
    {
      t = set_config_0(t);
      t = term_g_29;
    }
    return(t);
  }
  ATerm q_5 (ATerm t)
  {
    t = term_h_29;
    return(t);
  }
  t = Option_3(t, o_5, p_5, q_5);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm j_71 = NULL,k_71 = NULL,l_71 = NULL;
  j_71 = t;
  i_71 :
  if(((ATgetType(j_71) == AT_LIST) && !(ATisEmpty(j_71))))
    {
      k_71 = ATgetFirst((ATermList) j_71);
      l_71 = (ATerm) ATgetNext((ATermList) j_71);
      t = (ATerm) ATinsert(CheckATermList(not_null(l_71)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(k_71)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm s_55 (ATerm), ATerm t_55 (ATerm))
{
  ATerm a_72 = NULL,b_72 = NULL,c_72 = NULL;
  a_72 = t;
  z_71 :
  if(((ATgetType(a_72) == AT_LIST) && !(ATisEmpty(a_72))))
    {
      b_72 = ATgetFirst((ATermList) a_72);
      c_72 = (ATerm) ATgetNext((ATermList) a_72);
      {
        ATerm i_72 = NULL,k_72 = NULL;
        ATerm j_72 = NULL;
        t = SSLgetAnnotations(not_null(a_72));
        {
          j_72 = t;
          if(((i_72 != NULL) && (i_72 != j_72)))
            _fail(j_72);
          else
            i_72 = j_72;
        }
        {
          t = not_null(b_72);
          {
            ATerm o_72 = NULL;
            t = s_55(t);
            {
              k_72 = t;
              {
                t = not_null(c_72);
                {
                  ATerm s_72 = NULL;
                  t = t_55(t);
                  {
                    o_72 = t;
                    {
                      ATerm t_72 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(o_72)), not_null(k_72)), not_null(i_72));
                      {
                        t_72 = t;
                        if(((s_72 != NULL) && (s_72 != t_72)))
                          _fail(t_72);
                        else
                          s_72 = t_72;
                      }
                      t = not_null(s_72);
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
  ATerm h_73 = NULL;
  h_73 = t;
  g_73 :
  if(((ATgetType(h_73) == AT_LIST) && ATisEmpty(h_73)))
    {
      {
        ATerm j_73 = NULL,l_73 = NULL;
        ATerm k_29;
        k_29 = t;
        {
          ATerm k_73 = NULL;
          t = SSLgetAnnotations(not_null(h_73));
          {
            k_73 = t;
            if(((j_73 != NULL) && (j_73 != k_73)))
              _fail(k_73);
            else
              j_73 = k_73;
          }
        }
        t = k_29;
        {
          ATerm m_73 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(j_73));
          {
            m_73 = t;
            if(((l_73 != NULL) && (l_73 != m_73)))
              _fail(m_73);
            else
              l_73 = m_73;
          }
          t = not_null(l_73);
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
  ATerm s_73 = NULL,t_73 = NULL,u_73 = NULL;
  s_73 = t;
  r_73 :
  if(match_cons(s_73, sym__2))
    {
      t_73 = ATgetArgument(s_73, 0);
      u_73 = ATgetArgument(s_73, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_q_28, not_null(t_73), not_null(u_73));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm x_87 (ATerm))
{
  ATerm p_29;
  p_29 = t;
  {
    ATerm q_29 = t;
    int r_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_s_29;
        t = x_87(t);
        LocalPopChoice(r_29);
      }
    else
      {
        t = q_29;
        {
        }
      }
  }
  t = p_29;
  {
    ATerm r_5 (ATerm t)
    {
      ATerm c_74 = NULL;
      ATerm v_29;
      v_29 = t;
      {
        ATerm a_74 = NULL;
        ATerm b_74 = NULL;
        b_74 = t;
        if(((a_74 != NULL) && (a_74 != b_74)))
          _fail(b_74);
        else
          a_74 = b_74;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_b_7, not_null(a_74));
          t = set_config_0(t);
        }
      }
      t = v_29;
      {
        ATerm d_74 = NULL;
        d_74 = t;
        if(((c_74 != NULL) && (c_74 != d_74)))
          _fail(d_74);
        else
          c_74 = d_74;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(c_74));
      }
      return(t);
    }
    ATerm s_5 (ATerm t)
    {
      ATerm w_29 = t;
      int x_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm c_30 = t;
          int d_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(d_30);
            }
          else
            {
              t = c_30;
              {
                t = x_87(t);
                t = Cons_2(t, _id, s_5);
              }
            }
          LocalPopChoice(x_29);
        }
      else
        {
          t = w_29;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, r_5, s_5);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm j_74 = NULL,k_74 = NULL,l_74 = NULL;
  ATerm g_30;
  g_30 = t;
  {
    ATerm m_74 = NULL,n_74 = NULL,o_74 = NULL,p_74 = NULL;
    m_74 = t;
    i_74 :
    if(match_cons(m_74, sym__3))
      {
        n_74 = ATgetArgument(m_74, 0);
        o_74 = ATgetArgument(m_74, 1);
        p_74 = ATgetArgument(m_74, 2);
        {
          if(((j_74 != NULL) && (j_74 != n_74)))
            _fail(n_74);
          else
            j_74 = n_74;
          {
            if(((k_74 != NULL) && (k_74 != o_74)))
              _fail(o_74);
            else
              k_74 = o_74;
            {
              if(((l_74 != NULL) && (l_74 != p_74)))
                _fail(p_74);
              else
                l_74 = p_74;
              t = SSL_table_put(not_null(j_74), not_null(k_74), not_null(l_74));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = g_30;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm w_87 (ATerm))
{
  ATerm s_74 = NULL;
  ATerm h_30;
  h_30 = t;
  {
    t = term_i_30;
    t = table_put_0(t);
  }
  t = h_30;
  {
    ATerm t_5 (ATerm t)
    {
      ATerm j_30 = t;
      int m_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = w_87(t);
          LocalPopChoice(m_30);
        }
      else
        {
          t = j_30;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, t_5);
    {
      ATerm n_30 = t;
      int o_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm t_30;
          t_30 = t;
          {
            ATerm u_30 = t;
            int v_30 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = term_e_29;
                t = get_config_0(t);
                LocalPopChoice(v_30);
              }
            else
              {
                t = u_30;
                t = fetch_1(t, Help_0);
              }
          }
          t = t_30;
          {
            t = system_usage_0(t);
            {
              t = term_r_6;
              t = exit_0(t);
            }
          }
          LocalPopChoice(o_30);
        }
      else
        {
          t = n_30;
          {
            ATerm a_31 = t;
            int b_31 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm u_5 (ATerm t)
                {
                  ATerm v_5 (ATerm t)
                  {
                    ATerm t_74 = NULL;
                    t_74 = t;
                    if(((s_74 != NULL) && (s_74 != t_74)))
                      _fail(t_74);
                    else
                      s_74 = t_74;
                    return(t);
                  }
                  t = Undefined_1(t, v_5);
                  return(t);
                }
                t = fetch_1(t, u_5);
                {
                  ATerm w_5 (ATerm t)
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(s_74)), term_c_31);
                    return(t);
                  }
                  t = say_1(t, w_5);
                  {
                    t = system_usage_0(t);
                    {
                      t = term_m_6;
                      t = exit_0(t);
                    }
                  }
                }
                LocalPopChoice(b_31);
              }
            else
              {
                t = a_31;
                {
                }
              }
          }
        }
      {
        ATerm d_31;
        d_31 = t;
        {
          t = term_o_26;
          t = table_destroy_0(t);
        }
        t = d_31;
      }
    }
  }
  return(t);
}
ATerm Abox_2_latex_0 (ATerm t)
{
  ATerm o_75 = NULL;
  ATerm q_75 = NULL,r_75 = NULL;
  ATerm x_5 (ATerm t)
  {
    ATerm e_31 = t;
    int f_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = io_options_0(t);
        LocalPopChoice(f_31);
      }
    else
      {
        t = e_31;
        {
          ATerm g_31 = t;
          int j_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm z_5 (ATerm t)
              {
                ATerm i_75 = NULL;
                i_75 = t;
                v_74 :
                if(!(match_string(i_75, "-t")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm a_6 (ATerm t)
              {
                ATerm j_75 = NULL;
                j_75 = t;
                t = (ATerm) ATmakeAppl(sym_LatexTable_1, not_null(j_75));
                return(t);
              }
              t = ArgOption_2(t, z_5, a_6);
              LocalPopChoice(j_31);
            }
          else
            {
              t = g_31;
              {
                ATerm b_6 (ATerm t)
                {
                  ATerm l_75 = NULL;
                  l_75 = t;
                  x_74 :
                  if(!(match_string(l_75, "-w")))
                    {
                      _fail(t);
                    }
                  return(t);
                }
                ATerm c_6 (ATerm t)
                {
                  ATerm m_75 = NULL;
                  m_75 = t;
                  t = (ATerm) ATmakeAppl(sym_Width_1, not_null(m_75));
                  return(t);
                }
                t = ArgOption_2(t, b_6, c_6);
              }
            }
        }
      }
    return(t);
  }
  t = parse_options_1(t, x_5);
  {
    o_75 = t;
    {
      ATerm k_31 = t;
      int l_31 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = need_help_1(t, usage_0);
          LocalPopChoice(l_31);
        }
      else
        {
          t = k_31;
          {
            ATerm o_31 = t;
            int p_31 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm q_31;
                q_31 = t;
                {
                  ATerm t_31 = t;
                  int u_31 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm d_6 (ATerm t)
                      {
                        ATerm s_75 = NULL,t_75 = NULL;
                        s_75 = t;
                        b_75 :
                        if(match_cons(s_75, sym_Output_1))
                          {
                            t_75 = ATgetArgument(s_75, 0);
                            {
                              if(((r_75 != NULL) && (r_75 != t_75)))
                                _fail(t_75);
                              else
                                r_75 = t_75;
                              {
                                t = not_null(r_75);
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
                      t = fetch_1(t, d_6);
                      LocalPopChoice(u_31);
                    }
                  else
                    {
                      t = t_31;
                      {
                        ATerm u_75 = NULL;
                        t = term_e_26;
                        {
                          u_75 = t;
                          if(((r_75 != NULL) && (r_75 != u_75)))
                            _fail(u_75);
                          else
                            r_75 = u_75;
                        }
                      }
                    }
                }
                t = q_31;
                {
                  ATerm v_31;
                  v_31 = t;
                  {
                    ATerm e_6 (ATerm t)
                    {
                      ATerm v_75 = NULL,w_75 = NULL;
                      v_75 = t;
                      e_75 :
                      if(match_cons(v_75, sym_LatexTable_1))
                        {
                          w_75 = ATgetArgument(v_75, 0);
                          t = not_null(w_75);
                        }
                      else
                        {
                          _fail(t);
                        }
                      return(t);
                    }
                    t = collect_om_1(t, e_6);
                    t = load_tables_0(t);
                  }
                  t = v_31;
                  {
                    t = input_file_0(t);
                    {
                      t = Snd_0(t);
                      {
                        ATerm w_31 = t;
                        int z_31 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm a_32;
                            a_32 = t;
                            {
                              t = not_null(o_75);
                              {
                                ATerm f_6 (ATerm t)
                                {
                                  ATerm y_75 = NULL,z_75 = NULL;
                                  y_75 = t;
                                  g_75 :
                                  if(match_cons(y_75, sym_Width_1))
                                    {
                                      z_75 = ATgetArgument(y_75, 0);
                                      if(((q_75 != NULL) && (q_75 != z_75)))
                                        _fail(z_75);
                                      else
                                        q_75 = z_75;
                                    }
                                  else
                                    {
                                      _fail(t);
                                    }
                                  return(t);
                                }
                                t = fetch_1(t, f_6);
                              }
                            }
                            t = a_32;
                            {
                              ATerm g_6 (ATerm t)
                              {
                                t = not_null(q_75);
                                return(t);
                              }
                              t = abox2latex_1(t, g_6);
                            }
                            LocalPopChoice(z_31);
                          }
                        else
                          {
                            t = w_31;
                            t = abox2latex_0(t);
                          }
                        {
                          ATerm h_6 (ATerm t)
                          {
                            ATerm b_32 = t;
                            int c_32 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = is_string_0(t);
                                {
                                  ATerm d_32;
                                  d_32 = t;
                                  {
                                    ATerm i_6 (ATerm t)
                                    {
                                      t = not_null(r_75);
                                      return(t);
                                    }
                                    ATerm j_6 (ATerm t)
                                    {
                                      ATerm a_76 = NULL;
                                      a_76 = t;
                                      t = (ATerm) ATinsert(ATempty, not_null(a_76));
                                      return(t);
                                    }
                                    t = split_2(t, i_6, j_6);
                                    t = print_0(t);
                                  }
                                  t = d_32;
                                }
                                LocalPopChoice(c_32);
                              }
                            else
                              {
                                t = b_32;
                                {
                                }
                              }
                            return(t);
                          }
                          t = topdown_1(t, h_6);
                          t = report_success_0(t);
                        }
                      }
                    }
                  }
                }
                LocalPopChoice(p_31);
              }
            else
              {
                t = o_31;
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
