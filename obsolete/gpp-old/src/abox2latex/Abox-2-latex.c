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
ATerm term_r_29;
ATerm term_b_29;
ATerm term_p_28;
ATerm term_k_28;
ATerm term_j_28;
ATerm term_i_28;
ATerm term_h_28;
ATerm term_x_27;
ATerm term_u_27;
ATerm term_m_26;
ATerm term_l_26;
ATerm term_k_26;
ATerm term_j_26;
ATerm term_i_26;
ATerm term_d_26;
ATerm term_v_25;
ATerm term_u_25;
ATerm term_r_25;
ATerm term_q_25;
ATerm term_p_25;
ATerm term_o_25;
ATerm term_l_25;
ATerm term_k_25;
ATerm term_e_25;
ATerm term_d_25;
ATerm term_c_25;
ATerm term_b_25;
ATerm term_a_25;
ATerm term_w_24;
ATerm term_v_24;
ATerm term_u_24;
ATerm term_r_24;
ATerm term_q_24;
ATerm term_o_24;
ATerm term_n_24;
ATerm term_m_24;
ATerm term_l_24;
ATerm term_k_24;
ATerm term_e_24;
ATerm term_d_24;
ATerm term_b_24;
ATerm term_z_23;
ATerm term_w_23;
ATerm term_i_23;
ATerm term_f_23;
ATerm term_i_22;
ATerm term_c_22;
ATerm term_a_22;
ATerm term_b_20;
ATerm term_a_20;
ATerm term_z_19;
ATerm term_y_19;
ATerm term_n_19;
ATerm term_s_18;
ATerm term_y_17;
ATerm term_w_17;
ATerm term_v_17;
ATerm term_t_17;
ATerm term_z_16;
ATerm term_v_16;
ATerm term_g_16;
ATerm term_y_15;
ATerm term_x_15;
ATerm term_w_15;
ATerm term_v_15;
ATerm term_u_15;
ATerm term_t_15;
ATerm term_s_15;
ATerm term_r_15;
ATerm term_p_15;
ATerm term_o_15;
ATerm term_n_15;
ATerm term_l_15;
ATerm term_d_15;
ATerm term_a_15;
ATerm term_z_14;
ATerm term_w_14;
ATerm term_g_13;
ATerm term_f_13;
ATerm term_y_11;
ATerm term_x_11;
ATerm term_u_11;
ATerm term_r_11;
ATerm term_o_11;
ATerm term_f_11;
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
ATerm term_p_10;
ATerm term_o_10;
ATerm term_n_10;
ATerm term_m_10;
ATerm term_l_10;
ATerm term_k_10;
ATerm term_i_10;
ATerm term_h_10;
ATerm term_g_10;
ATerm term_e_10;
ATerm term_d_10;
ATerm term_c_10;
ATerm term_b_10;
ATerm term_w_9;
ATerm term_t_9;
ATerm term_s_9;
ATerm term_r_9;
ATerm term_q_9;
ATerm term_p_9;
ATerm term_o_9;
ATerm term_j_9;
ATerm term_g_9;
ATerm term_f_9;
ATerm term_e_9;
ATerm term_d_9;
ATerm term_c_9;
ATerm term_b_9;
ATerm term_w_8;
ATerm term_t_8;
ATerm term_s_8;
ATerm term_r_8;
ATerm term_q_8;
ATerm term_p_8;
ATerm term_o_8;
ATerm term_j_8;
ATerm term_p_7;
ATerm term_m_7;
ATerm term_k_7;
ATerm term_i_7;
ATerm term_f_7;
ATerm term_w_6;
ATerm term_v_6;
ATerm term_u_6;
void init_constant_terms (void)
{
  ATprotect(&(term_u_6));
  term_u_6 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_v_6));
  term_v_6 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_w_6));
  term_w_6 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_f_7));
  term_f_7 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_i_7));
  term_i_7 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_k_7));
  term_k_7 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_m_7));
  term_m_7 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_p_7));
  term_p_7 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_j_8));
  term_j_8 = (ATerm) ATmakeAppl(ATmakeSymbol("\\\ncopies{", 0, ATtrue));
  ATprotect(&(term_o_8));
  term_o_8 = (ATerm) ATmakeAppl(ATmakeSymbol("}{", 0, ATtrue));
  ATprotect(&(term_p_8));
  term_p_8 = (ATerm) ATmakeAppl(ATmakeSymbol("}%", 0, ATtrue));
  ATprotect(&(term_q_8));
  term_q_8 = (ATerm) ATmakeAppl(ATmakeSymbol("\\begin{LBOX}{=}%\n", 0, ATtrue));
  ATprotect(&(term_r_8));
  term_r_8 = (ATerm) ATmakeAppl(ATmakeSymbol("%\n\\end{LBOX}%\n", 0, ATtrue));
  ATprotect(&(term_s_8));
  term_s_8 = (ATerm) ATmakeAppl(ATmakeSymbol("\\begin{LBOX}{", 0, ATtrue));
  ATprotect(&(term_t_8));
  term_t_8 = (ATerm) ATmakeAppl(ATmakeSymbol("}%\n", 0, ATtrue));
  ATprotect(&(term_w_8));
  term_w_8 = (ATerm) ATmakeAppl(ATmakeSymbol("\\boxlabel{", 0, ATtrue));
  ATprotect(&(term_b_9));
  term_b_9 = (ATerm) ATmakeAppl(ATmakeSymbol("}", 0, ATtrue));
  ATprotect(&(term_c_9));
  term_c_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\\boxref{", 0, ATtrue));
  ATprotect(&(term_d_9));
  term_d_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\\KWf{", 0, ATtrue));
  ATprotect(&(term_e_9));
  term_e_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\\VARf{", 0, ATtrue));
  ATprotect(&(term_f_9));
  term_f_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\\NUMf{", 0, ATtrue));
  ATprotect(&(term_g_9));
  term_g_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\\MATHf{", 0, ATtrue));
  ATprotect(&(term_j_9));
  term_j_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\\textsf{", 0, ATtrue));
  ATprotect(&(term_o_9));
  term_o_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\\textrm{", 0, ATtrue));
  ATprotect(&(term_p_9));
  term_p_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\\texttt{", 0, ATtrue));
  ATprotect(&(term_q_9));
  term_q_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\\textmd{", 0, ATtrue));
  ATprotect(&(term_r_9));
  term_r_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\\textbf{", 0, ATtrue));
  ATprotect(&(term_s_9));
  term_s_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\\textup{", 0, ATtrue));
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\\textit{", 0, ATtrue));
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\\textsc{", 0, ATtrue));
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\textsl{", 0, ATtrue));
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\emph{", 0, ATtrue));
  ATprotect(&(term_d_10));
  term_d_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\tiny{", 0, ATtrue));
  ATprotect(&(term_e_10));
  term_e_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\scriptsize{", 0, ATtrue));
  ATprotect(&(term_g_10));
  term_g_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\footnotesize{", 0, ATtrue));
  ATprotect(&(term_h_10));
  term_h_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\small{", 0, ATtrue));
  ATprotect(&(term_i_10));
  term_i_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\normalsize{", 0, ATtrue));
  ATprotect(&(term_k_10));
  term_k_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\large{", 0, ATtrue));
  ATprotect(&(term_l_10));
  term_l_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\Large{", 0, ATtrue));
  ATprotect(&(term_m_10));
  term_m_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\LARGE{", 0, ATtrue));
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\huge{", 0, ATtrue));
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\Huge{", 0, ATtrue));
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\textcolor{", 0, ATtrue));
  ATprotect(&(term_q_10));
  term_q_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\begin{boxenv}%\n", 0, ATtrue));
  ATprotect(&(term_r_10));
  term_r_10 = (ATerm) ATmakeAppl(ATmakeSymbol("%\n\\end{boxenv}\n", 0, ATtrue));
  ATprotect(&(term_s_10));
  term_s_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\begin{boxenv}{", 0, ATtrue));
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\begin{HBOX}{", 0, ATtrue));
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeAppl(ATmakeSymbol("%\n\\end{HBOX}%\n", 0, ATtrue));
  ATprotect(&(term_v_10));
  term_v_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\begin{VBOX}{", 0, ATtrue));
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeAppl(ATmakeSymbol("%\n\\end{VBOX}%\n", 0, ATtrue));
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\begin{HVBOX}{", 0, ATtrue));
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeAppl(ATmakeSymbol("%\n\\end{HVBOX}%\n", 0, ATtrue));
  ATprotect(&(term_z_10));
  term_z_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\begin{ABOX}{", 0, ATtrue));
  ATprotect(&(term_a_11));
  term_a_11 = (ATerm) ATmakeAppl(ATmakeSymbol("\\crcr%\n\\end{ABOX}%\n", 0, ATtrue));
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeAppl(ATmakeSymbol("\\begin{ALTBOX}{%\n", 0, ATtrue));
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeAppl(ATmakeSymbol("%\n}", 0, ATtrue));
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeAppl(ATmakeSymbol("%\n}%\n\\end{ALTBOX}%\n", 0, ATtrue));
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeAppl(ATmakeSymbol("%\n\\begin{latextext}%\n", 0, ATtrue));
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeAppl(ATmakeSymbol("%\n\\end{latextext}%\n", 0, ATtrue));
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeAppl(ATmakeSymbol("\\hfill#\\hfill", 0, ATtrue));
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeAppl(ATmakeSymbol("\\hfill#", 0, ATtrue));
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeAppl(ATmakeSymbol("#\\hfill", 0, ATtrue));
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeAppl(ATmakeSymbol("\\cr", 0, ATtrue));
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeAppl(ATmakeSymbol("&", 0, ATtrue));
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeInt(39);
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeInt(96);
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeAppl(ATmakeSymbol("latex-abbrevs", 0, ATtrue));
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(ATmakeSymbol("\\boxspace{}", 0, ATtrue));
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeAppl(ATmakeSymbol("\\#", 0, ATtrue));
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeAppl(ATmakeSymbol("\\$", 0, ATtrue));
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeAppl(ATmakeSymbol("\\%", 0, ATtrue));
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeAppl(ATmakeSymbol("\\&", 0, ATtrue));
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeAppl(ATmakeSymbol("\\mbox{-}", 0, ATtrue));
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeAppl(ATmakeSymbol("\\ensuremath{<}", 0, ATtrue));
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeAppl(ATmakeSymbol("\\ensuremath{>}", 0, ATtrue));
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeAppl(ATmakeSymbol("\\ensuremath{\\backslash}", 0, ATtrue));
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeAppl(ATmakeSymbol("\\^{}", 0, ATtrue));
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeAppl(ATmakeSymbol("\\_", 0, ATtrue));
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeAppl(ATmakeSymbol("\\{", 0, ATtrue));
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeAppl(ATmakeSymbol("\\ensuremath{\\vert}", 0, ATtrue));
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeAppl(ATmakeSymbol("\\}", 0, ATtrue));
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(ATmakeSymbol("\\~{}", 0, ATtrue));
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeAppl(ATmakeSymbol("~", 0, ATtrue));
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeAppl(ATmakeSymbol("1", 0, ATtrue));
  ATprotect(&(term_t_17));
  term_t_17 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_v_17));
  term_v_17 = (ATerm) ATmakeAppl(ATmakeSymbol("dissuasive library strategy: ", 0, ATtrue));
  ATprotect(&(term_w_17));
  term_w_17 = (ATerm) ATmakeAppl(ATmakeSymbol("separate-by/1; Use separate-by/0 and term wrap patterns: <separate-by> (a, <id>)", 0, ATtrue));
  ATprotect(&(term_y_17));
  term_y_17 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_s_18));
  term_s_18 = (ATerm) ATmakeAppl(ATmakeSymbol("0", 0, ATtrue));
  ATprotect(&(term_n_19));
  term_n_19 = (ATerm) ATmakeAppl(sym_CSEP_0);
  ATprotect(&(term_y_19));
  term_y_19 = (ATerm) ATmakeAppl(sym_L_0);
  ATprotect(&(term_z_19));
  term_z_19 = (ATerm) ATmakeAppl(sym_C_0);
  ATprotect(&(term_a_20));
  term_a_20 = (ATerm) ATmakeAppl(sym_R_0);
  ATprotect(&(term_b_20));
  term_b_20 = (ATerm) ATmakeAppl(sym_EOR_0);
  ATprotect(&(term_a_22));
  term_a_22 = (ATerm) ATmakeInt(61);
  ATprotect(&(term_c_22));
  term_c_22 = (ATerm) ATmakeAppl(ATmakeSymbol("\\ ", 0, ATtrue));
  ATprotect(&(term_i_22));
  term_i_22 = (ATerm) ATmakeAppl(ATmakeSymbol("\n\n", 0, ATtrue));
  ATprotect(&(term_f_23));
  term_f_23 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_i_23));
  term_i_23 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: file doesn't exist or doesn't contain a valid term: ", 0, ATtrue));
  ATprotect(&(term_w_23));
  term_w_23 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_z_23));
  term_z_23 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file>(file, mode)", 0, ATtrue));
  ATprotect(&(term_b_24));
  term_b_24 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_d_24));
  term_d_24 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_e_24));
  term_e_24 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-i abox] [-o latex] [-t table ... ] [-w width] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_k_24));
  term_k_24 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_l_24));
  term_l_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_m_24));
  term_m_24 = (ATerm) ATmakeAppl(sym__2, term_l_24, term_y_17);
  ATprotect(&(term_n_24));
  term_n_24 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_o_24));
  term_o_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_q_24));
  term_q_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_r_24));
  term_r_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_u_24));
  term_u_24 = (ATerm) ATmakeAppl(sym__2, term_i_7, term_f_7);
  ATprotect(&(term_v_24));
  term_v_24 = (ATerm) ATmakeAppl(sym_Verbose_1, term_f_7);
  ATprotect(&(term_w_24));
  term_w_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_a_25));
  term_a_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_b_25));
  term_b_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_c_25));
  term_c_25 = (ATerm) ATmakeAppl(sym__2, term_b_25, term_y_17);
  ATprotect(&(term_d_25));
  term_d_25 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_e_25));
  term_e_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_k_25));
  term_k_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_l_25));
  term_l_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_o_25));
  term_o_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_p_25));
  term_p_25 = (ATerm) ATmakeAppl(sym__2, term_o_25, term_y_17);
  ATprotect(&(term_q_25));
  term_q_25 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_r_25));
  term_r_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_u_25));
  term_u_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_v_25));
  term_v_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_d_26));
  term_d_26 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_i_26));
  term_i_26 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_j_26));
  term_j_26 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_k_26));
  term_k_26 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_l_26));
  term_l_26 = (ATerm) ATmakeAppl(sym__2, term_j_26, term_k_26);
  ATprotect(&(term_m_26));
  term_m_26 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_u_27));
  term_u_27 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_x_27));
  term_x_27 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_h_28));
  term_h_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_i_28));
  term_i_28 = (ATerm) ATmakeAppl(sym__2, term_h_28, term_y_17);
  ATprotect(&(term_j_28));
  term_j_28 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_k_28));
  term_k_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_p_28));
  term_p_28 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_b_29));
  term_b_29 = (ATerm) ATmakeAppl(sym__3, term_j_26, term_k_26, (ATerm) ATempty);
  ATprotect(&(term_r_29));
  term_r_29 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm report_failure_0 (ATerm);
