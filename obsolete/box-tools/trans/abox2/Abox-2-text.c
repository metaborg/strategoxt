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
ATerm term_t_28;
ATerm term_z_27;
ATerm term_l_27;
ATerm term_g_27;
ATerm term_f_27;
ATerm term_e_27;
ATerm term_d_27;
ATerm term_q_26;
ATerm term_m_26;
ATerm term_x_24;
ATerm term_w_24;
ATerm term_v_24;
ATerm term_u_24;
ATerm term_t_24;
ATerm term_l_24;
ATerm term_k_24;
ATerm term_d_24;
ATerm term_c_24;
ATerm term_b_24;
ATerm term_n_23;
ATerm term_m_23;
ATerm term_l_23;
ATerm term_j_23;
ATerm term_b_23;
ATerm term_z_22;
ATerm term_y_22;
ATerm term_x_22;
ATerm term_w_22;
ATerm term_t_22;
ATerm term_n_22;
ATerm term_m_22;
ATerm term_l_22;
ATerm term_k_22;
ATerm term_j_22;
ATerm term_f_22;
ATerm term_e_22;
ATerm term_d_22;
ATerm term_c_22;
ATerm term_z_21;
ATerm term_y_21;
ATerm term_w_21;
ATerm term_v_21;
ATerm term_u_21;
ATerm term_t_21;
ATerm term_r_21;
ATerm term_q_21;
ATerm term_n_21;
ATerm term_i_21;
ATerm term_x_18;
ATerm term_w_18;
ATerm term_u_18;
ATerm term_g_18;
ATerm term_j_17;
ATerm term_i_17;
ATerm term_b_16;
ATerm term_j_14;
ATerm term_m_13;
ATerm term_f_13;
ATerm term_l_10;
ATerm term_i_10;
ATerm term_g_9;
ATerm term_f_9;
ATerm term_b_9;
ATerm term_s_8;
ATerm term_e_8;
ATerm term_d_8;
ATerm term_w_7;
ATerm term_u_7;
ATerm term_r_7;
ATerm term_p_7;
void init_constant_terms (void)
{
  ATprotect(&(term_p_7));
  term_p_7 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_r_7));
  term_r_7 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_u_7));
  term_u_7 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file>(file, mode)", 0, ATtrue));
  ATprotect(&(term_w_7));
  term_w_7 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_d_8));
  term_d_8 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_e_8));
  term_e_8 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_s_8));
  term_s_8 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_b_9));
  term_b_9 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_f_9));
  term_f_9 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_g_9));
  term_g_9 = (ATerm) ATmakeInt(32);
  ATprotect(&(term_i_10));
  term_i_10 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_l_10));
  term_l_10 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(ATmakeSymbol("** ERROR: R children of A box have different numbers of boxes", 0, ATtrue));
  ATprotect(&(term_i_17));
  term_i_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--width", 0, ATtrue));
  ATprotect(&(term_j_17));
  term_j_17 = (ATerm) ATmakeInt(80);
  ATprotect(&(term_g_18));
  term_g_18 = (ATerm) ATmakeAppl(ATmakeSymbol("** ERROR: invalid box: ", 0, ATtrue));
  ATprotect(&(term_u_18));
  term_u_18 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: file doesn't exist or doesn't contain a valid term: ", 0, ATtrue));
  ATprotect(&(term_w_18));
  term_w_18 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_x_18));
  term_x_18 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_i_21));
  term_i_21 = (ATerm) ATmakeAppl(sym__2, term_s_8, term_p_7);
  ATprotect(&(term_n_21));
  term_n_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_q_21));
  term_q_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_r_21));
  term_r_21 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_t_21));
  term_t_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_u_21));
  term_u_21 = (ATerm) ATmakeAppl(sym__2, term_t_21, term_d_8);
  ATprotect(&(term_v_21));
  term_v_21 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_w_21));
  term_w_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_y_21));
  term_y_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_z_21));
  term_z_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_c_22));
  term_c_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_d_22));
  term_d_22 = (ATerm) ATmakeAppl(sym__2, term_c_22, term_i_10);
  ATprotect(&(term_e_22));
  term_e_22 = (ATerm) ATmakeAppl(sym_Verbose_1, term_i_10);
  ATprotect(&(term_f_22));
  term_f_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_j_22));
  term_j_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_k_22));
  term_k_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_l_22));
  term_l_22 = (ATerm) ATmakeAppl(sym__2, term_k_22, term_d_8);
  ATprotect(&(term_m_22));
  term_m_22 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_n_22));
  term_n_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_t_22));
  term_t_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_w_22));
  term_w_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_x_22));
  term_x_22 = (ATerm) ATmakeAppl(sym__2, term_w_22, term_d_8);
  ATprotect(&(term_y_22));
  term_y_22 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_z_22));
  term_z_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_b_23));
  term_b_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_j_23));
  term_j_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-w int | --width int       Specifies max width of output.", 0, ATtrue));
  ATprotect(&(term_l_23));
  term_l_23 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_m_23));
  term_m_23 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_n_23));
  term_n_23 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_b_24));
  term_b_24 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_c_24));
  term_c_24 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_d_24));
  term_d_24 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_k_24));
  term_k_24 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_l_24));
  term_l_24 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_t_24));
  term_t_24 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_u_24));
  term_u_24 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_v_24));
  term_v_24 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_w_24));
  term_w_24 = (ATerm) ATmakeAppl(sym__2, term_u_24, term_v_24);
  ATprotect(&(term_x_24));
  term_x_24 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_m_26));
  term_m_26 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_q_26));
  term_q_26 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_d_27));
  term_d_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_e_27));
  term_e_27 = (ATerm) ATmakeAppl(sym__2, term_d_27, term_d_8);
  ATprotect(&(term_f_27));
  term_f_27 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_g_27));
  term_g_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_l_27));
  term_l_27 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_z_27));
  term_z_27 = (ATerm) ATmakeAppl(sym__3, term_u_24, term_v_24, (ATerm) ATempty);
  ATprotect(&(term_t_28));
  term_t_28 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm close_file_0 (ATerm);
