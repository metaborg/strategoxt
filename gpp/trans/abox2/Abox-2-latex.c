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
ATerm term_m_22;
ATerm term_e_22;
ATerm term_w_21;
ATerm term_t_21;
ATerm term_s_21;
ATerm term_r_21;
ATerm term_q_21;
ATerm term_i_21;
ATerm term_g_21;
ATerm term_j_20;
ATerm term_i_20;
ATerm term_h_20;
ATerm term_g_20;
ATerm term_f_20;
ATerm term_x_19;
ATerm term_w_19;
ATerm term_p_19;
ATerm term_o_19;
ATerm term_n_19;
ATerm term_b_19;
ATerm term_a_19;
ATerm term_z_18;
ATerm term_y_18;
ATerm term_o_18;
ATerm term_l_18;
ATerm term_k_18;
ATerm term_j_18;
ATerm term_i_18;
ATerm term_f_18;
ATerm term_z_17;
ATerm term_y_17;
ATerm term_x_17;
ATerm term_w_17;
ATerm term_v_17;
ATerm term_r_17;
ATerm term_q_17;
ATerm term_p_17;
ATerm term_m_17;
ATerm term_l_17;
ATerm term_j_17;
ATerm term_i_17;
ATerm term_h_17;
ATerm term_g_17;
ATerm term_f_17;
ATerm term_e_17;
ATerm term_d_17;
ATerm term_y_16;
ATerm term_x_16;
ATerm term_u_16;
ATerm term_r_16;
ATerm term_p_15;
ATerm term_o_15;
ATerm term_z_14;
ATerm term_x_14;
ATerm term_v_14;
ATerm term_y_13;
ATerm term_x_13;
ATerm term_w_13;
ATerm term_v_13;
ATerm term_q_13;
ATerm term_f_13;
ATerm term_v_12;
ATerm term_u_12;
ATerm term_s_12;
ATerm term_r_12;
ATerm term_l_12;
ATerm term_i_12;
ATerm term_x_11;
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
ATerm term_f_11;
ATerm term_e_11;
ATerm term_d_11;
ATerm term_c_11;
ATerm term_x_10;
ATerm term_w_10;
ATerm term_o_10;
ATerm term_f_10;
ATerm term_e_10;
ATerm term_d_10;
ATerm term_c_10;
ATerm term_b_10;
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
ATerm term_c_9;
ATerm term_b_9;
ATerm term_a_9;
ATerm term_z_8;
ATerm term_y_8;
ATerm term_x_8;
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
ATerm term_o_7;
ATerm term_m_7;
ATerm term_l_7;
ATerm term_k_7;
ATerm term_i_7;
ATerm term_f_7;
ATerm term_d_7;
void init_constant_terms (void)
{
  ATprotect(&(term_d_7));
  term_d_7 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_f_7));
  term_f_7 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_i_7));
  term_i_7 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file>(file, mode)", 0, ATtrue));
  ATprotect(&(term_k_7));
  term_k_7 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_l_7));
  term_l_7 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_m_7));
  term_m_7 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_o_7));
  term_o_7 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_q_7));
  term_q_7 = (ATerm) ATmakeAppl(ATmakeSymbol("\\\ncopies{", 0, ATtrue));
  ATprotect(&(term_r_7));
  term_r_7 = (ATerm) ATmakeAppl(ATmakeSymbol("}{", 0, ATtrue));
  ATprotect(&(term_s_7));
  term_s_7 = (ATerm) ATmakeAppl(ATmakeSymbol("}%", 0, ATtrue));
  ATprotect(&(term_t_7));
  term_t_7 = (ATerm) ATmakeAppl(ATmakeSymbol("\\begin{LBOX}{=}%\n", 0, ATtrue));
  ATprotect(&(term_u_7));
  term_u_7 = (ATerm) ATmakeAppl(ATmakeSymbol("%\n\\end{LBOX}%\n", 0, ATtrue));
  ATprotect(&(term_v_7));
  term_v_7 = (ATerm) ATmakeAppl(ATmakeSymbol("\\begin{LBOX}{", 0, ATtrue));
  ATprotect(&(term_w_7));
  term_w_7 = (ATerm) ATmakeAppl(ATmakeSymbol("}%\n", 0, ATtrue));
  ATprotect(&(term_x_7));
  term_x_7 = (ATerm) ATmakeAppl(ATmakeSymbol("\\boxlabel{", 0, ATtrue));
  ATprotect(&(term_y_7));
  term_y_7 = (ATerm) ATmakeAppl(ATmakeSymbol("}", 0, ATtrue));
  ATprotect(&(term_z_7));
  term_z_7 = (ATerm) ATmakeAppl(ATmakeSymbol("\\boxref{", 0, ATtrue));
  ATprotect(&(term_a_8));
  term_a_8 = (ATerm) ATmakeAppl(ATmakeSymbol("\\KWf{", 0, ATtrue));
  ATprotect(&(term_b_8));
  term_b_8 = (ATerm) ATmakeAppl(ATmakeSymbol("\\VARf{", 0, ATtrue));
  ATprotect(&(term_c_8));
  term_c_8 = (ATerm) ATmakeAppl(ATmakeSymbol("\\NUMf{", 0, ATtrue));
  ATprotect(&(term_d_8));
  term_d_8 = (ATerm) ATmakeAppl(ATmakeSymbol("\\MATHf{", 0, ATtrue));
  ATprotect(&(term_e_8));
  term_e_8 = (ATerm) ATmakeAppl(ATmakeSymbol("\\textsf{", 0, ATtrue));
  ATprotect(&(term_f_8));
  term_f_8 = (ATerm) ATmakeAppl(ATmakeSymbol("\\textrm{", 0, ATtrue));
  ATprotect(&(term_g_8));
  term_g_8 = (ATerm) ATmakeAppl(ATmakeSymbol("\\texttt{", 0, ATtrue));
  ATprotect(&(term_h_8));
  term_h_8 = (ATerm) ATmakeAppl(ATmakeSymbol("\\textmd{", 0, ATtrue));
  ATprotect(&(term_i_8));
  term_i_8 = (ATerm) ATmakeAppl(ATmakeSymbol("\\textbf{", 0, ATtrue));
  ATprotect(&(term_j_8));
  term_j_8 = (ATerm) ATmakeAppl(ATmakeSymbol("\\textup{", 0, ATtrue));
  ATprotect(&(term_k_8));
  term_k_8 = (ATerm) ATmakeAppl(ATmakeSymbol("\\textit{", 0, ATtrue));
  ATprotect(&(term_x_8));
  term_x_8 = (ATerm) ATmakeAppl(ATmakeSymbol("\\textsc{", 0, ATtrue));
  ATprotect(&(term_y_8));
  term_y_8 = (ATerm) ATmakeAppl(ATmakeSymbol("\\textsl{", 0, ATtrue));
  ATprotect(&(term_z_8));
  term_z_8 = (ATerm) ATmakeAppl(ATmakeSymbol("\\emph{", 0, ATtrue));
  ATprotect(&(term_a_9));
  term_a_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\\tiny{", 0, ATtrue));
  ATprotect(&(term_b_9));
  term_b_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\\scriptsize{", 0, ATtrue));
  ATprotect(&(term_c_9));
  term_c_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\\footnotesize{", 0, ATtrue));
  ATprotect(&(term_d_9));
  term_d_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\\small{", 0, ATtrue));
  ATprotect(&(term_e_9));
  term_e_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\\normalsize{", 0, ATtrue));
  ATprotect(&(term_f_9));
  term_f_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\\large{", 0, ATtrue));
  ATprotect(&(term_g_9));
  term_g_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\\Large{", 0, ATtrue));
  ATprotect(&(term_h_9));
  term_h_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\\LARGE{", 0, ATtrue));
  ATprotect(&(term_i_9));
  term_i_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\\huge{", 0, ATtrue));
  ATprotect(&(term_j_9));
  term_j_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\\Huge{", 0, ATtrue));
  ATprotect(&(term_k_9));
  term_k_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\\textcolor{", 0, ATtrue));
  ATprotect(&(term_l_9));
  term_l_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\\hfill#\\hfill", 0, ATtrue));
  ATprotect(&(term_m_9));
  term_m_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\\hfill#", 0, ATtrue));
  ATprotect(&(term_n_9));
  term_n_9 = (ATerm) ATmakeAppl(ATmakeSymbol("#\\hfill", 0, ATtrue));
  ATprotect(&(term_o_9));
  term_o_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\\cr", 0, ATtrue));
  ATprotect(&(term_p_9));
  term_p_9 = (ATerm) ATmakeAppl(ATmakeSymbol("&", 0, ATtrue));
  ATprotect(&(term_q_9));
  term_q_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\\begin{boxenv}%\n", 0, ATtrue));
  ATprotect(&(term_r_9));
  term_r_9 = (ATerm) ATmakeAppl(ATmakeSymbol("%\n\\end{boxenv}\n", 0, ATtrue));
  ATprotect(&(term_s_9));
  term_s_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\\begin{boxenv}{", 0, ATtrue));
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\\begin{HBOX}{", 0, ATtrue));
  ATprotect(&(term_u_9));
  term_u_9 = (ATerm) ATmakeAppl(ATmakeSymbol("%\n\\end{HBOX}%\n", 0, ATtrue));
  ATprotect(&(term_v_9));
  term_v_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\\begin{VBOX}{", 0, ATtrue));
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeAppl(ATmakeSymbol("%\n\\end{VBOX}%\n", 0, ATtrue));
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\\begin{HVBOX}{", 0, ATtrue));
  ATprotect(&(term_y_9));
  term_y_9 = (ATerm) ATmakeAppl(ATmakeSymbol("%\n\\end{HVBOX}%\n", 0, ATtrue));
  ATprotect(&(term_z_9));
  term_z_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\\begin{ABOX}{", 0, ATtrue));
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\crcr%\n\\end{ABOX}%\n", 0, ATtrue));
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\begin{ALTBOX}{%\n", 0, ATtrue));
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeAppl(ATmakeSymbol("%\n}", 0, ATtrue));
  ATprotect(&(term_d_10));
  term_d_10 = (ATerm) ATmakeAppl(ATmakeSymbol("%\n}%\n\\end{ALTBOX}%\n", 0, ATtrue));
  ATprotect(&(term_e_10));
  term_e_10 = (ATerm) ATmakeAppl(ATmakeSymbol("%\n\\begin{latextext}%\n", 0, ATtrue));
  ATprotect(&(term_f_10));
  term_f_10 = (ATerm) ATmakeAppl(ATmakeSymbol("%\n\\end{latextext}%\n", 0, ATtrue));
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--width", 0, ATtrue));
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeInt(39);
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeInt(96);
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeAppl(ATmakeSymbol("latex-abbrevs", 0, ATtrue));
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeAppl(ATmakeSymbol("\\boxspace{}", 0, ATtrue));
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeAppl(ATmakeSymbol("\\#", 0, ATtrue));
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeAppl(ATmakeSymbol("\\$", 0, ATtrue));
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeAppl(ATmakeSymbol("\\%", 0, ATtrue));
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeAppl(ATmakeSymbol("\\&", 0, ATtrue));
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(ATmakeSymbol("\\mbox{-}", 0, ATtrue));
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeAppl(ATmakeSymbol("\\ensuremath{<}", 0, ATtrue));
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeAppl(ATmakeSymbol("\\ensuremath{>}", 0, ATtrue));
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeAppl(ATmakeSymbol("\\ensuremath{\\backslash}", 0, ATtrue));
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeAppl(ATmakeSymbol("\\^{}", 0, ATtrue));
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeAppl(ATmakeSymbol("\\_", 0, ATtrue));
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeAppl(ATmakeSymbol("\\{", 0, ATtrue));
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeAppl(ATmakeSymbol("\\ensuremath{\\vert}", 0, ATtrue));
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(ATmakeSymbol("\\}", 0, ATtrue));
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeAppl(ATmakeSymbol("\\~{}", 0, ATtrue));
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeAppl(ATmakeSymbol("~", 0, ATtrue));
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeAppl(ATmakeSymbol("dissuasive library strategy: ", 0, ATtrue));
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeAppl(ATmakeSymbol("separate-by/1; Use separate-by/0 and term wrap patterns: <separate-by> (a, <id>)", 0, ATtrue));
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeAppl(sym_CSEP_0);
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeAppl(sym_L_0);
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeAppl(sym_C_0);
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(sym_R_0);
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeAppl(sym_EOR_0);
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeInt(61);
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(ATmakeSymbol("\\ ", 0, ATtrue));
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(ATmakeSymbol("\n\n", 0, ATtrue));
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeAppl(sym__2, term_o_7, term_d_7);
  ATprotect(&(term_u_16));
  term_u_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: file doesn't exist or doesn't contain a valid term: ", 0, ATtrue));
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--latex-table", 0, ATtrue));
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_g_17));
  term_g_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_h_17));
  term_h_17 = (ATerm) ATmakeAppl(sym__2, term_g_17, term_l_7);
  ATprotect(&(term_i_17));
  term_i_17 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_j_17));
  term_j_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_l_17));
  term_l_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_m_17));
  term_m_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeAppl(sym__2, term_r_12, term_f_13);
  ATprotect(&(term_q_17));
  term_q_17 = (ATerm) ATmakeAppl(sym_Verbose_1, term_f_13);
  ATprotect(&(term_r_17));
  term_r_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_v_17));
  term_v_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_w_17));
  term_w_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeAppl(sym__2, term_w_17, term_l_7);
  ATprotect(&(term_y_17));
  term_y_17 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_z_17));
  term_z_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_f_18));
  term_f_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_i_18));
  term_i_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_j_18));
  term_j_18 = (ATerm) ATmakeAppl(sym__2, term_i_18, term_l_7);
  ATprotect(&(term_k_18));
  term_k_18 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_l_18));
  term_l_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_o_18));
  term_o_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_y_18));
  term_y_18 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_z_18));
  term_z_18 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_a_19));
  term_a_19 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_b_19));
  term_b_19 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_n_19));
  term_n_19 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_o_19));
  term_o_19 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_p_19));
  term_p_19 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_w_19));
  term_w_19 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_x_19));
  term_x_19 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_f_20));
  term_f_20 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_g_20));
  term_g_20 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_h_20));
  term_h_20 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_i_20));
  term_i_20 = (ATerm) ATmakeAppl(sym__2, term_g_20, term_h_20);
  ATprotect(&(term_j_20));
  term_j_20 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_g_21));
  term_g_21 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_i_21));
  term_i_21 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_q_21));
  term_q_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_r_21));
  term_r_21 = (ATerm) ATmakeAppl(sym__2, term_q_21, term_l_7);
  ATprotect(&(term_s_21));
  term_s_21 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_t_21));
  term_t_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_w_21));
  term_w_21 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_e_22));
  term_e_22 = (ATerm) ATmakeAppl(sym__3, term_g_20, term_h_20, (ATerm) ATempty);
  ATprotect(&(term_m_22));
  term_m_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm close_file_0 (ATerm);
