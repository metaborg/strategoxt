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
Symbol sym_EpochTime_1;
Symbol sym_ComponentTime_3;
Symbol sym_DayTime_3;
Symbol sym_Date_3;
Symbol sym_Dupl_2;
Symbol sym_January_0;
Symbol sym_February_0;
Symbol sym_March_0;
Symbol sym_April_0;
Symbol sym_May_0;
Symbol sym_June_0;
Symbol sym_July_0;
Symbol sym_August_0;
Symbol sym_September_0;
Symbol sym_October_0;
Symbol sym_November_0;
Symbol sym_December_0;
Symbol sym_Sunday_0;
Symbol sym_Monday_0;
Symbol sym_Tuesday_0;
Symbol sym_Wednesday_0;
Symbol sym_Thursday_0;
Symbol sym_Friday_0;
Symbol sym_Saturday_0;
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
  sym_EpochTime_1 = ATmakeSymbol("EpochTime", 1, ATfalse);
  ATprotectSymbol(sym_EpochTime_1);
  sym_ComponentTime_3 = ATmakeSymbol("ComponentTime", 3, ATfalse);
  ATprotectSymbol(sym_ComponentTime_3);
  sym_DayTime_3 = ATmakeSymbol("DayTime", 3, ATfalse);
  ATprotectSymbol(sym_DayTime_3);
  sym_Date_3 = ATmakeSymbol("Date", 3, ATfalse);
  ATprotectSymbol(sym_Date_3);
  sym_Dupl_2 = ATmakeSymbol("Dupl", 2, ATfalse);
  ATprotectSymbol(sym_Dupl_2);
  sym_January_0 = ATmakeSymbol("January", 0, ATfalse);
  ATprotectSymbol(sym_January_0);
  sym_February_0 = ATmakeSymbol("February", 0, ATfalse);
  ATprotectSymbol(sym_February_0);
  sym_March_0 = ATmakeSymbol("March", 0, ATfalse);
  ATprotectSymbol(sym_March_0);
  sym_April_0 = ATmakeSymbol("April", 0, ATfalse);
  ATprotectSymbol(sym_April_0);
  sym_May_0 = ATmakeSymbol("May", 0, ATfalse);
  ATprotectSymbol(sym_May_0);
  sym_June_0 = ATmakeSymbol("June", 0, ATfalse);
  ATprotectSymbol(sym_June_0);
  sym_July_0 = ATmakeSymbol("July", 0, ATfalse);
  ATprotectSymbol(sym_July_0);
  sym_August_0 = ATmakeSymbol("August", 0, ATfalse);
  ATprotectSymbol(sym_August_0);
  sym_September_0 = ATmakeSymbol("September", 0, ATfalse);
  ATprotectSymbol(sym_September_0);
  sym_October_0 = ATmakeSymbol("October", 0, ATfalse);
  ATprotectSymbol(sym_October_0);
  sym_November_0 = ATmakeSymbol("November", 0, ATfalse);
  ATprotectSymbol(sym_November_0);
  sym_December_0 = ATmakeSymbol("December", 0, ATfalse);
  ATprotectSymbol(sym_December_0);
  sym_Sunday_0 = ATmakeSymbol("Sunday", 0, ATfalse);
  ATprotectSymbol(sym_Sunday_0);
  sym_Monday_0 = ATmakeSymbol("Monday", 0, ATfalse);
  ATprotectSymbol(sym_Monday_0);
  sym_Tuesday_0 = ATmakeSymbol("Tuesday", 0, ATfalse);
  ATprotectSymbol(sym_Tuesday_0);
  sym_Wednesday_0 = ATmakeSymbol("Wednesday", 0, ATfalse);
  ATprotectSymbol(sym_Wednesday_0);
  sym_Thursday_0 = ATmakeSymbol("Thursday", 0, ATfalse);
  ATprotectSymbol(sym_Thursday_0);
  sym_Friday_0 = ATmakeSymbol("Friday", 0, ATfalse);
  ATprotectSymbol(sym_Friday_0);
  sym_Saturday_0 = ATmakeSymbol("Saturday", 0, ATfalse);
  ATprotectSymbol(sym_Saturday_0);
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
ATerm term_m_31;
ATerm term_o_30;
ATerm term_c_30;
ATerm term_r_29;
ATerm term_q_29;
ATerm term_p_29;
ATerm term_k_29;
ATerm term_u_28;
ATerm term_s_28;
ATerm term_h_27;
ATerm term_g_27;
ATerm term_f_27;
ATerm term_e_27;
ATerm term_z_26;
ATerm term_s_26;
ATerm term_i_26;
ATerm term_h_26;
ATerm term_e_26;
ATerm term_d_26;
ATerm term_c_26;
ATerm term_b_26;
ATerm term_y_25;
ATerm term_x_25;
ATerm term_r_25;
ATerm term_q_25;
ATerm term_p_25;
ATerm term_n_25;
ATerm term_m_25;
ATerm term_i_25;
ATerm term_h_25;
ATerm term_g_25;
ATerm term_d_25;
ATerm term_c_25;
ATerm term_a_25;
ATerm term_z_24;
ATerm term_y_24;
ATerm term_x_24;
ATerm term_w_24;
ATerm term_q_24;
ATerm term_p_24;
ATerm term_n_24;
ATerm term_l_24;
ATerm term_i_24;
ATerm term_u_23;
ATerm term_r_23;
ATerm term_y_22;
ATerm term_w_22;
ATerm term_p_22;
ATerm term_s_20;
ATerm term_r_20;
ATerm term_q_20;
ATerm term_p_20;
ATerm term_e_20;
ATerm term_l_19;
ATerm term_t_18;
ATerm term_r_18;
ATerm term_l_18;
ATerm term_e_18;
ATerm term_m_17;
ATerm term_e_17;
ATerm term_t_16;
ATerm term_f_16;
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
ATerm term_s_14;
ATerm term_j_13;
ATerm term_i_13;
ATerm term_x_11;
ATerm term_w_11;
ATerm term_t_11;
ATerm term_q_11;
ATerm term_n_11;
ATerm term_e_11;
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
ATerm term_e_7;
ATerm term_d_7;
ATerm term_c_7;
ATerm term_a_7;
ATerm term_s_6;
ATerm term_n_6;
ATerm term_m_6;
ATerm term_l_6;
void init_constant_terms (void)
{
  ATprotect(&(term_l_6));
  term_l_6 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_m_6));
  term_m_6 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_n_6));
  term_n_6 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_s_6));
  term_s_6 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_a_7));
  term_a_7 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_c_7));
  term_c_7 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_d_7));
  term_d_7 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_e_7));
  term_e_7 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_c_8));
  term_c_8 = (ATerm) ATmakeAppl(ATmakeSymbol("\\\ncopies{", 0, ATtrue));
  ATprotect(&(term_h_8));
  term_h_8 = (ATerm) ATmakeAppl(ATmakeSymbol("}{", 0, ATtrue));
  ATprotect(&(term_i_8));
  term_i_8 = (ATerm) ATmakeAppl(ATmakeSymbol("}%", 0, ATtrue));
  ATprotect(&(term_j_8));
  term_j_8 = (ATerm) ATmakeAppl(ATmakeSymbol("\\begin{LBOX}{=}%\n", 0, ATtrue));
  ATprotect(&(term_k_8));
  term_k_8 = (ATerm) ATmakeAppl(ATmakeSymbol("%\n\\end{LBOX}%\n", 0, ATtrue));
  ATprotect(&(term_l_8));
  term_l_8 = (ATerm) ATmakeAppl(ATmakeSymbol("\\begin{LBOX}{", 0, ATtrue));
  ATprotect(&(term_m_8));
  term_m_8 = (ATerm) ATmakeAppl(ATmakeSymbol("}%\n", 0, ATtrue));
  ATprotect(&(term_p_8));
  term_p_8 = (ATerm) ATmakeAppl(ATmakeSymbol("\\boxlabel{", 0, ATtrue));
  ATprotect(&(term_u_8));
  term_u_8 = (ATerm) ATmakeAppl(ATmakeSymbol("}", 0, ATtrue));
  ATprotect(&(term_v_8));
  term_v_8 = (ATerm) ATmakeAppl(ATmakeSymbol("\\boxref{", 0, ATtrue));
  ATprotect(&(term_w_8));
  term_w_8 = (ATerm) ATmakeAppl(ATmakeSymbol("\\KWf{", 0, ATtrue));
  ATprotect(&(term_x_8));
  term_x_8 = (ATerm) ATmakeAppl(ATmakeSymbol("\\VARf{", 0, ATtrue));
  ATprotect(&(term_y_8));
  term_y_8 = (ATerm) ATmakeAppl(ATmakeSymbol("\\NUMf{", 0, ATtrue));
  ATprotect(&(term_z_8));
  term_z_8 = (ATerm) ATmakeAppl(ATmakeSymbol("\\MATHf{", 0, ATtrue));
  ATprotect(&(term_c_9));
  term_c_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\\textsf{", 0, ATtrue));
  ATprotect(&(term_h_9));
  term_h_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\\textrm{", 0, ATtrue));
  ATprotect(&(term_i_9));
  term_i_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\\texttt{", 0, ATtrue));
  ATprotect(&(term_j_9));
  term_j_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\\textmd{", 0, ATtrue));
  ATprotect(&(term_k_9));
  term_k_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\\textbf{", 0, ATtrue));
  ATprotect(&(term_l_9));
  term_l_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\\textup{", 0, ATtrue));
  ATprotect(&(term_m_9));
  term_m_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\\textit{", 0, ATtrue));
  ATprotect(&(term_p_9));
  term_p_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\\textsc{", 0, ATtrue));
  ATprotect(&(term_u_9));
  term_u_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\\textsl{", 0, ATtrue));
  ATprotect(&(term_v_9));
  term_v_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\\emph{", 0, ATtrue));
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\\tiny{", 0, ATtrue));
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\\scriptsize{", 0, ATtrue));
  ATprotect(&(term_y_9));
  term_y_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\\footnotesize{", 0, ATtrue));
  ATprotect(&(term_z_9));
  term_z_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\\small{", 0, ATtrue));
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\normalsize{", 0, ATtrue));
  ATprotect(&(term_h_10));
  term_h_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\large{", 0, ATtrue));
  ATprotect(&(term_i_10));
  term_i_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\Large{", 0, ATtrue));
  ATprotect(&(term_j_10));
  term_j_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\LARGE{", 0, ATtrue));
  ATprotect(&(term_k_10));
  term_k_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\huge{", 0, ATtrue));
  ATprotect(&(term_m_10));
  term_m_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\Huge{", 0, ATtrue));
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\textcolor{", 0, ATtrue));
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\begin{boxenv}%\n", 0, ATtrue));
  ATprotect(&(term_q_10));
  term_q_10 = (ATerm) ATmakeAppl(ATmakeSymbol("%\n\\end{boxenv}\n", 0, ATtrue));
  ATprotect(&(term_r_10));
  term_r_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\begin{boxenv}{", 0, ATtrue));
  ATprotect(&(term_s_10));
  term_s_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\begin{HBOX}{", 0, ATtrue));
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(ATmakeSymbol("%\n\\end{HBOX}%\n", 0, ATtrue));
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\begin{VBOX}{", 0, ATtrue));
  ATprotect(&(term_v_10));
  term_v_10 = (ATerm) ATmakeAppl(ATmakeSymbol("%\n\\end{VBOX}%\n", 0, ATtrue));
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\begin{HVBOX}{", 0, ATtrue));
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeAppl(ATmakeSymbol("%\n\\end{HVBOX}%\n", 0, ATtrue));
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\begin{ABOX}{", 0, ATtrue));
  ATprotect(&(term_z_10));
  term_z_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\crcr%\n\\end{ABOX}%\n", 0, ATtrue));
  ATprotect(&(term_a_11));
  term_a_11 = (ATerm) ATmakeAppl(ATmakeSymbol("\\begin{ALTBOX}{%\n", 0, ATtrue));
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeAppl(ATmakeSymbol("%\n}", 0, ATtrue));
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeAppl(ATmakeSymbol("%\n}%\n\\end{ALTBOX}%\n", 0, ATtrue));
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeAppl(ATmakeSymbol("%\n\\begin{latextext}%\n", 0, ATtrue));
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeAppl(ATmakeSymbol("%\n\\end{latextext}%\n", 0, ATtrue));
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeAppl(ATmakeSymbol("\\hfill#\\hfill", 0, ATtrue));
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(ATmakeSymbol("\\hfill#", 0, ATtrue));
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeAppl(ATmakeSymbol("#\\hfill", 0, ATtrue));
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeAppl(ATmakeSymbol("\\cr", 0, ATtrue));
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeAppl(ATmakeSymbol("&", 0, ATtrue));
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeInt(39);
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeInt(96);
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeAppl(ATmakeSymbol("latex-abbrevs", 0, ATtrue));
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeAppl(ATmakeSymbol("\\boxspace{}", 0, ATtrue));
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(ATmakeSymbol("\\#", 0, ATtrue));
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeAppl(ATmakeSymbol("\\$", 0, ATtrue));
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeAppl(ATmakeSymbol("\\%", 0, ATtrue));
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeAppl(ATmakeSymbol("\\&", 0, ATtrue));
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeAppl(ATmakeSymbol("\\mbox{-}", 0, ATtrue));
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeAppl(ATmakeSymbol("\\ensuremath{<}", 0, ATtrue));
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(ATmakeSymbol("\\ensuremath{>}", 0, ATtrue));
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeAppl(ATmakeSymbol("\\ensuremath{\\backslash}", 0, ATtrue));
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeAppl(ATmakeSymbol("\\^{}", 0, ATtrue));
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(ATmakeSymbol("\\_", 0, ATtrue));
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeAppl(ATmakeSymbol("\\{", 0, ATtrue));
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeAppl(ATmakeSymbol("\\ensuremath{\\vert}", 0, ATtrue));
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeAppl(ATmakeSymbol("\\}", 0, ATtrue));
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeAppl(ATmakeSymbol("\\~{}", 0, ATtrue));
  ATprotect(&(term_t_16));
  term_t_16 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeAppl(ATmakeSymbol("~", 0, ATtrue));
  ATprotect(&(term_m_17));
  term_m_17 = (ATerm) ATmakeAppl(ATmakeSymbol("1", 0, ATtrue));
  ATprotect(&(term_e_18));
  term_e_18 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_l_18));
  term_l_18 = (ATerm) ATmakeAppl(ATmakeSymbol("dissuasive library strategy: ", 0, ATtrue));
  ATprotect(&(term_r_18));
  term_r_18 = (ATerm) ATmakeAppl(ATmakeSymbol("separate-by/1; Use separate-by/0 and term wrap patterns: <separate-by> (a, <id>)", 0, ATtrue));
  ATprotect(&(term_t_18));
  term_t_18 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_l_19));
  term_l_19 = (ATerm) ATmakeAppl(ATmakeSymbol("0", 0, ATtrue));
  ATprotect(&(term_e_20));
  term_e_20 = (ATerm) ATmakeAppl(sym_CSEP_0);
  ATprotect(&(term_p_20));
  term_p_20 = (ATerm) ATmakeAppl(sym_L_0);
  ATprotect(&(term_q_20));
  term_q_20 = (ATerm) ATmakeAppl(sym_C_0);
  ATprotect(&(term_r_20));
  term_r_20 = (ATerm) ATmakeAppl(sym_R_0);
  ATprotect(&(term_s_20));
  term_s_20 = (ATerm) ATmakeAppl(sym_EOR_0);
  ATprotect(&(term_p_22));
  term_p_22 = (ATerm) ATmakeInt(61);
  ATprotect(&(term_w_22));
  term_w_22 = (ATerm) ATmakeAppl(ATmakeSymbol("\\ ", 0, ATtrue));
  ATprotect(&(term_y_22));
  term_y_22 = (ATerm) ATmakeAppl(ATmakeSymbol("\n\n", 0, ATtrue));
  ATprotect(&(term_r_23));
  term_r_23 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_u_23));
  term_u_23 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: file doesn't exist or doesn't contain a valid term: ", 0, ATtrue));
  ATprotect(&(term_i_24));
  term_i_24 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_l_24));
  term_l_24 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file>(file, mode)", 0, ATtrue));
  ATprotect(&(term_n_24));
  term_n_24 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_p_24));
  term_p_24 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_q_24));
  term_q_24 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-i abox] [-o latex] [-t table ... ] [-w width] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_w_24));
  term_w_24 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_x_24));
  term_x_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_y_24));
  term_y_24 = (ATerm) ATmakeAppl(sym__2, term_x_24, term_t_18);
  ATprotect(&(term_z_24));
  term_z_24 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_a_25));
  term_a_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_c_25));
  term_c_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_d_25));
  term_d_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_g_25));
  term_g_25 = (ATerm) ATmakeAppl(sym__2, term_a_7, term_s_6);
  ATprotect(&(term_h_25));
  term_h_25 = (ATerm) ATmakeAppl(sym_Verbose_1, term_s_6);
  ATprotect(&(term_i_25));
  term_i_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_m_25));
  term_m_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_n_25));
  term_n_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_p_25));
  term_p_25 = (ATerm) ATmakeAppl(sym__2, term_n_25, term_t_18);
  ATprotect(&(term_q_25));
  term_q_25 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_r_25));
  term_r_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_x_25));
  term_x_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_y_25));
  term_y_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_b_26));
  term_b_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_c_26));
  term_c_26 = (ATerm) ATmakeAppl(sym__2, term_b_26, term_t_18);
  ATprotect(&(term_d_26));
  term_d_26 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_e_26));
  term_e_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_h_26));
  term_h_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_i_26));
  term_i_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_s_26));
  term_s_26 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_z_26));
  term_z_26 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_e_27));
  term_e_27 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_f_27));
  term_f_27 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_g_27));
  term_g_27 = (ATerm) ATmakeAppl(sym__2, term_e_27, term_f_27);
  ATprotect(&(term_h_27));
  term_h_27 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_s_28));
  term_s_28 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_u_28));
  term_u_28 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_k_29));
  term_k_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_p_29));
  term_p_29 = (ATerm) ATmakeAppl(sym__2, term_k_29, term_t_18);
  ATprotect(&(term_q_29));
  term_q_29 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_r_29));
  term_r_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_c_30));
  term_c_30 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_o_30));
  term_o_30 = (ATerm) ATmakeAppl(sym__3, term_e_27, term_f_27, (ATerm) ATempty);
  ATprotect(&(term_m_31));
  term_m_31 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm report_failure_0 (ATerm);