ATerm print_0 (ATerm);
ATerm topdown_1 (ATerm, ATerm b_67 (ATerm));
ATerm assert_1 (ATerm, ATerm v_83 (ATerm));
ATerm obsolete_1 (ATerm, ATerm j_84 (ATerm));
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
ATerm hv_in_new_vbox_2 (ATerm, ATerm j_65 (ATerm), ATerm k_65 (ATerm));
ATerm hv_add_to_hbox_1 (ATerm, ATerm i_65 (ATerm));
ATerm FoldL_1 (ATerm, ATerm s_80 (ATerm));
ATerm foldl_1 (ATerm, ATerm x_79 (ATerm));
ATerm is_length_0 (ATerm);
ATerm string_length_0 (ATerm);
ATerm vs_length_0 (ATerm);
ATerm vs_text_0 (ATerm);
ATerm SOpt_2 (ATerm, ATerm l_59 (ATerm), ATerm m_59 (ATerm));
ATerm SOpt_value_1 (ATerm, ATerm l_65 (ATerm));
ATerm hs_length_0 (ATerm);
ATerm hs_text_0 (ATerm);
ATerm subt_0 (ATerm);
ATerm Nil_T_0 (ATerm);
ATerm Cons_T_2 (ATerm, ATerm q_0 (ATerm), ATerm t_0 (ATerm));
ATerm thread_map_1 (ATerm, ATerm i_80 (ATerm));
ATerm H_2 (ATerm, ATerm f_59 (ATerm), ATerm g_59 (ATerm));
ATerm is_real_hbox_0 (ATerm);
ATerm filter_1 (ATerm, ATerm v_80 (ATerm));
ATerm do_vbox_children_0 (ATerm);
ATerm is_real_vbox_0 (ATerm);
ATerm split_Cons_0 (ATerm);
ATerm matrix_transpose_0 (ATerm);
ATerm align_left_0 (ATerm);
ATerm align_right_0 (ATerm);
ATerm while_not_2 (ATerm, ATerm s_66 (ATerm), ATerm t_66 (ATerm));
ATerm for_3 (ATerm, ATerm v_66 (ATerm), ATerm w_66 (ATerm), ATerm x_66 (ATerm));
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
ATerm list_accum_1 (ATerm, ATerm l_83 (ATerm));
ATerm list_max_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm MkCons_0 (ATerm);
ATerm flatten_list_0 (ATerm);
ATerm UnZip2_0 (ATerm);
ATerm UnZip3_0 (ATerm);
ATerm UnZip1_0 (ATerm);
ATerm unzip_1 (ATerm, ATerm p_75 (ATerm));
ATerm unzip_0 (ATerm);
ATerm do_A_column_0 (ATerm);
ATerm Zip3_0 (ATerm);
ATerm Zip2_0 (ATerm);
ATerm Zip1_0 (ATerm);
ATerm genzip_4 (ATerm, ATerm f_75 (ATerm), ATerm g_75 (ATerm), ATerm h_75 (ATerm), ATerm i_75 (ATerm));
ATerm zip_1 (ATerm, ATerm k_75 (ATerm));
ATerm zip_0 (ATerm);
ATerm length_0 (ATerm);
ATerm HdMember_p__2 (ATerm, ATerm f_79 (ATerm), ATerm g_79 (ATerm));
ATerm union_1 (ATerm, ATerm b_79 (ATerm));
ATerm union_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm u_79 (ATerm), ATerm v_79 (ATerm), ATerm w_79 (ATerm));
ATerm make_set_0 (ATerm);
ATerm warn_not_matrix_0 (ATerm);
ATerm R_2 (ATerm, ATerm x_58 (ATerm), ATerm y_58 (ATerm));
ATerm split_2 (ATerm, ATerm h_81 (ATerm), ATerm i_81 (ATerm));
ATerm construct_rows_0 (ATerm);
ATerm Last_0 (ATerm);
ATerm last_0 (ATerm);
ATerm eq_0 (ATerm);
ATerm elem_1 (ATerm, ATerm m_73 (ATerm));
ATerm elem_0 (ATerm);
ATerm at_suffix_1 (ATerm, ATerm x_73 (ATerm));
ATerm split_fetch_1 (ATerm, ATerm q_73 (ATerm));
ATerm list_tokenize_1 (ATerm, ATerm n_82 (ATerm));
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
ATerm end_scope_1 (ATerm, ATerm s_83 (ATerm));
ATerm remove_file_0 (ATerm);
ATerm restore_always_2 (ATerm, ATerm x_65 (ATerm), ATerm y_65 (ATerm));
ATerm begin_scope_1 (ATerm, ATerm r_83 (ATerm));
ATerm xtc_temp_files_1 (ATerm, ATerm k_93 (ATerm));
ATerm xtc_io_1 (ATerm, ATerm l_93 (ATerm));
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
ATerm foldr_2 (ATerm, ATerm s_79 (ATerm), ATerm t_79 (ATerm));
ATerm crush_2 (ATerm, ATerm q_78 (ATerm), ATerm r_78 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm y_86 (ATerm));
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm e_85 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm c_89 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm h_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm b_89 (ATerm));
ATerm Program_1 (ATerm, ATerm t_64 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm d_84 (ATerm));
ATerm Undefined_1 (ATerm, ATerm u_64 (ATerm));
ATerm fetch_1 (ATerm, ATerm n_73 (ATerm));
ATerm option_defined_1 (ATerm, ATerm b_88 (ATerm));
ATerm Help_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm t_73 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm _2 (ATerm, ATerm o_56 (ATerm), ATerm p_56 (ATerm));
ATerm conc_strings_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm debug_1 (ATerm, ATerm c_84 (ATerm));
ATerm map_1 (ATerm, ATerm e_73 (ATerm));
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm try_1 (ATerm, ATerm n_65 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm g_89 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm x_57 (ATerm), ATerm y_57 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm e_89 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm d_89 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm k_85 (ATerm), ATerm l_85 (ATerm), ATerm m_85 (ATerm), ATerm n_85 (ATerm));
ATerm option_wrap_2 (ATerm, ATerm o_85 (ATerm), ATerm p_85 (ATerm));
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
  ATerm c_2 = NULL,r_2 = NULL,s_2 = NULL;
  c_2 = t;
  b_2 :
  if(match_cons(c_2, sym__2))
    {
      r_2 = ATgetArgument(c_2, 0);
      s_2 = ATgetArgument(c_2, 1);
      {
        ATerm e_5;
        e_5 = t;
        t = SSL_print(not_null(r_2), not_null(s_2));
        t = e_5;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm topdown_1 (ATerm t, ATerm b_67 (ATerm))
{
  t = b_67(t);
  {
    ATerm b_0 (ATerm t)
    {
      t = topdown_1(t, b_67);
      return(t);
    }
    t = _all(t, b_0);
  }
  return(t);
}
ATerm assert_1 (ATerm t, ATerm v_83 (ATerm))
{
  ATerm x_3 = NULL,y_3 = NULL,z_3 = NULL;
  x_3 = t;
  w_3 :
  if(match_cons(x_3, sym__2))
    {
      y_3 = ATgetArgument(x_3, 0);
      z_3 = ATgetArgument(x_3, 1);
      {
        ATerm c_4 = NULL,d_4 = NULL,e_4 = NULL;
        ATerm g_7;
        g_7 = t;
        {
          ATerm f_4 = NULL;
          ATerm g_4 = NULL,h_4 = NULL,i_4 = NULL;
          t = v_83(t);
          {
            f_4 = t;
            {
              if(((c_4 != NULL) && (c_4 != f_4)))
                _fail(f_4);
              else
                c_4 = f_4;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(c_4), not_null(y_3), not_null(z_3));
                {
                  t = table_push_0(t);
                  {
                    ATerm h_7 = t;
                    int o_7 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(c_4), term_p_7);
                        t = table_get_0(t);
                        LocalPopChoice(o_7);
                      }
                    else
                      {
                        t = h_7;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      g_4 = t;
                      v_3 :
                      if(((ATgetType(g_4) == AT_LIST) && !(ATisEmpty(g_4))))
                        {
                          h_4 = ATgetFirst((ATermList) g_4);
                          i_4 = (ATerm) ATgetNext((ATermList) g_4);
                          {
                            if(((d_4 != NULL) && (d_4 != h_4)))
                              _fail(h_4);
                            else
                              d_4 = h_4;
                            {
                              if(((e_4 != NULL) && (e_4 != i_4)))
                                _fail(i_4);
                              else
                                e_4 = i_4;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(c_4), term_p_7, (ATerm) ATinsert(CheckATermList(not_null(e_4)), (ATerm) ATinsert(CheckATermList(not_null(d_4)), not_null(y_3))));
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
        t = g_7;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm obsolete_1 (ATerm t, ATerm j_84 (ATerm))
{
  ATerm q_7;
  q_7 = t;
  {
    t = j_84(t);
    {
      ATerm c_0 (ATerm t)
      {
        t = term_r_7;
        return(t);
      }
      t = debug_1(t, c_0);
    }
  }
  t = q_7;
  return(t);
}
ATerm open_file_0 (ATerm t)
{
  ATerm q_4 = NULL,r_4 = NULL;
  ATerm s_7 = t;
  int t_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_4 = NULL,t_4 = NULL,u_4 = NULL;
      s_4 = t;
      n_4 :
      if(match_cons(s_4, sym__2))
        {
          t_4 = ATgetArgument(s_4, 0);
          u_4 = ATgetArgument(s_4, 1);
          {
            if(((r_4 != NULL) && (r_4 != t_4)))
              _fail(t_4);
            else
              r_4 = t_4;
            if(((q_4 != NULL) && (q_4 != u_4)))
              _fail(u_4);
            else
              q_4 = u_4;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(t_7);
      t = SSL_open_file(not_null(r_4), not_null(q_4));
    }
  else
    {
      t = s_7;
      {
        ATerm v_4 = NULL;
        ATerm w_4 = NULL;
        ATerm e_0 (ATerm t)
        {
          t = term_u_7;
          return(t);
        }
        t = obsolete_1(t, e_0);
        {
          v_4 = t;
          {
            if(((r_4 != NULL) && (r_4 != v_4)))
              _fail(v_4);
            else
              r_4 = v_4;
            {
              ATerm v_7;
              v_7 = t;
              {
                ATerm x_4 = NULL;
                t = term_w_7;
                {
                  x_4 = t;
                  if(((w_4 != NULL) && (w_4 != x_4)))
                    _fail(x_4);
                  else
                    w_4 = x_4;
                }
              }
              t = v_7;
              t = SSL_open_file(not_null(r_4), not_null(w_4));
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
  ATerm c_5 = NULL;
  ATerm d_5 = NULL;
  t = term_d_8;
  {
    t = new_0(t);
    {
      d_5 = t;
      if(((c_5 != NULL) && (c_5 != d_5)))
        _fail(d_5);
      else
        c_5 = d_5;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(c_5), term_e_8);
    {
      t = conc_strings_0(t);
      {
        ATerm f_8 = t;
        int q_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = file_exists_0(t);
            t = new_file_0(t);
            LocalPopChoice(q_8);
          }
        else
          {
            t = f_8;
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
  ATerm h_5 = NULL;
  t = new_file_0(t);
  {
    h_5 = t;
    {
      ATerm r_8;
      r_8 = t;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(h_5), term_w_7);
        {
          t = open_file_0(t);
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(h_5), term_d_8);
            {
              ATerm f_0 (ATerm t)
              {
                t = term_s_8;
                return(t);
              }
              t = assert_1(t, f_0);
            }
          }
        }
      }
      t = r_8;
    }
  }
  return(t);
}
ATerm topdown_print_to_0 (ATerm t)
{
  ATerm n_5 = NULL;
  ATerm p_5 = NULL;
  n_5 = t;
  {
    ATerm q_5 = NULL;
    t = xtc_new_file_0(t);
    {
      q_5 = t;
      {
        if(((p_5 != NULL) && (p_5 != q_5)))
          _fail(q_5);
        else
          p_5 = q_5;
        {
          t = not_null(n_5);
          {
            ATerm n_0 (ATerm t)
            {
              ATerm t_8 = t;
              int u_8 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = is_string_0(t);
                  {
                    ATerm v_8;
                    v_8 = t;
                    {
                      ATerm r_5 = NULL;
                      ATerm s_5 = NULL;
                      s_5 = t;
                      if(((r_5 != NULL) && (r_5 != s_5)))
                        _fail(s_5);
                      else
                        r_5 = s_5;
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(p_5), (ATerm) ATinsert(ATempty, not_null(r_5)));
                        t = print_0(t);
                      }
                    }
                    t = v_8;
                  }
                  LocalPopChoice(u_8);
                }
              else
                {
                  t = t_8;
                  {
                  }
                }
              return(t);
            }
            t = topdown_1(t, n_0);
            {
              t = not_null(p_5);
              t = close_file_0(t);
            }
          }
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(p_5));
  }
  return(t);
}
ATerm Fst_0 (ATerm t)
{
  ATerm c_6 = NULL;
  ATerm e_6 = NULL,f_6 = NULL;
  c_6 = t;
  {
    ATerm g_6 = NULL;
    ATerm i_6 = NULL,j_6 = NULL,k_6 = NULL,l_6 = NULL,m_6 = NULL;
    t = not_null(c_6);
    {
      g_6 = t;
      {
        t = SSL_explode_term(not_null(g_6));
        {
          i_6 = t;
          z_5 :
          if(match_cons(i_6, sym__2))
            {
              j_6 = ATgetArgument(i_6, 0);
              k_6 = ATgetArgument(i_6, 1);
              a_6 :
              if(match_string(j_6, ""))
                {
                  b_6 :
                  if(((ATgetType(k_6) == AT_LIST) && !(ATisEmpty(k_6))))
                    {
                      l_6 = ATgetFirst((ATermList) k_6);
                      m_6 = (ATerm) ATgetNext((ATermList) k_6);
                      {
                        if(((f_6 != NULL) && (f_6 != l_6)))
                          _fail(l_6);
                        else
                          f_6 = l_6;
                        if(((e_6 != NULL) && (e_6 != m_6)))
                          _fail(m_6);
                        else
                          e_6 = m_6;
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
    t = not_null(f_6);
  }
  return(t);
}
ATerm error_0 (ATerm t)
{
  ATerm w_8;
  w_8 = t;
  {
    ATerm r_6 = NULL;
    ATerm s_6 = NULL;
    s_6 = t;
    if(((r_6 != NULL) && (r_6 != s_6)))
      _fail(s_6);
    else
      r_6 = s_6;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_b_9, not_null(r_6));
      t = printnl_0(t);
    }
  }
  t = w_8;
  return(t);
}
ATerm fatal_error_0 (ATerm t)
{
  ATerm c_9;
  c_9 = t;
  {
    t = error_0(t);
    {
      t = term_f_9;
      t = exit_0(t);
    }
  }
  t = c_9;
  return(t);
}
ATerm is_text_0 (ATerm t)
{
  ATerm v_6 = NULL;
  ATerm w_6 = NULL;
  t = is_length_0(t);
  {
    w_6 = t;
    if(((v_6 != NULL) && (v_6 != w_6)))
      _fail(w_6);
    else
      v_6 = w_6;
  }
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(v_6), term_g_9);
    t = copy_char_0(t);
  }
  return(t);
}
ATerm vertical_sep_0 (ATerm t)
{
  ATerm d_7 = NULL,e_7 = NULL,f_7 = NULL;
  d_7 = t;
  c_7 :
  if(match_cons(d_7, sym__2))
    {
      e_7 = ATgetArgument(d_7, 0);
      f_7 = ATgetArgument(d_7, 1);
      {
        ATerm i_7 = NULL,j_7 = NULL,m_7 = NULL;
        ATerm h_9;
        h_9 = t;
        {
          ATerm k_7 = NULL;
          t = not_null(e_7);
          {
            ATerm l_7 = NULL;
            t = vs_text_0(t);
            {
              k_7 = t;
              {
                if(((i_7 != NULL) && (i_7 != k_7)))
                  _fail(k_7);
                else
                  i_7 = k_7;
                {
                  t = not_null(e_7);
                  {
                    t = is_text_0(t);
                    {
                      l_7 = t;
                      if(((j_7 != NULL) && (j_7 != l_7)))
                        _fail(l_7);
                      else
                        j_7 = l_7;
                    }
                  }
                }
              }
            }
          }
        }
        t = h_9;
        {
          ATerm n_7 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(f_7), term_g_9);
          {
            t = copy_char_0(t);
            {
              n_7 = t;
              if(((m_7 != NULL) && (m_7 != n_7)))
                _fail(n_7);
              else
                m_7 = n_7;
            }
          }
          {
            t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(m_7)), not_null(j_7)), not_null(i_7));
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
  ATerm z_7 = NULL,a_8 = NULL,b_8 = NULL,c_8 = NULL;
  z_7 = t;
  y_7 :
  if(match_cons(z_7, sym__3))
    {
      a_8 = ATgetArgument(z_7, 0);
      b_8 = ATgetArgument(z_7, 1);
      c_8 = ATgetArgument(z_7, 2);
      {
        ATerm g_8 = NULL,h_8 = NULL,i_8 = NULL;
        ATerm j_8 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, not_null(a_8), not_null(c_8));
        {
          ATerm k_8 = NULL,l_8 = NULL,m_8 = NULL;
          t = vertical_sep_0(t);
          {
            j_8 = t;
            {
              if(((h_8 != NULL) && (h_8 != j_8)))
                _fail(j_8);
              else
                h_8 = j_8;
              {
                t = not_null(b_8);
                {
                  t = last_0(t);
                  {
                    k_8 = t;
                    x_7 :
                    if(match_cons(k_8, sym__2))
                      {
                        l_8 = ATgetArgument(k_8, 0);
                        m_8 = ATgetArgument(k_8, 1);
                        {
                          ATerm n_8 = NULL,p_8 = NULL;
                          if(((g_8 != NULL) && (g_8 != m_8)))
                            _fail(m_8);
                          else
                            g_8 = m_8;
                          {
                            ATerm o_8 = NULL;
                            t = not_null(b_8);
                            {
                              t = map_1(t, Fst_0);
                              {
                                o_8 = t;
                                if(((n_8 != NULL) && (n_8 != o_8)))
                                  _fail(o_8);
                                else
                                  n_8 = o_8;
                              }
                            }
                            {
                              t = (ATerm) ATmakeAppl(sym__2, not_null(h_8), not_null(n_8));
                              {
                                t = separate_by_0(t);
                                {
                                  p_8 = t;
                                  if(((i_8 != NULL) && (i_8 != p_8)))
                                    _fail(p_8);
                                  else
                                    i_8 = p_8;
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
        t = (ATerm) ATmakeAppl(sym__2, not_null(i_8), not_null(g_8));
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
  ATerm y_8 = NULL,z_8 = NULL,a_9 = NULL;
  y_8 = t;
  x_8 :
  if(match_cons(y_8, sym__2))
    {
      z_8 = ATgetArgument(y_8, 0);
      a_9 = ATgetArgument(y_8, 1);
      {
        t = not_null(a_9);
        {
          ATerm i_9 = t;
          int j_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(j_9);
            }
          else
            {
              t = i_9;
              {
                ATerm o_0 (ATerm t)
                {
                  ATerm k_9 = t;
                  int m_9 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = Nil_0(t);
                      LocalPopChoice(m_9);
                    }
                  else
                    {
                      t = k_9;
                      {
                        ATerm d_9 = NULL;
                        t = Cons_2(t, _id, o_0);
                        {
                          ATerm e_9 = NULL;
                          e_9 = t;
                          if(((d_9 != NULL) && (d_9 != e_9)))
                            _fail(e_9);
                          else
                            d_9 = e_9;
                          t = (ATerm) ATinsert(CheckATermList(not_null(d_9)), not_null(z_8));
                        }
                      }
                    }
                  return(t);
                }
                t = Cons_2(t, _id, o_0);
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
ATerm hv_in_new_vbox_2 (ATerm t, ATerm j_65 (ATerm), ATerm k_65 (ATerm))
{
  ATerm p_9 = NULL,q_9 = NULL,r_9 = NULL;
  p_9 = t;
  o_9 :
  if(match_cons(p_9, sym__2))
    {
      q_9 = ATgetArgument(p_9, 0);
      r_9 = ATgetArgument(p_9, 1);
      {
        ATerm u_9 = NULL,v_9 = NULL,b_10 = NULL;
        ATerm n_9;
        n_9 = t;
        {
          ATerm w_9 = NULL,y_9 = NULL,z_9 = NULL,a_10 = NULL;
          ATerm x_9 = NULL;
          t = term_d_8;
          {
            t = k_65(t);
            {
              x_9 = t;
              if(((w_9 != NULL) && (w_9 != x_9)))
                _fail(x_9);
              else
                w_9 = x_9;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(q_9), not_null(w_9));
            {
              t = try_abox2text_0(t);
              {
                y_9 = t;
                l_9 :
                if(match_cons(y_9, sym__2))
                  {
                    z_9 = ATgetArgument(y_9, 0);
                    a_10 = ATgetArgument(y_9, 1);
                    {
                      if(((u_9 != NULL) && (u_9 != z_9)))
                        _fail(z_9);
                      else
                        u_9 = z_9;
                      if(((v_9 != NULL) && (v_9 != a_10)))
                        _fail(a_10);
                      else
                        v_9 = a_10;
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
        t = n_9;
        {
          ATerm c_10 = NULL,e_10 = NULL;
          ATerm d_10 = NULL;
          t = term_d_8;
          {
            t = j_65(t);
            {
              d_10 = t;
              if(((c_10 != NULL) && (c_10 != d_10)))
                _fail(d_10);
              else
                c_10 = d_10;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(v_9), not_null(c_10));
            {
              t = add_0(t);
              {
                e_10 = t;
                if(((b_10 != NULL) && (b_10 != e_10)))
                  _fail(e_10);
                else
                  b_10 = e_10;
              }
            }
          }
          t = (ATerm) ATinsert(CheckATermList(not_null(r_9)), (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, not_null(u_9)), not_null(b_10)));
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm hv_add_to_hbox_1 (ATerm t, ATerm i_65 (ATerm))
{
  ATerm t_10 = NULL,u_10 = NULL,v_10 = NULL,w_10 = NULL,x_10 = NULL,y_10 = NULL,z_10 = NULL;
  t_10 = t;
  q_10 :
  if(match_cons(t_10, sym__2))
    {
      u_10 = ATgetArgument(t_10, 0);
      v_10 = ATgetArgument(t_10, 1);
      r_10 :
      if(((ATgetType(v_10) == AT_LIST) && !(ATisEmpty(v_10))))
        {
          w_10 = ATgetFirst((ATermList) v_10);
          z_10 = (ATerm) ATgetNext((ATermList) v_10);
          s_10 :
          if(match_cons(w_10, sym__2))
            {
              x_10 = ATgetArgument(w_10, 0);
              y_10 = ATgetArgument(w_10, 1);
              {
                ATerm e_11 = NULL,f_11 = NULL,l_11 = NULL;
                ATerm s_9;
                s_9 = t;
                {
                  ATerm g_11 = NULL,h_11 = NULL,i_11 = NULL;
                  t = (ATerm) ATmakeAppl(sym__2, not_null(u_10), not_null(y_10));
                  {
                    t = try_abox2text_0(t);
                    {
                      g_11 = t;
                      n_10 :
                      if(match_cons(g_11, sym__2))
                        {
                          h_11 = ATgetArgument(g_11, 0);
                          i_11 = ATgetArgument(g_11, 1);
                          {
                            ATerm j_11 = NULL;
                            if(((e_11 != NULL) && (e_11 != h_11)))
                              _fail(h_11);
                            else
                              e_11 = h_11;
                            {
                              if(((f_11 != NULL) && (f_11 != i_11)))
                                _fail(i_11);
                              else
                                f_11 = i_11;
                              {
                                ATerm k_11 = NULL;
                                t = term_d_8;
                                {
                                  t = get_width_0(t);
                                  {
                                    k_11 = t;
                                    if(((j_11 != NULL) && (j_11 != k_11)))
                                      _fail(k_11);
                                    else
                                      j_11 = k_11;
                                  }
                                }
                                {
                                  t = (ATerm) ATmakeAppl(sym__2, not_null(f_11), not_null(j_11));
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
                t = s_9;
                {
                  ATerm m_11 = NULL,o_11 = NULL;
                  ATerm n_11 = NULL;
                  t = term_d_8;
                  {
                    t = i_65(t);
                    {
                      n_11 = t;
                      if(((m_11 != NULL) && (m_11 != n_11)))
                        _fail(n_11);
                      else
                        m_11 = n_11;
                    }
                  }
                  {
                    t = (ATerm) ATmakeAppl(sym__2, not_null(f_11), not_null(m_11));
                    {
                      t = add_0(t);
                      {
                        o_11 = t;
                        if(((l_11 != NULL) && (l_11 != o_11)))
                          _fail(o_11);
                        else
                          l_11 = o_11;
                      }
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(z_10)), (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(x_10)), not_null(e_11)), not_null(l_11)));
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
ATerm FoldL_1 (ATerm t, ATerm s_80 (ATerm))
{
  ATerm y_11 = NULL,z_11 = NULL,a_12 = NULL,b_12 = NULL,c_12 = NULL;
  y_11 = t;
  w_11 :
  if(match_cons(y_11, sym__2))
    {
      z_11 = ATgetArgument(y_11, 0);
      c_12 = ATgetArgument(y_11, 1);
      x_11 :
      if(((ATgetType(z_11) == AT_LIST) && !(ATisEmpty(z_11))))
        {
          a_12 = ATgetFirst((ATermList) z_11);
          b_12 = (ATerm) ATgetNext((ATermList) z_11);
          {
            ATerm g_12 = NULL;
            ATerm h_12 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(a_12), not_null(c_12));
            {
              t = s_80(t);
              {
                h_12 = t;
                if(((g_12 != NULL) && (g_12 != h_12)))
                  _fail(h_12);
                else
                  g_12 = h_12;
              }
            }
            t = (ATerm) ATmakeAppl(sym__2, not_null(b_12), not_null(g_12));
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
ATerm foldl_1 (ATerm t, ATerm x_79 (ATerm))
{
  ATerm r_12 (ATerm t)
  {
    ATerm t_9 = t;
    int f_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_12 = NULL,o_12 = NULL,p_12 = NULL;
        n_12 = t;
        l_12 :
        if(match_cons(n_12, sym__2))
          {
            o_12 = ATgetArgument(n_12, 0);
            p_12 = ATgetArgument(n_12, 1);
            m_12 :
            if(((ATgetType(o_12) == AT_LIST) && ATisEmpty(o_12)))
              {
                t = not_null(p_12);
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
        LocalPopChoice(f_10);
      }
    else
      {
        t = t_9;
        {
          t = FoldL_1(t, x_79);
          t = r_12(t);
        }
      }
    return(t);
  }
  t = r_12(t);
  return(t);
}
ATerm is_length_0 (ATerm t)
{
  ATerm g_10 = t;
  int h_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_0 (ATerm t)
      {
        ATerm u_12 = NULL;
        u_12 = t;
        t_12 :
        if(!(match_cons(u_12, sym_IS_0)))
          {
            _fail(t);
          }
        return(t);
      }
      t = SOpt_value_1(t, p_0);
      LocalPopChoice(h_10);
    }
  else
    {
      t = g_10;
      t = term_i_10;
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
      ATerm r_0 (ATerm t)
      {
        ATerm w_12 = NULL;
        w_12 = t;
        v_12 :
        if(!(match_cons(w_12, sym_VS_0)))
          {
            _fail(t);
          }
        return(t);
      }
      t = SOpt_value_1(t, r_0);
      LocalPopChoice(k_10);
    }
  else
    {
      t = j_10;
      t = term_i_10;
    }
  return(t);
}
ATerm vs_text_0 (ATerm t)
{
  ATerm y_12 = NULL;
  ATerm z_12 = NULL;
  t = vs_length_0(t);
  {
    t = inc_0(t);
    {
      z_12 = t;
      if(((y_12 != NULL) && (y_12 != z_12)))
        _fail(z_12);
      else
        y_12 = z_12;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(y_12), term_l_10);
    t = copy_char_0(t);
  }
  return(t);
}
ATerm SOpt_2 (ATerm t, ATerm l_59 (ATerm), ATerm m_59 (ATerm))
{
  ATerm h_13 = NULL,i_13 = NULL,j_13 = NULL;
  h_13 = t;
  g_13 :
  if(match_cons(h_13, sym_SOpt_2))
    {
      i_13 = ATgetArgument(h_13, 0);
      j_13 = ATgetArgument(h_13, 1);
      {
        ATerm n_13 = NULL,p_13 = NULL;
        ATerm o_13 = NULL;
        t = SSLgetAnnotations(not_null(h_13));
        {
          o_13 = t;
          if(((n_13 != NULL) && (n_13 != o_13)))
            _fail(o_13);
          else
            n_13 = o_13;
        }
        {
          t = not_null(i_13);
          {
            ATerm r_13 = NULL;
            t = l_59(t);
            {
              p_13 = t;
              {
                t = not_null(j_13);
                {
                  ATerm t_13 = NULL;
                  t = m_59(t);
                  {
                    r_13 = t;
                    {
                      ATerm u_13 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SOpt_2, not_null(p_13), not_null(r_13)), not_null(n_13));
                      {
                        u_13 = t;
                        if(((t_13 != NULL) && (t_13 != u_13)))
                          _fail(u_13);
                        else
                          t_13 = u_13;
                      }
                      t = not_null(t_13);
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
ATerm SOpt_value_1 (ATerm t, ATerm l_65 (ATerm))
{
  ATerm b_14 = NULL;
  ATerm s_0 (ATerm t)
  {
    ATerm u_0 (ATerm t)
    {
      ATerm c_14 = NULL;
      c_14 = t;
      if(((b_14 != NULL) && (b_14 != c_14)))
        _fail(c_14);
      else
        b_14 = c_14;
      return(t);
    }
    t = SOpt_2(t, l_65, u_0);
    return(t);
  }
  t = fetch_1(t, s_0);
  {
    t = not_null(b_14);
    t = string_to_int_0(t);
  }
  return(t);
}
ATerm hs_length_0 (ATerm t)
{
  ATerm m_10 = t;
  int o_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_0 (ATerm t)
      {
        ATerm f_14 = NULL;
        f_14 = t;
        e_14 :
        if(!(match_cons(f_14, sym_HS_0)))
          {
            _fail(t);
          }
        return(t);
      }
      t = SOpt_value_1(t, v_0);
      LocalPopChoice(o_10);
    }
  else
    {
      t = m_10;
      t = term_f_9;
    }
  return(t);
}
ATerm hs_text_0 (ATerm t)
{
  ATerm h_14 = NULL;
  ATerm i_14 = NULL;
  t = hs_length_0(t);
  {
    i_14 = t;
    if(((h_14 != NULL) && (h_14 != i_14)))
      _fail(i_14);
    else
      h_14 = i_14;
  }
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(h_14), term_g_9);
    t = copy_char_0(t);
  }
  return(t);
}
ATerm subt_0 (ATerm t)
{
  ATerm m_14 = NULL,n_14 = NULL,o_14 = NULL;
  m_14 = t;
  l_14 :
  if(match_cons(m_14, sym__2))
    {
      n_14 = ATgetArgument(m_14, 0);
      o_14 = ATgetArgument(m_14, 1);
      {
        ATerm p_10 = t;
        int a_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_subti(not_null(n_14), not_null(o_14));
            LocalPopChoice(a_11);
          }
        else
          {
            t = p_10;
            t = SSL_subtr(not_null(n_14), not_null(o_14));
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
  ATerm v_14 = NULL,w_14 = NULL,x_14 = NULL;
  v_14 = t;
  t_14 :
  if(match_cons(v_14, sym__2))
    {
      w_14 = ATgetArgument(v_14, 0);
      x_14 = ATgetArgument(v_14, 1);
      u_14 :
      if(((ATgetType(w_14) == AT_LIST) && ATisEmpty(w_14)))
        {
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, not_null(x_14));
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
  ATerm h_15 = NULL,i_15 = NULL,j_15 = NULL,k_15 = NULL,l_15 = NULL;
  h_15 = t;
  f_15 :
  if(match_cons(h_15, sym__2))
    {
      i_15 = ATgetArgument(h_15, 0);
      l_15 = ATgetArgument(h_15, 1);
      g_15 :
      if(((ATgetType(i_15) == AT_LIST) && !(ATisEmpty(i_15))))
        {
          j_15 = ATgetFirst((ATermList) i_15);
          k_15 = (ATerm) ATgetNext((ATermList) i_15);
          {
            ATerm p_15 = NULL,q_15 = NULL,r_15 = NULL,s_15 = NULL;
            ATerm t_15 = NULL,u_15 = NULL,v_15 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(j_15), not_null(l_15));
            {
              t = q_0(t);
              {
                t_15 = t;
                e_15 :
                if(match_cons(t_15, sym__2))
                  {
                    u_15 = ATgetArgument(t_15, 0);
                    v_15 = ATgetArgument(t_15, 1);
                    {
                      ATerm w_15 = NULL,x_15 = NULL,y_15 = NULL;
                      if(((r_15 != NULL) && (r_15 != u_15)))
                        _fail(u_15);
                      else
                        r_15 = u_15;
                      {
                        if(((p_15 != NULL) && (p_15 != v_15)))
                          _fail(v_15);
                        else
                          p_15 = v_15;
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(k_15), not_null(p_15));
                          {
                            t = t_0(t);
                            {
                              w_15 = t;
                              d_15 :
                              if(match_cons(w_15, sym__2))
                                {
                                  x_15 = ATgetArgument(w_15, 0);
                                  y_15 = ATgetArgument(w_15, 1);
                                  {
                                    if(((s_15 != NULL) && (s_15 != x_15)))
                                      _fail(x_15);
                                    else
                                      s_15 = x_15;
                                    if(((q_15 != NULL) && (q_15 != y_15)))
                                      _fail(y_15);
                                    else
                                      q_15 = y_15;
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
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(s_15)), not_null(r_15)), not_null(q_15));
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
ATerm thread_map_1 (ATerm t, ATerm i_80 (ATerm))
{
  ATerm c_16 (ATerm t)
  {
    ATerm b_11 = t;
    int c_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_T_2(t, i_80, c_16);
        LocalPopChoice(c_11);
      }
    else
      {
        t = b_11;
        t = Nil_T_0(t);
      }
    return(t);
  }
  t = c_16(t);
  return(t);
}
ATerm H_2 (ATerm t, ATerm f_59 (ATerm), ATerm g_59 (ATerm))
{
  ATerm j_16 = NULL,k_16 = NULL,l_16 = NULL;
  j_16 = t;
  i_16 :
  if(match_cons(j_16, sym_H_2))
    {
      k_16 = ATgetArgument(j_16, 0);
      l_16 = ATgetArgument(j_16, 1);
      {
        ATerm p_16 = NULL,r_16 = NULL;
        ATerm q_16 = NULL;
        t = SSLgetAnnotations(not_null(j_16));
        {
          q_16 = t;
          if(((p_16 != NULL) && (p_16 != q_16)))
            _fail(q_16);
          else
            p_16 = q_16;
        }
        {
          t = not_null(k_16);
          {
            ATerm t_16 = NULL;
            t = f_59(t);
            {
              r_16 = t;
              {
                t = not_null(l_16);
                {
                  ATerm v_16 = NULL;
                  t = g_59(t);
                  {
                    t_16 = t;
                    {
                      ATerm w_16 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_H_2, not_null(r_16), not_null(t_16)), not_null(p_16));
                      {
                        w_16 = t;
                        if(((v_16 != NULL) && (v_16 != w_16)))
                          _fail(w_16);
                        else
                          v_16 = w_16;
                      }
                      t = not_null(v_16);
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
  ATerm d_11 = t;
  if((PushChoice() == 0))
    {
      ATerm p_11 = t;
      int q_11 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Nil_0(t);
          LocalPopChoice(q_11);
        }
      else
        {
          t = p_11;
          t = H_2(t, Nil_0, Nil_0);
        }
      PopChoice();
      _fail(t);
    }
  else
    {
      t = d_11;
    }
  return(t);
}
ATerm filter_1 (ATerm t, ATerm v_80 (ATerm))
{
  ATerm r_11 = t;
  int s_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(s_11);
    }
  else
    {
      t = r_11;
      {
        ATerm t_11 = t;
        int u_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_0 (ATerm t)
            {
              t = filter_1(t, v_80);
              return(t);
            }
            t = Cons_2(t, v_80, w_0);
            LocalPopChoice(u_11);
          }
        else
          {
            t = t_11;
            {
              ATerm e_17 = NULL,f_17 = NULL,g_17 = NULL;
              e_17 = t;
              d_17 :
              if(((ATgetType(e_17) == AT_LIST) && !(ATisEmpty(e_17))))
                {
                  f_17 = ATgetFirst((ATermList) e_17);
                  g_17 = (ATerm) ATgetNext((ATermList) e_17);
                  {
                    t = not_null(g_17);
                    t = filter_1(t, v_80);
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
  ATerm n_17 = NULL,o_17 = NULL,p_17 = NULL,q_17 = NULL;
  n_17 = t;
  m_17 :
  if(match_cons(n_17, sym__3))
    {
      o_17 = ATgetArgument(n_17, 0);
      p_17 = ATgetArgument(n_17, 1);
      q_17 = ATgetArgument(n_17, 2);
      {
        t = not_null(q_17);
        {
          ATerm x_0 (ATerm t)
          {
            ATerm u_17 = NULL;
            ATerm v_17 = NULL;
            v_17 = t;
            if(((u_17 != NULL) && (u_17 != v_17)))
              _fail(v_17);
            else
              u_17 = v_17;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(u_17), not_null(o_17));
              t = try_abox2text_0(t);
            }
            return(t);
          }
          ATerm y_0 (ATerm t)
          {
            ATerm z_0 (ATerm t)
            {
              ATerm w_17 = NULL;
              ATerm x_17 = NULL;
              x_17 = t;
              if(((w_17 != NULL) && (w_17 != x_17)))
                _fail(x_17);
              else
                w_17 = x_17;
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(w_17), not_null(p_17));
                t = try_abox2text_0(t);
              }
              return(t);
            }
            t = map_1(t, z_0);
            return(t);
          }
          t = Cons_2(t, x_0, y_0);
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
  ATerm v_11 = t;
  if((PushChoice() == 0))
    {
      ATerm d_12 = t;
      int e_12 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Nil_0(t);
          LocalPopChoice(e_12);
        }
      else
        {
          t = d_12;
          {
            ATerm h_18 = NULL;
            ATerm j_18 = NULL,k_18 = NULL,q_18 = NULL,r_18 = NULL;
            h_18 = t;
            {
              ATerm f_12;
              f_12 = t;
              {
                ATerm l_18 = NULL;
                ATerm n_18 = NULL,o_18 = NULL,p_18 = NULL;
                t = not_null(h_18);
                {
                  l_18 = t;
                  {
                    t = SSL_explode_term(not_null(l_18));
                    {
                      n_18 = t;
                      e_18 :
                      if(match_cons(n_18, sym__2))
                        {
                          o_18 = ATgetArgument(n_18, 0);
                          p_18 = ATgetArgument(n_18, 1);
                          {
                            if(((j_18 != NULL) && (j_18 != o_18)))
                              _fail(o_18);
                            else
                              j_18 = o_18;
                            if(((k_18 != NULL) && (k_18 != p_18)))
                              _fail(p_18);
                            else
                              k_18 = p_18;
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
              t = f_12;
              {
                ATerm i_12;
                i_12 = t;
                {
                  ATerm s_18 = NULL;
                  ATerm t_18 = NULL;
                  t = not_null(j_18);
                  {
                    s_18 = t;
                    {
                      if(((q_18 != NULL) && (q_18 != s_18)))
                        _fail(s_18);
                      else
                        q_18 = s_18;
                      {
                        t = not_null(k_18);
                        {
                          ATerm a_1 (ATerm t)
                          {
                            ATerm b_1 (ATerm t)
                            {
                              ATerm j_12 = t;
                              int k_12 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = Nil_0(t);
                                  LocalPopChoice(k_12);
                                }
                              else
                                {
                                  t = j_12;
                                  t = Cons_2(t, Nil_0, Nil_0);
                                }
                              return(t);
                            }
                            t = Cons_2(t, b_1, Nil_0);
                            return(t);
                          }
                          t = Cons_2(t, _id, a_1);
                          {
                            t_18 = t;
                            if(((r_18 != NULL) && (r_18 != t_18)))
                              _fail(t_18);
                            else
                              r_18 = t_18;
                          }
                        }
                      }
                    }
                  }
                }
                t = i_12;
                t = SSL_mkterm(not_null(q_18), not_null(r_18));
              }
            }
          }
        }
      PopChoice();
      _fail(t);
    }
  else
    {
      t = v_11;
    }
  return(t);
}
ATerm split_Cons_0 (ATerm t)
{
  ATerm b_19 = NULL,c_19 = NULL,d_19 = NULL;
  b_19 = t;
  a_19 :
  if(((ATgetType(b_19) == AT_LIST) && !(ATisEmpty(b_19))))
    {
      c_19 = ATgetFirst((ATermList) b_19);
      d_19 = (ATerm) ATgetNext((ATermList) b_19);
      t = (ATerm) ATmakeAppl(sym__2, not_null(c_19), not_null(d_19));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm matrix_transpose_0 (ATerm t)
{
  ATerm q_12 = t;
  int s_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_1 (ATerm t)
      {
        ATerm i_19 = NULL;
        i_19 = t;
        h_19 :
        if(((ATgetType(i_19) == AT_LIST) && ATisEmpty(i_19)))
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
      t = map_1(t, c_1);
      t = (ATerm) ATempty;
      LocalPopChoice(s_12);
    }
  else
    {
      t = q_12;
      {
        t = map_1(t, split_Cons_0);
        {
          t = unzip_1(t, _id);
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
  ATerm m_19 = NULL,n_19 = NULL,o_19 = NULL,p_19 = NULL;
  m_19 = t;
  l_19 :
  if(match_cons(m_19, sym__3))
    {
      n_19 = ATgetArgument(m_19, 0);
      o_19 = ATgetArgument(m_19, 1);
      p_19 = ATgetArgument(m_19, 2);
      {
        ATerm t_19 = NULL;
        ATerm u_19 = NULL;
        t = (ATerm) ATmakeAppl(sym__3, not_null(n_19), not_null(o_19), not_null(p_19));
        {
          t = align_helper_0(t);
          {
            u_19 = t;
            if(((t_19 != NULL) && (t_19 != u_19)))
              _fail(u_19);
            else
              t_19 = u_19;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(o_19), not_null(t_19));
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
  ATerm a_20 = NULL,b_20 = NULL,c_20 = NULL,d_20 = NULL;
  a_20 = t;
  z_19 :
  if(match_cons(a_20, sym__3))
    {
      b_20 = ATgetArgument(a_20, 0);
      c_20 = ATgetArgument(a_20, 1);
      d_20 = ATgetArgument(a_20, 2);
      {
        ATerm h_20 = NULL;
        ATerm i_20 = NULL;
        t = (ATerm) ATmakeAppl(sym__3, not_null(b_20), not_null(c_20), not_null(d_20));
        {
          t = align_helper_0(t);
          {
            i_20 = t;
            if(((h_20 != NULL) && (h_20 != i_20)))
              _fail(i_20);
            else
              h_20 = i_20;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(h_20), not_null(c_20));
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
ATerm while_not_2 (ATerm t, ATerm s_66 (ATerm), ATerm t_66 (ATerm))
{
  ATerm l_20 (ATerm t)
  {
    ATerm x_12 = t;
    int a_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = s_66(t);
        LocalPopChoice(a_13);
      }
    else
      {
        t = x_12;
        {
          t = t_66(t);
          t = l_20(t);
        }
      }
    return(t);
  }
  t = l_20(t);
  return(t);
}
ATerm for_3 (ATerm t, ATerm v_66 (ATerm), ATerm w_66 (ATerm), ATerm x_66 (ATerm))
{
  t = v_66(t);
  t = while_not_2(t, w_66, x_66);
  return(t);
}
ATerm copy_0 (ATerm t)
{
  ATerm d_1 (ATerm t)
  {
    ATerm u_20 = NULL,v_20 = NULL,w_20 = NULL;
    u_20 = t;
    n_20 :
    if(match_cons(u_20, sym__2))
      {
        v_20 = ATgetArgument(u_20, 0);
        w_20 = ATgetArgument(u_20, 1);
        t = (ATerm) ATmakeAppl(sym__3, not_null(v_20), not_null(w_20), (ATerm) ATempty);
      }
    else
      {
        _fail(t);
      }
    return(t);
  }
  ATerm e_1 (ATerm t)
  {
    ATerm z_20 = NULL,a_21 = NULL,b_21 = NULL,c_21 = NULL;
    z_20 = t;
    p_20 :
    if(match_cons(z_20, sym__3))
      {
        a_21 = ATgetArgument(z_20, 0);
        b_21 = ATgetArgument(z_20, 1);
        c_21 = ATgetArgument(z_20, 2);
        q_20 :
        if(match_int(a_21, 0))
          {
            t = not_null(c_21);
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
  ATerm f_1 (ATerm t)
  {
    ATerm f_21 = NULL,g_21 = NULL,h_21 = NULL,d_25 = NULL;
    f_21 = t;
    t_20 :
    if(match_cons(f_21, sym__3))
      {
        g_21 = ATgetArgument(f_21, 0);
        h_21 = ATgetArgument(f_21, 1);
        d_25 = ATgetArgument(f_21, 2);
        {
          ATerm h_25 = NULL;
          ATerm b_13;
          b_13 = t;
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(g_21), term_f_9);
            t = geq_0(t);
          }
          t = b_13;
          {
            ATerm i_25 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(g_21), term_f_9);
            {
              t = subt_0(t);
              {
                i_25 = t;
                if(((h_25 != NULL) && (h_25 != i_25)))
                  _fail(i_25);
                else
                  h_25 = i_25;
              }
            }
            t = (ATerm) ATmakeAppl(sym__3, not_null(h_25), not_null(h_21), (ATerm) ATinsert(CheckATermList(not_null(d_25)), not_null(h_21)));
          }
        }
      }
    else
      {
        _fail(t);
      }
    return(t);
  }
  t = for_3(t, d_1, e_1, f_1);
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
  ATerm c_13;
  c_13 = t;
  {
    ATerm o_25 = NULL;
    ATerm p_25 = NULL;
    p_25 = t;
    if(((o_25 != NULL) && (o_25 != p_25)))
      _fail(p_25);
    else
      o_25 = p_25;
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(o_25), term_i_10);
      t = geq_0(t);
    }
  }
  t = c_13;
  return(t);
}
ATerm align_helper_0 (ATerm t)
{
  ATerm w_25 = NULL,x_25 = NULL,y_25 = NULL,z_25 = NULL;
  w_25 = t;
  v_25 :
  if(match_cons(w_25, sym__3))
    {
      x_25 = ATgetArgument(w_25, 0);
      y_25 = ATgetArgument(w_25, 1);
      z_25 = ATgetArgument(w_25, 2);
      {
        ATerm d_26 = NULL;
        ATerm e_26 = NULL,p_26 = NULL;
        t = not_null(y_25);
        {
          t = string_length_0(t);
          {
            ATerm h_26 = NULL;
            h_26 = t;
            if(((e_26 != NULL) && (e_26 != h_26)))
              _fail(h_26);
            else
              e_26 = h_26;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(z_25), not_null(e_26));
              {
                t = subt_0(t);
                {
                  ATerm d_13 = t;
                  int e_13 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = pos_0(t);
                      LocalPopChoice(e_13);
                      {
                        ATerm i_26 = NULL;
                        ATerm o_26 = NULL;
                        o_26 = t;
                        if(((i_26 != NULL) && (i_26 != o_26)))
                          _fail(o_26);
                        else
                          i_26 = o_26;
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(i_26), not_null(x_25));
                          t = copy_char_0(t);
                        }
                      }
                    }
                  else
                    {
                      t = d_13;
                      t = term_f_13;
                    }
                  {
                    p_26 = t;
                    if(((d_26 != NULL) && (d_26 != p_26)))
                      _fail(p_26);
                    else
                      d_26 = p_26;
                  }
                }
              }
            }
          }
        }
        t = not_null(d_26);
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
  ATerm x_26 = NULL;
  ATerm y_26 = NULL;
  y_26 = t;
  if(((x_26 != NULL) && (x_26 != y_26)))
    _fail(y_26);
  else
    x_26 = y_26;
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(x_26), term_f_9);
    t = add_0(t);
  }
  return(t);
}
ATerm Dupl_0 (ATerm t)
{
  ATerm b_27 = NULL;
  b_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(b_27), not_null(b_27));
  return(t);
}
ATerm div_0 (ATerm t)
{
  ATerm q_27 = NULL,r_27 = NULL,s_27 = NULL;
  q_27 = t;
  p_27 :
  if(match_cons(q_27, sym__2))
    {
      r_27 = ATgetArgument(q_27, 0);
      s_27 = ATgetArgument(q_27, 1);
      {
        ATerm k_13 = t;
        int l_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_divi(not_null(r_27), not_null(s_27));
            LocalPopChoice(l_13);
          }
        else
          {
            t = k_13;
            t = SSL_divr(not_null(r_27), not_null(s_27));
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
  ATerm x_27 = NULL;
  ATerm y_27 = NULL;
  y_27 = t;
  if(((x_27 != NULL) && (x_27 != y_27)))
    _fail(y_27);
  else
    x_27 = y_27;
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(x_27), term_m_13);
    t = div_0(t);
  }
  return(t);
}
ATerm dec_0 (ATerm t)
{
  ATerm b_28 = NULL;
  ATerm c_28 = NULL;
  c_28 = t;
  if(((b_28 != NULL) && (b_28 != c_28)))
    _fail(c_28);
  else
    b_28 = c_28;
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(b_28), term_f_9);
    t = subt_0(t);
  }
  return(t);
}
ATerm mod_0 (ATerm t)
{
  ATerm g_28 = NULL,h_28 = NULL,i_28 = NULL;
  g_28 = t;
  f_28 :
  if(match_cons(g_28, sym__2))
    {
      h_28 = ATgetArgument(g_28, 0);
      i_28 = ATgetArgument(g_28, 1);
      t = SSL_mod(not_null(h_28), not_null(i_28));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm even_0 (ATerm t)
{
  ATerm q_13;
  q_13 = t;
  {
    ATerm o_28 = NULL,q_28 = NULL;
    ATerm p_28 = NULL;
    p_28 = t;
    if(((o_28 != NULL) && (o_28 != p_28)))
      _fail(p_28);
    else
      o_28 = p_28;
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(o_28), term_m_13);
      {
        t = mod_0(t);
        {
          q_28 = t;
          n_28 :
          if(!(match_int(q_28, 0)))
            {
              _fail(t);
            }
        }
      }
    }
  }
  t = q_13;
  return(t);
}
ATerm align_center_0 (ATerm t)
{
  ATerm c_29 = NULL,d_29 = NULL,e_29 = NULL,j_29 = NULL;
  c_29 = t;
  b_29 :
  if(match_cons(c_29, sym__3))
    {
      d_29 = ATgetArgument(c_29, 0);
      e_29 = ATgetArgument(c_29, 1);
      j_29 = ATgetArgument(c_29, 2);
      {
        ATerm n_29 = NULL,o_29 = NULL,x_29 = NULL,y_29 = NULL,z_29 = NULL,a_30 = NULL;
        ATerm b_30 = NULL;
        t = not_null(e_29);
        {
          ATerm c_30 = NULL;
          t = string_length_0(t);
          {
            b_30 = t;
            {
              if(((y_29 != NULL) && (y_29 != b_30)))
                _fail(b_30);
              else
                y_29 = b_30;
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(j_29), not_null(y_29));
                {
                  ATerm d_30 = NULL,e_30 = NULL,f_30 = NULL;
                  t = subt_0(t);
                  {
                    c_30 = t;
                    {
                      if(((n_29 != NULL) && (n_29 != c_30)))
                        _fail(c_30);
                      else
                        n_29 = c_30;
                      {
                        t = not_null(n_29);
                        {
                          ATerm s_13 = t;
                          int v_13 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = even_0(t);
                              LocalPopChoice(v_13);
                              {
                                t = div2_0(t);
                                t = Dupl_0(t);
                              }
                            }
                          else
                            {
                              t = s_13;
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
                            d_30 = t;
                            a_29 :
                            if(match_cons(d_30, sym__2))
                              {
                                e_30 = ATgetArgument(d_30, 0);
                                f_30 = ATgetArgument(d_30, 1);
                                {
                                  ATerm g_30 = NULL,i_30 = NULL;
                                  if(((o_29 != NULL) && (o_29 != e_30)))
                                    _fail(e_30);
                                  else
                                    o_29 = e_30;
                                  {
                                    if(((z_29 != NULL) && (z_29 != f_30)))
                                      _fail(f_30);
                                    else
                                      z_29 = f_30;
                                    {
                                      ATerm h_30 = NULL;
                                      t = (ATerm) ATmakeAppl(sym__2, not_null(y_29), not_null(o_29));
                                      {
                                        t = add_0(t);
                                        {
                                          h_30 = t;
                                          if(((g_30 != NULL) && (g_30 != h_30)))
                                            _fail(h_30);
                                          else
                                            g_30 = h_30;
                                        }
                                      }
                                      {
                                        t = (ATerm) ATmakeAppl(sym__3, not_null(d_29), not_null(e_29), not_null(g_30));
                                        {
                                          ATerm j_30 = NULL,l_30 = NULL;
                                          t = align_helper_0(t);
                                          {
                                            i_30 = t;
                                            {
                                              if(((x_29 != NULL) && (x_29 != i_30)))
                                                _fail(i_30);
                                              else
                                                x_29 = i_30;
                                              {
                                                ATerm k_30 = NULL;
                                                t = (ATerm) ATmakeAppl(sym__2, not_null(y_29), not_null(z_29));
                                                {
                                                  t = add_0(t);
                                                  {
                                                    k_30 = t;
                                                    if(((j_30 != NULL) && (j_30 != k_30)))
                                                      _fail(k_30);
                                                    else
                                                      j_30 = k_30;
                                                  }
                                                }
                                                {
                                                  t = (ATerm) ATmakeAppl(sym__3, not_null(d_29), not_null(e_29), not_null(j_30));
                                                  {
                                                    t = align_helper_0(t);
                                                    {
                                                      l_30 = t;
                                                      if(((a_30 != NULL) && (a_30 != l_30)))
                                                        _fail(l_30);
                                                      else
                                                        a_30 = l_30;
                                                    }
                                                  }
                                                }
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
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(a_30)), not_null(e_29)), not_null(x_29));
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
  ATerm z_30 = NULL,a_31 = NULL,b_31 = NULL,c_31 = NULL;
  z_30 = t;
  x_30 :
  if(match_cons(z_30, sym__2))
    {
      a_31 = ATgetArgument(z_30, 0);
      c_31 = ATgetArgument(z_30, 1);
      y_30 :
      if(match_cons(a_31, sym_AC_1))
        {
          b_31 = ATgetArgument(a_31, 0);
          {
            t = not_null(c_31);
            t = align_center_0(t);
          }
        }
      else
        {
          if(match_cons(a_31, sym_AR_1))
            {
              b_31 = ATgetArgument(a_31, 0);
              {
                t = not_null(c_31);
                t = align_right_0(t);
              }
            }
          else
            {
              if(match_cons(a_31, sym_AL_1))
                {
                  b_31 = ATgetArgument(a_31, 0);
                  {
                    t = not_null(c_31);
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
  ATerm n_31 = NULL,o_31 = NULL;
  n_31 = t;
  m_31 :
  if(match_cons(n_31, sym_AC_1))
    {
      o_31 = ATgetArgument(n_31, 0);
      t = not_null(o_31);
    }
  else
    {
      if(match_cons(n_31, sym_AR_1))
        {
          o_31 = ATgetArgument(n_31, 0);
          t = not_null(o_31);
        }
      else
        {
          if(match_cons(n_31, sym_AL_1))
            {
              o_31 = ATgetArgument(n_31, 0);
              t = not_null(o_31);
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
  ATerm i_32 = NULL;
  ATerm k_32 = NULL,l_32 = NULL,m_32 = NULL;
  i_32 = t;
  {
    ATerm n_32 = NULL;
    ATerm u_32 = NULL,c_33 = NULL,d_33 = NULL,e_33 = NULL,f_33 = NULL,g_33 = NULL,h_33 = NULL;
    t = not_null(i_32);
    {
      n_32 = t;
      {
        t = SSL_explode_term(not_null(n_32));
        {
          u_32 = t;
          b_32 :
          if(match_cons(u_32, sym__2))
            {
              c_33 = ATgetArgument(u_32, 0);
              d_33 = ATgetArgument(u_32, 1);
              f_32 :
              if(match_string(c_33, ""))
                {
                  g_32 :
                  if(((ATgetType(d_33) == AT_LIST) && !(ATisEmpty(d_33))))
                    {
                      e_33 = ATgetFirst((ATermList) d_33);
                      f_33 = (ATerm) ATgetNext((ATermList) d_33);
                      h_32 :
                      if(((ATgetType(f_33) == AT_LIST) && !(ATisEmpty(f_33))))
                        {
                          g_33 = ATgetFirst((ATermList) f_33);
                          h_33 = (ATerm) ATgetNext((ATermList) f_33);
                          {
                            if(((k_32 != NULL) && (k_32 != e_33)))
                              _fail(e_33);
                            else
                              k_32 = e_33;
                            {
                              if(((m_32 != NULL) && (m_32 != g_33)))
                                _fail(g_33);
                              else
                                m_32 = g_33;
                              if(((l_32 != NULL) && (l_32 != h_33)))
                                _fail(h_33);
                              else
                                l_32 = h_33;
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
    t = not_null(m_32);
  }
  return(t);
}
ATerm max_0 (ATerm t)
{
  ATerm w_13 = t;
  int x_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = gt_0(t);
      LocalPopChoice(x_13);
      t = Fst_0(t);
    }
  else
    {
      t = w_13;
      t = Snd_0(t);
    }
  return(t);
}
ATerm Hd_0 (ATerm t)
{
  ATerm n_33 = NULL,o_33 = NULL,p_33 = NULL;
  n_33 = t;
  m_33 :
  if(((ATgetType(n_33) == AT_LIST) && !(ATisEmpty(n_33))))
    {
      o_33 = ATgetFirst((ATermList) n_33);
      p_33 = (ATerm) ATgetNext((ATermList) n_33);
      t = not_null(o_33);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm list_accum_1 (ATerm t, ATerm l_83 (ATerm))
{
  ATerm x_33 = NULL,z_33 = NULL;
  ATerm y_13;
  y_13 = t;
  {
    ATerm y_33 = NULL;
    t = Tl_0(t);
    {
      y_33 = t;
      if(((x_33 != NULL) && (x_33 != y_33)))
        _fail(y_33);
      else
        x_33 = y_33;
    }
  }
  t = y_13;
  {
    ATerm a_34 = NULL;
    t = Hd_0(t);
    {
      a_34 = t;
      if(((z_33 != NULL) && (z_33 != a_34)))
        _fail(a_34);
      else
        z_33 = a_34;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(x_33), not_null(z_33));
      t = foldl_1(t, l_83);
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
  ATerm k_34 = NULL,l_34 = NULL,n_34 = NULL;
  k_34 = t;
  j_34 :
  if(match_cons(k_34, sym__2))
    {
      l_34 = ATgetArgument(k_34, 0);
      n_34 = ATgetArgument(k_34, 1);
      t = (ATerm) ATinsert(CheckATermList(not_null(n_34)), not_null(l_34));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm flatten_list_0 (ATerm t)
{
  ATerm g_1 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  ATerm h_1 (ATerm t)
  {
    ATerm z_13 = t;
    int a_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = _2(t, is_list_0, _id);
        LocalPopChoice(a_14);
        t = conc_two_lists_0(t);
      }
    else
      {
        t = z_13;
        t = MkCons_0(t);
      }
    return(t);
  }
  ATerm i_1 (ATerm t)
  {
    ATerm d_14 = t;
    int g_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        LocalPopChoice(g_14);
        t = flatten_list_0(t);
      }
    else
      {
        t = d_14;
        {
        }
      }
    return(t);
  }
  t = foldr_3(t, g_1, h_1, i_1);
  return(t);
}
ATerm UnZip2_0 (ATerm t)
{
  ATerm v_34 = NULL,w_34 = NULL,x_34 = NULL,y_34 = NULL,z_34 = NULL,a_35 = NULL,b_35 = NULL;
  v_34 = t;
  s_34 :
  if(match_cons(v_34, sym__2))
    {
      w_34 = ATgetArgument(v_34, 0);
      z_34 = ATgetArgument(v_34, 1);
      t_34 :
      if(match_cons(w_34, sym__2))
        {
          x_34 = ATgetArgument(w_34, 0);
          y_34 = ATgetArgument(w_34, 1);
          u_34 :
          if(match_cons(z_34, sym__2))
            {
              a_35 = ATgetArgument(z_34, 0);
              b_35 = ATgetArgument(z_34, 1);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(a_35)), not_null(x_34)), (ATerm) ATinsert(CheckATermList(not_null(b_35)), not_null(y_34)));
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
  ATerm j_35 = NULL,k_35 = NULL,l_35 = NULL;
  j_35 = t;
  i_35 :
  if(((ATgetType(j_35) == AT_LIST) && !(ATisEmpty(j_35))))
    {
      k_35 = ATgetFirst((ATermList) j_35);
      l_35 = (ATerm) ATgetNext((ATermList) j_35);
      t = (ATerm) ATmakeAppl(sym__2, not_null(k_35), not_null(l_35));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm UnZip1_0 (ATerm t)
{
  ATerm r_35 = NULL;
  r_35 = t;
  q_35 :
  if(((ATgetType(r_35) == AT_LIST) && ATisEmpty(r_35)))
    {
      t = term_j_14;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm unzip_1 (ATerm t, ATerm p_75 (ATerm))
{
  t = genzip_4(t, UnZip1_0, UnZip3_0, UnZip2_0, p_75);
  return(t);
}
ATerm unzip_0 (ATerm t)
{
  t = unzip_1(t, _id);
  return(t);
}
ATerm do_A_column_0 (ATerm t)
{
  ATerm h_36 = NULL,i_36 = NULL,j_36 = NULL,k_36 = NULL,l_36 = NULL,m_36 = NULL,n_36 = NULL;
  h_36 = t;
  e_36 :
  if(match_cons(h_36, sym__2))
    {
      i_36 = ATgetArgument(h_36, 0);
      l_36 = ATgetArgument(h_36, 1);
      f_36 :
      if(match_cons(i_36, sym__2))
        {
          j_36 = ATgetArgument(i_36, 0);
          k_36 = ATgetArgument(i_36, 1);
          g_36 :
          if(match_cons(l_36, sym__2))
            {
              m_36 = ATgetArgument(l_36, 0);
              n_36 = ATgetArgument(l_36, 1);
              {
                ATerm s_36 = NULL,t_36 = NULL,u_36 = NULL,v_36 = NULL,w_37 = NULL,j_38 = NULL;
                ATerm k_14;
                k_14 = t;
                {
                  ATerm z_37 = NULL,a_38 = NULL,b_38 = NULL;
                  t = not_null(k_36);
                  {
                    ATerm j_1 (ATerm t)
                    {
                      ATerm x_37 = NULL;
                      ATerm y_37 = NULL;
                      y_37 = t;
                      if(((x_37 != NULL) && (x_37 != y_37)))
                        _fail(y_37);
                      else
                        x_37 = y_37;
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(x_37), not_null(m_36));
                        t = try_abox2text_0(t);
                      }
                      return(t);
                    }
                    t = map_1(t, j_1);
                    {
                      t = unzip_1(t, _id);
                      {
                        ATerm k_1 (ATerm t)
                        {
                          ATerm m_1 (ATerm t)
                          {
                            ATerm p_14 = t;
                            int q_14 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = flatten_list_0(t);
                                t = concat_strings_0(t);
                                LocalPopChoice(q_14);
                              }
                            else
                              {
                                t = p_14;
                                {
                                }
                              }
                            return(t);
                          }
                          t = map_1(t, m_1);
                          return(t);
                        }
                        ATerm l_1 (ATerm t)
                        {
                          t = list_accum_1(t, max_0);
                          return(t);
                        }
                        t = _2(t, k_1, l_1);
                        {
                          z_37 = t;
                          b_36 :
                          if(match_cons(z_37, sym__2))
                            {
                              a_38 = ATgetArgument(z_37, 0);
                              b_38 = ATgetArgument(z_37, 1);
                              {
                                ATerm c_38 = NULL;
                                if(((t_36 != NULL) && (t_36 != a_38)))
                                  _fail(a_38);
                                else
                                  t_36 = a_38;
                                {
                                  if(((s_36 != NULL) && (s_36 != b_38)))
                                    _fail(b_38);
                                  else
                                    s_36 = b_38;
                                  {
                                    t = (ATerm) ATmakeAppl(sym__2, not_null(s_36), not_null(m_36));
                                    {
                                      ATerm d_38 = NULL;
                                      t = subt_0(t);
                                      {
                                        c_38 = t;
                                        {
                                          if(((u_36 != NULL) && (u_36 != c_38)))
                                            _fail(c_38);
                                          else
                                            u_36 = c_38;
                                          {
                                            t = not_null(j_36);
                                            {
                                              t = SOpts_of_alignment_0(t);
                                              {
                                                ATerm i_38 = NULL;
                                                t = hs_text_0(t);
                                                {
                                                  d_38 = t;
                                                  {
                                                    if(((v_36 != NULL) && (v_36 != d_38)))
                                                      _fail(d_38);
                                                    else
                                                      v_36 = d_38;
                                                    {
                                                      t = not_null(t_36);
                                                      {
                                                        ATerm n_1 (ATerm t)
                                                        {
                                                          ATerm e_38 = NULL,g_38 = NULL;
                                                          ATerm f_38 = NULL;
                                                          f_38 = t;
                                                          if(((e_38 != NULL) && (e_38 != f_38)))
                                                            _fail(f_38);
                                                          else
                                                            e_38 = f_38;
                                                          {
                                                            t = (ATerm) ATmakeAppl(sym__2, not_null(j_36), (ATerm) ATmakeAppl(sym__3, term_g_9, not_null(e_38), not_null(u_36)));
                                                            {
                                                              t = align_column_0(t);
                                                              {
                                                                ATerm h_38 = NULL;
                                                                h_38 = t;
                                                                if(((g_38 != NULL) && (g_38 != h_38)))
                                                                  _fail(h_38);
                                                                else
                                                                  g_38 = h_38;
                                                                {
                                                                  t = (ATerm) ATmakeAppl(sym__2, not_null(g_38), not_null(v_36));
                                                                  t = conc_strings_0(t);
                                                                }
                                                              }
                                                            }
                                                          }
                                                          return(t);
                                                        }
                                                        t = map_1(t, n_1);
                                                        {
                                                          i_38 = t;
                                                          if(((w_37 != NULL) && (w_37 != i_38)))
                                                            _fail(i_38);
                                                          else
                                                            w_37 = i_38;
                                                        }
                                                      }
                                                    }
                                                  }
                                                }
                                              }
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
                  ATerm k_38 = NULL,m_38 = NULL;
                  ATerm l_38 = NULL;
                  t = not_null(v_36);
                  {
                    t = string_length_0(t);
                    {
                      l_38 = t;
                      if(((k_38 != NULL) && (k_38 != l_38)))
                        _fail(l_38);
                      else
                        k_38 = l_38;
                    }
                  }
                  {
                    t = (ATerm) ATmakeAppl(sym__2, not_null(k_38), not_null(s_36));
                    {
                      t = add_0(t);
                      {
                        m_38 = t;
                        if(((j_38 != NULL) && (j_38 != m_38)))
                          _fail(m_38);
                        else
                          j_38 = m_38;
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym__2, not_null(j_38), (ATerm) ATinsert(CheckATermList(not_null(n_36)), not_null(w_37)));
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
  ATerm z_38 = NULL,a_39 = NULL,b_39 = NULL;
  z_38 = t;
  y_38 :
  if(match_cons(z_38, sym__2))
    {
      a_39 = ATgetArgument(z_38, 0);
      b_39 = ATgetArgument(z_38, 1);
      t = (ATerm) ATinsert(CheckATermList(not_null(b_39)), not_null(a_39));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Zip2_0 (ATerm t)
{
  ATerm m_39 = NULL,n_39 = NULL,o_39 = NULL,p_39 = NULL,q_39 = NULL,r_39 = NULL,s_39 = NULL;
  m_39 = t;
  j_39 :
  if(match_cons(m_39, sym__2))
    {
      n_39 = ATgetArgument(m_39, 0);
      q_39 = ATgetArgument(m_39, 1);
      k_39 :
      if(((ATgetType(n_39) == AT_LIST) && !(ATisEmpty(n_39))))
        {
          o_39 = ATgetFirst((ATermList) n_39);
          p_39 = (ATerm) ATgetNext((ATermList) n_39);
          l_39 :
          if(((ATgetType(q_39) == AT_LIST) && !(ATisEmpty(q_39))))
            {
              r_39 = ATgetFirst((ATermList) q_39);
              s_39 = (ATerm) ATgetNext((ATermList) q_39);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(o_39), not_null(r_39)), (ATerm) ATmakeAppl(sym__2, not_null(p_39), not_null(s_39)));
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
  ATerm c_40 = NULL,d_40 = NULL,e_40 = NULL;
  c_40 = t;
  z_39 :
  if(match_cons(c_40, sym__2))
    {
      d_40 = ATgetArgument(c_40, 0);
      e_40 = ATgetArgument(c_40, 1);
      a_40 :
      if(((ATgetType(d_40) == AT_LIST) && ATisEmpty(d_40)))
        {
          b_40 :
          if(((ATgetType(e_40) == AT_LIST) && ATisEmpty(e_40)))
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
ATerm genzip_4 (ATerm t, ATerm f_75 (ATerm), ATerm g_75 (ATerm), ATerm h_75 (ATerm), ATerm i_75 (ATerm))
{
  ATerm g_40 (ATerm t)
  {
    ATerm r_14 = t;
    int s_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = f_75(t);
        LocalPopChoice(s_14);
      }
    else
      {
        t = r_14;
        {
          t = g_75(t);
          {
            t = _2(t, i_75, g_40);
            t = h_75(t);
          }
        }
      }
    return(t);
  }
  t = g_40(t);
  return(t);
}
ATerm zip_1 (ATerm t, ATerm k_75 (ATerm))
{
  t = genzip_4(t, Zip1_0, Zip2_0, Zip3_0, k_75);
  return(t);
}
ATerm zip_0 (ATerm t)
{
  t = zip_1(t, _id);
  return(t);
}
ATerm length_0 (ATerm t)
{
  ATerm p_1 (ATerm t)
  {
    t = term_i_10;
    return(t);
  }
  ATerm q_1 (ATerm t)
  {
    t = term_f_9;
    return(t);
  }
  t = foldr_3(t, p_1, add_0, q_1);
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm f_79 (ATerm), ATerm g_79 (ATerm))
{
  ATerm k_40 = NULL,l_40 = NULL,m_40 = NULL;
  k_40 = t;
  j_40 :
  if(((ATgetType(k_40) == AT_LIST) && !(ATisEmpty(k_40))))
    {
      l_40 = ATgetFirst((ATermList) k_40);
      m_40 = (ATerm) ATgetNext((ATermList) k_40);
      {
        t = g_79(t);
        {
          ATerm r_1 (ATerm t)
          {
            ATerm p_40 = NULL;
            p_40 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(l_40), not_null(p_40));
              t = f_79(t);
            }
            return(t);
          }
          t = fetch_1(t, r_1);
        }
        t = not_null(m_40);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm union_1 (ATerm t, ATerm b_79 (ATerm))
{
  ATerm v_40 = NULL,x_40 = NULL,y_40 = NULL;
  v_40 = t;
  u_40 :
  if(match_cons(v_40, sym__2))
    {
      x_40 = ATgetArgument(v_40, 0);
      y_40 = ATgetArgument(v_40, 1);
      {
        t = not_null(x_40);
        {
          ATerm e_41 (ATerm t)
          {
            ATerm y_14 = t;
            int z_14 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(y_40);
                LocalPopChoice(z_14);
              }
            else
              {
                t = y_14;
                {
                  ATerm a_15 = t;
                  int b_15 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm s_1 (ATerm t)
                      {
                        t = not_null(y_40);
                        return(t);
                      }
                      t = HdMember_p__2(t, b_79, s_1);
                      t = e_41(t);
                      LocalPopChoice(b_15);
                    }
                  else
                    {
                      t = a_15;
                      t = Cons_2(t, _id, e_41);
                    }
                }
              }
            return(t);
          }
          t = e_41(t);
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
ATerm foldr_3 (ATerm t, ATerm u_79 (ATerm), ATerm v_79 (ATerm), ATerm w_79 (ATerm))
{
  ATerm c_15 = t;
  int m_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = u_79(t);
      LocalPopChoice(m_15);
    }
  else
    {
      t = c_15;
      {
        ATerm l_41 = NULL,m_41 = NULL,n_41 = NULL;
        l_41 = t;
        k_41 :
        if(((ATgetType(l_41) == AT_LIST) && !(ATisEmpty(l_41))))
          {
            m_41 = ATgetFirst((ATermList) l_41);
            n_41 = (ATerm) ATgetNext((ATermList) l_41);
            {
              ATerm q_41 = NULL,s_41 = NULL;
              ATerm n_15;
              n_15 = t;
              {
                ATerm r_41 = NULL;
                t = not_null(m_41);
                {
                  t = w_79(t);
                  {
                    r_41 = t;
                    if(((q_41 != NULL) && (q_41 != r_41)))
                      _fail(r_41);
                    else
                      q_41 = r_41;
                  }
                }
              }
              t = n_15;
              {
                ATerm v_41 = NULL;
                t = not_null(n_41);
                {
                  t = foldr_3(t, u_79, v_79, w_79);
                  {
                    v_41 = t;
                    if(((s_41 != NULL) && (s_41 != v_41)))
                      _fail(v_41);
                    else
                      s_41 = v_41;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(q_41), not_null(s_41));
                  t = v_79(t);
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
  ATerm t_1 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  ATerm u_1 (ATerm t)
  {
    t = union_1(t, eq_0);
    return(t);
  }
  ATerm v_1 (ATerm t)
  {
    ATerm e_42 = NULL;
    ATerm f_42 = NULL;
    f_42 = t;
    if(((e_42 != NULL) && (e_42 != f_42)))
      _fail(f_42);
    else
      e_42 = f_42;
    t = (ATerm) ATinsert(ATempty, not_null(e_42));
    return(t);
  }
  t = foldr_3(t, t_1, u_1, v_1);
  return(t);
}
ATerm warn_not_matrix_0 (ATerm t)
{
  ATerm o_15;
  o_15 = t;
  {
    ATerm z_15 = t;
    int a_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_42 = NULL;
        t = map_1(t, length_0);
        {
          t = make_set_0(t);
          {
            t = length_0(t);
            {
              t_42 = t;
              s_42 :
              if(!(match_int(t_42, 1)))
                {
                  _fail(t);
                }
            }
          }
        }
        LocalPopChoice(a_16);
        {
        }
      }
    else
      {
        t = z_15;
        {
          t = (ATerm) ATinsert(ATempty, term_b_16);
          t = fatal_error_0(t);
        }
      }
  }
  t = o_15;
  return(t);
}
ATerm R_2 (ATerm t, ATerm x_58 (ATerm), ATerm y_58 (ATerm))
{
  ATerm a_43 = NULL,b_43 = NULL,c_43 = NULL;
  a_43 = t;
  z_42 :
  if(match_cons(a_43, sym_R_2))
    {
      b_43 = ATgetArgument(a_43, 0);
      c_43 = ATgetArgument(a_43, 1);
      {
        ATerm k_43 = NULL,q_43 = NULL;
        ATerm p_43 = NULL;
        t = SSLgetAnnotations(not_null(a_43));
        {
          p_43 = t;
          if(((k_43 != NULL) && (k_43 != p_43)))
            _fail(p_43);
          else
            k_43 = p_43;
        }
        {
          t = not_null(b_43);
          {
            ATerm s_43 = NULL;
            t = x_58(t);
            {
              q_43 = t;
              {
                t = not_null(c_43);
                {
                  ATerm v_43 = NULL;
                  t = y_58(t);
                  {
                    s_43 = t;
                    {
                      ATerm w_43 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_R_2, not_null(q_43), not_null(s_43)), not_null(k_43));
                      {
                        w_43 = t;
                        if(((v_43 != NULL) && (v_43 != w_43)))
                          _fail(w_43);
                        else
                          v_43 = w_43;
                      }
                      t = not_null(v_43);
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
ATerm split_2 (ATerm t, ATerm h_81 (ATerm), ATerm i_81 (ATerm))
{
  ATerm f_44 = NULL,h_44 = NULL;
  ATerm d_16;
  d_16 = t;
  {
    ATerm g_44 = NULL;
    t = h_81(t);
    {
      g_44 = t;
      if(((f_44 != NULL) && (f_44 != g_44)))
        _fail(g_44);
      else
        f_44 = g_44;
    }
  }
  t = d_16;
  {
    ATerm i_44 = NULL;
    t = i_81(t);
    {
      i_44 = t;
      if(((h_44 != NULL) && (h_44 != i_44)))
        _fail(i_44);
      else
        h_44 = i_44;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(f_44), not_null(h_44));
  }
  return(t);
}
ATerm construct_rows_0 (ATerm t)
{
  ATerm w_1 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = split_2(t, _id, w_1);
  {
    ATerm t_45 (ATerm t)
    {
      ATerm u_44 = NULL,v_44 = NULL,w_44 = NULL,x_44 = NULL,y_44 = NULL,z_44 = NULL,a_45 = NULL;
      ATerm w_45 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(z_44), (ATerm) ATinsert(CheckATermList(not_null(a_45)), not_null(y_44)));
        t = t_45(t);
        return(t);
      }
      w_44 = t;
      r_44 :
      if(match_cons(w_44, sym__2))
        {
          x_44 = ATgetArgument(w_44, 0);
          a_45 = ATgetArgument(w_44, 1);
          s_44 :
          if(((ATgetType(x_44) == AT_LIST) && ATisEmpty(x_44)))
            {
              {
                ATerm f_45 = NULL;
                ATerm g_45 = NULL;
                t = not_null(a_45);
                {
                  ATerm x_1 (ATerm t)
                  {
                    t = (ATerm) ATempty;
                    return(t);
                  }
                  t = reverse_acc_2(t, _id, x_1);
                  {
                    g_45 = t;
                    if(((f_45 != NULL) && (f_45 != g_45)))
                      _fail(g_45);
                    else
                      f_45 = g_45;
                  }
                }
                t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_R_2, (ATerm)ATempty, not_null(f_45)));
              }
            }
          else
            {
              if(((ATgetType(x_44) == AT_LIST) && !(ATisEmpty(x_44))))
                {
                  y_44 = ATgetFirst((ATermList) x_44);
                  z_44 = (ATerm) ATgetNext((ATermList) x_44);
                  t_44 :
                  if(match_cons(y_44, sym_R_2))
                    {
                      u_44 = ATgetArgument(y_44, 0);
                      v_44 = ATgetArgument(y_44, 1);
                      {
                        ATerm e_16 = t;
                        int f_16 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm l_45 = NULL,n_45 = NULL;
                            ATerm g_16;
                            g_16 = t;
                            {
                              ATerm m_45 = NULL;
                              t = not_null(a_45);
                              {
                                ATerm y_1 (ATerm t)
                                {
                                  t = (ATerm) ATempty;
                                  return(t);
                                }
                                t = reverse_acc_2(t, _id, y_1);
                                {
                                  m_45 = t;
                                  if(((l_45 != NULL) && (l_45 != m_45)))
                                    _fail(m_45);
                                  else
                                    l_45 = m_45;
                                }
                              }
                            }
                            t = g_16;
                            {
                              ATerm o_45 = NULL;
                              t = (ATerm) ATmakeAppl(sym__2, not_null(z_44), (ATerm) ATempty);
                              {
                                t = t_45(t);
                                {
                                  o_45 = t;
                                  if(((n_45 != NULL) && (n_45 != o_45)))
                                    _fail(o_45);
                                  else
                                    n_45 = o_45;
                                }
                              }
                              t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(n_45)), (ATerm) ATmakeAppl(sym_R_2, not_null(u_44), not_null(v_44))), (ATerm) ATmakeAppl(sym_R_2, (ATerm)ATempty, not_null(l_45)));
                            }
                            LocalPopChoice(f_16);
                          }
                        else
                          {
                            t = e_16;
                            t = w_45(t);
                          }
                      }
                    }
                  else
                    {
                      t = w_45(t);
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
    t = t_45(t);
    {
      ATerm z_1 (ATerm t)
      {
        ATerm h_16 = t;
        if((PushChoice() == 0))
          {
            t = R_2(t, _id, Nil_0);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = h_16;
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
  ATerm d_46 = NULL,e_46 = NULL,f_46 = NULL;
  d_46 = t;
  b_46 :
  if(((ATgetType(d_46) == AT_LIST) && !(ATisEmpty(d_46))))
    {
      e_46 = ATgetFirst((ATermList) d_46);
      f_46 = (ATerm) ATgetNext((ATermList) d_46);
      c_46 :
      if(((ATgetType(f_46) == AT_LIST) && ATisEmpty(f_46)))
        {
          t = not_null(e_46);
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
  ATerm m_16 = t;
  int n_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Last_0(t);
      LocalPopChoice(n_16);
    }
  else
    {
      t = m_16;
      {
        t = Tl_0(t);
        t = last_0(t);
      }
    }
  return(t);
}
ATerm eq_0 (ATerm t)
{
  ATerm n_46 = NULL,p_46 = NULL,q_46 = NULL;
  n_46 = t;
  m_46 :
  if(match_cons(n_46, sym__2))
    {
      p_46 = ATgetArgument(n_46, 0);
      q_46 = ATgetArgument(n_46, 1);
      if(((p_46 != NULL) && (p_46 != q_46)))
        _fail(q_46);
      else
        p_46 = q_46;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm elem_1 (ATerm t, ATerm m_73 (ATerm))
{
  ATerm w_46 = NULL,x_46 = NULL,y_46 = NULL;
  w_46 = t;
  v_46 :
  if(match_cons(w_46, sym__2))
    {
      x_46 = ATgetArgument(w_46, 0);
      y_46 = ATgetArgument(w_46, 1);
      {
        t = not_null(y_46);
        {
          ATerm a_2 (ATerm t)
          {
            ATerm o_16;
            o_16 = t;
            {
              ATerm c_47 = NULL;
              ATerm d_47 = NULL;
              d_47 = t;
              if(((c_47 != NULL) && (c_47 != d_47)))
                _fail(d_47);
              else
                c_47 = d_47;
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(x_46), not_null(c_47));
                t = m_73(t);
              }
            }
            t = o_16;
            return(t);
          }
          t = _one(t, a_2);
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
ATerm at_suffix_1 (ATerm t, ATerm x_73 (ATerm))
{
  ATerm h_47 (ATerm t)
  {
    ATerm s_16 = t;
    int u_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_73(t);
        LocalPopChoice(u_16);
      }
    else
      {
        t = s_16;
        t = Cons_2(t, _id, h_47);
      }
    return(t);
  }
  t = h_47(t);
  return(t);
}
ATerm split_fetch_1 (ATerm t, ATerm q_73 (ATerm))
{
  ATerm m_47 = NULL,o_47 = NULL;
  ATerm d_2 (ATerm t)
  {
    t = Cons_2(t, q_73, _id);
    {
      ATerm e_2 (ATerm t)
      {
        ATerm n_47 = NULL;
        n_47 = t;
        if(((m_47 != NULL) && (m_47 != n_47)))
          _fail(n_47);
        else
          m_47 = n_47;
        return(t);
      }
      t = Cons_2(t, _id, e_2);
      t = (ATerm) ATempty;
    }
    return(t);
  }
  t = at_suffix_1(t, d_2);
  {
    ATerm p_47 = NULL;
    p_47 = t;
    if(((o_47 != NULL) && (o_47 != p_47)))
      _fail(p_47);
    else
      o_47 = p_47;
    t = (ATerm) ATmakeAppl(sym__2, not_null(o_47), not_null(m_47));
  }
  return(t);
}
ATerm list_tokenize_1 (ATerm t, ATerm n_82 (ATerm))
{
  ATerm s_48 = NULL,t_48 = NULL,u_48 = NULL,v_48 = NULL,w_48 = NULL,x_48 = NULL,y_48 = NULL;
  ATerm x_16 = t;
  int y_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = split_fetch_1(t, n_82);
      LocalPopChoice(y_16);
    }
  else
    {
      t = x_16;
      {
        ATerm q_48 = NULL;
        ATerm r_48 = NULL;
        r_48 = t;
        if(((q_48 != NULL) && (q_48 != r_48)))
          _fail(r_48);
        else
          q_48 = r_48;
        t = (ATerm) ATmakeAppl(sym__2, not_null(q_48), (ATerm) ATempty);
      }
    }
  {
    s_48 = t;
    i_48 :
    if(match_cons(s_48, sym__2))
      {
        t_48 = ATgetArgument(s_48, 0);
        w_48 = ATgetArgument(s_48, 1);
        j_48 :
        if(((ATgetType(t_48) == AT_LIST) && ATisEmpty(t_48)))
          {
            k_48 :
            if(((ATgetType(w_48) == AT_LIST) && ATisEmpty(w_48)))
              {
                t = (ATerm) ATempty;
              }
            else
              {
                if(((ATgetType(w_48) == AT_LIST) && !(ATisEmpty(w_48))))
                  {
                    x_48 = ATgetFirst((ATermList) w_48);
                    y_48 = (ATerm) ATgetNext((ATermList) w_48);
                    {
                      t = not_null(w_48);
                      t = list_tokenize_1(t, n_82);
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
            if(((ATgetType(t_48) == AT_LIST) && !(ATisEmpty(t_48))))
              {
                u_48 = ATgetFirst((ATermList) t_48);
                v_48 = (ATerm) ATgetNext((ATermList) t_48);
                p_48 :
                if(((ATgetType(w_48) == AT_LIST) && ATisEmpty(w_48)))
                  {
                    t = (ATerm) ATinsert(ATempty, not_null(t_48));
                  }
                else
                  {
                    if(((ATgetType(w_48) == AT_LIST) && !(ATisEmpty(w_48))))
                      {
                        x_48 = ATgetFirst((ATermList) w_48);
                        y_48 = (ATerm) ATgetNext((ATermList) w_48);
                        {
                          ATerm d_49 = NULL;
                          ATerm e_49 = NULL;
                          t = not_null(w_48);
                          {
                            t = list_tokenize_1(t, n_82);
                            {
                              e_49 = t;
                              if(((d_49 != NULL) && (d_49 != e_49)))
                                _fail(e_49);
                              else
                                d_49 = e_49;
                            }
                          }
                          t = (ATerm) ATinsert(CheckATermList(not_null(d_49)), not_null(t_48));
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
  ATerm p_49 = NULL,q_49 = NULL,r_49 = NULL;
  t = _2(t, _id, explode_string_0);
  {
    p_49 = t;
    o_49 :
    if(match_cons(p_49, sym__2))
      {
        q_49 = ATgetArgument(p_49, 0);
        r_49 = ATgetArgument(p_49, 1);
        {
          t = not_null(r_49);
          {
            ATerm f_2 (ATerm t)
            {
              ATerm u_49 = NULL;
              ATerm v_49 = NULL;
              v_49 = t;
              if(((u_49 != NULL) && (u_49 != v_49)))
                _fail(v_49);
              else
                u_49 = v_49;
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(u_49), not_null(q_49));
                t = elem_1(t, eq_0);
              }
              return(t);
            }
            t = list_tokenize_1(t, f_2);
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
  ATerm f_50 = NULL,g_50 = NULL,h_50 = NULL;
  f_50 = t;
  e_50 :
  if(match_cons(f_50, sym__2))
    {
      g_50 = ATgetArgument(f_50, 0);
      h_50 = ATgetArgument(f_50, 1);
      {
        ATerm p_50 = NULL;
        ATerm w_50 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, term_l_10, not_null(g_50));
        {
          t = string_tokenize_0(t);
          {
            ATerm z_16 = t;
            int a_17 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm q_50 = NULL,r_50 = NULL,s_50 = NULL;
                q_50 = t;
                a_50 :
                if(((ATgetType(q_50) == AT_LIST) && !(ATisEmpty(q_50))))
                  {
                    r_50 = ATgetFirst((ATermList) q_50);
                    s_50 = (ATerm) ATgetNext((ATermList) q_50);
                    b_50 :
                    if(((ATgetType(s_50) == AT_LIST) && ATisEmpty(s_50)))
                      {
                        {
                          t = not_null(r_50);
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
                LocalPopChoice(a_17);
              }
            else
              {
                t = z_16;
                {
                  ATerm u_50 = NULL;
                  ATerm v_50 = NULL;
                  t = last_0(t);
                  {
                    t = string_length_0(t);
                    {
                      v_50 = t;
                      if(((u_50 != NULL) && (u_50 != v_50)))
                        _fail(v_50);
                      else
                        u_50 = v_50;
                    }
                  }
                  {
                    t = (ATerm) ATmakeAppl(sym__2, not_null(u_50), not_null(h_50));
                    t = subt_0(t);
                  }
                }
              }
            {
              w_50 = t;
              if(((p_50 != NULL) && (p_50 != w_50)))
                _fail(w_50);
              else
                p_50 = w_50;
            }
          }
        }
        t = not_null(p_50);
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
  ATerm b_17 = t;
  if((PushChoice() == 0))
    {
      t = gt_0(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = b_17;
    }
  return(t);
}
ATerm get_width_0 (ATerm t)
{
  ATerm c_17 = t;
  int h_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_i_17;
      t = get_config_0(t);
      LocalPopChoice(h_17);
    }
  else
    {
      t = c_17;
      t = term_j_17;
    }
  return(t);
}
ATerm abox2text_0 (ATerm t)
{
  ATerm n_53 = NULL,o_53 = NULL,p_53 = NULL,q_53 = NULL,r_53 = NULL,s_53 = NULL,t_53 = NULL,u_53 = NULL,v_53 = NULL,w_53 = NULL;
  s_53 = t;
  g_53 :
  if(match_cons(s_53, sym__2))
    {
      t_53 = ATgetArgument(s_53, 0);
      w_53 = ATgetArgument(s_53, 1);
      h_53 :
      if(((ATgetType(t_53) == AT_LIST) && ATisEmpty(t_53)))
        {
          t = (ATerm) ATmakeAppl(sym__2, term_f_13, not_null(w_53));
        }
      else
        {
          if(((ATgetType(t_53) == AT_LIST) && !(ATisEmpty(t_53))))
            {
              u_53 = ATgetFirst((ATermList) t_53);
              v_53 = (ATerm) ATgetNext((ATermList) t_53);
              i_53 :
              if(((ATgetType(v_53) == AT_LIST) && ATisEmpty(v_53)))
                {
                  {
                    t = (ATerm) ATmakeAppl(sym__2, not_null(u_53), not_null(w_53));
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
              if(match_cons(t_53, sym_ALT_2))
                {
                  u_53 = ATgetArgument(t_53, 0);
                  v_53 = ATgetArgument(t_53, 1);
                  {
                    ATerm d_54 = NULL,e_54 = NULL,f_54 = NULL;
                    ATerm k_17;
                    k_17 = t;
                    {
                      ATerm g_54 = NULL,h_54 = NULL,i_54 = NULL;
                      t = (ATerm) ATmakeAppl(sym__2, not_null(u_53), not_null(w_53));
                      {
                        t = try_abox2text_0(t);
                        {
                          g_54 = t;
                          o_51 :
                          if(match_cons(g_54, sym__2))
                            {
                              h_54 = ATgetArgument(g_54, 0);
                              i_54 = ATgetArgument(g_54, 1);
                              {
                                if(((d_54 != NULL) && (d_54 != g_54)))
                                  _fail(g_54);
                                else
                                  d_54 = g_54;
                                {
                                  if(((e_54 != NULL) && (e_54 != h_54)))
                                    _fail(h_54);
                                  else
                                    e_54 = h_54;
                                  if(((f_54 != NULL) && (f_54 != i_54)))
                                    _fail(i_54);
                                  else
                                    f_54 = i_54;
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
                    t = k_17;
                    {
                      ATerm l_17 = t;
                      int r_17 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm j_54 = NULL;
                          ATerm k_54 = NULL;
                          t = get_width_0(t);
                          {
                            k_54 = t;
                            if(((j_54 != NULL) && (j_54 != k_54)))
                              _fail(k_54);
                            else
                              j_54 = k_54;
                          }
                          {
                            t = (ATerm) ATmakeAppl(sym__2, not_null(f_54), not_null(j_54));
                            t = leq_0(t);
                          }
                          LocalPopChoice(r_17);
                          t = not_null(d_54);
                        }
                      else
                        {
                          t = l_17;
                          {
                            t = (ATerm) ATmakeAppl(sym__2, not_null(v_53), not_null(w_53));
                            t = try_abox2text_0(t);
                          }
                        }
                    }
                  }
                }
              else
                {
                  if(match_cons(t_53, sym_R_2))
                    {
                      u_53 = ATgetArgument(t_53, 0);
                      v_53 = ATgetArgument(t_53, 1);
                      {
                        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_HV_2, not_null(u_53), not_null(v_53)), not_null(w_53));
                        t = try_abox2text_0(t);
                      }
                    }
                  else
                    {
                      if(match_cons(t_53, sym_FBOX_2))
                        {
                          u_53 = ATgetArgument(t_53, 0);
                          v_53 = ATgetArgument(t_53, 1);
                          {
                            t = (ATerm) ATmakeAppl(sym__2, not_null(v_53), not_null(w_53));
                            t = try_abox2text_0(t);
                          }
                        }
                      else
                        {
                          if(match_cons(t_53, sym_C_2))
                            {
                              u_53 = ATgetArgument(t_53, 0);
                              v_53 = ATgetArgument(t_53, 1);
                              j_53 :
                              if(((ATgetType(v_53) == AT_LIST) && !(ATisEmpty(v_53))))
                                {
                                  n_53 = ATgetFirst((ATermList) v_53);
                                  p_53 = (ATerm) ATgetNext((ATermList) v_53);
                                  k_53 :
                                  if(match_cons(n_53, sym_S_1))
                                    {
                                      o_53 = ATgetArgument(n_53, 0);
                                      l_53 :
                                      if(((ATgetType(p_53) == AT_LIST) && ATisEmpty(p_53)))
                                        {
                                          t = (ATerm) ATmakeAppl(sym__2, not_null(o_53), not_null(w_53));
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
                              if(match_cons(t_53, sym_S_1))
                                {
                                  u_53 = ATgetArgument(t_53, 0);
                                  {
                                    ATerm u_54 = NULL;
                                    ATerm v_54 = NULL,z_54 = NULL;
                                    ATerm w_54 = NULL;
                                    t = (ATerm) ATmakeAppl(sym__2, not_null(u_53), not_null(w_53));
                                    {
                                      t = rel_string_length_0(t);
                                      {
                                        w_54 = t;
                                        if(((v_54 != NULL) && (v_54 != w_54)))
                                          _fail(w_54);
                                        else
                                          v_54 = w_54;
                                      }
                                    }
                                    {
                                      t = (ATerm) ATmakeAppl(sym__2, not_null(w_53), not_null(v_54));
                                      {
                                        t = add_0(t);
                                        {
                                          z_54 = t;
                                          if(((u_54 != NULL) && (u_54 != z_54)))
                                            _fail(z_54);
                                          else
                                            u_54 = z_54;
                                        }
                                      }
                                    }
                                    t = (ATerm) ATmakeAppl(sym__2, not_null(u_53), not_null(u_54));
                                  }
                                }
                              else
                                {
                                  if(match_cons(t_53, sym_A_3))
                                    {
                                      u_53 = ATgetArgument(t_53, 0);
                                      v_53 = ATgetArgument(t_53, 1);
                                      r_53 = ATgetArgument(t_53, 2);
                                      m_53 :
                                      if(match_cons(u_53, sym_AOPTIONS_1))
                                        {
                                          q_53 = ATgetArgument(u_53, 0);
                                          {
                                            ATerm h_55 = NULL,i_55 = NULL,r_55 = NULL,s_55 = NULL,t_55 = NULL,u_55 = NULL;
                                            ATerm c_56 = NULL;
                                            t = not_null(r_53);
                                            {
                                              t = construct_rows_0(t);
                                              {
                                                ATerm g_2 (ATerm t)
                                                {
                                                  ATerm v_55 = NULL,w_55 = NULL,y_55 = NULL;
                                                  v_55 = t;
                                                  a_52 :
                                                  if(match_cons(v_55, sym_R_2))
                                                    {
                                                      w_55 = ATgetArgument(v_55, 0);
                                                      y_55 = ATgetArgument(v_55, 1);
                                                      t = not_null(y_55);
                                                    }
                                                  else
                                                    {
                                                      _fail(t);
                                                    }
                                                  return(t);
                                                }
                                                t = map_1(t, g_2);
                                                {
                                                  t = warn_not_matrix_0(t);
                                                  {
                                                    ATerm d_56 = NULL;
                                                    t = matrix_transpose_0(t);
                                                    {
                                                      c_56 = t;
                                                      {
                                                        if(((h_55 != NULL) && (h_55 != c_56)))
                                                          _fail(c_56);
                                                        else
                                                          h_55 = c_56;
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym__2, not_null(q_53), not_null(h_55));
                                                          {
                                                            ATerm e_56 = NULL,f_56 = NULL,g_56 = NULL;
                                                            t = zip_1(t, _id);
                                                            {
                                                              d_56 = t;
                                                              {
                                                                if(((i_55 != NULL) && (i_55 != d_56)))
                                                                  _fail(d_56);
                                                                else
                                                                  i_55 = d_56;
                                                                {
                                                                  t = (ATerm) ATmakeAppl(sym__2, not_null(i_55), (ATerm) ATmakeAppl(sym__2, not_null(w_53), (ATerm) ATempty));
                                                                  {
                                                                    t = foldl_1(t, do_A_column_0);
                                                                    {
                                                                      e_56 = t;
                                                                      i_52 :
                                                                      if(match_cons(e_56, sym__2))
                                                                        {
                                                                          f_56 = ATgetArgument(e_56, 0);
                                                                          g_56 = ATgetArgument(e_56, 1);
                                                                          {
                                                                            ATerm h_56 = NULL;
                                                                            if(((s_55 != NULL) && (s_55 != f_56)))
                                                                              _fail(f_56);
                                                                            else
                                                                              s_55 = f_56;
                                                                            {
                                                                              if(((r_55 != NULL) && (r_55 != g_56)))
                                                                                _fail(g_56);
                                                                              else
                                                                                r_55 = g_56;
                                                                              {
                                                                                t = not_null(r_55);
                                                                                {
                                                                                  ATerm h_2 (ATerm t)
                                                                                  {
                                                                                    t = (ATerm) ATempty;
                                                                                    return(t);
                                                                                  }
                                                                                  t = reverse_acc_2(t, _id, h_2);
                                                                                  {
                                                                                    ATerm i_56 = NULL,m_56 = NULL;
                                                                                    t = matrix_transpose_0(t);
                                                                                    {
                                                                                      h_56 = t;
                                                                                      {
                                                                                        if(((t_55 != NULL) && (t_55 != h_56)))
                                                                                          _fail(h_56);
                                                                                        else
                                                                                          t_55 = h_56;
                                                                                        {
                                                                                          ATerm l_56 = NULL;
                                                                                          t = not_null(t_55);
                                                                                          {
                                                                                            ATerm i_2 (ATerm t)
                                                                                            {
                                                                                              ATerm j_56 = NULL;
                                                                                              ATerm k_56 = NULL;
                                                                                              k_56 = t;
                                                                                              if(((j_56 != NULL) && (j_56 != k_56)))
                                                                                                _fail(k_56);
                                                                                              else
                                                                                                j_56 = k_56;
                                                                                              t = (ATerm) ATmakeAppl(sym__2, not_null(j_56), not_null(s_55));
                                                                                              return(t);
                                                                                            }
                                                                                            t = map_1(t, i_2);
                                                                                            {
                                                                                              l_56 = t;
                                                                                              if(((i_56 != NULL) && (i_56 != l_56)))
                                                                                                _fail(l_56);
                                                                                              else
                                                                                                i_56 = l_56;
                                                                                            }
                                                                                          }
                                                                                          {
                                                                                            t = (ATerm) ATmakeAppl(sym__3, not_null(v_53), not_null(i_56), not_null(w_53));
                                                                                            {
                                                                                              t = format_vbox_0(t);
                                                                                              {
                                                                                                m_56 = t;
                                                                                                if(((u_55 != NULL) && (u_55 != m_56)))
                                                                                                  _fail(m_56);
                                                                                                else
                                                                                                  u_55 = m_56;
                                                                                              }
                                                                                            }
                                                                                          }
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
                                            t = not_null(u_55);
                                          }
                                        }
                                      else
                                        {
                                          _fail(t);
                                        }
                                    }
                                  else
                                    {
                                      if(match_cons(t_53, sym_V_2))
                                        {
                                          u_53 = ATgetArgument(t_53, 0);
                                          v_53 = ATgetArgument(t_53, 1);
                                          {
                                            ATerm s_56 = NULL,t_56 = NULL,u_56 = NULL;
                                            ATerm v_56 = NULL,x_56 = NULL;
                                            ATerm w_56 = NULL;
                                            t = not_null(u_53);
                                            {
                                              t = is_length_0(t);
                                              {
                                                w_56 = t;
                                                if(((v_56 != NULL) && (v_56 != w_56)))
                                                  _fail(w_56);
                                                else
                                                  v_56 = w_56;
                                              }
                                            }
                                            {
                                              t = (ATerm) ATmakeAppl(sym__2, not_null(w_53), not_null(v_56));
                                              {
                                                ATerm y_56 = NULL;
                                                t = add_0(t);
                                                {
                                                  x_56 = t;
                                                  {
                                                    if(((t_56 != NULL) && (t_56 != x_56)))
                                                      _fail(x_56);
                                                    else
                                                      t_56 = x_56;
                                                    {
                                                      t = not_null(v_53);
                                                      {
                                                        ATerm e_57 = NULL;
                                                        t = filter_1(t, is_real_vbox_0);
                                                        {
                                                          y_56 = t;
                                                          {
                                                            if(((s_56 != NULL) && (s_56 != y_56)))
                                                              _fail(y_56);
                                                            else
                                                              s_56 = y_56;
                                                            {
                                                              t = not_null(s_56);
                                                              {
                                                                ATerm s_17 = t;
                                                                int t_17 = stack_ptr;
                                                                if((PushChoice() == 0))
                                                                  {
                                                                    ATerm z_56 = NULL;
                                                                    z_56 = t;
                                                                    m_52 :
                                                                    if(((ATgetType(z_56) == AT_LIST) && ATisEmpty(z_56)))
                                                                      {
                                                                        {
                                                                        }
                                                                      }
                                                                    else
                                                                      {
                                                                        _fail(t);
                                                                      }
                                                                    LocalPopChoice(t_17);
                                                                    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, not_null(w_53));
                                                                  }
                                                                else
                                                                  {
                                                                    t = s_17;
                                                                    {
                                                                      ATerm a_57 = NULL,c_57 = NULL;
                                                                      ATerm b_57 = NULL;
                                                                      b_57 = t;
                                                                      if(((a_57 != NULL) && (a_57 != b_57)))
                                                                        _fail(b_57);
                                                                      else
                                                                        a_57 = b_57;
                                                                      {
                                                                        t = (ATerm) ATmakeAppl(sym__3, not_null(w_53), not_null(t_56), not_null(a_57));
                                                                        {
                                                                          t = do_vbox_children_0(t);
                                                                          {
                                                                            ATerm d_57 = NULL;
                                                                            d_57 = t;
                                                                            if(((c_57 != NULL) && (c_57 != d_57)))
                                                                              _fail(d_57);
                                                                            else
                                                                              c_57 = d_57;
                                                                            {
                                                                              t = (ATerm) ATmakeAppl(sym__3, not_null(u_53), not_null(c_57), not_null(w_53));
                                                                              t = format_vbox_0(t);
                                                                            }
                                                                          }
                                                                        }
                                                                      }
                                                                    }
                                                                  }
                                                                {
                                                                  e_57 = t;
                                                                  if(((u_56 != NULL) && (u_56 != e_57)))
                                                                    _fail(e_57);
                                                                  else
                                                                    u_56 = e_57;
                                                                }
                                                              }
                                                            }
                                                          }
                                                        }
                                                      }
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                            t = not_null(u_56);
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(t_53, sym_H_2))
                                            {
                                              u_53 = ATgetArgument(t_53, 0);
                                              v_53 = ATgetArgument(t_53, 1);
                                              {
                                                ATerm i_57 = NULL,j_57 = NULL,k_57 = NULL,l_57 = NULL;
                                                ATerm m_57 = NULL;
                                                t = not_null(u_53);
                                                {
                                                  ATerm n_57 = NULL;
                                                  t = hs_text_0(t);
                                                  {
                                                    m_57 = t;
                                                    {
                                                      if(((j_57 != NULL) && (j_57 != m_57)))
                                                        _fail(m_57);
                                                      else
                                                        j_57 = m_57;
                                                      {
                                                        t = not_null(j_57);
                                                        {
                                                          ATerm o_57 = NULL;
                                                          t = string_length_0(t);
                                                          {
                                                            n_57 = t;
                                                            {
                                                              if(((k_57 != NULL) && (k_57 != n_57)))
                                                                _fail(n_57);
                                                              else
                                                                k_57 = n_57;
                                                              {
                                                                t = not_null(v_53);
                                                                {
                                                                  ATerm p_57 = NULL,z_57 = NULL;
                                                                  t = filter_1(t, is_real_hbox_0);
                                                                  {
                                                                    o_57 = t;
                                                                    {
                                                                      if(((i_57 != NULL) && (i_57 != o_57)))
                                                                        _fail(o_57);
                                                                      else
                                                                        i_57 = o_57;
                                                                      {
                                                                        t = not_null(i_57);
                                                                        {
                                                                          ATerm q_57 = NULL;
                                                                          q_57 = t;
                                                                          if(((p_57 != NULL) && (p_57 != q_57)))
                                                                            _fail(q_57);
                                                                          else
                                                                            p_57 = q_57;
                                                                          {
                                                                            t = (ATerm) ATmakeAppl(sym__2, not_null(p_57), not_null(w_53));
                                                                            {
                                                                              ATerm j_2 (ATerm t)
                                                                              {
                                                                                t = try_abox2text_0(t);
                                                                                {
                                                                                  ATerm k_2 (ATerm t)
                                                                                  {
                                                                                    ATerm r_57 = NULL;
                                                                                    ATerm s_57 = NULL;
                                                                                    s_57 = t;
                                                                                    if(((r_57 != NULL) && (r_57 != s_57)))
                                                                                      _fail(s_57);
                                                                                    else
                                                                                      r_57 = s_57;
                                                                                    {
                                                                                      t = (ATerm) ATmakeAppl(sym__2, not_null(k_57), not_null(r_57));
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
                                                                                  ATerm t_57 = NULL;
                                                                                  ATerm u_57 = NULL;
                                                                                  u_57 = t;
                                                                                  if(((t_57 != NULL) && (t_57 != u_57)))
                                                                                    _fail(u_57);
                                                                                  else
                                                                                    t_57 = u_57;
                                                                                  {
                                                                                    t = (ATerm) ATmakeAppl(sym__2, not_null(j_57), not_null(t_57));
                                                                                    t = separate_by_0(t);
                                                                                  }
                                                                                  return(t);
                                                                                }
                                                                                t = _2(t, l_2, _id);
                                                                                {
                                                                                  ATerm y_17 = t;
                                                                                  int z_17 = stack_ptr;
                                                                                  if((PushChoice() == 0))
                                                                                    {
                                                                                      ATerm m_2 (ATerm t)
                                                                                      {
                                                                                        ATerm a_18 = t;
                                                                                        if((PushChoice() == 0))
                                                                                          {
                                                                                            t = Nil_0(t);
                                                                                            PopChoice();
                                                                                            _fail(t);
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            t = a_18;
                                                                                          }
                                                                                        return(t);
                                                                                      }
                                                                                      ATerm n_2 (ATerm t)
                                                                                      {
                                                                                        ATerm v_57 = NULL;
                                                                                        ATerm w_57 = NULL;
                                                                                        w_57 = t;
                                                                                        if(((v_57 != NULL) && (v_57 != w_57)))
                                                                                          _fail(w_57);
                                                                                        else
                                                                                          v_57 = w_57;
                                                                                        {
                                                                                          t = (ATerm) ATmakeAppl(sym__2, not_null(v_57), not_null(k_57));
                                                                                          t = subt_0(t);
                                                                                        }
                                                                                        return(t);
                                                                                      }
                                                                                      t = _2(t, m_2, n_2);
                                                                                      LocalPopChoice(z_17);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = y_17;
                                                                                      {
                                                                                      }
                                                                                    }
                                                                                  {
                                                                                    z_57 = t;
                                                                                    if(((l_57 != NULL) && (l_57 != z_57)))
                                                                                      _fail(z_57);
                                                                                    else
                                                                                      l_57 = z_57;
                                                                                  }
                                                                                }
                                                                              }
                                                                            }
                                                                          }
                                                                        }
                                                                      }
                                                                    }
                                                                  }
                                                                }
                                                              }
                                                            }
                                                          }
                                                        }
                                                      }
                                                    }
                                                  }
                                                }
                                                t = not_null(l_57);
                                              }
                                            }
                                          else
                                            {
                                              if(match_cons(t_53, sym_HV_2))
                                                {
                                                  u_53 = ATgetArgument(t_53, 0);
                                                  v_53 = ATgetArgument(t_53, 1);
                                                  {
                                                    ATerm d_58 = NULL,e_58 = NULL,f_58 = NULL,g_58 = NULL,h_58 = NULL;
                                                    ATerm i_58 = NULL;
                                                    t = not_null(u_53);
                                                    {
                                                      ATerm j_58 = NULL;
                                                      t = hs_text_0(t);
                                                      {
                                                        i_58 = t;
                                                        {
                                                          if(((g_58 != NULL) && (g_58 != i_58)))
                                                            _fail(i_58);
                                                          else
                                                            g_58 = i_58;
                                                          {
                                                            t = not_null(u_53);
                                                            {
                                                              ATerm k_58 = NULL;
                                                              t = vs_text_0(t);
                                                              {
                                                                j_58 = t;
                                                                {
                                                                  if(((d_58 != NULL) && (d_58 != j_58)))
                                                                    _fail(j_58);
                                                                  else
                                                                    d_58 = j_58;
                                                                  {
                                                                    t = not_null(g_58);
                                                                    {
                                                                      ATerm l_58 = NULL,n_58 = NULL;
                                                                      t = string_length_0(t);
                                                                      {
                                                                        k_58 = t;
                                                                        {
                                                                          if(((e_58 != NULL) && (e_58 != k_58)))
                                                                            _fail(k_58);
                                                                          else
                                                                            e_58 = k_58;
                                                                          {
                                                                            ATerm m_58 = NULL;
                                                                            t = not_null(u_53);
                                                                            {
                                                                              t = is_length_0(t);
                                                                              {
                                                                                m_58 = t;
                                                                                if(((l_58 != NULL) && (l_58 != m_58)))
                                                                                  _fail(m_58);
                                                                                else
                                                                                  l_58 = m_58;
                                                                              }
                                                                            }
                                                                            {
                                                                              t = (ATerm) ATmakeAppl(sym__2, not_null(w_53), not_null(l_58));
                                                                              {
                                                                                ATerm q_58 = NULL,s_58 = NULL;
                                                                                t = add_0(t);
                                                                                {
                                                                                  n_58 = t;
                                                                                  {
                                                                                    if(((f_58 != NULL) && (f_58 != n_58)))
                                                                                      _fail(n_58);
                                                                                    else
                                                                                      f_58 = n_58;
                                                                                    {
                                                                                      t = (ATerm) ATmakeAppl(sym__2, not_null(v_53), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, not_null(w_53))));
                                                                                      {
                                                                                        ATerm o_2 (ATerm t)
                                                                                        {
                                                                                          ATerm b_18 = t;
                                                                                          int c_18 = stack_ptr;
                                                                                          if((PushChoice() == 0))
                                                                                            {
                                                                                              ATerm p_2 (ATerm t)
                                                                                              {
                                                                                                t = not_null(e_58);
                                                                                                return(t);
                                                                                              }
                                                                                              t = hv_add_to_hbox_1(t, p_2);
                                                                                              LocalPopChoice(c_18);
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              t = b_18;
                                                                                              {
                                                                                                ATerm q_2 (ATerm t)
                                                                                                {
                                                                                                  t = not_null(e_58);
                                                                                                  return(t);
                                                                                                }
                                                                                                ATerm t_2 (ATerm t)
                                                                                                {
                                                                                                  t = not_null(f_58);
                                                                                                  return(t);
                                                                                                }
                                                                                                t = hv_in_new_vbox_2(t, q_2, t_2);
                                                                                              }
                                                                                            }
                                                                                          return(t);
                                                                                        }
                                                                                        t = foldl_1(t, o_2);
                                                                                        {
                                                                                          ATerm u_2 (ATerm t)
                                                                                          {
                                                                                            t = (ATerm) ATempty;
                                                                                            return(t);
                                                                                          }
                                                                                          t = reverse_acc_2(t, _id, u_2);
                                                                                          {
                                                                                            ATerm v_2 (ATerm t)
                                                                                            {
                                                                                              ATerm w_2 (ATerm t)
                                                                                              {
                                                                                                ATerm x_2 (ATerm t)
                                                                                                {
                                                                                                  t = (ATerm) ATempty;
                                                                                                  return(t);
                                                                                                }
                                                                                                t = reverse_acc_2(t, _id, x_2);
                                                                                                return(t);
                                                                                              }
                                                                                              t = _2(t, w_2, _id);
                                                                                              return(t);
                                                                                            }
                                                                                            t = map_1(t, v_2);
                                                                                            {
                                                                                              ATerm y_2 (ATerm t)
                                                                                              {
                                                                                                ATerm z_2 (ATerm t)
                                                                                                {
                                                                                                  ATerm o_58 = NULL;
                                                                                                  ATerm p_58 = NULL;
                                                                                                  p_58 = t;
                                                                                                  if(((o_58 != NULL) && (o_58 != p_58)))
                                                                                                    _fail(p_58);
                                                                                                  else
                                                                                                    o_58 = p_58;
                                                                                                  {
                                                                                                    t = (ATerm) ATmakeAppl(sym__2, not_null(g_58), not_null(o_58));
                                                                                                    t = separate_by_0(t);
                                                                                                  }
                                                                                                  return(t);
                                                                                                }
                                                                                                t = _2(t, z_2, _id);
                                                                                                return(t);
                                                                                              }
                                                                                              t = map_1(t, y_2);
                                                                                              {
                                                                                                ATerm r_58 = NULL;
                                                                                                r_58 = t;
                                                                                                if(((q_58 != NULL) && (q_58 != r_58)))
                                                                                                  _fail(r_58);
                                                                                                else
                                                                                                  q_58 = r_58;
                                                                                                {
                                                                                                  t = (ATerm) ATmakeAppl(sym__3, not_null(u_53), not_null(q_58), not_null(w_53));
                                                                                                  {
                                                                                                    t = format_vbox_0(t);
                                                                                                    {
                                                                                                      s_58 = t;
                                                                                                      if(((h_58 != NULL) && (h_58 != s_58)))
                                                                                                        _fail(s_58);
                                                                                                      else
                                                                                                        h_58 = s_58;
                                                                                                    }
                                                                                                  }
                                                                                                }
                                                                                              }
                                                                                            }
                                                                                          }
                                                                                        }
                                                                                      }
                                                                                    }
                                                                                  }
                                                                                }
                                                                              }
                                                                            }
                                                                          }
                                                                        }
                                                                      }
                                                                    }
                                                                  }
                                                                }
                                                              }
                                                            }
                                                          }
                                                        }
                                                      }
                                                    }
                                                    t = not_null(h_58);
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
  ATerm d_18 = t;
  int f_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = abox2text_0(t);
      LocalPopChoice(f_18);
    }
  else
    {
      t = d_18;
      {
        ATerm u_60 = NULL;
        ATerm v_60 = NULL;
        v_60 = t;
        if(((u_60 != NULL) && (u_60 != v_60)))
          _fail(v_60);
        else
          u_60 = v_60;
        {
          t = (ATerm) ATinsert(ATinsert(ATempty, not_null(u_60)), term_g_18);
          t = fatal_error_0(t);
        }
      }
    }
  return(t);
}
ATerm ReadFromFile_0 (ATerm t)
{
  ATerm y_60 = NULL;
  ATerm i_18 = t;
  int m_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_60 = NULL;
      z_60 = t;
      {
        if(((y_60 != NULL) && (y_60 != z_60)))
          _fail(z_60);
        else
          y_60 = z_60;
        t = SSL_ReadFromFile(not_null(y_60));
      }
      LocalPopChoice(m_18);
    }
  else
    {
      t = i_18;
      {
        ATerm a_3 (ATerm t)
        {
          t = term_u_18;
          return(t);
        }
        t = debug_1(t, a_3);
        _fail(t);
      }
    }
  return(t);
}
ATerm file_exists_0 (ATerm t)
{
  ATerm d_61 = NULL;
  ATerm f_61 = NULL;
  d_61 = t;
  {
    ATerm v_18;
    v_18 = t;
    {
      ATerm g_61 = NULL;
      t = term_w_18;
      {
        g_61 = t;
        if(((f_61 != NULL) && (f_61 != g_61)))
          _fail(g_61);
        else
          f_61 = g_61;
      }
    }
    t = v_18;
    {
      t = SSL_open_file(not_null(d_61), not_null(f_61));
      t = SSL_close_file(not_null(d_61));
    }
  }
  return(t);
}
ATerm read_from_0 (ATerm t)
{
  ATerm o_61 = NULL,p_61 = NULL;
  o_61 = t;
  n_61 :
  if(match_cons(o_61, sym_stdin_0))
    {
      ATerm q_61 = NULL;
      ATerm r_61 = NULL;
      t = term_x_18;
      {
        t = ReadFromFile_0(t);
        {
          r_61 = t;
          if(((q_61 != NULL) && (q_61 != r_61)))
            _fail(r_61);
          else
            q_61 = r_61;
        }
      }
      t = not_null(q_61);
    }
  else
    {
      if(match_cons(o_61, sym_FILE_1))
        {
          p_61 = ATgetArgument(o_61, 0);
          {
            ATerm t_61 = NULL;
            ATerm u_61 = NULL;
            t = not_null(p_61);
            {
              t = file_exists_0(t);
              {
                t = ReadFromFile_0(t);
                {
                  u_61 = t;
                  if(((t_61 != NULL) && (t_61 != u_61)))
                    _fail(u_61);
                  else
                    t_61 = u_61;
                }
              }
            }
            t = not_null(t_61);
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
  ATerm b_62 = NULL,c_62 = NULL,d_62 = NULL;
  b_62 = t;
  a_62 :
  if(match_cons(b_62, sym__2))
    {
      c_62 = ATgetArgument(b_62, 0);
      d_62 = ATgetArgument(b_62, 1);
      t = SSL_copy(not_null(c_62), not_null(d_62));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm stderr_0 (ATerm t)
{
  ATerm l_62 = NULL;
  l_62 = t;
  k_62 :
  if(match_cons(l_62, sym_stderr_0))
    {
      ATerm n_62 = NULL,p_62 = NULL;
      ATerm y_18;
      y_18 = t;
      {
        ATerm o_62 = NULL;
        t = SSLgetAnnotations(not_null(l_62));
        {
          o_62 = t;
          if(((n_62 != NULL) && (n_62 != o_62)))
            _fail(o_62);
          else
            n_62 = o_62;
        }
      }
      t = y_18;
      {
        ATerm q_62 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stderr_0), not_null(n_62));
        {
          q_62 = t;
          if(((p_62 != NULL) && (p_62 != q_62)))
            _fail(q_62);
          else
            p_62 = q_62;
        }
        t = not_null(p_62);
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
  ATerm y_62 = NULL;
  y_62 = t;
  x_62 :
  if(match_cons(y_62, sym_stdout_0))
    {
      ATerm a_63 = NULL,c_63 = NULL;
      ATerm z_18;
      z_18 = t;
      {
        ATerm b_63 = NULL;
        t = SSLgetAnnotations(not_null(y_62));
        {
          b_63 = t;
          if(((a_63 != NULL) && (a_63 != b_63)))
            _fail(b_63);
          else
            a_63 = b_63;
        }
      }
      t = z_18;
      {
        ATerm d_63 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stdout_0), not_null(a_63));
        {
          d_63 = t;
          if(((c_63 != NULL) && (c_63 != d_63)))
            _fail(d_63);
          else
            c_63 = d_63;
        }
        t = not_null(c_63);
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
  ATerm p_63 = NULL,q_63 = NULL;
  p_63 = t;
  o_63 :
  if(match_cons(p_63, sym_FILE_1))
    {
      q_63 = ATgetArgument(p_63, 0);
      {
        ATerm e_19 = t;
        int f_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_63 = NULL;
            ATerm t_63 = NULL;
            t = m_0(t);
            {
              t_63 = t;
              {
                if(((s_63 != NULL) && (s_63 != t_63)))
                  _fail(t_63);
                else
                  s_63 = t_63;
                {
                  ATerm g_19 = t;
                  int j_19 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = stdout_0(t);
                      LocalPopChoice(j_19);
                    }
                  else
                    {
                      t = g_19;
                      t = stderr_0(t);
                    }
                  {
                    t = (ATerm) ATmakeAppl(sym__2, not_null(q_63), not_null(s_63));
                    t = copy_file_0(t);
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(q_63));
            LocalPopChoice(f_19);
          }
        else
          {
            t = e_19;
            {
              ATerm k_19 = t;
              int q_19 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm v_63 = NULL;
                  ATerm w_63 = NULL;
                  t = m_0(t);
                  {
                    w_63 = t;
                    {
                      if(((v_63 != NULL) && (v_63 != w_63)))
                        _fail(w_63);
                      else
                        v_63 = w_63;
                      {
                        ATerm r_19 = t;
                        if((PushChoice() == 0))
                          {
                            ATerm s_19 = t;
                            int v_19 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = stdout_0(t);
                                LocalPopChoice(v_19);
                              }
                            else
                              {
                                t = s_19;
                                {
                                  ATerm w_19 = t;
                                  int x_19 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = stderr_0(t);
                                      LocalPopChoice(x_19);
                                    }
                                  else
                                    {
                                      t = w_19;
                                      {
                                        ATerm x_63 = NULL;
                                        x_63 = t;
                                        if(((q_63 != NULL) && (q_63 != x_63)))
                                          _fail(x_63);
                                        else
                                          q_63 = x_63;
                                      }
                                    }
                                }
                              }
                            PopChoice();
                            _fail(t);
                          }
                        else
                          {
                            t = r_19;
                          }
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(q_63), not_null(v_63));
                          t = copy_file_0(t);
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(q_63));
                  LocalPopChoice(q_19);
                }
              else
                {
                  t = k_19;
                  {
                    ATerm z_63 = NULL;
                    t = m_0(t);
                    {
                      z_63 = t;
                      if(((q_63 != NULL) && (q_63 != z_63)))
                        _fail(z_63);
                      else
                        q_63 = z_63;
                    }
                    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(q_63));
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
  ATerm j_64 = NULL,k_64 = NULL,l_64 = NULL;
  j_64 = t;
  i_64 :
  if(((ATgetType(j_64) == AT_LIST) && !(ATisEmpty(j_64))))
    {
      k_64 = ATgetFirst((ATermList) j_64);
      l_64 = (ATerm) ATgetNext((ATermList) j_64);
      t = not_null(l_64);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_pop_0 (ATerm t)
{
  ATerm r_64 = NULL,s_64 = NULL,v_64 = NULL;
  r_64 = t;
  q_64 :
  if(match_cons(r_64, sym__2))
    {
      s_64 = ATgetArgument(r_64, 0);
      v_64 = ATgetArgument(r_64, 1);
      {
        ATerm y_19;
        y_19 = t;
        {
          ATerm y_64 = NULL;
          ATerm z_64 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(s_64), not_null(v_64));
          {
            ATerm e_20 = t;
            int f_20 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                t = Tl_0(t);
                LocalPopChoice(f_20);
              }
            else
              {
                t = e_20;
                t = (ATerm) ATempty;
              }
            {
              z_64 = t;
              if(((y_64 != NULL) && (y_64 != z_64)))
                _fail(z_64);
              else
                y_64 = z_64;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(s_64), not_null(v_64), not_null(y_64));
            t = table_put_0(t);
          }
        }
        t = y_19;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm end_scope_1 (ATerm t, ATerm s_83 (ATerm))
{
  ATerm g_65 = NULL,h_65 = NULL,o_65 = NULL;
  ATerm g_20;
  g_20 = t;
  {
    ATerm p_65 = NULL;
    ATerm q_65 = NULL,r_65 = NULL,s_65 = NULL;
    t = s_83(t);
    {
      p_65 = t;
      {
        if(((o_65 != NULL) && (o_65 != p_65)))
          _fail(p_65);
        else
          o_65 = p_65;
        {
          ATerm j_20 = t;
          int k_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(o_65), term_p_7);
              t = table_get_0(t);
              LocalPopChoice(k_20);
            }
          else
            {
              t = j_20;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
            }
          {
            q_65 = t;
            f_65 :
            if(((ATgetType(q_65) == AT_LIST) && !(ATisEmpty(q_65))))
              {
                r_65 = ATgetFirst((ATermList) q_65);
                s_65 = (ATerm) ATgetNext((ATermList) q_65);
                {
                  if(((h_65 != NULL) && (h_65 != r_65)))
                    _fail(r_65);
                  else
                    h_65 = r_65;
                  {
                    if(((g_65 != NULL) && (g_65 != s_65)))
                      _fail(s_65);
                    else
                      g_65 = s_65;
                    {
                      t = (ATerm) ATmakeAppl(sym__3, not_null(o_65), term_p_7, not_null(g_65));
                      {
                        t = table_put_0(t);
                        {
                          t = not_null(h_65);
                          {
                            ATerm b_3 (ATerm t)
                            {
                              ATerm t_65 = NULL;
                              t_65 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(o_65), not_null(t_65));
                                t = table_pop_0(t);
                              }
                              return(t);
                            }
                            t = map_1(t, b_3);
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
  t = g_20;
  return(t);
}
ATerm remove_file_0 (ATerm t)
{
  ATerm b_66 = NULL;
  b_66 = t;
  t = SSL_remove(not_null(b_66));
  return(t);
}
ATerm restore_always_2 (ATerm t, ATerm x_65 (ATerm), ATerm y_65 (ATerm))
{
  ATerm m_20 = t;
  int o_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = x_65(t);
      t = y_65(t);
      LocalPopChoice(o_20);
    }
  else
    {
      t = m_20;
      {
        t = y_65(t);
        _fail(t);
      }
    }
  return(t);
}
ATerm begin_scope_1 (ATerm t, ATerm r_83 (ATerm))
{
  ATerm g_66 = NULL;
  ATerm r_20;
  r_20 = t;
  {
    ATerm h_66 = NULL;
    ATerm i_66 = NULL;
    t = r_83(t);
    {
      h_66 = t;
      {
        if(((g_66 != NULL) && (g_66 != h_66)))
          _fail(h_66);
        else
          g_66 = h_66;
        {
          ATerm j_66 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(g_66), term_p_7);
          {
            ATerm s_20 = t;
            int x_20 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(x_20);
              }
            else
              {
                t = s_20;
                t = (ATerm) ATempty;
              }
            {
              j_66 = t;
              if(((i_66 != NULL) && (i_66 != j_66)))
                _fail(j_66);
              else
                i_66 = j_66;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(g_66), term_p_7, (ATerm) ATinsert(CheckATermList(not_null(i_66)), (ATerm) ATempty));
            t = table_put_0(t);
          }
        }
      }
    }
  }
  t = r_20;
  return(t);
}
ATerm xtc_temp_files_1 (ATerm t, ATerm k_93 (ATerm))
{
  ATerm o_66 = NULL,p_66 = NULL;
  ATerm c_3 (ATerm t)
  {
    t = term_s_8;
    return(t);
  }
  t = begin_scope_1(t, c_3);
  {
    ATerm d_3 (ATerm t)
    {
      ATerm y_20;
      y_20 = t;
      {
        ATerm q_66 = NULL,r_66 = NULL,y_66 = NULL;
        ATerm d_21 = t;
        int e_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_i_21;
            t = table_get_0(t);
            LocalPopChoice(e_21);
          }
        else
          {
            t = d_21;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
          }
        {
          q_66 = t;
          n_66 :
          if(((ATgetType(q_66) == AT_LIST) && !(ATisEmpty(q_66))))
            {
              r_66 = ATgetFirst((ATermList) q_66);
              y_66 = (ATerm) ATgetNext((ATermList) q_66);
              {
                if(((p_66 != NULL) && (p_66 != r_66)))
                  _fail(r_66);
                else
                  p_66 = r_66;
                {
                  if(((o_66 != NULL) && (o_66 != y_66)))
                    _fail(y_66);
                  else
                    o_66 = y_66;
                  {
                    t = not_null(p_66);
                    {
                      ATerm e_3 (ATerm t)
                      {
                        ATerm j_21 = t;
                        int k_21 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = remove_file_0(t);
                            LocalPopChoice(k_21);
                          }
                        else
                          {
                            t = j_21;
                            {
                            }
                          }
                        return(t);
                      }
                      t = map_1(t, e_3);
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
      t = y_20;
      {
        ATerm f_3 (ATerm t)
        {
          t = term_s_8;
          return(t);
        }
        t = end_scope_1(t, f_3);
      }
      return(t);
    }
    t = restore_always_2(t, k_93, d_3);
  }
  return(t);
}
ATerm xtc_io_1 (ATerm t, ATerm l_93 (ATerm))
{
  ATerm g_3 (ATerm t)
  {
    ATerm l_21 = t;
    int m_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_67 = NULL;
        ATerm d_67 = NULL;
        t = term_n_21;
        {
          t = get_config_0(t);
          {
            d_67 = t;
            if(((c_67 != NULL) && (c_67 != d_67)))
              _fail(d_67);
            else
              c_67 = d_67;
          }
        }
        t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(c_67));
        LocalPopChoice(m_21);
      }
    else
      {
        t = l_21;
        t = term_x_18;
      }
    {
      t = l_93(t);
      {
        ATerm h_3 (ATerm t)
        {
          ATerm o_21 = t;
          int p_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = term_q_21;
              t = get_config_0(t);
              LocalPopChoice(p_21);
            }
          else
            {
              t = o_21;
              t = term_r_21;
            }
          return(t);
        }
        t = copy_to_1(t, h_3);
      }
    }
    return(t);
  }
  t = xtc_temp_files_1(t, g_3);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm g_67 = NULL;
  g_67 = t;
  t = SSL_string_to_int(not_null(g_67));
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm o_67 = NULL,p_67 = NULL,q_67 = NULL,r_67 = NULL,s_67 = NULL;
  o_67 = t;
  m_67 :
  if(match_string(o_67, "register-usage-info"))
    {
      t = register_usage_1(t, l_0);
    }
  else
    {
      if(((ATgetType(o_67) == AT_LIST) && !(ATisEmpty(o_67))))
        {
          p_67 = ATgetFirst((ATermList) o_67);
          q_67 = (ATerm) ATgetNext((ATermList) o_67);
          n_67 :
          if(((ATgetType(q_67) == AT_LIST) && !(ATisEmpty(q_67))))
            {
              r_67 = ATgetFirst((ATermList) q_67);
              s_67 = (ATerm) ATgetNext((ATermList) q_67);
              {
                ATerm w_67 = NULL;
                ATerm s_21;
                s_21 = t;
                {
                  t = not_null(p_67);
                  t = j_0(t);
                }
                t = s_21;
                {
                  ATerm x_67 = NULL;
                  t = not_null(r_67);
                  {
                    t = k_0(t);
                    {
                      x_67 = t;
                      if(((w_67 != NULL) && (w_67 != x_67)))
                        _fail(x_67);
                      else
                        w_67 = x_67;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(s_67)), not_null(w_67));
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
  ATerm i_3 (ATerm t)
  {
    ATerm c_68 = NULL;
    c_68 = t;
    b_68 :
    if(!(match_string(c_68, "-v")))
      {
        if(!(match_string(c_68, "--version")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm j_3 (ATerm t)
  {
    t = term_u_21;
    t = set_config_0(t);
    t = term_v_21;
    return(t);
  }
  ATerm k_3 (ATerm t)
  {
    t = term_w_21;
    return(t);
  }
  t = Option_3(t, i_3, j_3, k_3);
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm l_3 (ATerm t)
  {
    ATerm f_68 = NULL;
    f_68 = t;
    d_68 :
    if(!(match_string(f_68, "-k")))
      {
        if(!(match_string(f_68, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm m_3 (ATerm t)
  {
    ATerm x_21;
    x_21 = t;
    {
      ATerm g_68 = NULL;
      ATerm h_68 = NULL;
      t = string_to_int_0(t);
      {
        h_68 = t;
        if(((g_68 != NULL) && (g_68 != h_68)))
          _fail(h_68);
        else
          g_68 = h_68;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_y_21, not_null(g_68));
        t = set_config_0(t);
      }
    }
    t = x_21;
    return(t);
  }
  ATerm n_3 (ATerm t)
  {
    t = term_z_21;
    return(t);
  }
  t = ArgOption_3(t, l_3, m_3, n_3);
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm a_22 = t;
  int b_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_3 (ATerm t)
      {
        ATerm o_68 = NULL;
        o_68 = t;
        j_68 :
        if(!(match_string(o_68, "-S")))
          {
            if(!(match_string(o_68, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm p_3 (ATerm t)
      {
        t = term_d_22;
        t = set_config_0(t);
        t = term_e_22;
        return(t);
      }
      ATerm q_3 (ATerm t)
      {
        t = term_f_22;
        return(t);
      }
      t = Option_3(t, o_3, p_3, q_3);
      LocalPopChoice(b_22);
    }
  else
    {
      t = a_22;
      {
        ATerm g_22 = t;
        int h_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_3 (ATerm t)
            {
              ATerm p_68 = NULL;
              p_68 = t;
              k_68 :
              if(!(match_string(p_68, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm s_3 (ATerm t)
            {
              ATerm s_68 = NULL;
              ATerm i_22;
              i_22 = t;
              {
                ATerm q_68 = NULL;
                ATerm r_68 = NULL;
                t = string_to_int_0(t);
                {
                  r_68 = t;
                  if(((q_68 != NULL) && (q_68 != r_68)))
                    _fail(r_68);
                  else
                    q_68 = r_68;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_c_22, not_null(q_68));
                  t = set_config_0(t);
                }
              }
              t = i_22;
              {
                ATerm t_68 = NULL;
                t_68 = t;
                if(((s_68 != NULL) && (s_68 != t_68)))
                  _fail(t_68);
                else
                  s_68 = t_68;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(s_68));
              }
              return(t);
            }
            ATerm t_3 (ATerm t)
            {
              t = term_j_22;
              return(t);
            }
            t = ArgOption_3(t, r_3, s_3, t_3);
            LocalPopChoice(h_22);
          }
        else
          {
            t = g_22;
            {
              ATerm u_3 (ATerm t)
              {
                ATerm u_68 = NULL;
                u_68 = t;
                n_68 :
                if(!(match_string(u_68, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm a_4 (ATerm t)
              {
                t = term_l_22;
                t = set_config_0(t);
                t = term_m_22;
                return(t);
              }
              ATerm b_4 (ATerm t)
              {
                t = term_n_22;
                return(t);
              }
              t = Option_3(t, u_3, a_4, b_4);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0 (ATerm t)
{
  ATerm o_22 = t;
  int p_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
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
            t = keep_option_0(t);
            LocalPopChoice(r_22);
          }
        else
          {
            t = q_22;
            t = version_option_0(t);
          }
      }
    }
  return(t);
}
ATerm output_option_0 (ATerm t)
{
  ATerm j_4 (ATerm t)
  {
    ATerm a_69 = NULL;
    a_69 = t;
    x_68 :
    if(!(match_string(a_69, "-o")))
      {
        if(!(match_string(a_69, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm k_4 (ATerm t)
  {
    ATerm d_69 = NULL;
    ATerm s_22;
    s_22 = t;
    {
      ATerm b_69 = NULL;
      ATerm c_69 = NULL;
      c_69 = t;
      if(((b_69 != NULL) && (b_69 != c_69)))
        _fail(c_69);
      else
        b_69 = c_69;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_q_21, not_null(b_69));
        t = set_config_0(t);
      }
    }
    t = s_22;
    {
      ATerm e_69 = NULL;
      e_69 = t;
      if(((d_69 != NULL) && (d_69 != e_69)))
        _fail(e_69);
      else
        d_69 = e_69;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(d_69));
    }
    return(t);
  }
  ATerm l_4 (ATerm t)
  {
    t = term_t_22;
    return(t);
  }
  t = ArgOption_3(t, j_4, k_4, l_4);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm u_22 = t;
  int v_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      LocalPopChoice(v_22);
    }
  else
    {
      t = u_22;
      {
        ATerm m_4 (ATerm t)
        {
          ATerm i_69 = NULL;
          i_69 = t;
          h_69 :
          if(!(match_string(i_69, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm o_4 (ATerm t)
        {
          t = term_x_22;
          t = set_config_0(t);
          t = term_y_22;
          return(t);
        }
        ATerm p_4 (ATerm t)
        {
          t = term_z_22;
          return(t);
        }
        t = Option_3(t, m_4, o_4, p_4);
      }
    }
  return(t);
}
ATerm input_option_0 (ATerm t)
{
  ATerm y_4 (ATerm t)
  {
    ATerm m_69 = NULL;
    m_69 = t;
    j_69 :
    if(!(match_string(m_69, "-i")))
      {
        if(!(match_string(m_69, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm z_4 (ATerm t)
  {
    ATerm p_69 = NULL;
    ATerm a_23;
    a_23 = t;
    {
      ATerm n_69 = NULL;
      ATerm o_69 = NULL;
      o_69 = t;
      if(((n_69 != NULL) && (n_69 != o_69)))
        _fail(o_69);
      else
        n_69 = o_69;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_n_21, not_null(n_69));
        t = set_config_0(t);
      }
    }
    t = a_23;
    {
      ATerm q_69 = NULL;
      q_69 = t;
      if(((p_69 != NULL) && (p_69 != q_69)))
        _fail(q_69);
      else
        p_69 = q_69;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(p_69));
    }
    return(t);
  }
  ATerm a_5 (ATerm t)
  {
    t = term_b_23;
    return(t);
  }
  t = ArgOption_3(t, y_4, z_4, a_5);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm c_23 = t;
  int d_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      LocalPopChoice(d_23);
    }
  else
    {
      t = c_23;
      {
        ATerm e_23 = t;
        int f_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0(t);
            LocalPopChoice(f_23);
          }
        else
          {
            t = e_23;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm abox2text_options_0 (ATerm t)
{
  ATerm g_23 = t;
  int h_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = io_options_0(t);
      LocalPopChoice(h_23);
    }
  else
    {
      t = g_23;
      {
        ATerm b_5 (ATerm t)
        {
          ATerm v_69 = NULL;
          v_69 = t;
          t_69 :
          if(!(match_string(v_69, "-w")))
            {
              if(!(match_string(v_69, "--width")))
                {
                  _fail(t);
                }
            }
          return(t);
        }
        ATerm f_5 (ATerm t)
        {
          ATerm i_23;
          i_23 = t;
          {
            ATerm w_69 = NULL;
            ATerm x_69 = NULL;
            t = string_to_int_0(t);
            {
              x_69 = t;
              if(((w_69 != NULL) && (w_69 != x_69)))
                _fail(x_69);
              else
                w_69 = x_69;
            }
            {
              t = (ATerm) ATmakeAppl(sym__2, term_i_17, not_null(w_69));
              t = set_config_0(t);
            }
          }
          t = i_23;
          return(t);
        }
        ATerm g_5 (ATerm t)
        {
          t = term_j_23;
          return(t);
        }
        t = ArgOption_3(t, b_5, f_5, g_5);
      }
    }
  return(t);
}
ATerm default_usage_0 (ATerm t)
{
  ATerm b_70 = NULL;
  ATerm k_23;
  k_23 = t;
  {
    ATerm i_5 (ATerm t)
    {
      ATerm c_70 = NULL,d_70 = NULL;
      c_70 = t;
      a_70 :
      if(match_cons(c_70, sym_Program_1))
        {
          d_70 = ATgetArgument(c_70, 0);
          if(((b_70 != NULL) && (b_70 != d_70)))
            _fail(d_70);
          else
            b_70 = d_70;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = fetch_1(t, i_5);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_b_9, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_m_23), not_null(b_70)), term_l_23));
      {
        t = printnl_0(t);
        {
          t = term_f_9;
          t = exit_0(t);
        }
      }
    }
  }
  t = k_23;
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_b_9, (ATerm) ATinsert(ATempty, term_n_23));
  {
    t = printnl_0(t);
    {
      t = term_f_9;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm g_70 = NULL;
  g_70 = t;
  t = SSL_TicksToSeconds(not_null(g_70));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm l_70 = NULL,m_70 = NULL,n_70 = NULL;
  l_70 = t;
  k_70 :
  if(match_cons(l_70, sym__2))
    {
      m_70 = ATgetArgument(l_70, 0);
      n_70 = ATgetArgument(l_70, 1);
      {
        ATerm o_23 = t;
        int p_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(m_70), not_null(n_70));
            LocalPopChoice(p_23);
          }
        else
          {
            t = o_23;
            t = SSL_addr(not_null(m_70), not_null(n_70));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm s_79 (ATerm), ATerm t_79 (ATerm))
{
  ATerm q_23 = t;
  int r_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = s_79(t);
      LocalPopChoice(r_23);
    }
  else
    {
      t = q_23;
      {
        ATerm u_70 = NULL,v_70 = NULL,w_70 = NULL;
        u_70 = t;
        t_70 :
        if(((ATgetType(u_70) == AT_LIST) && !(ATisEmpty(u_70))))
          {
            v_70 = ATgetFirst((ATermList) u_70);
            w_70 = (ATerm) ATgetNext((ATermList) u_70);
            {
              ATerm z_70 = NULL;
              ATerm a_71 = NULL;
              t = not_null(w_70);
              {
                t = foldr_2(t, s_79, t_79);
                {
                  a_71 = t;
                  if(((z_70 != NULL) && (z_70 != a_71)))
                    _fail(a_71);
                  else
                    z_70 = a_71;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(v_70), not_null(z_70));
                t = t_79(t);
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
ATerm crush_2 (ATerm t, ATerm q_78 (ATerm), ATerm r_78 (ATerm))
{
  ATerm h_71 = NULL;
  ATerm j_71 = NULL;
  h_71 = t;
  {
    ATerm k_71 = NULL;
    ATerm m_71 = NULL,n_71 = NULL,o_71 = NULL;
    t = not_null(h_71);
    {
      k_71 = t;
      {
        t = SSL_explode_term(not_null(k_71));
        {
          m_71 = t;
          g_71 :
          if(match_cons(m_71, sym__2))
            {
              n_71 = ATgetArgument(m_71, 0);
              o_71 = ATgetArgument(m_71, 1);
              if(((j_71 != NULL) && (j_71 != o_71)))
                _fail(o_71);
              else
                j_71 = o_71;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(j_71);
      t = foldr_2(t, q_78, r_78);
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
    ATerm j_5 (ATerm t)
    {
      t = term_i_10;
      return(t);
    }
    t = crush_2(t, j_5, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm u_71 = NULL,v_71 = NULL,w_71 = NULL;
  u_71 = t;
  t_71 :
  if(match_cons(u_71, sym__2))
    {
      v_71 = ATgetArgument(u_71, 0);
      w_71 = ATgetArgument(u_71, 1);
      {
        ATerm s_23;
        s_23 = t;
        {
          ATerm t_23 = t;
          int u_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(v_71), not_null(w_71));
              LocalPopChoice(u_23);
            }
          else
            {
              t = t_23;
              t = SSL_gtr(not_null(v_71), not_null(w_71));
            }
        }
        t = s_23;
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
  ATerm c_72 = NULL;
  ATerm v_23 = t;
  int w_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_72 = NULL,e_72 = NULL,f_72 = NULL;
      d_72 = t;
      b_72 :
      if(match_cons(d_72, sym__2))
        {
          e_72 = ATgetArgument(d_72, 0);
          f_72 = ATgetArgument(d_72, 1);
          {
            if(((c_72 != NULL) && (c_72 != e_72)))
              _fail(e_72);
            else
              c_72 = e_72;
            if(((c_72 != NULL) && (c_72 != f_72)))
              _fail(f_72);
            else
              c_72 = f_72;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(w_23);
    }
  else
    {
      t = v_23;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm y_86 (ATerm))
{
  ATerm x_23 = t;
  int y_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_23;
      z_23 = t;
      {
        ATerm i_72 = NULL;
        ATerm j_72 = NULL;
        t = term_c_22;
        {
          t = get_config_0(t);
          {
            j_72 = t;
            if(((i_72 != NULL) && (i_72 != j_72)))
              _fail(j_72);
            else
              i_72 = j_72;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(i_72), term_f_9);
          t = geq_0(t);
        }
      }
      t = z_23;
      t = y_86(t);
      LocalPopChoice(y_23);
    }
  else
    {
      t = x_23;
      {
      }
    }
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm k_5 (ATerm t)
  {
    ATerm n_72 = NULL,p_72 = NULL;
    ATerm a_24;
    a_24 = t;
    {
      ATerm o_72 = NULL;
      t = run_time_0(t);
      {
        o_72 = t;
        if(((n_72 != NULL) && (n_72 != o_72)))
          _fail(o_72);
        else
          n_72 = o_72;
      }
    }
    t = a_24;
    {
      ATerm q_72 = NULL;
      t = term_b_24;
      {
        t = get_config_0(t);
        {
          q_72 = t;
          if(((p_72 != NULL) && (p_72 != q_72)))
            _fail(q_72);
          else
            p_72 = q_72;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_b_9, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_d_24), not_null(n_72)), term_c_24), not_null(p_72)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, k_5);
  {
    t = term_i_10;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm x_72 = NULL;
  x_72 = t;
  w_72 :
  if(match_cons(x_72, sym_Version_0))
    {
      ATerm a_73 = NULL,d_73 = NULL;
      ATerm e_24;
      e_24 = t;
      {
        ATerm b_73 = NULL;
        t = SSLgetAnnotations(not_null(x_72));
        {
          b_73 = t;
          if(((a_73 != NULL) && (a_73 != b_73)))
            _fail(b_73);
          else
            a_73 = b_73;
        }
      }
      t = e_24;
      {
        ATerm g_73 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(a_73));
        {
          g_73 = t;
          if(((d_73 != NULL) && (d_73 != g_73)))
            _fail(g_73);
          else
            d_73 = g_73;
        }
        t = not_null(d_73);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm e_85 (ATerm))
{
  ATerm l_5 (ATerm t)
  {
    ATerm f_24 = t;
    int g_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(g_24);
      }
    else
      {
        t = f_24;
        {
          ATerm h_24 = t;
          int i_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(i_24);
            }
          else
            {
              t = h_24;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = fetch_1(t, l_5);
  t = e_85(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm l_73 = NULL;
  l_73 = t;
  t = SSL_table_create(not_null(l_73));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm v_73 = NULL;
  v_73 = t;
  {
    ATerm j_24;
    j_24 = t;
    {
      t = term_k_24;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_k_24, term_l_24, not_null(v_73));
          t = table_put_0(t);
        }
      }
    }
    t = j_24;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm b_74 = NULL;
  b_74 = t;
  t = SSL_table_destroy(not_null(b_74));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm f_74 = NULL;
  f_74 = t;
  t = SSL_exit(not_null(f_74));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm j_74 = NULL,k_74 = NULL,l_74 = NULL;
  j_74 = t;
  i_74 :
  if(((ATgetType(j_74) == AT_LIST) && ATisEmpty(j_74)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(j_74) == AT_LIST) && !(ATisEmpty(j_74))))
        {
          k_74 = ATgetFirst((ATermList) j_74);
          l_74 = (ATerm) ATgetNext((ATermList) j_74);
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
  ATerm m_24;
  m_24 = t;
  {
    ATerm o_74 = NULL;
    ATerm r_74 = NULL;
    ATerm n_24 = t;
    int o_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        LocalPopChoice(o_24);
      }
    else
      {
        t = n_24;
        {
          ATerm p_74 = NULL;
          ATerm q_74 = NULL;
          q_74 = t;
          if(((p_74 != NULL) && (p_74 != q_74)))
            _fail(q_74);
          else
            p_74 = q_74;
          t = (ATerm) ATinsert(ATempty, not_null(p_74));
        }
      }
    {
      r_74 = t;
      if(((o_74 != NULL) && (o_74 != r_74)))
        _fail(r_74);
      else
        o_74 = r_74;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_r_21, not_null(o_74));
      t = printnl_0(t);
    }
  }
  t = m_24;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm c_89 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm h_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm a_75 = NULL,b_75 = NULL,c_75 = NULL;
  c_75 = t;
  z_74 :
  if(((ATgetType(c_75) == AT_LIST) && !(ATisEmpty(c_75))))
    {
      a_75 = ATgetFirst((ATermList) c_75);
      b_75 = (ATerm) ATgetNext((ATermList) c_75);
      {
        ATerm l_75 = NULL;
        t = not_null(b_75);
        {
          ATerm p_24;
          p_24 = t;
          {
            ATerm m_75 = NULL,o_75 = NULL,r_75 = NULL;
            ATerm q_24;
            q_24 = t;
            {
              ATerm n_75 = NULL;
              t = i_0(t);
              {
                n_75 = t;
                if(((m_75 != NULL) && (m_75 != n_75)))
                  _fail(n_75);
                else
                  m_75 = n_75;
              }
            }
            t = q_24;
            {
              ATerm q_75 = NULL;
              t = not_null(a_75);
              {
                t = h_0(t);
                {
                  q_75 = t;
                  if(((o_75 != NULL) && (o_75 != q_75)))
                    _fail(q_75);
                  else
                    o_75 = q_75;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(m_75)), not_null(o_75));
                {
                  r_75 = t;
                  if(((l_75 != NULL) && (l_75 != r_75)))
                    _fail(r_75);
                  else
                    l_75 = r_75;
                }
              }
            }
          }
          t = p_24;
          {
            ATerm m_5 (ATerm t)
            {
              t = not_null(l_75);
              return(t);
            }
            t = reverse_acc_2(t, h_0, m_5);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(c_75) == AT_LIST) && ATisEmpty(c_75)))
        {
          {
            t = term_d_8;
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
ATerm short_description_1 (ATerm t, ATerm b_89 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm t_64 (ATerm))
{
  ATerm c_76 = NULL,d_76 = NULL;
  c_76 = t;
  b_76 :
  if(match_cons(c_76, sym_Program_1))
    {
      d_76 = ATgetArgument(c_76, 0);
      {
        ATerm g_76 = NULL,i_76 = NULL;
        ATerm h_76 = NULL;
        t = SSLgetAnnotations(not_null(c_76));
        {
          h_76 = t;
          if(((g_76 != NULL) && (g_76 != h_76)))
            _fail(h_76);
          else
            g_76 = h_76;
        }
        {
          t = not_null(d_76);
          {
            ATerm k_76 = NULL;
            t = t_64(t);
            {
              i_76 = t;
              {
                ATerm l_76 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(i_76)), not_null(g_76));
                {
                  l_76 = t;
                  if(((k_76 != NULL) && (k_76 != l_76)))
                    _fail(l_76);
                  else
                    k_76 = l_76;
                }
                t = not_null(k_76);
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
  ATerm t_76 = NULL;
  ATerm r_24 = t;
  int s_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_76 = NULL;
      t = term_b_24;
      {
        t = get_config_0(t);
        {
          u_76 = t;
          if(((t_76 != NULL) && (t_76 != u_76)))
            _fail(u_76);
          else
            t_76 = u_76;
        }
      }
      LocalPopChoice(s_24);
    }
  else
    {
      t = r_24;
      {
        ATerm t_5 (ATerm t)
        {
          ATerm u_5 (ATerm t)
          {
            ATerm v_76 = NULL;
            v_76 = t;
            if(((t_76 != NULL) && (t_76 != v_76)))
              _fail(v_76);
            else
              t_76 = v_76;
            return(t);
          }
          t = Program_1(t, u_5);
          return(t);
        }
        t = fetch_1(t, t_5);
      }
    }
  {
    t = term_t_24;
    {
      t = echo_0(t);
      {
        t = term_w_24;
        {
          t = table_get_0(t);
          {
            ATerm v_5 (ATerm t)
            {
              t = (ATerm) ATempty;
              return(t);
            }
            t = reverse_acc_2(t, _id, v_5);
            {
              ATerm w_5 (ATerm t)
              {
                ATerm w_76 = NULL;
                ATerm x_76 = NULL;
                x_76 = t;
                if(((w_76 != NULL) && (w_76 != x_76)))
                  _fail(x_76);
                else
                  w_76 = x_76;
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(w_76)), term_x_24);
                  t = echo_0(t);
                }
                return(t);
              }
              t = map_1(t, w_5);
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
  ATerm y_24;
  y_24 = t;
  {
    ATerm c_77 = NULL;
    ATerm d_77 = NULL;
    d_77 = t;
    if(((c_77 != NULL) && (c_77 != d_77)))
      _fail(d_77);
    else
      c_77 = d_77;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_b_9, (ATerm) ATinsert(ATempty, not_null(c_77)));
      t = printnl_0(t);
    }
  }
  t = y_24;
  return(t);
}
ATerm say_1 (ATerm t, ATerm d_84 (ATerm))
{
  ATerm z_24;
  z_24 = t;
  {
    t = d_84(t);
    t = debug_0(t);
  }
  t = z_24;
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm u_64 (ATerm))
{
  ATerm k_77 = NULL,l_77 = NULL;
  k_77 = t;
  j_77 :
  if(match_cons(k_77, sym_Undefined_1))
    {
      l_77 = ATgetArgument(k_77, 0);
      {
        ATerm o_77 = NULL,q_77 = NULL;
        ATerm p_77 = NULL;
        t = SSLgetAnnotations(not_null(k_77));
        {
          p_77 = t;
          if(((o_77 != NULL) && (o_77 != p_77)))
            _fail(p_77);
          else
            o_77 = p_77;
        }
        {
          t = not_null(l_77);
          {
            ATerm s_77 = NULL;
            t = u_64(t);
            {
              q_77 = t;
              {
                ATerm t_77 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(q_77)), not_null(o_77));
                {
                  t_77 = t;
                  if(((s_77 != NULL) && (s_77 != t_77)))
                    _fail(t_77);
                  else
                    s_77 = t_77;
                }
                t = not_null(s_77);
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
ATerm fetch_1 (ATerm t, ATerm n_73 (ATerm))
{
  ATerm y_77 (ATerm t)
  {
    ATerm a_25 = t;
    int b_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, n_73, _id);
        LocalPopChoice(b_25);
      }
    else
      {
        t = a_25;
        t = Cons_2(t, _id, y_77);
      }
    return(t);
  }
  t = y_77(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm b_88 (ATerm))
{
  t = fetch_1(t, b_88);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm d_78 = NULL;
  d_78 = t;
  c_78 :
  if(match_cons(d_78, sym_Help_0))
    {
      ATerm f_78 = NULL,h_78 = NULL;
      ATerm c_25;
      c_25 = t;
      {
        ATerm g_78 = NULL;
        t = SSLgetAnnotations(not_null(d_78));
        {
          g_78 = t;
          if(((f_78 != NULL) && (f_78 != g_78)))
            _fail(g_78);
          else
            f_78 = g_78;
        }
      }
      t = c_25;
      {
        ATerm i_78 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(f_78));
        {
          i_78 = t;
          if(((h_78 != NULL) && (h_78 != i_78)))
            _fail(i_78);
          else
            h_78 = i_78;
        }
        t = not_null(h_78);
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
  ATerm n_78 = NULL;
  n_78 = t;
  t = SSL_implode_string(not_null(n_78));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm e_25 = t;
  int f_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(f_25);
    }
  else
    {
      t = e_25;
      {
        ATerm u_78 = NULL,v_78 = NULL,w_78 = NULL;
        u_78 = t;
        t_78 :
        if(((ATgetType(u_78) == AT_LIST) && !(ATisEmpty(u_78))))
          {
            v_78 = ATgetFirst((ATermList) u_78);
            w_78 = (ATerm) ATgetNext((ATermList) u_78);
            {
              t = not_null(v_78);
              {
                ATerm x_5 (ATerm t)
                {
                  t = not_null(w_78);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, x_5);
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
  ATerm k_79 = NULL;
  ATerm m_79 = NULL;
  k_79 = t;
  {
    ATerm n_79 = NULL;
    ATerm p_79 = NULL,q_79 = NULL,r_79 = NULL;
    t = not_null(k_79);
    {
      n_79 = t;
      {
        t = SSL_explode_term(not_null(n_79));
        {
          p_79 = t;
          i_79 :
          if(match_cons(p_79, sym__2))
            {
              q_79 = ATgetArgument(p_79, 0);
              r_79 = ATgetArgument(p_79, 1);
              j_79 :
              if(match_string(q_79, ""))
                {
                  if(((m_79 != NULL) && (m_79 != r_79)))
                    _fail(r_79);
                  else
                    m_79 = r_79;
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
      t = not_null(m_79);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm t_73 (ATerm))
{
  ATerm c_80 (ATerm t)
  {
    ATerm g_25 = t;
    int j_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, c_80);
        LocalPopChoice(j_25);
      }
    else
      {
        t = g_25;
        {
          t = Nil_0(t);
          t = t_73(t);
        }
      }
    return(t);
  }
  t = c_80(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm f_80 = NULL,h_80 = NULL,k_80 = NULL;
  f_80 = t;
  e_80 :
  if(match_cons(f_80, sym__2))
    {
      h_80 = ATgetArgument(f_80, 0);
      k_80 = ATgetArgument(f_80, 1);
      {
        t = not_null(h_80);
        {
          ATerm y_5 (ATerm t)
          {
            t = not_null(k_80);
            return(t);
          }
          t = at_end_1(t, y_5);
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
  ATerm k_25 = t;
  int l_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      LocalPopChoice(l_25);
    }
  else
    {
      t = k_25;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm p_80 = NULL;
  p_80 = t;
  t = SSL_explode_string(not_null(p_80));
  return(t);
}
ATerm _2 (ATerm t, ATerm o_56 (ATerm), ATerm p_56 (ATerm))
{
  ATerm a_81 = NULL,b_81 = NULL,c_81 = NULL;
  a_81 = t;
  z_80 :
  if(match_cons(a_81, sym__2))
    {
      b_81 = ATgetArgument(a_81, 0);
      c_81 = ATgetArgument(a_81, 1);
      {
        ATerm g_81 = NULL,k_81 = NULL;
        ATerm j_81 = NULL;
        t = SSLgetAnnotations(not_null(a_81));
        {
          j_81 = t;
          if(((g_81 != NULL) && (g_81 != j_81)))
            _fail(j_81);
          else
            g_81 = j_81;
        }
        {
          t = not_null(b_81);
          {
            ATerm m_81 = NULL;
            t = o_56(t);
            {
              k_81 = t;
              {
                t = not_null(c_81);
                {
                  ATerm o_81 = NULL;
                  t = p_56(t);
                  {
                    m_81 = t;
                    {
                      ATerm p_81 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(k_81), not_null(m_81)), not_null(g_81));
                      {
                        p_81 = t;
                        if(((o_81 != NULL) && (o_81 != p_81)))
                          _fail(p_81);
                        else
                          o_81 = p_81;
                      }
                      t = not_null(o_81);
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
    ATerm m_25 = t;
    int n_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = conc_two_lists_0(t);
        LocalPopChoice(n_25);
      }
    else
      {
        t = m_25;
        t = conc_more_lists_0(t);
      }
    t = implode_string_0(t);
  }
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm x_81 = NULL,y_81 = NULL,z_81 = NULL;
  x_81 = t;
  w_81 :
  if(match_cons(x_81, sym__2))
    {
      y_81 = ATgetArgument(x_81, 0);
      z_81 = ATgetArgument(x_81, 1);
      {
        ATerm q_25;
        q_25 = t;
        t = SSL_printnl(not_null(y_81), not_null(z_81));
        t = q_25;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm c_84 (ATerm))
{
  ATerm r_25;
  r_25 = t;
  {
    ATerm f_82 = NULL,h_82 = NULL;
    ATerm s_25;
    s_25 = t;
    {
      ATerm g_82 = NULL;
      t = c_84(t);
      {
        g_82 = t;
        if(((f_82 != NULL) && (f_82 != g_82)))
          _fail(g_82);
        else
          f_82 = g_82;
      }
    }
    t = s_25;
    {
      ATerm i_82 = NULL;
      i_82 = t;
      if(((h_82 != NULL) && (h_82 != i_82)))
        _fail(i_82);
      else
        h_82 = i_82;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_b_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(h_82)), not_null(f_82)));
        t = printnl_0(t);
      }
    }
  }
  t = r_25;
  return(t);
}
ATerm map_1 (ATerm t, ATerm e_73 (ATerm))
{
  ATerm l_82 (ATerm t)
  {
    ATerm t_25 = t;
    int u_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(u_25);
      }
    else
      {
        t = t_25;
        t = Cons_2(t, e_73, l_82);
      }
    return(t);
  }
  t = l_82(t);
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm o_82 = NULL;
  o_82 = t;
  t = SSL_is_string(not_null(o_82));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm a_26 = t;
  int b_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(b_26);
    }
  else
    {
      t = a_26;
      {
        ATerm c_26 = t;
        int f_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_6 (ATerm t)
            {
              ATerm g_26 = t;
              int j_26 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = eval_config_0(t);
                  LocalPopChoice(j_26);
                }
              else
                {
                  t = g_26;
                  {
                  }
                }
              return(t);
            }
            t = map_1(t, d_6);
            LocalPopChoice(f_26);
          }
        else
          {
            t = c_26;
            {
              ATerm x_82 = NULL,y_82 = NULL,z_82 = NULL;
              x_82 = t;
              w_82 :
              if(match_cons(x_82, sym_Path_1))
                {
                  y_82 = ATgetArgument(x_82, 0);
                  t = not_null(y_82);
                }
              else
                {
                  if(match_cons(x_82, sym_Var_1))
                    {
                      y_82 = ATgetArgument(x_82, 0);
                      {
                        t = not_null(y_82);
                        {
                          ATerm k_26 = t;
                          int l_26 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(l_26);
                            }
                          else
                            {
                              t = k_26;
                              {
                                ATerm h_6 (ATerm t)
                                {
                                  t = term_m_26;
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
                      if(match_cons(x_82, sym_Prefix_2))
                        {
                          y_82 = ATgetArgument(x_82, 0);
                          z_82 = ATgetArgument(x_82, 1);
                          {
                            ATerm e_83 = NULL,g_83 = NULL;
                            ATerm n_26;
                            n_26 = t;
                            {
                              ATerm f_83 = NULL;
                              t = not_null(y_82);
                              {
                                t = eval_config_0(t);
                                {
                                  f_83 = t;
                                  if(((e_83 != NULL) && (e_83 != f_83)))
                                    _fail(f_83);
                                  else
                                    e_83 = f_83;
                                }
                              }
                            }
                            t = n_26;
                            {
                              ATerm h_83 = NULL;
                              t = not_null(z_82);
                              {
                                t = eval_config_0(t);
                                {
                                  h_83 = t;
                                  if(((g_83 != NULL) && (g_83 != h_83)))
                                    _fail(h_83);
                                  else
                                    g_83 = h_83;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(e_83), not_null(g_83));
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
  ATerm q_83 = NULL;
  q_83 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_q_26, not_null(q_83));
    {
      t = table_get_0(t);
      {
        ATerm r_26 = t;
        int s_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = eval_config_0(t);
            {
              ATerm t_26;
              t_26 = t;
              {
                ATerm u_83 = NULL;
                ATerm w_83 = NULL;
                w_83 = t;
                if(((u_83 != NULL) && (u_83 != w_83)))
                  _fail(w_83);
                else
                  u_83 = w_83;
                {
                  t = (ATerm) ATmakeAppl(sym__3, term_q_26, not_null(q_83), not_null(u_83));
                  t = table_put_0(t);
                }
              }
              t = t_26;
            }
            LocalPopChoice(s_26);
          }
        else
          {
            t = r_26;
            {
            }
          }
      }
    }
  }
  return(t);
}
ATerm try_1 (ATerm t, ATerm n_65 (ATerm))
{
  ATerm u_26 = t;
  int v_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = n_65(t);
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
  ATerm e_84 = NULL,f_84 = NULL,g_84 = NULL;
  e_84 = t;
  b_84 :
  if(match_cons(e_84, sym__2))
    {
      f_84 = ATgetArgument(e_84, 0);
      g_84 = ATgetArgument(e_84, 1);
      t = SSL_table_get(not_null(f_84), not_null(g_84));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm o_84 = NULL,p_84 = NULL,q_84 = NULL,r_84 = NULL;
  o_84 = t;
  n_84 :
  if(match_cons(o_84, sym__3))
    {
      p_84 = ATgetArgument(o_84, 0);
      q_84 = ATgetArgument(o_84, 1);
      r_84 = ATgetArgument(o_84, 2);
      {
        ATerm w_26;
        w_26 = t;
        {
          ATerm v_84 = NULL;
          ATerm w_84 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(p_84), not_null(q_84));
          {
            ATerm z_26 = t;
            int a_27 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(a_27);
              }
            else
              {
                t = z_26;
                t = (ATerm) ATempty;
              }
            {
              w_84 = t;
              if(((v_84 != NULL) && (v_84 != w_84)))
                _fail(w_84);
              else
                v_84 = w_84;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(p_84), not_null(q_84), (ATerm) ATinsert(CheckATermList(not_null(v_84)), not_null(r_84)));
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
ATerm register_usage_1 (ATerm t, ATerm g_89 (ATerm))
{
  ATerm a_85 = NULL;
  ATerm b_85 = NULL;
  t = term_d_8;
  {
    t = g_89(t);
    {
      b_85 = t;
      if(((a_85 != NULL) && (a_85 != b_85)))
        _fail(b_85);
      else
        a_85 = b_85;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_u_24, term_v_24, not_null(a_85));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm))
{
  ATerm i_85 = NULL,j_85 = NULL,q_85 = NULL;
  i_85 = t;
  h_85 :
  if(match_string(i_85, "register-usage-info"))
    {
      t = register_usage_1(t, g_0);
    }
  else
    {
      if(((ATgetType(i_85) == AT_LIST) && !(ATisEmpty(i_85))))
        {
          j_85 = ATgetFirst((ATermList) i_85);
          q_85 = (ATerm) ATgetNext((ATermList) i_85);
          {
            ATerm t_85 = NULL;
            ATerm c_27;
            c_27 = t;
            {
              t = not_null(j_85);
              t = a_0(t);
            }
            t = c_27;
            {
              ATerm u_85 = NULL;
              t = term_d_8;
              {
                t = d_0(t);
                {
                  u_85 = t;
                  if(((t_85 != NULL) && (t_85 != u_85)))
                    _fail(u_85);
                  else
                    t_85 = u_85;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(q_85)), not_null(t_85));
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
    ATerm z_85 = NULL;
    z_85 = t;
    y_85 :
    if(!(match_string(z_85, "--help")))
      {
        if(!(match_string(z_85, "-h")))
          {
            if(!(match_string(z_85, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm o_6 (ATerm t)
  {
    t = term_e_27;
    {
      t = set_config_0(t);
      t = term_f_27;
    }
    return(t);
  }
  ATerm p_6 (ATerm t)
  {
    t = term_g_27;
    return(t);
  }
  t = Option_3(t, n_6, o_6, p_6);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm c_86 = NULL,d_86 = NULL,e_86 = NULL;
  c_86 = t;
  b_86 :
  if(((ATgetType(c_86) == AT_LIST) && !(ATisEmpty(c_86))))
    {
      d_86 = ATgetFirst((ATermList) c_86);
      e_86 = (ATerm) ATgetNext((ATermList) c_86);
      t = (ATerm) ATinsert(CheckATermList(not_null(e_86)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(d_86)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm x_57 (ATerm), ATerm y_57 (ATerm))
{
  ATerm o_86 = NULL,p_86 = NULL,q_86 = NULL;
  o_86 = t;
  n_86 :
  if(((ATgetType(o_86) == AT_LIST) && !(ATisEmpty(o_86))))
    {
      p_86 = ATgetFirst((ATermList) o_86);
      q_86 = (ATerm) ATgetNext((ATermList) o_86);
      {
        ATerm u_86 = NULL,w_86 = NULL;
        ATerm v_86 = NULL;
        t = SSLgetAnnotations(not_null(o_86));
        {
          v_86 = t;
          if(((u_86 != NULL) && (u_86 != v_86)))
            _fail(v_86);
          else
            u_86 = v_86;
        }
        {
          t = not_null(p_86);
          {
            ATerm z_86 = NULL;
            t = x_57(t);
            {
              w_86 = t;
              {
                t = not_null(q_86);
                {
                  ATerm b_87 = NULL;
                  t = y_57(t);
                  {
                    z_86 = t;
                    {
                      ATerm c_87 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(z_86)), not_null(w_86)), not_null(u_86));
                      {
                        c_87 = t;
                        if(((b_87 != NULL) && (b_87 != c_87)))
                          _fail(c_87);
                        else
                          b_87 = c_87;
                      }
                      t = not_null(b_87);
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
  ATerm m_87 = NULL;
  m_87 = t;
  l_87 :
  if(((ATgetType(m_87) == AT_LIST) && ATisEmpty(m_87)))
    {
      {
        ATerm o_87 = NULL,q_87 = NULL;
        ATerm h_27;
        h_27 = t;
        {
          ATerm p_87 = NULL;
          t = SSLgetAnnotations(not_null(m_87));
          {
            p_87 = t;
            if(((o_87 != NULL) && (o_87 != p_87)))
              _fail(p_87);
            else
              o_87 = p_87;
          }
        }
        t = h_27;
        {
          ATerm r_87 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(o_87));
          {
            r_87 = t;
            if(((q_87 != NULL) && (q_87 != r_87)))
              _fail(r_87);
            else
              q_87 = r_87;
          }
          t = not_null(q_87);
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
  ATerm x_87 = NULL,y_87 = NULL,z_87 = NULL;
  x_87 = t;
  w_87 :
  if(match_cons(x_87, sym__2))
    {
      y_87 = ATgetArgument(x_87, 0);
      z_87 = ATgetArgument(x_87, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_q_26, not_null(y_87), not_null(z_87));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm e_89 (ATerm))
{
  ATerm i_27;
  i_27 = t;
  {
    ATerm j_27 = t;
    int k_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_l_27;
        t = e_89(t);
        LocalPopChoice(k_27);
      }
    else
      {
        t = j_27;
        {
        }
      }
  }
  t = i_27;
  {
    ATerm q_6 (ATerm t)
    {
      ATerm i_88 = NULL;
      ATerm m_27;
      m_27 = t;
      {
        ATerm g_88 = NULL;
        ATerm h_88 = NULL;
        h_88 = t;
        if(((g_88 != NULL) && (g_88 != h_88)))
          _fail(h_88);
        else
          g_88 = h_88;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_b_24, not_null(g_88));
          t = set_config_0(t);
        }
      }
      t = m_27;
      {
        ATerm j_88 = NULL;
        j_88 = t;
        if(((i_88 != NULL) && (i_88 != j_88)))
          _fail(j_88);
        else
          i_88 = j_88;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(i_88));
      }
      return(t);
    }
    ATerm t_6 (ATerm t)
    {
      ATerm n_27 = t;
      int o_27 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm t_27 = t;
          int u_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(u_27);
            }
          else
            {
              t = t_27;
              {
                t = e_89(t);
                t = Cons_2(t, _id, t_6);
              }
            }
          LocalPopChoice(o_27);
        }
      else
        {
          t = n_27;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, q_6, t_6);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm p_88 = NULL,q_88 = NULL,r_88 = NULL;
  ATerm v_27;
  v_27 = t;
  {
    ATerm s_88 = NULL,t_88 = NULL,u_88 = NULL,v_88 = NULL;
    s_88 = t;
    o_88 :
    if(match_cons(s_88, sym__3))
      {
        t_88 = ATgetArgument(s_88, 0);
        u_88 = ATgetArgument(s_88, 1);
        v_88 = ATgetArgument(s_88, 2);
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
            {
              if(((r_88 != NULL) && (r_88 != v_88)))
                _fail(v_88);
              else
                r_88 = v_88;
              t = SSL_table_put(not_null(p_88), not_null(q_88), not_null(r_88));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = v_27;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm d_89 (ATerm))
{
  ATerm y_88 = NULL;
  ATerm w_27;
  w_27 = t;
  {
    t = term_z_27;
    t = table_put_0(t);
  }
  t = w_27;
  {
    ATerm u_6 (ATerm t)
    {
      ATerm a_28 = t;
      int d_28 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = d_89(t);
          LocalPopChoice(d_28);
        }
      else
        {
          t = a_28;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, u_6);
    {
      ATerm e_28 = t;
      int j_28 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm k_28;
          k_28 = t;
          {
            ATerm l_28 = t;
            int m_28 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = term_d_27;
                t = get_config_0(t);
                LocalPopChoice(m_28);
              }
            else
              {
                t = l_28;
                t = fetch_1(t, Help_0);
              }
          }
          t = k_28;
          {
            t = system_usage_0(t);
            {
              t = term_i_10;
              t = exit_0(t);
            }
          }
          LocalPopChoice(j_28);
        }
      else
        {
          t = e_28;
          {
            ATerm r_28 = t;
            int s_28 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm x_6 (ATerm t)
                {
                  ATerm y_6 (ATerm t)
                  {
                    ATerm z_88 = NULL;
                    z_88 = t;
                    if(((y_88 != NULL) && (y_88 != z_88)))
                      _fail(z_88);
                    else
                      y_88 = z_88;
                    return(t);
                  }
                  t = Undefined_1(t, y_6);
                  return(t);
                }
                t = fetch_1(t, x_6);
                {
                  ATerm z_6 (ATerm t)
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(y_88)), term_t_28);
                    return(t);
                  }
                  t = say_1(t, z_6);
                  {
                    t = system_usage_0(t);
                    {
                      t = term_f_9;
                      t = exit_0(t);
                    }
                  }
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
      {
        ATerm u_28;
        u_28 = t;
        {
          t = term_u_24;
          t = table_destroy_0(t);
        }
        t = u_28;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm k_85 (ATerm), ATerm l_85 (ATerm), ATerm m_85 (ATerm), ATerm n_85 (ATerm))
{
  t = parse_options_1(t, k_85);
  {
    t = store_options_0(t);
    {
      t = m_85(t);
      {
        ATerm v_28 = t;
        int w_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, l_85);
            LocalPopChoice(w_28);
          }
        else
          {
            t = v_28;
            {
              ATerm x_28 = t;
              int y_28 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = n_85(t);
                  t = report_success_0(t);
                  LocalPopChoice(y_28);
                }
              else
                {
                  t = x_28;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm option_wrap_2 (ATerm t, ATerm o_85 (ATerm), ATerm p_85 (ATerm))
{
  t = option_wrap_4(t, o_85, default_usage_0, _id, p_85);
  return(t);
}
ATerm io_Abox_2_text_0 (ATerm t)
{
  ATerm a_7 (ATerm t)
  {
    ATerm b_7 (ATerm t)
    {
      ATerm i_89 = NULL;
      t = read_from_0(t);
      {
        ATerm j_89 = NULL;
        j_89 = t;
        if(((i_89 != NULL) && (i_89 != j_89)))
          _fail(j_89);
        else
          i_89 = j_89;
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(i_89), term_i_10);
          {
            t = try_abox2text_0(t);
            {
              t = Fst_0(t);
              t = topdown_print_to_0(t);
            }
          }
        }
      }
      return(t);
    }
    t = xtc_io_1(t, b_7);
    return(t);
  }
  t = option_wrap_2(t, abox2text_options_0, a_7);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = io_Abox_2_text_0(t);
  return(t);
}