ATerm ticks_to_seconds_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm m_81 (ATerm), ATerm n_81 (ATerm));
ATerm crush_2 (ATerm, ATerm k_80 (ATerm), ATerm l_80 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm s_88 (ATerm));
ATerm report_success_0 (ATerm);
ATerm print_0 (ATerm);
ATerm split_2 (ATerm, ATerm b_83 (ATerm), ATerm c_83 (ATerm));
ATerm is_string_0 (ATerm);
ATerm try_1 (ATerm, ATerm f_67 (ATerm));
ATerm topdown_1 (ATerm, ATerm u_68 (ATerm));
ATerm abox2latex_0 (ATerm);
ATerm CSEP_0 (ATerm);
ATerm EOR_0 (ATerm);
ATerm L_0 (ATerm);
ATerm R_0 (ATerm);
ATerm C_0 (ATerm);
ATerm int_to_string_0 (ATerm);
ATerm is_int_0 (ATerm);
ATerm Latex2text_0 (ATerm);
ATerm bottomup_1 (ATerm, ATerm v_68 (ATerm));
ATerm latex2text_0 (ATerm);
ATerm flat_list_0 (ATerm);
ATerm replace_quotes_0 (ATerm);
ATerm listtd_1 (ATerm, ATerm f_76 (ATerm));
ATerm latex_string_0 (ATerm);
ATerm Tl_0 (ATerm);
ATerm remove_trailing_1 (ATerm, ATerm c_67 (ATerm));
ATerm at_suffix_1 (ATerm, ATerm r_75 (ATerm));
ATerm LatexComment_0 (ATerm);
ATerm make_latex_comment_0 (ATerm);
ATerm MATH_0 (ATerm);
ATerm NUM_0 (ATerm);
ATerm VAR_0 (ATerm);
ATerm KW_0 (ATerm);
ATerm CL_0 (ATerm);
ATerm FFID_2 (ATerm, ATerm g_59 (ATerm), ATerm h_59 (ATerm));
ATerm SZ_0 (ATerm);
ATerm SH_0 (ATerm);
ATerm SE_0 (ATerm);
ATerm FM_0 (ATerm);
ATerm toh_0 (ATerm);
ATerm HS_0 (ATerm);
ATerm Hspace_0 (ATerm);
ATerm separate_by_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm t_88 (ATerm));
ATerm dissuader_1 (ATerm, ATerm e_86 (ATerm));
ATerm separate_by_1 (ATerm, ATerm u_74 (ATerm));
ATerm filter_1 (ATerm, ATerm p_82 (ATerm));
ATerm IS_0 (ATerm);
ATerm Ispace_0 (ATerm);
ATerm VS_0 (ATerm);
ATerm SOpt_2 (ATerm, ATerm j_58 (ATerm), ATerm k_58 (ATerm));
ATerm Vspace_0 (ATerm);
ATerm C_2 (ATerm, ATerm p_59 (ATerm), ATerm q_59 (ATerm));
ATerm table_row_0 (ATerm);
ATerm MkRows_0 (ATerm);
ATerm at_last_1 (ATerm, ATerm y_75 (ATerm));
ATerm table_def_0 (ATerm);
ATerm subt_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm while_not_2 (ATerm, ATerm l_68 (ATerm), ATerm m_68 (ATerm));
ATerm for_3 (ATerm, ATerm o_68 (ATerm), ATerm p_68 (ATerm), ATerm q_68 (ATerm));
ATerm copy_0 (ATerm);
ATerm R_2 (ATerm, ATerm y_58 (ATerm), ATerm z_58 (ATerm));
ATerm construct_rows_0 (ATerm);
ATerm Abox2latex_0 (ATerm);
ATerm abox2latex_1 (ATerm, ATerm y_66 (ATerm));
ATerm option_defined_1 (ATerm, ATerm v_89 (ATerm));
ATerm Snd_0 (ATerm);
ATerm input_file_0 (ATerm);
ATerm StoreEntries_0 (ATerm);
ATerm ReadFromFile_0 (ATerm);
ATerm table_create_0 (ATerm);
ATerm load_tables_0 (ATerm);
ATerm eq_0 (ATerm);
ATerm fetch_1 (ATerm, ATerm h_75 (ATerm));
ATerm HdMember_p__2 (ATerm, ATerm z_80 (ATerm), ATerm a_81 (ATerm));
ATerm union_1 (ATerm, ATerm v_80 (ATerm));
ATerm union_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm o_81 (ATerm), ATerm p_81 (ATerm), ATerm q_81 (ATerm));
ATerm crush_3 (ATerm, ATerm m_80 (ATerm), ATerm n_80 (ATerm), ATerm o_80 (ATerm));
ATerm collect_om_1 (ATerm, ATerm l_79 (ATerm));
ATerm collect_1 (ATerm, ATerm n_79 (ATerm));
ATerm obsolete_1 (ATerm, ATerm d_86 (ATerm));
ATerm open_file_0 (ATerm);
ATerm usage_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm y_86 (ATerm));
ATerm ArgOption_2 (ATerm, ATerm o_90 (ATerm), ATerm p_90 (ATerm));
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
ATerm long_description_1 (ATerm, ATerm w_90 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm h_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm v_90 (ATerm));
ATerm Program_1 (ATerm, ATerm k_66 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm x_85 (ATerm));
ATerm Undefined_1 (ATerm, ATerm l_66 (ATerm));
ATerm Help_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm n_75 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm _2 (ATerm, ATerm w_56 (ATerm), ATerm x_56 (ATerm));
ATerm conc_strings_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm debug_1 (ATerm, ATerm w_85 (ATerm));
ATerm map_1 (ATerm, ATerm y_74 (ATerm));
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm a_91 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm f_58 (ATerm), ATerm g_58 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm y_90 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm x_90 (ATerm));
ATerm Abox_2_latex_0 (ATerm);
ATerm main_0 (ATerm);
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_u_6, (ATerm) ATinsert(ATempty, term_v_6));
  {
    t = printnl_0(t);
    {
      t = term_w_6;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm c_0 = NULL;
  c_0 = t;
  t = SSL_TicksToSeconds(not_null(c_0));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm u_0 = NULL,v_0 = NULL,w_0 = NULL;
  u_0 = t;
  q_0 :
  if(match_cons(u_0, sym__2))
    {
      v_0 = ATgetArgument(u_0, 0);
      w_0 = ATgetArgument(u_0, 1);
      {
        ATerm x_6 = t;
        int y_6 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(v_0), not_null(w_0));
            LocalPopChoice(y_6);
          }
        else
          {
            t = x_6;
            t = SSL_addr(not_null(v_0), not_null(w_0));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm m_81 (ATerm), ATerm n_81 (ATerm))
{
  ATerm d_7 = t;
  int e_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = m_81(t);
      LocalPopChoice(e_7);
    }
  else
    {
      t = d_7;
      {
        ATerm m_1 = NULL,n_1 = NULL,o_1 = NULL;
        m_1 = t;
        i_1 :
        if(((ATgetType(m_1) == AT_LIST) && !(ATisEmpty(m_1))))
          {
            n_1 = ATgetFirst((ATermList) m_1);
            o_1 = (ATerm) ATgetNext((ATermList) m_1);
            {
              ATerm u_1 = NULL;
              ATerm y_1 = NULL;
              t = not_null(o_1);
              {
                t = foldr_2(t, m_81, n_81);
                {
                  y_1 = t;
                  if(((u_1 != NULL) && (u_1 != y_1)))
                    _fail(y_1);
                  else
                    u_1 = y_1;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(n_1), not_null(u_1));
                t = n_81(t);
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
ATerm crush_2 (ATerm t, ATerm k_80 (ATerm), ATerm l_80 (ATerm))
{
  ATerm l_2 = NULL;
  ATerm x_2 = NULL;
  l_2 = t;
  {
    ATerm y_2 = NULL;
    ATerm d_3 = NULL,e_3 = NULL,f_3 = NULL;
    t = not_null(l_2);
    {
      y_2 = t;
      {
        t = SSL_explode_term(not_null(y_2));
        {
          d_3 = t;
          k_2 :
          if(match_cons(d_3, sym__2))
            {
              e_3 = ATgetArgument(d_3, 0);
              f_3 = ATgetArgument(d_3, 1);
              if(((x_2 != NULL) && (x_2 != f_3)))
                _fail(f_3);
              else
                x_2 = f_3;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(x_2);
      t = foldr_2(t, k_80, l_80);
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
      t = term_f_7;
      return(t);
    }
    t = crush_2(t, b_0, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm s_88 (ATerm))
{
  ATerm e_0 (ATerm t)
  {
    ATerm h_7;
    h_7 = t;
    {
      ATerm q_3 = NULL;
      ATerm r_3 = NULL;
      t = term_i_7;
      {
        t = get_config_0(t);
        {
          r_3 = t;
          if(((q_3 != NULL) && (q_3 != r_3)))
            _fail(r_3);
          else
            q_3 = r_3;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(q_3), term_w_6);
        t = geq_0(t);
      }
    }
    t = h_7;
    t = s_88(t);
    return(t);
  }
  t = try_1(t, e_0);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm f_0 (ATerm t)
  {
    ATerm b_4 = NULL,d_4 = NULL;
    ATerm j_7;
    j_7 = t;
    {
      ATerm c_4 = NULL;
      t = run_time_0(t);
      {
        c_4 = t;
        if(((b_4 != NULL) && (b_4 != c_4)))
          _fail(c_4);
        else
          b_4 = c_4;
      }
    }
    t = j_7;
    {
      ATerm h_4 = NULL;
      t = term_k_7;
      {
        t = get_config_0(t);
        {
          h_4 = t;
          if(((d_4 != NULL) && (d_4 != h_4)))
            _fail(h_4);
          else
            d_4 = h_4;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_u_6, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_p_7), not_null(b_4)), term_m_7), not_null(d_4)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, f_0);
  {
    t = term_f_7;
    t = exit_0(t);
  }
  return(t);
}
ATerm print_0 (ATerm t)
{
  ATerm k_5 = NULL,y_5 = NULL,z_5 = NULL;
  k_5 = t;
  j_5 :
  if(match_cons(k_5, sym__2))
    {
      y_5 = ATgetArgument(k_5, 0);
      z_5 = ATgetArgument(k_5, 1);
      {
        ATerm q_7;
        q_7 = t;
        t = SSL_print(not_null(y_5), not_null(z_5));
        t = q_7;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm split_2 (ATerm t, ATerm b_83 (ATerm), ATerm c_83 (ATerm))
{
  ATerm z_6 = NULL,b_7 = NULL;
  ATerm r_7;
  r_7 = t;
  {
    ATerm a_7 = NULL;
    t = b_83(t);
    {
      a_7 = t;
      if(((z_6 != NULL) && (z_6 != a_7)))
        _fail(a_7);
      else
        z_6 = a_7;
    }
  }
  t = r_7;
  {
    ATerm c_7 = NULL;
    t = c_83(t);
    {
      c_7 = t;
      if(((b_7 != NULL) && (b_7 != c_7)))
        _fail(c_7);
      else
        b_7 = c_7;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(z_6), not_null(b_7));
  }
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm g_7 = NULL;
  g_7 = t;
  t = SSL_is_string(not_null(g_7));
  return(t);
}
ATerm try_1 (ATerm t, ATerm f_67 (ATerm))
{
  ATerm s_7 = t;
  int t_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = f_67(t);
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
ATerm topdown_1 (ATerm t, ATerm u_68 (ATerm))
{
  t = u_68(t);
  {
    ATerm m_0 (ATerm t)
    {
      t = topdown_1(t, u_68);
      return(t);
    }
    t = _all(t, m_0);
  }
  return(t);
}
ATerm abox2latex_0 (ATerm t)
{
  ATerm l_7 = NULL;
  ATerm n_7 = NULL;
  l_7 = t;
  {
    ATerm o_7 = NULL;
    t = not_null(l_7);
    {
      ATerm n_0 (ATerm t)
      {
        t = try_1(t, Abox2latex_0);
        return(t);
      }
      t = topdown_1(t, n_0);
      {
        o_7 = t;
        if(((n_7 != NULL) && (n_7 != o_7)))
          _fail(o_7);
        else
          n_7 = o_7;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym_BOXENV_2, (ATerm)ATempty, not_null(n_7));
      t = latex2text_0(t);
    }
  }
  return(t);
}
ATerm CSEP_0 (ATerm t)
{
  ATerm v_7 = NULL;
  v_7 = t;
  u_7 :
  if(match_cons(v_7, sym_CSEP_0))
    {
      ATerm x_7 = NULL,z_7 = NULL;
      ATerm w_7;
      w_7 = t;
      {
        ATerm y_7 = NULL;
        t = SSLgetAnnotations(not_null(v_7));
        {
          y_7 = t;
          if(((x_7 != NULL) && (x_7 != y_7)))
            _fail(y_7);
          else
            x_7 = y_7;
        }
      }
      t = w_7;
      {
        ATerm a_8 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_CSEP_0), not_null(x_7));
        {
          a_8 = t;
          if(((z_7 != NULL) && (z_7 != a_8)))
            _fail(a_8);
          else
            z_7 = a_8;
        }
        t = not_null(z_7);
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
  ATerm i_8 = NULL;
  i_8 = t;
  h_8 :
  if(match_cons(i_8, sym_EOR_0))
    {
      ATerm k_8 = NULL,m_8 = NULL;
      ATerm b_8;
      b_8 = t;
      {
        ATerm l_8 = NULL;
        t = SSLgetAnnotations(not_null(i_8));
        {
          l_8 = t;
          if(((k_8 != NULL) && (k_8 != l_8)))
            _fail(l_8);
          else
            k_8 = l_8;
        }
      }
      t = b_8;
      {
        ATerm n_8 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_EOR_0), not_null(k_8));
        {
          n_8 = t;
          if(((m_8 != NULL) && (m_8 != n_8)))
            _fail(n_8);
          else
            m_8 = n_8;
        }
        t = not_null(m_8);
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
  ATerm v_8 = NULL;
  v_8 = t;
  u_8 :
  if(match_cons(v_8, sym_L_0))
    {
      ATerm x_8 = NULL,z_8 = NULL;
      ATerm c_8;
      c_8 = t;
      {
        ATerm y_8 = NULL;
        t = SSLgetAnnotations(not_null(v_8));
        {
          y_8 = t;
          if(((x_8 != NULL) && (x_8 != y_8)))
            _fail(y_8);
          else
            x_8 = y_8;
        }
      }
      t = c_8;
      {
        ATerm a_9 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_L_0), not_null(x_8));
        {
          a_9 = t;
          if(((z_8 != NULL) && (z_8 != a_9)))
            _fail(a_9);
          else
            z_8 = a_9;
        }
        t = not_null(z_8);
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
  ATerm i_9 = NULL;
  i_9 = t;
  h_9 :
  if(match_cons(i_9, sym_R_0))
    {
      ATerm k_9 = NULL,m_9 = NULL;
      ATerm d_8;
      d_8 = t;
      {
        ATerm l_9 = NULL;
        t = SSLgetAnnotations(not_null(i_9));
        {
          l_9 = t;
          if(((k_9 != NULL) && (k_9 != l_9)))
            _fail(l_9);
          else
            k_9 = l_9;
        }
      }
      t = d_8;
      {
        ATerm n_9 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_R_0), not_null(k_9));
        {
          n_9 = t;
          if(((m_9 != NULL) && (m_9 != n_9)))
            _fail(n_9);
          else
            m_9 = n_9;
        }
        t = not_null(m_9);
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
  ATerm v_9 = NULL;
  v_9 = t;
  u_9 :
  if(match_cons(v_9, sym_C_0))
    {
      ATerm x_9 = NULL,z_9 = NULL;
      ATerm e_8;
      e_8 = t;
      {
        ATerm y_9 = NULL;
        t = SSLgetAnnotations(not_null(v_9));
        {
          y_9 = t;
          if(((x_9 != NULL) && (x_9 != y_9)))
            _fail(y_9);
          else
            x_9 = y_9;
        }
      }
      t = e_8;
      {
        ATerm a_10 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_C_0), not_null(x_9));
        {
          a_10 = t;
          if(((z_9 != NULL) && (z_9 != a_10)))
            _fail(a_10);
          else
            z_9 = a_10;
        }
        t = not_null(z_9);
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
  ATerm f_10 = NULL;
  f_10 = t;
  t = SSL_int_to_string(not_null(f_10));
  return(t);
}
ATerm is_int_0 (ATerm t)
{
  ATerm j_10 = NULL;
  j_10 = t;
  t = SSL_is_int(not_null(j_10));
  return(t);
}
ATerm Latex2text_0 (ATerm t)
{
  ATerm e_12 = NULL,f_12 = NULL,g_12 = NULL,h_12 = NULL,i_12 = NULL,j_12 = NULL,k_12 = NULL,l_12 = NULL,m_12 = NULL,n_12 = NULL,o_12 = NULL,p_12 = NULL;
  ATerm f_8 = t;
  int g_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_12 = NULL,r_12 = NULL,s_12 = NULL,t_12 = NULL,u_12 = NULL,v_12 = NULL,w_12 = NULL;
      ATerm h_13 (ATerm t)
      {
        ATerm x_12 = NULL;
        if(((m_12 != NULL) && (m_12 != u_12)))
          _fail(u_12);
        else
          m_12 = u_12;
        {
          if(((p_12 != NULL) && (p_12 != w_12)))
            _fail(w_12);
          else
            p_12 = w_12;
          {
            t = not_null(m_12);
            {
              t = is_int_0(t);
              {
                ATerm y_12 = NULL;
                t = not_null(m_12);
                {
                  t = int_to_string_0(t);
                  {
                    y_12 = t;
                    if(((x_12 != NULL) && (x_12 != y_12)))
                      _fail(y_12);
                    else
                      x_12 = y_12;
                  }
                }
                t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_p_8), not_null(p_12)), term_o_8), not_null(x_12)), term_j_8);
              }
            }
          }
        }
        return(t);
      }
      ATerm i_13 (ATerm t)
      {
        if(((p_12 != NULL) && (p_12 != w_12)))
          _fail(w_12);
        else
          p_12 = w_12;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_r_8), not_null(p_12)), term_q_8);
        return(t);
      }
      ATerm j_13 (ATerm t)
      {
        if(((m_12 != NULL) && (m_12 != u_12)))
          _fail(u_12);
        else
          m_12 = u_12;
        {
          if(((p_12 != NULL) && (p_12 != w_12)))
            _fail(w_12);
          else
            p_12 = w_12;
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_r_8), not_null(p_12)), term_t_8), not_null(m_12)), term_s_8);
        }
        return(t);
      }
      ATerm k_13 (ATerm t)
      {
        if(((n_12 != NULL) && (n_12 != u_12)))
          _fail(u_12);
        else
          n_12 = u_12;
        {
          if(((p_12 != NULL) && (p_12 != w_12)))
            _fail(w_12);
          else
            p_12 = w_12;
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(p_12)), term_b_9), not_null(n_12)), term_w_8);
        }
        return(t);
      }
      ATerm l_13 (ATerm t)
      {
        if(((n_12 != NULL) && (n_12 != u_12)))
          _fail(u_12);
        else
          n_12 = u_12;
        {
          if(((p_12 != NULL) && (p_12 != w_12)))
            _fail(w_12);
          else
            p_12 = w_12;
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_b_9), not_null(p_12)), term_o_8), not_null(n_12)), term_c_9);
        }
        return(t);
      }
      ATerm m_13 (ATerm t)
      {
        if(((p_12 != NULL) && (p_12 != w_12)))
          _fail(w_12);
        else
          p_12 = w_12;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_b_9), not_null(p_12)), term_d_9);
        return(t);
      }
      ATerm n_13 (ATerm t)
      {
        if(((p_12 != NULL) && (p_12 != w_12)))
          _fail(w_12);
        else
          p_12 = w_12;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_b_9), not_null(p_12)), term_e_9);
        return(t);
      }
      ATerm o_13 (ATerm t)
      {
        if(((p_12 != NULL) && (p_12 != w_12)))
          _fail(w_12);
        else
          p_12 = w_12;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_b_9), not_null(p_12)), term_f_9);
        return(t);
      }
      ATerm p_13 (ATerm t)
      {
        if(((p_12 != NULL) && (p_12 != w_12)))
          _fail(w_12);
        else
          p_12 = w_12;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_b_9), not_null(p_12)), term_g_9);
        return(t);
      }
      ATerm q_13 (ATerm t)
      {
        if(((p_12 != NULL) && (p_12 != w_12)))
          _fail(w_12);
        else
          p_12 = w_12;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_b_9), not_null(p_12)), term_j_9);
        return(t);
      }
      ATerm r_13 (ATerm t)
      {
        if(((p_12 != NULL) && (p_12 != w_12)))
          _fail(w_12);
        else
          p_12 = w_12;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_b_9), not_null(p_12)), term_o_9);
        return(t);
      }
      ATerm s_13 (ATerm t)
      {
        if(((p_12 != NULL) && (p_12 != w_12)))
          _fail(w_12);
        else
          p_12 = w_12;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_b_9), not_null(p_12)), term_p_9);
        return(t);
      }
      ATerm t_13 (ATerm t)
      {
        if(((p_12 != NULL) && (p_12 != w_12)))
          _fail(w_12);
        else
          p_12 = w_12;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_b_9), not_null(p_12)), term_q_9);
        return(t);
      }
      ATerm u_13 (ATerm t)
      {
        if(((p_12 != NULL) && (p_12 != w_12)))
          _fail(w_12);
        else
          p_12 = w_12;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_b_9), not_null(p_12)), term_r_9);
        return(t);
      }
      ATerm v_13 (ATerm t)
      {
        if(((p_12 != NULL) && (p_12 != w_12)))
          _fail(w_12);
        else
          p_12 = w_12;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_b_9), not_null(p_12)), term_s_9);
        return(t);
      }
      ATerm w_13 (ATerm t)
      {
        if(((p_12 != NULL) && (p_12 != w_12)))
          _fail(w_12);
        else
          p_12 = w_12;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_b_9), not_null(p_12)), term_t_9);
        return(t);
      }
      ATerm x_13 (ATerm t)
      {
        if(((p_12 != NULL) && (p_12 != w_12)))
          _fail(w_12);
        else
          p_12 = w_12;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_b_9), not_null(p_12)), term_w_9);
        return(t);
      }
      ATerm y_13 (ATerm t)
      {
        if(((p_12 != NULL) && (p_12 != w_12)))
          _fail(w_12);
        else
          p_12 = w_12;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_b_9), not_null(p_12)), term_b_10);
        return(t);
      }
      ATerm z_13 (ATerm t)
      {
        if(((p_12 != NULL) && (p_12 != w_12)))
          _fail(w_12);
        else
          p_12 = w_12;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_b_9), not_null(p_12)), term_c_10);
        return(t);
      }
      ATerm a_14 (ATerm t)
      {
        if(((p_12 != NULL) && (p_12 != w_12)))
          _fail(w_12);
        else
          p_12 = w_12;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_b_9), not_null(p_12)), term_d_10);
        return(t);
      }
      ATerm b_14 (ATerm t)
      {
        if(((p_12 != NULL) && (p_12 != w_12)))
          _fail(w_12);
        else
          p_12 = w_12;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_b_9), not_null(p_12)), term_e_10);
        return(t);
      }
      ATerm c_14 (ATerm t)
      {
        if(((p_12 != NULL) && (p_12 != w_12)))
          _fail(w_12);
        else
          p_12 = w_12;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_b_9), not_null(p_12)), term_g_10);
        return(t);
      }
      ATerm d_14 (ATerm t)
      {
        if(((p_12 != NULL) && (p_12 != w_12)))
          _fail(w_12);
        else
          p_12 = w_12;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_b_9), not_null(p_12)), term_h_10);
        return(t);
      }
      ATerm e_14 (ATerm t)
      {
        if(((p_12 != NULL) && (p_12 != w_12)))
          _fail(w_12);
        else
          p_12 = w_12;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_b_9), not_null(p_12)), term_i_10);
        return(t);
      }
      ATerm f_14 (ATerm t)
      {
        if(((p_12 != NULL) && (p_12 != w_12)))
          _fail(w_12);
        else
          p_12 = w_12;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_b_9), not_null(p_12)), term_k_10);
        return(t);
      }
      ATerm g_14 (ATerm t)
      {
        if(((p_12 != NULL) && (p_12 != w_12)))
          _fail(w_12);
        else
          p_12 = w_12;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_b_9), not_null(p_12)), term_l_10);
        return(t);
      }
      ATerm h_14 (ATerm t)
      {
        if(((p_12 != NULL) && (p_12 != w_12)))
          _fail(w_12);
        else
          p_12 = w_12;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_b_9), not_null(p_12)), term_m_10);
        return(t);
      }
      ATerm i_14 (ATerm t)
      {
        if(((p_12 != NULL) && (p_12 != w_12)))
          _fail(w_12);
        else
          p_12 = w_12;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_b_9), not_null(p_12)), term_n_10);
        return(t);
      }
      ATerm j_14 (ATerm t)
      {
        if(((p_12 != NULL) && (p_12 != w_12)))
          _fail(w_12);
        else
          p_12 = w_12;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_b_9), not_null(p_12)), term_o_10);
        return(t);
      }
      ATerm k_14 (ATerm t)
      {
        if(((o_12 != NULL) && (o_12 != v_12)))
          _fail(v_12);
        else
          o_12 = v_12;
        {
          if(((p_12 != NULL) && (p_12 != w_12)))
            _fail(w_12);
          else
            p_12 = w_12;
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_b_9), not_null(p_12)), term_o_8), not_null(o_12)), term_p_10);
        }
        return(t);
      }
      t_12 = t;
      z_11 :
      if(match_cons(t_12, sym_BOXENV_2))
        {
          u_12 = ATgetArgument(t_12, 0);
          w_12 = ATgetArgument(t_12, 1);
          a_12 :
          if(((ATgetType(u_12) == AT_LIST) && ATisEmpty(u_12)))
            {
              {
                if(((j_12 != NULL) && (j_12 != w_12)))
                  _fail(w_12);
                else
                  j_12 = w_12;
                t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_r_10), not_null(j_12)), term_q_10);
              }
            }
          else
            {
              if(((ATgetType(u_12) == AT_LIST) && !(ATisEmpty(u_12))))
                {
                  v_12 = ATgetFirst((ATermList) u_12);
                  q_12 = (ATerm) ATgetNext((ATermList) u_12);
                  b_12 :
                  if(((ATgetType(q_12) == AT_LIST) && ATisEmpty(q_12)))
                    {
                      {
                        if(((e_12 != NULL) && (e_12 != v_12)))
                          _fail(v_12);
                        else
                          e_12 = v_12;
                        {
                          if(((j_12 != NULL) && (j_12 != w_12)))
                            _fail(w_12);
                          else
                            j_12 = w_12;
                          t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_r_10), not_null(j_12)), term_t_8), not_null(e_12)), term_s_10);
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
          if(match_cons(t_12, sym_HBOX_2))
            {
              u_12 = ATgetArgument(t_12, 0);
              w_12 = ATgetArgument(t_12, 1);
              {
                if(((f_12 != NULL) && (f_12 != u_12)))
                  _fail(u_12);
                else
                  f_12 = u_12;
                {
                  if(((j_12 != NULL) && (j_12 != w_12)))
                    _fail(w_12);
                  else
                    j_12 = w_12;
                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_u_10), not_null(j_12)), term_t_8), not_null(f_12)), term_t_10);
                }
              }
            }
          else
            {
              if(match_cons(t_12, sym_VBOX_3))
                {
                  u_12 = ATgetArgument(t_12, 0);
                  w_12 = ATgetArgument(t_12, 1);
                  r_12 = ATgetArgument(t_12, 2);
                  {
                    if(((g_12 != NULL) && (g_12 != u_12)))
                      _fail(u_12);
                    else
                      g_12 = u_12;
                    {
                      if(((h_12 != NULL) && (h_12 != w_12)))
                        _fail(w_12);
                      else
                        h_12 = w_12;
                      {
                        if(((j_12 != NULL) && (j_12 != r_12)))
                          _fail(r_12);
                        else
                          j_12 = r_12;
                        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_w_10), not_null(j_12)), term_t_8), not_null(h_12)), term_o_8), not_null(g_12)), term_v_10);
                      }
                    }
                  }
                }
              else
                {
                  if(match_cons(t_12, sym_HVBOX_4))
                    {
                      u_12 = ATgetArgument(t_12, 0);
                      w_12 = ATgetArgument(t_12, 1);
                      r_12 = ATgetArgument(t_12, 2);
                      s_12 = ATgetArgument(t_12, 3);
                      {
                        if(((f_12 != NULL) && (f_12 != u_12)))
                          _fail(u_12);
                        else
                          f_12 = u_12;
                        {
                          if(((g_12 != NULL) && (g_12 != w_12)))
                            _fail(w_12);
                          else
                            g_12 = w_12;
                          {
                            if(((h_12 != NULL) && (h_12 != r_12)))
                              _fail(r_12);
                            else
                              h_12 = r_12;
                            {
                              if(((j_12 != NULL) && (j_12 != s_12)))
                                _fail(s_12);
                              else
                                j_12 = s_12;
                              t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_y_10), not_null(j_12)), term_t_8), not_null(h_12)), term_o_8), not_null(g_12)), term_o_8), not_null(f_12)), term_x_10);
                            }
                          }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(t_12, sym_ABOX_2))
                        {
                          u_12 = ATgetArgument(t_12, 0);
                          w_12 = ATgetArgument(t_12, 1);
                          {
                            if(((i_12 != NULL) && (i_12 != u_12)))
                              _fail(u_12);
                            else
                              i_12 = u_12;
                            {
                              if(((j_12 != NULL) && (j_12 != w_12)))
                                _fail(w_12);
                              else
                                j_12 = w_12;
                              t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_a_11), not_null(j_12)), term_t_8), not_null(i_12)), term_z_10);
                            }
                          }
                        }
                      else
                        {
                          if(match_cons(t_12, sym_ALTBOX_2))
                            {
                              u_12 = ATgetArgument(t_12, 0);
                              w_12 = ATgetArgument(t_12, 1);
                              {
                                if(((k_12 != NULL) && (k_12 != u_12)))
                                  _fail(u_12);
                                else
                                  k_12 = u_12;
                                {
                                  if(((l_12 != NULL) && (l_12 != w_12)))
                                    _fail(w_12);
                                  else
                                    l_12 = w_12;
                                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_d_11), not_null(l_12)), term_c_11), not_null(k_12)), term_b_11);
                                }
                              }
                            }
                          else
                            {
                              if(match_cons(t_12, sym_CBOX_1))
                                {
                                  u_12 = ATgetArgument(t_12, 0);
                                  {
                                    if(((p_12 != NULL) && (p_12 != u_12)))
                                      _fail(u_12);
                                    else
                                      p_12 = u_12;
                                    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_f_11), not_null(p_12)), term_e_11);
                                  }
                                }
                              else
                                {
                                  if(match_cons(t_12, sym_LBOX_2))
                                    {
                                      u_12 = ATgetArgument(t_12, 0);
                                      w_12 = ATgetArgument(t_12, 1);
                                      c_12 :
                                      if(match_string(u_12, "="))
                                        {
                                          ATerm g_11 = t;
                                          int h_11 = stack_ptr;
                                          if((PushChoice() == 0))
                                            {
                                              t = h_13(t);
                                              LocalPopChoice(h_11);
                                            }
                                          else
                                            {
                                              t = g_11;
                                              {
                                                ATerm i_11 = t;
                                                int j_11 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = i_13(t);
                                                    LocalPopChoice(j_11);
                                                  }
                                                else
                                                  {
                                                    t = i_11;
                                                    t = j_13(t);
                                                  }
                                              }
                                            }
                                        }
                                      else
                                        {
                                          ATerm k_11 = t;
                                          int l_11 = stack_ptr;
                                          if((PushChoice() == 0))
                                            {
                                              t = h_13(t);
                                              LocalPopChoice(l_11);
                                            }
                                          else
                                            {
                                              t = k_11;
                                              t = j_13(t);
                                            }
                                        }
                                    }
                                  else
                                    {
                                      if(match_cons(t_12, sym_LBLBOX_2))
                                        {
                                          u_12 = ATgetArgument(t_12, 0);
                                          w_12 = ATgetArgument(t_12, 1);
                                          t = k_13(t);
                                        }
                                      else
                                        {
                                          if(match_cons(t_12, sym_REFBOX_2))
                                            {
                                              u_12 = ATgetArgument(t_12, 0);
                                              w_12 = ATgetArgument(t_12, 1);
                                              t = l_13(t);
                                            }
                                          else
                                            {
                                              if(match_cons(t_12, sym_BOXFONT_2))
                                                {
                                                  u_12 = ATgetArgument(t_12, 0);
                                                  w_12 = ATgetArgument(t_12, 1);
                                                  d_12 :
                                                  if(match_cons(u_12, sym_KW_0))
                                                    {
                                                      t = m_13(t);
                                                    }
                                                  else
                                                    {
                                                      if(match_cons(u_12, sym_VAR_0))
                                                        {
                                                          t = n_13(t);
                                                        }
                                                      else
                                                        {
                                                          if(match_cons(u_12, sym_NUM_0))
                                                            {
                                                              t = o_13(t);
                                                            }
                                                          else
                                                            {
                                                              if(match_cons(u_12, sym_MATH_0))
                                                                {
                                                                  t = p_13(t);
                                                                }
                                                              else
                                                                {
                                                                  if(match_string(u_12, "sf"))
                                                                    {
                                                                      t = q_13(t);
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_string(u_12, "rm"))
                                                                        {
                                                                          t = r_13(t);
                                                                        }
                                                                      else
                                                                        {
                                                                          if(match_string(u_12, "tt"))
                                                                            {
                                                                              t = s_13(t);
                                                                            }
                                                                          else
                                                                            {
                                                                              if(match_string(u_12, "md"))
                                                                                {
                                                                                  t = t_13(t);
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(match_string(u_12, "bf"))
                                                                                    {
                                                                                      t = u_13(t);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(match_string(u_12, "up"))
                                                                                        {
                                                                                          t = v_13(t);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          if(match_string(u_12, "it"))
                                                                                            {
                                                                                              t = w_13(t);
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              if(match_string(u_12, "sc"))
                                                                                                {
                                                                                                  t = x_13(t);
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  if(match_string(u_12, "sl"))
                                                                                                    {
                                                                                                      t = y_13(t);
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      if(match_string(u_12, "em"))
                                                                                                        {
                                                                                                          t = z_13(t);
                                                                                                        }
                                                                                                      else
                                                                                                        {
                                                                                                          if(match_string(u_12, "tiny"))
                                                                                                            {
                                                                                                              t = a_14(t);
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              if(match_string(u_12, "scriptsize"))
                                                                                                                {
                                                                                                                  t = b_14(t);
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  if(match_string(u_12, "footnotesize"))
                                                                                                                    {
                                                                                                                      t = c_14(t);
                                                                                                                    }
                                                                                                                  else
                                                                                                                    {
                                                                                                                      if(match_string(u_12, "small"))
                                                                                                                        {
                                                                                                                          t = d_14(t);
                                                                                                                        }
                                                                                                                      else
                                                                                                                        {
                                                                                                                          if(match_string(u_12, "normalsize"))
                                                                                                                            {
                                                                                                                              t = e_14(t);
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              if(match_string(u_12, "large"))
                                                                                                                                {
                                                                                                                                  t = f_14(t);
                                                                                                                                }
                                                                                                                              else
                                                                                                                                {
                                                                                                                                  if(match_string(u_12, "Large"))
                                                                                                                                    {
                                                                                                                                      t = g_14(t);
                                                                                                                                    }
                                                                                                                                  else
                                                                                                                                    {
                                                                                                                                      if(match_string(u_12, "LARGE"))
                                                                                                                                        {
                                                                                                                                          t = h_14(t);
                                                                                                                                        }
                                                                                                                                      else
                                                                                                                                        {
                                                                                                                                          if(match_string(u_12, "huge"))
                                                                                                                                            {
                                                                                                                                              t = i_14(t);
                                                                                                                                            }
                                                                                                                                          else
                                                                                                                                            {
                                                                                                                                              if(match_string(u_12, "Huge"))
                                                                                                                                                {
                                                                                                                                                  t = j_14(t);
                                                                                                                                                }
                                                                                                                                              else
                                                                                                                                                {
                                                                                                                                                  if(match_cons(u_12, sym_BOXCOLOR_1))
                                                                                                                                                    {
                                                                                                                                                      v_12 = ATgetArgument(u_12, 0);
                                                                                                                                                      t = k_14(t);
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
      LocalPopChoice(g_8);
    }
  else
    {
      t = f_8;
      {
        ATerm m_11 = t;
        int n_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = C_0(t);
            t = term_o_11;
            LocalPopChoice(n_11);
          }
        else
          {
            t = m_11;
            {
              ATerm p_11 = t;
              int q_11 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = R_0(t);
                  t = term_r_11;
                  LocalPopChoice(q_11);
                }
              else
                {
                  t = p_11;
                  {
                    ATerm s_11 = t;
                    int t_11 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = L_0(t);
                        t = term_u_11;
                        LocalPopChoice(t_11);
                      }
                    else
                      {
                        t = s_11;
                        {
                          ATerm v_11 = t;
                          int w_11 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = EOR_0(t);
                              t = term_x_11;
                              LocalPopChoice(w_11);
                            }
                          else
                            {
                              t = v_11;
                              {
                                t = CSEP_0(t);
                                t = term_y_11;
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
ATerm bottomup_1 (ATerm t, ATerm v_68 (ATerm))
{
  ATerm o_0 (ATerm t)
  {
    t = bottomup_1(t, v_68);
    return(t);
  }
  t = _all(t, o_0);
  t = v_68(t);
  return(t);
}
ATerm latex2text_0 (ATerm t)
{
  ATerm p_0 (ATerm t)
  {
    t = try_1(t, Latex2text_0);
    return(t);
  }
  t = bottomup_1(t, p_0);
  return(t);
}
ATerm flat_list_0 (ATerm t)
{
  ATerm q_14 = NULL,r_14 = NULL;
  ATerm z_12 = t;
  int a_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(a_13);
    }
  else
    {
      t = z_12;
      {
        ATerm b_13 = t;
        int c_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_14 = NULL,t_14 = NULL,u_14 = NULL;
            ATerm x_14 (ATerm t)
            {
              if(((q_14 != NULL) && (q_14 != t_14)))
                _fail(t_14);
              else
                q_14 = t_14;
              {
                if(((r_14 != NULL) && (r_14 != u_14)))
                  _fail(u_14);
                else
                  r_14 = u_14;
                {
                  t = not_null(q_14);
                  {
                    t = is_list_0(t);
                    {
                      t = (ATerm) ATmakeAppl(sym__2, not_null(q_14), not_null(r_14));
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
            s_14 = t;
            o_14 :
            if(((ATgetType(s_14) == AT_LIST) && !(ATisEmpty(s_14))))
              {
                t_14 = ATgetFirst((ATermList) s_14);
                u_14 = (ATerm) ATgetNext((ATermList) s_14);
                p_14 :
                if(((ATgetType(t_14) == AT_LIST) && ATisEmpty(t_14)))
                  {
                    {
                      ATerm d_13 = t;
                      int e_13 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          if(((r_14 != NULL) && (r_14 != u_14)))
                            _fail(u_14);
                          else
                            r_14 = u_14;
                          {
                            ATerm r_0 (ATerm t)
                            {
                              t = not_null(r_14);
                              t = flat_list_0(t);
                              return(t);
                            }
                            t = Cons_2(t, Nil_0, r_0);
                          }
                          LocalPopChoice(e_13);
                        }
                      else
                        {
                          t = d_13;
                          t = x_14(t);
                        }
                    }
                  }
                else
                  {
                    t = x_14(t);
                  }
              }
            else
              {
                _fail(t);
              }
            LocalPopChoice(c_13);
          }
        else
          {
            t = b_13;
            t = Cons_2(t, _id, flat_list_0);
          }
      }
    }
  return(t);
}
ATerm replace_quotes_0 (ATerm t)
{
  ATerm e_15 = NULL,h_15 = NULL;
  ATerm s_0 (ATerm t)
  {
    ATerm f_15 = NULL;
    f_15 = t;
    y_14 :
    if(!(match_int(f_15, 34)))
      {
        _fail(t);
      }
    return(t);
  }
  ATerm t_0 (ATerm t)
  {
    ATerm g_15 = NULL;
    g_15 = t;
    if(((e_15 != NULL) && (e_15 != g_15)))
      _fail(g_15);
    else
      e_15 = g_15;
    return(t);
  }
  t = Cons_2(t, s_0, t_0);
  {
    ATerm m_15 = NULL;
    t = not_null(e_15);
    {
      ATerm x_0 (ATerm t)
      {
        ATerm i_15 = NULL,j_15 = NULL,k_15 = NULL;
        i_15 = t;
        b_15 :
        if(((ATgetType(i_15) == AT_LIST) && !(ATisEmpty(i_15))))
          {
            j_15 = ATgetFirst((ATermList) i_15);
            k_15 = (ATerm) ATgetNext((ATermList) i_15);
            c_15 :
            if(match_int(j_15, 34))
              {
                t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(k_15)), term_f_13), term_f_13);
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
      t = at_suffix_1(t, x_0);
      {
        m_15 = t;
        if(((h_15 != NULL) && (h_15 != m_15)))
          _fail(m_15);
        else
          h_15 = m_15;
      }
    }
    t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(h_15)), term_g_13), term_g_13);
  }
  return(t);
}
ATerm listtd_1 (ATerm t, ATerm f_76 (ATerm))
{
  ATerm q_15 (ATerm t)
  {
    t = f_76(t);
    {
      ATerm l_14 = t;
      int m_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Nil_0(t);
          LocalPopChoice(m_14);
        }
      else
        {
          t = l_14;
          t = Cons_2(t, _id, q_15);
        }
    }
    return(t);
  }
  t = q_15(t);
  return(t);
}
ATerm latex_string_0 (ATerm t)
{
  ATerm i_16 = NULL;
  ATerm n_14 = t;
  int v_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_16 = NULL;
      j_16 = t;
      {
        if(((i_16 != NULL) && (i_16 != j_16)))
          _fail(j_16);
        else
          i_16 = j_16;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_w_14, not_null(i_16));
          t = table_get_0(t);
        }
      }
      LocalPopChoice(v_14);
    }
  else
    {
      t = n_14;
      {
        t = explode_string_0(t);
        {
          ATerm y_0 (ATerm t)
          {
            t = try_1(t, replace_quotes_0);
            return(t);
          }
          t = listtd_1(t, y_0);
          {
            ATerm z_0 (ATerm t)
            {
              ATerm a_1 (ATerm t)
              {
                ATerm k_16 = NULL;
                k_16 = t;
                h_16 :
                if(match_int(k_16, 32))
                  {
                    t = term_z_14;
                    t = explode_string_0(t);
                  }
                else
                  {
                    if(match_int(k_16, 35))
                      {
                        t = term_a_15;
                        t = explode_string_0(t);
                      }
                    else
                      {
                        if(match_int(k_16, 36))
                          {
                            t = term_d_15;
                            t = explode_string_0(t);
                          }
                        else
                          {
                            if(match_int(k_16, 37))
                              {
                                t = term_l_15;
                                t = explode_string_0(t);
                              }
                            else
                              {
                                if(match_int(k_16, 38))
                                  {
                                    t = term_n_15;
                                    t = explode_string_0(t);
                                  }
                                else
                                  {
                                    if(match_int(k_16, 45))
                                      {
                                        t = term_o_15;
                                        t = explode_string_0(t);
                                      }
                                    else
                                      {
                                        if(match_int(k_16, 60))
                                          {
                                            t = term_p_15;
                                            t = explode_string_0(t);
                                          }
                                        else
                                          {
                                            if(match_int(k_16, 62))
                                              {
                                                t = term_r_15;
                                                t = explode_string_0(t);
                                              }
                                            else
                                              {
                                                if(match_int(k_16, 92))
                                                  {
                                                    t = term_s_15;
                                                    t = explode_string_0(t);
                                                  }
                                                else
                                                  {
                                                    if(match_int(k_16, 94))
                                                      {
                                                        t = term_t_15;
                                                        t = explode_string_0(t);
                                                      }
                                                    else
                                                      {
                                                        if(match_int(k_16, 95))
                                                          {
                                                            t = term_u_15;
                                                            t = explode_string_0(t);
                                                          }
                                                        else
                                                          {
                                                            if(match_int(k_16, 123))
                                                              {
                                                                t = term_v_15;
                                                                t = explode_string_0(t);
                                                              }
                                                            else
                                                              {
                                                                if(match_int(k_16, 124))
                                                                  {
                                                                    t = term_w_15;
                                                                    t = explode_string_0(t);
                                                                  }
                                                                else
                                                                  {
                                                                    if(match_int(k_16, 125))
                                                                      {
                                                                        t = term_x_15;
                                                                        t = explode_string_0(t);
                                                                      }
                                                                    else
                                                                      {
                                                                        if(match_int(k_16, 126))
                                                                          {
                                                                            t = term_y_15;
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
              t = try_1(t, a_1);
              return(t);
            }
            t = map_1(t, z_0);
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
  ATerm d_17 = NULL,e_17 = NULL,f_17 = NULL;
  d_17 = t;
  c_17 :
  if(((ATgetType(d_17) == AT_LIST) && !(ATisEmpty(d_17))))
    {
      e_17 = ATgetFirst((ATermList) d_17);
      f_17 = (ATerm) ATgetNext((ATermList) d_17);
      t = not_null(f_17);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm remove_trailing_1 (ATerm t, ATerm c_67 (ATerm))
{
  ATerm i_17 (ATerm t)
  {
    ATerm z_15 = t;
    int a_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, c_67, _id);
        {
          t = Tl_0(t);
          t = i_17(t);
        }
        LocalPopChoice(a_16);
      }
    else
      {
        t = z_15;
        {
        }
      }
    return(t);
  }
  t = i_17(t);
  return(t);
}
ATerm at_suffix_1 (ATerm t, ATerm r_75 (ATerm))
{
  ATerm j_17 (ATerm t)
  {
    ATerm b_16 = t;
    int c_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_75(t);
        LocalPopChoice(c_16);
      }
    else
      {
        t = b_16;
        t = Cons_2(t, _id, j_17);
      }
    return(t);
  }
  t = j_17(t);
  return(t);
}
ATerm LatexComment_0 (ATerm t)
{
  ATerm p_17 = NULL;
  ATerm b_1 (ATerm t)
  {
    ATerm o_17 = NULL;
    o_17 = t;
    k_17 :
    if(!(match_int(o_17, 9)))
      {
        if(!(match_int(o_17, 32)))
          {
            _fail(t);
          }
      }
    return(t);
  }
  t = remove_trailing_1(t, b_1);
  {
    ATerm c_1 (ATerm t)
    {
      ATerm d_1 (ATerm t)
      {
        ATerm e_1 (ATerm t)
        {
          ATerm q_17 = NULL;
          q_17 = t;
          l_17 :
          if(!(match_int(q_17, 37)))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm f_1 (ATerm t)
        {
          ATerm g_1 (ATerm t)
          {
            ATerm r_17 = NULL;
            r_17 = t;
            m_17 :
            if(!(match_int(r_17, 37)))
              {
                _fail(t);
              }
            return(t);
          }
          ATerm h_1 (ATerm t)
          {
            ATerm s_17 = NULL;
            s_17 = t;
            if(((p_17 != NULL) && (p_17 != s_17)))
              _fail(s_17);
            else
              p_17 = s_17;
            return(t);
          }
          t = Cons_2(t, g_1, h_1);
          return(t);
        }
        t = Cons_2(t, e_1, f_1);
        t = not_null(p_17);
        return(t);
      }
      t = at_suffix_1(t, d_1);
      return(t);
    }
    t = try_1(t, c_1);
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
      ATerm j_1 (ATerm t)
      {
        t = (ATerm) ATempty;
        return(t);
      }
      t = split_2(t, _id, j_1);
      {
        ATerm e_19 (ATerm t)
        {
          ATerm g_18 = NULL,h_18 = NULL,i_18 = NULL,j_18 = NULL,k_18 = NULL;
          ATerm h_19 (ATerm t)
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(j_18), (ATerm) ATinsert(CheckATermList(not_null(k_18)), not_null(i_18)));
            t = e_19(t);
            return(t);
          }
          g_18 = t;
          a_18 :
          if(match_cons(g_18, sym__2))
            {
              h_18 = ATgetArgument(g_18, 0);
              k_18 = ATgetArgument(g_18, 1);
              b_18 :
              if(((ATgetType(h_18) == AT_LIST) && ATisEmpty(h_18)))
                {
                  {
                    ATerm o_18 = NULL;
                    ATerm p_18 = NULL;
                    t = not_null(k_18);
                    {
                      t = LatexComment_0(t);
                      {
                        p_18 = t;
                        if(((o_18 != NULL) && (o_18 != p_18)))
                          _fail(p_18);
                        else
                          o_18 = p_18;
                      }
                    }
                    t = (ATerm) ATinsert(ATempty, not_null(o_18));
                  }
                }
              else
                {
                  if(((ATgetType(h_18) == AT_LIST) && !(ATisEmpty(h_18))))
                    {
                      i_18 = ATgetFirst((ATermList) h_18);
                      j_18 = (ATerm) ATgetNext((ATermList) h_18);
                      c_18 :
                      if(match_int(i_18, 10))
                        {
                          ATerm d_16 = t;
                          int e_16 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm t_18 = NULL,v_18 = NULL;
                              ATerm f_16;
                              f_16 = t;
                              {
                                ATerm u_18 = NULL;
                                t = not_null(k_18);
                                {
                                  t = LatexComment_0(t);
                                  {
                                    u_18 = t;
                                    if(((t_18 != NULL) && (t_18 != u_18)))
                                      _fail(u_18);
                                    else
                                      t_18 = u_18;
                                  }
                                }
                              }
                              t = f_16;
                              {
                                ATerm w_18 = NULL;
                                t = (ATerm) ATmakeAppl(sym__2, not_null(j_18), (ATerm) ATempty);
                                {
                                  t = e_19(t);
                                  {
                                    w_18 = t;
                                    if(((v_18 != NULL) && (v_18 != w_18)))
                                      _fail(w_18);
                                    else
                                      v_18 = w_18;
                                  }
                                }
                                t = (ATerm) ATinsert(CheckATermList(not_null(v_18)), not_null(t_18));
                              }
                              LocalPopChoice(e_16);
                            }
                          else
                            {
                              t = d_16;
                              t = h_19(t);
                            }
                        }
                      else
                        {
                          t = h_19(t);
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
        t = e_19(t);
        {
          ATerm k_1 (ATerm t)
          {
            ATerm a_19 = NULL;
            a_19 = t;
            d_18 :
            if(!(match_string(a_19, "")))
              {
                _fail(t);
              }
            return(t);
          }
          t = remove_trailing_1(t, k_1);
          {
            t = reverse_0(t);
            {
              ATerm l_1 (ATerm t)
              {
                ATerm b_19 = NULL;
                b_19 = t;
                e_18 :
                if(!(match_string(b_19, "")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              t = remove_trailing_1(t, l_1);
              {
                ATerm p_1 (ATerm t)
                {
                  ATerm c_19 = NULL;
                  c_19 = t;
                  t = (ATerm) ATinsert(ATinsert(ATempty, term_g_16), not_null(c_19));
                  return(t);
                }
                t = map_1(t, p_1);
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
  ATerm q_19 = NULL;
  q_19 = t;
  p_19 :
  if(match_cons(q_19, sym_MATH_0))
    {
      ATerm s_19 = NULL,u_19 = NULL;
      ATerm l_16;
      l_16 = t;
      {
        ATerm t_19 = NULL;
        t = SSLgetAnnotations(not_null(q_19));
        {
          t_19 = t;
          if(((s_19 != NULL) && (s_19 != t_19)))
            _fail(t_19);
          else
            s_19 = t_19;
        }
      }
      t = l_16;
      {
        ATerm v_19 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_MATH_0), not_null(s_19));
        {
          v_19 = t;
          if(((u_19 != NULL) && (u_19 != v_19)))
            _fail(v_19);
          else
            u_19 = v_19;
        }
        t = not_null(u_19);
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
  ATerm d_20 = NULL;
  d_20 = t;
  c_20 :
  if(match_cons(d_20, sym_NUM_0))
    {
      ATerm f_20 = NULL,h_20 = NULL;
      ATerm m_16;
      m_16 = t;
      {
        ATerm g_20 = NULL;
        t = SSLgetAnnotations(not_null(d_20));
        {
          g_20 = t;
          if(((f_20 != NULL) && (f_20 != g_20)))
            _fail(g_20);
          else
            f_20 = g_20;
        }
      }
      t = m_16;
      {
        ATerm i_20 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_NUM_0), not_null(f_20));
        {
          i_20 = t;
          if(((h_20 != NULL) && (h_20 != i_20)))
            _fail(i_20);
          else
            h_20 = i_20;
        }
        t = not_null(h_20);
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
  ATerm q_20 = NULL;
  q_20 = t;
  p_20 :
  if(match_cons(q_20, sym_VAR_0))
    {
      ATerm s_20 = NULL,u_20 = NULL;
      ATerm n_16;
      n_16 = t;
      {
        ATerm t_20 = NULL;
        t = SSLgetAnnotations(not_null(q_20));
        {
          t_20 = t;
          if(((s_20 != NULL) && (s_20 != t_20)))
            _fail(t_20);
          else
            s_20 = t_20;
        }
      }
      t = n_16;
      {
        ATerm v_20 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_VAR_0), not_null(s_20));
        {
          v_20 = t;
          if(((u_20 != NULL) && (u_20 != v_20)))
            _fail(v_20);
          else
            u_20 = v_20;
        }
        t = not_null(u_20);
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
  ATerm d_21 = NULL;
  d_21 = t;
  c_21 :
  if(match_cons(d_21, sym_KW_0))
    {
      ATerm f_21 = NULL,h_21 = NULL;
      ATerm o_16;
      o_16 = t;
      {
        ATerm g_21 = NULL;
        t = SSLgetAnnotations(not_null(d_21));
        {
          g_21 = t;
          if(((f_21 != NULL) && (f_21 != g_21)))
            _fail(g_21);
          else
            f_21 = g_21;
        }
      }
      t = o_16;
      {
        ATerm i_21 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_KW_0), not_null(f_21));
        {
          i_21 = t;
          if(((h_21 != NULL) && (h_21 != i_21)))
            _fail(i_21);
          else
            h_21 = i_21;
        }
        t = not_null(h_21);
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
  ATerm q_21 = NULL;
  q_21 = t;
  p_21 :
  if(match_cons(q_21, sym_CL_0))
    {
      ATerm s_21 = NULL,u_21 = NULL;
      ATerm p_16;
      p_16 = t;
      {
        ATerm t_21 = NULL;
        t = SSLgetAnnotations(not_null(q_21));
        {
          t_21 = t;
          if(((s_21 != NULL) && (s_21 != t_21)))
            _fail(t_21);
          else
            s_21 = t_21;
        }
      }
      t = p_16;
      {
        ATerm v_21 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_CL_0), not_null(s_21));
        {
          v_21 = t;
          if(((u_21 != NULL) && (u_21 != v_21)))
            _fail(v_21);
          else
            u_21 = v_21;
        }
        t = not_null(u_21);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm FFID_2 (ATerm t, ATerm g_59 (ATerm), ATerm h_59 (ATerm))
{
  ATerm f_22 = NULL,g_22 = NULL,h_22 = NULL;
  f_22 = t;
  e_22 :
  if(match_cons(f_22, sym_FFID_2))
    {
      g_22 = ATgetArgument(f_22, 0);
      h_22 = ATgetArgument(f_22, 1);
      {
        ATerm l_22 = NULL,n_22 = NULL;
        ATerm m_22 = NULL;
        t = SSLgetAnnotations(not_null(f_22));
        {
          m_22 = t;
          if(((l_22 != NULL) && (l_22 != m_22)))
            _fail(m_22);
          else
            l_22 = m_22;
        }
        {
          t = not_null(g_22);
          {
            ATerm p_22 = NULL;
            t = g_59(t);
            {
              n_22 = t;
              {
                t = not_null(h_22);
                {
                  ATerm r_22 = NULL;
                  t = h_59(t);
                  {
                    p_22 = t;
                    {
                      ATerm s_22 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FFID_2, not_null(n_22), not_null(p_22)), not_null(l_22));
                      {
                        s_22 = t;
                        if(((r_22 != NULL) && (r_22 != s_22)))
                          _fail(s_22);
                        else
                          r_22 = s_22;
                      }
                      t = not_null(r_22);
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
  ATerm u_26 = NULL;
  u_26 = t;
  t_26 :
  if(match_cons(u_26, sym_SZ_0))
    {
      ATerm w_26 = NULL,y_26 = NULL;
      ATerm q_16;
      q_16 = t;
      {
        ATerm x_26 = NULL;
        t = SSLgetAnnotations(not_null(u_26));
        {
          x_26 = t;
          if(((w_26 != NULL) && (w_26 != x_26)))
            _fail(x_26);
          else
            w_26 = x_26;
        }
      }
      t = q_16;
      {
        ATerm z_26 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SZ_0), not_null(w_26));
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
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm SH_0 (ATerm t)
{
  ATerm h_27 = NULL;
  h_27 = t;
  g_27 :
  if(match_cons(h_27, sym_SH_0))
    {
      ATerm j_27 = NULL,l_27 = NULL;
      ATerm r_16;
      r_16 = t;
      {
        ATerm k_27 = NULL;
        t = SSLgetAnnotations(not_null(h_27));
        {
          k_27 = t;
          if(((j_27 != NULL) && (j_27 != k_27)))
            _fail(k_27);
          else
            j_27 = k_27;
        }
      }
      t = r_16;
      {
        ATerm m_27 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SH_0), not_null(j_27));
        {
          m_27 = t;
          if(((l_27 != NULL) && (l_27 != m_27)))
            _fail(m_27);
          else
            l_27 = m_27;
        }
        t = not_null(l_27);
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
  ATerm w_27 = NULL;
  w_27 = t;
  t_27 :
  if(match_cons(w_27, sym_SE_0))
    {
      ATerm d_28 = NULL,f_28 = NULL;
      ATerm s_16;
      s_16 = t;
      {
        ATerm e_28 = NULL;
        t = SSLgetAnnotations(not_null(w_27));
        {
          e_28 = t;
          if(((d_28 != NULL) && (d_28 != e_28)))
            _fail(e_28);
          else
            d_28 = e_28;
        }
      }
      t = s_16;
      {
        ATerm g_28 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SE_0), not_null(d_28));
        {
          g_28 = t;
          if(((f_28 != NULL) && (f_28 != g_28)))
            _fail(g_28);
          else
            f_28 = g_28;
        }
        t = not_null(f_28);
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
  ATerm o_28 = NULL;
  o_28 = t;
  n_28 :
  if(match_cons(o_28, sym_FM_0))
    {
      ATerm q_28 = NULL,w_28 = NULL;
      ATerm t_16;
      t_16 = t;
      {
        ATerm u_28 = NULL;
        t = SSLgetAnnotations(not_null(o_28));
        {
          u_28 = t;
          if(((q_28 != NULL) && (q_28 != u_28)))
            _fail(u_28);
          else
            q_28 = u_28;
        }
      }
      t = t_16;
      {
        ATerm x_28 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FM_0), not_null(q_28));
        {
          x_28 = t;
          if(((w_28 != NULL) && (w_28 != x_28)))
            _fail(x_28);
          else
            w_28 = x_28;
        }
        t = not_null(w_28);
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
  ATerm q_1 (ATerm t)
  {
    ATerm u_16 = t;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = u_16;
      }
    return(t);
  }
  t = filter_1(t, q_1);
  {
    ATerm r_1 (ATerm t)
    {
      t = term_v_16;
      return(t);
    }
    t = separate_by_1(t, r_1);
  }
  return(t);
}
ATerm HS_0 (ATerm t)
{
  ATerm f_29 = NULL;
  f_29 = t;
  e_29 :
  if(match_cons(f_29, sym_HS_0))
    {
      ATerm h_29 = NULL,j_29 = NULL;
      ATerm w_16;
      w_16 = t;
      {
        ATerm i_29 = NULL;
        t = SSLgetAnnotations(not_null(f_29));
        {
          i_29 = t;
          if(((h_29 != NULL) && (h_29 != i_29)))
            _fail(i_29);
          else
            h_29 = i_29;
        }
      }
      t = w_16;
      {
        ATerm k_29 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_HS_0), not_null(h_29));
        {
          k_29 = t;
          if(((j_29 != NULL) && (j_29 != k_29)))
            _fail(k_29);
          else
            j_29 = k_29;
        }
        t = not_null(j_29);
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
  ATerm p_29 = NULL;
  ATerm x_16 = t;
  int y_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_1 (ATerm t)
      {
        ATerm t_1 (ATerm t)
        {
          ATerm q_29 = NULL;
          q_29 = t;
          if(((p_29 != NULL) && (p_29 != q_29)))
            _fail(q_29);
          else
            p_29 = q_29;
          return(t);
        }
        t = SOpt_2(t, HS_0, t_1);
        return(t);
      }
      t = fetch_1(t, s_1);
      t = not_null(p_29);
      LocalPopChoice(y_16);
    }
  else
    {
      t = x_16;
      t = term_z_16;
    }
  return(t);
}
ATerm separate_by_0 (ATerm t)
{
  ATerm v_29 = NULL,w_29 = NULL,x_29 = NULL;
  v_29 = t;
  u_29 :
  if(match_cons(v_29, sym__2))
    {
      w_29 = ATgetArgument(v_29, 0);
      x_29 = ATgetArgument(v_29, 1);
      {
        t = not_null(x_29);
        {
          ATerm a_17 = t;
          int b_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(b_17);
            }
          else
            {
              t = a_17;
              {
                ATerm v_1 (ATerm t)
                {
                  ATerm g_17 = t;
                  int h_17 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = Nil_0(t);
                      LocalPopChoice(h_17);
                    }
                  else
                    {
                      t = g_17;
                      {
                        ATerm a_30 = NULL;
                        t = Cons_2(t, _id, v_1);
                        {
                          ATerm b_30 = NULL;
                          b_30 = t;
                          if(((a_30 != NULL) && (a_30 != b_30)))
                            _fail(b_30);
                          else
                            a_30 = b_30;
                          t = (ATerm) ATinsert(CheckATermList(not_null(a_30)), not_null(w_29));
                        }
                      }
                    }
                  return(t);
                }
                t = Cons_2(t, _id, v_1);
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
ATerm if_verbose2_1 (ATerm t, ATerm t_88 (ATerm))
{
  ATerm w_1 (ATerm t)
  {
    ATerm n_17;
    n_17 = t;
    {
      ATerm g_30 = NULL;
      ATerm h_30 = NULL;
      t = term_i_7;
      {
        t = get_config_0(t);
        {
          h_30 = t;
          if(((g_30 != NULL) && (g_30 != h_30)))
            _fail(h_30);
          else
            g_30 = h_30;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(g_30), term_t_17);
        t = geq_0(t);
      }
    }
    t = n_17;
    t = t_88(t);
    return(t);
  }
  t = try_1(t, w_1);
  return(t);
}
ATerm dissuader_1 (ATerm t, ATerm e_86 (ATerm))
{
  ATerm u_17;
  u_17 = t;
  {
    ATerm x_1 (ATerm t)
    {
      t = e_86(t);
      {
        ATerm z_1 (ATerm t)
        {
          t = term_v_17;
          return(t);
        }
        t = debug_1(t, z_1);
      }
      return(t);
    }
    t = if_verbose2_1(t, x_1);
  }
  t = u_17;
  return(t);
}
ATerm separate_by_1 (ATerm t, ATerm u_74 (ATerm))
{
  ATerm l_30 = NULL,n_30 = NULL;
  ATerm a_2 (ATerm t)
  {
    t = term_w_17;
    return(t);
  }
  t = dissuader_1(t, a_2);
  {
    ATerm x_17;
    x_17 = t;
    {
      ATerm m_30 = NULL;
      m_30 = t;
      if(((l_30 != NULL) && (l_30 != m_30)))
        _fail(m_30);
      else
        l_30 = m_30;
    }
    t = x_17;
    {
      ATerm o_30 = NULL;
      t = term_y_17;
      {
        t = u_74(t);
        {
          o_30 = t;
          if(((n_30 != NULL) && (n_30 != o_30)))
            _fail(o_30);
          else
            n_30 = o_30;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(n_30), not_null(l_30));
        t = separate_by_0(t);
      }
    }
  }
  return(t);
}
ATerm filter_1 (ATerm t, ATerm p_82 (ATerm))
{
  ATerm z_17 = t;
  int f_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(f_18);
    }
  else
    {
      t = z_17;
      {
        ATerm l_18 = t;
        int m_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_2 (ATerm t)
            {
              t = filter_1(t, p_82);
              return(t);
            }
            t = Cons_2(t, p_82, b_2);
            LocalPopChoice(m_18);
          }
        else
          {
            t = l_18;
            {
              ATerm t_30 = NULL,u_30 = NULL,v_30 = NULL;
              t_30 = t;
              s_30 :
              if(((ATgetType(t_30) == AT_LIST) && !(ATisEmpty(t_30))))
                {
                  u_30 = ATgetFirst((ATermList) t_30);
                  v_30 = (ATerm) ATgetNext((ATermList) t_30);
                  {
                    t = not_null(v_30);
                    t = filter_1(t, p_82);
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
  ATerm c_31 = NULL;
  c_31 = t;
  b_31 :
  if(match_cons(c_31, sym_IS_0))
    {
      ATerm e_31 = NULL,g_31 = NULL;
      ATerm n_18;
      n_18 = t;
      {
        ATerm f_31 = NULL;
        t = SSLgetAnnotations(not_null(c_31));
        {
          f_31 = t;
          if(((e_31 != NULL) && (e_31 != f_31)))
            _fail(f_31);
          else
            e_31 = f_31;
        }
      }
      t = n_18;
      {
        ATerm h_31 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_IS_0), not_null(e_31));
        {
          h_31 = t;
          if(((g_31 != NULL) && (g_31 != h_31)))
            _fail(h_31);
          else
            g_31 = h_31;
        }
        t = not_null(g_31);
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
  ATerm m_31 = NULL;
  ATerm q_18 = t;
  int r_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_2 (ATerm t)
      {
        ATerm d_2 (ATerm t)
        {
          ATerm n_31 = NULL;
          n_31 = t;
          if(((m_31 != NULL) && (m_31 != n_31)))
            _fail(n_31);
          else
            m_31 = n_31;
          return(t);
        }
        t = SOpt_2(t, IS_0, d_2);
        return(t);
      }
      t = fetch_1(t, c_2);
      t = not_null(m_31);
      LocalPopChoice(r_18);
    }
  else
    {
      t = q_18;
      t = term_s_18;
    }
  return(t);
}
ATerm VS_0 (ATerm t)
{
  ATerm t_31 = NULL;
  t_31 = t;
  s_31 :
  if(match_cons(t_31, sym_VS_0))
    {
      ATerm v_31 = NULL,x_31 = NULL;
      ATerm x_18;
      x_18 = t;
      {
        ATerm w_31 = NULL;
        t = SSLgetAnnotations(not_null(t_31));
        {
          w_31 = t;
          if(((v_31 != NULL) && (v_31 != w_31)))
            _fail(w_31);
          else
            v_31 = w_31;
        }
      }
      t = x_18;
      {
        ATerm y_31 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_VS_0), not_null(v_31));
        {
          y_31 = t;
          if(((x_31 != NULL) && (x_31 != y_31)))
            _fail(y_31);
          else
            x_31 = y_31;
        }
        t = not_null(x_31);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm SOpt_2 (ATerm t, ATerm j_58 (ATerm), ATerm k_58 (ATerm))
{
  ATerm i_32 = NULL,j_32 = NULL,k_32 = NULL;
  i_32 = t;
  h_32 :
  if(match_cons(i_32, sym_SOpt_2))
    {
      j_32 = ATgetArgument(i_32, 0);
      k_32 = ATgetArgument(i_32, 1);
      {
        ATerm o_32 = NULL,q_32 = NULL;
        ATerm p_32 = NULL;
        t = SSLgetAnnotations(not_null(i_32));
        {
          p_32 = t;
          if(((o_32 != NULL) && (o_32 != p_32)))
            _fail(p_32);
          else
            o_32 = p_32;
        }
        {
          t = not_null(j_32);
          {
            ATerm s_32 = NULL;
            t = j_58(t);
            {
              q_32 = t;
              {
                t = not_null(k_32);
                {
                  ATerm u_32 = NULL;
                  t = k_58(t);
                  {
                    s_32 = t;
                    {
                      ATerm v_32 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SOpt_2, not_null(q_32), not_null(s_32)), not_null(o_32));
                      {
                        v_32 = t;
                        if(((u_32 != NULL) && (u_32 != v_32)))
                          _fail(v_32);
                        else
                          u_32 = v_32;
                      }
                      t = not_null(u_32);
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
  ATerm c_33 = NULL;
  ATerm y_18 = t;
  int z_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_2 (ATerm t)
      {
        ATerm f_2 (ATerm t)
        {
          ATerm d_33 = NULL;
          d_33 = t;
          if(((c_33 != NULL) && (c_33 != d_33)))
            _fail(d_33);
          else
            c_33 = d_33;
          return(t);
        }
        t = SOpt_2(t, VS_0, f_2);
        return(t);
      }
      t = fetch_1(t, e_2);
      t = not_null(c_33);
      LocalPopChoice(z_18);
    }
  else
    {
      t = y_18;
      t = term_s_18;
    }
  return(t);
}
ATerm C_2 (ATerm t, ATerm p_59 (ATerm), ATerm q_59 (ATerm))
{
  ATerm p_33 = NULL,q_33 = NULL,u_33 = NULL;
  p_33 = t;
  m_33 :
  if(match_cons(p_33, sym_C_2))
    {
      q_33 = ATgetArgument(p_33, 0);
      u_33 = ATgetArgument(p_33, 1);
      {
        ATerm y_33 = NULL,a_34 = NULL;
        ATerm z_33 = NULL;
        t = SSLgetAnnotations(not_null(p_33));
        {
          z_33 = t;
          if(((y_33 != NULL) && (y_33 != z_33)))
            _fail(z_33);
          else
            y_33 = z_33;
        }
        {
          t = not_null(q_33);
          {
            ATerm c_34 = NULL;
            t = p_59(t);
            {
              a_34 = t;
              {
                t = not_null(u_33);
                {
                  ATerm i_34 = NULL;
                  t = q_59(t);
                  {
                    c_34 = t;
                    {
                      ATerm j_34 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_C_2, not_null(a_34), not_null(c_34)), not_null(y_33));
                      {
                        j_34 = t;
                        if(((i_34 != NULL) && (i_34 != j_34)))
                          _fail(j_34);
                        else
                          i_34 = j_34;
                      }
                      t = not_null(i_34);
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
  ATerm c_35 = NULL,d_35 = NULL,e_35 = NULL;
  c_35 = t;
  b_35 :
  if(match_cons(c_35, sym_R_2))
    {
      d_35 = ATgetArgument(c_35, 0);
      e_35 = ATgetArgument(c_35, 1);
      {
        t = not_null(e_35);
        {
          ATerm r_35 (ATerm t)
          {
            ATerm g_35 = NULL,h_35 = NULL,i_35 = NULL;
            ATerm d_19 = t;
            int f_19 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                LocalPopChoice(f_19);
              }
            else
              {
                t = d_19;
                {
                  ATerm g_19 = t;
                  int i_19 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = Cons_2(t, _id, Nil_0);
                      LocalPopChoice(i_19);
                    }
                  else
                    {
                      t = g_19;
                      {
                        ATerm j_19 = t;
                        int k_19 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm g_2 (ATerm t)
                            {
                              t = C_2(t, _id, _id);
                              return(t);
                            }
                            ATerm h_2 (ATerm t)
                            {
                              t = Cons_2(t, _id, r_35);
                              return(t);
                            }
                            t = Cons_2(t, g_2, h_2);
                            LocalPopChoice(k_19);
                          }
                        else
                          {
                            t = j_19;
                            {
                              ATerm l_19 = t;
                              int m_19 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm i_2 (ATerm t)
                                  {
                                    ATerm j_2 (ATerm t)
                                    {
                                      t = C_2(t, _id, _id);
                                      return(t);
                                    }
                                    t = Cons_2(t, j_2, r_35);
                                    return(t);
                                  }
                                  t = Cons_2(t, _id, i_2);
                                  LocalPopChoice(m_19);
                                }
                              else
                                {
                                  t = l_19;
                                  {
                                    ATerm j_35 = NULL,k_35 = NULL,l_35 = NULL,m_35 = NULL,n_35 = NULL;
                                    j_35 = t;
                                    z_34 :
                                    if(((ATgetType(j_35) == AT_LIST) && !(ATisEmpty(j_35))))
                                      {
                                        k_35 = ATgetFirst((ATermList) j_35);
                                        l_35 = (ATerm) ATgetNext((ATermList) j_35);
                                        a_35 :
                                        if(((ATgetType(l_35) == AT_LIST) && !(ATisEmpty(l_35))))
                                          {
                                            m_35 = ATgetFirst((ATermList) l_35);
                                            n_35 = (ATerm) ATgetNext((ATermList) l_35);
                                            {
                                              ATerm o_35 = NULL;
                                              if(((g_35 != NULL) && (g_35 != k_35)))
                                                _fail(k_35);
                                              else
                                                g_35 = k_35;
                                              {
                                                if(((h_35 != NULL) && (h_35 != m_35)))
                                                  _fail(m_35);
                                                else
                                                  h_35 = m_35;
                                                {
                                                  if(((i_35 != NULL) && (i_35 != n_35)))
                                                    _fail(n_35);
                                                  else
                                                    i_35 = n_35;
                                                  {
                                                    ATerm p_35 = NULL;
                                                    t = (ATerm) ATinsert(CheckATermList(not_null(i_35)), not_null(h_35));
                                                    {
                                                      t = r_35(t);
                                                      {
                                                        p_35 = t;
                                                        if(((o_35 != NULL) && (o_35 != p_35)))
                                                          _fail(p_35);
                                                        else
                                                          o_35 = p_35;
                                                      }
                                                    }
                                                    t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(o_35)), term_n_19), not_null(g_35));
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
          t = r_35(t);
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
  ATerm a_36 = NULL,b_36 = NULL;
  ATerm o_19 = t;
  int r_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_36 = NULL,d_36 = NULL,e_36 = NULL;
      c_36 = t;
      z_35 :
      if(match_cons(c_36, sym_LBL_2))
        {
          d_36 = ATgetArgument(c_36, 0);
          e_36 = ATgetArgument(c_36, 1);
          {
            ATerm f_36 = NULL;
            if(((a_36 != NULL) && (a_36 != d_36)))
              _fail(d_36);
            else
              a_36 = d_36;
            {
              if(((b_36 != NULL) && (b_36 != e_36)))
                _fail(e_36);
              else
                b_36 = e_36;
              {
                t = not_null(b_36);
                {
                  t = table_row_0(t);
                  {
                    ATerm g_36 = NULL;
                    t = not_null(b_36);
                    {
                      t = table_row_0(t);
                      {
                        g_36 = t;
                        if(((f_36 != NULL) && (f_36 != g_36)))
                          _fail(g_36);
                        else
                          f_36 = g_36;
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym_LBLBOX_2, not_null(a_36), not_null(f_36));
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
      LocalPopChoice(r_19);
    }
  else
    {
      t = o_19;
      t = table_row_0(t);
    }
  return(t);
}
ATerm at_last_1 (ATerm t, ATerm y_75 (ATerm))
{
  ATerm j_36 (ATerm t)
  {
    ATerm w_19 = t;
    int x_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, Nil_0);
        t = y_75(t);
        LocalPopChoice(x_19);
      }
    else
      {
        t = w_19;
        t = Cons_2(t, _id, j_36);
      }
    return(t);
  }
  t = j_36(t);
  return(t);
}
ATerm table_def_0 (ATerm t)
{
  ATerm w_36 = NULL,x_36 = NULL;
  w_36 = t;
  v_36 :
  if(match_cons(w_36, sym_AOPTIONS_1))
    {
      x_36 = ATgetArgument(w_36, 0);
      {
        t = not_null(x_36);
        {
          ATerm m_2 (ATerm t)
          {
            ATerm z_36 = NULL,a_37 = NULL;
            z_36 = t;
            u_36 :
            if(match_cons(z_36, sym_AL_1))
              {
                a_37 = ATgetArgument(z_36, 0);
                {
                  ATerm c_37 = NULL;
                  ATerm d_37 = NULL,f_37 = NULL;
                  ATerm e_37 = NULL;
                  t = not_null(a_37);
                  {
                    t = Hspace_0(t);
                    {
                      t = string_to_int_0(t);
                      {
                        e_37 = t;
                        if(((d_37 != NULL) && (d_37 != e_37)))
                          _fail(e_37);
                        else
                          d_37 = e_37;
                      }
                    }
                  }
                  {
                    t = (ATerm) ATmakeAppl(sym__2, not_null(d_37), term_v_16);
                    {
                      t = copy_0(t);
                      {
                        f_37 = t;
                        if(((c_37 != NULL) && (c_37 != f_37)))
                          _fail(f_37);
                        else
                          c_37 = f_37;
                      }
                    }
                  }
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(c_37)), term_y_19);
                }
              }
            else
              {
                if(match_cons(z_36, sym_AC_1))
                  {
                    a_37 = ATgetArgument(z_36, 0);
                    {
                      ATerm h_37 = NULL;
                      ATerm i_37 = NULL,k_37 = NULL;
                      ATerm j_37 = NULL;
                      t = not_null(a_37);
                      {
                        t = Hspace_0(t);
                        {
                          t = string_to_int_0(t);
                          {
                            j_37 = t;
                            if(((i_37 != NULL) && (i_37 != j_37)))
                              _fail(j_37);
                            else
                              i_37 = j_37;
                          }
                        }
                      }
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(i_37), term_v_16);
                        {
                          t = copy_0(t);
                          {
                            k_37 = t;
                            if(((h_37 != NULL) && (h_37 != k_37)))
                              _fail(k_37);
                            else
                              h_37 = k_37;
                          }
                        }
                      }
                      t = (ATerm) ATinsert(ATinsert(ATempty, not_null(h_37)), term_z_19);
                    }
                  }
                else
                  {
                    if(match_cons(z_36, sym_AR_1))
                      {
                        a_37 = ATgetArgument(z_36, 0);
                        {
                          ATerm m_37 = NULL;
                          ATerm n_37 = NULL,p_37 = NULL;
                          ATerm o_37 = NULL;
                          t = not_null(a_37);
                          {
                            t = Hspace_0(t);
                            {
                              t = string_to_int_0(t);
                              {
                                o_37 = t;
                                if(((n_37 != NULL) && (n_37 != o_37)))
                                  _fail(o_37);
                                else
                                  n_37 = o_37;
                              }
                            }
                          }
                          {
                            t = (ATerm) ATmakeAppl(sym__2, not_null(n_37), term_v_16);
                            {
                              t = copy_0(t);
                              {
                                p_37 = t;
                                if(((m_37 != NULL) && (m_37 != p_37)))
                                  _fail(p_37);
                                else
                                  m_37 = p_37;
                              }
                            }
                          }
                          t = (ATerm) ATinsert(ATinsert(ATempty, not_null(m_37)), term_a_20);
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
          t = map_1(t, m_2);
          {
            ATerm n_2 (ATerm t)
            {
              t = (ATerm) ATinsert(ATempty, term_n_19);
              return(t);
            }
            t = separate_by_1(t, n_2);
            {
              t = concat_0(t);
              {
                ATerm o_2 (ATerm t)
                {
                  t = (ATerm) ATinsert(ATempty, term_b_20);
                  return(t);
                }
                t = at_last_1(t, o_2);
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
  ATerm c_38 = NULL,d_38 = NULL,e_38 = NULL;
  c_38 = t;
  b_38 :
  if(match_cons(c_38, sym__2))
    {
      d_38 = ATgetArgument(c_38, 0);
      e_38 = ATgetArgument(c_38, 1);
      {
        ATerm e_20 = t;
        int j_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_subti(not_null(d_38), not_null(e_38));
            LocalPopChoice(j_20);
          }
        else
          {
            t = e_20;
            t = SSL_subtr(not_null(d_38), not_null(e_38));
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
  ATerm k_38 = NULL,l_38 = NULL,m_38 = NULL;
  k_38 = t;
  j_38 :
  if(match_cons(k_38, sym__2))
    {
      l_38 = ATgetArgument(k_38, 0);
      m_38 = ATgetArgument(k_38, 1);
      {
        ATerm k_20;
        k_20 = t;
        {
          ATerm l_20 = t;
          int m_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(l_38), not_null(m_38));
              LocalPopChoice(m_20);
            }
          else
            {
              t = l_20;
              t = SSL_gtr(not_null(l_38), not_null(m_38));
            }
        }
        t = k_20;
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
  ATerm s_38 = NULL;
  ATerm n_20 = t;
  int o_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_38 = NULL,u_38 = NULL,v_38 = NULL;
      t_38 = t;
      r_38 :
      if(match_cons(t_38, sym__2))
        {
          u_38 = ATgetArgument(t_38, 0);
          v_38 = ATgetArgument(t_38, 1);
          {
            if(((s_38 != NULL) && (s_38 != u_38)))
              _fail(u_38);
            else
              s_38 = u_38;
            if(((s_38 != NULL) && (s_38 != v_38)))
              _fail(v_38);
            else
              s_38 = v_38;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(o_20);
    }
  else
    {
      t = n_20;
      t = gt_0(t);
    }
  return(t);
}
ATerm while_not_2 (ATerm t, ATerm l_68 (ATerm), ATerm m_68 (ATerm))
{
  ATerm x_38 (ATerm t)
  {
    ATerm r_20 = t;
    int w_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_68(t);
        LocalPopChoice(w_20);
      }
    else
      {
        t = r_20;
        {
          t = m_68(t);
          t = x_38(t);
        }
      }
    return(t);
  }
  t = x_38(t);
  return(t);
}
ATerm for_3 (ATerm t, ATerm o_68 (ATerm), ATerm p_68 (ATerm), ATerm q_68 (ATerm))
{
  t = o_68(t);
  t = while_not_2(t, p_68, q_68);
  return(t);
}
ATerm copy_0 (ATerm t)
{
  ATerm x_20 = t;
  int y_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_2 (ATerm t)
      {
        ATerm h_39 = NULL,i_39 = NULL,j_39 = NULL;
        h_39 = t;
        z_38 :
        if(match_cons(h_39, sym__2))
          {
            i_39 = ATgetArgument(h_39, 0);
            j_39 = ATgetArgument(h_39, 1);
            t = (ATerm) ATmakeAppl(sym__3, not_null(i_39), not_null(j_39), (ATerm) ATempty);
          }
        else
          {
            _fail(t);
          }
        return(t);
      }
      ATerm q_2 (ATerm t)
      {
        ATerm m_39 = NULL,n_39 = NULL,o_39 = NULL,p_39 = NULL;
        m_39 = t;
        b_39 :
        if(match_cons(m_39, sym__3))
          {
            n_39 = ATgetArgument(m_39, 0);
            o_39 = ATgetArgument(m_39, 1);
            p_39 = ATgetArgument(m_39, 2);
            c_39 :
            if(match_int(n_39, 0))
              {
                t = not_null(p_39);
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
      ATerm r_2 (ATerm t)
      {
        ATerm s_39 = NULL,t_39 = NULL,u_39 = NULL,v_39 = NULL;
        s_39 = t;
        f_39 :
        if(match_cons(s_39, sym__3))
          {
            t_39 = ATgetArgument(s_39, 0);
            u_39 = ATgetArgument(s_39, 1);
            v_39 = ATgetArgument(s_39, 2);
            {
              ATerm z_39 = NULL;
              ATerm z_20;
              z_20 = t;
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(t_39), term_w_6);
                t = geq_0(t);
              }
              t = z_20;
              {
                ATerm a_40 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(t_39), term_w_6);
                {
                  t = subt_0(t);
                  {
                    a_40 = t;
                    if(((z_39 != NULL) && (z_39 != a_40)))
                      _fail(a_40);
                    else
                      z_39 = a_40;
                  }
                }
                t = (ATerm) ATmakeAppl(sym__3, not_null(z_39), not_null(u_39), (ATerm) ATinsert(CheckATermList(not_null(v_39)), not_null(u_39)));
              }
            }
          }
        else
          {
            _fail(t);
          }
        return(t);
      }
      t = for_3(t, p_2, q_2, r_2);
      LocalPopChoice(y_20);
    }
  else
    {
      t = x_20;
      {
        ATerm s_2 (ATerm t)
        {
          ATerm b_40 = NULL;
          b_40 = t;
          g_39 :
          if(!(match_int(b_40, 0)))
            {
              _fail(t);
            }
          return(t);
        }
        t = _2(t, s_2, _id);
        t = (ATerm) ATempty;
      }
    }
  return(t);
}
ATerm R_2 (ATerm t, ATerm y_58 (ATerm), ATerm z_58 (ATerm))
{
  ATerm m_40 = NULL,n_40 = NULL,o_40 = NULL;
  m_40 = t;
  l_40 :
  if(match_cons(m_40, sym_R_2))
    {
      n_40 = ATgetArgument(m_40, 0);
      o_40 = ATgetArgument(m_40, 1);
      {
        ATerm v_40 = NULL,x_40 = NULL;
        ATerm w_40 = NULL;
        t = SSLgetAnnotations(not_null(m_40));
        {
          w_40 = t;
          if(((v_40 != NULL) && (v_40 != w_40)))
            _fail(w_40);
          else
            v_40 = w_40;
        }
        {
          t = not_null(n_40);
          {
            ATerm z_40 = NULL;
            t = y_58(t);
            {
              x_40 = t;
              {
                t = not_null(o_40);
                {
                  ATerm b_41 = NULL;
                  t = z_58(t);
                  {
                    z_40 = t;
                    {
                      ATerm c_41 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_R_2, not_null(x_40), not_null(z_40)), not_null(v_40));
                      {
                        c_41 = t;
                        if(((b_41 != NULL) && (b_41 != c_41)))
                          _fail(c_41);
                        else
                          b_41 = c_41;
                      }
                      t = not_null(b_41);
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
  ATerm t_2 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = split_2(t, _id, t_2);
  {
    ATerm v_42 (ATerm t)
    {
      ATerm r_41 = NULL,s_41 = NULL,t_41 = NULL,u_41 = NULL,v_41 = NULL,w_41 = NULL,x_41 = NULL;
      ATerm a_43 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(w_41), (ATerm) ATinsert(CheckATermList(not_null(x_41)), not_null(v_41)));
        t = v_42(t);
        return(t);
      }
      t_41 = t;
      o_41 :
      if(match_cons(t_41, sym__2))
        {
          u_41 = ATgetArgument(t_41, 0);
          x_41 = ATgetArgument(t_41, 1);
          p_41 :
          if(((ATgetType(u_41) == AT_LIST) && ATisEmpty(u_41)))
            {
              {
                ATerm c_42 = NULL;
                ATerm d_42 = NULL;
                t = not_null(x_41);
                {
                  t = reverse_0(t);
                  {
                    d_42 = t;
                    if(((c_42 != NULL) && (c_42 != d_42)))
                      _fail(d_42);
                    else
                      c_42 = d_42;
                  }
                }
                t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_R_2, (ATerm)ATempty, not_null(c_42)));
              }
            }
          else
            {
              if(((ATgetType(u_41) == AT_LIST) && !(ATisEmpty(u_41))))
                {
                  v_41 = ATgetFirst((ATermList) u_41);
                  w_41 = (ATerm) ATgetNext((ATermList) u_41);
                  q_41 :
                  if(match_cons(v_41, sym_R_2))
                    {
                      r_41 = ATgetArgument(v_41, 0);
                      s_41 = ATgetArgument(v_41, 1);
                      {
                        ATerm a_21 = t;
                        int b_21 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm i_42 = NULL,m_42 = NULL;
                            ATerm e_21;
                            e_21 = t;
                            {
                              ATerm j_42 = NULL;
                              t = not_null(x_41);
                              {
                                t = reverse_0(t);
                                {
                                  j_42 = t;
                                  if(((i_42 != NULL) && (i_42 != j_42)))
                                    _fail(j_42);
                                  else
                                    i_42 = j_42;
                                }
                              }
                            }
                            t = e_21;
                            {
                              ATerm n_42 = NULL;
                              t = (ATerm) ATmakeAppl(sym__2, not_null(w_41), (ATerm) ATempty);
                              {
                                t = v_42(t);
                                {
                                  n_42 = t;
                                  if(((m_42 != NULL) && (m_42 != n_42)))
                                    _fail(n_42);
                                  else
                                    m_42 = n_42;
                                }
                              }
                              t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(m_42)), (ATerm) ATmakeAppl(sym_R_2, not_null(r_41), not_null(s_41))), (ATerm) ATmakeAppl(sym_R_2, (ATerm)ATempty, not_null(i_42)));
                            }
                            LocalPopChoice(b_21);
                          }
                        else
                          {
                            t = a_21;
                            t = a_43(t);
                          }
                      }
                    }
                  else
                    {
                      t = a_43(t);
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
    t = v_42(t);
    {
      ATerm u_2 (ATerm t)
      {
        ATerm j_21 = t;
        if((PushChoice() == 0))
          {
            t = R_2(t, _id, Nil_0);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = j_21;
          }
        return(t);
      }
      t = filter_1(t, u_2);
    }
  }
  return(t);
}
ATerm Abox2latex_0 (ATerm t)
{
  ATerm g_45 = NULL,h_45 = NULL,j_45 = NULL,k_45 = NULL,l_45 = NULL,m_45 = NULL,n_45 = NULL;
  ATerm v_48 (ATerm t)
  {
    t = not_null(n_45);
    {
      ATerm k_21 = t;
      int l_21 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = KW_0(t);
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
                t = VAR_0(t);
                LocalPopChoice(n_21);
              }
            else
              {
                t = m_21;
                {
                  ATerm o_21 = t;
                  int r_21 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = NUM_0(t);
                      LocalPopChoice(r_21);
                    }
                  else
                    {
                      t = o_21;
                      t = MATH_0(t);
                    }
                }
              }
          }
        }
    }
    t = (ATerm) ATmakeAppl(sym_BOXFONT_2, not_null(n_45), not_null(l_45));
    return(t);
  }
  ATerm w_48 (ATerm t)
  {
    ATerm e_48 = NULL;
    ATerm i_48 = NULL;
    t = not_null(l_45);
    {
      ATerm v_2 (ATerm t)
      {
        ATerm f_48 = NULL,g_48 = NULL;
        f_48 = t;
        u_44 :
        if(match_cons(f_48, sym_S_1))
          {
            g_48 = ATgetArgument(f_48, 0);
            {
              t = not_null(g_48);
              t = make_latex_comment_0(t);
            }
          }
        else
          {
            _fail(t);
          }
        return(t);
      }
      t = map_1(t, v_2);
      {
        i_48 = t;
        if(((e_48 != NULL) && (e_48 != i_48)))
          _fail(i_48);
        else
          e_48 = i_48;
      }
    }
    t = (ATerm) ATmakeAppl(sym_CBOX_1, not_null(e_48));
    return(t);
  }
  ATerm x_48 (ATerm t)
  {
    t = not_null(n_45);
    t = latex_string_0(t);
    return(t);
  }
  m_45 = t;
  w_44 :
  if(match_cons(m_45, sym_REF_2))
    {
      n_45 = ATgetArgument(m_45, 0);
      l_45 = ATgetArgument(m_45, 1);
      t = (ATerm) ATmakeAppl(sym_REFBOX_2, not_null(n_45), not_null(l_45));
    }
  else
    {
      if(match_cons(m_45, sym_LBL_2))
        {
          n_45 = ATgetArgument(m_45, 0);
          l_45 = ATgetArgument(m_45, 1);
          t = (ATerm) ATmakeAppl(sym_LBLBOX_2, not_null(n_45), not_null(l_45));
        }
      else
        {
          if(match_cons(m_45, sym_L_2))
            {
              n_45 = ATgetArgument(m_45, 0);
              l_45 = ATgetArgument(m_45, 1);
              {
                ATerm v_45 = NULL;
                ATerm w_21 = t;
                int x_21 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm w_45 = NULL;
                    t = not_null(n_45);
                    {
                      t = string_to_int_0(t);
                      {
                        w_45 = t;
                        if(((v_45 != NULL) && (v_45 != w_45)))
                          _fail(w_45);
                        else
                          v_45 = w_45;
                      }
                    }
                    LocalPopChoice(x_21);
                  }
                else
                  {
                    t = w_21;
                    {
                      ATerm y_21 = t;
                      int z_21 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm y_45 = NULL;
                          t = not_null(n_45);
                          {
                            t = explode_string_0(t);
                            {
                              ATerm w_2 (ATerm t)
                              {
                                ATerm x_45 = NULL;
                                x_45 = t;
                                u_43 :
                                if(!(match_int(x_45, 61)))
                                  {
                                    _fail(t);
                                  }
                                return(t);
                              }
                              t = Cons_2(t, w_2, _id);
                              {
                                t = (ATerm) ATinsert(ATempty, term_a_22);
                                {
                                  t = implode_string_0(t);
                                  {
                                    y_45 = t;
                                    if(((v_45 != NULL) && (v_45 != y_45)))
                                      _fail(y_45);
                                    else
                                      v_45 = y_45;
                                  }
                                }
                              }
                            }
                          }
                          LocalPopChoice(z_21);
                        }
                      else
                        {
                          t = y_21;
                          {
                            ATerm z_45 = NULL;
                            t = not_null(n_45);
                            {
                              z_45 = t;
                              if(((v_45 != NULL) && (v_45 != z_45)))
                                _fail(z_45);
                              else
                                v_45 = z_45;
                            }
                          }
                        }
                    }
                  }
                t = (ATerm) ATmakeAppl(sym_LBOX_2, not_null(v_45), not_null(l_45));
              }
            }
          else
            {
              if(match_cons(m_45, sym_ALT_2))
                {
                  n_45 = ATgetArgument(m_45, 0);
                  l_45 = ATgetArgument(m_45, 1);
                  t = (ATerm) ATmakeAppl(sym_ALTBOX_2, not_null(n_45), not_null(l_45));
                }
              else
                {
                  if(match_cons(m_45, sym_A_3))
                    {
                      n_45 = ATgetArgument(m_45, 0);
                      l_45 = ATgetArgument(m_45, 1);
                      g_45 = ATgetArgument(m_45, 2);
                      {
                        ATerm f_46 = NULL,g_46 = NULL,h_46 = NULL,i_46 = NULL,j_46 = NULL;
                        ATerm k_46 = NULL;
                        t = not_null(g_45);
                        {
                          ATerm l_46 = NULL;
                          t = construct_rows_0(t);
                          {
                            k_46 = t;
                            {
                              if(((h_46 != NULL) && (h_46 != k_46)))
                                _fail(k_46);
                              else
                                h_46 = k_46;
                              {
                                t = not_null(l_45);
                                {
                                  t = Vspace_0(t);
                                  {
                                    ATerm m_46 = NULL,o_46 = NULL;
                                    t = string_to_int_0(t);
                                    {
                                      l_46 = t;
                                      {
                                        if(((f_46 != NULL) && (f_46 != l_46)))
                                          _fail(l_46);
                                        else
                                          f_46 = l_46;
                                        {
                                          ATerm n_46 = NULL;
                                          t = (ATerm) ATmakeAppl(sym__2, not_null(f_46), term_b_20);
                                          {
                                            t = copy_0(t);
                                            {
                                              n_46 = t;
                                              if(((m_46 != NULL) && (m_46 != n_46)))
                                                _fail(n_46);
                                              else
                                                m_46 = n_46;
                                            }
                                          }
                                          {
                                            t = (ATerm) ATmakeAppl(sym__2, not_null(m_46), (ATerm) ATinsert(ATinsert(ATempty, term_g_16), term_b_20));
                                            {
                                              ATerm p_46 = NULL;
                                              t = conc_0(t);
                                              {
                                                o_46 = t;
                                                {
                                                  if(((i_46 != NULL) && (i_46 != o_46)))
                                                    _fail(o_46);
                                                  else
                                                    i_46 = o_46;
                                                  {
                                                    t = not_null(n_45);
                                                    {
                                                      ATerm q_46 = NULL;
                                                      t = table_def_0(t);
                                                      {
                                                        p_46 = t;
                                                        {
                                                          if(((g_46 != NULL) && (g_46 != p_46)))
                                                            _fail(p_46);
                                                          else
                                                            g_46 = p_46;
                                                          {
                                                            t = not_null(h_46);
                                                            {
                                                              t = map_1(t, MkRows_0);
                                                              {
                                                                ATerm z_2 (ATerm t)
                                                                {
                                                                  t = not_null(i_46);
                                                                  return(t);
                                                                }
                                                                t = separate_by_1(t, z_2);
                                                                {
                                                                  q_46 = t;
                                                                  if(((j_46 != NULL) && (j_46 != q_46)))
                                                                    _fail(q_46);
                                                                  else
                                                                    j_46 = q_46;
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
                        t = (ATerm) ATmakeAppl(sym_ABOX_2, not_null(g_46), not_null(j_46));
                      }
                    }
                  else
                    {
                      if(match_cons(m_45, sym_HV_2))
                        {
                          n_45 = ATgetArgument(m_45, 0);
                          l_45 = ATgetArgument(m_45, 1);
                          {
                            ATerm t_46 = NULL,u_46 = NULL,v_46 = NULL,w_46 = NULL;
                            ATerm x_46 = NULL;
                            t = not_null(n_45);
                            {
                              ATerm y_46 = NULL;
                              t = Hspace_0(t);
                              {
                                x_46 = t;
                                {
                                  if(((t_46 != NULL) && (t_46 != x_46)))
                                    _fail(x_46);
                                  else
                                    t_46 = x_46;
                                  {
                                    t = not_null(n_45);
                                    {
                                      ATerm z_46 = NULL;
                                      t = Vspace_0(t);
                                      {
                                        y_46 = t;
                                        {
                                          if(((u_46 != NULL) && (u_46 != y_46)))
                                            _fail(y_46);
                                          else
                                            u_46 = y_46;
                                          {
                                            t = not_null(n_45);
                                            {
                                              ATerm a_47 = NULL;
                                              t = Ispace_0(t);
                                              {
                                                z_46 = t;
                                                {
                                                  if(((v_46 != NULL) && (v_46 != z_46)))
                                                    _fail(z_46);
                                                  else
                                                    v_46 = z_46;
                                                  {
                                                    t = not_null(l_45);
                                                    {
                                                      ATerm a_3 (ATerm t)
                                                      {
                                                        ATerm b_22 = t;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = Nil_0(t);
                                                            PopChoice();
                                                            _fail(t);
                                                          }
                                                        else
                                                          {
                                                            t = b_22;
                                                          }
                                                        return(t);
                                                      }
                                                      t = filter_1(t, a_3);
                                                      {
                                                        ATerm b_3 (ATerm t)
                                                        {
                                                          t = term_c_22;
                                                          return(t);
                                                        }
                                                        t = separate_by_1(t, b_3);
                                                        {
                                                          a_47 = t;
                                                          if(((w_46 != NULL) && (w_46 != a_47)))
                                                            _fail(a_47);
                                                          else
                                                            w_46 = a_47;
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
                            t = (ATerm) ATmakeAppl(sym_HVBOX_4, not_null(t_46), not_null(u_46), not_null(v_46), not_null(w_46));
                          }
                        }
                      else
                        {
                          if(match_cons(m_45, sym_V_2))
                            {
                              n_45 = ATgetArgument(m_45, 0);
                              l_45 = ATgetArgument(m_45, 1);
                              {
                                ATerm d_47 = NULL,e_47 = NULL,f_47 = NULL;
                                ATerm g_47 = NULL;
                                t = not_null(n_45);
                                {
                                  ATerm h_47 = NULL;
                                  t = Vspace_0(t);
                                  {
                                    g_47 = t;
                                    {
                                      if(((d_47 != NULL) && (d_47 != g_47)))
                                        _fail(g_47);
                                      else
                                        d_47 = g_47;
                                      {
                                        t = not_null(n_45);
                                        {
                                          ATerm i_47 = NULL;
                                          t = Ispace_0(t);
                                          {
                                            h_47 = t;
                                            {
                                              if(((e_47 != NULL) && (e_47 != h_47)))
                                                _fail(h_47);
                                              else
                                                e_47 = h_47;
                                              {
                                                t = not_null(l_45);
                                                {
                                                  ATerm c_3 (ATerm t)
                                                  {
                                                    ATerm d_22 = t;
                                                    if((PushChoice() == 0))
                                                      {
                                                        t = Nil_0(t);
                                                        PopChoice();
                                                        _fail(t);
                                                      }
                                                    else
                                                      {
                                                        t = d_22;
                                                      }
                                                    return(t);
                                                  }
                                                  t = filter_1(t, c_3);
                                                  {
                                                    ATerm g_3 (ATerm t)
                                                    {
                                                      t = term_i_22;
                                                      return(t);
                                                    }
                                                    t = separate_by_1(t, g_3);
                                                    {
                                                      i_47 = t;
                                                      if(((f_47 != NULL) && (f_47 != i_47)))
                                                        _fail(i_47);
                                                      else
                                                        f_47 = i_47;
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
                                t = (ATerm) ATmakeAppl(sym_VBOX_3, not_null(d_47), not_null(e_47), not_null(f_47));
                              }
                            }
                          else
                            {
                              if(match_cons(m_45, sym_H_2))
                                {
                                  n_45 = ATgetArgument(m_45, 0);
                                  l_45 = ATgetArgument(m_45, 1);
                                  {
                                    ATerm l_47 = NULL,m_47 = NULL;
                                    ATerm n_47 = NULL;
                                    t = not_null(n_45);
                                    {
                                      ATerm o_47 = NULL;
                                      t = Hspace_0(t);
                                      {
                                        n_47 = t;
                                        {
                                          if(((l_47 != NULL) && (l_47 != n_47)))
                                            _fail(n_47);
                                          else
                                            l_47 = n_47;
                                          {
                                            t = not_null(l_45);
                                            {
                                              t = toh_0(t);
                                              {
                                                o_47 = t;
                                                if(((m_47 != NULL) && (m_47 != o_47)))
                                                  _fail(o_47);
                                                else
                                                  m_47 = o_47;
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                    t = (ATerm) ATmakeAppl(sym_HBOX_2, not_null(l_47), not_null(m_47));
                                  }
                                }
                              else
                                {
                                  if(match_cons(m_45, sym_FBOX_2))
                                    {
                                      n_45 = ATgetArgument(m_45, 0);
                                      l_45 = ATgetArgument(m_45, 1);
                                      z_44 :
                                      if(match_cons(n_45, sym_F_1))
                                        {
                                          k_45 = ATgetArgument(n_45, 0);
                                          e_45 :
                                          if(((ATgetType(k_45) == AT_LIST) && !(ATisEmpty(k_45))))
                                            {
                                              h_45 = ATgetFirst((ATermList) k_45);
                                              j_45 = (ATerm) ATgetNext((ATermList) k_45);
                                              {
                                                ATerm j_22 = t;
                                                int k_22 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    ATerm s_47 = NULL,t_47 = NULL;
                                                    t = not_null(h_45);
                                                    {
                                                      ATerm o_22 = t;
                                                      int q_22 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm h_3 (ATerm t)
                                                          {
                                                            ATerm u_47 = NULL;
                                                            u_47 = t;
                                                            if(((t_47 != NULL) && (t_47 != u_47)))
                                                              _fail(u_47);
                                                            else
                                                              t_47 = u_47;
                                                            return(t);
                                                          }
                                                          t = FFID_2(t, FM_0, h_3);
                                                          LocalPopChoice(q_22);
                                                        }
                                                      else
                                                        {
                                                          t = o_22;
                                                          {
                                                            ATerm t_22 = t;
                                                            int u_22 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm i_3 (ATerm t)
                                                                {
                                                                  ATerm v_47 = NULL;
                                                                  v_47 = t;
                                                                  if(((t_47 != NULL) && (t_47 != v_47)))
                                                                    _fail(v_47);
                                                                  else
                                                                    t_47 = v_47;
                                                                  return(t);
                                                                }
                                                                t = FFID_2(t, SE_0, i_3);
                                                                LocalPopChoice(u_22);
                                                              }
                                                            else
                                                              {
                                                                t = t_22;
                                                                {
                                                                  ATerm v_22 = t;
                                                                  int w_22 = stack_ptr;
                                                                  if((PushChoice() == 0))
                                                                    {
                                                                      ATerm j_3 (ATerm t)
                                                                      {
                                                                        ATerm w_47 = NULL;
                                                                        w_47 = t;
                                                                        if(((t_47 != NULL) && (t_47 != w_47)))
                                                                          _fail(w_47);
                                                                        else
                                                                          t_47 = w_47;
                                                                        return(t);
                                                                      }
                                                                      t = FFID_2(t, SH_0, j_3);
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
                                                                            ATerm k_3 (ATerm t)
                                                                            {
                                                                              ATerm x_47 = NULL;
                                                                              x_47 = t;
                                                                              if(((t_47 != NULL) && (t_47 != x_47)))
                                                                                _fail(x_47);
                                                                              else
                                                                                t_47 = x_47;
                                                                              return(t);
                                                                            }
                                                                            t = FFID_2(t, SZ_0, k_3);
                                                                            LocalPopChoice(y_22);
                                                                          }
                                                                        else
                                                                          {
                                                                            t = x_22;
                                                                            {
                                                                              ATerm z_47 = NULL;
                                                                              ATerm l_3 (ATerm t)
                                                                              {
                                                                                ATerm y_47 = NULL;
                                                                                y_47 = t;
                                                                                if(((s_47 != NULL) && (s_47 != y_47)))
                                                                                  _fail(y_47);
                                                                                else
                                                                                  s_47 = y_47;
                                                                                return(t);
                                                                              }
                                                                              t = FFID_2(t, CL_0, l_3);
                                                                              {
                                                                                t = (ATerm) ATmakeAppl(sym_BOXCOLOR_1, not_null(s_47));
                                                                                {
                                                                                  z_47 = t;
                                                                                  if(((t_47 != NULL) && (t_47 != z_47)))
                                                                                    _fail(z_47);
                                                                                  else
                                                                                    t_47 = z_47;
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
                                                    t = (ATerm) ATmakeAppl(sym_BOXFONT_2, not_null(t_47), (ATerm) ATmakeAppl(sym_FBOX_2, (ATerm)ATmakeAppl(sym_F_1, not_null(j_45)), not_null(l_45)));
                                                    LocalPopChoice(k_22);
                                                  }
                                                else
                                                  {
                                                    t = j_22;
                                                    t = v_48(t);
                                                  }
                                              }
                                            }
                                          else
                                            {
                                              if(((ATgetType(k_45) == AT_LIST) && ATisEmpty(k_45)))
                                                {
                                                  {
                                                    ATerm z_22 = t;
                                                    int a_23 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        t = not_null(l_45);
                                                        LocalPopChoice(a_23);
                                                      }
                                                    else
                                                      {
                                                        t = z_22;
                                                        t = v_48(t);
                                                      }
                                                  }
                                                }
                                              else
                                                {
                                                  t = v_48(t);
                                                }
                                            }
                                        }
                                      else
                                        {
                                          t = v_48(t);
                                        }
                                    }
                                  else
                                    {
                                      if(match_cons(m_45, sym_C_2))
                                        {
                                          n_45 = ATgetArgument(m_45, 0);
                                          l_45 = ATgetArgument(m_45, 1);
                                          f_45 :
                                          if(((ATgetType(n_45) == AT_LIST) && ATisEmpty(n_45)))
                                            {
                                              t = w_48(t);
                                            }
                                          else
                                            {
                                              _fail(t);
                                            }
                                        }
                                      else
                                        {
                                          if(match_cons(m_45, sym_S_1))
                                            {
                                              n_45 = ATgetArgument(m_45, 0);
                                              t = x_48(t);
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
ATerm abox2latex_1 (ATerm t, ATerm y_66 (ATerm))
{
  ATerm r_50 = NULL;
  ATerm t_50 = NULL,v_50 = NULL;
  r_50 = t;
  {
    ATerm b_23;
    b_23 = t;
    {
      ATerm u_50 = NULL;
      t = term_y_17;
      {
        t = y_66(t);
        {
          u_50 = t;
          if(((t_50 != NULL) && (t_50 != u_50)))
            _fail(u_50);
          else
            t_50 = u_50;
        }
      }
    }
    t = b_23;
    {
      ATerm w_50 = NULL;
      t = not_null(r_50);
      {
        ATerm m_3 (ATerm t)
        {
          t = try_1(t, Abox2latex_0);
          return(t);
        }
        t = topdown_1(t, m_3);
        {
          w_50 = t;
          if(((v_50 != NULL) && (v_50 != w_50)))
            _fail(w_50);
          else
            v_50 = w_50;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym_BOXENV_2, (ATerm)ATinsert(ATempty, not_null(t_50)), not_null(v_50));
        t = latex2text_0(t);
      }
    }
  }
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm v_89 (ATerm))
{
  t = fetch_1(t, v_89);
  return(t);
}
ATerm Snd_0 (ATerm t)
{
  ATerm i_51 = NULL;
  ATerm k_51 = NULL,l_51 = NULL,m_51 = NULL;
  i_51 = t;
  {
    ATerm n_51 = NULL;
    ATerm p_51 = NULL,q_51 = NULL,r_51 = NULL,s_51 = NULL,t_51 = NULL,u_51 = NULL,v_51 = NULL;
    t = not_null(i_51);
    {
      n_51 = t;
      {
        t = SSL_explode_term(not_null(n_51));
        {
          p_51 = t;
          e_51 :
          if(match_cons(p_51, sym__2))
            {
              q_51 = ATgetArgument(p_51, 0);
              r_51 = ATgetArgument(p_51, 1);
              f_51 :
              if(match_string(q_51, ""))
                {
                  g_51 :
                  if(((ATgetType(r_51) == AT_LIST) && !(ATisEmpty(r_51))))
                    {
                      s_51 = ATgetFirst((ATermList) r_51);
                      t_51 = (ATerm) ATgetNext((ATermList) r_51);
                      h_51 :
                      if(((ATgetType(t_51) == AT_LIST) && !(ATisEmpty(t_51))))
                        {
                          u_51 = ATgetFirst((ATermList) t_51);
                          v_51 = (ATerm) ATgetNext((ATermList) t_51);
                          {
                            if(((k_51 != NULL) && (k_51 != s_51)))
                              _fail(s_51);
                            else
                              k_51 = s_51;
                            {
                              if(((m_51 != NULL) && (m_51 != u_51)))
                                _fail(u_51);
                              else
                                m_51 = u_51;
                              if(((l_51 != NULL) && (l_51 != v_51)))
                                _fail(v_51);
                              else
                                l_51 = v_51;
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
    t = not_null(m_51);
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm f_52 = NULL;
  ATerm c_23;
  c_23 = t;
  {
    ATerm d_23 = t;
    int e_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_3 (ATerm t)
        {
          ATerm g_52 = NULL,h_52 = NULL;
          g_52 = t;
          d_52 :
          if(match_cons(g_52, sym_Input_1))
            {
              h_52 = ATgetArgument(g_52, 0);
              if(((f_52 != NULL) && (f_52 != h_52)))
                _fail(h_52);
              else
                f_52 = h_52;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, n_3);
        LocalPopChoice(e_23);
      }
    else
      {
        t = d_23;
        {
          ATerm i_52 = NULL;
          t = term_f_23;
          {
            i_52 = t;
            if(((f_52 != NULL) && (f_52 != i_52)))
              _fail(i_52);
            else
              f_52 = i_52;
          }
        }
      }
  }
  t = c_23;
  {
    ATerm o_3 (ATerm t)
    {
      t = not_null(f_52);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, o_3);
  }
  return(t);
}
ATerm StoreEntries_0 (ATerm t)
{
  ATerm p_3 (ATerm t)
  {
    ATerm p_52 = NULL,q_52 = NULL,r_52 = NULL,s_52 = NULL,t_52 = NULL;
    p_52 = t;
    m_52 :
    if(((ATgetType(p_52) == AT_LIST) && !(ATisEmpty(p_52))))
      {
        q_52 = ATgetFirst((ATermList) p_52);
        r_52 = (ATerm) ATgetNext((ATermList) p_52);
        n_52 :
        if(((ATgetType(r_52) == AT_LIST) && !(ATisEmpty(r_52))))
          {
            s_52 = ATgetFirst((ATermList) r_52);
            t_52 = (ATerm) ATgetNext((ATermList) r_52);
            o_52 :
            if(((ATgetType(t_52) == AT_LIST) && ATisEmpty(t_52)))
              {
                {
                  t = (ATerm) ATmakeAppl(sym__3, term_w_14, not_null(q_52), not_null(s_52));
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
  t = map_1(t, p_3);
  return(t);
}
ATerm ReadFromFile_0 (ATerm t)
{
  ATerm y_52 = NULL;
  ATerm g_23 = t;
  int h_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_52 = NULL;
      z_52 = t;
      {
        if(((y_52 != NULL) && (y_52 != z_52)))
          _fail(z_52);
        else
          y_52 = z_52;
        t = SSL_ReadFromFile(not_null(y_52));
      }
      LocalPopChoice(h_23);
    }
  else
    {
      t = g_23;
      {
        ATerm s_3 (ATerm t)
        {
          t = term_i_23;
          return(t);
        }
        t = debug_1(t, s_3);
        _fail(t);
      }
    }
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm c_53 = NULL;
  c_53 = t;
  t = SSL_table_create(not_null(c_53));
  return(t);
}
ATerm load_tables_0 (ATerm t)
{
  ATerm j_23;
  j_23 = t;
  {
    t = term_w_14;
    t = table_create_0(t);
  }
  t = j_23;
  {
    t = reverse_0(t);
    {
      ATerm t_3 (ATerm t)
      {
        t = ReadFromFile_0(t);
        t = StoreEntries_0(t);
        return(t);
      }
      t = map_1(t, t_3);
    }
  }
  return(t);
}
ATerm eq_0 (ATerm t)
{
  ATerm o_53 = NULL,p_53 = NULL,q_53 = NULL;
  o_53 = t;
  g_53 :
  if(match_cons(o_53, sym__2))
    {
      p_53 = ATgetArgument(o_53, 0);
      q_53 = ATgetArgument(o_53, 1);
      if(((p_53 != NULL) && (p_53 != q_53)))
        _fail(q_53);
      else
        p_53 = q_53;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm fetch_1 (ATerm t, ATerm h_75 (ATerm))
{
  ATerm t_53 (ATerm t)
  {
    ATerm k_23 = t;
    int l_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, h_75, _id);
        LocalPopChoice(l_23);
      }
    else
      {
        t = k_23;
        t = Cons_2(t, _id, t_53);
      }
    return(t);
  }
  t = t_53(t);
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm z_80 (ATerm), ATerm a_81 (ATerm))
{
  ATerm x_53 = NULL,y_53 = NULL,z_53 = NULL;
  x_53 = t;
  w_53 :
  if(((ATgetType(x_53) == AT_LIST) && !(ATisEmpty(x_53))))
    {
      y_53 = ATgetFirst((ATermList) x_53);
      z_53 = (ATerm) ATgetNext((ATermList) x_53);
      {
        t = a_81(t);
        {
          ATerm u_3 (ATerm t)
          {
            ATerm c_54 = NULL;
            c_54 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(y_53), not_null(c_54));
              t = z_80(t);
            }
            return(t);
          }
          t = fetch_1(t, u_3);
        }
        t = not_null(z_53);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm union_1 (ATerm t, ATerm v_80 (ATerm))
{
  ATerm i_54 = NULL,j_54 = NULL,k_54 = NULL;
  i_54 = t;
  h_54 :
  if(match_cons(i_54, sym__2))
    {
      j_54 = ATgetArgument(i_54, 0);
      k_54 = ATgetArgument(i_54, 1);
      {
        t = not_null(j_54);
        {
          ATerm o_54 (ATerm t)
          {
            ATerm m_23 = t;
            int n_23 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(k_54);
                LocalPopChoice(n_23);
              }
            else
              {
                t = m_23;
                {
                  ATerm o_23 = t;
                  int p_23 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm v_3 (ATerm t)
                      {
                        t = not_null(k_54);
                        return(t);
                      }
                      t = HdMember_p__2(t, v_80, v_3);
                      t = o_54(t);
                      LocalPopChoice(p_23);
                    }
                  else
                    {
                      t = o_23;
                      t = Cons_2(t, _id, o_54);
                    }
                }
              }
            return(t);
          }
          t = o_54(t);
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
ATerm foldr_3 (ATerm t, ATerm o_81 (ATerm), ATerm p_81 (ATerm), ATerm q_81 (ATerm))
{
  ATerm q_23 = t;
  int r_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = o_81(t);
      LocalPopChoice(r_23);
    }
  else
    {
      t = q_23;
      {
        ATerm t_54 = NULL,u_54 = NULL,v_54 = NULL;
        t_54 = t;
        s_54 :
        if(((ATgetType(t_54) == AT_LIST) && !(ATisEmpty(t_54))))
          {
            u_54 = ATgetFirst((ATermList) t_54);
            v_54 = (ATerm) ATgetNext((ATermList) t_54);
            {
              ATerm y_54 = NULL,a_55 = NULL;
              ATerm s_23;
              s_23 = t;
              {
                ATerm z_54 = NULL;
                t = not_null(u_54);
                {
                  t = q_81(t);
                  {
                    z_54 = t;
                    if(((y_54 != NULL) && (y_54 != z_54)))
                      _fail(z_54);
                    else
                      y_54 = z_54;
                  }
                }
              }
              t = s_23;
              {
                ATerm b_55 = NULL;
                t = not_null(v_54);
                {
                  t = foldr_3(t, o_81, p_81, q_81);
                  {
                    b_55 = t;
                    if(((a_55 != NULL) && (a_55 != b_55)))
                      _fail(b_55);
                    else
                      a_55 = b_55;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(y_54), not_null(a_55));
                  t = p_81(t);
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
ATerm crush_3 (ATerm t, ATerm m_80 (ATerm), ATerm n_80 (ATerm), ATerm o_80 (ATerm))
{
  ATerm j_55 = NULL;
  ATerm l_55 = NULL;
  j_55 = t;
  {
    ATerm m_55 = NULL;
    ATerm o_55 = NULL,p_55 = NULL,q_55 = NULL;
    t = not_null(j_55);
    {
      m_55 = t;
      {
        t = SSL_explode_term(not_null(m_55));
        {
          o_55 = t;
          i_55 :
          if(match_cons(o_55, sym__2))
            {
              p_55 = ATgetArgument(o_55, 0);
              q_55 = ATgetArgument(o_55, 1);
              if(((l_55 != NULL) && (l_55 != q_55)))
                _fail(q_55);
              else
                l_55 = q_55;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(l_55);
      t = foldr_3(t, m_80, n_80, o_80);
    }
  }
  return(t);
}
ATerm collect_om_1 (ATerm t, ATerm l_79 (ATerm))
{
  ATerm x_55 (ATerm t)
  {
    ATerm t_23 = t;
    int u_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_55 = NULL;
        ATerm w_55 = NULL;
        t = l_79(t);
        {
          w_55 = t;
          if(((v_55 != NULL) && (v_55 != w_55)))
            _fail(w_55);
          else
            v_55 = w_55;
        }
        t = (ATerm) ATinsert(ATempty, not_null(v_55));
        LocalPopChoice(u_23);
      }
    else
      {
        t = t_23;
        {
          ATerm w_3 (ATerm t)
          {
            t = (ATerm) ATempty;
            return(t);
          }
          t = crush_3(t, w_3, union_0, x_55);
        }
      }
    return(t);
  }
  t = x_55(t);
  return(t);
}
ATerm collect_1 (ATerm t, ATerm n_79 (ATerm))
{
  t = collect_om_1(t, n_79);
  return(t);
}
ATerm obsolete_1 (ATerm t, ATerm d_86 (ATerm))
{
  ATerm v_23;
  v_23 = t;
  {
    t = d_86(t);
    {
      ATerm x_3 (ATerm t)
      {
        t = term_w_23;
        return(t);
      }
      t = debug_1(t, x_3);
    }
  }
  t = v_23;
  return(t);
}
ATerm open_file_0 (ATerm t)
{
  ATerm d_56 = NULL,e_56 = NULL;
  ATerm x_23 = t;
  int y_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_56 = NULL,g_56 = NULL,h_56 = NULL;
      f_56 = t;
      a_56 :
      if(match_cons(f_56, sym__2))
        {
          g_56 = ATgetArgument(f_56, 0);
          h_56 = ATgetArgument(f_56, 1);
          {
            if(((e_56 != NULL) && (e_56 != g_56)))
              _fail(g_56);
            else
              e_56 = g_56;
            if(((d_56 != NULL) && (d_56 != h_56)))
              _fail(h_56);
            else
              d_56 = h_56;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(y_23);
      t = SSL_open_file(not_null(e_56), not_null(d_56));
    }
  else
    {
      t = x_23;
      {
        ATerm i_56 = NULL;
        ATerm j_56 = NULL;
        ATerm y_3 (ATerm t)
        {
          t = term_z_23;
          return(t);
        }
        t = obsolete_1(t, y_3);
        {
          i_56 = t;
          {
            if(((e_56 != NULL) && (e_56 != i_56)))
              _fail(i_56);
            else
              e_56 = i_56;
            {
              ATerm a_24;
              a_24 = t;
              {
                ATerm k_56 = NULL;
                t = term_b_24;
                {
                  k_56 = t;
                  if(((j_56 != NULL) && (j_56 != k_56)))
                    _fail(k_56);
                  else
                    j_56 = k_56;
                }
              }
              t = a_24;
              t = SSL_open_file(not_null(e_56), not_null(j_56));
            }
          }
        }
      }
    }
  return(t);
}
ATerm usage_0 (ATerm t)
{
  ATerm q_56 = NULL;
  ATerm c_24;
  c_24 = t;
  {
    ATerm z_3 (ATerm t)
    {
      ATerm r_56 = NULL,s_56 = NULL;
      r_56 = t;
      p_56 :
      if(match_cons(r_56, sym_Program_1))
        {
          s_56 = ATgetArgument(r_56, 0);
          if(((q_56 != NULL) && (q_56 != s_56)))
            _fail(s_56);
          else
            q_56 = s_56;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = option_defined_1(t, z_3);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_u_6, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_e_24), not_null(q_56)), term_d_24));
      {
        t = printnl_0(t);
        {
          t = term_f_7;
          t = exit_0(t);
        }
      }
    }
  }
  t = c_24;
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm a_57 = NULL;
  a_57 = t;
  z_56 :
  if(match_cons(a_57, sym_Version_0))
    {
      ATerm c_57 = NULL,e_57 = NULL;
      ATerm f_24;
      f_24 = t;
      {
        ATerm d_57 = NULL;
        t = SSLgetAnnotations(not_null(a_57));
        {
          d_57 = t;
          if(((c_57 != NULL) && (c_57 != d_57)))
            _fail(d_57);
          else
            c_57 = d_57;
        }
      }
      t = f_24;
      {
        ATerm f_57 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(c_57));
        {
          f_57 = t;
          if(((e_57 != NULL) && (e_57 != f_57)))
            _fail(f_57);
          else
            e_57 = f_57;
        }
        t = not_null(e_57);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm y_86 (ATerm))
{
  ATerm a_4 (ATerm t)
  {
    ATerm g_24 = t;
    int h_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(h_24);
      }
    else
      {
        t = g_24;
        {
          ATerm i_24 = t;
          int j_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(j_24);
            }
          else
            {
              t = i_24;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, a_4);
  t = y_86(t);
  return(t);
}
ATerm ArgOption_2 (ATerm t, ATerm o_90 (ATerm), ATerm p_90 (ATerm))
{
  ATerm e_4 (ATerm t)
  {
    t = term_k_24;
    return(t);
  }
  t = ArgOption_3(t, o_90, p_90, e_4);
  return(t);
}
ATerm version_option_0 (ATerm t)
{
  ATerm f_4 (ATerm t)
  {
    ATerm k_57 = NULL;
    k_57 = t;
    j_57 :
    if(!(match_string(k_57, "-v")))
      {
        if(!(match_string(k_57, "--version")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm g_4 (ATerm t)
  {
    t = term_m_24;
    t = set_config_0(t);
    t = term_n_24;
    return(t);
  }
  ATerm i_4 (ATerm t)
  {
    t = term_o_24;
    return(t);
  }
  t = Option_3(t, f_4, g_4, i_4);
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm j_4 (ATerm t)
  {
    ATerm n_57 = NULL;
    n_57 = t;
    l_57 :
    if(!(match_string(n_57, "-k")))
      {
        if(!(match_string(n_57, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm k_4 (ATerm t)
  {
    ATerm p_24;
    p_24 = t;
    {
      ATerm o_57 = NULL;
      ATerm p_57 = NULL;
      t = string_to_int_0(t);
      {
        p_57 = t;
        if(((o_57 != NULL) && (o_57 != p_57)))
          _fail(p_57);
        else
          o_57 = p_57;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_q_24, not_null(o_57));
        t = set_config_0(t);
      }
    }
    t = p_24;
    return(t);
  }
  ATerm l_4 (ATerm t)
  {
    t = term_r_24;
    return(t);
  }
  t = ArgOption_3(t, j_4, k_4, l_4);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm s_57 = NULL;
  s_57 = t;
  t = SSL_string_to_int(not_null(s_57));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm s_24 = t;
  int t_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_4 (ATerm t)
      {
        ATerm a_58 = NULL;
        a_58 = t;
        v_57 :
        if(!(match_string(a_58, "-S")))
          {
            if(!(match_string(a_58, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm n_4 (ATerm t)
      {
        t = term_u_24;
        t = set_config_0(t);
        t = term_v_24;
        return(t);
      }
      ATerm o_4 (ATerm t)
      {
        t = term_w_24;
        return(t);
      }
      t = Option_3(t, m_4, n_4, o_4);
      LocalPopChoice(t_24);
    }
  else
    {
      t = s_24;
      {
        ATerm x_24 = t;
        int y_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_4 (ATerm t)
            {
              ATerm b_58 = NULL;
              b_58 = t;
              w_57 :
              if(!(match_string(b_58, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm q_4 (ATerm t)
            {
              ATerm e_58 = NULL;
              ATerm z_24;
              z_24 = t;
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
                  t = (ATerm) ATmakeAppl(sym__2, term_i_7, not_null(c_58));
                  t = set_config_0(t);
                }
              }
              t = z_24;
              {
                ATerm h_58 = NULL;
                h_58 = t;
                if(((e_58 != NULL) && (e_58 != h_58)))
                  _fail(h_58);
                else
                  e_58 = h_58;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(e_58));
              }
              return(t);
            }
            ATerm r_4 (ATerm t)
            {
              t = term_a_25;
              return(t);
            }
            t = ArgOption_3(t, p_4, q_4, r_4);
            LocalPopChoice(y_24);
          }
        else
          {
            t = x_24;
            {
              ATerm s_4 (ATerm t)
              {
                ATerm i_58 = NULL;
                i_58 = t;
                z_57 :
                if(!(match_string(i_58, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm t_4 (ATerm t)
              {
                t = term_c_25;
                t = set_config_0(t);
                t = term_d_25;
                return(t);
              }
              ATerm u_4 (ATerm t)
              {
                t = term_e_25;
                return(t);
              }
              t = Option_3(t, s_4, t_4, u_4);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0 (ATerm t)
{
  ATerm f_25 = t;
  int g_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      LocalPopChoice(g_25);
    }
  else
    {
      t = f_25;
      {
        ATerm h_25 = t;
        int i_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = keep_option_0(t);
            LocalPopChoice(i_25);
          }
        else
          {
            t = h_25;
            t = version_option_0(t);
          }
      }
    }
  return(t);
}
ATerm output_option_0 (ATerm t)
{
  ATerm v_4 (ATerm t)
  {
    ATerm q_58 = NULL;
    q_58 = t;
    n_58 :
    if(!(match_string(q_58, "-o")))
      {
        if(!(match_string(q_58, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm w_4 (ATerm t)
  {
    ATerm t_58 = NULL;
    ATerm j_25;
    j_25 = t;
    {
      ATerm r_58 = NULL;
      ATerm s_58 = NULL;
      s_58 = t;
      if(((r_58 != NULL) && (r_58 != s_58)))
        _fail(s_58);
      else
        r_58 = s_58;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_k_25, not_null(r_58));
        t = set_config_0(t);
      }
    }
    t = j_25;
    {
      ATerm u_58 = NULL;
      u_58 = t;
      if(((t_58 != NULL) && (t_58 != u_58)))
        _fail(u_58);
      else
        t_58 = u_58;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(t_58));
    }
    return(t);
  }
  ATerm x_4 (ATerm t)
  {
    t = term_l_25;
    return(t);
  }
  t = ArgOption_3(t, v_4, w_4, x_4);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm m_25 = t;
  int n_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      LocalPopChoice(n_25);
    }
  else
    {
      t = m_25;
      {
        ATerm y_4 (ATerm t)
        {
          ATerm a_59 = NULL;
          a_59 = t;
          x_58 :
          if(!(match_string(a_59, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm z_4 (ATerm t)
        {
          t = term_p_25;
          t = set_config_0(t);
          t = term_q_25;
          return(t);
        }
        ATerm a_5 (ATerm t)
        {
          t = term_r_25;
          return(t);
        }
        t = Option_3(t, y_4, z_4, a_5);
      }
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm i_59 = NULL,j_59 = NULL,k_59 = NULL,l_59 = NULL,m_59 = NULL;
  i_59 = t;
  e_59 :
  if(match_string(i_59, "register-usage-info"))
    {
      t = register_usage_1(t, l_0);
    }
  else
    {
      if(((ATgetType(i_59) == AT_LIST) && !(ATisEmpty(i_59))))
        {
          j_59 = ATgetFirst((ATermList) i_59);
          k_59 = (ATerm) ATgetNext((ATermList) i_59);
          f_59 :
          if(((ATgetType(k_59) == AT_LIST) && !(ATisEmpty(k_59))))
            {
              l_59 = ATgetFirst((ATermList) k_59);
              m_59 = (ATerm) ATgetNext((ATermList) k_59);
              {
                ATerm s_59 = NULL;
                ATerm s_25;
                s_25 = t;
                {
                  t = not_null(j_59);
                  t = j_0(t);
                }
                t = s_25;
                {
                  ATerm t_59 = NULL;
                  t = not_null(l_59);
                  {
                    t = k_0(t);
                    {
                      t_59 = t;
                      if(((s_59 != NULL) && (s_59 != t_59)))
                        _fail(t_59);
                      else
                        s_59 = t_59;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(m_59)), not_null(s_59));
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
  ATerm b_5 (ATerm t)
  {
    ATerm a_60 = NULL;
    a_60 = t;
    x_59 :
    if(!(match_string(a_60, "-i")))
      {
        if(!(match_string(a_60, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm c_5 (ATerm t)
  {
    ATerm d_60 = NULL;
    ATerm t_25;
    t_25 = t;
    {
      ATerm b_60 = NULL;
      ATerm c_60 = NULL;
      c_60 = t;
      if(((b_60 != NULL) && (b_60 != c_60)))
        _fail(c_60);
      else
        b_60 = c_60;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_u_25, not_null(b_60));
        t = set_config_0(t);
      }
    }
    t = t_25;
    {
      ATerm e_60 = NULL;
      e_60 = t;
      if(((d_60 != NULL) && (d_60 != e_60)))
        _fail(e_60);
      else
        d_60 = e_60;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(d_60));
    }
    return(t);
  }
  ATerm d_5 (ATerm t)
  {
    t = term_v_25;
    return(t);
  }
  t = ArgOption_3(t, b_5, c_5, d_5);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm w_25 = t;
  int x_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      LocalPopChoice(x_25);
    }
  else
    {
      t = w_25;
      {
        ATerm y_25 = t;
        int z_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0(t);
            LocalPopChoice(z_25);
          }
        else
          {
            t = y_25;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm i_60 = NULL;
  i_60 = t;
  t = SSL_table_destroy(not_null(i_60));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm m_60 = NULL;
  m_60 = t;
  t = SSL_exit(not_null(m_60));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm q_60 = NULL,r_60 = NULL,s_60 = NULL;
  q_60 = t;
  p_60 :
  if(((ATgetType(q_60) == AT_LIST) && ATisEmpty(q_60)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(q_60) == AT_LIST) && !(ATisEmpty(q_60))))
        {
          r_60 = ATgetFirst((ATermList) q_60);
          s_60 = (ATerm) ATgetNext((ATermList) q_60);
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
  ATerm a_26;
  a_26 = t;
  {
    ATerm v_60 = NULL;
    ATerm y_60 = NULL;
    ATerm b_26 = t;
    int c_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        LocalPopChoice(c_26);
      }
    else
      {
        t = b_26;
        {
          ATerm w_60 = NULL;
          ATerm x_60 = NULL;
          x_60 = t;
          if(((w_60 != NULL) && (w_60 != x_60)))
            _fail(x_60);
          else
            w_60 = x_60;
          t = (ATerm) ATinsert(ATempty, not_null(w_60));
        }
      }
    {
      y_60 = t;
      if(((v_60 != NULL) && (v_60 != y_60)))
        _fail(y_60);
      else
        v_60 = y_60;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_d_26, not_null(v_60));
      t = printnl_0(t);
    }
  }
  t = a_26;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm w_90 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm h_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm h_61 = NULL,i_61 = NULL,j_61 = NULL;
  j_61 = t;
  g_61 :
  if(((ATgetType(j_61) == AT_LIST) && !(ATisEmpty(j_61))))
    {
      h_61 = ATgetFirst((ATermList) j_61);
      i_61 = (ATerm) ATgetNext((ATermList) j_61);
      {
        ATerm m_61 = NULL;
        t = not_null(i_61);
        {
          ATerm e_26;
          e_26 = t;
          {
            ATerm n_61 = NULL,p_61 = NULL,r_61 = NULL;
            ATerm f_26;
            f_26 = t;
            {
              ATerm o_61 = NULL;
              t = i_0(t);
              {
                o_61 = t;
                if(((n_61 != NULL) && (n_61 != o_61)))
                  _fail(o_61);
                else
                  n_61 = o_61;
              }
            }
            t = f_26;
            {
              ATerm q_61 = NULL;
              t = not_null(h_61);
              {
                t = h_0(t);
                {
                  q_61 = t;
                  if(((p_61 != NULL) && (p_61 != q_61)))
                    _fail(q_61);
                  else
                    p_61 = q_61;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(n_61)), not_null(p_61));
                {
                  r_61 = t;
                  if(((m_61 != NULL) && (m_61 != r_61)))
                    _fail(r_61);
                  else
                    m_61 = r_61;
                }
              }
            }
          }
          t = e_26;
          {
            ATerm e_5 (ATerm t)
            {
              t = not_null(m_61);
              return(t);
            }
            t = reverse_acc_2(t, h_0, e_5);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(j_61) == AT_LIST) && ATisEmpty(j_61)))
        {
          {
            t = term_y_17;
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
  ATerm f_5 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, f_5);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm v_90 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm k_66 (ATerm))
{
  ATerm c_62 = NULL,d_62 = NULL;
  c_62 = t;
  b_62 :
  if(match_cons(c_62, sym_Program_1))
    {
      d_62 = ATgetArgument(c_62, 0);
      {
        ATerm g_62 = NULL,i_62 = NULL;
        ATerm h_62 = NULL;
        t = SSLgetAnnotations(not_null(c_62));
        {
          h_62 = t;
          if(((g_62 != NULL) && (g_62 != h_62)))
            _fail(h_62);
          else
            g_62 = h_62;
        }
        {
          t = not_null(d_62);
          {
            ATerm k_62 = NULL;
            t = k_66(t);
            {
              i_62 = t;
              {
                ATerm l_62 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(i_62)), not_null(g_62));
                {
                  l_62 = t;
                  if(((k_62 != NULL) && (k_62 != l_62)))
                    _fail(l_62);
                  else
                    k_62 = l_62;
                }
                t = not_null(k_62);
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
  ATerm u_62 = NULL;
  ATerm g_26 = t;
  int h_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_62 = NULL;
      t = term_k_7;
      {
        t = get_config_0(t);
        {
          v_62 = t;
          if(((u_62 != NULL) && (u_62 != v_62)))
            _fail(v_62);
          else
            u_62 = v_62;
        }
      }
      LocalPopChoice(h_26);
    }
  else
    {
      t = g_26;
      {
        ATerm g_5 (ATerm t)
        {
          ATerm h_5 (ATerm t)
          {
            ATerm w_62 = NULL;
            w_62 = t;
            if(((u_62 != NULL) && (u_62 != w_62)))
              _fail(w_62);
            else
              u_62 = w_62;
            return(t);
          }
          t = Program_1(t, h_5);
          return(t);
        }
        t = option_defined_1(t, g_5);
      }
    }
  {
    ATerm i_5 (ATerm t)
    {
      ATerm l_5 (ATerm t)
      {
        t = not_null(u_62);
        return(t);
      }
      t = short_description_1(t, l_5);
      t = echo_0(t);
      return(t);
    }
    t = try_1(t, i_5);
    {
      t = term_i_26;
      {
        t = echo_0(t);
        {
          t = term_l_26;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm m_5 (ATerm t)
                {
                  ATerm x_62 = NULL;
                  ATerm y_62 = NULL;
                  y_62 = t;
                  if(((x_62 != NULL) && (x_62 != y_62)))
                    _fail(y_62);
                  else
                    x_62 = y_62;
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(x_62)), term_m_26);
                    t = echo_0(t);
                  }
                  return(t);
                }
                t = map_1(t, m_5);
                {
                  ATerm n_5 (ATerm t)
                  {
                    ATerm z_62 = NULL;
                    ATerm a_63 = NULL;
                    ATerm o_5 (ATerm t)
                    {
                      t = not_null(u_62);
                      return(t);
                    }
                    t = long_description_1(t, o_5);
                    {
                      a_63 = t;
                      if(((z_62 != NULL) && (z_62 != a_63)))
                        _fail(a_63);
                      else
                        z_62 = a_63;
                    }
                    {
                      t = (ATerm) ATinsert(CheckATermList(not_null(z_62)), term_g_16);
                      t = echo_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, n_5);
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
ATerm debug_0 (ATerm t)
{
  ATerm n_26;
  n_26 = t;
  {
    ATerm g_63 = NULL;
    ATerm h_63 = NULL;
    h_63 = t;
    if(((g_63 != NULL) && (g_63 != h_63)))
      _fail(h_63);
    else
      g_63 = h_63;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_u_6, (ATerm) ATinsert(ATempty, not_null(g_63)));
      t = printnl_0(t);
    }
  }
  t = n_26;
  return(t);
}
ATerm say_1 (ATerm t, ATerm x_85 (ATerm))
{
  ATerm o_26;
  o_26 = t;
  {
    t = x_85(t);
    t = debug_0(t);
  }
  t = o_26;
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm l_66 (ATerm))
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
            t = l_66(t);
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
      ATerm p_26;
      p_26 = t;
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
      t = p_26;
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
  ATerm q_26 = t;
  int r_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(r_26);
    }
  else
    {
      t = q_26;
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
                ATerm p_5 (ATerm t)
                {
                  t = not_null(x_64);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, p_5);
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
ATerm at_end_1 (ATerm t, ATerm n_75 (ATerm))
{
  ATerm s_65 (ATerm t)
  {
    ATerm s_26 = t;
    int v_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, s_65);
        LocalPopChoice(v_26);
      }
    else
      {
        t = s_26;
        {
          t = Nil_0(t);
          t = n_75(t);
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
          ATerm q_5 (ATerm t)
          {
            t = not_null(x_65);
            return(t);
          }
          t = at_end_1(t, q_5);
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
  ATerm a_27 = t;
  int b_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      LocalPopChoice(b_27);
    }
  else
    {
      t = a_27;
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
ATerm _2 (ATerm t, ATerm w_56 (ATerm), ATerm x_56 (ATerm))
{
  ATerm n_66 = NULL,o_66 = NULL,p_66 = NULL;
  n_66 = t;
  m_66 :
  if(match_cons(n_66, sym__2))
    {
      o_66 = ATgetArgument(n_66, 0);
      p_66 = ATgetArgument(n_66, 1);
      {
        ATerm t_66 = NULL,z_66 = NULL;
        ATerm u_66 = NULL;
        t = SSLgetAnnotations(not_null(n_66));
        {
          u_66 = t;
          if(((t_66 != NULL) && (t_66 != u_66)))
            _fail(u_66);
          else
            t_66 = u_66;
        }
        {
          t = not_null(o_66);
          {
            ATerm e_67 = NULL;
            t = w_56(t);
            {
              z_66 = t;
              {
                t = not_null(p_66);
                {
                  ATerm h_67 = NULL;
                  t = x_56(t);
                  {
                    e_67 = t;
                    {
                      ATerm i_67 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(z_66), not_null(e_67)), not_null(t_66));
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
    t = conc_0(t);
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
        ATerm c_27;
        c_27 = t;
        t = SSL_printnl(not_null(r_67), not_null(s_67));
        t = c_27;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm w_85 (ATerm))
{
  ATerm d_27;
  d_27 = t;
  {
    ATerm y_67 = NULL,a_68 = NULL;
    ATerm e_27;
    e_27 = t;
    {
      ATerm z_67 = NULL;
      t = w_85(t);
      {
        z_67 = t;
        if(((y_67 != NULL) && (y_67 != z_67)))
          _fail(z_67);
        else
          y_67 = z_67;
      }
    }
    t = e_27;
    {
      ATerm b_68 = NULL;
      b_68 = t;
      if(((a_68 != NULL) && (a_68 != b_68)))
        _fail(b_68);
      else
        a_68 = b_68;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_u_6, (ATerm) ATinsert(ATinsert(ATempty, not_null(a_68)), not_null(y_67)));
        t = printnl_0(t);
      }
    }
  }
  t = d_27;
  return(t);
}
ATerm map_1 (ATerm t, ATerm y_74 (ATerm))
{
  ATerm e_68 (ATerm t)
  {
    ATerm f_27 = t;
    int i_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(i_27);
      }
    else
      {
        t = f_27;
        t = Cons_2(t, y_74, e_68);
      }
    return(t);
  }
  t = e_68(t);
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm n_27 = t;
  int o_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(o_27);
    }
  else
    {
      t = n_27;
      {
        ATerm p_27 = t;
        int q_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_5 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, r_5);
            LocalPopChoice(q_27);
          }
        else
          {
            t = p_27;
            {
              ATerm r_68 = NULL,s_68 = NULL,t_68 = NULL;
              r_68 = t;
              k_68 :
              if(match_cons(r_68, sym_Path_1))
                {
                  s_68 = ATgetArgument(r_68, 0);
                  t = not_null(s_68);
                }
              else
                {
                  if(match_cons(r_68, sym_Var_1))
                    {
                      s_68 = ATgetArgument(r_68, 0);
                      {
                        t = not_null(s_68);
                        {
                          ATerm r_27 = t;
                          int s_27 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(s_27);
                            }
                          else
                            {
                              t = r_27;
                              {
                                ATerm s_5 (ATerm t)
                                {
                                  t = term_u_27;
                                  return(t);
                                }
                                t = debug_1(t, s_5);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(r_68, sym_Prefix_2))
                        {
                          s_68 = ATgetArgument(r_68, 0);
                          t_68 = ATgetArgument(r_68, 1);
                          {
                            ATerm a_69 = NULL,c_69 = NULL;
                            ATerm v_27;
                            v_27 = t;
                            {
                              ATerm b_69 = NULL;
                              t = not_null(s_68);
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
                            t = v_27;
                            {
                              ATerm d_69 = NULL;
                              t = not_null(t_68);
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
    t = (ATerm) ATmakeAppl(sym__2, term_x_27, not_null(l_69));
    {
      t = table_get_0(t);
      {
        ATerm t_5 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm y_27;
            y_27 = t;
            {
              ATerm n_69 = NULL;
              ATerm o_69 = NULL;
              o_69 = t;
              if(((n_69 != NULL) && (n_69 != o_69)))
                _fail(o_69);
              else
                n_69 = o_69;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_x_27, not_null(l_69), not_null(n_69));
                t = table_put_0(t);
              }
            }
            t = y_27;
          }
          return(t);
        }
        t = try_1(t, t_5);
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
        ATerm z_27;
        z_27 = t;
        {
          ATerm j_70 = NULL;
          ATerm k_70 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(d_70), not_null(e_70));
          {
            ATerm a_28 = t;
            int b_28 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(b_28);
              }
            else
              {
                t = a_28;
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
        t = z_27;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm a_91 (ATerm))
{
  ATerm o_70 = NULL;
  ATerm p_70 = NULL;
  t = term_y_17;
  {
    t = a_91(t);
    {
      p_70 = t;
      if(((o_70 != NULL) && (o_70 != p_70)))
        _fail(p_70);
      else
        o_70 = p_70;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_j_26, term_k_26, not_null(o_70));
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
            ATerm c_28;
            c_28 = t;
            {
              t = not_null(w_70);
              t = a_0(t);
            }
            t = c_28;
            {
              ATerm b_71 = NULL;
              t = term_y_17;
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
  ATerm u_5 (ATerm t)
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
  ATerm v_5 (ATerm t)
  {
    t = term_i_28;
    {
      t = set_config_0(t);
      t = term_j_28;
    }
    return(t);
  }
  ATerm w_5 (ATerm t)
  {
    t = term_k_28;
    return(t);
  }
  t = Option_3(t, u_5, v_5, w_5);
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
ATerm Cons_2 (ATerm t, ATerm f_58 (ATerm), ATerm g_58 (ATerm))
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
            t = f_58(t);
            {
              d_72 = t;
              {
                t = not_null(x_71);
                {
                  ATerm h_72 = NULL;
                  t = g_58(t);
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
        ATerm l_28;
        l_28 = t;
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
        t = l_28;
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
        t = (ATerm) ATmakeAppl(sym__3, term_x_27, not_null(e_73), not_null(f_73));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm y_90 (ATerm))
{
  ATerm m_28;
  m_28 = t;
  {
    ATerm x_5 (ATerm t)
    {
      t = term_p_28;
      t = y_90(t);
      return(t);
    }
    t = try_1(t, x_5);
  }
  t = m_28;
  {
    ATerm a_6 (ATerm t)
    {
      ATerm n_73 = NULL;
      ATerm r_28;
      r_28 = t;
      {
        ATerm l_73 = NULL;
        ATerm m_73 = NULL;
        m_73 = t;
        if(((l_73 != NULL) && (l_73 != m_73)))
          _fail(m_73);
        else
          l_73 = m_73;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_k_7, not_null(l_73));
          t = set_config_0(t);
        }
      }
      t = r_28;
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
    ATerm b_6 (ATerm t)
    {
      ATerm s_28 = t;
      int t_28 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm v_28 = t;
          int y_28 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(y_28);
            }
          else
            {
              t = v_28;
              {
                t = y_90(t);
                t = Cons_2(t, _id, b_6);
              }
            }
          LocalPopChoice(t_28);
        }
      else
        {
          t = s_28;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, a_6, b_6);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm u_73 = NULL,v_73 = NULL,w_73 = NULL;
  ATerm z_28;
  z_28 = t;
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
  t = z_28;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm x_90 (ATerm))
{
  ATerm d_74 = NULL;
  ATerm a_29;
  a_29 = t;
  {
    t = term_b_29;
    t = table_put_0(t);
  }
  t = a_29;
  {
    ATerm c_6 (ATerm t)
    {
      ATerm c_29 = t;
      int d_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = x_90(t);
          LocalPopChoice(d_29);
        }
      else
        {
          t = c_29;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, c_6);
    {
      ATerm d_6 (ATerm t)
      {
        ATerm g_29 = t;
        int l_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_29;
            m_29 = t;
            {
              ATerm n_29 = t;
              int o_29 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_h_28;
                  t = get_config_0(t);
                  LocalPopChoice(o_29);
                }
              else
                {
                  t = n_29;
                  t = option_defined_1(t, Help_0);
                }
            }
            t = m_29;
            {
              t = system_usage_0(t);
              {
                t = term_f_7;
                t = exit_0(t);
              }
            }
            LocalPopChoice(l_29);
          }
        else
          {
            t = g_29;
            {
              ATerm e_6 (ATerm t)
              {
                ATerm f_6 (ATerm t)
                {
                  ATerm e_74 = NULL;
                  e_74 = t;
                  if(((d_74 != NULL) && (d_74 != e_74)))
                    _fail(e_74);
                  else
                    d_74 = e_74;
                  return(t);
                }
                t = Undefined_1(t, f_6);
                return(t);
              }
              t = option_defined_1(t, e_6);
              {
                ATerm g_6 (ATerm t)
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(d_74)), term_r_29);
                  return(t);
                }
                t = say_1(t, g_6);
                {
                  t = system_usage_0(t);
                  {
                    t = term_w_6;
                    t = exit_0(t);
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, d_6);
      {
        ATerm s_29;
        s_29 = t;
        {
          t = term_j_26;
          t = table_destroy_0(t);
        }
        t = s_29;
      }
    }
  }
  return(t);
}
ATerm Abox_2_latex_0 (ATerm t)
{
  ATerm e_75 = NULL;
  ATerm g_75 = NULL,j_75 = NULL;
  ATerm h_6 (ATerm t)
  {
    ATerm t_29 = t;
    int y_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = io_options_0(t);
        LocalPopChoice(y_29);
      }
    else
      {
        t = t_29;
        {
          ATerm z_29 = t;
          int c_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm i_6 (ATerm t)
              {
                ATerm v_74 = NULL;
                v_74 = t;
                g_74 :
                if(!(match_string(v_74, "-t")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm j_6 (ATerm t)
              {
                ATerm x_74 = NULL;
                x_74 = t;
                t = (ATerm) ATmakeAppl(sym_LatexTable_1, not_null(x_74));
                return(t);
              }
              t = ArgOption_2(t, i_6, j_6);
              LocalPopChoice(c_30);
            }
          else
            {
              t = z_29;
              {
                ATerm k_6 (ATerm t)
                {
                  ATerm b_75 = NULL;
                  b_75 = t;
                  i_74 :
                  if(!(match_string(b_75, "-w")))
                    {
                      _fail(t);
                    }
                  return(t);
                }
                ATerm l_6 (ATerm t)
                {
                  ATerm c_75 = NULL;
                  c_75 = t;
                  t = (ATerm) ATmakeAppl(sym_Width_1, not_null(c_75));
                  return(t);
                }
                t = ArgOption_2(t, k_6, l_6);
              }
            }
        }
      }
    return(t);
  }
  t = parse_options_1(t, h_6);
  {
    e_75 = t;
    {
      ATerm d_30 = t;
      int e_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = need_help_1(t, usage_0);
          LocalPopChoice(e_30);
        }
      else
        {
          t = d_30;
          {
            ATerm f_30 = t;
            int i_30 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm j_30;
                j_30 = t;
                {
                  ATerm k_30 = t;
                  int p_30 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm m_6 (ATerm t)
                      {
                        ATerm k_75 = NULL,l_75 = NULL;
                        k_75 = t;
                        m_74 :
                        if(match_cons(k_75, sym_Output_1))
                          {
                            l_75 = ATgetArgument(k_75, 0);
                            {
                              if(((j_75 != NULL) && (j_75 != l_75)))
                                _fail(l_75);
                              else
                                j_75 = l_75;
                              {
                                t = not_null(j_75);
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
                      t = option_defined_1(t, m_6);
                      LocalPopChoice(p_30);
                    }
                  else
                    {
                      t = k_30;
                      {
                        ATerm m_75 = NULL;
                        t = term_d_26;
                        {
                          m_75 = t;
                          if(((j_75 != NULL) && (j_75 != m_75)))
                            _fail(m_75);
                          else
                            j_75 = m_75;
                        }
                      }
                    }
                }
                t = j_30;
                {
                  ATerm q_30;
                  q_30 = t;
                  {
                    ATerm n_6 (ATerm t)
                    {
                      ATerm p_75 = NULL,q_75 = NULL;
                      p_75 = t;
                      p_74 :
                      if(match_cons(p_75, sym_LatexTable_1))
                        {
                          q_75 = ATgetArgument(p_75, 0);
                          t = not_null(q_75);
                        }
                      else
                        {
                          _fail(t);
                        }
                      return(t);
                    }
                    t = collect_1(t, n_6);
                    t = load_tables_0(t);
                  }
                  t = q_30;
                  {
                    t = input_file_0(t);
                    {
                      t = Snd_0(t);
                      {
                        ATerm r_30 = t;
                        int w_30 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm x_30;
                            x_30 = t;
                            {
                              t = not_null(e_75);
                              {
                                ATerm o_6 (ATerm t)
                                {
                                  ATerm u_75 = NULL,v_75 = NULL;
                                  u_75 = t;
                                  r_74 :
                                  if(match_cons(u_75, sym_Width_1))
                                    {
                                      v_75 = ATgetArgument(u_75, 0);
                                      if(((g_75 != NULL) && (g_75 != v_75)))
                                        _fail(v_75);
                                      else
                                        g_75 = v_75;
                                    }
                                  else
                                    {
                                      _fail(t);
                                    }
                                  return(t);
                                }
                                t = option_defined_1(t, o_6);
                              }
                            }
                            t = x_30;
                            {
                              ATerm p_6 (ATerm t)
                              {
                                t = not_null(g_75);
                                return(t);
                              }
                              t = abox2latex_1(t, p_6);
                            }
                            LocalPopChoice(w_30);
                          }
                        else
                          {
                            t = r_30;
                            t = abox2latex_0(t);
                          }
                        {
                          ATerm q_6 (ATerm t)
                          {
                            ATerm r_6 (ATerm t)
                            {
                              t = is_string_0(t);
                              {
                                ATerm y_30;
                                y_30 = t;
                                {
                                  ATerm s_6 (ATerm t)
                                  {
                                    t = not_null(j_75);
                                    return(t);
                                  }
                                  ATerm t_6 (ATerm t)
                                  {
                                    ATerm w_75 = NULL;
                                    w_75 = t;
                                    t = (ATerm) ATinsert(ATempty, not_null(w_75));
                                    return(t);
                                  }
                                  t = split_2(t, s_6, t_6);
                                  t = print_0(t);
                                }
                                t = y_30;
                              }
                              return(t);
                            }
                            t = try_1(t, r_6);
                            return(t);
                          }
                          t = topdown_1(t, q_6);
                          t = report_success_0(t);
                        }
                      }
                    }
                  }
                }
                LocalPopChoice(i_30);
              }
            else
              {
                t = f_30;
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