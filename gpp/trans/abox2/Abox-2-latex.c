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
Symbol sym_S_1;
Symbol sym_NatCon_1;
Symbol sym_plus_1;
Symbol sym_minus_1;
Symbol sym_L_2;
Symbol sym_LNAT_2;
Symbol sym_C_2;
Symbol sym_LBL_2;
Symbol sym_REF_2;
Symbol sym_KW_0;
Symbol sym_VAR_0;
Symbol sym_NUM_0;
Symbol sym_MATH_0;
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
Symbol sym_A_3;
Symbol sym_R_2;
Symbol sym_AL_1;
Symbol sym_AC_1;
Symbol sym_AR_1;
Symbol sym_AOPTIONS_1;
Symbol sym_ALT_2;
Symbol sym_H_2;
Symbol sym_V_2;
Symbol sym_HV_2;
Symbol sym_SOpt_2;
Symbol sym_SOptB_2;
Symbol sym_VS_0;
Symbol sym_HS_0;
Symbol sym_IS_0;
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
Symbol sym_FILE_1;
Symbol sym_DIR_1;
Symbol sym_TEMP_0;
Symbol sym_TempFiles_0;
Symbol sym_Tool_1;
Symbol sym_Repository_0;
Symbol sym_Import_0;
Symbol sym_Imported_1;
Symbol sym_XTC_0;
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
  sym_S_1 = ATmakeSymbol("S", 1, ATfalse);
  ATprotectSymbol(sym_S_1);
  sym_NatCon_1 = ATmakeSymbol("NatCon", 1, ATfalse);
  ATprotectSymbol(sym_NatCon_1);
  sym_plus_1 = ATmakeSymbol("plus", 1, ATfalse);
  ATprotectSymbol(sym_plus_1);
  sym_minus_1 = ATmakeSymbol("minus", 1, ATfalse);
  ATprotectSymbol(sym_minus_1);
  sym_L_2 = ATmakeSymbol("L", 2, ATfalse);
  ATprotectSymbol(sym_L_2);
  sym_LNAT_2 = ATmakeSymbol("LNAT", 2, ATfalse);
  ATprotectSymbol(sym_LNAT_2);
  sym_C_2 = ATmakeSymbol("C", 2, ATfalse);
  ATprotectSymbol(sym_C_2);
  sym_LBL_2 = ATmakeSymbol("LBL", 2, ATfalse);
  ATprotectSymbol(sym_LBL_2);
  sym_REF_2 = ATmakeSymbol("REF", 2, ATfalse);
  ATprotectSymbol(sym_REF_2);
  sym_KW_0 = ATmakeSymbol("KW", 0, ATfalse);
  ATprotectSymbol(sym_KW_0);
  sym_VAR_0 = ATmakeSymbol("VAR", 0, ATfalse);
  ATprotectSymbol(sym_VAR_0);
  sym_NUM_0 = ATmakeSymbol("NUM", 0, ATfalse);
  ATprotectSymbol(sym_NUM_0);
  sym_MATH_0 = ATmakeSymbol("MATH", 0, ATfalse);
  ATprotectSymbol(sym_MATH_0);
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
  sym_ALT_2 = ATmakeSymbol("ALT", 2, ATfalse);
  ATprotectSymbol(sym_ALT_2);
  sym_H_2 = ATmakeSymbol("H", 2, ATfalse);
  ATprotectSymbol(sym_H_2);
  sym_V_2 = ATmakeSymbol("V", 2, ATfalse);
  ATprotectSymbol(sym_V_2);
  sym_HV_2 = ATmakeSymbol("HV", 2, ATfalse);
  ATprotectSymbol(sym_HV_2);
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
  sym_FILE_1 = ATmakeSymbol("FILE", 1, ATfalse);
  ATprotectSymbol(sym_FILE_1);
  sym_DIR_1 = ATmakeSymbol("DIR", 1, ATfalse);
  ATprotectSymbol(sym_DIR_1);
  sym_TEMP_0 = ATmakeSymbol("TEMP", 0, ATfalse);
  ATprotectSymbol(sym_TEMP_0);
  sym_TempFiles_0 = ATmakeSymbol("TempFiles", 0, ATfalse);
  ATprotectSymbol(sym_TempFiles_0);
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
  init_constant_terms();
}
ATerm term_n_23;
ATerm term_d_23;
ATerm term_v_22;
ATerm term_q_22;
ATerm term_p_22;
ATerm term_o_22;
ATerm term_n_22;
ATerm term_d_22;
ATerm term_b_22;
ATerm term_a_21;
ATerm term_z_20;
ATerm term_y_20;
ATerm term_x_20;
ATerm term_w_20;
ATerm term_o_20;
ATerm term_n_20;
ATerm term_g_20;
ATerm term_f_20;
ATerm term_e_20;
ATerm term_q_19;
ATerm term_p_19;
ATerm term_o_19;
ATerm term_n_19;
ATerm term_d_19;
ATerm term_a_19;
ATerm term_z_18;
ATerm term_y_18;
ATerm term_x_18;
ATerm term_u_18;
ATerm term_o_18;
ATerm term_n_18;
ATerm term_m_18;
ATerm term_l_18;
ATerm term_k_18;
ATerm term_g_18;
ATerm term_f_18;
ATerm term_e_18;
ATerm term_b_18;
ATerm term_a_18;
ATerm term_y_17;
ATerm term_x_17;
ATerm term_w_17;
ATerm term_v_17;
ATerm term_u_17;
ATerm term_t_17;
ATerm term_s_17;
ATerm term_n_17;
ATerm term_m_17;
ATerm term_j_17;
ATerm term_e_17;
ATerm term_c_16;
ATerm term_b_16;
ATerm term_k_15;
ATerm term_i_15;
ATerm term_e_15;
ATerm term_h_14;
ATerm term_g_14;
ATerm term_f_14;
ATerm term_e_14;
ATerm term_z_13;
ATerm term_o_13;
ATerm term_e_13;
ATerm term_d_13;
ATerm term_b_13;
ATerm term_a_13;
ATerm term_s_12;
ATerm term_p_12;
ATerm term_e_12;
ATerm term_u_11;
ATerm term_t_11;
ATerm term_s_11;
ATerm term_r_11;
ATerm term_q_11;
ATerm term_p_11;
ATerm term_o_11;
ATerm term_n_11;
ATerm term_m_11;
ATerm term_l_11;
ATerm term_k_11;
ATerm term_j_11;
ATerm term_i_11;
ATerm term_h_11;
ATerm term_g_11;
ATerm term_b_11;
ATerm term_w_10;
ATerm term_v_10;
ATerm term_l_10;
ATerm term_a_10;
ATerm term_z_9;
ATerm term_y_9;
ATerm term_x_9;
ATerm term_w_9;
ATerm term_v_9;
ATerm term_u_9;
ATerm term_t_9;
ATerm term_s_9;
ATerm term_r_9;
ATerm term_q_9;
ATerm term_p_9;
ATerm term_o_9;
ATerm term_n_9;
ATerm term_m_9;
ATerm term_l_9;
ATerm term_k_9;
ATerm term_j_9;
ATerm term_i_9;
ATerm term_h_9;
ATerm term_g_9;
ATerm term_f_9;
ATerm term_e_9;
ATerm term_d_9;
ATerm term_q_8;
ATerm term_p_8;
ATerm term_o_8;
ATerm term_n_8;
ATerm term_m_8;
ATerm term_l_8;
ATerm term_k_8;
ATerm term_j_8;
ATerm term_i_8;
ATerm term_h_8;
ATerm term_g_8;
ATerm term_f_8;
ATerm term_e_8;
ATerm term_d_8;
ATerm term_c_8;
ATerm term_b_8;
ATerm term_a_8;
ATerm term_z_7;
ATerm term_y_7;
ATerm term_x_7;
ATerm term_w_7;
ATerm term_v_7;
ATerm term_u_7;
ATerm term_t_7;
ATerm term_s_7;
ATerm term_r_7;
ATerm term_q_7;
ATerm term_p_7;
ATerm term_o_7;
ATerm term_n_7;
ATerm term_m_7;
ATerm term_l_7;
ATerm term_h_7;
ATerm term_d_7;
ATerm term_c_7;
ATerm term_b_7;
ATerm term_z_6;
ATerm term_v_6;
ATerm term_t_6;
void init_constant_terms (void)
{
  ATprotect(&(term_t_6));
  term_t_6 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_v_6));
  term_v_6 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_z_6));
  term_z_6 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file>(file, mode)", 0, ATtrue));
  ATprotect(&(term_b_7));
  term_b_7 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_c_7));
  term_c_7 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_d_7));
  term_d_7 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_h_7));
  term_h_7 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_l_7));
  term_l_7 = (ATerm) ATmakeAppl(ATmakeSymbol("\\\ncopies{", 0, ATtrue));
  ATprotect(&(term_m_7));
  term_m_7 = (ATerm) ATmakeAppl(ATmakeSymbol("}{", 0, ATtrue));
  ATprotect(&(term_n_7));
  term_n_7 = (ATerm) ATmakeAppl(ATmakeSymbol("}%", 0, ATtrue));
  ATprotect(&(term_o_7));
  term_o_7 = (ATerm) ATmakeAppl(ATmakeSymbol("\\begin{LBOX}{=}%\n", 0, ATtrue));
  ATprotect(&(term_p_7));
  term_p_7 = (ATerm) ATmakeAppl(ATmakeSymbol("%\n\\end{LBOX}%\n", 0, ATtrue));
  ATprotect(&(term_q_7));
  term_q_7 = (ATerm) ATmakeAppl(ATmakeSymbol("\\begin{LBOX}{", 0, ATtrue));
  ATprotect(&(term_r_7));
  term_r_7 = (ATerm) ATmakeAppl(ATmakeSymbol("}%\n", 0, ATtrue));
  ATprotect(&(term_s_7));
  term_s_7 = (ATerm) ATmakeAppl(ATmakeSymbol("\\boxlabel{", 0, ATtrue));
  ATprotect(&(term_t_7));
  term_t_7 = (ATerm) ATmakeAppl(ATmakeSymbol("}", 0, ATtrue));
  ATprotect(&(term_u_7));
  term_u_7 = (ATerm) ATmakeAppl(ATmakeSymbol("\\boxref{", 0, ATtrue));
  ATprotect(&(term_v_7));
  term_v_7 = (ATerm) ATmakeAppl(ATmakeSymbol("\\KWf{", 0, ATtrue));
  ATprotect(&(term_w_7));
  term_w_7 = (ATerm) ATmakeAppl(ATmakeSymbol("\\VARf{", 0, ATtrue));
  ATprotect(&(term_x_7));
  term_x_7 = (ATerm) ATmakeAppl(ATmakeSymbol("\\NUMf{", 0, ATtrue));
  ATprotect(&(term_y_7));
  term_y_7 = (ATerm) ATmakeAppl(ATmakeSymbol("\\MATHf{", 0, ATtrue));
  ATprotect(&(term_z_7));
  term_z_7 = (ATerm) ATmakeAppl(ATmakeSymbol("\\textsf{", 0, ATtrue));
  ATprotect(&(term_a_8));
  term_a_8 = (ATerm) ATmakeAppl(ATmakeSymbol("\\textrm{", 0, ATtrue));
  ATprotect(&(term_b_8));
  term_b_8 = (ATerm) ATmakeAppl(ATmakeSymbol("\\texttt{", 0, ATtrue));
  ATprotect(&(term_c_8));
  term_c_8 = (ATerm) ATmakeAppl(ATmakeSymbol("\\textmd{", 0, ATtrue));
  ATprotect(&(term_d_8));
  term_d_8 = (ATerm) ATmakeAppl(ATmakeSymbol("\\textbf{", 0, ATtrue));
  ATprotect(&(term_e_8));
  term_e_8 = (ATerm) ATmakeAppl(ATmakeSymbol("\\textup{", 0, ATtrue));
  ATprotect(&(term_f_8));
  term_f_8 = (ATerm) ATmakeAppl(ATmakeSymbol("\\textit{", 0, ATtrue));
  ATprotect(&(term_g_8));
  term_g_8 = (ATerm) ATmakeAppl(ATmakeSymbol("\\textsc{", 0, ATtrue));
  ATprotect(&(term_h_8));
  term_h_8 = (ATerm) ATmakeAppl(ATmakeSymbol("\\textsl{", 0, ATtrue));
  ATprotect(&(term_i_8));
  term_i_8 = (ATerm) ATmakeAppl(ATmakeSymbol("\\emph{", 0, ATtrue));
  ATprotect(&(term_j_8));
  term_j_8 = (ATerm) ATmakeAppl(ATmakeSymbol("\\tiny{", 0, ATtrue));
  ATprotect(&(term_k_8));
  term_k_8 = (ATerm) ATmakeAppl(ATmakeSymbol("\\scriptsize{", 0, ATtrue));
  ATprotect(&(term_l_8));
  term_l_8 = (ATerm) ATmakeAppl(ATmakeSymbol("\\footnotesize{", 0, ATtrue));
  ATprotect(&(term_m_8));
  term_m_8 = (ATerm) ATmakeAppl(ATmakeSymbol("\\small{", 0, ATtrue));
  ATprotect(&(term_n_8));
  term_n_8 = (ATerm) ATmakeAppl(ATmakeSymbol("\\normalsize{", 0, ATtrue));
  ATprotect(&(term_o_8));
  term_o_8 = (ATerm) ATmakeAppl(ATmakeSymbol("\\large{", 0, ATtrue));
  ATprotect(&(term_p_8));
  term_p_8 = (ATerm) ATmakeAppl(ATmakeSymbol("\\Large{", 0, ATtrue));
  ATprotect(&(term_q_8));
  term_q_8 = (ATerm) ATmakeAppl(ATmakeSymbol("\\LARGE{", 0, ATtrue));
  ATprotect(&(term_d_9));
  term_d_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\\huge{", 0, ATtrue));
  ATprotect(&(term_e_9));
  term_e_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\\Huge{", 0, ATtrue));
  ATprotect(&(term_f_9));
  term_f_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\\textcolor{", 0, ATtrue));
  ATprotect(&(term_g_9));
  term_g_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\\hfill#\\hfill", 0, ATtrue));
  ATprotect(&(term_h_9));
  term_h_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\\hfill#", 0, ATtrue));
  ATprotect(&(term_i_9));
  term_i_9 = (ATerm) ATmakeAppl(ATmakeSymbol("#\\hfill", 0, ATtrue));
  ATprotect(&(term_j_9));
  term_j_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\\cr", 0, ATtrue));
  ATprotect(&(term_k_9));
  term_k_9 = (ATerm) ATmakeAppl(ATmakeSymbol("&", 0, ATtrue));
  ATprotect(&(term_l_9));
  term_l_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\\begin{boxenv}%\n", 0, ATtrue));
  ATprotect(&(term_m_9));
  term_m_9 = (ATerm) ATmakeAppl(ATmakeSymbol("%\n\\end{boxenv}\n", 0, ATtrue));
  ATprotect(&(term_n_9));
  term_n_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\\begin{boxenv}{", 0, ATtrue));
  ATprotect(&(term_o_9));
  term_o_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\\begin{HBOX}{", 0, ATtrue));
  ATprotect(&(term_p_9));
  term_p_9 = (ATerm) ATmakeAppl(ATmakeSymbol("%\n\\end{HBOX}%\n", 0, ATtrue));
  ATprotect(&(term_q_9));
  term_q_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\\begin{VBOX}{", 0, ATtrue));
  ATprotect(&(term_r_9));
  term_r_9 = (ATerm) ATmakeAppl(ATmakeSymbol("%\n\\end{VBOX}%\n", 0, ATtrue));
  ATprotect(&(term_s_9));
  term_s_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\\begin{HVBOX}{", 0, ATtrue));
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeAppl(ATmakeSymbol("%\n\\end{HVBOX}%\n", 0, ATtrue));
  ATprotect(&(term_u_9));
  term_u_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\\begin{ABOX}{", 0, ATtrue));
  ATprotect(&(term_v_9));
  term_v_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\\crcr%\n\\end{ABOX}%\n", 0, ATtrue));
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\\begin{ALTBOX}{%\n", 0, ATtrue));
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeAppl(ATmakeSymbol("%\n}", 0, ATtrue));
  ATprotect(&(term_y_9));
  term_y_9 = (ATerm) ATmakeAppl(ATmakeSymbol("%\n}%\n\\end{ALTBOX}%\n", 0, ATtrue));
  ATprotect(&(term_z_9));
  term_z_9 = (ATerm) ATmakeAppl(ATmakeSymbol("%\n\\begin{latextext}%\n", 0, ATtrue));
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeAppl(ATmakeSymbol("%\n\\end{latextext}%\n", 0, ATtrue));
  ATprotect(&(term_l_10));
  term_l_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--width", 0, ATtrue));
  ATprotect(&(term_v_10));
  term_v_10 = (ATerm) ATmakeInt(39);
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeInt(96);
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeAppl(ATmakeSymbol("latex-abbrevs", 0, ATtrue));
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeAppl(ATmakeSymbol("\\boxspace{}", 0, ATtrue));
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeAppl(ATmakeSymbol("\\#", 0, ATtrue));
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(ATmakeSymbol("\\$", 0, ATtrue));
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeAppl(ATmakeSymbol("\\%", 0, ATtrue));
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeAppl(ATmakeSymbol("\\&", 0, ATtrue));
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeAppl(ATmakeSymbol("\\mbox{-}", 0, ATtrue));
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeAppl(ATmakeSymbol("\\ensuremath{<}", 0, ATtrue));
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeAppl(ATmakeSymbol("\\ensuremath{>}", 0, ATtrue));
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeAppl(ATmakeSymbol("\\ensuremath{\\backslash}", 0, ATtrue));
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeAppl(ATmakeSymbol("\\^{}", 0, ATtrue));
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(ATmakeSymbol("\\_", 0, ATtrue));
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeAppl(ATmakeSymbol("\\{", 0, ATtrue));
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeAppl(ATmakeSymbol("\\ensuremath{\\vert}", 0, ATtrue));
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeAppl(ATmakeSymbol("\\}", 0, ATtrue));
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeAppl(ATmakeSymbol("\\~{}", 0, ATtrue));
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeAppl(ATmakeSymbol("~", 0, ATtrue));
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_b_13));
  term_b_13 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeAppl(ATmakeSymbol("dissuasive library strategy: ", 0, ATtrue));
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeAppl(ATmakeSymbol("separate-by/1; Use separate-by/0 and term wrap patterns: <separate-by> (a, <id>)", 0, ATtrue));
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(sym_CSEP_0);
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeAppl(sym_L_0);
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeAppl(sym_C_0);
  ATprotect(&(term_g_14));
  term_g_14 = (ATerm) ATmakeAppl(sym_R_0);
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeAppl(sym_EOR_0);
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeInt(61);
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(ATmakeSymbol("\\ ", 0, ATtrue));
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeAppl(ATmakeSymbol("\n\n", 0, ATtrue));
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeAppl(sym__2, term_h_7, term_t_6);
  ATprotect(&(term_j_17));
  term_j_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_m_17));
  term_m_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_n_17));
  term_n_17 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_s_17));
  term_s_17 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: file doesn't exist or doesn't contain a valid term: ", 0, ATtrue));
  ATprotect(&(term_t_17));
  term_t_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--latex-table", 0, ATtrue));
  ATprotect(&(term_u_17));
  term_u_17 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_v_17));
  term_v_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_w_17));
  term_w_17 = (ATerm) ATmakeAppl(sym__2, term_v_17, term_c_7);
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_y_17));
  term_y_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_a_18));
  term_a_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_e_18));
  term_e_18 = (ATerm) ATmakeAppl(sym__2, term_a_13, term_o_13);
  ATprotect(&(term_f_18));
  term_f_18 = (ATerm) ATmakeAppl(sym_Verbose_1, term_o_13);
  ATprotect(&(term_g_18));
  term_g_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_k_18));
  term_k_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_l_18));
  term_l_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_m_18));
  term_m_18 = (ATerm) ATmakeAppl(sym__2, term_l_18, term_c_7);
  ATprotect(&(term_n_18));
  term_n_18 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_o_18));
  term_o_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_u_18));
  term_u_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_x_18));
  term_x_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_y_18));
  term_y_18 = (ATerm) ATmakeAppl(sym__2, term_x_18, term_c_7);
  ATprotect(&(term_z_18));
  term_z_18 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_a_19));
  term_a_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_d_19));
  term_d_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_n_19));
  term_n_19 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_o_19));
  term_o_19 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_p_19));
  term_p_19 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_q_19));
  term_q_19 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_e_20));
  term_e_20 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_f_20));
  term_f_20 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_g_20));
  term_g_20 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_n_20));
  term_n_20 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_o_20));
  term_o_20 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_w_20));
  term_w_20 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_x_20));
  term_x_20 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_y_20));
  term_y_20 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_z_20));
  term_z_20 = (ATerm) ATmakeAppl(sym__2, term_x_20, term_y_20);
  ATprotect(&(term_a_21));
  term_a_21 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_b_22));
  term_b_22 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_d_22));
  term_d_22 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_n_22));
  term_n_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_o_22));
  term_o_22 = (ATerm) ATmakeAppl(sym__2, term_n_22, term_c_7);
  ATprotect(&(term_p_22));
  term_p_22 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_q_22));
  term_q_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_v_22));
  term_v_22 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_d_23));
  term_d_23 = (ATerm) ATmakeAppl(sym__3, term_x_20, term_y_20, (ATerm) ATempty);
  ATprotect(&(term_n_23));
  term_n_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm close_file_0 (ATerm);
