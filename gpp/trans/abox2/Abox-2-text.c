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
Symbol sym_FILE_1;
Symbol sym_DIR_1;
Symbol sym_TEMP_0;
Symbol sym_TempFiles_0;
Symbol sym_Tool_1;
Symbol sym_Repository_0;
Symbol sym_Import_0;
Symbol sym_Imported_1;
Symbol sym_XTC_0;
Symbol sym_None_0;
Symbol sym_Some_1;
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
Symbol sym_Scopes_0;
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
Symbol sym_Program_1;
Symbol sym_Undefined_1;
Symbol sym_Anno_2;
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
Symbol sym_Infinite_0;
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
  sym_None_0 = ATmakeSymbol("None", 0, ATfalse);
  ATprotectSymbol(sym_None_0);
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
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
  sym_Scopes_0 = ATmakeSymbol("Scopes", 0, ATfalse);
  ATprotectSymbol(sym_Scopes_0);
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
  sym_Program_1 = ATmakeSymbol("Program", 1, ATfalse);
  ATprotectSymbol(sym_Program_1);
  sym_Undefined_1 = ATmakeSymbol("Undefined", 1, ATfalse);
  ATprotectSymbol(sym_Undefined_1);
  sym_Anno_2 = ATmakeSymbol("Anno", 2, ATfalse);
  ATprotectSymbol(sym_Anno_2);
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
  sym_Infinite_0 = ATmakeSymbol("Infinite", 0, ATfalse);
  ATprotectSymbol(sym_Infinite_0);
  init_constant_terms();
}
ATerm term_g_28;
ATerm term_p_27;
ATerm term_f_27;
ATerm term_c_27;
ATerm term_b_27;
ATerm term_a_27;
ATerm term_s_26;
ATerm term_p_26;
ATerm term_u_25;
ATerm term_t_25;
ATerm term_s_25;
ATerm term_r_25;
ATerm term_q_25;
ATerm term_p_25;
ATerm term_h_25;
ATerm term_g_25;
ATerm term_a_25;
ATerm term_w_24;
ATerm term_v_24;
ATerm term_j_24;
ATerm term_i_24;
ATerm term_h_24;
ATerm term_g_24;
ATerm term_e_24;
ATerm term_w_23;
ATerm term_u_23;
ATerm term_t_23;
ATerm term_s_23;
ATerm term_r_23;
ATerm term_o_23;
ATerm term_i_23;
ATerm term_h_23;
ATerm term_g_23;
ATerm term_f_23;
ATerm term_e_23;
ATerm term_a_23;
ATerm term_z_22;
ATerm term_y_22;
ATerm term_x_22;
ATerm term_u_22;
ATerm term_t_22;
ATerm term_r_22;
ATerm term_q_22;
ATerm term_p_22;
ATerm term_o_22;
ATerm term_m_22;
ATerm term_l_22;
ATerm term_i_22;
ATerm term_p_21;
ATerm term_q_19;
ATerm term_n_19;
ATerm term_l_19;
ATerm term_f_19;
ATerm term_q_18;
ATerm term_g_17;
ATerm term_f_17;
ATerm term_z_15;
ATerm term_f_14;
ATerm term_n_13;
ATerm term_y_12;
ATerm term_j_10;
ATerm term_f_10;
ATerm term_d_9;
ATerm term_c_9;
ATerm term_a_9;
ATerm term_r_8;
ATerm term_p_8;
ATerm term_o_8;
ATerm term_l_8;
ATerm term_a_8;
ATerm term_y_7;
ATerm term_q_7;
void init_constant_terms (void)
{
  ATprotect(&(term_q_7));
  term_q_7 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_y_7));
  term_y_7 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_a_8));
  term_a_8 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file> (file, mode)", 0, ATtrue));
  ATprotect(&(term_l_8));
  term_l_8 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_o_8));
  term_o_8 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_p_8));
  term_p_8 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_r_8));
  term_r_8 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_a_9));
  term_a_9 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_c_9));
  term_c_9 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_d_9));
  term_d_9 = (ATerm) ATmakeInt(32);
  ATprotect(&(term_f_10));
  term_f_10 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_j_10));
  term_j_10 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeAppl(ATmakeSymbol("** ERROR: too many columns in row: ", 0, ATtrue));
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--width", 0, ATtrue));
  ATprotect(&(term_g_17));
  term_g_17 = (ATerm) ATmakeInt(80);
  ATprotect(&(term_q_18));
  term_q_18 = (ATerm) ATmakeAppl(ATmakeSymbol("** ERROR: invalid box: ", 0, ATtrue));
  ATprotect(&(term_f_19));
  term_f_19 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_l_19));
  term_l_19 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_n_19));
  term_n_19 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_q_19));
  term_q_19 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_p_21));
  term_p_21 = (ATerm) ATmakeAppl(sym__2, term_r_8, term_q_7);
  ATprotect(&(term_i_22));
  term_i_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_l_22));
  term_l_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_m_22));
  term_m_22 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_o_22));
  term_o_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_p_22));
  term_p_22 = (ATerm) ATmakeAppl(sym__2, term_o_22, term_o_8);
  ATprotect(&(term_q_22));
  term_q_22 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_r_22));
  term_r_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_t_22));
  term_t_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_u_22));
  term_u_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_x_22));
  term_x_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_y_22));
  term_y_22 = (ATerm) ATmakeAppl(sym__2, term_x_22, term_f_10);
  ATprotect(&(term_z_22));
  term_z_22 = (ATerm) ATmakeAppl(sym_Verbose_1, term_f_10);
  ATprotect(&(term_a_23));
  term_a_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_e_23));
  term_e_23 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_f_23));
  term_f_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_g_23));
  term_g_23 = (ATerm) ATmakeAppl(sym__2, term_f_23, term_o_8);
  ATprotect(&(term_h_23));
  term_h_23 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_i_23));
  term_i_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_o_23));
  term_o_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_r_23));
  term_r_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_s_23));
  term_s_23 = (ATerm) ATmakeAppl(sym__2, term_r_23, term_o_8);
  ATprotect(&(term_t_23));
  term_t_23 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_u_23));
  term_u_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_w_23));
  term_w_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_e_24));
  term_e_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-w int | --width int       Specifies max width of output.", 0, ATtrue));
  ATprotect(&(term_g_24));
  term_g_24 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_h_24));
  term_h_24 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_i_24));
  term_i_24 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_j_24));
  term_j_24 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_v_24));
  term_v_24 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_w_24));
  term_w_24 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_a_25));
  term_a_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_g_25));
  term_g_25 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_h_25));
  term_h_25 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_p_25));
  term_p_25 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_q_25));
  term_q_25 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_r_25));
  term_r_25 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_s_25));
  term_s_25 = (ATerm) ATmakeAppl(sym__2, term_q_25, term_r_25);
  ATprotect(&(term_t_25));
  term_t_25 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_u_25));
  term_u_25 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_p_26));
  term_p_26 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_s_26));
  term_s_26 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_a_27));
  term_a_27 = (ATerm) ATmakeAppl(sym__2, term_a_25, term_o_8);
  ATprotect(&(term_b_27));
  term_b_27 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_c_27));
  term_c_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_f_27));
  term_f_27 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_p_27));
  term_p_27 = (ATerm) ATmakeAppl(sym__3, term_q_25, term_r_25, (ATerm) ATempty);
  ATprotect(&(term_g_28));
  term_g_28 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm close_file_0 (ATerm);
