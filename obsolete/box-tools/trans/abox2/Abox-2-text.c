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
ATerm term_p_27;
ATerm term_h_27;
ATerm term_v_26;
ATerm term_r_26;
ATerm term_q_26;
ATerm term_p_26;
ATerm term_o_26;
ATerm term_e_26;
ATerm term_w_25;
ATerm term_s_24;
ATerm term_r_24;
ATerm term_q_24;
ATerm term_p_24;
ATerm term_o_24;
ATerm term_n_24;
ATerm term_f_24;
ATerm term_e_24;
ATerm term_x_23;
ATerm term_w_23;
ATerm term_v_23;
ATerm term_j_23;
ATerm term_i_23;
ATerm term_h_23;
ATerm term_f_23;
ATerm term_x_22;
ATerm term_v_22;
ATerm term_u_22;
ATerm term_t_22;
ATerm term_s_22;
ATerm term_p_22;
ATerm term_j_22;
ATerm term_i_22;
ATerm term_h_22;
ATerm term_g_22;
ATerm term_f_22;
ATerm term_b_22;
ATerm term_a_22;
ATerm term_z_21;
ATerm term_y_21;
ATerm term_v_21;
ATerm term_u_21;
ATerm term_s_21;
ATerm term_r_21;
ATerm term_q_21;
ATerm term_p_21;
ATerm term_n_21;
ATerm term_m_21;
ATerm term_j_21;
ATerm term_e_21;
ATerm term_s_18;
ATerm term_r_18;
ATerm term_p_18;
ATerm term_b_18;
ATerm term_g_17;
ATerm term_f_17;
ATerm term_z_15;
ATerm term_m_14;
ATerm term_r_13;
ATerm term_l_13;
ATerm term_v_10;
ATerm term_h_10;
ATerm term_f_9;
ATerm term_e_9;
ATerm term_c_9;
ATerm term_x_8;
ATerm term_r_8;
ATerm term_q_8;
ATerm term_p_8;
ATerm term_n_8;
ATerm term_a_8;
ATerm term_y_7;
void init_constant_terms (void)
{
  ATprotect(&(term_y_7));
  term_y_7 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_a_8));
  term_a_8 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_n_8));
  term_n_8 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file>(file, mode)", 0, ATtrue));
  ATprotect(&(term_p_8));
  term_p_8 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_q_8));
  term_q_8 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_r_8));
  term_r_8 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_x_8));
  term_x_8 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_c_9));
  term_c_9 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_e_9));
  term_e_9 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_f_9));
  term_f_9 = (ATerm) ATmakeInt(32);
  ATprotect(&(term_h_10));
  term_h_10 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_v_10));
  term_v_10 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeAppl(ATmakeSymbol("** ERROR: R children of A box have different numbers of boxes", 0, ATtrue));
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--width", 0, ATtrue));
  ATprotect(&(term_g_17));
  term_g_17 = (ATerm) ATmakeInt(80);
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeAppl(ATmakeSymbol("** ERROR: invalid box: ", 0, ATtrue));
  ATprotect(&(term_p_18));
  term_p_18 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: file doesn't exist or doesn't contain a valid term: ", 0, ATtrue));
  ATprotect(&(term_r_18));
  term_r_18 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_s_18));
  term_s_18 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_e_21));
  term_e_21 = (ATerm) ATmakeAppl(sym__2, term_x_8, term_y_7);
  ATprotect(&(term_j_21));
  term_j_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_m_21));
  term_m_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_n_21));
  term_n_21 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_p_21));
  term_p_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_q_21));
  term_q_21 = (ATerm) ATmakeAppl(sym__2, term_p_21, term_q_8);
  ATprotect(&(term_r_21));
  term_r_21 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_s_21));
  term_s_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_u_21));
  term_u_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_v_21));
  term_v_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_y_21));
  term_y_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_z_21));
  term_z_21 = (ATerm) ATmakeAppl(sym__2, term_y_21, term_h_10);
  ATprotect(&(term_a_22));
  term_a_22 = (ATerm) ATmakeAppl(sym_Verbose_1, term_h_10);
  ATprotect(&(term_b_22));
  term_b_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_f_22));
  term_f_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_g_22));
  term_g_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_h_22));
  term_h_22 = (ATerm) ATmakeAppl(sym__2, term_g_22, term_q_8);
  ATprotect(&(term_i_22));
  term_i_22 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_j_22));
  term_j_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_p_22));
  term_p_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_s_22));
  term_s_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_t_22));
  term_t_22 = (ATerm) ATmakeAppl(sym__2, term_s_22, term_q_8);
  ATprotect(&(term_u_22));
  term_u_22 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_v_22));
  term_v_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_x_22));
  term_x_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_f_23));
  term_f_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-w int | --width int       Specifies max width of output.", 0, ATtrue));
  ATprotect(&(term_h_23));
  term_h_23 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_i_23));
  term_i_23 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_j_23));
  term_j_23 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_v_23));
  term_v_23 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_w_23));
  term_w_23 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_x_23));
  term_x_23 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_e_24));
  term_e_24 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_f_24));
  term_f_24 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_n_24));
  term_n_24 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_o_24));
  term_o_24 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_p_24));
  term_p_24 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_q_24));
  term_q_24 = (ATerm) ATmakeAppl(sym__2, term_o_24, term_p_24);
  ATprotect(&(term_r_24));
  term_r_24 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_s_24));
  term_s_24 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_w_25));
  term_w_25 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_e_26));
  term_e_26 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_o_26));
  term_o_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_p_26));
  term_p_26 = (ATerm) ATmakeAppl(sym__2, term_o_26, term_q_8);
  ATprotect(&(term_q_26));
  term_q_26 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_r_26));
  term_r_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_v_26));
  term_v_26 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_h_27));
  term_h_27 = (ATerm) ATmakeAppl(sym__3, term_o_24, term_p_24, (ATerm) ATempty);
  ATprotect(&(term_p_27));
  term_p_27 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm close_file_0 (ATerm);
