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
Symbol sym_Pipe_2;
Symbol sym_F__OK_0;
Symbol sym_R__OK_0;
Symbol sym_W__OK_0;
Symbol sym_X__OK_0;
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
Symbol sym_Program_1;
Symbol sym_Undefined_1;
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
  sym_Pipe_2 = ATmakeSymbol("Pipe", 2, ATfalse);
  ATprotectSymbol(sym_Pipe_2);
  sym_F__OK_0 = ATmakeSymbol("F_OK", 0, ATfalse);
  ATprotectSymbol(sym_F__OK_0);
  sym_R__OK_0 = ATmakeSymbol("R_OK", 0, ATfalse);
  ATprotectSymbol(sym_R__OK_0);
  sym_W__OK_0 = ATmakeSymbol("W_OK", 0, ATfalse);
  ATprotectSymbol(sym_W__OK_0);
  sym_X__OK_0 = ATmakeSymbol("X_OK", 0, ATfalse);
  ATprotectSymbol(sym_X__OK_0);
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
  sym_Program_1 = ATmakeSymbol("Program", 1, ATfalse);
  ATprotectSymbol(sym_Program_1);
  sym_Undefined_1 = ATmakeSymbol("Undefined", 1, ATfalse);
  ATprotectSymbol(sym_Undefined_1);
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
ATerm term_d_21;
ATerm term_v_20;
ATerm term_n_20;
ATerm term_k_20;
ATerm term_j_20;
ATerm term_i_20;
ATerm term_y_19;
ATerm term_x_19;
ATerm term_w_19;
ATerm term_v_19;
ATerm term_u_19;
ATerm term_k_19;
ATerm term_j_19;
ATerm term_d_19;
ATerm term_z_18;
ATerm term_y_18;
ATerm term_m_18;
ATerm term_l_18;
ATerm term_g_18;
ATerm term_f_18;
ATerm term_c_18;
ATerm term_b_18;
ATerm term_a_18;
ATerm term_z_17;
ATerm term_w_17;
ATerm term_v_17;
ATerm term_p_17;
ATerm term_o_17;
ATerm term_n_17;
ATerm term_m_17;
ATerm term_l_17;
ATerm term_h_17;
ATerm term_g_17;
ATerm term_f_17;
ATerm term_c_17;
ATerm term_b_17;
ATerm term_z_16;
ATerm term_y_16;
ATerm term_x_16;
ATerm term_w_16;
ATerm term_v_16;
ATerm term_p_16;
ATerm term_o_16;
ATerm term_z_15;
ATerm term_v_15;
ATerm term_u_15;
ATerm term_t_15;
ATerm term_s_15;
ATerm term_p_15;
ATerm term_n_15;
ATerm term_z_14;
ATerm term_y_14;
ATerm term_x_14;
ATerm term_h_14;
ATerm term_f_14;
ATerm term_d_14;
ATerm term_h_13;
ATerm term_g_13;
ATerm term_f_13;
ATerm term_e_13;
ATerm term_z_12;
ATerm term_o_12;
ATerm term_h_12;
ATerm term_f_12;
ATerm term_e_12;
ATerm term_w_11;
ATerm term_t_11;
ATerm term_i_11;
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
ATerm term_i_10;
ATerm term_h_10;
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
ATerm term_w_8;
ATerm term_v_8;
ATerm term_u_8;
ATerm term_t_8;
ATerm term_s_8;
ATerm term_r_8;
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
ATerm term_i_7;
ATerm term_h_7;
ATerm term_g_7;
ATerm term_f_7;
ATerm term_e_7;
ATerm term_d_7;
ATerm term_c_7;
ATerm term_w_6;
ATerm term_v_6;
ATerm term_u_6;
ATerm term_t_6;
void init_constant_terms (void)
{
  ATprotect(&(term_t_6));
  term_t_6 = (ATerm) ATmakeAppl(ATmakeSymbol("--latex-table", 0, ATtrue));
  ATprotect(&(term_u_6));
  term_u_6 = (ATerm) ATmakeAppl(ATmakeSymbol("--latex-table f  Use LaTeX abbreviaitions from file f", 0, ATtrue));
  ATprotect(&(term_v_6));
  term_v_6 = (ATerm) ATmakeAppl(ATmakeSymbol("--width", 0, ATtrue));
  ATprotect(&(term_w_6));
  term_w_6 = (ATerm) ATmakeAppl(ATmakeSymbol("--width w        Use page width w", 0, ATtrue));
  ATprotect(&(term_c_7));
  term_c_7 = (ATerm) ATmakeAppl(ATmakeSymbol("\\\ncopies{", 0, ATtrue));
  ATprotect(&(term_d_7));
  term_d_7 = (ATerm) ATmakeAppl(ATmakeSymbol("}{", 0, ATtrue));
  ATprotect(&(term_e_7));
  term_e_7 = (ATerm) ATmakeAppl(ATmakeSymbol("}%", 0, ATtrue));
  ATprotect(&(term_f_7));
  term_f_7 = (ATerm) ATmakeAppl(ATmakeSymbol("\\begin{LBOX}{=}%\n", 0, ATtrue));
  ATprotect(&(term_g_7));
  term_g_7 = (ATerm) ATmakeAppl(ATmakeSymbol("%\n\\end{LBOX}%\n", 0, ATtrue));
  ATprotect(&(term_h_7));
  term_h_7 = (ATerm) ATmakeAppl(ATmakeSymbol("\\begin{LBOX}{", 0, ATtrue));
  ATprotect(&(term_i_7));
  term_i_7 = (ATerm) ATmakeAppl(ATmakeSymbol("}%\n", 0, ATtrue));
  ATprotect(&(term_v_7));
  term_v_7 = (ATerm) ATmakeAppl(ATmakeSymbol("\\boxlabel{", 0, ATtrue));
  ATprotect(&(term_w_7));
  term_w_7 = (ATerm) ATmakeAppl(ATmakeSymbol("}", 0, ATtrue));
  ATprotect(&(term_x_7));
  term_x_7 = (ATerm) ATmakeAppl(ATmakeSymbol("\\boxref{", 0, ATtrue));
  ATprotect(&(term_y_7));
  term_y_7 = (ATerm) ATmakeAppl(ATmakeSymbol("\\KWf{", 0, ATtrue));
  ATprotect(&(term_z_7));
  term_z_7 = (ATerm) ATmakeAppl(ATmakeSymbol("\\VARf{", 0, ATtrue));
  ATprotect(&(term_a_8));
  term_a_8 = (ATerm) ATmakeAppl(ATmakeSymbol("\\NUMf{", 0, ATtrue));
  ATprotect(&(term_b_8));
  term_b_8 = (ATerm) ATmakeAppl(ATmakeSymbol("\\MATHf{", 0, ATtrue));
  ATprotect(&(term_c_8));
  term_c_8 = (ATerm) ATmakeAppl(ATmakeSymbol("\\textsf{", 0, ATtrue));
  ATprotect(&(term_d_8));
  term_d_8 = (ATerm) ATmakeAppl(ATmakeSymbol("\\textrm{", 0, ATtrue));
  ATprotect(&(term_e_8));
  term_e_8 = (ATerm) ATmakeAppl(ATmakeSymbol("\\texttt{", 0, ATtrue));
  ATprotect(&(term_f_8));
  term_f_8 = (ATerm) ATmakeAppl(ATmakeSymbol("\\textmd{", 0, ATtrue));
  ATprotect(&(term_g_8));
  term_g_8 = (ATerm) ATmakeAppl(ATmakeSymbol("\\textbf{", 0, ATtrue));
  ATprotect(&(term_h_8));
  term_h_8 = (ATerm) ATmakeAppl(ATmakeSymbol("\\textup{", 0, ATtrue));
  ATprotect(&(term_i_8));
  term_i_8 = (ATerm) ATmakeAppl(ATmakeSymbol("\\textit{", 0, ATtrue));
  ATprotect(&(term_j_8));
  term_j_8 = (ATerm) ATmakeAppl(ATmakeSymbol("\\textsc{", 0, ATtrue));
  ATprotect(&(term_k_8));
  term_k_8 = (ATerm) ATmakeAppl(ATmakeSymbol("\\textsl{", 0, ATtrue));
  ATprotect(&(term_l_8));
  term_l_8 = (ATerm) ATmakeAppl(ATmakeSymbol("\\emph{", 0, ATtrue));
  ATprotect(&(term_m_8));
  term_m_8 = (ATerm) ATmakeAppl(ATmakeSymbol("\\tiny{", 0, ATtrue));
  ATprotect(&(term_n_8));
  term_n_8 = (ATerm) ATmakeAppl(ATmakeSymbol("\\scriptsize{", 0, ATtrue));
  ATprotect(&(term_o_8));
  term_o_8 = (ATerm) ATmakeAppl(ATmakeSymbol("\\footnotesize{", 0, ATtrue));
  ATprotect(&(term_p_8));
  term_p_8 = (ATerm) ATmakeAppl(ATmakeSymbol("\\small{", 0, ATtrue));
  ATprotect(&(term_q_8));
  term_q_8 = (ATerm) ATmakeAppl(ATmakeSymbol("\\normalsize{", 0, ATtrue));
  ATprotect(&(term_r_8));
  term_r_8 = (ATerm) ATmakeAppl(ATmakeSymbol("\\large{", 0, ATtrue));
  ATprotect(&(term_s_8));
  term_s_8 = (ATerm) ATmakeAppl(ATmakeSymbol("\\Large{", 0, ATtrue));
  ATprotect(&(term_t_8));
  term_t_8 = (ATerm) ATmakeAppl(ATmakeSymbol("\\LARGE{", 0, ATtrue));
  ATprotect(&(term_u_8));
  term_u_8 = (ATerm) ATmakeAppl(ATmakeSymbol("\\huge{", 0, ATtrue));
  ATprotect(&(term_v_8));
  term_v_8 = (ATerm) ATmakeAppl(ATmakeSymbol("\\Huge{", 0, ATtrue));
  ATprotect(&(term_w_8));
  term_w_8 = (ATerm) ATmakeAppl(ATmakeSymbol("\\textcolor{", 0, ATtrue));
  ATprotect(&(term_x_8));
  term_x_8 = (ATerm) ATmakeAppl(ATmakeSymbol("\\hfill#\\hfill", 0, ATtrue));
  ATprotect(&(term_y_8));
  term_y_8 = (ATerm) ATmakeAppl(ATmakeSymbol("\\hfill#", 0, ATtrue));
  ATprotect(&(term_z_8));
  term_z_8 = (ATerm) ATmakeAppl(ATmakeSymbol("#\\hfill", 0, ATtrue));
  ATprotect(&(term_a_9));
  term_a_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\\cr", 0, ATtrue));
  ATprotect(&(term_b_9));
  term_b_9 = (ATerm) ATmakeAppl(ATmakeSymbol("&", 0, ATtrue));
  ATprotect(&(term_c_9));
  term_c_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\\begin{boxenv}%\n", 0, ATtrue));
  ATprotect(&(term_d_9));
  term_d_9 = (ATerm) ATmakeAppl(ATmakeSymbol("%\n\\end{boxenv}\n", 0, ATtrue));
  ATprotect(&(term_e_9));
  term_e_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\\begin{boxenv}{", 0, ATtrue));
  ATprotect(&(term_f_9));
  term_f_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\\begin{HBOX}{", 0, ATtrue));
  ATprotect(&(term_g_9));
  term_g_9 = (ATerm) ATmakeAppl(ATmakeSymbol("%\n\\end{HBOX}%\n", 0, ATtrue));
  ATprotect(&(term_h_9));
  term_h_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\\begin{VBOX}{", 0, ATtrue));
  ATprotect(&(term_i_9));
  term_i_9 = (ATerm) ATmakeAppl(ATmakeSymbol("%\n\\end{VBOX}%\n", 0, ATtrue));
  ATprotect(&(term_j_9));
  term_j_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\\begin{HVBOX}{", 0, ATtrue));
  ATprotect(&(term_k_9));
  term_k_9 = (ATerm) ATmakeAppl(ATmakeSymbol("%\n\\end{HVBOX}%\n", 0, ATtrue));
  ATprotect(&(term_l_9));
  term_l_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\\begin{ABOX}{", 0, ATtrue));
  ATprotect(&(term_m_9));
  term_m_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\\crcr%\n\\end{ABOX}%\n", 0, ATtrue));
  ATprotect(&(term_n_9));
  term_n_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\\begin{ALTBOX}{%\n", 0, ATtrue));
  ATprotect(&(term_o_9));
  term_o_9 = (ATerm) ATmakeAppl(ATmakeSymbol("%\n}", 0, ATtrue));
  ATprotect(&(term_p_9));
  term_p_9 = (ATerm) ATmakeAppl(ATmakeSymbol("%\n}%\n\\end{ALTBOX}%\n", 0, ATtrue));
  ATprotect(&(term_q_9));
  term_q_9 = (ATerm) ATmakeAppl(ATmakeSymbol("%\n\\begin{latextext}%\n", 0, ATtrue));
  ATprotect(&(term_r_9));
  term_r_9 = (ATerm) ATmakeAppl(ATmakeSymbol("%\n\\end{latextext}%\n", 0, ATtrue));
  ATprotect(&(term_h_10));
  term_h_10 = (ATerm) ATmakeInt(39);
  ATprotect(&(term_i_10));
  term_i_10 = (ATerm) ATmakeInt(96);
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeAppl(ATmakeSymbol("latex-abbrevs", 0, ATtrue));
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\boxspace{}", 0, ATtrue));
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\#", 0, ATtrue));
  ATprotect(&(term_q_10));
  term_q_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\$", 0, ATtrue));
  ATprotect(&(term_r_10));
  term_r_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\%", 0, ATtrue));
  ATprotect(&(term_s_10));
  term_s_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\&", 0, ATtrue));
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\mbox{-}", 0, ATtrue));
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\ensuremath{<}", 0, ATtrue));
  ATprotect(&(term_v_10));
  term_v_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\ensuremath{>}", 0, ATtrue));
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\ensuremath{\\backslash}", 0, ATtrue));
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\^{}", 0, ATtrue));
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\_", 0, ATtrue));
  ATprotect(&(term_z_10));
  term_z_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\{", 0, ATtrue));
  ATprotect(&(term_a_11));
  term_a_11 = (ATerm) ATmakeAppl(ATmakeSymbol("\\ensuremath{\\vert}", 0, ATtrue));
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeAppl(ATmakeSymbol("\\}", 0, ATtrue));
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeAppl(ATmakeSymbol("\\~{}", 0, ATtrue));
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeAppl(ATmakeSymbol("~", 0, ATtrue));
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeAppl(ATmakeSymbol("dissuasive library strategy: ", 0, ATtrue));
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeAppl(ATmakeSymbol("separate-by/1; Use separate-by/0 and term wrap patterns: <separate-by> (a, <id>)", 0, ATtrue));
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(sym_CSEP_0);
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeAppl(sym_L_0);
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeAppl(sym_C_0);
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeAppl(sym_R_0);
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeAppl(sym_EOR_0);
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeInt(61);
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeAppl(ATmakeSymbol("\\ ", 0, ATtrue));
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeAppl(ATmakeSymbol("\n\n", 0, ATtrue));
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeAppl(sym__2, term_w_16, term_h_12);
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_b_17));
  term_b_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_c_17));
  term_c_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeAppl(sym__2, term_s_15, term_o_12);
  ATprotect(&(term_g_17));
  term_g_17 = (ATerm) ATmakeAppl(sym_Verbose_1, term_o_12);
  ATprotect(&(term_h_17));
  term_h_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_l_17));
  term_l_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_m_17));
  term_m_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_n_17));
  term_n_17 = (ATerm) ATmakeAppl(sym__2, term_m_17, term_h_12);
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_v_17));
  term_v_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_w_17));
  term_w_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_z_17));
  term_z_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_a_18));
  term_a_18 = (ATerm) ATmakeAppl(sym__2, term_z_17, term_h_12);
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_f_18));
  term_f_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_g_18));
  term_g_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_l_18));
  term_l_18 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_m_18));
  term_m_18 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_y_18));
  term_y_18 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_z_18));
  term_z_18 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_d_19));
  term_d_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_j_19));
  term_j_19 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_k_19));
  term_k_19 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_u_19));
  term_u_19 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_v_19));
  term_v_19 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_w_19));
  term_w_19 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_x_19));
  term_x_19 = (ATerm) ATmakeAppl(sym__2, term_v_19, term_w_19);
  ATprotect(&(term_y_19));
  term_y_19 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_i_20));
  term_i_20 = (ATerm) ATmakeAppl(sym__2, term_d_19, term_h_12);
  ATprotect(&(term_j_20));
  term_j_20 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_k_20));
  term_k_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_n_20));
  term_n_20 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_v_20));
  term_v_20 = (ATerm) ATmakeAppl(sym__3, term_v_19, term_w_19, (ATerm) ATempty);
  ATprotect(&(term_d_21));
  term_d_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm Abox2latex_options_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm w_85 (ATerm), ATerm x_85 (ATerm), ATerm y_85 (ATerm));