ATerm print_0 (ATerm);
ATerm topdown_1 (ATerm, ATerm j_72 (ATerm));
ATerm assert_1 (ATerm, ATerm o_86 (ATerm));
ATerm obsolete_1 (ATerm, ATerm y_87 (ATerm));
ATerm open_file_0 (ATerm);
ATerm new_0 (ATerm);
ATerm new_file_0 (ATerm);
ATerm xtc_new_file_0 (ATerm);
ATerm topdown_print_to_0 (ATerm);
ATerm Fst_0 (ATerm);
ATerm error_0 (ATerm);
ATerm fatal_error_0 (ATerm);
ATerm is_text_0 (ATerm);
ATerm vertical_sep_0 (ATerm);
ATerm format_vbox_0 (ATerm);
ATerm separate_by_0 (ATerm);
ATerm hv_in_new_vbox_2 (ATerm, ATerm r_70 (ATerm), ATerm s_70 (ATerm));
ATerm hv_add_to_hbox_1 (ATerm, ATerm q_70 (ATerm));
ATerm FoldL_1 (ATerm, ATerm x_83 (ATerm));
ATerm foldl_1 (ATerm, ATerm c_83 (ATerm));
ATerm is_length_0 (ATerm);
ATerm string_length_0 (ATerm);
ATerm vs_length_0 (ATerm);
ATerm vs_text_0 (ATerm);
ATerm SOpt_2 (ATerm, ATerm n_64 (ATerm), ATerm o_64 (ATerm));
ATerm SOpt_value_1 (ATerm, ATerm v_70 (ATerm));
ATerm hs_length_0 (ATerm);
ATerm hs_text_0 (ATerm);
ATerm subt_0 (ATerm);
ATerm Nil_T_0 (ATerm);
ATerm Cons_T_2 (ATerm, ATerm q_0 (ATerm), ATerm t_0 (ATerm));
ATerm thread_map_1 (ATerm, ATerm n_83 (ATerm));
ATerm H_2 (ATerm, ATerm h_64 (ATerm), ATerm i_64 (ATerm));
ATerm is_real_hbox_0 (ATerm);
ATerm filter_1 (ATerm, ATerm a_84 (ATerm));
ATerm do_vbox_children_0 (ATerm);
ATerm is_real_vbox_0 (ATerm);
ATerm split_Cons_0 (ATerm);
ATerm matrix_transpose_0 (ATerm);
ATerm align_right_0 (ATerm);
ATerm Dupl_0 (ATerm);
ATerm div_0 (ATerm);
ATerm div2_0 (ATerm);
ATerm dec_0 (ATerm);
ATerm mod_0 (ATerm);
ATerm even_0 (ATerm);
ATerm align_center_0 (ATerm);
ATerm copy_char_0 (ATerm);
ATerm pos_0 (ATerm);
ATerm align_helper_0 (ATerm);
ATerm align_left_0 (ATerm);
ATerm align_column_0 (ATerm);
ATerm SOpts_of_alignment_0 (ATerm);
ATerm Snd_0 (ATerm);
ATerm max_0 (ATerm);
ATerm Hd_0 (ATerm);
ATerm list_accum_1 (ATerm, ATerm g_96 (ATerm));
ATerm list_max_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm MkCons_0 (ATerm);
ATerm flatten_list_0 (ATerm);
ATerm UnZip2_0 (ATerm);
ATerm UnZip3_0 (ATerm);
ATerm UnZip1_0 (ATerm);
ATerm unzip_1 (ATerm, ATerm w_78 (ATerm));
ATerm unzip_0 (ATerm);
ATerm do_A_column_0 (ATerm);
ATerm Zip3_0 (ATerm);
ATerm Zip2_0 (ATerm);
ATerm Zip1_0 (ATerm);
ATerm genzip_4 (ATerm, ATerm m_78 (ATerm), ATerm n_78 (ATerm), ATerm o_78 (ATerm), ATerm p_78 (ATerm));
ATerm zip_1 (ATerm, ATerm r_78 (ATerm));
ATerm zip_0 (ATerm);
ATerm inc_0 (ATerm);
ATerm map_with_index_1 (ATerm, ATerm j_99 (ATerm));
ATerm add_indices_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm z_82 (ATerm), ATerm a_83 (ATerm), ATerm b_83 (ATerm));
ATerm length_0 (ATerm);
ATerm while_not_2 (ATerm, ATerm z_92 (ATerm), ATerm a_93 (ATerm));
ATerm for_3 (ATerm, ATerm c_93 (ATerm), ATerm d_93 (ATerm), ATerm e_93 (ATerm));
ATerm copy_0 (ATerm);
ATerm FitToMax_1 (ATerm, ATerm u_70 (ATerm));
ATerm to_matrix_1 (ATerm, ATerm t_70 (ATerm));
ATerm R_2 (ATerm, ATerm z_63 (ATerm), ATerm a_64 (ATerm));
ATerm split_2 (ATerm, ATerm v_75 (ATerm), ATerm w_75 (ATerm));
ATerm construct_rows_0 (ATerm);
ATerm Last_0 (ATerm);
ATerm last_0 (ATerm);
ATerm eq_0 (ATerm);
ATerm elem_1 (ATerm, ATerm b_77 (ATerm));
ATerm elem_0 (ATerm);
ATerm at_suffix_1 (ATerm, ATerm m_77 (ATerm));
ATerm split_fetch_1 (ATerm, ATerm f_77 (ATerm));
ATerm list_tokenize_1 (ATerm, ATerm c_100 (ATerm));
ATerm string_tokenize_0 (ATerm);
ATerm rel_string_length_0 (ATerm);
ATerm leq_0 (ATerm);
ATerm get_width_0 (ATerm);
ATerm abox2text_0 (ATerm);
ATerm try_abox2text_0 (ATerm);
ATerm fclose_0 (ATerm);
ATerm read_from_stream_0 (ATerm);
ATerm fopen_0 (ATerm);
ATerm stdin_stream_0 (ATerm);
ATerm stdout_stream_0 (ATerm);
ATerm stderr_stream_0 (ATerm);
ATerm stdio_stream_0 (ATerm);
ATerm open_stream_0 (ATerm);
ATerm ReadFromFile_0 (ATerm);
ATerm access_0 (ATerm);
ATerm file_exists_0 (ATerm);
ATerm read_from_0 (ATerm);
ATerm copy_file_0 (ATerm);
ATerm stderr_0 (ATerm);
ATerm stdout_0 (ATerm);
ATerm copy_to_1 (ATerm, ATerm m_0 (ATerm));
ATerm Tl_0 (ATerm);
ATerm table_pop_0 (ATerm);
ATerm end_scope_1 (ATerm, ATerm l_86 (ATerm));
ATerm remove_file_0 (ATerm);
ATerm restore_always_2 (ATerm, ATerm q_75 (ATerm), ATerm r_75 (ATerm));
ATerm begin_scope_1 (ATerm, ATerm k_86 (ATerm));
ATerm xtc_temp_files_1 (ATerm, ATerm e_71 (ATerm));
ATerm xtc_io_1 (ATerm, ATerm f_71 (ATerm));
ATerm string_to_int_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm));
ATerm version_option_0 (ATerm);
ATerm keep_option_0 (ATerm);
ATerm verbose_option_0 (ATerm);
ATerm general_options_0 (ATerm);
ATerm output_option_0 (ATerm);
ATerm aterm_output_option_0 (ATerm);
ATerm input_option_0 (ATerm);
ATerm io_options_0 (ATerm);
ATerm abox2text_options_0 (ATerm);
ATerm default_usage_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm whoami_0 (ATerm);
ATerm ticks_to_seconds_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm x_82 (ATerm), ATerm y_82 (ATerm));
ATerm crush_2 (ATerm, ATerm v_80 (ATerm), ATerm w_80 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm g_85 (ATerm));
ATerm report_run_time_0 (ATerm);
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm g_90 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm c_92 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm g_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm b_92 (ATerm));
ATerm Program_1 (ATerm, ATerm q_65 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm r_65 (ATerm));
ATerm fetch_1 (ATerm, ATerm c_77 (ATerm));
ATerm option_defined_1 (ATerm, ATerm b_91 (ATerm));
ATerm Help_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm i_77 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm _2 (ATerm, ATerm q_61 (ATerm), ATerm r_61 (ATerm));
ATerm conc_strings_0 (ATerm);
ATerm debug_1 (ATerm, ATerm r_87 (ATerm));
ATerm map_1 (ATerm, ATerm t_76 (ATerm));
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm try_1 (ATerm, ATerm b_75 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm g_92 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm z_62 (ATerm), ATerm a_63 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm e_92 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm d_92 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm i_90 (ATerm), ATerm j_90 (ATerm), ATerm k_90 (ATerm), ATerm l_90 (ATerm));
ATerm option_wrap_2 (ATerm, ATerm m_90 (ATerm), ATerm n_90 (ATerm));
ATerm io_Abox_2_text_0 (ATerm);
ATerm main_0 (ATerm);
ATerm close_file_0 (ATerm t)
{
  ATerm o_1 = NULL;
  o_1 = t;
  t = SSL_close_file(not_null(o_1));
  return(t);
}
ATerm print_0 (ATerm t)
{
  ATerm a_2 = NULL,b_2 = NULL,c_2 = NULL;
  a_2 = t;
  v_1 :
  if(match_cons(a_2, sym__2))
    {
      b_2 = ATgetArgument(a_2, 0);
      c_2 = ATgetArgument(a_2, 1);
      {
        ATerm z_4;
        z_4 = t;
        t = SSL_print(not_null(b_2), not_null(c_2));
        t = z_4;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm topdown_1 (ATerm t, ATerm j_72 (ATerm))
{
  t = j_72(t);
  {
    ATerm c_0 (ATerm t)
    {
      t = topdown_1(t, j_72);
      return(t);
    }
    t = _all(t, c_0);
  }
  return(t);
}
ATerm assert_1 (ATerm t, ATerm o_86 (ATerm))
{
  ATerm s_3 = NULL,t_3 = NULL,u_3 = NULL;
  s_3 = t;
  r_3 :
  if(match_cons(s_3, sym__2))
    {
      t_3 = ATgetArgument(s_3, 0);
      u_3 = ATgetArgument(s_3, 1);
      {
        ATerm x_3 = NULL,y_3 = NULL,z_3 = NULL;
        ATerm n_7;
        n_7 = t;
        {
          ATerm a_4 = NULL;
          ATerm b_4 = NULL,c_4 = NULL,d_4 = NULL;
          t = o_86(t);
          {
            a_4 = t;
            {
              if(((x_3 != NULL) && (x_3 != a_4)))
                _fail(a_4);
              else
                x_3 = a_4;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(x_3), not_null(t_3), not_null(u_3));
                {
                  t = table_push_0(t);
                  {
                    ATerm o_7 = t;
                    int p_7 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(x_3), term_q_7);
                        t = table_get_0(t);
                        ;
                        LocalPopChoice(p_7);
                      }
                    else
                      {
                        t = o_7;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      b_4 = t;
                      q_3 :
                      if(((ATgetType(b_4) == AT_LIST) && !(ATisEmpty(b_4))))
                        {
                          c_4 = ATgetFirst((ATermList) b_4);
                          d_4 = (ATerm) ATgetNext((ATermList) b_4);
                          {
                            if(((y_3 != NULL) && (y_3 != c_4)))
                              _fail(c_4);
                            else
                              y_3 = c_4;
                            {
                              if(((z_3 != NULL) && (z_3 != d_4)))
                                _fail(d_4);
                              else
                                z_3 = d_4;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(x_3), term_q_7, (ATerm) ATinsert(CheckATermList(not_null(z_3)), (ATerm) ATinsert(CheckATermList(not_null(y_3)), not_null(t_3))));
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
        t = n_7;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm obsolete_1 (ATerm t, ATerm y_87 (ATerm))
{
  ATerm r_7;
  r_7 = t;
  {
    t = y_87(t);
    {
      ATerm e_0 (ATerm t)
      {
        t = term_y_7;
        return(t);
      }
      t = debug_1(t, e_0);
    }
  }
  t = r_7;
  return(t);
}
ATerm open_file_0 (ATerm t)
{
  ATerm l_4 = NULL,m_4 = NULL,n_4 = NULL;
  ATerm u_4 (ATerm t)
  {
    ATerm z_7 = t;
    if((PushChoice() == 0))
      {
        ATerm p_4 = NULL,q_4 = NULL,r_4 = NULL;
        p_4 = t;
        j_4 :
        if(match_cons(p_4, sym__2))
          {
            q_4 = ATgetArgument(p_4, 0);
            r_4 = ATgetArgument(p_4, 1);
            {
            }
          }
        else
          {
            _fail(t);
          }
        PopChoice();
        _fail(t);
      }
    else
      {
        t = z_7;
      }
    {
      ATerm f_0 (ATerm t)
      {
        t = term_a_8;
        return(t);
      }
      t = obsolete_1(t, f_0);
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(l_4), term_l_8);
        t = open_file_0(t);
      }
    }
    return(t);
  }
  ATerm v_4 (ATerm t)
  {
    t = SSL_open_file(not_null(m_4), not_null(n_4));
    return(t);
  }
  l_4 = t;
  k_4 :
  if(match_cons(l_4, sym__2))
    {
      m_4 = ATgetArgument(l_4, 0);
      n_4 = ATgetArgument(l_4, 1);
      {
        ATerm m_8 = t;
        int n_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = u_4(t);
            ;
            LocalPopChoice(n_8);
          }
        else
          {
            t = m_8;
            t = v_4(t);
          }
      }
    }
  else
    {
      t = u_4(t);
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
  ATerm x_4 = NULL;
  ATerm y_4 = NULL;
  t = term_o_8;
  {
    t = new_0(t);
    {
      y_4 = t;
      if(((x_4 != NULL) && (x_4 != y_4)))
        _fail(y_4);
      else
        x_4 = y_4;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(x_4), term_p_8);
    {
      t = conc_strings_0(t);
      {
        ATerm h_0 (ATerm t)
        {
          t = file_exists_0(t);
          t = new_file_0(t);
          return(t);
        }
        t = try_1(t, h_0);
      }
    }
  }
  return(t);
}
ATerm xtc_new_file_0 (ATerm t)
{
  ATerm c_5 = NULL;
  t = new_file_0(t);
  {
    c_5 = t;
    {
      ATerm q_8;
      q_8 = t;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(c_5), term_l_8);
        {
          t = open_file_0(t);
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(c_5), term_o_8);
            {
              ATerm n_0 (ATerm t)
              {
                t = term_r_8;
                return(t);
              }
              t = assert_1(t, n_0);
            }
          }
        }
      }
      t = q_8;
    }
  }
  return(t);
}
ATerm topdown_print_to_0 (ATerm t)
{
  ATerm i_5 = NULL;
  ATerm k_5 = NULL;
  i_5 = t;
  {
    ATerm l_5 = NULL;
    t = xtc_new_file_0(t);
    {
      l_5 = t;
      {
        if(((k_5 != NULL) && (k_5 != l_5)))
          _fail(l_5);
        else
          k_5 = l_5;
        {
          t = not_null(i_5);
          {
            ATerm o_0 (ATerm t)
            {
              ATerm p_0 (ATerm t)
              {
                t = is_string_0(t);
                {
                  ATerm w_8;
                  w_8 = t;
                  {
                    ATerm m_5 = NULL;
                    ATerm n_5 = NULL;
                    n_5 = t;
                    if(((m_5 != NULL) && (m_5 != n_5)))
                      _fail(n_5);
                    else
                      m_5 = n_5;
                    {
                      t = (ATerm) ATmakeAppl(sym__2, not_null(k_5), (ATerm) ATinsert(ATempty, not_null(m_5)));
                      t = print_0(t);
                    }
                  }
                  t = w_8;
                }
                return(t);
              }
              t = try_1(t, p_0);
              return(t);
            }
            t = topdown_1(t, o_0);
            {
              t = not_null(k_5);
              t = close_file_0(t);
            }
          }
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(k_5));
  }
  return(t);
}
ATerm Fst_0 (ATerm t)
{
  ATerm x_5 = NULL;
  ATerm z_5 = NULL,a_6 = NULL;
  x_5 = t;
  {
    ATerm b_6 = NULL;
    ATerm d_6 = NULL,e_6 = NULL,f_6 = NULL,g_6 = NULL,h_6 = NULL;
    t = not_null(x_5);
    {
      b_6 = t;
      {
        t = SSL_explode_term(not_null(b_6));
        {
          d_6 = t;
          u_5 :
          if(match_cons(d_6, sym__2))
            {
              e_6 = ATgetArgument(d_6, 0);
              f_6 = ATgetArgument(d_6, 1);
              v_5 :
              if(match_string(e_6, ""))
                {
                  w_5 :
                  if(((ATgetType(f_6) == AT_LIST) && !(ATisEmpty(f_6))))
                    {
                      g_6 = ATgetFirst((ATermList) f_6);
                      h_6 = (ATerm) ATgetNext((ATermList) f_6);
                      {
                        if(((a_6 != NULL) && (a_6 != g_6)))
                          _fail(g_6);
                        else
                          a_6 = g_6;
                        if(((z_5 != NULL) && (z_5 != h_6)))
                          _fail(h_6);
                        else
                          z_5 = h_6;
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
    t = not_null(a_6);
  }
  return(t);
}
ATerm error_0 (ATerm t)
{
  ATerm x_8;
  x_8 = t;
  {
    ATerm m_6 = NULL;
    ATerm n_6 = NULL;
    n_6 = t;
    if(((m_6 != NULL) && (m_6 != n_6)))
      _fail(n_6);
    else
      m_6 = n_6;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_a_9, not_null(m_6));
      t = printnl_0(t);
    }
  }
  t = x_8;
  return(t);
}
ATerm fatal_error_0 (ATerm t)
{
  ATerm b_9;
  b_9 = t;
  {
    t = error_0(t);
    {
      t = term_c_9;
      t = exit_0(t);
    }
  }
  t = b_9;
  return(t);
}
ATerm is_text_0 (ATerm t)
{
  ATerm q_6 = NULL;
  ATerm r_6 = NULL;
  t = is_length_0(t);
  {
    r_6 = t;
    if(((q_6 != NULL) && (q_6 != r_6)))
      _fail(r_6);
    else
      q_6 = r_6;
  }
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(q_6), term_d_9);
    t = copy_char_0(t);
  }
  return(t);
}
ATerm vertical_sep_0 (ATerm t)
{
  ATerm y_6 = NULL,z_6 = NULL,a_7 = NULL;
  y_6 = t;
  x_6 :
  if(match_cons(y_6, sym__2))
    {
      z_6 = ATgetArgument(y_6, 0);
      a_7 = ATgetArgument(y_6, 1);
      {
        ATerm d_7 = NULL,e_7 = NULL,h_7 = NULL;
        ATerm e_9;
        e_9 = t;
        {
          ATerm f_7 = NULL;
          t = not_null(z_6);
          {
            ATerm g_7 = NULL;
            t = vs_text_0(t);
            {
              f_7 = t;
              {
                if(((d_7 != NULL) && (d_7 != f_7)))
                  _fail(f_7);
                else
                  d_7 = f_7;
                {
                  t = not_null(z_6);
                  {
                    t = is_text_0(t);
                    {
                      g_7 = t;
                      if(((e_7 != NULL) && (e_7 != g_7)))
                        _fail(g_7);
                      else
                        e_7 = g_7;
                    }
                  }
                }
              }
            }
          }
        }
        t = e_9;
        {
          ATerm i_7 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(a_7), term_d_9);
          {
            t = copy_char_0(t);
            {
              i_7 = t;
              if(((h_7 != NULL) && (h_7 != i_7)))
                _fail(i_7);
              else
                h_7 = i_7;
            }
          }
          {
            t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(h_7)), not_null(e_7)), not_null(d_7));
            t = concat_strings_0(t);
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
ATerm format_vbox_0 (ATerm t)
{
  ATerm u_7 = NULL,v_7 = NULL,w_7 = NULL,x_7 = NULL;
  u_7 = t;
  t_7 :
  if(match_cons(u_7, sym__3))
    {
      v_7 = ATgetArgument(u_7, 0);
      w_7 = ATgetArgument(u_7, 1);
      x_7 = ATgetArgument(u_7, 2);
      {
        ATerm b_8 = NULL,c_8 = NULL,d_8 = NULL;
        ATerm e_8 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, not_null(v_7), not_null(x_7));
        {
          ATerm f_8 = NULL,g_8 = NULL,h_8 = NULL;
          t = vertical_sep_0(t);
          {
            e_8 = t;
            {
              if(((c_8 != NULL) && (c_8 != e_8)))
                _fail(e_8);
              else
                c_8 = e_8;
              {
                t = not_null(w_7);
                {
                  t = last_0(t);
                  {
                    f_8 = t;
                    s_7 :
                    if(match_cons(f_8, sym__2))
                      {
                        g_8 = ATgetArgument(f_8, 0);
                        h_8 = ATgetArgument(f_8, 1);
                        {
                          ATerm i_8 = NULL,k_8 = NULL;
                          if(((b_8 != NULL) && (b_8 != h_8)))
                            _fail(h_8);
                          else
                            b_8 = h_8;
                          {
                            ATerm j_8 = NULL;
                            t = not_null(w_7);
                            {
                              t = map_1(t, Fst_0);
                              {
                                j_8 = t;
                                if(((i_8 != NULL) && (i_8 != j_8)))
                                  _fail(j_8);
                                else
                                  i_8 = j_8;
                              }
                            }
                            {
                              t = (ATerm) ATmakeAppl(sym__2, not_null(c_8), not_null(i_8));
                              {
                                t = separate_by_0(t);
                                {
                                  k_8 = t;
                                  if(((d_8 != NULL) && (d_8 != k_8)))
                                    _fail(k_8);
                                  else
                                    d_8 = k_8;
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
        t = (ATerm) ATmakeAppl(sym__2, not_null(d_8), not_null(b_8));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm separate_by_0 (ATerm t)
{
  ATerm t_8 = NULL,u_8 = NULL,v_8 = NULL;
  t_8 = t;
  s_8 :
  if(match_cons(t_8, sym__2))
    {
      u_8 = ATgetArgument(t_8, 0);
      v_8 = ATgetArgument(t_8, 1);
      {
        t = not_null(v_8);
        {
          ATerm f_9 = t;
          int h_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              ;
              LocalPopChoice(h_9);
            }
          else
            {
              t = f_9;
              {
                ATerm r_0 (ATerm t)
                {
                  ATerm i_9 = t;
                  int n_9 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = Nil_0(t);
                      ;
                      LocalPopChoice(n_9);
                    }
                  else
                    {
                      t = i_9;
                      {
                        ATerm y_8 = NULL;
                        t = Cons_2(t, _id, r_0);
                        {
                          ATerm z_8 = NULL;
                          z_8 = t;
                          if(((y_8 != NULL) && (y_8 != z_8)))
                            _fail(z_8);
                          else
                            y_8 = z_8;
                          t = (ATerm) ATinsert(CheckATermList(not_null(y_8)), not_null(u_8));
                        }
                      }
                    }
                  return(t);
                }
                t = Cons_2(t, _id, r_0);
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
ATerm hv_in_new_vbox_2 (ATerm t, ATerm r_70 (ATerm), ATerm s_70 (ATerm))
{
  ATerm k_9 = NULL,l_9 = NULL,m_9 = NULL;
  k_9 = t;
  j_9 :
  if(match_cons(k_9, sym__2))
    {
      l_9 = ATgetArgument(k_9, 0);
      m_9 = ATgetArgument(k_9, 1);
      {
        ATerm p_9 = NULL,q_9 = NULL,w_9 = NULL;
        ATerm o_9;
        o_9 = t;
        {
          ATerm r_9 = NULL,t_9 = NULL,u_9 = NULL,v_9 = NULL;
          ATerm s_9 = NULL;
          t = term_o_8;
          {
            t = s_70(t);
            {
              s_9 = t;
              if(((r_9 != NULL) && (r_9 != s_9)))
                _fail(s_9);
              else
                r_9 = s_9;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(l_9), not_null(r_9));
            {
              t = try_abox2text_0(t);
              {
                t_9 = t;
                g_9 :
                if(match_cons(t_9, sym__2))
                  {
                    u_9 = ATgetArgument(t_9, 0);
                    v_9 = ATgetArgument(t_9, 1);
                    {
                      if(((p_9 != NULL) && (p_9 != u_9)))
                        _fail(u_9);
                      else
                        p_9 = u_9;
                      if(((q_9 != NULL) && (q_9 != v_9)))
                        _fail(v_9);
                      else
                        q_9 = v_9;
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
        t = o_9;
        {
          ATerm x_9 = NULL,z_9 = NULL;
          ATerm y_9 = NULL;
          t = term_o_8;
          {
            t = r_70(t);
            {
              y_9 = t;
              if(((x_9 != NULL) && (x_9 != y_9)))
                _fail(y_9);
              else
                x_9 = y_9;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(q_9), not_null(x_9));
            {
              t = add_0(t);
              {
                z_9 = t;
                if(((w_9 != NULL) && (w_9 != z_9)))
                  _fail(z_9);
                else
                  w_9 = z_9;
              }
            }
          }
          t = (ATerm) ATinsert(CheckATermList(not_null(m_9)), (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, not_null(p_9)), not_null(w_9)));
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm hv_add_to_hbox_1 (ATerm t, ATerm q_70 (ATerm))
{
  ATerm o_10 = NULL,p_10 = NULL,q_10 = NULL,r_10 = NULL,s_10 = NULL,t_10 = NULL,u_10 = NULL;
  o_10 = t;
  l_10 :
  if(match_cons(o_10, sym__2))
    {
      p_10 = ATgetArgument(o_10, 0);
      q_10 = ATgetArgument(o_10, 1);
      m_10 :
      if(((ATgetType(q_10) == AT_LIST) && !(ATisEmpty(q_10))))
        {
          r_10 = ATgetFirst((ATermList) q_10);
          u_10 = (ATerm) ATgetNext((ATermList) q_10);
          n_10 :
          if(match_cons(r_10, sym__2))
            {
              s_10 = ATgetArgument(r_10, 0);
              t_10 = ATgetArgument(r_10, 1);
              {
                ATerm z_10 = NULL,a_11 = NULL,g_11 = NULL;
                ATerm a_10;
                a_10 = t;
                {
                  ATerm b_11 = NULL,c_11 = NULL,d_11 = NULL;
                  t = (ATerm) ATmakeAppl(sym__2, not_null(p_10), not_null(t_10));
                  {
                    t = try_abox2text_0(t);
                    {
                      b_11 = t;
                      i_10 :
                      if(match_cons(b_11, sym__2))
                        {
                          c_11 = ATgetArgument(b_11, 0);
                          d_11 = ATgetArgument(b_11, 1);
                          {
                            ATerm e_11 = NULL;
                            if(((z_10 != NULL) && (z_10 != c_11)))
                              _fail(c_11);
                            else
                              z_10 = c_11;
                            {
                              if(((a_11 != NULL) && (a_11 != d_11)))
                                _fail(d_11);
                              else
                                a_11 = d_11;
                              {
                                ATerm f_11 = NULL;
                                t = term_o_8;
                                {
                                  t = get_width_0(t);
                                  {
                                    f_11 = t;
                                    if(((e_11 != NULL) && (e_11 != f_11)))
                                      _fail(f_11);
                                    else
                                      e_11 = f_11;
                                  }
                                }
                                {
                                  t = (ATerm) ATmakeAppl(sym__2, not_null(a_11), not_null(e_11));
                                  t = leq_0(t);
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
                t = a_10;
                {
                  ATerm h_11 = NULL,j_11 = NULL;
                  ATerm i_11 = NULL;
                  t = term_o_8;
                  {
                    t = q_70(t);
                    {
                      i_11 = t;
                      if(((h_11 != NULL) && (h_11 != i_11)))
                        _fail(i_11);
                      else
                        h_11 = i_11;
                    }
                  }
                  {
                    t = (ATerm) ATmakeAppl(sym__2, not_null(a_11), not_null(h_11));
                    {
                      t = add_0(t);
                      {
                        j_11 = t;
                        if(((g_11 != NULL) && (g_11 != j_11)))
                          _fail(j_11);
                        else
                          g_11 = j_11;
                      }
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(u_10)), (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(s_10)), not_null(z_10)), not_null(g_11)));
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
  return(t);
}
ATerm FoldL_1 (ATerm t, ATerm x_83 (ATerm))
{
  ATerm t_11 = NULL,u_11 = NULL,v_11 = NULL,w_11 = NULL,x_11 = NULL;
  t_11 = t;
  r_11 :
  if(match_cons(t_11, sym__2))
    {
      u_11 = ATgetArgument(t_11, 0);
      x_11 = ATgetArgument(t_11, 1);
      s_11 :
      if(((ATgetType(u_11) == AT_LIST) && !(ATisEmpty(u_11))))
        {
          v_11 = ATgetFirst((ATermList) u_11);
          w_11 = (ATerm) ATgetNext((ATermList) u_11);
          {
            ATerm b_12 = NULL;
            ATerm c_12 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(v_11), not_null(x_11));
            {
              t = x_83(t);
              {
                c_12 = t;
                if(((b_12 != NULL) && (b_12 != c_12)))
                  _fail(c_12);
                else
                  b_12 = c_12;
              }
            }
            t = (ATerm) ATmakeAppl(sym__2, not_null(w_11), not_null(b_12));
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
ATerm foldl_1 (ATerm t, ATerm c_83 (ATerm))
{
  ATerm m_12 (ATerm t)
  {
    ATerm b_10 = t;
    int c_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_12 = NULL,j_12 = NULL,k_12 = NULL;
        i_12 = t;
        g_12 :
        if(match_cons(i_12, sym__2))
          {
            j_12 = ATgetArgument(i_12, 0);
            k_12 = ATgetArgument(i_12, 1);
            h_12 :
            if(((ATgetType(j_12) == AT_LIST) && ATisEmpty(j_12)))
              {
                t = not_null(k_12);
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
        ;
        LocalPopChoice(c_10);
      }
    else
      {
        t = b_10;
        {
          t = FoldL_1(t, c_83);
          t = m_12(t);
        }
      }
    return(t);
  }
  t = m_12(t);
  return(t);
}
ATerm is_length_0 (ATerm t)
{
  ATerm d_10 = t;
  int e_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_0 (ATerm t)
      {
        ATerm p_12 = NULL;
        p_12 = t;
        o_12 :
        if(!(match_cons(p_12, sym_IS_0)))
          {
            _fail(t);
          }
        return(t);
      }
      t = SOpt_value_1(t, s_0);
      ;
      LocalPopChoice(e_10);
    }
  else
    {
      t = d_10;
      t = term_f_10;
    }
  return(t);
}
ATerm string_length_0 (ATerm t)
{
  t = explode_string_0(t);
  t = length_0(t);
  return(t);
}
ATerm vs_length_0 (ATerm t)
{
  ATerm g_10 = t;
  int h_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_0 (ATerm t)
      {
        ATerm r_12 = NULL;
        r_12 = t;
        q_12 :
        if(!(match_cons(r_12, sym_VS_0)))
          {
            _fail(t);
          }
        return(t);
      }
      t = SOpt_value_1(t, u_0);
      ;
      LocalPopChoice(h_10);
    }
  else
    {
      t = g_10;
      t = term_f_10;
    }
  return(t);
}
ATerm vs_text_0 (ATerm t)
{
  ATerm t_12 = NULL;
  ATerm u_12 = NULL;
  t = vs_length_0(t);
  {
    t = inc_0(t);
    {
      u_12 = t;
      if(((t_12 != NULL) && (t_12 != u_12)))
        _fail(u_12);
      else
        t_12 = u_12;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(t_12), term_j_10);
    t = copy_char_0(t);
  }
  return(t);
}
ATerm SOpt_2 (ATerm t, ATerm n_64 (ATerm), ATerm o_64 (ATerm))
{
  ATerm c_13 = NULL,d_13 = NULL,e_13 = NULL;
  c_13 = t;
  b_13 :
  if(match_cons(c_13, sym_SOpt_2))
    {
      d_13 = ATgetArgument(c_13, 0);
      e_13 = ATgetArgument(c_13, 1);
      {
        ATerm i_13 = NULL,k_13 = NULL;
        ATerm j_13 = NULL;
        t = SSLgetAnnotations(not_null(c_13));
        {
          j_13 = t;
          if(((i_13 != NULL) && (i_13 != j_13)))
            _fail(j_13);
          else
            i_13 = j_13;
        }
        {
          t = not_null(d_13);
          {
            ATerm m_13 = NULL;
            t = n_64(t);
            {
              k_13 = t;
              {
                t = not_null(e_13);
                {
                  ATerm o_13 = NULL;
                  t = o_64(t);
                  {
                    m_13 = t;
                    {
                      ATerm p_13 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SOpt_2, not_null(k_13), not_null(m_13)), not_null(i_13));
                      {
                        p_13 = t;
                        if(((o_13 != NULL) && (o_13 != p_13)))
                          _fail(p_13);
                        else
                          o_13 = p_13;
                      }
                      t = not_null(o_13);
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
ATerm SOpt_value_1 (ATerm t, ATerm v_70 (ATerm))
{
  ATerm w_13 = NULL;
  ATerm v_0 (ATerm t)
  {
    ATerm w_0 (ATerm t)
    {
      ATerm x_13 = NULL;
      x_13 = t;
      if(((w_13 != NULL) && (w_13 != x_13)))
        _fail(x_13);
      else
        w_13 = x_13;
      return(t);
    }
    t = SOpt_2(t, v_70, w_0);
    return(t);
  }
  t = fetch_1(t, v_0);
  {
    t = not_null(w_13);
    t = string_to_int_0(t);
  }
  return(t);
}
ATerm hs_length_0 (ATerm t)
{
  ATerm k_10 = t;
  int v_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_0 (ATerm t)
      {
        ATerm a_14 = NULL;
        a_14 = t;
        z_13 :
        if(!(match_cons(a_14, sym_HS_0)))
          {
            _fail(t);
          }
        return(t);
      }
      t = SOpt_value_1(t, x_0);
      ;
      LocalPopChoice(v_10);
    }
  else
    {
      t = k_10;
      t = term_c_9;
    }
  return(t);
}
ATerm hs_text_0 (ATerm t)
{
  ATerm c_14 = NULL;
  ATerm d_14 = NULL;
  t = hs_length_0(t);
  {
    d_14 = t;
    if(((c_14 != NULL) && (c_14 != d_14)))
      _fail(d_14);
    else
      c_14 = d_14;
  }
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(c_14), term_d_9);
    t = copy_char_0(t);
  }
  return(t);
}
ATerm subt_0 (ATerm t)
{
  ATerm h_14 = NULL,i_14 = NULL,j_14 = NULL;
  h_14 = t;
  g_14 :
  if(match_cons(h_14, sym__2))
    {
      i_14 = ATgetArgument(h_14, 0);
      j_14 = ATgetArgument(h_14, 1);
      {
        ATerm w_10 = t;
        int x_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_subti(not_null(i_14), not_null(j_14));
            ;
            LocalPopChoice(x_10);
          }
        else
          {
            t = w_10;
            t = SSL_subtr(not_null(i_14), not_null(j_14));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Nil_T_0 (ATerm t)
{
  ATerm q_14 = NULL,r_14 = NULL,s_14 = NULL;
  q_14 = t;
  o_14 :
  if(match_cons(q_14, sym__2))
    {
      r_14 = ATgetArgument(q_14, 0);
      s_14 = ATgetArgument(q_14, 1);
      p_14 :
      if(((ATgetType(r_14) == AT_LIST) && ATisEmpty(r_14)))
        {
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, not_null(s_14));
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
ATerm Cons_T_2 (ATerm t, ATerm q_0 (ATerm), ATerm t_0 (ATerm))
{
  ATerm c_15 = NULL,d_15 = NULL,e_15 = NULL,f_15 = NULL,g_15 = NULL;
  c_15 = t;
  a_15 :
  if(match_cons(c_15, sym__2))
    {
      d_15 = ATgetArgument(c_15, 0);
      g_15 = ATgetArgument(c_15, 1);
      b_15 :
      if(((ATgetType(d_15) == AT_LIST) && !(ATisEmpty(d_15))))
        {
          e_15 = ATgetFirst((ATermList) d_15);
          f_15 = (ATerm) ATgetNext((ATermList) d_15);
          {
            ATerm k_15 = NULL,l_15 = NULL,m_15 = NULL,n_15 = NULL;
            ATerm o_15 = NULL,p_15 = NULL,q_15 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(e_15), not_null(g_15));
            {
              t = q_0(t);
              {
                o_15 = t;
                z_14 :
                if(match_cons(o_15, sym__2))
                  {
                    p_15 = ATgetArgument(o_15, 0);
                    q_15 = ATgetArgument(o_15, 1);
                    {
                      ATerm r_15 = NULL,s_15 = NULL,t_15 = NULL;
                      if(((m_15 != NULL) && (m_15 != p_15)))
                        _fail(p_15);
                      else
                        m_15 = p_15;
                      {
                        if(((k_15 != NULL) && (k_15 != q_15)))
                          _fail(q_15);
                        else
                          k_15 = q_15;
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(f_15), not_null(k_15));
                          {
                            t = t_0(t);
                            {
                              r_15 = t;
                              y_14 :
                              if(match_cons(r_15, sym__2))
                                {
                                  s_15 = ATgetArgument(r_15, 0);
                                  t_15 = ATgetArgument(r_15, 1);
                                  {
                                    if(((n_15 != NULL) && (n_15 != s_15)))
                                      _fail(s_15);
                                    else
                                      n_15 = s_15;
                                    if(((l_15 != NULL) && (l_15 != t_15)))
                                      _fail(t_15);
                                    else
                                      l_15 = t_15;
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
                else
                  {
                    _fail(t);
                  }
              }
            }
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(n_15)), not_null(m_15)), not_null(l_15));
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
ATerm thread_map_1 (ATerm t, ATerm n_83 (ATerm))
{
  ATerm x_15 (ATerm t)
  {
    ATerm y_10 = t;
    int k_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_T_2(t, n_83, x_15);
        ;
        LocalPopChoice(k_11);
      }
    else
      {
        t = y_10;
        t = Nil_T_0(t);
      }
    return(t);
  }
  t = x_15(t);
  return(t);
}
ATerm H_2 (ATerm t, ATerm h_64 (ATerm), ATerm i_64 (ATerm))
{
  ATerm e_16 = NULL,f_16 = NULL,g_16 = NULL;
  e_16 = t;
  d_16 :
  if(match_cons(e_16, sym_H_2))
    {
      f_16 = ATgetArgument(e_16, 0);
      g_16 = ATgetArgument(e_16, 1);
      {
        ATerm k_16 = NULL,m_16 = NULL;
        ATerm l_16 = NULL;
        t = SSLgetAnnotations(not_null(e_16));
        {
          l_16 = t;
          if(((k_16 != NULL) && (k_16 != l_16)))
            _fail(l_16);
          else
            k_16 = l_16;
        }
        {
          t = not_null(f_16);
          {
            ATerm o_16 = NULL;
            t = h_64(t);
            {
              m_16 = t;
              {
                t = not_null(g_16);
                {
                  ATerm q_16 = NULL;
                  t = i_64(t);
                  {
                    o_16 = t;
                    {
                      ATerm r_16 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_H_2, not_null(m_16), not_null(o_16)), not_null(k_16));
                      {
                        r_16 = t;
                        if(((q_16 != NULL) && (q_16 != r_16)))
                          _fail(r_16);
                        else
                          q_16 = r_16;
                      }
                      t = not_null(q_16);
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
ATerm is_real_hbox_0 (ATerm t)
{
  ATerm l_11 = t;
  if((PushChoice() == 0))
    {
      ATerm m_11 = t;
      int n_11 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Nil_0(t);
          ;
          LocalPopChoice(n_11);
        }
      else
        {
          t = m_11;
          t = H_2(t, Nil_0, Nil_0);
        }
      PopChoice();
      _fail(t);
    }
  else
    {
      t = l_11;
    }
  return(t);
}
ATerm filter_1 (ATerm t, ATerm a_84 (ATerm))
{
  ATerm o_11 = t;
  int p_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      ;
      LocalPopChoice(p_11);
    }
  else
    {
      t = o_11;
      {
        ATerm q_11 = t;
        int y_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_0 (ATerm t)
            {
              t = filter_1(t, a_84);
              return(t);
            }
            t = Cons_2(t, a_84, y_0);
            ;
            LocalPopChoice(y_11);
          }
        else
          {
            t = q_11;
            {
              ATerm z_16 = NULL,a_17 = NULL,b_17 = NULL;
              z_16 = t;
              y_16 :
              if(((ATgetType(z_16) == AT_LIST) && !(ATisEmpty(z_16))))
                {
                  a_17 = ATgetFirst((ATermList) z_16);
                  b_17 = (ATerm) ATgetNext((ATermList) z_16);
                  {
                    t = not_null(b_17);
                    t = filter_1(t, a_84);
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
ATerm do_vbox_children_0 (ATerm t)
{
  ATerm i_17 = NULL,j_17 = NULL,k_17 = NULL,l_17 = NULL;
  i_17 = t;
  h_17 :
  if(match_cons(i_17, sym__3))
    {
      j_17 = ATgetArgument(i_17, 0);
      k_17 = ATgetArgument(i_17, 1);
      l_17 = ATgetArgument(i_17, 2);
      {
        t = not_null(l_17);
        {
          ATerm z_0 (ATerm t)
          {
            ATerm p_17 = NULL;
            ATerm q_17 = NULL;
            q_17 = t;
            if(((p_17 != NULL) && (p_17 != q_17)))
              _fail(q_17);
            else
              p_17 = q_17;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(p_17), not_null(j_17));
              t = try_abox2text_0(t);
            }
            return(t);
          }
          ATerm a_1 (ATerm t)
          {
            ATerm b_1 (ATerm t)
            {
              ATerm r_17 = NULL;
              ATerm s_17 = NULL;
              s_17 = t;
              if(((r_17 != NULL) && (r_17 != s_17)))
                _fail(s_17);
              else
                r_17 = s_17;
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(r_17), not_null(k_17));
                t = try_abox2text_0(t);
              }
              return(t);
            }
            t = map_1(t, b_1);
            return(t);
          }
          t = Cons_2(t, z_0, a_1);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm is_real_vbox_0 (ATerm t)
{
  ATerm z_11 = t;
  if((PushChoice() == 0))
    {
      ATerm a_12 = t;
      int d_12 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Nil_0(t);
          ;
          LocalPopChoice(d_12);
        }
      else
        {
          t = a_12;
          {
            ATerm c_18 = NULL;
            ATerm e_18 = NULL,f_18 = NULL,l_18 = NULL,m_18 = NULL;
            c_18 = t;
            {
              ATerm e_12;
              e_12 = t;
              {
                ATerm g_18 = NULL;
                ATerm i_18 = NULL,j_18 = NULL,k_18 = NULL;
                t = not_null(c_18);
                {
                  g_18 = t;
                  {
                    t = SSL_explode_term(not_null(g_18));
                    {
                      i_18 = t;
                      z_17 :
                      if(match_cons(i_18, sym__2))
                        {
                          j_18 = ATgetArgument(i_18, 0);
                          k_18 = ATgetArgument(i_18, 1);
                          {
                            if(((e_18 != NULL) && (e_18 != j_18)))
                              _fail(j_18);
                            else
                              e_18 = j_18;
                            if(((f_18 != NULL) && (f_18 != k_18)))
                              _fail(k_18);
                            else
                              f_18 = k_18;
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
              t = e_12;
              {
                ATerm f_12;
                f_12 = t;
                {
                  ATerm n_18 = NULL;
                  ATerm o_18 = NULL;
                  t = not_null(e_18);
                  {
                    n_18 = t;
                    {
                      if(((l_18 != NULL) && (l_18 != n_18)))
                        _fail(n_18);
                      else
                        l_18 = n_18;
                      {
                        t = not_null(f_18);
                        {
                          ATerm c_1 (ATerm t)
                          {
                            ATerm d_1 (ATerm t)
                            {
                              ATerm l_12 = t;
                              int n_12 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = Nil_0(t);
                                  ;
                                  LocalPopChoice(n_12);
                                }
                              else
                                {
                                  t = l_12;
                                  t = Cons_2(t, Nil_0, Nil_0);
                                }
                              return(t);
                            }
                            t = Cons_2(t, d_1, Nil_0);
                            return(t);
                          }
                          t = Cons_2(t, _id, c_1);
                          {
                            o_18 = t;
                            if(((m_18 != NULL) && (m_18 != o_18)))
                              _fail(o_18);
                            else
                              m_18 = o_18;
                          }
                        }
                      }
                    }
                  }
                }
                t = f_12;
                t = SSL_mkterm(not_null(l_18), not_null(m_18));
              }
            }
          }
        }
      PopChoice();
      _fail(t);
    }
  else
    {
      t = z_11;
    }
  return(t);
}
ATerm split_Cons_0 (ATerm t)
{
  ATerm w_18 = NULL,x_18 = NULL,y_18 = NULL;
  w_18 = t;
  v_18 :
  if(((ATgetType(w_18) == AT_LIST) && !(ATisEmpty(w_18))))
    {
      x_18 = ATgetFirst((ATermList) w_18);
      y_18 = (ATerm) ATgetNext((ATermList) w_18);
      t = (ATerm) ATmakeAppl(sym__2, not_null(x_18), not_null(y_18));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm matrix_transpose_0 (ATerm t)
{
  ATerm s_12 = t;
  int v_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_1 (ATerm t)
      {
        ATerm d_19 = NULL;
        d_19 = t;
        c_19 :
        if(((ATgetType(d_19) == AT_LIST) && ATisEmpty(d_19)))
          {
            {
            }
          }
        else
          {
            _fail(t);
          }
        return(t);
      }
      t = map_1(t, e_1);
      t = (ATerm) ATempty;
      ;
      LocalPopChoice(v_12);
    }
  else
    {
      t = s_12;
      {
        t = map_1(t, split_Cons_0);
        {
          t = unzip_0(t);
          {
            t = _2(t, _id, matrix_transpose_0);
            t = MkCons_0(t);
          }
        }
      }
    }
  return(t);
}
ATerm align_right_0 (ATerm t)
{
  ATerm h_19 = NULL,i_19 = NULL,j_19 = NULL,k_19 = NULL;
  h_19 = t;
  g_19 :
  if(match_cons(h_19, sym__3))
    {
      i_19 = ATgetArgument(h_19, 0);
      j_19 = ATgetArgument(h_19, 1);
      k_19 = ATgetArgument(h_19, 2);
      {
        ATerm o_19 = NULL;
        ATerm p_19 = NULL;
        t = (ATerm) ATmakeAppl(sym__3, not_null(i_19), not_null(j_19), not_null(k_19));
        {
          t = align_helper_0(t);
          {
            p_19 = t;
            if(((o_19 != NULL) && (o_19 != p_19)))
              _fail(p_19);
            else
              o_19 = p_19;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(o_19), not_null(j_19));
          t = conc_strings_0(t);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Dupl_0 (ATerm t)
{
  ATerm t_19 = NULL;
  t_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(t_19), not_null(t_19));
  return(t);
}
ATerm div_0 (ATerm t)
{
  ATerm y_19 = NULL,z_19 = NULL,a_20 = NULL;
  y_19 = t;
  x_19 :
  if(match_cons(y_19, sym__2))
    {
      z_19 = ATgetArgument(y_19, 0);
      a_20 = ATgetArgument(y_19, 1);
      {
        ATerm w_12 = t;
        int x_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_divi(not_null(z_19), not_null(a_20));
            ;
            LocalPopChoice(x_12);
          }
        else
          {
            t = w_12;
            t = SSL_divr(not_null(z_19), not_null(a_20));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm div2_0 (ATerm t)
{
  ATerm f_20 = NULL;
  ATerm g_20 = NULL;
  g_20 = t;
  if(((f_20 != NULL) && (f_20 != g_20)))
    _fail(g_20);
  else
    f_20 = g_20;
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(f_20), term_y_12);
    t = div_0(t);
  }
  return(t);
}
ATerm dec_0 (ATerm t)
{
  ATerm j_20 = NULL;
  ATerm k_20 = NULL;
  k_20 = t;
  if(((j_20 != NULL) && (j_20 != k_20)))
    _fail(k_20);
  else
    j_20 = k_20;
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(j_20), term_c_9);
    t = subt_0(t);
  }
  return(t);
}
ATerm mod_0 (ATerm t)
{
  ATerm o_20 = NULL,p_20 = NULL,q_20 = NULL;
  o_20 = t;
  n_20 :
  if(match_cons(o_20, sym__2))
    {
      p_20 = ATgetArgument(o_20, 0);
      q_20 = ATgetArgument(o_20, 1);
      t = SSL_mod(not_null(p_20), not_null(q_20));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm even_0 (ATerm t)
{
  ATerm z_12;
  z_12 = t;
  {
    ATerm w_20 = NULL,y_20 = NULL;
    ATerm x_20 = NULL;
    x_20 = t;
    if(((w_20 != NULL) && (w_20 != x_20)))
      _fail(x_20);
    else
      w_20 = x_20;
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(w_20), term_y_12);
      {
        t = mod_0(t);
        {
          y_20 = t;
          v_20 :
          if(!(match_int(y_20, 0)))
            {
              _fail(t);
            }
        }
      }
    }
  }
  t = z_12;
  return(t);
}
ATerm align_center_0 (ATerm t)
{
  ATerm k_21 = NULL,l_21 = NULL,m_21 = NULL,n_21 = NULL;
  k_21 = t;
  j_21 :
  if(match_cons(k_21, sym__3))
    {
      l_21 = ATgetArgument(k_21, 0);
      m_21 = ATgetArgument(k_21, 1);
      n_21 = ATgetArgument(k_21, 2);
      {
        ATerm r_21 = NULL,s_21 = NULL,t_21 = NULL,u_21 = NULL,v_21 = NULL,w_21 = NULL;
        ATerm x_21 = NULL;
        t = not_null(m_21);
        {
          ATerm y_21 = NULL;
          t = string_length_0(t);
          {
            x_21 = t;
            {
              if(((u_21 != NULL) && (u_21 != x_21)))
                _fail(x_21);
              else
                u_21 = x_21;
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(n_21), not_null(u_21));
                {
                  ATerm z_21 = NULL,a_22 = NULL,b_22 = NULL;
                  t = subt_0(t);
                  {
                    y_21 = t;
                    {
                      if(((r_21 != NULL) && (r_21 != y_21)))
                        _fail(y_21);
                      else
                        r_21 = y_21;
                      {
                        t = not_null(r_21);
                        {
                          ATerm a_13 = t;
                          int f_13 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = even_0(t);
                              LocalPopChoice(f_13);
                              {
                                t = div2_0(t);
                                t = Dupl_0(t);
                              }
                            }
                          else
                            {
                              t = a_13;
                              {
                                t = dec_0(t);
                                {
                                  t = div2_0(t);
                                  {
                                    t = Dupl_0(t);
                                    t = _2(t, inc_0, _id);
                                  }
                                }
                              }
                            }
                          {
                            z_21 = t;
                            i_21 :
                            if(match_cons(z_21, sym__2))
                              {
                                a_22 = ATgetArgument(z_21, 0);
                                b_22 = ATgetArgument(z_21, 1);
                                {
                                  ATerm c_22 = NULL,e_22 = NULL;
                                  if(((s_21 != NULL) && (s_21 != a_22)))
                                    _fail(a_22);
                                  else
                                    s_21 = a_22;
                                  {
                                    if(((v_21 != NULL) && (v_21 != b_22)))
                                      _fail(b_22);
                                    else
                                      v_21 = b_22;
                                    {
                                      ATerm d_22 = NULL;
                                      t = (ATerm) ATmakeAppl(sym__2, not_null(u_21), not_null(s_21));
                                      {
                                        t = add_0(t);
                                        {
                                          d_22 = t;
                                          if(((c_22 != NULL) && (c_22 != d_22)))
                                            _fail(d_22);
                                          else
                                            c_22 = d_22;
                                        }
                                      }
                                      {
                                        t = (ATerm) ATmakeAppl(sym__3, not_null(l_21), not_null(m_21), not_null(c_22));
                                        {
                                          ATerm f_22 = NULL,r_26 = NULL;
                                          t = align_helper_0(t);
                                          {
                                            e_22 = t;
                                            {
                                              if(((t_21 != NULL) && (t_21 != e_22)))
                                                _fail(e_22);
                                              else
                                                t_21 = e_22;
                                              {
                                                ATerm g_22 = NULL;
                                                t = (ATerm) ATmakeAppl(sym__2, not_null(u_21), not_null(v_21));
                                                {
                                                  t = add_0(t);
                                                  {
                                                    g_22 = t;
                                                    if(((f_22 != NULL) && (f_22 != g_22)))
                                                      _fail(g_22);
                                                    else
                                                      f_22 = g_22;
                                                  }
                                                }
                                                {
                                                  t = (ATerm) ATmakeAppl(sym__3, not_null(l_21), not_null(m_21), not_null(f_22));
                                                  {
                                                    t = align_helper_0(t);
                                                    {
                                                      r_26 = t;
                                                      if(((w_21 != NULL) && (w_21 != r_26)))
                                                        _fail(r_26);
                                                      else
                                                        w_21 = r_26;
                                                    }
                                                  }
                                                }
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
        {
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(w_21)), not_null(m_21)), not_null(t_21));
          t = concat_strings_0(t);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm copy_char_0 (ATerm t)
{
  t = copy_0(t);
  t = implode_string_0(t);
  return(t);
}
ATerm pos_0 (ATerm t)
{
  ATerm g_13;
  g_13 = t;
  {
    ATerm j_27 = NULL;
    ATerm k_27 = NULL;
    k_27 = t;
    if(((j_27 != NULL) && (j_27 != k_27)))
      _fail(k_27);
    else
      j_27 = k_27;
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(j_27), term_f_10);
      t = geq_0(t);
    }
  }
  t = g_13;
  return(t);
}
ATerm align_helper_0 (ATerm t)
{
  ATerm u_27 = NULL,v_27 = NULL,w_27 = NULL,x_27 = NULL;
  u_27 = t;
  t_27 :
  if(match_cons(u_27, sym__3))
    {
      v_27 = ATgetArgument(u_27, 0);
      w_27 = ATgetArgument(u_27, 1);
      x_27 = ATgetArgument(u_27, 2);
      {
        ATerm b_28 = NULL;
        ATerm c_28 = NULL,l_28 = NULL;
        t = not_null(w_27);
        {
          t = string_length_0(t);
          {
            ATerm d_28 = NULL;
            d_28 = t;
            if(((c_28 != NULL) && (c_28 != d_28)))
              _fail(d_28);
            else
              c_28 = d_28;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(x_27), not_null(c_28));
              {
                t = subt_0(t);
                {
                  ATerm h_13 = t;
                  int l_13 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = pos_0(t);
                      LocalPopChoice(l_13);
                      {
                        ATerm e_28 = NULL;
                        ATerm k_28 = NULL;
                        k_28 = t;
                        if(((e_28 != NULL) && (e_28 != k_28)))
                          _fail(k_28);
                        else
                          e_28 = k_28;
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(e_28), not_null(v_27));
                          t = copy_char_0(t);
                        }
                      }
                    }
                  else
                    {
                      t = h_13;
                      t = term_n_13;
                    }
                  {
                    l_28 = t;
                    if(((b_28 != NULL) && (b_28 != l_28)))
                      _fail(l_28);
                    else
                      b_28 = l_28;
                  }
                }
              }
            }
          }
        }
        t = not_null(b_28);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm align_left_0 (ATerm t)
{
  ATerm t_28 = NULL,u_28 = NULL,v_28 = NULL,w_28 = NULL;
  t_28 = t;
  s_28 :
  if(match_cons(t_28, sym__3))
    {
      u_28 = ATgetArgument(t_28, 0);
      v_28 = ATgetArgument(t_28, 1);
      w_28 = ATgetArgument(t_28, 2);
      {
        ATerm a_29 = NULL;
        ATerm b_29 = NULL;
        t = (ATerm) ATmakeAppl(sym__3, not_null(u_28), not_null(v_28), not_null(w_28));
        {
          t = align_helper_0(t);
          {
            b_29 = t;
            if(((a_29 != NULL) && (a_29 != b_29)))
              _fail(b_29);
            else
              a_29 = b_29;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(v_28), not_null(a_29));
          t = conc_strings_0(t);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm align_column_0 (ATerm t)
{
  ATerm w_29 = NULL,x_29 = NULL,y_29 = NULL,z_29 = NULL,a_30 = NULL,b_30 = NULL,d_30 = NULL,e_30 = NULL;
  ATerm k_30 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(a_30), term_c_9);
    t = gt_0(t);
    {
      t = not_null(e_30);
      t = align_left_0(t);
    }
    return(t);
  }
  ATerm l_30 (ATerm t)
  {
    t = not_null(x_29);
    return(t);
  }
  ATerm m_30 (ATerm t)
  {
    t = not_null(e_30);
    t = align_center_0(t);
    return(t);
  }
  ATerm n_30 (ATerm t)
  {
    t = not_null(e_30);
    t = align_right_0(t);
    return(t);
  }
  z_29 = t;
  i_29 :
  if(match_cons(z_29, sym__3))
    {
      a_30 = ATgetArgument(z_29, 0);
      b_30 = ATgetArgument(z_29, 1);
      e_30 = ATgetArgument(z_29, 2);
      j_29 :
      if(match_cons(b_30, sym_AL_1))
        {
          d_30 = ATgetArgument(b_30, 0);
          k_29 :
          if(match_cons(e_30, sym__3))
            {
              w_29 = ATgetArgument(e_30, 0);
              x_29 = ATgetArgument(e_30, 1);
              y_29 = ATgetArgument(e_30, 2);
              l_29 :
              if(match_int(a_30, 1))
                {
                  ATerm q_13 = t;
                  int r_13 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = k_30(t);
                      ;
                      LocalPopChoice(r_13);
                    }
                  else
                    {
                      t = q_13;
                      t = l_30(t);
                    }
                }
              else
                {
                  t = k_30(t);
                }
            }
          else
            {
              m_29 :
              t = k_30(t);
            }
        }
      else
        {
          if(match_cons(b_30, sym_AC_1))
            {
              d_30 = ATgetArgument(b_30, 0);
              n_29 :
              t = m_30(t);
            }
          else
            {
              if(match_cons(b_30, sym_AR_1))
                {
                  d_30 = ATgetArgument(b_30, 0);
                  o_29 :
                  t = n_30(t);
                }
              else
                {
                  _fail(t);
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
ATerm SOpts_of_alignment_0 (ATerm t)
{
  ATerm x_30 = NULL,y_30 = NULL;
  x_30 = t;
  w_30 :
  if(match_cons(x_30, sym_AC_1))
    {
      y_30 = ATgetArgument(x_30, 0);
      t = not_null(y_30);
    }
  else
    {
      if(match_cons(x_30, sym_AR_1))
        {
          y_30 = ATgetArgument(x_30, 0);
          t = not_null(y_30);
        }
      else
        {
          if(match_cons(x_30, sym_AL_1))
            {
              y_30 = ATgetArgument(x_30, 0);
              t = not_null(y_30);
            }
          else
            {
              _fail(t);
            }
        }
    }
  return(t);
}
ATerm Snd_0 (ATerm t)
{
  ATerm u_31 = NULL;
  ATerm x_31 = NULL,z_31 = NULL,a_32 = NULL;
  u_31 = t;
  {
    ATerm b_32 = NULL;
    ATerm d_32 = NULL,e_32 = NULL,p_32 = NULL,q_32 = NULL,r_32 = NULL,s_32 = NULL,t_32 = NULL;
    t = not_null(u_31);
    {
      b_32 = t;
      {
        t = SSL_explode_term(not_null(b_32));
        {
          d_32 = t;
          l_31 :
          if(match_cons(d_32, sym__2))
            {
              e_32 = ATgetArgument(d_32, 0);
              p_32 = ATgetArgument(d_32, 1);
              r_31 :
              if(match_string(e_32, ""))
                {
                  s_31 :
                  if(((ATgetType(p_32) == AT_LIST) && !(ATisEmpty(p_32))))
                    {
                      q_32 = ATgetFirst((ATermList) p_32);
                      r_32 = (ATerm) ATgetNext((ATermList) p_32);
                      t_31 :
                      if(((ATgetType(r_32) == AT_LIST) && !(ATisEmpty(r_32))))
                        {
                          s_32 = ATgetFirst((ATermList) r_32);
                          t_32 = (ATerm) ATgetNext((ATermList) r_32);
                          {
                            if(((x_31 != NULL) && (x_31 != q_32)))
                              _fail(q_32);
                            else
                              x_31 = q_32;
                            {
                              if(((a_32 != NULL) && (a_32 != s_32)))
                                _fail(s_32);
                              else
                                a_32 = s_32;
                              if(((z_31 != NULL) && (z_31 != t_32)))
                                _fail(t_32);
                              else
                                z_31 = t_32;
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
    t = not_null(a_32);
  }
  return(t);
}
ATerm max_0 (ATerm t)
{
  ATerm s_13 = t;
  int t_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = gt_0(t);
      LocalPopChoice(t_13);
      t = Fst_0(t);
    }
  else
    {
      t = s_13;
      t = Snd_0(t);
    }
  return(t);
}
ATerm Hd_0 (ATerm t)
{
  ATerm d_33 = NULL,m_33 = NULL,n_33 = NULL;
  d_33 = t;
  c_33 :
  if(((ATgetType(d_33) == AT_LIST) && !(ATisEmpty(d_33))))
    {
      m_33 = ATgetFirst((ATermList) d_33);
      n_33 = (ATerm) ATgetNext((ATermList) d_33);
      t = not_null(m_33);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm list_accum_1 (ATerm t, ATerm g_96 (ATerm))
{
  ATerm s_33 = NULL,u_33 = NULL;
  ATerm u_13;
  u_13 = t;
  {
    ATerm t_33 = NULL;
    t = Tl_0(t);
    {
      t_33 = t;
      if(((s_33 != NULL) && (s_33 != t_33)))
        _fail(t_33);
      else
        s_33 = t_33;
    }
  }
  t = u_13;
  {
    ATerm v_33 = NULL;
    t = Hd_0(t);
    {
      v_33 = t;
      if(((u_33 != NULL) && (u_33 != v_33)))
        _fail(v_33);
      else
        u_33 = v_33;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(s_33), not_null(u_33));
      t = foldl_1(t, g_96);
    }
  }
  return(t);
}
ATerm list_max_0 (ATerm t)
{
  t = list_accum_1(t, max_0);
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
ATerm MkCons_0 (ATerm t)
{
  ATerm a_34 = NULL,b_34 = NULL,c_34 = NULL;
  a_34 = t;
  z_33 :
  if(match_cons(a_34, sym__2))
    {
      b_34 = ATgetArgument(a_34, 0);
      c_34 = ATgetArgument(a_34, 1);
      t = (ATerm) ATinsert(CheckATermList(not_null(c_34)), not_null(b_34));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm flatten_list_0 (ATerm t)
{
  ATerm f_1 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  ATerm g_1 (ATerm t)
  {
    ATerm v_13 = t;
    int y_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = _2(t, is_list_0, _id);
        LocalPopChoice(y_13);
        t = conc_two_lists_0(t);
      }
    else
      {
        t = v_13;
        t = MkCons_0(t);
      }
    return(t);
  }
  ATerm h_1 (ATerm t)
  {
    ATerm b_14 = t;
    int e_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        LocalPopChoice(e_14);
        t = flatten_list_0(t);
      }
    else
      {
        t = b_14;
        {
        }
      }
    return(t);
  }
  t = foldr_3(t, f_1, g_1, h_1);
  return(t);
}
ATerm UnZip2_0 (ATerm t)
{
  ATerm k_34 = NULL,l_34 = NULL,m_34 = NULL,n_34 = NULL,o_34 = NULL,p_34 = NULL,q_34 = NULL;
  k_34 = t;
  h_34 :
  if(match_cons(k_34, sym__2))
    {
      l_34 = ATgetArgument(k_34, 0);
      o_34 = ATgetArgument(k_34, 1);
      i_34 :
      if(match_cons(l_34, sym__2))
        {
          m_34 = ATgetArgument(l_34, 0);
          n_34 = ATgetArgument(l_34, 1);
          j_34 :
          if(match_cons(o_34, sym__2))
            {
              p_34 = ATgetArgument(o_34, 0);
              q_34 = ATgetArgument(o_34, 1);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(p_34)), not_null(m_34)), (ATerm) ATinsert(CheckATermList(not_null(q_34)), not_null(n_34)));
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
ATerm UnZip3_0 (ATerm t)
{
  ATerm y_34 = NULL,z_34 = NULL,a_35 = NULL;
  y_34 = t;
  x_34 :
  if(((ATgetType(y_34) == AT_LIST) && !(ATisEmpty(y_34))))
    {
      z_34 = ATgetFirst((ATermList) y_34);
      a_35 = (ATerm) ATgetNext((ATermList) y_34);
      t = (ATerm) ATmakeAppl(sym__2, not_null(z_34), not_null(a_35));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm UnZip1_0 (ATerm t)
{
  ATerm g_35 = NULL;
  g_35 = t;
  f_35 :
  if(((ATgetType(g_35) == AT_LIST) && ATisEmpty(g_35)))
    {
      t = term_f_14;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm unzip_1 (ATerm t, ATerm w_78 (ATerm))
{
  t = genzip_4(t, UnZip1_0, UnZip3_0, UnZip2_0, w_78);
  return(t);
}
ATerm unzip_0 (ATerm t)
{
  t = unzip_1(t, _id);
  return(t);
}
ATerm do_A_column_0 (ATerm t)
{
  ATerm y_35 = NULL,z_35 = NULL,a_36 = NULL,b_36 = NULL,c_36 = NULL,d_36 = NULL,e_36 = NULL,f_36 = NULL,g_36 = NULL;
  y_35 = t;
  u_35 :
  if(match_cons(y_35, sym__2))
    {
      z_35 = ATgetArgument(y_35, 0);
      e_36 = ATgetArgument(y_35, 1);
      v_35 :
      if(match_cons(z_35, sym__2))
        {
          a_36 = ATgetArgument(z_35, 0);
          b_36 = ATgetArgument(z_35, 1);
          w_35 :
          if(match_cons(b_36, sym__2))
            {
              c_36 = ATgetArgument(b_36, 0);
              d_36 = ATgetArgument(b_36, 1);
              x_35 :
              if(match_cons(e_36, sym__2))
                {
                  f_36 = ATgetArgument(e_36, 0);
                  g_36 = ATgetArgument(e_36, 1);
                  {
                    ATerm y_36 = NULL,z_36 = NULL,a_37 = NULL,b_37 = NULL,c_37 = NULL,s_37 = NULL;
                    ATerm k_14;
                    k_14 = t;
                    {
                      ATerm f_37 = NULL,g_37 = NULL,h_37 = NULL;
                      t = not_null(d_36);
                      {
                        ATerm i_1 (ATerm t)
                        {
                          ATerm d_37 = NULL;
                          ATerm e_37 = NULL;
                          e_37 = t;
                          if(((d_37 != NULL) && (d_37 != e_37)))
                            _fail(e_37);
                          else
                            d_37 = e_37;
                          {
                            t = (ATerm) ATmakeAppl(sym__2, not_null(d_37), not_null(f_36));
                            t = try_abox2text_0(t);
                          }
                          return(t);
                        }
                        t = map_1(t, i_1);
                        {
                          t = unzip_0(t);
                          {
                            ATerm j_1 (ATerm t)
                            {
                              ATerm k_1 (ATerm t)
                              {
                                ATerm l_1 (ATerm t)
                                {
                                  t = flatten_list_0(t);
                                  t = concat_strings_0(t);
                                  return(t);
                                }
                                t = try_1(t, l_1);
                                return(t);
                              }
                              t = map_1(t, k_1);
                              return(t);
                            }
                            t = _2(t, j_1, list_max_0);
                            {
                              f_37 = t;
                              r_35 :
                              if(match_cons(f_37, sym__2))
                                {
                                  g_37 = ATgetArgument(f_37, 0);
                                  h_37 = ATgetArgument(f_37, 1);
                                  {
                                    ATerm i_37 = NULL;
                                    if(((z_36 != NULL) && (z_36 != g_37)))
                                      _fail(g_37);
                                    else
                                      z_36 = g_37;
                                    {
                                      if(((y_36 != NULL) && (y_36 != h_37)))
                                        _fail(h_37);
                                      else
                                        y_36 = h_37;
                                      {
                                        t = (ATerm) ATmakeAppl(sym__2, not_null(y_36), not_null(f_36));
                                        {
                                          ATerm j_37 = NULL;
                                          t = subt_0(t);
                                          {
                                            i_37 = t;
                                            {
                                              if(((a_37 != NULL) && (a_37 != i_37)))
                                                _fail(i_37);
                                              else
                                                a_37 = i_37;
                                              {
                                                ATerm r_37 = NULL;
                                                ATerm l_14 = t;
                                                int m_14 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = (ATerm) ATmakeAppl(sym__2, not_null(c_36), term_c_9);
                                                    t = gt_0(t);
                                                    LocalPopChoice(m_14);
                                                    {
                                                      t = not_null(a_36);
                                                      {
                                                        t = SOpts_of_alignment_0(t);
                                                        t = hs_text_0(t);
                                                      }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = l_14;
                                                    t = term_n_13;
                                                  }
                                                {
                                                  j_37 = t;
                                                  {
                                                    if(((b_37 != NULL) && (b_37 != j_37)))
                                                      _fail(j_37);
                                                    else
                                                      b_37 = j_37;
                                                    {
                                                      t = not_null(z_36);
                                                      {
                                                        ATerm m_1 (ATerm t)
                                                        {
                                                          ATerm k_37 = NULL,p_37 = NULL;
                                                          ATerm l_37 = NULL;
                                                          l_37 = t;
                                                          if(((k_37 != NULL) && (k_37 != l_37)))
                                                            _fail(l_37);
                                                          else
                                                            k_37 = l_37;
                                                          {
                                                            t = (ATerm) ATmakeAppl(sym__3, not_null(c_36), not_null(a_36), (ATerm) ATmakeAppl(sym__3, term_d_9, not_null(k_37), not_null(a_37)));
                                                            {
                                                              t = align_column_0(t);
                                                              {
                                                                ATerm q_37 = NULL;
                                                                q_37 = t;
                                                                if(((p_37 != NULL) && (p_37 != q_37)))
                                                                  _fail(q_37);
                                                                else
                                                                  p_37 = q_37;
                                                                {
                                                                  t = (ATerm) ATmakeAppl(sym__2, not_null(p_37), not_null(b_37));
                                                                  t = conc_strings_0(t);
                                                                }
                                                              }
                                                            }
                                                          }
                                                          return(t);
                                                        }
                                                        t = map_1(t, m_1);
                                                        {
                                                          r_37 = t;
                                                          if(((c_37 != NULL) && (c_37 != r_37)))
                                                            _fail(r_37);
                                                          else
                                                            c_37 = r_37;
                                                        }
                                                      }
                                                    }
                                                  }
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
                    t = k_14;
                    {
                      ATerm t_37 = NULL,v_37 = NULL;
                      ATerm u_37 = NULL;
                      t = not_null(b_37);
                      {
                        t = string_length_0(t);
                        {
                          u_37 = t;
                          if(((t_37 != NULL) && (t_37 != u_37)))
                            _fail(u_37);
                          else
                            t_37 = u_37;
                        }
                      }
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(t_37), not_null(y_36));
                        {
                          t = add_0(t);
                          {
                            v_37 = t;
                            if(((s_37 != NULL) && (s_37 != v_37)))
                              _fail(v_37);
                            else
                              s_37 = v_37;
                          }
                        }
                      }
                      t = (ATerm) ATmakeAppl(sym__2, not_null(s_37), (ATerm) ATinsert(CheckATermList(not_null(g_36)), not_null(c_37)));
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
  return(t);
}
ATerm Zip3_0 (ATerm t)
{
  ATerm m_38 = NULL,n_38 = NULL,o_38 = NULL;
  m_38 = t;
  l_38 :
  if(match_cons(m_38, sym__2))
    {
      n_38 = ATgetArgument(m_38, 0);
      o_38 = ATgetArgument(m_38, 1);
      t = (ATerm) ATinsert(CheckATermList(not_null(o_38)), not_null(n_38));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Zip2_0 (ATerm t)
{
  ATerm y_38 = NULL,d_39 = NULL,e_39 = NULL,f_39 = NULL,g_39 = NULL,j_39 = NULL,k_39 = NULL;
  y_38 = t;
  v_38 :
  if(match_cons(y_38, sym__2))
    {
      d_39 = ATgetArgument(y_38, 0);
      g_39 = ATgetArgument(y_38, 1);
      w_38 :
      if(((ATgetType(d_39) == AT_LIST) && !(ATisEmpty(d_39))))
        {
          e_39 = ATgetFirst((ATermList) d_39);
          f_39 = (ATerm) ATgetNext((ATermList) d_39);
          x_38 :
          if(((ATgetType(g_39) == AT_LIST) && !(ATisEmpty(g_39))))
            {
              j_39 = ATgetFirst((ATermList) g_39);
              k_39 = (ATerm) ATgetNext((ATermList) g_39);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(e_39), not_null(j_39)), (ATerm) ATmakeAppl(sym__2, not_null(f_39), not_null(k_39)));
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
ATerm Zip1_0 (ATerm t)
{
  ATerm j_40 = NULL,k_40 = NULL,l_40 = NULL;
  j_40 = t;
  g_40 :
  if(match_cons(j_40, sym__2))
    {
      k_40 = ATgetArgument(j_40, 0);
      l_40 = ATgetArgument(j_40, 1);
      h_40 :
      if(((ATgetType(k_40) == AT_LIST) && ATisEmpty(k_40)))
        {
          i_40 :
          if(((ATgetType(l_40) == AT_LIST) && ATisEmpty(l_40)))
            {
              t = (ATerm) ATempty;
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
ATerm genzip_4 (ATerm t, ATerm m_78 (ATerm), ATerm n_78 (ATerm), ATerm o_78 (ATerm), ATerm p_78 (ATerm))
{
  ATerm n_40 (ATerm t)
  {
    ATerm n_14 = t;
    int t_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_78(t);
        ;
        LocalPopChoice(t_14);
      }
    else
      {
        t = n_14;
        {
          t = n_78(t);
          {
            t = _2(t, p_78, n_40);
            t = o_78(t);
          }
        }
      }
    return(t);
  }
  t = n_40(t);
  return(t);
}
ATerm zip_1 (ATerm t, ATerm r_78 (ATerm))
{
  t = genzip_4(t, Zip1_0, Zip2_0, Zip3_0, r_78);
  return(t);
}
ATerm zip_0 (ATerm t)
{
  t = zip_1(t, _id);
  return(t);
}
ATerm inc_0 (ATerm t)
{
  ATerm p_40 = NULL;
  ATerm q_40 = NULL;
  q_40 = t;
  if(((p_40 != NULL) && (p_40 != q_40)))
    _fail(q_40);
  else
    p_40 = q_40;
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(p_40), term_c_9);
    t = add_0(t);
  }
  return(t);
}
ATerm map_with_index_1 (ATerm t, ATerm j_99 (ATerm))
{
  ATerm a_41 = NULL;
  ATerm b_41 = NULL;
  b_41 = t;
  if(((a_41 != NULL) && (a_41 != b_41)))
    _fail(b_41);
  else
    a_41 = b_41;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_c_9, not_null(a_41));
    {
      ATerm r_41 (ATerm t)
      {
        ATerm c_41 = NULL,d_41 = NULL,e_41 = NULL,f_41 = NULL,g_41 = NULL;
        c_41 = t;
        y_40 :
        if(match_cons(c_41, sym__2))
          {
            d_41 = ATgetArgument(c_41, 0);
            e_41 = ATgetArgument(c_41, 1);
            z_40 :
            if(((ATgetType(e_41) == AT_LIST) && ATisEmpty(e_41)))
              {
                t = (ATerm) ATempty;
              }
            else
              {
                if(((ATgetType(e_41) == AT_LIST) && !(ATisEmpty(e_41))))
                  {
                    f_41 = ATgetFirst((ATermList) e_41);
                    g_41 = (ATerm) ATgetNext((ATermList) e_41);
                    {
                      ATerm k_41 = NULL,m_41 = NULL;
                      ATerm u_14;
                      u_14 = t;
                      {
                        ATerm l_41 = NULL;
                        t = (ATerm) ATmakeAppl(sym__2, not_null(d_41), not_null(f_41));
                        {
                          t = j_99(t);
                          {
                            l_41 = t;
                            if(((k_41 != NULL) && (k_41 != l_41)))
                              _fail(l_41);
                            else
                              k_41 = l_41;
                          }
                        }
                      }
                      t = u_14;
                      {
                        ATerm n_41 = NULL,p_41 = NULL;
                        ATerm o_41 = NULL;
                        t = not_null(d_41);
                        {
                          t = inc_0(t);
                          {
                            o_41 = t;
                            if(((n_41 != NULL) && (n_41 != o_41)))
                              _fail(o_41);
                            else
                              n_41 = o_41;
                          }
                        }
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(n_41), not_null(g_41));
                          {
                            t = r_41(t);
                            {
                              p_41 = t;
                              if(((m_41 != NULL) && (m_41 != p_41)))
                                _fail(p_41);
                              else
                                m_41 = p_41;
                            }
                          }
                        }
                        t = (ATerm) ATinsert(CheckATermList(not_null(m_41)), not_null(k_41));
                      }
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
      t = r_41(t);
    }
  }
  return(t);
}
ATerm add_indices_0 (ATerm t)
{
  t = map_with_index_1(t, _id);
  return(t);
}
ATerm foldr_3 (ATerm t, ATerm z_82 (ATerm), ATerm a_83 (ATerm), ATerm b_83 (ATerm))
{
  ATerm v_14 = t;
  int w_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = z_82(t);
      ;
      LocalPopChoice(w_14);
    }
  else
    {
      t = v_14;
      {
        ATerm b_42 = NULL,c_42 = NULL,d_42 = NULL;
        b_42 = t;
        a_42 :
        if(((ATgetType(b_42) == AT_LIST) && !(ATisEmpty(b_42))))
          {
            c_42 = ATgetFirst((ATermList) b_42);
            d_42 = (ATerm) ATgetNext((ATermList) b_42);
            {
              ATerm g_42 = NULL,i_42 = NULL;
              ATerm x_14;
              x_14 = t;
              {
                ATerm h_42 = NULL;
                t = not_null(c_42);
                {
                  t = b_83(t);
                  {
                    h_42 = t;
                    if(((g_42 != NULL) && (g_42 != h_42)))
                      _fail(h_42);
                    else
                      g_42 = h_42;
                  }
                }
              }
              t = x_14;
              {
                ATerm j_42 = NULL;
                t = not_null(d_42);
                {
                  t = foldr_3(t, z_82, a_83, b_83);
                  {
                    j_42 = t;
                    if(((i_42 != NULL) && (i_42 != j_42)))
                      _fail(j_42);
                    else
                      i_42 = j_42;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(g_42), not_null(i_42));
                  t = a_83(t);
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
ATerm length_0 (ATerm t)
{
  ATerm n_1 (ATerm t)
  {
    t = term_f_10;
    return(t);
  }
  ATerm p_1 (ATerm t)
  {
    t = term_c_9;
    return(t);
  }
  t = foldr_3(t, n_1, add_0, p_1);
  return(t);
}
ATerm while_not_2 (ATerm t, ATerm z_92 (ATerm), ATerm a_93 (ATerm))
{
  ATerm n_42 (ATerm t)
  {
    ATerm h_15 = t;
    int i_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = z_92(t);
        ;
        LocalPopChoice(i_15);
      }
    else
      {
        t = h_15;
        {
          t = a_93(t);
          t = n_42(t);
        }
      }
    return(t);
  }
  t = n_42(t);
  return(t);
}
ATerm for_3 (ATerm t, ATerm c_93 (ATerm), ATerm d_93 (ATerm), ATerm e_93 (ATerm))
{
  t = c_93(t);
  t = while_not_2(t, d_93, e_93);
  return(t);
}
ATerm copy_0 (ATerm t)
{
  ATerm q_1 (ATerm t)
  {
    ATerm w_42 = NULL,x_42 = NULL,z_42 = NULL;
    w_42 = t;
    p_42 :
    if(match_cons(w_42, sym__2))
      {
        x_42 = ATgetArgument(w_42, 0);
        z_42 = ATgetArgument(w_42, 1);
        t = (ATerm) ATmakeAppl(sym__3, not_null(x_42), not_null(z_42), (ATerm) ATempty);
      }
    else
      {
        _fail(t);
      }
    return(t);
  }
  ATerm r_1 (ATerm t)
  {
    ATerm c_43 = NULL,d_43 = NULL,e_43 = NULL,f_43 = NULL;
    c_43 = t;
    r_42 :
    if(match_cons(c_43, sym__3))
      {
        d_43 = ATgetArgument(c_43, 0);
        e_43 = ATgetArgument(c_43, 1);
        f_43 = ATgetArgument(c_43, 2);
        s_42 :
        if(match_int(d_43, 0))
          {
            t = not_null(f_43);
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
  ATerm s_1 (ATerm t)
  {
    ATerm i_43 = NULL,j_43 = NULL,k_43 = NULL,l_43 = NULL;
    i_43 = t;
    v_42 :
    if(match_cons(i_43, sym__3))
      {
        j_43 = ATgetArgument(i_43, 0);
        k_43 = ATgetArgument(i_43, 1);
        l_43 = ATgetArgument(i_43, 2);
        {
          ATerm t_43 = NULL;
          ATerm j_15;
          j_15 = t;
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(j_43), term_c_9);
            t = geq_0(t);
          }
          t = j_15;
          {
            ATerm u_43 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(j_43), term_c_9);
            {
              t = subt_0(t);
              {
                u_43 = t;
                if(((t_43 != NULL) && (t_43 != u_43)))
                  _fail(u_43);
                else
                  t_43 = u_43;
              }
            }
            t = (ATerm) ATmakeAppl(sym__3, not_null(t_43), not_null(k_43), (ATerm) ATinsert(CheckATermList(not_null(l_43)), not_null(k_43)));
          }
        }
      }
    else
      {
        _fail(t);
      }
    return(t);
  }
  t = for_3(t, q_1, r_1, s_1);
  return(t);
}
ATerm FitToMax_1 (ATerm t, ATerm u_70 (ATerm))
{
  ATerm k_44 = NULL;
  ATerm m_44 = NULL,n_44 = NULL,o_44 = NULL,p_44 = NULL;
  k_44 = t;
  {
    ATerm q_44 = NULL;
    ATerm r_44 = NULL,t_44 = NULL;
    t = length_0(t);
    {
      q_44 = t;
      {
        if(((m_44 != NULL) && (m_44 != q_44)))
          _fail(q_44);
        else
          m_44 = q_44;
        {
          ATerm s_44 = NULL;
          t = term_o_8;
          {
            t = u_70(t);
            {
              s_44 = t;
              if(((r_44 != NULL) && (r_44 != s_44)))
                _fail(s_44);
              else
                r_44 = s_44;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(r_44), not_null(m_44));
            {
              ATerm y_44 = NULL;
              t = subt_0(t);
              {
                t_44 = t;
                {
                  if(((n_44 != NULL) && (n_44 != t_44)))
                    _fail(t_44);
                  else
                    n_44 = t_44;
                  {
                    ATerm u_15 = t;
                    int v_15 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm u_44 = NULL,w_44 = NULL;
                        ATerm v_44 = NULL;
                        v_44 = t;
                        if(((u_44 != NULL) && (u_44 != v_44)))
                          _fail(v_44);
                        else
                          u_44 = v_44;
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(u_44), term_f_10);
                          {
                            t = gt_0(t);
                            {
                              t = (ATerm) ATmakeAppl(sym__2, not_null(n_44), (ATerm) ATempty);
                              {
                                t = copy_0(t);
                                {
                                  w_44 = t;
                                  {
                                    if(((o_44 != NULL) && (o_44 != w_44)))
                                      _fail(w_44);
                                    else
                                      o_44 = w_44;
                                    {
                                      t = (ATerm) ATmakeAppl(sym__2, not_null(k_44), not_null(o_44));
                                      t = conc_0(t);
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                        ;
                        LocalPopChoice(v_15);
                      }
                    else
                      {
                        t = u_15;
                        {
                          ATerm w_15 = t;
                          int y_15 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm x_44 = NULL;
                              x_44 = t;
                              i_44 :
                              if(match_int(x_44, 0))
                                {
                                  t = not_null(k_44);
                                }
                              else
                                {
                                  _fail(t);
                                }
                              ;
                              LocalPopChoice(y_15);
                            }
                          else
                            {
                              t = w_15;
                              {
                                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(k_44)), term_z_15);
                                t = fatal_error_0(t);
                              }
                            }
                        }
                      }
                    {
                      y_44 = t;
                      if(((p_44 != NULL) && (p_44 != y_44)))
                        _fail(y_44);
                      else
                        p_44 = y_44;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    t = not_null(p_44);
  }
  return(t);
}
ATerm to_matrix_1 (ATerm t, ATerm t_70 (ATerm))
{
  ATerm t_1 (ATerm t)
  {
    t = FitToMax_1(t, t_70);
    return(t);
  }
  t = map_1(t, t_1);
  return(t);
}
ATerm R_2 (ATerm t, ATerm z_63 (ATerm), ATerm a_64 (ATerm))
{
  ATerm q_45 = NULL,s_45 = NULL,t_45 = NULL;
  q_45 = t;
  p_45 :
  if(match_cons(q_45, sym_R_2))
    {
      s_45 = ATgetArgument(q_45, 0);
      t_45 = ATgetArgument(q_45, 1);
      {
        ATerm c_46 = NULL,e_46 = NULL;
        ATerm d_46 = NULL;
        t = SSLgetAnnotations(not_null(q_45));
        {
          d_46 = t;
          if(((c_46 != NULL) && (c_46 != d_46)))
            _fail(d_46);
          else
            c_46 = d_46;
        }
        {
          t = not_null(s_45);
          {
            ATerm g_46 = NULL;
            t = z_63(t);
            {
              e_46 = t;
              {
                t = not_null(t_45);
                {
                  ATerm m_46 = NULL;
                  t = a_64(t);
                  {
                    g_46 = t;
                    {
                      ATerm n_46 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_R_2, not_null(e_46), not_null(g_46)), not_null(c_46));
                      {
                        n_46 = t;
                        if(((m_46 != NULL) && (m_46 != n_46)))
                          _fail(n_46);
                        else
                          m_46 = n_46;
                      }
                      t = not_null(m_46);
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
ATerm split_2 (ATerm t, ATerm v_75 (ATerm), ATerm w_75 (ATerm))
{
  ATerm v_46 = NULL,x_46 = NULL;
  ATerm a_16;
  a_16 = t;
  {
    ATerm w_46 = NULL;
    t = v_75(t);
    {
      w_46 = t;
      if(((v_46 != NULL) && (v_46 != w_46)))
        _fail(w_46);
      else
        v_46 = w_46;
    }
  }
  t = a_16;
  {
    ATerm y_46 = NULL;
    t = w_75(t);
    {
      y_46 = t;
      if(((x_46 != NULL) && (x_46 != y_46)))
        _fail(y_46);
      else
        x_46 = y_46;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(v_46), not_null(x_46));
  }
  return(t);
}
ATerm construct_rows_0 (ATerm t)
{
  ATerm u_1 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = split_2(t, _id, u_1);
  {
    ATerm j_48 (ATerm t)
    {
      ATerm k_47 = NULL,l_47 = NULL,m_47 = NULL,n_47 = NULL,o_47 = NULL,p_47 = NULL,q_47 = NULL;
      ATerm m_48 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(p_47), (ATerm) ATinsert(CheckATermList(not_null(q_47)), not_null(o_47)));
        t = j_48(t);
        return(t);
      }
      m_47 = t;
      h_47 :
      if(match_cons(m_47, sym__2))
        {
          n_47 = ATgetArgument(m_47, 0);
          q_47 = ATgetArgument(m_47, 1);
          i_47 :
          if(((ATgetType(n_47) == AT_LIST) && ATisEmpty(n_47)))
            {
              {
                ATerm v_47 = NULL;
                ATerm w_47 = NULL;
                t = not_null(q_47);
                {
                  t = reverse_0(t);
                  {
                    w_47 = t;
                    if(((v_47 != NULL) && (v_47 != w_47)))
                      _fail(w_47);
                    else
                      v_47 = w_47;
                  }
                }
                t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_R_2, (ATerm)ATempty, not_null(v_47)));
              }
            }
          else
            {
              if(((ATgetType(n_47) == AT_LIST) && !(ATisEmpty(n_47))))
                {
                  o_47 = ATgetFirst((ATermList) n_47);
                  p_47 = (ATerm) ATgetNext((ATermList) n_47);
                  j_47 :
                  if(match_cons(o_47, sym_R_2))
                    {
                      k_47 = ATgetArgument(o_47, 0);
                      l_47 = ATgetArgument(o_47, 1);
                      {
                        ATerm b_16 = t;
                        int c_16 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm b_48 = NULL,d_48 = NULL;
                            ATerm h_16;
                            h_16 = t;
                            {
                              ATerm c_48 = NULL;
                              t = not_null(q_47);
                              {
                                t = reverse_0(t);
                                {
                                  c_48 = t;
                                  if(((b_48 != NULL) && (b_48 != c_48)))
                                    _fail(c_48);
                                  else
                                    b_48 = c_48;
                                }
                              }
                            }
                            t = h_16;
                            {
                              ATerm e_48 = NULL;
                              t = (ATerm) ATmakeAppl(sym__2, not_null(p_47), (ATerm) ATempty);
                              {
                                t = j_48(t);
                                {
                                  e_48 = t;
                                  if(((d_48 != NULL) && (d_48 != e_48)))
                                    _fail(e_48);
                                  else
                                    d_48 = e_48;
                                }
                              }
                              t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(d_48)), (ATerm) ATmakeAppl(sym_R_2, not_null(k_47), not_null(l_47))), (ATerm) ATmakeAppl(sym_R_2, (ATerm)ATempty, not_null(b_48)));
                            }
                            ;
                            LocalPopChoice(c_16);
                          }
                        else
                          {
                            t = b_16;
                            t = m_48(t);
                          }
                      }
                    }
                  else
                    {
                      t = m_48(t);
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
    t = j_48(t);
    {
      ATerm w_1 (ATerm t)
      {
        ATerm i_16 = t;
        if((PushChoice() == 0))
          {
            t = R_2(t, _id, Nil_0);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = i_16;
          }
        return(t);
      }
      t = filter_1(t, w_1);
    }
  }
  return(t);
}
ATerm Last_0 (ATerm t)
{
  ATerm t_48 = NULL,u_48 = NULL,v_48 = NULL;
  t_48 = t;
  r_48 :
  if(((ATgetType(t_48) == AT_LIST) && !(ATisEmpty(t_48))))
    {
      u_48 = ATgetFirst((ATermList) t_48);
      v_48 = (ATerm) ATgetNext((ATermList) t_48);
      s_48 :
      if(((ATgetType(v_48) == AT_LIST) && ATisEmpty(v_48)))
        {
          t = not_null(u_48);
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
ATerm last_0 (ATerm t)
{
  ATerm j_16 = t;
  int n_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Last_0(t);
      ;
      LocalPopChoice(n_16);
    }
  else
    {
      t = j_16;
      {
        t = Tl_0(t);
        t = last_0(t);
      }
    }
  return(t);
}
ATerm eq_0 (ATerm t)
{
  ATerm b_49 = NULL,c_49 = NULL,d_49 = NULL;
  b_49 = t;
  a_49 :
  if(match_cons(b_49, sym__2))
    {
      c_49 = ATgetArgument(b_49, 0);
      d_49 = ATgetArgument(b_49, 1);
      if(((c_49 != NULL) && (c_49 != d_49)))
        _fail(d_49);
      else
        c_49 = d_49;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm elem_1 (ATerm t, ATerm b_77 (ATerm))
{
  ATerm j_49 = NULL,k_49 = NULL,l_49 = NULL;
  j_49 = t;
  i_49 :
  if(match_cons(j_49, sym__2))
    {
      k_49 = ATgetArgument(j_49, 0);
      l_49 = ATgetArgument(j_49, 1);
      {
        t = not_null(l_49);
        {
          ATerm x_1 (ATerm t)
          {
            ATerm p_16;
            p_16 = t;
            {
              ATerm o_49 = NULL;
              ATerm p_49 = NULL;
              p_49 = t;
              if(((o_49 != NULL) && (o_49 != p_49)))
                _fail(p_49);
              else
                o_49 = p_49;
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(k_49), not_null(o_49));
                t = b_77(t);
              }
            }
            t = p_16;
            return(t);
          }
          t = _one(t, x_1);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm elem_0 (ATerm t)
{
  t = elem_1(t, eq_0);
  return(t);
}
ATerm at_suffix_1 (ATerm t, ATerm m_77 (ATerm))
{
  ATerm s_49 (ATerm t)
  {
    ATerm s_16 = t;
    int t_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_77(t);
        ;
        LocalPopChoice(t_16);
      }
    else
      {
        t = s_16;
        t = Cons_2(t, _id, s_49);
      }
    return(t);
  }
  t = s_49(t);
  return(t);
}
ATerm split_fetch_1 (ATerm t, ATerm f_77 (ATerm))
{
  ATerm v_49 = NULL,x_49 = NULL;
  ATerm y_1 (ATerm t)
  {
    t = Cons_2(t, f_77, _id);
    {
      ATerm z_1 (ATerm t)
      {
        ATerm w_49 = NULL;
        w_49 = t;
        if(((v_49 != NULL) && (v_49 != w_49)))
          _fail(w_49);
        else
          v_49 = w_49;
        return(t);
      }
      t = Cons_2(t, _id, z_1);
      t = (ATerm) ATempty;
    }
    return(t);
  }
  t = at_suffix_1(t, y_1);
  {
    ATerm y_49 = NULL;
    y_49 = t;
    if(((x_49 != NULL) && (x_49 != y_49)))
      _fail(y_49);
    else
      x_49 = y_49;
    t = (ATerm) ATmakeAppl(sym__2, not_null(x_49), not_null(v_49));
  }
  return(t);
}
ATerm list_tokenize_1 (ATerm t, ATerm c_100 (ATerm))
{
  ATerm n_50 = NULL,o_50 = NULL,p_50 = NULL,q_50 = NULL,r_50 = NULL,s_50 = NULL,t_50 = NULL;
  ATerm u_16 = t;
  int v_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = split_fetch_1(t, c_100);
      ;
      LocalPopChoice(v_16);
    }
  else
    {
      t = u_16;
      {
        ATerm l_50 = NULL;
        ATerm m_50 = NULL;
        m_50 = t;
        if(((l_50 != NULL) && (l_50 != m_50)))
          _fail(m_50);
        else
          l_50 = m_50;
        t = (ATerm) ATmakeAppl(sym__2, not_null(l_50), (ATerm) ATempty);
      }
    }
  {
    n_50 = t;
    h_50 :
    if(match_cons(n_50, sym__2))
      {
        o_50 = ATgetArgument(n_50, 0);
        r_50 = ATgetArgument(n_50, 1);
        i_50 :
        if(((ATgetType(o_50) == AT_LIST) && ATisEmpty(o_50)))
          {
            j_50 :
            if(((ATgetType(r_50) == AT_LIST) && ATisEmpty(r_50)))
              {
                t = (ATerm) ATempty;
              }
            else
              {
                if(((ATgetType(r_50) == AT_LIST) && !(ATisEmpty(r_50))))
                  {
                    s_50 = ATgetFirst((ATermList) r_50);
                    t_50 = (ATerm) ATgetNext((ATermList) r_50);
                    {
                      t = not_null(r_50);
                      t = list_tokenize_1(t, c_100);
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
            if(((ATgetType(o_50) == AT_LIST) && !(ATisEmpty(o_50))))
              {
                p_50 = ATgetFirst((ATermList) o_50);
                q_50 = (ATerm) ATgetNext((ATermList) o_50);
                k_50 :
                if(((ATgetType(r_50) == AT_LIST) && ATisEmpty(r_50)))
                  {
                    t = (ATerm) ATinsert(ATempty, not_null(o_50));
                  }
                else
                  {
                    if(((ATgetType(r_50) == AT_LIST) && !(ATisEmpty(r_50))))
                      {
                        s_50 = ATgetFirst((ATermList) r_50);
                        t_50 = (ATerm) ATgetNext((ATermList) r_50);
                        {
                          ATerm y_50 = NULL;
                          ATerm z_50 = NULL;
                          t = not_null(r_50);
                          {
                            t = list_tokenize_1(t, c_100);
                            {
                              z_50 = t;
                              if(((y_50 != NULL) && (y_50 != z_50)))
                                _fail(z_50);
                              else
                                y_50 = z_50;
                            }
                          }
                          t = (ATerm) ATinsert(CheckATermList(not_null(y_50)), not_null(o_50));
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
          }
      }
    else
      {
        _fail(t);
      }
  }
  return(t);
}
ATerm string_tokenize_0 (ATerm t)
{
  ATerm k_51 = NULL,l_51 = NULL,m_51 = NULL;
  t = _2(t, _id, explode_string_0);
  {
    k_51 = t;
    j_51 :
    if(match_cons(k_51, sym__2))
      {
        l_51 = ATgetArgument(k_51, 0);
        m_51 = ATgetArgument(k_51, 1);
        {
          t = not_null(m_51);
          {
            ATerm d_2 (ATerm t)
            {
              ATerm p_51 = NULL;
              ATerm q_51 = NULL;
              q_51 = t;
              if(((p_51 != NULL) && (p_51 != q_51)))
                _fail(q_51);
              else
                p_51 = q_51;
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(p_51), not_null(l_51));
                t = elem_0(t);
              }
              return(t);
            }
            t = list_tokenize_1(t, d_2);
            t = map_1(t, implode_string_0);
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
ATerm rel_string_length_0 (ATerm t)
{
  ATerm b_52 = NULL,c_52 = NULL,d_52 = NULL;
  b_52 = t;
  a_52 :
  if(match_cons(b_52, sym__2))
    {
      c_52 = ATgetArgument(b_52, 0);
      d_52 = ATgetArgument(b_52, 1);
      {
        ATerm g_52 = NULL;
        ATerm n_52 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, term_j_10, not_null(c_52));
        {
          t = string_tokenize_0(t);
          {
            ATerm w_16 = t;
            int x_16 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm h_52 = NULL,i_52 = NULL,j_52 = NULL;
                h_52 = t;
                w_51 :
                if(((ATgetType(h_52) == AT_LIST) && ATisEmpty(h_52)))
                  {
                    t = term_f_10;
                  }
                else
                  {
                    if(((ATgetType(h_52) == AT_LIST) && !(ATisEmpty(h_52))))
                      {
                        i_52 = ATgetFirst((ATermList) h_52);
                        j_52 = (ATerm) ATgetNext((ATermList) h_52);
                        x_51 :
                        if(((ATgetType(j_52) == AT_LIST) && ATisEmpty(j_52)))
                          {
                            {
                              t = not_null(i_52);
                              t = string_length_0(t);
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
                ;
                LocalPopChoice(x_16);
              }
            else
              {
                t = w_16;
                {
                  ATerm l_52 = NULL;
                  ATerm m_52 = NULL;
                  t = last_0(t);
                  {
                    t = string_length_0(t);
                    {
                      m_52 = t;
                      if(((l_52 != NULL) && (l_52 != m_52)))
                        _fail(m_52);
                      else
                        l_52 = m_52;
                    }
                  }
                  {
                    t = (ATerm) ATmakeAppl(sym__2, not_null(l_52), not_null(d_52));
                    t = subt_0(t);
                  }
                }
              }
            {
              n_52 = t;
              if(((g_52 != NULL) && (g_52 != n_52)))
                _fail(n_52);
              else
                g_52 = n_52;
            }
          }
        }
        t = not_null(g_52);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm leq_0 (ATerm t)
{
  ATerm c_17 = t;
  if((PushChoice() == 0))
    {
      t = gt_0(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = c_17;
    }
  return(t);
}
ATerm get_width_0 (ATerm t)
{
  ATerm d_17 = t;
  int e_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_f_17;
      t = get_config_0(t);
      ;
      LocalPopChoice(e_17);
    }
  else
    {
      t = d_17;
      t = term_g_17;
    }
  return(t);
}
ATerm abox2text_0 (ATerm t)
{
  ATerm h_55 = NULL,i_55 = NULL,j_55 = NULL,k_55 = NULL,l_55 = NULL,m_55 = NULL,n_55 = NULL,o_55 = NULL,p_55 = NULL,q_55 = NULL,r_55 = NULL,s_55 = NULL;
  ATerm d_62 (ATerm t)
  {
    ATerm b_58 = NULL,c_58 = NULL,d_58 = NULL,e_58 = NULL,f_58 = NULL,g_58 = NULL;
    ATerm l_58 = NULL;
    t = not_null(n_55);
    {
      t = construct_rows_0(t);
      {
        ATerm e_2 (ATerm t)
        {
          ATerm h_58 = NULL,i_58 = NULL,j_58 = NULL;
          h_58 = t;
          n_53 :
          if(match_cons(h_58, sym_R_2))
            {
              i_58 = ATgetArgument(h_58, 0);
              j_58 = ATgetArgument(h_58, 1);
              t = not_null(j_58);
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = map_1(t, e_2);
        {
          ATerm f_2 (ATerm t)
          {
            t = not_null(m_55);
            t = length_0(t);
            return(t);
          }
          t = to_matrix_1(t, f_2);
          {
            t = matrix_transpose_0(t);
            {
              t = reverse_0(t);
              {
                t = add_indices_0(t);
                {
                  ATerm m_58 = NULL;
                  t = reverse_0(t);
                  {
                    l_58 = t;
                    {
                      if(((b_58 != NULL) && (b_58 != l_58)))
                        _fail(l_58);
                      else
                        b_58 = l_58;
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(m_55), not_null(b_58));
                        {
                          ATerm n_58 = NULL,o_58 = NULL,p_58 = NULL;
                          t = zip_0(t);
                          {
                            m_58 = t;
                            {
                              if(((c_58 != NULL) && (c_58 != m_58)))
                                _fail(m_58);
                              else
                                c_58 = m_58;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(c_58), (ATerm) ATmakeAppl(sym__2, not_null(s_55), (ATerm) ATempty));
                                {
                                  t = foldl_1(t, do_A_column_0);
                                  {
                                    n_58 = t;
                                    y_53 :
                                    if(match_cons(n_58, sym__2))
                                      {
                                        o_58 = ATgetArgument(n_58, 0);
                                        p_58 = ATgetArgument(n_58, 1);
                                        {
                                          ATerm q_58 = NULL;
                                          if(((e_58 != NULL) && (e_58 != o_58)))
                                            _fail(o_58);
                                          else
                                            e_58 = o_58;
                                          {
                                            if(((d_58 != NULL) && (d_58 != p_58)))
                                              _fail(p_58);
                                            else
                                              d_58 = p_58;
                                            {
                                              t = not_null(d_58);
                                              {
                                                t = reverse_0(t);
                                                {
                                                  ATerm r_58 = NULL,v_58 = NULL;
                                                  t = matrix_transpose_0(t);
                                                  {
                                                    q_58 = t;
                                                    {
                                                      if(((f_58 != NULL) && (f_58 != q_58)))
                                                        _fail(q_58);
                                                      else
                                                        f_58 = q_58;
                                                      {
                                                        ATerm u_58 = NULL;
                                                        t = not_null(f_58);
                                                        {
                                                          ATerm g_2 (ATerm t)
                                                          {
                                                            ATerm s_58 = NULL;
                                                            ATerm t_58 = NULL;
                                                            t_58 = t;
                                                            if(((s_58 != NULL) && (s_58 != t_58)))
                                                              _fail(t_58);
                                                            else
                                                              s_58 = t_58;
                                                            t = (ATerm) ATmakeAppl(sym__2, not_null(s_58), not_null(e_58));
                                                            return(t);
                                                          }
                                                          t = map_1(t, g_2);
                                                          {
                                                            u_58 = t;
                                                            if(((r_58 != NULL) && (r_58 != u_58)))
                                                              _fail(u_58);
                                                            else
                                                              r_58 = u_58;
                                                          }
                                                        }
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym__3, not_null(r_55), not_null(r_58), not_null(s_55));
                                                          {
                                                            t = format_vbox_0(t);
                                                            {
                                                              v_58 = t;
                                                              if(((g_58 != NULL) && (g_58 != v_58)))
                                                                _fail(v_58);
                                                              else
                                                                g_58 = v_58;
                                                            }
                                                          }
                                                        }
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
              }
            }
          }
        }
      }
    }
    t = not_null(g_58);
    return(t);
  }
  ATerm e_62 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, not_null(s_55));
    return(t);
  }
  ATerm f_62 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, not_null(s_55));
    return(t);
  }
  ATerm g_62 (ATerm t)
  {
    ATerm f_59 = NULL,g_59 = NULL,k_59 = NULL;
    ATerm l_59 = NULL,n_59 = NULL;
    ATerm m_59 = NULL;
    t = not_null(q_55);
    {
      t = is_length_0(t);
      {
        m_59 = t;
        if(((l_59 != NULL) && (l_59 != m_59)))
          _fail(m_59);
        else
          l_59 = m_59;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(s_55), not_null(l_59));
      {
        ATerm o_59 = NULL;
        t = add_0(t);
        {
          n_59 = t;
          {
            if(((g_59 != NULL) && (g_59 != n_59)))
              _fail(n_59);
            else
              g_59 = n_59;
            {
              t = not_null(r_55);
              {
                ATerm u_59 = NULL;
                t = filter_1(t, is_real_vbox_0);
                {
                  o_59 = t;
                  {
                    if(((f_59 != NULL) && (f_59 != o_59)))
                      _fail(o_59);
                    else
                      f_59 = o_59;
                    {
                      t = not_null(f_59);
                      {
                        ATerm m_17 = t;
                        int n_17 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm p_59 = NULL;
                            p_59 = t;
                            c_54 :
                            if(((ATgetType(p_59) == AT_LIST) && ATisEmpty(p_59)))
                              {
                                {
                                }
                              }
                            else
                              {
                                _fail(t);
                              }
                            LocalPopChoice(n_17);
                            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, not_null(s_55));
                          }
                        else
                          {
                            t = m_17;
                            {
                              ATerm q_59 = NULL,s_59 = NULL;
                              ATerm r_59 = NULL;
                              r_59 = t;
                              if(((q_59 != NULL) && (q_59 != r_59)))
                                _fail(r_59);
                              else
                                q_59 = r_59;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(s_55), not_null(g_59), not_null(q_59));
                                {
                                  t = do_vbox_children_0(t);
                                  {
                                    ATerm t_59 = NULL;
                                    t_59 = t;
                                    if(((s_59 != NULL) && (s_59 != t_59)))
                                      _fail(t_59);
                                    else
                                      s_59 = t_59;
                                    {
                                      t = (ATerm) ATmakeAppl(sym__3, not_null(q_55), not_null(s_59), not_null(s_55));
                                      t = format_vbox_0(t);
                                    }
                                  }
                                }
                              }
                            }
                          }
                        {
                          u_59 = t;
                          if(((k_59 != NULL) && (k_59 != u_59)))
                            _fail(u_59);
                          else
                            k_59 = u_59;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    t = not_null(k_59);
    return(t);
  }
  ATerm h_62 (ATerm t)
  {
    ATerm y_59 = NULL,z_59 = NULL,a_60 = NULL,b_60 = NULL;
    ATerm c_60 = NULL;
    t = not_null(q_55);
    {
      ATerm e_60 = NULL;
      t = hs_text_0(t);
      {
        c_60 = t;
        {
          if(((z_59 != NULL) && (z_59 != c_60)))
            _fail(c_60);
          else
            z_59 = c_60;
          {
            t = not_null(z_59);
            {
              ATerm f_60 = NULL;
              t = string_length_0(t);
              {
                e_60 = t;
                {
                  if(((a_60 != NULL) && (a_60 != e_60)))
                    _fail(e_60);
                  else
                    a_60 = e_60;
                  {
                    t = not_null(r_55);
                    {
                      ATerm g_60 = NULL,s_60 = NULL;
                      t = filter_1(t, is_real_hbox_0);
                      {
                        f_60 = t;
                        {
                          if(((y_59 != NULL) && (y_59 != f_60)))
                            _fail(f_60);
                          else
                            y_59 = f_60;
                          {
                            t = not_null(y_59);
                            {
                              ATerm h_60 = NULL;
                              h_60 = t;
                              if(((g_60 != NULL) && (g_60 != h_60)))
                                _fail(h_60);
                              else
                                g_60 = h_60;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(g_60), not_null(s_55));
                                {
                                  ATerm h_2 (ATerm t)
                                  {
                                    t = try_abox2text_0(t);
                                    {
                                      ATerm i_2 (ATerm t)
                                      {
                                        ATerm k_60 = NULL;
                                        ATerm l_60 = NULL;
                                        l_60 = t;
                                        if(((k_60 != NULL) && (k_60 != l_60)))
                                          _fail(l_60);
                                        else
                                          k_60 = l_60;
                                        {
                                          t = (ATerm) ATmakeAppl(sym__2, not_null(a_60), not_null(k_60));
                                          t = add_0(t);
                                        }
                                        return(t);
                                      }
                                      t = _2(t, _id, i_2);
                                    }
                                    return(t);
                                  }
                                  t = thread_map_1(t, h_2);
                                  {
                                    ATerm j_2 (ATerm t)
                                    {
                                      ATerm m_60 = NULL;
                                      ATerm n_60 = NULL;
                                      n_60 = t;
                                      if(((m_60 != NULL) && (m_60 != n_60)))
                                        _fail(n_60);
                                      else
                                        m_60 = n_60;
                                      {
                                        t = (ATerm) ATmakeAppl(sym__2, not_null(z_59), not_null(m_60));
                                        t = separate_by_0(t);
                                      }
                                      return(t);
                                    }
                                    t = _2(t, j_2, _id);
                                    {
                                      ATerm k_2 (ATerm t)
                                      {
                                        ATerm l_2 (ATerm t)
                                        {
                                          ATerm o_17 = t;
                                          if((PushChoice() == 0))
                                            {
                                              t = Nil_0(t);
                                              PopChoice();
                                              _fail(t);
                                            }
                                          else
                                            {
                                              t = o_17;
                                            }
                                          return(t);
                                        }
                                        ATerm m_2 (ATerm t)
                                        {
                                          ATerm q_60 = NULL;
                                          ATerm r_60 = NULL;
                                          r_60 = t;
                                          if(((q_60 != NULL) && (q_60 != r_60)))
                                            _fail(r_60);
                                          else
                                            q_60 = r_60;
                                          {
                                            t = (ATerm) ATmakeAppl(sym__2, not_null(q_60), not_null(a_60));
                                            t = subt_0(t);
                                          }
                                          return(t);
                                        }
                                        t = _2(t, l_2, m_2);
                                        return(t);
                                      }
                                      t = try_1(t, k_2);
                                      {
                                        s_60 = t;
                                        if(((b_60 != NULL) && (b_60 != s_60)))
                                          _fail(s_60);
                                        else
                                          b_60 = s_60;
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    t = not_null(b_60);
    return(t);
  }
  ATerm i_62 (ATerm t)
  {
    ATerm w_60 = NULL,x_60 = NULL,y_60 = NULL,z_60 = NULL,c_61 = NULL;
    ATerm d_61 = NULL;
    t = not_null(q_55);
    {
      ATerm e_61 = NULL;
      t = hs_text_0(t);
      {
        d_61 = t;
        {
          if(((z_60 != NULL) && (z_60 != d_61)))
            _fail(d_61);
          else
            z_60 = d_61;
          {
            t = not_null(q_55);
            {
              ATerm f_61 = NULL;
              t = vs_text_0(t);
              {
                e_61 = t;
                {
                  if(((w_60 != NULL) && (w_60 != e_61)))
                    _fail(e_61);
                  else
                    w_60 = e_61;
                  {
                    t = not_null(z_60);
                    {
                      ATerm k_61 = NULL,m_61 = NULL;
                      t = string_length_0(t);
                      {
                        f_61 = t;
                        {
                          if(((x_60 != NULL) && (x_60 != f_61)))
                            _fail(f_61);
                          else
                            x_60 = f_61;
                          {
                            ATerm l_61 = NULL;
                            t = not_null(q_55);
                            {
                              t = is_length_0(t);
                              {
                                l_61 = t;
                                if(((k_61 != NULL) && (k_61 != l_61)))
                                  _fail(l_61);
                                else
                                  k_61 = l_61;
                              }
                            }
                            {
                              t = (ATerm) ATmakeAppl(sym__2, not_null(s_55), not_null(k_61));
                              {
                                ATerm s_61 = NULL,u_61 = NULL;
                                t = add_0(t);
                                {
                                  m_61 = t;
                                  {
                                    if(((y_60 != NULL) && (y_60 != m_61)))
                                      _fail(m_61);
                                    else
                                      y_60 = m_61;
                                    {
                                      t = (ATerm) ATmakeAppl(sym__2, not_null(r_55), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, not_null(s_55))));
                                      {
                                        ATerm n_2 (ATerm t)
                                        {
                                          ATerm t_17 = t;
                                          int u_17 = stack_ptr;
                                          if((PushChoice() == 0))
                                            {
                                              ATerm o_2 (ATerm t)
                                              {
                                                t = not_null(x_60);
                                                return(t);
                                              }
                                              t = hv_add_to_hbox_1(t, o_2);
                                              ;
                                              LocalPopChoice(u_17);
                                            }
                                          else
                                            {
                                              t = t_17;
                                              {
                                                ATerm p_2 (ATerm t)
                                                {
                                                  t = not_null(x_60);
                                                  return(t);
                                                }
                                                ATerm q_2 (ATerm t)
                                                {
                                                  t = not_null(y_60);
                                                  return(t);
                                                }
                                                t = hv_in_new_vbox_2(t, p_2, q_2);
                                              }
                                            }
                                          return(t);
                                        }
                                        t = foldl_1(t, n_2);
                                        {
                                          t = reverse_0(t);
                                          {
                                            ATerm r_2 (ATerm t)
                                            {
                                              t = _2(t, reverse_0, _id);
                                              return(t);
                                            }
                                            t = map_1(t, r_2);
                                            {
                                              ATerm s_2 (ATerm t)
                                              {
                                                ATerm t_2 (ATerm t)
                                                {
                                                  ATerm n_61 = NULL;
                                                  ATerm p_61 = NULL;
                                                  p_61 = t;
                                                  if(((n_61 != NULL) && (n_61 != p_61)))
                                                    _fail(p_61);
                                                  else
                                                    n_61 = p_61;
                                                  {
                                                    t = (ATerm) ATmakeAppl(sym__2, not_null(z_60), not_null(n_61));
                                                    t = separate_by_0(t);
                                                  }
                                                  return(t);
                                                }
                                                t = _2(t, t_2, _id);
                                                return(t);
                                              }
                                              t = map_1(t, s_2);
                                              {
                                                ATerm t_61 = NULL;
                                                t_61 = t;
                                                if(((s_61 != NULL) && (s_61 != t_61)))
                                                  _fail(t_61);
                                                else
                                                  s_61 = t_61;
                                                {
                                                  t = (ATerm) ATmakeAppl(sym__3, not_null(q_55), not_null(s_61), not_null(s_55));
                                                  {
                                                    t = format_vbox_0(t);
                                                    {
                                                      u_61 = t;
                                                      if(((c_61 != NULL) && (c_61 != u_61)))
                                                        _fail(u_61);
                                                      else
                                                        c_61 = u_61;
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    t = not_null(c_61);
    return(t);
  }
  o_55 = t;
  w_54 :
  if(match_cons(o_55, sym__2))
    {
      p_55 = ATgetArgument(o_55, 0);
      s_55 = ATgetArgument(o_55, 1);
      x_54 :
      if(((ATgetType(p_55) == AT_LIST) && ATisEmpty(p_55)))
        {
          t = (ATerm) ATmakeAppl(sym__2, term_n_13, not_null(s_55));
        }
      else
        {
          if(((ATgetType(p_55) == AT_LIST) && !(ATisEmpty(p_55))))
            {
              q_55 = ATgetFirst((ATermList) p_55);
              r_55 = (ATerm) ATgetNext((ATermList) p_55);
              y_54 :
              if(((ATgetType(r_55) == AT_LIST) && ATisEmpty(r_55)))
                {
                  {
                    t = (ATerm) ATmakeAppl(sym__2, not_null(q_55), not_null(s_55));
                    t = try_abox2text_0(t);
                  }
                }
              else
                {
                  _fail(t);
                }
            }
          else
            {
              if(match_cons(p_55, sym_ALT_2))
                {
                  q_55 = ATgetArgument(p_55, 0);
                  r_55 = ATgetArgument(p_55, 1);
                  {
                    ATerm z_55 = NULL,a_56 = NULL,b_56 = NULL;
                    ATerm v_17;
                    v_17 = t;
                    {
                      ATerm c_56 = NULL,d_56 = NULL,e_56 = NULL;
                      t = (ATerm) ATmakeAppl(sym__2, not_null(q_55), not_null(s_55));
                      {
                        t = try_abox2text_0(t);
                        {
                          c_56 = t;
                          i_53 :
                          if(match_cons(c_56, sym__2))
                            {
                              d_56 = ATgetArgument(c_56, 0);
                              e_56 = ATgetArgument(c_56, 1);
                              {
                                if(((z_55 != NULL) && (z_55 != c_56)))
                                  _fail(c_56);
                                else
                                  z_55 = c_56;
                                {
                                  if(((a_56 != NULL) && (a_56 != d_56)))
                                    _fail(d_56);
                                  else
                                    a_56 = d_56;
                                  if(((b_56 != NULL) && (b_56 != e_56)))
                                    _fail(e_56);
                                  else
                                    b_56 = e_56;
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
                    t = v_17;
                    {
                      ATerm w_17 = t;
                      int x_17 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm f_56 = NULL;
                          ATerm g_56 = NULL;
                          t = get_width_0(t);
                          {
                            g_56 = t;
                            if(((f_56 != NULL) && (f_56 != g_56)))
                              _fail(g_56);
                            else
                              f_56 = g_56;
                          }
                          {
                            t = (ATerm) ATmakeAppl(sym__2, not_null(b_56), not_null(f_56));
                            t = leq_0(t);
                          }
                          LocalPopChoice(x_17);
                          t = not_null(z_55);
                        }
                      else
                        {
                          t = w_17;
                          {
                            t = (ATerm) ATmakeAppl(sym__2, not_null(r_55), not_null(s_55));
                            t = try_abox2text_0(t);
                          }
                        }
                    }
                  }
                }
              else
                {
                  if(match_cons(p_55, sym_R_2))
                    {
                      q_55 = ATgetArgument(p_55, 0);
                      r_55 = ATgetArgument(p_55, 1);
                      {
                        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_HV_2, not_null(q_55), not_null(r_55)), not_null(s_55));
                        t = try_abox2text_0(t);
                      }
                    }
                  else
                    {
                      if(match_cons(p_55, sym_FBOX_2))
                        {
                          q_55 = ATgetArgument(p_55, 0);
                          r_55 = ATgetArgument(p_55, 1);
                          {
                            t = (ATerm) ATmakeAppl(sym__2, not_null(r_55), not_null(s_55));
                            t = try_abox2text_0(t);
                          }
                        }
                      else
                        {
                          if(match_cons(p_55, sym_C_2))
                            {
                              q_55 = ATgetArgument(p_55, 0);
                              r_55 = ATgetArgument(p_55, 1);
                              z_54 :
                              if(((ATgetType(r_55) == AT_LIST) && !(ATisEmpty(r_55))))
                                {
                                  h_55 = ATgetFirst((ATermList) r_55);
                                  j_55 = (ATerm) ATgetNext((ATermList) r_55);
                                  a_55 :
                                  if(match_cons(h_55, sym_S_1))
                                    {
                                      i_55 = ATgetArgument(h_55, 0);
                                      b_55 :
                                      if(((ATgetType(j_55) == AT_LIST) && ATisEmpty(j_55)))
                                        {
                                          t = (ATerm) ATmakeAppl(sym__2, not_null(i_55), not_null(s_55));
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
                              if(match_cons(p_55, sym_S_1))
                                {
                                  q_55 = ATgetArgument(p_55, 0);
                                  {
                                    ATerm q_56 = NULL;
                                    ATerm r_56 = NULL,t_56 = NULL;
                                    ATerm s_56 = NULL;
                                    t = (ATerm) ATmakeAppl(sym__2, not_null(q_55), not_null(s_55));
                                    {
                                      t = rel_string_length_0(t);
                                      {
                                        s_56 = t;
                                        if(((r_56 != NULL) && (r_56 != s_56)))
                                          _fail(s_56);
                                        else
                                          r_56 = s_56;
                                      }
                                    }
                                    {
                                      t = (ATerm) ATmakeAppl(sym__2, not_null(s_55), not_null(r_56));
                                      {
                                        t = add_0(t);
                                        {
                                          t_56 = t;
                                          if(((q_56 != NULL) && (q_56 != t_56)))
                                            _fail(t_56);
                                          else
                                            q_56 = t_56;
                                        }
                                      }
                                    }
                                    t = (ATerm) ATmakeAppl(sym__2, not_null(q_55), not_null(q_56));
                                  }
                                }
                              else
                                {
                                  if(match_cons(p_55, sym_A_3))
                                    {
                                      q_55 = ATgetArgument(p_55, 0);
                                      r_55 = ATgetArgument(p_55, 1);
                                      n_55 = ATgetArgument(p_55, 2);
                                      c_55 :
                                      if(match_cons(q_55, sym_AOPTIONS_1))
                                        {
                                          m_55 = ATgetArgument(q_55, 0);
                                          d_55 :
                                          if(((ATgetType(n_55) == AT_LIST) && !(ATisEmpty(n_55))))
                                            {
                                              k_55 = ATgetFirst((ATermList) n_55);
                                              l_55 = (ATerm) ATgetNext((ATermList) n_55);
                                              e_55 :
                                              if(((ATgetType(l_55) == AT_LIST) && ATisEmpty(l_55)))
                                                {
                                                  f_55 :
                                                  if(((ATgetType(k_55) == AT_LIST) && ATisEmpty(k_55)))
                                                    {
                                                      {
                                                        ATerm y_17 = t;
                                                        int a_18 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = d_62(t);
                                                            ;
                                                            LocalPopChoice(a_18);
                                                          }
                                                        else
                                                          {
                                                            t = y_17;
                                                            t = e_62(t);
                                                          }
                                                      }
                                                    }
                                                  else
                                                    {
                                                      t = d_62(t);
                                                    }
                                                }
                                              else
                                                {
                                                  g_55 :
                                                  t = d_62(t);
                                                }
                                            }
                                          else
                                            {
                                              if(((ATgetType(n_55) == AT_LIST) && ATisEmpty(n_55)))
                                                {
                                                  {
                                                    ATerm b_18 = t;
                                                    int d_18 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        t = d_62(t);
                                                        ;
                                                        LocalPopChoice(d_18);
                                                      }
                                                    else
                                                      {
                                                        t = b_18;
                                                        t = f_62(t);
                                                      }
                                                  }
                                                }
                                              else
                                                {
                                                  t = d_62(t);
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
                                      if(match_cons(p_55, sym_V_2))
                                        {
                                          q_55 = ATgetArgument(p_55, 0);
                                          r_55 = ATgetArgument(p_55, 1);
                                          t = g_62(t);
                                        }
                                      else
                                        {
                                          if(match_cons(p_55, sym_H_2))
                                            {
                                              q_55 = ATgetArgument(p_55, 0);
                                              r_55 = ATgetArgument(p_55, 1);
                                              t = h_62(t);
                                            }
                                          else
                                            {
                                              if(match_cons(p_55, sym_HV_2))
                                                {
                                                  q_55 = ATgetArgument(p_55, 0);
                                                  r_55 = ATgetArgument(p_55, 1);
                                                  t = i_62(t);
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
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_abox2text_0 (ATerm t)
{
  ATerm h_18 = t;
  int p_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = abox2text_0(t);
      ;
      LocalPopChoice(p_18);
    }
  else
    {
      t = h_18;
      {
        ATerm u_63 = NULL;
        ATerm v_63 = NULL;
        v_63 = t;
        if(((u_63 != NULL) && (u_63 != v_63)))
          _fail(v_63);
        else
          u_63 = v_63;
        {
          t = (ATerm) ATinsert(ATinsert(ATempty, not_null(u_63)), term_q_18);
          t = fatal_error_0(t);
        }
      }
    }
  return(t);
}
ATerm fclose_0 (ATerm t)
{
  ATerm c_64 = NULL,d_64 = NULL;
  ATerm l_64 (ATerm t)
  {
    t = SSL_fclose(not_null(d_64));
    return(t);
  }
  d_64 = t;
  b_64 :
  if(match_cons(d_64, sym_Stream_1))
    {
      c_64 = ATgetArgument(d_64, 0);
      {
        ATerm r_18 = t;
        int s_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(not_null(c_64));
            ;
            LocalPopChoice(s_18);
          }
        else
          {
            t = r_18;
            t = l_64(t);
          }
      }
    }
  else
    {
      t = l_64(t);
    }
  return(t);
}
ATerm read_from_stream_0 (ATerm t)
{
  ATerm q_64 = NULL,r_64 = NULL;
  q_64 = t;
  p_64 :
  if(match_cons(q_64, sym_Stream_1))
    {
      r_64 = ATgetArgument(q_64, 0);
      t = SSL_read_term_from_stream(not_null(r_64));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm fopen_0 (ATerm t)
{
  ATerm x_64 = NULL,y_64 = NULL,z_64 = NULL;
  x_64 = t;
  w_64 :
  if(match_cons(x_64, sym__2))
    {
      y_64 = ATgetArgument(x_64, 0);
      z_64 = ATgetArgument(x_64, 1);
      {
        ATerm c_65 = NULL;
        t = SSL_fopen(not_null(y_64), not_null(z_64));
        {
          ATerm d_65 = NULL;
          d_65 = t;
          if(((c_65 != NULL) && (c_65 != d_65)))
            _fail(d_65);
          else
            c_65 = d_65;
          t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(c_65));
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
  ATerm h_65 = NULL;
  t = SSL_stdin_stream();
  {
    ATerm i_65 = NULL;
    i_65 = t;
    if(((h_65 != NULL) && (h_65 != i_65)))
      _fail(i_65);
    else
      h_65 = i_65;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(h_65));
  }
  return(t);
}
ATerm stdout_stream_0 (ATerm t)
{
  ATerm l_65 = NULL;
  t = SSL_stdout_stream();
  {
    ATerm m_65 = NULL;
    m_65 = t;
    if(((l_65 != NULL) && (l_65 != m_65)))
      _fail(m_65);
    else
      l_65 = m_65;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(l_65));
  }
  return(t);
}
ATerm stderr_stream_0 (ATerm t)
{
  ATerm p_65 = NULL;
  t = SSL_stderr_stream();
  {
    ATerm s_65 = NULL;
    s_65 = t;
    if(((p_65 != NULL) && (p_65 != s_65)))
      _fail(s_65);
    else
      p_65 = s_65;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(p_65));
  }
  return(t);
}
ATerm stdio_stream_0 (ATerm t)
{
  ATerm y_65 = NULL;
  y_65 = t;
  x_65 :
  if(match_cons(y_65, sym_stderr_0))
    {
      t = stderr_stream_0(t);
    }
  else
    {
      if(match_cons(y_65, sym_stdout_0))
        {
          t = stdout_stream_0(t);
        }
      else
        {
          if(match_cons(y_65, sym_stdin_0))
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
ATerm open_stream_0 (ATerm t)
{
  ATerm g_66 = NULL,h_66 = NULL,i_66 = NULL;
  g_66 = t;
  f_66 :
  if(match_cons(g_66, sym__2))
    {
      h_66 = ATgetArgument(g_66, 0);
      i_66 = ATgetArgument(g_66, 1);
      {
        ATerm t_18 = t;
        int u_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Fst_0(t);
            t = stdio_stream_0(t);
            ;
            LocalPopChoice(u_18);
          }
        else
          {
            t = t_18;
            {
              ATerm z_18 = t;
              int a_19 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm u_2 (ATerm t)
                  {
                    ATerm j_66 = NULL,k_66 = NULL;
                    j_66 = t;
                    e_66 :
                    if(match_cons(j_66, sym_Path_1))
                      {
                        k_66 = ATgetArgument(j_66, 0);
                        t = not_null(k_66);
                      }
                    else
                      {
                        _fail(t);
                      }
                    return(t);
                  }
                  t = _2(t, u_2, _id);
                  t = fopen_0(t);
                  ;
                  LocalPopChoice(a_19);
                }
              else
                {
                  t = z_18;
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
  ATerm s_66 = NULL;
  ATerm b_19 = t;
  int e_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_66 = NULL;
      ATerm r_66 = NULL;
      r_66 = t;
      if(((q_66 != NULL) && (q_66 != r_66)))
        _fail(r_66);
      else
        q_66 = r_66;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(q_66), term_f_19);
        t = open_stream_0(t);
      }
      ;
      LocalPopChoice(e_19);
    }
  else
    {
      t = b_19;
      {
        ATerm v_2 (ATerm t)
        {
          t = term_l_19;
          return(t);
        }
        t = debug_1(t, v_2);
        _fail(t);
      }
    }
  {
    ATerm m_19;
    m_19 = t;
    {
      ATerm t_66 = NULL;
      t = read_from_stream_0(t);
      {
        t_66 = t;
        if(((s_66 != NULL) && (s_66 != t_66)))
          _fail(t_66);
        else
          s_66 = t_66;
      }
    }
    t = m_19;
    {
      t = fclose_0(t);
      t = not_null(s_66);
    }
  }
  return(t);
}
ATerm access_0 (ATerm t)
{
  ATerm y_66 = NULL,z_66 = NULL,a_67 = NULL;
  y_66 = t;
  x_66 :
  if(match_cons(y_66, sym__2))
    {
      z_66 = ATgetArgument(y_66, 0);
      a_67 = ATgetArgument(y_66, 1);
      t = SSL_access(not_null(z_66), not_null(a_67));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm file_exists_0 (ATerm t)
{
  ATerm f_67 = NULL;
  ATerm g_67 = NULL;
  g_67 = t;
  if(((f_67 != NULL) && (f_67 != g_67)))
    _fail(g_67);
  else
    f_67 = g_67;
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(f_67), (ATerm) ATinsert(ATempty, term_n_19));
    t = access_0(t);
  }
  return(t);
}
ATerm read_from_0 (ATerm t)
{
  ATerm n_67 = NULL,o_67 = NULL;
  n_67 = t;
  m_67 :
  if(match_cons(n_67, sym_stdin_0))
    {
      ATerm p_67 = NULL;
      ATerm q_67 = NULL;
      t = term_q_19;
      {
        t = ReadFromFile_0(t);
        {
          q_67 = t;
          if(((p_67 != NULL) && (p_67 != q_67)))
            _fail(q_67);
          else
            p_67 = q_67;
        }
      }
      t = not_null(p_67);
    }
  else
    {
      if(match_cons(n_67, sym_FILE_1))
        {
          o_67 = ATgetArgument(n_67, 0);
          {
            ATerm s_67 = NULL;
            ATerm t_67 = NULL;
            t = not_null(o_67);
            {
              t = file_exists_0(t);
              {
                t = ReadFromFile_0(t);
                {
                  t_67 = t;
                  if(((s_67 != NULL) && (s_67 != t_67)))
                    _fail(t_67);
                  else
                    s_67 = t_67;
                }
              }
            }
            t = not_null(s_67);
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
  ATerm a_68 = NULL,b_68 = NULL,c_68 = NULL;
  a_68 = t;
  z_67 :
  if(match_cons(a_68, sym__2))
    {
      b_68 = ATgetArgument(a_68, 0);
      c_68 = ATgetArgument(a_68, 1);
      t = SSL_copy(not_null(b_68), not_null(c_68));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm stderr_0 (ATerm t)
{
  ATerm k_68 = NULL;
  k_68 = t;
  j_68 :
  if(match_cons(k_68, sym_stderr_0))
    {
      ATerm m_68 = NULL,o_68 = NULL;
      ATerm r_19;
      r_19 = t;
      {
        ATerm n_68 = NULL;
        t = SSLgetAnnotations(not_null(k_68));
        {
          n_68 = t;
          if(((m_68 != NULL) && (m_68 != n_68)))
            _fail(n_68);
          else
            m_68 = n_68;
        }
      }
      t = r_19;
      {
        ATerm p_68 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stderr_0), not_null(m_68));
        {
          p_68 = t;
          if(((o_68 != NULL) && (o_68 != p_68)))
            _fail(p_68);
          else
            o_68 = p_68;
        }
        t = not_null(o_68);
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
  ATerm x_68 = NULL;
  x_68 = t;
  w_68 :
  if(match_cons(x_68, sym_stdout_0))
    {
      ATerm z_68 = NULL,b_69 = NULL;
      ATerm s_19;
      s_19 = t;
      {
        ATerm a_69 = NULL;
        t = SSLgetAnnotations(not_null(x_68));
        {
          a_69 = t;
          if(((z_68 != NULL) && (z_68 != a_69)))
            _fail(a_69);
          else
            z_68 = a_69;
        }
      }
      t = s_19;
      {
        ATerm c_69 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stdout_0), not_null(z_68));
        {
          c_69 = t;
          if(((b_69 != NULL) && (b_69 != c_69)))
            _fail(c_69);
          else
            b_69 = c_69;
        }
        t = not_null(b_69);
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
  ATerm o_69 = NULL,p_69 = NULL;
  o_69 = t;
  n_69 :
  if(match_cons(o_69, sym_FILE_1))
    {
      p_69 = ATgetArgument(o_69, 0);
      {
        ATerm u_19 = t;
        int v_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_69 = NULL;
            ATerm s_69 = NULL;
            t = m_0(t);
            {
              s_69 = t;
              {
                if(((r_69 != NULL) && (r_69 != s_69)))
                  _fail(s_69);
                else
                  r_69 = s_69;
                {
                  ATerm w_19 = t;
                  int b_20 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = stdout_0(t);
                      ;
                      LocalPopChoice(b_20);
                    }
                  else
                    {
                      t = w_19;
                      t = stderr_0(t);
                    }
                  {
                    t = (ATerm) ATmakeAppl(sym__2, not_null(p_69), not_null(r_69));
                    t = copy_file_0(t);
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(p_69));
            ;
            LocalPopChoice(v_19);
          }
        else
          {
            t = u_19;
            {
              ATerm c_20 = t;
              int d_20 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm u_69 = NULL;
                  ATerm v_69 = NULL;
                  t = m_0(t);
                  {
                    v_69 = t;
                    {
                      if(((u_69 != NULL) && (u_69 != v_69)))
                        _fail(v_69);
                      else
                        u_69 = v_69;
                      {
                        ATerm e_20 = t;
                        if((PushChoice() == 0))
                          {
                            ATerm h_20 = t;
                            int i_20 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = stdout_0(t);
                                ;
                                LocalPopChoice(i_20);
                              }
                            else
                              {
                                t = h_20;
                                {
                                  ATerm l_20 = t;
                                  int m_20 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = stderr_0(t);
                                      ;
                                      LocalPopChoice(m_20);
                                    }
                                  else
                                    {
                                      t = l_20;
                                      {
                                        ATerm w_69 = NULL;
                                        w_69 = t;
                                        if(((p_69 != NULL) && (p_69 != w_69)))
                                          _fail(w_69);
                                        else
                                          p_69 = w_69;
                                      }
                                    }
                                }
                              }
                            PopChoice();
                            _fail(t);
                          }
                        else
                          {
                            t = e_20;
                          }
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(p_69), not_null(u_69));
                          t = copy_file_0(t);
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(p_69));
                  ;
                  LocalPopChoice(d_20);
                }
              else
                {
                  t = c_20;
                  {
                    ATerm y_69 = NULL;
                    t = m_0(t);
                    {
                      y_69 = t;
                      if(((p_69 != NULL) && (p_69 != y_69)))
                        _fail(y_69);
                      else
                        p_69 = y_69;
                    }
                    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(p_69));
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
  ATerm i_70 = NULL,j_70 = NULL,k_70 = NULL;
  i_70 = t;
  h_70 :
  if(((ATgetType(i_70) == AT_LIST) && !(ATisEmpty(i_70))))
    {
      j_70 = ATgetFirst((ATermList) i_70);
      k_70 = (ATerm) ATgetNext((ATermList) i_70);
      t = not_null(k_70);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_pop_0 (ATerm t)
{
  ATerm x_70 = NULL,y_70 = NULL,z_70 = NULL;
  x_70 = t;
  p_70 :
  if(match_cons(x_70, sym__2))
    {
      y_70 = ATgetArgument(x_70, 0);
      z_70 = ATgetArgument(x_70, 1);
      {
        ATerm r_20;
        r_20 = t;
        {
          ATerm c_71 = NULL;
          ATerm d_71 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(y_70), not_null(z_70));
          {
            ATerm s_20 = t;
            int t_20 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                t = Tl_0(t);
                ;
                LocalPopChoice(t_20);
              }
            else
              {
                t = s_20;
                t = (ATerm) ATempty;
              }
            {
              d_71 = t;
              if(((c_71 != NULL) && (c_71 != d_71)))
                _fail(d_71);
              else
                c_71 = d_71;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(y_70), not_null(z_70), not_null(c_71));
            t = table_put_0(t);
          }
        }
        t = r_20;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm end_scope_1 (ATerm t, ATerm l_86 (ATerm))
{
  ATerm m_71 = NULL,n_71 = NULL,o_71 = NULL;
  ATerm u_20;
  u_20 = t;
  {
    ATerm p_71 = NULL;
    ATerm q_71 = NULL,r_71 = NULL,s_71 = NULL;
    t = l_86(t);
    {
      p_71 = t;
      {
        if(((o_71 != NULL) && (o_71 != p_71)))
          _fail(p_71);
        else
          o_71 = p_71;
        {
          ATerm z_20 = t;
          int a_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(o_71), term_q_7);
              t = table_get_0(t);
              ;
              LocalPopChoice(a_21);
            }
          else
            {
              t = z_20;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
            }
          {
            q_71 = t;
            l_71 :
            if(((ATgetType(q_71) == AT_LIST) && !(ATisEmpty(q_71))))
              {
                r_71 = ATgetFirst((ATermList) q_71);
                s_71 = (ATerm) ATgetNext((ATermList) q_71);
                {
                  if(((n_71 != NULL) && (n_71 != r_71)))
                    _fail(r_71);
                  else
                    n_71 = r_71;
                  {
                    if(((m_71 != NULL) && (m_71 != s_71)))
                      _fail(s_71);
                    else
                      m_71 = s_71;
                    {
                      t = (ATerm) ATmakeAppl(sym__3, not_null(o_71), term_q_7, not_null(m_71));
                      {
                        t = table_put_0(t);
                        {
                          t = not_null(n_71);
                          {
                            ATerm w_2 (ATerm t)
                            {
                              ATerm t_71 = NULL;
                              t_71 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(o_71), not_null(t_71));
                                t = table_pop_0(t);
                              }
                              return(t);
                            }
                            t = map_1(t, w_2);
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
  t = u_20;
  return(t);
}
ATerm remove_file_0 (ATerm t)
{
  ATerm z_71 = NULL;
  z_71 = t;
  t = SSL_remove(not_null(z_71));
  return(t);
}
ATerm restore_always_2 (ATerm t, ATerm q_75 (ATerm), ATerm r_75 (ATerm))
{
  ATerm b_21 = t;
  int c_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = q_75(t);
      t = r_75(t);
      ;
      LocalPopChoice(c_21);
    }
  else
    {
      t = b_21;
      {
        t = r_75(t);
        _fail(t);
      }
    }
  return(t);
}
ATerm begin_scope_1 (ATerm t, ATerm k_86 (ATerm))
{
  ATerm e_72 = NULL;
  ATerm d_21;
  d_21 = t;
  {
    ATerm f_72 = NULL;
    ATerm g_72 = NULL;
    t = k_86(t);
    {
      f_72 = t;
      {
        if(((e_72 != NULL) && (e_72 != f_72)))
          _fail(f_72);
        else
          e_72 = f_72;
        {
          ATerm h_72 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(e_72), term_q_7);
          {
            ATerm e_21 = t;
            int f_21 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                ;
                LocalPopChoice(f_21);
              }
            else
              {
                t = e_21;
                t = (ATerm) ATempty;
              }
            {
              h_72 = t;
              if(((g_72 != NULL) && (g_72 != h_72)))
                _fail(h_72);
              else
                g_72 = h_72;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(e_72), term_q_7, (ATerm) ATinsert(CheckATermList(not_null(g_72)), (ATerm) ATempty));
            t = table_put_0(t);
          }
        }
      }
    }
  }
  t = d_21;
  return(t);
}
ATerm xtc_temp_files_1 (ATerm t, ATerm e_71 (ATerm))
{
  ATerm n_72 = NULL,o_72 = NULL;
  ATerm x_2 (ATerm t)
  {
    t = term_r_8;
    return(t);
  }
  t = begin_scope_1(t, x_2);
  {
    ATerm y_2 (ATerm t)
    {
      ATerm g_21;
      g_21 = t;
      {
        ATerm p_72 = NULL,q_72 = NULL,r_72 = NULL;
        ATerm h_21 = t;
        int o_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_p_21;
            t = table_get_0(t);
            ;
            LocalPopChoice(o_21);
          }
        else
          {
            t = h_21;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
          }
        {
          p_72 = t;
          m_72 :
          if(((ATgetType(p_72) == AT_LIST) && !(ATisEmpty(p_72))))
            {
              q_72 = ATgetFirst((ATermList) p_72);
              r_72 = (ATerm) ATgetNext((ATermList) p_72);
              {
                if(((o_72 != NULL) && (o_72 != q_72)))
                  _fail(q_72);
                else
                  o_72 = q_72;
                {
                  if(((n_72 != NULL) && (n_72 != r_72)))
                    _fail(r_72);
                  else
                    n_72 = r_72;
                  {
                    t = not_null(o_72);
                    {
                      ATerm z_2 (ATerm t)
                      {
                        t = try_1(t, remove_file_0);
                        return(t);
                      }
                      t = map_1(t, z_2);
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
      t = g_21;
      {
        ATerm a_3 (ATerm t)
        {
          t = term_r_8;
          return(t);
        }
        t = end_scope_1(t, a_3);
      }
      return(t);
    }
    t = restore_always_2(t, e_71, y_2);
  }
  return(t);
}
ATerm xtc_io_1 (ATerm t, ATerm f_71 (ATerm))
{
  ATerm b_3 (ATerm t)
  {
    ATerm q_21 = t;
    int h_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_72 = NULL;
        ATerm v_72 = NULL;
        t = term_i_22;
        {
          t = get_config_0(t);
          {
            v_72 = t;
            if(((u_72 != NULL) && (u_72 != v_72)))
              _fail(v_72);
            else
              u_72 = v_72;
          }
        }
        t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(u_72));
        ;
        LocalPopChoice(h_22);
      }
    else
      {
        t = q_21;
        t = term_q_19;
      }
    {
      t = f_71(t);
      {
        ATerm c_3 (ATerm t)
        {
          ATerm j_22 = t;
          int k_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = term_l_22;
              t = get_config_0(t);
              ;
              LocalPopChoice(k_22);
            }
          else
            {
              t = j_22;
              t = term_m_22;
            }
          return(t);
        }
        t = copy_to_1(t, c_3);
      }
    }
    return(t);
  }
  t = xtc_temp_files_1(t, b_3);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm y_72 = NULL;
  y_72 = t;
  t = SSL_string_to_int(not_null(y_72));
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm g_73 = NULL,h_73 = NULL,i_73 = NULL,j_73 = NULL,k_73 = NULL;
  g_73 = t;
  e_73 :
  if(match_string(g_73, "register-usage-info"))
    {
      t = register_usage_1(t, l_0);
    }
  else
    {
      if(((ATgetType(g_73) == AT_LIST) && !(ATisEmpty(g_73))))
        {
          h_73 = ATgetFirst((ATermList) g_73);
          i_73 = (ATerm) ATgetNext((ATermList) g_73);
          f_73 :
          if(((ATgetType(i_73) == AT_LIST) && !(ATisEmpty(i_73))))
            {
              j_73 = ATgetFirst((ATermList) i_73);
              k_73 = (ATerm) ATgetNext((ATermList) i_73);
              {
                ATerm o_73 = NULL;
                ATerm n_22;
                n_22 = t;
                {
                  t = not_null(h_73);
                  t = j_0(t);
                }
                t = n_22;
                {
                  ATerm p_73 = NULL;
                  t = not_null(j_73);
                  {
                    t = k_0(t);
                    {
                      p_73 = t;
                      if(((o_73 != NULL) && (o_73 != p_73)))
                        _fail(p_73);
                      else
                        o_73 = p_73;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(k_73)), not_null(o_73));
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
ATerm version_option_0 (ATerm t)
{
  ATerm d_3 (ATerm t)
  {
    ATerm u_73 = NULL;
    u_73 = t;
    t_73 :
    if(!(match_string(u_73, "-v")))
      {
        if(!(match_string(u_73, "--version")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm e_3 (ATerm t)
  {
    t = term_p_22;
    t = set_config_0(t);
    t = term_q_22;
    return(t);
  }
  ATerm f_3 (ATerm t)
  {
    t = term_r_22;
    return(t);
  }
  t = Option_3(t, d_3, e_3, f_3);
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm g_3 (ATerm t)
  {
    ATerm x_73 = NULL;
    x_73 = t;
    v_73 :
    if(!(match_string(x_73, "-k")))
      {
        if(!(match_string(x_73, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm h_3 (ATerm t)
  {
    ATerm s_22;
    s_22 = t;
    {
      ATerm y_73 = NULL;
      ATerm z_73 = NULL;
      t = string_to_int_0(t);
      {
        z_73 = t;
        if(((y_73 != NULL) && (y_73 != z_73)))
          _fail(z_73);
        else
          y_73 = z_73;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_t_22, not_null(y_73));
        t = set_config_0(t);
      }
    }
    t = s_22;
    return(t);
  }
  ATerm i_3 (ATerm t)
  {
    t = term_u_22;
    return(t);
  }
  t = ArgOption_3(t, g_3, h_3, i_3);
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm v_22 = t;
  int w_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_3 (ATerm t)
      {
        ATerm g_74 = NULL;
        g_74 = t;
        b_74 :
        if(!(match_string(g_74, "-S")))
          {
            if(!(match_string(g_74, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm k_3 (ATerm t)
      {
        t = term_y_22;
        t = set_config_0(t);
        t = term_z_22;
        return(t);
      }
      ATerm l_3 (ATerm t)
      {
        t = term_a_23;
        return(t);
      }
      t = Option_3(t, j_3, k_3, l_3);
      ;
      LocalPopChoice(w_22);
    }
  else
    {
      t = v_22;
      {
        ATerm b_23 = t;
        int c_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_3 (ATerm t)
            {
              ATerm h_74 = NULL;
              h_74 = t;
              c_74 :
              if(!(match_string(h_74, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm n_3 (ATerm t)
            {
              ATerm k_74 = NULL;
              ATerm d_23;
              d_23 = t;
              {
                ATerm i_74 = NULL;
                ATerm j_74 = NULL;
                t = string_to_int_0(t);
                {
                  j_74 = t;
                  if(((i_74 != NULL) && (i_74 != j_74)))
                    _fail(j_74);
                  else
                    i_74 = j_74;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_x_22, not_null(i_74));
                  t = set_config_0(t);
                }
              }
              t = d_23;
              {
                ATerm l_74 = NULL;
                l_74 = t;
                if(((k_74 != NULL) && (k_74 != l_74)))
                  _fail(l_74);
                else
                  k_74 = l_74;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(k_74));
              }
              return(t);
            }
            ATerm o_3 (ATerm t)
            {
              t = term_e_23;
              return(t);
            }
            t = ArgOption_3(t, m_3, n_3, o_3);
            ;
            LocalPopChoice(c_23);
          }
        else
          {
            t = b_23;
            {
              ATerm p_3 (ATerm t)
              {
                ATerm m_74 = NULL;
                m_74 = t;
                f_74 :
                if(!(match_string(m_74, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm v_3 (ATerm t)
              {
                t = term_g_23;
                t = set_config_0(t);
                t = term_h_23;
                return(t);
              }
              ATerm w_3 (ATerm t)
              {
                t = term_i_23;
                return(t);
              }
              t = Option_3(t, p_3, v_3, w_3);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0 (ATerm t)
{
  ATerm j_23 = t;
  int k_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      ;
      LocalPopChoice(k_23);
    }
  else
    {
      t = j_23;
      {
        ATerm l_23 = t;
        int m_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = keep_option_0(t);
            ;
            LocalPopChoice(m_23);
          }
        else
          {
            t = l_23;
            t = version_option_0(t);
          }
      }
    }
  return(t);
}
ATerm output_option_0 (ATerm t)
{
  ATerm e_4 (ATerm t)
  {
    ATerm s_74 = NULL;
    s_74 = t;
    p_74 :
    if(!(match_string(s_74, "-o")))
      {
        if(!(match_string(s_74, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm f_4 (ATerm t)
  {
    ATerm v_74 = NULL;
    ATerm n_23;
    n_23 = t;
    {
      ATerm t_74 = NULL;
      ATerm u_74 = NULL;
      u_74 = t;
      if(((t_74 != NULL) && (t_74 != u_74)))
        _fail(u_74);
      else
        t_74 = u_74;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_l_22, not_null(t_74));
        t = set_config_0(t);
      }
    }
    t = n_23;
    {
      ATerm w_74 = NULL;
      w_74 = t;
      if(((v_74 != NULL) && (v_74 != w_74)))
        _fail(w_74);
      else
        v_74 = w_74;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(v_74));
    }
    return(t);
  }
  ATerm g_4 (ATerm t)
  {
    t = term_o_23;
    return(t);
  }
  t = ArgOption_3(t, e_4, f_4, g_4);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm p_23 = t;
  int q_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      ;
      LocalPopChoice(q_23);
    }
  else
    {
      t = p_23;
      {
        ATerm h_4 (ATerm t)
        {
          ATerm a_75 = NULL;
          a_75 = t;
          z_74 :
          if(!(match_string(a_75, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm i_4 (ATerm t)
        {
          t = term_s_23;
          t = set_config_0(t);
          t = term_t_23;
          return(t);
        }
        ATerm o_4 (ATerm t)
        {
          t = term_u_23;
          return(t);
        }
        t = Option_3(t, h_4, i_4, o_4);
      }
    }
  return(t);
}
ATerm input_option_0 (ATerm t)
{
  ATerm s_4 (ATerm t)
  {
    ATerm f_75 = NULL;
    f_75 = t;
    c_75 :
    if(!(match_string(f_75, "-i")))
      {
        if(!(match_string(f_75, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm t_4 (ATerm t)
  {
    ATerm i_75 = NULL;
    ATerm v_23;
    v_23 = t;
    {
      ATerm g_75 = NULL;
      ATerm h_75 = NULL;
      h_75 = t;
      if(((g_75 != NULL) && (g_75 != h_75)))
        _fail(h_75);
      else
        g_75 = h_75;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_i_22, not_null(g_75));
        t = set_config_0(t);
      }
    }
    t = v_23;
    {
      ATerm j_75 = NULL;
      j_75 = t;
      if(((i_75 != NULL) && (i_75 != j_75)))
        _fail(j_75);
      else
        i_75 = j_75;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(i_75));
    }
    return(t);
  }
  ATerm w_4 (ATerm t)
  {
    t = term_w_23;
    return(t);
  }
  t = ArgOption_3(t, s_4, t_4, w_4);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm x_23 = t;
  int y_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      ;
      LocalPopChoice(y_23);
    }
  else
    {
      t = x_23;
      {
        ATerm z_23 = t;
        int a_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0(t);
            ;
            LocalPopChoice(a_24);
          }
        else
          {
            t = z_23;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm abox2text_options_0 (ATerm t)
{
  ATerm b_24 = t;
  int c_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = io_options_0(t);
      ;
      LocalPopChoice(c_24);
    }
  else
    {
      t = b_24;
      {
        ATerm a_5 (ATerm t)
        {
          ATerm o_75 = NULL;
          o_75 = t;
          m_75 :
          if(!(match_string(o_75, "-w")))
            {
              if(!(match_string(o_75, "--width")))
                {
                  _fail(t);
                }
            }
          return(t);
        }
        ATerm b_5 (ATerm t)
        {
          ATerm d_24;
          d_24 = t;
          {
            ATerm p_75 = NULL;
            ATerm s_75 = NULL;
            t = string_to_int_0(t);
            {
              s_75 = t;
              if(((p_75 != NULL) && (p_75 != s_75)))
                _fail(s_75);
              else
                p_75 = s_75;
            }
            {
              t = (ATerm) ATmakeAppl(sym__2, term_f_17, not_null(p_75));
              t = set_config_0(t);
            }
          }
          t = d_24;
          return(t);
        }
        ATerm d_5 (ATerm t)
        {
          t = term_e_24;
          return(t);
        }
        t = ArgOption_3(t, a_5, b_5, d_5);
      }
    }
  return(t);
}
ATerm default_usage_0 (ATerm t)
{
  ATerm f_24;
  f_24 = t;
  {
    ATerm x_75 = NULL;
    ATerm y_75 = NULL;
    t = term_o_8;
    {
      t = whoami_0(t);
      {
        y_75 = t;
        if(((x_75 != NULL) && (x_75 != y_75)))
          _fail(y_75);
        else
          x_75 = y_75;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_a_9, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_h_24), not_null(x_75)), term_g_24));
      {
        t = printnl_0(t);
        {
          t = term_c_9;
          t = exit_0(t);
        }
      }
    }
  }
  t = f_24;
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  ATerm b_76 = NULL;
  t = report_run_time_0(t);
  {
    ATerm c_76 = NULL;
    t = term_o_8;
    {
      t = whoami_0(t);
      {
        c_76 = t;
        if(((b_76 != NULL) && (b_76 != c_76)))
          _fail(c_76);
        else
          b_76 = c_76;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_a_9, (ATerm) ATinsert(ATinsert(ATempty, term_i_24), not_null(b_76)));
      {
        t = printnl_0(t);
        {
          t = term_c_9;
          t = exit_0(t);
        }
      }
    }
  }
  return(t);
}
ATerm whoami_0 (ATerm t)
{
  t = term_j_24;
  t = get_config_0(t);
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm f_76 = NULL;
  f_76 = t;
  t = SSL_TicksToSeconds(not_null(f_76));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm k_76 = NULL,l_76 = NULL,m_76 = NULL;
  k_76 = t;
  j_76 :
  if(match_cons(k_76, sym__2))
    {
      l_76 = ATgetArgument(k_76, 0);
      m_76 = ATgetArgument(k_76, 1);
      {
        ATerm k_24 = t;
        int l_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(l_76), not_null(m_76));
            ;
            LocalPopChoice(l_24);
          }
        else
          {
            t = k_24;
            t = SSL_addr(not_null(l_76), not_null(m_76));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm x_82 (ATerm), ATerm y_82 (ATerm))
{
  ATerm m_24 = t;
  int n_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = x_82(t);
      ;
      LocalPopChoice(n_24);
    }
  else
    {
      t = m_24;
      {
        ATerm x_76 = NULL,y_76 = NULL,z_76 = NULL;
        x_76 = t;
        w_76 :
        if(((ATgetType(x_76) == AT_LIST) && !(ATisEmpty(x_76))))
          {
            y_76 = ATgetFirst((ATermList) x_76);
            z_76 = (ATerm) ATgetNext((ATermList) x_76);
            {
              ATerm g_77 = NULL;
              ATerm h_77 = NULL;
              t = not_null(z_76);
              {
                t = foldr_2(t, x_82, y_82);
                {
                  h_77 = t;
                  if(((g_77 != NULL) && (g_77 != h_77)))
                    _fail(h_77);
                  else
                    g_77 = h_77;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(y_76), not_null(g_77));
                t = y_82(t);
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
ATerm crush_2 (ATerm t, ATerm v_80 (ATerm), ATerm w_80 (ATerm))
{
  ATerm s_77 = NULL;
  ATerm u_77 = NULL;
  s_77 = t;
  {
    ATerm v_77 = NULL;
    ATerm x_77 = NULL,y_77 = NULL,z_77 = NULL;
    t = not_null(s_77);
    {
      v_77 = t;
      {
        t = SSL_explode_term(not_null(v_77));
        {
          x_77 = t;
          r_77 :
          if(match_cons(x_77, sym__2))
            {
              y_77 = ATgetArgument(x_77, 0);
              z_77 = ATgetArgument(x_77, 1);
              if(((u_77 != NULL) && (u_77 != z_77)))
                _fail(z_77);
              else
                u_77 = z_77;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(u_77);
      t = foldr_2(t, v_80, w_80);
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
    ATerm e_5 (ATerm t)
    {
      t = term_f_10;
      return(t);
    }
    t = crush_2(t, e_5, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm f_78 = NULL,g_78 = NULL,h_78 = NULL;
  f_78 = t;
  e_78 :
  if(match_cons(f_78, sym__2))
    {
      g_78 = ATgetArgument(f_78, 0);
      h_78 = ATgetArgument(f_78, 1);
      {
        ATerm o_24;
        o_24 = t;
        {
          ATerm p_24 = t;
          int q_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(g_78), not_null(h_78));
              ;
              LocalPopChoice(q_24);
            }
          else
            {
              t = p_24;
              t = SSL_gtr(not_null(g_78), not_null(h_78));
            }
        }
        t = o_24;
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
  ATerm t_78 = NULL;
  ATerm r_24 = t;
  int s_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_78 = NULL,v_78 = NULL,x_78 = NULL;
      u_78 = t;
      s_78 :
      if(match_cons(u_78, sym__2))
        {
          v_78 = ATgetArgument(u_78, 0);
          x_78 = ATgetArgument(u_78, 1);
          {
            if(((t_78 != NULL) && (t_78 != v_78)))
              _fail(v_78);
            else
              t_78 = v_78;
            if(((t_78 != NULL) && (t_78 != x_78)))
              _fail(x_78);
            else
              t_78 = x_78;
          }
        }
      else
        {
          _fail(t);
        }
      ;
      LocalPopChoice(s_24);
    }
  else
    {
      t = r_24;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm g_85 (ATerm))
{
  ATerm f_5 (ATerm t)
  {
    ATerm t_24;
    t_24 = t;
    {
      ATerm a_79 = NULL;
      ATerm b_79 = NULL;
      t = term_x_22;
      {
        t = get_config_0(t);
        {
          b_79 = t;
          if(((a_79 != NULL) && (a_79 != b_79)))
            _fail(b_79);
          else
            a_79 = b_79;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(a_79), term_c_9);
        t = geq_0(t);
      }
    }
    t = t_24;
    t = g_85(t);
    return(t);
  }
  t = try_1(t, f_5);
  return(t);
}
ATerm report_run_time_0 (ATerm t)
{
  ATerm g_5 (ATerm t)
  {
    ATerm f_79 = NULL,h_79 = NULL;
    ATerm u_24;
    u_24 = t;
    {
      ATerm g_79 = NULL;
      t = run_time_0(t);
      {
        g_79 = t;
        if(((f_79 != NULL) && (f_79 != g_79)))
          _fail(g_79);
        else
          f_79 = g_79;
      }
    }
    t = u_24;
    {
      ATerm i_79 = NULL;
      t = term_o_8;
      {
        t = whoami_0(t);
        {
          i_79 = t;
          if(((h_79 != NULL) && (h_79 != i_79)))
            _fail(i_79);
          else
            h_79 = i_79;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_a_9, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_w_24), not_null(f_79)), term_v_24), not_null(h_79)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, g_5);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  t = report_run_time_0(t);
  {
    t = term_f_10;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm p_79 = NULL;
  p_79 = t;
  o_79 :
  if(match_cons(p_79, sym_Version_0))
    {
      ATerm r_79 = NULL,t_79 = NULL;
      ATerm x_24;
      x_24 = t;
      {
        ATerm s_79 = NULL;
        t = SSLgetAnnotations(not_null(p_79));
        {
          s_79 = t;
          if(((r_79 != NULL) && (r_79 != s_79)))
            _fail(s_79);
          else
            r_79 = s_79;
        }
      }
      t = x_24;
      {
        ATerm u_79 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(r_79));
        {
          u_79 = t;
          if(((t_79 != NULL) && (t_79 != u_79)))
            _fail(u_79);
          else
            t_79 = u_79;
        }
        t = not_null(t_79);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm g_90 (ATerm))
{
  ATerm y_24 = t;
  int z_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_a_25;
      t = get_config_0(t);
      ;
      LocalPopChoice(z_24);
    }
  else
    {
      t = y_24;
      {
        ATerm h_5 (ATerm t)
        {
          ATerm b_25 = t;
          int c_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Help_0(t);
              ;
              LocalPopChoice(c_25);
            }
          else
            {
              t = b_25;
              {
                ATerm d_25 = t;
                int e_25 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Undefined_1(t, _id);
                    ;
                    LocalPopChoice(e_25);
                  }
                else
                  {
                    t = d_25;
                    t = Version_0(t);
                  }
              }
            }
          return(t);
        }
        t = option_defined_1(t, h_5);
      }
    }
  t = g_90(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm z_79 = NULL;
  z_79 = t;
  t = SSL_table_create(not_null(z_79));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm d_80 = NULL;
  d_80 = t;
  {
    ATerm f_25;
    f_25 = t;
    {
      t = term_g_25;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_g_25, term_h_25, not_null(d_80));
          t = table_put_0(t);
        }
      }
    }
    t = f_25;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm h_80 = NULL;
  h_80 = t;
  t = SSL_table_destroy(not_null(h_80));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm l_80 = NULL;
  l_80 = t;
  t = SSL_exit(not_null(l_80));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm p_80 = NULL,q_80 = NULL,r_80 = NULL;
  p_80 = t;
  o_80 :
  if(((ATgetType(p_80) == AT_LIST) && ATisEmpty(p_80)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(p_80) == AT_LIST) && !(ATisEmpty(p_80))))
        {
          q_80 = ATgetFirst((ATermList) p_80);
          r_80 = (ATerm) ATgetNext((ATermList) p_80);
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
  ATerm i_25;
  i_25 = t;
  {
    ATerm u_80 = NULL;
    ATerm z_80 = NULL;
    ATerm j_25 = t;
    int k_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        ;
        LocalPopChoice(k_25);
      }
    else
      {
        t = j_25;
        {
          ATerm x_80 = NULL;
          ATerm y_80 = NULL;
          y_80 = t;
          if(((x_80 != NULL) && (x_80 != y_80)))
            _fail(y_80);
          else
            x_80 = y_80;
          t = (ATerm) ATinsert(ATempty, not_null(x_80));
        }
      }
    {
      z_80 = t;
      if(((u_80 != NULL) && (u_80 != z_80)))
        _fail(z_80);
      else
        u_80 = z_80;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_m_22, not_null(u_80));
      t = printnl_0(t);
    }
  }
  t = i_25;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm c_92 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm g_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm i_81 = NULL,j_81 = NULL,k_81 = NULL;
  k_81 = t;
  h_81 :
  if(((ATgetType(k_81) == AT_LIST) && !(ATisEmpty(k_81))))
    {
      i_81 = ATgetFirst((ATermList) k_81);
      j_81 = (ATerm) ATgetNext((ATermList) k_81);
      {
        ATerm n_81 = NULL;
        t = not_null(j_81);
        {
          ATerm l_25;
          l_25 = t;
          {
            ATerm o_81 = NULL,q_81 = NULL,s_81 = NULL;
            ATerm m_25;
            m_25 = t;
            {
              ATerm p_81 = NULL;
              t = i_0(t);
              {
                p_81 = t;
                if(((o_81 != NULL) && (o_81 != p_81)))
                  _fail(p_81);
                else
                  o_81 = p_81;
              }
            }
            t = m_25;
            {
              ATerm r_81 = NULL;
              t = not_null(i_81);
              {
                t = g_0(t);
                {
                  r_81 = t;
                  if(((q_81 != NULL) && (q_81 != r_81)))
                    _fail(r_81);
                  else
                    q_81 = r_81;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(o_81)), not_null(q_81));
                {
                  s_81 = t;
                  if(((n_81 != NULL) && (n_81 != s_81)))
                    _fail(s_81);
                  else
                    n_81 = s_81;
                }
              }
            }
          }
          t = l_25;
          {
            ATerm j_5 (ATerm t)
            {
              t = not_null(n_81);
              return(t);
            }
            t = reverse_acc_2(t, g_0, j_5);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(k_81) == AT_LIST) && ATisEmpty(k_81)))
        {
          {
            t = term_o_8;
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
  ATerm o_5 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, o_5);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm b_92 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm q_65 (ATerm))
{
  ATerm d_82 = NULL,e_82 = NULL;
  d_82 = t;
  c_82 :
  if(match_cons(d_82, sym_Program_1))
    {
      e_82 = ATgetArgument(d_82, 0);
      {
        ATerm h_82 = NULL,j_82 = NULL;
        ATerm i_82 = NULL;
        t = SSLgetAnnotations(not_null(d_82));
        {
          i_82 = t;
          if(((h_82 != NULL) && (h_82 != i_82)))
            _fail(i_82);
          else
            h_82 = i_82;
        }
        {
          t = not_null(e_82);
          {
            ATerm l_82 = NULL;
            t = q_65(t);
            {
              j_82 = t;
              {
                ATerm m_82 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(j_82)), not_null(h_82));
                {
                  m_82 = t;
                  if(((l_82 != NULL) && (l_82 != m_82)))
                    _fail(m_82);
                  else
                    l_82 = m_82;
                }
                t = not_null(l_82);
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
  ATerm v_82 = NULL;
  ATerm n_25 = t;
  int o_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_82 = NULL;
      t = term_j_24;
      {
        t = get_config_0(t);
        {
          w_82 = t;
          if(((v_82 != NULL) && (v_82 != w_82)))
            _fail(w_82);
          else
            v_82 = w_82;
        }
      }
      ;
      LocalPopChoice(o_25);
    }
  else
    {
      t = n_25;
      {
        ATerm p_5 (ATerm t)
        {
          ATerm q_5 (ATerm t)
          {
            ATerm e_83 = NULL;
            e_83 = t;
            if(((v_82 != NULL) && (v_82 != e_83)))
              _fail(e_83);
            else
              v_82 = e_83;
            return(t);
          }
          t = Program_1(t, q_5);
          return(t);
        }
        t = option_defined_1(t, p_5);
      }
    }
  {
    ATerm r_5 (ATerm t)
    {
      ATerm s_5 (ATerm t)
      {
        t = not_null(v_82);
        return(t);
      }
      t = short_description_1(t, s_5);
      t = echo_0(t);
      return(t);
    }
    t = try_1(t, r_5);
    {
      t = term_p_25;
      {
        t = echo_0(t);
        {
          t = term_s_25;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm t_5 (ATerm t)
                {
                  ATerm f_83 = NULL;
                  ATerm g_83 = NULL;
                  g_83 = t;
                  if(((f_83 != NULL) && (f_83 != g_83)))
                    _fail(g_83);
                  else
                    f_83 = g_83;
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(f_83)), term_t_25);
                    t = echo_0(t);
                  }
                  return(t);
                }
                t = map_1(t, t_5);
                {
                  ATerm y_5 (ATerm t)
                  {
                    ATerm h_83 = NULL;
                    ATerm i_83 = NULL;
                    ATerm c_6 (ATerm t)
                    {
                      t = not_null(v_82);
                      return(t);
                    }
                    t = long_description_1(t, c_6);
                    {
                      i_83 = t;
                      if(((h_83 != NULL) && (h_83 != i_83)))
                        _fail(i_83);
                      else
                        h_83 = i_83;
                    }
                    {
                      t = (ATerm) ATinsert(CheckATermList(not_null(h_83)), term_u_25);
                      t = echo_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, y_5);
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
  ATerm s_83 = NULL,t_83 = NULL,u_83 = NULL;
  s_83 = t;
  r_83 :
  if(match_cons(s_83, sym__2))
    {
      t_83 = ATgetArgument(s_83, 0);
      u_83 = ATgetArgument(s_83, 1);
      {
        ATerm v_25;
        v_25 = t;
        t = SSL_printnl(not_null(t_83), not_null(u_83));
        t = v_25;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm r_65 (ATerm))
{
  ATerm f_84 = NULL,g_84 = NULL;
  f_84 = t;
  e_84 :
  if(match_cons(f_84, sym_Undefined_1))
    {
      g_84 = ATgetArgument(f_84, 0);
      {
        ATerm j_84 = NULL,l_84 = NULL;
        ATerm k_84 = NULL;
        t = SSLgetAnnotations(not_null(f_84));
        {
          k_84 = t;
          if(((j_84 != NULL) && (j_84 != k_84)))
            _fail(k_84);
          else
            j_84 = k_84;
        }
        {
          t = not_null(g_84);
          {
            ATerm n_84 = NULL;
            t = r_65(t);
            {
              l_84 = t;
              {
                ATerm o_84 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(l_84)), not_null(j_84));
                {
                  o_84 = t;
                  if(((n_84 != NULL) && (n_84 != o_84)))
                    _fail(o_84);
                  else
                    n_84 = o_84;
                }
                t = not_null(n_84);
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
ATerm fetch_1 (ATerm t, ATerm c_77 (ATerm))
{
  ATerm u_84 (ATerm t)
  {
    ATerm w_25 = t;
    int x_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, c_77, _id);
        ;
        LocalPopChoice(x_25);
      }
    else
      {
        t = w_25;
        t = Cons_2(t, _id, u_84);
      }
    return(t);
  }
  t = u_84(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm b_91 (ATerm))
{
  t = fetch_1(t, b_91);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm z_84 = NULL;
  z_84 = t;
  y_84 :
  if(match_cons(z_84, sym_Help_0))
    {
      ATerm b_85 = NULL,d_85 = NULL;
      ATerm y_25;
      y_25 = t;
      {
        ATerm c_85 = NULL;
        t = SSLgetAnnotations(not_null(z_84));
        {
          c_85 = t;
          if(((b_85 != NULL) && (b_85 != c_85)))
            _fail(c_85);
          else
            b_85 = c_85;
        }
      }
      t = y_25;
      {
        ATerm e_85 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(b_85));
        {
          e_85 = t;
          if(((d_85 != NULL) && (d_85 != e_85)))
            _fail(e_85);
          else
            d_85 = e_85;
        }
        t = not_null(d_85);
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
  ATerm k_85 = NULL;
  k_85 = t;
  t = SSL_implode_string(not_null(k_85));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm z_25 = t;
  int a_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      ;
      LocalPopChoice(a_26);
    }
  else
    {
      t = z_25;
      {
        ATerm p_85 = NULL,q_85 = NULL,r_85 = NULL;
        p_85 = t;
        o_85 :
        if(((ATgetType(p_85) == AT_LIST) && !(ATisEmpty(p_85))))
          {
            q_85 = ATgetFirst((ATermList) p_85);
            r_85 = (ATerm) ATgetNext((ATermList) p_85);
            {
              t = not_null(q_85);
              {
                ATerm i_6 (ATerm t)
                {
                  t = not_null(r_85);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, i_6);
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
  ATerm b_86 = NULL;
  ATerm d_86 = NULL;
  b_86 = t;
  {
    ATerm e_86 = NULL;
    ATerm g_86 = NULL,h_86 = NULL,i_86 = NULL;
    t = not_null(b_86);
    {
      e_86 = t;
      {
        t = SSL_explode_term(not_null(e_86));
        {
          g_86 = t;
          z_85 :
          if(match_cons(g_86, sym__2))
            {
              h_86 = ATgetArgument(g_86, 0);
              i_86 = ATgetArgument(g_86, 1);
              a_86 :
              if(match_string(h_86, ""))
                {
                  if(((d_86 != NULL) && (d_86 != i_86)))
                    _fail(i_86);
                  else
                    d_86 = i_86;
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
      t = not_null(d_86);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm i_77 (ATerm))
{
  ATerm p_86 (ATerm t)
  {
    ATerm b_26 = t;
    int c_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, p_86);
        ;
        LocalPopChoice(c_26);
      }
    else
      {
        t = b_26;
        {
          t = Nil_0(t);
          t = i_77(t);
        }
      }
    return(t);
  }
  t = p_86(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm s_86 = NULL,t_86 = NULL,u_86 = NULL;
  s_86 = t;
  r_86 :
  if(match_cons(s_86, sym__2))
    {
      t_86 = ATgetArgument(s_86, 0);
      u_86 = ATgetArgument(s_86, 1);
      {
        t = not_null(t_86);
        {
          ATerm j_6 (ATerm t)
          {
            t = not_null(u_86);
            return(t);
          }
          t = at_end_1(t, j_6);
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
  ATerm d_26 = t;
  int e_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      ;
      LocalPopChoice(e_26);
    }
  else
    {
      t = d_26;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm z_86 = NULL;
  z_86 = t;
  t = SSL_explode_string(not_null(z_86));
  return(t);
}
ATerm _2 (ATerm t, ATerm q_61 (ATerm), ATerm r_61 (ATerm))
{
  ATerm i_87 = NULL,j_87 = NULL,k_87 = NULL;
  i_87 = t;
  h_87 :
  if(match_cons(i_87, sym__2))
    {
      j_87 = ATgetArgument(i_87, 0);
      k_87 = ATgetArgument(i_87, 1);
      {
        ATerm o_87 = NULL,q_87 = NULL;
        ATerm p_87 = NULL;
        t = SSLgetAnnotations(not_null(i_87));
        {
          p_87 = t;
          if(((o_87 != NULL) && (o_87 != p_87)))
            _fail(p_87);
          else
            o_87 = p_87;
        }
        {
          t = not_null(j_87);
          {
            ATerm t_87 = NULL;
            t = q_61(t);
            {
              q_87 = t;
              {
                t = not_null(k_87);
                {
                  ATerm v_87 = NULL;
                  t = r_61(t);
                  {
                    t_87 = t;
                    {
                      ATerm w_87 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(q_87), not_null(t_87)), not_null(o_87));
                      {
                        w_87 = t;
                        if(((v_87 != NULL) && (v_87 != w_87)))
                          _fail(w_87);
                        else
                          v_87 = w_87;
                      }
                      t = not_null(v_87);
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
ATerm debug_1 (ATerm t, ATerm r_87 (ATerm))
{
  ATerm f_26;
  f_26 = t;
  {
    ATerm f_88 = NULL,h_88 = NULL;
    ATerm g_26;
    g_26 = t;
    {
      ATerm g_88 = NULL;
      t = r_87(t);
      {
        g_88 = t;
        if(((f_88 != NULL) && (f_88 != g_88)))
          _fail(g_88);
        else
          f_88 = g_88;
      }
    }
    t = g_26;
    {
      ATerm i_88 = NULL;
      i_88 = t;
      if(((h_88 != NULL) && (h_88 != i_88)))
        _fail(i_88);
      else
        h_88 = i_88;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_a_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(h_88)), not_null(f_88)));
        t = printnl_0(t);
      }
    }
  }
  t = f_26;
  return(t);
}
ATerm map_1 (ATerm t, ATerm t_76 (ATerm))
{
  ATerm l_88 (ATerm t)
  {
    ATerm h_26 = t;
    int i_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        ;
        LocalPopChoice(i_26);
      }
    else
      {
        t = h_26;
        t = Cons_2(t, t_76, l_88);
      }
    return(t);
  }
  t = l_88(t);
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm n_88 = NULL;
  n_88 = t;
  t = SSL_is_string(not_null(n_88));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm j_26 = t;
  int k_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      ;
      LocalPopChoice(k_26);
    }
  else
    {
      t = j_26;
      {
        ATerm l_26 = t;
        int m_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_6 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, k_6);
            ;
            LocalPopChoice(m_26);
          }
        else
          {
            t = l_26;
            {
              ATerm w_88 = NULL,x_88 = NULL,y_88 = NULL;
              w_88 = t;
              v_88 :
              if(match_cons(w_88, sym_Path_1))
                {
                  x_88 = ATgetArgument(w_88, 0);
                  t = not_null(x_88);
                }
              else
                {
                  if(match_cons(w_88, sym_Var_1))
                    {
                      x_88 = ATgetArgument(w_88, 0);
                      {
                        t = not_null(x_88);
                        {
                          ATerm n_26 = t;
                          int o_26 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              ;
                              LocalPopChoice(o_26);
                            }
                          else
                            {
                              t = n_26;
                              {
                                ATerm l_6 (ATerm t)
                                {
                                  t = term_p_26;
                                  return(t);
                                }
                                t = debug_1(t, l_6);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(w_88, sym_Prefix_2))
                        {
                          x_88 = ATgetArgument(w_88, 0);
                          y_88 = ATgetArgument(w_88, 1);
                          {
                            ATerm d_89 = NULL,f_89 = NULL;
                            ATerm q_26;
                            q_26 = t;
                            {
                              ATerm e_89 = NULL;
                              t = not_null(x_88);
                              {
                                t = eval_config_0(t);
                                {
                                  e_89 = t;
                                  if(((d_89 != NULL) && (d_89 != e_89)))
                                    _fail(e_89);
                                  else
                                    d_89 = e_89;
                                }
                              }
                            }
                            t = q_26;
                            {
                              ATerm g_89 = NULL;
                              t = not_null(y_88);
                              {
                                t = eval_config_0(t);
                                {
                                  g_89 = t;
                                  if(((f_89 != NULL) && (f_89 != g_89)))
                                    _fail(g_89);
                                  else
                                    f_89 = g_89;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(d_89), not_null(f_89));
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
  ATerm o_89 = NULL;
  o_89 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_s_26, not_null(o_89));
    {
      t = table_get_0(t);
      {
        ATerm o_6 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm t_26;
            t_26 = t;
            {
              ATerm q_89 = NULL;
              ATerm r_89 = NULL;
              r_89 = t;
              if(((q_89 != NULL) && (q_89 != r_89)))
                _fail(r_89);
              else
                q_89 = r_89;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_s_26, not_null(o_89), not_null(q_89));
                t = table_put_0(t);
              }
            }
            t = t_26;
          }
          return(t);
        }
        t = try_1(t, o_6);
      }
    }
  }
  return(t);
}
ATerm try_1 (ATerm t, ATerm b_75 (ATerm))
{
  ATerm u_26 = t;
  int v_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = b_75(t);
      ;
      LocalPopChoice(v_26);
    }
  else
    {
      t = u_26;
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
  ATerm f_90 = NULL,h_90 = NULL,o_90 = NULL,p_90 = NULL;
  f_90 = t;
  e_90 :
  if(match_cons(f_90, sym__3))
    {
      h_90 = ATgetArgument(f_90, 0);
      o_90 = ATgetArgument(f_90, 1);
      p_90 = ATgetArgument(f_90, 2);
      {
        ATerm w_26;
        w_26 = t;
        {
          ATerm t_90 = NULL;
          ATerm u_90 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(h_90), not_null(o_90));
          {
            ATerm x_26 = t;
            int y_26 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                ;
                LocalPopChoice(y_26);
              }
            else
              {
                t = x_26;
                t = (ATerm) ATempty;
              }
            {
              u_90 = t;
              if(((t_90 != NULL) && (t_90 != u_90)))
                _fail(u_90);
              else
                t_90 = u_90;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(h_90), not_null(o_90), (ATerm) ATinsert(CheckATermList(not_null(t_90)), not_null(p_90)));
            t = table_put_0(t);
          }
        }
        t = w_26;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm g_92 (ATerm))
{
  ATerm y_90 = NULL;
  ATerm z_90 = NULL;
  t = term_o_8;
  {
    t = g_92(t);
    {
      z_90 = t;
      if(((y_90 != NULL) && (y_90 != z_90)))
        _fail(z_90);
      else
        y_90 = z_90;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_q_25, term_r_25, not_null(y_90));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm))
{
  ATerm g_91 = NULL,h_91 = NULL,i_91 = NULL;
  g_91 = t;
  f_91 :
  if(match_string(g_91, "register-usage-info"))
    {
      t = register_usage_1(t, d_0);
    }
  else
    {
      if(((ATgetType(g_91) == AT_LIST) && !(ATisEmpty(g_91))))
        {
          h_91 = ATgetFirst((ATermList) g_91);
          i_91 = (ATerm) ATgetNext((ATermList) g_91);
          {
            ATerm l_91 = NULL;
            ATerm z_26;
            z_26 = t;
            {
              t = not_null(h_91);
              t = a_0(t);
            }
            t = z_26;
            {
              ATerm m_91 = NULL;
              t = term_o_8;
              {
                t = b_0(t);
                {
                  m_91 = t;
                  if(((l_91 != NULL) && (l_91 != m_91)))
                    _fail(m_91);
                  else
                    l_91 = m_91;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(i_91)), not_null(l_91));
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
  ATerm p_6 (ATerm t)
  {
    ATerm r_91 = NULL;
    r_91 = t;
    q_91 :
    if(!(match_string(r_91, "--help")))
      {
        if(!(match_string(r_91, "-h")))
          {
            if(!(match_string(r_91, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm s_6 (ATerm t)
  {
    t = term_a_27;
    {
      t = set_config_0(t);
      t = term_b_27;
    }
    return(t);
  }
  ATerm t_6 (ATerm t)
  {
    t = term_c_27;
    return(t);
  }
  t = Option_3(t, p_6, s_6, t_6);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm u_91 = NULL,v_91 = NULL,w_91 = NULL;
  u_91 = t;
  t_91 :
  if(((ATgetType(u_91) == AT_LIST) && !(ATisEmpty(u_91))))
    {
      v_91 = ATgetFirst((ATermList) u_91);
      w_91 = (ATerm) ATgetNext((ATermList) u_91);
      t = (ATerm) ATinsert(CheckATermList(not_null(w_91)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(v_91)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm z_62 (ATerm), ATerm a_63 (ATerm))
{
  ATerm m_92 = NULL,n_92 = NULL,o_92 = NULL;
  m_92 = t;
  l_92 :
  if(((ATgetType(m_92) == AT_LIST) && !(ATisEmpty(m_92))))
    {
      n_92 = ATgetFirst((ATermList) m_92);
      o_92 = (ATerm) ATgetNext((ATermList) m_92);
      {
        ATerm s_92 = NULL,u_92 = NULL;
        ATerm t_92 = NULL;
        t = SSLgetAnnotations(not_null(m_92));
        {
          t_92 = t;
          if(((s_92 != NULL) && (s_92 != t_92)))
            _fail(t_92);
          else
            s_92 = t_92;
        }
        {
          t = not_null(n_92);
          {
            ATerm w_92 = NULL;
            t = z_62(t);
            {
              u_92 = t;
              {
                t = not_null(o_92);
                {
                  ATerm y_92 = NULL;
                  t = a_63(t);
                  {
                    w_92 = t;
                    {
                      ATerm f_93 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(w_92)), not_null(u_92)), not_null(s_92));
                      {
                        f_93 = t;
                        if(((y_92 != NULL) && (y_92 != f_93)))
                          _fail(f_93);
                        else
                          y_92 = f_93;
                      }
                      t = not_null(y_92);
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
  ATerm p_93 = NULL;
  p_93 = t;
  o_93 :
  if(((ATgetType(p_93) == AT_LIST) && ATisEmpty(p_93)))
    {
      {
        ATerm r_93 = NULL,t_93 = NULL;
        ATerm d_27;
        d_27 = t;
        {
          ATerm s_93 = NULL;
          t = SSLgetAnnotations(not_null(p_93));
          {
            s_93 = t;
            if(((r_93 != NULL) && (r_93 != s_93)))
              _fail(s_93);
            else
              r_93 = s_93;
          }
        }
        t = d_27;
        {
          ATerm u_93 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(r_93));
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
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm set_config_0 (ATerm t)
{
  ATerm a_94 = NULL,b_94 = NULL,c_94 = NULL;
  a_94 = t;
  z_93 :
  if(match_cons(a_94, sym__2))
    {
      b_94 = ATgetArgument(a_94, 0);
      c_94 = ATgetArgument(a_94, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_s_26, not_null(b_94), not_null(c_94));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm e_92 (ATerm))
{
  ATerm e_27;
  e_27 = t;
  {
    ATerm u_6 (ATerm t)
    {
      t = term_f_27;
      t = e_92(t);
      return(t);
    }
    t = try_1(t, u_6);
  }
  t = e_27;
  {
    ATerm v_6 (ATerm t)
    {
      ATerm k_94 = NULL;
      ATerm g_27;
      g_27 = t;
      {
        ATerm i_94 = NULL;
        ATerm j_94 = NULL;
        j_94 = t;
        if(((i_94 != NULL) && (i_94 != j_94)))
          _fail(j_94);
        else
          i_94 = j_94;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_j_24, not_null(i_94));
          t = set_config_0(t);
        }
      }
      t = g_27;
      {
        ATerm l_94 = NULL;
        l_94 = t;
        if(((k_94 != NULL) && (k_94 != l_94)))
          _fail(l_94);
        else
          k_94 = l_94;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(k_94));
      }
      return(t);
    }
    ATerm w_6 (ATerm t)
    {
      ATerm h_27 = t;
      int i_27 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm l_27 = t;
          int m_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              ;
              LocalPopChoice(m_27);
            }
          else
            {
              t = l_27;
              {
                t = e_92(t);
                t = Cons_2(t, _id, w_6);
              }
            }
          ;
          LocalPopChoice(i_27);
        }
      else
        {
          t = h_27;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, v_6, w_6);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm r_94 = NULL,s_94 = NULL,t_94 = NULL;
  ATerm n_27;
  n_27 = t;
  {
    ATerm u_94 = NULL,v_94 = NULL,w_94 = NULL,x_94 = NULL;
    u_94 = t;
    q_94 :
    if(match_cons(u_94, sym__3))
      {
        v_94 = ATgetArgument(u_94, 0);
        w_94 = ATgetArgument(u_94, 1);
        x_94 = ATgetArgument(u_94, 2);
        {
          if(((r_94 != NULL) && (r_94 != v_94)))
            _fail(v_94);
          else
            r_94 = v_94;
          {
            if(((s_94 != NULL) && (s_94 != w_94)))
              _fail(w_94);
            else
              s_94 = w_94;
            {
              if(((t_94 != NULL) && (t_94 != x_94)))
                _fail(x_94);
              else
                t_94 = x_94;
              t = SSL_table_put(not_null(r_94), not_null(s_94), not_null(t_94));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = n_27;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm d_92 (ATerm))
{
  ATerm a_95 = NULL;
  ATerm o_27;
  o_27 = t;
  {
    t = term_p_27;
    t = table_put_0(t);
  }
  t = o_27;
  {
    ATerm b_7 (ATerm t)
    {
      ATerm q_27 = t;
      int r_27 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = d_92(t);
          ;
          LocalPopChoice(r_27);
        }
      else
        {
          t = q_27;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, b_7);
    {
      ATerm c_7 (ATerm t)
      {
        ATerm s_27 = t;
        int y_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_27;
            z_27 = t;
            {
              ATerm a_28 = t;
              int f_28 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_a_25;
                  t = get_config_0(t);
                  ;
                  LocalPopChoice(f_28);
                }
              else
                {
                  t = a_28;
                  t = option_defined_1(t, Help_0);
                }
            }
            t = z_27;
            {
              t = system_usage_0(t);
              {
                t = term_f_10;
                t = exit_0(t);
              }
            }
            ;
            LocalPopChoice(y_27);
          }
        else
          {
            t = s_27;
            {
              ATerm j_7 (ATerm t)
              {
                ATerm k_7 (ATerm t)
                {
                  ATerm b_95 = NULL;
                  b_95 = t;
                  if(((a_95 != NULL) && (a_95 != b_95)))
                    _fail(b_95);
                  else
                    a_95 = b_95;
                  return(t);
                }
                t = Undefined_1(t, k_7);
                return(t);
              }
              t = option_defined_1(t, j_7);
              {
                t = (ATerm) ATmakeAppl(sym__2, term_a_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(a_95)), term_g_28));
                {
                  t = printnl_0(t);
                  {
                    t = system_usage_0(t);
                    {
                      t = term_c_9;
                      t = exit_0(t);
                    }
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, c_7);
      {
        ATerm h_28;
        h_28 = t;
        {
          t = term_q_25;
          t = table_destroy_0(t);
        }
        t = h_28;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm i_90 (ATerm), ATerm j_90 (ATerm), ATerm k_90 (ATerm), ATerm l_90 (ATerm))
{
  t = parse_options_1(t, i_90);
  {
    t = store_options_0(t);
    {
      t = k_90(t);
      {
        ATerm i_28 = t;
        int j_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, j_90);
            ;
            LocalPopChoice(j_28);
          }
        else
          {
            t = i_28;
            {
              ATerm m_28 = t;
              int n_28 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = l_90(t);
                  t = report_success_0(t);
                  ;
                  LocalPopChoice(n_28);
                }
              else
                {
                  t = m_28;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm option_wrap_2 (ATerm t, ATerm m_90 (ATerm), ATerm n_90 (ATerm))
{
  t = option_wrap_4(t, m_90, default_usage_0, _id, n_90);
  return(t);
}
ATerm io_Abox_2_text_0 (ATerm t)
{
  ATerm l_7 (ATerm t)
  {
    ATerm m_7 (ATerm t)
    {
      ATerm f_95 = NULL,h_95 = NULL;
      t = read_from_0(t);
      {
        ATerm g_95 = NULL;
        g_95 = t;
        if(((f_95 != NULL) && (f_95 != g_95)))
          _fail(g_95);
        else
          f_95 = g_95;
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(f_95), term_f_10);
          {
            t = try_abox2text_0(t);
            {
              t = Fst_0(t);
              {
                ATerm i_95 = NULL;
                i_95 = t;
                if(((h_95 != NULL) && (h_95 != i_95)))
                  _fail(i_95);
                else
                  h_95 = i_95;
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(h_95), term_u_25);
                  t = topdown_print_to_0(t);
                }
              }
            }
          }
        }
      }
      return(t);
    }
    t = xtc_io_1(t, m_7);
    return(t);
  }
  t = option_wrap_2(t, abox2text_options_0, l_7);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = io_Abox_2_text_0(t);
  return(t);
}