ATerm print_0 (ATerm);
ATerm assert_1 (ATerm, ATerm j_86 (ATerm));
ATerm obsolete_1 (ATerm, ATerm x_86 (ATerm));
ATerm open_file_0 (ATerm);
ATerm new_0 (ATerm);
ATerm new_file_0 (ATerm);
ATerm xtc_new_file_0 (ATerm);
ATerm topdown_print_to_0 (ATerm);
ATerm is_int_0 (ATerm);
ATerm Latex2text_0 (ATerm);
ATerm bottomup_1 (ATerm, ATerm p_69 (ATerm));
ATerm latex2text_0 (ATerm);
ATerm BOXENV_args_0 (ATerm);
ATerm Hd_0 (ATerm);
ATerm flat_list_0 (ATerm);
ATerm replace_quotes_0 (ATerm);
ATerm listtd_1 (ATerm, ATerm z_76 (ATerm));
ATerm string_as_chars_1 (ATerm, ATerm s_85 (ATerm));
ATerm latex_string_0 (ATerm);
ATerm remove_trailing_1 (ATerm, ATerm w_67 (ATerm));
ATerm at_suffix_1 (ATerm, ATerm l_76 (ATerm));
ATerm LatexComment_0 (ATerm);
ATerm make_latex_comment_0 (ATerm);
ATerm MATH_0 (ATerm);
ATerm NUM_0 (ATerm);
ATerm VAR_0 (ATerm);
ATerm KW_0 (ATerm);
ATerm CL_0 (ATerm);
ATerm FFID_2 (ATerm, ATerm x_59 (ATerm), ATerm y_59 (ATerm));
ATerm SZ_0 (ATerm);
ATerm SH_0 (ATerm);
ATerm SE_0 (ATerm);
ATerm FM_0 (ATerm);
ATerm toh_0 (ATerm);
ATerm hs_length_0 (ATerm);
ATerm Hspace_0 (ATerm);
ATerm separate_by_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm n_89 (ATerm));
ATerm dissuader_1 (ATerm, ATerm y_86 (ATerm));
ATerm separate_by_1 (ATerm, ATerm o_75 (ATerm));
ATerm filter_1 (ATerm, ATerm j_83 (ATerm));
ATerm is_length_0 (ATerm);
ATerm Ispace_0 (ATerm);
ATerm int_to_string_0 (ATerm);
ATerm SOpt_2 (ATerm, ATerm t_60 (ATerm), ATerm u_60 (ATerm));
ATerm SOpt_value_1 (ATerm, ATerm r_67 (ATerm));
ATerm vs_length_0 (ATerm);
ATerm Vspace_0 (ATerm);
ATerm C_2 (ATerm, ATerm p_59 (ATerm), ATerm q_59 (ATerm));
ATerm table_row_0 (ATerm);
ATerm MkRows_0 (ATerm);
ATerm at_last_1 (ATerm, ATerm s_76 (ATerm));
ATerm table_def_0 (ATerm);
ATerm subt_0 (ATerm);
ATerm while_not_2 (ATerm, ATerm f_69 (ATerm), ATerm g_69 (ATerm));
ATerm for_3 (ATerm, ATerm i_69 (ATerm), ATerm j_69 (ATerm), ATerm k_69 (ATerm));
ATerm copy_0 (ATerm);
ATerm R_2 (ATerm, ATerm f_60 (ATerm), ATerm g_60 (ATerm));
ATerm split_2 (ATerm, ATerm v_83 (ATerm), ATerm w_83 (ATerm));
ATerm construct_rows_0 (ATerm);
ATerm Abox2latex_0 (ATerm);
ATerm topdown_1 (ATerm, ATerm o_69 (ATerm));
ATerm abox2latex_0 (ATerm);
ATerm file_exists_0 (ATerm);
ATerm read_from_0 (ATerm);
ATerm copy_file_0 (ATerm);
ATerm stderr_0 (ATerm);
ATerm stdout_0 (ATerm);
ATerm copy_to_1 (ATerm, ATerm m_0 (ATerm));
ATerm Tl_0 (ATerm);
ATerm table_pop_0 (ATerm);
ATerm end_scope_1 (ATerm, ATerm g_86 (ATerm));
ATerm remove_file_0 (ATerm);
ATerm restore_always_2 (ATerm, ATerm j_68 (ATerm), ATerm k_68 (ATerm));
ATerm begin_scope_1 (ATerm, ATerm f_86 (ATerm));
ATerm xtc_temp_files_1 (ATerm, ATerm y_95 (ATerm));
ATerm xtc_io_1 (ATerm, ATerm z_95 (ATerm));
ATerm xtc_io_wrap_2 (ATerm, ATerm d_96 (ATerm), ATerm e_96 (ATerm));
ATerm xtc_io_wrap_1 (ATerm, ATerm c_96 (ATerm));
ATerm Abox_2_latex_0 (ATerm);
ATerm ReadFromFile_0 (ATerm);
ATerm load_latex_table_0 (ATerm);
ATerm ArgOption_2 (ATerm, ATerm i_91 (ATerm), ATerm j_91 (ATerm));
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
ATerm foldr_2 (ATerm, ATerm g_82 (ATerm), ATerm h_82 (ATerm));
ATerm crush_2 (ATerm, ATerm e_81 (ATerm), ATerm f_81 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm m_89 (ATerm));
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm s_87 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm q_91 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm h_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm p_91 (ATerm));
ATerm Program_1 (ATerm, ATerm a_67 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm r_86 (ATerm));
ATerm Undefined_1 (ATerm, ATerm b_67 (ATerm));
ATerm fetch_1 (ATerm, ATerm b_76 (ATerm));
ATerm option_defined_1 (ATerm, ATerm p_90 (ATerm));
ATerm Help_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm h_76 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm _2 (ATerm, ATerm w_57 (ATerm), ATerm x_57 (ATerm));
ATerm conc_strings_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm debug_1 (ATerm, ATerm q_86 (ATerm));
ATerm map_1 (ATerm, ATerm s_75 (ATerm));
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm try_1 (ATerm, ATerm z_67 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm u_91 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm f_59 (ATerm), ATerm g_59 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm s_91 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm r_91 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm y_87 (ATerm), ATerm z_87 (ATerm), ATerm a_88 (ATerm), ATerm b_88 (ATerm));
ATerm option_wrap_2 (ATerm, ATerm c_88 (ATerm), ATerm d_88 (ATerm));
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
  ATerm v_0 = NULL,w_0 = NULL,x_0 = NULL;
  v_0 = t;
  r_0 :
  if(match_cons(v_0, sym__2))
    {
      w_0 = ATgetArgument(v_0, 0);
      x_0 = ATgetArgument(v_0, 1);
      {
        ATerm x_5;
        x_5 = t;
        t = SSL_print(not_null(w_0), not_null(x_0));
        t = x_5;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm assert_1 (ATerm t, ATerm j_86 (ATerm))
{
  ATerm w_1 = NULL,a_2 = NULL,b_2 = NULL;
  w_1 = t;
  v_1 :
  if(match_cons(w_1, sym__2))
    {
      a_2 = ATgetArgument(w_1, 0);
      b_2 = ATgetArgument(w_1, 1);
      {
        ATerm h_2 = NULL,i_2 = NULL,m_2 = NULL;
        ATerm a_7;
        a_7 = t;
        {
          ATerm n_2 = NULL;
          ATerm o_2 = NULL,n_3 = NULL,o_3 = NULL;
          t = j_86(t);
          {
            n_2 = t;
            {
              if(((h_2 != NULL) && (h_2 != n_2)))
                _fail(n_2);
              else
                h_2 = n_2;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(h_2), not_null(a_2), not_null(b_2));
                {
                  t = table_push_0(t);
                  {
                    ATerm b_7 = t;
                    int c_7 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(h_2), term_d_7);
                        t = table_get_0(t);
                        LocalPopChoice(c_7);
                      }
                    else
                      {
                        t = b_7;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      o_2 = t;
                      u_1 :
                      if(((ATgetType(o_2) == AT_LIST) && !(ATisEmpty(o_2))))
                        {
                          n_3 = ATgetFirst((ATermList) o_2);
                          o_3 = (ATerm) ATgetNext((ATermList) o_2);
                          {
                            if(((i_2 != NULL) && (i_2 != n_3)))
                              _fail(n_3);
                            else
                              i_2 = n_3;
                            {
                              if(((m_2 != NULL) && (m_2 != o_3)))
                                _fail(o_3);
                              else
                                m_2 = o_3;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(h_2), term_d_7, (ATerm) ATinsert(CheckATermList(not_null(m_2)), (ATerm) ATinsert(CheckATermList(not_null(i_2)), not_null(a_2))));
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
        t = a_7;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm obsolete_1 (ATerm t, ATerm x_86 (ATerm))
{
  ATerm e_7;
  e_7 = t;
  {
    t = x_86(t);
    {
      ATerm b_0 (ATerm t)
      {
        t = term_f_7;
        return(t);
      }
      t = debug_1(t, b_0);
    }
  }
  t = e_7;
  return(t);
}
ATerm open_file_0 (ATerm t)
{
  ATerm p_4 = NULL,q_4 = NULL;
  ATerm g_7 = t;
  int h_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_4 = NULL,j_5 = NULL,k_5 = NULL;
      r_4 = t;
      z_3 :
      if(match_cons(r_4, sym__2))
        {
          j_5 = ATgetArgument(r_4, 0);
          k_5 = ATgetArgument(r_4, 1);
          {
            if(((q_4 != NULL) && (q_4 != j_5)))
              _fail(j_5);
            else
              q_4 = j_5;
            if(((p_4 != NULL) && (p_4 != k_5)))
              _fail(k_5);
            else
              p_4 = k_5;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(h_7);
      t = SSL_open_file(not_null(q_4), not_null(p_4));
    }
  else
    {
      t = g_7;
      {
        ATerm l_5 = NULL;
        ATerm p_5 = NULL;
        ATerm e_0 (ATerm t)
        {
          t = term_i_7;
          return(t);
        }
        t = obsolete_1(t, e_0);
        {
          l_5 = t;
          {
            if(((q_4 != NULL) && (q_4 != l_5)))
              _fail(l_5);
            else
              q_4 = l_5;
            {
              ATerm j_7;
              j_7 = t;
              {
                ATerm q_5 = NULL;
                t = term_k_7;
                {
                  q_5 = t;
                  if(((p_5 != NULL) && (p_5 != q_5)))
                    _fail(q_5);
                  else
                    p_5 = q_5;
                }
              }
              t = j_7;
              t = SSL_open_file(not_null(q_4), not_null(p_5));
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
  ATerm v_5 = NULL;
  ATerm w_5 = NULL;
  t = term_l_7;
  {
    t = new_0(t);
    {
      w_5 = t;
      if(((v_5 != NULL) && (v_5 != w_5)))
        _fail(w_5);
      else
        v_5 = w_5;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(v_5), term_m_7);
    {
      t = conc_strings_0(t);
      {
        ATerm f_0 (ATerm t)
        {
          t = file_exists_0(t);
          t = new_file_0(t);
          return(t);
        }
        t = try_1(t, f_0);
      }
    }
  }
  return(t);
}
ATerm xtc_new_file_0 (ATerm t)
{
  ATerm a_6 = NULL;
  t = new_file_0(t);
  {
    a_6 = t;
    {
      ATerm n_7;
      n_7 = t;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(a_6), term_k_7);
        {
          t = open_file_0(t);
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(a_6), term_l_7);
            {
              ATerm n_0 (ATerm t)
              {
                t = term_o_7;
                return(t);
              }
              t = assert_1(t, n_0);
            }
          }
        }
      }
      t = n_7;
    }
  }
  return(t);
}
ATerm topdown_print_to_0 (ATerm t)
{
  ATerm g_6 = NULL;
  ATerm i_6 = NULL;
  g_6 = t;
  {
    ATerm j_6 = NULL;
    t = xtc_new_file_0(t);
    {
      j_6 = t;
      {
        if(((i_6 != NULL) && (i_6 != j_6)))
          _fail(j_6);
        else
          i_6 = j_6;
        {
          t = not_null(g_6);
          {
            ATerm o_0 (ATerm t)
            {
              ATerm p_0 (ATerm t)
              {
                t = is_string_0(t);
                {
                  ATerm p_7;
                  p_7 = t;
                  {
                    ATerm k_6 = NULL;
                    ATerm l_6 = NULL;
                    l_6 = t;
                    if(((k_6 != NULL) && (k_6 != l_6)))
                      _fail(l_6);
                    else
                      k_6 = l_6;
                    {
                      t = (ATerm) ATmakeAppl(sym__2, not_null(i_6), (ATerm) ATinsert(ATempty, not_null(k_6)));
                      t = print_0(t);
                    }
                  }
                  t = p_7;
                }
                return(t);
              }
              t = try_1(t, p_0);
              return(t);
            }
            t = topdown_1(t, o_0);
            {
              t = not_null(i_6);
              t = close_file_0(t);
            }
          }
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(i_6));
  }
  return(t);
}
ATerm is_int_0 (ATerm t)
{
  ATerm q_6 = NULL;
  q_6 = t;
  t = SSL_is_int(not_null(q_6));
  return(t);
}
ATerm Latex2text_0 (ATerm t)
{
  ATerm q_8 = NULL,r_8 = NULL,s_8 = NULL,t_8 = NULL,u_8 = NULL,v_8 = NULL,w_8 = NULL;
  ATerm t_32 (ATerm t)
  {
    ATerm b_13 = NULL;
    t = not_null(t_8);
    {
      t = is_int_0(t);
      {
        ATerm c_13 = NULL;
        t = not_null(t_8);
        {
          t = int_to_string_0(t);
          {
            c_13 = t;
            if(((b_13 != NULL) && (b_13 != c_13)))
              _fail(c_13);
            else
              b_13 = c_13;
          }
        }
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_s_7), not_null(v_8)), term_r_7), not_null(b_13)), term_q_7);
      }
    }
    return(t);
  }
  ATerm u_32 (ATerm t)
  {
    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_u_7), not_null(v_8)), term_t_7);
    return(t);
  }
  ATerm v_32 (ATerm t)
  {
    t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_u_7), not_null(v_8)), term_w_7), not_null(t_8)), term_v_7);
    return(t);
  }
  ATerm w_32 (ATerm t)
  {
    t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(v_8)), term_y_7), not_null(t_8)), term_x_7);
    return(t);
  }
  ATerm x_32 (ATerm t)
  {
    t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_y_7), not_null(v_8)), term_r_7), not_null(t_8)), term_z_7);
    return(t);
  }
  ATerm y_32 (ATerm t)
  {
    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_y_7), not_null(v_8)), term_a_8);
    return(t);
  }
  ATerm z_32 (ATerm t)
  {
    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_y_7), not_null(v_8)), term_b_8);
    return(t);
  }
  ATerm b_33 (ATerm t)
  {
    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_y_7), not_null(v_8)), term_c_8);
    return(t);
  }
  ATerm c_33 (ATerm t)
  {
    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_y_7), not_null(v_8)), term_d_8);
    return(t);
  }
  ATerm d_33 (ATerm t)
  {
    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_y_7), not_null(v_8)), term_e_8);
    return(t);
  }
  ATerm e_33 (ATerm t)
  {
    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_y_7), not_null(v_8)), term_f_8);
    return(t);
  }
  ATerm f_33 (ATerm t)
  {
    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_y_7), not_null(v_8)), term_g_8);
    return(t);
  }
  ATerm g_33 (ATerm t)
  {
    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_y_7), not_null(v_8)), term_h_8);
    return(t);
  }
  ATerm h_33 (ATerm t)
  {
    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_y_7), not_null(v_8)), term_i_8);
    return(t);
  }
  ATerm i_33 (ATerm t)
  {
    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_y_7), not_null(v_8)), term_j_8);
    return(t);
  }
  ATerm j_33 (ATerm t)
  {
    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_y_7), not_null(v_8)), term_k_8);
    return(t);
  }
  ATerm k_33 (ATerm t)
  {
    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_y_7), not_null(v_8)), term_x_8);
    return(t);
  }
  ATerm l_33 (ATerm t)
  {
    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_y_7), not_null(v_8)), term_y_8);
    return(t);
  }
  ATerm m_33 (ATerm t)
  {
    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_y_7), not_null(v_8)), term_z_8);
    return(t);
  }
  ATerm n_33 (ATerm t)
  {
    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_y_7), not_null(v_8)), term_a_9);
    return(t);
  }
  ATerm o_33 (ATerm t)
  {
    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_y_7), not_null(v_8)), term_b_9);
    return(t);
  }
  ATerm p_33 (ATerm t)
  {
    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_y_7), not_null(v_8)), term_c_9);
    return(t);
  }
  ATerm q_33 (ATerm t)
  {
    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_y_7), not_null(v_8)), term_d_9);
    return(t);
  }
  ATerm r_33 (ATerm t)
  {
    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_y_7), not_null(v_8)), term_e_9);
    return(t);
  }
  ATerm s_33 (ATerm t)
  {
    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_y_7), not_null(v_8)), term_f_9);
    return(t);
  }
  ATerm t_33 (ATerm t)
  {
    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_y_7), not_null(v_8)), term_g_9);
    return(t);
  }
  ATerm u_33 (ATerm t)
  {
    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_y_7), not_null(v_8)), term_h_9);
    return(t);
  }
  ATerm v_33 (ATerm t)
  {
    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_y_7), not_null(v_8)), term_i_9);
    return(t);
  }
  ATerm y_33 (ATerm t)
  {
    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_y_7), not_null(v_8)), term_j_9);
    return(t);
  }
  ATerm z_33 (ATerm t)
  {
    t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_y_7), not_null(v_8)), term_r_7), not_null(u_8)), term_k_9);
    return(t);
  }
  ATerm a_34 (ATerm t)
  {
    t = term_l_9;
    return(t);
  }
  ATerm b_34 (ATerm t)
  {
    t = term_m_9;
    return(t);
  }
  ATerm c_34 (ATerm t)
  {
    t = term_n_9;
    return(t);
  }
  ATerm k_34 (ATerm t)
  {
    t = term_o_9;
    return(t);
  }
  ATerm l_34 (ATerm t)
  {
    t = term_p_9;
    return(t);
  }
  w_8 = t;
  l_8 :
  if(match_cons(w_8, sym_BOXENV_2))
    {
      t_8 = ATgetArgument(w_8, 0);
      v_8 = ATgetArgument(w_8, 1);
      m_8 :
      if(((ATgetType(t_8) == AT_LIST) && ATisEmpty(t_8)))
        {
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_r_9), not_null(v_8)), term_q_9);
        }
      else
        {
          if(((ATgetType(t_8) == AT_LIST) && !(ATisEmpty(t_8))))
            {
              u_8 = ATgetFirst((ATermList) t_8);
              q_8 = (ATerm) ATgetNext((ATermList) t_8);
              n_8 :
              if(((ATgetType(q_8) == AT_LIST) && ATisEmpty(q_8)))
                {
                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_r_9), not_null(v_8)), term_w_7), not_null(u_8)), term_s_9);
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
      if(match_cons(w_8, sym_HBOX_2))
        {
          t_8 = ATgetArgument(w_8, 0);
          v_8 = ATgetArgument(w_8, 1);
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_u_9), not_null(v_8)), term_w_7), not_null(t_8)), term_t_9);
        }
      else
        {
          if(match_cons(w_8, sym_VBOX_3))
            {
              t_8 = ATgetArgument(w_8, 0);
              v_8 = ATgetArgument(w_8, 1);
              r_8 = ATgetArgument(w_8, 2);
              t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_w_9), not_null(r_8)), term_w_7), not_null(v_8)), term_r_7), not_null(t_8)), term_v_9);
            }
          else
            {
              if(match_cons(w_8, sym_HVBOX_4))
                {
                  t_8 = ATgetArgument(w_8, 0);
                  v_8 = ATgetArgument(w_8, 1);
                  r_8 = ATgetArgument(w_8, 2);
                  s_8 = ATgetArgument(w_8, 3);
                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_y_9), not_null(s_8)), term_w_7), not_null(r_8)), term_r_7), not_null(v_8)), term_r_7), not_null(t_8)), term_x_9);
                }
              else
                {
                  if(match_cons(w_8, sym_ABOX_2))
                    {
                      t_8 = ATgetArgument(w_8, 0);
                      v_8 = ATgetArgument(w_8, 1);
                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_a_10), not_null(v_8)), term_w_7), not_null(t_8)), term_z_9);
                    }
                  else
                    {
                      if(match_cons(w_8, sym_ALTBOX_2))
                        {
                          t_8 = ATgetArgument(w_8, 0);
                          v_8 = ATgetArgument(w_8, 1);
                          t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_d_10), not_null(v_8)), term_c_10), not_null(t_8)), term_b_10);
                        }
                      else
                        {
                          if(match_cons(w_8, sym_CBOX_1))
                            {
                              t_8 = ATgetArgument(w_8, 0);
                              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_f_10), not_null(t_8)), term_e_10);
                            }
                          else
                            {
                              if(match_cons(w_8, sym_LBOX_2))
                                {
                                  t_8 = ATgetArgument(w_8, 0);
                                  v_8 = ATgetArgument(w_8, 1);
                                  o_8 :
                                  if(match_string(t_8, "="))
                                    {
                                      ATerm g_10 = t;
                                      int h_10 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = t_32(t);
                                          LocalPopChoice(h_10);
                                        }
                                      else
                                        {
                                          t = g_10;
                                          {
                                            ATerm i_10 = t;
                                            int j_10 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = u_32(t);
                                                LocalPopChoice(j_10);
                                              }
                                            else
                                              {
                                                t = i_10;
                                                t = v_32(t);
                                              }
                                          }
                                        }
                                    }
                                  else
                                    {
                                      ATerm k_10 = t;
                                      int l_10 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = t_32(t);
                                          LocalPopChoice(l_10);
                                        }
                                      else
                                        {
                                          t = k_10;
                                          t = v_32(t);
                                        }
                                    }
                                }
                              else
                                {
                                  if(match_cons(w_8, sym_LBLBOX_2))
                                    {
                                      t_8 = ATgetArgument(w_8, 0);
                                      v_8 = ATgetArgument(w_8, 1);
                                      t = w_32(t);
                                    }
                                  else
                                    {
                                      if(match_cons(w_8, sym_REFBOX_2))
                                        {
                                          t_8 = ATgetArgument(w_8, 0);
                                          v_8 = ATgetArgument(w_8, 1);
                                          t = x_32(t);
                                        }
                                      else
                                        {
                                          if(match_cons(w_8, sym_BOXFONT_2))
                                            {
                                              t_8 = ATgetArgument(w_8, 0);
                                              v_8 = ATgetArgument(w_8, 1);
                                              p_8 :
                                              if(match_cons(t_8, sym_KW_0))
                                                {
                                                  t = y_32(t);
                                                }
                                              else
                                                {
                                                  if(match_cons(t_8, sym_VAR_0))
                                                    {
                                                      t = z_32(t);
                                                    }
                                                  else
                                                    {
                                                      if(match_cons(t_8, sym_NUM_0))
                                                        {
                                                          t = b_33(t);
                                                        }
                                                      else
                                                        {
                                                          if(match_cons(t_8, sym_MATH_0))
                                                            {
                                                              t = c_33(t);
                                                            }
                                                          else
                                                            {
                                                              if(match_string(t_8, "sf"))
                                                                {
                                                                  t = d_33(t);
                                                                }
                                                              else
                                                                {
                                                                  if(match_string(t_8, "rm"))
                                                                    {
                                                                      t = e_33(t);
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_string(t_8, "tt"))
                                                                        {
                                                                          t = f_33(t);
                                                                        }
                                                                      else
                                                                        {
                                                                          if(match_string(t_8, "md"))
                                                                            {
                                                                              t = g_33(t);
                                                                            }
                                                                          else
                                                                            {
                                                                              if(match_string(t_8, "bf"))
                                                                                {
                                                                                  t = h_33(t);
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(match_string(t_8, "up"))
                                                                                    {
                                                                                      t = i_33(t);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(match_string(t_8, "it"))
                                                                                        {
                                                                                          t = j_33(t);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          if(match_string(t_8, "sc"))
                                                                                            {
                                                                                              t = k_33(t);
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              if(match_string(t_8, "sl"))
                                                                                                {
                                                                                                  t = l_33(t);
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  if(match_string(t_8, "em"))
                                                                                                    {
                                                                                                      t = m_33(t);
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      if(match_string(t_8, "tiny"))
                                                                                                        {
                                                                                                          t = n_33(t);
                                                                                                        }
                                                                                                      else
                                                                                                        {
                                                                                                          if(match_string(t_8, "scriptsize"))
                                                                                                            {
                                                                                                              t = o_33(t);
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              if(match_string(t_8, "footnotesize"))
                                                                                                                {
                                                                                                                  t = p_33(t);
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  if(match_string(t_8, "small"))
                                                                                                                    {
                                                                                                                      t = q_33(t);
                                                                                                                    }
                                                                                                                  else
                                                                                                                    {
                                                                                                                      if(match_string(t_8, "normalsize"))
                                                                                                                        {
                                                                                                                          t = r_33(t);
                                                                                                                        }
                                                                                                                      else
                                                                                                                        {
                                                                                                                          if(match_string(t_8, "large"))
                                                                                                                            {
                                                                                                                              t = s_33(t);
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              if(match_string(t_8, "Large"))
                                                                                                                                {
                                                                                                                                  t = t_33(t);
                                                                                                                                }
                                                                                                                              else
                                                                                                                                {
                                                                                                                                  if(match_string(t_8, "LARGE"))
                                                                                                                                    {
                                                                                                                                      t = u_33(t);
                                                                                                                                    }
                                                                                                                                  else
                                                                                                                                    {
                                                                                                                                      if(match_string(t_8, "huge"))
                                                                                                                                        {
                                                                                                                                          t = v_33(t);
                                                                                                                                        }
                                                                                                                                      else
                                                                                                                                        {
                                                                                                                                          if(match_string(t_8, "Huge"))
                                                                                                                                            {
                                                                                                                                              t = y_33(t);
                                                                                                                                            }
                                                                                                                                          else
                                                                                                                                            {
                                                                                                                                              if(match_cons(t_8, sym_BOXCOLOR_1))
                                                                                                                                                {
                                                                                                                                                  u_8 = ATgetArgument(t_8, 0);
                                                                                                                                                  t = z_33(t);
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
                                              if(match_cons(w_8, sym_C_0))
                                                {
                                                  t = a_34(t);
                                                }
                                              else
                                                {
                                                  if(match_cons(w_8, sym_R_0))
                                                    {
                                                      t = b_34(t);
                                                    }
                                                  else
                                                    {
                                                      if(match_cons(w_8, sym_L_0))
                                                        {
                                                          t = c_34(t);
                                                        }
                                                      else
                                                        {
                                                          if(match_cons(w_8, sym_EOR_0))
                                                            {
                                                              t = k_34(t);
                                                            }
                                                          else
                                                            {
                                                              if(match_cons(w_8, sym_CSEP_0))
                                                                {
                                                                  t = l_34(t);
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
ATerm bottomup_1 (ATerm t, ATerm p_69 (ATerm))
{
  ATerm q_0 (ATerm t)
  {
    t = bottomup_1(t, p_69);
    return(t);
  }
  t = _all(t, q_0);
  t = p_69(t);
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
ATerm BOXENV_args_0 (ATerm t)
{
  ATerm m_10 = t;
  int n_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_34 = NULL;
      t = term_o_10;
      {
        t = get_config_0(t);
        {
          ATerm p_34 = NULL;
          p_34 = t;
          if(((o_34 != NULL) && (o_34 != p_34)))
            _fail(p_34);
          else
            o_34 = p_34;
          t = (ATerm) ATinsert(ATempty, not_null(o_34));
        }
      }
      LocalPopChoice(n_10);
    }
  else
    {
      t = m_10;
      t = (ATerm) ATempty;
    }
  return(t);
}
ATerm Hd_0 (ATerm t)
{
  ATerm t_34 = NULL,u_34 = NULL,v_34 = NULL;
  t_34 = t;
  s_34 :
  if(((ATgetType(t_34) == AT_LIST) && !(ATisEmpty(t_34))))
    {
      u_34 = ATgetFirst((ATermList) t_34);
      v_34 = (ATerm) ATgetNext((ATermList) t_34);
      t = not_null(u_34);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm flat_list_0 (ATerm t)
{
  ATerm p_10 = t;
  int q_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(q_10);
    }
  else
    {
      t = p_10;
      {
        ATerm r_10 = t;
        int s_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Cons_2(t, Nil_0, flat_list_0);
            LocalPopChoice(s_10);
          }
        else
          {
            t = r_10;
            {
              ATerm t_10 = t;
              int u_10 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm c_35 = NULL,e_35 = NULL;
                  t = Cons_2(t, is_list_0, _id);
                  {
                    ATerm v_10;
                    v_10 = t;
                    {
                      ATerm d_35 = NULL;
                      t = Hd_0(t);
                      {
                        d_35 = t;
                        if(((c_35 != NULL) && (c_35 != d_35)))
                          _fail(d_35);
                        else
                          c_35 = d_35;
                      }
                    }
                    t = v_10;
                    {
                      ATerm f_35 = NULL;
                      t = Tl_0(t);
                      {
                        f_35 = t;
                        if(((e_35 != NULL) && (e_35 != f_35)))
                          _fail(f_35);
                        else
                          e_35 = f_35;
                      }
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(c_35), not_null(e_35));
                        {
                          t = conc_0(t);
                          t = flat_list_0(t);
                        }
                      }
                    }
                  }
                  LocalPopChoice(u_10);
                }
              else
                {
                  t = t_10;
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
  ATerm q_35 = NULL,r_35 = NULL,s_35 = NULL;
  q_35 = t;
  o_35 :
  if(((ATgetType(q_35) == AT_LIST) && !(ATisEmpty(q_35))))
    {
      r_35 = ATgetFirst((ATermList) q_35);
      s_35 = (ATerm) ATgetNext((ATermList) q_35);
      p_35 :
      if(match_int(r_35, 34))
        {
          ATerm u_35 = NULL;
          ATerm z_35 = NULL;
          t = not_null(s_35);
          {
            ATerm t_0 (ATerm t)
            {
              ATerm v_35 = NULL,w_35 = NULL,x_35 = NULL;
              v_35 = t;
              l_35 :
              if(((ATgetType(v_35) == AT_LIST) && !(ATisEmpty(v_35))))
                {
                  w_35 = ATgetFirst((ATermList) v_35);
                  x_35 = (ATerm) ATgetNext((ATermList) v_35);
                  m_35 :
                  if(match_int(w_35, 34))
                    {
                      t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(x_35)), term_w_10), term_w_10);
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
            t = at_suffix_1(t, t_0);
            {
              z_35 = t;
              if(((u_35 != NULL) && (u_35 != z_35)))
                _fail(z_35);
              else
                u_35 = z_35;
            }
          }
          t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(u_35)), term_x_10), term_x_10);
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
ATerm listtd_1 (ATerm t, ATerm z_76 (ATerm))
{
  ATerm d_36 (ATerm t)
  {
    t = z_76(t);
    {
      ATerm y_10 = t;
      int z_10 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Nil_0(t);
          LocalPopChoice(z_10);
        }
      else
        {
          t = y_10;
          t = Cons_2(t, _id, d_36);
        }
    }
    return(t);
  }
  t = d_36(t);
  return(t);
}
ATerm string_as_chars_1 (ATerm t, ATerm s_85 (ATerm))
{
  t = explode_string_0(t);
  {
    t = s_85(t);
    t = implode_string_0(t);
  }
  return(t);
}
ATerm latex_string_0 (ATerm t)
{
  ATerm a_11 = t;
  int b_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_36 = NULL;
      ATerm w_36 = NULL;
      w_36 = t;
      if(((v_36 != NULL) && (v_36 != w_36)))
        _fail(w_36);
      else
        v_36 = w_36;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_c_11, not_null(v_36));
        t = table_get_0(t);
      }
      LocalPopChoice(b_11);
    }
  else
    {
      t = a_11;
      {
        ATerm u_0 (ATerm t)
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
                ATerm x_36 = NULL;
                x_36 = t;
                u_36 :
                if(match_int(x_36, 32))
                  {
                    t = term_d_11;
                    t = explode_string_0(t);
                  }
                else
                  {
                    if(match_int(x_36, 35))
                      {
                        t = term_e_11;
                        t = explode_string_0(t);
                      }
                    else
                      {
                        if(match_int(x_36, 36))
                          {
                            t = term_f_11;
                            t = explode_string_0(t);
                          }
                        else
                          {
                            if(match_int(x_36, 37))
                              {
                                t = term_g_11;
                                t = explode_string_0(t);
                              }
                            else
                              {
                                if(match_int(x_36, 38))
                                  {
                                    t = term_h_11;
                                    t = explode_string_0(t);
                                  }
                                else
                                  {
                                    if(match_int(x_36, 45))
                                      {
                                        t = term_i_11;
                                        t = explode_string_0(t);
                                      }
                                    else
                                      {
                                        if(match_int(x_36, 60))
                                          {
                                            t = term_j_11;
                                            t = explode_string_0(t);
                                          }
                                        else
                                          {
                                            if(match_int(x_36, 62))
                                              {
                                                t = term_k_11;
                                                t = explode_string_0(t);
                                              }
                                            else
                                              {
                                                if(match_int(x_36, 92))
                                                  {
                                                    t = term_l_11;
                                                    t = explode_string_0(t);
                                                  }
                                                else
                                                  {
                                                    if(match_int(x_36, 94))
                                                      {
                                                        t = term_m_11;
                                                        t = explode_string_0(t);
                                                      }
                                                    else
                                                      {
                                                        if(match_int(x_36, 95))
                                                          {
                                                            t = term_n_11;
                                                            t = explode_string_0(t);
                                                          }
                                                        else
                                                          {
                                                            if(match_int(x_36, 123))
                                                              {
                                                                t = term_o_11;
                                                                t = explode_string_0(t);
                                                              }
                                                            else
                                                              {
                                                                if(match_int(x_36, 124))
                                                                  {
                                                                    t = term_p_11;
                                                                    t = explode_string_0(t);
                                                                  }
                                                                else
                                                                  {
                                                                    if(match_int(x_36, 125))
                                                                      {
                                                                        t = term_q_11;
                                                                        t = explode_string_0(t);
                                                                      }
                                                                    else
                                                                      {
                                                                        if(match_int(x_36, 126))
                                                                          {
                                                                            t = term_r_11;
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
            t = flat_list_0(t);
          }
          return(t);
        }
        t = string_as_chars_1(t, u_0);
      }
    }
  return(t);
}
ATerm remove_trailing_1 (ATerm t, ATerm w_67 (ATerm))
{
  ATerm u_37 (ATerm t)
  {
    ATerm b_1 (ATerm t)
    {
      ATerm q_37 = NULL,r_37 = NULL,s_37 = NULL;
      t = Cons_2(t, w_67, _id);
      {
        q_37 = t;
        p_37 :
        if(((ATgetType(q_37) == AT_LIST) && !(ATisEmpty(q_37))))
          {
            r_37 = ATgetFirst((ATermList) q_37);
            s_37 = (ATerm) ATgetNext((ATermList) q_37);
            {
              t = not_null(s_37);
              t = u_37(t);
            }
          }
        else
          {
            _fail(t);
          }
      }
      return(t);
    }
    t = try_1(t, b_1);
    return(t);
  }
  t = u_37(t);
  return(t);
}
ATerm at_suffix_1 (ATerm t, ATerm l_76 (ATerm))
{
  ATerm w_37 (ATerm t)
  {
    ATerm s_11 = t;
    int t_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_76(t);
        LocalPopChoice(t_11);
      }
    else
      {
        t = s_11;
        t = Cons_2(t, _id, w_37);
      }
    return(t);
  }
  t = w_37(t);
  return(t);
}
ATerm LatexComment_0 (ATerm t)
{
  ATerm c_38 = NULL;
  ATerm c_1 (ATerm t)
  {
    ATerm b_38 = NULL;
    b_38 = t;
    x_37 :
    if(!(match_int(b_38, 9)))
      {
        if(!(match_int(b_38, 32)))
          {
            _fail(t);
          }
      }
    return(t);
  }
  t = remove_trailing_1(t, c_1);
  {
    ATerm d_1 (ATerm t)
    {
      ATerm e_1 (ATerm t)
      {
        ATerm f_1 (ATerm t)
        {
          ATerm d_38 = NULL;
          d_38 = t;
          y_37 :
          if(!(match_int(d_38, 37)))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm g_1 (ATerm t)
        {
          ATerm h_1 (ATerm t)
          {
            ATerm e_38 = NULL;
            e_38 = t;
            z_37 :
            if(!(match_int(e_38, 37)))
              {
                _fail(t);
              }
            return(t);
          }
          ATerm i_1 (ATerm t)
          {
            ATerm f_38 = NULL;
            f_38 = t;
            if(((c_38 != NULL) && (c_38 != f_38)))
              _fail(f_38);
            else
              c_38 = f_38;
            return(t);
          }
          t = Cons_2(t, h_1, i_1);
          return(t);
        }
        t = Cons_2(t, f_1, g_1);
        t = not_null(c_38);
        return(t);
      }
      t = at_suffix_1(t, e_1);
      return(t);
    }
    t = try_1(t, d_1);
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
        ATerm r_39 (ATerm t)
        {
          ATerm t_38 = NULL,u_38 = NULL,v_38 = NULL,w_38 = NULL,x_38 = NULL;
          ATerm u_39 (ATerm t)
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(w_38), (ATerm) ATinsert(CheckATermList(not_null(x_38)), not_null(v_38)));
            t = r_39(t);
            return(t);
          }
          t_38 = t;
          n_38 :
          if(match_cons(t_38, sym__2))
            {
              u_38 = ATgetArgument(t_38, 0);
              x_38 = ATgetArgument(t_38, 1);
              o_38 :
              if(((ATgetType(u_38) == AT_LIST) && ATisEmpty(u_38)))
                {
                  {
                    ATerm b_39 = NULL;
                    ATerm c_39 = NULL;
                    t = not_null(x_38);
                    {
                      t = LatexComment_0(t);
                      {
                        c_39 = t;
                        if(((b_39 != NULL) && (b_39 != c_39)))
                          _fail(c_39);
                        else
                          b_39 = c_39;
                      }
                    }
                    t = (ATerm) ATinsert(ATempty, not_null(b_39));
                  }
                }
              else
                {
                  if(((ATgetType(u_38) == AT_LIST) && !(ATisEmpty(u_38))))
                    {
                      v_38 = ATgetFirst((ATermList) u_38);
                      w_38 = (ATerm) ATgetNext((ATermList) u_38);
                      p_38 :
                      if(match_int(v_38, 10))
                        {
                          ATerm u_11 = t;
                          int v_11 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm g_39 = NULL,i_39 = NULL;
                              ATerm w_11;
                              w_11 = t;
                              {
                                ATerm h_39 = NULL;
                                t = not_null(x_38);
                                {
                                  t = LatexComment_0(t);
                                  {
                                    h_39 = t;
                                    if(((g_39 != NULL) && (g_39 != h_39)))
                                      _fail(h_39);
                                    else
                                      g_39 = h_39;
                                  }
                                }
                              }
                              t = w_11;
                              {
                                ATerm j_39 = NULL;
                                t = (ATerm) ATmakeAppl(sym__2, not_null(w_38), (ATerm) ATempty);
                                {
                                  t = r_39(t);
                                  {
                                    j_39 = t;
                                    if(((i_39 != NULL) && (i_39 != j_39)))
                                      _fail(j_39);
                                    else
                                      i_39 = j_39;
                                  }
                                }
                                t = (ATerm) ATinsert(CheckATermList(not_null(i_39)), not_null(g_39));
                              }
                              LocalPopChoice(v_11);
                            }
                          else
                            {
                              t = u_11;
                              t = u_39(t);
                            }
                        }
                      else
                        {
                          t = u_39(t);
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
        t = r_39(t);
        {
          ATerm k_1 (ATerm t)
          {
            ATerm n_39 = NULL;
            n_39 = t;
            q_38 :
            if(!(match_string(n_39, "")))
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
                ATerm o_39 = NULL;
                o_39 = t;
                r_38 :
                if(!(match_string(o_39, "")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              t = remove_trailing_1(t, l_1);
              {
                ATerm m_1 (ATerm t)
                {
                  ATerm p_39 = NULL;
                  p_39 = t;
                  t = (ATerm) ATinsert(ATinsert(ATempty, term_x_11), not_null(p_39));
                  return(t);
                }
                t = map_1(t, m_1);
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
  ATerm d_40 = NULL;
  d_40 = t;
  c_40 :
  if(match_cons(d_40, sym_MATH_0))
    {
      ATerm f_40 = NULL,h_40 = NULL;
      ATerm y_11;
      y_11 = t;
      {
        ATerm g_40 = NULL;
        t = SSLgetAnnotations(not_null(d_40));
        {
          g_40 = t;
          if(((f_40 != NULL) && (f_40 != g_40)))
            _fail(g_40);
          else
            f_40 = g_40;
        }
      }
      t = y_11;
      {
        ATerm i_40 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_MATH_0), not_null(f_40));
        {
          i_40 = t;
          if(((h_40 != NULL) && (h_40 != i_40)))
            _fail(i_40);
          else
            h_40 = i_40;
        }
        t = not_null(h_40);
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
  ATerm t_40 = NULL;
  t_40 = t;
  s_40 :
  if(match_cons(t_40, sym_NUM_0))
    {
      ATerm v_40 = NULL,x_40 = NULL;
      ATerm z_11;
      z_11 = t;
      {
        ATerm w_40 = NULL;
        t = SSLgetAnnotations(not_null(t_40));
        {
          w_40 = t;
          if(((v_40 != NULL) && (v_40 != w_40)))
            _fail(w_40);
          else
            v_40 = w_40;
        }
      }
      t = z_11;
      {
        ATerm y_40 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_NUM_0), not_null(v_40));
        {
          y_40 = t;
          if(((x_40 != NULL) && (x_40 != y_40)))
            _fail(y_40);
          else
            x_40 = y_40;
        }
        t = not_null(x_40);
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
  ATerm g_41 = NULL;
  g_41 = t;
  f_41 :
  if(match_cons(g_41, sym_VAR_0))
    {
      ATerm i_41 = NULL,k_41 = NULL;
      ATerm a_12;
      a_12 = t;
      {
        ATerm j_41 = NULL;
        t = SSLgetAnnotations(not_null(g_41));
        {
          j_41 = t;
          if(((i_41 != NULL) && (i_41 != j_41)))
            _fail(j_41);
          else
            i_41 = j_41;
        }
      }
      t = a_12;
      {
        ATerm l_41 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_VAR_0), not_null(i_41));
        {
          l_41 = t;
          if(((k_41 != NULL) && (k_41 != l_41)))
            _fail(l_41);
          else
            k_41 = l_41;
        }
        t = not_null(k_41);
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
  ATerm t_41 = NULL;
  t_41 = t;
  s_41 :
  if(match_cons(t_41, sym_KW_0))
    {
      ATerm v_41 = NULL,x_41 = NULL;
      ATerm b_12;
      b_12 = t;
      {
        ATerm w_41 = NULL;
        t = SSLgetAnnotations(not_null(t_41));
        {
          w_41 = t;
          if(((v_41 != NULL) && (v_41 != w_41)))
            _fail(w_41);
          else
            v_41 = w_41;
        }
      }
      t = b_12;
      {
        ATerm y_41 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_KW_0), not_null(v_41));
        {
          y_41 = t;
          if(((x_41 != NULL) && (x_41 != y_41)))
            _fail(y_41);
          else
            x_41 = y_41;
        }
        t = not_null(x_41);
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
  ATerm l_42 = NULL;
  l_42 = t;
  h_42 :
  if(match_cons(l_42, sym_CL_0))
    {
      ATerm n_42 = NULL,r_42 = NULL;
      ATerm c_12;
      c_12 = t;
      {
        ATerm o_42 = NULL;
        t = SSLgetAnnotations(not_null(l_42));
        {
          o_42 = t;
          if(((n_42 != NULL) && (n_42 != o_42)))
            _fail(o_42);
          else
            n_42 = o_42;
        }
      }
      t = c_12;
      {
        ATerm s_42 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_CL_0), not_null(n_42));
        {
          s_42 = t;
          if(((r_42 != NULL) && (r_42 != s_42)))
            _fail(s_42);
          else
            r_42 = s_42;
        }
        t = not_null(r_42);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm FFID_2 (ATerm t, ATerm x_59 (ATerm), ATerm y_59 (ATerm))
{
  ATerm c_43 = NULL,d_43 = NULL,e_43 = NULL;
  c_43 = t;
  b_43 :
  if(match_cons(c_43, sym_FFID_2))
    {
      d_43 = ATgetArgument(c_43, 0);
      e_43 = ATgetArgument(c_43, 1);
      {
        ATerm i_43 = NULL,m_43 = NULL;
        ATerm l_43 = NULL;
        t = SSLgetAnnotations(not_null(c_43));
        {
          l_43 = t;
          if(((i_43 != NULL) && (i_43 != l_43)))
            _fail(l_43);
          else
            i_43 = l_43;
        }
        {
          t = not_null(d_43);
          {
            ATerm o_43 = NULL;
            t = x_59(t);
            {
              m_43 = t;
              {
                t = not_null(e_43);
                {
                  ATerm b_44 = NULL;
                  t = y_59(t);
                  {
                    o_43 = t;
                    {
                      ATerm c_44 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FFID_2, not_null(m_43), not_null(o_43)), not_null(i_43));
                      {
                        c_44 = t;
                        if(((b_44 != NULL) && (b_44 != c_44)))
                          _fail(c_44);
                        else
                          b_44 = c_44;
                      }
                      t = not_null(b_44);
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
  ATerm m_44 = NULL;
  m_44 = t;
  l_44 :
  if(match_cons(m_44, sym_SZ_0))
    {
      ATerm s_44 = NULL,y_44 = NULL;
      ATerm d_12;
      d_12 = t;
      {
        ATerm x_44 = NULL;
        t = SSLgetAnnotations(not_null(m_44));
        {
          x_44 = t;
          if(((s_44 != NULL) && (s_44 != x_44)))
            _fail(x_44);
          else
            s_44 = x_44;
        }
      }
      t = d_12;
      {
        ATerm z_44 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SZ_0), not_null(s_44));
        {
          z_44 = t;
          if(((y_44 != NULL) && (y_44 != z_44)))
            _fail(z_44);
          else
            y_44 = z_44;
        }
        t = not_null(y_44);
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
  ATerm j_45 = NULL;
  j_45 = t;
  i_45 :
  if(match_cons(j_45, sym_SH_0))
    {
      ATerm l_45 = NULL,n_45 = NULL;
      ATerm e_12;
      e_12 = t;
      {
        ATerm m_45 = NULL;
        t = SSLgetAnnotations(not_null(j_45));
        {
          m_45 = t;
          if(((l_45 != NULL) && (l_45 != m_45)))
            _fail(m_45);
          else
            l_45 = m_45;
        }
      }
      t = e_12;
      {
        ATerm o_45 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SH_0), not_null(l_45));
        {
          o_45 = t;
          if(((n_45 != NULL) && (n_45 != o_45)))
            _fail(o_45);
          else
            n_45 = o_45;
        }
        t = not_null(n_45);
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
  ATerm w_45 = NULL;
  w_45 = t;
  v_45 :
  if(match_cons(w_45, sym_SE_0))
    {
      ATerm y_45 = NULL,a_46 = NULL;
      ATerm f_12;
      f_12 = t;
      {
        ATerm z_45 = NULL;
        t = SSLgetAnnotations(not_null(w_45));
        {
          z_45 = t;
          if(((y_45 != NULL) && (y_45 != z_45)))
            _fail(z_45);
          else
            y_45 = z_45;
        }
      }
      t = f_12;
      {
        ATerm b_46 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SE_0), not_null(y_45));
        {
          b_46 = t;
          if(((a_46 != NULL) && (a_46 != b_46)))
            _fail(b_46);
          else
            a_46 = b_46;
        }
        t = not_null(a_46);
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
  ATerm j_46 = NULL;
  j_46 = t;
  i_46 :
  if(match_cons(j_46, sym_FM_0))
    {
      ATerm l_46 = NULL,n_46 = NULL;
      ATerm g_12;
      g_12 = t;
      {
        ATerm m_46 = NULL;
        t = SSLgetAnnotations(not_null(j_46));
        {
          m_46 = t;
          if(((l_46 != NULL) && (l_46 != m_46)))
            _fail(m_46);
          else
            l_46 = m_46;
        }
      }
      t = g_12;
      {
        ATerm o_46 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FM_0), not_null(l_46));
        {
          o_46 = t;
          if(((n_46 != NULL) && (n_46 != o_46)))
            _fail(o_46);
          else
            n_46 = o_46;
        }
        t = not_null(n_46);
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
  ATerm n_1 (ATerm t)
  {
    ATerm h_12 = t;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = h_12;
      }
    return(t);
  }
  t = filter_1(t, n_1);
  {
    ATerm o_1 (ATerm t)
    {
      t = term_i_12;
      return(t);
    }
    t = separate_by_1(t, o_1);
  }
  return(t);
}
ATerm hs_length_0 (ATerm t)
{
  ATerm j_12 = t;
  int k_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_1 (ATerm t)
      {
        ATerm t_46 = NULL;
        t_46 = t;
        s_46 :
        if(!(match_cons(t_46, sym_HS_0)))
          {
            _fail(t);
          }
        return(t);
      }
      t = SOpt_value_1(t, p_1);
      LocalPopChoice(k_12);
    }
  else
    {
      t = j_12;
      t = term_l_12;
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
  ATerm x_46 = NULL,y_46 = NULL,z_46 = NULL;
  x_46 = t;
  w_46 :
  if(match_cons(x_46, sym__2))
    {
      y_46 = ATgetArgument(x_46, 0);
      z_46 = ATgetArgument(x_46, 1);
      {
        t = not_null(z_46);
        {
          ATerm m_12 = t;
          int n_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(n_12);
            }
          else
            {
              t = m_12;
              {
                ATerm q_1 (ATerm t)
                {
                  ATerm o_12 = t;
                  int p_12 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = Nil_0(t);
                      LocalPopChoice(p_12);
                    }
                  else
                    {
                      t = o_12;
                      {
                        ATerm c_47 = NULL;
                        t = Cons_2(t, _id, q_1);
                        {
                          ATerm d_47 = NULL;
                          d_47 = t;
                          if(((c_47 != NULL) && (c_47 != d_47)))
                            _fail(d_47);
                          else
                            c_47 = d_47;
                          t = (ATerm) ATinsert(CheckATermList(not_null(c_47)), not_null(y_46));
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
ATerm if_verbose2_1 (ATerm t, ATerm n_89 (ATerm))
{
  ATerm r_1 (ATerm t)
  {
    ATerm q_12;
    q_12 = t;
    {
      ATerm i_47 = NULL;
      ATerm j_47 = NULL;
      t = term_r_12;
      {
        t = get_config_0(t);
        {
          j_47 = t;
          if(((i_47 != NULL) && (i_47 != j_47)))
            _fail(j_47);
          else
            i_47 = j_47;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(i_47), term_s_12);
        t = geq_0(t);
      }
    }
    t = q_12;
    t = n_89(t);
    return(t);
  }
  t = try_1(t, r_1);
  return(t);
}
ATerm dissuader_1 (ATerm t, ATerm y_86 (ATerm))
{
  ATerm t_12;
  t_12 = t;
  {
    ATerm s_1 (ATerm t)
    {
      t = y_86(t);
      {
        ATerm t_1 (ATerm t)
        {
          t = term_u_12;
          return(t);
        }
        t = debug_1(t, t_1);
      }
      return(t);
    }
    t = if_verbose2_1(t, s_1);
  }
  t = t_12;
  return(t);
}
ATerm separate_by_1 (ATerm t, ATerm o_75 (ATerm))
{
  ATerm n_47 = NULL,p_47 = NULL;
  ATerm x_1 (ATerm t)
  {
    t = term_v_12;
    return(t);
  }
  t = dissuader_1(t, x_1);
  {
    ATerm w_12;
    w_12 = t;
    {
      ATerm o_47 = NULL;
      o_47 = t;
      if(((n_47 != NULL) && (n_47 != o_47)))
        _fail(o_47);
      else
        n_47 = o_47;
    }
    t = w_12;
    {
      ATerm s_47 = NULL;
      t = term_l_7;
      {
        t = o_75(t);
        {
          s_47 = t;
          if(((p_47 != NULL) && (p_47 != s_47)))
            _fail(s_47);
          else
            p_47 = s_47;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(p_47), not_null(n_47));
        t = separate_by_0(t);
      }
    }
  }
  return(t);
}
ATerm filter_1 (ATerm t, ATerm j_83 (ATerm))
{
  ATerm x_12 = t;
  int y_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(y_12);
    }
  else
    {
      t = x_12;
      {
        ATerm z_12 = t;
        int a_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_1 (ATerm t)
            {
              t = filter_1(t, j_83);
              return(t);
            }
            t = Cons_2(t, j_83, y_1);
            LocalPopChoice(a_13);
          }
        else
          {
            t = z_12;
            {
              ATerm y_47 = NULL,z_47 = NULL,a_48 = NULL;
              y_47 = t;
              x_47 :
              if(((ATgetType(y_47) == AT_LIST) && !(ATisEmpty(y_47))))
                {
                  z_47 = ATgetFirst((ATermList) y_47);
                  a_48 = (ATerm) ATgetNext((ATermList) y_47);
                  {
                    t = not_null(a_48);
                    t = filter_1(t, j_83);
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
  ATerm d_13 = t;
  int e_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_1 (ATerm t)
      {
        ATerm e_48 = NULL;
        e_48 = t;
        d_48 :
        if(!(match_cons(e_48, sym_IS_0)))
          {
            _fail(t);
          }
        return(t);
      }
      t = SOpt_value_1(t, z_1);
      LocalPopChoice(e_13);
    }
  else
    {
      t = d_13;
      t = term_f_13;
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
  ATerm g_48 = NULL;
  g_48 = t;
  t = SSL_int_to_string(not_null(g_48));
  return(t);
}
ATerm SOpt_2 (ATerm t, ATerm t_60 (ATerm), ATerm u_60 (ATerm))
{
  ATerm r_48 = NULL,u_48 = NULL,v_48 = NULL;
  r_48 = t;
  q_48 :
  if(match_cons(r_48, sym_SOpt_2))
    {
      u_48 = ATgetArgument(r_48, 0);
      v_48 = ATgetArgument(r_48, 1);
      {
        ATerm z_48 = NULL,l_49 = NULL;
        ATerm a_49 = NULL;
        t = SSLgetAnnotations(not_null(r_48));
        {
          a_49 = t;
          if(((z_48 != NULL) && (z_48 != a_49)))
            _fail(a_49);
          else
            z_48 = a_49;
        }
        {
          t = not_null(u_48);
          {
            ATerm n_49 = NULL;
            t = t_60(t);
            {
              l_49 = t;
              {
                t = not_null(v_48);
                {
                  ATerm p_49 = NULL;
                  t = u_60(t);
                  {
                    n_49 = t;
                    {
                      ATerm q_49 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SOpt_2, not_null(l_49), not_null(n_49)), not_null(z_48));
                      {
                        q_49 = t;
                        if(((p_49 != NULL) && (p_49 != q_49)))
                          _fail(q_49);
                        else
                          p_49 = q_49;
                      }
                      t = not_null(p_49);
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
ATerm SOpt_value_1 (ATerm t, ATerm r_67 (ATerm))
{
  ATerm b_50 = NULL;
  ATerm c_2 (ATerm t)
  {
    ATerm d_2 (ATerm t)
    {
      ATerm c_50 = NULL;
      c_50 = t;
      if(((b_50 != NULL) && (b_50 != c_50)))
        _fail(c_50);
      else
        b_50 = c_50;
      return(t);
    }
    t = SOpt_2(t, r_67, d_2);
    return(t);
  }
  t = fetch_1(t, c_2);
  {
    t = not_null(b_50);
    t = string_to_int_0(t);
  }
  return(t);
}
ATerm vs_length_0 (ATerm t)
{
  ATerm g_13 = t;
  int h_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_2 (ATerm t)
      {
        ATerm f_50 = NULL;
        f_50 = t;
        e_50 :
        if(!(match_cons(f_50, sym_VS_0)))
          {
            _fail(t);
          }
        return(t);
      }
      t = SOpt_value_1(t, e_2);
      LocalPopChoice(h_13);
    }
  else
    {
      t = g_13;
      t = term_f_13;
    }
  return(t);
}
ATerm Vspace_0 (ATerm t)
{
  t = vs_length_0(t);
  t = int_to_string_0(t);
  return(t);
}
ATerm C_2 (ATerm t, ATerm p_59 (ATerm), ATerm q_59 (ATerm))
{
  ATerm m_50 = NULL,n_50 = NULL,o_50 = NULL;
  m_50 = t;
  l_50 :
  if(match_cons(m_50, sym_C_2))
    {
      n_50 = ATgetArgument(m_50, 0);
      o_50 = ATgetArgument(m_50, 1);
      {
        ATerm t_50 = NULL,v_50 = NULL;
        ATerm u_50 = NULL;
        t = SSLgetAnnotations(not_null(m_50));
        {
          u_50 = t;
          if(((t_50 != NULL) && (t_50 != u_50)))
            _fail(u_50);
          else
            t_50 = u_50;
        }
        {
          t = not_null(n_50);
          {
            ATerm x_50 = NULL;
            t = p_59(t);
            {
              v_50 = t;
              {
                t = not_null(o_50);
                {
                  ATerm z_50 = NULL;
                  t = q_59(t);
                  {
                    x_50 = t;
                    {
                      ATerm a_51 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_C_2, not_null(v_50), not_null(x_50)), not_null(t_50));
                      {
                        a_51 = t;
                        if(((z_50 != NULL) && (z_50 != a_51)))
                          _fail(a_51);
                        else
                          z_50 = a_51;
                      }
                      t = not_null(z_50);
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
  ATerm m_51 = NULL,n_51 = NULL,o_51 = NULL;
  m_51 = t;
  l_51 :
  if(match_cons(m_51, sym_R_2))
    {
      n_51 = ATgetArgument(m_51, 0);
      o_51 = ATgetArgument(m_51, 1);
      {
        t = not_null(o_51);
        {
          ATerm g_52 (ATerm t)
          {
            ATerm v_51 = NULL,w_51 = NULL,x_51 = NULL;
            ATerm i_13 = t;
            int j_13 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                LocalPopChoice(j_13);
              }
            else
              {
                t = i_13;
                {
                  ATerm k_13 = t;
                  int l_13 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = Cons_2(t, _id, Nil_0);
                      LocalPopChoice(l_13);
                    }
                  else
                    {
                      t = k_13;
                      {
                        ATerm m_13 = t;
                        int n_13 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm f_2 (ATerm t)
                            {
                              t = C_2(t, _id, _id);
                              return(t);
                            }
                            ATerm g_2 (ATerm t)
                            {
                              t = Cons_2(t, _id, g_52);
                              return(t);
                            }
                            t = Cons_2(t, f_2, g_2);
                            LocalPopChoice(n_13);
                          }
                        else
                          {
                            t = m_13;
                            {
                              ATerm o_13 = t;
                              int p_13 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm j_2 (ATerm t)
                                  {
                                    ATerm k_2 (ATerm t)
                                    {
                                      t = C_2(t, _id, _id);
                                      return(t);
                                    }
                                    t = Cons_2(t, k_2, g_52);
                                    return(t);
                                  }
                                  t = Cons_2(t, _id, j_2);
                                  LocalPopChoice(p_13);
                                }
                              else
                                {
                                  t = o_13;
                                  {
                                    ATerm y_51 = NULL,z_51 = NULL,a_52 = NULL,b_52 = NULL,c_52 = NULL;
                                    y_51 = t;
                                    j_51 :
                                    if(((ATgetType(y_51) == AT_LIST) && !(ATisEmpty(y_51))))
                                      {
                                        z_51 = ATgetFirst((ATermList) y_51);
                                        a_52 = (ATerm) ATgetNext((ATermList) y_51);
                                        k_51 :
                                        if(((ATgetType(a_52) == AT_LIST) && !(ATisEmpty(a_52))))
                                          {
                                            b_52 = ATgetFirst((ATermList) a_52);
                                            c_52 = (ATerm) ATgetNext((ATermList) a_52);
                                            {
                                              ATerm d_52 = NULL;
                                              if(((v_51 != NULL) && (v_51 != z_51)))
                                                _fail(z_51);
                                              else
                                                v_51 = z_51;
                                              {
                                                if(((w_51 != NULL) && (w_51 != b_52)))
                                                  _fail(b_52);
                                                else
                                                  w_51 = b_52;
                                                {
                                                  if(((x_51 != NULL) && (x_51 != c_52)))
                                                    _fail(c_52);
                                                  else
                                                    x_51 = c_52;
                                                  {
                                                    ATerm e_52 = NULL;
                                                    t = (ATerm) ATinsert(CheckATermList(not_null(x_51)), not_null(w_51));
                                                    {
                                                      t = g_52(t);
                                                      {
                                                        e_52 = t;
                                                        if(((d_52 != NULL) && (d_52 != e_52)))
                                                          _fail(e_52);
                                                        else
                                                          d_52 = e_52;
                                                      }
                                                    }
                                                    t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(d_52)), term_q_13), not_null(v_51));
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
          t = g_52(t);
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
  ATerm m_52 = NULL,n_52 = NULL;
  ATerm r_13 = t;
  int s_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_52 = NULL,p_52 = NULL,q_52 = NULL;
      o_52 = t;
      l_52 :
      if(match_cons(o_52, sym_LBL_2))
        {
          p_52 = ATgetArgument(o_52, 0);
          q_52 = ATgetArgument(o_52, 1);
          {
            ATerm r_52 = NULL;
            if(((m_52 != NULL) && (m_52 != p_52)))
              _fail(p_52);
            else
              m_52 = p_52;
            {
              if(((n_52 != NULL) && (n_52 != q_52)))
                _fail(q_52);
              else
                n_52 = q_52;
              {
                t = not_null(n_52);
                {
                  t = table_row_0(t);
                  {
                    ATerm s_52 = NULL;
                    t = not_null(n_52);
                    {
                      t = table_row_0(t);
                      {
                        s_52 = t;
                        if(((r_52 != NULL) && (r_52 != s_52)))
                          _fail(s_52);
                        else
                          r_52 = s_52;
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym_LBLBOX_2, not_null(m_52), not_null(r_52));
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
      LocalPopChoice(s_13);
    }
  else
    {
      t = r_13;
      t = table_row_0(t);
    }
  return(t);
}
ATerm at_last_1 (ATerm t, ATerm s_76 (ATerm))
{
  ATerm v_52 (ATerm t)
  {
    ATerm t_13 = t;
    int u_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, Nil_0);
        t = s_76(t);
        LocalPopChoice(u_13);
      }
    else
      {
        t = t_13;
        t = Cons_2(t, _id, v_52);
      }
    return(t);
  }
  t = v_52(t);
  return(t);
}
ATerm table_def_0 (ATerm t)
{
  ATerm p_53 = NULL,q_53 = NULL;
  p_53 = t;
  o_53 :
  if(match_cons(p_53, sym_AOPTIONS_1))
    {
      q_53 = ATgetArgument(p_53, 0);
      {
        t = not_null(q_53);
        {
          ATerm l_2 (ATerm t)
          {
            ATerm s_53 = NULL,t_53 = NULL;
            s_53 = t;
            n_53 :
            if(match_cons(s_53, sym_AL_1))
              {
                t_53 = ATgetArgument(s_53, 0);
                {
                  ATerm v_53 = NULL;
                  ATerm w_53 = NULL,y_53 = NULL;
                  ATerm x_53 = NULL;
                  t = not_null(t_53);
                  {
                    t = Hspace_0(t);
                    {
                      t = string_to_int_0(t);
                      {
                        x_53 = t;
                        if(((w_53 != NULL) && (w_53 != x_53)))
                          _fail(x_53);
                        else
                          w_53 = x_53;
                      }
                    }
                  }
                  {
                    t = (ATerm) ATmakeAppl(sym__2, not_null(w_53), term_i_12);
                    {
                      t = copy_0(t);
                      {
                        y_53 = t;
                        if(((v_53 != NULL) && (v_53 != y_53)))
                          _fail(y_53);
                        else
                          v_53 = y_53;
                      }
                    }
                  }
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(v_53)), term_v_13);
                }
              }
            else
              {
                if(match_cons(s_53, sym_AC_1))
                  {
                    t_53 = ATgetArgument(s_53, 0);
                    {
                      ATerm a_54 = NULL;
                      ATerm b_54 = NULL,d_54 = NULL;
                      ATerm c_54 = NULL;
                      t = not_null(t_53);
                      {
                        t = Hspace_0(t);
                        {
                          t = string_to_int_0(t);
                          {
                            c_54 = t;
                            if(((b_54 != NULL) && (b_54 != c_54)))
                              _fail(c_54);
                            else
                              b_54 = c_54;
                          }
                        }
                      }
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(b_54), term_i_12);
                        {
                          t = copy_0(t);
                          {
                            d_54 = t;
                            if(((a_54 != NULL) && (a_54 != d_54)))
                              _fail(d_54);
                            else
                              a_54 = d_54;
                          }
                        }
                      }
                      t = (ATerm) ATinsert(ATinsert(ATempty, not_null(a_54)), term_w_13);
                    }
                  }
                else
                  {
                    if(match_cons(s_53, sym_AR_1))
                      {
                        t_53 = ATgetArgument(s_53, 0);
                        {
                          ATerm f_54 = NULL;
                          ATerm g_54 = NULL,i_54 = NULL;
                          ATerm h_54 = NULL;
                          t = not_null(t_53);
                          {
                            t = Hspace_0(t);
                            {
                              t = string_to_int_0(t);
                              {
                                h_54 = t;
                                if(((g_54 != NULL) && (g_54 != h_54)))
                                  _fail(h_54);
                                else
                                  g_54 = h_54;
                              }
                            }
                          }
                          {
                            t = (ATerm) ATmakeAppl(sym__2, not_null(g_54), term_i_12);
                            {
                              t = copy_0(t);
                              {
                                i_54 = t;
                                if(((f_54 != NULL) && (f_54 != i_54)))
                                  _fail(i_54);
                                else
                                  f_54 = i_54;
                              }
                            }
                          }
                          t = (ATerm) ATinsert(ATinsert(ATempty, not_null(f_54)), term_x_13);
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
          t = map_1(t, l_2);
          {
            ATerm p_2 (ATerm t)
            {
              t = (ATerm) ATinsert(ATempty, term_q_13);
              return(t);
            }
            t = separate_by_1(t, p_2);
            {
              t = concat_0(t);
              {
                ATerm q_2 (ATerm t)
                {
                  t = (ATerm) ATinsert(ATempty, term_y_13);
                  return(t);
                }
                t = at_last_1(t, q_2);
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
  ATerm v_54 = NULL,w_54 = NULL,x_54 = NULL;
  v_54 = t;
  u_54 :
  if(match_cons(v_54, sym__2))
    {
      w_54 = ATgetArgument(v_54, 0);
      x_54 = ATgetArgument(v_54, 1);
      {
        ATerm z_13 = t;
        int a_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_subti(not_null(w_54), not_null(x_54));
            LocalPopChoice(a_14);
          }
        else
          {
            t = z_13;
            t = SSL_subtr(not_null(w_54), not_null(x_54));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm while_not_2 (ATerm t, ATerm f_69 (ATerm), ATerm g_69 (ATerm))
{
  ATerm b_55 (ATerm t)
  {
    ATerm b_14 = t;
    int c_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = f_69(t);
        LocalPopChoice(c_14);
      }
    else
      {
        t = b_14;
        {
          t = g_69(t);
          t = b_55(t);
        }
      }
    return(t);
  }
  t = b_55(t);
  return(t);
}
ATerm for_3 (ATerm t, ATerm i_69 (ATerm), ATerm j_69 (ATerm), ATerm k_69 (ATerm))
{
  t = i_69(t);
  t = while_not_2(t, j_69, k_69);
  return(t);
}
ATerm copy_0 (ATerm t)
{
  ATerm d_14 = t;
  int e_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_2 (ATerm t)
      {
        ATerm l_55 = NULL,m_55 = NULL,n_55 = NULL;
        l_55 = t;
        d_55 :
        if(match_cons(l_55, sym__2))
          {
            m_55 = ATgetArgument(l_55, 0);
            n_55 = ATgetArgument(l_55, 1);
            t = (ATerm) ATmakeAppl(sym__3, not_null(m_55), not_null(n_55), (ATerm) ATempty);
          }
        else
          {
            _fail(t);
          }
        return(t);
      }
      ATerm s_2 (ATerm t)
      {
        ATerm q_55 = NULL,r_55 = NULL,s_55 = NULL,t_55 = NULL;
        q_55 = t;
        f_55 :
        if(match_cons(q_55, sym__3))
          {
            r_55 = ATgetArgument(q_55, 0);
            s_55 = ATgetArgument(q_55, 1);
            t_55 = ATgetArgument(q_55, 2);
            g_55 :
            if(match_int(r_55, 0))
              {
                t = not_null(t_55);
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
      ATerm t_2 (ATerm t)
      {
        ATerm w_55 = NULL,x_55 = NULL,y_55 = NULL,z_55 = NULL;
        w_55 = t;
        j_55 :
        if(match_cons(w_55, sym__3))
          {
            x_55 = ATgetArgument(w_55, 0);
            y_55 = ATgetArgument(w_55, 1);
            z_55 = ATgetArgument(w_55, 2);
            {
              ATerm d_56 = NULL;
              ATerm f_14;
              f_14 = t;
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(x_55), term_l_12);
                t = geq_0(t);
              }
              t = f_14;
              {
                ATerm e_56 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(x_55), term_l_12);
                {
                  t = subt_0(t);
                  {
                    e_56 = t;
                    if(((d_56 != NULL) && (d_56 != e_56)))
                      _fail(e_56);
                    else
                      d_56 = e_56;
                  }
                }
                t = (ATerm) ATmakeAppl(sym__3, not_null(d_56), not_null(y_55), (ATerm) ATinsert(CheckATermList(not_null(z_55)), not_null(y_55)));
              }
            }
          }
        else
          {
            _fail(t);
          }
        return(t);
      }
      t = for_3(t, r_2, s_2, t_2);
      LocalPopChoice(e_14);
    }
  else
    {
      t = d_14;
      {
        ATerm u_2 (ATerm t)
        {
          ATerm h_56 = NULL;
          h_56 = t;
          k_55 :
          if(!(match_int(h_56, 0)))
            {
              _fail(t);
            }
          return(t);
        }
        t = _2(t, u_2, _id);
        t = (ATerm) ATempty;
      }
    }
  return(t);
}
ATerm R_2 (ATerm t, ATerm f_60 (ATerm), ATerm g_60 (ATerm))
{
  ATerm a_57 = NULL,b_57 = NULL,c_57 = NULL;
  a_57 = t;
  z_56 :
  if(match_cons(a_57, sym_R_2))
    {
      b_57 = ATgetArgument(a_57, 0);
      c_57 = ATgetArgument(a_57, 1);
      {
        ATerm j_57 = NULL,l_57 = NULL;
        ATerm k_57 = NULL;
        t = SSLgetAnnotations(not_null(a_57));
        {
          k_57 = t;
          if(((j_57 != NULL) && (j_57 != k_57)))
            _fail(k_57);
          else
            j_57 = k_57;
        }
        {
          t = not_null(b_57);
          {
            ATerm n_57 = NULL;
            t = f_60(t);
            {
              l_57 = t;
              {
                t = not_null(c_57);
                {
                  ATerm p_57 = NULL;
                  t = g_60(t);
                  {
                    n_57 = t;
                    {
                      ATerm q_57 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_R_2, not_null(l_57), not_null(n_57)), not_null(j_57));
                      {
                        q_57 = t;
                        if(((p_57 != NULL) && (p_57 != q_57)))
                          _fail(q_57);
                        else
                          p_57 = q_57;
                      }
                      t = not_null(p_57);
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
ATerm split_2 (ATerm t, ATerm v_83 (ATerm), ATerm w_83 (ATerm))
{
  ATerm a_58 = NULL,c_58 = NULL;
  ATerm g_14;
  g_14 = t;
  {
    ATerm b_58 = NULL;
    t = v_83(t);
    {
      b_58 = t;
      if(((a_58 != NULL) && (a_58 != b_58)))
        _fail(b_58);
      else
        a_58 = b_58;
    }
  }
  t = g_14;
  {
    ATerm d_58 = NULL;
    t = w_83(t);
    {
      d_58 = t;
      if(((c_58 != NULL) && (c_58 != d_58)))
        _fail(d_58);
      else
        c_58 = d_58;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(a_58), not_null(c_58));
  }
  return(t);
}
ATerm construct_rows_0 (ATerm t)
{
  ATerm v_2 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = split_2(t, _id, v_2);
  {
    ATerm s_59 (ATerm t)
    {
      ATerm p_58 = NULL,q_58 = NULL,r_58 = NULL,s_58 = NULL,t_58 = NULL,u_58 = NULL,v_58 = NULL;
      ATerm v_59 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(u_58), (ATerm) ATinsert(CheckATermList(not_null(v_58)), not_null(t_58)));
        t = s_59(t);
        return(t);
      }
      r_58 = t;
      m_58 :
      if(match_cons(r_58, sym__2))
        {
          s_58 = ATgetArgument(r_58, 0);
          v_58 = ATgetArgument(r_58, 1);
          n_58 :
          if(((ATgetType(s_58) == AT_LIST) && ATisEmpty(s_58)))
            {
              {
                ATerm a_59 = NULL;
                ATerm b_59 = NULL;
                t = not_null(v_58);
                {
                  t = reverse_0(t);
                  {
                    b_59 = t;
                    if(((a_59 != NULL) && (a_59 != b_59)))
                      _fail(b_59);
                    else
                      a_59 = b_59;
                  }
                }
                t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_R_2, (ATerm)ATempty, not_null(a_59)));
              }
            }
          else
            {
              if(((ATgetType(s_58) == AT_LIST) && !(ATisEmpty(s_58))))
                {
                  t_58 = ATgetFirst((ATermList) s_58);
                  u_58 = (ATerm) ATgetNext((ATermList) s_58);
                  o_58 :
                  if(match_cons(t_58, sym_R_2))
                    {
                      p_58 = ATgetArgument(t_58, 0);
                      q_58 = ATgetArgument(t_58, 1);
                      {
                        ATerm h_14 = t;
                        int i_14 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm i_59 = NULL,k_59 = NULL;
                            ATerm j_14;
                            j_14 = t;
                            {
                              ATerm j_59 = NULL;
                              t = not_null(v_58);
                              {
                                t = reverse_0(t);
                                {
                                  j_59 = t;
                                  if(((i_59 != NULL) && (i_59 != j_59)))
                                    _fail(j_59);
                                  else
                                    i_59 = j_59;
                                }
                              }
                            }
                            t = j_14;
                            {
                              ATerm l_59 = NULL;
                              t = (ATerm) ATmakeAppl(sym__2, not_null(u_58), (ATerm) ATempty);
                              {
                                t = s_59(t);
                                {
                                  l_59 = t;
                                  if(((k_59 != NULL) && (k_59 != l_59)))
                                    _fail(l_59);
                                  else
                                    k_59 = l_59;
                                }
                              }
                              t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(k_59)), (ATerm) ATmakeAppl(sym_R_2, not_null(p_58), not_null(q_58))), (ATerm) ATmakeAppl(sym_R_2, (ATerm)ATempty, not_null(i_59)));
                            }
                            LocalPopChoice(i_14);
                          }
                        else
                          {
                            t = h_14;
                            t = v_59(t);
                          }
                      }
                    }
                  else
                    {
                      t = v_59(t);
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
    t = s_59(t);
    {
      ATerm w_2 (ATerm t)
      {
        ATerm k_14 = t;
        if((PushChoice() == 0))
          {
            t = R_2(t, _id, Nil_0);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = k_14;
          }
        return(t);
      }
      t = filter_1(t, w_2);
    }
  }
  return(t);
}
ATerm Abox2latex_0 (ATerm t)
{
  ATerm y_61 = NULL,z_61 = NULL,a_62 = NULL,b_62 = NULL,c_62 = NULL,d_62 = NULL,e_62 = NULL;
  ATerm k_65 (ATerm t)
  {
    t = not_null(e_62);
    {
      ATerm l_14 = t;
      int m_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = KW_0(t);
          LocalPopChoice(m_14);
        }
      else
        {
          t = l_14;
          {
            ATerm n_14 = t;
            int o_14 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = VAR_0(t);
                LocalPopChoice(o_14);
              }
            else
              {
                t = n_14;
                {
                  ATerm p_14 = t;
                  int q_14 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = NUM_0(t);
                      LocalPopChoice(q_14);
                    }
                  else
                    {
                      t = p_14;
                      t = MATH_0(t);
                    }
                }
              }
          }
        }
    }
    t = (ATerm) ATmakeAppl(sym_BOXFONT_2, not_null(e_62), not_null(c_62));
    return(t);
  }
  ATerm l_65 (ATerm t)
  {
    ATerm u_64 = NULL;
    ATerm y_64 = NULL;
    t = not_null(c_62);
    {
      ATerm x_2 (ATerm t)
      {
        ATerm v_64 = NULL,w_64 = NULL;
        v_64 = t;
        s_61 :
        if(match_cons(v_64, sym_S_1))
          {
            w_64 = ATgetArgument(v_64, 0);
            {
              t = not_null(w_64);
              t = make_latex_comment_0(t);
            }
          }
        else
          {
            _fail(t);
          }
        return(t);
      }
      t = map_1(t, x_2);
      {
        y_64 = t;
        if(((u_64 != NULL) && (u_64 != y_64)))
          _fail(y_64);
        else
          u_64 = y_64;
      }
    }
    t = (ATerm) ATmakeAppl(sym_CBOX_1, not_null(u_64));
    return(t);
  }
  ATerm m_65 (ATerm t)
  {
    t = not_null(e_62);
    t = latex_string_0(t);
    return(t);
  }
  d_62 = t;
  u_61 :
  if(match_cons(d_62, sym_REF_2))
    {
      e_62 = ATgetArgument(d_62, 0);
      c_62 = ATgetArgument(d_62, 1);
      t = (ATerm) ATmakeAppl(sym_REFBOX_2, not_null(e_62), not_null(c_62));
    }
  else
    {
      if(match_cons(d_62, sym_LBL_2))
        {
          e_62 = ATgetArgument(d_62, 0);
          c_62 = ATgetArgument(d_62, 1);
          t = (ATerm) ATmakeAppl(sym_LBLBOX_2, not_null(e_62), not_null(c_62));
        }
      else
        {
          if(match_cons(d_62, sym_L_2))
            {
              e_62 = ATgetArgument(d_62, 0);
              c_62 = ATgetArgument(d_62, 1);
              {
                ATerm l_62 = NULL;
                ATerm r_14 = t;
                int s_14 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm m_62 = NULL;
                    t = not_null(e_62);
                    {
                      t = string_to_int_0(t);
                      {
                        m_62 = t;
                        if(((l_62 != NULL) && (l_62 != m_62)))
                          _fail(m_62);
                        else
                          l_62 = m_62;
                      }
                    }
                    LocalPopChoice(s_14);
                  }
                else
                  {
                    t = r_14;
                    {
                      ATerm t_14 = t;
                      int u_14 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm o_62 = NULL;
                          t = not_null(e_62);
                          {
                            t = explode_string_0(t);
                            {
                              ATerm y_2 (ATerm t)
                              {
                                ATerm n_62 = NULL;
                                n_62 = t;
                                r_60 :
                                if(!(match_int(n_62, 61)))
                                  {
                                    _fail(t);
                                  }
                                return(t);
                              }
                              t = Cons_2(t, y_2, _id);
                              {
                                t = (ATerm) ATinsert(ATempty, term_v_14);
                                {
                                  t = implode_string_0(t);
                                  {
                                    o_62 = t;
                                    if(((l_62 != NULL) && (l_62 != o_62)))
                                      _fail(o_62);
                                    else
                                      l_62 = o_62;
                                  }
                                }
                              }
                            }
                          }
                          LocalPopChoice(u_14);
                        }
                      else
                        {
                          t = t_14;
                          {
                            ATerm p_62 = NULL;
                            t = not_null(e_62);
                            {
                              p_62 = t;
                              if(((l_62 != NULL) && (l_62 != p_62)))
                                _fail(p_62);
                              else
                                l_62 = p_62;
                            }
                          }
                        }
                    }
                  }
                t = (ATerm) ATmakeAppl(sym_LBOX_2, not_null(l_62), not_null(c_62));
              }
            }
          else
            {
              if(match_cons(d_62, sym_ALT_2))
                {
                  e_62 = ATgetArgument(d_62, 0);
                  c_62 = ATgetArgument(d_62, 1);
                  t = (ATerm) ATmakeAppl(sym_ALTBOX_2, not_null(e_62), not_null(c_62));
                }
              else
                {
                  if(match_cons(d_62, sym_A_3))
                    {
                      e_62 = ATgetArgument(d_62, 0);
                      c_62 = ATgetArgument(d_62, 1);
                      y_61 = ATgetArgument(d_62, 2);
                      {
                        ATerm v_62 = NULL,w_62 = NULL,x_62 = NULL,y_62 = NULL,z_62 = NULL;
                        ATerm a_63 = NULL;
                        t = not_null(y_61);
                        {
                          ATerm b_63 = NULL;
                          t = construct_rows_0(t);
                          {
                            a_63 = t;
                            {
                              if(((x_62 != NULL) && (x_62 != a_63)))
                                _fail(a_63);
                              else
                                x_62 = a_63;
                              {
                                t = not_null(c_62);
                                {
                                  t = Vspace_0(t);
                                  {
                                    ATerm c_63 = NULL,e_63 = NULL;
                                    t = string_to_int_0(t);
                                    {
                                      b_63 = t;
                                      {
                                        if(((v_62 != NULL) && (v_62 != b_63)))
                                          _fail(b_63);
                                        else
                                          v_62 = b_63;
                                        {
                                          ATerm d_63 = NULL;
                                          t = (ATerm) ATmakeAppl(sym__2, not_null(v_62), term_y_13);
                                          {
                                            t = copy_0(t);
                                            {
                                              d_63 = t;
                                              if(((c_63 != NULL) && (c_63 != d_63)))
                                                _fail(d_63);
                                              else
                                                c_63 = d_63;
                                            }
                                          }
                                          {
                                            t = (ATerm) ATmakeAppl(sym__2, not_null(c_63), (ATerm) ATinsert(ATinsert(ATempty, term_x_11), term_y_13));
                                            {
                                              ATerm f_63 = NULL;
                                              t = conc_0(t);
                                              {
                                                e_63 = t;
                                                {
                                                  if(((y_62 != NULL) && (y_62 != e_63)))
                                                    _fail(e_63);
                                                  else
                                                    y_62 = e_63;
                                                  {
                                                    t = not_null(e_62);
                                                    {
                                                      ATerm g_63 = NULL;
                                                      t = table_def_0(t);
                                                      {
                                                        f_63 = t;
                                                        {
                                                          if(((w_62 != NULL) && (w_62 != f_63)))
                                                            _fail(f_63);
                                                          else
                                                            w_62 = f_63;
                                                          {
                                                            t = not_null(x_62);
                                                            {
                                                              t = map_1(t, MkRows_0);
                                                              {
                                                                ATerm z_2 (ATerm t)
                                                                {
                                                                  t = not_null(y_62);
                                                                  return(t);
                                                                }
                                                                t = separate_by_1(t, z_2);
                                                                {
                                                                  g_63 = t;
                                                                  if(((z_62 != NULL) && (z_62 != g_63)))
                                                                    _fail(g_63);
                                                                  else
                                                                    z_62 = g_63;
                                                                }
                                                              }
                                                            }
                                                          }
                                                        }
                                                      }
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                        t = (ATerm) ATmakeAppl(sym_ABOX_2, not_null(w_62), not_null(z_62));
                      }
                    }
                  else
                    {
                      if(match_cons(d_62, sym_HV_2))
                        {
                          e_62 = ATgetArgument(d_62, 0);
                          c_62 = ATgetArgument(d_62, 1);
                          {
                            ATerm j_63 = NULL,k_63 = NULL,l_63 = NULL,m_63 = NULL;
                            ATerm n_63 = NULL;
                            t = not_null(e_62);
                            {
                              ATerm o_63 = NULL;
                              t = Hspace_0(t);
                              {
                                n_63 = t;
                                {
                                  if(((j_63 != NULL) && (j_63 != n_63)))
                                    _fail(n_63);
                                  else
                                    j_63 = n_63;
                                  {
                                    t = not_null(e_62);
                                    {
                                      ATerm p_63 = NULL;
                                      t = Vspace_0(t);
                                      {
                                        o_63 = t;
                                        {
                                          if(((k_63 != NULL) && (k_63 != o_63)))
                                            _fail(o_63);
                                          else
                                            k_63 = o_63;
                                          {
                                            t = not_null(e_62);
                                            {
                                              ATerm q_63 = NULL;
                                              t = Ispace_0(t);
                                              {
                                                p_63 = t;
                                                {
                                                  if(((l_63 != NULL) && (l_63 != p_63)))
                                                    _fail(p_63);
                                                  else
                                                    l_63 = p_63;
                                                  {
                                                    t = not_null(c_62);
                                                    {
                                                      ATerm a_3 (ATerm t)
                                                      {
                                                        ATerm w_14 = t;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = Nil_0(t);
                                                            PopChoice();
                                                            _fail(t);
                                                          }
                                                        else
                                                          {
                                                            t = w_14;
                                                          }
                                                        return(t);
                                                      }
                                                      t = filter_1(t, a_3);
                                                      {
                                                        ATerm b_3 (ATerm t)
                                                        {
                                                          t = term_x_14;
                                                          return(t);
                                                        }
                                                        t = separate_by_1(t, b_3);
                                                        {
                                                          q_63 = t;
                                                          if(((m_63 != NULL) && (m_63 != q_63)))
                                                            _fail(q_63);
                                                          else
                                                            m_63 = q_63;
                                                        }
                                                      }
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                            t = (ATerm) ATmakeAppl(sym_HVBOX_4, not_null(j_63), not_null(k_63), not_null(l_63), not_null(m_63));
                          }
                        }
                      else
                        {
                          if(match_cons(d_62, sym_V_2))
                            {
                              e_62 = ATgetArgument(d_62, 0);
                              c_62 = ATgetArgument(d_62, 1);
                              {
                                ATerm t_63 = NULL,u_63 = NULL,v_63 = NULL;
                                ATerm w_63 = NULL;
                                t = not_null(e_62);
                                {
                                  ATerm x_63 = NULL;
                                  t = Vspace_0(t);
                                  {
                                    w_63 = t;
                                    {
                                      if(((t_63 != NULL) && (t_63 != w_63)))
                                        _fail(w_63);
                                      else
                                        t_63 = w_63;
                                      {
                                        t = not_null(e_62);
                                        {
                                          ATerm y_63 = NULL;
                                          t = Ispace_0(t);
                                          {
                                            x_63 = t;
                                            {
                                              if(((u_63 != NULL) && (u_63 != x_63)))
                                                _fail(x_63);
                                              else
                                                u_63 = x_63;
                                              {
                                                t = not_null(c_62);
                                                {
                                                  ATerm c_3 (ATerm t)
                                                  {
                                                    ATerm y_14 = t;
                                                    if((PushChoice() == 0))
                                                      {
                                                        t = Nil_0(t);
                                                        PopChoice();
                                                        _fail(t);
                                                      }
                                                    else
                                                      {
                                                        t = y_14;
                                                      }
                                                    return(t);
                                                  }
                                                  t = filter_1(t, c_3);
                                                  {
                                                    ATerm d_3 (ATerm t)
                                                    {
                                                      t = term_z_14;
                                                      return(t);
                                                    }
                                                    t = separate_by_1(t, d_3);
                                                    {
                                                      y_63 = t;
                                                      if(((v_63 != NULL) && (v_63 != y_63)))
                                                        _fail(y_63);
                                                      else
                                                        v_63 = y_63;
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                                t = (ATerm) ATmakeAppl(sym_VBOX_3, not_null(t_63), not_null(u_63), not_null(v_63));
                              }
                            }
                          else
                            {
                              if(match_cons(d_62, sym_H_2))
                                {
                                  e_62 = ATgetArgument(d_62, 0);
                                  c_62 = ATgetArgument(d_62, 1);
                                  {
                                    ATerm b_64 = NULL,c_64 = NULL;
                                    ATerm d_64 = NULL;
                                    t = not_null(e_62);
                                    {
                                      ATerm e_64 = NULL;
                                      t = Hspace_0(t);
                                      {
                                        d_64 = t;
                                        {
                                          if(((b_64 != NULL) && (b_64 != d_64)))
                                            _fail(d_64);
                                          else
                                            b_64 = d_64;
                                          {
                                            t = not_null(c_62);
                                            {
                                              t = toh_0(t);
                                              {
                                                e_64 = t;
                                                if(((c_64 != NULL) && (c_64 != e_64)))
                                                  _fail(e_64);
                                                else
                                                  c_64 = e_64;
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                    t = (ATerm) ATmakeAppl(sym_HBOX_2, not_null(b_64), not_null(c_64));
                                  }
                                }
                              else
                                {
                                  if(match_cons(d_62, sym_FBOX_2))
                                    {
                                      e_62 = ATgetArgument(d_62, 0);
                                      c_62 = ATgetArgument(d_62, 1);
                                      v_61 :
                                      if(match_cons(e_62, sym_F_1))
                                        {
                                          b_62 = ATgetArgument(e_62, 0);
                                          w_61 :
                                          if(((ATgetType(b_62) == AT_LIST) && !(ATisEmpty(b_62))))
                                            {
                                              z_61 = ATgetFirst((ATermList) b_62);
                                              a_62 = (ATerm) ATgetNext((ATermList) b_62);
                                              {
                                                ATerm a_15 = t;
                                                int b_15 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    ATerm i_64 = NULL,j_64 = NULL;
                                                    t = not_null(z_61);
                                                    {
                                                      ATerm c_15 = t;
                                                      int d_15 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm e_3 (ATerm t)
                                                          {
                                                            ATerm k_64 = NULL;
                                                            k_64 = t;
                                                            if(((j_64 != NULL) && (j_64 != k_64)))
                                                              _fail(k_64);
                                                            else
                                                              j_64 = k_64;
                                                            return(t);
                                                          }
                                                          t = FFID_2(t, FM_0, e_3);
                                                          LocalPopChoice(d_15);
                                                        }
                                                      else
                                                        {
                                                          t = c_15;
                                                          {
                                                            ATerm e_15 = t;
                                                            int f_15 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm f_3 (ATerm t)
                                                                {
                                                                  ATerm l_64 = NULL;
                                                                  l_64 = t;
                                                                  if(((j_64 != NULL) && (j_64 != l_64)))
                                                                    _fail(l_64);
                                                                  else
                                                                    j_64 = l_64;
                                                                  return(t);
                                                                }
                                                                t = FFID_2(t, SE_0, f_3);
                                                                LocalPopChoice(f_15);
                                                              }
                                                            else
                                                              {
                                                                t = e_15;
                                                                {
                                                                  ATerm g_15 = t;
                                                                  int h_15 = stack_ptr;
                                                                  if((PushChoice() == 0))
                                                                    {
                                                                      ATerm g_3 (ATerm t)
                                                                      {
                                                                        ATerm m_64 = NULL;
                                                                        m_64 = t;
                                                                        if(((j_64 != NULL) && (j_64 != m_64)))
                                                                          _fail(m_64);
                                                                        else
                                                                          j_64 = m_64;
                                                                        return(t);
                                                                      }
                                                                      t = FFID_2(t, SH_0, g_3);
                                                                      LocalPopChoice(h_15);
                                                                    }
                                                                  else
                                                                    {
                                                                      t = g_15;
                                                                      {
                                                                        ATerm i_15 = t;
                                                                        int j_15 = stack_ptr;
                                                                        if((PushChoice() == 0))
                                                                          {
                                                                            ATerm h_3 (ATerm t)
                                                                            {
                                                                              ATerm n_64 = NULL;
                                                                              n_64 = t;
                                                                              if(((j_64 != NULL) && (j_64 != n_64)))
                                                                                _fail(n_64);
                                                                              else
                                                                                j_64 = n_64;
                                                                              return(t);
                                                                            }
                                                                            t = FFID_2(t, SZ_0, h_3);
                                                                            LocalPopChoice(j_15);
                                                                          }
                                                                        else
                                                                          {
                                                                            t = i_15;
                                                                            {
                                                                              ATerm p_64 = NULL;
                                                                              ATerm i_3 (ATerm t)
                                                                              {
                                                                                ATerm o_64 = NULL;
                                                                                o_64 = t;
                                                                                if(((i_64 != NULL) && (i_64 != o_64)))
                                                                                  _fail(o_64);
                                                                                else
                                                                                  i_64 = o_64;
                                                                                return(t);
                                                                              }
                                                                              t = FFID_2(t, CL_0, i_3);
                                                                              {
                                                                                t = (ATerm) ATmakeAppl(sym_BOXCOLOR_1, not_null(i_64));
                                                                                {
                                                                                  p_64 = t;
                                                                                  if(((j_64 != NULL) && (j_64 != p_64)))
                                                                                    _fail(p_64);
                                                                                  else
                                                                                    j_64 = p_64;
                                                                                }
                                                                              }
                                                                            }
                                                                          }
                                                                      }
                                                                    }
                                                                }
                                                              }
                                                          }
                                                        }
                                                    }
                                                    t = (ATerm) ATmakeAppl(sym_BOXFONT_2, not_null(j_64), (ATerm) ATmakeAppl(sym_FBOX_2, (ATerm)ATmakeAppl(sym_F_1, not_null(a_62)), not_null(c_62)));
                                                    LocalPopChoice(b_15);
                                                  }
                                                else
                                                  {
                                                    t = a_15;
                                                    t = k_65(t);
                                                  }
                                              }
                                            }
                                          else
                                            {
                                              if(((ATgetType(b_62) == AT_LIST) && ATisEmpty(b_62)))
                                                {
                                                  {
                                                    ATerm k_15 = t;
                                                    int l_15 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        t = not_null(c_62);
                                                        LocalPopChoice(l_15);
                                                      }
                                                    else
                                                      {
                                                        t = k_15;
                                                        t = k_65(t);
                                                      }
                                                  }
                                                }
                                              else
                                                {
                                                  t = k_65(t);
                                                }
                                            }
                                        }
                                      else
                                        {
                                          t = k_65(t);
                                        }
                                    }
                                  else
                                    {
                                      if(match_cons(d_62, sym_C_2))
                                        {
                                          e_62 = ATgetArgument(d_62, 0);
                                          c_62 = ATgetArgument(d_62, 1);
                                          x_61 :
                                          if(((ATgetType(e_62) == AT_LIST) && ATisEmpty(e_62)))
                                            {
                                              t = l_65(t);
                                            }
                                          else
                                            {
                                              _fail(t);
                                            }
                                        }
                                      else
                                        {
                                          if(match_cons(d_62, sym_S_1))
                                            {
                                              e_62 = ATgetArgument(d_62, 0);
                                              t = m_65(t);
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
ATerm topdown_1 (ATerm t, ATerm o_69 (ATerm))
{
  t = o_69(t);
  {
    ATerm j_3 (ATerm t)
    {
      t = topdown_1(t, o_69);
      return(t);
    }
    t = _all(t, j_3);
  }
  return(t);
}
ATerm abox2latex_0 (ATerm t)
{
  ATerm p_66 = NULL,r_66 = NULL;
  ATerm k_3 (ATerm t)
  {
    t = try_1(t, Abox2latex_0);
    return(t);
  }
  t = topdown_1(t, k_3);
  {
    ATerm m_15;
    m_15 = t;
    {
      ATerm q_66 = NULL;
      t = BOXENV_args_0(t);
      {
        q_66 = t;
        if(((p_66 != NULL) && (p_66 != q_66)))
          _fail(q_66);
        else
          p_66 = q_66;
      }
    }
    t = m_15;
    {
      ATerm s_66 = NULL;
      s_66 = t;
      if(((r_66 != NULL) && (r_66 != s_66)))
        _fail(s_66);
      else
        r_66 = s_66;
      {
        t = (ATerm) ATmakeAppl(sym_BOXENV_2, not_null(p_66), not_null(r_66));
        t = latex2text_0(t);
      }
    }
  }
  return(t);
}
ATerm file_exists_0 (ATerm t)
{
  ATerm x_66 = NULL;
  ATerm z_66 = NULL;
  x_66 = t;
  {
    ATerm n_15;
    n_15 = t;
    {
      ATerm c_67 = NULL;
      t = term_o_15;
      {
        c_67 = t;
        if(((z_66 != NULL) && (z_66 != c_67)))
          _fail(c_67);
        else
          z_66 = c_67;
      }
    }
    t = n_15;
    {
      t = SSL_open_file(not_null(x_66), not_null(z_66));
      t = SSL_close_file(not_null(x_66));
    }
  }
  return(t);
}
ATerm read_from_0 (ATerm t)
{
  ATerm k_67 = NULL,l_67 = NULL;
  k_67 = t;
  j_67 :
  if(match_cons(k_67, sym_stdin_0))
    {
      ATerm m_67 = NULL;
      ATerm n_67 = NULL;
      t = term_p_15;
      {
        t = ReadFromFile_0(t);
        {
          n_67 = t;
          if(((m_67 != NULL) && (m_67 != n_67)))
            _fail(n_67);
          else
            m_67 = n_67;
        }
      }
      t = not_null(m_67);
    }
  else
    {
      if(match_cons(k_67, sym_FILE_1))
        {
          l_67 = ATgetArgument(k_67, 0);
          {
            ATerm t_67 = NULL;
            ATerm u_67 = NULL;
            t = not_null(l_67);
            {
              t = file_exists_0(t);
              {
                t = ReadFromFile_0(t);
                {
                  u_67 = t;
                  if(((t_67 != NULL) && (t_67 != u_67)))
                    _fail(u_67);
                  else
                    t_67 = u_67;
                }
              }
            }
            t = not_null(t_67);
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
  ATerm f_68 = NULL,g_68 = NULL,h_68 = NULL;
  f_68 = t;
  e_68 :
  if(match_cons(f_68, sym__2))
    {
      g_68 = ATgetArgument(f_68, 0);
      h_68 = ATgetArgument(f_68, 1);
      t = SSL_copy(not_null(g_68), not_null(h_68));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm stderr_0 (ATerm t)
{
  ATerm r_68 = NULL;
  r_68 = t;
  q_68 :
  if(match_cons(r_68, sym_stderr_0))
    {
      ATerm t_68 = NULL,v_68 = NULL;
      ATerm q_15;
      q_15 = t;
      {
        ATerm u_68 = NULL;
        t = SSLgetAnnotations(not_null(r_68));
        {
          u_68 = t;
          if(((t_68 != NULL) && (t_68 != u_68)))
            _fail(u_68);
          else
            t_68 = u_68;
        }
      }
      t = q_15;
      {
        ATerm w_68 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stderr_0), not_null(t_68));
        {
          w_68 = t;
          if(((v_68 != NULL) && (v_68 != w_68)))
            _fail(w_68);
          else
            v_68 = w_68;
        }
        t = not_null(v_68);
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
  ATerm e_69 = NULL;
  e_69 = t;
  d_69 :
  if(match_cons(e_69, sym_stdout_0))
    {
      ATerm m_69 = NULL,q_69 = NULL;
      ATerm r_15;
      r_15 = t;
      {
        ATerm n_69 = NULL;
        t = SSLgetAnnotations(not_null(e_69));
        {
          n_69 = t;
          if(((m_69 != NULL) && (m_69 != n_69)))
            _fail(n_69);
          else
            m_69 = n_69;
        }
      }
      t = r_15;
      {
        ATerm r_69 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stdout_0), not_null(m_69));
        {
          r_69 = t;
          if(((q_69 != NULL) && (q_69 != r_69)))
            _fail(r_69);
          else
            q_69 = r_69;
        }
        t = not_null(q_69);
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
  ATerm d_70 = NULL,e_70 = NULL;
  d_70 = t;
  c_70 :
  if(match_cons(d_70, sym_FILE_1))
    {
      e_70 = ATgetArgument(d_70, 0);
      {
        ATerm s_15 = t;
        int t_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_70 = NULL;
            ATerm h_70 = NULL;
            t = m_0(t);
            {
              h_70 = t;
              {
                if(((g_70 != NULL) && (g_70 != h_70)))
                  _fail(h_70);
                else
                  g_70 = h_70;
                {
                  ATerm u_15 = t;
                  int v_15 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = stdout_0(t);
                      LocalPopChoice(v_15);
                    }
                  else
                    {
                      t = u_15;
                      t = stderr_0(t);
                    }
                  {
                    t = (ATerm) ATmakeAppl(sym__2, not_null(e_70), not_null(g_70));
                    t = copy_file_0(t);
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(e_70));
            LocalPopChoice(t_15);
          }
        else
          {
            t = s_15;
            {
              ATerm w_15 = t;
              int x_15 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm j_70 = NULL;
                  ATerm k_70 = NULL;
                  t = m_0(t);
                  {
                    k_70 = t;
                    {
                      if(((j_70 != NULL) && (j_70 != k_70)))
                        _fail(k_70);
                      else
                        j_70 = k_70;
                      {
                        ATerm y_15 = t;
                        if((PushChoice() == 0))
                          {
                            ATerm z_15 = t;
                            int a_16 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = stdout_0(t);
                                LocalPopChoice(a_16);
                              }
                            else
                              {
                                t = z_15;
                                {
                                  ATerm b_16 = t;
                                  int c_16 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = stderr_0(t);
                                      LocalPopChoice(c_16);
                                    }
                                  else
                                    {
                                      t = b_16;
                                      {
                                        ATerm l_70 = NULL;
                                        l_70 = t;
                                        if(((e_70 != NULL) && (e_70 != l_70)))
                                          _fail(l_70);
                                        else
                                          e_70 = l_70;
                                      }
                                    }
                                }
                              }
                            PopChoice();
                            _fail(t);
                          }
                        else
                          {
                            t = y_15;
                          }
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(e_70), not_null(j_70));
                          t = copy_file_0(t);
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(e_70));
                  LocalPopChoice(x_15);
                }
              else
                {
                  t = w_15;
                  {
                    ATerm n_70 = NULL;
                    t = m_0(t);
                    {
                      n_70 = t;
                      if(((e_70 != NULL) && (e_70 != n_70)))
                        _fail(n_70);
                      else
                        e_70 = n_70;
                    }
                    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(e_70));
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
  ATerm x_70 = NULL,y_70 = NULL,z_70 = NULL;
  x_70 = t;
  w_70 :
  if(((ATgetType(x_70) == AT_LIST) && !(ATisEmpty(x_70))))
    {
      y_70 = ATgetFirst((ATermList) x_70);
      z_70 = (ATerm) ATgetNext((ATermList) x_70);
      t = not_null(z_70);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_pop_0 (ATerm t)
{
  ATerm f_71 = NULL,g_71 = NULL,h_71 = NULL;
  f_71 = t;
  e_71 :
  if(match_cons(f_71, sym__2))
    {
      g_71 = ATgetArgument(f_71, 0);
      h_71 = ATgetArgument(f_71, 1);
      {
        ATerm d_16;
        d_16 = t;
        {
          ATerm k_71 = NULL;
          ATerm l_71 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(g_71), not_null(h_71));
          {
            ATerm e_16 = t;
            int f_16 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                t = Tl_0(t);
                LocalPopChoice(f_16);
              }
            else
              {
                t = e_16;
                t = (ATerm) ATempty;
              }
            {
              l_71 = t;
              if(((k_71 != NULL) && (k_71 != l_71)))
                _fail(l_71);
              else
                k_71 = l_71;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(g_71), not_null(h_71), not_null(k_71));
            t = table_put_0(t);
          }
        }
        t = d_16;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm end_scope_1 (ATerm t, ATerm g_86 (ATerm))
{
  ATerm s_71 = NULL,t_71 = NULL,u_71 = NULL;
  ATerm g_16;
  g_16 = t;
  {
    ATerm v_71 = NULL;
    ATerm w_71 = NULL,x_71 = NULL,y_71 = NULL;
    t = g_86(t);
    {
      v_71 = t;
      {
        if(((u_71 != NULL) && (u_71 != v_71)))
          _fail(v_71);
        else
          u_71 = v_71;
        {
          ATerm h_16 = t;
          int i_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(u_71), term_d_7);
              t = table_get_0(t);
              LocalPopChoice(i_16);
            }
          else
            {
              t = h_16;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
            }
          {
            w_71 = t;
            r_71 :
            if(((ATgetType(w_71) == AT_LIST) && !(ATisEmpty(w_71))))
              {
                x_71 = ATgetFirst((ATermList) w_71);
                y_71 = (ATerm) ATgetNext((ATermList) w_71);
                {
                  if(((t_71 != NULL) && (t_71 != x_71)))
                    _fail(x_71);
                  else
                    t_71 = x_71;
                  {
                    if(((s_71 != NULL) && (s_71 != y_71)))
                      _fail(y_71);
                    else
                      s_71 = y_71;
                    {
                      t = (ATerm) ATmakeAppl(sym__3, not_null(u_71), term_d_7, not_null(s_71));
                      {
                        t = table_put_0(t);
                        {
                          t = not_null(t_71);
                          {
                            ATerm l_3 (ATerm t)
                            {
                              ATerm z_71 = NULL;
                              z_71 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(u_71), not_null(z_71));
                                t = table_pop_0(t);
                              }
                              return(t);
                            }
                            t = map_1(t, l_3);
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
  t = g_16;
  return(t);
}
ATerm remove_file_0 (ATerm t)
{
  ATerm f_72 = NULL;
  f_72 = t;
  t = SSL_remove(not_null(f_72));
  return(t);
}
ATerm restore_always_2 (ATerm t, ATerm j_68 (ATerm), ATerm k_68 (ATerm))
{
  ATerm j_16 = t;
  int k_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = j_68(t);
      t = k_68(t);
      LocalPopChoice(k_16);
    }
  else
    {
      t = j_16;
      {
        t = k_68(t);
        _fail(t);
      }
    }
  return(t);
}
ATerm begin_scope_1 (ATerm t, ATerm f_86 (ATerm))
{
  ATerm k_72 = NULL;
  ATerm l_16;
  l_16 = t;
  {
    ATerm l_72 = NULL;
    ATerm m_72 = NULL;
    t = f_86(t);
    {
      l_72 = t;
      {
        if(((k_72 != NULL) && (k_72 != l_72)))
          _fail(l_72);
        else
          k_72 = l_72;
        {
          ATerm n_72 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(k_72), term_d_7);
          {
            ATerm m_16 = t;
            int n_16 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(n_16);
              }
            else
              {
                t = m_16;
                t = (ATerm) ATempty;
              }
            {
              n_72 = t;
              if(((m_72 != NULL) && (m_72 != n_72)))
                _fail(n_72);
              else
                m_72 = n_72;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(k_72), term_d_7, (ATerm) ATinsert(CheckATermList(not_null(m_72)), (ATerm) ATempty));
            t = table_put_0(t);
          }
        }
      }
    }
  }
  t = l_16;
  return(t);
}
ATerm xtc_temp_files_1 (ATerm t, ATerm y_95 (ATerm))
{
  ATerm s_72 = NULL,t_72 = NULL;
  ATerm m_3 (ATerm t)
  {
    t = term_o_7;
    return(t);
  }
  t = begin_scope_1(t, m_3);
  {
    ATerm p_3 (ATerm t)
    {
      ATerm o_16;
      o_16 = t;
      {
        ATerm u_72 = NULL,v_72 = NULL,w_72 = NULL;
        ATerm p_16 = t;
        int q_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_r_16;
            t = table_get_0(t);
            LocalPopChoice(q_16);
          }
        else
          {
            t = p_16;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
          }
        {
          u_72 = t;
          r_72 :
          if(((ATgetType(u_72) == AT_LIST) && !(ATisEmpty(u_72))))
            {
              v_72 = ATgetFirst((ATermList) u_72);
              w_72 = (ATerm) ATgetNext((ATermList) u_72);
              {
                if(((t_72 != NULL) && (t_72 != v_72)))
                  _fail(v_72);
                else
                  t_72 = v_72;
                {
                  if(((s_72 != NULL) && (s_72 != w_72)))
                    _fail(w_72);
                  else
                    s_72 = w_72;
                  {
                    t = not_null(t_72);
                    {
                      ATerm q_3 (ATerm t)
                      {
                        t = try_1(t, remove_file_0);
                        return(t);
                      }
                      t = map_1(t, q_3);
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
      t = o_16;
      {
        ATerm r_3 (ATerm t)
        {
          t = term_o_7;
          return(t);
        }
        t = end_scope_1(t, r_3);
      }
      return(t);
    }
    t = restore_always_2(t, y_95, p_3);
  }
  return(t);
}
ATerm xtc_io_1 (ATerm t, ATerm z_95 (ATerm))
{
  ATerm s_3 (ATerm t)
  {
    ATerm s_16 = t;
    int t_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_72 = NULL;
        ATerm a_73 = NULL;
        t = term_u_16;
        {
          t = get_config_0(t);
          {
            a_73 = t;
            if(((z_72 != NULL) && (z_72 != a_73)))
              _fail(a_73);
            else
              z_72 = a_73;
          }
        }
        t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(z_72));
        LocalPopChoice(t_16);
      }
    else
      {
        t = s_16;
        t = term_p_15;
      }
    {
      t = z_95(t);
      {
        ATerm t_3 (ATerm t)
        {
          ATerm v_16 = t;
          int w_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = term_x_16;
              t = get_config_0(t);
              LocalPopChoice(w_16);
            }
          else
            {
              t = v_16;
              t = term_y_16;
            }
          return(t);
        }
        t = copy_to_1(t, t_3);
      }
    }
    return(t);
  }
  t = xtc_temp_files_1(t, s_3);
  return(t);
}
ATerm xtc_io_wrap_2 (ATerm t, ATerm d_96 (ATerm), ATerm e_96 (ATerm))
{
  ATerm u_3 (ATerm t)
  {
    ATerm z_16 = t;
    int a_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_96(t);
        LocalPopChoice(a_17);
      }
    else
      {
        t = z_16;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm v_3 (ATerm t)
  {
    t = xtc_io_1(t, e_96);
    return(t);
  }
  t = option_wrap_2(t, u_3, v_3);
  return(t);
}
ATerm xtc_io_wrap_1 (ATerm t, ATerm c_96 (ATerm))
{
  t = xtc_io_wrap_2(t, _fail, c_96);
  return(t);
}
ATerm Abox_2_latex_0 (ATerm t)
{
  ATerm w_3 (ATerm t)
  {
    t = read_from_0(t);
    {
      t = abox2latex_0(t);
      t = topdown_print_to_0(t);
    }
    return(t);
  }
  t = xtc_io_wrap_1(t, w_3);
  return(t);
}
ATerm ReadFromFile_0 (ATerm t)
{
  ATerm d_73 = NULL;
  ATerm b_17 = t;
  int c_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_73 = NULL;
      e_73 = t;
      {
        if(((d_73 != NULL) && (d_73 != e_73)))
          _fail(e_73);
        else
          d_73 = e_73;
        t = SSL_ReadFromFile(not_null(d_73));
      }
      LocalPopChoice(c_17);
    }
  else
    {
      t = b_17;
      {
        ATerm x_3 (ATerm t)
        {
          t = term_d_17;
          return(t);
        }
        t = debug_1(t, x_3);
        _fail(t);
      }
    }
  return(t);
}
ATerm load_latex_table_0 (ATerm t)
{
  t = term_c_11;
  t = table_create_0(t);
  {
    t = term_e_17;
    {
      t = get_config_0(t);
      {
        t = ReadFromFile_0(t);
        {
          ATerm y_3 (ATerm t)
          {
            ATerm k_73 = NULL,l_73 = NULL,m_73 = NULL,n_73 = NULL,o_73 = NULL;
            k_73 = t;
            h_73 :
            if(((ATgetType(k_73) == AT_LIST) && !(ATisEmpty(k_73))))
              {
                l_73 = ATgetFirst((ATermList) k_73);
                m_73 = (ATerm) ATgetNext((ATermList) k_73);
                i_73 :
                if(((ATgetType(m_73) == AT_LIST) && !(ATisEmpty(m_73))))
                  {
                    n_73 = ATgetFirst((ATermList) m_73);
                    o_73 = (ATerm) ATgetNext((ATermList) m_73);
                    j_73 :
                    if(((ATgetType(o_73) == AT_LIST) && ATisEmpty(o_73)))
                      {
                        {
                          t = (ATerm) ATmakeAppl(sym__3, term_c_11, not_null(l_73), not_null(n_73));
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
          t = map_1(t, y_3);
        }
      }
    }
  }
  return(t);
}
ATerm ArgOption_2 (ATerm t, ATerm i_91 (ATerm), ATerm j_91 (ATerm))
{
  ATerm a_4 (ATerm t)
  {
    t = term_f_17;
    return(t);
  }
  t = ArgOption_3(t, i_91, j_91, a_4);
  return(t);
}
ATerm version_option_0 (ATerm t)
{
  ATerm b_4 (ATerm t)
  {
    ATerm t_73 = NULL;
    t_73 = t;
    s_73 :
    if(!(match_string(t_73, "-v")))
      {
        if(!(match_string(t_73, "--version")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm c_4 (ATerm t)
  {
    t = term_h_17;
    t = set_config_0(t);
    t = term_i_17;
    return(t);
  }
  ATerm d_4 (ATerm t)
  {
    t = term_j_17;
    return(t);
  }
  t = Option_3(t, b_4, c_4, d_4);
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm e_4 (ATerm t)
  {
    ATerm w_73 = NULL;
    w_73 = t;
    u_73 :
    if(!(match_string(w_73, "-k")))
      {
        if(!(match_string(w_73, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm f_4 (ATerm t)
  {
    ATerm k_17;
    k_17 = t;
    {
      ATerm x_73 = NULL;
      ATerm y_73 = NULL;
      t = string_to_int_0(t);
      {
        y_73 = t;
        if(((x_73 != NULL) && (x_73 != y_73)))
          _fail(y_73);
        else
          x_73 = y_73;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_l_17, not_null(x_73));
        t = set_config_0(t);
      }
    }
    t = k_17;
    return(t);
  }
  ATerm g_4 (ATerm t)
  {
    t = term_m_17;
    return(t);
  }
  t = ArgOption_3(t, e_4, f_4, g_4);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm b_74 = NULL;
  b_74 = t;
  t = SSL_string_to_int(not_null(b_74));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm n_17 = t;
  int o_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_4 (ATerm t)
      {
        ATerm j_74 = NULL;
        j_74 = t;
        e_74 :
        if(!(match_string(j_74, "-S")))
          {
            if(!(match_string(j_74, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm i_4 (ATerm t)
      {
        t = term_p_17;
        t = set_config_0(t);
        t = term_q_17;
        return(t);
      }
      ATerm j_4 (ATerm t)
      {
        t = term_r_17;
        return(t);
      }
      t = Option_3(t, h_4, i_4, j_4);
      LocalPopChoice(o_17);
    }
  else
    {
      t = n_17;
      {
        ATerm s_17 = t;
        int t_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_4 (ATerm t)
            {
              ATerm k_74 = NULL;
              k_74 = t;
              f_74 :
              if(!(match_string(k_74, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm l_4 (ATerm t)
            {
              ATerm n_74 = NULL;
              ATerm u_17;
              u_17 = t;
              {
                ATerm l_74 = NULL;
                ATerm m_74 = NULL;
                t = string_to_int_0(t);
                {
                  m_74 = t;
                  if(((l_74 != NULL) && (l_74 != m_74)))
                    _fail(m_74);
                  else
                    l_74 = m_74;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_r_12, not_null(l_74));
                  t = set_config_0(t);
                }
              }
              t = u_17;
              {
                ATerm o_74 = NULL;
                o_74 = t;
                if(((n_74 != NULL) && (n_74 != o_74)))
                  _fail(o_74);
                else
                  n_74 = o_74;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(n_74));
              }
              return(t);
            }
            ATerm m_4 (ATerm t)
            {
              t = term_v_17;
              return(t);
            }
            t = ArgOption_3(t, k_4, l_4, m_4);
            LocalPopChoice(t_17);
          }
        else
          {
            t = s_17;
            {
              ATerm n_4 (ATerm t)
              {
                ATerm p_74 = NULL;
                p_74 = t;
                i_74 :
                if(!(match_string(p_74, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm o_4 (ATerm t)
              {
                t = term_x_17;
                t = set_config_0(t);
                t = term_y_17;
                return(t);
              }
              ATerm s_4 (ATerm t)
              {
                t = term_z_17;
                return(t);
              }
              t = Option_3(t, n_4, o_4, s_4);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0 (ATerm t)
{
  ATerm a_18 = t;
  int b_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      LocalPopChoice(b_18);
    }
  else
    {
      t = a_18;
      {
        ATerm c_18 = t;
        int d_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = keep_option_0(t);
            LocalPopChoice(d_18);
          }
        else
          {
            t = c_18;
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
    ATerm v_74 = NULL;
    v_74 = t;
    s_74 :
    if(!(match_string(v_74, "-o")))
      {
        if(!(match_string(v_74, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm u_4 (ATerm t)
  {
    ATerm y_74 = NULL;
    ATerm e_18;
    e_18 = t;
    {
      ATerm w_74 = NULL;
      ATerm x_74 = NULL;
      x_74 = t;
      if(((w_74 != NULL) && (w_74 != x_74)))
        _fail(x_74);
      else
        w_74 = x_74;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_x_16, not_null(w_74));
        t = set_config_0(t);
      }
    }
    t = e_18;
    {
      ATerm z_74 = NULL;
      z_74 = t;
      if(((y_74 != NULL) && (y_74 != z_74)))
        _fail(z_74);
      else
        y_74 = z_74;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(y_74));
    }
    return(t);
  }
  ATerm v_4 (ATerm t)
  {
    t = term_f_18;
    return(t);
  }
  t = ArgOption_3(t, t_4, u_4, v_4);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm g_18 = t;
  int h_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      LocalPopChoice(h_18);
    }
  else
    {
      t = g_18;
      {
        ATerm w_4 (ATerm t)
        {
          ATerm d_75 = NULL;
          d_75 = t;
          c_75 :
          if(!(match_string(d_75, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm x_4 (ATerm t)
        {
          t = term_j_18;
          t = set_config_0(t);
          t = term_k_18;
          return(t);
        }
        ATerm y_4 (ATerm t)
        {
          t = term_l_18;
          return(t);
        }
        t = Option_3(t, w_4, x_4, y_4);
      }
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm j_75 = NULL,k_75 = NULL,l_75 = NULL,m_75 = NULL,p_75 = NULL;
  j_75 = t;
  h_75 :
  if(match_string(j_75, "register-usage-info"))
    {
      t = register_usage_1(t, l_0);
    }
  else
    {
      if(((ATgetType(j_75) == AT_LIST) && !(ATisEmpty(j_75))))
        {
          k_75 = ATgetFirst((ATermList) j_75);
          l_75 = (ATerm) ATgetNext((ATermList) j_75);
          i_75 :
          if(((ATgetType(l_75) == AT_LIST) && !(ATisEmpty(l_75))))
            {
              m_75 = ATgetFirst((ATermList) l_75);
              p_75 = (ATerm) ATgetNext((ATermList) l_75);
              {
                ATerm w_75 = NULL;
                ATerm m_18;
                m_18 = t;
                {
                  t = not_null(k_75);
                  t = j_0(t);
                }
                t = m_18;
                {
                  ATerm x_75 = NULL;
                  t = not_null(m_75);
                  {
                    t = k_0(t);
                    {
                      x_75 = t;
                      if(((w_75 != NULL) && (w_75 != x_75)))
                        _fail(x_75);
                      else
                        w_75 = x_75;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(p_75)), not_null(w_75));
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
    ATerm g_76 = NULL;
    g_76 = t;
    d_76 :
    if(!(match_string(g_76, "-i")))
      {
        if(!(match_string(g_76, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm a_5 (ATerm t)
  {
    ATerm n_76 = NULL;
    ATerm n_18;
    n_18 = t;
    {
      ATerm j_76 = NULL;
      ATerm k_76 = NULL;
      k_76 = t;
      if(((j_76 != NULL) && (j_76 != k_76)))
        _fail(k_76);
      else
        j_76 = k_76;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_u_16, not_null(j_76));
        t = set_config_0(t);
      }
    }
    t = n_18;
    {
      ATerm o_76 = NULL;
      o_76 = t;
      if(((n_76 != NULL) && (n_76 != o_76)))
        _fail(o_76);
      else
        n_76 = o_76;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(n_76));
    }
    return(t);
  }
  ATerm b_5 (ATerm t)
  {
    t = term_o_18;
    return(t);
  }
  t = ArgOption_3(t, z_4, a_5, b_5);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm p_18 = t;
  int q_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
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
            t = aterm_output_option_0(t);
            LocalPopChoice(s_18);
          }
        else
          {
            t = r_18;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm Abox2latex_options_0 (ATerm t)
{
  ATerm t_18 = t;
  int u_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = io_options_0(t);
      LocalPopChoice(u_18);
    }
  else
    {
      t = t_18;
      {
        ATerm v_18 = t;
        int w_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_5 (ATerm t)
            {
              ATerm x_76 = NULL;
              x_76 = t;
              r_76 :
              if(!(match_string(x_76, "-t")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm d_5 (ATerm t)
            {
              ATerm y_76 = NULL;
              ATerm b_77 = NULL;
              b_77 = t;
              if(((y_76 != NULL) && (y_76 != b_77)))
                _fail(b_77);
              else
                y_76 = b_77;
              {
                t = (ATerm) ATmakeAppl(sym__2, term_e_17, not_null(y_76));
                t = set_config_0(t);
              }
              return(t);
            }
            t = ArgOption_2(t, c_5, d_5);
            LocalPopChoice(w_18);
          }
        else
          {
            t = v_18;
            {
              ATerm e_5 (ATerm t)
              {
                ATerm c_77 = NULL;
                c_77 = t;
                v_76 :
                if(!(match_string(c_77, "-w")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm f_5 (ATerm t)
              {
                ATerm d_77 = NULL;
                ATerm e_77 = NULL;
                e_77 = t;
                if(((d_77 != NULL) && (d_77 != e_77)))
                  _fail(e_77);
                else
                  d_77 = e_77;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_o_10, not_null(d_77));
                  t = set_config_0(t);
                }
                return(t);
              }
              t = ArgOption_2(t, e_5, f_5);
            }
          }
      }
    }
  return(t);
}
ATerm default_usage_0 (ATerm t)
{
  ATerm j_77 = NULL;
  ATerm x_18;
  x_18 = t;
  {
    ATerm g_5 (ATerm t)
    {
      ATerm k_77 = NULL,l_77 = NULL;
      k_77 = t;
      i_77 :
      if(match_cons(k_77, sym_Program_1))
        {
          l_77 = ATgetArgument(k_77, 0);
          if(((j_77 != NULL) && (j_77 != l_77)))
            _fail(l_77);
          else
            j_77 = l_77;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = option_defined_1(t, g_5);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_y_18, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_a_19), not_null(j_77)), term_z_18));
      {
        t = printnl_0(t);
        {
          t = term_l_12;
          t = exit_0(t);
        }
      }
    }
  }
  t = x_18;
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_y_18, (ATerm) ATinsert(ATempty, term_b_19));
  {
    t = printnl_0(t);
    {
      t = term_l_12;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm o_77 = NULL;
  o_77 = t;
  t = SSL_TicksToSeconds(not_null(o_77));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm t_77 = NULL,u_77 = NULL,v_77 = NULL;
  t_77 = t;
  s_77 :
  if(match_cons(t_77, sym__2))
    {
      u_77 = ATgetArgument(t_77, 0);
      v_77 = ATgetArgument(t_77, 1);
      {
        ATerm c_19 = t;
        int d_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(u_77), not_null(v_77));
            LocalPopChoice(d_19);
          }
        else
          {
            t = c_19;
            t = SSL_addr(not_null(u_77), not_null(v_77));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm g_82 (ATerm), ATerm h_82 (ATerm))
{
  ATerm e_19 = t;
  int f_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = g_82(t);
      LocalPopChoice(f_19);
    }
  else
    {
      t = e_19;
      {
        ATerm c_78 = NULL,d_78 = NULL,e_78 = NULL;
        c_78 = t;
        b_78 :
        if(((ATgetType(c_78) == AT_LIST) && !(ATisEmpty(c_78))))
          {
            d_78 = ATgetFirst((ATermList) c_78);
            e_78 = (ATerm) ATgetNext((ATermList) c_78);
            {
              ATerm h_78 = NULL;
              ATerm i_78 = NULL;
              t = not_null(e_78);
              {
                t = foldr_2(t, g_82, h_82);
                {
                  i_78 = t;
                  if(((h_78 != NULL) && (h_78 != i_78)))
                    _fail(i_78);
                  else
                    h_78 = i_78;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(d_78), not_null(h_78));
                t = h_82(t);
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
ATerm crush_2 (ATerm t, ATerm e_81 (ATerm), ATerm f_81 (ATerm))
{
  ATerm p_78 = NULL;
  ATerm r_78 = NULL;
  p_78 = t;
  {
    ATerm s_78 = NULL;
    ATerm u_78 = NULL,v_78 = NULL,w_78 = NULL;
    t = not_null(p_78);
    {
      s_78 = t;
      {
        t = SSL_explode_term(not_null(s_78));
        {
          u_78 = t;
          o_78 :
          if(match_cons(u_78, sym__2))
            {
              v_78 = ATgetArgument(u_78, 0);
              w_78 = ATgetArgument(u_78, 1);
              if(((r_78 != NULL) && (r_78 != w_78)))
                _fail(w_78);
              else
                r_78 = w_78;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(r_78);
      t = foldr_2(t, e_81, f_81);
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
    ATerm h_5 (ATerm t)
    {
      t = term_f_13;
      return(t);
    }
    t = crush_2(t, h_5, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm c_79 = NULL,d_79 = NULL,e_79 = NULL;
  c_79 = t;
  b_79 :
  if(match_cons(c_79, sym__2))
    {
      d_79 = ATgetArgument(c_79, 0);
      e_79 = ATgetArgument(c_79, 1);
      {
        ATerm g_19;
        g_19 = t;
        {
          ATerm h_19 = t;
          int i_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(d_79), not_null(e_79));
              LocalPopChoice(i_19);
            }
          else
            {
              t = h_19;
              t = SSL_gtr(not_null(d_79), not_null(e_79));
            }
        }
        t = g_19;
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
  ATerm k_79 = NULL;
  ATerm j_19 = t;
  int k_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_79 = NULL,m_79 = NULL,n_79 = NULL;
      l_79 = t;
      j_79 :
      if(match_cons(l_79, sym__2))
        {
          m_79 = ATgetArgument(l_79, 0);
          n_79 = ATgetArgument(l_79, 1);
          {
            if(((k_79 != NULL) && (k_79 != m_79)))
              _fail(m_79);
            else
              k_79 = m_79;
            if(((k_79 != NULL) && (k_79 != n_79)))
              _fail(n_79);
            else
              k_79 = n_79;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(k_19);
    }
  else
    {
      t = j_19;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm m_89 (ATerm))
{
  ATerm i_5 (ATerm t)
  {
    ATerm l_19;
    l_19 = t;
    {
      ATerm q_79 = NULL;
      ATerm r_79 = NULL;
      t = term_r_12;
      {
        t = get_config_0(t);
        {
          r_79 = t;
          if(((q_79 != NULL) && (q_79 != r_79)))
            _fail(r_79);
          else
            q_79 = r_79;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(q_79), term_l_12);
        t = geq_0(t);
      }
    }
    t = l_19;
    t = m_89(t);
    return(t);
  }
  t = try_1(t, i_5);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm m_5 (ATerm t)
  {
    ATerm v_79 = NULL,x_79 = NULL;
    ATerm m_19;
    m_19 = t;
    {
      ATerm w_79 = NULL;
      t = run_time_0(t);
      {
        w_79 = t;
        if(((v_79 != NULL) && (v_79 != w_79)))
          _fail(w_79);
        else
          v_79 = w_79;
      }
    }
    t = m_19;
    {
      ATerm y_79 = NULL;
      t = term_n_19;
      {
        t = get_config_0(t);
        {
          y_79 = t;
          if(((x_79 != NULL) && (x_79 != y_79)))
            _fail(y_79);
          else
            x_79 = y_79;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_y_18, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_p_19), not_null(v_79)), term_o_19), not_null(x_79)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, m_5);
  {
    t = term_f_13;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm f_80 = NULL;
  f_80 = t;
  e_80 :
  if(match_cons(f_80, sym_Version_0))
    {
      ATerm h_80 = NULL,j_80 = NULL;
      ATerm q_19;
      q_19 = t;
      {
        ATerm i_80 = NULL;
        t = SSLgetAnnotations(not_null(f_80));
        {
          i_80 = t;
          if(((h_80 != NULL) && (h_80 != i_80)))
            _fail(i_80);
          else
            h_80 = i_80;
        }
      }
      t = q_19;
      {
        ATerm k_80 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(h_80));
        {
          k_80 = t;
          if(((j_80 != NULL) && (j_80 != k_80)))
            _fail(k_80);
          else
            j_80 = k_80;
        }
        t = not_null(j_80);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm s_87 (ATerm))
{
  ATerm n_5 (ATerm t)
  {
    ATerm r_19 = t;
    int s_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
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
              t = Undefined_1(t, _id);
              LocalPopChoice(u_19);
            }
          else
            {
              t = t_19;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, n_5);
  t = s_87(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm p_80 = NULL;
  p_80 = t;
  t = SSL_table_create(not_null(p_80));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm t_80 = NULL;
  t_80 = t;
  {
    ATerm v_19;
    v_19 = t;
    {
      t = term_w_19;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_w_19, term_x_19, not_null(t_80));
          t = table_put_0(t);
        }
      }
    }
    t = v_19;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm x_80 = NULL;
  x_80 = t;
  t = SSL_table_destroy(not_null(x_80));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm b_81 = NULL;
  b_81 = t;
  t = SSL_exit(not_null(b_81));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm h_81 = NULL,i_81 = NULL,j_81 = NULL;
  h_81 = t;
  g_81 :
  if(((ATgetType(h_81) == AT_LIST) && ATisEmpty(h_81)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(h_81) == AT_LIST) && !(ATisEmpty(h_81))))
        {
          i_81 = ATgetFirst((ATermList) h_81);
          j_81 = (ATerm) ATgetNext((ATermList) h_81);
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
  ATerm y_19;
  y_19 = t;
  {
    ATerm m_81 = NULL;
    ATerm p_81 = NULL;
    ATerm z_19 = t;
    int a_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        LocalPopChoice(a_20);
      }
    else
      {
        t = z_19;
        {
          ATerm n_81 = NULL;
          ATerm o_81 = NULL;
          o_81 = t;
          if(((n_81 != NULL) && (n_81 != o_81)))
            _fail(o_81);
          else
            n_81 = o_81;
          t = (ATerm) ATinsert(ATempty, not_null(n_81));
        }
      }
    {
      p_81 = t;
      if(((m_81 != NULL) && (m_81 != p_81)))
        _fail(p_81);
      else
        m_81 = p_81;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_y_16, not_null(m_81));
      t = printnl_0(t);
    }
  }
  t = y_19;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm q_91 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm h_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm y_81 = NULL,z_81 = NULL,a_82 = NULL;
  a_82 = t;
  x_81 :
  if(((ATgetType(a_82) == AT_LIST) && !(ATisEmpty(a_82))))
    {
      y_81 = ATgetFirst((ATermList) a_82);
      z_81 = (ATerm) ATgetNext((ATermList) a_82);
      {
        ATerm d_82 = NULL;
        t = not_null(z_81);
        {
          ATerm b_20;
          b_20 = t;
          {
            ATerm e_82 = NULL,i_82 = NULL,k_82 = NULL;
            ATerm c_20;
            c_20 = t;
            {
              ATerm f_82 = NULL;
              t = i_0(t);
              {
                f_82 = t;
                if(((e_82 != NULL) && (e_82 != f_82)))
                  _fail(f_82);
                else
                  e_82 = f_82;
              }
            }
            t = c_20;
            {
              ATerm j_82 = NULL;
              t = not_null(y_81);
              {
                t = h_0(t);
                {
                  j_82 = t;
                  if(((i_82 != NULL) && (i_82 != j_82)))
                    _fail(j_82);
                  else
                    i_82 = j_82;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(e_82)), not_null(i_82));
                {
                  k_82 = t;
                  if(((d_82 != NULL) && (d_82 != k_82)))
                    _fail(k_82);
                  else
                    d_82 = k_82;
                }
              }
            }
          }
          t = b_20;
          {
            ATerm o_5 (ATerm t)
            {
              t = not_null(d_82);
              return(t);
            }
            t = reverse_acc_2(t, h_0, o_5);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(a_82) == AT_LIST) && ATisEmpty(a_82)))
        {
          {
            t = term_l_7;
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
  ATerm r_5 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, r_5);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm p_91 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm a_67 (ATerm))
{
  ATerm v_82 = NULL,w_82 = NULL;
  v_82 = t;
  u_82 :
  if(match_cons(v_82, sym_Program_1))
    {
      w_82 = ATgetArgument(v_82, 0);
      {
        ATerm z_82 = NULL,b_83 = NULL;
        ATerm a_83 = NULL;
        t = SSLgetAnnotations(not_null(v_82));
        {
          a_83 = t;
          if(((z_82 != NULL) && (z_82 != a_83)))
            _fail(a_83);
          else
            z_82 = a_83;
        }
        {
          t = not_null(w_82);
          {
            ATerm d_83 = NULL;
            t = a_67(t);
            {
              b_83 = t;
              {
                ATerm e_83 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(b_83)), not_null(z_82));
                {
                  e_83 = t;
                  if(((d_83 != NULL) && (d_83 != e_83)))
                    _fail(e_83);
                  else
                    d_83 = e_83;
                }
                t = not_null(d_83);
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
  ATerm o_83 = NULL;
  ATerm d_20 = t;
  int e_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_83 = NULL;
      t = term_n_19;
      {
        t = get_config_0(t);
        {
          p_83 = t;
          if(((o_83 != NULL) && (o_83 != p_83)))
            _fail(p_83);
          else
            o_83 = p_83;
        }
      }
      LocalPopChoice(e_20);
    }
  else
    {
      t = d_20;
      {
        ATerm s_5 (ATerm t)
        {
          ATerm t_5 (ATerm t)
          {
            ATerm q_83 = NULL;
            q_83 = t;
            if(((o_83 != NULL) && (o_83 != q_83)))
              _fail(q_83);
            else
              o_83 = q_83;
            return(t);
          }
          t = Program_1(t, t_5);
          return(t);
        }
        t = option_defined_1(t, s_5);
      }
    }
  {
    ATerm u_5 (ATerm t)
    {
      ATerm y_5 (ATerm t)
      {
        t = not_null(o_83);
        return(t);
      }
      t = short_description_1(t, y_5);
      t = echo_0(t);
      return(t);
    }
    t = try_1(t, u_5);
    {
      t = term_f_20;
      {
        t = echo_0(t);
        {
          t = term_i_20;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm z_5 (ATerm t)
                {
                  ATerm r_83 = NULL;
                  ATerm s_83 = NULL;
                  s_83 = t;
                  if(((r_83 != NULL) && (r_83 != s_83)))
                    _fail(s_83);
                  else
                    r_83 = s_83;
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(r_83)), term_j_20);
                    t = echo_0(t);
                  }
                  return(t);
                }
                t = map_1(t, z_5);
                {
                  ATerm b_6 (ATerm t)
                  {
                    ATerm t_83 = NULL;
                    ATerm u_83 = NULL;
                    ATerm c_6 (ATerm t)
                    {
                      t = not_null(o_83);
                      return(t);
                    }
                    t = long_description_1(t, c_6);
                    {
                      u_83 = t;
                      if(((t_83 != NULL) && (t_83 != u_83)))
                        _fail(u_83);
                      else
                        t_83 = u_83;
                    }
                    {
                      t = (ATerm) ATinsert(CheckATermList(not_null(t_83)), term_x_11);
                      t = echo_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, b_6);
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
  ATerm k_20;
  k_20 = t;
  {
    ATerm c_84 = NULL;
    ATerm d_84 = NULL;
    d_84 = t;
    if(((c_84 != NULL) && (c_84 != d_84)))
      _fail(d_84);
    else
      c_84 = d_84;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_y_18, (ATerm) ATinsert(ATempty, not_null(c_84)));
      t = printnl_0(t);
    }
  }
  t = k_20;
  return(t);
}
ATerm say_1 (ATerm t, ATerm r_86 (ATerm))
{
  ATerm l_20;
  l_20 = t;
  {
    t = r_86(t);
    t = debug_0(t);
  }
  t = l_20;
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm b_67 (ATerm))
{
  ATerm k_84 = NULL,l_84 = NULL;
  k_84 = t;
  j_84 :
  if(match_cons(k_84, sym_Undefined_1))
    {
      l_84 = ATgetArgument(k_84, 0);
      {
        ATerm o_84 = NULL,q_84 = NULL;
        ATerm p_84 = NULL;
        t = SSLgetAnnotations(not_null(k_84));
        {
          p_84 = t;
          if(((o_84 != NULL) && (o_84 != p_84)))
            _fail(p_84);
          else
            o_84 = p_84;
        }
        {
          t = not_null(l_84);
          {
            ATerm s_84 = NULL;
            t = b_67(t);
            {
              q_84 = t;
              {
                ATerm t_84 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(q_84)), not_null(o_84));
                {
                  t_84 = t;
                  if(((s_84 != NULL) && (s_84 != t_84)))
                    _fail(t_84);
                  else
                    s_84 = t_84;
                }
                t = not_null(s_84);
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
ATerm fetch_1 (ATerm t, ATerm b_76 (ATerm))
{
  ATerm y_84 (ATerm t)
  {
    ATerm m_20 = t;
    int n_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, b_76, _id);
        LocalPopChoice(n_20);
      }
    else
      {
        t = m_20;
        t = Cons_2(t, _id, y_84);
      }
    return(t);
  }
  t = y_84(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm p_90 (ATerm))
{
  t = fetch_1(t, p_90);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm d_85 = NULL;
  d_85 = t;
  c_85 :
  if(match_cons(d_85, sym_Help_0))
    {
      ATerm f_85 = NULL,h_85 = NULL;
      ATerm o_20;
      o_20 = t;
      {
        ATerm g_85 = NULL;
        t = SSLgetAnnotations(not_null(d_85));
        {
          g_85 = t;
          if(((f_85 != NULL) && (f_85 != g_85)))
            _fail(g_85);
          else
            f_85 = g_85;
        }
      }
      t = o_20;
      {
        ATerm i_85 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(f_85));
        {
          i_85 = t;
          if(((h_85 != NULL) && (h_85 != i_85)))
            _fail(i_85);
          else
            h_85 = i_85;
        }
        t = not_null(h_85);
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
  ATerm n_85 = NULL;
  n_85 = t;
  t = SSL_implode_string(not_null(n_85));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm p_20 = t;
  int q_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(q_20);
    }
  else
    {
      t = p_20;
      {
        ATerm t_85 = NULL,u_85 = NULL,v_85 = NULL;
        t_85 = t;
        r_85 :
        if(((ATgetType(t_85) == AT_LIST) && !(ATisEmpty(t_85))))
          {
            u_85 = ATgetFirst((ATermList) t_85);
            v_85 = (ATerm) ATgetNext((ATermList) t_85);
            {
              t = not_null(u_85);
              {
                ATerm d_6 (ATerm t)
                {
                  t = not_null(v_85);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, d_6);
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
  ATerm h_86 = NULL;
  ATerm k_86 = NULL;
  h_86 = t;
  {
    ATerm l_86 = NULL;
    ATerm o_86 = NULL,p_86 = NULL,s_86 = NULL;
    t = not_null(h_86);
    {
      l_86 = t;
      {
        t = SSL_explode_term(not_null(l_86));
        {
          o_86 = t;
          d_86 :
          if(match_cons(o_86, sym__2))
            {
              p_86 = ATgetArgument(o_86, 0);
              s_86 = ATgetArgument(o_86, 1);
              e_86 :
              if(match_string(p_86, ""))
                {
                  if(((k_86 != NULL) && (k_86 != s_86)))
                    _fail(s_86);
                  else
                    k_86 = s_86;
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
      t = not_null(k_86);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm h_76 (ATerm))
{
  ATerm w_86 (ATerm t)
  {
    ATerm r_20 = t;
    int s_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, w_86);
        LocalPopChoice(s_20);
      }
    else
      {
        t = r_20;
        {
          t = Nil_0(t);
          t = h_76(t);
        }
      }
    return(t);
  }
  t = w_86(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm b_87 = NULL,c_87 = NULL,d_87 = NULL;
  b_87 = t;
  a_87 :
  if(match_cons(b_87, sym__2))
    {
      c_87 = ATgetArgument(b_87, 0);
      d_87 = ATgetArgument(b_87, 1);
      {
        t = not_null(c_87);
        {
          ATerm e_6 (ATerm t)
          {
            t = not_null(d_87);
            return(t);
          }
          t = at_end_1(t, e_6);
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
  ATerm t_20 = t;
  int u_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      LocalPopChoice(u_20);
    }
  else
    {
      t = t_20;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm i_87 = NULL;
  i_87 = t;
  t = SSL_explode_string(not_null(i_87));
  return(t);
}
ATerm _2 (ATerm t, ATerm w_57 (ATerm), ATerm x_57 (ATerm))
{
  ATerm r_87 = NULL,t_87 = NULL,u_87 = NULL;
  r_87 = t;
  q_87 :
  if(match_cons(r_87, sym__2))
    {
      t_87 = ATgetArgument(r_87, 0);
      u_87 = ATgetArgument(r_87, 1);
      {
        ATerm e_88 = NULL,g_88 = NULL;
        ATerm f_88 = NULL;
        t = SSLgetAnnotations(not_null(r_87));
        {
          f_88 = t;
          if(((e_88 != NULL) && (e_88 != f_88)))
            _fail(f_88);
          else
            e_88 = f_88;
        }
        {
          t = not_null(t_87);
          {
            ATerm i_88 = NULL;
            t = w_57(t);
            {
              g_88 = t;
              {
                t = not_null(u_87);
                {
                  ATerm k_88 = NULL;
                  t = x_57(t);
                  {
                    i_88 = t;
                    {
                      ATerm l_88 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(g_88), not_null(i_88)), not_null(e_88));
                      {
                        l_88 = t;
                        if(((k_88 != NULL) && (k_88 != l_88)))
                          _fail(l_88);
                        else
                          k_88 = l_88;
                      }
                      t = not_null(k_88);
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
  ATerm t_88 = NULL,u_88 = NULL,v_88 = NULL;
  t_88 = t;
  s_88 :
  if(match_cons(t_88, sym__2))
    {
      u_88 = ATgetArgument(t_88, 0);
      v_88 = ATgetArgument(t_88, 1);
      {
        ATerm v_20;
        v_20 = t;
        t = SSL_printnl(not_null(u_88), not_null(v_88));
        t = v_20;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm q_86 (ATerm))
{
  ATerm w_20;
  w_20 = t;
  {
    ATerm b_89 = NULL,d_89 = NULL;
    ATerm x_20;
    x_20 = t;
    {
      ATerm c_89 = NULL;
      t = q_86(t);
      {
        c_89 = t;
        if(((b_89 != NULL) && (b_89 != c_89)))
          _fail(c_89);
        else
          b_89 = c_89;
      }
    }
    t = x_20;
    {
      ATerm e_89 = NULL;
      e_89 = t;
      if(((d_89 != NULL) && (d_89 != e_89)))
        _fail(e_89);
      else
        d_89 = e_89;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_y_18, (ATerm) ATinsert(ATinsert(ATempty, not_null(d_89)), not_null(b_89)));
        t = printnl_0(t);
      }
    }
  }
  t = w_20;
  return(t);
}
ATerm map_1 (ATerm t, ATerm s_75 (ATerm))
{
  ATerm h_89 (ATerm t)
  {
    ATerm y_20 = t;
    int z_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(z_20);
      }
    else
      {
        t = y_20;
        t = Cons_2(t, s_75, h_89);
      }
    return(t);
  }
  t = h_89(t);
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm j_89 = NULL;
  j_89 = t;
  t = SSL_is_string(not_null(j_89));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm a_21 = t;
  int b_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(b_21);
    }
  else
    {
      t = a_21;
      {
        ATerm c_21 = t;
        int d_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_6 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, f_6);
            LocalPopChoice(d_21);
          }
        else
          {
            t = c_21;
            {
              ATerm u_89 = NULL,v_89 = NULL,w_89 = NULL;
              u_89 = t;
              t_89 :
              if(match_cons(u_89, sym_Path_1))
                {
                  v_89 = ATgetArgument(u_89, 0);
                  t = not_null(v_89);
                }
              else
                {
                  if(match_cons(u_89, sym_Var_1))
                    {
                      v_89 = ATgetArgument(u_89, 0);
                      {
                        t = not_null(v_89);
                        {
                          ATerm e_21 = t;
                          int f_21 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(f_21);
                            }
                          else
                            {
                              t = e_21;
                              {
                                ATerm h_6 (ATerm t)
                                {
                                  t = term_g_21;
                                  return(t);
                                }
                                t = debug_1(t, h_6);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(u_89, sym_Prefix_2))
                        {
                          v_89 = ATgetArgument(u_89, 0);
                          w_89 = ATgetArgument(u_89, 1);
                          {
                            ATerm b_90 = NULL,d_90 = NULL;
                            ATerm h_21;
                            h_21 = t;
                            {
                              ATerm c_90 = NULL;
                              t = not_null(v_89);
                              {
                                t = eval_config_0(t);
                                {
                                  c_90 = t;
                                  if(((b_90 != NULL) && (b_90 != c_90)))
                                    _fail(c_90);
                                  else
                                    b_90 = c_90;
                                }
                              }
                            }
                            t = h_21;
                            {
                              ATerm e_90 = NULL;
                              t = not_null(w_89);
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
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(b_90), not_null(d_90));
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
  ATerm m_90 = NULL;
  m_90 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_i_21, not_null(m_90));
    {
      t = table_get_0(t);
      {
        ATerm m_6 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm j_21;
            j_21 = t;
            {
              ATerm o_90 = NULL;
              ATerm q_90 = NULL;
              q_90 = t;
              if(((o_90 != NULL) && (o_90 != q_90)))
                _fail(q_90);
              else
                o_90 = q_90;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_i_21, not_null(m_90), not_null(o_90));
                t = table_put_0(t);
              }
            }
            t = j_21;
          }
          return(t);
        }
        t = try_1(t, m_6);
      }
    }
  }
  return(t);
}
ATerm try_1 (ATerm t, ATerm z_67 (ATerm))
{
  ATerm k_21 = t;
  int l_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = z_67(t);
      LocalPopChoice(l_21);
    }
  else
    {
      t = k_21;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm v_90 = NULL,w_90 = NULL,x_90 = NULL;
  v_90 = t;
  u_90 :
  if(match_cons(v_90, sym__2))
    {
      w_90 = ATgetArgument(v_90, 0);
      x_90 = ATgetArgument(v_90, 1);
      t = SSL_table_get(not_null(w_90), not_null(x_90));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm e_91 = NULL,f_91 = NULL,g_91 = NULL,h_91 = NULL;
  e_91 = t;
  d_91 :
  if(match_cons(e_91, sym__3))
    {
      f_91 = ATgetArgument(e_91, 0);
      g_91 = ATgetArgument(e_91, 1);
      h_91 = ATgetArgument(e_91, 2);
      {
        ATerm m_21;
        m_21 = t;
        {
          ATerm n_91 = NULL;
          ATerm o_91 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(f_91), not_null(g_91));
          {
            ATerm n_21 = t;
            int o_21 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(o_21);
              }
            else
              {
                t = n_21;
                t = (ATerm) ATempty;
              }
            {
              o_91 = t;
              if(((n_91 != NULL) && (n_91 != o_91)))
                _fail(o_91);
              else
                n_91 = o_91;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(f_91), not_null(g_91), (ATerm) ATinsert(CheckATermList(not_null(n_91)), not_null(h_91)));
            t = table_put_0(t);
          }
        }
        t = m_21;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm u_91 (ATerm))
{
  ATerm y_91 = NULL;
  ATerm z_91 = NULL;
  t = term_l_7;
  {
    t = u_91(t);
    {
      z_91 = t;
      if(((y_91 != NULL) && (y_91 != z_91)))
        _fail(z_91);
      else
        y_91 = z_91;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_g_20, term_h_20, not_null(y_91));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm))
{
  ATerm f_92 = NULL,g_92 = NULL,h_92 = NULL;
  f_92 = t;
  e_92 :
  if(match_string(f_92, "register-usage-info"))
    {
      t = register_usage_1(t, g_0);
    }
  else
    {
      if(((ATgetType(f_92) == AT_LIST) && !(ATisEmpty(f_92))))
        {
          g_92 = ATgetFirst((ATermList) f_92);
          h_92 = (ATerm) ATgetNext((ATermList) f_92);
          {
            ATerm k_92 = NULL;
            ATerm p_21;
            p_21 = t;
            {
              t = not_null(g_92);
              t = a_0(t);
            }
            t = p_21;
            {
              ATerm l_92 = NULL;
              t = term_l_7;
              {
                t = d_0(t);
                {
                  l_92 = t;
                  if(((k_92 != NULL) && (k_92 != l_92)))
                    _fail(l_92);
                  else
                    k_92 = l_92;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(h_92)), not_null(k_92));
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
  ATerm n_6 (ATerm t)
  {
    ATerm q_92 = NULL;
    q_92 = t;
    p_92 :
    if(!(match_string(q_92, "--help")))
      {
        if(!(match_string(q_92, "-h")))
          {
            if(!(match_string(q_92, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm o_6 (ATerm t)
  {
    t = term_r_21;
    {
      t = set_config_0(t);
      t = term_s_21;
    }
    return(t);
  }
  ATerm p_6 (ATerm t)
  {
    t = term_t_21;
    return(t);
  }
  t = Option_3(t, n_6, o_6, p_6);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm t_92 = NULL,u_92 = NULL,v_92 = NULL;
  t_92 = t;
  s_92 :
  if(((ATgetType(t_92) == AT_LIST) && !(ATisEmpty(t_92))))
    {
      u_92 = ATgetFirst((ATermList) t_92);
      v_92 = (ATerm) ATgetNext((ATermList) t_92);
      t = (ATerm) ATinsert(CheckATermList(not_null(v_92)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(u_92)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm f_59 (ATerm), ATerm g_59 (ATerm))
{
  ATerm f_93 = NULL,g_93 = NULL,h_93 = NULL;
  f_93 = t;
  e_93 :
  if(((ATgetType(f_93) == AT_LIST) && !(ATisEmpty(f_93))))
    {
      g_93 = ATgetFirst((ATermList) f_93);
      h_93 = (ATerm) ATgetNext((ATermList) f_93);
      {
        ATerm l_93 = NULL,n_93 = NULL;
        ATerm m_93 = NULL;
        t = SSLgetAnnotations(not_null(f_93));
        {
          m_93 = t;
          if(((l_93 != NULL) && (l_93 != m_93)))
            _fail(m_93);
          else
            l_93 = m_93;
        }
        {
          t = not_null(g_93);
          {
            ATerm p_93 = NULL;
            t = f_59(t);
            {
              n_93 = t;
              {
                t = not_null(h_93);
                {
                  ATerm r_93 = NULL;
                  t = g_59(t);
                  {
                    p_93 = t;
                    {
                      ATerm s_93 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(p_93)), not_null(n_93)), not_null(l_93));
                      {
                        s_93 = t;
                        if(((r_93 != NULL) && (r_93 != s_93)))
                          _fail(s_93);
                        else
                          r_93 = s_93;
                      }
                      t = not_null(r_93);
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
  ATerm c_94 = NULL;
  c_94 = t;
  b_94 :
  if(((ATgetType(c_94) == AT_LIST) && ATisEmpty(c_94)))
    {
      {
        ATerm e_94 = NULL,g_94 = NULL;
        ATerm u_21;
        u_21 = t;
        {
          ATerm f_94 = NULL;
          t = SSLgetAnnotations(not_null(c_94));
          {
            f_94 = t;
            if(((e_94 != NULL) && (e_94 != f_94)))
              _fail(f_94);
            else
              e_94 = f_94;
          }
        }
        t = u_21;
        {
          ATerm h_94 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(e_94));
          {
            h_94 = t;
            if(((g_94 != NULL) && (g_94 != h_94)))
              _fail(h_94);
            else
              g_94 = h_94;
          }
          t = not_null(g_94);
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
  ATerm n_94 = NULL,o_94 = NULL,p_94 = NULL;
  n_94 = t;
  m_94 :
  if(match_cons(n_94, sym__2))
    {
      o_94 = ATgetArgument(n_94, 0);
      p_94 = ATgetArgument(n_94, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_i_21, not_null(o_94), not_null(p_94));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm s_91 (ATerm))
{
  ATerm v_21;
  v_21 = t;
  {
    ATerm r_6 (ATerm t)
    {
      t = term_w_21;
      t = s_91(t);
      return(t);
    }
    t = try_1(t, r_6);
  }
  t = v_21;
  {
    ATerm s_6 (ATerm t)
    {
      ATerm x_94 = NULL;
      ATerm x_21;
      x_21 = t;
      {
        ATerm v_94 = NULL;
        ATerm w_94 = NULL;
        w_94 = t;
        if(((v_94 != NULL) && (v_94 != w_94)))
          _fail(w_94);
        else
          v_94 = w_94;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_n_19, not_null(v_94));
          t = set_config_0(t);
        }
      }
      t = x_21;
      {
        ATerm y_94 = NULL;
        y_94 = t;
        if(((x_94 != NULL) && (x_94 != y_94)))
          _fail(y_94);
        else
          x_94 = y_94;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(x_94));
      }
      return(t);
    }
    ATerm t_6 (ATerm t)
    {
      ATerm y_21 = t;
      int z_21 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm a_22 = t;
          int b_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(b_22);
            }
          else
            {
              t = a_22;
              {
                t = s_91(t);
                t = Cons_2(t, _id, t_6);
              }
            }
          LocalPopChoice(z_21);
        }
      else
        {
          t = y_21;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, s_6, t_6);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm e_95 = NULL,f_95 = NULL,g_95 = NULL;
  ATerm c_22;
  c_22 = t;
  {
    ATerm h_95 = NULL,i_95 = NULL,j_95 = NULL,k_95 = NULL;
    h_95 = t;
    d_95 :
    if(match_cons(h_95, sym__3))
      {
        i_95 = ATgetArgument(h_95, 0);
        j_95 = ATgetArgument(h_95, 1);
        k_95 = ATgetArgument(h_95, 2);
        {
          if(((e_95 != NULL) && (e_95 != i_95)))
            _fail(i_95);
          else
            e_95 = i_95;
          {
            if(((f_95 != NULL) && (f_95 != j_95)))
              _fail(j_95);
            else
              f_95 = j_95;
            {
              if(((g_95 != NULL) && (g_95 != k_95)))
                _fail(k_95);
              else
                g_95 = k_95;
              t = SSL_table_put(not_null(e_95), not_null(f_95), not_null(g_95));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = c_22;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm r_91 (ATerm))
{
  ATerm n_95 = NULL;
  ATerm d_22;
  d_22 = t;
  {
    t = term_e_22;
    t = table_put_0(t);
  }
  t = d_22;
  {
    ATerm u_6 (ATerm t)
    {
      ATerm f_22 = t;
      int g_22 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = r_91(t);
          LocalPopChoice(g_22);
        }
      else
        {
          t = f_22;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, u_6);
    {
      ATerm v_6 (ATerm t)
      {
        ATerm h_22 = t;
        int i_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_22;
            j_22 = t;
            {
              ATerm k_22 = t;
              int l_22 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_q_21;
                  t = get_config_0(t);
                  LocalPopChoice(l_22);
                }
              else
                {
                  t = k_22;
                  t = option_defined_1(t, Help_0);
                }
            }
            t = j_22;
            {
              t = system_usage_0(t);
              {
                t = term_f_13;
                t = exit_0(t);
              }
            }
            LocalPopChoice(i_22);
          }
        else
          {
            t = h_22;
            {
              ATerm w_6 (ATerm t)
              {
                ATerm x_6 (ATerm t)
                {
                  ATerm o_95 = NULL;
                  o_95 = t;
                  if(((n_95 != NULL) && (n_95 != o_95)))
                    _fail(o_95);
                  else
                    n_95 = o_95;
                  return(t);
                }
                t = Undefined_1(t, x_6);
                return(t);
              }
              t = option_defined_1(t, w_6);
              {
                ATerm y_6 (ATerm t)
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(n_95)), term_m_22);
                  return(t);
                }
                t = say_1(t, y_6);
                {
                  t = system_usage_0(t);
                  {
                    t = term_l_12;
                    t = exit_0(t);
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, v_6);
      {
        ATerm n_22;
        n_22 = t;
        {
          t = term_g_20;
          t = table_destroy_0(t);
        }
        t = n_22;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm y_87 (ATerm), ATerm z_87 (ATerm), ATerm a_88 (ATerm), ATerm b_88 (ATerm))
{
  t = parse_options_1(t, y_87);
  {
    t = store_options_0(t);
    {
      t = a_88(t);
      {
        ATerm o_22 = t;
        int p_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, z_87);
            LocalPopChoice(p_22);
          }
        else
          {
            t = o_22;
            {
              ATerm q_22 = t;
              int r_22 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = b_88(t);
                  t = report_success_0(t);
                  LocalPopChoice(r_22);
                }
              else
                {
                  t = q_22;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm option_wrap_2 (ATerm t, ATerm c_88 (ATerm), ATerm d_88 (ATerm))
{
  t = option_wrap_4(t, c_88, default_usage_0, _id, d_88);
  return(t);
}
ATerm io_Abox_2_latex_0 (ATerm t)
{
  ATerm z_6 (ATerm t)
  {
    t = load_latex_table_0(t);
    t = Abox_2_latex_0(t);
    return(t);
  }
  t = option_wrap_2(t, Abox2latex_options_0, z_6);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = io_Abox_2_latex_0(t);
  return(t);
}