ATerm ticks_to_seconds_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm g_81 (ATerm), ATerm h_81 (ATerm));
ATerm crush_2 (ATerm, ATerm e_80 (ATerm), ATerm f_80 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm m_88 (ATerm));
ATerm report_success_0 (ATerm);
ATerm print_0 (ATerm);
ATerm split_2 (ATerm, ATerm v_82 (ATerm), ATerm w_82 (ATerm));
ATerm is_string_0 (ATerm);
ATerm try_1 (ATerm, ATerm b_67 (ATerm));
ATerm topdown_1 (ATerm, ATerm p_68 (ATerm));
ATerm abox2latex_0 (ATerm);
ATerm CSEP_0 (ATerm);
ATerm EOR_0 (ATerm);
ATerm L_0 (ATerm);
ATerm R_0 (ATerm);
ATerm C_0 (ATerm);
ATerm int_to_string_0 (ATerm);
ATerm is_int_0 (ATerm);
ATerm Latex2text_0 (ATerm);
ATerm bottomup_1 (ATerm, ATerm q_68 (ATerm));
ATerm latex2text_0 (ATerm);
ATerm flat_list_0 (ATerm);
ATerm replace_quotes_0 (ATerm);
ATerm listtd_1 (ATerm, ATerm z_75 (ATerm));
ATerm latex_string_0 (ATerm);
ATerm Tl_0 (ATerm);
ATerm remove_trailing_1 (ATerm, ATerm y_66 (ATerm));
ATerm at_suffix_1 (ATerm, ATerm l_75 (ATerm));
ATerm LatexComment_0 (ATerm);
ATerm make_latex_comment_0 (ATerm);
ATerm MATH_0 (ATerm);
ATerm NUM_0 (ATerm);
ATerm VAR_0 (ATerm);
ATerm KW_0 (ATerm);
ATerm CL_0 (ATerm);
ATerm FFID_2 (ATerm, ATerm c_59 (ATerm), ATerm d_59 (ATerm));
ATerm SZ_0 (ATerm);
ATerm SH_0 (ATerm);
ATerm SE_0 (ATerm);
ATerm FM_0 (ATerm);
ATerm toh_0 (ATerm);
ATerm HS_0 (ATerm);
ATerm Hspace_0 (ATerm);
ATerm separate_by_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm n_88 (ATerm));
ATerm dissuader_1 (ATerm, ATerm y_85 (ATerm));
ATerm separate_by_1 (ATerm, ATerm o_74 (ATerm));
ATerm filter_1 (ATerm, ATerm j_82 (ATerm));
ATerm IS_0 (ATerm);
ATerm Ispace_0 (ATerm);
ATerm VS_0 (ATerm);
ATerm SOpt_2 (ATerm, ATerm f_58 (ATerm), ATerm g_58 (ATerm));
ATerm Vspace_0 (ATerm);
ATerm C_2 (ATerm, ATerm l_59 (ATerm), ATerm m_59 (ATerm));
ATerm table_row_0 (ATerm);
ATerm MkRows_0 (ATerm);
ATerm at_last_1 (ATerm, ATerm s_75 (ATerm));
ATerm table_def_0 (ATerm);
ATerm subt_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm while_not_2 (ATerm, ATerm g_68 (ATerm), ATerm h_68 (ATerm));
ATerm for_3 (ATerm, ATerm j_68 (ATerm), ATerm k_68 (ATerm), ATerm l_68 (ATerm));
ATerm copy_0 (ATerm);
ATerm R_2 (ATerm, ATerm u_58 (ATerm), ATerm v_58 (ATerm));
ATerm construct_rows_0 (ATerm);
ATerm Abox2latex_0 (ATerm);
ATerm abox2latex_1 (ATerm, ATerm u_66 (ATerm));
ATerm option_defined_1 (ATerm, ATerm p_89 (ATerm));
ATerm Snd_0 (ATerm);
ATerm input_file_0 (ATerm);
ATerm StoreEntries_0 (ATerm);
ATerm ReadFromFile_0 (ATerm);
ATerm table_create_0 (ATerm);
ATerm load_tables_0 (ATerm);
ATerm eq_0 (ATerm);
ATerm fetch_1 (ATerm, ATerm b_75 (ATerm));
ATerm HdMember_p__2 (ATerm, ATerm t_80 (ATerm), ATerm u_80 (ATerm));
ATerm union_1 (ATerm, ATerm p_80 (ATerm));
ATerm union_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm i_81 (ATerm), ATerm j_81 (ATerm), ATerm k_81 (ATerm));
ATerm crush_3 (ATerm, ATerm g_80 (ATerm), ATerm h_80 (ATerm), ATerm i_80 (ATerm));
ATerm collect_om_1 (ATerm, ATerm f_79 (ATerm));
ATerm collect_1 (ATerm, ATerm h_79 (ATerm));
ATerm obsolete_1 (ATerm, ATerm x_85 (ATerm));
ATerm open_file_0 (ATerm);
ATerm usage_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm s_86 (ATerm));
ATerm ArgOption_2 (ATerm, ATerm i_90 (ATerm), ATerm j_90 (ATerm));
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
ATerm long_description_1 (ATerm, ATerm q_90 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm h_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm p_90 (ATerm));
ATerm Program_1 (ATerm, ATerm g_66 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm r_85 (ATerm));
ATerm Undefined_1 (ATerm, ATerm h_66 (ATerm));
ATerm Help_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm h_75 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm _2 (ATerm, ATerm s_56 (ATerm), ATerm t_56 (ATerm));
ATerm conc_strings_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm debug_1 (ATerm, ATerm q_85 (ATerm));
ATerm map_1 (ATerm, ATerm s_74 (ATerm));
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm u_90 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm b_58 (ATerm), ATerm c_58 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm s_90 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm r_90 (ATerm));
ATerm Abox_2_latex_0 (ATerm);
ATerm main_0 (ATerm);
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_l_6, (ATerm) ATinsert(ATempty, term_m_6));
  {
    t = printnl_0(t);
    {
      t = term_n_6;
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
        ATerm o_6 = t;
        int p_6 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(a_1), not_null(b_1));
            LocalPopChoice(p_6);
          }
        else
          {
            t = o_6;
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
ATerm foldr_2 (ATerm t, ATerm g_81 (ATerm), ATerm h_81 (ATerm))
{
  ATerm q_6 = t;
  int r_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = g_81(t);
      LocalPopChoice(r_6);
    }
  else
    {
      t = q_6;
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
                t = foldr_2(t, g_81, h_81);
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
                t = h_81(t);
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
ATerm crush_2 (ATerm t, ATerm e_80 (ATerm), ATerm f_80 (ATerm))
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
      t = foldr_2(t, e_80, f_80);
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
      t = term_s_6;
      return(t);
    }
    t = crush_2(t, b_0, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm m_88 (ATerm))
{
  ATerm v_6 = t;
  int w_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_6;
      x_6 = t;
      {
        ATerm c_4 = NULL;
        ATerm d_4 = NULL;
        t = term_a_7;
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
          t = (ATerm) ATmakeAppl(sym__2, not_null(c_4), term_n_6);
          t = geq_0(t);
        }
      }
      t = x_6;
      t = m_88(t);
      LocalPopChoice(w_6);
    }
  else
    {
      t = v_6;
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
    ATerm b_7;
    b_7 = t;
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
    t = b_7;
    {
      ATerm y_5 = NULL;
      t = term_c_7;
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
        t = (ATerm) ATmakeAppl(sym__2, term_l_6, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_e_7), not_null(i_5)), term_d_7), not_null(k_5)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, c_0);
  {
    t = term_s_6;
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
        ATerm j_7;
        j_7 = t;
        t = SSL_print(not_null(y_6), not_null(z_6));
        t = j_7;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm split_2 (ATerm t, ATerm v_82 (ATerm), ATerm w_82 (ATerm))
{
  ATerm f_7 = NULL,h_7 = NULL;
  ATerm k_7;
  k_7 = t;
  {
    ATerm g_7 = NULL;
    t = v_82(t);
    {
      g_7 = t;
      if(((f_7 != NULL) && (f_7 != g_7)))
        _fail(g_7);
      else
        f_7 = g_7;
    }
  }
  t = k_7;
  {
    ATerm i_7 = NULL;
    t = w_82(t);
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
ATerm try_1 (ATerm t, ATerm b_67 (ATerm))
{
  ATerm l_7 = t;
  int n_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = b_67(t);
      LocalPopChoice(n_7);
    }
  else
    {
      t = l_7;
      {
      }
    }
  return(t);
}
ATerm topdown_1 (ATerm t, ATerm p_68 (ATerm))
{
  t = p_68(t);
  {
    ATerm f_0 (ATerm t)
    {
      t = topdown_1(t, p_68);
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
        ATerm o_7 = t;
        int p_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Abox2latex_0(t);
            LocalPopChoice(p_7);
          }
        else
          {
            t = o_7;
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
      ATerm q_7;
      q_7 = t;
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
      t = q_7;
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
      ATerm s_7;
      s_7 = t;
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
      t = s_7;
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
      ATerm v_7;
      v_7 = t;
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
      t = v_7;
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
      ATerm w_7;
      w_7 = t;
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
      t = w_7;
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
      ATerm x_7;
      x_7 = t;
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
      t = x_7;
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
  ATerm y_7 = t;
  int z_7 = stack_ptr;
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
                t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_i_8), not_null(v_12)), term_h_8), not_null(d_13)), term_c_8);
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
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_k_8), not_null(v_12)), term_j_8);
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
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_k_8), not_null(v_12)), term_m_8), not_null(s_12)), term_l_8);
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
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(v_12)), term_u_8), not_null(t_12)), term_p_8);
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
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_u_8), not_null(v_12)), term_h_8), not_null(t_12)), term_v_8);
        }
        return(t);
      }
      ATerm s_13 (ATerm t)
      {
        if(((v_12 != NULL) && (v_12 != c_13)))
          _fail(c_13);
        else
          v_12 = c_13;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_u_8), not_null(v_12)), term_w_8);
        return(t);
      }
      ATerm t_13 (ATerm t)
      {
        if(((v_12 != NULL) && (v_12 != c_13)))
          _fail(c_13);
        else
          v_12 = c_13;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_u_8), not_null(v_12)), term_x_8);
        return(t);
      }
      ATerm u_13 (ATerm t)
      {
        if(((v_12 != NULL) && (v_12 != c_13)))
          _fail(c_13);
        else
          v_12 = c_13;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_u_8), not_null(v_12)), term_y_8);
        return(t);
      }
      ATerm v_13 (ATerm t)
      {
        if(((v_12 != NULL) && (v_12 != c_13)))
          _fail(c_13);
        else
          v_12 = c_13;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_u_8), not_null(v_12)), term_z_8);
        return(t);
      }
      ATerm w_13 (ATerm t)
      {
        if(((v_12 != NULL) && (v_12 != c_13)))
          _fail(c_13);
        else
          v_12 = c_13;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_u_8), not_null(v_12)), term_c_9);
        return(t);
      }
      ATerm x_13 (ATerm t)
      {
        if(((v_12 != NULL) && (v_12 != c_13)))
          _fail(c_13);
        else
          v_12 = c_13;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_u_8), not_null(v_12)), term_h_9);
        return(t);
      }
      ATerm y_13 (ATerm t)
      {
        if(((v_12 != NULL) && (v_12 != c_13)))
          _fail(c_13);
        else
          v_12 = c_13;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_u_8), not_null(v_12)), term_i_9);
        return(t);
      }
      ATerm z_13 (ATerm t)
      {
        if(((v_12 != NULL) && (v_12 != c_13)))
          _fail(c_13);
        else
          v_12 = c_13;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_u_8), not_null(v_12)), term_j_9);
        return(t);
      }
      ATerm a_14 (ATerm t)
      {
        if(((v_12 != NULL) && (v_12 != c_13)))
          _fail(c_13);
        else
          v_12 = c_13;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_u_8), not_null(v_12)), term_k_9);
        return(t);
      }
      ATerm b_14 (ATerm t)
      {
        if(((v_12 != NULL) && (v_12 != c_13)))
          _fail(c_13);
        else
          v_12 = c_13;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_u_8), not_null(v_12)), term_l_9);
        return(t);
      }
      ATerm c_14 (ATerm t)
      {
        if(((v_12 != NULL) && (v_12 != c_13)))
          _fail(c_13);
        else
          v_12 = c_13;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_u_8), not_null(v_12)), term_m_9);
        return(t);
      }
      ATerm d_14 (ATerm t)
      {
        if(((v_12 != NULL) && (v_12 != c_13)))
          _fail(c_13);
        else
          v_12 = c_13;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_u_8), not_null(v_12)), term_p_9);
        return(t);
      }
      ATerm e_14 (ATerm t)
      {
        if(((v_12 != NULL) && (v_12 != c_13)))
          _fail(c_13);
        else
          v_12 = c_13;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_u_8), not_null(v_12)), term_u_9);
        return(t);
      }
      ATerm f_14 (ATerm t)
      {
        if(((v_12 != NULL) && (v_12 != c_13)))
          _fail(c_13);
        else
          v_12 = c_13;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_u_8), not_null(v_12)), term_v_9);
        return(t);
      }
      ATerm g_14 (ATerm t)
      {
        if(((v_12 != NULL) && (v_12 != c_13)))
          _fail(c_13);
        else
          v_12 = c_13;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_u_8), not_null(v_12)), term_w_9);
        return(t);
      }
      ATerm h_14 (ATerm t)
      {
        if(((v_12 != NULL) && (v_12 != c_13)))
          _fail(c_13);
        else
          v_12 = c_13;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_u_8), not_null(v_12)), term_x_9);
        return(t);
      }
      ATerm i_14 (ATerm t)
      {
        if(((v_12 != NULL) && (v_12 != c_13)))
          _fail(c_13);
        else
          v_12 = c_13;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_u_8), not_null(v_12)), term_y_9);
        return(t);
      }
      ATerm j_14 (ATerm t)
      {
        if(((v_12 != NULL) && (v_12 != c_13)))
          _fail(c_13);
        else
          v_12 = c_13;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_u_8), not_null(v_12)), term_z_9);
        return(t);
      }
      ATerm k_14 (ATerm t)
      {
        if(((v_12 != NULL) && (v_12 != c_13)))
          _fail(c_13);
        else
          v_12 = c_13;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_u_8), not_null(v_12)), term_c_10);
        return(t);
      }
      ATerm l_14 (ATerm t)
      {
        if(((v_12 != NULL) && (v_12 != c_13)))
          _fail(c_13);
        else
          v_12 = c_13;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_u_8), not_null(v_12)), term_h_10);
        return(t);
      }
      ATerm m_14 (ATerm t)
      {
        if(((v_12 != NULL) && (v_12 != c_13)))
          _fail(c_13);
        else
          v_12 = c_13;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_u_8), not_null(v_12)), term_i_10);
        return(t);
      }
      ATerm n_14 (ATerm t)
      {
        if(((v_12 != NULL) && (v_12 != c_13)))
          _fail(c_13);
        else
          v_12 = c_13;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_u_8), not_null(v_12)), term_j_10);
        return(t);
      }
      ATerm o_14 (ATerm t)
      {
        if(((v_12 != NULL) && (v_12 != c_13)))
          _fail(c_13);
        else
          v_12 = c_13;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_u_8), not_null(v_12)), term_k_10);
        return(t);
      }
      ATerm p_14 (ATerm t)
      {
        if(((v_12 != NULL) && (v_12 != c_13)))
          _fail(c_13);
        else
          v_12 = c_13;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_u_8), not_null(v_12)), term_m_10);
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
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_u_8), not_null(v_12)), term_h_8), not_null(u_12)), term_n_10);
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
                t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_q_10), not_null(p_12)), term_o_10);
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
                          t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_q_10), not_null(p_12)), term_m_8), not_null(k_12)), term_r_10);
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
                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_t_10), not_null(p_12)), term_m_8), not_null(l_12)), term_s_10);
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
                        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_v_10), not_null(p_12)), term_m_8), not_null(n_12)), term_h_8), not_null(m_12)), term_u_10);
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
                              t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_x_10), not_null(p_12)), term_m_8), not_null(n_12)), term_h_8), not_null(m_12)), term_h_8), not_null(l_12)), term_w_10);
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
                              t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_z_10), not_null(p_12)), term_m_8), not_null(o_12)), term_y_10);
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
                                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_c_11), not_null(r_12)), term_b_11), not_null(q_12)), term_a_11);
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
                                    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_e_11), not_null(v_12)), term_d_11);
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
                                          ATerm f_11 = t;
                                          int g_11 = stack_ptr;
                                          if((PushChoice() == 0))
                                            {
                                              t = n_13(t);
                                              LocalPopChoice(g_11);
                                            }
                                          else
                                            {
                                              t = f_11;
                                              {
                                                ATerm h_11 = t;
                                                int i_11 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = o_13(t);
                                                    LocalPopChoice(i_11);
                                                  }
                                                else
                                                  {
                                                    t = h_11;
                                                    t = p_13(t);
                                                  }
                                              }
                                            }
                                        }
                                      else
                                        {
                                          ATerm j_11 = t;
                                          int k_11 = stack_ptr;
                                          if((PushChoice() == 0))
                                            {
                                              t = n_13(t);
                                              LocalPopChoice(k_11);
                                            }
                                          else
                                            {
                                              t = j_11;
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
      LocalPopChoice(z_7);
    }
  else
    {
      t = y_7;
      {
        ATerm l_11 = t;
        int m_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = C_0(t);
            t = term_n_11;
            LocalPopChoice(m_11);
          }
        else
          {
            t = l_11;
            {
              ATerm o_11 = t;
              int p_11 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = R_0(t);
                  t = term_q_11;
                  LocalPopChoice(p_11);
                }
              else
                {
                  t = o_11;
                  {
                    ATerm r_11 = t;
                    int s_11 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = L_0(t);
                        t = term_t_11;
                        LocalPopChoice(s_11);
                      }
                    else
                      {
                        t = r_11;
                        {
                          ATerm u_11 = t;
                          int v_11 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = EOR_0(t);
                              t = term_w_11;
                              LocalPopChoice(v_11);
                            }
                          else
                            {
                              t = u_11;
                              {
                                t = CSEP_0(t);
                                t = term_x_11;
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
ATerm bottomup_1 (ATerm t, ATerm q_68 (ATerm))
{
  ATerm n_0 (ATerm t)
  {
    t = bottomup_1(t, q_68);
    return(t);
  }
  t = _all(t, n_0);
  t = q_68(t);
  return(t);
}
ATerm latex2text_0 (ATerm t)
{
  ATerm o_0 (ATerm t)
  {
    ATerm y_11 = t;
    int z_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Latex2text_0(t);
        LocalPopChoice(z_11);
      }
    else
      {
        t = y_11;
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
  ATerm a_12 = t;
  int b_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(b_12);
    }
  else
    {
      t = a_12;
      {
        ATerm c_12 = t;
        int d_12 = stack_ptr;
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
                        ATerm e_12 = t;
                        int f_13 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = conc_two_lists_0(t);
                            LocalPopChoice(f_13);
                          }
                        else
                          {
                            t = e_12;
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
                      ATerm g_13 = t;
                      int h_13 = stack_ptr;
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
                          LocalPopChoice(h_13);
                        }
                      else
                        {
                          t = g_13;
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
            LocalPopChoice(d_12);
          }
        else
          {
            t = c_12;
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
                t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(q_15)), term_i_13), term_i_13);
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
    t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(n_15)), term_j_13), term_j_13);
  }
  return(t);
}
ATerm listtd_1 (ATerm t, ATerm z_75 (ATerm))
{
  ATerm w_15 (ATerm t)
  {
    t = z_75(t);
    {
      ATerm k_13 = t;
      int l_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Nil_0(t);
          LocalPopChoice(l_13);
        }
      else
        {
          t = k_13;
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
  ATerm m_13 = t;
  int r_14 = stack_ptr;
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
          t = (ATerm) ATmakeAppl(sym__2, term_s_14, not_null(o_16));
          t = table_get_0(t);
        }
      }
      LocalPopChoice(r_14);
    }
  else
    {
      t = m_13;
      {
        t = explode_string_0(t);
        {
          ATerm t_0 (ATerm t)
          {
            ATerm t_14 = t;
            int b_15 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = replace_quotes_0(t);
                LocalPopChoice(b_15);
              }
            else
              {
                t = t_14;
                {
                }
              }
            return(t);
          }
          t = listtd_1(t, t_0);
          {
            ATerm w_0 (ATerm t)
            {
              ATerm c_15 = t;
              int f_15 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm q_16 = NULL;
                  q_16 = t;
                  n_16 :
                  if(match_int(q_16, 32))
                    {
                      t = term_g_15;
                      t = explode_string_0(t);
                    }
                  else
                    {
                      if(match_int(q_16, 35))
                        {
                          t = term_j_15;
                          t = explode_string_0(t);
                        }
                      else
                        {
                          if(match_int(q_16, 36))
                            {
                              t = term_r_15;
                              t = explode_string_0(t);
                            }
                          else
                            {
                              if(match_int(q_16, 37))
                                {
                                  t = term_t_15;
                                  t = explode_string_0(t);
                                }
                              else
                                {
                                  if(match_int(q_16, 38))
                                    {
                                      t = term_u_15;
                                      t = explode_string_0(t);
                                    }
                                  else
                                    {
                                      if(match_int(q_16, 45))
                                        {
                                          t = term_v_15;
                                          t = explode_string_0(t);
                                        }
                                      else
                                        {
                                          if(match_int(q_16, 60))
                                            {
                                              t = term_x_15;
                                              t = explode_string_0(t);
                                            }
                                          else
                                            {
                                              if(match_int(q_16, 62))
                                                {
                                                  t = term_y_15;
                                                  t = explode_string_0(t);
                                                }
                                              else
                                                {
                                                  if(match_int(q_16, 92))
                                                    {
                                                      t = term_z_15;
                                                      t = explode_string_0(t);
                                                    }
                                                  else
                                                    {
                                                      if(match_int(q_16, 94))
                                                        {
                                                          t = term_a_16;
                                                          t = explode_string_0(t);
                                                        }
                                                      else
                                                        {
                                                          if(match_int(q_16, 95))
                                                            {
                                                              t = term_b_16;
                                                              t = explode_string_0(t);
                                                            }
                                                          else
                                                            {
                                                              if(match_int(q_16, 123))
                                                                {
                                                                  t = term_c_16;
                                                                  t = explode_string_0(t);
                                                                }
                                                              else
                                                                {
                                                                  if(match_int(q_16, 124))
                                                                    {
                                                                      t = term_d_16;
                                                                      t = explode_string_0(t);
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_int(q_16, 125))
                                                                        {
                                                                          t = term_e_16;
                                                                          t = explode_string_0(t);
                                                                        }
                                                                      else
                                                                        {
                                                                          if(match_int(q_16, 126))
                                                                            {
                                                                              t = term_f_16;
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
                  LocalPopChoice(f_15);
                }
              else
                {
                  t = c_15;
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
ATerm remove_trailing_1 (ATerm t, ATerm y_66 (ATerm))
{
  ATerm o_17 (ATerm t)
  {
    ATerm g_16 = t;
    int h_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, y_66, _id);
        {
          t = Tl_0(t);
          t = o_17(t);
        }
        LocalPopChoice(h_16);
      }
    else
      {
        t = g_16;
        {
        }
      }
    return(t);
  }
  t = o_17(t);
  return(t);
}
ATerm at_suffix_1 (ATerm t, ATerm l_75 (ATerm))
{
  ATerm p_17 (ATerm t)
  {
    ATerm i_16 = t;
    int j_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_75(t);
        LocalPopChoice(j_16);
      }
    else
      {
        t = i_16;
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
    ATerm k_16 = t;
    int l_16 = stack_ptr;
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
        LocalPopChoice(l_16);
      }
    else
      {
        t = k_16;
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
                          ATerm m_16 = t;
                          int r_16 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm z_18 = NULL,b_19 = NULL;
                              ATerm s_16;
                              s_16 = t;
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
                              t = s_16;
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
                              LocalPopChoice(r_16);
                            }
                          else
                            {
                              t = m_16;
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
                  t = (ATerm) ATinsert(ATinsert(ATempty, term_t_16), not_null(i_19));
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
      ATerm u_16;
      u_16 = t;
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
      t = u_16;
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
      ATerm v_16;
      v_16 = t;
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
      t = v_16;
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
  ATerm w_20 = NULL;
  w_20 = t;
  v_20 :
  if(match_cons(w_20, sym_VAR_0))
    {
      ATerm y_20 = NULL,a_21 = NULL;
      ATerm w_16;
      w_16 = t;
      {
        ATerm z_20 = NULL;
        t = SSLgetAnnotations(not_null(w_20));
        {
          z_20 = t;
          if(((y_20 != NULL) && (y_20 != z_20)))
            _fail(z_20);
          else
            y_20 = z_20;
        }
      }
      t = w_16;
      {
        ATerm b_21 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_VAR_0), not_null(y_20));
        {
          b_21 = t;
          if(((a_21 != NULL) && (a_21 != b_21)))
            _fail(b_21);
          else
            a_21 = b_21;
        }
        t = not_null(a_21);
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
  ATerm j_21 = NULL;
  j_21 = t;
  i_21 :
  if(match_cons(j_21, sym_KW_0))
    {
      ATerm l_21 = NULL,n_21 = NULL;
      ATerm x_16;
      x_16 = t;
      {
        ATerm m_21 = NULL;
        t = SSLgetAnnotations(not_null(j_21));
        {
          m_21 = t;
          if(((l_21 != NULL) && (l_21 != m_21)))
            _fail(m_21);
          else
            l_21 = m_21;
        }
      }
      t = x_16;
      {
        ATerm o_21 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_KW_0), not_null(l_21));
        {
          o_21 = t;
          if(((n_21 != NULL) && (n_21 != o_21)))
            _fail(o_21);
          else
            n_21 = o_21;
        }
        t = not_null(n_21);
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
  ATerm w_21 = NULL;
  w_21 = t;
  v_21 :
  if(match_cons(w_21, sym_CL_0))
    {
      ATerm y_21 = NULL,a_22 = NULL;
      ATerm y_16;
      y_16 = t;
      {
        ATerm z_21 = NULL;
        t = SSLgetAnnotations(not_null(w_21));
        {
          z_21 = t;
          if(((y_21 != NULL) && (y_21 != z_21)))
            _fail(z_21);
          else
            y_21 = z_21;
        }
      }
      t = y_16;
      {
        ATerm b_22 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_CL_0), not_null(y_21));
        {
          b_22 = t;
          if(((a_22 != NULL) && (a_22 != b_22)))
            _fail(b_22);
          else
            a_22 = b_22;
        }
        t = not_null(a_22);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm FFID_2 (ATerm t, ATerm c_59 (ATerm), ATerm d_59 (ATerm))
{
  ATerm l_22 = NULL,m_22 = NULL,n_22 = NULL;
  l_22 = t;
  k_22 :
  if(match_cons(l_22, sym_FFID_2))
    {
      m_22 = ATgetArgument(l_22, 0);
      n_22 = ATgetArgument(l_22, 1);
      {
        ATerm r_22 = NULL,t_22 = NULL;
        ATerm s_22 = NULL;
        t = SSLgetAnnotations(not_null(l_22));
        {
          s_22 = t;
          if(((r_22 != NULL) && (r_22 != s_22)))
            _fail(s_22);
          else
            r_22 = s_22;
        }
        {
          t = not_null(m_22);
          {
            ATerm o_25 = NULL;
            t = c_59(t);
            {
              t_22 = t;
              {
                t = not_null(n_22);
                {
                  ATerm k_26 = NULL;
                  t = d_59(t);
                  {
                    o_25 = t;
                    {
                      ATerm o_26 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FFID_2, not_null(t_22), not_null(o_25)), not_null(r_22));
                      {
                        o_26 = t;
                        if(((k_26 != NULL) && (k_26 != o_26)))
                          _fail(o_26);
                        else
                          k_26 = o_26;
                      }
                      t = not_null(k_26);
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
  ATerm y_26 = NULL;
  y_26 = t;
  x_26 :
  if(match_cons(y_26, sym_SZ_0))
    {
      ATerm a_27 = NULL,c_27 = NULL;
      ATerm z_16;
      z_16 = t;
      {
        ATerm b_27 = NULL;
        t = SSLgetAnnotations(not_null(y_26));
        {
          b_27 = t;
          if(((a_27 != NULL) && (a_27 != b_27)))
            _fail(b_27);
          else
            a_27 = b_27;
        }
      }
      t = z_16;
      {
        ATerm d_27 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SZ_0), not_null(a_27));
        {
          d_27 = t;
          if(((c_27 != NULL) && (c_27 != d_27)))
            _fail(d_27);
          else
            c_27 = d_27;
        }
        t = not_null(c_27);
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
  ATerm l_27 = NULL;
  l_27 = t;
  k_27 :
  if(match_cons(l_27, sym_SH_0))
    {
      ATerm n_27 = NULL,p_27 = NULL;
      ATerm a_17;
      a_17 = t;
      {
        ATerm o_27 = NULL;
        t = SSLgetAnnotations(not_null(l_27));
        {
          o_27 = t;
          if(((n_27 != NULL) && (n_27 != o_27)))
            _fail(o_27);
          else
            n_27 = o_27;
        }
      }
      t = a_17;
      {
        ATerm s_27 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SH_0), not_null(n_27));
        {
          s_27 = t;
          if(((p_27 != NULL) && (p_27 != s_27)))
            _fail(s_27);
          else
            p_27 = s_27;
        }
        t = not_null(p_27);
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
  ATerm f_28 = NULL;
  f_28 = t;
  e_28 :
  if(match_cons(f_28, sym_SE_0))
    {
      ATerm h_28 = NULL,j_28 = NULL;
      ATerm b_17;
      b_17 = t;
      {
        ATerm i_28 = NULL;
        t = SSLgetAnnotations(not_null(f_28));
        {
          i_28 = t;
          if(((h_28 != NULL) && (h_28 != i_28)))
            _fail(i_28);
          else
            h_28 = i_28;
        }
      }
      t = b_17;
      {
        ATerm k_28 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SE_0), not_null(h_28));
        {
          k_28 = t;
          if(((j_28 != NULL) && (j_28 != k_28)))
            _fail(k_28);
          else
            j_28 = k_28;
        }
        t = not_null(j_28);
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
      ATerm c_17;
      c_17 = t;
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
      t = c_17;
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
    ATerm d_17 = t;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = d_17;
      }
    return(t);
  }
  t = filter_1(t, l_1);
  {
    ATerm m_1 (ATerm t)
    {
      t = term_e_17;
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
      ATerm f_17;
      f_17 = t;
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
      t = f_17;
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
  ATerm g_17 = t;
  int h_17 = stack_ptr;
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
      LocalPopChoice(h_17);
    }
  else
    {
      t = g_17;
      t = term_m_17;
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
          ATerm n_17 = t;
          int t_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(t_17);
            }
          else
            {
              t = n_17;
              {
                ATerm q_1 (ATerm t)
                {
                  ATerm z_17 = t;
                  int a_18 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = Nil_0(t);
                      LocalPopChoice(a_18);
                    }
                  else
                    {
                      t = z_17;
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
ATerm if_verbose2_1 (ATerm t, ATerm n_88 (ATerm))
{
  ATerm b_18 = t;
  int c_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_18;
      d_18 = t;
      {
        ATerm k_30 = NULL;
        ATerm l_30 = NULL;
        t = term_a_7;
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
          t = (ATerm) ATmakeAppl(sym__2, not_null(k_30), term_e_18);
          t = geq_0(t);
        }
      }
      t = d_18;
      t = n_88(t);
      LocalPopChoice(c_18);
    }
  else
    {
      t = b_18;
      {
      }
    }
  return(t);
}
ATerm dissuader_1 (ATerm t, ATerm y_85 (ATerm))
{
  ATerm f_18;
  f_18 = t;
  {
    ATerm r_1 (ATerm t)
    {
      t = y_85(t);
      {
        ATerm v_1 (ATerm t)
        {
          t = term_l_18;
          return(t);
        }
        t = debug_1(t, v_1);
      }
      return(t);
    }
    t = if_verbose2_1(t, r_1);
  }
  t = f_18;
  return(t);
}
ATerm separate_by_1 (ATerm t, ATerm o_74 (ATerm))
{
  ATerm p_30 = NULL,r_30 = NULL;
  ATerm w_1 (ATerm t)
  {
    t = term_r_18;
    return(t);
  }
  t = dissuader_1(t, w_1);
  {
    ATerm s_18;
    s_18 = t;
    {
      ATerm q_30 = NULL;
      q_30 = t;
      if(((p_30 != NULL) && (p_30 != q_30)))
        _fail(q_30);
      else
        p_30 = q_30;
    }
    t = s_18;
    {
      ATerm s_30 = NULL;
      t = term_t_18;
      {
        t = o_74(t);
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
ATerm filter_1 (ATerm t, ATerm j_82 (ATerm))
{
  ATerm w_18 = t;
  int x_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(x_18);
    }
  else
    {
      t = w_18;
      {
        ATerm y_18 = t;
        int d_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_1 (ATerm t)
            {
              t = filter_1(t, j_82);
              return(t);
            }
            t = Cons_2(t, j_82, x_1);
            LocalPopChoice(d_19);
          }
        else
          {
            t = y_18;
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
                    t = filter_1(t, j_82);
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
  ATerm g_31 = NULL;
  g_31 = t;
  f_31 :
  if(match_cons(g_31, sym_IS_0))
    {
      ATerm i_31 = NULL,k_31 = NULL;
      ATerm e_19;
      e_19 = t;
      {
        ATerm j_31 = NULL;
        t = SSLgetAnnotations(not_null(g_31));
        {
          j_31 = t;
          if(((i_31 != NULL) && (i_31 != j_31)))
            _fail(j_31);
          else
            i_31 = j_31;
        }
      }
      t = e_19;
      {
        ATerm l_31 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_IS_0), not_null(i_31));
        {
          l_31 = t;
          if(((k_31 != NULL) && (k_31 != l_31)))
            _fail(l_31);
          else
            k_31 = l_31;
        }
        t = not_null(k_31);
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
  ATerm q_31 = NULL;
  ATerm f_19 = t;
  int j_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_1 (ATerm t)
      {
        ATerm z_1 (ATerm t)
        {
          ATerm r_31 = NULL;
          r_31 = t;
          if(((q_31 != NULL) && (q_31 != r_31)))
            _fail(r_31);
          else
            q_31 = r_31;
          return(t);
        }
        t = SOpt_2(t, IS_0, z_1);
        return(t);
      }
      t = fetch_1(t, y_1);
      t = not_null(q_31);
      LocalPopChoice(j_19);
    }
  else
    {
      t = f_19;
      t = term_l_19;
    }
  return(t);
}
ATerm VS_0 (ATerm t)
{
  ATerm x_31 = NULL;
  x_31 = t;
  w_31 :
  if(match_cons(x_31, sym_VS_0))
    {
      ATerm z_31 = NULL,b_32 = NULL;
      ATerm m_19;
      m_19 = t;
      {
        ATerm a_32 = NULL;
        t = SSLgetAnnotations(not_null(x_31));
        {
          a_32 = t;
          if(((z_31 != NULL) && (z_31 != a_32)))
            _fail(a_32);
          else
            z_31 = a_32;
        }
      }
      t = m_19;
      {
        ATerm c_32 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_VS_0), not_null(z_31));
        {
          c_32 = t;
          if(((b_32 != NULL) && (b_32 != c_32)))
            _fail(c_32);
          else
            b_32 = c_32;
        }
        t = not_null(b_32);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm SOpt_2 (ATerm t, ATerm f_58 (ATerm), ATerm g_58 (ATerm))
{
  ATerm m_32 = NULL,n_32 = NULL,o_32 = NULL;
  m_32 = t;
  l_32 :
  if(match_cons(m_32, sym_SOpt_2))
    {
      n_32 = ATgetArgument(m_32, 0);
      o_32 = ATgetArgument(m_32, 1);
      {
        ATerm s_32 = NULL,u_32 = NULL;
        ATerm t_32 = NULL;
        t = SSLgetAnnotations(not_null(m_32));
        {
          t_32 = t;
          if(((s_32 != NULL) && (s_32 != t_32)))
            _fail(t_32);
          else
            s_32 = t_32;
        }
        {
          t = not_null(n_32);
          {
            ATerm w_32 = NULL;
            t = f_58(t);
            {
              u_32 = t;
              {
                t = not_null(o_32);
                {
                  ATerm y_32 = NULL;
                  t = g_58(t);
                  {
                    w_32 = t;
                    {
                      ATerm z_32 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SOpt_2, not_null(u_32), not_null(w_32)), not_null(s_32));
                      {
                        z_32 = t;
                        if(((y_32 != NULL) && (y_32 != z_32)))
                          _fail(z_32);
                        else
                          y_32 = z_32;
                      }
                      t = not_null(y_32);
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
  ATerm i_33 = NULL;
  ATerm o_19 = t;
  int p_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_2 (ATerm t)
      {
        ATerm b_2 (ATerm t)
        {
          ATerm l_33 = NULL;
          l_33 = t;
          if(((i_33 != NULL) && (i_33 != l_33)))
            _fail(l_33);
          else
            i_33 = l_33;
          return(t);
        }
        t = SOpt_2(t, VS_0, b_2);
        return(t);
      }
      t = fetch_1(t, a_2);
      t = not_null(i_33);
      LocalPopChoice(p_19);
    }
  else
    {
      t = o_19;
      t = term_l_19;
    }
  return(t);
}
ATerm C_2 (ATerm t, ATerm l_59 (ATerm), ATerm m_59 (ATerm))
{
  ATerm w_33 = NULL,x_33 = NULL,y_33 = NULL;
  w_33 = t;
  v_33 :
  if(match_cons(w_33, sym_C_2))
    {
      x_33 = ATgetArgument(w_33, 0);
      y_33 = ATgetArgument(w_33, 1);
      {
        ATerm n_34 = NULL,p_34 = NULL;
        ATerm o_34 = NULL;
        t = SSLgetAnnotations(not_null(w_33));
        {
          o_34 = t;
          if(((n_34 != NULL) && (n_34 != o_34)))
            _fail(o_34);
          else
            n_34 = o_34;
        }
        {
          t = not_null(x_33);
          {
            ATerm r_34 = NULL;
            t = l_59(t);
            {
              p_34 = t;
              {
                t = not_null(y_33);
                {
                  ATerm t_34 = NULL;
                  t = m_59(t);
                  {
                    r_34 = t;
                    {
                      ATerm u_34 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_C_2, not_null(p_34), not_null(r_34)), not_null(n_34));
                      {
                        u_34 = t;
                        if(((t_34 != NULL) && (t_34 != u_34)))
                          _fail(u_34);
                        else
                          t_34 = u_34;
                      }
                      t = not_null(t_34);
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
  ATerm g_35 = NULL,h_35 = NULL,i_35 = NULL;
  g_35 = t;
  f_35 :
  if(match_cons(g_35, sym_R_2))
    {
      h_35 = ATgetArgument(g_35, 0);
      i_35 = ATgetArgument(g_35, 1);
      {
        t = not_null(i_35);
        {
          ATerm y_35 (ATerm t)
          {
            ATerm k_35 = NULL,l_35 = NULL,m_35 = NULL;
            ATerm q_19 = t;
            int r_19 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                LocalPopChoice(r_19);
              }
            else
              {
                t = q_19;
                {
                  ATerm s_19 = t;
                  int t_19 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = Cons_2(t, _id, Nil_0);
                      LocalPopChoice(t_19);
                    }
                  else
                    {
                      t = s_19;
                      {
                        ATerm u_19 = t;
                        int x_19 = stack_ptr;
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
                            LocalPopChoice(x_19);
                          }
                        else
                          {
                            t = u_19;
                            {
                              ATerm c_20 = t;
                              int d_20 = stack_ptr;
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
                                  LocalPopChoice(d_20);
                                }
                              else
                                {
                                  t = c_20;
                                  {
                                    ATerm n_35 = NULL,o_35 = NULL,p_35 = NULL,t_35 = NULL,u_35 = NULL;
                                    n_35 = t;
                                    d_35 :
                                    if(((ATgetType(n_35) == AT_LIST) && !(ATisEmpty(n_35))))
                                      {
                                        o_35 = ATgetFirst((ATermList) n_35);
                                        p_35 = (ATerm) ATgetNext((ATermList) n_35);
                                        e_35 :
                                        if(((ATgetType(p_35) == AT_LIST) && !(ATisEmpty(p_35))))
                                          {
                                            t_35 = ATgetFirst((ATermList) p_35);
                                            u_35 = (ATerm) ATgetNext((ATermList) p_35);
                                            {
                                              ATerm v_35 = NULL;
                                              if(((k_35 != NULL) && (k_35 != o_35)))
                                                _fail(o_35);
                                              else
                                                k_35 = o_35;
                                              {
                                                if(((l_35 != NULL) && (l_35 != t_35)))
                                                  _fail(t_35);
                                                else
                                                  l_35 = t_35;
                                                {
                                                  if(((m_35 != NULL) && (m_35 != u_35)))
                                                    _fail(u_35);
                                                  else
                                                    m_35 = u_35;
                                                  {
                                                    ATerm w_35 = NULL;
                                                    t = (ATerm) ATinsert(CheckATermList(not_null(m_35)), not_null(l_35));
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
                                                    t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(v_35)), term_e_20), not_null(k_35));
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
  ATerm f_20 = t;
  int g_20 = stack_ptr;
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
      LocalPopChoice(g_20);
    }
  else
    {
      t = f_20;
      t = table_row_0(t);
    }
  return(t);
}
ATerm at_last_1 (ATerm t, ATerm s_75 (ATerm))
{
  ATerm n_36 (ATerm t)
  {
    ATerm h_20 = t;
    int k_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, Nil_0);
        t = s_75(t);
        LocalPopChoice(k_20);
      }
    else
      {
        t = h_20;
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
                    t = (ATerm) ATmakeAppl(sym__2, not_null(h_37), term_e_17);
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
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(g_37)), term_p_20);
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
                        t = (ATerm) ATmakeAppl(sym__2, not_null(m_37), term_e_17);
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
                      t = (ATerm) ATinsert(ATinsert(ATempty, not_null(l_37)), term_q_20);
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
                            t = (ATerm) ATmakeAppl(sym__2, not_null(r_37), term_e_17);
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
                          t = (ATerm) ATinsert(ATinsert(ATempty, not_null(q_37)), term_r_20);
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
              t = (ATerm) ATinsert(ATempty, term_e_20);
              return(t);
            }
            t = separate_by_1(t, j_2);
            {
              t = concat_0(t);
              {
                ATerm k_2 (ATerm t)
                {
                  t = (ATerm) ATinsert(ATempty, term_s_20);
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
        ATerm t_20 = t;
        int u_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_subti(not_null(h_38), not_null(i_38));
            LocalPopChoice(u_20);
          }
        else
          {
            t = t_20;
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
  ATerm o_38 = NULL,p_38 = NULL,q_38 = NULL;
  o_38 = t;
  n_38 :
  if(match_cons(o_38, sym__2))
    {
      p_38 = ATgetArgument(o_38, 0);
      q_38 = ATgetArgument(o_38, 1);
      {
        ATerm x_20;
        x_20 = t;
        {
          ATerm c_21 = t;
          int d_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(p_38), not_null(q_38));
              LocalPopChoice(d_21);
            }
          else
            {
              t = c_21;
              t = SSL_gtr(not_null(p_38), not_null(q_38));
            }
        }
        t = x_20;
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
  ATerm w_38 = NULL;
  ATerm e_21 = t;
  int f_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_38 = NULL,y_38 = NULL,z_38 = NULL;
      x_38 = t;
      v_38 :
      if(match_cons(x_38, sym__2))
        {
          y_38 = ATgetArgument(x_38, 0);
          z_38 = ATgetArgument(x_38, 1);
          {
            if(((w_38 != NULL) && (w_38 != y_38)))
              _fail(y_38);
            else
              w_38 = y_38;
            if(((w_38 != NULL) && (w_38 != z_38)))
              _fail(z_38);
            else
              w_38 = z_38;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(f_21);
    }
  else
    {
      t = e_21;
      t = gt_0(t);
    }
  return(t);
}
ATerm while_not_2 (ATerm t, ATerm g_68 (ATerm), ATerm h_68 (ATerm))
{
  ATerm b_39 (ATerm t)
  {
    ATerm g_21 = t;
    int h_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = g_68(t);
        LocalPopChoice(h_21);
      }
    else
      {
        t = g_21;
        {
          t = h_68(t);
          t = b_39(t);
        }
      }
    return(t);
  }
  t = b_39(t);
  return(t);
}
ATerm for_3 (ATerm t, ATerm j_68 (ATerm), ATerm k_68 (ATerm), ATerm l_68 (ATerm))
{
  t = j_68(t);
  t = while_not_2(t, k_68, l_68);
  return(t);
}
ATerm copy_0 (ATerm t)
{
  ATerm k_21 = t;
  int p_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_2 (ATerm t)
      {
        ATerm l_39 = NULL,m_39 = NULL,n_39 = NULL;
        l_39 = t;
        d_39 :
        if(match_cons(l_39, sym__2))
          {
            m_39 = ATgetArgument(l_39, 0);
            n_39 = ATgetArgument(l_39, 1);
            t = (ATerm) ATmakeAppl(sym__3, not_null(m_39), not_null(n_39), (ATerm) ATempty);
          }
        else
          {
            _fail(t);
          }
        return(t);
      }
      ATerm m_2 (ATerm t)
      {
        ATerm q_39 = NULL,r_39 = NULL,s_39 = NULL,t_39 = NULL;
        q_39 = t;
        f_39 :
        if(match_cons(q_39, sym__3))
          {
            r_39 = ATgetArgument(q_39, 0);
            s_39 = ATgetArgument(q_39, 1);
            t_39 = ATgetArgument(q_39, 2);
            g_39 :
            if(match_int(r_39, 0))
              {
                t = not_null(t_39);
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
        ATerm w_39 = NULL,x_39 = NULL,y_39 = NULL,z_39 = NULL;
        w_39 = t;
        j_39 :
        if(match_cons(w_39, sym__3))
          {
            x_39 = ATgetArgument(w_39, 0);
            y_39 = ATgetArgument(w_39, 1);
            z_39 = ATgetArgument(w_39, 2);
            {
              ATerm d_40 = NULL;
              ATerm q_21;
              q_21 = t;
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(x_39), term_n_6);
                t = geq_0(t);
              }
              t = q_21;
              {
                ATerm e_40 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(x_39), term_n_6);
                {
                  t = subt_0(t);
                  {
                    e_40 = t;
                    if(((d_40 != NULL) && (d_40 != e_40)))
                      _fail(e_40);
                    else
                      d_40 = e_40;
                  }
                }
                t = (ATerm) ATmakeAppl(sym__3, not_null(d_40), not_null(y_39), (ATerm) ATinsert(CheckATermList(not_null(z_39)), not_null(y_39)));
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
      LocalPopChoice(p_21);
    }
  else
    {
      t = k_21;
      {
        ATerm o_2 (ATerm t)
        {
          ATerm f_40 = NULL;
          f_40 = t;
          k_39 :
          if(!(match_int(f_40, 0)))
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
ATerm R_2 (ATerm t, ATerm u_58 (ATerm), ATerm v_58 (ATerm))
{
  ATerm t_40 = NULL,u_40 = NULL,v_40 = NULL;
  t_40 = t;
  s_40 :
  if(match_cons(t_40, sym_R_2))
    {
      u_40 = ATgetArgument(t_40, 0);
      v_40 = ATgetArgument(t_40, 1);
      {
        ATerm z_40 = NULL,b_41 = NULL;
        ATerm a_41 = NULL;
        t = SSLgetAnnotations(not_null(t_40));
        {
          a_41 = t;
          if(((z_40 != NULL) && (z_40 != a_41)))
            _fail(a_41);
          else
            z_40 = a_41;
        }
        {
          t = not_null(u_40);
          {
            ATerm d_41 = NULL;
            t = u_58(t);
            {
              b_41 = t;
              {
                t = not_null(v_40);
                {
                  ATerm f_41 = NULL;
                  t = v_58(t);
                  {
                    d_41 = t;
                    {
                      ATerm g_41 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_R_2, not_null(b_41), not_null(d_41)), not_null(z_40));
                      {
                        g_41 = t;
                        if(((f_41 != NULL) && (f_41 != g_41)))
                          _fail(g_41);
                        else
                          f_41 = g_41;
                      }
                      t = not_null(f_41);
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
    ATerm b_43 (ATerm t)
    {
      ATerm v_41 = NULL,w_41 = NULL,x_41 = NULL,y_41 = NULL,z_41 = NULL,a_42 = NULL,b_42 = NULL;
      ATerm e_43 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(a_42), (ATerm) ATinsert(CheckATermList(not_null(b_42)), not_null(z_41)));
        t = b_43(t);
        return(t);
      }
      x_41 = t;
      s_41 :
      if(match_cons(x_41, sym__2))
        {
          y_41 = ATgetArgument(x_41, 0);
          b_42 = ATgetArgument(x_41, 1);
          t_41 :
          if(((ATgetType(y_41) == AT_LIST) && ATisEmpty(y_41)))
            {
              {
                ATerm i_42 = NULL;
                ATerm j_42 = NULL;
                t = not_null(b_42);
                {
                  ATerm q_2 (ATerm t)
                  {
                    t = (ATerm) ATempty;
                    return(t);
                  }
                  t = reverse_acc_2(t, _id, q_2);
                  {
                    j_42 = t;
                    if(((i_42 != NULL) && (i_42 != j_42)))
                      _fail(j_42);
                    else
                      i_42 = j_42;
                  }
                }
                t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_R_2, (ATerm)ATempty, not_null(i_42)));
              }
            }
          else
            {
              if(((ATgetType(y_41) == AT_LIST) && !(ATisEmpty(y_41))))
                {
                  z_41 = ATgetFirst((ATermList) y_41);
                  a_42 = (ATerm) ATgetNext((ATermList) y_41);
                  u_41 :
                  if(match_cons(z_41, sym_R_2))
                    {
                      v_41 = ATgetArgument(z_41, 0);
                      w_41 = ATgetArgument(z_41, 1);
                      {
                        ATerm r_21 = t;
                        int s_21 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm r_42 = NULL,v_42 = NULL;
                            ATerm t_21;
                            t_21 = t;
                            {
                              ATerm u_42 = NULL;
                              t = not_null(b_42);
                              {
                                ATerm r_2 (ATerm t)
                                {
                                  t = (ATerm) ATempty;
                                  return(t);
                                }
                                t = reverse_acc_2(t, _id, r_2);
                                {
                                  u_42 = t;
                                  if(((r_42 != NULL) && (r_42 != u_42)))
                                    _fail(u_42);
                                  else
                                    r_42 = u_42;
                                }
                              }
                            }
                            t = t_21;
                            {
                              ATerm w_42 = NULL;
                              t = (ATerm) ATmakeAppl(sym__2, not_null(a_42), (ATerm) ATempty);
                              {
                                t = b_43(t);
                                {
                                  w_42 = t;
                                  if(((v_42 != NULL) && (v_42 != w_42)))
                                    _fail(w_42);
                                  else
                                    v_42 = w_42;
                                }
                              }
                              t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(v_42)), (ATerm) ATmakeAppl(sym_R_2, not_null(v_41), not_null(w_41))), (ATerm) ATmakeAppl(sym_R_2, (ATerm)ATempty, not_null(r_42)));
                            }
                            LocalPopChoice(s_21);
                          }
                        else
                          {
                            t = r_21;
                            t = e_43(t);
                          }
                      }
                    }
                  else
                    {
                      t = e_43(t);
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
    t = b_43(t);
    {
      ATerm s_2 (ATerm t)
      {
        ATerm u_21 = t;
        if((PushChoice() == 0))
          {
            t = R_2(t, _id, Nil_0);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = u_21;
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
  ATerm b_49 (ATerm t)
  {
    t = not_null(s_45);
    {
      ATerm x_21 = t;
      int c_22 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = KW_0(t);
          LocalPopChoice(c_22);
        }
      else
        {
          t = x_21;
          {
            ATerm d_22 = t;
            int e_22 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = VAR_0(t);
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
                      t = NUM_0(t);
                      LocalPopChoice(g_22);
                    }
                  else
                    {
                      t = f_22;
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
  ATerm c_49 (ATerm t)
  {
    ATerm i_48 = NULL;
    ATerm n_48 = NULL;
    t = not_null(q_45);
    {
      ATerm t_2 (ATerm t)
      {
        ATerm j_48 = NULL,k_48 = NULL;
        j_48 = t;
        f_45 :
        if(match_cons(j_48, sym_S_1))
          {
            k_48 = ATgetArgument(j_48, 0);
            {
              t = not_null(k_48);
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
        n_48 = t;
        if(((i_48 != NULL) && (i_48 != n_48)))
          _fail(n_48);
        else
          i_48 = n_48;
      }
    }
    t = (ATerm) ATmakeAppl(sym_CBOX_1, not_null(i_48));
    return(t);
  }
  ATerm d_49 (ATerm t)
  {
    t = not_null(s_45);
    t = latex_string_0(t);
    return(t);
  }
  r_45 = t;
  h_45 :
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
                ATerm h_22 = t;
                int i_22 = stack_ptr;
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
                    LocalPopChoice(i_22);
                  }
                else
                  {
                    t = h_22;
                    {
                      ATerm j_22 = t;
                      int o_22 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm c_46 = NULL;
                          t = not_null(s_45);
                          {
                            t = explode_string_0(t);
                            {
                              ATerm u_2 (ATerm t)
                              {
                                ATerm b_46 = NULL;
                                b_46 = t;
                                z_43 :
                                if(!(match_int(b_46, 61)))
                                  {
                                    _fail(t);
                                  }
                                return(t);
                              }
                              t = Cons_2(t, u_2, _id);
                              {
                                t = (ATerm) ATinsert(ATempty, term_p_22);
                                {
                                  t = implode_string_0(t);
                                  {
                                    c_46 = t;
                                    if(((z_45 != NULL) && (z_45 != c_46)))
                                      _fail(c_46);
                                    else
                                      z_45 = c_46;
                                  }
                                }
                              }
                            }
                          }
                          LocalPopChoice(o_22);
                        }
                      else
                        {
                          t = j_22;
                          {
                            ATerm d_46 = NULL;
                            t = not_null(s_45);
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
                        ATerm j_46 = NULL,k_46 = NULL,l_46 = NULL,m_46 = NULL,n_46 = NULL;
                        ATerm o_46 = NULL;
                        t = not_null(m_45);
                        {
                          ATerm p_46 = NULL;
                          t = construct_rows_0(t);
                          {
                            o_46 = t;
                            {
                              if(((l_46 != NULL) && (l_46 != o_46)))
                                _fail(o_46);
                              else
                                l_46 = o_46;
                              {
                                t = not_null(q_45);
                                {
                                  t = Vspace_0(t);
                                  {
                                    ATerm q_46 = NULL,s_46 = NULL;
                                    t = string_to_int_0(t);
                                    {
                                      p_46 = t;
                                      {
                                        if(((j_46 != NULL) && (j_46 != p_46)))
                                          _fail(p_46);
                                        else
                                          j_46 = p_46;
                                        {
                                          ATerm r_46 = NULL;
                                          t = (ATerm) ATmakeAppl(sym__2, not_null(j_46), term_s_20);
                                          {
                                            t = copy_0(t);
                                            {
                                              r_46 = t;
                                              if(((q_46 != NULL) && (q_46 != r_46)))
                                                _fail(r_46);
                                              else
                                                q_46 = r_46;
                                            }
                                          }
                                          {
                                            t = (ATerm) ATmakeAppl(sym__2, not_null(q_46), (ATerm) ATinsert(ATinsert(ATempty, term_t_16), term_s_20));
                                            {
                                              ATerm t_46 = NULL;
                                              ATerm q_22 = t;
                                              int u_22 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  t = conc_two_lists_0(t);
                                                  LocalPopChoice(u_22);
                                                }
                                              else
                                                {
                                                  t = q_22;
                                                  t = conc_more_lists_0(t);
                                                }
                                              {
                                                s_46 = t;
                                                {
                                                  if(((m_46 != NULL) && (m_46 != s_46)))
                                                    _fail(s_46);
                                                  else
                                                    m_46 = s_46;
                                                  {
                                                    t = not_null(s_45);
                                                    {
                                                      ATerm u_46 = NULL;
                                                      t = table_def_0(t);
                                                      {
                                                        t_46 = t;
                                                        {
                                                          if(((k_46 != NULL) && (k_46 != t_46)))
                                                            _fail(t_46);
                                                          else
                                                            k_46 = t_46;
                                                          {
                                                            t = not_null(l_46);
                                                            {
                                                              t = map_1(t, MkRows_0);
                                                              {
                                                                ATerm v_2 (ATerm t)
                                                                {
                                                                  t = not_null(m_46);
                                                                  return(t);
                                                                }
                                                                t = separate_by_1(t, v_2);
                                                                {
                                                                  u_46 = t;
                                                                  if(((n_46 != NULL) && (n_46 != u_46)))
                                                                    _fail(u_46);
                                                                  else
                                                                    n_46 = u_46;
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
                        t = (ATerm) ATmakeAppl(sym_ABOX_2, not_null(k_46), not_null(n_46));
                      }
                    }
                  else
                    {
                      if(match_cons(r_45, sym_HV_2))
                        {
                          s_45 = ATgetArgument(r_45, 0);
                          q_45 = ATgetArgument(r_45, 1);
                          {
                            ATerm x_46 = NULL,y_46 = NULL,z_46 = NULL,a_47 = NULL;
                            ATerm b_47 = NULL;
                            t = not_null(s_45);
                            {
                              ATerm c_47 = NULL;
                              t = Hspace_0(t);
                              {
                                b_47 = t;
                                {
                                  if(((x_46 != NULL) && (x_46 != b_47)))
                                    _fail(b_47);
                                  else
                                    x_46 = b_47;
                                  {
                                    t = not_null(s_45);
                                    {
                                      ATerm d_47 = NULL;
                                      t = Vspace_0(t);
                                      {
                                        c_47 = t;
                                        {
                                          if(((y_46 != NULL) && (y_46 != c_47)))
                                            _fail(c_47);
                                          else
                                            y_46 = c_47;
                                          {
                                            t = not_null(s_45);
                                            {
                                              ATerm e_47 = NULL;
                                              t = Ispace_0(t);
                                              {
                                                d_47 = t;
                                                {
                                                  if(((z_46 != NULL) && (z_46 != d_47)))
                                                    _fail(d_47);
                                                  else
                                                    z_46 = d_47;
                                                  {
                                                    t = not_null(q_45);
                                                    {
                                                      ATerm w_2 (ATerm t)
                                                      {
                                                        ATerm v_22 = t;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = Nil_0(t);
                                                            PopChoice();
                                                            _fail(t);
                                                          }
                                                        else
                                                          {
                                                            t = v_22;
                                                          }
                                                        return(t);
                                                      }
                                                      t = filter_1(t, w_2);
                                                      {
                                                        ATerm x_2 (ATerm t)
                                                        {
                                                          t = term_w_22;
                                                          return(t);
                                                        }
                                                        t = separate_by_1(t, x_2);
                                                        {
                                                          e_47 = t;
                                                          if(((a_47 != NULL) && (a_47 != e_47)))
                                                            _fail(e_47);
                                                          else
                                                            a_47 = e_47;
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
                            t = (ATerm) ATmakeAppl(sym_HVBOX_4, not_null(x_46), not_null(y_46), not_null(z_46), not_null(a_47));
                          }
                        }
                      else
                        {
                          if(match_cons(r_45, sym_V_2))
                            {
                              s_45 = ATgetArgument(r_45, 0);
                              q_45 = ATgetArgument(r_45, 1);
                              {
                                ATerm h_47 = NULL,i_47 = NULL,j_47 = NULL;
                                ATerm k_47 = NULL;
                                t = not_null(s_45);
                                {
                                  ATerm l_47 = NULL;
                                  t = Vspace_0(t);
                                  {
                                    k_47 = t;
                                    {
                                      if(((h_47 != NULL) && (h_47 != k_47)))
                                        _fail(k_47);
                                      else
                                        h_47 = k_47;
                                      {
                                        t = not_null(s_45);
                                        {
                                          ATerm m_47 = NULL;
                                          t = Ispace_0(t);
                                          {
                                            l_47 = t;
                                            {
                                              if(((i_47 != NULL) && (i_47 != l_47)))
                                                _fail(l_47);
                                              else
                                                i_47 = l_47;
                                              {
                                                t = not_null(q_45);
                                                {
                                                  ATerm y_2 (ATerm t)
                                                  {
                                                    ATerm x_22 = t;
                                                    if((PushChoice() == 0))
                                                      {
                                                        t = Nil_0(t);
                                                        PopChoice();
                                                        _fail(t);
                                                      }
                                                    else
                                                      {
                                                        t = x_22;
                                                      }
                                                    return(t);
                                                  }
                                                  t = filter_1(t, y_2);
                                                  {
                                                    ATerm z_2 (ATerm t)
                                                    {
                                                      t = term_y_22;
                                                      return(t);
                                                    }
                                                    t = separate_by_1(t, z_2);
                                                    {
                                                      m_47 = t;
                                                      if(((j_47 != NULL) && (j_47 != m_47)))
                                                        _fail(m_47);
                                                      else
                                                        j_47 = m_47;
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
                                t = (ATerm) ATmakeAppl(sym_VBOX_3, not_null(h_47), not_null(i_47), not_null(j_47));
                              }
                            }
                          else
                            {
                              if(match_cons(r_45, sym_H_2))
                                {
                                  s_45 = ATgetArgument(r_45, 0);
                                  q_45 = ATgetArgument(r_45, 1);
                                  {
                                    ATerm p_47 = NULL,q_47 = NULL;
                                    ATerm r_47 = NULL;
                                    t = not_null(s_45);
                                    {
                                      ATerm s_47 = NULL;
                                      t = Hspace_0(t);
                                      {
                                        r_47 = t;
                                        {
                                          if(((p_47 != NULL) && (p_47 != r_47)))
                                            _fail(r_47);
                                          else
                                            p_47 = r_47;
                                          {
                                            t = not_null(q_45);
                                            {
                                              t = toh_0(t);
                                              {
                                                s_47 = t;
                                                if(((q_47 != NULL) && (q_47 != s_47)))
                                                  _fail(s_47);
                                                else
                                                  q_47 = s_47;
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                    t = (ATerm) ATmakeAppl(sym_HBOX_2, not_null(p_47), not_null(q_47));
                                  }
                                }
                              else
                                {
                                  if(match_cons(r_45, sym_FBOX_2))
                                    {
                                      s_45 = ATgetArgument(r_45, 0);
                                      q_45 = ATgetArgument(r_45, 1);
                                      i_45 :
                                      if(match_cons(s_45, sym_F_1))
                                        {
                                          p_45 = ATgetArgument(s_45, 0);
                                          j_45 :
                                          if(((ATgetType(p_45) == AT_LIST) && !(ATisEmpty(p_45))))
                                            {
                                              n_45 = ATgetFirst((ATermList) p_45);
                                              o_45 = (ATerm) ATgetNext((ATermList) p_45);
                                              {
                                                ATerm z_22 = t;
                                                int a_23 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    ATerm w_47 = NULL,x_47 = NULL;
                                                    t = not_null(n_45);
                                                    {
                                                      ATerm b_23 = t;
                                                      int c_23 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm a_3 (ATerm t)
                                                          {
                                                            ATerm y_47 = NULL;
                                                            y_47 = t;
                                                            if(((x_47 != NULL) && (x_47 != y_47)))
                                                              _fail(y_47);
                                                            else
                                                              x_47 = y_47;
                                                            return(t);
                                                          }
                                                          t = FFID_2(t, FM_0, a_3);
                                                          LocalPopChoice(c_23);
                                                        }
                                                      else
                                                        {
                                                          t = b_23;
                                                          {
                                                            ATerm d_23 = t;
                                                            int e_23 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm b_3 (ATerm t)
                                                                {
                                                                  ATerm z_47 = NULL;
                                                                  z_47 = t;
                                                                  if(((x_47 != NULL) && (x_47 != z_47)))
                                                                    _fail(z_47);
                                                                  else
                                                                    x_47 = z_47;
                                                                  return(t);
                                                                }
                                                                t = FFID_2(t, SE_0, b_3);
                                                                LocalPopChoice(e_23);
                                                              }
                                                            else
                                                              {
                                                                t = d_23;
                                                                {
                                                                  ATerm f_23 = t;
                                                                  int g_23 = stack_ptr;
                                                                  if((PushChoice() == 0))
                                                                    {
                                                                      ATerm c_3 (ATerm t)
                                                                      {
                                                                        ATerm a_48 = NULL;
                                                                        a_48 = t;
                                                                        if(((x_47 != NULL) && (x_47 != a_48)))
                                                                          _fail(a_48);
                                                                        else
                                                                          x_47 = a_48;
                                                                        return(t);
                                                                      }
                                                                      t = FFID_2(t, SH_0, c_3);
                                                                      LocalPopChoice(g_23);
                                                                    }
                                                                  else
                                                                    {
                                                                      t = f_23;
                                                                      {
                                                                        ATerm h_23 = t;
                                                                        int i_23 = stack_ptr;
                                                                        if((PushChoice() == 0))
                                                                          {
                                                                            ATerm f_3 (ATerm t)
                                                                            {
                                                                              ATerm b_48 = NULL;
                                                                              b_48 = t;
                                                                              if(((x_47 != NULL) && (x_47 != b_48)))
                                                                                _fail(b_48);
                                                                              else
                                                                                x_47 = b_48;
                                                                              return(t);
                                                                            }
                                                                            t = FFID_2(t, SZ_0, f_3);
                                                                            LocalPopChoice(i_23);
                                                                          }
                                                                        else
                                                                          {
                                                                            t = h_23;
                                                                            {
                                                                              ATerm d_48 = NULL;
                                                                              ATerm g_3 (ATerm t)
                                                                              {
                                                                                ATerm c_48 = NULL;
                                                                                c_48 = t;
                                                                                if(((w_47 != NULL) && (w_47 != c_48)))
                                                                                  _fail(c_48);
                                                                                else
                                                                                  w_47 = c_48;
                                                                                return(t);
                                                                              }
                                                                              t = FFID_2(t, CL_0, g_3);
                                                                              {
                                                                                t = (ATerm) ATmakeAppl(sym_BOXCOLOR_1, not_null(w_47));
                                                                                {
                                                                                  d_48 = t;
                                                                                  if(((x_47 != NULL) && (x_47 != d_48)))
                                                                                    _fail(d_48);
                                                                                  else
                                                                                    x_47 = d_48;
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
                                                    t = (ATerm) ATmakeAppl(sym_BOXFONT_2, not_null(x_47), (ATerm) ATmakeAppl(sym_FBOX_2, (ATerm)ATmakeAppl(sym_F_1, not_null(o_45)), not_null(q_45)));
                                                    LocalPopChoice(a_23);
                                                  }
                                                else
                                                  {
                                                    t = z_22;
                                                    t = b_49(t);
                                                  }
                                              }
                                            }
                                          else
                                            {
                                              if(((ATgetType(p_45) == AT_LIST) && ATisEmpty(p_45)))
                                                {
                                                  {
                                                    ATerm j_23 = t;
                                                    int k_23 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        t = not_null(q_45);
                                                        LocalPopChoice(k_23);
                                                      }
                                                    else
                                                      {
                                                        t = j_23;
                                                        t = b_49(t);
                                                      }
                                                  }
                                                }
                                              else
                                                {
                                                  t = b_49(t);
                                                }
                                            }
                                        }
                                      else
                                        {
                                          t = b_49(t);
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
                                              t = c_49(t);
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
                                              t = d_49(t);
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
ATerm abox2latex_1 (ATerm t, ATerm u_66 (ATerm))
{
  ATerm w_50 = NULL;
  ATerm y_50 = NULL,a_51 = NULL;
  w_50 = t;
  {
    ATerm l_23;
    l_23 = t;
    {
      ATerm z_50 = NULL;
      t = term_t_18;
      {
        t = u_66(t);
        {
          z_50 = t;
          if(((y_50 != NULL) && (y_50 != z_50)))
            _fail(z_50);
          else
            y_50 = z_50;
        }
      }
    }
    t = l_23;
    {
      ATerm b_51 = NULL;
      t = not_null(w_50);
      {
        ATerm h_3 (ATerm t)
        {
          ATerm m_23 = t;
          int n_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Abox2latex_0(t);
              LocalPopChoice(n_23);
            }
          else
            {
              t = m_23;
              {
              }
            }
          return(t);
        }
        t = topdown_1(t, h_3);
        {
          b_51 = t;
          if(((a_51 != NULL) && (a_51 != b_51)))
            _fail(b_51);
          else
            a_51 = b_51;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym_BOXENV_2, (ATerm)ATinsert(ATempty, not_null(y_50)), not_null(a_51));
        t = latex2text_0(t);
      }
    }
  }
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm p_89 (ATerm))
{
  t = fetch_1(t, p_89);
  return(t);
}
ATerm Snd_0 (ATerm t)
{
  ATerm m_51 = NULL;
  ATerm o_51 = NULL,p_51 = NULL,q_51 = NULL;
  m_51 = t;
  {
    ATerm r_51 = NULL;
    ATerm w_51 = NULL,x_51 = NULL,y_51 = NULL,z_51 = NULL,a_52 = NULL,b_52 = NULL,c_52 = NULL;
    t = not_null(m_51);
    {
      r_51 = t;
      {
        t = SSL_explode_term(not_null(r_51));
        {
          w_51 = t;
          i_51 :
          if(match_cons(w_51, sym__2))
            {
              x_51 = ATgetArgument(w_51, 0);
              y_51 = ATgetArgument(w_51, 1);
              j_51 :
              if(match_string(x_51, ""))
                {
                  k_51 :
                  if(((ATgetType(y_51) == AT_LIST) && !(ATisEmpty(y_51))))
                    {
                      z_51 = ATgetFirst((ATermList) y_51);
                      a_52 = (ATerm) ATgetNext((ATermList) y_51);
                      l_51 :
                      if(((ATgetType(a_52) == AT_LIST) && !(ATisEmpty(a_52))))
                        {
                          b_52 = ATgetFirst((ATermList) a_52);
                          c_52 = (ATerm) ATgetNext((ATermList) a_52);
                          {
                            if(((o_51 != NULL) && (o_51 != z_51)))
                              _fail(z_51);
                            else
                              o_51 = z_51;
                            {
                              if(((q_51 != NULL) && (q_51 != b_52)))
                                _fail(b_52);
                              else
                                q_51 = b_52;
                              if(((p_51 != NULL) && (p_51 != c_52)))
                                _fail(c_52);
                              else
                                p_51 = c_52;
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
    t = not_null(q_51);
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm j_52 = NULL;
  ATerm o_23;
  o_23 = t;
  {
    ATerm p_23 = t;
    int q_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_3 (ATerm t)
        {
          ATerm k_52 = NULL,l_52 = NULL;
          k_52 = t;
          h_52 :
          if(match_cons(k_52, sym_Input_1))
            {
              l_52 = ATgetArgument(k_52, 0);
              if(((j_52 != NULL) && (j_52 != l_52)))
                _fail(l_52);
              else
                j_52 = l_52;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = fetch_1(t, i_3);
        LocalPopChoice(q_23);
      }
    else
      {
        t = p_23;
        {
          ATerm m_52 = NULL;
          t = term_r_23;
          {
            m_52 = t;
            if(((j_52 != NULL) && (j_52 != m_52)))
              _fail(m_52);
            else
              j_52 = m_52;
          }
        }
      }
  }
  t = o_23;
  {
    ATerm l_3 (ATerm t)
    {
      t = not_null(j_52);
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
    ATerm t_52 = NULL,u_52 = NULL,v_52 = NULL,w_52 = NULL,x_52 = NULL;
    t_52 = t;
    q_52 :
    if(((ATgetType(t_52) == AT_LIST) && !(ATisEmpty(t_52))))
      {
        u_52 = ATgetFirst((ATermList) t_52);
        v_52 = (ATerm) ATgetNext((ATermList) t_52);
        r_52 :
        if(((ATgetType(v_52) == AT_LIST) && !(ATisEmpty(v_52))))
          {
            w_52 = ATgetFirst((ATermList) v_52);
            x_52 = (ATerm) ATgetNext((ATermList) v_52);
            s_52 :
            if(((ATgetType(x_52) == AT_LIST) && ATisEmpty(x_52)))
              {
                {
                  t = (ATerm) ATmakeAppl(sym__3, term_s_14, not_null(u_52), not_null(w_52));
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
  ATerm c_53 = NULL;
  ATerm s_23 = t;
  int t_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_53 = NULL;
      k_53 = t;
      {
        if(((c_53 != NULL) && (c_53 != k_53)))
          _fail(k_53);
        else
          c_53 = k_53;
        t = SSL_ReadFromFile(not_null(c_53));
      }
      LocalPopChoice(t_23);
    }
  else
    {
      t = s_23;
      {
        ATerm n_3 (ATerm t)
        {
          t = term_u_23;
          return(t);
        }
        t = debug_1(t, n_3);
        _fail(t);
      }
    }
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
  ATerm v_23;
  v_23 = t;
  {
    t = term_s_14;
    t = table_create_0(t);
  }
  t = v_23;
  {
    ATerm o_3 (ATerm t)
    {
      t = (ATerm) ATempty;
      return(t);
    }
    t = reverse_acc_2(t, _id, o_3);
    {
      ATerm s_3 (ATerm t)
      {
        t = ReadFromFile_0(t);
        t = StoreEntries_0(t);
        return(t);
      }
      t = map_1(t, s_3);
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
ATerm fetch_1 (ATerm t, ATerm b_75 (ATerm))
{
  ATerm x_53 (ATerm t)
  {
    ATerm w_23 = t;
    int x_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, b_75, _id);
        LocalPopChoice(x_23);
      }
    else
      {
        t = w_23;
        t = Cons_2(t, _id, x_53);
      }
    return(t);
  }
  t = x_53(t);
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm t_80 (ATerm), ATerm u_80 (ATerm))
{
  ATerm b_54 = NULL,c_54 = NULL,d_54 = NULL;
  b_54 = t;
  a_54 :
  if(((ATgetType(b_54) == AT_LIST) && !(ATisEmpty(b_54))))
    {
      c_54 = ATgetFirst((ATermList) b_54);
      d_54 = (ATerm) ATgetNext((ATermList) b_54);
      {
        t = u_80(t);
        {
          ATerm t_3 (ATerm t)
          {
            ATerm g_54 = NULL;
            g_54 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(c_54), not_null(g_54));
              t = t_80(t);
            }
            return(t);
          }
          t = fetch_1(t, t_3);
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
ATerm union_1 (ATerm t, ATerm p_80 (ATerm))
{
  ATerm m_54 = NULL,n_54 = NULL,o_54 = NULL;
  m_54 = t;
  l_54 :
  if(match_cons(m_54, sym__2))
    {
      n_54 = ATgetArgument(m_54, 0);
      o_54 = ATgetArgument(m_54, 1);
      {
        t = not_null(n_54);
        {
          ATerm s_54 (ATerm t)
          {
            ATerm y_23 = t;
            int z_23 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(o_54);
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
                      ATerm u_3 (ATerm t)
                      {
                        t = not_null(o_54);
                        return(t);
                      }
                      t = HdMember_p__2(t, p_80, u_3);
                      t = s_54(t);
                      LocalPopChoice(b_24);
                    }
                  else
                    {
                      t = a_24;
                      t = Cons_2(t, _id, s_54);
                    }
                }
              }
            return(t);
          }
          t = s_54(t);
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
ATerm foldr_3 (ATerm t, ATerm i_81 (ATerm), ATerm j_81 (ATerm), ATerm k_81 (ATerm))
{
  ATerm c_24 = t;
  int d_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = i_81(t);
      LocalPopChoice(d_24);
    }
  else
    {
      t = c_24;
      {
        ATerm x_54 = NULL,y_54 = NULL,z_54 = NULL;
        x_54 = t;
        w_54 :
        if(((ATgetType(x_54) == AT_LIST) && !(ATisEmpty(x_54))))
          {
            y_54 = ATgetFirst((ATermList) x_54);
            z_54 = (ATerm) ATgetNext((ATermList) x_54);
            {
              ATerm c_55 = NULL,e_55 = NULL;
              ATerm e_24;
              e_24 = t;
              {
                ATerm d_55 = NULL;
                t = not_null(y_54);
                {
                  t = k_81(t);
                  {
                    d_55 = t;
                    if(((c_55 != NULL) && (c_55 != d_55)))
                      _fail(d_55);
                    else
                      c_55 = d_55;
                  }
                }
              }
              t = e_24;
              {
                ATerm f_55 = NULL;
                t = not_null(z_54);
                {
                  t = foldr_3(t, i_81, j_81, k_81);
                  {
                    f_55 = t;
                    if(((e_55 != NULL) && (e_55 != f_55)))
                      _fail(f_55);
                    else
                      e_55 = f_55;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(c_55), not_null(e_55));
                  t = j_81(t);
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
ATerm crush_3 (ATerm t, ATerm g_80 (ATerm), ATerm h_80 (ATerm), ATerm i_80 (ATerm))
{
  ATerm n_55 = NULL;
  ATerm p_55 = NULL;
  n_55 = t;
  {
    ATerm q_55 = NULL;
    ATerm s_55 = NULL,t_55 = NULL,u_55 = NULL;
    t = not_null(n_55);
    {
      q_55 = t;
      {
        t = SSL_explode_term(not_null(q_55));
        {
          s_55 = t;
          m_55 :
          if(match_cons(s_55, sym__2))
            {
              t_55 = ATgetArgument(s_55, 0);
              u_55 = ATgetArgument(s_55, 1);
              if(((p_55 != NULL) && (p_55 != u_55)))
                _fail(u_55);
              else
                p_55 = u_55;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(p_55);
      t = foldr_3(t, g_80, h_80, i_80);
    }
  }
  return(t);
}
ATerm collect_om_1 (ATerm t, ATerm f_79 (ATerm))
{
  ATerm b_56 (ATerm t)
  {
    ATerm f_24 = t;
    int g_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_55 = NULL;
        ATerm a_56 = NULL;
        t = f_79(t);
        {
          a_56 = t;
          if(((z_55 != NULL) && (z_55 != a_56)))
            _fail(a_56);
          else
            z_55 = a_56;
        }
        t = (ATerm) ATinsert(ATempty, not_null(z_55));
        LocalPopChoice(g_24);
      }
    else
      {
        t = f_24;
        {
          ATerm v_3 (ATerm t)
          {
            t = (ATerm) ATempty;
            return(t);
          }
          ATerm w_3 (ATerm t)
          {
            t = union_1(t, eq_0);
            return(t);
          }
          t = crush_3(t, v_3, w_3, b_56);
        }
      }
    return(t);
  }
  t = b_56(t);
  return(t);
}
ATerm collect_1 (ATerm t, ATerm h_79 (ATerm))
{
  t = collect_om_1(t, h_79);
  return(t);
}
ATerm obsolete_1 (ATerm t, ATerm x_85 (ATerm))
{
  ATerm h_24;
  h_24 = t;
  {
    t = x_85(t);
    {
      ATerm x_3 (ATerm t)
      {
        t = term_i_24;
        return(t);
      }
      t = debug_1(t, x_3);
    }
  }
  t = h_24;
  return(t);
}
ATerm open_file_0 (ATerm t)
{
  ATerm h_56 = NULL,i_56 = NULL;
  ATerm j_24 = t;
  int k_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_56 = NULL,k_56 = NULL,l_56 = NULL;
      j_56 = t;
      e_56 :
      if(match_cons(j_56, sym__2))
        {
          k_56 = ATgetArgument(j_56, 0);
          l_56 = ATgetArgument(j_56, 1);
          {
            if(((i_56 != NULL) && (i_56 != k_56)))
              _fail(k_56);
            else
              i_56 = k_56;
            if(((h_56 != NULL) && (h_56 != l_56)))
              _fail(l_56);
            else
              h_56 = l_56;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(k_24);
      t = SSL_open_file(not_null(i_56), not_null(h_56));
    }
  else
    {
      t = j_24;
      {
        ATerm m_56 = NULL;
        ATerm n_56 = NULL;
        ATerm y_3 (ATerm t)
        {
          t = term_l_24;
          return(t);
        }
        t = obsolete_1(t, y_3);
        {
          m_56 = t;
          {
            if(((i_56 != NULL) && (i_56 != m_56)))
              _fail(m_56);
            else
              i_56 = m_56;
            {
              ATerm m_24;
              m_24 = t;
              {
                ATerm o_56 = NULL;
                t = term_n_24;
                {
                  o_56 = t;
                  if(((n_56 != NULL) && (n_56 != o_56)))
                    _fail(o_56);
                  else
                    n_56 = o_56;
                }
              }
              t = m_24;
              t = SSL_open_file(not_null(i_56), not_null(n_56));
            }
          }
        }
      }
    }
  return(t);
}
ATerm usage_0 (ATerm t)
{
  ATerm w_56 = NULL;
  ATerm o_24;
  o_24 = t;
  {
    ATerm z_3 (ATerm t)
    {
      ATerm x_56 = NULL,y_56 = NULL;
      x_56 = t;
      v_56 :
      if(match_cons(x_56, sym_Program_1))
        {
          y_56 = ATgetArgument(x_56, 0);
          if(((w_56 != NULL) && (w_56 != y_56)))
            _fail(y_56);
          else
            w_56 = y_56;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = fetch_1(t, z_3);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_l_6, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_q_24), not_null(w_56)), term_p_24));
      {
        t = printnl_0(t);
        {
          t = term_s_6;
          t = exit_0(t);
        }
      }
    }
  }
  t = o_24;
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm e_57 = NULL;
  e_57 = t;
  d_57 :
  if(match_cons(e_57, sym_Version_0))
    {
      ATerm g_57 = NULL,i_57 = NULL;
      ATerm r_24;
      r_24 = t;
      {
        ATerm h_57 = NULL;
        t = SSLgetAnnotations(not_null(e_57));
        {
          h_57 = t;
          if(((g_57 != NULL) && (g_57 != h_57)))
            _fail(h_57);
          else
            g_57 = h_57;
        }
      }
      t = r_24;
      {
        ATerm j_57 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(g_57));
        {
          j_57 = t;
          if(((i_57 != NULL) && (i_57 != j_57)))
            _fail(j_57);
          else
            i_57 = j_57;
        }
        t = not_null(i_57);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm s_86 (ATerm))
{
  ATerm a_4 (ATerm t)
  {
    ATerm s_24 = t;
    int t_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(t_24);
      }
    else
      {
        t = s_24;
        {
          ATerm u_24 = t;
          int v_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(v_24);
            }
          else
            {
              t = u_24;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = fetch_1(t, a_4);
  t = s_86(t);
  return(t);
}
ATerm ArgOption_2 (ATerm t, ATerm i_90 (ATerm), ATerm j_90 (ATerm))
{
  ATerm b_4 (ATerm t)
  {
    t = term_w_24;
    return(t);
  }
  t = ArgOption_3(t, i_90, j_90, b_4);
  return(t);
}
ATerm version_option_0 (ATerm t)
{
  ATerm e_4 (ATerm t)
  {
    ATerm o_57 = NULL;
    o_57 = t;
    n_57 :
    if(!(match_string(o_57, "-v")))
      {
        if(!(match_string(o_57, "--version")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm f_4 (ATerm t)
  {
    t = term_y_24;
    t = set_config_0(t);
    t = term_z_24;
    return(t);
  }
  ATerm g_4 (ATerm t)
  {
    t = term_a_25;
    return(t);
  }
  t = Option_3(t, e_4, f_4, g_4);
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm h_4 (ATerm t)
  {
    ATerm r_57 = NULL;
    r_57 = t;
    p_57 :
    if(!(match_string(r_57, "-k")))
      {
        if(!(match_string(r_57, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm i_4 (ATerm t)
  {
    ATerm b_25;
    b_25 = t;
    {
      ATerm s_57 = NULL;
      ATerm t_57 = NULL;
      t = string_to_int_0(t);
      {
        t_57 = t;
        if(((s_57 != NULL) && (s_57 != t_57)))
          _fail(t_57);
        else
          s_57 = t_57;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_c_25, not_null(s_57));
        t = set_config_0(t);
      }
    }
    t = b_25;
    return(t);
  }
  ATerm j_4 (ATerm t)
  {
    t = term_d_25;
    return(t);
  }
  t = ArgOption_3(t, h_4, i_4, j_4);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm w_57 = NULL;
  w_57 = t;
  t = SSL_string_to_int(not_null(w_57));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm e_25 = t;
  int f_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_4 (ATerm t)
      {
        ATerm i_58 = NULL;
        i_58 = t;
        z_57 :
        if(!(match_string(i_58, "-S")))
          {
            if(!(match_string(i_58, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm l_4 (ATerm t)
      {
        t = term_g_25;
        t = set_config_0(t);
        t = term_h_25;
        return(t);
      }
      ATerm m_4 (ATerm t)
      {
        t = term_i_25;
        return(t);
      }
      t = Option_3(t, k_4, l_4, m_4);
      LocalPopChoice(f_25);
    }
  else
    {
      t = e_25;
      {
        ATerm j_25 = t;
        int k_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_4 (ATerm t)
            {
              ATerm j_58 = NULL;
              j_58 = t;
              a_58 :
              if(!(match_string(j_58, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm o_4 (ATerm t)
            {
              ATerm m_58 = NULL;
              ATerm l_25;
              l_25 = t;
              {
                ATerm k_58 = NULL;
                ATerm l_58 = NULL;
                t = string_to_int_0(t);
                {
                  l_58 = t;
                  if(((k_58 != NULL) && (k_58 != l_58)))
                    _fail(l_58);
                  else
                    k_58 = l_58;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_a_7, not_null(k_58));
                  t = set_config_0(t);
                }
              }
              t = l_25;
              {
                ATerm n_58 = NULL;
                n_58 = t;
                if(((m_58 != NULL) && (m_58 != n_58)))
                  _fail(n_58);
                else
                  m_58 = n_58;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(m_58));
              }
              return(t);
            }
            ATerm p_4 (ATerm t)
            {
              t = term_m_25;
              return(t);
            }
            t = ArgOption_3(t, n_4, o_4, p_4);
            LocalPopChoice(k_25);
          }
        else
          {
            t = j_25;
            {
              ATerm q_4 (ATerm t)
              {
                ATerm o_58 = NULL;
                o_58 = t;
                h_58 :
                if(!(match_string(o_58, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm r_4 (ATerm t)
              {
                t = term_p_25;
                t = set_config_0(t);
                t = term_q_25;
                return(t);
              }
              ATerm s_4 (ATerm t)
              {
                t = term_r_25;
                return(t);
              }
              t = Option_3(t, q_4, r_4, s_4);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0 (ATerm t)
{
  ATerm s_25 = t;
  int t_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
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
            t = keep_option_0(t);
            LocalPopChoice(v_25);
          }
        else
          {
            t = u_25;
            t = version_option_0(t);
          }
      }
    }
  return(t);
}
ATerm output_option_0 (ATerm t)
{
  ATerm t_4 (ATerm t)
  {
    ATerm w_58 = NULL;
    w_58 = t;
    r_58 :
    if(!(match_string(w_58, "-o")))
      {
        if(!(match_string(w_58, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm u_4 (ATerm t)
  {
    ATerm z_58 = NULL;
    ATerm w_25;
    w_25 = t;
    {
      ATerm x_58 = NULL;
      ATerm y_58 = NULL;
      y_58 = t;
      if(((x_58 != NULL) && (x_58 != y_58)))
        _fail(y_58);
      else
        x_58 = y_58;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_x_25, not_null(x_58));
        t = set_config_0(t);
      }
    }
    t = w_25;
    {
      ATerm a_59 = NULL;
      a_59 = t;
      if(((z_58 != NULL) && (z_58 != a_59)))
        _fail(a_59);
      else
        z_58 = a_59;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(z_58));
    }
    return(t);
  }
  ATerm v_4 (ATerm t)
  {
    t = term_y_25;
    return(t);
  }
  t = ArgOption_3(t, t_4, u_4, v_4);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm z_25 = t;
  int a_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      LocalPopChoice(a_26);
    }
  else
    {
      t = z_25;
      {
        ATerm w_4 (ATerm t)
        {
          ATerm g_59 = NULL;
          g_59 = t;
          f_59 :
          if(!(match_string(g_59, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm x_4 (ATerm t)
        {
          t = term_c_26;
          t = set_config_0(t);
          t = term_d_26;
          return(t);
        }
        ATerm y_4 (ATerm t)
        {
          t = term_e_26;
          return(t);
        }
        t = Option_3(t, w_4, x_4, y_4);
      }
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm o_59 = NULL,p_59 = NULL,q_59 = NULL,r_59 = NULL,s_59 = NULL;
  o_59 = t;
  k_59 :
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
                ATerm f_26;
                f_26 = t;
                {
                  t = not_null(p_59);
                  t = j_0(t);
                }
                t = f_26;
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
  ATerm z_4 (ATerm t)
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
  ATerm a_5 (ATerm t)
  {
    ATerm h_60 = NULL;
    ATerm g_26;
    g_26 = t;
    {
      ATerm f_60 = NULL;
      ATerm g_60 = NULL;
      g_60 = t;
      if(((f_60 != NULL) && (f_60 != g_60)))
        _fail(g_60);
      else
        f_60 = g_60;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_h_26, not_null(f_60));
        t = set_config_0(t);
      }
    }
    t = g_26;
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
  ATerm b_5 (ATerm t)
  {
    t = term_i_26;
    return(t);
  }
  t = ArgOption_3(t, z_4, a_5, b_5);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm j_26 = t;
  int l_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      LocalPopChoice(l_26);
    }
  else
    {
      t = j_26;
      {
        ATerm m_26 = t;
        int n_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0(t);
            LocalPopChoice(n_26);
          }
        else
          {
            t = m_26;
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
  ATerm p_26;
  p_26 = t;
  {
    ATerm z_60 = NULL;
    ATerm c_61 = NULL;
    ATerm q_26 = t;
    int r_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        LocalPopChoice(r_26);
      }
    else
      {
        t = q_26;
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
      t = (ATerm) ATmakeAppl(sym__2, term_s_26, not_null(z_60));
      t = printnl_0(t);
    }
  }
  t = p_26;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm q_90 (ATerm))
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
          ATerm t_26;
          t_26 = t;
          {
            ATerm r_61 = NULL,t_61 = NULL,v_61 = NULL;
            ATerm u_26;
            u_26 = t;
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
            t = u_26;
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
          t = t_26;
          {
            ATerm c_5 (ATerm t)
            {
              t = not_null(q_61);
              return(t);
            }
            t = reverse_acc_2(t, h_0, c_5);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(n_61) == AT_LIST) && ATisEmpty(n_61)))
        {
          {
            t = term_t_18;
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
  ATerm d_5 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, d_5);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm p_90 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm g_66 (ATerm))
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
            t = g_66(t);
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
  ATerm v_26 = t;
  int w_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_62 = NULL;
      t = term_c_7;
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
      LocalPopChoice(w_26);
    }
  else
    {
      t = v_26;
      {
        ATerm e_5 (ATerm t)
        {
          ATerm f_5 (ATerm t)
          {
            ATerm z_62 = NULL;
            z_62 = t;
            if(((x_62 != NULL) && (x_62 != z_62)))
              _fail(z_62);
            else
              x_62 = z_62;
            return(t);
          }
          t = Program_1(t, f_5);
          return(t);
        }
        t = fetch_1(t, e_5);
      }
    }
  {
    t = term_z_26;
    {
      t = echo_0(t);
      {
        t = term_g_27;
        {
          t = table_get_0(t);
          {
            ATerm g_5 (ATerm t)
            {
              t = (ATerm) ATempty;
              return(t);
            }
            t = reverse_acc_2(t, _id, g_5);
            {
              ATerm h_5 (ATerm t)
              {
                ATerm a_63 = NULL;
                ATerm b_63 = NULL;
                b_63 = t;
                if(((a_63 != NULL) && (a_63 != b_63)))
                  _fail(b_63);
                else
                  a_63 = b_63;
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(a_63)), term_h_27);
                  t = echo_0(t);
                }
                return(t);
              }
              t = map_1(t, h_5);
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
  ATerm i_27;
  i_27 = t;
  {
    ATerm g_63 = NULL;
    ATerm h_63 = NULL;
    h_63 = t;
    if(((g_63 != NULL) && (g_63 != h_63)))
      _fail(h_63);
    else
      g_63 = h_63;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_l_6, (ATerm) ATinsert(ATempty, not_null(g_63)));
      t = printnl_0(t);
    }
  }
  t = i_27;
  return(t);
}
ATerm say_1 (ATerm t, ATerm r_85 (ATerm))
{
  ATerm j_27;
  j_27 = t;
  {
    t = r_85(t);
    t = debug_0(t);
  }
  t = j_27;
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm h_66 (ATerm))
{
  ATerm o_63 = NULL,p_63 = NULL;
  o_63 = t;
  n_63 :
  if(match_cons(o_63, sym_Undefined_1))
    {
      p_63 = ATgetArgument(o_63, 0);
      {
        ATerm s_63 = NULL,u_63 = NULL;
        ATerm t_63 = NULL;
        t = SSLgetAnnotations(not_null(o_63));
        {
          t_63 = t;
          if(((s_63 != NULL) && (s_63 != t_63)))
            _fail(t_63);
          else
            s_63 = t_63;
        }
        {
          t = not_null(p_63);
          {
            ATerm w_63 = NULL;
            t = h_66(t);
            {
              u_63 = t;
              {
                ATerm x_63 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(u_63)), not_null(s_63));
                {
                  x_63 = t;
                  if(((w_63 != NULL) && (w_63 != x_63)))
                    _fail(x_63);
                  else
                    w_63 = x_63;
                }
                t = not_null(w_63);
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
  ATerm g_64 = NULL;
  g_64 = t;
  f_64 :
  if(match_cons(g_64, sym_Help_0))
    {
      ATerm i_64 = NULL,k_64 = NULL;
      ATerm m_27;
      m_27 = t;
      {
        ATerm j_64 = NULL;
        t = SSLgetAnnotations(not_null(g_64));
        {
          j_64 = t;
          if(((i_64 != NULL) && (i_64 != j_64)))
            _fail(j_64);
          else
            i_64 = j_64;
        }
      }
      t = m_27;
      {
        ATerm l_64 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(i_64));
        {
          l_64 = t;
          if(((k_64 != NULL) && (k_64 != l_64)))
            _fail(l_64);
          else
            k_64 = l_64;
        }
        t = not_null(k_64);
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
  ATerm q_64 = NULL;
  q_64 = t;
  t = SSL_implode_string(not_null(q_64));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm q_27 = t;
  int r_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(r_27);
    }
  else
    {
      t = q_27;
      {
        ATerm v_64 = NULL,w_64 = NULL,x_64 = NULL;
        v_64 = t;
        u_64 :
        if(((ATgetType(v_64) == AT_LIST) && !(ATisEmpty(v_64))))
          {
            w_64 = ATgetFirst((ATermList) v_64);
            x_64 = (ATerm) ATgetNext((ATermList) v_64);
            {
              t = not_null(w_64);
              {
                ATerm l_5 (ATerm t)
                {
                  t = not_null(x_64);
                  t = concat_0(t);
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
      }
    }
  return(t);
}
ATerm conc_more_lists_0 (ATerm t)
{
  ATerm h_65 = NULL;
  ATerm j_65 = NULL;
  h_65 = t;
  {
    ATerm k_65 = NULL;
    ATerm m_65 = NULL,n_65 = NULL,o_65 = NULL;
    t = not_null(h_65);
    {
      k_65 = t;
      {
        t = SSL_explode_term(not_null(k_65));
        {
          m_65 = t;
          f_65 :
          if(match_cons(m_65, sym__2))
            {
              n_65 = ATgetArgument(m_65, 0);
              o_65 = ATgetArgument(m_65, 1);
              g_65 :
              if(match_string(n_65, ""))
                {
                  if(((j_65 != NULL) && (j_65 != o_65)))
                    _fail(o_65);
                  else
                    j_65 = o_65;
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
      t = not_null(j_65);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm h_75 (ATerm))
{
  ATerm s_65 (ATerm t)
  {
    ATerm t_27 = t;
    int u_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, s_65);
        LocalPopChoice(u_27);
      }
    else
      {
        t = t_27;
        {
          t = Nil_0(t);
          t = h_75(t);
        }
      }
    return(t);
  }
  t = s_65(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm v_65 = NULL,w_65 = NULL,x_65 = NULL;
  v_65 = t;
  u_65 :
  if(match_cons(v_65, sym__2))
    {
      w_65 = ATgetArgument(v_65, 0);
      x_65 = ATgetArgument(v_65, 1);
      {
        t = not_null(w_65);
        {
          ATerm m_5 (ATerm t)
          {
            t = not_null(x_65);
            return(t);
          }
          t = at_end_1(t, m_5);
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
  ATerm v_27 = t;
  int w_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      LocalPopChoice(w_27);
    }
  else
    {
      t = v_27;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm c_66 = NULL;
  c_66 = t;
  t = SSL_explode_string(not_null(c_66));
  return(t);
}
ATerm _2 (ATerm t, ATerm s_56 (ATerm), ATerm t_56 (ATerm))
{
  ATerm n_66 = NULL,o_66 = NULL,p_66 = NULL;
  n_66 = t;
  m_66 :
  if(match_cons(n_66, sym__2))
    {
      o_66 = ATgetArgument(n_66, 0);
      p_66 = ATgetArgument(n_66, 1);
      {
        ATerm a_67 = NULL,d_67 = NULL;
        ATerm c_67 = NULL;
        t = SSLgetAnnotations(not_null(n_66));
        {
          c_67 = t;
          if(((a_67 != NULL) && (a_67 != c_67)))
            _fail(c_67);
          else
            a_67 = c_67;
        }
        {
          t = not_null(o_66);
          {
            ATerm f_67 = NULL;
            t = s_56(t);
            {
              d_67 = t;
              {
                t = not_null(p_66);
                {
                  ATerm h_67 = NULL;
                  t = t_56(t);
                  {
                    f_67 = t;
                    {
                      ATerm i_67 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(d_67), not_null(f_67)), not_null(a_67));
                      {
                        i_67 = t;
                        if(((h_67 != NULL) && (h_67 != i_67)))
                          _fail(i_67);
                        else
                          h_67 = i_67;
                      }
                      t = not_null(h_67);
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
    ATerm x_27 = t;
    int y_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = conc_two_lists_0(t);
        LocalPopChoice(y_27);
      }
    else
      {
        t = x_27;
        t = conc_more_lists_0(t);
      }
    t = implode_string_0(t);
  }
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm q_67 = NULL,r_67 = NULL,s_67 = NULL;
  q_67 = t;
  p_67 :
  if(match_cons(q_67, sym__2))
    {
      r_67 = ATgetArgument(q_67, 0);
      s_67 = ATgetArgument(q_67, 1);
      {
        ATerm z_27;
        z_27 = t;
        t = SSL_printnl(not_null(r_67), not_null(s_67));
        t = z_27;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm q_85 (ATerm))
{
  ATerm a_28;
  a_28 = t;
  {
    ATerm y_67 = NULL,a_68 = NULL;
    ATerm b_28;
    b_28 = t;
    {
      ATerm z_67 = NULL;
      t = q_85(t);
      {
        z_67 = t;
        if(((y_67 != NULL) && (y_67 != z_67)))
          _fail(z_67);
        else
          y_67 = z_67;
      }
    }
    t = b_28;
    {
      ATerm b_68 = NULL;
      b_68 = t;
      if(((a_68 != NULL) && (a_68 != b_68)))
        _fail(b_68);
      else
        a_68 = b_68;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_l_6, (ATerm) ATinsert(ATinsert(ATempty, not_null(a_68)), not_null(y_67)));
        t = printnl_0(t);
      }
    }
  }
  t = a_28;
  return(t);
}
ATerm map_1 (ATerm t, ATerm s_74 (ATerm))
{
  ATerm e_68 (ATerm t)
  {
    ATerm c_28 = t;
    int d_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(d_28);
      }
    else
      {
        t = c_28;
        t = Cons_2(t, s_74, e_68);
      }
    return(t);
  }
  t = e_68(t);
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm g_28 = t;
  int l_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(l_28);
    }
  else
    {
      t = g_28;
      {
        ATerm m_28 = t;
        int n_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_5 (ATerm t)
            {
              ATerm o_28 = t;
              int p_28 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = eval_config_0(t);
                  LocalPopChoice(p_28);
                }
              else
                {
                  t = o_28;
                  {
                  }
                }
              return(t);
            }
            t = map_1(t, n_5);
            LocalPopChoice(n_28);
          }
        else
          {
            t = m_28;
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
                          ATerm q_28 = t;
                          int r_28 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(r_28);
                            }
                          else
                            {
                              t = q_28;
                              {
                                ATerm o_5 (ATerm t)
                                {
                                  t = term_s_28;
                                  return(t);
                                }
                                t = debug_1(t, o_5);
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
                            ATerm t_28;
                            t_28 = t;
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
                            t = t_28;
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
    t = (ATerm) ATmakeAppl(sym__2, term_u_28, not_null(l_69));
    {
      t = table_get_0(t);
      {
        ATerm x_28 = t;
        int c_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = eval_config_0(t);
            {
              ATerm d_29;
              d_29 = t;
              {
                ATerm n_69 = NULL;
                ATerm o_69 = NULL;
                o_69 = t;
                if(((n_69 != NULL) && (n_69 != o_69)))
                  _fail(o_69);
                else
                  n_69 = o_69;
                {
                  t = (ATerm) ATmakeAppl(sym__3, term_u_28, not_null(l_69), not_null(n_69));
                  t = table_put_0(t);
                }
              }
              t = d_29;
            }
            LocalPopChoice(c_29);
          }
        else
          {
            t = x_28;
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
        ATerm e_29;
        e_29 = t;
        {
          ATerm j_70 = NULL;
          ATerm k_70 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(d_70), not_null(e_70));
          {
            ATerm f_29 = t;
            int g_29 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(g_29);
              }
            else
              {
                t = f_29;
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
        t = e_29;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm u_90 (ATerm))
{
  ATerm o_70 = NULL;
  ATerm p_70 = NULL;
  t = term_t_18;
  {
    t = u_90(t);
    {
      p_70 = t;
      if(((o_70 != NULL) && (o_70 != p_70)))
        _fail(p_70);
      else
        o_70 = p_70;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_e_27, term_f_27, not_null(o_70));
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
            ATerm h_29;
            h_29 = t;
            {
              t = not_null(w_70);
              t = a_0(t);
            }
            t = h_29;
            {
              ATerm b_71 = NULL;
              t = term_t_18;
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
  ATerm p_5 (ATerm t)
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
  ATerm q_5 (ATerm t)
  {
    t = term_p_29;
    {
      t = set_config_0(t);
      t = term_q_29;
    }
    return(t);
  }
  ATerm r_5 (ATerm t)
  {
    t = term_r_29;
    return(t);
  }
  t = Option_3(t, p_5, q_5, r_5);
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
ATerm Cons_2 (ATerm t, ATerm b_58 (ATerm), ATerm c_58 (ATerm))
{
  ATerm v_71 = NULL,w_71 = NULL,x_71 = NULL;
  v_71 = t;
  u_71 :
  if(((ATgetType(v_71) == AT_LIST) && !(ATisEmpty(v_71))))
    {
      w_71 = ATgetFirst((ATermList) v_71);
      x_71 = (ATerm) ATgetNext((ATermList) v_71);
      {
        ATerm b_72 = NULL,d_72 = NULL;
        ATerm c_72 = NULL;
        t = SSLgetAnnotations(not_null(v_71));
        {
          c_72 = t;
          if(((b_72 != NULL) && (b_72 != c_72)))
            _fail(c_72);
          else
            b_72 = c_72;
        }
        {
          t = not_null(w_71);
          {
            ATerm f_72 = NULL;
            t = b_58(t);
            {
              d_72 = t;
              {
                t = not_null(x_71);
                {
                  ATerm h_72 = NULL;
                  t = c_58(t);
                  {
                    f_72 = t;
                    {
                      ATerm i_72 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(f_72)), not_null(d_72)), not_null(b_72));
                      {
                        i_72 = t;
                        if(((h_72 != NULL) && (h_72 != i_72)))
                          _fail(i_72);
                        else
                          h_72 = i_72;
                      }
                      t = not_null(h_72);
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
  ATerm s_72 = NULL;
  s_72 = t;
  r_72 :
  if(((ATgetType(s_72) == AT_LIST) && ATisEmpty(s_72)))
    {
      {
        ATerm u_72 = NULL,w_72 = NULL;
        ATerm s_29;
        s_29 = t;
        {
          ATerm v_72 = NULL;
          t = SSLgetAnnotations(not_null(s_72));
          {
            v_72 = t;
            if(((u_72 != NULL) && (u_72 != v_72)))
              _fail(v_72);
            else
              u_72 = v_72;
          }
        }
        t = s_29;
        {
          ATerm x_72 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(u_72));
          {
            x_72 = t;
            if(((w_72 != NULL) && (w_72 != x_72)))
              _fail(x_72);
            else
              w_72 = x_72;
          }
          t = not_null(w_72);
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
  ATerm d_73 = NULL,e_73 = NULL,f_73 = NULL;
  d_73 = t;
  c_73 :
  if(match_cons(d_73, sym__2))
    {
      e_73 = ATgetArgument(d_73, 0);
      f_73 = ATgetArgument(d_73, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_u_28, not_null(e_73), not_null(f_73));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm s_90 (ATerm))
{
  ATerm v_29;
  v_29 = t;
  {
    ATerm w_29 = t;
    int x_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_c_30;
        t = s_90(t);
        LocalPopChoice(x_29);
      }
    else
      {
        t = w_29;
        {
        }
      }
  }
  t = v_29;
  {
    ATerm s_5 (ATerm t)
    {
      ATerm n_73 = NULL;
      ATerm d_30;
      d_30 = t;
      {
        ATerm l_73 = NULL;
        ATerm m_73 = NULL;
        m_73 = t;
        if(((l_73 != NULL) && (l_73 != m_73)))
          _fail(m_73);
        else
          l_73 = m_73;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_c_7, not_null(l_73));
          t = set_config_0(t);
        }
      }
      t = d_30;
      {
        ATerm o_73 = NULL;
        o_73 = t;
        if(((n_73 != NULL) && (n_73 != o_73)))
          _fail(o_73);
        else
          n_73 = o_73;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(n_73));
      }
      return(t);
    }
    ATerm t_5 (ATerm t)
    {
      ATerm g_30 = t;
      int h_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm i_30 = t;
          int j_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(j_30);
            }
          else
            {
              t = i_30;
              {
                t = s_90(t);
                t = Cons_2(t, _id, t_5);
              }
            }
          LocalPopChoice(h_30);
        }
      else
        {
          t = g_30;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, s_5, t_5);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm u_73 = NULL,v_73 = NULL,w_73 = NULL;
  ATerm m_30;
  m_30 = t;
  {
    ATerm x_73 = NULL,y_73 = NULL,z_73 = NULL,a_74 = NULL;
    x_73 = t;
    t_73 :
    if(match_cons(x_73, sym__3))
      {
        y_73 = ATgetArgument(x_73, 0);
        z_73 = ATgetArgument(x_73, 1);
        a_74 = ATgetArgument(x_73, 2);
        {
          if(((u_73 != NULL) && (u_73 != y_73)))
            _fail(y_73);
          else
            u_73 = y_73;
          {
            if(((v_73 != NULL) && (v_73 != z_73)))
              _fail(z_73);
            else
              v_73 = z_73;
            {
              if(((w_73 != NULL) && (w_73 != a_74)))
                _fail(a_74);
              else
                w_73 = a_74;
              t = SSL_table_put(not_null(u_73), not_null(v_73), not_null(w_73));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = m_30;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm r_90 (ATerm))
{
  ATerm d_74 = NULL;
  ATerm n_30;
  n_30 = t;
  {
    t = term_o_30;
    t = table_put_0(t);
  }
  t = n_30;
  {
    ATerm u_5 (ATerm t)
    {
      ATerm t_30 = t;
      int u_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = r_90(t);
          LocalPopChoice(u_30);
        }
      else
        {
          t = t_30;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, u_5);
    {
      ATerm v_30 = t;
      int a_31 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm b_31;
          b_31 = t;
          {
            ATerm c_31 = t;
            int d_31 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = term_k_29;
                t = get_config_0(t);
                LocalPopChoice(d_31);
              }
            else
              {
                t = c_31;
                t = fetch_1(t, Help_0);
              }
          }
          t = b_31;
          {
            t = system_usage_0(t);
            {
              t = term_s_6;
              t = exit_0(t);
            }
          }
          LocalPopChoice(a_31);
        }
      else
        {
          t = v_30;
          {
            ATerm e_31 = t;
            int h_31 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm v_5 (ATerm t)
                {
                  ATerm w_5 (ATerm t)
                  {
                    ATerm e_74 = NULL;
                    e_74 = t;
                    if(((d_74 != NULL) && (d_74 != e_74)))
                      _fail(e_74);
                    else
                      d_74 = e_74;
                    return(t);
                  }
                  t = Undefined_1(t, w_5);
                  return(t);
                }
                t = fetch_1(t, v_5);
                {
                  ATerm x_5 (ATerm t)
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(d_74)), term_m_31);
                    return(t);
                  }
                  t = say_1(t, x_5);
                  {
                    t = system_usage_0(t);
                    {
                      t = term_n_6;
                      t = exit_0(t);
                    }
                  }
                }
                LocalPopChoice(h_31);
              }
            else
              {
                t = e_31;
                {
                }
              }
          }
        }
      {
        ATerm n_31;
        n_31 = t;
        {
          t = term_e_27;
          t = table_destroy_0(t);
        }
        t = n_31;
      }
    }
  }
  return(t);
}
ATerm Abox_2_latex_0 (ATerm t)
{
  ATerm g_75 = NULL;
  ATerm k_75 = NULL,n_75 = NULL;
  ATerm z_5 (ATerm t)
  {
    ATerm o_31 = t;
    int p_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = io_options_0(t);
        LocalPopChoice(p_31);
      }
    else
      {
        t = o_31;
        {
          ATerm s_31 = t;
          int t_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm a_6 (ATerm t)
              {
                ATerm y_74 = NULL;
                y_74 = t;
                g_74 :
                if(!(match_string(y_74, "-t")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm b_6 (ATerm t)
              {
                ATerm z_74 = NULL;
                z_74 = t;
                t = (ATerm) ATmakeAppl(sym_LatexTable_1, not_null(z_74));
                return(t);
              }
              t = ArgOption_2(t, a_6, b_6);
              LocalPopChoice(t_31);
            }
          else
            {
              t = s_31;
              {
                ATerm c_6 (ATerm t)
                {
                  ATerm d_75 = NULL;
                  d_75 = t;
                  i_74 :
                  if(!(match_string(d_75, "-w")))
                    {
                      _fail(t);
                    }
                  return(t);
                }
                ATerm d_6 (ATerm t)
                {
                  ATerm e_75 = NULL;
                  e_75 = t;
                  t = (ATerm) ATmakeAppl(sym_Width_1, not_null(e_75));
                  return(t);
                }
                t = ArgOption_2(t, c_6, d_6);
              }
            }
        }
      }
    return(t);
  }
  t = parse_options_1(t, z_5);
  {
    g_75 = t;
    {
      ATerm u_31 = t;
      int v_31 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = need_help_1(t, usage_0);
          LocalPopChoice(v_31);
        }
      else
        {
          t = u_31;
          {
            ATerm y_31 = t;
            int d_32 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm e_32;
                e_32 = t;
                {
                  ATerm f_32 = t;
                  int g_32 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm e_6 (ATerm t)
                      {
                        ATerm o_75 = NULL,p_75 = NULL;
                        o_75 = t;
                        m_74 :
                        if(match_cons(o_75, sym_Output_1))
                          {
                            p_75 = ATgetArgument(o_75, 0);
                            {
                              if(((n_75 != NULL) && (n_75 != p_75)))
                                _fail(p_75);
                              else
                                n_75 = p_75;
                              {
                                t = not_null(n_75);
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
                      t = fetch_1(t, e_6);
                      LocalPopChoice(g_32);
                    }
                  else
                    {
                      t = f_32;
                      {
                        ATerm q_75 = NULL;
                        t = term_s_26;
                        {
                          q_75 = t;
                          if(((n_75 != NULL) && (n_75 != q_75)))
                            _fail(q_75);
                          else
                            n_75 = q_75;
                        }
                      }
                    }
                }
                t = e_32;
                {
                  ATerm h_32;
                  h_32 = t;
                  {
                    ATerm f_6 (ATerm t)
                    {
                      ATerm r_75 = NULL,u_75 = NULL;
                      r_75 = t;
                      u_74 :
                      if(match_cons(r_75, sym_LatexTable_1))
                        {
                          u_75 = ATgetArgument(r_75, 0);
                          t = not_null(u_75);
                        }
                      else
                        {
                          _fail(t);
                        }
                      return(t);
                    }
                    t = collect_om_1(t, f_6);
                    t = load_tables_0(t);
                  }
                  t = h_32;
                  {
                    t = input_file_0(t);
                    {
                      t = Snd_0(t);
                      {
                        ATerm i_32 = t;
                        int j_32 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm k_32;
                            k_32 = t;
                            {
                              t = not_null(g_75);
                              {
                                ATerm g_6 (ATerm t)
                                {
                                  ATerm w_75 = NULL,x_75 = NULL;
                                  w_75 = t;
                                  w_74 :
                                  if(match_cons(w_75, sym_Width_1))
                                    {
                                      x_75 = ATgetArgument(w_75, 0);
                                      if(((k_75 != NULL) && (k_75 != x_75)))
                                        _fail(x_75);
                                      else
                                        k_75 = x_75;
                                    }
                                  else
                                    {
                                      _fail(t);
                                    }
                                  return(t);
                                }
                                t = fetch_1(t, g_6);
                              }
                            }
                            t = k_32;
                            {
                              ATerm h_6 (ATerm t)
                              {
                                t = not_null(k_75);
                                return(t);
                              }
                              t = abox2latex_1(t, h_6);
                            }
                            LocalPopChoice(j_32);
                          }
                        else
                          {
                            t = i_32;
                            t = abox2latex_0(t);
                          }
                        {
                          ATerm i_6 (ATerm t)
                          {
                            ATerm p_32 = t;
                            int q_32 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = is_string_0(t);
                                {
                                  ATerm r_32;
                                  r_32 = t;
                                  {
                                    ATerm j_6 (ATerm t)
                                    {
                                      t = not_null(n_75);
                                      return(t);
                                    }
                                    ATerm k_6 (ATerm t)
                                    {
                                      ATerm y_75 = NULL;
                                      y_75 = t;
                                      t = (ATerm) ATinsert(ATempty, not_null(y_75));
                                      return(t);
                                    }
                                    t = split_2(t, j_6, k_6);
                                    t = print_0(t);
                                  }
                                  t = r_32;
                                }
                                LocalPopChoice(q_32);
                              }
                            else
                              {
                                t = p_32;
                                {
                                }
                              }
                            return(t);
                          }
                          t = topdown_1(t, i_6);
                          t = report_success_0(t);
                        }
                      }
                    }
                  }
                }
                LocalPopChoice(d_32);
              }
            else
              {
                t = y_31;
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