ATerm print_0 (ATerm);
ATerm topdown_1 (ATerm, ATerm n_67 (ATerm));
ATerm assert_1 (ATerm, ATerm i_84 (ATerm));
ATerm obsolete_1 (ATerm, ATerm w_84 (ATerm));
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
ATerm hv_in_new_vbox_2 (ATerm, ATerm p_65 (ATerm), ATerm q_65 (ATerm));
ATerm hv_add_to_hbox_1 (ATerm, ATerm o_65 (ATerm));
ATerm FoldL_1 (ATerm, ATerm f_81 (ATerm));
ATerm foldl_1 (ATerm, ATerm k_80 (ATerm));
ATerm is_length_0 (ATerm);
ATerm string_length_0 (ATerm);
ATerm vs_length_0 (ATerm);
ATerm vs_text_0 (ATerm);
ATerm SOpt_2 (ATerm, ATerm r_59 (ATerm), ATerm s_59 (ATerm));
ATerm SOpt_value_1 (ATerm, ATerm r_65 (ATerm));
ATerm hs_length_0 (ATerm);
ATerm hs_text_0 (ATerm);
ATerm subt_0 (ATerm);
ATerm Nil_T_0 (ATerm);
ATerm Cons_T_2 (ATerm, ATerm q_0 (ATerm), ATerm t_0 (ATerm));
ATerm thread_map_1 (ATerm, ATerm v_80 (ATerm));
ATerm H_2 (ATerm, ATerm l_59 (ATerm), ATerm m_59 (ATerm));
ATerm is_real_hbox_0 (ATerm);
ATerm filter_1 (ATerm, ATerm i_81 (ATerm));
ATerm do_vbox_children_0 (ATerm);
ATerm is_real_vbox_0 (ATerm);
ATerm split_Cons_0 (ATerm);
ATerm matrix_transpose_0 (ATerm);
ATerm align_left_0 (ATerm);
ATerm align_right_0 (ATerm);
ATerm while_not_2 (ATerm, ATerm e_67 (ATerm), ATerm f_67 (ATerm));
ATerm for_3 (ATerm, ATerm h_67 (ATerm), ATerm i_67 (ATerm), ATerm j_67 (ATerm));
ATerm copy_0 (ATerm);
ATerm copy_char_0 (ATerm);
ATerm pos_0 (ATerm);
ATerm align_helper_0 (ATerm);
ATerm inc_0 (ATerm);
ATerm Dupl_0 (ATerm);
ATerm div_0 (ATerm);
ATerm div2_0 (ATerm);
ATerm dec_0 (ATerm);
ATerm mod_0 (ATerm);
ATerm even_0 (ATerm);
ATerm align_center_0 (ATerm);
ATerm align_column_0 (ATerm);
ATerm SOpts_of_alignment_0 (ATerm);
ATerm Snd_0 (ATerm);
ATerm max_0 (ATerm);
ATerm Hd_0 (ATerm);
ATerm list_accum_1 (ATerm, ATerm y_83 (ATerm));
ATerm list_max_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm MkCons_0 (ATerm);
ATerm flatten_list_0 (ATerm);
ATerm UnZip2_0 (ATerm);
ATerm UnZip3_0 (ATerm);
ATerm UnZip1_0 (ATerm);
ATerm unzip_1 (ATerm, ATerm c_76 (ATerm));
ATerm unzip_0 (ATerm);
ATerm do_A_column_0 (ATerm);
ATerm Zip3_0 (ATerm);
ATerm Zip2_0 (ATerm);
ATerm Zip1_0 (ATerm);
ATerm genzip_4 (ATerm, ATerm s_75 (ATerm), ATerm t_75 (ATerm), ATerm u_75 (ATerm), ATerm v_75 (ATerm));
ATerm zip_1 (ATerm, ATerm x_75 (ATerm));
ATerm zip_0 (ATerm);
ATerm length_0 (ATerm);
ATerm HdMember_p__2 (ATerm, ATerm s_79 (ATerm), ATerm t_79 (ATerm));
ATerm union_1 (ATerm, ATerm o_79 (ATerm));
ATerm union_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm h_80 (ATerm), ATerm i_80 (ATerm), ATerm j_80 (ATerm));
ATerm make_set_0 (ATerm);
ATerm warn_not_matrix_0 (ATerm);
ATerm R_2 (ATerm, ATerm d_59 (ATerm), ATerm e_59 (ATerm));
ATerm split_2 (ATerm, ATerm u_81 (ATerm), ATerm v_81 (ATerm));
ATerm construct_rows_0 (ATerm);
ATerm Last_0 (ATerm);
ATerm last_0 (ATerm);
ATerm eq_0 (ATerm);
ATerm elem_1 (ATerm, ATerm z_73 (ATerm));
ATerm elem_0 (ATerm);
ATerm at_suffix_1 (ATerm, ATerm k_74 (ATerm));
ATerm split_fetch_1 (ATerm, ATerm d_74 (ATerm));
ATerm list_tokenize_1 (ATerm, ATerm a_83 (ATerm));
ATerm string_tokenize_0 (ATerm);
ATerm rel_string_length_0 (ATerm);
ATerm leq_0 (ATerm);
ATerm get_width_0 (ATerm);
ATerm abox2text_0 (ATerm);
ATerm try_abox2text_0 (ATerm);
ATerm ReadFromFile_0 (ATerm);
ATerm file_exists_0 (ATerm);
ATerm read_from_0 (ATerm);
ATerm copy_file_0 (ATerm);
ATerm stderr_0 (ATerm);
ATerm stdout_0 (ATerm);
ATerm copy_to_1 (ATerm, ATerm m_0 (ATerm));
ATerm Tl_0 (ATerm);
ATerm table_pop_0 (ATerm);
ATerm end_scope_1 (ATerm, ATerm f_84 (ATerm));
ATerm remove_file_0 (ATerm);
ATerm restore_always_2 (ATerm, ATerm i_66 (ATerm), ATerm j_66 (ATerm));
ATerm begin_scope_1 (ATerm, ATerm e_84 (ATerm));
ATerm xtc_temp_files_1 (ATerm, ATerm x_93 (ATerm));
ATerm xtc_io_1 (ATerm, ATerm y_93 (ATerm));
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
ATerm ticks_to_seconds_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm f_80 (ATerm), ATerm g_80 (ATerm));
ATerm crush_2 (ATerm, ATerm d_79 (ATerm), ATerm e_79 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm l_87 (ATerm));
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm r_85 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm p_89 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm h_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm o_89 (ATerm));
ATerm Program_1 (ATerm, ATerm z_64 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm q_84 (ATerm));
ATerm Undefined_1 (ATerm, ATerm a_65 (ATerm));
ATerm fetch_1 (ATerm, ATerm a_74 (ATerm));
ATerm option_defined_1 (ATerm, ATerm o_88 (ATerm));
ATerm Help_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm g_74 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm _2 (ATerm, ATerm u_56 (ATerm), ATerm v_56 (ATerm));
ATerm conc_strings_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm debug_1 (ATerm, ATerm p_84 (ATerm));
ATerm map_1 (ATerm, ATerm r_73 (ATerm));
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm try_1 (ATerm, ATerm t_65 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm t_89 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm d_58 (ATerm), ATerm e_58 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm r_89 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm q_89 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm x_85 (ATerm), ATerm y_85 (ATerm), ATerm z_85 (ATerm), ATerm a_86 (ATerm));
ATerm option_wrap_2 (ATerm, ATerm b_86 (ATerm), ATerm c_86 (ATerm));
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
ATerm topdown_1 (ATerm t, ATerm n_67 (ATerm))
{
  t = n_67(t);
  {
    ATerm b_0 (ATerm t)
    {
      t = topdown_1(t, n_67);
      return(t);
    }
    t = _all(t, b_0);
  }
  return(t);
}
ATerm assert_1 (ATerm t, ATerm i_84 (ATerm))
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
        ATerm p_7;
        p_7 = t;
        {
          ATerm a_4 = NULL;
          ATerm b_4 = NULL,c_4 = NULL,d_4 = NULL;
          t = i_84(t);
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
                    ATerm q_7 = t;
                    int r_7 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(x_3), term_y_7);
                        t = table_get_0(t);
                        LocalPopChoice(r_7);
                      }
                    else
                      {
                        t = q_7;
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
                                t = (ATerm) ATmakeAppl(sym__3, not_null(x_3), term_y_7, (ATerm) ATinsert(CheckATermList(not_null(z_3)), (ATerm) ATinsert(CheckATermList(not_null(y_3)), not_null(t_3))));
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
        t = p_7;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm obsolete_1 (ATerm t, ATerm w_84 (ATerm))
{
  ATerm z_7;
  z_7 = t;
  {
    t = w_84(t);
    {
      ATerm c_0 (ATerm t)
      {
        t = term_a_8;
        return(t);
      }
      t = debug_1(t, c_0);
    }
  }
  t = z_7;
  return(t);
}
ATerm open_file_0 (ATerm t)
{
  ATerm l_4 = NULL,m_4 = NULL;
  ATerm l_8 = t;
  int m_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_4 = NULL,o_4 = NULL,p_4 = NULL;
      n_4 = t;
      i_4 :
      if(match_cons(n_4, sym__2))
        {
          o_4 = ATgetArgument(n_4, 0);
          p_4 = ATgetArgument(n_4, 1);
          {
            if(((m_4 != NULL) && (m_4 != o_4)))
              _fail(o_4);
            else
              m_4 = o_4;
            if(((l_4 != NULL) && (l_4 != p_4)))
              _fail(p_4);
            else
              l_4 = p_4;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(m_8);
      t = SSL_open_file(not_null(m_4), not_null(l_4));
    }
  else
    {
      t = l_8;
      {
        ATerm q_4 = NULL;
        ATerm r_4 = NULL;
        ATerm e_0 (ATerm t)
        {
          t = term_n_8;
          return(t);
        }
        t = obsolete_1(t, e_0);
        {
          q_4 = t;
          {
            if(((m_4 != NULL) && (m_4 != q_4)))
              _fail(q_4);
            else
              m_4 = q_4;
            {
              ATerm o_8;
              o_8 = t;
              {
                ATerm s_4 = NULL;
                t = term_p_8;
                {
                  s_4 = t;
                  if(((r_4 != NULL) && (r_4 != s_4)))
                    _fail(s_4);
                  else
                    r_4 = s_4;
                }
              }
              t = o_8;
              t = SSL_open_file(not_null(m_4), not_null(r_4));
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
  ATerm x_4 = NULL;
  ATerm y_4 = NULL;
  t = term_q_8;
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
    t = (ATerm) ATmakeAppl(sym__2, not_null(x_4), term_r_8);
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
  ATerm c_5 = NULL;
  t = new_file_0(t);
  {
    c_5 = t;
    {
      ATerm w_8;
      w_8 = t;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(c_5), term_p_8);
        {
          t = open_file_0(t);
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(c_5), term_q_8);
            {
              ATerm n_0 (ATerm t)
              {
                t = term_x_8;
                return(t);
              }
              t = assert_1(t, n_0);
            }
          }
        }
      }
      t = w_8;
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
                  ATerm a_9;
                  a_9 = t;
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
                  t = a_9;
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
  ATerm b_9;
  b_9 = t;
  {
    ATerm m_6 = NULL;
    ATerm n_6 = NULL;
    n_6 = t;
    if(((m_6 != NULL) && (m_6 != n_6)))
      _fail(n_6);
    else
      m_6 = n_6;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_c_9, not_null(m_6));
      t = printnl_0(t);
    }
  }
  t = b_9;
  return(t);
}
ATerm fatal_error_0 (ATerm t)
{
  ATerm d_9;
  d_9 = t;
  {
    t = error_0(t);
    {
      t = term_e_9;
      t = exit_0(t);
    }
  }
  t = d_9;
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
    t = (ATerm) ATmakeAppl(sym__2, not_null(q_6), term_f_9);
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
        ATerm h_9;
        h_9 = t;
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
        t = h_9;
        {
          ATerm i_7 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(a_7), term_f_9);
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
          ATerm i_9 = t;
          int n_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(n_9);
            }
          else
            {
              t = i_9;
              {
                ATerm r_0 (ATerm t)
                {
                  ATerm o_9 = t;
                  int a_10 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = Nil_0(t);
                      LocalPopChoice(a_10);
                    }
                  else
                    {
                      t = o_9;
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
ATerm hv_in_new_vbox_2 (ATerm t, ATerm p_65 (ATerm), ATerm q_65 (ATerm))
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
        ATerm b_10;
        b_10 = t;
        {
          ATerm r_9 = NULL,t_9 = NULL,u_9 = NULL,v_9 = NULL;
          ATerm s_9 = NULL;
          t = term_q_8;
          {
            t = q_65(t);
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
        t = b_10;
        {
          ATerm x_9 = NULL,z_9 = NULL;
          ATerm y_9 = NULL;
          t = term_q_8;
          {
            t = p_65(t);
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
ATerm hv_add_to_hbox_1 (ATerm t, ATerm o_65 (ATerm))
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
                ATerm c_10;
                c_10 = t;
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
                                t = term_q_8;
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
                t = c_10;
                {
                  ATerm h_11 = NULL,j_11 = NULL;
                  ATerm i_11 = NULL;
                  t = term_q_8;
                  {
                    t = o_65(t);
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
ATerm FoldL_1 (ATerm t, ATerm f_81 (ATerm))
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
              t = f_81(t);
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
ATerm foldl_1 (ATerm t, ATerm k_80 (ATerm))
{
  ATerm m_12 (ATerm t)
  {
    ATerm d_10 = t;
    int e_10 = stack_ptr;
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
        LocalPopChoice(e_10);
      }
    else
      {
        t = d_10;
        {
          t = FoldL_1(t, k_80);
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
  ATerm f_10 = t;
  int g_10 = stack_ptr;
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
      LocalPopChoice(g_10);
    }
  else
    {
      t = f_10;
      t = term_h_10;
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
  ATerm j_10 = t;
  int k_10 = stack_ptr;
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
      LocalPopChoice(k_10);
    }
  else
    {
      t = j_10;
      t = term_h_10;
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
    t = (ATerm) ATmakeAppl(sym__2, not_null(t_12), term_v_10);
    t = copy_char_0(t);
  }
  return(t);
}
ATerm SOpt_2 (ATerm t, ATerm r_59 (ATerm), ATerm s_59 (ATerm))
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
            t = r_59(t);
            {
              k_13 = t;
              {
                t = not_null(e_13);
                {
                  ATerm o_13 = NULL;
                  t = s_59(t);
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
ATerm SOpt_value_1 (ATerm t, ATerm r_65 (ATerm))
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
    t = SOpt_2(t, r_65, w_0);
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
  ATerm w_10 = t;
  int x_10 = stack_ptr;
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
      LocalPopChoice(x_10);
    }
  else
    {
      t = w_10;
      t = term_e_9;
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
    t = (ATerm) ATmakeAppl(sym__2, not_null(c_14), term_f_9);
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
        ATerm y_10 = t;
        int k_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_subti(not_null(i_14), not_null(j_14));
            LocalPopChoice(k_11);
          }
        else
          {
            t = y_10;
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
ATerm thread_map_1 (ATerm t, ATerm v_80 (ATerm))
{
  ATerm x_15 (ATerm t)
  {
    ATerm l_11 = t;
    int m_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_T_2(t, v_80, x_15);
        LocalPopChoice(m_11);
      }
    else
      {
        t = l_11;
        t = Nil_T_0(t);
      }
    return(t);
  }
  t = x_15(t);
  return(t);
}
ATerm H_2 (ATerm t, ATerm l_59 (ATerm), ATerm m_59 (ATerm))
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
            t = l_59(t);
            {
              m_16 = t;
              {
                t = not_null(g_16);
                {
                  ATerm q_16 = NULL;
                  t = m_59(t);
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
  ATerm n_11 = t;
  if((PushChoice() == 0))
    {
      ATerm o_11 = t;
      int p_11 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Nil_0(t);
          LocalPopChoice(p_11);
        }
      else
        {
          t = o_11;
          t = H_2(t, Nil_0, Nil_0);
        }
      PopChoice();
      _fail(t);
    }
  else
    {
      t = n_11;
    }
  return(t);
}
ATerm filter_1 (ATerm t, ATerm i_81 (ATerm))
{
  ATerm q_11 = t;
  int y_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(y_11);
    }
  else
    {
      t = q_11;
      {
        ATerm z_11 = t;
        int a_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_0 (ATerm t)
            {
              t = filter_1(t, i_81);
              return(t);
            }
            t = Cons_2(t, i_81, y_0);
            LocalPopChoice(a_12);
          }
        else
          {
            t = z_11;
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
                    t = filter_1(t, i_81);
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
  ATerm d_12 = t;
  if((PushChoice() == 0))
    {
      ATerm e_12 = t;
      int f_12 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Nil_0(t);
          LocalPopChoice(f_12);
        }
      else
        {
          t = e_12;
          {
            ATerm c_18 = NULL;
            ATerm e_18 = NULL,f_18 = NULL,l_18 = NULL,m_18 = NULL;
            c_18 = t;
            {
              ATerm l_12;
              l_12 = t;
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
              t = l_12;
              {
                ATerm n_12;
                n_12 = t;
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
                              ATerm s_12 = t;
                              int v_12 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = Nil_0(t);
                                  LocalPopChoice(v_12);
                                }
                              else
                                {
                                  t = s_12;
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
                t = n_12;
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
      t = d_12;
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
  ATerm w_12 = t;
  int x_12 = stack_ptr;
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
      LocalPopChoice(x_12);
    }
  else
    {
      t = w_12;
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
ATerm align_left_0 (ATerm t)
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
          t = (ATerm) ATmakeAppl(sym__2, not_null(j_19), not_null(o_19));
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
ATerm align_right_0 (ATerm t)
{
  ATerm v_19 = NULL,w_19 = NULL,x_19 = NULL,y_19 = NULL;
  v_19 = t;
  u_19 :
  if(match_cons(v_19, sym__3))
    {
      w_19 = ATgetArgument(v_19, 0);
      x_19 = ATgetArgument(v_19, 1);
      y_19 = ATgetArgument(v_19, 2);
      {
        ATerm c_20 = NULL;
        ATerm d_20 = NULL;
        t = (ATerm) ATmakeAppl(sym__3, not_null(w_19), not_null(x_19), not_null(y_19));
        {
          t = align_helper_0(t);
          {
            d_20 = t;
            if(((c_20 != NULL) && (c_20 != d_20)))
              _fail(d_20);
            else
              c_20 = d_20;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(c_20), not_null(x_19));
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
ATerm while_not_2 (ATerm t, ATerm e_67 (ATerm), ATerm f_67 (ATerm))
{
  ATerm g_20 (ATerm t)
  {
    ATerm y_12 = t;
    int z_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_67(t);
        LocalPopChoice(z_12);
      }
    else
      {
        t = y_12;
        {
          t = f_67(t);
          t = g_20(t);
        }
      }
    return(t);
  }
  t = g_20(t);
  return(t);
}
ATerm for_3 (ATerm t, ATerm h_67 (ATerm), ATerm i_67 (ATerm), ATerm j_67 (ATerm))
{
  t = h_67(t);
  t = while_not_2(t, i_67, j_67);
  return(t);
}
ATerm copy_0 (ATerm t)
{
  ATerm f_1 (ATerm t)
  {
    ATerm p_20 = NULL,q_20 = NULL,r_20 = NULL;
    p_20 = t;
    i_20 :
    if(match_cons(p_20, sym__2))
      {
        q_20 = ATgetArgument(p_20, 0);
        r_20 = ATgetArgument(p_20, 1);
        t = (ATerm) ATmakeAppl(sym__3, not_null(q_20), not_null(r_20), (ATerm) ATempty);
      }
    else
      {
        _fail(t);
      }
    return(t);
  }
  ATerm g_1 (ATerm t)
  {
    ATerm u_20 = NULL,v_20 = NULL,w_20 = NULL,x_20 = NULL;
    u_20 = t;
    k_20 :
    if(match_cons(u_20, sym__3))
      {
        v_20 = ATgetArgument(u_20, 0);
        w_20 = ATgetArgument(u_20, 1);
        x_20 = ATgetArgument(u_20, 2);
        l_20 :
        if(match_int(v_20, 0))
          {
            t = not_null(x_20);
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
  ATerm h_1 (ATerm t)
  {
    ATerm a_21 = NULL,b_21 = NULL,c_21 = NULL,d_21 = NULL;
    a_21 = t;
    o_20 :
    if(match_cons(a_21, sym__3))
      {
        b_21 = ATgetArgument(a_21, 0);
        c_21 = ATgetArgument(a_21, 1);
        d_21 = ATgetArgument(a_21, 2);
        {
          ATerm h_21 = NULL;
          ATerm a_13;
          a_13 = t;
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(b_21), term_e_9);
            t = geq_0(t);
          }
          t = a_13;
          {
            ATerm i_21 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(b_21), term_e_9);
            {
              t = subt_0(t);
              {
                i_21 = t;
                if(((h_21 != NULL) && (h_21 != i_21)))
                  _fail(i_21);
                else
                  h_21 = i_21;
              }
            }
            t = (ATerm) ATmakeAppl(sym__3, not_null(h_21), not_null(c_21), (ATerm) ATinsert(CheckATermList(not_null(d_21)), not_null(c_21)));
          }
        }
      }
    else
      {
        _fail(t);
      }
    return(t);
  }
  t = for_3(t, f_1, g_1, h_1);
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
  ATerm f_13;
  f_13 = t;
  {
    ATerm j_25 = NULL;
    ATerm k_25 = NULL;
    k_25 = t;
    if(((j_25 != NULL) && (j_25 != k_25)))
      _fail(k_25);
    else
      j_25 = k_25;
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(j_25), term_h_10);
      t = geq_0(t);
    }
  }
  t = f_13;
  return(t);
}
ATerm align_helper_0 (ATerm t)
{
  ATerm r_25 = NULL,s_25 = NULL,t_25 = NULL,u_25 = NULL;
  r_25 = t;
  q_25 :
  if(match_cons(r_25, sym__3))
    {
      s_25 = ATgetArgument(r_25, 0);
      t_25 = ATgetArgument(r_25, 1);
      u_25 = ATgetArgument(r_25, 2);
      {
        ATerm y_25 = NULL;
        ATerm z_25 = NULL,d_26 = NULL;
        t = not_null(t_25);
        {
          t = string_length_0(t);
          {
            ATerm a_26 = NULL;
            a_26 = t;
            if(((z_25 != NULL) && (z_25 != a_26)))
              _fail(a_26);
            else
              z_25 = a_26;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(u_25), not_null(z_25));
              {
                t = subt_0(t);
                {
                  ATerm g_13 = t;
                  int h_13 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = pos_0(t);
                      LocalPopChoice(h_13);
                      {
                        ATerm b_26 = NULL;
                        ATerm c_26 = NULL;
                        c_26 = t;
                        if(((b_26 != NULL) && (b_26 != c_26)))
                          _fail(c_26);
                        else
                          b_26 = c_26;
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(b_26), not_null(s_25));
                          t = copy_char_0(t);
                        }
                      }
                    }
                  else
                    {
                      t = g_13;
                      t = term_l_13;
                    }
                  {
                    d_26 = t;
                    if(((y_25 != NULL) && (y_25 != d_26)))
                      _fail(d_26);
                    else
                      y_25 = d_26;
                  }
                }
              }
            }
          }
        }
        t = not_null(y_25);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm inc_0 (ATerm t)
{
  ATerm j_26 = NULL;
  ATerm k_26 = NULL;
  k_26 = t;
  if(((j_26 != NULL) && (j_26 != k_26)))
    _fail(k_26);
  else
    j_26 = k_26;
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(j_26), term_e_9);
    t = add_0(t);
  }
  return(t);
}
ATerm Dupl_0 (ATerm t)
{
  ATerm u_26 = NULL;
  u_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(u_26), not_null(u_26));
  return(t);
}
ATerm div_0 (ATerm t)
{
  ATerm a_27 = NULL,c_27 = NULL,d_27 = NULL;
  a_27 = t;
  y_26 :
  if(match_cons(a_27, sym__2))
    {
      c_27 = ATgetArgument(a_27, 0);
      d_27 = ATgetArgument(a_27, 1);
      {
        ATerm n_13 = t;
        int q_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_divi(not_null(c_27), not_null(d_27));
            LocalPopChoice(q_13);
          }
        else
          {
            t = n_13;
            t = SSL_divr(not_null(c_27), not_null(d_27));
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
  ATerm s_27 = NULL;
  ATerm t_27 = NULL;
  t_27 = t;
  if(((s_27 != NULL) && (s_27 != t_27)))
    _fail(t_27);
  else
    s_27 = t_27;
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(s_27), term_r_13);
    t = div_0(t);
  }
  return(t);
}
ATerm dec_0 (ATerm t)
{
  ATerm w_27 = NULL;
  ATerm x_27 = NULL;
  x_27 = t;
  if(((w_27 != NULL) && (w_27 != x_27)))
    _fail(x_27);
  else
    w_27 = x_27;
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(w_27), term_e_9);
    t = subt_0(t);
  }
  return(t);
}
ATerm mod_0 (ATerm t)
{
  ATerm b_28 = NULL,c_28 = NULL,d_28 = NULL;
  b_28 = t;
  a_28 :
  if(match_cons(b_28, sym__2))
    {
      c_28 = ATgetArgument(b_28, 0);
      d_28 = ATgetArgument(b_28, 1);
      t = SSL_mod(not_null(c_28), not_null(d_28));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm even_0 (ATerm t)
{
  ATerm s_13;
  s_13 = t;
  {
    ATerm j_28 = NULL,l_28 = NULL;
    ATerm k_28 = NULL;
    k_28 = t;
    if(((j_28 != NULL) && (j_28 != k_28)))
      _fail(k_28);
    else
      j_28 = k_28;
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(j_28), term_r_13);
      {
        t = mod_0(t);
        {
          l_28 = t;
          i_28 :
          if(!(match_int(l_28, 0)))
            {
              _fail(t);
            }
        }
      }
    }
  }
  t = s_13;
  return(t);
}
ATerm align_center_0 (ATerm t)
{
  ATerm x_28 = NULL,y_28 = NULL,z_28 = NULL,a_29 = NULL;
  x_28 = t;
  w_28 :
  if(match_cons(x_28, sym__3))
    {
      y_28 = ATgetArgument(x_28, 0);
      z_28 = ATgetArgument(x_28, 1);
      a_29 = ATgetArgument(x_28, 2);
      {
        ATerm e_29 = NULL,f_29 = NULL,g_29 = NULL,h_29 = NULL,i_29 = NULL,j_29 = NULL;
        ATerm k_29 = NULL;
        t = not_null(z_28);
        {
          ATerm p_29 = NULL;
          t = string_length_0(t);
          {
            k_29 = t;
            {
              if(((h_29 != NULL) && (h_29 != k_29)))
                _fail(k_29);
              else
                h_29 = k_29;
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(a_29), not_null(h_29));
                {
                  ATerm q_29 = NULL,r_29 = NULL,s_29 = NULL;
                  t = subt_0(t);
                  {
                    p_29 = t;
                    {
                      if(((e_29 != NULL) && (e_29 != p_29)))
                        _fail(p_29);
                      else
                        e_29 = p_29;
                      {
                        t = not_null(e_29);
                        {
                          ATerm t_13 = t;
                          int u_13 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = even_0(t);
                              LocalPopChoice(u_13);
                              {
                                t = div2_0(t);
                                t = Dupl_0(t);
                              }
                            }
                          else
                            {
                              t = t_13;
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
                            q_29 = t;
                            v_28 :
                            if(match_cons(q_29, sym__2))
                              {
                                r_29 = ATgetArgument(q_29, 0);
                                s_29 = ATgetArgument(q_29, 1);
                                {
                                  ATerm t_29 = NULL,d_30 = NULL;
                                  if(((f_29 != NULL) && (f_29 != r_29)))
                                    _fail(r_29);
                                  else
                                    f_29 = r_29;
                                  {
                                    if(((i_29 != NULL) && (i_29 != s_29)))
                                      _fail(s_29);
                                    else
                                      i_29 = s_29;
                                    {
                                      ATerm u_29 = NULL;
                                      t = (ATerm) ATmakeAppl(sym__2, not_null(h_29), not_null(f_29));
                                      {
                                        t = add_0(t);
                                        {
                                          u_29 = t;
                                          if(((t_29 != NULL) && (t_29 != u_29)))
                                            _fail(u_29);
                                          else
                                            t_29 = u_29;
                                        }
                                      }
                                      {
                                        t = (ATerm) ATmakeAppl(sym__3, not_null(y_28), not_null(z_28), not_null(t_29));
                                        {
                                          ATerm e_30 = NULL,g_30 = NULL;
                                          t = align_helper_0(t);
                                          {
                                            d_30 = t;
                                            {
                                              if(((g_29 != NULL) && (g_29 != d_30)))
                                                _fail(d_30);
                                              else
                                                g_29 = d_30;
                                              {
                                                ATerm f_30 = NULL;
                                                t = (ATerm) ATmakeAppl(sym__2, not_null(h_29), not_null(i_29));
                                                {
                                                  t = add_0(t);
                                                  {
                                                    f_30 = t;
                                                    if(((e_30 != NULL) && (e_30 != f_30)))
                                                      _fail(f_30);
                                                    else
                                                      e_30 = f_30;
                                                  }
                                                }
                                                {
                                                  t = (ATerm) ATmakeAppl(sym__3, not_null(y_28), not_null(z_28), not_null(e_30));
                                                  {
                                                    t = align_helper_0(t);
                                                    {
                                                      g_30 = t;
                                                      if(((j_29 != NULL) && (j_29 != g_30)))
                                                        _fail(g_30);
                                                      else
                                                        j_29 = g_30;
                                                    }
                                                  }
                                                }
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
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(j_29)), not_null(z_28)), not_null(g_29));
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
ATerm align_column_0 (ATerm t)
{
  ATerm u_30 = NULL,v_30 = NULL,w_30 = NULL,x_30 = NULL;
  u_30 = t;
  s_30 :
  if(match_cons(u_30, sym__2))
    {
      v_30 = ATgetArgument(u_30, 0);
      x_30 = ATgetArgument(u_30, 1);
      t_30 :
      if(match_cons(v_30, sym_AC_1))
        {
          w_30 = ATgetArgument(v_30, 0);
          {
            t = not_null(x_30);
            t = align_center_0(t);
          }
        }
      else
        {
          if(match_cons(v_30, sym_AR_1))
            {
              w_30 = ATgetArgument(v_30, 0);
              {
                t = not_null(x_30);
                t = align_right_0(t);
              }
            }
          else
            {
              if(match_cons(v_30, sym_AL_1))
                {
                  w_30 = ATgetArgument(v_30, 0);
                  {
                    t = not_null(x_30);
                    t = align_left_0(t);
                  }
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
  ATerm i_31 = NULL,j_31 = NULL;
  i_31 = t;
  h_31 :
  if(match_cons(i_31, sym_AC_1))
    {
      j_31 = ATgetArgument(i_31, 0);
      t = not_null(j_31);
    }
  else
    {
      if(match_cons(i_31, sym_AR_1))
        {
          j_31 = ATgetArgument(i_31, 0);
          t = not_null(j_31);
        }
      else
        {
          if(match_cons(i_31, sym_AL_1))
            {
              j_31 = ATgetArgument(i_31, 0);
              t = not_null(j_31);
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
  ATerm x_31 = NULL;
  ATerm a_32 = NULL,b_32 = NULL,c_32 = NULL;
  x_31 = t;
  {
    ATerm d_32 = NULL;
    ATerm h_32 = NULL,l_32 = NULL,m_32 = NULL,n_32 = NULL,o_32 = NULL,p_32 = NULL,q_32 = NULL;
    t = not_null(x_31);
    {
      d_32 = t;
      {
        t = SSL_explode_term(not_null(d_32));
        {
          h_32 = t;
          t_31 :
          if(match_cons(h_32, sym__2))
            {
              l_32 = ATgetArgument(h_32, 0);
              m_32 = ATgetArgument(h_32, 1);
              u_31 :
              if(match_string(l_32, ""))
                {
                  v_31 :
                  if(((ATgetType(m_32) == AT_LIST) && !(ATisEmpty(m_32))))
                    {
                      n_32 = ATgetFirst((ATermList) m_32);
                      o_32 = (ATerm) ATgetNext((ATermList) m_32);
                      w_31 :
                      if(((ATgetType(o_32) == AT_LIST) && !(ATisEmpty(o_32))))
                        {
                          p_32 = ATgetFirst((ATermList) o_32);
                          q_32 = (ATerm) ATgetNext((ATermList) o_32);
                          {
                            if(((a_32 != NULL) && (a_32 != n_32)))
                              _fail(n_32);
                            else
                              a_32 = n_32;
                            {
                              if(((c_32 != NULL) && (c_32 != p_32)))
                                _fail(p_32);
                              else
                                c_32 = p_32;
                              if(((b_32 != NULL) && (b_32 != q_32)))
                                _fail(q_32);
                              else
                                b_32 = q_32;
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
    t = not_null(c_32);
  }
  return(t);
}
ATerm max_0 (ATerm t)
{
  ATerm v_13 = t;
  int y_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = gt_0(t);
      LocalPopChoice(y_13);
      t = Fst_0(t);
    }
  else
    {
      t = v_13;
      t = Snd_0(t);
    }
  return(t);
}
ATerm Hd_0 (ATerm t)
{
  ATerm i_33 = NULL,j_33 = NULL,k_33 = NULL;
  i_33 = t;
  a_33 :
  if(((ATgetType(i_33) == AT_LIST) && !(ATisEmpty(i_33))))
    {
      j_33 = ATgetFirst((ATermList) i_33);
      k_33 = (ATerm) ATgetNext((ATermList) i_33);
      t = not_null(j_33);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm list_accum_1 (ATerm t, ATerm y_83 (ATerm))
{
  ATerm p_33 = NULL,r_33 = NULL;
  ATerm b_14;
  b_14 = t;
  {
    ATerm q_33 = NULL;
    t = Tl_0(t);
    {
      q_33 = t;
      if(((p_33 != NULL) && (p_33 != q_33)))
        _fail(q_33);
      else
        p_33 = q_33;
    }
  }
  t = b_14;
  {
    ATerm s_33 = NULL;
    t = Hd_0(t);
    {
      s_33 = t;
      if(((r_33 != NULL) && (r_33 != s_33)))
        _fail(s_33);
      else
        r_33 = s_33;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(p_33), not_null(r_33));
      t = foldl_1(t, y_83);
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
  ATerm i_1 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  ATerm j_1 (ATerm t)
  {
    ATerm e_14 = t;
    int f_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = _2(t, is_list_0, _id);
        LocalPopChoice(f_14);
        t = conc_two_lists_0(t);
      }
    else
      {
        t = e_14;
        t = MkCons_0(t);
      }
    return(t);
  }
  ATerm k_1 (ATerm t)
  {
    ATerm k_14 = t;
    int l_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        LocalPopChoice(l_14);
        t = flatten_list_0(t);
      }
    else
      {
        t = k_14;
        {
        }
      }
    return(t);
  }
  t = foldr_3(t, i_1, j_1, k_1);
  return(t);
}
ATerm UnZip2_0 (ATerm t)
{
  ATerm p_34 = NULL,q_34 = NULL,r_34 = NULL,t_34 = NULL,u_34 = NULL,v_34 = NULL,w_34 = NULL;
  p_34 = t;
  h_34 :
  if(match_cons(p_34, sym__2))
    {
      q_34 = ATgetArgument(p_34, 0);
      u_34 = ATgetArgument(p_34, 1);
      i_34 :
      if(match_cons(q_34, sym__2))
        {
          r_34 = ATgetArgument(q_34, 0);
          t_34 = ATgetArgument(q_34, 1);
          o_34 :
          if(match_cons(u_34, sym__2))
            {
              v_34 = ATgetArgument(u_34, 0);
              w_34 = ATgetArgument(u_34, 1);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(v_34)), not_null(r_34)), (ATerm) ATinsert(CheckATermList(not_null(w_34)), not_null(t_34)));
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
  ATerm e_35 = NULL,f_35 = NULL,g_35 = NULL;
  e_35 = t;
  d_35 :
  if(((ATgetType(e_35) == AT_LIST) && !(ATisEmpty(e_35))))
    {
      f_35 = ATgetFirst((ATermList) e_35);
      g_35 = (ATerm) ATgetNext((ATermList) e_35);
      t = (ATerm) ATmakeAppl(sym__2, not_null(f_35), not_null(g_35));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm UnZip1_0 (ATerm t)
{
  ATerm m_35 = NULL;
  m_35 = t;
  l_35 :
  if(((ATgetType(m_35) == AT_LIST) && ATisEmpty(m_35)))
    {
      t = term_m_14;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm unzip_1 (ATerm t, ATerm c_76 (ATerm))
{
  t = genzip_4(t, UnZip1_0, UnZip3_0, UnZip2_0, c_76);
  return(t);
}
ATerm unzip_0 (ATerm t)
{
  t = unzip_1(t, _id);
  return(t);
}
ATerm do_A_column_0 (ATerm t)
{
  ATerm c_36 = NULL,d_36 = NULL,e_36 = NULL,f_36 = NULL,g_36 = NULL,h_36 = NULL,i_36 = NULL;
  c_36 = t;
  z_35 :
  if(match_cons(c_36, sym__2))
    {
      d_36 = ATgetArgument(c_36, 0);
      g_36 = ATgetArgument(c_36, 1);
      a_36 :
      if(match_cons(d_36, sym__2))
        {
          e_36 = ATgetArgument(d_36, 0);
          f_36 = ATgetArgument(d_36, 1);
          b_36 :
          if(match_cons(g_36, sym__2))
            {
              h_36 = ATgetArgument(g_36, 0);
              i_36 = ATgetArgument(g_36, 1);
              {
                ATerm n_36 = NULL,o_36 = NULL,p_36 = NULL,q_36 = NULL,r_36 = NULL,e_38 = NULL;
                ATerm n_14;
                n_14 = t;
                {
                  ATerm u_36 = NULL,v_36 = NULL,w_36 = NULL;
                  t = not_null(f_36);
                  {
                    ATerm l_1 (ATerm t)
                    {
                      ATerm s_36 = NULL;
                      ATerm t_36 = NULL;
                      t_36 = t;
                      if(((s_36 != NULL) && (s_36 != t_36)))
                        _fail(t_36);
                      else
                        s_36 = t_36;
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(s_36), not_null(h_36));
                        t = try_abox2text_0(t);
                      }
                      return(t);
                    }
                    t = map_1(t, l_1);
                    {
                      t = unzip_0(t);
                      {
                        ATerm m_1 (ATerm t)
                        {
                          ATerm n_1 (ATerm t)
                          {
                            ATerm p_1 (ATerm t)
                            {
                              t = flatten_list_0(t);
                              t = concat_strings_0(t);
                              return(t);
                            }
                            t = try_1(t, p_1);
                            return(t);
                          }
                          t = map_1(t, n_1);
                          return(t);
                        }
                        t = _2(t, m_1, list_max_0);
                        {
                          u_36 = t;
                          w_35 :
                          if(match_cons(u_36, sym__2))
                            {
                              v_36 = ATgetArgument(u_36, 0);
                              w_36 = ATgetArgument(u_36, 1);
                              {
                                ATerm x_36 = NULL;
                                if(((o_36 != NULL) && (o_36 != v_36)))
                                  _fail(v_36);
                                else
                                  o_36 = v_36;
                                {
                                  if(((n_36 != NULL) && (n_36 != w_36)))
                                    _fail(w_36);
                                  else
                                    n_36 = w_36;
                                  {
                                    t = (ATerm) ATmakeAppl(sym__2, not_null(n_36), not_null(h_36));
                                    {
                                      ATerm y_36 = NULL;
                                      t = subt_0(t);
                                      {
                                        x_36 = t;
                                        {
                                          if(((p_36 != NULL) && (p_36 != x_36)))
                                            _fail(x_36);
                                          else
                                            p_36 = x_36;
                                          {
                                            t = not_null(e_36);
                                            {
                                              t = SOpts_of_alignment_0(t);
                                              {
                                                ATerm d_38 = NULL;
                                                t = hs_text_0(t);
                                                {
                                                  y_36 = t;
                                                  {
                                                    if(((q_36 != NULL) && (q_36 != y_36)))
                                                      _fail(y_36);
                                                    else
                                                      q_36 = y_36;
                                                    {
                                                      t = not_null(o_36);
                                                      {
                                                        ATerm q_1 (ATerm t)
                                                        {
                                                          ATerm z_36 = NULL,b_37 = NULL;
                                                          ATerm a_37 = NULL;
                                                          a_37 = t;
                                                          if(((z_36 != NULL) && (z_36 != a_37)))
                                                            _fail(a_37);
                                                          else
                                                            z_36 = a_37;
                                                          {
                                                            t = (ATerm) ATmakeAppl(sym__2, not_null(e_36), (ATerm) ATmakeAppl(sym__3, term_f_9, not_null(z_36), not_null(p_36)));
                                                            {
                                                              t = align_column_0(t);
                                                              {
                                                                ATerm c_38 = NULL;
                                                                c_38 = t;
                                                                if(((b_37 != NULL) && (b_37 != c_38)))
                                                                  _fail(c_38);
                                                                else
                                                                  b_37 = c_38;
                                                                {
                                                                  t = (ATerm) ATmakeAppl(sym__2, not_null(b_37), not_null(q_36));
                                                                  t = conc_strings_0(t);
                                                                }
                                                              }
                                                            }
                                                          }
                                                          return(t);
                                                        }
                                                        t = map_1(t, q_1);
                                                        {
                                                          d_38 = t;
                                                          if(((r_36 != NULL) && (r_36 != d_38)))
                                                            _fail(d_38);
                                                          else
                                                            r_36 = d_38;
                                                        }
                                                      }
                                                    }
                                                  }
                                                }
                                              }
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
                t = n_14;
                {
                  ATerm f_38 = NULL,h_38 = NULL;
                  ATerm g_38 = NULL;
                  t = not_null(q_36);
                  {
                    t = string_length_0(t);
                    {
                      g_38 = t;
                      if(((f_38 != NULL) && (f_38 != g_38)))
                        _fail(g_38);
                      else
                        f_38 = g_38;
                    }
                  }
                  {
                    t = (ATerm) ATmakeAppl(sym__2, not_null(f_38), not_null(n_36));
                    {
                      t = add_0(t);
                      {
                        h_38 = t;
                        if(((e_38 != NULL) && (e_38 != h_38)))
                          _fail(h_38);
                        else
                          e_38 = h_38;
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym__2, not_null(e_38), (ATerm) ATinsert(CheckATermList(not_null(i_36)), not_null(r_36)));
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
ATerm Zip3_0 (ATerm t)
{
  ATerm u_38 = NULL,v_38 = NULL,w_38 = NULL;
  u_38 = t;
  t_38 :
  if(match_cons(u_38, sym__2))
    {
      v_38 = ATgetArgument(u_38, 0);
      w_38 = ATgetArgument(u_38, 1);
      t = (ATerm) ATinsert(CheckATermList(not_null(w_38)), not_null(v_38));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Zip2_0 (ATerm t)
{
  ATerm e_39 = NULL,f_39 = NULL,g_39 = NULL,h_39 = NULL,i_39 = NULL,m_39 = NULL,n_39 = NULL;
  e_39 = t;
  b_39 :
  if(match_cons(e_39, sym__2))
    {
      f_39 = ATgetArgument(e_39, 0);
      i_39 = ATgetArgument(e_39, 1);
      c_39 :
      if(((ATgetType(f_39) == AT_LIST) && !(ATisEmpty(f_39))))
        {
          g_39 = ATgetFirst((ATermList) f_39);
          h_39 = (ATerm) ATgetNext((ATermList) f_39);
          d_39 :
          if(((ATgetType(i_39) == AT_LIST) && !(ATisEmpty(i_39))))
            {
              m_39 = ATgetFirst((ATermList) i_39);
              n_39 = (ATerm) ATgetNext((ATermList) i_39);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(g_39), not_null(m_39)), (ATerm) ATmakeAppl(sym__2, not_null(h_39), not_null(n_39)));
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
  ATerm x_39 = NULL,y_39 = NULL,z_39 = NULL;
  x_39 = t;
  u_39 :
  if(match_cons(x_39, sym__2))
    {
      y_39 = ATgetArgument(x_39, 0);
      z_39 = ATgetArgument(x_39, 1);
      v_39 :
      if(((ATgetType(y_39) == AT_LIST) && ATisEmpty(y_39)))
        {
          w_39 :
          if(((ATgetType(z_39) == AT_LIST) && ATisEmpty(z_39)))
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
ATerm genzip_4 (ATerm t, ATerm s_75 (ATerm), ATerm t_75 (ATerm), ATerm u_75 (ATerm), ATerm v_75 (ATerm))
{
  ATerm b_40 (ATerm t)
  {
    ATerm t_14 = t;
    int u_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = s_75(t);
        LocalPopChoice(u_14);
      }
    else
      {
        t = t_14;
        {
          t = t_75(t);
          {
            t = _2(t, v_75, b_40);
            t = u_75(t);
          }
        }
      }
    return(t);
  }
  t = b_40(t);
  return(t);
}
ATerm zip_1 (ATerm t, ATerm x_75 (ATerm))
{
  t = genzip_4(t, Zip1_0, Zip2_0, Zip3_0, x_75);
  return(t);
}
ATerm zip_0 (ATerm t)
{
  t = zip_1(t, _id);
  return(t);
}
ATerm length_0 (ATerm t)
{
  ATerm r_1 (ATerm t)
  {
    t = term_h_10;
    return(t);
  }
  ATerm s_1 (ATerm t)
  {
    t = term_e_9;
    return(t);
  }
  t = foldr_3(t, r_1, add_0, s_1);
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm s_79 (ATerm), ATerm t_79 (ATerm))
{
  ATerm f_40 = NULL,g_40 = NULL,h_40 = NULL;
  f_40 = t;
  e_40 :
  if(((ATgetType(f_40) == AT_LIST) && !(ATisEmpty(f_40))))
    {
      g_40 = ATgetFirst((ATermList) f_40);
      h_40 = (ATerm) ATgetNext((ATermList) f_40);
      {
        t = t_79(t);
        {
          ATerm t_1 (ATerm t)
          {
            ATerm k_40 = NULL;
            k_40 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(g_40), not_null(k_40));
              t = s_79(t);
            }
            return(t);
          }
          t = fetch_1(t, t_1);
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
ATerm union_1 (ATerm t, ATerm o_79 (ATerm))
{
  ATerm q_40 = NULL,r_40 = NULL,s_40 = NULL;
  q_40 = t;
  p_40 :
  if(match_cons(q_40, sym__2))
    {
      r_40 = ATgetArgument(q_40, 0);
      s_40 = ATgetArgument(q_40, 1);
      {
        t = not_null(r_40);
        {
          ATerm w_40 (ATerm t)
          {
            ATerm v_14 = t;
            int w_14 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(s_40);
                LocalPopChoice(w_14);
              }
            else
              {
                t = v_14;
                {
                  ATerm x_14 = t;
                  int h_15 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm u_1 (ATerm t)
                      {
                        t = not_null(s_40);
                        return(t);
                      }
                      t = HdMember_p__2(t, o_79, u_1);
                      t = w_40(t);
                      LocalPopChoice(h_15);
                    }
                  else
                    {
                      t = x_14;
                      t = Cons_2(t, _id, w_40);
                    }
                }
              }
            return(t);
          }
          t = w_40(t);
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
ATerm foldr_3 (ATerm t, ATerm h_80 (ATerm), ATerm i_80 (ATerm), ATerm j_80 (ATerm))
{
  ATerm i_15 = t;
  int j_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = h_80(t);
      LocalPopChoice(j_15);
    }
  else
    {
      t = i_15;
      {
        ATerm b_41 = NULL,d_41 = NULL,e_41 = NULL;
        b_41 = t;
        a_41 :
        if(((ATgetType(b_41) == AT_LIST) && !(ATisEmpty(b_41))))
          {
            d_41 = ATgetFirst((ATermList) b_41);
            e_41 = (ATerm) ATgetNext((ATermList) b_41);
            {
              ATerm j_41 = NULL,l_41 = NULL;
              ATerm u_15;
              u_15 = t;
              {
                ATerm k_41 = NULL;
                t = not_null(d_41);
                {
                  t = j_80(t);
                  {
                    k_41 = t;
                    if(((j_41 != NULL) && (j_41 != k_41)))
                      _fail(k_41);
                    else
                      j_41 = k_41;
                  }
                }
              }
              t = u_15;
              {
                ATerm m_41 = NULL;
                t = not_null(e_41);
                {
                  t = foldr_3(t, h_80, i_80, j_80);
                  {
                    m_41 = t;
                    if(((l_41 != NULL) && (l_41 != m_41)))
                      _fail(m_41);
                    else
                      l_41 = m_41;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(j_41), not_null(l_41));
                  t = i_80(t);
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
ATerm make_set_0 (ATerm t)
{
  ATerm w_1 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  ATerm x_1 (ATerm t)
  {
    ATerm t_41 = NULL;
    ATerm u_41 = NULL;
    u_41 = t;
    if(((t_41 != NULL) && (t_41 != u_41)))
      _fail(u_41);
    else
      t_41 = u_41;
    t = (ATerm) ATinsert(ATempty, not_null(t_41));
    return(t);
  }
  t = foldr_3(t, w_1, union_0, x_1);
  return(t);
}
ATerm warn_not_matrix_0 (ATerm t)
{
  ATerm v_15;
  v_15 = t;
  {
    ATerm w_15 = t;
    int y_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_41 = NULL;
        t = map_1(t, length_0);
        {
          t = make_set_0(t);
          {
            t = length_0(t);
            {
              x_41 = t;
              w_41 :
              if(!(match_int(x_41, 1)))
                {
                  _fail(t);
                }
            }
          }
        }
        LocalPopChoice(y_15);
        {
        }
      }
    else
      {
        t = w_15;
        {
          t = (ATerm) ATinsert(ATempty, term_z_15);
          t = fatal_error_0(t);
        }
      }
  }
  t = v_15;
  return(t);
}
ATerm R_2 (ATerm t, ATerm d_59 (ATerm), ATerm e_59 (ATerm))
{
  ATerm k_42 = NULL,l_42 = NULL,m_42 = NULL;
  k_42 = t;
  j_42 :
  if(match_cons(k_42, sym_R_2))
    {
      l_42 = ATgetArgument(k_42, 0);
      m_42 = ATgetArgument(k_42, 1);
      {
        ATerm b_43 = NULL,d_43 = NULL;
        ATerm c_43 = NULL;
        t = SSLgetAnnotations(not_null(k_42));
        {
          c_43 = t;
          if(((b_43 != NULL) && (b_43 != c_43)))
            _fail(c_43);
          else
            b_43 = c_43;
        }
        {
          t = not_null(l_42);
          {
            ATerm f_43 = NULL;
            t = d_59(t);
            {
              d_43 = t;
              {
                t = not_null(m_42);
                {
                  ATerm h_43 = NULL;
                  t = e_59(t);
                  {
                    f_43 = t;
                    {
                      ATerm i_43 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_R_2, not_null(d_43), not_null(f_43)), not_null(b_43));
                      {
                        i_43 = t;
                        if(((h_43 != NULL) && (h_43 != i_43)))
                          _fail(i_43);
                        else
                          h_43 = i_43;
                      }
                      t = not_null(h_43);
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
ATerm split_2 (ATerm t, ATerm u_81 (ATerm), ATerm v_81 (ATerm))
{
  ATerm y_43 = NULL,b_44 = NULL;
  ATerm a_16;
  a_16 = t;
  {
    ATerm a_44 = NULL;
    t = u_81(t);
    {
      a_44 = t;
      if(((y_43 != NULL) && (y_43 != a_44)))
        _fail(a_44);
      else
        y_43 = a_44;
    }
  }
  t = a_16;
  {
    ATerm c_44 = NULL;
    t = v_81(t);
    {
      c_44 = t;
      if(((b_44 != NULL) && (b_44 != c_44)))
        _fail(c_44);
      else
        b_44 = c_44;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(y_43), not_null(b_44));
  }
  return(t);
}
ATerm construct_rows_0 (ATerm t)
{
  ATerm y_1 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = split_2(t, _id, y_1);
  {
    ATerm o_45 (ATerm t)
    {
      ATerm p_44 = NULL,q_44 = NULL,r_44 = NULL,s_44 = NULL,t_44 = NULL,u_44 = NULL,v_44 = NULL;
      ATerm r_45 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(u_44), (ATerm) ATinsert(CheckATermList(not_null(v_44)), not_null(t_44)));
        t = o_45(t);
        return(t);
      }
      r_44 = t;
      m_44 :
      if(match_cons(r_44, sym__2))
        {
          s_44 = ATgetArgument(r_44, 0);
          v_44 = ATgetArgument(r_44, 1);
          n_44 :
          if(((ATgetType(s_44) == AT_LIST) && ATisEmpty(s_44)))
            {
              {
                ATerm a_45 = NULL;
                ATerm b_45 = NULL;
                t = not_null(v_44);
                {
                  t = reverse_0(t);
                  {
                    b_45 = t;
                    if(((a_45 != NULL) && (a_45 != b_45)))
                      _fail(b_45);
                    else
                      a_45 = b_45;
                  }
                }
                t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_R_2, (ATerm)ATempty, not_null(a_45)));
              }
            }
          else
            {
              if(((ATgetType(s_44) == AT_LIST) && !(ATisEmpty(s_44))))
                {
                  t_44 = ATgetFirst((ATermList) s_44);
                  u_44 = (ATerm) ATgetNext((ATermList) s_44);
                  o_44 :
                  if(match_cons(t_44, sym_R_2))
                    {
                      p_44 = ATgetArgument(t_44, 0);
                      q_44 = ATgetArgument(t_44, 1);
                      {
                        ATerm b_16 = t;
                        int c_16 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm g_45 = NULL,i_45 = NULL;
                            ATerm h_16;
                            h_16 = t;
                            {
                              ATerm h_45 = NULL;
                              t = not_null(v_44);
                              {
                                t = reverse_0(t);
                                {
                                  h_45 = t;
                                  if(((g_45 != NULL) && (g_45 != h_45)))
                                    _fail(h_45);
                                  else
                                    g_45 = h_45;
                                }
                              }
                            }
                            t = h_16;
                            {
                              ATerm j_45 = NULL;
                              t = (ATerm) ATmakeAppl(sym__2, not_null(u_44), (ATerm) ATempty);
                              {
                                t = o_45(t);
                                {
                                  j_45 = t;
                                  if(((i_45 != NULL) && (i_45 != j_45)))
                                    _fail(j_45);
                                  else
                                    i_45 = j_45;
                                }
                              }
                              t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(i_45)), (ATerm) ATmakeAppl(sym_R_2, not_null(p_44), not_null(q_44))), (ATerm) ATmakeAppl(sym_R_2, (ATerm)ATempty, not_null(g_45)));
                            }
                            LocalPopChoice(c_16);
                          }
                        else
                          {
                            t = b_16;
                            t = r_45(t);
                          }
                      }
                    }
                  else
                    {
                      t = r_45(t);
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
    t = o_45(t);
    {
      ATerm z_1 (ATerm t)
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
      t = filter_1(t, z_1);
    }
  }
  return(t);
}
ATerm Last_0 (ATerm t)
{
  ATerm y_45 = NULL,z_45 = NULL,a_46 = NULL;
  y_45 = t;
  w_45 :
  if(((ATgetType(y_45) == AT_LIST) && !(ATisEmpty(y_45))))
    {
      z_45 = ATgetFirst((ATermList) y_45);
      a_46 = (ATerm) ATgetNext((ATermList) y_45);
      x_45 :
      if(((ATgetType(a_46) == AT_LIST) && ATisEmpty(a_46)))
        {
          t = not_null(z_45);
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
  ATerm g_46 = NULL,h_46 = NULL,i_46 = NULL;
  g_46 = t;
  f_46 :
  if(match_cons(g_46, sym__2))
    {
      h_46 = ATgetArgument(g_46, 0);
      i_46 = ATgetArgument(g_46, 1);
      if(((h_46 != NULL) && (h_46 != i_46)))
        _fail(i_46);
      else
        h_46 = i_46;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm elem_1 (ATerm t, ATerm z_73 (ATerm))
{
  ATerm q_46 = NULL,r_46 = NULL,s_46 = NULL;
  q_46 = t;
  n_46 :
  if(match_cons(q_46, sym__2))
    {
      r_46 = ATgetArgument(q_46, 0);
      s_46 = ATgetArgument(q_46, 1);
      {
        t = not_null(s_46);
        {
          ATerm d_2 (ATerm t)
          {
            ATerm p_16;
            p_16 = t;
            {
              ATerm w_46 = NULL;
              ATerm x_46 = NULL;
              x_46 = t;
              if(((w_46 != NULL) && (w_46 != x_46)))
                _fail(x_46);
              else
                w_46 = x_46;
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(r_46), not_null(w_46));
                t = z_73(t);
              }
            }
            t = p_16;
            return(t);
          }
          t = _one(t, d_2);
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
ATerm at_suffix_1 (ATerm t, ATerm k_74 (ATerm))
{
  ATerm a_47 (ATerm t)
  {
    ATerm s_16 = t;
    int t_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = k_74(t);
        LocalPopChoice(t_16);
      }
    else
      {
        t = s_16;
        t = Cons_2(t, _id, a_47);
      }
    return(t);
  }
  t = a_47(t);
  return(t);
}
ATerm split_fetch_1 (ATerm t, ATerm d_74 (ATerm))
{
  ATerm d_47 = NULL,g_47 = NULL;
  ATerm e_2 (ATerm t)
  {
    t = Cons_2(t, d_74, _id);
    {
      ATerm f_2 (ATerm t)
      {
        ATerm e_47 = NULL;
        e_47 = t;
        if(((d_47 != NULL) && (d_47 != e_47)))
          _fail(e_47);
        else
          d_47 = e_47;
        return(t);
      }
      t = Cons_2(t, _id, f_2);
      t = (ATerm) ATempty;
    }
    return(t);
  }
  t = at_suffix_1(t, e_2);
  {
    ATerm h_47 = NULL;
    h_47 = t;
    if(((g_47 != NULL) && (g_47 != h_47)))
      _fail(h_47);
    else
      g_47 = h_47;
    t = (ATerm) ATmakeAppl(sym__2, not_null(g_47), not_null(d_47));
  }
  return(t);
}
ATerm list_tokenize_1 (ATerm t, ATerm a_83 (ATerm))
{
  ATerm j_48 = NULL,k_48 = NULL,l_48 = NULL,m_48 = NULL,n_48 = NULL,o_48 = NULL,p_48 = NULL;
  ATerm u_16 = t;
  int v_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = split_fetch_1(t, a_83);
      LocalPopChoice(v_16);
    }
  else
    {
      t = u_16;
      {
        ATerm x_47 = NULL;
        ATerm y_47 = NULL;
        y_47 = t;
        if(((x_47 != NULL) && (x_47 != y_47)))
          _fail(y_47);
        else
          x_47 = y_47;
        t = (ATerm) ATmakeAppl(sym__2, not_null(x_47), (ATerm) ATempty);
      }
    }
  {
    j_48 = t;
    t_47 :
    if(match_cons(j_48, sym__2))
      {
        k_48 = ATgetArgument(j_48, 0);
        n_48 = ATgetArgument(j_48, 1);
        u_47 :
        if(((ATgetType(k_48) == AT_LIST) && ATisEmpty(k_48)))
          {
            v_47 :
            if(((ATgetType(n_48) == AT_LIST) && ATisEmpty(n_48)))
              {
                t = (ATerm) ATempty;
              }
            else
              {
                if(((ATgetType(n_48) == AT_LIST) && !(ATisEmpty(n_48))))
                  {
                    o_48 = ATgetFirst((ATermList) n_48);
                    p_48 = (ATerm) ATgetNext((ATermList) n_48);
                    {
                      t = not_null(n_48);
                      t = list_tokenize_1(t, a_83);
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
            if(((ATgetType(k_48) == AT_LIST) && !(ATisEmpty(k_48))))
              {
                l_48 = ATgetFirst((ATermList) k_48);
                m_48 = (ATerm) ATgetNext((ATermList) k_48);
                w_47 :
                if(((ATgetType(n_48) == AT_LIST) && ATisEmpty(n_48)))
                  {
                    t = (ATerm) ATinsert(ATempty, not_null(k_48));
                  }
                else
                  {
                    if(((ATgetType(n_48) == AT_LIST) && !(ATisEmpty(n_48))))
                      {
                        o_48 = ATgetFirst((ATermList) n_48);
                        p_48 = (ATerm) ATgetNext((ATermList) n_48);
                        {
                          ATerm y_48 = NULL;
                          ATerm z_48 = NULL;
                          t = not_null(n_48);
                          {
                            t = list_tokenize_1(t, a_83);
                            {
                              z_48 = t;
                              if(((y_48 != NULL) && (y_48 != z_48)))
                                _fail(z_48);
                              else
                                y_48 = z_48;
                            }
                          }
                          t = (ATerm) ATinsert(CheckATermList(not_null(y_48)), not_null(k_48));
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
  ATerm j_49 = NULL,k_49 = NULL,l_49 = NULL;
  t = _2(t, _id, explode_string_0);
  {
    j_49 = t;
    i_49 :
    if(match_cons(j_49, sym__2))
      {
        k_49 = ATgetArgument(j_49, 0);
        l_49 = ATgetArgument(j_49, 1);
        {
          t = not_null(l_49);
          {
            ATerm g_2 (ATerm t)
            {
              ATerm p_49 = NULL;
              ATerm q_49 = NULL;
              q_49 = t;
              if(((p_49 != NULL) && (p_49 != q_49)))
                _fail(q_49);
              else
                p_49 = q_49;
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(p_49), not_null(k_49));
                t = elem_0(t);
              }
              return(t);
            }
            t = list_tokenize_1(t, g_2);
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
  ATerm a_50 = NULL,b_50 = NULL,c_50 = NULL;
  a_50 = t;
  z_49 :
  if(match_cons(a_50, sym__2))
    {
      b_50 = ATgetArgument(a_50, 0);
      c_50 = ATgetArgument(a_50, 1);
      {
        ATerm f_50 = NULL;
        ATerm m_50 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, term_v_10, not_null(b_50));
        {
          t = string_tokenize_0(t);
          {
            ATerm w_16 = t;
            int x_16 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm g_50 = NULL,h_50 = NULL,i_50 = NULL;
                g_50 = t;
                v_49 :
                if(((ATgetType(g_50) == AT_LIST) && !(ATisEmpty(g_50))))
                  {
                    h_50 = ATgetFirst((ATermList) g_50);
                    i_50 = (ATerm) ATgetNext((ATermList) g_50);
                    w_49 :
                    if(((ATgetType(i_50) == AT_LIST) && ATisEmpty(i_50)))
                      {
                        {
                          t = not_null(h_50);
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
                LocalPopChoice(x_16);
              }
            else
              {
                t = w_16;
                {
                  ATerm k_50 = NULL;
                  ATerm l_50 = NULL;
                  t = last_0(t);
                  {
                    t = string_length_0(t);
                    {
                      l_50 = t;
                      if(((k_50 != NULL) && (k_50 != l_50)))
                        _fail(l_50);
                      else
                        k_50 = l_50;
                    }
                  }
                  {
                    t = (ATerm) ATmakeAppl(sym__2, not_null(k_50), not_null(c_50));
                    t = subt_0(t);
                  }
                }
              }
            {
              m_50 = t;
              if(((f_50 != NULL) && (f_50 != m_50)))
                _fail(m_50);
              else
                f_50 = m_50;
            }
          }
        }
        t = not_null(f_50);
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
  ATerm i_53 = NULL,j_53 = NULL,k_53 = NULL,l_53 = NULL,m_53 = NULL,n_53 = NULL,o_53 = NULL,p_53 = NULL,q_53 = NULL,r_53 = NULL;
  n_53 = t;
  b_53 :
  if(match_cons(n_53, sym__2))
    {
      o_53 = ATgetArgument(n_53, 0);
      r_53 = ATgetArgument(n_53, 1);
      c_53 :
      if(((ATgetType(o_53) == AT_LIST) && ATisEmpty(o_53)))
        {
          t = (ATerm) ATmakeAppl(sym__2, term_l_13, not_null(r_53));
        }
      else
        {
          if(((ATgetType(o_53) == AT_LIST) && !(ATisEmpty(o_53))))
            {
              p_53 = ATgetFirst((ATermList) o_53);
              q_53 = (ATerm) ATgetNext((ATermList) o_53);
              d_53 :
              if(((ATgetType(q_53) == AT_LIST) && ATisEmpty(q_53)))
                {
                  {
                    t = (ATerm) ATmakeAppl(sym__2, not_null(p_53), not_null(r_53));
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
              if(match_cons(o_53, sym_ALT_2))
                {
                  p_53 = ATgetArgument(o_53, 0);
                  q_53 = ATgetArgument(o_53, 1);
                  {
                    ATerm y_53 = NULL,z_53 = NULL,a_54 = NULL;
                    ATerm m_17;
                    m_17 = t;
                    {
                      ATerm b_54 = NULL,c_54 = NULL,d_54 = NULL;
                      t = (ATerm) ATmakeAppl(sym__2, not_null(p_53), not_null(r_53));
                      {
                        t = try_abox2text_0(t);
                        {
                          b_54 = t;
                          j_51 :
                          if(match_cons(b_54, sym__2))
                            {
                              c_54 = ATgetArgument(b_54, 0);
                              d_54 = ATgetArgument(b_54, 1);
                              {
                                if(((y_53 != NULL) && (y_53 != b_54)))
                                  _fail(b_54);
                                else
                                  y_53 = b_54;
                                {
                                  if(((z_53 != NULL) && (z_53 != c_54)))
                                    _fail(c_54);
                                  else
                                    z_53 = c_54;
                                  if(((a_54 != NULL) && (a_54 != d_54)))
                                    _fail(d_54);
                                  else
                                    a_54 = d_54;
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
                    t = m_17;
                    {
                      ATerm n_17 = t;
                      int o_17 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm e_54 = NULL;
                          ATerm f_54 = NULL;
                          t = get_width_0(t);
                          {
                            f_54 = t;
                            if(((e_54 != NULL) && (e_54 != f_54)))
                              _fail(f_54);
                            else
                              e_54 = f_54;
                          }
                          {
                            t = (ATerm) ATmakeAppl(sym__2, not_null(a_54), not_null(e_54));
                            t = leq_0(t);
                          }
                          LocalPopChoice(o_17);
                          t = not_null(y_53);
                        }
                      else
                        {
                          t = n_17;
                          {
                            t = (ATerm) ATmakeAppl(sym__2, not_null(q_53), not_null(r_53));
                            t = try_abox2text_0(t);
                          }
                        }
                    }
                  }
                }
              else
                {
                  if(match_cons(o_53, sym_R_2))
                    {
                      p_53 = ATgetArgument(o_53, 0);
                      q_53 = ATgetArgument(o_53, 1);
                      {
                        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_HV_2, not_null(p_53), not_null(q_53)), not_null(r_53));
                        t = try_abox2text_0(t);
                      }
                    }
                  else
                    {
                      if(match_cons(o_53, sym_FBOX_2))
                        {
                          p_53 = ATgetArgument(o_53, 0);
                          q_53 = ATgetArgument(o_53, 1);
                          {
                            t = (ATerm) ATmakeAppl(sym__2, not_null(q_53), not_null(r_53));
                            t = try_abox2text_0(t);
                          }
                        }
                      else
                        {
                          if(match_cons(o_53, sym_C_2))
                            {
                              p_53 = ATgetArgument(o_53, 0);
                              q_53 = ATgetArgument(o_53, 1);
                              e_53 :
                              if(((ATgetType(q_53) == AT_LIST) && !(ATisEmpty(q_53))))
                                {
                                  i_53 = ATgetFirst((ATermList) q_53);
                                  k_53 = (ATerm) ATgetNext((ATermList) q_53);
                                  f_53 :
                                  if(match_cons(i_53, sym_S_1))
                                    {
                                      j_53 = ATgetArgument(i_53, 0);
                                      g_53 :
                                      if(((ATgetType(k_53) == AT_LIST) && ATisEmpty(k_53)))
                                        {
                                          t = (ATerm) ATmakeAppl(sym__2, not_null(j_53), not_null(r_53));
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
                              if(match_cons(o_53, sym_S_1))
                                {
                                  p_53 = ATgetArgument(o_53, 0);
                                  {
                                    ATerm p_54 = NULL;
                                    ATerm q_54 = NULL,s_54 = NULL;
                                    ATerm r_54 = NULL;
                                    t = (ATerm) ATmakeAppl(sym__2, not_null(p_53), not_null(r_53));
                                    {
                                      t = rel_string_length_0(t);
                                      {
                                        r_54 = t;
                                        if(((q_54 != NULL) && (q_54 != r_54)))
                                          _fail(r_54);
                                        else
                                          q_54 = r_54;
                                      }
                                    }
                                    {
                                      t = (ATerm) ATmakeAppl(sym__2, not_null(r_53), not_null(q_54));
                                      {
                                        t = add_0(t);
                                        {
                                          s_54 = t;
                                          if(((p_54 != NULL) && (p_54 != s_54)))
                                            _fail(s_54);
                                          else
                                            p_54 = s_54;
                                        }
                                      }
                                    }
                                    t = (ATerm) ATmakeAppl(sym__2, not_null(p_53), not_null(p_54));
                                  }
                                }
                              else
                                {
                                  if(match_cons(o_53, sym_A_3))
                                    {
                                      p_53 = ATgetArgument(o_53, 0);
                                      q_53 = ATgetArgument(o_53, 1);
                                      m_53 = ATgetArgument(o_53, 2);
                                      h_53 :
                                      if(match_cons(p_53, sym_AOPTIONS_1))
                                        {
                                          l_53 = ATgetArgument(p_53, 0);
                                          {
                                            ATerm a_55 = NULL,b_55 = NULL,c_55 = NULL,f_55 = NULL,g_55 = NULL,h_55 = NULL;
                                            ATerm m_55 = NULL;
                                            t = not_null(m_53);
                                            {
                                              t = construct_rows_0(t);
                                              {
                                                ATerm h_2 (ATerm t)
                                                {
                                                  ATerm i_55 = NULL,j_55 = NULL,k_55 = NULL;
                                                  i_55 = t;
                                                  o_51 :
                                                  if(match_cons(i_55, sym_R_2))
                                                    {
                                                      j_55 = ATgetArgument(i_55, 0);
                                                      k_55 = ATgetArgument(i_55, 1);
                                                      t = not_null(k_55);
                                                    }
                                                  else
                                                    {
                                                      _fail(t);
                                                    }
                                                  return(t);
                                                }
                                                t = map_1(t, h_2);
                                                {
                                                  t = warn_not_matrix_0(t);
                                                  {
                                                    ATerm n_55 = NULL;
                                                    t = matrix_transpose_0(t);
                                                    {
                                                      m_55 = t;
                                                      {
                                                        if(((a_55 != NULL) && (a_55 != m_55)))
                                                          _fail(m_55);
                                                        else
                                                          a_55 = m_55;
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym__2, not_null(l_53), not_null(a_55));
                                                          {
                                                            ATerm o_55 = NULL,x_55 = NULL,y_55 = NULL;
                                                            t = zip_0(t);
                                                            {
                                                              n_55 = t;
                                                              {
                                                                if(((b_55 != NULL) && (b_55 != n_55)))
                                                                  _fail(n_55);
                                                                else
                                                                  b_55 = n_55;
                                                                {
                                                                  t = (ATerm) ATmakeAppl(sym__2, not_null(b_55), (ATerm) ATmakeAppl(sym__2, not_null(r_53), (ATerm) ATempty));
                                                                  {
                                                                    t = foldl_1(t, do_A_column_0);
                                                                    {
                                                                      o_55 = t;
                                                                      w_51 :
                                                                      if(match_cons(o_55, sym__2))
                                                                        {
                                                                          x_55 = ATgetArgument(o_55, 0);
                                                                          y_55 = ATgetArgument(o_55, 1);
                                                                          {
                                                                            ATerm z_55 = NULL;
                                                                            if(((f_55 != NULL) && (f_55 != x_55)))
                                                                              _fail(x_55);
                                                                            else
                                                                              f_55 = x_55;
                                                                            {
                                                                              if(((c_55 != NULL) && (c_55 != y_55)))
                                                                                _fail(y_55);
                                                                              else
                                                                                c_55 = y_55;
                                                                              {
                                                                                t = not_null(c_55);
                                                                                {
                                                                                  t = reverse_0(t);
                                                                                  {
                                                                                    ATerm a_56 = NULL,h_56 = NULL;
                                                                                    t = matrix_transpose_0(t);
                                                                                    {
                                                                                      z_55 = t;
                                                                                      {
                                                                                        if(((g_55 != NULL) && (g_55 != z_55)))
                                                                                          _fail(z_55);
                                                                                        else
                                                                                          g_55 = z_55;
                                                                                        {
                                                                                          ATerm e_56 = NULL;
                                                                                          t = not_null(g_55);
                                                                                          {
                                                                                            ATerm i_2 (ATerm t)
                                                                                            {
                                                                                              ATerm b_56 = NULL;
                                                                                              ATerm c_56 = NULL;
                                                                                              c_56 = t;
                                                                                              if(((b_56 != NULL) && (b_56 != c_56)))
                                                                                                _fail(c_56);
                                                                                              else
                                                                                                b_56 = c_56;
                                                                                              t = (ATerm) ATmakeAppl(sym__2, not_null(b_56), not_null(f_55));
                                                                                              return(t);
                                                                                            }
                                                                                            t = map_1(t, i_2);
                                                                                            {
                                                                                              e_56 = t;
                                                                                              if(((a_56 != NULL) && (a_56 != e_56)))
                                                                                                _fail(e_56);
                                                                                              else
                                                                                                a_56 = e_56;
                                                                                            }
                                                                                          }
                                                                                          {
                                                                                            t = (ATerm) ATmakeAppl(sym__3, not_null(q_53), not_null(a_56), not_null(r_53));
                                                                                            {
                                                                                              t = format_vbox_0(t);
                                                                                              {
                                                                                                h_56 = t;
                                                                                                if(((h_55 != NULL) && (h_55 != h_56)))
                                                                                                  _fail(h_56);
                                                                                                else
                                                                                                  h_55 = h_56;
                                                                                              }
                                                                                            }
                                                                                          }
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
                                            t = not_null(h_55);
                                          }
                                        }
                                      else
                                        {
                                          _fail(t);
                                        }
                                    }
                                  else
                                    {
                                      if(match_cons(o_53, sym_V_2))
                                        {
                                          p_53 = ATgetArgument(o_53, 0);
                                          q_53 = ATgetArgument(o_53, 1);
                                          {
                                            ATerm l_56 = NULL,m_56 = NULL,n_56 = NULL;
                                            ATerm o_56 = NULL,q_56 = NULL;
                                            ATerm p_56 = NULL;
                                            t = not_null(p_53);
                                            {
                                              t = is_length_0(t);
                                              {
                                                p_56 = t;
                                                if(((o_56 != NULL) && (o_56 != p_56)))
                                                  _fail(p_56);
                                                else
                                                  o_56 = p_56;
                                              }
                                            }
                                            {
                                              t = (ATerm) ATmakeAppl(sym__2, not_null(r_53), not_null(o_56));
                                              {
                                                ATerm r_56 = NULL;
                                                t = add_0(t);
                                                {
                                                  q_56 = t;
                                                  {
                                                    if(((m_56 != NULL) && (m_56 != q_56)))
                                                      _fail(q_56);
                                                    else
                                                      m_56 = q_56;
                                                    {
                                                      t = not_null(q_53);
                                                      {
                                                        ATerm z_56 = NULL;
                                                        t = filter_1(t, is_real_vbox_0);
                                                        {
                                                          r_56 = t;
                                                          {
                                                            if(((l_56 != NULL) && (l_56 != r_56)))
                                                              _fail(r_56);
                                                            else
                                                              l_56 = r_56;
                                                            {
                                                              t = not_null(l_56);
                                                              {
                                                                ATerm t_17 = t;
                                                                int u_17 = stack_ptr;
                                                                if((PushChoice() == 0))
                                                                  {
                                                                    ATerm s_56 = NULL;
                                                                    s_56 = t;
                                                                    h_52 :
                                                                    if(((ATgetType(s_56) == AT_LIST) && ATisEmpty(s_56)))
                                                                      {
                                                                        {
                                                                        }
                                                                      }
                                                                    else
                                                                      {
                                                                        _fail(t);
                                                                      }
                                                                    LocalPopChoice(u_17);
                                                                    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, not_null(r_53));
                                                                  }
                                                                else
                                                                  {
                                                                    t = t_17;
                                                                    {
                                                                      ATerm t_56 = NULL,x_56 = NULL;
                                                                      ATerm w_56 = NULL;
                                                                      w_56 = t;
                                                                      if(((t_56 != NULL) && (t_56 != w_56)))
                                                                        _fail(w_56);
                                                                      else
                                                                        t_56 = w_56;
                                                                      {
                                                                        t = (ATerm) ATmakeAppl(sym__3, not_null(r_53), not_null(m_56), not_null(t_56));
                                                                        {
                                                                          t = do_vbox_children_0(t);
                                                                          {
                                                                            ATerm y_56 = NULL;
                                                                            y_56 = t;
                                                                            if(((x_56 != NULL) && (x_56 != y_56)))
                                                                              _fail(y_56);
                                                                            else
                                                                              x_56 = y_56;
                                                                            {
                                                                              t = (ATerm) ATmakeAppl(sym__3, not_null(p_53), not_null(x_56), not_null(r_53));
                                                                              t = format_vbox_0(t);
                                                                            }
                                                                          }
                                                                        }
                                                                      }
                                                                    }
                                                                  }
                                                                {
                                                                  z_56 = t;
                                                                  if(((n_56 != NULL) && (n_56 != z_56)))
                                                                    _fail(z_56);
                                                                  else
                                                                    n_56 = z_56;
                                                                }
                                                              }
                                                            }
                                                          }
                                                        }
                                                      }
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                            t = not_null(n_56);
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(o_53, sym_H_2))
                                            {
                                              p_53 = ATgetArgument(o_53, 0);
                                              q_53 = ATgetArgument(o_53, 1);
                                              {
                                                ATerm d_57 = NULL,e_57 = NULL,f_57 = NULL,g_57 = NULL;
                                                ATerm h_57 = NULL;
                                                t = not_null(p_53);
                                                {
                                                  ATerm i_57 = NULL;
                                                  t = hs_text_0(t);
                                                  {
                                                    h_57 = t;
                                                    {
                                                      if(((e_57 != NULL) && (e_57 != h_57)))
                                                        _fail(h_57);
                                                      else
                                                        e_57 = h_57;
                                                      {
                                                        t = not_null(e_57);
                                                        {
                                                          ATerm j_57 = NULL;
                                                          t = string_length_0(t);
                                                          {
                                                            i_57 = t;
                                                            {
                                                              if(((f_57 != NULL) && (f_57 != i_57)))
                                                                _fail(i_57);
                                                              else
                                                                f_57 = i_57;
                                                              {
                                                                t = not_null(q_53);
                                                                {
                                                                  ATerm k_57 = NULL,s_57 = NULL;
                                                                  t = filter_1(t, is_real_hbox_0);
                                                                  {
                                                                    j_57 = t;
                                                                    {
                                                                      if(((d_57 != NULL) && (d_57 != j_57)))
                                                                        _fail(j_57);
                                                                      else
                                                                        d_57 = j_57;
                                                                      {
                                                                        t = not_null(d_57);
                                                                        {
                                                                          ATerm l_57 = NULL;
                                                                          l_57 = t;
                                                                          if(((k_57 != NULL) && (k_57 != l_57)))
                                                                            _fail(l_57);
                                                                          else
                                                                            k_57 = l_57;
                                                                          {
                                                                            t = (ATerm) ATmakeAppl(sym__2, not_null(k_57), not_null(r_53));
                                                                            {
                                                                              ATerm j_2 (ATerm t)
                                                                              {
                                                                                t = try_abox2text_0(t);
                                                                                {
                                                                                  ATerm k_2 (ATerm t)
                                                                                  {
                                                                                    ATerm m_57 = NULL;
                                                                                    ATerm n_57 = NULL;
                                                                                    n_57 = t;
                                                                                    if(((m_57 != NULL) && (m_57 != n_57)))
                                                                                      _fail(n_57);
                                                                                    else
                                                                                      m_57 = n_57;
                                                                                    {
                                                                                      t = (ATerm) ATmakeAppl(sym__2, not_null(f_57), not_null(m_57));
                                                                                      t = add_0(t);
                                                                                    }
                                                                                    return(t);
                                                                                  }
                                                                                  t = _2(t, _id, k_2);
                                                                                }
                                                                                return(t);
                                                                              }
                                                                              t = thread_map_1(t, j_2);
                                                                              {
                                                                                ATerm l_2 (ATerm t)
                                                                                {
                                                                                  ATerm o_57 = NULL;
                                                                                  ATerm p_57 = NULL;
                                                                                  p_57 = t;
                                                                                  if(((o_57 != NULL) && (o_57 != p_57)))
                                                                                    _fail(p_57);
                                                                                  else
                                                                                    o_57 = p_57;
                                                                                  {
                                                                                    t = (ATerm) ATmakeAppl(sym__2, not_null(e_57), not_null(o_57));
                                                                                    t = separate_by_0(t);
                                                                                  }
                                                                                  return(t);
                                                                                }
                                                                                t = _2(t, l_2, _id);
                                                                                {
                                                                                  ATerm m_2 (ATerm t)
                                                                                  {
                                                                                    ATerm n_2 (ATerm t)
                                                                                    {
                                                                                      ATerm v_17 = t;
                                                                                      if((PushChoice() == 0))
                                                                                        {
                                                                                          t = Nil_0(t);
                                                                                          PopChoice();
                                                                                          _fail(t);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = v_17;
                                                                                        }
                                                                                      return(t);
                                                                                    }
                                                                                    ATerm o_2 (ATerm t)
                                                                                    {
                                                                                      ATerm q_57 = NULL;
                                                                                      ATerm r_57 = NULL;
                                                                                      r_57 = t;
                                                                                      if(((q_57 != NULL) && (q_57 != r_57)))
                                                                                        _fail(r_57);
                                                                                      else
                                                                                        q_57 = r_57;
                                                                                      {
                                                                                        t = (ATerm) ATmakeAppl(sym__2, not_null(q_57), not_null(f_57));
                                                                                        t = subt_0(t);
                                                                                      }
                                                                                      return(t);
                                                                                    }
                                                                                    t = _2(t, n_2, o_2);
                                                                                    return(t);
                                                                                  }
                                                                                  t = try_1(t, m_2);
                                                                                  {
                                                                                    s_57 = t;
                                                                                    if(((g_57 != NULL) && (g_57 != s_57)))
                                                                                      _fail(s_57);
                                                                                    else
                                                                                      g_57 = s_57;
                                                                                  }
                                                                                }
                                                                              }
                                                                            }
                                                                          }
                                                                        }
                                                                      }
                                                                    }
                                                                  }
                                                                }
                                                              }
                                                            }
                                                          }
                                                        }
                                                      }
                                                    }
                                                  }
                                                }
                                                t = not_null(g_57);
                                              }
                                            }
                                          else
                                            {
                                              if(match_cons(o_53, sym_HV_2))
                                                {
                                                  p_53 = ATgetArgument(o_53, 0);
                                                  q_53 = ATgetArgument(o_53, 1);
                                                  {
                                                    ATerm w_57 = NULL,x_57 = NULL,y_57 = NULL,z_57 = NULL,a_58 = NULL;
                                                    ATerm b_58 = NULL;
                                                    t = not_null(p_53);
                                                    {
                                                      ATerm c_58 = NULL;
                                                      t = hs_text_0(t);
                                                      {
                                                        b_58 = t;
                                                        {
                                                          if(((z_57 != NULL) && (z_57 != b_58)))
                                                            _fail(b_58);
                                                          else
                                                            z_57 = b_58;
                                                          {
                                                            t = not_null(p_53);
                                                            {
                                                              ATerm f_58 = NULL;
                                                              t = vs_text_0(t);
                                                              {
                                                                c_58 = t;
                                                                {
                                                                  if(((w_57 != NULL) && (w_57 != c_58)))
                                                                    _fail(c_58);
                                                                  else
                                                                    w_57 = c_58;
                                                                  {
                                                                    t = not_null(z_57);
                                                                    {
                                                                      ATerm g_58 = NULL,i_58 = NULL;
                                                                      t = string_length_0(t);
                                                                      {
                                                                        f_58 = t;
                                                                        {
                                                                          if(((x_57 != NULL) && (x_57 != f_58)))
                                                                            _fail(f_58);
                                                                          else
                                                                            x_57 = f_58;
                                                                          {
                                                                            ATerm h_58 = NULL;
                                                                            t = not_null(p_53);
                                                                            {
                                                                              t = is_length_0(t);
                                                                              {
                                                                                h_58 = t;
                                                                                if(((g_58 != NULL) && (g_58 != h_58)))
                                                                                  _fail(h_58);
                                                                                else
                                                                                  g_58 = h_58;
                                                                              }
                                                                            }
                                                                            {
                                                                              t = (ATerm) ATmakeAppl(sym__2, not_null(r_53), not_null(g_58));
                                                                              {
                                                                                ATerm l_58 = NULL,n_58 = NULL;
                                                                                t = add_0(t);
                                                                                {
                                                                                  i_58 = t;
                                                                                  {
                                                                                    if(((y_57 != NULL) && (y_57 != i_58)))
                                                                                      _fail(i_58);
                                                                                    else
                                                                                      y_57 = i_58;
                                                                                    {
                                                                                      t = (ATerm) ATmakeAppl(sym__2, not_null(q_53), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, not_null(r_53))));
                                                                                      {
                                                                                        ATerm p_2 (ATerm t)
                                                                                        {
                                                                                          ATerm w_17 = t;
                                                                                          int x_17 = stack_ptr;
                                                                                          if((PushChoice() == 0))
                                                                                            {
                                                                                              ATerm q_2 (ATerm t)
                                                                                              {
                                                                                                t = not_null(x_57);
                                                                                                return(t);
                                                                                              }
                                                                                              t = hv_add_to_hbox_1(t, q_2);
                                                                                              LocalPopChoice(x_17);
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              t = w_17;
                                                                                              {
                                                                                                ATerm r_2 (ATerm t)
                                                                                                {
                                                                                                  t = not_null(x_57);
                                                                                                  return(t);
                                                                                                }
                                                                                                ATerm s_2 (ATerm t)
                                                                                                {
                                                                                                  t = not_null(y_57);
                                                                                                  return(t);
                                                                                                }
                                                                                                t = hv_in_new_vbox_2(t, r_2, s_2);
                                                                                              }
                                                                                            }
                                                                                          return(t);
                                                                                        }
                                                                                        t = foldl_1(t, p_2);
                                                                                        {
                                                                                          t = reverse_0(t);
                                                                                          {
                                                                                            ATerm t_2 (ATerm t)
                                                                                            {
                                                                                              t = _2(t, reverse_0, _id);
                                                                                              return(t);
                                                                                            }
                                                                                            t = map_1(t, t_2);
                                                                                            {
                                                                                              ATerm u_2 (ATerm t)
                                                                                              {
                                                                                                ATerm v_2 (ATerm t)
                                                                                                {
                                                                                                  ATerm j_58 = NULL;
                                                                                                  ATerm k_58 = NULL;
                                                                                                  k_58 = t;
                                                                                                  if(((j_58 != NULL) && (j_58 != k_58)))
                                                                                                    _fail(k_58);
                                                                                                  else
                                                                                                    j_58 = k_58;
                                                                                                  {
                                                                                                    t = (ATerm) ATmakeAppl(sym__2, not_null(z_57), not_null(j_58));
                                                                                                    t = separate_by_0(t);
                                                                                                  }
                                                                                                  return(t);
                                                                                                }
                                                                                                t = _2(t, v_2, _id);
                                                                                                return(t);
                                                                                              }
                                                                                              t = map_1(t, u_2);
                                                                                              {
                                                                                                ATerm m_58 = NULL;
                                                                                                m_58 = t;
                                                                                                if(((l_58 != NULL) && (l_58 != m_58)))
                                                                                                  _fail(m_58);
                                                                                                else
                                                                                                  l_58 = m_58;
                                                                                                {
                                                                                                  t = (ATerm) ATmakeAppl(sym__3, not_null(p_53), not_null(l_58), not_null(r_53));
                                                                                                  {
                                                                                                    t = format_vbox_0(t);
                                                                                                    {
                                                                                                      n_58 = t;
                                                                                                      if(((a_58 != NULL) && (a_58 != n_58)))
                                                                                                        _fail(n_58);
                                                                                                      else
                                                                                                        a_58 = n_58;
                                                                                                    }
                                                                                                  }
                                                                                                }
                                                                                              }
                                                                                            }
                                                                                          }
                                                                                        }
                                                                                      }
                                                                                    }
                                                                                  }
                                                                                }
                                                                              }
                                                                            }
                                                                          }
                                                                        }
                                                                      }
                                                                    }
                                                                  }
                                                                }
                                                              }
                                                            }
                                                          }
                                                        }
                                                      }
                                                    }
                                                    t = not_null(a_58);
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
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_abox2text_0 (ATerm t)
{
  ATerm y_17 = t;
  int a_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = abox2text_0(t);
      LocalPopChoice(a_18);
    }
  else
    {
      t = y_17;
      {
        ATerm p_60 = NULL;
        ATerm q_60 = NULL;
        q_60 = t;
        if(((p_60 != NULL) && (p_60 != q_60)))
          _fail(q_60);
        else
          p_60 = q_60;
        {
          t = (ATerm) ATinsert(ATinsert(ATempty, not_null(p_60)), term_b_18);
          t = fatal_error_0(t);
        }
      }
    }
  return(t);
}
ATerm ReadFromFile_0 (ATerm t)
{
  ATerm t_60 = NULL;
  ATerm d_18 = t;
  int h_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_60 = NULL;
      u_60 = t;
      {
        if(((t_60 != NULL) && (t_60 != u_60)))
          _fail(u_60);
        else
          t_60 = u_60;
        t = SSL_ReadFromFile(not_null(t_60));
      }
      LocalPopChoice(h_18);
    }
  else
    {
      t = d_18;
      {
        ATerm w_2 (ATerm t)
        {
          t = term_p_18;
          return(t);
        }
        t = debug_1(t, w_2);
        _fail(t);
      }
    }
  return(t);
}
ATerm file_exists_0 (ATerm t)
{
  ATerm y_60 = NULL;
  ATerm a_61 = NULL;
  y_60 = t;
  {
    ATerm q_18;
    q_18 = t;
    {
      ATerm b_61 = NULL;
      t = term_r_18;
      {
        b_61 = t;
        if(((a_61 != NULL) && (a_61 != b_61)))
          _fail(b_61);
        else
          a_61 = b_61;
      }
    }
    t = q_18;
    {
      t = SSL_open_file(not_null(y_60), not_null(a_61));
      t = SSL_close_file(not_null(y_60));
    }
  }
  return(t);
}
ATerm read_from_0 (ATerm t)
{
  ATerm j_61 = NULL,k_61 = NULL;
  j_61 = t;
  i_61 :
  if(match_cons(j_61, sym_stdin_0))
    {
      ATerm l_61 = NULL;
      ATerm m_61 = NULL;
      t = term_s_18;
      {
        t = ReadFromFile_0(t);
        {
          m_61 = t;
          if(((l_61 != NULL) && (l_61 != m_61)))
            _fail(m_61);
          else
            l_61 = m_61;
        }
      }
      t = not_null(l_61);
    }
  else
    {
      if(match_cons(j_61, sym_FILE_1))
        {
          k_61 = ATgetArgument(j_61, 0);
          {
            ATerm o_61 = NULL;
            ATerm p_61 = NULL;
            t = not_null(k_61);
            {
              t = file_exists_0(t);
              {
                t = ReadFromFile_0(t);
                {
                  p_61 = t;
                  if(((o_61 != NULL) && (o_61 != p_61)))
                    _fail(p_61);
                  else
                    o_61 = p_61;
                }
              }
            }
            t = not_null(o_61);
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
  ATerm w_61 = NULL,x_61 = NULL,y_61 = NULL;
  w_61 = t;
  v_61 :
  if(match_cons(w_61, sym__2))
    {
      x_61 = ATgetArgument(w_61, 0);
      y_61 = ATgetArgument(w_61, 1);
      t = SSL_copy(not_null(x_61), not_null(y_61));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm stderr_0 (ATerm t)
{
  ATerm g_62 = NULL;
  g_62 = t;
  f_62 :
  if(match_cons(g_62, sym_stderr_0))
    {
      ATerm i_62 = NULL,k_62 = NULL;
      ATerm t_18;
      t_18 = t;
      {
        ATerm j_62 = NULL;
        t = SSLgetAnnotations(not_null(g_62));
        {
          j_62 = t;
          if(((i_62 != NULL) && (i_62 != j_62)))
            _fail(j_62);
          else
            i_62 = j_62;
        }
      }
      t = t_18;
      {
        ATerm l_62 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stderr_0), not_null(i_62));
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
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm stdout_0 (ATerm t)
{
  ATerm t_62 = NULL;
  t_62 = t;
  s_62 :
  if(match_cons(t_62, sym_stdout_0))
    {
      ATerm v_62 = NULL,x_62 = NULL;
      ATerm u_18;
      u_18 = t;
      {
        ATerm w_62 = NULL;
        t = SSLgetAnnotations(not_null(t_62));
        {
          w_62 = t;
          if(((v_62 != NULL) && (v_62 != w_62)))
            _fail(w_62);
          else
            v_62 = w_62;
        }
      }
      t = u_18;
      {
        ATerm y_62 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stdout_0), not_null(v_62));
        {
          y_62 = t;
          if(((x_62 != NULL) && (x_62 != y_62)))
            _fail(y_62);
          else
            x_62 = y_62;
        }
        t = not_null(x_62);
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
  ATerm k_63 = NULL,l_63 = NULL;
  k_63 = t;
  j_63 :
  if(match_cons(k_63, sym_FILE_1))
    {
      l_63 = ATgetArgument(k_63, 0);
      {
        ATerm z_18 = t;
        int a_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_63 = NULL;
            ATerm o_63 = NULL;
            t = m_0(t);
            {
              o_63 = t;
              {
                if(((n_63 != NULL) && (n_63 != o_63)))
                  _fail(o_63);
                else
                  n_63 = o_63;
                {
                  ATerm b_19 = t;
                  int e_19 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = stdout_0(t);
                      LocalPopChoice(e_19);
                    }
                  else
                    {
                      t = b_19;
                      t = stderr_0(t);
                    }
                  {
                    t = (ATerm) ATmakeAppl(sym__2, not_null(l_63), not_null(n_63));
                    t = copy_file_0(t);
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(l_63));
            LocalPopChoice(a_19);
          }
        else
          {
            t = z_18;
            {
              ATerm f_19 = t;
              int l_19 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm q_63 = NULL;
                  ATerm r_63 = NULL;
                  t = m_0(t);
                  {
                    r_63 = t;
                    {
                      if(((q_63 != NULL) && (q_63 != r_63)))
                        _fail(r_63);
                      else
                        q_63 = r_63;
                      {
                        ATerm m_19 = t;
                        if((PushChoice() == 0))
                          {
                            ATerm n_19 = t;
                            int q_19 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = stdout_0(t);
                                LocalPopChoice(q_19);
                              }
                            else
                              {
                                t = n_19;
                                {
                                  ATerm r_19 = t;
                                  int s_19 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = stderr_0(t);
                                      LocalPopChoice(s_19);
                                    }
                                  else
                                    {
                                      t = r_19;
                                      {
                                        ATerm s_63 = NULL;
                                        s_63 = t;
                                        if(((l_63 != NULL) && (l_63 != s_63)))
                                          _fail(s_63);
                                        else
                                          l_63 = s_63;
                                      }
                                    }
                                }
                              }
                            PopChoice();
                            _fail(t);
                          }
                        else
                          {
                            t = m_19;
                          }
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(l_63), not_null(q_63));
                          t = copy_file_0(t);
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(l_63));
                  LocalPopChoice(l_19);
                }
              else
                {
                  t = f_19;
                  {
                    ATerm u_63 = NULL;
                    t = m_0(t);
                    {
                      u_63 = t;
                      if(((l_63 != NULL) && (l_63 != u_63)))
                        _fail(u_63);
                      else
                        l_63 = u_63;
                    }
                    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(l_63));
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
  ATerm e_64 = NULL,f_64 = NULL,g_64 = NULL;
  e_64 = t;
  d_64 :
  if(((ATgetType(e_64) == AT_LIST) && !(ATisEmpty(e_64))))
    {
      f_64 = ATgetFirst((ATermList) e_64);
      g_64 = (ATerm) ATgetNext((ATermList) e_64);
      t = not_null(g_64);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_pop_0 (ATerm t)
{
  ATerm m_64 = NULL,n_64 = NULL,o_64 = NULL;
  m_64 = t;
  l_64 :
  if(match_cons(m_64, sym__2))
    {
      n_64 = ATgetArgument(m_64, 0);
      o_64 = ATgetArgument(m_64, 1);
      {
        ATerm t_19;
        t_19 = t;
        {
          ATerm r_64 = NULL;
          ATerm s_64 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(n_64), not_null(o_64));
          {
            ATerm z_19 = t;
            int a_20 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                t = Tl_0(t);
                LocalPopChoice(a_20);
              }
            else
              {
                t = z_19;
                t = (ATerm) ATempty;
              }
            {
              s_64 = t;
              if(((r_64 != NULL) && (r_64 != s_64)))
                _fail(s_64);
              else
                r_64 = s_64;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(n_64), not_null(o_64), not_null(r_64));
            t = table_put_0(t);
          }
        }
        t = t_19;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm end_scope_1 (ATerm t, ATerm f_84 (ATerm))
{
  ATerm b_65 = NULL,c_65 = NULL,d_65 = NULL;
  ATerm b_20;
  b_20 = t;
  {
    ATerm e_65 = NULL;
    ATerm f_65 = NULL,g_65 = NULL,h_65 = NULL;
    t = f_84(t);
    {
      e_65 = t;
      {
        if(((d_65 != NULL) && (d_65 != e_65)))
          _fail(e_65);
        else
          d_65 = e_65;
        {
          ATerm e_20 = t;
          int f_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(d_65), term_y_7);
              t = table_get_0(t);
              LocalPopChoice(f_20);
            }
          else
            {
              t = e_20;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
            }
          {
            f_65 = t;
            y_64 :
            if(((ATgetType(f_65) == AT_LIST) && !(ATisEmpty(f_65))))
              {
                g_65 = ATgetFirst((ATermList) f_65);
                h_65 = (ATerm) ATgetNext((ATermList) f_65);
                {
                  if(((c_65 != NULL) && (c_65 != g_65)))
                    _fail(g_65);
                  else
                    c_65 = g_65;
                  {
                    if(((b_65 != NULL) && (b_65 != h_65)))
                      _fail(h_65);
                    else
                      b_65 = h_65;
                    {
                      t = (ATerm) ATmakeAppl(sym__3, not_null(d_65), term_y_7, not_null(b_65));
                      {
                        t = table_put_0(t);
                        {
                          t = not_null(c_65);
                          {
                            ATerm x_2 (ATerm t)
                            {
                              ATerm i_65 = NULL;
                              i_65 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(d_65), not_null(i_65));
                                t = table_pop_0(t);
                              }
                              return(t);
                            }
                            t = map_1(t, x_2);
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
  t = b_20;
  return(t);
}
ATerm remove_file_0 (ATerm t)
{
  ATerm u_65 = NULL;
  u_65 = t;
  t = SSL_remove(not_null(u_65));
  return(t);
}
ATerm restore_always_2 (ATerm t, ATerm i_66 (ATerm), ATerm j_66 (ATerm))
{
  ATerm h_20 = t;
  int j_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = i_66(t);
      t = j_66(t);
      LocalPopChoice(j_20);
    }
  else
    {
      t = h_20;
      {
        t = j_66(t);
        _fail(t);
      }
    }
  return(t);
}
ATerm begin_scope_1 (ATerm t, ATerm e_84 (ATerm))
{
  ATerm z_65 = NULL;
  ATerm m_20;
  m_20 = t;
  {
    ATerm a_66 = NULL;
    ATerm b_66 = NULL;
    t = e_84(t);
    {
      a_66 = t;
      {
        if(((z_65 != NULL) && (z_65 != a_66)))
          _fail(a_66);
        else
          z_65 = a_66;
        {
          ATerm c_66 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(z_65), term_y_7);
          {
            ATerm n_20 = t;
            int s_20 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(s_20);
              }
            else
              {
                t = n_20;
                t = (ATerm) ATempty;
              }
            {
              c_66 = t;
              if(((b_66 != NULL) && (b_66 != c_66)))
                _fail(c_66);
              else
                b_66 = c_66;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(z_65), term_y_7, (ATerm) ATinsert(CheckATermList(not_null(b_66)), (ATerm) ATempty));
            t = table_put_0(t);
          }
        }
      }
    }
  }
  t = m_20;
  return(t);
}
ATerm xtc_temp_files_1 (ATerm t, ATerm x_93 (ATerm))
{
  ATerm h_66 = NULL,k_66 = NULL;
  ATerm y_2 (ATerm t)
  {
    t = term_x_8;
    return(t);
  }
  t = begin_scope_1(t, y_2);
  {
    ATerm z_2 (ATerm t)
    {
      ATerm t_20;
      t_20 = t;
      {
        ATerm l_66 = NULL,m_66 = NULL,n_66 = NULL;
        ATerm y_20 = t;
        int z_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_e_21;
            t = table_get_0(t);
            LocalPopChoice(z_20);
          }
        else
          {
            t = y_20;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
          }
        {
          l_66 = t;
          g_66 :
          if(((ATgetType(l_66) == AT_LIST) && !(ATisEmpty(l_66))))
            {
              m_66 = ATgetFirst((ATermList) l_66);
              n_66 = (ATerm) ATgetNext((ATermList) l_66);
              {
                if(((k_66 != NULL) && (k_66 != m_66)))
                  _fail(m_66);
                else
                  k_66 = m_66;
                {
                  if(((h_66 != NULL) && (h_66 != n_66)))
                    _fail(n_66);
                  else
                    h_66 = n_66;
                  {
                    t = not_null(k_66);
                    {
                      ATerm a_3 (ATerm t)
                      {
                        t = try_1(t, remove_file_0);
                        return(t);
                      }
                      t = map_1(t, a_3);
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
      t = t_20;
      {
        ATerm b_3 (ATerm t)
        {
          t = term_x_8;
          return(t);
        }
        t = end_scope_1(t, b_3);
      }
      return(t);
    }
    t = restore_always_2(t, x_93, z_2);
  }
  return(t);
}
ATerm xtc_io_1 (ATerm t, ATerm y_93 (ATerm))
{
  ATerm c_3 (ATerm t)
  {
    ATerm f_21 = t;
    int g_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_66 = NULL;
        ATerm r_66 = NULL;
        t = term_j_21;
        {
          t = get_config_0(t);
          {
            r_66 = t;
            if(((q_66 != NULL) && (q_66 != r_66)))
              _fail(r_66);
            else
              q_66 = r_66;
          }
        }
        t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(q_66));
        LocalPopChoice(g_21);
      }
    else
      {
        t = f_21;
        t = term_s_18;
      }
    {
      t = y_93(t);
      {
        ATerm d_3 (ATerm t)
        {
          ATerm k_21 = t;
          int l_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = term_m_21;
              t = get_config_0(t);
              LocalPopChoice(l_21);
            }
          else
            {
              t = k_21;
              t = term_n_21;
            }
          return(t);
        }
        t = copy_to_1(t, d_3);
      }
    }
    return(t);
  }
  t = xtc_temp_files_1(t, c_3);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm u_66 = NULL;
  u_66 = t;
  t = SSL_string_to_int(not_null(u_66));
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm c_67 = NULL,d_67 = NULL,k_67 = NULL,l_67 = NULL,m_67 = NULL;
  c_67 = t;
  a_67 :
  if(match_string(c_67, "register-usage-info"))
    {
      t = register_usage_1(t, l_0);
    }
  else
    {
      if(((ATgetType(c_67) == AT_LIST) && !(ATisEmpty(c_67))))
        {
          d_67 = ATgetFirst((ATermList) c_67);
          k_67 = (ATerm) ATgetNext((ATermList) c_67);
          b_67 :
          if(((ATgetType(k_67) == AT_LIST) && !(ATisEmpty(k_67))))
            {
              l_67 = ATgetFirst((ATermList) k_67);
              m_67 = (ATerm) ATgetNext((ATermList) k_67);
              {
                ATerm r_67 = NULL;
                ATerm o_21;
                o_21 = t;
                {
                  t = not_null(d_67);
                  t = j_0(t);
                }
                t = o_21;
                {
                  ATerm s_67 = NULL;
                  t = not_null(l_67);
                  {
                    t = k_0(t);
                    {
                      s_67 = t;
                      if(((r_67 != NULL) && (r_67 != s_67)))
                        _fail(s_67);
                      else
                        r_67 = s_67;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(m_67)), not_null(r_67));
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
  ATerm e_3 (ATerm t)
  {
    ATerm x_67 = NULL;
    x_67 = t;
    w_67 :
    if(!(match_string(x_67, "-v")))
      {
        if(!(match_string(x_67, "--version")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm f_3 (ATerm t)
  {
    t = term_q_21;
    t = set_config_0(t);
    t = term_r_21;
    return(t);
  }
  ATerm g_3 (ATerm t)
  {
    t = term_s_21;
    return(t);
  }
  t = Option_3(t, e_3, f_3, g_3);
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm h_3 (ATerm t)
  {
    ATerm a_68 = NULL;
    a_68 = t;
    y_67 :
    if(!(match_string(a_68, "-k")))
      {
        if(!(match_string(a_68, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm i_3 (ATerm t)
  {
    ATerm t_21;
    t_21 = t;
    {
      ATerm b_68 = NULL;
      ATerm c_68 = NULL;
      t = string_to_int_0(t);
      {
        c_68 = t;
        if(((b_68 != NULL) && (b_68 != c_68)))
          _fail(c_68);
        else
          b_68 = c_68;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_u_21, not_null(b_68));
        t = set_config_0(t);
      }
    }
    t = t_21;
    return(t);
  }
  ATerm j_3 (ATerm t)
  {
    t = term_v_21;
    return(t);
  }
  t = ArgOption_3(t, h_3, i_3, j_3);
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm w_21 = t;
  int x_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_3 (ATerm t)
      {
        ATerm j_68 = NULL;
        j_68 = t;
        e_68 :
        if(!(match_string(j_68, "-S")))
          {
            if(!(match_string(j_68, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm l_3 (ATerm t)
      {
        t = term_z_21;
        t = set_config_0(t);
        t = term_a_22;
        return(t);
      }
      ATerm m_3 (ATerm t)
      {
        t = term_b_22;
        return(t);
      }
      t = Option_3(t, k_3, l_3, m_3);
      LocalPopChoice(x_21);
    }
  else
    {
      t = w_21;
      {
        ATerm c_22 = t;
        int d_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_3 (ATerm t)
            {
              ATerm k_68 = NULL;
              k_68 = t;
              f_68 :
              if(!(match_string(k_68, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm o_3 (ATerm t)
            {
              ATerm n_68 = NULL;
              ATerm e_22;
              e_22 = t;
              {
                ATerm l_68 = NULL;
                ATerm m_68 = NULL;
                t = string_to_int_0(t);
                {
                  m_68 = t;
                  if(((l_68 != NULL) && (l_68 != m_68)))
                    _fail(m_68);
                  else
                    l_68 = m_68;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_y_21, not_null(l_68));
                  t = set_config_0(t);
                }
              }
              t = e_22;
              {
                ATerm o_68 = NULL;
                o_68 = t;
                if(((n_68 != NULL) && (n_68 != o_68)))
                  _fail(o_68);
                else
                  n_68 = o_68;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(n_68));
              }
              return(t);
            }
            ATerm p_3 (ATerm t)
            {
              t = term_f_22;
              return(t);
            }
            t = ArgOption_3(t, n_3, o_3, p_3);
            LocalPopChoice(d_22);
          }
        else
          {
            t = c_22;
            {
              ATerm v_3 (ATerm t)
              {
                ATerm p_68 = NULL;
                p_68 = t;
                i_68 :
                if(!(match_string(p_68, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm w_3 (ATerm t)
              {
                t = term_h_22;
                t = set_config_0(t);
                t = term_i_22;
                return(t);
              }
              ATerm e_4 (ATerm t)
              {
                t = term_j_22;
                return(t);
              }
              t = Option_3(t, v_3, w_3, e_4);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0 (ATerm t)
{
  ATerm k_22 = t;
  int l_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      LocalPopChoice(l_22);
    }
  else
    {
      t = k_22;
      {
        ATerm m_22 = t;
        int n_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = keep_option_0(t);
            LocalPopChoice(n_22);
          }
        else
          {
            t = m_22;
            t = version_option_0(t);
          }
      }
    }
  return(t);
}
ATerm output_option_0 (ATerm t)
{
  ATerm f_4 (ATerm t)
  {
    ATerm v_68 = NULL;
    v_68 = t;
    s_68 :
    if(!(match_string(v_68, "-o")))
      {
        if(!(match_string(v_68, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm g_4 (ATerm t)
  {
    ATerm y_68 = NULL;
    ATerm o_22;
    o_22 = t;
    {
      ATerm w_68 = NULL;
      ATerm x_68 = NULL;
      x_68 = t;
      if(((w_68 != NULL) && (w_68 != x_68)))
        _fail(x_68);
      else
        w_68 = x_68;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_m_21, not_null(w_68));
        t = set_config_0(t);
      }
    }
    t = o_22;
    {
      ATerm z_68 = NULL;
      z_68 = t;
      if(((y_68 != NULL) && (y_68 != z_68)))
        _fail(z_68);
      else
        y_68 = z_68;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(y_68));
    }
    return(t);
  }
  ATerm h_4 (ATerm t)
  {
    t = term_p_22;
    return(t);
  }
  t = ArgOption_3(t, f_4, g_4, h_4);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm q_22 = t;
  int r_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      LocalPopChoice(r_22);
    }
  else
    {
      t = q_22;
      {
        ATerm j_4 (ATerm t)
        {
          ATerm d_69 = NULL;
          d_69 = t;
          c_69 :
          if(!(match_string(d_69, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm k_4 (ATerm t)
        {
          t = term_t_22;
          t = set_config_0(t);
          t = term_u_22;
          return(t);
        }
        ATerm t_4 (ATerm t)
        {
          t = term_v_22;
          return(t);
        }
        t = Option_3(t, j_4, k_4, t_4);
      }
    }
  return(t);
}
ATerm input_option_0 (ATerm t)
{
  ATerm u_4 (ATerm t)
  {
    ATerm h_69 = NULL;
    h_69 = t;
    e_69 :
    if(!(match_string(h_69, "-i")))
      {
        if(!(match_string(h_69, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm v_4 (ATerm t)
  {
    ATerm k_69 = NULL;
    ATerm w_22;
    w_22 = t;
    {
      ATerm i_69 = NULL;
      ATerm j_69 = NULL;
      j_69 = t;
      if(((i_69 != NULL) && (i_69 != j_69)))
        _fail(j_69);
      else
        i_69 = j_69;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_j_21, not_null(i_69));
        t = set_config_0(t);
      }
    }
    t = w_22;
    {
      ATerm l_69 = NULL;
      l_69 = t;
      if(((k_69 != NULL) && (k_69 != l_69)))
        _fail(l_69);
      else
        k_69 = l_69;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(k_69));
    }
    return(t);
  }
  ATerm w_4 (ATerm t)
  {
    t = term_x_22;
    return(t);
  }
  t = ArgOption_3(t, u_4, v_4, w_4);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm y_22 = t;
  int z_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      LocalPopChoice(z_22);
    }
  else
    {
      t = y_22;
      {
        ATerm a_23 = t;
        int b_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0(t);
            LocalPopChoice(b_23);
          }
        else
          {
            t = a_23;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm abox2text_options_0 (ATerm t)
{
  ATerm c_23 = t;
  int d_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = io_options_0(t);
      LocalPopChoice(d_23);
    }
  else
    {
      t = c_23;
      {
        ATerm a_5 (ATerm t)
        {
          ATerm q_69 = NULL;
          q_69 = t;
          o_69 :
          if(!(match_string(q_69, "-w")))
            {
              if(!(match_string(q_69, "--width")))
                {
                  _fail(t);
                }
            }
          return(t);
        }
        ATerm b_5 (ATerm t)
        {
          ATerm e_23;
          e_23 = t;
          {
            ATerm r_69 = NULL;
            ATerm s_69 = NULL;
            t = string_to_int_0(t);
            {
              s_69 = t;
              if(((r_69 != NULL) && (r_69 != s_69)))
                _fail(s_69);
              else
                r_69 = s_69;
            }
            {
              t = (ATerm) ATmakeAppl(sym__2, term_f_17, not_null(r_69));
              t = set_config_0(t);
            }
          }
          t = e_23;
          return(t);
        }
        ATerm d_5 (ATerm t)
        {
          t = term_f_23;
          return(t);
        }
        t = ArgOption_3(t, a_5, b_5, d_5);
      }
    }
  return(t);
}
ATerm default_usage_0 (ATerm t)
{
  ATerm w_69 = NULL;
  ATerm g_23;
  g_23 = t;
  {
    ATerm e_5 (ATerm t)
    {
      ATerm x_69 = NULL,y_69 = NULL;
      x_69 = t;
      v_69 :
      if(match_cons(x_69, sym_Program_1))
        {
          y_69 = ATgetArgument(x_69, 0);
          if(((w_69 != NULL) && (w_69 != y_69)))
            _fail(y_69);
          else
            w_69 = y_69;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = option_defined_1(t, e_5);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_c_9, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_i_23), not_null(w_69)), term_h_23));
      {
        t = printnl_0(t);
        {
          t = term_e_9;
          t = exit_0(t);
        }
      }
    }
  }
  t = g_23;
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_c_9, (ATerm) ATinsert(ATempty, term_j_23));
  {
    t = printnl_0(t);
    {
      t = term_e_9;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm b_70 = NULL;
  b_70 = t;
  t = SSL_TicksToSeconds(not_null(b_70));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm g_70 = NULL,h_70 = NULL,i_70 = NULL;
  g_70 = t;
  f_70 :
  if(match_cons(g_70, sym__2))
    {
      h_70 = ATgetArgument(g_70, 0);
      i_70 = ATgetArgument(g_70, 1);
      {
        ATerm k_23 = t;
        int l_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(h_70), not_null(i_70));
            LocalPopChoice(l_23);
          }
        else
          {
            t = k_23;
            t = SSL_addr(not_null(h_70), not_null(i_70));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm f_80 (ATerm), ATerm g_80 (ATerm))
{
  ATerm m_23 = t;
  int n_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = f_80(t);
      LocalPopChoice(n_23);
    }
  else
    {
      t = m_23;
      {
        ATerm p_70 = NULL,q_70 = NULL,r_70 = NULL;
        p_70 = t;
        o_70 :
        if(((ATgetType(p_70) == AT_LIST) && !(ATisEmpty(p_70))))
          {
            q_70 = ATgetFirst((ATermList) p_70);
            r_70 = (ATerm) ATgetNext((ATermList) p_70);
            {
              ATerm u_70 = NULL;
              ATerm v_70 = NULL;
              t = not_null(r_70);
              {
                t = foldr_2(t, f_80, g_80);
                {
                  v_70 = t;
                  if(((u_70 != NULL) && (u_70 != v_70)))
                    _fail(v_70);
                  else
                    u_70 = v_70;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(q_70), not_null(u_70));
                t = g_80(t);
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
ATerm crush_2 (ATerm t, ATerm d_79 (ATerm), ATerm e_79 (ATerm))
{
  ATerm c_71 = NULL;
  ATerm e_71 = NULL;
  c_71 = t;
  {
    ATerm f_71 = NULL;
    ATerm h_71 = NULL,i_71 = NULL,j_71 = NULL;
    t = not_null(c_71);
    {
      f_71 = t;
      {
        t = SSL_explode_term(not_null(f_71));
        {
          h_71 = t;
          b_71 :
          if(match_cons(h_71, sym__2))
            {
              i_71 = ATgetArgument(h_71, 0);
              j_71 = ATgetArgument(h_71, 1);
              if(((e_71 != NULL) && (e_71 != j_71)))
                _fail(j_71);
              else
                e_71 = j_71;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(e_71);
      t = foldr_2(t, d_79, e_79);
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
    ATerm f_5 (ATerm t)
    {
      t = term_h_10;
      return(t);
    }
    t = crush_2(t, f_5, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm p_71 = NULL,q_71 = NULL,r_71 = NULL;
  p_71 = t;
  o_71 :
  if(match_cons(p_71, sym__2))
    {
      q_71 = ATgetArgument(p_71, 0);
      r_71 = ATgetArgument(p_71, 1);
      {
        ATerm o_23;
        o_23 = t;
        {
          ATerm p_23 = t;
          int q_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(q_71), not_null(r_71));
              LocalPopChoice(q_23);
            }
          else
            {
              t = p_23;
              t = SSL_gtr(not_null(q_71), not_null(r_71));
            }
        }
        t = o_23;
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
  ATerm x_71 = NULL;
  ATerm r_23 = t;
  int s_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_71 = NULL,z_71 = NULL,a_72 = NULL;
      y_71 = t;
      w_71 :
      if(match_cons(y_71, sym__2))
        {
          z_71 = ATgetArgument(y_71, 0);
          a_72 = ATgetArgument(y_71, 1);
          {
            if(((x_71 != NULL) && (x_71 != z_71)))
              _fail(z_71);
            else
              x_71 = z_71;
            if(((x_71 != NULL) && (x_71 != a_72)))
              _fail(a_72);
            else
              x_71 = a_72;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(s_23);
    }
  else
    {
      t = r_23;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm l_87 (ATerm))
{
  ATerm g_5 (ATerm t)
  {
    ATerm t_23;
    t_23 = t;
    {
      ATerm d_72 = NULL;
      ATerm e_72 = NULL;
      t = term_y_21;
      {
        t = get_config_0(t);
        {
          e_72 = t;
          if(((d_72 != NULL) && (d_72 != e_72)))
            _fail(e_72);
          else
            d_72 = e_72;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(d_72), term_e_9);
        t = geq_0(t);
      }
    }
    t = t_23;
    t = l_87(t);
    return(t);
  }
  t = try_1(t, g_5);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm h_5 (ATerm t)
  {
    ATerm i_72 = NULL,k_72 = NULL;
    ATerm u_23;
    u_23 = t;
    {
      ATerm j_72 = NULL;
      t = run_time_0(t);
      {
        j_72 = t;
        if(((i_72 != NULL) && (i_72 != j_72)))
          _fail(j_72);
        else
          i_72 = j_72;
      }
    }
    t = u_23;
    {
      ATerm l_72 = NULL;
      t = term_v_23;
      {
        t = get_config_0(t);
        {
          l_72 = t;
          if(((k_72 != NULL) && (k_72 != l_72)))
            _fail(l_72);
          else
            k_72 = l_72;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_c_9, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_x_23), not_null(i_72)), term_w_23), not_null(k_72)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, h_5);
  {
    t = term_h_10;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm s_72 = NULL;
  s_72 = t;
  r_72 :
  if(match_cons(s_72, sym_Version_0))
    {
      ATerm u_72 = NULL,w_72 = NULL;
      ATerm y_23;
      y_23 = t;
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
      t = y_23;
      {
        ATerm x_72 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(u_72));
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
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm r_85 (ATerm))
{
  ATerm j_5 (ATerm t)
  {
    ATerm z_23 = t;
    int a_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(a_24);
      }
    else
      {
        t = z_23;
        {
          ATerm b_24 = t;
          int c_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(c_24);
            }
          else
            {
              t = b_24;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, j_5);
  t = r_85(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm c_73 = NULL;
  c_73 = t;
  t = SSL_table_create(not_null(c_73));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm g_73 = NULL;
  g_73 = t;
  {
    ATerm d_24;
    d_24 = t;
    {
      t = term_e_24;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_e_24, term_f_24, not_null(g_73));
          t = table_put_0(t);
        }
      }
    }
    t = d_24;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm k_73 = NULL;
  k_73 = t;
  t = SSL_table_destroy(not_null(k_73));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm q_73 = NULL;
  q_73 = t;
  t = SSL_exit(not_null(q_73));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm w_73 = NULL,x_73 = NULL,y_73 = NULL;
  w_73 = t;
  v_73 :
  if(((ATgetType(w_73) == AT_LIST) && ATisEmpty(w_73)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(w_73) == AT_LIST) && !(ATisEmpty(w_73))))
        {
          x_73 = ATgetFirst((ATermList) w_73);
          y_73 = (ATerm) ATgetNext((ATermList) w_73);
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
  ATerm g_24;
  g_24 = t;
  {
    ATerm f_74 = NULL;
    ATerm m_74 = NULL;
    ATerm h_24 = t;
    int i_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        LocalPopChoice(i_24);
      }
    else
      {
        t = h_24;
        {
          ATerm i_74 = NULL;
          ATerm j_74 = NULL;
          j_74 = t;
          if(((i_74 != NULL) && (i_74 != j_74)))
            _fail(j_74);
          else
            i_74 = j_74;
          t = (ATerm) ATinsert(ATempty, not_null(i_74));
        }
      }
    {
      m_74 = t;
      if(((f_74 != NULL) && (f_74 != m_74)))
        _fail(m_74);
      else
        f_74 = m_74;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_n_21, not_null(f_74));
      t = printnl_0(t);
    }
  }
  t = g_24;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm p_89 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm h_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm v_74 = NULL,w_74 = NULL,x_74 = NULL;
  x_74 = t;
  u_74 :
  if(((ATgetType(x_74) == AT_LIST) && !(ATisEmpty(x_74))))
    {
      v_74 = ATgetFirst((ATermList) x_74);
      w_74 = (ATerm) ATgetNext((ATermList) x_74);
      {
        ATerm a_75 = NULL;
        t = not_null(w_74);
        {
          ATerm j_24;
          j_24 = t;
          {
            ATerm b_75 = NULL,d_75 = NULL,f_75 = NULL;
            ATerm k_24;
            k_24 = t;
            {
              ATerm c_75 = NULL;
              t = i_0(t);
              {
                c_75 = t;
                if(((b_75 != NULL) && (b_75 != c_75)))
                  _fail(c_75);
                else
                  b_75 = c_75;
              }
            }
            t = k_24;
            {
              ATerm e_75 = NULL;
              t = not_null(v_74);
              {
                t = h_0(t);
                {
                  e_75 = t;
                  if(((d_75 != NULL) && (d_75 != e_75)))
                    _fail(e_75);
                  else
                    d_75 = e_75;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(b_75)), not_null(d_75));
                {
                  f_75 = t;
                  if(((a_75 != NULL) && (a_75 != f_75)))
                    _fail(f_75);
                  else
                    a_75 = f_75;
                }
              }
            }
          }
          t = j_24;
          {
            ATerm o_5 (ATerm t)
            {
              t = not_null(a_75);
              return(t);
            }
            t = reverse_acc_2(t, h_0, o_5);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(x_74) == AT_LIST) && ATisEmpty(x_74)))
        {
          {
            t = term_q_8;
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
  ATerm p_5 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, p_5);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm o_89 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm z_64 (ATerm))
{
  ATerm q_75 = NULL,r_75 = NULL;
  q_75 = t;
  p_75 :
  if(match_cons(q_75, sym_Program_1))
    {
      r_75 = ATgetArgument(q_75, 0);
      {
        ATerm a_76 = NULL,d_76 = NULL;
        ATerm b_76 = NULL;
        t = SSLgetAnnotations(not_null(q_75));
        {
          b_76 = t;
          if(((a_76 != NULL) && (a_76 != b_76)))
            _fail(b_76);
          else
            a_76 = b_76;
        }
        {
          t = not_null(r_75);
          {
            ATerm f_76 = NULL;
            t = z_64(t);
            {
              d_76 = t;
              {
                ATerm g_76 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(d_76)), not_null(a_76));
                {
                  g_76 = t;
                  if(((f_76 != NULL) && (f_76 != g_76)))
                    _fail(g_76);
                  else
                    f_76 = g_76;
                }
                t = not_null(f_76);
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
  ATerm p_76 = NULL;
  ATerm l_24 = t;
  int m_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_76 = NULL;
      t = term_v_23;
      {
        t = get_config_0(t);
        {
          q_76 = t;
          if(((p_76 != NULL) && (p_76 != q_76)))
            _fail(q_76);
          else
            p_76 = q_76;
        }
      }
      LocalPopChoice(m_24);
    }
  else
    {
      t = l_24;
      {
        ATerm q_5 (ATerm t)
        {
          ATerm r_5 (ATerm t)
          {
            ATerm r_76 = NULL;
            r_76 = t;
            if(((p_76 != NULL) && (p_76 != r_76)))
              _fail(r_76);
            else
              p_76 = r_76;
            return(t);
          }
          t = Program_1(t, r_5);
          return(t);
        }
        t = option_defined_1(t, q_5);
      }
    }
  {
    ATerm s_5 (ATerm t)
    {
      ATerm t_5 (ATerm t)
      {
        t = not_null(p_76);
        return(t);
      }
      t = short_description_1(t, t_5);
      t = echo_0(t);
      return(t);
    }
    t = try_1(t, s_5);
    {
      t = term_n_24;
      {
        t = echo_0(t);
        {
          t = term_q_24;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm y_5 (ATerm t)
                {
                  ATerm s_76 = NULL;
                  ATerm t_76 = NULL;
                  t_76 = t;
                  if(((s_76 != NULL) && (s_76 != t_76)))
                    _fail(t_76);
                  else
                    s_76 = t_76;
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(s_76)), term_r_24);
                    t = echo_0(t);
                  }
                  return(t);
                }
                t = map_1(t, y_5);
                {
                  ATerm c_6 (ATerm t)
                  {
                    ATerm u_76 = NULL;
                    ATerm v_76 = NULL;
                    ATerm i_6 (ATerm t)
                    {
                      t = not_null(p_76);
                      return(t);
                    }
                    t = long_description_1(t, i_6);
                    {
                      v_76 = t;
                      if(((u_76 != NULL) && (u_76 != v_76)))
                        _fail(v_76);
                      else
                        u_76 = v_76;
                    }
                    {
                      t = (ATerm) ATinsert(CheckATermList(not_null(u_76)), term_s_24);
                      t = echo_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, c_6);
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
  ATerm t_24;
  t_24 = t;
  {
    ATerm b_77 = NULL;
    ATerm c_77 = NULL;
    c_77 = t;
    if(((b_77 != NULL) && (b_77 != c_77)))
      _fail(c_77);
    else
      b_77 = c_77;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_c_9, (ATerm) ATinsert(ATempty, not_null(b_77)));
      t = printnl_0(t);
    }
  }
  t = t_24;
  return(t);
}
ATerm say_1 (ATerm t, ATerm q_84 (ATerm))
{
  ATerm u_24;
  u_24 = t;
  {
    t = q_84(t);
    t = debug_0(t);
  }
  t = u_24;
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm a_65 (ATerm))
{
  ATerm j_77 = NULL,k_77 = NULL;
  j_77 = t;
  i_77 :
  if(match_cons(j_77, sym_Undefined_1))
    {
      k_77 = ATgetArgument(j_77, 0);
      {
        ATerm n_77 = NULL,p_77 = NULL;
        ATerm o_77 = NULL;
        t = SSLgetAnnotations(not_null(j_77));
        {
          o_77 = t;
          if(((n_77 != NULL) && (n_77 != o_77)))
            _fail(o_77);
          else
            n_77 = o_77;
        }
        {
          t = not_null(k_77);
          {
            ATerm r_77 = NULL;
            t = a_65(t);
            {
              p_77 = t;
              {
                ATerm s_77 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(p_77)), not_null(n_77));
                {
                  s_77 = t;
                  if(((r_77 != NULL) && (r_77 != s_77)))
                    _fail(s_77);
                  else
                    r_77 = s_77;
                }
                t = not_null(r_77);
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
ATerm fetch_1 (ATerm t, ATerm a_74 (ATerm))
{
  ATerm x_77 (ATerm t)
  {
    ATerm v_24 = t;
    int w_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, a_74, _id);
        LocalPopChoice(w_24);
      }
    else
      {
        t = v_24;
        t = Cons_2(t, _id, x_77);
      }
    return(t);
  }
  t = x_77(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm o_88 (ATerm))
{
  t = fetch_1(t, o_88);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm c_78 = NULL;
  c_78 = t;
  b_78 :
  if(match_cons(c_78, sym_Help_0))
    {
      ATerm e_78 = NULL,g_78 = NULL;
      ATerm x_24;
      x_24 = t;
      {
        ATerm f_78 = NULL;
        t = SSLgetAnnotations(not_null(c_78));
        {
          f_78 = t;
          if(((e_78 != NULL) && (e_78 != f_78)))
            _fail(f_78);
          else
            e_78 = f_78;
        }
      }
      t = x_24;
      {
        ATerm h_78 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(e_78));
        {
          h_78 = t;
          if(((g_78 != NULL) && (g_78 != h_78)))
            _fail(h_78);
          else
            g_78 = h_78;
        }
        t = not_null(g_78);
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
  ATerm m_78 = NULL;
  m_78 = t;
  t = SSL_implode_string(not_null(m_78));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm y_24 = t;
  int z_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(z_24);
    }
  else
    {
      t = y_24;
      {
        ATerm r_78 = NULL,s_78 = NULL,t_78 = NULL;
        r_78 = t;
        q_78 :
        if(((ATgetType(r_78) == AT_LIST) && !(ATisEmpty(r_78))))
          {
            s_78 = ATgetFirst((ATermList) r_78);
            t_78 = (ATerm) ATgetNext((ATermList) r_78);
            {
              t = not_null(s_78);
              {
                ATerm j_6 (ATerm t)
                {
                  t = not_null(t_78);
                  t = concat_0(t);
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
      }
    }
  return(t);
}
ATerm conc_more_lists_0 (ATerm t)
{
  ATerm f_79 = NULL;
  ATerm h_79 = NULL;
  f_79 = t;
  {
    ATerm i_79 = NULL;
    ATerm k_79 = NULL,l_79 = NULL,m_79 = NULL;
    t = not_null(f_79);
    {
      i_79 = t;
      {
        t = SSL_explode_term(not_null(i_79));
        {
          k_79 = t;
          b_79 :
          if(match_cons(k_79, sym__2))
            {
              l_79 = ATgetArgument(k_79, 0);
              m_79 = ATgetArgument(k_79, 1);
              c_79 :
              if(match_string(l_79, ""))
                {
                  if(((h_79 != NULL) && (h_79 != m_79)))
                    _fail(m_79);
                  else
                    h_79 = m_79;
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
      t = not_null(h_79);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm g_74 (ATerm))
{
  ATerm u_79 (ATerm t)
  {
    ATerm a_25 = t;
    int b_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, u_79);
        LocalPopChoice(b_25);
      }
    else
      {
        t = a_25;
        {
          t = Nil_0(t);
          t = g_74(t);
        }
      }
    return(t);
  }
  t = u_79(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm x_79 = NULL,y_79 = NULL,z_79 = NULL;
  x_79 = t;
  w_79 :
  if(match_cons(x_79, sym__2))
    {
      y_79 = ATgetArgument(x_79, 0);
      z_79 = ATgetArgument(x_79, 1);
      {
        t = not_null(y_79);
        {
          ATerm k_6 (ATerm t)
          {
            t = not_null(z_79);
            return(t);
          }
          t = at_end_1(t, k_6);
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
  ATerm c_25 = t;
  int d_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      LocalPopChoice(d_25);
    }
  else
    {
      t = c_25;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm e_80 = NULL;
  e_80 = t;
  t = SSL_explode_string(not_null(e_80));
  return(t);
}
ATerm _2 (ATerm t, ATerm u_56 (ATerm), ATerm v_56 (ATerm))
{
  ATerm x_80 = NULL,y_80 = NULL,z_80 = NULL;
  x_80 = t;
  u_80 :
  if(match_cons(x_80, sym__2))
    {
      y_80 = ATgetArgument(x_80, 0);
      z_80 = ATgetArgument(x_80, 1);
      {
        ATerm d_81 = NULL,g_81 = NULL;
        ATerm e_81 = NULL;
        t = SSLgetAnnotations(not_null(x_80));
        {
          e_81 = t;
          if(((d_81 != NULL) && (d_81 != e_81)))
            _fail(e_81);
          else
            d_81 = e_81;
        }
        {
          t = not_null(y_80);
          {
            ATerm j_81 = NULL;
            t = u_56(t);
            {
              g_81 = t;
              {
                t = not_null(z_80);
                {
                  ATerm l_81 = NULL;
                  t = v_56(t);
                  {
                    j_81 = t;
                    {
                      ATerm m_81 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(g_81), not_null(j_81)), not_null(d_81));
                      {
                        m_81 = t;
                        if(((l_81 != NULL) && (l_81 != m_81)))
                          _fail(m_81);
                        else
                          l_81 = m_81;
                      }
                      t = not_null(l_81);
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
  ATerm w_81 = NULL,x_81 = NULL,y_81 = NULL;
  w_81 = t;
  t_81 :
  if(match_cons(w_81, sym__2))
    {
      x_81 = ATgetArgument(w_81, 0);
      y_81 = ATgetArgument(w_81, 1);
      {
        ATerm e_25;
        e_25 = t;
        t = SSL_printnl(not_null(x_81), not_null(y_81));
        t = e_25;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm p_84 (ATerm))
{
  ATerm f_25;
  f_25 = t;
  {
    ATerm e_82 = NULL,g_82 = NULL;
    ATerm g_25;
    g_25 = t;
    {
      ATerm f_82 = NULL;
      t = p_84(t);
      {
        f_82 = t;
        if(((e_82 != NULL) && (e_82 != f_82)))
          _fail(f_82);
        else
          e_82 = f_82;
      }
    }
    t = g_25;
    {
      ATerm h_82 = NULL;
      h_82 = t;
      if(((g_82 != NULL) && (g_82 != h_82)))
        _fail(h_82);
      else
        g_82 = h_82;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_c_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(g_82)), not_null(e_82)));
        t = printnl_0(t);
      }
    }
  }
  t = f_25;
  return(t);
}
ATerm map_1 (ATerm t, ATerm r_73 (ATerm))
{
  ATerm k_82 (ATerm t)
  {
    ATerm h_25 = t;
    int i_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(i_25);
      }
    else
      {
        t = h_25;
        t = Cons_2(t, r_73, k_82);
      }
    return(t);
  }
  t = k_82(t);
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm m_82 = NULL;
  m_82 = t;
  t = SSL_is_string(not_null(m_82));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm l_25 = t;
  int m_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(m_25);
    }
  else
    {
      t = l_25;
      {
        ATerm n_25 = t;
        int o_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_6 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, l_6);
            LocalPopChoice(o_25);
          }
        else
          {
            t = n_25;
            {
              ATerm v_82 = NULL,w_82 = NULL,x_82 = NULL;
              v_82 = t;
              u_82 :
              if(match_cons(v_82, sym_Path_1))
                {
                  w_82 = ATgetArgument(v_82, 0);
                  t = not_null(w_82);
                }
              else
                {
                  if(match_cons(v_82, sym_Var_1))
                    {
                      w_82 = ATgetArgument(v_82, 0);
                      {
                        t = not_null(w_82);
                        {
                          ATerm p_25 = t;
                          int v_25 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(v_25);
                            }
                          else
                            {
                              t = p_25;
                              {
                                ATerm o_6 (ATerm t)
                                {
                                  t = term_w_25;
                                  return(t);
                                }
                                t = debug_1(t, o_6);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(v_82, sym_Prefix_2))
                        {
                          w_82 = ATgetArgument(v_82, 0);
                          x_82 = ATgetArgument(v_82, 1);
                          {
                            ATerm d_83 = NULL,f_83 = NULL;
                            ATerm x_25;
                            x_25 = t;
                            {
                              ATerm e_83 = NULL;
                              t = not_null(w_82);
                              {
                                t = eval_config_0(t);
                                {
                                  e_83 = t;
                                  if(((d_83 != NULL) && (d_83 != e_83)))
                                    _fail(e_83);
                                  else
                                    d_83 = e_83;
                                }
                              }
                            }
                            t = x_25;
                            {
                              ATerm g_83 = NULL;
                              t = not_null(x_82);
                              {
                                t = eval_config_0(t);
                                {
                                  g_83 = t;
                                  if(((f_83 != NULL) && (f_83 != g_83)))
                                    _fail(g_83);
                                  else
                                    f_83 = g_83;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(d_83), not_null(f_83));
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
  ATerm o_83 = NULL;
  o_83 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_e_26, not_null(o_83));
    {
      t = table_get_0(t);
      {
        ATerm p_6 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm f_26;
            f_26 = t;
            {
              ATerm q_83 = NULL;
              ATerm r_83 = NULL;
              r_83 = t;
              if(((q_83 != NULL) && (q_83 != r_83)))
                _fail(r_83);
              else
                q_83 = r_83;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_e_26, not_null(o_83), not_null(q_83));
                t = table_put_0(t);
              }
            }
            t = f_26;
          }
          return(t);
        }
        t = try_1(t, p_6);
      }
    }
  }
  return(t);
}
ATerm try_1 (ATerm t, ATerm t_65 (ATerm))
{
  ATerm g_26 = t;
  int h_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = t_65(t);
      LocalPopChoice(h_26);
    }
  else
    {
      t = g_26;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm w_83 = NULL,x_83 = NULL,z_83 = NULL;
  w_83 = t;
  v_83 :
  if(match_cons(w_83, sym__2))
    {
      x_83 = ATgetArgument(w_83, 0);
      z_83 = ATgetArgument(w_83, 1);
      t = SSL_table_get(not_null(x_83), not_null(z_83));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm j_84 = NULL,k_84 = NULL,m_84 = NULL,n_84 = NULL;
  j_84 = t;
  h_84 :
  if(match_cons(j_84, sym__3))
    {
      k_84 = ATgetArgument(j_84, 0);
      m_84 = ATgetArgument(j_84, 1);
      n_84 = ATgetArgument(j_84, 2);
      {
        ATerm i_26;
        i_26 = t;
        {
          ATerm t_84 = NULL;
          ATerm u_84 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(k_84), not_null(m_84));
          {
            ATerm l_26 = t;
            int m_26 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(m_26);
              }
            else
              {
                t = l_26;
                t = (ATerm) ATempty;
              }
            {
              u_84 = t;
              if(((t_84 != NULL) && (t_84 != u_84)))
                _fail(u_84);
              else
                t_84 = u_84;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(k_84), not_null(m_84), (ATerm) ATinsert(CheckATermList(not_null(t_84)), not_null(n_84)));
            t = table_put_0(t);
          }
        }
        t = i_26;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm t_89 (ATerm))
{
  ATerm z_84 = NULL;
  ATerm a_85 = NULL;
  t = term_q_8;
  {
    t = t_89(t);
    {
      a_85 = t;
      if(((z_84 != NULL) && (z_84 != a_85)))
        _fail(a_85);
      else
        z_84 = a_85;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_o_24, term_p_24, not_null(z_84));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm))
{
  ATerm g_85 = NULL,h_85 = NULL,i_85 = NULL;
  g_85 = t;
  f_85 :
  if(match_string(g_85, "register-usage-info"))
    {
      t = register_usage_1(t, g_0);
    }
  else
    {
      if(((ATgetType(g_85) == AT_LIST) && !(ATisEmpty(g_85))))
        {
          h_85 = ATgetFirst((ATermList) g_85);
          i_85 = (ATerm) ATgetNext((ATermList) g_85);
          {
            ATerm l_85 = NULL;
            ATerm n_26;
            n_26 = t;
            {
              t = not_null(h_85);
              t = a_0(t);
            }
            t = n_26;
            {
              ATerm m_85 = NULL;
              t = term_q_8;
              {
                t = d_0(t);
                {
                  m_85 = t;
                  if(((l_85 != NULL) && (l_85 != m_85)))
                    _fail(m_85);
                  else
                    l_85 = m_85;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(i_85)), not_null(l_85));
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
  ATerm s_6 (ATerm t)
  {
    ATerm s_85 = NULL;
    s_85 = t;
    q_85 :
    if(!(match_string(s_85, "--help")))
      {
        if(!(match_string(s_85, "-h")))
          {
            if(!(match_string(s_85, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm t_6 (ATerm t)
  {
    t = term_p_26;
    {
      t = set_config_0(t);
      t = term_q_26;
    }
    return(t);
  }
  ATerm u_6 (ATerm t)
  {
    t = term_r_26;
    return(t);
  }
  t = Option_3(t, s_6, t_6, u_6);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm v_85 = NULL,w_85 = NULL,d_86 = NULL;
  v_85 = t;
  u_85 :
  if(((ATgetType(v_85) == AT_LIST) && !(ATisEmpty(v_85))))
    {
      w_85 = ATgetFirst((ATermList) v_85);
      d_86 = (ATerm) ATgetNext((ATermList) v_85);
      t = (ATerm) ATinsert(CheckATermList(not_null(d_86)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(w_85)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm d_58 (ATerm), ATerm e_58 (ATerm))
{
  ATerm n_86 = NULL,o_86 = NULL,p_86 = NULL;
  n_86 = t;
  m_86 :
  if(((ATgetType(n_86) == AT_LIST) && !(ATisEmpty(n_86))))
    {
      o_86 = ATgetFirst((ATermList) n_86);
      p_86 = (ATerm) ATgetNext((ATermList) n_86);
      {
        ATerm t_86 = NULL,v_86 = NULL;
        ATerm u_86 = NULL;
        t = SSLgetAnnotations(not_null(n_86));
        {
          u_86 = t;
          if(((t_86 != NULL) && (t_86 != u_86)))
            _fail(u_86);
          else
            t_86 = u_86;
        }
        {
          t = not_null(o_86);
          {
            ATerm x_86 = NULL;
            t = d_58(t);
            {
              v_86 = t;
              {
                t = not_null(p_86);
                {
                  ATerm z_86 = NULL;
                  t = e_58(t);
                  {
                    x_86 = t;
                    {
                      ATerm a_87 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(x_86)), not_null(v_86)), not_null(t_86));
                      {
                        a_87 = t;
                        if(((z_86 != NULL) && (z_86 != a_87)))
                          _fail(a_87);
                        else
                          z_86 = a_87;
                      }
                      t = not_null(z_86);
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
  ATerm k_87 = NULL;
  k_87 = t;
  j_87 :
  if(((ATgetType(k_87) == AT_LIST) && ATisEmpty(k_87)))
    {
      {
        ATerm n_87 = NULL,p_87 = NULL;
        ATerm s_26;
        s_26 = t;
        {
          ATerm o_87 = NULL;
          t = SSLgetAnnotations(not_null(k_87));
          {
            o_87 = t;
            if(((n_87 != NULL) && (n_87 != o_87)))
              _fail(o_87);
            else
              n_87 = o_87;
          }
        }
        t = s_26;
        {
          ATerm q_87 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(n_87));
          {
            q_87 = t;
            if(((p_87 != NULL) && (p_87 != q_87)))
              _fail(q_87);
            else
              p_87 = q_87;
          }
          t = not_null(p_87);
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
  ATerm w_87 = NULL,x_87 = NULL,y_87 = NULL;
  w_87 = t;
  v_87 :
  if(match_cons(w_87, sym__2))
    {
      x_87 = ATgetArgument(w_87, 0);
      y_87 = ATgetArgument(w_87, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_e_26, not_null(x_87), not_null(y_87));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm r_89 (ATerm))
{
  ATerm t_26;
  t_26 = t;
  {
    ATerm v_6 (ATerm t)
    {
      t = term_v_26;
      t = r_89(t);
      return(t);
    }
    t = try_1(t, v_6);
  }
  t = t_26;
  {
    ATerm w_6 (ATerm t)
    {
      ATerm g_88 = NULL;
      ATerm w_26;
      w_26 = t;
      {
        ATerm e_88 = NULL;
        ATerm f_88 = NULL;
        f_88 = t;
        if(((e_88 != NULL) && (e_88 != f_88)))
          _fail(f_88);
        else
          e_88 = f_88;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_v_23, not_null(e_88));
          t = set_config_0(t);
        }
      }
      t = w_26;
      {
        ATerm h_88 = NULL;
        h_88 = t;
        if(((g_88 != NULL) && (g_88 != h_88)))
          _fail(h_88);
        else
          g_88 = h_88;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(g_88));
      }
      return(t);
    }
    ATerm b_7 (ATerm t)
    {
      ATerm x_26 = t;
      int z_26 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm b_27 = t;
          int e_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(e_27);
            }
          else
            {
              t = b_27;
              {
                t = r_89(t);
                t = Cons_2(t, _id, b_7);
              }
            }
          LocalPopChoice(z_26);
        }
      else
        {
          t = x_26;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, w_6, b_7);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm n_88 = NULL,p_88 = NULL,q_88 = NULL;
  ATerm f_27;
  f_27 = t;
  {
    ATerm r_88 = NULL,s_88 = NULL,t_88 = NULL,u_88 = NULL;
    r_88 = t;
    m_88 :
    if(match_cons(r_88, sym__3))
      {
        s_88 = ATgetArgument(r_88, 0);
        t_88 = ATgetArgument(r_88, 1);
        u_88 = ATgetArgument(r_88, 2);
        {
          if(((n_88 != NULL) && (n_88 != s_88)))
            _fail(s_88);
          else
            n_88 = s_88;
          {
            if(((p_88 != NULL) && (p_88 != t_88)))
              _fail(t_88);
            else
              p_88 = t_88;
            {
              if(((q_88 != NULL) && (q_88 != u_88)))
                _fail(u_88);
              else
                q_88 = u_88;
              t = SSL_table_put(not_null(n_88), not_null(p_88), not_null(q_88));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = f_27;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm q_89 (ATerm))
{
  ATerm x_88 = NULL;
  ATerm g_27;
  g_27 = t;
  {
    t = term_h_27;
    t = table_put_0(t);
  }
  t = g_27;
  {
    ATerm c_7 (ATerm t)
    {
      ATerm i_27 = t;
      int j_27 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = q_89(t);
          LocalPopChoice(j_27);
        }
      else
        {
          t = i_27;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, c_7);
    {
      ATerm j_7 (ATerm t)
      {
        ATerm k_27 = t;
        int l_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_27;
            m_27 = t;
            {
              ATerm n_27 = t;
              int o_27 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_o_26;
                  t = get_config_0(t);
                  LocalPopChoice(o_27);
                }
              else
                {
                  t = n_27;
                  t = option_defined_1(t, Help_0);
                }
            }
            t = m_27;
            {
              t = system_usage_0(t);
              {
                t = term_h_10;
                t = exit_0(t);
              }
            }
            LocalPopChoice(l_27);
          }
        else
          {
            t = k_27;
            {
              ATerm k_7 (ATerm t)
              {
                ATerm l_7 (ATerm t)
                {
                  ATerm y_88 = NULL;
                  y_88 = t;
                  if(((x_88 != NULL) && (x_88 != y_88)))
                    _fail(y_88);
                  else
                    x_88 = y_88;
                  return(t);
                }
                t = Undefined_1(t, l_7);
                return(t);
              }
              t = option_defined_1(t, k_7);
              {
                ATerm m_7 (ATerm t)
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(x_88)), term_p_27);
                  return(t);
                }
                t = say_1(t, m_7);
                {
                  t = system_usage_0(t);
                  {
                    t = term_e_9;
                    t = exit_0(t);
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, j_7);
      {
        ATerm q_27;
        q_27 = t;
        {
          t = term_o_24;
          t = table_destroy_0(t);
        }
        t = q_27;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm x_85 (ATerm), ATerm y_85 (ATerm), ATerm z_85 (ATerm), ATerm a_86 (ATerm))
{
  t = parse_options_1(t, x_85);
  {
    t = store_options_0(t);
    {
      t = z_85(t);
      {
        ATerm r_27 = t;
        int u_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, y_85);
            LocalPopChoice(u_27);
          }
        else
          {
            t = r_27;
            {
              ATerm v_27 = t;
              int y_27 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = a_86(t);
                  t = report_success_0(t);
                  LocalPopChoice(y_27);
                }
              else
                {
                  t = v_27;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm option_wrap_2 (ATerm t, ATerm b_86 (ATerm), ATerm c_86 (ATerm))
{
  t = option_wrap_4(t, b_86, default_usage_0, _id, c_86);
  return(t);
}
ATerm io_Abox_2_text_0 (ATerm t)
{
  ATerm n_7 (ATerm t)
  {
    ATerm o_7 (ATerm t)
    {
      ATerm c_89 = NULL,e_89 = NULL;
      t = read_from_0(t);
      {
        ATerm d_89 = NULL;
        d_89 = t;
        if(((c_89 != NULL) && (c_89 != d_89)))
          _fail(d_89);
        else
          c_89 = d_89;
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(c_89), term_h_10);
          {
            t = try_abox2text_0(t);
            {
              t = Fst_0(t);
              {
                ATerm f_89 = NULL;
                f_89 = t;
                if(((e_89 != NULL) && (e_89 != f_89)))
                  _fail(f_89);
                else
                  e_89 = f_89;
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(e_89), term_s_24);
                  t = topdown_print_to_0(t);
                }
              }
            }
          }
        }
      }
      return(t);
    }
    t = xtc_io_1(t, o_7);
    return(t);
  }
  t = option_wrap_2(t, abox2text_options_0, n_7);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = io_Abox_2_text_0(t);
  return(t);
}