ATerm print_0 (ATerm);
ATerm assert_1 (ATerm, ATerm c_86 (ATerm));
ATerm obsolete_1 (ATerm, ATerm q_86 (ATerm));
ATerm open_file_0 (ATerm);
ATerm new_0 (ATerm);
ATerm new_file_0 (ATerm);
ATerm xtc_new_file_0 (ATerm);
ATerm topdown_print_to_0 (ATerm);
ATerm is_int_0 (ATerm);
ATerm Latex2text_0 (ATerm);
ATerm bottomup_1 (ATerm, ATerm j_69 (ATerm));
ATerm latex2text_0 (ATerm);
ATerm BOXENV_args_0 (ATerm);
ATerm Hd_0 (ATerm);
ATerm flat_list_0 (ATerm);
ATerm replace_quotes_0 (ATerm);
ATerm listtd_1 (ATerm, ATerm s_76 (ATerm));
ATerm string_as_chars_1 (ATerm, ATerm l_85 (ATerm));
ATerm latex_string_0 (ATerm);
ATerm remove_trailing_1 (ATerm, ATerm r_67 (ATerm));
ATerm at_suffix_1 (ATerm, ATerm e_76 (ATerm));
ATerm LatexComment_0 (ATerm);
ATerm make_latex_comment_0 (ATerm);
ATerm MATH_0 (ATerm);
ATerm NUM_0 (ATerm);
ATerm VAR_0 (ATerm);
ATerm KW_0 (ATerm);
ATerm CL_0 (ATerm);
ATerm FFID_2 (ATerm, ATerm s_59 (ATerm), ATerm t_59 (ATerm));
ATerm SZ_0 (ATerm);
ATerm SH_0 (ATerm);
ATerm SE_0 (ATerm);
ATerm FM_0 (ATerm);
ATerm toh_0 (ATerm);
ATerm hs_length_0 (ATerm);
ATerm Hspace_0 (ATerm);
ATerm separate_by_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm g_89 (ATerm));
ATerm dissuader_1 (ATerm, ATerm r_86 (ATerm));
ATerm separate_by_1 (ATerm, ATerm h_75 (ATerm));
ATerm filter_1 (ATerm, ATerm c_83 (ATerm));
ATerm is_length_0 (ATerm);
ATerm Ispace_0 (ATerm);
ATerm int_to_string_0 (ATerm);
ATerm SOpt_2 (ATerm, ATerm o_60 (ATerm), ATerm p_60 (ATerm));
ATerm SOpt_value_1 (ATerm, ATerm m_67 (ATerm));
ATerm vs_length_0 (ATerm);
ATerm Vspace_0 (ATerm);
ATerm C_2 (ATerm, ATerm k_59 (ATerm), ATerm l_59 (ATerm));
ATerm table_row_0 (ATerm);
ATerm MkRows_0 (ATerm);
ATerm at_last_1 (ATerm, ATerm l_76 (ATerm));
ATerm table_def_0 (ATerm);
ATerm subt_0 (ATerm);
ATerm while_not_2 (ATerm, ATerm z_68 (ATerm), ATerm a_69 (ATerm));
ATerm for_3 (ATerm, ATerm c_69 (ATerm), ATerm d_69 (ATerm), ATerm e_69 (ATerm));
ATerm copy_0 (ATerm);
ATerm R_2 (ATerm, ATerm a_60 (ATerm), ATerm b_60 (ATerm));
ATerm split_2 (ATerm, ATerm o_83 (ATerm), ATerm p_83 (ATerm));
ATerm construct_rows_0 (ATerm);
ATerm Abox2latex_0 (ATerm);
ATerm topdown_1 (ATerm, ATerm i_69 (ATerm));
ATerm abox2latex_0 (ATerm);
ATerm file_exists_0 (ATerm);
ATerm read_from_0 (ATerm);
ATerm copy_file_0 (ATerm);
ATerm stderr_0 (ATerm);
ATerm stdout_0 (ATerm);
ATerm copy_to_1 (ATerm, ATerm m_0 (ATerm));
ATerm Tl_0 (ATerm);
ATerm table_pop_0 (ATerm);
ATerm end_scope_1 (ATerm, ATerm z_85 (ATerm));
ATerm remove_file_0 (ATerm);
ATerm restore_always_2 (ATerm, ATerm e_68 (ATerm), ATerm f_68 (ATerm));
ATerm begin_scope_1 (ATerm, ATerm y_85 (ATerm));
ATerm xtc_temp_files_1 (ATerm, ATerm r_95 (ATerm));
ATerm xtc_io_1 (ATerm, ATerm s_95 (ATerm));
ATerm xtc_io_wrap_2 (ATerm, ATerm w_95 (ATerm), ATerm x_95 (ATerm));
ATerm xtc_io_wrap_1 (ATerm, ATerm v_95 (ATerm));
ATerm Abox_2_latex_0 (ATerm);
ATerm ReadFromFile_0 (ATerm);
ATerm load_latex_table_0 (ATerm);
ATerm ArgOption_2 (ATerm, ATerm b_91 (ATerm), ATerm c_91 (ATerm));
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
ATerm Abox2latex_options_0 (ATerm);
ATerm default_usage_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm ticks_to_seconds_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm z_81 (ATerm), ATerm a_82 (ATerm));
ATerm crush_2 (ATerm, ATerm x_80 (ATerm), ATerm y_80 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm f_89 (ATerm));
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm l_87 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm j_91 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm h_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm i_91 (ATerm));
ATerm Program_1 (ATerm, ATerm v_66 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm k_86 (ATerm));
ATerm Undefined_1 (ATerm, ATerm w_66 (ATerm));
ATerm fetch_1 (ATerm, ATerm u_75 (ATerm));
ATerm option_defined_1 (ATerm, ATerm i_90 (ATerm));
ATerm Help_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm a_76 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm _2 (ATerm, ATerm r_57 (ATerm), ATerm s_57 (ATerm));
ATerm conc_strings_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm debug_1 (ATerm, ATerm j_86 (ATerm));
ATerm map_1 (ATerm, ATerm l_75 (ATerm));
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm try_1 (ATerm, ATerm u_67 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm n_91 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm a_59 (ATerm), ATerm b_59 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm l_91 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm k_91 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm r_87 (ATerm), ATerm s_87 (ATerm), ATerm t_87 (ATerm), ATerm u_87 (ATerm));
ATerm option_wrap_2 (ATerm, ATerm v_87 (ATerm), ATerm w_87 (ATerm));
ATerm io_Abox_2_latex_0 (ATerm);
ATerm main_0 (ATerm);
ATerm close_file_0 (ATerm t)
{
  ATerm c_0 = NULL;
  c_0 = t;
  t = SSL_close_file(not_null(c_0));
  return(t);
}
ATerm print_0 (ATerm t)
{
  ATerm x_0 = NULL,b_1 = NULL,d_1 = NULL;
  x_0 = t;
  v_0 :
  if(match_cons(x_0, sym__2))
    {
      b_1 = ATgetArgument(x_0, 0);
      d_1 = ATgetArgument(x_0, 1);
      {
        ATerm d_6;
        d_6 = t;
        t = SSL_print(not_null(b_1), not_null(d_1));
        t = d_6;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm assert_1 (ATerm t, ATerm c_86 (ATerm))
{
  ATerm g_2 = NULL,i_2 = NULL,m_2 = NULL;
  g_2 = t;
  c_2 :
  if(match_cons(g_2, sym__2))
    {
      i_2 = ATgetArgument(g_2, 0);
      m_2 = ATgetArgument(g_2, 1);
      {
        ATerm o_3 = NULL,p_3 = NULL,t_3 = NULL;
        ATerm l_6;
        l_6 = t;
        {
          ATerm u_3 = NULL;
          ATerm v_3 = NULL,z_3 = NULL,a_4 = NULL;
          t = c_86(t);
          {
            u_3 = t;
            {
              if(((o_3 != NULL) && (o_3 != u_3)))
                _fail(u_3);
              else
                o_3 = u_3;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(o_3), not_null(i_2), not_null(m_2));
                {
                  t = table_push_0(t);
                  {
                    ATerm n_6 = t;
                    int s_6 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(o_3), term_t_6);
                        t = table_get_0(t);
                        LocalPopChoice(s_6);
                      }
                    else
                      {
                        t = n_6;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      v_3 = t;
                      b_2 :
                      if(((ATgetType(v_3) == AT_LIST) && !(ATisEmpty(v_3))))
                        {
                          z_3 = ATgetFirst((ATermList) v_3);
                          a_4 = (ATerm) ATgetNext((ATermList) v_3);
                          {
                            if(((p_3 != NULL) && (p_3 != z_3)))
                              _fail(z_3);
                            else
                              p_3 = z_3;
                            {
                              if(((t_3 != NULL) && (t_3 != a_4)))
                                _fail(a_4);
                              else
                                t_3 = a_4;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(o_3), term_t_6, (ATerm) ATinsert(CheckATermList(not_null(t_3)), (ATerm) ATinsert(CheckATermList(not_null(p_3)), not_null(i_2))));
                                t = table_put_0(t);
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
        t = l_6;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm obsolete_1 (ATerm t, ATerm q_86 (ATerm))
{
  ATerm u_6;
  u_6 = t;
  {
    t = q_86(t);
    {
      ATerm b_0 (ATerm t)
      {
        t = term_v_6;
        return(t);
      }
      t = debug_1(t, b_0);
    }
  }
  t = u_6;
  return(t);
}
ATerm open_file_0 (ATerm t)
{
  ATerm p_5 = NULL,q_5 = NULL;
  ATerm x_6 = t;
  int y_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_5 = NULL,s_5 = NULL,t_5 = NULL;
      r_5 = t;
      j_5 :
      if(match_cons(r_5, sym__2))
        {
          s_5 = ATgetArgument(r_5, 0);
          t_5 = ATgetArgument(r_5, 1);
          {
            if(((q_5 != NULL) && (q_5 != s_5)))
              _fail(s_5);
            else
              q_5 = s_5;
            if(((p_5 != NULL) && (p_5 != t_5)))
              _fail(t_5);
            else
              p_5 = t_5;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(y_6);
      t = SSL_open_file(not_null(q_5), not_null(p_5));
    }
  else
    {
      t = x_6;
      {
        ATerm u_5 = NULL;
        ATerm v_5 = NULL;
        ATerm e_0 (ATerm t)
        {
          t = term_z_6;
          return(t);
        }
        t = obsolete_1(t, e_0);
        {
          u_5 = t;
          {
            if(((q_5 != NULL) && (q_5 != u_5)))
              _fail(u_5);
            else
              q_5 = u_5;
            {
              ATerm a_7;
              a_7 = t;
              {
                ATerm w_5 = NULL;
                t = term_b_7;
                {
                  w_5 = t;
                  if(((v_5 != NULL) && (v_5 != w_5)))
                    _fail(w_5);
                  else
                    v_5 = w_5;
                }
              }
              t = a_7;
              t = SSL_open_file(not_null(q_5), not_null(v_5));
            }
          }
        }
      }
    }
  return(t);
}
ATerm new_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm new_file_0 (ATerm t)
{
  ATerm b_6 = NULL;
  ATerm c_6 = NULL;
  t = term_c_7;
  {
    t = new_0(t);
    {
      c_6 = t;
      if(((b_6 != NULL) && (b_6 != c_6)))
        _fail(c_6);
      else
        b_6 = c_6;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(b_6), term_d_7);
    {
      t = conc_strings_0(t);
      {
        ATerm e_7 = t;
        int f_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = file_exists_0(t);
            t = new_file_0(t);
            LocalPopChoice(f_7);
          }
        else
          {
            t = e_7;
            {
            }
          }
      }
    }
  }
  return(t);
}
ATerm xtc_new_file_0 (ATerm t)
{
  ATerm g_6 = NULL;
  t = new_file_0(t);
  {
    g_6 = t;
    {
      ATerm g_7;
      g_7 = t;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(g_6), term_b_7);
        {
          t = open_file_0(t);
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(g_6), term_c_7);
            {
              ATerm f_0 (ATerm t)
              {
                t = term_h_7;
                return(t);
              }
              t = assert_1(t, f_0);
            }
          }
        }
      }
      t = g_7;
    }
  }
  return(t);
}
ATerm topdown_print_to_0 (ATerm t)
{
  ATerm m_6 = NULL;
  ATerm o_6 = NULL;
  m_6 = t;
  {
    ATerm p_6 = NULL;
    t = xtc_new_file_0(t);
    {
      p_6 = t;
      {
        if(((o_6 != NULL) && (o_6 != p_6)))
          _fail(p_6);
        else
          o_6 = p_6;
        {
          t = not_null(m_6);
          {
            ATerm n_0 (ATerm t)
            {
              ATerm i_7 = t;
              int j_7 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = is_string_0(t);
                  {
                    ATerm k_7;
                    k_7 = t;
                    {
                      ATerm q_6 = NULL;
                      ATerm r_6 = NULL;
                      r_6 = t;
                      if(((q_6 != NULL) && (q_6 != r_6)))
                        _fail(r_6);
                      else
                        q_6 = r_6;
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(o_6), (ATerm) ATinsert(ATempty, not_null(q_6)));
                        t = print_0(t);
                      }
                    }
                    t = k_7;
                  }
                  LocalPopChoice(j_7);
                }
              else
                {
                  t = i_7;
                  {
                  }
                }
              return(t);
            }
            t = topdown_1(t, n_0);
            {
              t = not_null(o_6);
              t = close_file_0(t);
            }
          }
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(o_6));
  }
  return(t);
}
ATerm is_int_0 (ATerm t)
{
  ATerm w_6 = NULL;
  w_6 = t;
  t = SSL_is_int(not_null(w_6));
  return(t);
}
ATerm Latex2text_0 (ATerm t)
{
  ATerm w_8 = NULL,x_8 = NULL,y_8 = NULL,z_8 = NULL,a_9 = NULL,b_9 = NULL,c_9 = NULL;
  ATerm a_33 (ATerm t)
  {
    ATerm h_13 = NULL;
    t = not_null(z_8);
    {
      t = is_int_0(t);
      {
        ATerm i_13 = NULL;
        t = not_null(z_8);
        {
          t = int_to_string_0(t);
          {
            i_13 = t;
            if(((h_13 != NULL) && (h_13 != i_13)))
              _fail(i_13);
            else
              h_13 = i_13;
          }
        }
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_n_7), not_null(b_9)), term_m_7), not_null(h_13)), term_l_7);
      }
    }
    return(t);
  }
  ATerm b_33 (ATerm t)
  {
    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_p_7), not_null(b_9)), term_o_7);
    return(t);
  }
  ATerm c_33 (ATerm t)
  {
    t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_p_7), not_null(b_9)), term_r_7), not_null(z_8)), term_q_7);
    return(t);
  }
  ATerm d_33 (ATerm t)
  {
    t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(b_9)), term_t_7), not_null(z_8)), term_s_7);
    return(t);
  }
  ATerm e_33 (ATerm t)
  {
    t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_t_7), not_null(b_9)), term_m_7), not_null(z_8)), term_u_7);
    return(t);
  }
  ATerm f_33 (ATerm t)
  {
    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_t_7), not_null(b_9)), term_v_7);
    return(t);
  }
  ATerm g_33 (ATerm t)
  {
    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_t_7), not_null(b_9)), term_w_7);
    return(t);
  }
  ATerm h_33 (ATerm t)
  {
    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_t_7), not_null(b_9)), term_x_7);
    return(t);
  }
  ATerm i_33 (ATerm t)
  {
    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_t_7), not_null(b_9)), term_y_7);
    return(t);
  }
  ATerm j_33 (ATerm t)
  {
    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_t_7), not_null(b_9)), term_z_7);
    return(t);
  }
  ATerm k_33 (ATerm t)
  {
    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_t_7), not_null(b_9)), term_a_8);
    return(t);
  }
  ATerm l_33 (ATerm t)
  {
    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_t_7), not_null(b_9)), term_b_8);
    return(t);
  }
  ATerm m_33 (ATerm t)
  {
    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_t_7), not_null(b_9)), term_c_8);
    return(t);
  }
  ATerm n_33 (ATerm t)
  {
    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_t_7), not_null(b_9)), term_d_8);
    return(t);
  }
  ATerm o_33 (ATerm t)
  {
    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_t_7), not_null(b_9)), term_e_8);
    return(t);
  }
  ATerm p_33 (ATerm t)
  {
    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_t_7), not_null(b_9)), term_f_8);
    return(t);
  }
  ATerm q_33 (ATerm t)
  {
    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_t_7), not_null(b_9)), term_g_8);
    return(t);
  }
  ATerm t_33 (ATerm t)
  {
    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_t_7), not_null(b_9)), term_h_8);
    return(t);
  }
  ATerm u_33 (ATerm t)
  {
    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_t_7), not_null(b_9)), term_i_8);
    return(t);
  }
  ATerm v_33 (ATerm t)
  {
    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_t_7), not_null(b_9)), term_j_8);
    return(t);
  }
  ATerm w_33 (ATerm t)
  {
    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_t_7), not_null(b_9)), term_k_8);
    return(t);
  }
  ATerm x_33 (ATerm t)
  {
    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_t_7), not_null(b_9)), term_l_8);
    return(t);
  }
  ATerm f_34 (ATerm t)
  {
    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_t_7), not_null(b_9)), term_m_8);
    return(t);
  }
  ATerm g_34 (ATerm t)
  {
    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_t_7), not_null(b_9)), term_n_8);
    return(t);
  }
  ATerm h_34 (ATerm t)
  {
    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_t_7), not_null(b_9)), term_o_8);
    return(t);
  }
  ATerm i_34 (ATerm t)
  {
    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_t_7), not_null(b_9)), term_p_8);
    return(t);
  }
  ATerm j_34 (ATerm t)
  {
    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_t_7), not_null(b_9)), term_q_8);
    return(t);
  }
  ATerm k_34 (ATerm t)
  {
    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_t_7), not_null(b_9)), term_d_9);
    return(t);
  }
  ATerm l_34 (ATerm t)
  {
    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_t_7), not_null(b_9)), term_e_9);
    return(t);
  }
  ATerm m_34 (ATerm t)
  {
    t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_t_7), not_null(b_9)), term_m_7), not_null(a_9)), term_f_9);
    return(t);
  }
  ATerm n_34 (ATerm t)
  {
    t = term_g_9;
    return(t);
  }
  ATerm o_34 (ATerm t)
  {
    t = term_h_9;
    return(t);
  }
  ATerm p_34 (ATerm t)
  {
    t = term_i_9;
    return(t);
  }
  ATerm q_34 (ATerm t)
  {
    t = term_j_9;
    return(t);
  }
  ATerm r_34 (ATerm t)
  {
    t = term_k_9;
    return(t);
  }
  c_9 = t;
  r_8 :
  if(match_cons(c_9, sym_BOXENV_2))
    {
      z_8 = ATgetArgument(c_9, 0);
      b_9 = ATgetArgument(c_9, 1);
      s_8 :
      if(((ATgetType(z_8) == AT_LIST) && ATisEmpty(z_8)))
        {
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_m_9), not_null(b_9)), term_l_9);
        }
      else
        {
          if(((ATgetType(z_8) == AT_LIST) && !(ATisEmpty(z_8))))
            {
              a_9 = ATgetFirst((ATermList) z_8);
              w_8 = (ATerm) ATgetNext((ATermList) z_8);
              t_8 :
              if(((ATgetType(w_8) == AT_LIST) && ATisEmpty(w_8)))
                {
                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_m_9), not_null(b_9)), term_r_7), not_null(a_9)), term_n_9);
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
      if(match_cons(c_9, sym_HBOX_2))
        {
          z_8 = ATgetArgument(c_9, 0);
          b_9 = ATgetArgument(c_9, 1);
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_p_9), not_null(b_9)), term_r_7), not_null(z_8)), term_o_9);
        }
      else
        {
          if(match_cons(c_9, sym_VBOX_3))
            {
              z_8 = ATgetArgument(c_9, 0);
              b_9 = ATgetArgument(c_9, 1);
              x_8 = ATgetArgument(c_9, 2);
              t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_r_9), not_null(x_8)), term_r_7), not_null(b_9)), term_m_7), not_null(z_8)), term_q_9);
            }
          else
            {
              if(match_cons(c_9, sym_HVBOX_4))
                {
                  z_8 = ATgetArgument(c_9, 0);
                  b_9 = ATgetArgument(c_9, 1);
                  x_8 = ATgetArgument(c_9, 2);
                  y_8 = ATgetArgument(c_9, 3);
                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_t_9), not_null(y_8)), term_r_7), not_null(x_8)), term_m_7), not_null(b_9)), term_m_7), not_null(z_8)), term_s_9);
                }
              else
                {
                  if(match_cons(c_9, sym_ABOX_2))
                    {
                      z_8 = ATgetArgument(c_9, 0);
                      b_9 = ATgetArgument(c_9, 1);
                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_v_9), not_null(b_9)), term_r_7), not_null(z_8)), term_u_9);
                    }
                  else
                    {
                      if(match_cons(c_9, sym_ALTBOX_2))
                        {
                          z_8 = ATgetArgument(c_9, 0);
                          b_9 = ATgetArgument(c_9, 1);
                          t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_y_9), not_null(b_9)), term_x_9), not_null(z_8)), term_w_9);
                        }
                      else
                        {
                          if(match_cons(c_9, sym_CBOX_1))
                            {
                              z_8 = ATgetArgument(c_9, 0);
                              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_a_10), not_null(z_8)), term_z_9);
                            }
                          else
                            {
                              if(match_cons(c_9, sym_LBOX_2))
                                {
                                  z_8 = ATgetArgument(c_9, 0);
                                  b_9 = ATgetArgument(c_9, 1);
                                  u_8 :
                                  if(match_string(z_8, "="))
                                    {
                                      ATerm b_10 = t;
                                      int c_10 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = a_33(t);
                                          LocalPopChoice(c_10);
                                        }
                                      else
                                        {
                                          t = b_10;
                                          {
                                            ATerm d_10 = t;
                                            int e_10 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = b_33(t);
                                                LocalPopChoice(e_10);
                                              }
                                            else
                                              {
                                                t = d_10;
                                                t = c_33(t);
                                              }
                                          }
                                        }
                                    }
                                  else
                                    {
                                      ATerm f_10 = t;
                                      int g_10 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = a_33(t);
                                          LocalPopChoice(g_10);
                                        }
                                      else
                                        {
                                          t = f_10;
                                          t = c_33(t);
                                        }
                                    }
                                }
                              else
                                {
                                  if(match_cons(c_9, sym_LBLBOX_2))
                                    {
                                      z_8 = ATgetArgument(c_9, 0);
                                      b_9 = ATgetArgument(c_9, 1);
                                      t = d_33(t);
                                    }
                                  else
                                    {
                                      if(match_cons(c_9, sym_REFBOX_2))
                                        {
                                          z_8 = ATgetArgument(c_9, 0);
                                          b_9 = ATgetArgument(c_9, 1);
                                          t = e_33(t);
                                        }
                                      else
                                        {
                                          if(match_cons(c_9, sym_BOXFONT_2))
                                            {
                                              z_8 = ATgetArgument(c_9, 0);
                                              b_9 = ATgetArgument(c_9, 1);
                                              v_8 :
                                              if(match_cons(z_8, sym_KW_0))
                                                {
                                                  t = f_33(t);
                                                }
                                              else
                                                {
                                                  if(match_cons(z_8, sym_VAR_0))
                                                    {
                                                      t = g_33(t);
                                                    }
                                                  else
                                                    {
                                                      if(match_cons(z_8, sym_NUM_0))
                                                        {
                                                          t = h_33(t);
                                                        }
                                                      else
                                                        {
                                                          if(match_cons(z_8, sym_MATH_0))
                                                            {
                                                              t = i_33(t);
                                                            }
                                                          else
                                                            {
                                                              if(match_string(z_8, "sf"))
                                                                {
                                                                  t = j_33(t);
                                                                }
                                                              else
                                                                {
                                                                  if(match_string(z_8, "rm"))
                                                                    {
                                                                      t = k_33(t);
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_string(z_8, "tt"))
                                                                        {
                                                                          t = l_33(t);
                                                                        }
                                                                      else
                                                                        {
                                                                          if(match_string(z_8, "md"))
                                                                            {
                                                                              t = m_33(t);
                                                                            }
                                                                          else
                                                                            {
                                                                              if(match_string(z_8, "bf"))
                                                                                {
                                                                                  t = n_33(t);
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(match_string(z_8, "up"))
                                                                                    {
                                                                                      t = o_33(t);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(match_string(z_8, "it"))
                                                                                        {
                                                                                          t = p_33(t);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          if(match_string(z_8, "sc"))
                                                                                            {
                                                                                              t = q_33(t);
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              if(match_string(z_8, "sl"))
                                                                                                {
                                                                                                  t = t_33(t);
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  if(match_string(z_8, "em"))
                                                                                                    {
                                                                                                      t = u_33(t);
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      if(match_string(z_8, "tiny"))
                                                                                                        {
                                                                                                          t = v_33(t);
                                                                                                        }
                                                                                                      else
                                                                                                        {
                                                                                                          if(match_string(z_8, "scriptsize"))
                                                                                                            {
                                                                                                              t = w_33(t);
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              if(match_string(z_8, "footnotesize"))
                                                                                                                {
                                                                                                                  t = x_33(t);
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  if(match_string(z_8, "small"))
                                                                                                                    {
                                                                                                                      t = f_34(t);
                                                                                                                    }
                                                                                                                  else
                                                                                                                    {
                                                                                                                      if(match_string(z_8, "normalsize"))
                                                                                                                        {
                                                                                                                          t = g_34(t);
                                                                                                                        }
                                                                                                                      else
                                                                                                                        {
                                                                                                                          if(match_string(z_8, "large"))
                                                                                                                            {
                                                                                                                              t = h_34(t);
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              if(match_string(z_8, "Large"))
                                                                                                                                {
                                                                                                                                  t = i_34(t);
                                                                                                                                }
                                                                                                                              else
                                                                                                                                {
                                                                                                                                  if(match_string(z_8, "LARGE"))
                                                                                                                                    {
                                                                                                                                      t = j_34(t);
                                                                                                                                    }
                                                                                                                                  else
                                                                                                                                    {
                                                                                                                                      if(match_string(z_8, "huge"))
                                                                                                                                        {
                                                                                                                                          t = k_34(t);
                                                                                                                                        }
                                                                                                                                      else
                                                                                                                                        {
                                                                                                                                          if(match_string(z_8, "Huge"))
                                                                                                                                            {
                                                                                                                                              t = l_34(t);
                                                                                                                                            }
                                                                                                                                          else
                                                                                                                                            {
                                                                                                                                              if(match_cons(z_8, sym_BOXCOLOR_1))
                                                                                                                                                {
                                                                                                                                                  a_9 = ATgetArgument(z_8, 0);
                                                                                                                                                  t = m_34(t);
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
                                              if(match_cons(c_9, sym_C_0))
                                                {
                                                  t = n_34(t);
                                                }
                                              else
                                                {
                                                  if(match_cons(c_9, sym_R_0))
                                                    {
                                                      t = o_34(t);
                                                    }
                                                  else
                                                    {
                                                      if(match_cons(c_9, sym_L_0))
                                                        {
                                                          t = p_34(t);
                                                        }
                                                      else
                                                        {
                                                          if(match_cons(c_9, sym_EOR_0))
                                                            {
                                                              t = q_34(t);
                                                            }
                                                          else
                                                            {
                                                              if(match_cons(c_9, sym_CSEP_0))
                                                                {
                                                                  t = r_34(t);
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
  return(t);
}
ATerm bottomup_1 (ATerm t, ATerm j_69 (ATerm))
{
  ATerm o_0 (ATerm t)
  {
    t = bottomup_1(t, j_69);
    return(t);
  }
  t = _all(t, o_0);
  t = j_69(t);
  return(t);
}
ATerm latex2text_0 (ATerm t)
{
  ATerm p_0 (ATerm t)
  {
    ATerm h_10 = t;
    int i_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Latex2text_0(t);
        LocalPopChoice(i_10);
      }
    else
      {
        t = h_10;
        {
        }
      }
    return(t);
  }
  t = bottomup_1(t, p_0);
  return(t);
}
ATerm BOXENV_args_0 (ATerm t)
{
  ATerm j_10 = t;
  int k_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_34 = NULL;
      t = term_l_10;
      {
        t = get_config_0(t);
        {
          ATerm v_34 = NULL;
          v_34 = t;
          if(((u_34 != NULL) && (u_34 != v_34)))
            _fail(v_34);
          else
            u_34 = v_34;
          t = (ATerm) ATinsert(ATempty, not_null(u_34));
        }
      }
      LocalPopChoice(k_10);
    }
  else
    {
      t = j_10;
      t = (ATerm) ATempty;
    }
  return(t);
}
ATerm Hd_0 (ATerm t)
{
  ATerm z_34 = NULL,a_35 = NULL,b_35 = NULL;
  z_34 = t;
  y_34 :
  if(((ATgetType(z_34) == AT_LIST) && !(ATisEmpty(z_34))))
    {
      a_35 = ATgetFirst((ATermList) z_34);
      b_35 = (ATerm) ATgetNext((ATermList) z_34);
      t = not_null(a_35);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm flat_list_0 (ATerm t)
{
  ATerm m_10 = t;
  int n_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(n_10);
    }
  else
    {
      t = m_10;
      {
        ATerm o_10 = t;
        int p_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Cons_2(t, Nil_0, flat_list_0);
            LocalPopChoice(p_10);
          }
        else
          {
            t = o_10;
            {
              ATerm q_10 = t;
              int r_10 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm i_35 = NULL,k_35 = NULL;
                  t = Cons_2(t, is_list_0, _id);
                  {
                    ATerm s_10;
                    s_10 = t;
                    {
                      ATerm j_35 = NULL;
                      t = Hd_0(t);
                      {
                        j_35 = t;
                        if(((i_35 != NULL) && (i_35 != j_35)))
                          _fail(j_35);
                        else
                          i_35 = j_35;
                      }
                    }
                    t = s_10;
                    {
                      ATerm l_35 = NULL;
                      t = Tl_0(t);
                      {
                        l_35 = t;
                        if(((k_35 != NULL) && (k_35 != l_35)))
                          _fail(l_35);
                        else
                          k_35 = l_35;
                      }
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(i_35), not_null(k_35));
                        {
                          ATerm t_10 = t;
                          int u_10 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = conc_two_lists_0(t);
                              LocalPopChoice(u_10);
                            }
                          else
                            {
                              t = t_10;
                              t = conc_more_lists_0(t);
                            }
                          t = flat_list_0(t);
                        }
                      }
                    }
                  }
                  LocalPopChoice(r_10);
                }
              else
                {
                  t = q_10;
                  t = Cons_2(t, _id, flat_list_0);
                }
            }
          }
      }
    }
  return(t);
}
ATerm replace_quotes_0 (ATerm t)
{
  ATerm w_35 = NULL,x_35 = NULL,y_35 = NULL;
  w_35 = t;
  u_35 :
  if(((ATgetType(w_35) == AT_LIST) && !(ATisEmpty(w_35))))
    {
      x_35 = ATgetFirst((ATermList) w_35);
      y_35 = (ATerm) ATgetNext((ATermList) w_35);
      v_35 :
      if(match_int(x_35, 34))
        {
          ATerm a_36 = NULL;
          ATerm f_36 = NULL;
          t = not_null(y_35);
          {
            ATerm q_0 (ATerm t)
            {
              ATerm b_36 = NULL,c_36 = NULL,d_36 = NULL;
              b_36 = t;
              r_35 :
              if(((ATgetType(b_36) == AT_LIST) && !(ATisEmpty(b_36))))
                {
                  c_36 = ATgetFirst((ATermList) b_36);
                  d_36 = (ATerm) ATgetNext((ATermList) b_36);
                  s_35 :
                  if(match_int(c_36, 34))
                    {
                      t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(d_36)), term_v_10), term_v_10);
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
            t = at_suffix_1(t, q_0);
            {
              f_36 = t;
              if(((a_36 != NULL) && (a_36 != f_36)))
                _fail(f_36);
              else
                a_36 = f_36;
            }
          }
          t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(a_36)), term_w_10), term_w_10);
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
ATerm listtd_1 (ATerm t, ATerm s_76 (ATerm))
{
  ATerm j_36 (ATerm t)
  {
    t = s_76(t);
    {
      ATerm x_10 = t;
      int y_10 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Nil_0(t);
          LocalPopChoice(y_10);
        }
      else
        {
          t = x_10;
          t = Cons_2(t, _id, j_36);
        }
    }
    return(t);
  }
  t = j_36(t);
  return(t);
}
ATerm string_as_chars_1 (ATerm t, ATerm l_85 (ATerm))
{
  t = explode_string_0(t);
  {
    t = l_85(t);
    t = implode_string_0(t);
  }
  return(t);
}
ATerm latex_string_0 (ATerm t)
{
  ATerm z_10 = t;
  int a_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_37 = NULL;
      ATerm c_37 = NULL;
      c_37 = t;
      if(((b_37 != NULL) && (b_37 != c_37)))
        _fail(c_37);
      else
        b_37 = c_37;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_b_11, not_null(b_37));
        t = table_get_0(t);
      }
      LocalPopChoice(a_11);
    }
  else
    {
      t = z_10;
      {
        ATerm r_0 (ATerm t)
        {
          ATerm s_0 (ATerm t)
          {
            ATerm c_11 = t;
            int d_11 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = replace_quotes_0(t);
                LocalPopChoice(d_11);
              }
            else
              {
                t = c_11;
                {
                }
              }
            return(t);
          }
          t = listtd_1(t, s_0);
          {
            ATerm t_0 (ATerm t)
            {
              ATerm e_11 = t;
              int f_11 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm d_37 = NULL;
                  d_37 = t;
                  a_37 :
                  if(match_int(d_37, 32))
                    {
                      t = term_g_11;
                      t = explode_string_0(t);
                    }
                  else
                    {
                      if(match_int(d_37, 35))
                        {
                          t = term_h_11;
                          t = explode_string_0(t);
                        }
                      else
                        {
                          if(match_int(d_37, 36))
                            {
                              t = term_i_11;
                              t = explode_string_0(t);
                            }
                          else
                            {
                              if(match_int(d_37, 37))
                                {
                                  t = term_j_11;
                                  t = explode_string_0(t);
                                }
                              else
                                {
                                  if(match_int(d_37, 38))
                                    {
                                      t = term_k_11;
                                      t = explode_string_0(t);
                                    }
                                  else
                                    {
                                      if(match_int(d_37, 45))
                                        {
                                          t = term_l_11;
                                          t = explode_string_0(t);
                                        }
                                      else
                                        {
                                          if(match_int(d_37, 60))
                                            {
                                              t = term_m_11;
                                              t = explode_string_0(t);
                                            }
                                          else
                                            {
                                              if(match_int(d_37, 62))
                                                {
                                                  t = term_n_11;
                                                  t = explode_string_0(t);
                                                }
                                              else
                                                {
                                                  if(match_int(d_37, 92))
                                                    {
                                                      t = term_o_11;
                                                      t = explode_string_0(t);
                                                    }
                                                  else
                                                    {
                                                      if(match_int(d_37, 94))
                                                        {
                                                          t = term_p_11;
                                                          t = explode_string_0(t);
                                                        }
                                                      else
                                                        {
                                                          if(match_int(d_37, 95))
                                                            {
                                                              t = term_q_11;
                                                              t = explode_string_0(t);
                                                            }
                                                          else
                                                            {
                                                              if(match_int(d_37, 123))
                                                                {
                                                                  t = term_r_11;
                                                                  t = explode_string_0(t);
                                                                }
                                                              else
                                                                {
                                                                  if(match_int(d_37, 124))
                                                                    {
                                                                      t = term_s_11;
                                                                      t = explode_string_0(t);
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_int(d_37, 125))
                                                                        {
                                                                          t = term_t_11;
                                                                          t = explode_string_0(t);
                                                                        }
                                                                      else
                                                                        {
                                                                          if(match_int(d_37, 126))
                                                                            {
                                                                              t = term_u_11;
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
                  LocalPopChoice(f_11);
                }
              else
                {
                  t = e_11;
                  {
                  }
                }
              return(t);
            }
            t = map_1(t, t_0);
            t = flat_list_0(t);
          }
          return(t);
        }
        t = string_as_chars_1(t, r_0);
      }
    }
  return(t);
}
ATerm remove_trailing_1 (ATerm t, ATerm r_67 (ATerm))
{
  ATerm a_38 (ATerm t)
  {
    ATerm v_11 = t;
    int w_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_37 = NULL,x_37 = NULL,y_37 = NULL;
        t = Cons_2(t, r_67, _id);
        {
          w_37 = t;
          v_37 :
          if(((ATgetType(w_37) == AT_LIST) && !(ATisEmpty(w_37))))
            {
              x_37 = ATgetFirst((ATermList) w_37);
              y_37 = (ATerm) ATgetNext((ATermList) w_37);
              {
                t = not_null(y_37);
                t = a_38(t);
              }
            }
          else
            {
              _fail(t);
            }
        }
        LocalPopChoice(w_11);
      }
    else
      {
        t = v_11;
        {
        }
      }
    return(t);
  }
  t = a_38(t);
  return(t);
}
ATerm at_suffix_1 (ATerm t, ATerm e_76 (ATerm))
{
  ATerm c_38 (ATerm t)
  {
    ATerm x_11 = t;
    int y_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_76(t);
        LocalPopChoice(y_11);
      }
    else
      {
        t = x_11;
        t = Cons_2(t, _id, c_38);
      }
    return(t);
  }
  t = c_38(t);
  return(t);
}
ATerm LatexComment_0 (ATerm t)
{
  ATerm i_38 = NULL;
  ATerm u_0 (ATerm t)
  {
    ATerm h_38 = NULL;
    h_38 = t;
    d_38 :
    if(!(match_int(h_38, 9)))
      {
        if(!(match_int(h_38, 32)))
          {
            _fail(t);
          }
      }
    return(t);
  }
  t = remove_trailing_1(t, u_0);
  {
    ATerm z_11 = t;
    int a_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_0 (ATerm t)
        {
          ATerm y_0 (ATerm t)
          {
            ATerm j_38 = NULL;
            j_38 = t;
            e_38 :
            if(!(match_int(j_38, 37)))
              {
                _fail(t);
              }
            return(t);
          }
          ATerm z_0 (ATerm t)
          {
            ATerm a_1 (ATerm t)
            {
              ATerm k_38 = NULL;
              k_38 = t;
              f_38 :
              if(!(match_int(k_38, 37)))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm c_1 (ATerm t)
            {
              ATerm l_38 = NULL;
              l_38 = t;
              if(((i_38 != NULL) && (i_38 != l_38)))
                _fail(l_38);
              else
                i_38 = l_38;
              return(t);
            }
            t = Cons_2(t, a_1, c_1);
            return(t);
          }
          t = Cons_2(t, y_0, z_0);
          t = not_null(i_38);
          return(t);
        }
        t = at_suffix_1(t, w_0);
        LocalPopChoice(a_12);
      }
    else
      {
        t = z_11;
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
    ATerm e_1 (ATerm t)
    {
      t = (ATerm) ATempty;
      return(t);
    }
    t = reverse_acc_2(t, _id, e_1);
    {
      ATerm f_1 (ATerm t)
      {
        t = (ATerm) ATempty;
        return(t);
      }
      t = split_2(t, _id, f_1);
      {
        ATerm x_39 (ATerm t)
        {
          ATerm z_38 = NULL,a_39 = NULL,b_39 = NULL,c_39 = NULL,d_39 = NULL;
          ATerm a_40 (ATerm t)
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(c_39), (ATerm) ATinsert(CheckATermList(not_null(d_39)), not_null(b_39)));
            t = x_39(t);
            return(t);
          }
          z_38 = t;
          t_38 :
          if(match_cons(z_38, sym__2))
            {
              a_39 = ATgetArgument(z_38, 0);
              d_39 = ATgetArgument(z_38, 1);
              u_38 :
              if(((ATgetType(a_39) == AT_LIST) && ATisEmpty(a_39)))
                {
                  {
                    ATerm h_39 = NULL;
                    ATerm i_39 = NULL;
                    t = not_null(d_39);
                    {
                      t = LatexComment_0(t);
                      {
                        i_39 = t;
                        if(((h_39 != NULL) && (h_39 != i_39)))
                          _fail(i_39);
                        else
                          h_39 = i_39;
                      }
                    }
                    t = (ATerm) ATinsert(ATempty, not_null(h_39));
                  }
                }
              else
                {
                  if(((ATgetType(a_39) == AT_LIST) && !(ATisEmpty(a_39))))
                    {
                      b_39 = ATgetFirst((ATermList) a_39);
                      c_39 = (ATerm) ATgetNext((ATermList) a_39);
                      v_38 :
                      if(match_int(b_39, 10))
                        {
                          ATerm b_12 = t;
                          int c_12 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm m_39 = NULL,o_39 = NULL;
                              ATerm d_12;
                              d_12 = t;
                              {
                                ATerm n_39 = NULL;
                                t = not_null(d_39);
                                {
                                  t = LatexComment_0(t);
                                  {
                                    n_39 = t;
                                    if(((m_39 != NULL) && (m_39 != n_39)))
                                      _fail(n_39);
                                    else
                                      m_39 = n_39;
                                  }
                                }
                              }
                              t = d_12;
                              {
                                ATerm p_39 = NULL;
                                t = (ATerm) ATmakeAppl(sym__2, not_null(c_39), (ATerm) ATempty);
                                {
                                  t = x_39(t);
                                  {
                                    p_39 = t;
                                    if(((o_39 != NULL) && (o_39 != p_39)))
                                      _fail(p_39);
                                    else
                                      o_39 = p_39;
                                  }
                                }
                                t = (ATerm) ATinsert(CheckATermList(not_null(o_39)), not_null(m_39));
                              }
                              LocalPopChoice(c_12);
                            }
                          else
                            {
                              t = b_12;
                              t = a_40(t);
                            }
                        }
                      else
                        {
                          t = a_40(t);
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
        t = x_39(t);
        {
          ATerm g_1 (ATerm t)
          {
            ATerm t_39 = NULL;
            t_39 = t;
            w_38 :
            if(!(match_string(t_39, "")))
              {
                _fail(t);
              }
            return(t);
          }
          t = remove_trailing_1(t, g_1);
          {
            ATerm h_1 (ATerm t)
            {
              t = (ATerm) ATempty;
              return(t);
            }
            t = reverse_acc_2(t, _id, h_1);
            {
              ATerm i_1 (ATerm t)
              {
                ATerm u_39 = NULL;
                u_39 = t;
                x_38 :
                if(!(match_string(u_39, "")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              t = remove_trailing_1(t, i_1);
              {
                ATerm j_1 (ATerm t)
                {
                  ATerm v_39 = NULL;
                  v_39 = t;
                  t = (ATerm) ATinsert(ATinsert(ATempty, term_e_12), not_null(v_39));
                  return(t);
                }
                t = map_1(t, j_1);
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
  ATerm m_40 = NULL;
  m_40 = t;
  l_40 :
  if(match_cons(m_40, sym_MATH_0))
    {
      ATerm o_40 = NULL,q_40 = NULL;
      ATerm f_12;
      f_12 = t;
      {
        ATerm p_40 = NULL;
        t = SSLgetAnnotations(not_null(m_40));
        {
          p_40 = t;
          if(((o_40 != NULL) && (o_40 != p_40)))
            _fail(p_40);
          else
            o_40 = p_40;
        }
      }
      t = f_12;
      {
        ATerm r_40 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_MATH_0), not_null(o_40));
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
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm NUM_0 (ATerm t)
{
  ATerm z_40 = NULL;
  z_40 = t;
  y_40 :
  if(match_cons(z_40, sym_NUM_0))
    {
      ATerm b_41 = NULL,d_41 = NULL;
      ATerm g_12;
      g_12 = t;
      {
        ATerm c_41 = NULL;
        t = SSLgetAnnotations(not_null(z_40));
        {
          c_41 = t;
          if(((b_41 != NULL) && (b_41 != c_41)))
            _fail(c_41);
          else
            b_41 = c_41;
        }
      }
      t = g_12;
      {
        ATerm e_41 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_NUM_0), not_null(b_41));
        {
          e_41 = t;
          if(((d_41 != NULL) && (d_41 != e_41)))
            _fail(e_41);
          else
            d_41 = e_41;
        }
        t = not_null(d_41);
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
  ATerm m_41 = NULL;
  m_41 = t;
  l_41 :
  if(match_cons(m_41, sym_VAR_0))
    {
      ATerm o_41 = NULL,q_41 = NULL;
      ATerm h_12;
      h_12 = t;
      {
        ATerm p_41 = NULL;
        t = SSLgetAnnotations(not_null(m_41));
        {
          p_41 = t;
          if(((o_41 != NULL) && (o_41 != p_41)))
            _fail(p_41);
          else
            o_41 = p_41;
        }
      }
      t = h_12;
      {
        ATerm r_41 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_VAR_0), not_null(o_41));
        {
          r_41 = t;
          if(((q_41 != NULL) && (q_41 != r_41)))
            _fail(r_41);
          else
            q_41 = r_41;
        }
        t = not_null(q_41);
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
  ATerm b_42 = NULL;
  b_42 = t;
  a_42 :
  if(match_cons(b_42, sym_KW_0))
    {
      ATerm g_42 = NULL,i_42 = NULL;
      ATerm i_12;
      i_12 = t;
      {
        ATerm h_42 = NULL;
        t = SSLgetAnnotations(not_null(b_42));
        {
          h_42 = t;
          if(((g_42 != NULL) && (g_42 != h_42)))
            _fail(h_42);
          else
            g_42 = h_42;
        }
      }
      t = i_12;
      {
        ATerm j_42 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_KW_0), not_null(g_42));
        {
          j_42 = t;
          if(((i_42 != NULL) && (i_42 != j_42)))
            _fail(j_42);
          else
            i_42 = j_42;
        }
        t = not_null(i_42);
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
  ATerm t_42 = NULL;
  t_42 = t;
  s_42 :
  if(match_cons(t_42, sym_CL_0))
    {
      ATerm v_42 = NULL,x_42 = NULL;
      ATerm j_12;
      j_12 = t;
      {
        ATerm w_42 = NULL;
        t = SSLgetAnnotations(not_null(t_42));
        {
          w_42 = t;
          if(((v_42 != NULL) && (v_42 != w_42)))
            _fail(w_42);
          else
            v_42 = w_42;
        }
      }
      t = j_12;
      {
        ATerm y_42 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_CL_0), not_null(v_42));
        {
          y_42 = t;
          if(((x_42 != NULL) && (x_42 != y_42)))
            _fail(y_42);
          else
            x_42 = y_42;
        }
        t = not_null(x_42);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm FFID_2 (ATerm t, ATerm s_59 (ATerm), ATerm t_59 (ATerm))
{
  ATerm v_43 = NULL,w_43 = NULL,x_43 = NULL;
  v_43 = t;
  j_43 :
  if(match_cons(v_43, sym_FFID_2))
    {
      w_43 = ATgetArgument(v_43, 0);
      x_43 = ATgetArgument(v_43, 1);
      {
        ATerm b_44 = NULL,d_44 = NULL;
        ATerm c_44 = NULL;
        t = SSLgetAnnotations(not_null(v_43));
        {
          c_44 = t;
          if(((b_44 != NULL) && (b_44 != c_44)))
            _fail(c_44);
          else
            b_44 = c_44;
        }
        {
          t = not_null(w_43);
          {
            ATerm f_44 = NULL;
            t = s_59(t);
            {
              d_44 = t;
              {
                t = not_null(x_43);
                {
                  ATerm h_44 = NULL;
                  t = t_59(t);
                  {
                    f_44 = t;
                    {
                      ATerm i_44 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FFID_2, not_null(d_44), not_null(f_44)), not_null(b_44));
                      {
                        i_44 = t;
                        if(((h_44 != NULL) && (h_44 != i_44)))
                          _fail(i_44);
                        else
                          h_44 = i_44;
                      }
                      t = not_null(h_44);
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
  ATerm b_45 = NULL;
  b_45 = t;
  a_45 :
  if(match_cons(b_45, sym_SZ_0))
    {
      ATerm e_45 = NULL,g_45 = NULL;
      ATerm k_12;
      k_12 = t;
      {
        ATerm f_45 = NULL;
        t = SSLgetAnnotations(not_null(b_45));
        {
          f_45 = t;
          if(((e_45 != NULL) && (e_45 != f_45)))
            _fail(f_45);
          else
            e_45 = f_45;
        }
      }
      t = k_12;
      {
        ATerm h_45 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SZ_0), not_null(e_45));
        {
          h_45 = t;
          if(((g_45 != NULL) && (g_45 != h_45)))
            _fail(h_45);
          else
            g_45 = h_45;
        }
        t = not_null(g_45);
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
  ATerm p_45 = NULL;
  p_45 = t;
  o_45 :
  if(match_cons(p_45, sym_SH_0))
    {
      ATerm r_45 = NULL,t_45 = NULL;
      ATerm l_12;
      l_12 = t;
      {
        ATerm s_45 = NULL;
        t = SSLgetAnnotations(not_null(p_45));
        {
          s_45 = t;
          if(((r_45 != NULL) && (r_45 != s_45)))
            _fail(s_45);
          else
            r_45 = s_45;
        }
      }
      t = l_12;
      {
        ATerm u_45 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SH_0), not_null(r_45));
        {
          u_45 = t;
          if(((t_45 != NULL) && (t_45 != u_45)))
            _fail(u_45);
          else
            t_45 = u_45;
        }
        t = not_null(t_45);
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
  ATerm c_46 = NULL;
  c_46 = t;
  b_46 :
  if(match_cons(c_46, sym_SE_0))
    {
      ATerm e_46 = NULL,g_46 = NULL;
      ATerm m_12;
      m_12 = t;
      {
        ATerm f_46 = NULL;
        t = SSLgetAnnotations(not_null(c_46));
        {
          f_46 = t;
          if(((e_46 != NULL) && (e_46 != f_46)))
            _fail(f_46);
          else
            e_46 = f_46;
        }
      }
      t = m_12;
      {
        ATerm h_46 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SE_0), not_null(e_46));
        {
          h_46 = t;
          if(((g_46 != NULL) && (g_46 != h_46)))
            _fail(h_46);
          else
            g_46 = h_46;
        }
        t = not_null(g_46);
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
  ATerm p_46 = NULL;
  p_46 = t;
  o_46 :
  if(match_cons(p_46, sym_FM_0))
    {
      ATerm r_46 = NULL,t_46 = NULL;
      ATerm n_12;
      n_12 = t;
      {
        ATerm s_46 = NULL;
        t = SSLgetAnnotations(not_null(p_46));
        {
          s_46 = t;
          if(((r_46 != NULL) && (r_46 != s_46)))
            _fail(s_46);
          else
            r_46 = s_46;
        }
      }
      t = n_12;
      {
        ATerm u_46 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FM_0), not_null(r_46));
        {
          u_46 = t;
          if(((t_46 != NULL) && (t_46 != u_46)))
            _fail(u_46);
          else
            t_46 = u_46;
        }
        t = not_null(t_46);
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
  ATerm k_1 (ATerm t)
  {
    ATerm o_12 = t;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = o_12;
      }
    return(t);
  }
  t = filter_1(t, k_1);
  {
    ATerm l_1 (ATerm t)
    {
      t = term_p_12;
      return(t);
    }
    t = separate_by_1(t, l_1);
  }
  return(t);
}
ATerm hs_length_0 (ATerm t)
{
  ATerm q_12 = t;
  int r_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_1 (ATerm t)
      {
        ATerm z_46 = NULL;
        z_46 = t;
        y_46 :
        if(!(match_cons(z_46, sym_HS_0)))
          {
            _fail(t);
          }
        return(t);
      }
      t = SOpt_value_1(t, m_1);
      LocalPopChoice(r_12);
    }
  else
    {
      t = q_12;
      t = term_s_12;
    }
  return(t);
}
ATerm Hspace_0 (ATerm t)
{
  t = hs_length_0(t);
  t = int_to_string_0(t);
  return(t);
}
ATerm separate_by_0 (ATerm t)
{
  ATerm d_47 = NULL,e_47 = NULL,f_47 = NULL;
  d_47 = t;
  c_47 :
  if(match_cons(d_47, sym__2))
    {
      e_47 = ATgetArgument(d_47, 0);
      f_47 = ATgetArgument(d_47, 1);
      {
        t = not_null(f_47);
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
              {
                ATerm n_1 (ATerm t)
                {
                  ATerm v_12 = t;
                  int w_12 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = Nil_0(t);
                      LocalPopChoice(w_12);
                    }
                  else
                    {
                      t = v_12;
                      {
                        ATerm i_47 = NULL;
                        t = Cons_2(t, _id, n_1);
                        {
                          ATerm j_47 = NULL;
                          j_47 = t;
                          if(((i_47 != NULL) && (i_47 != j_47)))
                            _fail(j_47);
                          else
                            i_47 = j_47;
                          t = (ATerm) ATinsert(CheckATermList(not_null(i_47)), not_null(e_47));
                        }
                      }
                    }
                  return(t);
                }
                t = Cons_2(t, _id, n_1);
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
ATerm if_verbose2_1 (ATerm t, ATerm g_89 (ATerm))
{
  ATerm x_12 = t;
  int y_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_12;
      z_12 = t;
      {
        ATerm q_47 = NULL;
        ATerm s_47 = NULL;
        t = term_a_13;
        {
          t = get_config_0(t);
          {
            s_47 = t;
            if(((q_47 != NULL) && (q_47 != s_47)))
              _fail(s_47);
            else
              q_47 = s_47;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(q_47), term_b_13);
          t = geq_0(t);
        }
      }
      t = z_12;
      t = g_89(t);
      LocalPopChoice(y_12);
    }
  else
    {
      t = x_12;
      {
      }
    }
  return(t);
}
ATerm dissuader_1 (ATerm t, ATerm r_86 (ATerm))
{
  ATerm c_13;
  c_13 = t;
  {
    ATerm o_1 (ATerm t)
    {
      t = r_86(t);
      {
        ATerm p_1 (ATerm t)
        {
          t = term_d_13;
          return(t);
        }
        t = debug_1(t, p_1);
      }
      return(t);
    }
    t = if_verbose2_1(t, o_1);
  }
  t = c_13;
  return(t);
}
ATerm separate_by_1 (ATerm t, ATerm h_75 (ATerm))
{
  ATerm w_47 = NULL,y_47 = NULL;
  ATerm q_1 (ATerm t)
  {
    t = term_e_13;
    return(t);
  }
  t = dissuader_1(t, q_1);
  {
    ATerm f_13;
    f_13 = t;
    {
      ATerm x_47 = NULL;
      x_47 = t;
      if(((w_47 != NULL) && (w_47 != x_47)))
        _fail(x_47);
      else
        w_47 = x_47;
    }
    t = f_13;
    {
      ATerm z_47 = NULL;
      t = term_c_7;
      {
        t = h_75(t);
        {
          z_47 = t;
          if(((y_47 != NULL) && (y_47 != z_47)))
            _fail(z_47);
          else
            y_47 = z_47;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(y_47), not_null(w_47));
        t = separate_by_0(t);
      }
    }
  }
  return(t);
}
ATerm filter_1 (ATerm t, ATerm c_83 (ATerm))
{
  ATerm g_13 = t;
  int j_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(j_13);
    }
  else
    {
      t = g_13;
      {
        ATerm k_13 = t;
        int l_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_1 (ATerm t)
            {
              t = filter_1(t, c_83);
              return(t);
            }
            t = Cons_2(t, c_83, r_1);
            LocalPopChoice(l_13);
          }
        else
          {
            t = k_13;
            {
              ATerm f_48 = NULL,g_48 = NULL,h_48 = NULL;
              f_48 = t;
              e_48 :
              if(((ATgetType(f_48) == AT_LIST) && !(ATisEmpty(f_48))))
                {
                  g_48 = ATgetFirst((ATermList) f_48);
                  h_48 = (ATerm) ATgetNext((ATermList) f_48);
                  {
                    t = not_null(h_48);
                    t = filter_1(t, c_83);
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
ATerm is_length_0 (ATerm t)
{
  ATerm m_13 = t;
  int n_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_1 (ATerm t)
      {
        ATerm m_48 = NULL;
        m_48 = t;
        l_48 :
        if(!(match_cons(m_48, sym_IS_0)))
          {
            _fail(t);
          }
        return(t);
      }
      t = SOpt_value_1(t, s_1);
      LocalPopChoice(n_13);
    }
  else
    {
      t = m_13;
      t = term_o_13;
    }
  return(t);
}
ATerm Ispace_0 (ATerm t)
{
  t = is_length_0(t);
  t = int_to_string_0(t);
  return(t);
}
ATerm int_to_string_0 (ATerm t)
{
  ATerm q_48 = NULL;
  q_48 = t;
  t = SSL_int_to_string(not_null(q_48));
  return(t);
}
ATerm SOpt_2 (ATerm t, ATerm o_60 (ATerm), ATerm p_60 (ATerm))
{
  ATerm j_49 = NULL,k_49 = NULL,l_49 = NULL;
  j_49 = t;
  i_49 :
  if(match_cons(j_49, sym_SOpt_2))
    {
      k_49 = ATgetArgument(j_49, 0);
      l_49 = ATgetArgument(j_49, 1);
      {
        ATerm t_49 = NULL,v_49 = NULL;
        ATerm u_49 = NULL;
        t = SSLgetAnnotations(not_null(j_49));
        {
          u_49 = t;
          if(((t_49 != NULL) && (t_49 != u_49)))
            _fail(u_49);
          else
            t_49 = u_49;
        }
        {
          t = not_null(k_49);
          {
            ATerm x_49 = NULL;
            t = o_60(t);
            {
              v_49 = t;
              {
                t = not_null(l_49);
                {
                  ATerm z_49 = NULL;
                  t = p_60(t);
                  {
                    x_49 = t;
                    {
                      ATerm a_50 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SOpt_2, not_null(v_49), not_null(x_49)), not_null(t_49));
                      {
                        a_50 = t;
                        if(((z_49 != NULL) && (z_49 != a_50)))
                          _fail(a_50);
                        else
                          z_49 = a_50;
                      }
                      t = not_null(z_49);
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
ATerm SOpt_value_1 (ATerm t, ATerm m_67 (ATerm))
{
  ATerm h_50 = NULL;
  ATerm t_1 (ATerm t)
  {
    ATerm u_1 (ATerm t)
    {
      ATerm i_50 = NULL;
      i_50 = t;
      if(((h_50 != NULL) && (h_50 != i_50)))
        _fail(i_50);
      else
        h_50 = i_50;
      return(t);
    }
    t = SOpt_2(t, m_67, u_1);
    return(t);
  }
  t = fetch_1(t, t_1);
  {
    t = not_null(h_50);
    t = string_to_int_0(t);
  }
  return(t);
}
ATerm vs_length_0 (ATerm t)
{
  ATerm p_13 = t;
  int q_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_1 (ATerm t)
      {
        ATerm m_50 = NULL;
        m_50 = t;
        k_50 :
        if(!(match_cons(m_50, sym_VS_0)))
          {
            _fail(t);
          }
        return(t);
      }
      t = SOpt_value_1(t, v_1);
      LocalPopChoice(q_13);
    }
  else
    {
      t = p_13;
      t = term_o_13;
    }
  return(t);
}
ATerm Vspace_0 (ATerm t)
{
  t = vs_length_0(t);
  t = int_to_string_0(t);
  return(t);
}
ATerm C_2 (ATerm t, ATerm k_59 (ATerm), ATerm l_59 (ATerm))
{
  ATerm t_50 = NULL,u_50 = NULL,v_50 = NULL;
  t_50 = t;
  s_50 :
  if(match_cons(t_50, sym_C_2))
    {
      u_50 = ATgetArgument(t_50, 0);
      v_50 = ATgetArgument(t_50, 1);
      {
        ATerm z_50 = NULL,b_51 = NULL;
        ATerm a_51 = NULL;
        t = SSLgetAnnotations(not_null(t_50));
        {
          a_51 = t;
          if(((z_50 != NULL) && (z_50 != a_51)))
            _fail(a_51);
          else
            z_50 = a_51;
        }
        {
          t = not_null(u_50);
          {
            ATerm d_51 = NULL;
            t = k_59(t);
            {
              b_51 = t;
              {
                t = not_null(v_50);
                {
                  ATerm f_51 = NULL;
                  t = l_59(t);
                  {
                    d_51 = t;
                    {
                      ATerm g_51 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_C_2, not_null(b_51), not_null(d_51)), not_null(z_50));
                      {
                        g_51 = t;
                        if(((f_51 != NULL) && (f_51 != g_51)))
                          _fail(g_51);
                        else
                          f_51 = g_51;
                      }
                      t = not_null(f_51);
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
  ATerm x_51 = NULL,y_51 = NULL,z_51 = NULL;
  x_51 = t;
  w_51 :
  if(match_cons(x_51, sym_R_2))
    {
      y_51 = ATgetArgument(x_51, 0);
      z_51 = ATgetArgument(x_51, 1);
      {
        t = not_null(z_51);
        {
          ATerm m_52 (ATerm t)
          {
            ATerm b_52 = NULL,c_52 = NULL,d_52 = NULL;
            ATerm r_13 = t;
            int s_13 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                LocalPopChoice(s_13);
              }
            else
              {
                t = r_13;
                {
                  ATerm t_13 = t;
                  int u_13 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = Cons_2(t, _id, Nil_0);
                      LocalPopChoice(u_13);
                    }
                  else
                    {
                      t = t_13;
                      {
                        ATerm v_13 = t;
                        int w_13 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm w_1 (ATerm t)
                            {
                              t = C_2(t, _id, _id);
                              return(t);
                            }
                            ATerm x_1 (ATerm t)
                            {
                              t = Cons_2(t, _id, m_52);
                              return(t);
                            }
                            t = Cons_2(t, w_1, x_1);
                            LocalPopChoice(w_13);
                          }
                        else
                          {
                            t = v_13;
                            {
                              ATerm x_13 = t;
                              int y_13 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm y_1 (ATerm t)
                                  {
                                    ATerm z_1 (ATerm t)
                                    {
                                      t = C_2(t, _id, _id);
                                      return(t);
                                    }
                                    t = Cons_2(t, z_1, m_52);
                                    return(t);
                                  }
                                  t = Cons_2(t, _id, y_1);
                                  LocalPopChoice(y_13);
                                }
                              else
                                {
                                  t = x_13;
                                  {
                                    ATerm e_52 = NULL,f_52 = NULL,g_52 = NULL,h_52 = NULL,i_52 = NULL;
                                    e_52 = t;
                                    u_51 :
                                    if(((ATgetType(e_52) == AT_LIST) && !(ATisEmpty(e_52))))
                                      {
                                        f_52 = ATgetFirst((ATermList) e_52);
                                        g_52 = (ATerm) ATgetNext((ATermList) e_52);
                                        v_51 :
                                        if(((ATgetType(g_52) == AT_LIST) && !(ATisEmpty(g_52))))
                                          {
                                            h_52 = ATgetFirst((ATermList) g_52);
                                            i_52 = (ATerm) ATgetNext((ATermList) g_52);
                                            {
                                              ATerm j_52 = NULL;
                                              if(((b_52 != NULL) && (b_52 != f_52)))
                                                _fail(f_52);
                                              else
                                                b_52 = f_52;
                                              {
                                                if(((c_52 != NULL) && (c_52 != h_52)))
                                                  _fail(h_52);
                                                else
                                                  c_52 = h_52;
                                                {
                                                  if(((d_52 != NULL) && (d_52 != i_52)))
                                                    _fail(i_52);
                                                  else
                                                    d_52 = i_52;
                                                  {
                                                    ATerm k_52 = NULL;
                                                    t = (ATerm) ATinsert(CheckATermList(not_null(d_52)), not_null(c_52));
                                                    {
                                                      t = m_52(t);
                                                      {
                                                        k_52 = t;
                                                        if(((j_52 != NULL) && (j_52 != k_52)))
                                                          _fail(k_52);
                                                        else
                                                          j_52 = k_52;
                                                      }
                                                    }
                                                    t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(j_52)), term_z_13), not_null(b_52));
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
          t = m_52(t);
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
  ATerm s_52 = NULL,t_52 = NULL;
  ATerm a_14 = t;
  int b_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_52 = NULL,c_53 = NULL,d_53 = NULL;
      u_52 = t;
      r_52 :
      if(match_cons(u_52, sym_LBL_2))
        {
          c_53 = ATgetArgument(u_52, 0);
          d_53 = ATgetArgument(u_52, 1);
          {
            ATerm e_53 = NULL;
            if(((s_52 != NULL) && (s_52 != c_53)))
              _fail(c_53);
            else
              s_52 = c_53;
            {
              if(((t_52 != NULL) && (t_52 != d_53)))
                _fail(d_53);
              else
                t_52 = d_53;
              {
                t = not_null(t_52);
                {
                  t = table_row_0(t);
                  {
                    ATerm f_53 = NULL;
                    t = not_null(t_52);
                    {
                      t = table_row_0(t);
                      {
                        f_53 = t;
                        if(((e_53 != NULL) && (e_53 != f_53)))
                          _fail(f_53);
                        else
                          e_53 = f_53;
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym_LBLBOX_2, not_null(s_52), not_null(e_53));
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
      LocalPopChoice(b_14);
    }
  else
    {
      t = a_14;
      t = table_row_0(t);
    }
  return(t);
}
ATerm at_last_1 (ATerm t, ATerm l_76 (ATerm))
{
  ATerm i_53 (ATerm t)
  {
    ATerm c_14 = t;
    int d_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, Nil_0);
        t = l_76(t);
        LocalPopChoice(d_14);
      }
    else
      {
        t = c_14;
        t = Cons_2(t, _id, i_53);
      }
    return(t);
  }
  t = i_53(t);
  return(t);
}
ATerm table_def_0 (ATerm t)
{
  ATerm v_53 = NULL,w_53 = NULL;
  v_53 = t;
  u_53 :
  if(match_cons(v_53, sym_AOPTIONS_1))
    {
      w_53 = ATgetArgument(v_53, 0);
      {
        t = not_null(w_53);
        {
          ATerm a_2 (ATerm t)
          {
            ATerm y_53 = NULL,z_53 = NULL;
            y_53 = t;
            t_53 :
            if(match_cons(y_53, sym_AL_1))
              {
                z_53 = ATgetArgument(y_53, 0);
                {
                  ATerm b_54 = NULL;
                  ATerm c_54 = NULL,e_54 = NULL;
                  ATerm d_54 = NULL;
                  t = not_null(z_53);
                  {
                    t = Hspace_0(t);
                    {
                      t = string_to_int_0(t);
                      {
                        d_54 = t;
                        if(((c_54 != NULL) && (c_54 != d_54)))
                          _fail(d_54);
                        else
                          c_54 = d_54;
                      }
                    }
                  }
                  {
                    t = (ATerm) ATmakeAppl(sym__2, not_null(c_54), term_p_12);
                    {
                      t = copy_0(t);
                      {
                        e_54 = t;
                        if(((b_54 != NULL) && (b_54 != e_54)))
                          _fail(e_54);
                        else
                          b_54 = e_54;
                      }
                    }
                  }
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(b_54)), term_e_14);
                }
              }
            else
              {
                if(match_cons(y_53, sym_AC_1))
                  {
                    z_53 = ATgetArgument(y_53, 0);
                    {
                      ATerm g_54 = NULL;
                      ATerm h_54 = NULL,j_54 = NULL;
                      ATerm i_54 = NULL;
                      t = not_null(z_53);
                      {
                        t = Hspace_0(t);
                        {
                          t = string_to_int_0(t);
                          {
                            i_54 = t;
                            if(((h_54 != NULL) && (h_54 != i_54)))
                              _fail(i_54);
                            else
                              h_54 = i_54;
                          }
                        }
                      }
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(h_54), term_p_12);
                        {
                          t = copy_0(t);
                          {
                            j_54 = t;
                            if(((g_54 != NULL) && (g_54 != j_54)))
                              _fail(j_54);
                            else
                              g_54 = j_54;
                          }
                        }
                      }
                      t = (ATerm) ATinsert(ATinsert(ATempty, not_null(g_54)), term_f_14);
                    }
                  }
                else
                  {
                    if(match_cons(y_53, sym_AR_1))
                      {
                        z_53 = ATgetArgument(y_53, 0);
                        {
                          ATerm l_54 = NULL;
                          ATerm m_54 = NULL,o_54 = NULL;
                          ATerm n_54 = NULL;
                          t = not_null(z_53);
                          {
                            t = Hspace_0(t);
                            {
                              t = string_to_int_0(t);
                              {
                                n_54 = t;
                                if(((m_54 != NULL) && (m_54 != n_54)))
                                  _fail(n_54);
                                else
                                  m_54 = n_54;
                              }
                            }
                          }
                          {
                            t = (ATerm) ATmakeAppl(sym__2, not_null(m_54), term_p_12);
                            {
                              t = copy_0(t);
                              {
                                o_54 = t;
                                if(((l_54 != NULL) && (l_54 != o_54)))
                                  _fail(o_54);
                                else
                                  l_54 = o_54;
                              }
                            }
                          }
                          t = (ATerm) ATinsert(ATinsert(ATempty, not_null(l_54)), term_g_14);
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
          t = map_1(t, a_2);
          {
            ATerm d_2 (ATerm t)
            {
              t = (ATerm) ATinsert(ATempty, term_z_13);
              return(t);
            }
            t = separate_by_1(t, d_2);
            {
              t = concat_0(t);
              {
                ATerm e_2 (ATerm t)
                {
                  t = (ATerm) ATinsert(ATempty, term_h_14);
                  return(t);
                }
                t = at_last_1(t, e_2);
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
  ATerm b_55 = NULL,c_55 = NULL,d_55 = NULL;
  b_55 = t;
  a_55 :
  if(match_cons(b_55, sym__2))
    {
      c_55 = ATgetArgument(b_55, 0);
      d_55 = ATgetArgument(b_55, 1);
      {
        ATerm i_14 = t;
        int j_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_subti(not_null(c_55), not_null(d_55));
            LocalPopChoice(j_14);
          }
        else
          {
            t = i_14;
            t = SSL_subtr(not_null(c_55), not_null(d_55));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm while_not_2 (ATerm t, ATerm z_68 (ATerm), ATerm a_69 (ATerm))
{
  ATerm h_55 (ATerm t)
  {
    ATerm k_14 = t;
    int l_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = z_68(t);
        LocalPopChoice(l_14);
      }
    else
      {
        t = k_14;
        {
          t = a_69(t);
          t = h_55(t);
        }
      }
    return(t);
  }
  t = h_55(t);
  return(t);
}
ATerm for_3 (ATerm t, ATerm c_69 (ATerm), ATerm d_69 (ATerm), ATerm e_69 (ATerm))
{
  t = c_69(t);
  t = while_not_2(t, d_69, e_69);
  return(t);
}
ATerm copy_0 (ATerm t)
{
  ATerm m_14 = t;
  int n_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_2 (ATerm t)
      {
        ATerm r_55 = NULL,s_55 = NULL,t_55 = NULL;
        r_55 = t;
        j_55 :
        if(match_cons(r_55, sym__2))
          {
            s_55 = ATgetArgument(r_55, 0);
            t_55 = ATgetArgument(r_55, 1);
            t = (ATerm) ATmakeAppl(sym__3, not_null(s_55), not_null(t_55), (ATerm) ATempty);
          }
        else
          {
            _fail(t);
          }
        return(t);
      }
      ATerm h_2 (ATerm t)
      {
        ATerm w_55 = NULL,x_55 = NULL,y_55 = NULL,z_55 = NULL;
        w_55 = t;
        l_55 :
        if(match_cons(w_55, sym__3))
          {
            x_55 = ATgetArgument(w_55, 0);
            y_55 = ATgetArgument(w_55, 1);
            z_55 = ATgetArgument(w_55, 2);
            m_55 :
            if(match_int(x_55, 0))
              {
                t = not_null(z_55);
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
      ATerm j_2 (ATerm t)
      {
        ATerm e_56 = NULL,f_56 = NULL,g_56 = NULL,h_56 = NULL;
        e_56 = t;
        p_55 :
        if(match_cons(e_56, sym__3))
          {
            f_56 = ATgetArgument(e_56, 0);
            g_56 = ATgetArgument(e_56, 1);
            h_56 = ATgetArgument(e_56, 2);
            {
              ATerm l_56 = NULL;
              ATerm o_14;
              o_14 = t;
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(f_56), term_s_12);
                t = geq_0(t);
              }
              t = o_14;
              {
                ATerm u_56 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(f_56), term_s_12);
                {
                  t = subt_0(t);
                  {
                    u_56 = t;
                    if(((l_56 != NULL) && (l_56 != u_56)))
                      _fail(u_56);
                    else
                      l_56 = u_56;
                  }
                }
                t = (ATerm) ATmakeAppl(sym__3, not_null(l_56), not_null(g_56), (ATerm) ATinsert(CheckATermList(not_null(h_56)), not_null(g_56)));
              }
            }
          }
        else
          {
            _fail(t);
          }
        return(t);
      }
      t = for_3(t, f_2, h_2, j_2);
      LocalPopChoice(n_14);
    }
  else
    {
      t = m_14;
      {
        ATerm k_2 (ATerm t)
        {
          ATerm v_56 = NULL;
          v_56 = t;
          q_55 :
          if(!(match_int(v_56, 0)))
            {
              _fail(t);
            }
          return(t);
        }
        t = _2(t, k_2, _id);
        t = (ATerm) ATempty;
      }
    }
  return(t);
}
ATerm R_2 (ATerm t, ATerm a_60 (ATerm), ATerm b_60 (ATerm))
{
  ATerm j_57 = NULL,k_57 = NULL,l_57 = NULL;
  j_57 = t;
  i_57 :
  if(match_cons(j_57, sym_R_2))
    {
      k_57 = ATgetArgument(j_57, 0);
      l_57 = ATgetArgument(j_57, 1);
      {
        ATerm p_57 = NULL,t_57 = NULL;
        ATerm q_57 = NULL;
        t = SSLgetAnnotations(not_null(j_57));
        {
          q_57 = t;
          if(((p_57 != NULL) && (p_57 != q_57)))
            _fail(q_57);
          else
            p_57 = q_57;
        }
        {
          t = not_null(k_57);
          {
            ATerm v_57 = NULL;
            t = a_60(t);
            {
              t_57 = t;
              {
                t = not_null(l_57);
                {
                  ATerm x_57 = NULL;
                  t = b_60(t);
                  {
                    v_57 = t;
                    {
                      ATerm y_57 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_R_2, not_null(t_57), not_null(v_57)), not_null(p_57));
                      {
                        y_57 = t;
                        if(((x_57 != NULL) && (x_57 != y_57)))
                          _fail(y_57);
                        else
                          x_57 = y_57;
                      }
                      t = not_null(x_57);
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
ATerm split_2 (ATerm t, ATerm o_83 (ATerm), ATerm p_83 (ATerm))
{
  ATerm g_58 = NULL,i_58 = NULL;
  ATerm p_14;
  p_14 = t;
  {
    ATerm h_58 = NULL;
    t = o_83(t);
    {
      h_58 = t;
      if(((g_58 != NULL) && (g_58 != h_58)))
        _fail(h_58);
      else
        g_58 = h_58;
    }
  }
  t = p_14;
  {
    ATerm j_58 = NULL;
    t = p_83(t);
    {
      j_58 = t;
      if(((i_58 != NULL) && (i_58 != j_58)))
        _fail(j_58);
      else
        i_58 = j_58;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(g_58), not_null(i_58));
  }
  return(t);
}
ATerm construct_rows_0 (ATerm t)
{
  ATerm l_2 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = split_2(t, _id, l_2);
  {
    ATerm c_60 (ATerm t)
    {
      ATerm v_58 = NULL,w_58 = NULL,x_58 = NULL,y_58 = NULL,z_58 = NULL,c_59 = NULL,d_59 = NULL;
      ATerm f_60 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(c_59), (ATerm) ATinsert(CheckATermList(not_null(d_59)), not_null(z_58)));
        t = c_60(t);
        return(t);
      }
      x_58 = t;
      s_58 :
      if(match_cons(x_58, sym__2))
        {
          y_58 = ATgetArgument(x_58, 0);
          d_59 = ATgetArgument(x_58, 1);
          t_58 :
          if(((ATgetType(y_58) == AT_LIST) && ATisEmpty(y_58)))
            {
              {
                ATerm i_59 = NULL;
                ATerm j_59 = NULL;
                t = not_null(d_59);
                {
                  ATerm n_2 (ATerm t)
                  {
                    t = (ATerm) ATempty;
                    return(t);
                  }
                  t = reverse_acc_2(t, _id, n_2);
                  {
                    j_59 = t;
                    if(((i_59 != NULL) && (i_59 != j_59)))
                      _fail(j_59);
                    else
                      i_59 = j_59;
                  }
                }
                t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_R_2, (ATerm)ATempty, not_null(i_59)));
              }
            }
          else
            {
              if(((ATgetType(y_58) == AT_LIST) && !(ATisEmpty(y_58))))
                {
                  z_58 = ATgetFirst((ATermList) y_58);
                  c_59 = (ATerm) ATgetNext((ATermList) y_58);
                  u_58 :
                  if(match_cons(z_58, sym_R_2))
                    {
                      v_58 = ATgetArgument(z_58, 0);
                      w_58 = ATgetArgument(z_58, 1);
                      {
                        ATerm q_14 = t;
                        int r_14 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm q_59 = NULL,u_59 = NULL;
                            ATerm s_14;
                            s_14 = t;
                            {
                              ATerm r_59 = NULL;
                              t = not_null(d_59);
                              {
                                ATerm o_2 (ATerm t)
                                {
                                  t = (ATerm) ATempty;
                                  return(t);
                                }
                                t = reverse_acc_2(t, _id, o_2);
                                {
                                  r_59 = t;
                                  if(((q_59 != NULL) && (q_59 != r_59)))
                                    _fail(r_59);
                                  else
                                    q_59 = r_59;
                                }
                              }
                            }
                            t = s_14;
                            {
                              ATerm v_59 = NULL;
                              t = (ATerm) ATmakeAppl(sym__2, not_null(c_59), (ATerm) ATempty);
                              {
                                t = c_60(t);
                                {
                                  v_59 = t;
                                  if(((u_59 != NULL) && (u_59 != v_59)))
                                    _fail(v_59);
                                  else
                                    u_59 = v_59;
                                }
                              }
                              t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(u_59)), (ATerm) ATmakeAppl(sym_R_2, not_null(v_58), not_null(w_58))), (ATerm) ATmakeAppl(sym_R_2, (ATerm)ATempty, not_null(q_59)));
                            }
                            LocalPopChoice(r_14);
                          }
                        else
                          {
                            t = q_14;
                            t = f_60(t);
                          }
                      }
                    }
                  else
                    {
                      t = f_60(t);
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
    t = c_60(t);
    {
      ATerm p_2 (ATerm t)
      {
        ATerm t_14 = t;
        if((PushChoice() == 0))
          {
            t = R_2(t, _id, Nil_0);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = t_14;
          }
        return(t);
      }
      t = filter_1(t, p_2);
    }
  }
  return(t);
}
ATerm Abox2latex_0 (ATerm t)
{
  ATerm e_62 = NULL,f_62 = NULL,g_62 = NULL,h_62 = NULL,i_62 = NULL,j_62 = NULL,k_62 = NULL;
  ATerm q_65 (ATerm t)
  {
    t = not_null(k_62);
    {
      ATerm u_14 = t;
      int v_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = KW_0(t);
          LocalPopChoice(v_14);
        }
      else
        {
          t = u_14;
          {
            ATerm w_14 = t;
            int x_14 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = VAR_0(t);
                LocalPopChoice(x_14);
              }
            else
              {
                t = w_14;
                {
                  ATerm y_14 = t;
                  int z_14 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = NUM_0(t);
                      LocalPopChoice(z_14);
                    }
                  else
                    {
                      t = y_14;
                      t = MATH_0(t);
                    }
                }
              }
          }
        }
    }
    t = (ATerm) ATmakeAppl(sym_BOXFONT_2, not_null(k_62), not_null(i_62));
    return(t);
  }
  ATerm r_65 (ATerm t)
  {
    ATerm a_65 = NULL;
    ATerm e_65 = NULL;
    t = not_null(i_62);
    {
      ATerm q_2 (ATerm t)
      {
        ATerm b_65 = NULL,c_65 = NULL;
        b_65 = t;
        y_61 :
        if(match_cons(b_65, sym_S_1))
          {
            c_65 = ATgetArgument(b_65, 0);
            {
              t = not_null(c_65);
              t = make_latex_comment_0(t);
            }
          }
        else
          {
            _fail(t);
          }
        return(t);
      }
      t = map_1(t, q_2);
      {
        e_65 = t;
        if(((a_65 != NULL) && (a_65 != e_65)))
          _fail(e_65);
        else
          a_65 = e_65;
      }
    }
    t = (ATerm) ATmakeAppl(sym_CBOX_1, not_null(a_65));
    return(t);
  }
  ATerm s_65 (ATerm t)
  {
    t = not_null(k_62);
    t = latex_string_0(t);
    return(t);
  }
  j_62 = t;
  a_62 :
  if(match_cons(j_62, sym_REF_2))
    {
      k_62 = ATgetArgument(j_62, 0);
      i_62 = ATgetArgument(j_62, 1);
      t = (ATerm) ATmakeAppl(sym_REFBOX_2, not_null(k_62), not_null(i_62));
    }
  else
    {
      if(match_cons(j_62, sym_LBL_2))
        {
          k_62 = ATgetArgument(j_62, 0);
          i_62 = ATgetArgument(j_62, 1);
          t = (ATerm) ATmakeAppl(sym_LBLBOX_2, not_null(k_62), not_null(i_62));
        }
      else
        {
          if(match_cons(j_62, sym_L_2))
            {
              k_62 = ATgetArgument(j_62, 0);
              i_62 = ATgetArgument(j_62, 1);
              {
                ATerm r_62 = NULL;
                ATerm a_15 = t;
                int b_15 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm s_62 = NULL;
                    t = not_null(k_62);
                    {
                      t = string_to_int_0(t);
                      {
                        s_62 = t;
                        if(((r_62 != NULL) && (r_62 != s_62)))
                          _fail(s_62);
                        else
                          r_62 = s_62;
                      }
                    }
                    LocalPopChoice(b_15);
                  }
                else
                  {
                    t = a_15;
                    {
                      ATerm c_15 = t;
                      int d_15 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm u_62 = NULL;
                          t = not_null(k_62);
                          {
                            t = explode_string_0(t);
                            {
                              ATerm r_2 (ATerm t)
                              {
                                ATerm t_62 = NULL;
                                t_62 = t;
                                z_60 :
                                if(!(match_int(t_62, 61)))
                                  {
                                    _fail(t);
                                  }
                                return(t);
                              }
                              t = Cons_2(t, r_2, _id);
                              {
                                t = (ATerm) ATinsert(ATempty, term_e_15);
                                {
                                  t = implode_string_0(t);
                                  {
                                    u_62 = t;
                                    if(((r_62 != NULL) && (r_62 != u_62)))
                                      _fail(u_62);
                                    else
                                      r_62 = u_62;
                                  }
                                }
                              }
                            }
                          }
                          LocalPopChoice(d_15);
                        }
                      else
                        {
                          t = c_15;
                          {
                            ATerm v_62 = NULL;
                            t = not_null(k_62);
                            {
                              v_62 = t;
                              if(((r_62 != NULL) && (r_62 != v_62)))
                                _fail(v_62);
                              else
                                r_62 = v_62;
                            }
                          }
                        }
                    }
                  }
                t = (ATerm) ATmakeAppl(sym_LBOX_2, not_null(r_62), not_null(i_62));
              }
            }
          else
            {
              if(match_cons(j_62, sym_ALT_2))
                {
                  k_62 = ATgetArgument(j_62, 0);
                  i_62 = ATgetArgument(j_62, 1);
                  t = (ATerm) ATmakeAppl(sym_ALTBOX_2, not_null(k_62), not_null(i_62));
                }
              else
                {
                  if(match_cons(j_62, sym_A_3))
                    {
                      k_62 = ATgetArgument(j_62, 0);
                      i_62 = ATgetArgument(j_62, 1);
                      e_62 = ATgetArgument(j_62, 2);
                      {
                        ATerm b_63 = NULL,c_63 = NULL,d_63 = NULL,e_63 = NULL,f_63 = NULL;
                        ATerm g_63 = NULL;
                        t = not_null(e_62);
                        {
                          ATerm h_63 = NULL;
                          t = construct_rows_0(t);
                          {
                            g_63 = t;
                            {
                              if(((d_63 != NULL) && (d_63 != g_63)))
                                _fail(g_63);
                              else
                                d_63 = g_63;
                              {
                                t = not_null(i_62);
                                {
                                  t = Vspace_0(t);
                                  {
                                    ATerm i_63 = NULL,k_63 = NULL;
                                    t = string_to_int_0(t);
                                    {
                                      h_63 = t;
                                      {
                                        if(((b_63 != NULL) && (b_63 != h_63)))
                                          _fail(h_63);
                                        else
                                          b_63 = h_63;
                                        {
                                          ATerm j_63 = NULL;
                                          t = (ATerm) ATmakeAppl(sym__2, not_null(b_63), term_h_14);
                                          {
                                            t = copy_0(t);
                                            {
                                              j_63 = t;
                                              if(((i_63 != NULL) && (i_63 != j_63)))
                                                _fail(j_63);
                                              else
                                                i_63 = j_63;
                                            }
                                          }
                                          {
                                            t = (ATerm) ATmakeAppl(sym__2, not_null(i_63), (ATerm) ATinsert(ATinsert(ATempty, term_e_12), term_h_14));
                                            {
                                              ATerm l_63 = NULL;
                                              ATerm f_15 = t;
                                              int g_15 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  t = conc_two_lists_0(t);
                                                  LocalPopChoice(g_15);
                                                }
                                              else
                                                {
                                                  t = f_15;
                                                  t = conc_more_lists_0(t);
                                                }
                                              {
                                                k_63 = t;
                                                {
                                                  if(((e_63 != NULL) && (e_63 != k_63)))
                                                    _fail(k_63);
                                                  else
                                                    e_63 = k_63;
                                                  {
                                                    t = not_null(k_62);
                                                    {
                                                      ATerm m_63 = NULL;
                                                      t = table_def_0(t);
                                                      {
                                                        l_63 = t;
                                                        {
                                                          if(((c_63 != NULL) && (c_63 != l_63)))
                                                            _fail(l_63);
                                                          else
                                                            c_63 = l_63;
                                                          {
                                                            t = not_null(d_63);
                                                            {
                                                              t = map_1(t, MkRows_0);
                                                              {
                                                                ATerm s_2 (ATerm t)
                                                                {
                                                                  t = not_null(e_63);
                                                                  return(t);
                                                                }
                                                                t = separate_by_1(t, s_2);
                                                                {
                                                                  m_63 = t;
                                                                  if(((f_63 != NULL) && (f_63 != m_63)))
                                                                    _fail(m_63);
                                                                  else
                                                                    f_63 = m_63;
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
                        t = (ATerm) ATmakeAppl(sym_ABOX_2, not_null(c_63), not_null(f_63));
                      }
                    }
                  else
                    {
                      if(match_cons(j_62, sym_HV_2))
                        {
                          k_62 = ATgetArgument(j_62, 0);
                          i_62 = ATgetArgument(j_62, 1);
                          {
                            ATerm p_63 = NULL,q_63 = NULL,r_63 = NULL,s_63 = NULL;
                            ATerm t_63 = NULL;
                            t = not_null(k_62);
                            {
                              ATerm u_63 = NULL;
                              t = Hspace_0(t);
                              {
                                t_63 = t;
                                {
                                  if(((p_63 != NULL) && (p_63 != t_63)))
                                    _fail(t_63);
                                  else
                                    p_63 = t_63;
                                  {
                                    t = not_null(k_62);
                                    {
                                      ATerm v_63 = NULL;
                                      t = Vspace_0(t);
                                      {
                                        u_63 = t;
                                        {
                                          if(((q_63 != NULL) && (q_63 != u_63)))
                                            _fail(u_63);
                                          else
                                            q_63 = u_63;
                                          {
                                            t = not_null(k_62);
                                            {
                                              ATerm w_63 = NULL;
                                              t = Ispace_0(t);
                                              {
                                                v_63 = t;
                                                {
                                                  if(((r_63 != NULL) && (r_63 != v_63)))
                                                    _fail(v_63);
                                                  else
                                                    r_63 = v_63;
                                                  {
                                                    t = not_null(i_62);
                                                    {
                                                      ATerm t_2 (ATerm t)
                                                      {
                                                        ATerm h_15 = t;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = Nil_0(t);
                                                            PopChoice();
                                                            _fail(t);
                                                          }
                                                        else
                                                          {
                                                            t = h_15;
                                                          }
                                                        return(t);
                                                      }
                                                      t = filter_1(t, t_2);
                                                      {
                                                        ATerm u_2 (ATerm t)
                                                        {
                                                          t = term_i_15;
                                                          return(t);
                                                        }
                                                        t = separate_by_1(t, u_2);
                                                        {
                                                          w_63 = t;
                                                          if(((s_63 != NULL) && (s_63 != w_63)))
                                                            _fail(w_63);
                                                          else
                                                            s_63 = w_63;
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
                            t = (ATerm) ATmakeAppl(sym_HVBOX_4, not_null(p_63), not_null(q_63), not_null(r_63), not_null(s_63));
                          }
                        }
                      else
                        {
                          if(match_cons(j_62, sym_V_2))
                            {
                              k_62 = ATgetArgument(j_62, 0);
                              i_62 = ATgetArgument(j_62, 1);
                              {
                                ATerm z_63 = NULL,a_64 = NULL,b_64 = NULL;
                                ATerm c_64 = NULL;
                                t = not_null(k_62);
                                {
                                  ATerm d_64 = NULL;
                                  t = Vspace_0(t);
                                  {
                                    c_64 = t;
                                    {
                                      if(((z_63 != NULL) && (z_63 != c_64)))
                                        _fail(c_64);
                                      else
                                        z_63 = c_64;
                                      {
                                        t = not_null(k_62);
                                        {
                                          ATerm e_64 = NULL;
                                          t = Ispace_0(t);
                                          {
                                            d_64 = t;
                                            {
                                              if(((a_64 != NULL) && (a_64 != d_64)))
                                                _fail(d_64);
                                              else
                                                a_64 = d_64;
                                              {
                                                t = not_null(i_62);
                                                {
                                                  ATerm v_2 (ATerm t)
                                                  {
                                                    ATerm j_15 = t;
                                                    if((PushChoice() == 0))
                                                      {
                                                        t = Nil_0(t);
                                                        PopChoice();
                                                        _fail(t);
                                                      }
                                                    else
                                                      {
                                                        t = j_15;
                                                      }
                                                    return(t);
                                                  }
                                                  t = filter_1(t, v_2);
                                                  {
                                                    ATerm w_2 (ATerm t)
                                                    {
                                                      t = term_k_15;
                                                      return(t);
                                                    }
                                                    t = separate_by_1(t, w_2);
                                                    {
                                                      e_64 = t;
                                                      if(((b_64 != NULL) && (b_64 != e_64)))
                                                        _fail(e_64);
                                                      else
                                                        b_64 = e_64;
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
                                t = (ATerm) ATmakeAppl(sym_VBOX_3, not_null(z_63), not_null(a_64), not_null(b_64));
                              }
                            }
                          else
                            {
                              if(match_cons(j_62, sym_H_2))
                                {
                                  k_62 = ATgetArgument(j_62, 0);
                                  i_62 = ATgetArgument(j_62, 1);
                                  {
                                    ATerm h_64 = NULL,i_64 = NULL;
                                    ATerm j_64 = NULL;
                                    t = not_null(k_62);
                                    {
                                      ATerm k_64 = NULL;
                                      t = Hspace_0(t);
                                      {
                                        j_64 = t;
                                        {
                                          if(((h_64 != NULL) && (h_64 != j_64)))
                                            _fail(j_64);
                                          else
                                            h_64 = j_64;
                                          {
                                            t = not_null(i_62);
                                            {
                                              t = toh_0(t);
                                              {
                                                k_64 = t;
                                                if(((i_64 != NULL) && (i_64 != k_64)))
                                                  _fail(k_64);
                                                else
                                                  i_64 = k_64;
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                    t = (ATerm) ATmakeAppl(sym_HBOX_2, not_null(h_64), not_null(i_64));
                                  }
                                }
                              else
                                {
                                  if(match_cons(j_62, sym_FBOX_2))
                                    {
                                      k_62 = ATgetArgument(j_62, 0);
                                      i_62 = ATgetArgument(j_62, 1);
                                      b_62 :
                                      if(match_cons(k_62, sym_F_1))
                                        {
                                          h_62 = ATgetArgument(k_62, 0);
                                          c_62 :
                                          if(((ATgetType(h_62) == AT_LIST) && !(ATisEmpty(h_62))))
                                            {
                                              f_62 = ATgetFirst((ATermList) h_62);
                                              g_62 = (ATerm) ATgetNext((ATermList) h_62);
                                              {
                                                ATerm l_15 = t;
                                                int m_15 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    ATerm o_64 = NULL,p_64 = NULL;
                                                    t = not_null(f_62);
                                                    {
                                                      ATerm n_15 = t;
                                                      int o_15 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm x_2 (ATerm t)
                                                          {
                                                            ATerm q_64 = NULL;
                                                            q_64 = t;
                                                            if(((p_64 != NULL) && (p_64 != q_64)))
                                                              _fail(q_64);
                                                            else
                                                              p_64 = q_64;
                                                            return(t);
                                                          }
                                                          t = FFID_2(t, FM_0, x_2);
                                                          LocalPopChoice(o_15);
                                                        }
                                                      else
                                                        {
                                                          t = n_15;
                                                          {
                                                            ATerm p_15 = t;
                                                            int q_15 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm y_2 (ATerm t)
                                                                {
                                                                  ATerm r_64 = NULL;
                                                                  r_64 = t;
                                                                  if(((p_64 != NULL) && (p_64 != r_64)))
                                                                    _fail(r_64);
                                                                  else
                                                                    p_64 = r_64;
                                                                  return(t);
                                                                }
                                                                t = FFID_2(t, SE_0, y_2);
                                                                LocalPopChoice(q_15);
                                                              }
                                                            else
                                                              {
                                                                t = p_15;
                                                                {
                                                                  ATerm r_15 = t;
                                                                  int s_15 = stack_ptr;
                                                                  if((PushChoice() == 0))
                                                                    {
                                                                      ATerm z_2 (ATerm t)
                                                                      {
                                                                        ATerm s_64 = NULL;
                                                                        s_64 = t;
                                                                        if(((p_64 != NULL) && (p_64 != s_64)))
                                                                          _fail(s_64);
                                                                        else
                                                                          p_64 = s_64;
                                                                        return(t);
                                                                      }
                                                                      t = FFID_2(t, SH_0, z_2);
                                                                      LocalPopChoice(s_15);
                                                                    }
                                                                  else
                                                                    {
                                                                      t = r_15;
                                                                      {
                                                                        ATerm t_15 = t;
                                                                        int u_15 = stack_ptr;
                                                                        if((PushChoice() == 0))
                                                                          {
                                                                            ATerm a_3 (ATerm t)
                                                                            {
                                                                              ATerm t_64 = NULL;
                                                                              t_64 = t;
                                                                              if(((p_64 != NULL) && (p_64 != t_64)))
                                                                                _fail(t_64);
                                                                              else
                                                                                p_64 = t_64;
                                                                              return(t);
                                                                            }
                                                                            t = FFID_2(t, SZ_0, a_3);
                                                                            LocalPopChoice(u_15);
                                                                          }
                                                                        else
                                                                          {
                                                                            t = t_15;
                                                                            {
                                                                              ATerm v_64 = NULL;
                                                                              ATerm b_3 (ATerm t)
                                                                              {
                                                                                ATerm u_64 = NULL;
                                                                                u_64 = t;
                                                                                if(((o_64 != NULL) && (o_64 != u_64)))
                                                                                  _fail(u_64);
                                                                                else
                                                                                  o_64 = u_64;
                                                                                return(t);
                                                                              }
                                                                              t = FFID_2(t, CL_0, b_3);
                                                                              {
                                                                                t = (ATerm) ATmakeAppl(sym_BOXCOLOR_1, not_null(o_64));
                                                                                {
                                                                                  v_64 = t;
                                                                                  if(((p_64 != NULL) && (p_64 != v_64)))
                                                                                    _fail(v_64);
                                                                                  else
                                                                                    p_64 = v_64;
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
                                                    t = (ATerm) ATmakeAppl(sym_BOXFONT_2, not_null(p_64), (ATerm) ATmakeAppl(sym_FBOX_2, (ATerm)ATmakeAppl(sym_F_1, not_null(g_62)), not_null(i_62)));
                                                    LocalPopChoice(m_15);
                                                  }
                                                else
                                                  {
                                                    t = l_15;
                                                    t = q_65(t);
                                                  }
                                              }
                                            }
                                          else
                                            {
                                              if(((ATgetType(h_62) == AT_LIST) && ATisEmpty(h_62)))
                                                {
                                                  {
                                                    ATerm v_15 = t;
                                                    int w_15 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        t = not_null(i_62);
                                                        LocalPopChoice(w_15);
                                                      }
                                                    else
                                                      {
                                                        t = v_15;
                                                        t = q_65(t);
                                                      }
                                                  }
                                                }
                                              else
                                                {
                                                  t = q_65(t);
                                                }
                                            }
                                        }
                                      else
                                        {
                                          t = q_65(t);
                                        }
                                    }
                                  else
                                    {
                                      if(match_cons(j_62, sym_C_2))
                                        {
                                          k_62 = ATgetArgument(j_62, 0);
                                          i_62 = ATgetArgument(j_62, 1);
                                          d_62 :
                                          if(((ATgetType(k_62) == AT_LIST) && ATisEmpty(k_62)))
                                            {
                                              t = r_65(t);
                                            }
                                          else
                                            {
                                              _fail(t);
                                            }
                                        }
                                      else
                                        {
                                          if(match_cons(j_62, sym_S_1))
                                            {
                                              k_62 = ATgetArgument(j_62, 0);
                                              t = s_65(t);
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
ATerm topdown_1 (ATerm t, ATerm i_69 (ATerm))
{
  t = i_69(t);
  {
    ATerm c_3 (ATerm t)
    {
      t = topdown_1(t, i_69);
      return(t);
    }
    t = _all(t, c_3);
  }
  return(t);
}
ATerm abox2latex_0 (ATerm t)
{
  ATerm x_66 = NULL,z_66 = NULL;
  ATerm d_3 (ATerm t)
  {
    ATerm x_15 = t;
    int y_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Abox2latex_0(t);
        LocalPopChoice(y_15);
      }
    else
      {
        t = x_15;
        {
        }
      }
    return(t);
  }
  t = topdown_1(t, d_3);
  {
    ATerm z_15;
    z_15 = t;
    {
      ATerm y_66 = NULL;
      t = BOXENV_args_0(t);
      {
        y_66 = t;
        if(((x_66 != NULL) && (x_66 != y_66)))
          _fail(y_66);
        else
          x_66 = y_66;
      }
    }
    t = z_15;
    {
      ATerm a_67 = NULL;
      a_67 = t;
      if(((z_66 != NULL) && (z_66 != a_67)))
        _fail(a_67);
      else
        z_66 = a_67;
      {
        t = (ATerm) ATmakeAppl(sym_BOXENV_2, not_null(x_66), not_null(z_66));
        t = latex2text_0(t);
      }
    }
  }
  return(t);
}
ATerm file_exists_0 (ATerm t)
{
  ATerm f_67 = NULL;
  ATerm h_67 = NULL;
  f_67 = t;
  {
    ATerm a_16;
    a_16 = t;
    {
      ATerm i_67 = NULL;
      t = term_b_16;
      {
        i_67 = t;
        if(((h_67 != NULL) && (h_67 != i_67)))
          _fail(i_67);
        else
          h_67 = i_67;
      }
    }
    t = a_16;
    {
      t = SSL_open_file(not_null(f_67), not_null(h_67));
      t = SSL_close_file(not_null(f_67));
    }
  }
  return(t);
}
ATerm read_from_0 (ATerm t)
{
  ATerm y_67 = NULL,z_67 = NULL;
  y_67 = t;
  x_67 :
  if(match_cons(y_67, sym_stdin_0))
    {
      ATerm a_68 = NULL;
      ATerm b_68 = NULL;
      t = term_c_16;
      {
        t = ReadFromFile_0(t);
        {
          b_68 = t;
          if(((a_68 != NULL) && (a_68 != b_68)))
            _fail(b_68);
          else
            a_68 = b_68;
        }
      }
      t = not_null(a_68);
    }
  else
    {
      if(match_cons(y_67, sym_FILE_1))
        {
          z_67 = ATgetArgument(y_67, 0);
          {
            ATerm d_68 = NULL;
            ATerm g_68 = NULL;
            t = not_null(z_67);
            {
              t = file_exists_0(t);
              {
                t = ReadFromFile_0(t);
                {
                  g_68 = t;
                  if(((d_68 != NULL) && (d_68 != g_68)))
                    _fail(g_68);
                  else
                    d_68 = g_68;
                }
              }
            }
            t = not_null(d_68);
          }
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm copy_file_0 (ATerm t)
{
  ATerm n_68 = NULL,o_68 = NULL,p_68 = NULL;
  n_68 = t;
  m_68 :
  if(match_cons(n_68, sym__2))
    {
      o_68 = ATgetArgument(n_68, 0);
      p_68 = ATgetArgument(n_68, 1);
      t = SSL_copy(not_null(o_68), not_null(p_68));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm stderr_0 (ATerm t)
{
  ATerm x_68 = NULL;
  x_68 = t;
  w_68 :
  if(match_cons(x_68, sym_stderr_0))
    {
      ATerm f_69 = NULL,h_69 = NULL;
      ATerm d_16;
      d_16 = t;
      {
        ATerm g_69 = NULL;
        t = SSLgetAnnotations(not_null(x_68));
        {
          g_69 = t;
          if(((f_69 != NULL) && (f_69 != g_69)))
            _fail(g_69);
          else
            f_69 = g_69;
        }
      }
      t = d_16;
      {
        ATerm k_69 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stderr_0), not_null(f_69));
        {
          k_69 = t;
          if(((h_69 != NULL) && (h_69 != k_69)))
            _fail(k_69);
          else
            h_69 = k_69;
        }
        t = not_null(h_69);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm stdout_0 (ATerm t)
{
  ATerm s_69 = NULL;
  s_69 = t;
  r_69 :
  if(match_cons(s_69, sym_stdout_0))
    {
      ATerm u_69 = NULL,w_69 = NULL;
      ATerm e_16;
      e_16 = t;
      {
        ATerm v_69 = NULL;
        t = SSLgetAnnotations(not_null(s_69));
        {
          v_69 = t;
          if(((u_69 != NULL) && (u_69 != v_69)))
            _fail(v_69);
          else
            u_69 = v_69;
        }
      }
      t = e_16;
      {
        ATerm x_69 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stdout_0), not_null(u_69));
        {
          x_69 = t;
          if(((w_69 != NULL) && (w_69 != x_69)))
            _fail(x_69);
          else
            w_69 = x_69;
        }
        t = not_null(w_69);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm copy_to_1 (ATerm t, ATerm m_0 (ATerm))
{
  ATerm j_70 = NULL,k_70 = NULL;
  j_70 = t;
  i_70 :
  if(match_cons(j_70, sym_FILE_1))
    {
      k_70 = ATgetArgument(j_70, 0);
      {
        ATerm f_16 = t;
        int g_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_70 = NULL;
            ATerm n_70 = NULL;
            t = m_0(t);
            {
              n_70 = t;
              {
                if(((m_70 != NULL) && (m_70 != n_70)))
                  _fail(n_70);
                else
                  m_70 = n_70;
                {
                  ATerm h_16 = t;
                  int i_16 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = stdout_0(t);
                      LocalPopChoice(i_16);
                    }
                  else
                    {
                      t = h_16;
                      t = stderr_0(t);
                    }
                  {
                    t = (ATerm) ATmakeAppl(sym__2, not_null(k_70), not_null(m_70));
                    t = copy_file_0(t);
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(k_70));
            LocalPopChoice(g_16);
          }
        else
          {
            t = f_16;
            {
              ATerm j_16 = t;
              int k_16 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm p_70 = NULL;
                  ATerm q_70 = NULL;
                  t = m_0(t);
                  {
                    q_70 = t;
                    {
                      if(((p_70 != NULL) && (p_70 != q_70)))
                        _fail(q_70);
                      else
                        p_70 = q_70;
                      {
                        ATerm l_16 = t;
                        if((PushChoice() == 0))
                          {
                            ATerm m_16 = t;
                            int n_16 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = stdout_0(t);
                                LocalPopChoice(n_16);
                              }
                            else
                              {
                                t = m_16;
                                {
                                  ATerm o_16 = t;
                                  int p_16 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = stderr_0(t);
                                      LocalPopChoice(p_16);
                                    }
                                  else
                                    {
                                      t = o_16;
                                      {
                                        ATerm r_70 = NULL;
                                        r_70 = t;
                                        if(((k_70 != NULL) && (k_70 != r_70)))
                                          _fail(r_70);
                                        else
                                          k_70 = r_70;
                                      }
                                    }
                                }
                              }
                            PopChoice();
                            _fail(t);
                          }
                        else
                          {
                            t = l_16;
                          }
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(k_70), not_null(p_70));
                          t = copy_file_0(t);
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(k_70));
                  LocalPopChoice(k_16);
                }
              else
                {
                  t = j_16;
                  {
                    ATerm t_70 = NULL;
                    t = m_0(t);
                    {
                      t_70 = t;
                      if(((k_70 != NULL) && (k_70 != t_70)))
                        _fail(t_70);
                      else
                        k_70 = t_70;
                    }
                    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(k_70));
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
ATerm Tl_0 (ATerm t)
{
  ATerm d_71 = NULL,e_71 = NULL,f_71 = NULL;
  d_71 = t;
  c_71 :
  if(((ATgetType(d_71) == AT_LIST) && !(ATisEmpty(d_71))))
    {
      e_71 = ATgetFirst((ATermList) d_71);
      f_71 = (ATerm) ATgetNext((ATermList) d_71);
      t = not_null(f_71);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_pop_0 (ATerm t)
{
  ATerm l_71 = NULL,m_71 = NULL,n_71 = NULL;
  l_71 = t;
  k_71 :
  if(match_cons(l_71, sym__2))
    {
      m_71 = ATgetArgument(l_71, 0);
      n_71 = ATgetArgument(l_71, 1);
      {
        ATerm q_16;
        q_16 = t;
        {
          ATerm q_71 = NULL;
          ATerm r_71 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(m_71), not_null(n_71));
          {
            ATerm r_16 = t;
            int s_16 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                t = Tl_0(t);
                LocalPopChoice(s_16);
              }
            else
              {
                t = r_16;
                t = (ATerm) ATempty;
              }
            {
              r_71 = t;
              if(((q_71 != NULL) && (q_71 != r_71)))
                _fail(r_71);
              else
                q_71 = r_71;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(m_71), not_null(n_71), not_null(q_71));
            t = table_put_0(t);
          }
        }
        t = q_16;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm end_scope_1 (ATerm t, ATerm z_85 (ATerm))
{
  ATerm y_71 = NULL,z_71 = NULL,a_72 = NULL;
  ATerm t_16;
  t_16 = t;
  {
    ATerm b_72 = NULL;
    ATerm c_72 = NULL,d_72 = NULL,e_72 = NULL;
    t = z_85(t);
    {
      b_72 = t;
      {
        if(((a_72 != NULL) && (a_72 != b_72)))
          _fail(b_72);
        else
          a_72 = b_72;
        {
          ATerm u_16 = t;
          int v_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(a_72), term_t_6);
              t = table_get_0(t);
              LocalPopChoice(v_16);
            }
          else
            {
              t = u_16;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
            }
          {
            c_72 = t;
            x_71 :
            if(((ATgetType(c_72) == AT_LIST) && !(ATisEmpty(c_72))))
              {
                d_72 = ATgetFirst((ATermList) c_72);
                e_72 = (ATerm) ATgetNext((ATermList) c_72);
                {
                  if(((z_71 != NULL) && (z_71 != d_72)))
                    _fail(d_72);
                  else
                    z_71 = d_72;
                  {
                    if(((y_71 != NULL) && (y_71 != e_72)))
                      _fail(e_72);
                    else
                      y_71 = e_72;
                    {
                      t = (ATerm) ATmakeAppl(sym__3, not_null(a_72), term_t_6, not_null(y_71));
                      {
                        t = table_put_0(t);
                        {
                          t = not_null(z_71);
                          {
                            ATerm e_3 (ATerm t)
                            {
                              ATerm f_72 = NULL;
                              f_72 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(a_72), not_null(f_72));
                                t = table_pop_0(t);
                              }
                              return(t);
                            }
                            t = map_1(t, e_3);
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
  t = t_16;
  return(t);
}
ATerm remove_file_0 (ATerm t)
{
  ATerm l_72 = NULL;
  l_72 = t;
  t = SSL_remove(not_null(l_72));
  return(t);
}
ATerm restore_always_2 (ATerm t, ATerm e_68 (ATerm), ATerm f_68 (ATerm))
{
  ATerm w_16 = t;
  int x_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = e_68(t);
      t = f_68(t);
      LocalPopChoice(x_16);
    }
  else
    {
      t = w_16;
      {
        t = f_68(t);
        _fail(t);
      }
    }
  return(t);
}
ATerm begin_scope_1 (ATerm t, ATerm y_85 (ATerm))
{
  ATerm q_72 = NULL;
  ATerm y_16;
  y_16 = t;
  {
    ATerm r_72 = NULL;
    ATerm s_72 = NULL;
    t = y_85(t);
    {
      r_72 = t;
      {
        if(((q_72 != NULL) && (q_72 != r_72)))
          _fail(r_72);
        else
          q_72 = r_72;
        {
          ATerm t_72 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(q_72), term_t_6);
          {
            ATerm z_16 = t;
            int a_17 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(a_17);
              }
            else
              {
                t = z_16;
                t = (ATerm) ATempty;
              }
            {
              t_72 = t;
              if(((s_72 != NULL) && (s_72 != t_72)))
                _fail(t_72);
              else
                s_72 = t_72;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(q_72), term_t_6, (ATerm) ATinsert(CheckATermList(not_null(s_72)), (ATerm) ATempty));
            t = table_put_0(t);
          }
        }
      }
    }
  }
  t = y_16;
  return(t);
}
ATerm xtc_temp_files_1 (ATerm t, ATerm r_95 (ATerm))
{
  ATerm y_72 = NULL,z_72 = NULL;
  ATerm f_3 (ATerm t)
  {
    t = term_h_7;
    return(t);
  }
  t = begin_scope_1(t, f_3);
  {
    ATerm g_3 (ATerm t)
    {
      ATerm b_17;
      b_17 = t;
      {
        ATerm a_73 = NULL,b_73 = NULL,c_73 = NULL;
        ATerm c_17 = t;
        int d_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_e_17;
            t = table_get_0(t);
            LocalPopChoice(d_17);
          }
        else
          {
            t = c_17;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
          }
        {
          a_73 = t;
          x_72 :
          if(((ATgetType(a_73) == AT_LIST) && !(ATisEmpty(a_73))))
            {
              b_73 = ATgetFirst((ATermList) a_73);
              c_73 = (ATerm) ATgetNext((ATermList) a_73);
              {
                if(((z_72 != NULL) && (z_72 != b_73)))
                  _fail(b_73);
                else
                  z_72 = b_73;
                {
                  if(((y_72 != NULL) && (y_72 != c_73)))
                    _fail(c_73);
                  else
                    y_72 = c_73;
                  {
                    t = not_null(z_72);
                    {
                      ATerm h_3 (ATerm t)
                      {
                        ATerm f_17 = t;
                        int g_17 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = remove_file_0(t);
                            LocalPopChoice(g_17);
                          }
                        else
                          {
                            t = f_17;
                            {
                            }
                          }
                        return(t);
                      }
                      t = map_1(t, h_3);
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
      t = b_17;
      {
        ATerm i_3 (ATerm t)
        {
          t = term_h_7;
          return(t);
        }
        t = end_scope_1(t, i_3);
      }
      return(t);
    }
    t = restore_always_2(t, r_95, g_3);
  }
  return(t);
}
ATerm xtc_io_1 (ATerm t, ATerm s_95 (ATerm))
{
  ATerm j_3 (ATerm t)
  {
    ATerm h_17 = t;
    int i_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_73 = NULL;
        ATerm g_73 = NULL;
        t = term_j_17;
        {
          t = get_config_0(t);
          {
            g_73 = t;
            if(((f_73 != NULL) && (f_73 != g_73)))
              _fail(g_73);
            else
              f_73 = g_73;
          }
        }
        t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(f_73));
        LocalPopChoice(i_17);
      }
    else
      {
        t = h_17;
        t = term_c_16;
      }
    {
      t = s_95(t);
      {
        ATerm k_3 (ATerm t)
        {
          ATerm k_17 = t;
          int l_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = term_m_17;
              t = get_config_0(t);
              LocalPopChoice(l_17);
            }
          else
            {
              t = k_17;
              t = term_n_17;
            }
          return(t);
        }
        t = copy_to_1(t, k_3);
      }
    }
    return(t);
  }
  t = xtc_temp_files_1(t, j_3);
  return(t);
}
ATerm xtc_io_wrap_2 (ATerm t, ATerm w_95 (ATerm), ATerm x_95 (ATerm))
{
  ATerm l_3 (ATerm t)
  {
    ATerm o_17 = t;
    int p_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_95(t);
        LocalPopChoice(p_17);
      }
    else
      {
        t = o_17;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm m_3 (ATerm t)
  {
    t = xtc_io_1(t, x_95);
    return(t);
  }
  t = option_wrap_2(t, l_3, m_3);
  return(t);
}
ATerm xtc_io_wrap_1 (ATerm t, ATerm v_95 (ATerm))
{
  t = xtc_io_wrap_2(t, _fail, v_95);
  return(t);
}
ATerm Abox_2_latex_0 (ATerm t)
{
  ATerm n_3 (ATerm t)
  {
    t = read_from_0(t);
    {
      t = abox2latex_0(t);
      t = topdown_print_to_0(t);
    }
    return(t);
  }
  t = xtc_io_wrap_2(t, _fail, n_3);
  return(t);
}
ATerm ReadFromFile_0 (ATerm t)
{
  ATerm j_73 = NULL;
  ATerm q_17 = t;
  int r_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_73 = NULL;
      k_73 = t;
      {
        if(((j_73 != NULL) && (j_73 != k_73)))
          _fail(k_73);
        else
          j_73 = k_73;
        t = SSL_ReadFromFile(not_null(j_73));
      }
      LocalPopChoice(r_17);
    }
  else
    {
      t = q_17;
      {
        ATerm q_3 (ATerm t)
        {
          t = term_s_17;
          return(t);
        }
        t = debug_1(t, q_3);
        _fail(t);
      }
    }
  return(t);
}
ATerm load_latex_table_0 (ATerm t)
{
  t = term_b_11;
  t = table_create_0(t);
  {
    t = term_t_17;
    {
      t = get_config_0(t);
      {
        t = ReadFromFile_0(t);
        {
          ATerm r_3 (ATerm t)
          {
            ATerm q_73 = NULL,r_73 = NULL,s_73 = NULL,t_73 = NULL,u_73 = NULL;
            q_73 = t;
            n_73 :
            if(((ATgetType(q_73) == AT_LIST) && !(ATisEmpty(q_73))))
              {
                r_73 = ATgetFirst((ATermList) q_73);
                s_73 = (ATerm) ATgetNext((ATermList) q_73);
                o_73 :
                if(((ATgetType(s_73) == AT_LIST) && !(ATisEmpty(s_73))))
                  {
                    t_73 = ATgetFirst((ATermList) s_73);
                    u_73 = (ATerm) ATgetNext((ATermList) s_73);
                    p_73 :
                    if(((ATgetType(u_73) == AT_LIST) && ATisEmpty(u_73)))
                      {
                        {
                          t = (ATerm) ATmakeAppl(sym__3, term_b_11, not_null(r_73), not_null(t_73));
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
          t = map_1(t, r_3);
        }
      }
    }
  }
  return(t);
}
ATerm ArgOption_2 (ATerm t, ATerm b_91 (ATerm), ATerm c_91 (ATerm))
{
  ATerm s_3 (ATerm t)
  {
    t = term_u_17;
    return(t);
  }
  t = ArgOption_3(t, b_91, c_91, s_3);
  return(t);
}
ATerm version_option_0 (ATerm t)
{
  ATerm w_3 (ATerm t)
  {
    ATerm z_73 = NULL;
    z_73 = t;
    y_73 :
    if(!(match_string(z_73, "-v")))
      {
        if(!(match_string(z_73, "--version")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm x_3 (ATerm t)
  {
    t = term_w_17;
    t = set_config_0(t);
    t = term_x_17;
    return(t);
  }
  ATerm y_3 (ATerm t)
  {
    t = term_y_17;
    return(t);
  }
  t = Option_3(t, w_3, x_3, y_3);
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm b_4 (ATerm t)
  {
    ATerm c_74 = NULL;
    c_74 = t;
    a_74 :
    if(!(match_string(c_74, "-k")))
      {
        if(!(match_string(c_74, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm c_4 (ATerm t)
  {
    ATerm z_17;
    z_17 = t;
    {
      ATerm d_74 = NULL;
      ATerm e_74 = NULL;
      t = string_to_int_0(t);
      {
        e_74 = t;
        if(((d_74 != NULL) && (d_74 != e_74)))
          _fail(e_74);
        else
          d_74 = e_74;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_a_18, not_null(d_74));
        t = set_config_0(t);
      }
    }
    t = z_17;
    return(t);
  }
  ATerm d_4 (ATerm t)
  {
    t = term_b_18;
    return(t);
  }
  t = ArgOption_3(t, b_4, c_4, d_4);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm h_74 = NULL;
  h_74 = t;
  t = SSL_string_to_int(not_null(h_74));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm c_18 = t;
  int d_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_4 (ATerm t)
      {
        ATerm p_74 = NULL;
        p_74 = t;
        k_74 :
        if(!(match_string(p_74, "-S")))
          {
            if(!(match_string(p_74, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm f_4 (ATerm t)
      {
        t = term_e_18;
        t = set_config_0(t);
        t = term_f_18;
        return(t);
      }
      ATerm g_4 (ATerm t)
      {
        t = term_g_18;
        return(t);
      }
      t = Option_3(t, e_4, f_4, g_4);
      LocalPopChoice(d_18);
    }
  else
    {
      t = c_18;
      {
        ATerm h_18 = t;
        int i_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_4 (ATerm t)
            {
              ATerm q_74 = NULL;
              q_74 = t;
              l_74 :
              if(!(match_string(q_74, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm i_4 (ATerm t)
            {
              ATerm t_74 = NULL;
              ATerm j_18;
              j_18 = t;
              {
                ATerm r_74 = NULL;
                ATerm s_74 = NULL;
                t = string_to_int_0(t);
                {
                  s_74 = t;
                  if(((r_74 != NULL) && (r_74 != s_74)))
                    _fail(s_74);
                  else
                    r_74 = s_74;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_a_13, not_null(r_74));
                  t = set_config_0(t);
                }
              }
              t = j_18;
              {
                ATerm u_74 = NULL;
                u_74 = t;
                if(((t_74 != NULL) && (t_74 != u_74)))
                  _fail(u_74);
                else
                  t_74 = u_74;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(t_74));
              }
              return(t);
            }
            ATerm j_4 (ATerm t)
            {
              t = term_k_18;
              return(t);
            }
            t = ArgOption_3(t, h_4, i_4, j_4);
            LocalPopChoice(i_18);
          }
        else
          {
            t = h_18;
            {
              ATerm k_4 (ATerm t)
              {
                ATerm v_74 = NULL;
                v_74 = t;
                o_74 :
                if(!(match_string(v_74, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm l_4 (ATerm t)
              {
                t = term_m_18;
                t = set_config_0(t);
                t = term_n_18;
                return(t);
              }
              ATerm m_4 (ATerm t)
              {
                t = term_o_18;
                return(t);
              }
              t = Option_3(t, k_4, l_4, m_4);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0 (ATerm t)
{
  ATerm p_18 = t;
  int q_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      LocalPopChoice(q_18);
    }
  else
    {
      t = p_18;
      {
        ATerm r_18 = t;
        int s_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = keep_option_0(t);
            LocalPopChoice(s_18);
          }
        else
          {
            t = r_18;
            t = version_option_0(t);
          }
      }
    }
  return(t);
}
ATerm output_option_0 (ATerm t)
{
  ATerm n_4 (ATerm t)
  {
    ATerm b_75 = NULL;
    b_75 = t;
    y_74 :
    if(!(match_string(b_75, "-o")))
      {
        if(!(match_string(b_75, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm o_4 (ATerm t)
  {
    ATerm e_75 = NULL;
    ATerm t_18;
    t_18 = t;
    {
      ATerm c_75 = NULL;
      ATerm d_75 = NULL;
      d_75 = t;
      if(((c_75 != NULL) && (c_75 != d_75)))
        _fail(d_75);
      else
        c_75 = d_75;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_m_17, not_null(c_75));
        t = set_config_0(t);
      }
    }
    t = t_18;
    {
      ATerm f_75 = NULL;
      f_75 = t;
      if(((e_75 != NULL) && (e_75 != f_75)))
        _fail(f_75);
      else
        e_75 = f_75;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(e_75));
    }
    return(t);
  }
  ATerm p_4 (ATerm t)
  {
    t = term_u_18;
    return(t);
  }
  t = ArgOption_3(t, n_4, o_4, p_4);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm v_18 = t;
  int w_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      LocalPopChoice(w_18);
    }
  else
    {
      t = v_18;
      {
        ATerm q_4 (ATerm t)
        {
          ATerm o_75 = NULL;
          o_75 = t;
          n_75 :
          if(!(match_string(o_75, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm r_4 (ATerm t)
        {
          t = term_y_18;
          t = set_config_0(t);
          t = term_z_18;
          return(t);
        }
        ATerm s_4 (ATerm t)
        {
          t = term_a_19;
          return(t);
        }
        t = Option_3(t, q_4, r_4, s_4);
      }
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm w_75 = NULL,x_75 = NULL,y_75 = NULL,z_75 = NULL,c_76 = NULL;
  w_75 = t;
  s_75 :
  if(match_string(w_75, "register-usage-info"))
    {
      t = register_usage_1(t, l_0);
    }
  else
    {
      if(((ATgetType(w_75) == AT_LIST) && !(ATisEmpty(w_75))))
        {
          x_75 = ATgetFirst((ATermList) w_75);
          y_75 = (ATerm) ATgetNext((ATermList) w_75);
          t_75 :
          if(((ATgetType(y_75) == AT_LIST) && !(ATisEmpty(y_75))))
            {
              z_75 = ATgetFirst((ATermList) y_75);
              c_76 = (ATerm) ATgetNext((ATermList) y_75);
              {
                ATerm i_76 = NULL;
                ATerm b_19;
                b_19 = t;
                {
                  t = not_null(x_75);
                  t = j_0(t);
                }
                t = b_19;
                {
                  ATerm j_76 = NULL;
                  t = not_null(z_75);
                  {
                    t = k_0(t);
                    {
                      j_76 = t;
                      if(((i_76 != NULL) && (i_76 != j_76)))
                        _fail(j_76);
                      else
                        i_76 = j_76;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(c_76)), not_null(i_76));
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
  ATerm t_4 (ATerm t)
  {
    ATerm u_76 = NULL;
    u_76 = t;
    p_76 :
    if(!(match_string(u_76, "-i")))
      {
        if(!(match_string(u_76, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm u_4 (ATerm t)
  {
    ATerm x_76 = NULL;
    ATerm c_19;
    c_19 = t;
    {
      ATerm v_76 = NULL;
      ATerm w_76 = NULL;
      w_76 = t;
      if(((v_76 != NULL) && (v_76 != w_76)))
        _fail(w_76);
      else
        v_76 = w_76;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_j_17, not_null(v_76));
        t = set_config_0(t);
      }
    }
    t = c_19;
    {
      ATerm y_76 = NULL;
      y_76 = t;
      if(((x_76 != NULL) && (x_76 != y_76)))
        _fail(y_76);
      else
        x_76 = y_76;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(x_76));
    }
    return(t);
  }
  ATerm v_4 (ATerm t)
  {
    t = term_d_19;
    return(t);
  }
  t = ArgOption_3(t, t_4, u_4, v_4);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm e_19 = t;
  int f_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      LocalPopChoice(f_19);
    }
  else
    {
      t = e_19;
      {
        ATerm g_19 = t;
        int h_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0(t);
            LocalPopChoice(h_19);
          }
        else
          {
            t = g_19;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm Abox2latex_options_0 (ATerm t)
{
  ATerm i_19 = t;
  int j_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = io_options_0(t);
      LocalPopChoice(j_19);
    }
  else
    {
      t = i_19;
      {
        ATerm k_19 = t;
        int l_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_4 (ATerm t)
            {
              ATerm f_77 = NULL;
              f_77 = t;
              b_77 :
              if(!(match_string(f_77, "-t")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm x_4 (ATerm t)
            {
              ATerm g_77 = NULL;
              ATerm h_77 = NULL;
              h_77 = t;
              if(((g_77 != NULL) && (g_77 != h_77)))
                _fail(h_77);
              else
                g_77 = h_77;
              {
                t = (ATerm) ATmakeAppl(sym__2, term_t_17, not_null(g_77));
                t = set_config_0(t);
              }
              return(t);
            }
            t = ArgOption_2(t, w_4, x_4);
            LocalPopChoice(l_19);
          }
        else
          {
            t = k_19;
            {
              ATerm y_4 (ATerm t)
              {
                ATerm i_77 = NULL;
                i_77 = t;
                d_77 :
                if(!(match_string(i_77, "-w")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm z_4 (ATerm t)
              {
                ATerm j_77 = NULL;
                ATerm k_77 = NULL;
                k_77 = t;
                if(((j_77 != NULL) && (j_77 != k_77)))
                  _fail(k_77);
                else
                  j_77 = k_77;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_l_10, not_null(j_77));
                  t = set_config_0(t);
                }
                return(t);
              }
              t = ArgOption_2(t, y_4, z_4);
            }
          }
      }
    }
  return(t);
}
ATerm default_usage_0 (ATerm t)
{
  ATerm p_77 = NULL;
  ATerm m_19;
  m_19 = t;
  {
    ATerm a_5 (ATerm t)
    {
      ATerm q_77 = NULL,r_77 = NULL;
      q_77 = t;
      o_77 :
      if(match_cons(q_77, sym_Program_1))
        {
          r_77 = ATgetArgument(q_77, 0);
          if(((p_77 != NULL) && (p_77 != r_77)))
            _fail(r_77);
          else
            p_77 = r_77;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = fetch_1(t, a_5);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_n_19, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_p_19), not_null(p_77)), term_o_19));
      {
        t = printnl_0(t);
        {
          t = term_s_12;
          t = exit_0(t);
        }
      }
    }
  }
  t = m_19;
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_n_19, (ATerm) ATinsert(ATempty, term_q_19));
  {
    t = printnl_0(t);
    {
      t = term_s_12;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm u_77 = NULL;
  u_77 = t;
  t = SSL_TicksToSeconds(not_null(u_77));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm z_77 = NULL,a_78 = NULL,b_78 = NULL;
  z_77 = t;
  y_77 :
  if(match_cons(z_77, sym__2))
    {
      a_78 = ATgetArgument(z_77, 0);
      b_78 = ATgetArgument(z_77, 1);
      {
        ATerm r_19 = t;
        int s_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(a_78), not_null(b_78));
            LocalPopChoice(s_19);
          }
        else
          {
            t = r_19;
            t = SSL_addr(not_null(a_78), not_null(b_78));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm z_81 (ATerm), ATerm a_82 (ATerm))
{
  ATerm t_19 = t;
  int u_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = z_81(t);
      LocalPopChoice(u_19);
    }
  else
    {
      t = t_19;
      {
        ATerm i_78 = NULL,j_78 = NULL,k_78 = NULL;
        i_78 = t;
        h_78 :
        if(((ATgetType(i_78) == AT_LIST) && !(ATisEmpty(i_78))))
          {
            j_78 = ATgetFirst((ATermList) i_78);
            k_78 = (ATerm) ATgetNext((ATermList) i_78);
            {
              ATerm n_78 = NULL;
              ATerm o_78 = NULL;
              t = not_null(k_78);
              {
                t = foldr_2(t, z_81, a_82);
                {
                  o_78 = t;
                  if(((n_78 != NULL) && (n_78 != o_78)))
                    _fail(o_78);
                  else
                    n_78 = o_78;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(j_78), not_null(n_78));
                t = a_82(t);
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
ATerm crush_2 (ATerm t, ATerm x_80 (ATerm), ATerm y_80 (ATerm))
{
  ATerm v_78 = NULL;
  ATerm x_78 = NULL;
  v_78 = t;
  {
    ATerm y_78 = NULL;
    ATerm a_79 = NULL,b_79 = NULL,c_79 = NULL;
    t = not_null(v_78);
    {
      y_78 = t;
      {
        t = SSL_explode_term(not_null(y_78));
        {
          a_79 = t;
          u_78 :
          if(match_cons(a_79, sym__2))
            {
              b_79 = ATgetArgument(a_79, 0);
              c_79 = ATgetArgument(a_79, 1);
              if(((x_78 != NULL) && (x_78 != c_79)))
                _fail(c_79);
              else
                x_78 = c_79;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(x_78);
      t = foldr_2(t, x_80, y_80);
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
    ATerm b_5 (ATerm t)
    {
      t = term_o_13;
      return(t);
    }
    t = crush_2(t, b_5, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm i_79 = NULL,j_79 = NULL,k_79 = NULL;
  i_79 = t;
  h_79 :
  if(match_cons(i_79, sym__2))
    {
      j_79 = ATgetArgument(i_79, 0);
      k_79 = ATgetArgument(i_79, 1);
      {
        ATerm v_19;
        v_19 = t;
        {
          ATerm w_19 = t;
          int x_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(j_79), not_null(k_79));
              LocalPopChoice(x_19);
            }
          else
            {
              t = w_19;
              t = SSL_gtr(not_null(j_79), not_null(k_79));
            }
        }
        t = v_19;
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
  ATerm q_79 = NULL;
  ATerm y_19 = t;
  int z_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_79 = NULL,s_79 = NULL,t_79 = NULL;
      r_79 = t;
      p_79 :
      if(match_cons(r_79, sym__2))
        {
          s_79 = ATgetArgument(r_79, 0);
          t_79 = ATgetArgument(r_79, 1);
          {
            if(((q_79 != NULL) && (q_79 != s_79)))
              _fail(s_79);
            else
              q_79 = s_79;
            if(((q_79 != NULL) && (q_79 != t_79)))
              _fail(t_79);
            else
              q_79 = t_79;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(z_19);
    }
  else
    {
      t = y_19;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm f_89 (ATerm))
{
  ATerm a_20 = t;
  int b_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_20;
      c_20 = t;
      {
        ATerm w_79 = NULL;
        ATerm x_79 = NULL;
        t = term_a_13;
        {
          t = get_config_0(t);
          {
            x_79 = t;
            if(((w_79 != NULL) && (w_79 != x_79)))
              _fail(x_79);
            else
              w_79 = x_79;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(w_79), term_s_12);
          t = geq_0(t);
        }
      }
      t = c_20;
      t = f_89(t);
      LocalPopChoice(b_20);
    }
  else
    {
      t = a_20;
      {
      }
    }
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm c_5 (ATerm t)
  {
    ATerm b_80 = NULL,d_80 = NULL;
    ATerm d_20;
    d_20 = t;
    {
      ATerm c_80 = NULL;
      t = run_time_0(t);
      {
        c_80 = t;
        if(((b_80 != NULL) && (b_80 != c_80)))
          _fail(c_80);
        else
          b_80 = c_80;
      }
    }
    t = d_20;
    {
      ATerm e_80 = NULL;
      t = term_e_20;
      {
        t = get_config_0(t);
        {
          e_80 = t;
          if(((d_80 != NULL) && (d_80 != e_80)))
            _fail(e_80);
          else
            d_80 = e_80;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_n_19, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_g_20), not_null(b_80)), term_f_20), not_null(d_80)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, c_5);
  {
    t = term_o_13;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm l_80 = NULL;
  l_80 = t;
  k_80 :
  if(match_cons(l_80, sym_Version_0))
    {
      ATerm n_80 = NULL,p_80 = NULL;
      ATerm h_20;
      h_20 = t;
      {
        ATerm o_80 = NULL;
        t = SSLgetAnnotations(not_null(l_80));
        {
          o_80 = t;
          if(((n_80 != NULL) && (n_80 != o_80)))
            _fail(o_80);
          else
            n_80 = o_80;
        }
      }
      t = h_20;
      {
        ATerm q_80 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(n_80));
        {
          q_80 = t;
          if(((p_80 != NULL) && (p_80 != q_80)))
            _fail(q_80);
          else
            p_80 = q_80;
        }
        t = not_null(p_80);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm l_87 (ATerm))
{
  ATerm d_5 (ATerm t)
  {
    ATerm i_20 = t;
    int j_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(j_20);
      }
    else
      {
        t = i_20;
        {
          ATerm k_20 = t;
          int l_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(l_20);
            }
          else
            {
              t = k_20;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = fetch_1(t, d_5);
  t = l_87(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm v_80 = NULL;
  v_80 = t;
  t = SSL_table_create(not_null(v_80));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm b_81 = NULL;
  b_81 = t;
  {
    ATerm m_20;
    m_20 = t;
    {
      t = term_n_20;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_n_20, term_o_20, not_null(b_81));
          t = table_put_0(t);
        }
      }
    }
    t = m_20;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm f_81 = NULL;
  f_81 = t;
  t = SSL_table_destroy(not_null(f_81));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm j_81 = NULL;
  j_81 = t;
  t = SSL_exit(not_null(j_81));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm n_81 = NULL,o_81 = NULL,p_81 = NULL;
  n_81 = t;
  m_81 :
  if(((ATgetType(n_81) == AT_LIST) && ATisEmpty(n_81)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(n_81) == AT_LIST) && !(ATisEmpty(n_81))))
        {
          o_81 = ATgetFirst((ATermList) n_81);
          p_81 = (ATerm) ATgetNext((ATermList) n_81);
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
  ATerm p_20;
  p_20 = t;
  {
    ATerm s_81 = NULL;
    ATerm v_81 = NULL;
    ATerm q_20 = t;
    int r_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        LocalPopChoice(r_20);
      }
    else
      {
        t = q_20;
        {
          ATerm t_81 = NULL;
          ATerm u_81 = NULL;
          u_81 = t;
          if(((t_81 != NULL) && (t_81 != u_81)))
            _fail(u_81);
          else
            t_81 = u_81;
          t = (ATerm) ATinsert(ATempty, not_null(t_81));
        }
      }
    {
      v_81 = t;
      if(((s_81 != NULL) && (s_81 != v_81)))
        _fail(v_81);
      else
        s_81 = v_81;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_n_17, not_null(s_81));
      t = printnl_0(t);
    }
  }
  t = p_20;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm j_91 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm h_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm g_82 = NULL,h_82 = NULL,i_82 = NULL;
  i_82 = t;
  f_82 :
  if(((ATgetType(i_82) == AT_LIST) && !(ATisEmpty(i_82))))
    {
      g_82 = ATgetFirst((ATermList) i_82);
      h_82 = (ATerm) ATgetNext((ATermList) i_82);
      {
        ATerm l_82 = NULL;
        t = not_null(h_82);
        {
          ATerm s_20;
          s_20 = t;
          {
            ATerm m_82 = NULL,o_82 = NULL,q_82 = NULL;
            ATerm t_20;
            t_20 = t;
            {
              ATerm n_82 = NULL;
              t = i_0(t);
              {
                n_82 = t;
                if(((m_82 != NULL) && (m_82 != n_82)))
                  _fail(n_82);
                else
                  m_82 = n_82;
              }
            }
            t = t_20;
            {
              ATerm p_82 = NULL;
              t = not_null(g_82);
              {
                t = h_0(t);
                {
                  p_82 = t;
                  if(((o_82 != NULL) && (o_82 != p_82)))
                    _fail(p_82);
                  else
                    o_82 = p_82;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(m_82)), not_null(o_82));
                {
                  q_82 = t;
                  if(((l_82 != NULL) && (l_82 != q_82)))
                    _fail(q_82);
                  else
                    l_82 = q_82;
                }
              }
            }
          }
          t = s_20;
          {
            ATerm e_5 (ATerm t)
            {
              t = not_null(l_82);
              return(t);
            }
            t = reverse_acc_2(t, h_0, e_5);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(i_82) == AT_LIST) && ATisEmpty(i_82)))
        {
          {
            t = term_c_7;
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
ATerm short_description_1 (ATerm t, ATerm i_91 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm v_66 (ATerm))
{
  ATerm b_83 = NULL,d_83 = NULL;
  b_83 = t;
  a_83 :
  if(match_cons(b_83, sym_Program_1))
    {
      d_83 = ATgetArgument(b_83, 0);
      {
        ATerm g_83 = NULL,i_83 = NULL;
        ATerm h_83 = NULL;
        t = SSLgetAnnotations(not_null(b_83));
        {
          h_83 = t;
          if(((g_83 != NULL) && (g_83 != h_83)))
            _fail(h_83);
          else
            g_83 = h_83;
        }
        {
          t = not_null(d_83);
          {
            ATerm k_83 = NULL;
            t = v_66(t);
            {
              i_83 = t;
              {
                ATerm l_83 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(i_83)), not_null(g_83));
                {
                  l_83 = t;
                  if(((k_83 != NULL) && (k_83 != l_83)))
                    _fail(l_83);
                  else
                    k_83 = l_83;
                }
                t = not_null(k_83);
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
  ATerm v_83 = NULL;
  ATerm u_20 = t;
  int v_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_83 = NULL;
      t = term_e_20;
      {
        t = get_config_0(t);
        {
          w_83 = t;
          if(((v_83 != NULL) && (v_83 != w_83)))
            _fail(w_83);
          else
            v_83 = w_83;
        }
      }
      LocalPopChoice(v_20);
    }
  else
    {
      t = u_20;
      {
        ATerm g_5 (ATerm t)
        {
          ATerm h_5 (ATerm t)
          {
            ATerm x_83 = NULL;
            x_83 = t;
            if(((v_83 != NULL) && (v_83 != x_83)))
              _fail(x_83);
            else
              v_83 = x_83;
            return(t);
          }
          t = Program_1(t, h_5);
          return(t);
        }
        t = fetch_1(t, g_5);
      }
    }
  {
    t = term_w_20;
    {
      t = echo_0(t);
      {
        t = term_z_20;
        {
          t = table_get_0(t);
          {
            ATerm i_5 (ATerm t)
            {
              t = (ATerm) ATempty;
              return(t);
            }
            t = reverse_acc_2(t, _id, i_5);
            {
              ATerm k_5 (ATerm t)
              {
                ATerm y_83 = NULL;
                ATerm z_83 = NULL;
                z_83 = t;
                if(((y_83 != NULL) && (y_83 != z_83)))
                  _fail(z_83);
                else
                  y_83 = z_83;
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(y_83)), term_a_21);
                  t = echo_0(t);
                }
                return(t);
              }
              t = map_1(t, k_5);
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
  ATerm b_21;
  b_21 = t;
  {
    ATerm e_84 = NULL;
    ATerm f_84 = NULL;
    f_84 = t;
    if(((e_84 != NULL) && (e_84 != f_84)))
      _fail(f_84);
    else
      e_84 = f_84;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_n_19, (ATerm) ATinsert(ATempty, not_null(e_84)));
      t = printnl_0(t);
    }
  }
  t = b_21;
  return(t);
}
ATerm say_1 (ATerm t, ATerm k_86 (ATerm))
{
  ATerm c_21;
  c_21 = t;
  {
    t = k_86(t);
    t = debug_0(t);
  }
  t = c_21;
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm w_66 (ATerm))
{
  ATerm m_84 = NULL,n_84 = NULL;
  m_84 = t;
  l_84 :
  if(match_cons(m_84, sym_Undefined_1))
    {
      n_84 = ATgetArgument(m_84, 0);
      {
        ATerm q_84 = NULL,s_84 = NULL;
        ATerm r_84 = NULL;
        t = SSLgetAnnotations(not_null(m_84));
        {
          r_84 = t;
          if(((q_84 != NULL) && (q_84 != r_84)))
            _fail(r_84);
          else
            q_84 = r_84;
        }
        {
          t = not_null(n_84);
          {
            ATerm u_84 = NULL;
            t = w_66(t);
            {
              s_84 = t;
              {
                ATerm v_84 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(s_84)), not_null(q_84));
                {
                  v_84 = t;
                  if(((u_84 != NULL) && (u_84 != v_84)))
                    _fail(v_84);
                  else
                    u_84 = v_84;
                }
                t = not_null(u_84);
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
ATerm fetch_1 (ATerm t, ATerm u_75 (ATerm))
{
  ATerm a_85 (ATerm t)
  {
    ATerm d_21 = t;
    int e_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, u_75, _id);
        LocalPopChoice(e_21);
      }
    else
      {
        t = d_21;
        t = Cons_2(t, _id, a_85);
      }
    return(t);
  }
  t = a_85(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm i_90 (ATerm))
{
  t = fetch_1(t, i_90);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm f_85 = NULL;
  f_85 = t;
  e_85 :
  if(match_cons(f_85, sym_Help_0))
    {
      ATerm h_85 = NULL,j_85 = NULL;
      ATerm f_21;
      f_21 = t;
      {
        ATerm i_85 = NULL;
        t = SSLgetAnnotations(not_null(f_85));
        {
          i_85 = t;
          if(((h_85 != NULL) && (h_85 != i_85)))
            _fail(i_85);
          else
            h_85 = i_85;
        }
      }
      t = f_21;
      {
        ATerm k_85 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(h_85));
        {
          k_85 = t;
          if(((j_85 != NULL) && (j_85 != k_85)))
            _fail(k_85);
          else
            j_85 = k_85;
        }
        t = not_null(j_85);
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
  ATerm q_85 = NULL;
  q_85 = t;
  t = SSL_implode_string(not_null(q_85));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm g_21 = t;
  int h_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(h_21);
    }
  else
    {
      t = g_21;
      {
        ATerm v_85 = NULL,w_85 = NULL,x_85 = NULL;
        v_85 = t;
        u_85 :
        if(((ATgetType(v_85) == AT_LIST) && !(ATisEmpty(v_85))))
          {
            w_85 = ATgetFirst((ATermList) v_85);
            x_85 = (ATerm) ATgetNext((ATermList) v_85);
            {
              t = not_null(w_85);
              {
                ATerm l_5 (ATerm t)
                {
                  t = not_null(x_85);
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
  ATerm n_86 = NULL;
  ATerm p_86 = NULL;
  n_86 = t;
  {
    ATerm s_86 = NULL;
    ATerm u_86 = NULL,v_86 = NULL,w_86 = NULL;
    t = not_null(n_86);
    {
      s_86 = t;
      {
        t = SSL_explode_term(not_null(s_86));
        {
          u_86 = t;
          l_86 :
          if(match_cons(u_86, sym__2))
            {
              v_86 = ATgetArgument(u_86, 0);
              w_86 = ATgetArgument(u_86, 1);
              m_86 :
              if(match_string(v_86, ""))
                {
                  if(((p_86 != NULL) && (p_86 != w_86)))
                    _fail(w_86);
                  else
                    p_86 = w_86;
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
      t = not_null(p_86);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm a_76 (ATerm))
{
  ATerm a_87 (ATerm t)
  {
    ATerm i_21 = t;
    int j_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, a_87);
        LocalPopChoice(j_21);
      }
    else
      {
        t = i_21;
        {
          t = Nil_0(t);
          t = a_76(t);
        }
      }
    return(t);
  }
  t = a_87(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm d_87 = NULL,e_87 = NULL,f_87 = NULL;
  d_87 = t;
  c_87 :
  if(match_cons(d_87, sym__2))
    {
      e_87 = ATgetArgument(d_87, 0);
      f_87 = ATgetArgument(d_87, 1);
      {
        t = not_null(e_87);
        {
          ATerm m_5 (ATerm t)
          {
            t = not_null(f_87);
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
  ATerm k_21 = t;
  int l_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      LocalPopChoice(l_21);
    }
  else
    {
      t = k_21;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm k_87 = NULL;
  k_87 = t;
  t = SSL_explode_string(not_null(k_87));
  return(t);
}
ATerm _2 (ATerm t, ATerm r_57 (ATerm), ATerm s_57 (ATerm))
{
  ATerm a_88 = NULL,b_88 = NULL,c_88 = NULL;
  a_88 = t;
  z_87 :
  if(match_cons(a_88, sym__2))
    {
      b_88 = ATgetArgument(a_88, 0);
      c_88 = ATgetArgument(a_88, 1);
      {
        ATerm g_88 = NULL,i_88 = NULL;
        ATerm h_88 = NULL;
        t = SSLgetAnnotations(not_null(a_88));
        {
          h_88 = t;
          if(((g_88 != NULL) && (g_88 != h_88)))
            _fail(h_88);
          else
            g_88 = h_88;
        }
        {
          t = not_null(b_88);
          {
            ATerm k_88 = NULL;
            t = r_57(t);
            {
              i_88 = t;
              {
                t = not_null(c_88);
                {
                  ATerm m_88 = NULL;
                  t = s_57(t);
                  {
                    k_88 = t;
                    {
                      ATerm n_88 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(i_88), not_null(k_88)), not_null(g_88));
                      {
                        n_88 = t;
                        if(((m_88 != NULL) && (m_88 != n_88)))
                          _fail(n_88);
                        else
                          m_88 = n_88;
                      }
                      t = not_null(m_88);
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
    ATerm m_21 = t;
    int n_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = conc_two_lists_0(t);
        LocalPopChoice(n_21);
      }
    else
      {
        t = m_21;
        t = conc_more_lists_0(t);
      }
    t = implode_string_0(t);
  }
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm v_88 = NULL,w_88 = NULL,x_88 = NULL;
  v_88 = t;
  u_88 :
  if(match_cons(v_88, sym__2))
    {
      w_88 = ATgetArgument(v_88, 0);
      x_88 = ATgetArgument(v_88, 1);
      {
        ATerm o_21;
        o_21 = t;
        t = SSL_printnl(not_null(w_88), not_null(x_88));
        t = o_21;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm j_86 (ATerm))
{
  ATerm p_21;
  p_21 = t;
  {
    ATerm d_89 = NULL,h_89 = NULL;
    ATerm q_21;
    q_21 = t;
    {
      ATerm e_89 = NULL;
      t = j_86(t);
      {
        e_89 = t;
        if(((d_89 != NULL) && (d_89 != e_89)))
          _fail(e_89);
        else
          d_89 = e_89;
      }
    }
    t = q_21;
    {
      ATerm i_89 = NULL;
      i_89 = t;
      if(((h_89 != NULL) && (h_89 != i_89)))
        _fail(i_89);
      else
        h_89 = i_89;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_n_19, (ATerm) ATinsert(ATinsert(ATempty, not_null(h_89)), not_null(d_89)));
        t = printnl_0(t);
      }
    }
  }
  t = p_21;
  return(t);
}
ATerm map_1 (ATerm t, ATerm l_75 (ATerm))
{
  ATerm l_89 (ATerm t)
  {
    ATerm r_21 = t;
    int s_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(s_21);
      }
    else
      {
        t = r_21;
        t = Cons_2(t, l_75, l_89);
      }
    return(t);
  }
  t = l_89(t);
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm n_89 = NULL;
  n_89 = t;
  t = SSL_is_string(not_null(n_89));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm t_21 = t;
  int u_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(u_21);
    }
  else
    {
      t = t_21;
      {
        ATerm v_21 = t;
        int w_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_5 (ATerm t)
            {
              ATerm x_21 = t;
              int y_21 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = eval_config_0(t);
                  LocalPopChoice(y_21);
                }
              else
                {
                  t = x_21;
                  {
                  }
                }
              return(t);
            }
            t = map_1(t, n_5);
            LocalPopChoice(w_21);
          }
        else
          {
            t = v_21;
            {
              ATerm w_89 = NULL,x_89 = NULL,y_89 = NULL;
              w_89 = t;
              v_89 :
              if(match_cons(w_89, sym_Path_1))
                {
                  x_89 = ATgetArgument(w_89, 0);
                  t = not_null(x_89);
                }
              else
                {
                  if(match_cons(w_89, sym_Var_1))
                    {
                      x_89 = ATgetArgument(w_89, 0);
                      {
                        t = not_null(x_89);
                        {
                          ATerm z_21 = t;
                          int a_22 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(a_22);
                            }
                          else
                            {
                              t = z_21;
                              {
                                ATerm o_5 (ATerm t)
                                {
                                  t = term_b_22;
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
                      if(match_cons(w_89, sym_Prefix_2))
                        {
                          x_89 = ATgetArgument(w_89, 0);
                          y_89 = ATgetArgument(w_89, 1);
                          {
                            ATerm d_90 = NULL,f_90 = NULL;
                            ATerm c_22;
                            c_22 = t;
                            {
                              ATerm e_90 = NULL;
                              t = not_null(x_89);
                              {
                                t = eval_config_0(t);
                                {
                                  e_90 = t;
                                  if(((d_90 != NULL) && (d_90 != e_90)))
                                    _fail(e_90);
                                  else
                                    d_90 = e_90;
                                }
                              }
                            }
                            t = c_22;
                            {
                              ATerm g_90 = NULL;
                              t = not_null(y_89);
                              {
                                t = eval_config_0(t);
                                {
                                  g_90 = t;
                                  if(((f_90 != NULL) && (f_90 != g_90)))
                                    _fail(g_90);
                                  else
                                    f_90 = g_90;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(d_90), not_null(f_90));
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
  ATerm p_90 = NULL;
  p_90 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_d_22, not_null(p_90));
    {
      t = table_get_0(t);
      {
        ATerm e_22 = t;
        int f_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = eval_config_0(t);
            {
              ATerm g_22;
              g_22 = t;
              {
                ATerm r_90 = NULL;
                ATerm s_90 = NULL;
                s_90 = t;
                if(((r_90 != NULL) && (r_90 != s_90)))
                  _fail(s_90);
                else
                  r_90 = s_90;
                {
                  t = (ATerm) ATmakeAppl(sym__3, term_d_22, not_null(p_90), not_null(r_90));
                  t = table_put_0(t);
                }
              }
              t = g_22;
            }
            LocalPopChoice(f_22);
          }
        else
          {
            t = e_22;
            {
            }
          }
      }
    }
  }
  return(t);
}
ATerm try_1 (ATerm t, ATerm u_67 (ATerm))
{
  ATerm h_22 = t;
  int i_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = u_67(t);
      LocalPopChoice(i_22);
    }
  else
    {
      t = h_22;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm x_90 = NULL,y_90 = NULL,z_90 = NULL;
  x_90 = t;
  w_90 :
  if(match_cons(x_90, sym__2))
    {
      y_90 = ATgetArgument(x_90, 0);
      z_90 = ATgetArgument(x_90, 1);
      t = SSL_table_get(not_null(y_90), not_null(z_90));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm o_91 = NULL,p_91 = NULL,q_91 = NULL,r_91 = NULL;
  o_91 = t;
  h_91 :
  if(match_cons(o_91, sym__3))
    {
      p_91 = ATgetArgument(o_91, 0);
      q_91 = ATgetArgument(o_91, 1);
      r_91 = ATgetArgument(o_91, 2);
      {
        ATerm j_22;
        j_22 = t;
        {
          ATerm v_91 = NULL;
          ATerm w_91 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(p_91), not_null(q_91));
          {
            ATerm k_22 = t;
            int l_22 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(l_22);
              }
            else
              {
                t = k_22;
                t = (ATerm) ATempty;
              }
            {
              w_91 = t;
              if(((v_91 != NULL) && (v_91 != w_91)))
                _fail(w_91);
              else
                v_91 = w_91;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(p_91), not_null(q_91), (ATerm) ATinsert(CheckATermList(not_null(v_91)), not_null(r_91)));
            t = table_put_0(t);
          }
        }
        t = j_22;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm n_91 (ATerm))
{
  ATerm a_92 = NULL;
  ATerm b_92 = NULL;
  t = term_c_7;
  {
    t = n_91(t);
    {
      b_92 = t;
      if(((a_92 != NULL) && (a_92 != b_92)))
        _fail(b_92);
      else
        a_92 = b_92;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_x_20, term_y_20, not_null(a_92));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm))
{
  ATerm h_92 = NULL,i_92 = NULL,j_92 = NULL;
  h_92 = t;
  g_92 :
  if(match_string(h_92, "register-usage-info"))
    {
      t = register_usage_1(t, g_0);
    }
  else
    {
      if(((ATgetType(h_92) == AT_LIST) && !(ATisEmpty(h_92))))
        {
          i_92 = ATgetFirst((ATermList) h_92);
          j_92 = (ATerm) ATgetNext((ATermList) h_92);
          {
            ATerm m_92 = NULL;
            ATerm m_22;
            m_22 = t;
            {
              t = not_null(i_92);
              t = a_0(t);
            }
            t = m_22;
            {
              ATerm n_92 = NULL;
              t = term_c_7;
              {
                t = d_0(t);
                {
                  n_92 = t;
                  if(((m_92 != NULL) && (m_92 != n_92)))
                    _fail(n_92);
                  else
                    m_92 = n_92;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(j_92)), not_null(m_92));
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
  ATerm x_5 (ATerm t)
  {
    ATerm s_92 = NULL;
    s_92 = t;
    r_92 :
    if(!(match_string(s_92, "--help")))
      {
        if(!(match_string(s_92, "-h")))
          {
            if(!(match_string(s_92, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm y_5 (ATerm t)
  {
    t = term_o_22;
    {
      t = set_config_0(t);
      t = term_p_22;
    }
    return(t);
  }
  ATerm z_5 (ATerm t)
  {
    t = term_q_22;
    return(t);
  }
  t = Option_3(t, x_5, y_5, z_5);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm v_92 = NULL,w_92 = NULL,x_92 = NULL;
  v_92 = t;
  u_92 :
  if(((ATgetType(v_92) == AT_LIST) && !(ATisEmpty(v_92))))
    {
      w_92 = ATgetFirst((ATermList) v_92);
      x_92 = (ATerm) ATgetNext((ATermList) v_92);
      t = (ATerm) ATinsert(CheckATermList(not_null(x_92)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(w_92)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm a_59 (ATerm), ATerm b_59 (ATerm))
{
  ATerm h_93 = NULL,i_93 = NULL,j_93 = NULL;
  h_93 = t;
  g_93 :
  if(((ATgetType(h_93) == AT_LIST) && !(ATisEmpty(h_93))))
    {
      i_93 = ATgetFirst((ATermList) h_93);
      j_93 = (ATerm) ATgetNext((ATermList) h_93);
      {
        ATerm n_93 = NULL,p_93 = NULL;
        ATerm o_93 = NULL;
        t = SSLgetAnnotations(not_null(h_93));
        {
          o_93 = t;
          if(((n_93 != NULL) && (n_93 != o_93)))
            _fail(o_93);
          else
            n_93 = o_93;
        }
        {
          t = not_null(i_93);
          {
            ATerm r_93 = NULL;
            t = a_59(t);
            {
              p_93 = t;
              {
                t = not_null(j_93);
                {
                  ATerm t_93 = NULL;
                  t = b_59(t);
                  {
                    r_93 = t;
                    {
                      ATerm u_93 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(r_93)), not_null(p_93)), not_null(n_93));
                      {
                        u_93 = t;
                        if(((t_93 != NULL) && (t_93 != u_93)))
                          _fail(u_93);
                        else
                          t_93 = u_93;
                      }
                      t = not_null(t_93);
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
  ATerm e_94 = NULL;
  e_94 = t;
  d_94 :
  if(((ATgetType(e_94) == AT_LIST) && ATisEmpty(e_94)))
    {
      {
        ATerm g_94 = NULL,i_94 = NULL;
        ATerm r_22;
        r_22 = t;
        {
          ATerm h_94 = NULL;
          t = SSLgetAnnotations(not_null(e_94));
          {
            h_94 = t;
            if(((g_94 != NULL) && (g_94 != h_94)))
              _fail(h_94);
            else
              g_94 = h_94;
          }
        }
        t = r_22;
        {
          ATerm j_94 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(g_94));
          {
            j_94 = t;
            if(((i_94 != NULL) && (i_94 != j_94)))
              _fail(j_94);
            else
              i_94 = j_94;
          }
          t = not_null(i_94);
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
  ATerm p_94 = NULL,q_94 = NULL,r_94 = NULL;
  p_94 = t;
  o_94 :
  if(match_cons(p_94, sym__2))
    {
      q_94 = ATgetArgument(p_94, 0);
      r_94 = ATgetArgument(p_94, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_d_22, not_null(q_94), not_null(r_94));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm l_91 (ATerm))
{
  ATerm s_22;
  s_22 = t;
  {
    ATerm t_22 = t;
    int u_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_v_22;
        t = l_91(t);
        LocalPopChoice(u_22);
      }
    else
      {
        t = t_22;
        {
        }
      }
  }
  t = s_22;
  {
    ATerm a_6 (ATerm t)
    {
      ATerm z_94 = NULL;
      ATerm w_22;
      w_22 = t;
      {
        ATerm x_94 = NULL;
        ATerm y_94 = NULL;
        y_94 = t;
        if(((x_94 != NULL) && (x_94 != y_94)))
          _fail(y_94);
        else
          x_94 = y_94;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_e_20, not_null(x_94));
          t = set_config_0(t);
        }
      }
      t = w_22;
      {
        ATerm a_95 = NULL;
        a_95 = t;
        if(((z_94 != NULL) && (z_94 != a_95)))
          _fail(a_95);
        else
          z_94 = a_95;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(z_94));
      }
      return(t);
    }
    ATerm e_6 (ATerm t)
    {
      ATerm x_22 = t;
      int y_22 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm z_22 = t;
          int a_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(a_23);
            }
          else
            {
              t = z_22;
              {
                t = l_91(t);
                t = Cons_2(t, _id, e_6);
              }
            }
          LocalPopChoice(y_22);
        }
      else
        {
          t = x_22;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, a_6, e_6);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm g_95 = NULL,h_95 = NULL,i_95 = NULL;
  ATerm b_23;
  b_23 = t;
  {
    ATerm j_95 = NULL,k_95 = NULL,l_95 = NULL,m_95 = NULL;
    j_95 = t;
    f_95 :
    if(match_cons(j_95, sym__3))
      {
        k_95 = ATgetArgument(j_95, 0);
        l_95 = ATgetArgument(j_95, 1);
        m_95 = ATgetArgument(j_95, 2);
        {
          if(((g_95 != NULL) && (g_95 != k_95)))
            _fail(k_95);
          else
            g_95 = k_95;
          {
            if(((h_95 != NULL) && (h_95 != l_95)))
              _fail(l_95);
            else
              h_95 = l_95;
            {
              if(((i_95 != NULL) && (i_95 != m_95)))
                _fail(m_95);
              else
                i_95 = m_95;
              t = SSL_table_put(not_null(g_95), not_null(h_95), not_null(i_95));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = b_23;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm k_91 (ATerm))
{
  ATerm p_95 = NULL;
  ATerm c_23;
  c_23 = t;
  {
    t = term_d_23;
    t = table_put_0(t);
  }
  t = c_23;
  {
    ATerm f_6 (ATerm t)
    {
      ATerm e_23 = t;
      int f_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = k_91(t);
          LocalPopChoice(f_23);
        }
      else
        {
          t = e_23;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, f_6);
    {
      ATerm g_23 = t;
      int h_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm i_23;
          i_23 = t;
          {
            ATerm j_23 = t;
            int k_23 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = term_n_22;
                t = get_config_0(t);
                LocalPopChoice(k_23);
              }
            else
              {
                t = j_23;
                t = fetch_1(t, Help_0);
              }
          }
          t = i_23;
          {
            t = system_usage_0(t);
            {
              t = term_o_13;
              t = exit_0(t);
            }
          }
          LocalPopChoice(h_23);
        }
      else
        {
          t = g_23;
          {
            ATerm l_23 = t;
            int m_23 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm h_6 (ATerm t)
                {
                  ATerm i_6 (ATerm t)
                  {
                    ATerm q_95 = NULL;
                    q_95 = t;
                    if(((p_95 != NULL) && (p_95 != q_95)))
                      _fail(q_95);
                    else
                      p_95 = q_95;
                    return(t);
                  }
                  t = Undefined_1(t, i_6);
                  return(t);
                }
                t = fetch_1(t, h_6);
                {
                  ATerm j_6 (ATerm t)
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(p_95)), term_n_23);
                    return(t);
                  }
                  t = say_1(t, j_6);
                  {
                    t = system_usage_0(t);
                    {
                      t = term_s_12;
                      t = exit_0(t);
                    }
                  }
                }
                LocalPopChoice(m_23);
              }
            else
              {
                t = l_23;
                {
                }
              }
          }
        }
      {
        ATerm o_23;
        o_23 = t;
        {
          t = term_x_20;
          t = table_destroy_0(t);
        }
        t = o_23;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm r_87 (ATerm), ATerm s_87 (ATerm), ATerm t_87 (ATerm), ATerm u_87 (ATerm))
{
  t = parse_options_1(t, r_87);
  {
    t = store_options_0(t);
    {
      t = t_87(t);
      {
        ATerm p_23 = t;
        int q_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, s_87);
            LocalPopChoice(q_23);
          }
        else
          {
            t = p_23;
            {
              ATerm r_23 = t;
              int s_23 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = u_87(t);
                  t = report_success_0(t);
                  LocalPopChoice(s_23);
                }
              else
                {
                  t = r_23;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm option_wrap_2 (ATerm t, ATerm v_87 (ATerm), ATerm w_87 (ATerm))
{
  t = option_wrap_4(t, v_87, default_usage_0, _id, w_87);
  return(t);
}
ATerm io_Abox_2_latex_0 (ATerm t)
{
  ATerm k_6 (ATerm t)
  {
    t = load_latex_table_0(t);
    t = Abox_2_latex_0(t);
    return(t);
  }
  t = option_wrap_2(t, Abox2latex_options_0, k_6);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = io_Abox_2_latex_0(t);
  return(t);
}