ATerm crush_3 (ATerm, ATerm p_89 (ATerm), ATerm q_89 (ATerm), ATerm r_89 (ATerm));
ATerm collect_set_1 (ATerm, ATerm u_84 (ATerm));
ATerm is_int_0 (ATerm);
ATerm Latex2text_0 (ATerm);
ATerm bottomup_1 (ATerm, ATerm h_74 (ATerm));
ATerm latex2text_0 (ATerm);
ATerm BOXENV_args_0 (ATerm);
ATerm Tl_0 (ATerm);
ATerm Hd_0 (ATerm);
ATerm flat_list_0 (ATerm);
ATerm replace_quotes_0 (ATerm);
ATerm listtd_1 (ATerm, ATerm e_81 (ATerm));
ATerm string_as_chars_1 (ATerm, ATerm g_89 (ATerm));
ATerm latex_string_0 (ATerm);
ATerm remove_trailing_1 (ATerm, ATerm j_72 (ATerm));
ATerm at_suffix_1 (ATerm, ATerm q_80 (ATerm));
ATerm LatexComment_0 (ATerm);
ATerm make_latex_comment_0 (ATerm);
ATerm MATH_0 (ATerm);
ATerm NUM_0 (ATerm);
ATerm VAR_0 (ATerm);
ATerm KW_0 (ATerm);
ATerm CL_0 (ATerm);
ATerm FFID_2 (ATerm, ATerm e_64 (ATerm), ATerm f_64 (ATerm));
ATerm SZ_0 (ATerm);
ATerm SH_0 (ATerm);
ATerm SE_0 (ATerm);
ATerm FM_0 (ATerm);
ATerm toh_0 (ATerm);
ATerm hs_length_0 (ATerm);
ATerm Hspace_0 (ATerm);
ATerm separate_by_0 (ATerm);
ATerm dissuader_1 (ATerm, ATerm y_91 (ATerm));
ATerm separate_by_1 (ATerm, ATerm t_79 (ATerm));
ATerm filter_1 (ATerm, ATerm x_86 (ATerm));
ATerm is_length_0 (ATerm);
ATerm Ispace_0 (ATerm);
ATerm int_to_string_0 (ATerm);
ATerm SOpt_2 (ATerm, ATerm a_65 (ATerm), ATerm b_65 (ATerm));
ATerm SOpt_value_1 (ATerm, ATerm e_72 (ATerm));
ATerm vs_length_0 (ATerm);
ATerm Vspace_0 (ATerm);
ATerm C_2 (ATerm, ATerm w_63 (ATerm), ATerm x_63 (ATerm));
ATerm table_row_0 (ATerm);
ATerm MkRows_0 (ATerm);
ATerm at_last_1 (ATerm, ATerm x_80 (ATerm));
ATerm table_def_0 (ATerm);
ATerm subt_0 (ATerm);
ATerm while_not_2 (ATerm, ATerm x_73 (ATerm), ATerm y_73 (ATerm));
ATerm for_3 (ATerm, ATerm a_74 (ATerm), ATerm b_74 (ATerm), ATerm c_74 (ATerm));
ATerm copy_0 (ATerm);
ATerm R_2 (ATerm, ATerm m_64 (ATerm), ATerm n_64 (ATerm));
ATerm construct_rows_0 (ATerm);
ATerm Abox2latex_0 (ATerm);
ATerm topdown_1 (ATerm, ATerm g_74 (ATerm));
ATerm load_latex_table_0 (ATerm);
ATerm abox2latex_0 (ATerm);
ATerm default_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm m_80 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm i_93 (ATerm));
ATerm fputc_0 (ATerm);
ATerm write_in_text_to_stream_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm write_in_baf_to_stream_0 (ATerm);
ATerm WriteToFile_1 (ATerm, ATerm e_92 (ATerm));
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm g_95 (ATerm));
ATerm fclose_0 (ATerm);
ATerm read_from_stream_0 (ATerm);
ATerm debug_1 (ATerm, ATerm q_91 (ATerm));
ATerm fopen_0 (ATerm);
ATerm is_string_0 (ATerm);
ATerm _2 (ATerm, ATerm d_62 (ATerm), ATerm e_62 (ATerm));
ATerm stdin_stream_0 (ATerm);
ATerm stdout_stream_0 (ATerm);
ATerm stderr_stream_0 (ATerm);
ATerm stdio_stream_0 (ATerm);
ATerm Fst_0 (ATerm);
ATerm open_stream_0 (ATerm);
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm j_87 (ATerm), ATerm k_87 (ATerm));
ATerm input_file_0 (ATerm);
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
ATerm report_failure_0 (ATerm);
ATerm whoami_0 (ATerm);
ATerm ticks_to_seconds_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm u_85 (ATerm), ATerm v_85 (ATerm));
ATerm crush_2 (ATerm, ATerm n_89 (ATerm), ATerm o_89 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm h_93 (ATerm));
ATerm report_run_time_0 (ATerm);
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm e_96 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm f_98 (ATerm));
ATerm map_1 (ATerm, ATerm x_79 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm g_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm e_98 (ATerm));
ATerm Program_1 (ATerm, ATerm s_71 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm t_71 (ATerm));
ATerm fetch_1 (ATerm, ATerm g_80 (ATerm));
ATerm option_defined_1 (ATerm, ATerm e_97 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm m_72 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm j_98 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm m_63 (ATerm), ATerm n_63 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm h_98 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm g_98 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm g_96 (ATerm), ATerm h_96 (ATerm), ATerm i_96 (ATerm), ATerm j_96 (ATerm));
ATerm iowrap_4 (ATerm, ATerm v_95 (ATerm), ATerm w_95 (ATerm), ATerm x_95 (ATerm), ATerm y_95 (ATerm));
ATerm iowrap_3 (ATerm, ATerm p_95 (ATerm), ATerm q_95 (ATerm), ATerm r_95 (ATerm));
ATerm iowrap_2 (ATerm, ATerm n_95 (ATerm), ATerm o_95 (ATerm));
ATerm io_Abox_2_latex_0 (ATerm);
ATerm main_0 (ATerm);
ATerm Abox2latex_options_0 (ATerm t)
{
  ATerm p_6 = t;
  int q_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = io_options_0(t);
      ;
      LocalPopChoice(q_6);
    }
  else
    {
      t = p_6;
      {
        ATerm r_6 = t;
        int s_6 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_0 (ATerm t)
            {
              ATerm p_0 = NULL;
              p_0 = t;
              c_0 :
              if(!(match_string(p_0, "-t")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm h_0 (ATerm t)
            {
              ATerm q_0 = NULL;
              ATerm u_0 = NULL;
              u_0 = t;
              if(((q_0 != NULL) && (q_0 != u_0)))
                _fail(u_0);
              else
                q_0 = u_0;
              {
                t = (ATerm) ATmakeAppl(sym__2, term_t_6, not_null(q_0));
                t = set_config_0(t);
              }
              return(t);
            }
            ATerm m_0 (ATerm t)
            {
              t = term_u_6;
              return(t);
            }
            t = ArgOption_3(t, e_0, h_0, m_0);
            ;
            LocalPopChoice(s_6);
          }
        else
          {
            t = r_6;
            {
              ATerm n_0 (ATerm t)
              {
                ATerm v_0 = NULL;
                v_0 = t;
                f_0 :
                if(!(match_string(v_0, "-w")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm o_0 (ATerm t)
              {
                ATerm w_0 = NULL;
                ATerm a_1 = NULL;
                a_1 = t;
                if(((w_0 != NULL) && (w_0 != a_1)))
                  _fail(a_1);
                else
                  w_0 = a_1;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_v_6, not_null(w_0));
                  t = set_config_0(t);
                }
                return(t);
              }
              ATerm r_0 (ATerm t)
              {
                t = term_w_6;
                return(t);
              }
              t = ArgOption_3(t, n_0, o_0, r_0);
            }
          }
      }
    }
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
ATerm foldr_3 (ATerm t, ATerm w_85 (ATerm), ATerm x_85 (ATerm), ATerm y_85 (ATerm))
{
  ATerm x_6 = t;
  int y_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = w_85(t);
      ;
      LocalPopChoice(y_6);
    }
  else
    {
      t = x_6;
      {
        ATerm u_1 = NULL,v_1 = NULL,z_1 = NULL;
        u_1 = t;
        t_1 :
        if(((ATgetType(u_1) == AT_LIST) && !(ATisEmpty(u_1))))
          {
            v_1 = ATgetFirst((ATermList) u_1);
            z_1 = (ATerm) ATgetNext((ATermList) u_1);
            {
              ATerm f_2 = NULL,h_2 = NULL;
              ATerm z_6;
              z_6 = t;
              {
                ATerm g_2 = NULL;
                t = not_null(v_1);
                {
                  t = y_85(t);
                  {
                    g_2 = t;
                    if(((f_2 != NULL) && (f_2 != g_2)))
                      _fail(g_2);
                    else
                      f_2 = g_2;
                  }
                }
              }
              t = z_6;
              {
                ATerm l_2 = NULL;
                t = not_null(z_1);
                {
                  t = foldr_3(t, w_85, x_85, y_85);
                  {
                    l_2 = t;
                    if(((h_2 != NULL) && (h_2 != l_2)))
                      _fail(l_2);
                    else
                      h_2 = l_2;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(f_2), not_null(h_2));
                  t = x_85(t);
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
ATerm crush_3 (ATerm t, ATerm p_89 (ATerm), ATerm q_89 (ATerm), ATerm r_89 (ATerm))
{
  ATerm l_4 = NULL;
  ATerm x_4 = NULL;
  l_4 = t;
  {
    ATerm y_4 = NULL;
    ATerm d_5 = NULL,e_5 = NULL,f_5 = NULL;
    t = not_null(l_4);
    {
      y_4 = t;
      {
        t = SSL_explode_term(not_null(y_4));
        {
          d_5 = t;
          k_4 :
          if(match_cons(d_5, sym__2))
            {
              e_5 = ATgetArgument(d_5, 0);
              f_5 = ATgetArgument(d_5, 1);
              if(((x_4 != NULL) && (x_4 != f_5)))
                _fail(f_5);
              else
                x_4 = f_5;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(x_4);
      t = foldr_3(t, p_89, q_89, r_89);
    }
  }
  return(t);
}
ATerm collect_set_1 (ATerm t, ATerm u_84 (ATerm))
{
  ATerm a_7 = t;
  int b_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_5 = NULL;
      ATerm l_5 = NULL;
      t = u_84(t);
      {
        l_5 = t;
        if(((k_5 != NULL) && (k_5 != l_5)))
          _fail(l_5);
        else
          k_5 = l_5;
      }
      t = (ATerm) ATinsert(ATempty, not_null(k_5));
      ;
      LocalPopChoice(b_7);
    }
  else
    {
      t = a_7;
      {
        ATerm s_0 (ATerm t)
        {
          t = (ATerm) ATempty;
          return(t);
        }
        ATerm t_0 (ATerm t)
        {
          t = collect_set_1(t, u_84);
          return(t);
        }
        t = crush_3(t, s_0, conc_0, t_0);
      }
    }
  return(t);
}
ATerm is_int_0 (ATerm t)
{
  ATerm o_5 = NULL;
  o_5 = t;
  t = SSL_is_int(not_null(o_5));
  return(t);
}
ATerm Latex2text_0 (ATerm t)
{
  ATerm o_7 = NULL,p_7 = NULL,q_7 = NULL,r_7 = NULL,s_7 = NULL,t_7 = NULL,u_7 = NULL;
  ATerm r_31 (ATerm t)
  {
    ATerm z_11 = NULL;
    t = not_null(r_7);
    {
      t = is_int_0(t);
      {
        ATerm a_12 = NULL;
        t = not_null(r_7);
        {
          t = int_to_string_0(t);
          {
            a_12 = t;
            if(((z_11 != NULL) && (z_11 != a_12)))
              _fail(a_12);
            else
              z_11 = a_12;
          }
        }
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_e_7), not_null(t_7)), term_d_7), not_null(z_11)), term_c_7);
      }
    }
    return(t);
  }
  ATerm s_31 (ATerm t)
  {
    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_g_7), not_null(t_7)), term_f_7);
    return(t);
  }
  ATerm t_31 (ATerm t)
  {
    t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_g_7), not_null(t_7)), term_i_7), not_null(r_7)), term_h_7);
    return(t);
  }
  ATerm u_31 (ATerm t)
  {
    t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(t_7)), term_w_7), not_null(r_7)), term_v_7);
    return(t);
  }
  ATerm v_31 (ATerm t)
  {
    t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_w_7), not_null(t_7)), term_d_7), not_null(r_7)), term_x_7);
    return(t);
  }
  ATerm w_31 (ATerm t)
  {
    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_w_7), not_null(t_7)), term_y_7);
    return(t);
  }
  ATerm x_31 (ATerm t)
  {
    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_w_7), not_null(t_7)), term_z_7);
    return(t);
  }
  ATerm y_31 (ATerm t)
  {
    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_w_7), not_null(t_7)), term_a_8);
    return(t);
  }
  ATerm z_31 (ATerm t)
  {
    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_w_7), not_null(t_7)), term_b_8);
    return(t);
  }
  ATerm a_32 (ATerm t)
  {
    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_w_7), not_null(t_7)), term_c_8);
    return(t);
  }
  ATerm b_32 (ATerm t)
  {
    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_w_7), not_null(t_7)), term_d_8);
    return(t);
  }
  ATerm c_32 (ATerm t)
  {
    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_w_7), not_null(t_7)), term_e_8);
    return(t);
  }
  ATerm d_32 (ATerm t)
  {
    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_w_7), not_null(t_7)), term_f_8);
    return(t);
  }
  ATerm e_32 (ATerm t)
  {
    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_w_7), not_null(t_7)), term_g_8);
    return(t);
  }
  ATerm f_32 (ATerm t)
  {
    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_w_7), not_null(t_7)), term_h_8);
    return(t);
  }
  ATerm g_32 (ATerm t)
  {
    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_w_7), not_null(t_7)), term_i_8);
    return(t);
  }
  ATerm h_32 (ATerm t)
  {
    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_w_7), not_null(t_7)), term_j_8);
    return(t);
  }
  ATerm i_32 (ATerm t)
  {
    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_w_7), not_null(t_7)), term_k_8);
    return(t);
  }
  ATerm j_32 (ATerm t)
  {
    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_w_7), not_null(t_7)), term_l_8);
    return(t);
  }
  ATerm k_32 (ATerm t)
  {
    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_w_7), not_null(t_7)), term_m_8);
    return(t);
  }
  ATerm l_32 (ATerm t)
  {
    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_w_7), not_null(t_7)), term_n_8);
    return(t);
  }
  ATerm m_32 (ATerm t)
  {
    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_w_7), not_null(t_7)), term_o_8);
    return(t);
  }
  ATerm n_32 (ATerm t)
  {
    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_w_7), not_null(t_7)), term_p_8);
    return(t);
  }
  ATerm o_32 (ATerm t)
  {
    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_w_7), not_null(t_7)), term_q_8);
    return(t);
  }
  ATerm p_32 (ATerm t)
  {
    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_w_7), not_null(t_7)), term_r_8);
    return(t);
  }
  ATerm q_32 (ATerm t)
  {
    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_w_7), not_null(t_7)), term_s_8);
    return(t);
  }
  ATerm r_32 (ATerm t)
  {
    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_w_7), not_null(t_7)), term_t_8);
    return(t);
  }
  ATerm s_32 (ATerm t)
  {
    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_w_7), not_null(t_7)), term_u_8);
    return(t);
  }
  ATerm t_32 (ATerm t)
  {
    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_w_7), not_null(t_7)), term_v_8);
    return(t);
  }
  ATerm u_32 (ATerm t)
  {
    t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_w_7), not_null(t_7)), term_d_7), not_null(s_7)), term_w_8);
    return(t);
  }
  ATerm v_32 (ATerm t)
  {
    t = term_x_8;
    return(t);
  }
  ATerm w_32 (ATerm t)
  {
    t = term_y_8;
    return(t);
  }
  ATerm x_32 (ATerm t)
  {
    t = term_z_8;
    return(t);
  }
  ATerm y_32 (ATerm t)
  {
    t = term_a_9;
    return(t);
  }
  ATerm z_32 (ATerm t)
  {
    t = term_b_9;
    return(t);
  }
  u_7 = t;
  j_7 :
  if(match_cons(u_7, sym_BOXENV_2))
    {
      r_7 = ATgetArgument(u_7, 0);
      t_7 = ATgetArgument(u_7, 1);
      k_7 :
      if(((ATgetType(r_7) == AT_LIST) && ATisEmpty(r_7)))
        {
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_d_9), not_null(t_7)), term_c_9);
        }
      else
        {
          if(((ATgetType(r_7) == AT_LIST) && !(ATisEmpty(r_7))))
            {
              s_7 = ATgetFirst((ATermList) r_7);
              o_7 = (ATerm) ATgetNext((ATermList) r_7);
              l_7 :
              if(((ATgetType(o_7) == AT_LIST) && ATisEmpty(o_7)))
                {
                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_d_9), not_null(t_7)), term_i_7), not_null(s_7)), term_e_9);
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
      if(match_cons(u_7, sym_HBOX_2))
        {
          r_7 = ATgetArgument(u_7, 0);
          t_7 = ATgetArgument(u_7, 1);
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_g_9), not_null(t_7)), term_i_7), not_null(r_7)), term_f_9);
        }
      else
        {
          if(match_cons(u_7, sym_VBOX_3))
            {
              r_7 = ATgetArgument(u_7, 0);
              t_7 = ATgetArgument(u_7, 1);
              p_7 = ATgetArgument(u_7, 2);
              t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_i_9), not_null(p_7)), term_i_7), not_null(t_7)), term_d_7), not_null(r_7)), term_h_9);
            }
          else
            {
              if(match_cons(u_7, sym_HVBOX_4))
                {
                  r_7 = ATgetArgument(u_7, 0);
                  t_7 = ATgetArgument(u_7, 1);
                  p_7 = ATgetArgument(u_7, 2);
                  q_7 = ATgetArgument(u_7, 3);
                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_k_9), not_null(q_7)), term_i_7), not_null(p_7)), term_d_7), not_null(t_7)), term_d_7), not_null(r_7)), term_j_9);
                }
              else
                {
                  if(match_cons(u_7, sym_ABOX_2))
                    {
                      r_7 = ATgetArgument(u_7, 0);
                      t_7 = ATgetArgument(u_7, 1);
                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_m_9), not_null(t_7)), term_i_7), not_null(r_7)), term_l_9);
                    }
                  else
                    {
                      if(match_cons(u_7, sym_ALTBOX_2))
                        {
                          r_7 = ATgetArgument(u_7, 0);
                          t_7 = ATgetArgument(u_7, 1);
                          t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_p_9), not_null(t_7)), term_o_9), not_null(r_7)), term_n_9);
                        }
                      else
                        {
                          if(match_cons(u_7, sym_CBOX_1))
                            {
                              r_7 = ATgetArgument(u_7, 0);
                              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_r_9), not_null(r_7)), term_q_9);
                            }
                          else
                            {
                              if(match_cons(u_7, sym_LBOX_2))
                                {
                                  r_7 = ATgetArgument(u_7, 0);
                                  t_7 = ATgetArgument(u_7, 1);
                                  m_7 :
                                  if(match_string(r_7, "="))
                                    {
                                      ATerm s_9 = t;
                                      int t_9 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = r_31(t);
                                          ;
                                          LocalPopChoice(t_9);
                                        }
                                      else
                                        {
                                          t = s_9;
                                          {
                                            ATerm u_9 = t;
                                            int v_9 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = s_31(t);
                                                ;
                                                LocalPopChoice(v_9);
                                              }
                                            else
                                              {
                                                t = u_9;
                                                t = t_31(t);
                                              }
                                          }
                                        }
                                    }
                                  else
                                    {
                                      ATerm w_9 = t;
                                      int x_9 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = r_31(t);
                                          ;
                                          LocalPopChoice(x_9);
                                        }
                                      else
                                        {
                                          t = w_9;
                                          t = t_31(t);
                                        }
                                    }
                                }
                              else
                                {
                                  if(match_cons(u_7, sym_LBLBOX_2))
                                    {
                                      r_7 = ATgetArgument(u_7, 0);
                                      t_7 = ATgetArgument(u_7, 1);
                                      t = u_31(t);
                                    }
                                  else
                                    {
                                      if(match_cons(u_7, sym_REFBOX_2))
                                        {
                                          r_7 = ATgetArgument(u_7, 0);
                                          t_7 = ATgetArgument(u_7, 1);
                                          t = v_31(t);
                                        }
                                      else
                                        {
                                          if(match_cons(u_7, sym_BOXFONT_2))
                                            {
                                              r_7 = ATgetArgument(u_7, 0);
                                              t_7 = ATgetArgument(u_7, 1);
                                              n_7 :
                                              if(match_cons(r_7, sym_KW_0))
                                                {
                                                  t = w_31(t);
                                                }
                                              else
                                                {
                                                  if(match_cons(r_7, sym_VAR_0))
                                                    {
                                                      t = x_31(t);
                                                    }
                                                  else
                                                    {
                                                      if(match_cons(r_7, sym_NUM_0))
                                                        {
                                                          t = y_31(t);
                                                        }
                                                      else
                                                        {
                                                          if(match_cons(r_7, sym_MATH_0))
                                                            {
                                                              t = z_31(t);
                                                            }
                                                          else
                                                            {
                                                              if(match_string(r_7, "sf"))
                                                                {
                                                                  t = a_32(t);
                                                                }
                                                              else
                                                                {
                                                                  if(match_string(r_7, "rm"))
                                                                    {
                                                                      t = b_32(t);
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_string(r_7, "tt"))
                                                                        {
                                                                          t = c_32(t);
                                                                        }
                                                                      else
                                                                        {
                                                                          if(match_string(r_7, "md"))
                                                                            {
                                                                              t = d_32(t);
                                                                            }
                                                                          else
                                                                            {
                                                                              if(match_string(r_7, "bf"))
                                                                                {
                                                                                  t = e_32(t);
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(match_string(r_7, "up"))
                                                                                    {
                                                                                      t = f_32(t);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(match_string(r_7, "it"))
                                                                                        {
                                                                                          t = g_32(t);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          if(match_string(r_7, "sc"))
                                                                                            {
                                                                                              t = h_32(t);
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              if(match_string(r_7, "sl"))
                                                                                                {
                                                                                                  t = i_32(t);
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  if(match_string(r_7, "em"))
                                                                                                    {
                                                                                                      t = j_32(t);
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      if(match_string(r_7, "tiny"))
                                                                                                        {
                                                                                                          t = k_32(t);
                                                                                                        }
                                                                                                      else
                                                                                                        {
                                                                                                          if(match_string(r_7, "scriptsize"))
                                                                                                            {
                                                                                                              t = l_32(t);
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              if(match_string(r_7, "footnotesize"))
                                                                                                                {
                                                                                                                  t = m_32(t);
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  if(match_string(r_7, "small"))
                                                                                                                    {
                                                                                                                      t = n_32(t);
                                                                                                                    }
                                                                                                                  else
                                                                                                                    {
                                                                                                                      if(match_string(r_7, "normalsize"))
                                                                                                                        {
                                                                                                                          t = o_32(t);
                                                                                                                        }
                                                                                                                      else
                                                                                                                        {
                                                                                                                          if(match_string(r_7, "large"))
                                                                                                                            {
                                                                                                                              t = p_32(t);
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              if(match_string(r_7, "Large"))
                                                                                                                                {
                                                                                                                                  t = q_32(t);
                                                                                                                                }
                                                                                                                              else
                                                                                                                                {
                                                                                                                                  if(match_string(r_7, "LARGE"))
                                                                                                                                    {
                                                                                                                                      t = r_32(t);
                                                                                                                                    }
                                                                                                                                  else
                                                                                                                                    {
                                                                                                                                      if(match_string(r_7, "huge"))
                                                                                                                                        {
                                                                                                                                          t = s_32(t);
                                                                                                                                        }
                                                                                                                                      else
                                                                                                                                        {
                                                                                                                                          if(match_string(r_7, "Huge"))
                                                                                                                                            {
                                                                                                                                              t = t_32(t);
                                                                                                                                            }
                                                                                                                                          else
                                                                                                                                            {
                                                                                                                                              if(match_cons(r_7, sym_BOXCOLOR_1))
                                                                                                                                                {
                                                                                                                                                  s_7 = ATgetArgument(r_7, 0);
                                                                                                                                                  t = u_32(t);
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
                                              if(match_cons(u_7, sym_C_0))
                                                {
                                                  t = v_32(t);
                                                }
                                              else
                                                {
                                                  if(match_cons(u_7, sym_R_0))
                                                    {
                                                      t = w_32(t);
                                                    }
                                                  else
                                                    {
                                                      if(match_cons(u_7, sym_L_0))
                                                        {
                                                          t = x_32(t);
                                                        }
                                                      else
                                                        {
                                                          if(match_cons(u_7, sym_EOR_0))
                                                            {
                                                              t = y_32(t);
                                                            }
                                                          else
                                                            {
                                                              if(match_cons(u_7, sym_CSEP_0))
                                                                {
                                                                  t = z_32(t);
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
ATerm bottomup_1 (ATerm t, ATerm h_74 (ATerm))
{
  ATerm x_0 (ATerm t)
  {
    t = bottomup_1(t, h_74);
    return(t);
  }
  t = _all(t, x_0);
  t = h_74(t);
  return(t);
}
ATerm latex2text_0 (ATerm t)
{
  ATerm y_0 (ATerm t)
  {
    t = try_1(t, Latex2text_0);
    return(t);
  }
  t = bottomup_1(t, y_0);
  return(t);
}
ATerm BOXENV_args_0 (ATerm t)
{
  ATerm y_9 = t;
  int z_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_33 = NULL;
      t = term_v_6;
      {
        t = get_config_0(t);
        {
          ATerm d_33 = NULL;
          d_33 = t;
          if(((c_33 != NULL) && (c_33 != d_33)))
            _fail(d_33);
          else
            c_33 = d_33;
          t = (ATerm) ATinsert(ATempty, not_null(c_33));
        }
      }
      ;
      LocalPopChoice(z_9);
    }
  else
    {
      t = y_9;
      t = (ATerm) ATempty;
    }
  return(t);
}
ATerm Tl_0 (ATerm t)
{
  ATerm h_33 = NULL,i_33 = NULL,j_33 = NULL;
  h_33 = t;
  g_33 :
  if(((ATgetType(h_33) == AT_LIST) && !(ATisEmpty(h_33))))
    {
      i_33 = ATgetFirst((ATermList) h_33);
      j_33 = (ATerm) ATgetNext((ATermList) h_33);
      t = not_null(j_33);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Hd_0 (ATerm t)
{
  ATerm o_33 = NULL,p_33 = NULL,q_33 = NULL;
  o_33 = t;
  n_33 :
  if(((ATgetType(o_33) == AT_LIST) && !(ATisEmpty(o_33))))
    {
      p_33 = ATgetFirst((ATermList) o_33);
      q_33 = (ATerm) ATgetNext((ATermList) o_33);
      t = not_null(p_33);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm flat_list_0 (ATerm t)
{
  ATerm a_10 = t;
  int b_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      ;
      LocalPopChoice(b_10);
    }
  else
    {
      t = a_10;
      {
        ATerm c_10 = t;
        int d_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Cons_2(t, Nil_0, flat_list_0);
            ;
            LocalPopChoice(d_10);
          }
        else
          {
            t = c_10;
            {
              ATerm e_10 = t;
              int f_10 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm x_33 = NULL,z_33 = NULL;
                  t = Cons_2(t, is_list_0, _id);
                  {
                    ATerm g_10;
                    g_10 = t;
                    {
                      ATerm y_33 = NULL;
                      t = Hd_0(t);
                      {
                        y_33 = t;
                        if(((x_33 != NULL) && (x_33 != y_33)))
                          _fail(y_33);
                        else
                          x_33 = y_33;
                      }
                    }
                    t = g_10;
                    {
                      ATerm a_34 = NULL;
                      t = Tl_0(t);
                      {
                        a_34 = t;
                        if(((z_33 != NULL) && (z_33 != a_34)))
                          _fail(a_34);
                        else
                          z_33 = a_34;
                      }
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(x_33), not_null(z_33));
                        {
                          t = conc_0(t);
                          t = flat_list_0(t);
                        }
                      }
                    }
                  }
                  ;
                  LocalPopChoice(f_10);
                }
              else
                {
                  t = e_10;
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
  ATerm l_34 = NULL,m_34 = NULL,n_34 = NULL;
  l_34 = t;
  j_34 :
  if(((ATgetType(l_34) == AT_LIST) && !(ATisEmpty(l_34))))
    {
      m_34 = ATgetFirst((ATermList) l_34);
      n_34 = (ATerm) ATgetNext((ATermList) l_34);
      k_34 :
      if(match_int(m_34, 34))
        {
          ATerm p_34 = NULL;
          ATerm f_35 = NULL;
          t = not_null(n_34);
          {
            ATerm z_0 (ATerm t)
            {
              ATerm u_34 = NULL,v_34 = NULL,w_34 = NULL;
              u_34 = t;
              g_34 :
              if(((ATgetType(u_34) == AT_LIST) && !(ATisEmpty(u_34))))
                {
                  v_34 = ATgetFirst((ATermList) u_34);
                  w_34 = (ATerm) ATgetNext((ATermList) u_34);
                  h_34 :
                  if(match_int(v_34, 34))
                    {
                      t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(w_34)), term_h_10), term_h_10);
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
              f_35 = t;
              if(((p_34 != NULL) && (p_34 != f_35)))
                _fail(f_35);
              else
                p_34 = f_35;
            }
          }
          t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(p_34)), term_i_10), term_i_10);
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
ATerm listtd_1 (ATerm t, ATerm e_81 (ATerm))
{
  ATerm j_35 (ATerm t)
  {
    t = e_81(t);
    {
      ATerm j_10 = t;
      int k_10 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Nil_0(t);
          ;
          LocalPopChoice(k_10);
        }
      else
        {
          t = j_10;
          t = Cons_2(t, _id, j_35);
        }
    }
    return(t);
  }
  t = j_35(t);
  return(t);
}
ATerm string_as_chars_1 (ATerm t, ATerm g_89 (ATerm))
{
  t = explode_string_0(t);
  {
    t = g_89(t);
    t = implode_string_0(t);
  }
  return(t);
}
ATerm latex_string_0 (ATerm t)
{
  ATerm l_10 = t;
  int m_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_36 = NULL;
      ATerm c_36 = NULL;
      c_36 = t;
      if(((b_36 != NULL) && (b_36 != c_36)))
        _fail(c_36);
      else
        b_36 = c_36;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_n_10, not_null(b_36));
        t = table_get_0(t);
      }
      ;
      LocalPopChoice(m_10);
    }
  else
    {
      t = l_10;
      {
        ATerm b_1 (ATerm t)
        {
          ATerm c_1 (ATerm t)
          {
            t = try_1(t, replace_quotes_0);
            return(t);
          }
          t = listtd_1(t, c_1);
          {
            ATerm d_1 (ATerm t)
            {
              ATerm e_1 (ATerm t)
              {
                ATerm d_36 = NULL;
                d_36 = t;
                a_36 :
                if(match_int(d_36, 32))
                  {
                    t = term_o_10;
                    t = explode_string_0(t);
                  }
                else
                  {
                    if(match_int(d_36, 35))
                      {
                        t = term_p_10;
                        t = explode_string_0(t);
                      }
                    else
                      {
                        if(match_int(d_36, 36))
                          {
                            t = term_q_10;
                            t = explode_string_0(t);
                          }
                        else
                          {
                            if(match_int(d_36, 37))
                              {
                                t = term_r_10;
                                t = explode_string_0(t);
                              }
                            else
                              {
                                if(match_int(d_36, 38))
                                  {
                                    t = term_s_10;
                                    t = explode_string_0(t);
                                  }
                                else
                                  {
                                    if(match_int(d_36, 45))
                                      {
                                        t = term_t_10;
                                        t = explode_string_0(t);
                                      }
                                    else
                                      {
                                        if(match_int(d_36, 60))
                                          {
                                            t = term_u_10;
                                            t = explode_string_0(t);
                                          }
                                        else
                                          {
                                            if(match_int(d_36, 62))
                                              {
                                                t = term_v_10;
                                                t = explode_string_0(t);
                                              }
                                            else
                                              {
                                                if(match_int(d_36, 92))
                                                  {
                                                    t = term_w_10;
                                                    t = explode_string_0(t);
                                                  }
                                                else
                                                  {
                                                    if(match_int(d_36, 94))
                                                      {
                                                        t = term_x_10;
                                                        t = explode_string_0(t);
                                                      }
                                                    else
                                                      {
                                                        if(match_int(d_36, 95))
                                                          {
                                                            t = term_y_10;
                                                            t = explode_string_0(t);
                                                          }
                                                        else
                                                          {
                                                            if(match_int(d_36, 123))
                                                              {
                                                                t = term_z_10;
                                                                t = explode_string_0(t);
                                                              }
                                                            else
                                                              {
                                                                if(match_int(d_36, 124))
                                                                  {
                                                                    t = term_a_11;
                                                                    t = explode_string_0(t);
                                                                  }
                                                                else
                                                                  {
                                                                    if(match_int(d_36, 125))
                                                                      {
                                                                        t = term_b_11;
                                                                        t = explode_string_0(t);
                                                                      }
                                                                    else
                                                                      {
                                                                        if(match_int(d_36, 126))
                                                                          {
                                                                            t = term_c_11;
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
              t = try_1(t, e_1);
              return(t);
            }
            t = map_1(t, d_1);
            t = flat_list_0(t);
          }
          return(t);
        }
        t = string_as_chars_1(t, b_1);
      }
    }
  return(t);
}
ATerm remove_trailing_1 (ATerm t, ATerm j_72 (ATerm))
{
  ATerm c_37 (ATerm t)
  {
    ATerm f_1 (ATerm t)
    {
      ATerm y_36 = NULL,z_36 = NULL,a_37 = NULL;
      t = Cons_2(t, j_72, _id);
      {
        y_36 = t;
        x_36 :
        if(((ATgetType(y_36) == AT_LIST) && !(ATisEmpty(y_36))))
          {
            z_36 = ATgetFirst((ATermList) y_36);
            a_37 = (ATerm) ATgetNext((ATermList) y_36);
            {
              t = not_null(a_37);
              t = c_37(t);
            }
          }
        else
          {
            _fail(t);
          }
      }
      return(t);
    }
    t = try_1(t, f_1);
    return(t);
  }
  t = c_37(t);
  return(t);
}
ATerm at_suffix_1 (ATerm t, ATerm q_80 (ATerm))
{
  ATerm e_37 (ATerm t)
  {
    ATerm d_11 = t;
    int e_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = q_80(t);
        ;
        LocalPopChoice(e_11);
      }
    else
      {
        t = d_11;
        t = Cons_2(t, _id, e_37);
      }
    return(t);
  }
  t = e_37(t);
  return(t);
}
ATerm LatexComment_0 (ATerm t)
{
  ATerm k_37 = NULL;
  ATerm g_1 (ATerm t)
  {
    ATerm j_37 = NULL;
    j_37 = t;
    f_37 :
    if(!(match_int(j_37, 9)))
      {
        if(!(match_int(j_37, 32)))
          {
            _fail(t);
          }
      }
    return(t);
  }
  t = remove_trailing_1(t, g_1);
  {
    ATerm h_1 (ATerm t)
    {
      ATerm i_1 (ATerm t)
      {
        ATerm j_1 (ATerm t)
        {
          ATerm l_37 = NULL;
          l_37 = t;
          g_37 :
          if(!(match_int(l_37, 37)))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm k_1 (ATerm t)
        {
          ATerm l_1 (ATerm t)
          {
            ATerm m_37 = NULL;
            m_37 = t;
            h_37 :
            if(!(match_int(m_37, 37)))
              {
                _fail(t);
              }
            return(t);
          }
          ATerm m_1 (ATerm t)
          {
            ATerm n_37 = NULL;
            n_37 = t;
            if(((k_37 != NULL) && (k_37 != n_37)))
              _fail(n_37);
            else
              k_37 = n_37;
            return(t);
          }
          t = Cons_2(t, l_1, m_1);
          return(t);
        }
        t = Cons_2(t, j_1, k_1);
        t = not_null(k_37);
        return(t);
      }
      t = at_suffix_1(t, i_1);
      return(t);
    }
    t = try_1(t, h_1);
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
      ATerm n_1 (ATerm t)
      {
        t = (ATerm) ATempty;
        return(t);
      }
      t = split_2(t, _id, n_1);
      {
        ATerm z_38 (ATerm t)
        {
          ATerm b_38 = NULL,c_38 = NULL,d_38 = NULL,e_38 = NULL,f_38 = NULL;
          ATerm c_39 (ATerm t)
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(e_38), (ATerm) ATinsert(CheckATermList(not_null(f_38)), not_null(d_38)));
            t = z_38(t);
            return(t);
          }
          b_38 = t;
          v_37 :
          if(match_cons(b_38, sym__2))
            {
              c_38 = ATgetArgument(b_38, 0);
              f_38 = ATgetArgument(b_38, 1);
              w_37 :
              if(((ATgetType(c_38) == AT_LIST) && ATisEmpty(c_38)))
                {
                  {
                    ATerm j_38 = NULL;
                    ATerm k_38 = NULL;
                    t = not_null(f_38);
                    {
                      t = LatexComment_0(t);
                      {
                        k_38 = t;
                        if(((j_38 != NULL) && (j_38 != k_38)))
                          _fail(k_38);
                        else
                          j_38 = k_38;
                      }
                    }
                    t = (ATerm) ATinsert(ATempty, not_null(j_38));
                  }
                }
              else
                {
                  if(((ATgetType(c_38) == AT_LIST) && !(ATisEmpty(c_38))))
                    {
                      d_38 = ATgetFirst((ATermList) c_38);
                      e_38 = (ATerm) ATgetNext((ATermList) c_38);
                      x_37 :
                      if(match_int(d_38, 10))
                        {
                          ATerm f_11 = t;
                          int g_11 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm o_38 = NULL,q_38 = NULL;
                              ATerm h_11;
                              h_11 = t;
                              {
                                ATerm p_38 = NULL;
                                t = not_null(f_38);
                                {
                                  t = LatexComment_0(t);
                                  {
                                    p_38 = t;
                                    if(((o_38 != NULL) && (o_38 != p_38)))
                                      _fail(p_38);
                                    else
                                      o_38 = p_38;
                                  }
                                }
                              }
                              t = h_11;
                              {
                                ATerm r_38 = NULL;
                                t = (ATerm) ATmakeAppl(sym__2, not_null(e_38), (ATerm) ATempty);
                                {
                                  t = z_38(t);
                                  {
                                    r_38 = t;
                                    if(((q_38 != NULL) && (q_38 != r_38)))
                                      _fail(r_38);
                                    else
                                      q_38 = r_38;
                                  }
                                }
                                t = (ATerm) ATinsert(CheckATermList(not_null(q_38)), not_null(o_38));
                              }
                              ;
                              LocalPopChoice(g_11);
                            }
                          else
                            {
                              t = f_11;
                              t = c_39(t);
                            }
                        }
                      else
                        {
                          t = c_39(t);
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
        t = z_38(t);
        {
          ATerm o_1 (ATerm t)
          {
            ATerm v_38 = NULL;
            v_38 = t;
            y_37 :
            if(!(match_string(v_38, "")))
              {
                _fail(t);
              }
            return(t);
          }
          t = remove_trailing_1(t, o_1);
          {
            t = reverse_0(t);
            {
              ATerm p_1 (ATerm t)
              {
                ATerm w_38 = NULL;
                w_38 = t;
                z_37 :
                if(!(match_string(w_38, "")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              t = remove_trailing_1(t, p_1);
              {
                ATerm q_1 (ATerm t)
                {
                  ATerm x_38 = NULL;
                  x_38 = t;
                  t = (ATerm) ATinsert(ATinsert(ATempty, term_i_11), not_null(x_38));
                  return(t);
                }
                t = map_1(t, q_1);
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
  ATerm l_39 = NULL;
  l_39 = t;
  k_39 :
  if(match_cons(l_39, sym_MATH_0))
    {
      ATerm n_39 = NULL,p_39 = NULL;
      ATerm j_11;
      j_11 = t;
      {
        ATerm o_39 = NULL;
        t = SSLgetAnnotations(not_null(l_39));
        {
          o_39 = t;
          if(((n_39 != NULL) && (n_39 != o_39)))
            _fail(o_39);
          else
            n_39 = o_39;
        }
      }
      t = j_11;
      {
        ATerm q_39 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_MATH_0), not_null(n_39));
        {
          q_39 = t;
          if(((p_39 != NULL) && (p_39 != q_39)))
            _fail(q_39);
          else
            p_39 = q_39;
        }
        t = not_null(p_39);
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
  ATerm y_39 = NULL;
  y_39 = t;
  x_39 :
  if(match_cons(y_39, sym_NUM_0))
    {
      ATerm a_40 = NULL,c_40 = NULL;
      ATerm k_11;
      k_11 = t;
      {
        ATerm b_40 = NULL;
        t = SSLgetAnnotations(not_null(y_39));
        {
          b_40 = t;
          if(((a_40 != NULL) && (a_40 != b_40)))
            _fail(b_40);
          else
            a_40 = b_40;
        }
      }
      t = k_11;
      {
        ATerm d_40 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_NUM_0), not_null(a_40));
        {
          d_40 = t;
          if(((c_40 != NULL) && (c_40 != d_40)))
            _fail(d_40);
          else
            c_40 = d_40;
        }
        t = not_null(c_40);
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
  ATerm l_40 = NULL;
  l_40 = t;
  k_40 :
  if(match_cons(l_40, sym_VAR_0))
    {
      ATerm n_40 = NULL,p_40 = NULL;
      ATerm l_11;
      l_11 = t;
      {
        ATerm o_40 = NULL;
        t = SSLgetAnnotations(not_null(l_40));
        {
          o_40 = t;
          if(((n_40 != NULL) && (n_40 != o_40)))
            _fail(o_40);
          else
            n_40 = o_40;
        }
      }
      t = l_11;
      {
        ATerm q_40 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_VAR_0), not_null(n_40));
        {
          q_40 = t;
          if(((p_40 != NULL) && (p_40 != q_40)))
            _fail(q_40);
          else
            p_40 = q_40;
        }
        t = not_null(p_40);
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
  ATerm y_40 = NULL;
  y_40 = t;
  x_40 :
  if(match_cons(y_40, sym_KW_0))
    {
      ATerm a_41 = NULL,c_41 = NULL;
      ATerm m_11;
      m_11 = t;
      {
        ATerm b_41 = NULL;
        t = SSLgetAnnotations(not_null(y_40));
        {
          b_41 = t;
          if(((a_41 != NULL) && (a_41 != b_41)))
            _fail(b_41);
          else
            a_41 = b_41;
        }
      }
      t = m_11;
      {
        ATerm d_41 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_KW_0), not_null(a_41));
        {
          d_41 = t;
          if(((c_41 != NULL) && (c_41 != d_41)))
            _fail(d_41);
          else
            c_41 = d_41;
        }
        t = not_null(c_41);
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
  ATerm q_41 = NULL;
  q_41 = t;
  p_41 :
  if(match_cons(q_41, sym_CL_0))
    {
      ATerm s_41 = NULL,u_41 = NULL;
      ATerm n_11;
      n_11 = t;
      {
        ATerm t_41 = NULL;
        t = SSLgetAnnotations(not_null(q_41));
        {
          t_41 = t;
          if(((s_41 != NULL) && (s_41 != t_41)))
            _fail(t_41);
          else
            s_41 = t_41;
        }
      }
      t = n_11;
      {
        ATerm v_41 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_CL_0), not_null(s_41));
        {
          v_41 = t;
          if(((u_41 != NULL) && (u_41 != v_41)))
            _fail(v_41);
          else
            u_41 = v_41;
        }
        t = not_null(u_41);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm FFID_2 (ATerm t, ATerm e_64 (ATerm), ATerm f_64 (ATerm))
{
  ATerm f_42 = NULL,g_42 = NULL,h_42 = NULL;
  f_42 = t;
  e_42 :
  if(match_cons(f_42, sym_FFID_2))
    {
      g_42 = ATgetArgument(f_42, 0);
      h_42 = ATgetArgument(f_42, 1);
      {
        ATerm l_42 = NULL,n_42 = NULL;
        ATerm m_42 = NULL;
        t = SSLgetAnnotations(not_null(f_42));
        {
          m_42 = t;
          if(((l_42 != NULL) && (l_42 != m_42)))
            _fail(m_42);
          else
            l_42 = m_42;
        }
        {
          t = not_null(g_42);
          {
            ATerm p_42 = NULL;
            t = e_64(t);
            {
              n_42 = t;
              {
                t = not_null(h_42);
                {
                  ATerm r_42 = NULL;
                  t = f_64(t);
                  {
                    p_42 = t;
                    {
                      ATerm s_42 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FFID_2, not_null(n_42), not_null(p_42)), not_null(l_42));
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
  ATerm e_43 = NULL;
  e_43 = t;
  d_43 :
  if(match_cons(e_43, sym_SZ_0))
    {
      ATerm j_43 = NULL,l_43 = NULL;
      ATerm o_11;
      o_11 = t;
      {
        ATerm k_43 = NULL;
        t = SSLgetAnnotations(not_null(e_43));
        {
          k_43 = t;
          if(((j_43 != NULL) && (j_43 != k_43)))
            _fail(k_43);
          else
            j_43 = k_43;
        }
      }
      t = o_11;
      {
        ATerm o_43 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SZ_0), not_null(j_43));
        {
          o_43 = t;
          if(((l_43 != NULL) && (l_43 != o_43)))
            _fail(o_43);
          else
            l_43 = o_43;
        }
        t = not_null(l_43);
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
  ATerm w_43 = NULL;
  w_43 = t;
  v_43 :
  if(match_cons(w_43, sym_SH_0))
    {
      ATerm y_43 = NULL,a_44 = NULL;
      ATerm p_11;
      p_11 = t;
      {
        ATerm z_43 = NULL;
        t = SSLgetAnnotations(not_null(w_43));
        {
          z_43 = t;
          if(((y_43 != NULL) && (y_43 != z_43)))
            _fail(z_43);
          else
            y_43 = z_43;
        }
      }
      t = p_11;
      {
        ATerm b_44 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SH_0), not_null(y_43));
        {
          b_44 = t;
          if(((a_44 != NULL) && (a_44 != b_44)))
            _fail(b_44);
          else
            a_44 = b_44;
        }
        t = not_null(a_44);
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
  ATerm l_44 = NULL;
  l_44 = t;
  k_44 :
  if(match_cons(l_44, sym_SE_0))
    {
      ATerm o_44 = NULL,q_44 = NULL;
      ATerm q_11;
      q_11 = t;
      {
        ATerm p_44 = NULL;
        t = SSLgetAnnotations(not_null(l_44));
        {
          p_44 = t;
          if(((o_44 != NULL) && (o_44 != p_44)))
            _fail(p_44);
          else
            o_44 = p_44;
        }
      }
      t = q_11;
      {
        ATerm r_44 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SE_0), not_null(o_44));
        {
          r_44 = t;
          if(((q_44 != NULL) && (q_44 != r_44)))
            _fail(r_44);
          else
            q_44 = r_44;
        }
        t = not_null(q_44);
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
  ATerm z_44 = NULL;
  z_44 = t;
  y_44 :
  if(match_cons(z_44, sym_FM_0))
    {
      ATerm b_45 = NULL,d_45 = NULL;
      ATerm r_11;
      r_11 = t;
      {
        ATerm c_45 = NULL;
        t = SSLgetAnnotations(not_null(z_44));
        {
          c_45 = t;
          if(((b_45 != NULL) && (b_45 != c_45)))
            _fail(c_45);
          else
            b_45 = c_45;
        }
      }
      t = r_11;
      {
        ATerm e_45 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FM_0), not_null(b_45));
        {
          e_45 = t;
          if(((d_45 != NULL) && (d_45 != e_45)))
            _fail(e_45);
          else
            d_45 = e_45;
        }
        t = not_null(d_45);
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
  ATerm r_1 (ATerm t)
  {
    ATerm s_11 = t;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = s_11;
      }
    return(t);
  }
  t = filter_1(t, r_1);
  {
    ATerm s_1 (ATerm t)
    {
      t = term_t_11;
      return(t);
    }
    t = separate_by_1(t, s_1);
  }
  return(t);
}
ATerm hs_length_0 (ATerm t)
{
  ATerm u_11 = t;
  int v_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_1 (ATerm t)
      {
        ATerm j_45 = NULL;
        j_45 = t;
        i_45 :
        if(!(match_cons(j_45, sym_HS_0)))
          {
            _fail(t);
          }
        return(t);
      }
      t = SOpt_value_1(t, w_1);
      ;
      LocalPopChoice(v_11);
    }
  else
    {
      t = u_11;
      t = term_w_11;
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
  ATerm n_45 = NULL,o_45 = NULL,p_45 = NULL;
  n_45 = t;
  m_45 :
  if(match_cons(n_45, sym__2))
    {
      o_45 = ATgetArgument(n_45, 0);
      p_45 = ATgetArgument(n_45, 1);
      {
        t = not_null(p_45);
        {
          ATerm x_11 = t;
          int y_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              ;
              LocalPopChoice(y_11);
            }
          else
            {
              t = x_11;
              {
                ATerm x_1 (ATerm t)
                {
                  ATerm b_12 = t;
                  int c_12 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = Nil_0(t);
                      ;
                      LocalPopChoice(c_12);
                    }
                  else
                    {
                      t = b_12;
                      {
                        ATerm s_45 = NULL;
                        t = Cons_2(t, _id, x_1);
                        {
                          ATerm t_45 = NULL;
                          t_45 = t;
                          if(((s_45 != NULL) && (s_45 != t_45)))
                            _fail(t_45);
                          else
                            s_45 = t_45;
                          t = (ATerm) ATinsert(CheckATermList(not_null(s_45)), not_null(o_45));
                        }
                      }
                    }
                  return(t);
                }
                t = Cons_2(t, _id, x_1);
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
ATerm dissuader_1 (ATerm t, ATerm y_91 (ATerm))
{
  ATerm d_12;
  d_12 = t;
  {
    ATerm y_1 (ATerm t)
    {
      t = y_91(t);
      {
        ATerm a_2 (ATerm t)
        {
          t = term_e_12;
          return(t);
        }
        t = debug_1(t, a_2);
      }
      return(t);
    }
    t = if_verbose2_1(t, y_1);
  }
  t = d_12;
  return(t);
}
ATerm separate_by_1 (ATerm t, ATerm t_79 (ATerm))
{
  ATerm z_45 = NULL,b_46 = NULL;
  ATerm b_2 (ATerm t)
  {
    t = term_f_12;
    return(t);
  }
  t = dissuader_1(t, b_2);
  {
    ATerm g_12;
    g_12 = t;
    {
      ATerm a_46 = NULL;
      a_46 = t;
      if(((z_45 != NULL) && (z_45 != a_46)))
        _fail(a_46);
      else
        z_45 = a_46;
    }
    t = g_12;
    {
      ATerm c_46 = NULL;
      t = term_h_12;
      {
        t = t_79(t);
        {
          c_46 = t;
          if(((b_46 != NULL) && (b_46 != c_46)))
            _fail(c_46);
          else
            b_46 = c_46;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(b_46), not_null(z_45));
        t = separate_by_0(t);
      }
    }
  }
  return(t);
}
ATerm filter_1 (ATerm t, ATerm x_86 (ATerm))
{
  ATerm i_12 = t;
  int j_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      ;
      LocalPopChoice(j_12);
    }
  else
    {
      t = i_12;
      {
        ATerm k_12 = t;
        int l_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_2 (ATerm t)
            {
              t = filter_1(t, x_86);
              return(t);
            }
            t = Cons_2(t, x_86, c_2);
            ;
            LocalPopChoice(l_12);
          }
        else
          {
            t = k_12;
            {
              ATerm h_46 = NULL,i_46 = NULL,j_46 = NULL;
              h_46 = t;
              g_46 :
              if(((ATgetType(h_46) == AT_LIST) && !(ATisEmpty(h_46))))
                {
                  i_46 = ATgetFirst((ATermList) h_46);
                  j_46 = (ATerm) ATgetNext((ATermList) h_46);
                  {
                    t = not_null(j_46);
                    t = filter_1(t, x_86);
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
  ATerm m_12 = t;
  int n_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_2 (ATerm t)
      {
        ATerm t_46 = NULL;
        t_46 = t;
        s_46 :
        if(!(match_cons(t_46, sym_IS_0)))
          {
            _fail(t);
          }
        return(t);
      }
      t = SOpt_value_1(t, d_2);
      ;
      LocalPopChoice(n_12);
    }
  else
    {
      t = m_12;
      t = term_o_12;
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
  ATerm v_46 = NULL;
  v_46 = t;
  t = SSL_int_to_string(not_null(v_46));
  return(t);
}
ATerm SOpt_2 (ATerm t, ATerm a_65 (ATerm), ATerm b_65 (ATerm))
{
  ATerm e_47 = NULL,f_47 = NULL,g_47 = NULL;
  e_47 = t;
  d_47 :
  if(match_cons(e_47, sym_SOpt_2))
    {
      f_47 = ATgetArgument(e_47, 0);
      g_47 = ATgetArgument(e_47, 1);
      {
        ATerm k_47 = NULL,m_47 = NULL;
        ATerm l_47 = NULL;
        t = SSLgetAnnotations(not_null(e_47));
        {
          l_47 = t;
          if(((k_47 != NULL) && (k_47 != l_47)))
            _fail(l_47);
          else
            k_47 = l_47;
        }
        {
          t = not_null(f_47);
          {
            ATerm o_47 = NULL;
            t = a_65(t);
            {
              m_47 = t;
              {
                t = not_null(g_47);
                {
                  ATerm q_47 = NULL;
                  t = b_65(t);
                  {
                    o_47 = t;
                    {
                      ATerm r_47 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SOpt_2, not_null(m_47), not_null(o_47)), not_null(k_47));
                      {
                        r_47 = t;
                        if(((q_47 != NULL) && (q_47 != r_47)))
                          _fail(r_47);
                        else
                          q_47 = r_47;
                      }
                      t = not_null(q_47);
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
ATerm SOpt_value_1 (ATerm t, ATerm e_72 (ATerm))
{
  ATerm y_47 = NULL;
  ATerm e_2 (ATerm t)
  {
    ATerm i_2 (ATerm t)
    {
      ATerm z_47 = NULL;
      z_47 = t;
      if(((y_47 != NULL) && (y_47 != z_47)))
        _fail(z_47);
      else
        y_47 = z_47;
      return(t);
    }
    t = SOpt_2(t, e_72, i_2);
    return(t);
  }
  t = fetch_1(t, e_2);
  {
    t = not_null(y_47);
    t = string_to_int_0(t);
  }
  return(t);
}
ATerm vs_length_0 (ATerm t)
{
  ATerm p_12 = t;
  int q_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_2 (ATerm t)
      {
        ATerm c_48 = NULL;
        c_48 = t;
        b_48 :
        if(!(match_cons(c_48, sym_VS_0)))
          {
            _fail(t);
          }
        return(t);
      }
      t = SOpt_value_1(t, j_2);
      ;
      LocalPopChoice(q_12);
    }
  else
    {
      t = p_12;
      t = term_o_12;
    }
  return(t);
}
ATerm Vspace_0 (ATerm t)
{
  t = vs_length_0(t);
  t = int_to_string_0(t);
  return(t);
}
ATerm C_2 (ATerm t, ATerm w_63 (ATerm), ATerm x_63 (ATerm))
{
  ATerm j_48 = NULL,k_48 = NULL,l_48 = NULL;
  j_48 = t;
  i_48 :
  if(match_cons(j_48, sym_C_2))
    {
      k_48 = ATgetArgument(j_48, 0);
      l_48 = ATgetArgument(j_48, 1);
      {
        ATerm p_48 = NULL,r_48 = NULL;
        ATerm q_48 = NULL;
        t = SSLgetAnnotations(not_null(j_48));
        {
          q_48 = t;
          if(((p_48 != NULL) && (p_48 != q_48)))
            _fail(q_48);
          else
            p_48 = q_48;
        }
        {
          t = not_null(k_48);
          {
            ATerm t_48 = NULL;
            t = w_63(t);
            {
              r_48 = t;
              {
                t = not_null(l_48);
                {
                  ATerm v_48 = NULL;
                  t = x_63(t);
                  {
                    t_48 = t;
                    {
                      ATerm w_48 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_C_2, not_null(r_48), not_null(t_48)), not_null(p_48));
                      {
                        w_48 = t;
                        if(((v_48 != NULL) && (v_48 != w_48)))
                          _fail(w_48);
                        else
                          v_48 = w_48;
                      }
                      t = not_null(v_48);
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
  ATerm i_49 = NULL,j_49 = NULL,k_49 = NULL;
  i_49 = t;
  h_49 :
  if(match_cons(i_49, sym_R_2))
    {
      j_49 = ATgetArgument(i_49, 0);
      k_49 = ATgetArgument(i_49, 1);
      {
        t = not_null(k_49);
        {
          ATerm g_50 (ATerm t)
          {
            ATerm m_49 = NULL,n_49 = NULL,o_49 = NULL;
            ATerm r_12 = t;
            int s_12 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                ;
                LocalPopChoice(s_12);
              }
            else
              {
                t = r_12;
                {
                  ATerm t_12 = t;
                  int u_12 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = Cons_2(t, _id, Nil_0);
                      ;
                      LocalPopChoice(u_12);
                    }
                  else
                    {
                      t = t_12;
                      {
                        ATerm v_12 = t;
                        int w_12 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm k_2 (ATerm t)
                            {
                              t = C_2(t, _id, _id);
                              return(t);
                            }
                            ATerm m_2 (ATerm t)
                            {
                              t = Cons_2(t, _id, g_50);
                              return(t);
                            }
                            t = Cons_2(t, k_2, m_2);
                            ;
                            LocalPopChoice(w_12);
                          }
                        else
                          {
                            t = v_12;
                            {
                              ATerm x_12 = t;
                              int y_12 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm n_2 (ATerm t)
                                  {
                                    ATerm o_2 (ATerm t)
                                    {
                                      t = C_2(t, _id, _id);
                                      return(t);
                                    }
                                    t = Cons_2(t, o_2, g_50);
                                    return(t);
                                  }
                                  t = Cons_2(t, _id, n_2);
                                  ;
                                  LocalPopChoice(y_12);
                                }
                              else
                                {
                                  t = x_12;
                                  {
                                    ATerm t_49 = NULL,u_49 = NULL,a_50 = NULL,b_50 = NULL,c_50 = NULL;
                                    t_49 = t;
                                    f_49 :
                                    if(((ATgetType(t_49) == AT_LIST) && !(ATisEmpty(t_49))))
                                      {
                                        u_49 = ATgetFirst((ATermList) t_49);
                                        a_50 = (ATerm) ATgetNext((ATermList) t_49);
                                        g_49 :
                                        if(((ATgetType(a_50) == AT_LIST) && !(ATisEmpty(a_50))))
                                          {
                                            b_50 = ATgetFirst((ATermList) a_50);
                                            c_50 = (ATerm) ATgetNext((ATermList) a_50);
                                            {
                                              ATerm d_50 = NULL;
                                              if(((m_49 != NULL) && (m_49 != u_49)))
                                                _fail(u_49);
                                              else
                                                m_49 = u_49;
                                              {
                                                if(((n_49 != NULL) && (n_49 != b_50)))
                                                  _fail(b_50);
                                                else
                                                  n_49 = b_50;
                                                {
                                                  if(((o_49 != NULL) && (o_49 != c_50)))
                                                    _fail(c_50);
                                                  else
                                                    o_49 = c_50;
                                                  {
                                                    ATerm e_50 = NULL;
                                                    t = (ATerm) ATinsert(CheckATermList(not_null(o_49)), not_null(n_49));
                                                    {
                                                      t = g_50(t);
                                                      {
                                                        e_50 = t;
                                                        if(((d_50 != NULL) && (d_50 != e_50)))
                                                          _fail(e_50);
                                                        else
                                                          d_50 = e_50;
                                                      }
                                                    }
                                                    t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(d_50)), term_z_12), not_null(m_49));
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
          t = g_50(t);
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
  ATerm m_50 = NULL,n_50 = NULL;
  ATerm a_13 = t;
  int b_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_50 = NULL,p_50 = NULL,q_50 = NULL;
      o_50 = t;
      l_50 :
      if(match_cons(o_50, sym_LBL_2))
        {
          p_50 = ATgetArgument(o_50, 0);
          q_50 = ATgetArgument(o_50, 1);
          {
            ATerm r_50 = NULL;
            if(((m_50 != NULL) && (m_50 != p_50)))
              _fail(p_50);
            else
              m_50 = p_50;
            {
              if(((n_50 != NULL) && (n_50 != q_50)))
                _fail(q_50);
              else
                n_50 = q_50;
              {
                t = not_null(n_50);
                {
                  t = table_row_0(t);
                  {
                    ATerm s_50 = NULL;
                    t = not_null(n_50);
                    {
                      t = table_row_0(t);
                      {
                        s_50 = t;
                        if(((r_50 != NULL) && (r_50 != s_50)))
                          _fail(s_50);
                        else
                          r_50 = s_50;
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym_LBLBOX_2, not_null(m_50), not_null(r_50));
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
      ;
      LocalPopChoice(b_13);
    }
  else
    {
      t = a_13;
      t = table_row_0(t);
    }
  return(t);
}
ATerm at_last_1 (ATerm t, ATerm x_80 (ATerm))
{
  ATerm v_50 (ATerm t)
  {
    ATerm c_13 = t;
    int d_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, Nil_0);
        t = x_80(t);
        ;
        LocalPopChoice(d_13);
      }
    else
      {
        t = c_13;
        t = Cons_2(t, _id, v_50);
      }
    return(t);
  }
  t = v_50(t);
  return(t);
}
ATerm table_def_0 (ATerm t)
{
  ATerm p_51 = NULL,q_51 = NULL;
  p_51 = t;
  o_51 :
  if(match_cons(p_51, sym_AOPTIONS_1))
    {
      q_51 = ATgetArgument(p_51, 0);
      {
        t = not_null(q_51);
        {
          ATerm p_2 (ATerm t)
          {
            ATerm s_51 = NULL,t_51 = NULL;
            s_51 = t;
            n_51 :
            if(match_cons(s_51, sym_AL_1))
              {
                t_51 = ATgetArgument(s_51, 0);
                {
                  ATerm v_51 = NULL;
                  ATerm w_51 = NULL,y_51 = NULL;
                  ATerm x_51 = NULL;
                  t = not_null(t_51);
                  {
                    t = Hspace_0(t);
                    {
                      t = string_to_int_0(t);
                      {
                        x_51 = t;
                        if(((w_51 != NULL) && (w_51 != x_51)))
                          _fail(x_51);
                        else
                          w_51 = x_51;
                      }
                    }
                  }
                  {
                    t = (ATerm) ATmakeAppl(sym__2, not_null(w_51), term_t_11);
                    {
                      t = copy_0(t);
                      {
                        y_51 = t;
                        if(((v_51 != NULL) && (v_51 != y_51)))
                          _fail(y_51);
                        else
                          v_51 = y_51;
                      }
                    }
                  }
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(v_51)), term_e_13);
                }
              }
            else
              {
                if(match_cons(s_51, sym_AC_1))
                  {
                    t_51 = ATgetArgument(s_51, 0);
                    {
                      ATerm b_52 = NULL;
                      ATerm c_52 = NULL,e_52 = NULL;
                      ATerm d_52 = NULL;
                      t = not_null(t_51);
                      {
                        t = Hspace_0(t);
                        {
                          t = string_to_int_0(t);
                          {
                            d_52 = t;
                            if(((c_52 != NULL) && (c_52 != d_52)))
                              _fail(d_52);
                            else
                              c_52 = d_52;
                          }
                        }
                      }
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(c_52), term_t_11);
                        {
                          t = copy_0(t);
                          {
                            e_52 = t;
                            if(((b_52 != NULL) && (b_52 != e_52)))
                              _fail(e_52);
                            else
                              b_52 = e_52;
                          }
                        }
                      }
                      t = (ATerm) ATinsert(ATinsert(ATempty, not_null(b_52)), term_f_13);
                    }
                  }
                else
                  {
                    if(match_cons(s_51, sym_AR_1))
                      {
                        t_51 = ATgetArgument(s_51, 0);
                        {
                          ATerm g_52 = NULL;
                          ATerm h_52 = NULL,j_52 = NULL;
                          ATerm i_52 = NULL;
                          t = not_null(t_51);
                          {
                            t = Hspace_0(t);
                            {
                              t = string_to_int_0(t);
                              {
                                i_52 = t;
                                if(((h_52 != NULL) && (h_52 != i_52)))
                                  _fail(i_52);
                                else
                                  h_52 = i_52;
                              }
                            }
                          }
                          {
                            t = (ATerm) ATmakeAppl(sym__2, not_null(h_52), term_t_11);
                            {
                              t = copy_0(t);
                              {
                                j_52 = t;
                                if(((g_52 != NULL) && (g_52 != j_52)))
                                  _fail(j_52);
                                else
                                  g_52 = j_52;
                              }
                            }
                          }
                          t = (ATerm) ATinsert(ATinsert(ATempty, not_null(g_52)), term_g_13);
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
          t = map_1(t, p_2);
          {
            ATerm q_2 (ATerm t)
            {
              t = (ATerm) ATinsert(ATempty, term_z_12);
              return(t);
            }
            t = separate_by_1(t, q_2);
            {
              t = concat_0(t);
              {
                ATerm r_2 (ATerm t)
                {
                  t = (ATerm) ATinsert(ATempty, term_h_13);
                  return(t);
                }
                t = at_last_1(t, r_2);
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
  ATerm d_53 = NULL,e_53 = NULL,f_53 = NULL;
  d_53 = t;
  c_53 :
  if(match_cons(d_53, sym__2))
    {
      e_53 = ATgetArgument(d_53, 0);
      f_53 = ATgetArgument(d_53, 1);
      {
        ATerm i_13 = t;
        int j_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_subti(not_null(e_53), not_null(f_53));
            ;
            LocalPopChoice(j_13);
          }
        else
          {
            t = i_13;
            t = SSL_subtr(not_null(e_53), not_null(f_53));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm while_not_2 (ATerm t, ATerm x_73 (ATerm), ATerm y_73 (ATerm))
{
  ATerm j_53 (ATerm t)
  {
    ATerm k_13 = t;
    int l_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_73(t);
        ;
        LocalPopChoice(l_13);
      }
    else
      {
        t = k_13;
        {
          t = y_73(t);
          t = j_53(t);
        }
      }
    return(t);
  }
  t = j_53(t);
  return(t);
}
ATerm for_3 (ATerm t, ATerm a_74 (ATerm), ATerm b_74 (ATerm), ATerm c_74 (ATerm))
{
  t = a_74(t);
  t = while_not_2(t, b_74, c_74);
  return(t);
}
ATerm copy_0 (ATerm t)
{
  ATerm m_13 = t;
  int n_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_2 (ATerm t)
      {
        ATerm t_53 = NULL,u_53 = NULL,v_53 = NULL;
        t_53 = t;
        l_53 :
        if(match_cons(t_53, sym__2))
          {
            u_53 = ATgetArgument(t_53, 0);
            v_53 = ATgetArgument(t_53, 1);
            t = (ATerm) ATmakeAppl(sym__3, not_null(u_53), not_null(v_53), (ATerm) ATempty);
          }
        else
          {
            _fail(t);
          }
        return(t);
      }
      ATerm t_2 (ATerm t)
      {
        ATerm y_53 = NULL,z_53 = NULL,a_54 = NULL,b_54 = NULL;
        y_53 = t;
        n_53 :
        if(match_cons(y_53, sym__3))
          {
            z_53 = ATgetArgument(y_53, 0);
            a_54 = ATgetArgument(y_53, 1);
            b_54 = ATgetArgument(y_53, 2);
            o_53 :
            if(match_int(z_53, 0))
              {
                t = not_null(b_54);
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
      ATerm u_2 (ATerm t)
      {
        ATerm e_54 = NULL,f_54 = NULL,g_54 = NULL,h_54 = NULL;
        e_54 = t;
        r_53 :
        if(match_cons(e_54, sym__3))
          {
            f_54 = ATgetArgument(e_54, 0);
            g_54 = ATgetArgument(e_54, 1);
            h_54 = ATgetArgument(e_54, 2);
            {
              ATerm l_54 = NULL;
              ATerm o_13;
              o_13 = t;
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(f_54), term_w_11);
                t = geq_0(t);
              }
              t = o_13;
              {
                ATerm m_54 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(f_54), term_w_11);
                {
                  t = subt_0(t);
                  {
                    m_54 = t;
                    if(((l_54 != NULL) && (l_54 != m_54)))
                      _fail(m_54);
                    else
                      l_54 = m_54;
                  }
                }
                t = (ATerm) ATmakeAppl(sym__3, not_null(l_54), not_null(g_54), (ATerm) ATinsert(CheckATermList(not_null(h_54)), not_null(g_54)));
              }
            }
          }
        else
          {
            _fail(t);
          }
        return(t);
      }
      t = for_3(t, s_2, t_2, u_2);
      ;
      LocalPopChoice(n_13);
    }
  else
    {
      t = m_13;
      {
        ATerm v_2 (ATerm t)
        {
          ATerm n_54 = NULL;
          n_54 = t;
          s_53 :
          if(!(match_int(n_54, 0)))
            {
              _fail(t);
            }
          return(t);
        }
        t = _2(t, v_2, _id);
        t = (ATerm) ATempty;
      }
    }
  return(t);
}
ATerm R_2 (ATerm t, ATerm m_64 (ATerm), ATerm n_64 (ATerm))
{
  ATerm y_54 = NULL,z_54 = NULL,a_55 = NULL;
  y_54 = t;
  x_54 :
  if(match_cons(y_54, sym_R_2))
    {
      z_54 = ATgetArgument(y_54, 0);
      a_55 = ATgetArgument(y_54, 1);
      {
        ATerm e_55 = NULL,l_55 = NULL;
        ATerm f_55 = NULL;
        t = SSLgetAnnotations(not_null(y_54));
        {
          f_55 = t;
          if(((e_55 != NULL) && (e_55 != f_55)))
            _fail(f_55);
          else
            e_55 = f_55;
        }
        {
          t = not_null(z_54);
          {
            ATerm n_55 = NULL;
            t = m_64(t);
            {
              l_55 = t;
              {
                t = not_null(a_55);
                {
                  ATerm p_55 = NULL;
                  t = n_64(t);
                  {
                    n_55 = t;
                    {
                      ATerm q_55 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_R_2, not_null(l_55), not_null(n_55)), not_null(e_55));
                      {
                        q_55 = t;
                        if(((p_55 != NULL) && (p_55 != q_55)))
                          _fail(q_55);
                        else
                          p_55 = q_55;
                      }
                      t = not_null(p_55);
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
  ATerm w_2 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = split_2(t, _id, w_2);
  {
    ATerm s_57 (ATerm t)
    {
      ATerm m_56 = NULL,n_56 = NULL,o_56 = NULL,p_56 = NULL,q_56 = NULL,r_56 = NULL,s_56 = NULL;
      ATerm v_57 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(r_56), (ATerm) ATinsert(CheckATermList(not_null(s_56)), not_null(q_56)));
        t = s_57(t);
        return(t);
      }
      o_56 = t;
      j_56 :
      if(match_cons(o_56, sym__2))
        {
          p_56 = ATgetArgument(o_56, 0);
          s_56 = ATgetArgument(o_56, 1);
          k_56 :
          if(((ATgetType(p_56) == AT_LIST) && ATisEmpty(p_56)))
            {
              {
                ATerm x_56 = NULL;
                ATerm y_56 = NULL;
                t = not_null(s_56);
                {
                  t = reverse_0(t);
                  {
                    y_56 = t;
                    if(((x_56 != NULL) && (x_56 != y_56)))
                      _fail(y_56);
                    else
                      x_56 = y_56;
                  }
                }
                t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_R_2, (ATerm)ATempty, not_null(x_56)));
              }
            }
          else
            {
              if(((ATgetType(p_56) == AT_LIST) && !(ATisEmpty(p_56))))
                {
                  q_56 = ATgetFirst((ATermList) p_56);
                  r_56 = (ATerm) ATgetNext((ATermList) p_56);
                  l_56 :
                  if(match_cons(q_56, sym_R_2))
                    {
                      m_56 = ATgetArgument(q_56, 0);
                      n_56 = ATgetArgument(q_56, 1);
                      {
                        ATerm p_13 = t;
                        int q_13 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm d_57 = NULL,f_57 = NULL;
                            ATerm r_13;
                            r_13 = t;
                            {
                              ATerm e_57 = NULL;
                              t = not_null(s_56);
                              {
                                t = reverse_0(t);
                                {
                                  e_57 = t;
                                  if(((d_57 != NULL) && (d_57 != e_57)))
                                    _fail(e_57);
                                  else
                                    d_57 = e_57;
                                }
                              }
                            }
                            t = r_13;
                            {
                              ATerm g_57 = NULL;
                              t = (ATerm) ATmakeAppl(sym__2, not_null(r_56), (ATerm) ATempty);
                              {
                                t = s_57(t);
                                {
                                  g_57 = t;
                                  if(((f_57 != NULL) && (f_57 != g_57)))
                                    _fail(g_57);
                                  else
                                    f_57 = g_57;
                                }
                              }
                              t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(f_57)), (ATerm) ATmakeAppl(sym_R_2, not_null(m_56), not_null(n_56))), (ATerm) ATmakeAppl(sym_R_2, (ATerm)ATempty, not_null(d_57)));
                            }
                            ;
                            LocalPopChoice(q_13);
                          }
                        else
                          {
                            t = p_13;
                            t = v_57(t);
                          }
                      }
                    }
                  else
                    {
                      t = v_57(t);
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
    t = s_57(t);
    {
      ATerm x_2 (ATerm t)
      {
        ATerm s_13 = t;
        if((PushChoice() == 0))
          {
            t = R_2(t, _id, Nil_0);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = s_13;
          }
        return(t);
      }
      t = filter_1(t, x_2);
    }
  }
  return(t);
}
ATerm Abox2latex_0 (ATerm t)
{
  ATerm s_59 = NULL,t_59 = NULL,u_59 = NULL,v_59 = NULL,w_59 = NULL,x_59 = NULL,y_59 = NULL;
  ATerm g_63 (ATerm t)
  {
    t = not_null(y_59);
    {
      ATerm t_13 = t;
      int u_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = KW_0(t);
          ;
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
                t = VAR_0(t);
                ;
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
                      t = NUM_0(t);
                      ;
                      LocalPopChoice(y_13);
                    }
                  else
                    {
                      t = x_13;
                      t = MATH_0(t);
                    }
                }
              }
          }
        }
    }
    t = (ATerm) ATmakeAppl(sym_BOXFONT_2, not_null(y_59), not_null(w_59));
    return(t);
  }
  ATerm h_63 (ATerm t)
  {
    ATerm q_62 = NULL;
    ATerm u_62 = NULL;
    t = not_null(w_59);
    {
      ATerm y_2 (ATerm t)
      {
        ATerm r_62 = NULL,s_62 = NULL;
        r_62 = t;
        m_59 :
        if(match_cons(r_62, sym_S_1))
          {
            s_62 = ATgetArgument(r_62, 0);
            {
              t = not_null(s_62);
              t = make_latex_comment_0(t);
            }
          }
        else
          {
            _fail(t);
          }
        return(t);
      }
      t = map_1(t, y_2);
      {
        u_62 = t;
        if(((q_62 != NULL) && (q_62 != u_62)))
          _fail(u_62);
        else
          q_62 = u_62;
      }
    }
    t = (ATerm) ATmakeAppl(sym_CBOX_1, not_null(q_62));
    return(t);
  }
  ATerm i_63 (ATerm t)
  {
    t = not_null(y_59);
    t = latex_string_0(t);
    return(t);
  }
  x_59 = t;
  o_59 :
  if(match_cons(x_59, sym_REF_2))
    {
      y_59 = ATgetArgument(x_59, 0);
      w_59 = ATgetArgument(x_59, 1);
      t = (ATerm) ATmakeAppl(sym_REFBOX_2, not_null(y_59), not_null(w_59));
    }
  else
    {
      if(match_cons(x_59, sym_LBL_2))
        {
          y_59 = ATgetArgument(x_59, 0);
          w_59 = ATgetArgument(x_59, 1);
          t = (ATerm) ATmakeAppl(sym_LBLBOX_2, not_null(y_59), not_null(w_59));
        }
      else
        {
          if(match_cons(x_59, sym_L_2))
            {
              y_59 = ATgetArgument(x_59, 0);
              w_59 = ATgetArgument(x_59, 1);
              {
                ATerm f_60 = NULL;
                ATerm z_13 = t;
                int a_14 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm g_60 = NULL;
                    t = not_null(y_59);
                    {
                      t = string_to_int_0(t);
                      {
                        g_60 = t;
                        if(((f_60 != NULL) && (f_60 != g_60)))
                          _fail(g_60);
                        else
                          f_60 = g_60;
                      }
                    }
                    ;
                    LocalPopChoice(a_14);
                  }
                else
                  {
                    t = z_13;
                    {
                      ATerm b_14 = t;
                      int c_14 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm i_60 = NULL;
                          t = not_null(y_59);
                          {
                            t = explode_string_0(t);
                            {
                              ATerm z_2 (ATerm t)
                              {
                                ATerm h_60 = NULL;
                                h_60 = t;
                                n_58 :
                                if(!(match_int(h_60, 61)))
                                  {
                                    _fail(t);
                                  }
                                return(t);
                              }
                              t = Cons_2(t, z_2, _id);
                              {
                                t = (ATerm) ATinsert(ATempty, term_d_14);
                                {
                                  t = implode_string_0(t);
                                  {
                                    i_60 = t;
                                    if(((f_60 != NULL) && (f_60 != i_60)))
                                      _fail(i_60);
                                    else
                                      f_60 = i_60;
                                  }
                                }
                              }
                            }
                          }
                          ;
                          LocalPopChoice(c_14);
                        }
                      else
                        {
                          t = b_14;
                          {
                            ATerm j_60 = NULL;
                            t = not_null(y_59);
                            {
                              j_60 = t;
                              if(((f_60 != NULL) && (f_60 != j_60)))
                                _fail(j_60);
                              else
                                f_60 = j_60;
                            }
                          }
                        }
                    }
                  }
                t = (ATerm) ATmakeAppl(sym_LBOX_2, not_null(f_60), not_null(w_59));
              }
            }
          else
            {
              if(match_cons(x_59, sym_ALT_2))
                {
                  y_59 = ATgetArgument(x_59, 0);
                  w_59 = ATgetArgument(x_59, 1);
                  t = (ATerm) ATmakeAppl(sym_ALTBOX_2, not_null(y_59), not_null(w_59));
                }
              else
                {
                  if(match_cons(x_59, sym_A_3))
                    {
                      y_59 = ATgetArgument(x_59, 0);
                      w_59 = ATgetArgument(x_59, 1);
                      s_59 = ATgetArgument(x_59, 2);
                      {
                        ATerm p_60 = NULL,q_60 = NULL,r_60 = NULL,s_60 = NULL,t_60 = NULL;
                        ATerm u_60 = NULL;
                        t = not_null(s_59);
                        {
                          ATerm v_60 = NULL;
                          t = construct_rows_0(t);
                          {
                            u_60 = t;
                            {
                              if(((r_60 != NULL) && (r_60 != u_60)))
                                _fail(u_60);
                              else
                                r_60 = u_60;
                              {
                                t = not_null(w_59);
                                {
                                  t = Vspace_0(t);
                                  {
                                    ATerm w_60 = NULL,y_60 = NULL;
                                    t = string_to_int_0(t);
                                    {
                                      v_60 = t;
                                      {
                                        if(((p_60 != NULL) && (p_60 != v_60)))
                                          _fail(v_60);
                                        else
                                          p_60 = v_60;
                                        {
                                          ATerm x_60 = NULL;
                                          t = (ATerm) ATmakeAppl(sym__2, not_null(p_60), term_h_13);
                                          {
                                            t = copy_0(t);
                                            {
                                              x_60 = t;
                                              if(((w_60 != NULL) && (w_60 != x_60)))
                                                _fail(x_60);
                                              else
                                                w_60 = x_60;
                                            }
                                          }
                                          {
                                            t = (ATerm) ATmakeAppl(sym__2, not_null(w_60), (ATerm) ATinsert(ATinsert(ATempty, term_i_11), term_h_13));
                                            {
                                              ATerm z_60 = NULL;
                                              t = conc_0(t);
                                              {
                                                y_60 = t;
                                                {
                                                  if(((s_60 != NULL) && (s_60 != y_60)))
                                                    _fail(y_60);
                                                  else
                                                    s_60 = y_60;
                                                  {
                                                    t = not_null(y_59);
                                                    {
                                                      ATerm a_61 = NULL;
                                                      t = table_def_0(t);
                                                      {
                                                        z_60 = t;
                                                        {
                                                          if(((q_60 != NULL) && (q_60 != z_60)))
                                                            _fail(z_60);
                                                          else
                                                            q_60 = z_60;
                                                          {
                                                            t = not_null(r_60);
                                                            {
                                                              t = map_1(t, MkRows_0);
                                                              {
                                                                ATerm a_3 (ATerm t)
                                                                {
                                                                  t = not_null(s_60);
                                                                  return(t);
                                                                }
                                                                t = separate_by_1(t, a_3);
                                                                {
                                                                  a_61 = t;
                                                                  if(((t_60 != NULL) && (t_60 != a_61)))
                                                                    _fail(a_61);
                                                                  else
                                                                    t_60 = a_61;
                                                                }
                                                              }
                                                            }
                                                          }
                                                        }
                                                      }
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                        t = (ATerm) ATmakeAppl(sym_ABOX_2, not_null(q_60), not_null(t_60));
                      }
                    }
                  else
                    {
                      if(match_cons(x_59, sym_HV_2))
                        {
                          y_59 = ATgetArgument(x_59, 0);
                          w_59 = ATgetArgument(x_59, 1);
                          {
                            ATerm d_61 = NULL,e_61 = NULL,f_61 = NULL,g_61 = NULL;
                            ATerm h_61 = NULL;
                            t = not_null(y_59);
                            {
                              ATerm i_61 = NULL;
                              t = Hspace_0(t);
                              {
                                h_61 = t;
                                {
                                  if(((d_61 != NULL) && (d_61 != h_61)))
                                    _fail(h_61);
                                  else
                                    d_61 = h_61;
                                  {
                                    t = not_null(y_59);
                                    {
                                      ATerm j_61 = NULL;
                                      t = Vspace_0(t);
                                      {
                                        i_61 = t;
                                        {
                                          if(((e_61 != NULL) && (e_61 != i_61)))
                                            _fail(i_61);
                                          else
                                            e_61 = i_61;
                                          {
                                            t = not_null(y_59);
                                            {
                                              ATerm k_61 = NULL;
                                              t = Ispace_0(t);
                                              {
                                                j_61 = t;
                                                {
                                                  if(((f_61 != NULL) && (f_61 != j_61)))
                                                    _fail(j_61);
                                                  else
                                                    f_61 = j_61;
                                                  {
                                                    t = not_null(w_59);
                                                    {
                                                      ATerm b_3 (ATerm t)
                                                      {
                                                        ATerm e_14 = t;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = Nil_0(t);
                                                            PopChoice();
                                                            _fail(t);
                                                          }
                                                        else
                                                          {
                                                            t = e_14;
                                                          }
                                                        return(t);
                                                      }
                                                      t = filter_1(t, b_3);
                                                      {
                                                        ATerm c_3 (ATerm t)
                                                        {
                                                          t = term_f_14;
                                                          return(t);
                                                        }
                                                        t = separate_by_1(t, c_3);
                                                        {
                                                          k_61 = t;
                                                          if(((g_61 != NULL) && (g_61 != k_61)))
                                                            _fail(k_61);
                                                          else
                                                            g_61 = k_61;
                                                        }
                                                      }
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                            t = (ATerm) ATmakeAppl(sym_HVBOX_4, not_null(d_61), not_null(e_61), not_null(f_61), not_null(g_61));
                          }
                        }
                      else
                        {
                          if(match_cons(x_59, sym_V_2))
                            {
                              y_59 = ATgetArgument(x_59, 0);
                              w_59 = ATgetArgument(x_59, 1);
                              {
                                ATerm n_61 = NULL,o_61 = NULL,p_61 = NULL;
                                ATerm q_61 = NULL;
                                t = not_null(y_59);
                                {
                                  ATerm r_61 = NULL;
                                  t = Vspace_0(t);
                                  {
                                    q_61 = t;
                                    {
                                      if(((n_61 != NULL) && (n_61 != q_61)))
                                        _fail(q_61);
                                      else
                                        n_61 = q_61;
                                      {
                                        t = not_null(y_59);
                                        {
                                          ATerm s_61 = NULL;
                                          t = Ispace_0(t);
                                          {
                                            r_61 = t;
                                            {
                                              if(((o_61 != NULL) && (o_61 != r_61)))
                                                _fail(r_61);
                                              else
                                                o_61 = r_61;
                                              {
                                                t = not_null(w_59);
                                                {
                                                  ATerm d_3 (ATerm t)
                                                  {
                                                    ATerm g_14 = t;
                                                    if((PushChoice() == 0))
                                                      {
                                                        t = Nil_0(t);
                                                        PopChoice();
                                                        _fail(t);
                                                      }
                                                    else
                                                      {
                                                        t = g_14;
                                                      }
                                                    return(t);
                                                  }
                                                  t = filter_1(t, d_3);
                                                  {
                                                    ATerm e_3 (ATerm t)
                                                    {
                                                      t = term_h_14;
                                                      return(t);
                                                    }
                                                    t = separate_by_1(t, e_3);
                                                    {
                                                      s_61 = t;
                                                      if(((p_61 != NULL) && (p_61 != s_61)))
                                                        _fail(s_61);
                                                      else
                                                        p_61 = s_61;
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                                t = (ATerm) ATmakeAppl(sym_VBOX_3, not_null(n_61), not_null(o_61), not_null(p_61));
                              }
                            }
                          else
                            {
                              if(match_cons(x_59, sym_H_2))
                                {
                                  y_59 = ATgetArgument(x_59, 0);
                                  w_59 = ATgetArgument(x_59, 1);
                                  {
                                    ATerm v_61 = NULL,w_61 = NULL;
                                    ATerm x_61 = NULL;
                                    t = not_null(y_59);
                                    {
                                      ATerm y_61 = NULL;
                                      t = Hspace_0(t);
                                      {
                                        x_61 = t;
                                        {
                                          if(((v_61 != NULL) && (v_61 != x_61)))
                                            _fail(x_61);
                                          else
                                            v_61 = x_61;
                                          {
                                            t = not_null(w_59);
                                            {
                                              t = toh_0(t);
                                              {
                                                y_61 = t;
                                                if(((w_61 != NULL) && (w_61 != y_61)))
                                                  _fail(y_61);
                                                else
                                                  w_61 = y_61;
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                    t = (ATerm) ATmakeAppl(sym_HBOX_2, not_null(v_61), not_null(w_61));
                                  }
                                }
                              else
                                {
                                  if(match_cons(x_59, sym_FBOX_2))
                                    {
                                      y_59 = ATgetArgument(x_59, 0);
                                      w_59 = ATgetArgument(x_59, 1);
                                      p_59 :
                                      if(match_cons(y_59, sym_F_1))
                                        {
                                          v_59 = ATgetArgument(y_59, 0);
                                          q_59 :
                                          if(((ATgetType(v_59) == AT_LIST) && !(ATisEmpty(v_59))))
                                            {
                                              t_59 = ATgetFirst((ATermList) v_59);
                                              u_59 = (ATerm) ATgetNext((ATermList) v_59);
                                              {
                                                ATerm i_14 = t;
                                                int j_14 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    ATerm c_62 = NULL,f_62 = NULL;
                                                    t = not_null(t_59);
                                                    {
                                                      ATerm k_14 = t;
                                                      int l_14 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm f_3 (ATerm t)
                                                          {
                                                            ATerm g_62 = NULL;
                                                            g_62 = t;
                                                            if(((f_62 != NULL) && (f_62 != g_62)))
                                                              _fail(g_62);
                                                            else
                                                              f_62 = g_62;
                                                            return(t);
                                                          }
                                                          t = FFID_2(t, FM_0, f_3);
                                                          ;
                                                          LocalPopChoice(l_14);
                                                        }
                                                      else
                                                        {
                                                          t = k_14;
                                                          {
                                                            ATerm m_14 = t;
                                                            int n_14 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm g_3 (ATerm t)
                                                                {
                                                                  ATerm h_62 = NULL;
                                                                  h_62 = t;
                                                                  if(((f_62 != NULL) && (f_62 != h_62)))
                                                                    _fail(h_62);
                                                                  else
                                                                    f_62 = h_62;
                                                                  return(t);
                                                                }
                                                                t = FFID_2(t, SE_0, g_3);
                                                                ;
                                                                LocalPopChoice(n_14);
                                                              }
                                                            else
                                                              {
                                                                t = m_14;
                                                                {
                                                                  ATerm o_14 = t;
                                                                  int p_14 = stack_ptr;
                                                                  if((PushChoice() == 0))
                                                                    {
                                                                      ATerm h_3 (ATerm t)
                                                                      {
                                                                        ATerm i_62 = NULL;
                                                                        i_62 = t;
                                                                        if(((f_62 != NULL) && (f_62 != i_62)))
                                                                          _fail(i_62);
                                                                        else
                                                                          f_62 = i_62;
                                                                        return(t);
                                                                      }
                                                                      t = FFID_2(t, SH_0, h_3);
                                                                      ;
                                                                      LocalPopChoice(p_14);
                                                                    }
                                                                  else
                                                                    {
                                                                      t = o_14;
                                                                      {
                                                                        ATerm q_14 = t;
                                                                        int r_14 = stack_ptr;
                                                                        if((PushChoice() == 0))
                                                                          {
                                                                            ATerm i_3 (ATerm t)
                                                                            {
                                                                              ATerm j_62 = NULL;
                                                                              j_62 = t;
                                                                              if(((f_62 != NULL) && (f_62 != j_62)))
                                                                                _fail(j_62);
                                                                              else
                                                                                f_62 = j_62;
                                                                              return(t);
                                                                            }
                                                                            t = FFID_2(t, SZ_0, i_3);
                                                                            ;
                                                                            LocalPopChoice(r_14);
                                                                          }
                                                                        else
                                                                          {
                                                                            t = q_14;
                                                                            {
                                                                              ATerm l_62 = NULL;
                                                                              ATerm j_3 (ATerm t)
                                                                              {
                                                                                ATerm k_62 = NULL;
                                                                                k_62 = t;
                                                                                if(((c_62 != NULL) && (c_62 != k_62)))
                                                                                  _fail(k_62);
                                                                                else
                                                                                  c_62 = k_62;
                                                                                return(t);
                                                                              }
                                                                              t = FFID_2(t, CL_0, j_3);
                                                                              {
                                                                                t = (ATerm) ATmakeAppl(sym_BOXCOLOR_1, not_null(c_62));
                                                                                {
                                                                                  l_62 = t;
                                                                                  if(((f_62 != NULL) && (f_62 != l_62)))
                                                                                    _fail(l_62);
                                                                                  else
                                                                                    f_62 = l_62;
                                                                                }
                                                                              }
                                                                            }
                                                                          }
                                                                      }
                                                                    }
                                                                }
                                                              }
                                                          }
                                                        }
                                                    }
                                                    t = (ATerm) ATmakeAppl(sym_BOXFONT_2, not_null(f_62), (ATerm) ATmakeAppl(sym_FBOX_2, (ATerm)ATmakeAppl(sym_F_1, not_null(u_59)), not_null(w_59)));
                                                    ;
                                                    LocalPopChoice(j_14);
                                                  }
                                                else
                                                  {
                                                    t = i_14;
                                                    t = g_63(t);
                                                  }
                                              }
                                            }
                                          else
                                            {
                                              if(((ATgetType(v_59) == AT_LIST) && ATisEmpty(v_59)))
                                                {
                                                  {
                                                    ATerm s_14 = t;
                                                    int t_14 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        t = not_null(w_59);
                                                        ;
                                                        LocalPopChoice(t_14);
                                                      }
                                                    else
                                                      {
                                                        t = s_14;
                                                        t = g_63(t);
                                                      }
                                                  }
                                                }
                                              else
                                                {
                                                  t = g_63(t);
                                                }
                                            }
                                        }
                                      else
                                        {
                                          t = g_63(t);
                                        }
                                    }
                                  else
                                    {
                                      if(match_cons(x_59, sym_C_2))
                                        {
                                          y_59 = ATgetArgument(x_59, 0);
                                          w_59 = ATgetArgument(x_59, 1);
                                          r_59 :
                                          if(((ATgetType(y_59) == AT_LIST) && ATisEmpty(y_59)))
                                            {
                                              t = h_63(t);
                                            }
                                          else
                                            {
                                              _fail(t);
                                            }
                                        }
                                      else
                                        {
                                          if(match_cons(x_59, sym_S_1))
                                            {
                                              y_59 = ATgetArgument(x_59, 0);
                                              t = i_63(t);
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
ATerm topdown_1 (ATerm t, ATerm g_74 (ATerm))
{
  t = g_74(t);
  {
    ATerm k_3 (ATerm t)
    {
      t = topdown_1(t, g_74);
      return(t);
    }
    t = _all(t, k_3);
  }
  return(t);
}
ATerm load_latex_table_0 (ATerm t)
{
  ATerm u_14;
  u_14 = t;
  {
    t = term_n_10;
    {
      t = table_create_0(t);
      {
        ATerm l_3 (ATerm t)
        {
          t = term_t_6;
          {
            t = get_config_0(t);
            {
              t = ReadFromFile_0(t);
              {
                ATerm m_3 (ATerm t)
                {
                  ATerm v_64 = NULL,w_64 = NULL,x_64 = NULL,y_64 = NULL,z_64 = NULL;
                  v_64 = t;
                  s_64 :
                  if(((ATgetType(v_64) == AT_LIST) && !(ATisEmpty(v_64))))
                    {
                      w_64 = ATgetFirst((ATermList) v_64);
                      x_64 = (ATerm) ATgetNext((ATermList) v_64);
                      t_64 :
                      if(((ATgetType(x_64) == AT_LIST) && !(ATisEmpty(x_64))))
                        {
                          y_64 = ATgetFirst((ATermList) x_64);
                          z_64 = (ATerm) ATgetNext((ATermList) x_64);
                          u_64 :
                          if(((ATgetType(z_64) == AT_LIST) && ATisEmpty(z_64)))
                            {
                              {
                                t = (ATerm) ATmakeAppl(sym__3, term_n_10, not_null(w_64), not_null(y_64));
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
              }
            }
          }
          return(t);
        }
        t = try_1(t, l_3);
      }
    }
  }
  t = u_14;
  return(t);
}
ATerm abox2latex_0 (ATerm t)
{
  ATerm n_3 (ATerm t)
  {
    ATerm h_65 = NULL,j_65 = NULL;
    t = load_latex_table_0(t);
    {
      ATerm o_3 (ATerm t)
      {
        t = try_1(t, Abox2latex_0);
        return(t);
      }
      t = topdown_1(t, o_3);
      {
        ATerm v_14;
        v_14 = t;
        {
          ATerm i_65 = NULL;
          t = BOXENV_args_0(t);
          {
            i_65 = t;
            if(((h_65 != NULL) && (h_65 != i_65)))
              _fail(i_65);
            else
              h_65 = i_65;
          }
        }
        t = v_14;
        {
          ATerm k_65 = NULL;
          k_65 = t;
          if(((j_65 != NULL) && (j_65 != k_65)))
            _fail(k_65);
          else
            j_65 = k_65;
          {
            t = (ATerm) ATmakeAppl(sym_BOXENV_2, not_null(h_65), not_null(j_65));
            {
              t = latex2text_0(t);
              {
                t = collect_set_1(t, is_string_0);
                t = concat_strings_0(t);
              }
            }
          }
        }
      }
    }
    return(t);
  }
  t = _2(t, _id, n_3);
  return(t);
}
ATerm default_usage_0 (ATerm t)
{
  ATerm w_14;
  w_14 = t;
  {
    ATerm o_65 = NULL;
    ATerm p_65 = NULL;
    t = term_h_12;
    {
      t = whoami_0(t);
      {
        p_65 = t;
        if(((o_65 != NULL) && (o_65 != p_65)))
          _fail(p_65);
        else
          o_65 = p_65;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_x_14, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_z_14), not_null(o_65)), term_y_14));
      {
        t = printnl_0(t);
        {
          t = term_w_11;
          t = exit_0(t);
        }
      }
    }
  }
  t = w_14;
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm t_65 = NULL,u_65 = NULL,v_65 = NULL;
  t_65 = t;
  s_65 :
  if(match_cons(t_65, sym__2))
    {
      u_65 = ATgetArgument(t_65, 0);
      v_65 = ATgetArgument(t_65, 1);
      {
        ATerm a_15;
        a_15 = t;
        t = SSL_printnl(not_null(u_65), not_null(v_65));
        t = a_15;
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
  ATerm a_66 = NULL;
  a_66 = t;
  t = SSL_implode_string(not_null(a_66));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm b_15 = t;
  int c_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      ;
      LocalPopChoice(c_15);
    }
  else
    {
      t = b_15;
      {
        ATerm f_66 = NULL,g_66 = NULL,h_66 = NULL;
        f_66 = t;
        e_66 :
        if(((ATgetType(f_66) == AT_LIST) && !(ATisEmpty(f_66))))
          {
            g_66 = ATgetFirst((ATermList) f_66);
            h_66 = (ATerm) ATgetNext((ATermList) f_66);
            {
              t = not_null(g_66);
              {
                ATerm p_3 (ATerm t)
                {
                  t = not_null(h_66);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, p_3);
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
  ATerm r_66 = NULL;
  ATerm t_66 = NULL;
  r_66 = t;
  {
    ATerm u_66 = NULL;
    ATerm w_66 = NULL,x_66 = NULL,y_66 = NULL;
    t = not_null(r_66);
    {
      u_66 = t;
      {
        t = SSL_explode_term(not_null(u_66));
        {
          w_66 = t;
          p_66 :
          if(match_cons(w_66, sym__2))
            {
              x_66 = ATgetArgument(w_66, 0);
              y_66 = ATgetArgument(w_66, 1);
              q_66 :
              if(match_string(x_66, ""))
                {
                  if(((t_66 != NULL) && (t_66 != y_66)))
                    _fail(y_66);
                  else
                    t_66 = y_66;
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
      t = not_null(t_66);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm m_80 (ATerm))
{
  ATerm c_67 (ATerm t)
  {
    ATerm d_15 = t;
    int e_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, c_67);
        ;
        LocalPopChoice(e_15);
      }
    else
      {
        t = d_15;
        {
          t = Nil_0(t);
          t = m_80(t);
        }
      }
    return(t);
  }
  t = c_67(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm f_67 = NULL,g_67 = NULL,h_67 = NULL;
  f_67 = t;
  e_67 :
  if(match_cons(f_67, sym__2))
    {
      g_67 = ATgetArgument(f_67, 0);
      h_67 = ATgetArgument(f_67, 1);
      {
        t = not_null(g_67);
        {
          ATerm q_3 (ATerm t)
          {
            t = not_null(h_67);
            return(t);
          }
          t = at_end_1(t, q_3);
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
  ATerm f_15 = t;
  int g_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      ;
      LocalPopChoice(g_15);
    }
  else
    {
      t = f_15;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm m_67 = NULL;
  m_67 = t;
  t = SSL_explode_string(not_null(m_67));
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
  ATerm h_15 = t;
  int i_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      ;
      LocalPopChoice(i_15);
    }
  else
    {
      t = h_15;
      {
        ATerm j_15 = t;
        int k_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_3 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, r_3);
            ;
            LocalPopChoice(k_15);
          }
        else
          {
            t = j_15;
            {
              ATerm v_67 = NULL,w_67 = NULL,x_67 = NULL;
              v_67 = t;
              u_67 :
              if(match_cons(v_67, sym_Path_1))
                {
                  w_67 = ATgetArgument(v_67, 0);
                  t = not_null(w_67);
                }
              else
                {
                  if(match_cons(v_67, sym_Var_1))
                    {
                      w_67 = ATgetArgument(v_67, 0);
                      {
                        t = not_null(w_67);
                        {
                          ATerm l_15 = t;
                          int m_15 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              ;
                              LocalPopChoice(m_15);
                            }
                          else
                            {
                              t = l_15;
                              {
                                ATerm s_3 (ATerm t)
                                {
                                  t = term_n_15;
                                  return(t);
                                }
                                t = debug_1(t, s_3);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(v_67, sym_Prefix_2))
                        {
                          w_67 = ATgetArgument(v_67, 0);
                          x_67 = ATgetArgument(v_67, 1);
                          {
                            ATerm c_68 = NULL,e_68 = NULL;
                            ATerm o_15;
                            o_15 = t;
                            {
                              ATerm d_68 = NULL;
                              t = not_null(w_67);
                              {
                                t = eval_config_0(t);
                                {
                                  d_68 = t;
                                  if(((c_68 != NULL) && (c_68 != d_68)))
                                    _fail(d_68);
                                  else
                                    c_68 = d_68;
                                }
                              }
                            }
                            t = o_15;
                            {
                              ATerm f_68 = NULL;
                              t = not_null(x_67);
                              {
                                t = eval_config_0(t);
                                {
                                  f_68 = t;
                                  if(((e_68 != NULL) && (e_68 != f_68)))
                                    _fail(f_68);
                                  else
                                    e_68 = f_68;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(c_68), not_null(e_68));
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
  ATerm n_68 = NULL;
  n_68 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_p_15, not_null(n_68));
    {
      t = table_get_0(t);
      {
        ATerm t_3 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm q_15;
            q_15 = t;
            {
              ATerm p_68 = NULL;
              ATerm q_68 = NULL;
              q_68 = t;
              if(((p_68 != NULL) && (p_68 != q_68)))
                _fail(q_68);
              else
                p_68 = q_68;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_p_15, not_null(n_68), not_null(p_68));
                t = table_put_0(t);
              }
            }
            t = q_15;
          }
          return(t);
        }
        t = try_1(t, t_3);
      }
    }
  }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm i_93 (ATerm))
{
  ATerm u_3 (ATerm t)
  {
    ATerm r_15;
    r_15 = t;
    {
      ATerm u_68 = NULL;
      ATerm v_68 = NULL;
      t = term_s_15;
      {
        t = get_config_0(t);
        {
          v_68 = t;
          if(((u_68 != NULL) && (u_68 != v_68)))
            _fail(v_68);
          else
            u_68 = v_68;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(u_68), term_t_15);
        t = geq_0(t);
      }
    }
    t = r_15;
    t = i_93(t);
    return(t);
  }
  t = try_1(t, u_3);
  return(t);
}
ATerm fputc_0 (ATerm t)
{
  ATerm b_69 = NULL,c_69 = NULL,d_69 = NULL,e_69 = NULL;
  b_69 = t;
  z_68 :
  if(match_cons(b_69, sym__2))
    {
      c_69 = ATgetArgument(b_69, 0);
      d_69 = ATgetArgument(b_69, 1);
      a_69 :
      if(match_cons(d_69, sym_Stream_1))
        {
          e_69 = ATgetArgument(d_69, 0);
          {
            ATerm h_69 = NULL;
            t = SSL_fputc(not_null(c_69), not_null(e_69));
            {
              ATerm i_69 = NULL;
              i_69 = t;
              if(((h_69 != NULL) && (h_69 != i_69)))
                _fail(i_69);
              else
                h_69 = i_69;
              t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(h_69));
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
  return(t);
}
ATerm write_in_text_to_stream_0 (ATerm t)
{
  ATerm p_69 = NULL,q_69 = NULL,r_69 = NULL,s_69 = NULL;
  p_69 = t;
  n_69 :
  if(match_cons(p_69, sym__2))
    {
      q_69 = ATgetArgument(p_69, 0);
      s_69 = ATgetArgument(p_69, 1);
      o_69 :
      if(match_cons(q_69, sym_Stream_1))
        {
          r_69 = ATgetArgument(q_69, 0);
          {
            ATerm v_69 = NULL;
            t = SSL_write_term_to_stream_text(not_null(r_69), not_null(s_69));
            {
              ATerm w_69 = NULL;
              w_69 = t;
              if(((v_69 != NULL) && (v_69 != w_69)))
                _fail(w_69);
              else
                v_69 = w_69;
              t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(v_69));
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
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm v_3 (ATerm t)
  {
    ATerm a_70 = NULL;
    t = write_in_text_to_stream_0(t);
    {
      ATerm b_70 = NULL;
      b_70 = t;
      if(((a_70 != NULL) && (a_70 != b_70)))
        _fail(b_70);
      else
        a_70 = b_70;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_u_15, not_null(a_70));
        t = fputc_0(t);
      }
    }
    return(t);
  }
  t = WriteToFile_1(t, v_3);
  return(t);
}
ATerm write_in_baf_to_stream_0 (ATerm t)
{
  ATerm h_70 = NULL,i_70 = NULL,j_70 = NULL,k_70 = NULL;
  h_70 = t;
  f_70 :
  if(match_cons(h_70, sym__2))
    {
      i_70 = ATgetArgument(h_70, 0);
      k_70 = ATgetArgument(h_70, 1);
      g_70 :
      if(match_cons(i_70, sym_Stream_1))
        {
          j_70 = ATgetArgument(i_70, 0);
          {
            ATerm n_70 = NULL;
            t = SSL_write_term_to_stream_baf(not_null(j_70), not_null(k_70));
            {
              ATerm o_70 = NULL;
              o_70 = t;
              if(((n_70 != NULL) && (n_70 != o_70)))
                _fail(o_70);
              else
                n_70 = o_70;
              t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(n_70));
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
  return(t);
}
ATerm WriteToFile_1 (ATerm t, ATerm e_92 (ATerm))
{
  ATerm v_70 = NULL,w_70 = NULL,x_70 = NULL;
  v_70 = t;
  u_70 :
  if(match_cons(v_70, sym__2))
    {
      w_70 = ATgetArgument(v_70, 0);
      x_70 = ATgetArgument(v_70, 1);
      {
        ATerm a_71 = NULL,c_71 = NULL;
        t = not_null(w_70);
        {
          ATerm b_71 = NULL;
          b_71 = t;
          if(((a_71 != NULL) && (a_71 != b_71)))
            _fail(b_71);
          else
            a_71 = b_71;
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(a_71), term_v_15);
            {
              t = open_stream_0(t);
              {
                ATerm d_71 = NULL;
                d_71 = t;
                if(((c_71 != NULL) && (c_71 != d_71)))
                  _fail(d_71);
                else
                  c_71 = d_71;
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(c_71), not_null(x_70));
                  {
                    t = e_92(t);
                    {
                      t = fclose_0(t);
                      t = not_null(x_70);
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
ATerm WriteToBinaryFile_0 (ATerm t)
{
  t = WriteToFile_1(t, write_in_baf_to_stream_0);
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm l_71 = NULL;
  ATerm w_15;
  w_15 = t;
  {
    ATerm w_3 (ATerm t)
    {
      ATerm x_15 = t;
      int y_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm x_3 (ATerm t)
          {
            ATerm m_71 = NULL,n_71 = NULL;
            m_71 = t;
            i_71 :
            if(match_cons(m_71, sym_Output_1))
              {
                n_71 = ATgetArgument(m_71, 0);
                if(((l_71 != NULL) && (l_71 != n_71)))
                  _fail(n_71);
                else
                  l_71 = n_71;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, x_3);
          ;
          LocalPopChoice(y_15);
        }
      else
        {
          t = x_15;
          {
            ATerm o_71 = NULL;
            t = term_z_15;
            {
              o_71 = t;
              if(((l_71 != NULL) && (l_71 != o_71)))
                _fail(o_71);
              else
                l_71 = o_71;
            }
          }
        }
      return(t);
    }
    t = _2(t, w_3, _id);
  }
  t = w_15;
  {
    ATerm y_3 (ATerm t)
    {
      ATerm z_3 (ATerm t)
      {
        t = not_null(l_71);
        return(t);
      }
      t = split_2(t, z_3, _id);
      return(t);
    }
    t = _2(t, _id, y_3);
    {
      ATerm a_16 = t;
      int b_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm a_4 (ATerm t)
          {
            ATerm b_4 (ATerm t)
            {
              ATerm p_71 = NULL;
              p_71 = t;
              k_71 :
              if(!(match_cons(p_71, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = option_defined_1(t, b_4);
            return(t);
          }
          t = _2(t, a_4, WriteToBinaryFile_0);
          ;
          LocalPopChoice(b_16);
        }
      else
        {
          t = a_16;
          t = _2(t, _id, WriteToTextFile_0);
        }
    }
  }
  return(t);
}
ATerm dtime_0 (ATerm t)
{
  t = SSL_dtime();
  return(t);
}
ATerm apply_strategy_1 (ATerm t, ATerm g_95 (ATerm))
{
  ATerm x_71 = NULL,z_71 = NULL,a_72 = NULL,b_72 = NULL;
  ATerm c_16;
  c_16 = t;
  t = dtime_0(t);
  t = c_16;
  {
    t = g_95(t);
    {
      ATerm d_16;
      d_16 = t;
      {
        ATerm y_71 = NULL;
        t = dtime_0(t);
        {
          y_71 = t;
          if(((x_71 != NULL) && (x_71 != y_71)))
            _fail(y_71);
          else
            x_71 = y_71;
        }
      }
      t = d_16;
      {
        z_71 = t;
        w_71 :
        if(match_cons(z_71, sym__2))
          {
            a_72 = ATgetArgument(z_71, 0);
            b_72 = ATgetArgument(z_71, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(a_72)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(x_71))), not_null(b_72));
          }
        else
          {
            _fail(t);
          }
      }
    }
  }
  return(t);
}
ATerm fclose_0 (ATerm t)
{
  ATerm r_72 = NULL,s_72 = NULL;
  ATerm y_72 (ATerm t)
  {
    t = SSL_fclose(not_null(s_72));
    return(t);
  }
  s_72 = t;
  q_72 :
  if(match_cons(s_72, sym_Stream_1))
    {
      r_72 = ATgetArgument(s_72, 0);
      {
        ATerm e_16 = t;
        int f_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(not_null(r_72));
            ;
            LocalPopChoice(f_16);
          }
        else
          {
            t = e_16;
            t = y_72(t);
          }
      }
    }
  else
    {
      t = y_72(t);
    }
  return(t);
}
ATerm read_from_stream_0 (ATerm t)
{
  ATerm b_73 = NULL,c_73 = NULL;
  b_73 = t;
  a_73 :
  if(match_cons(b_73, sym_Stream_1))
    {
      c_73 = ATgetArgument(b_73, 0);
      t = SSL_read_term_from_stream(not_null(c_73));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm q_91 (ATerm))
{
  ATerm g_16;
  g_16 = t;
  {
    ATerm h_73 = NULL,j_73 = NULL;
    ATerm h_16;
    h_16 = t;
    {
      ATerm i_73 = NULL;
      t = q_91(t);
      {
        i_73 = t;
        if(((h_73 != NULL) && (h_73 != i_73)))
          _fail(i_73);
        else
          h_73 = i_73;
      }
    }
    t = h_16;
    {
      ATerm k_73 = NULL;
      k_73 = t;
      if(((j_73 != NULL) && (j_73 != k_73)))
        _fail(k_73);
      else
        j_73 = k_73;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_x_14, (ATerm) ATinsert(ATinsert(ATempty, not_null(j_73)), not_null(h_73)));
        t = printnl_0(t);
      }
    }
  }
  t = g_16;
  return(t);
}
ATerm fopen_0 (ATerm t)
{
  ATerm q_73 = NULL,r_73 = NULL,s_73 = NULL;
  q_73 = t;
  p_73 :
  if(match_cons(q_73, sym__2))
    {
      r_73 = ATgetArgument(q_73, 0);
      s_73 = ATgetArgument(q_73, 1);
      {
        ATerm v_73 = NULL;
        t = SSL_fopen(not_null(r_73), not_null(s_73));
        {
          ATerm w_73 = NULL;
          w_73 = t;
          if(((v_73 != NULL) && (v_73 != w_73)))
            _fail(w_73);
          else
            v_73 = w_73;
          t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(v_73));
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm i_74 = NULL;
  i_74 = t;
  t = SSL_is_string(not_null(i_74));
  return(t);
}
ATerm _2 (ATerm t, ATerm d_62 (ATerm), ATerm e_62 (ATerm))
{
  ATerm r_74 = NULL,s_74 = NULL,t_74 = NULL;
  r_74 = t;
  q_74 :
  if(match_cons(r_74, sym__2))
    {
      s_74 = ATgetArgument(r_74, 0);
      t_74 = ATgetArgument(r_74, 1);
      {
        ATerm x_74 = NULL,z_74 = NULL;
        ATerm y_74 = NULL;
        t = SSLgetAnnotations(not_null(r_74));
        {
          y_74 = t;
          if(((x_74 != NULL) && (x_74 != y_74)))
            _fail(y_74);
          else
            x_74 = y_74;
        }
        {
          t = not_null(s_74);
          {
            ATerm b_75 = NULL;
            t = d_62(t);
            {
              z_74 = t;
              {
                t = not_null(t_74);
                {
                  ATerm d_75 = NULL;
                  t = e_62(t);
                  {
                    b_75 = t;
                    {
                      ATerm e_75 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(z_74), not_null(b_75)), not_null(x_74));
                      {
                        e_75 = t;
                        if(((d_75 != NULL) && (d_75 != e_75)))
                          _fail(e_75);
                        else
                          d_75 = e_75;
                      }
                      t = not_null(d_75);
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
ATerm stdin_stream_0 (ATerm t)
{
  ATerm l_75 = NULL;
  t = SSL_stdin_stream();
  {
    ATerm m_75 = NULL;
    m_75 = t;
    if(((l_75 != NULL) && (l_75 != m_75)))
      _fail(m_75);
    else
      l_75 = m_75;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(l_75));
  }
  return(t);
}
ATerm stdout_stream_0 (ATerm t)
{
  ATerm p_75 = NULL;
  t = SSL_stdout_stream();
  {
    ATerm q_75 = NULL;
    q_75 = t;
    if(((p_75 != NULL) && (p_75 != q_75)))
      _fail(q_75);
    else
      p_75 = q_75;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(p_75));
  }
  return(t);
}
ATerm stderr_stream_0 (ATerm t)
{
  ATerm t_75 = NULL;
  t = SSL_stderr_stream();
  {
    ATerm u_75 = NULL;
    u_75 = t;
    if(((t_75 != NULL) && (t_75 != u_75)))
      _fail(u_75);
    else
      t_75 = u_75;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(t_75));
  }
  return(t);
}
ATerm stdio_stream_0 (ATerm t)
{
  ATerm a_76 = NULL;
  a_76 = t;
  z_75 :
  if(match_cons(a_76, sym_stderr_0))
    {
      t = stderr_stream_0(t);
    }
  else
    {
      if(match_cons(a_76, sym_stdout_0))
        {
          t = stdout_stream_0(t);
        }
      else
        {
          if(match_cons(a_76, sym_stdin_0))
            {
              t = stdin_stream_0(t);
            }
          else
            {
              _fail(t);
            }
        }
    }
  return(t);
}
ATerm Fst_0 (ATerm t)
{
  ATerm k_76 = NULL;
  ATerm m_76 = NULL,n_76 = NULL;
  k_76 = t;
  {
    ATerm o_76 = NULL;
    ATerm q_76 = NULL,r_76 = NULL,s_76 = NULL,t_76 = NULL,u_76 = NULL;
    t = not_null(k_76);
    {
      o_76 = t;
      {
        t = SSL_explode_term(not_null(o_76));
        {
          q_76 = t;
          h_76 :
          if(match_cons(q_76, sym__2))
            {
              r_76 = ATgetArgument(q_76, 0);
              s_76 = ATgetArgument(q_76, 1);
              i_76 :
              if(match_string(r_76, ""))
                {
                  j_76 :
                  if(((ATgetType(s_76) == AT_LIST) && !(ATisEmpty(s_76))))
                    {
                      t_76 = ATgetFirst((ATermList) s_76);
                      u_76 = (ATerm) ATgetNext((ATermList) s_76);
                      {
                        if(((n_76 != NULL) && (n_76 != t_76)))
                          _fail(t_76);
                        else
                          n_76 = t_76;
                        if(((m_76 != NULL) && (m_76 != u_76)))
                          _fail(u_76);
                        else
                          m_76 = u_76;
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
    t = not_null(n_76);
  }
  return(t);
}
ATerm open_stream_0 (ATerm t)
{
  ATerm c_77 = NULL,d_77 = NULL,e_77 = NULL;
  c_77 = t;
  b_77 :
  if(match_cons(c_77, sym__2))
    {
      d_77 = ATgetArgument(c_77, 0);
      e_77 = ATgetArgument(c_77, 1);
      {
        ATerm i_16 = t;
        int j_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Fst_0(t);
            t = stdio_stream_0(t);
            ;
            LocalPopChoice(j_16);
          }
        else
          {
            t = i_16;
            {
              ATerm k_16 = t;
              int l_16 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm c_4 (ATerm t)
                  {
                    ATerm f_77 = NULL,g_77 = NULL;
                    f_77 = t;
                    a_77 :
                    if(match_cons(f_77, sym_Path_1))
                      {
                        g_77 = ATgetArgument(f_77, 0);
                        t = not_null(g_77);
                      }
                    else
                      {
                        _fail(t);
                      }
                    return(t);
                  }
                  t = _2(t, c_4, _id);
                  t = fopen_0(t);
                  ;
                  LocalPopChoice(l_16);
                }
              else
                {
                  t = k_16;
                  {
                    t = _2(t, is_string_0, _id);
                    t = fopen_0(t);
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
ATerm ReadFromFile_0 (ATerm t)
{
  ATerm o_77 = NULL;
  ATerm m_16 = t;
  int n_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_77 = NULL;
      ATerm n_77 = NULL;
      n_77 = t;
      if(((m_77 != NULL) && (m_77 != n_77)))
        _fail(n_77);
      else
        m_77 = n_77;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(m_77), term_o_16);
        t = open_stream_0(t);
      }
      ;
      LocalPopChoice(n_16);
    }
  else
    {
      t = m_16;
      {
        ATerm d_4 (ATerm t)
        {
          t = term_p_16;
          return(t);
        }
        t = debug_1(t, d_4);
        _fail(t);
      }
    }
  {
    ATerm q_16;
    q_16 = t;
    {
      ATerm p_77 = NULL;
      t = read_from_stream_0(t);
      {
        p_77 = t;
        if(((o_77 != NULL) && (o_77 != p_77)))
          _fail(p_77);
        else
          o_77 = p_77;
      }
    }
    t = q_16;
    {
      t = fclose_0(t);
      t = not_null(o_77);
    }
  }
  return(t);
}
ATerm split_2 (ATerm t, ATerm j_87 (ATerm), ATerm k_87 (ATerm))
{
  ATerm u_77 = NULL,w_77 = NULL;
  ATerm r_16;
  r_16 = t;
  {
    ATerm v_77 = NULL;
    t = j_87(t);
    {
      v_77 = t;
      if(((u_77 != NULL) && (u_77 != v_77)))
        _fail(v_77);
      else
        u_77 = v_77;
    }
  }
  t = r_16;
  {
    ATerm x_77 = NULL;
    t = k_87(t);
    {
      x_77 = t;
      if(((w_77 != NULL) && (w_77 != x_77)))
        _fail(x_77);
      else
        w_77 = x_77;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(u_77), not_null(w_77));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm d_78 = NULL;
  ATerm s_16;
  s_16 = t;
  {
    ATerm t_16 = t;
    int u_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_4 (ATerm t)
        {
          ATerm e_78 = NULL,f_78 = NULL;
          e_78 = t;
          b_78 :
          if(match_cons(e_78, sym_Input_1))
            {
              f_78 = ATgetArgument(e_78, 0);
              if(((d_78 != NULL) && (d_78 != f_78)))
                _fail(f_78);
              else
                d_78 = f_78;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, e_4);
        ;
        LocalPopChoice(u_16);
      }
    else
      {
        t = t_16;
        {
          ATerm g_78 = NULL;
          t = term_v_16;
          {
            g_78 = t;
            if(((d_78 != NULL) && (d_78 != g_78)))
              _fail(g_78);
            else
              d_78 = g_78;
          }
        }
      }
  }
  t = s_16;
  {
    ATerm f_4 (ATerm t)
    {
      t = not_null(d_78);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, f_4);
  }
  return(t);
}
ATerm version_option_0 (ATerm t)
{
  ATerm g_4 (ATerm t)
  {
    ATerm k_78 = NULL;
    k_78 = t;
    j_78 :
    if(!(match_string(k_78, "-v")))
      {
        if(!(match_string(k_78, "--version")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm h_4 (ATerm t)
  {
    t = term_x_16;
    t = set_config_0(t);
    t = term_y_16;
    return(t);
  }
  ATerm i_4 (ATerm t)
  {
    t = term_z_16;
    return(t);
  }
  t = Option_3(t, g_4, h_4, i_4);
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm j_4 (ATerm t)
  {
    ATerm n_78 = NULL;
    n_78 = t;
    l_78 :
    if(!(match_string(n_78, "-k")))
      {
        if(!(match_string(n_78, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm m_4 (ATerm t)
  {
    ATerm a_17;
    a_17 = t;
    {
      ATerm o_78 = NULL;
      ATerm p_78 = NULL;
      t = string_to_int_0(t);
      {
        p_78 = t;
        if(((o_78 != NULL) && (o_78 != p_78)))
          _fail(p_78);
        else
          o_78 = p_78;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_b_17, not_null(o_78));
        t = set_config_0(t);
      }
    }
    t = a_17;
    return(t);
  }
  ATerm n_4 (ATerm t)
  {
    t = term_c_17;
    return(t);
  }
  t = ArgOption_3(t, j_4, m_4, n_4);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm s_78 = NULL;
  s_78 = t;
  t = SSL_string_to_int(not_null(s_78));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm d_17 = t;
  int e_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_4 (ATerm t)
      {
        ATerm a_79 = NULL;
        a_79 = t;
        v_78 :
        if(!(match_string(a_79, "-S")))
          {
            if(!(match_string(a_79, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm p_4 (ATerm t)
      {
        t = term_f_17;
        t = set_config_0(t);
        t = term_g_17;
        return(t);
      }
      ATerm q_4 (ATerm t)
      {
        t = term_h_17;
        return(t);
      }
      t = Option_3(t, o_4, p_4, q_4);
      ;
      LocalPopChoice(e_17);
    }
  else
    {
      t = d_17;
      {
        ATerm i_17 = t;
        int j_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_4 (ATerm t)
            {
              ATerm b_79 = NULL;
              b_79 = t;
              w_78 :
              if(!(match_string(b_79, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm s_4 (ATerm t)
            {
              ATerm e_79 = NULL;
              ATerm k_17;
              k_17 = t;
              {
                ATerm c_79 = NULL;
                ATerm d_79 = NULL;
                t = string_to_int_0(t);
                {
                  d_79 = t;
                  if(((c_79 != NULL) && (c_79 != d_79)))
                    _fail(d_79);
                  else
                    c_79 = d_79;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_s_15, not_null(c_79));
                  t = set_config_0(t);
                }
              }
              t = k_17;
              {
                ATerm f_79 = NULL;
                f_79 = t;
                if(((e_79 != NULL) && (e_79 != f_79)))
                  _fail(f_79);
                else
                  e_79 = f_79;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(e_79));
              }
              return(t);
            }
            ATerm t_4 (ATerm t)
            {
              t = term_l_17;
              return(t);
            }
            t = ArgOption_3(t, r_4, s_4, t_4);
            ;
            LocalPopChoice(j_17);
          }
        else
          {
            t = i_17;
            {
              ATerm u_4 (ATerm t)
              {
                ATerm g_79 = NULL;
                g_79 = t;
                z_78 :
                if(!(match_string(g_79, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm v_4 (ATerm t)
              {
                t = term_n_17;
                t = set_config_0(t);
                t = term_o_17;
                return(t);
              }
              ATerm w_4 (ATerm t)
              {
                t = term_p_17;
                return(t);
              }
              t = Option_3(t, u_4, v_4, w_4);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0 (ATerm t)
{
  ATerm q_17 = t;
  int r_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      ;
      LocalPopChoice(r_17);
    }
  else
    {
      t = q_17;
      {
        ATerm s_17 = t;
        int t_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = keep_option_0(t);
            ;
            LocalPopChoice(t_17);
          }
        else
          {
            t = s_17;
            t = version_option_0(t);
          }
      }
    }
  return(t);
}
ATerm output_option_0 (ATerm t)
{
  ATerm z_4 (ATerm t)
  {
    ATerm m_79 = NULL;
    m_79 = t;
    j_79 :
    if(!(match_string(m_79, "-o")))
      {
        if(!(match_string(m_79, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm a_5 (ATerm t)
  {
    ATerm p_79 = NULL;
    ATerm u_17;
    u_17 = t;
    {
      ATerm n_79 = NULL;
      ATerm o_79 = NULL;
      o_79 = t;
      if(((n_79 != NULL) && (n_79 != o_79)))
        _fail(o_79);
      else
        n_79 = o_79;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_v_17, not_null(n_79));
        t = set_config_0(t);
      }
    }
    t = u_17;
    {
      ATerm q_79 = NULL;
      q_79 = t;
      if(((p_79 != NULL) && (p_79 != q_79)))
        _fail(q_79);
      else
        p_79 = q_79;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(p_79));
    }
    return(t);
  }
  ATerm b_5 (ATerm t)
  {
    t = term_w_17;
    return(t);
  }
  t = ArgOption_3(t, z_4, a_5, b_5);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm x_17 = t;
  int y_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      ;
      LocalPopChoice(y_17);
    }
  else
    {
      t = x_17;
      {
        ATerm c_5 (ATerm t)
        {
          ATerm z_79 = NULL;
          z_79 = t;
          w_79 :
          if(!(match_string(z_79, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm g_5 (ATerm t)
        {
          t = term_a_18;
          t = set_config_0(t);
          t = term_b_18;
          return(t);
        }
        ATerm h_5 (ATerm t)
        {
          t = term_c_18;
          return(t);
        }
        t = Option_3(t, c_5, g_5, h_5);
      }
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm f_80 = NULL,i_80 = NULL,j_80 = NULL,k_80 = NULL,l_80 = NULL;
  f_80 = t;
  d_80 :
  if(match_string(f_80, "register-usage-info"))
    {
      t = register_usage_1(t, l_0);
    }
  else
    {
      if(((ATgetType(f_80) == AT_LIST) && !(ATisEmpty(f_80))))
        {
          i_80 = ATgetFirst((ATermList) f_80);
          j_80 = (ATerm) ATgetNext((ATermList) f_80);
          e_80 :
          if(((ATgetType(j_80) == AT_LIST) && !(ATisEmpty(j_80))))
            {
              k_80 = ATgetFirst((ATermList) j_80);
              l_80 = (ATerm) ATgetNext((ATermList) j_80);
              {
                ATerm t_80 = NULL;
                ATerm d_18;
                d_18 = t;
                {
                  t = not_null(i_80);
                  t = j_0(t);
                }
                t = d_18;
                {
                  ATerm u_80 = NULL;
                  t = not_null(k_80);
                  {
                    t = k_0(t);
                    {
                      u_80 = t;
                      if(((t_80 != NULL) && (t_80 != u_80)))
                        _fail(u_80);
                      else
                        t_80 = u_80;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(l_80)), not_null(t_80));
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
  ATerm i_5 (ATerm t)
  {
    ATerm d_81 = NULL;
    d_81 = t;
    a_81 :
    if(!(match_string(d_81, "-i")))
      {
        if(!(match_string(d_81, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm j_5 (ATerm t)
  {
    ATerm i_81 = NULL;
    ATerm e_18;
    e_18 = t;
    {
      ATerm g_81 = NULL;
      ATerm h_81 = NULL;
      h_81 = t;
      if(((g_81 != NULL) && (g_81 != h_81)))
        _fail(h_81);
      else
        g_81 = h_81;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_f_18, not_null(g_81));
        t = set_config_0(t);
      }
    }
    t = e_18;
    {
      ATerm j_81 = NULL;
      j_81 = t;
      if(((i_81 != NULL) && (i_81 != j_81)))
        _fail(j_81);
      else
        i_81 = j_81;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(i_81));
    }
    return(t);
  }
  ATerm m_5 (ATerm t)
  {
    t = term_g_18;
    return(t);
  }
  t = ArgOption_3(t, i_5, j_5, m_5);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm h_18 = t;
  int i_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      ;
      LocalPopChoice(i_18);
    }
  else
    {
      t = h_18;
      {
        ATerm j_18 = t;
        int k_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0(t);
            ;
            LocalPopChoice(k_18);
          }
        else
          {
            t = j_18;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  ATerm n_81 = NULL;
  t = report_run_time_0(t);
  {
    ATerm o_81 = NULL;
    t = term_h_12;
    {
      t = whoami_0(t);
      {
        o_81 = t;
        if(((n_81 != NULL) && (n_81 != o_81)))
          _fail(o_81);
        else
          n_81 = o_81;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_x_14, (ATerm) ATinsert(ATinsert(ATempty, term_l_18), not_null(n_81)));
      {
        t = printnl_0(t);
        {
          t = term_w_11;
          t = exit_0(t);
        }
      }
    }
  }
  return(t);
}
ATerm whoami_0 (ATerm t)
{
  t = term_m_18;
  t = get_config_0(t);
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm r_81 = NULL;
  r_81 = t;
  t = SSL_TicksToSeconds(not_null(r_81));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm w_81 = NULL,x_81 = NULL,y_81 = NULL;
  w_81 = t;
  v_81 :
  if(match_cons(w_81, sym__2))
    {
      x_81 = ATgetArgument(w_81, 0);
      y_81 = ATgetArgument(w_81, 1);
      {
        ATerm n_18 = t;
        int o_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(x_81), not_null(y_81));
            ;
            LocalPopChoice(o_18);
          }
        else
          {
            t = n_18;
            t = SSL_addr(not_null(x_81), not_null(y_81));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm u_85 (ATerm), ATerm v_85 (ATerm))
{
  ATerm p_18 = t;
  int q_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = u_85(t);
      ;
      LocalPopChoice(q_18);
    }
  else
    {
      t = p_18;
      {
        ATerm f_82 = NULL,g_82 = NULL,h_82 = NULL;
        f_82 = t;
        e_82 :
        if(((ATgetType(f_82) == AT_LIST) && !(ATisEmpty(f_82))))
          {
            g_82 = ATgetFirst((ATermList) f_82);
            h_82 = (ATerm) ATgetNext((ATermList) f_82);
            {
              ATerm k_82 = NULL;
              ATerm l_82 = NULL;
              t = not_null(h_82);
              {
                t = foldr_2(t, u_85, v_85);
                {
                  l_82 = t;
                  if(((k_82 != NULL) && (k_82 != l_82)))
                    _fail(l_82);
                  else
                    k_82 = l_82;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(g_82), not_null(k_82));
                t = v_85(t);
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
ATerm crush_2 (ATerm t, ATerm n_89 (ATerm), ATerm o_89 (ATerm))
{
  ATerm s_82 = NULL;
  ATerm u_82 = NULL;
  s_82 = t;
  {
    ATerm v_82 = NULL;
    ATerm x_82 = NULL,y_82 = NULL,z_82 = NULL;
    t = not_null(s_82);
    {
      v_82 = t;
      {
        t = SSL_explode_term(not_null(v_82));
        {
          x_82 = t;
          r_82 :
          if(match_cons(x_82, sym__2))
            {
              y_82 = ATgetArgument(x_82, 0);
              z_82 = ATgetArgument(x_82, 1);
              if(((u_82 != NULL) && (u_82 != z_82)))
                _fail(z_82);
              else
                u_82 = z_82;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(u_82);
      t = foldr_2(t, n_89, o_89);
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
    ATerm n_5 (ATerm t)
    {
      t = term_o_12;
      return(t);
    }
    t = crush_2(t, n_5, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm f_83 = NULL,g_83 = NULL,h_83 = NULL;
  f_83 = t;
  e_83 :
  if(match_cons(f_83, sym__2))
    {
      g_83 = ATgetArgument(f_83, 0);
      h_83 = ATgetArgument(f_83, 1);
      {
        ATerm r_18;
        r_18 = t;
        {
          ATerm s_18 = t;
          int t_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(g_83), not_null(h_83));
              ;
              LocalPopChoice(t_18);
            }
          else
            {
              t = s_18;
              t = SSL_gtr(not_null(g_83), not_null(h_83));
            }
        }
        t = r_18;
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
  ATerm n_83 = NULL;
  ATerm u_18 = t;
  int v_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_83 = NULL,p_83 = NULL,q_83 = NULL;
      o_83 = t;
      m_83 :
      if(match_cons(o_83, sym__2))
        {
          p_83 = ATgetArgument(o_83, 0);
          q_83 = ATgetArgument(o_83, 1);
          {
            if(((n_83 != NULL) && (n_83 != p_83)))
              _fail(p_83);
            else
              n_83 = p_83;
            if(((n_83 != NULL) && (n_83 != q_83)))
              _fail(q_83);
            else
              n_83 = q_83;
          }
        }
      else
        {
          _fail(t);
        }
      ;
      LocalPopChoice(v_18);
    }
  else
    {
      t = u_18;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm h_93 (ATerm))
{
  ATerm p_5 (ATerm t)
  {
    ATerm w_18;
    w_18 = t;
    {
      ATerm t_83 = NULL;
      ATerm u_83 = NULL;
      t = term_s_15;
      {
        t = get_config_0(t);
        {
          u_83 = t;
          if(((t_83 != NULL) && (t_83 != u_83)))
            _fail(u_83);
          else
            t_83 = u_83;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(t_83), term_w_11);
        t = geq_0(t);
      }
    }
    t = w_18;
    t = h_93(t);
    return(t);
  }
  t = try_1(t, p_5);
  return(t);
}
ATerm report_run_time_0 (ATerm t)
{
  ATerm q_5 (ATerm t)
  {
    ATerm y_83 = NULL,a_84 = NULL;
    ATerm x_18;
    x_18 = t;
    {
      ATerm z_83 = NULL;
      t = run_time_0(t);
      {
        z_83 = t;
        if(((y_83 != NULL) && (y_83 != z_83)))
          _fail(z_83);
        else
          y_83 = z_83;
      }
    }
    t = x_18;
    {
      ATerm b_84 = NULL;
      t = term_h_12;
      {
        t = whoami_0(t);
        {
          b_84 = t;
          if(((a_84 != NULL) && (a_84 != b_84)))
            _fail(b_84);
          else
            a_84 = b_84;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_x_14, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_z_18), not_null(y_83)), term_y_18), not_null(a_84)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, q_5);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  t = report_run_time_0(t);
  {
    t = term_o_12;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm i_84 = NULL;
  i_84 = t;
  h_84 :
  if(match_cons(i_84, sym_Version_0))
    {
      ATerm k_84 = NULL,m_84 = NULL;
      ATerm a_19;
      a_19 = t;
      {
        ATerm l_84 = NULL;
        t = SSLgetAnnotations(not_null(i_84));
        {
          l_84 = t;
          if(((k_84 != NULL) && (k_84 != l_84)))
            _fail(l_84);
          else
            k_84 = l_84;
        }
      }
      t = a_19;
      {
        ATerm n_84 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(k_84));
        {
          n_84 = t;
          if(((m_84 != NULL) && (m_84 != n_84)))
            _fail(n_84);
          else
            m_84 = n_84;
        }
        t = not_null(m_84);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm e_96 (ATerm))
{
  ATerm b_19 = t;
  int c_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_d_19;
      t = get_config_0(t);
      ;
      LocalPopChoice(c_19);
    }
  else
    {
      t = b_19;
      {
        ATerm r_5 (ATerm t)
        {
          ATerm e_19 = t;
          int f_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Help_0(t);
              ;
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
                    t = Undefined_1(t, _id);
                    ;
                    LocalPopChoice(h_19);
                  }
                else
                  {
                    t = g_19;
                    t = Version_0(t);
                  }
              }
            }
          return(t);
        }
        t = option_defined_1(t, r_5);
      }
    }
  t = e_96(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm s_84 = NULL;
  s_84 = t;
  t = SSL_table_create(not_null(s_84));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm x_84 = NULL;
  x_84 = t;
  {
    ATerm i_19;
    i_19 = t;
    {
      t = term_j_19;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_j_19, term_k_19, not_null(x_84));
          t = table_put_0(t);
        }
      }
    }
    t = i_19;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm b_85 = NULL;
  b_85 = t;
  t = SSL_table_destroy(not_null(b_85));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm f_85 = NULL;
  f_85 = t;
  t = SSL_exit(not_null(f_85));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm j_85 = NULL,k_85 = NULL,l_85 = NULL;
  j_85 = t;
  i_85 :
  if(((ATgetType(j_85) == AT_LIST) && ATisEmpty(j_85)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(j_85) == AT_LIST) && !(ATisEmpty(j_85))))
        {
          k_85 = ATgetFirst((ATermList) j_85);
          l_85 = (ATerm) ATgetNext((ATermList) j_85);
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
  ATerm l_19;
  l_19 = t;
  {
    ATerm o_85 = NULL;
    ATerm r_85 = NULL;
    ATerm m_19 = t;
    int n_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        ;
        LocalPopChoice(n_19);
      }
    else
      {
        t = m_19;
        {
          ATerm p_85 = NULL;
          ATerm q_85 = NULL;
          q_85 = t;
          if(((p_85 != NULL) && (p_85 != q_85)))
            _fail(q_85);
          else
            p_85 = q_85;
          t = (ATerm) ATinsert(ATempty, not_null(p_85));
        }
      }
    {
      r_85 = t;
      if(((o_85 != NULL) && (o_85 != r_85)))
        _fail(r_85);
      else
        o_85 = r_85;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_z_15, not_null(o_85));
      t = printnl_0(t);
    }
  }
  t = l_19;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm f_98 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm x_79 (ATerm))
{
  ATerm z_85 (ATerm t)
  {
    ATerm o_19 = t;
    int p_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        ;
        LocalPopChoice(p_19);
      }
    else
      {
        t = o_19;
        t = Cons_2(t, x_79, z_85);
      }
    return(t);
  }
  t = z_85(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm g_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm g_86 = NULL,h_86 = NULL,i_86 = NULL;
  i_86 = t;
  f_86 :
  if(((ATgetType(i_86) == AT_LIST) && !(ATisEmpty(i_86))))
    {
      g_86 = ATgetFirst((ATermList) i_86);
      h_86 = (ATerm) ATgetNext((ATermList) i_86);
      {
        ATerm l_86 = NULL;
        t = not_null(h_86);
        {
          ATerm q_19;
          q_19 = t;
          {
            ATerm m_86 = NULL,o_86 = NULL,q_86 = NULL;
            ATerm r_19;
            r_19 = t;
            {
              ATerm n_86 = NULL;
              t = i_0(t);
              {
                n_86 = t;
                if(((m_86 != NULL) && (m_86 != n_86)))
                  _fail(n_86);
                else
                  m_86 = n_86;
              }
            }
            t = r_19;
            {
              ATerm p_86 = NULL;
              t = not_null(g_86);
              {
                t = g_0(t);
                {
                  p_86 = t;
                  if(((o_86 != NULL) && (o_86 != p_86)))
                    _fail(p_86);
                  else
                    o_86 = p_86;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(m_86)), not_null(o_86));
                {
                  q_86 = t;
                  if(((l_86 != NULL) && (l_86 != q_86)))
                    _fail(q_86);
                  else
                    l_86 = q_86;
                }
              }
            }
          }
          t = q_19;
          {
            ATerm s_5 (ATerm t)
            {
              t = not_null(l_86);
              return(t);
            }
            t = reverse_acc_2(t, g_0, s_5);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(i_86) == AT_LIST) && ATisEmpty(i_86)))
        {
          {
            t = term_h_12;
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
  ATerm t_5 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, t_5);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm e_98 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm s_71 (ATerm))
{
  ATerm c_87 = NULL,d_87 = NULL;
  c_87 = t;
  b_87 :
  if(match_cons(c_87, sym_Program_1))
    {
      d_87 = ATgetArgument(c_87, 0);
      {
        ATerm g_87 = NULL,i_87 = NULL;
        ATerm h_87 = NULL;
        t = SSLgetAnnotations(not_null(c_87));
        {
          h_87 = t;
          if(((g_87 != NULL) && (g_87 != h_87)))
            _fail(h_87);
          else
            g_87 = h_87;
        }
        {
          t = not_null(d_87);
          {
            ATerm m_87 = NULL;
            t = s_71(t);
            {
              i_87 = t;
              {
                ATerm n_87 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(i_87)), not_null(g_87));
                {
                  n_87 = t;
                  if(((m_87 != NULL) && (m_87 != n_87)))
                    _fail(n_87);
                  else
                    m_87 = n_87;
                }
                t = not_null(m_87);
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
  ATerm w_87 = NULL;
  ATerm s_19 = t;
  int t_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_87 = NULL;
      t = term_m_18;
      {
        t = get_config_0(t);
        {
          x_87 = t;
          if(((w_87 != NULL) && (w_87 != x_87)))
            _fail(x_87);
          else
            w_87 = x_87;
        }
      }
      ;
      LocalPopChoice(t_19);
    }
  else
    {
      t = s_19;
      {
        ATerm u_5 (ATerm t)
        {
          ATerm v_5 (ATerm t)
          {
            ATerm y_87 = NULL;
            y_87 = t;
            if(((w_87 != NULL) && (w_87 != y_87)))
              _fail(y_87);
            else
              w_87 = y_87;
            return(t);
          }
          t = Program_1(t, v_5);
          return(t);
        }
        t = option_defined_1(t, u_5);
      }
    }
  {
    ATerm w_5 (ATerm t)
    {
      ATerm x_5 (ATerm t)
      {
        t = not_null(w_87);
        return(t);
      }
      t = short_description_1(t, x_5);
      t = echo_0(t);
      return(t);
    }
    t = try_1(t, w_5);
    {
      t = term_u_19;
      {
        t = echo_0(t);
        {
          t = term_x_19;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm y_5 (ATerm t)
                {
                  ATerm z_87 = NULL;
                  ATerm a_88 = NULL;
                  a_88 = t;
                  if(((z_87 != NULL) && (z_87 != a_88)))
                    _fail(a_88);
                  else
                    z_87 = a_88;
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(z_87)), term_y_19);
                    t = echo_0(t);
                  }
                  return(t);
                }
                t = map_1(t, y_5);
                {
                  ATerm z_5 (ATerm t)
                  {
                    ATerm b_88 = NULL;
                    ATerm c_88 = NULL;
                    ATerm a_6 (ATerm t)
                    {
                      t = not_null(w_87);
                      return(t);
                    }
                    t = long_description_1(t, a_6);
                    {
                      c_88 = t;
                      if(((b_88 != NULL) && (b_88 != c_88)))
                        _fail(c_88);
                      else
                        b_88 = c_88;
                    }
                    {
                      t = (ATerm) ATinsert(CheckATermList(not_null(b_88)), term_i_11);
                      t = echo_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, z_5);
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
ATerm Undefined_1 (ATerm t, ATerm t_71 (ATerm))
{
  ATerm m_88 = NULL,n_88 = NULL;
  m_88 = t;
  l_88 :
  if(match_cons(m_88, sym_Undefined_1))
    {
      n_88 = ATgetArgument(m_88, 0);
      {
        ATerm q_88 = NULL,s_88 = NULL;
        ATerm r_88 = NULL;
        t = SSLgetAnnotations(not_null(m_88));
        {
          r_88 = t;
          if(((q_88 != NULL) && (q_88 != r_88)))
            _fail(r_88);
          else
            q_88 = r_88;
        }
        {
          t = not_null(n_88);
          {
            ATerm u_88 = NULL;
            t = t_71(t);
            {
              s_88 = t;
              {
                ATerm v_88 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(s_88)), not_null(q_88));
                {
                  v_88 = t;
                  if(((u_88 != NULL) && (u_88 != v_88)))
                    _fail(v_88);
                  else
                    u_88 = v_88;
                }
                t = not_null(u_88);
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
ATerm fetch_1 (ATerm t, ATerm g_80 (ATerm))
{
  ATerm a_89 (ATerm t)
  {
    ATerm z_19 = t;
    int a_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, g_80, _id);
        ;
        LocalPopChoice(a_20);
      }
    else
      {
        t = z_19;
        t = Cons_2(t, _id, a_89);
      }
    return(t);
  }
  t = a_89(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm e_97 (ATerm))
{
  t = fetch_1(t, e_97);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm f_89 = NULL;
  f_89 = t;
  e_89 :
  if(match_cons(f_89, sym_Help_0))
    {
      ATerm i_89 = NULL,k_89 = NULL;
      ATerm b_20;
      b_20 = t;
      {
        ATerm j_89 = NULL;
        t = SSLgetAnnotations(not_null(f_89));
        {
          j_89 = t;
          if(((i_89 != NULL) && (i_89 != j_89)))
            _fail(j_89);
          else
            i_89 = j_89;
        }
      }
      t = b_20;
      {
        ATerm l_89 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(i_89));
        {
          l_89 = t;
          if(((k_89 != NULL) && (k_89 != l_89)))
            _fail(l_89);
          else
            k_89 = l_89;
        }
        t = not_null(k_89);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm m_72 (ATerm))
{
  ATerm c_20 = t;
  int d_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = m_72(t);
      ;
      LocalPopChoice(d_20);
    }
  else
    {
      t = c_20;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm w_89 = NULL,x_89 = NULL,y_89 = NULL;
  w_89 = t;
  v_89 :
  if(match_cons(w_89, sym__2))
    {
      x_89 = ATgetArgument(w_89, 0);
      y_89 = ATgetArgument(w_89, 1);
      t = SSL_table_get(not_null(x_89), not_null(y_89));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm f_90 = NULL,g_90 = NULL,h_90 = NULL,i_90 = NULL;
  f_90 = t;
  e_90 :
  if(match_cons(f_90, sym__3))
    {
      g_90 = ATgetArgument(f_90, 0);
      h_90 = ATgetArgument(f_90, 1);
      i_90 = ATgetArgument(f_90, 2);
      {
        ATerm e_20;
        e_20 = t;
        {
          ATerm m_90 = NULL;
          ATerm n_90 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(g_90), not_null(h_90));
          {
            ATerm f_20 = t;
            int g_20 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                ;
                LocalPopChoice(g_20);
              }
            else
              {
                t = f_20;
                t = (ATerm) ATempty;
              }
            {
              n_90 = t;
              if(((m_90 != NULL) && (m_90 != n_90)))
                _fail(n_90);
              else
                m_90 = n_90;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(g_90), not_null(h_90), (ATerm) ATinsert(CheckATermList(not_null(m_90)), not_null(i_90)));
            t = table_put_0(t);
          }
        }
        t = e_20;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm j_98 (ATerm))
{
  ATerm r_90 = NULL;
  ATerm s_90 = NULL;
  t = term_h_12;
  {
    t = j_98(t);
    {
      s_90 = t;
      if(((r_90 != NULL) && (r_90 != s_90)))
        _fail(s_90);
      else
        r_90 = s_90;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_v_19, term_w_19, not_null(r_90));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm))
{
  ATerm y_90 = NULL,z_90 = NULL,a_91 = NULL;
  y_90 = t;
  x_90 :
  if(match_string(y_90, "register-usage-info"))
    {
      t = register_usage_1(t, d_0);
    }
  else
    {
      if(((ATgetType(y_90) == AT_LIST) && !(ATisEmpty(y_90))))
        {
          z_90 = ATgetFirst((ATermList) y_90);
          a_91 = (ATerm) ATgetNext((ATermList) y_90);
          {
            ATerm d_91 = NULL;
            ATerm h_20;
            h_20 = t;
            {
              t = not_null(z_90);
              t = a_0(t);
            }
            t = h_20;
            {
              ATerm e_91 = NULL;
              t = term_h_12;
              {
                t = b_0(t);
                {
                  e_91 = t;
                  if(((d_91 != NULL) && (d_91 != e_91)))
                    _fail(e_91);
                  else
                    d_91 = e_91;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(a_91)), not_null(d_91));
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
  ATerm b_6 (ATerm t)
  {
    ATerm j_91 = NULL;
    j_91 = t;
    i_91 :
    if(!(match_string(j_91, "--help")))
      {
        if(!(match_string(j_91, "-h")))
          {
            if(!(match_string(j_91, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm c_6 (ATerm t)
  {
    t = term_i_20;
    {
      t = set_config_0(t);
      t = term_j_20;
    }
    return(t);
  }
  ATerm d_6 (ATerm t)
  {
    t = term_k_20;
    return(t);
  }
  t = Option_3(t, b_6, c_6, d_6);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm m_91 = NULL,n_91 = NULL,o_91 = NULL;
  m_91 = t;
  l_91 :
  if(((ATgetType(m_91) == AT_LIST) && !(ATisEmpty(m_91))))
    {
      n_91 = ATgetFirst((ATermList) m_91);
      o_91 = (ATerm) ATgetNext((ATermList) m_91);
      t = (ATerm) ATinsert(CheckATermList(not_null(o_91)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(n_91)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm m_63 (ATerm), ATerm n_63 (ATerm))
{
  ATerm a_92 = NULL,b_92 = NULL,c_92 = NULL;
  a_92 = t;
  z_91 :
  if(((ATgetType(a_92) == AT_LIST) && !(ATisEmpty(a_92))))
    {
      b_92 = ATgetFirst((ATermList) a_92);
      c_92 = (ATerm) ATgetNext((ATermList) a_92);
      {
        ATerm h_92 = NULL,j_92 = NULL;
        ATerm i_92 = NULL;
        t = SSLgetAnnotations(not_null(a_92));
        {
          i_92 = t;
          if(((h_92 != NULL) && (h_92 != i_92)))
            _fail(i_92);
          else
            h_92 = i_92;
        }
        {
          t = not_null(b_92);
          {
            ATerm l_92 = NULL;
            t = m_63(t);
            {
              j_92 = t;
              {
                t = not_null(c_92);
                {
                  ATerm n_92 = NULL;
                  t = n_63(t);
                  {
                    l_92 = t;
                    {
                      ATerm o_92 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(l_92)), not_null(j_92)), not_null(h_92));
                      {
                        o_92 = t;
                        if(((n_92 != NULL) && (n_92 != o_92)))
                          _fail(o_92);
                        else
                          n_92 = o_92;
                      }
                      t = not_null(n_92);
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
  ATerm y_92 = NULL;
  y_92 = t;
  x_92 :
  if(((ATgetType(y_92) == AT_LIST) && ATisEmpty(y_92)))
    {
      {
        ATerm a_93 = NULL,c_93 = NULL;
        ATerm l_20;
        l_20 = t;
        {
          ATerm b_93 = NULL;
          t = SSLgetAnnotations(not_null(y_92));
          {
            b_93 = t;
            if(((a_93 != NULL) && (a_93 != b_93)))
              _fail(b_93);
            else
              a_93 = b_93;
          }
        }
        t = l_20;
        {
          ATerm d_93 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(a_93));
          {
            d_93 = t;
            if(((c_93 != NULL) && (c_93 != d_93)))
              _fail(d_93);
            else
              c_93 = d_93;
          }
          t = not_null(c_93);
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
  ATerm l_93 = NULL,m_93 = NULL,n_93 = NULL;
  l_93 = t;
  k_93 :
  if(match_cons(l_93, sym__2))
    {
      m_93 = ATgetArgument(l_93, 0);
      n_93 = ATgetArgument(l_93, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_p_15, not_null(m_93), not_null(n_93));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm h_98 (ATerm))
{
  ATerm m_20;
  m_20 = t;
  {
    ATerm e_6 (ATerm t)
    {
      t = term_n_20;
      t = h_98(t);
      return(t);
    }
    t = try_1(t, e_6);
  }
  t = m_20;
  {
    ATerm f_6 (ATerm t)
    {
      ATerm v_93 = NULL;
      ATerm o_20;
      o_20 = t;
      {
        ATerm t_93 = NULL;
        ATerm u_93 = NULL;
        u_93 = t;
        if(((t_93 != NULL) && (t_93 != u_93)))
          _fail(u_93);
        else
          t_93 = u_93;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_m_18, not_null(t_93));
          t = set_config_0(t);
        }
      }
      t = o_20;
      {
        ATerm w_93 = NULL;
        w_93 = t;
        if(((v_93 != NULL) && (v_93 != w_93)))
          _fail(w_93);
        else
          v_93 = w_93;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(v_93));
      }
      return(t);
    }
    ATerm g_6 (ATerm t)
    {
      ATerm p_20 = t;
      int q_20 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm r_20 = t;
          int s_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              ;
              LocalPopChoice(s_20);
            }
          else
            {
              t = r_20;
              {
                t = h_98(t);
                t = Cons_2(t, _id, g_6);
              }
            }
          ;
          LocalPopChoice(q_20);
        }
      else
        {
          t = p_20;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, f_6, g_6);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm c_94 = NULL,d_94 = NULL,e_94 = NULL;
  ATerm t_20;
  t_20 = t;
  {
    ATerm f_94 = NULL,g_94 = NULL,h_94 = NULL,i_94 = NULL;
    f_94 = t;
    b_94 :
    if(match_cons(f_94, sym__3))
      {
        g_94 = ATgetArgument(f_94, 0);
        h_94 = ATgetArgument(f_94, 1);
        i_94 = ATgetArgument(f_94, 2);
        {
          if(((c_94 != NULL) && (c_94 != g_94)))
            _fail(g_94);
          else
            c_94 = g_94;
          {
            if(((d_94 != NULL) && (d_94 != h_94)))
              _fail(h_94);
            else
              d_94 = h_94;
            {
              if(((e_94 != NULL) && (e_94 != i_94)))
                _fail(i_94);
              else
                e_94 = i_94;
              t = SSL_table_put(not_null(c_94), not_null(d_94), not_null(e_94));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = t_20;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm g_98 (ATerm))
{
  ATerm l_94 = NULL;
  ATerm u_20;
  u_20 = t;
  {
    t = term_v_20;
    t = table_put_0(t);
  }
  t = u_20;
  {
    ATerm h_6 (ATerm t)
    {
      ATerm w_20 = t;
      int x_20 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = g_98(t);
          ;
          LocalPopChoice(x_20);
        }
      else
        {
          t = w_20;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, h_6);
    {
      ATerm i_6 (ATerm t)
      {
        ATerm y_20 = t;
        int z_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_21;
            a_21 = t;
            {
              ATerm b_21 = t;
              int c_21 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_d_19;
                  t = get_config_0(t);
                  ;
                  LocalPopChoice(c_21);
                }
              else
                {
                  t = b_21;
                  t = option_defined_1(t, Help_0);
                }
            }
            t = a_21;
            {
              t = system_usage_0(t);
              {
                t = term_o_12;
                t = exit_0(t);
              }
            }
            ;
            LocalPopChoice(z_20);
          }
        else
          {
            t = y_20;
            {
              ATerm j_6 (ATerm t)
              {
                ATerm k_6 (ATerm t)
                {
                  ATerm m_94 = NULL;
                  m_94 = t;
                  if(((l_94 != NULL) && (l_94 != m_94)))
                    _fail(m_94);
                  else
                    l_94 = m_94;
                  return(t);
                }
                t = Undefined_1(t, k_6);
                return(t);
              }
              t = option_defined_1(t, j_6);
              {
                t = (ATerm) ATmakeAppl(sym__2, term_x_14, (ATerm) ATinsert(ATinsert(ATempty, not_null(l_94)), term_d_21));
                {
                  t = printnl_0(t);
                  {
                    t = system_usage_0(t);
                    {
                      t = term_w_11;
                      t = exit_0(t);
                    }
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, i_6);
      {
        ATerm e_21;
        e_21 = t;
        {
          t = term_v_19;
          t = table_destroy_0(t);
        }
        t = e_21;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm g_96 (ATerm), ATerm h_96 (ATerm), ATerm i_96 (ATerm), ATerm j_96 (ATerm))
{
  t = parse_options_1(t, g_96);
  {
    t = store_options_0(t);
    {
      t = i_96(t);
      {
        ATerm f_21 = t;
        int g_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, h_96);
            ;
            LocalPopChoice(g_21);
          }
        else
          {
            t = f_21;
            {
              ATerm h_21 = t;
              int i_21 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = j_96(t);
                  t = report_success_0(t);
                  ;
                  LocalPopChoice(i_21);
                }
              else
                {
                  t = h_21;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm iowrap_4 (ATerm t, ATerm v_95 (ATerm), ATerm w_95 (ATerm), ATerm x_95 (ATerm), ATerm y_95 (ATerm))
{
  ATerm l_6 (ATerm t)
  {
    ATerm j_21 = t;
    int k_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_95(t);
        ;
        LocalPopChoice(k_21);
      }
    else
      {
        t = j_21;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm m_6 (ATerm t)
  {
    t = input_file_0(t);
    {
      t = apply_strategy_1(t, v_95);
      t = output_file_0(t);
    }
    return(t);
  }
  t = option_wrap_4(t, l_6, x_95, y_95, m_6);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm p_95 (ATerm), ATerm q_95 (ATerm), ATerm r_95 (ATerm))
{
  ATerm n_6 (ATerm t)
  {
    ATerm o_6 (ATerm t)
    {
      ATerm l_21;
      l_21 = t;
      {
        ATerm p_94 = NULL;
        ATerm q_94 = NULL;
        t = term_m_18;
        {
          t = get_config_0(t);
          {
            q_94 = t;
            if(((p_94 != NULL) && (p_94 != q_94)))
              _fail(q_94);
            else
              p_94 = q_94;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_x_14, (ATerm) ATinsert(ATempty, not_null(p_94)));
          t = printnl_0(t);
        }
      }
      t = l_21;
      return(t);
    }
    t = if_verbose2_1(t, o_6);
    return(t);
  }
  t = iowrap_4(t, p_95, q_95, r_95, n_6);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm n_95 (ATerm), ATerm o_95 (ATerm))
{
  t = iowrap_3(t, n_95, o_95, default_usage_0);
  return(t);
}
ATerm io_Abox_2_latex_0 (ATerm t)
{
  t = iowrap_2(t, abox2latex_0, Abox2latex_options_0);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = io_Abox_2_latex_0(t);
  return(t);
}
