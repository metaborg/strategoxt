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
Symbol sym_Var_1;
Symbol sym_Path_1;
Symbol sym_Prefix_2;
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
Symbol sym_WaitStatus_3;
Symbol sym_Pipe_2;
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
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
  sym_Prefix_2 = ATmakeSymbol("Prefix", 2, ATfalse);
  ATprotectSymbol(sym_Prefix_2);
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
  sym_WaitStatus_3 = ATmakeSymbol("WaitStatus", 3, ATfalse);
  ATprotectSymbol(sym_WaitStatus_3);
  sym_Pipe_2 = ATmakeSymbol("Pipe", 2, ATfalse);
  ATprotectSymbol(sym_Pipe_2);
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
  sym_Infinite_0 = ATmakeSymbol("Infinite", 0, ATfalse);
  ATprotectSymbol(sym_Infinite_0);
  init_constant_terms();
}
ATerm term_f_28;
ATerm term_l_27;
ATerm term_z_26;
ATerm term_w_26;
ATerm term_v_26;
ATerm term_u_26;
ATerm term_t_26;
ATerm term_y_25;
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
ATerm term_g_21;
ATerm term_d_21;
ATerm term_b_19;
ATerm term_a_19;
ATerm term_u_18;
ATerm term_r_18;
ATerm term_u_17;
ATerm term_t_17;
ATerm term_i_16;
ATerm term_t_14;
ATerm term_u_13;
ATerm term_a_13;
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
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeAppl(ATmakeSymbol("** ERROR: R children of A box have different numbers of boxes", 0, ATtrue));
  ATprotect(&(term_t_17));
  term_t_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--width", 0, ATtrue));
  ATprotect(&(term_u_17));
  term_u_17 = (ATerm) ATmakeInt(80);
  ATprotect(&(term_r_18));
  term_r_18 = (ATerm) ATmakeAppl(ATmakeSymbol("** ERROR: invalid box: ", 0, ATtrue));
  ATprotect(&(term_u_18));
  term_u_18 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: file doesn't exist or doesn't contain a valid term: ", 0, ATtrue));
  ATprotect(&(term_a_19));
  term_a_19 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_b_19));
  term_b_19 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_d_21));
  term_d_21 = (ATerm) ATmakeAppl(sym__2, term_x_8, term_y_7);
  ATprotect(&(term_g_21));
  term_g_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
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
  ATprotect(&(term_y_25));
  term_y_25 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_t_26));
  term_t_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_u_26));
  term_u_26 = (ATerm) ATmakeAppl(sym__2, term_t_26, term_q_8);
  ATprotect(&(term_v_26));
  term_v_26 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_w_26));
  term_w_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_z_26));
  term_z_26 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_l_27));
  term_l_27 = (ATerm) ATmakeAppl(sym__3, term_o_24, term_p_24, (ATerm) ATempty);
  ATprotect(&(term_f_28));
  term_f_28 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm close_file_0 (ATerm);
ATerm print_0 (ATerm);
ATerm topdown_1 (ATerm, ATerm l_67 (ATerm));
ATerm assert_1 (ATerm, ATerm i_81 (ATerm));
ATerm obsolete_1 (ATerm, ATerm w_81 (ATerm));
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
ATerm hv_in_new_vbox_2 (ATerm, ATerm v_65 (ATerm), ATerm w_65 (ATerm));
ATerm hv_add_to_hbox_1 (ATerm, ATerm u_65 (ATerm));
ATerm FoldL_1 (ATerm, ATerm x_78 (ATerm));
ATerm foldl_1 (ATerm, ATerm c_78 (ATerm));
ATerm is_length_0 (ATerm);
ATerm string_length_0 (ATerm);
ATerm vs_length_0 (ATerm);
ATerm vs_text_0 (ATerm);
ATerm SOpt_2 (ATerm, ATerm x_59 (ATerm), ATerm y_59 (ATerm));
ATerm SOpt_value_1 (ATerm, ATerm x_65 (ATerm));
ATerm hs_length_0 (ATerm);
ATerm hs_text_0 (ATerm);
ATerm subt_0 (ATerm);
ATerm Nil_T_0 (ATerm);
ATerm Cons_T_2 (ATerm, ATerm q_0 (ATerm), ATerm t_0 (ATerm));
ATerm thread_map_1 (ATerm, ATerm n_78 (ATerm));
ATerm H_2 (ATerm, ATerm r_59 (ATerm), ATerm s_59 (ATerm));
ATerm is_real_hbox_0 (ATerm);
ATerm filter_1 (ATerm, ATerm a_79 (ATerm));
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
ATerm while_not_2 (ATerm, ATerm u_86 (ATerm), ATerm v_86 (ATerm));
ATerm for_3 (ATerm, ATerm x_86 (ATerm), ATerm y_86 (ATerm), ATerm z_86 (ATerm));
ATerm copy_0 (ATerm);
ATerm copy_char_0 (ATerm);
ATerm pos_0 (ATerm);
ATerm align_helper_0 (ATerm);
ATerm align_left_0 (ATerm);
ATerm align_column_0 (ATerm);
ATerm SOpts_of_alignment_0 (ATerm);
ATerm Snd_0 (ATerm);
ATerm max_0 (ATerm);
ATerm Hd_0 (ATerm);
ATerm list_accum_1 (ATerm, ATerm b_90 (ATerm));
ATerm list_max_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm MkCons_0 (ATerm);
ATerm flatten_list_0 (ATerm);
ATerm UnZip2_0 (ATerm);
ATerm UnZip3_0 (ATerm);
ATerm UnZip1_0 (ATerm);
ATerm unzip_1 (ATerm, ATerm y_73 (ATerm));
ATerm unzip_0 (ATerm);
ATerm do_A_column_0 (ATerm);
ATerm Zip3_0 (ATerm);
ATerm Zip2_0 (ATerm);
ATerm Zip1_0 (ATerm);
ATerm genzip_4 (ATerm, ATerm o_73 (ATerm), ATerm p_73 (ATerm), ATerm q_73 (ATerm), ATerm r_73 (ATerm));
ATerm zip_1 (ATerm, ATerm t_73 (ATerm));
ATerm zip_0 (ATerm);
ATerm inc_0 (ATerm);
ATerm map_with_index_1 (ATerm, ATerm d_93 (ATerm));
ATerm add_indices_0 (ATerm);
ATerm length_0 (ATerm);
ATerm HdMember_p__2 (ATerm, ATerm k_77 (ATerm), ATerm l_77 (ATerm));
ATerm union_1 (ATerm, ATerm g_77 (ATerm));
ATerm union_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm z_77 (ATerm), ATerm a_78 (ATerm), ATerm b_78 (ATerm));
ATerm make_set_0 (ATerm);
ATerm warn_not_matrix_0 (ATerm);
ATerm R_2 (ATerm, ATerm j_59 (ATerm), ATerm k_59 (ATerm));
ATerm split_2 (ATerm, ATerm x_70 (ATerm), ATerm y_70 (ATerm));
ATerm construct_rows_0 (ATerm);
ATerm Last_0 (ATerm);
ATerm last_0 (ATerm);
ATerm eq_0 (ATerm);
ATerm elem_1 (ATerm, ATerm d_72 (ATerm));
ATerm elem_0 (ATerm);
ATerm at_suffix_1 (ATerm, ATerm o_72 (ATerm));
ATerm split_fetch_1 (ATerm, ATerm h_72 (ATerm));
ATerm list_tokenize_1 (ATerm, ATerm w_93 (ATerm));
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
ATerm end_scope_1 (ATerm, ATerm f_81 (ATerm));
ATerm remove_file_0 (ATerm);
ATerm restore_always_2 (ATerm, ATerm s_70 (ATerm), ATerm t_70 (ATerm));
ATerm begin_scope_1 (ATerm, ATerm e_81 (ATerm));
ATerm xtc_temp_files_1 (ATerm, ATerm g_66 (ATerm));
ATerm xtc_io_1 (ATerm, ATerm h_66 (ATerm));
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
ATerm foldr_2 (ATerm, ATerm x_77 (ATerm), ATerm y_77 (ATerm));
ATerm crush_2 (ATerm, ATerm v_76 (ATerm), ATerm w_76 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm a_80 (ATerm));
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm p_83 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm x_85 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm g_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm w_85 (ATerm));
ATerm Program_1 (ATerm, ATerm g_61 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm q_81 (ATerm));
ATerm Undefined_1 (ATerm, ATerm h_61 (ATerm));
ATerm fetch_1 (ATerm, ATerm e_72 (ATerm));
ATerm option_defined_1 (ATerm, ATerm w_84 (ATerm));
ATerm Help_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm k_72 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm _2 (ATerm, ATerm a_57 (ATerm), ATerm b_57 (ATerm));
ATerm conc_strings_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm debug_1 (ATerm, ATerm p_81 (ATerm));
ATerm map_1 (ATerm, ATerm v_71 (ATerm));
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm try_1 (ATerm, ATerm d_70 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm b_86 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm j_58 (ATerm), ATerm k_58 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm z_85 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm y_85 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm v_83 (ATerm), ATerm w_83 (ATerm), ATerm x_83 (ATerm), ATerm y_83 (ATerm));
ATerm option_wrap_2 (ATerm, ATerm z_83 (ATerm), ATerm a_84 (ATerm));
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
ATerm topdown_1 (ATerm t, ATerm l_67 (ATerm))
{
  t = l_67(t);
  {
    ATerm b_0 (ATerm t)
    {
      t = topdown_1(t, l_67);
      return(t);
    }
    t = _all(t, b_0);
  }
  return(t);
}
ATerm assert_1 (ATerm t, ATerm i_81 (ATerm))
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
          t = i_81(t);
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
                        ;
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
ATerm obsolete_1 (ATerm t, ATerm w_81 (ATerm))
{
  ATerm z_7;
  z_7 = t;
  {
    t = w_81(t);
    {
      ATerm e_0 (ATerm t)
      {
        t = term_a_8;
        return(t);
      }
      t = debug_1(t, e_0);
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
        ATerm f_0 (ATerm t)
        {
          t = term_n_8;
          return(t);
        }
        t = obsolete_1(t, f_0);
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
              ;
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
                      ;
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
ATerm hv_in_new_vbox_2 (ATerm t, ATerm v_65 (ATerm), ATerm w_65 (ATerm))
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
            t = w_65(t);
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
            t = v_65(t);
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
ATerm hv_add_to_hbox_1 (ATerm t, ATerm u_65 (ATerm))
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
                    t = u_65(t);
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
ATerm FoldL_1 (ATerm t, ATerm x_78 (ATerm))
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
              t = x_78(t);
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
ATerm foldl_1 (ATerm t, ATerm c_78 (ATerm))
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
        ;
        LocalPopChoice(e_10);
      }
    else
      {
        t = d_10;
        {
          t = FoldL_1(t, c_78);
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
      ;
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
      ;
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
ATerm SOpt_2 (ATerm t, ATerm x_59 (ATerm), ATerm y_59 (ATerm))
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
            t = x_59(t);
            {
              k_13 = t;
              {
                t = not_null(e_13);
                {
                  ATerm o_13 = NULL;
                  t = y_59(t);
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
ATerm SOpt_value_1 (ATerm t, ATerm x_65 (ATerm))
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
    t = SOpt_2(t, x_65, w_0);
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
      ;
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
            ;
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
ATerm thread_map_1 (ATerm t, ATerm n_78 (ATerm))
{
  ATerm x_15 (ATerm t)
  {
    ATerm l_11 = t;
    int m_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_T_2(t, n_78, x_15);
        ;
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
ATerm H_2 (ATerm t, ATerm r_59 (ATerm), ATerm s_59 (ATerm))
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
            t = r_59(t);
            {
              m_16 = t;
              {
                t = not_null(g_16);
                {
                  ATerm q_16 = NULL;
                  t = s_59(t);
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
          ;
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
ATerm filter_1 (ATerm t, ATerm a_79 (ATerm))
{
  ATerm q_11 = t;
  int y_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      ;
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
              t = filter_1(t, a_79);
              return(t);
            }
            t = Cons_2(t, a_79, y_0);
            ;
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
                    t = filter_1(t, a_79);
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
          ;
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
                                  ;
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
      ;
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
        ATerm y_12 = t;
        int z_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_divi(not_null(z_19), not_null(a_20));
            ;
            LocalPopChoice(z_12);
          }
        else
          {
            t = y_12;
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
    t = (ATerm) ATmakeAppl(sym__2, not_null(f_20), term_a_13);
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
    t = (ATerm) ATmakeAppl(sym__2, not_null(j_20), term_e_9);
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
  ATerm f_13;
  f_13 = t;
  {
    ATerm w_20 = NULL,y_20 = NULL;
    ATerm x_20 = NULL;
    x_20 = t;
    if(((w_20 != NULL) && (w_20 != x_20)))
      _fail(x_20);
    else
      w_20 = x_20;
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(w_20), term_a_13);
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
  t = f_13;
  return(t);
}
ATerm align_center_0 (ATerm t)
{
  ATerm k_21 = NULL,k_25 = NULL,l_25 = NULL,m_25 = NULL;
  k_21 = t;
  j_21 :
  if(match_cons(k_21, sym__3))
    {
      k_25 = ATgetArgument(k_21, 0);
      l_25 = ATgetArgument(k_21, 1);
      m_25 = ATgetArgument(k_21, 2);
      {
        ATerm q_25 = NULL,r_25 = NULL,s_25 = NULL,t_25 = NULL,c_26 = NULL,d_26 = NULL;
        ATerm e_26 = NULL;
        t = not_null(l_25);
        {
          ATerm f_26 = NULL;
          t = string_length_0(t);
          {
            e_26 = t;
            {
              if(((t_25 != NULL) && (t_25 != e_26)))
                _fail(e_26);
              else
                t_25 = e_26;
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(m_25), not_null(t_25));
                {
                  ATerm g_26 = NULL,h_26 = NULL,j_26 = NULL;
                  t = subt_0(t);
                  {
                    f_26 = t;
                    {
                      if(((q_25 != NULL) && (q_25 != f_26)))
                        _fail(f_26);
                      else
                        q_25 = f_26;
                      {
                        t = not_null(q_25);
                        {
                          ATerm g_13 = t;
                          int h_13 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = even_0(t);
                              LocalPopChoice(h_13);
                              {
                                t = div2_0(t);
                                t = Dupl_0(t);
                              }
                            }
                          else
                            {
                              t = g_13;
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
                            g_26 = t;
                            i_21 :
                            if(match_cons(g_26, sym__2))
                              {
                                h_26 = ATgetArgument(g_26, 0);
                                j_26 = ATgetArgument(g_26, 1);
                                {
                                  ATerm m_26 = NULL,o_26 = NULL;
                                  if(((r_25 != NULL) && (r_25 != h_26)))
                                    _fail(h_26);
                                  else
                                    r_25 = h_26;
                                  {
                                    if(((c_26 != NULL) && (c_26 != j_26)))
                                      _fail(j_26);
                                    else
                                      c_26 = j_26;
                                    {
                                      ATerm n_26 = NULL;
                                      t = (ATerm) ATmakeAppl(sym__2, not_null(t_25), not_null(r_25));
                                      {
                                        t = add_0(t);
                                        {
                                          n_26 = t;
                                          if(((m_26 != NULL) && (m_26 != n_26)))
                                            _fail(n_26);
                                          else
                                            m_26 = n_26;
                                        }
                                      }
                                      {
                                        t = (ATerm) ATmakeAppl(sym__3, not_null(k_25), not_null(l_25), not_null(m_26));
                                        {
                                          ATerm p_26 = NULL,r_26 = NULL;
                                          t = align_helper_0(t);
                                          {
                                            o_26 = t;
                                            {
                                              if(((s_25 != NULL) && (s_25 != o_26)))
                                                _fail(o_26);
                                              else
                                                s_25 = o_26;
                                              {
                                                ATerm q_26 = NULL;
                                                t = (ATerm) ATmakeAppl(sym__2, not_null(t_25), not_null(c_26));
                                                {
                                                  t = add_0(t);
                                                  {
                                                    q_26 = t;
                                                    if(((p_26 != NULL) && (p_26 != q_26)))
                                                      _fail(q_26);
                                                    else
                                                      p_26 = q_26;
                                                  }
                                                }
                                                {
                                                  t = (ATerm) ATmakeAppl(sym__3, not_null(k_25), not_null(l_25), not_null(p_26));
                                                  {
                                                    t = align_helper_0(t);
                                                    {
                                                      r_26 = t;
                                                      if(((d_26 != NULL) && (d_26 != r_26)))
                                                        _fail(r_26);
                                                      else
                                                        d_26 = r_26;
                                                    }
                                                  }
                                                }
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
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(d_26)), not_null(l_25)), not_null(s_25));
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
ATerm while_not_2 (ATerm t, ATerm u_86 (ATerm), ATerm v_86 (ATerm))
{
  ATerm f_27 (ATerm t)
  {
    ATerm l_13 = t;
    int n_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_86(t);
        ;
        LocalPopChoice(n_13);
      }
    else
      {
        t = l_13;
        {
          t = v_86(t);
          t = f_27(t);
        }
      }
    return(t);
  }
  t = f_27(t);
  return(t);
}
ATerm for_3 (ATerm t, ATerm x_86 (ATerm), ATerm y_86 (ATerm), ATerm z_86 (ATerm))
{
  t = x_86(t);
  t = while_not_2(t, y_86, z_86);
  return(t);
}
ATerm copy_0 (ATerm t)
{
  ATerm f_1 (ATerm t)
  {
    ATerm o_27 = NULL,p_27 = NULL,q_27 = NULL;
    o_27 = t;
    h_27 :
    if(match_cons(o_27, sym__2))
      {
        p_27 = ATgetArgument(o_27, 0);
        q_27 = ATgetArgument(o_27, 1);
        t = (ATerm) ATmakeAppl(sym__3, not_null(p_27), not_null(q_27), (ATerm) ATempty);
      }
    else
      {
        _fail(t);
      }
    return(t);
  }
  ATerm g_1 (ATerm t)
  {
    ATerm t_27 = NULL,u_27 = NULL,v_27 = NULL,w_27 = NULL;
    t_27 = t;
    j_27 :
    if(match_cons(t_27, sym__3))
      {
        u_27 = ATgetArgument(t_27, 0);
        v_27 = ATgetArgument(t_27, 1);
        w_27 = ATgetArgument(t_27, 2);
        k_27 :
        if(match_int(u_27, 0))
          {
            t = not_null(w_27);
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
    ATerm z_27 = NULL,a_28 = NULL,b_28 = NULL,c_28 = NULL;
    z_27 = t;
    n_27 :
    if(match_cons(z_27, sym__3))
      {
        a_28 = ATgetArgument(z_27, 0);
        b_28 = ATgetArgument(z_27, 1);
        c_28 = ATgetArgument(z_27, 2);
        {
          ATerm g_28 = NULL;
          ATerm q_13;
          q_13 = t;
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(a_28), term_e_9);
            t = geq_0(t);
          }
          t = q_13;
          {
            ATerm h_28 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(a_28), term_e_9);
            {
              t = subt_0(t);
              {
                h_28 = t;
                if(((g_28 != NULL) && (g_28 != h_28)))
                  _fail(h_28);
                else
                  g_28 = h_28;
              }
            }
            t = (ATerm) ATmakeAppl(sym__3, not_null(g_28), not_null(b_28), (ATerm) ATinsert(CheckATermList(not_null(c_28)), not_null(b_28)));
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
  ATerm r_13;
  r_13 = t;
  {
    ATerm u_28 = NULL;
    ATerm w_28 = NULL;
    w_28 = t;
    if(((u_28 != NULL) && (u_28 != w_28)))
      _fail(w_28);
    else
      u_28 = w_28;
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(u_28), term_h_10);
      t = geq_0(t);
    }
  }
  t = r_13;
  return(t);
}
ATerm align_helper_0 (ATerm t)
{
  ATerm d_29 = NULL,e_29 = NULL,f_29 = NULL,g_29 = NULL;
  d_29 = t;
  c_29 :
  if(match_cons(d_29, sym__3))
    {
      e_29 = ATgetArgument(d_29, 0);
      f_29 = ATgetArgument(d_29, 1);
      g_29 = ATgetArgument(d_29, 2);
      {
        ATerm p_29 = NULL;
        ATerm q_29 = NULL,v_29 = NULL;
        t = not_null(f_29);
        {
          t = string_length_0(t);
          {
            ATerm r_29 = NULL;
            r_29 = t;
            if(((q_29 != NULL) && (q_29 != r_29)))
              _fail(r_29);
            else
              q_29 = r_29;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(g_29), not_null(q_29));
              {
                t = subt_0(t);
                {
                  ATerm s_13 = t;
                  int t_13 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = pos_0(t);
                      LocalPopChoice(t_13);
                      {
                        ATerm s_29 = NULL;
                        ATerm u_29 = NULL;
                        u_29 = t;
                        if(((s_29 != NULL) && (s_29 != u_29)))
                          _fail(u_29);
                        else
                          s_29 = u_29;
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(s_29), not_null(e_29));
                          t = copy_char_0(t);
                        }
                      }
                    }
                  else
                    {
                      t = s_13;
                      t = term_u_13;
                    }
                  {
                    v_29 = t;
                    if(((p_29 != NULL) && (p_29 != v_29)))
                      _fail(v_29);
                    else
                      p_29 = v_29;
                  }
                }
              }
            }
          }
        }
        t = not_null(p_29);
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
  ATerm k_30 = NULL,l_30 = NULL,m_30 = NULL,n_30 = NULL;
  k_30 = t;
  e_30 :
  if(match_cons(k_30, sym__3))
    {
      l_30 = ATgetArgument(k_30, 0);
      m_30 = ATgetArgument(k_30, 1);
      n_30 = ATgetArgument(k_30, 2);
      {
        ATerm t_30 = NULL;
        ATerm u_30 = NULL;
        t = (ATerm) ATmakeAppl(sym__3, not_null(l_30), not_null(m_30), not_null(n_30));
        {
          t = align_helper_0(t);
          {
            u_30 = t;
            if(((t_30 != NULL) && (t_30 != u_30)))
              _fail(u_30);
            else
              t_30 = u_30;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(m_30), not_null(t_30));
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
  ATerm w_31 = NULL,f_32 = NULL,g_32 = NULL,h_32 = NULL,i_32 = NULL,j_32 = NULL,k_32 = NULL,l_32 = NULL;
  ATerm r_32 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(i_32), term_e_9);
    t = gt_0(t);
    {
      t = not_null(l_32);
      t = align_left_0(t);
    }
    return(t);
  }
  ATerm s_32 (ATerm t)
  {
    t = not_null(f_32);
    return(t);
  }
  ATerm t_32 (ATerm t)
  {
    t = not_null(l_32);
    t = align_center_0(t);
    return(t);
  }
  ATerm u_32 (ATerm t)
  {
    t = not_null(l_32);
    t = align_right_0(t);
    return(t);
  }
  h_32 = t;
  l_31 :
  if(match_cons(h_32, sym__3))
    {
      i_32 = ATgetArgument(h_32, 0);
      j_32 = ATgetArgument(h_32, 1);
      l_32 = ATgetArgument(h_32, 2);
      m_31 :
      if(match_cons(j_32, sym_AL_1))
        {
          k_32 = ATgetArgument(j_32, 0);
          r_31 :
          if(match_cons(l_32, sym__3))
            {
              w_31 = ATgetArgument(l_32, 0);
              f_32 = ATgetArgument(l_32, 1);
              g_32 = ATgetArgument(l_32, 2);
              s_31 :
              if(match_int(i_32, 1))
                {
                  ATerm v_13 = t;
                  int y_13 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = r_32(t);
                      ;
                      LocalPopChoice(y_13);
                    }
                  else
                    {
                      t = v_13;
                      t = s_32(t);
                    }
                }
              else
                {
                  t = r_32(t);
                }
            }
          else
            {
              t_31 :
              t = r_32(t);
            }
        }
      else
        {
          if(match_cons(j_32, sym_AC_1))
            {
              k_32 = ATgetArgument(j_32, 0);
              u_31 :
              t = t_32(t);
            }
          else
            {
              if(match_cons(j_32, sym_AR_1))
                {
                  k_32 = ATgetArgument(j_32, 0);
                  v_31 :
                  t = u_32(t);
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
  ATerm z_32 = NULL,a_33 = NULL;
  z_32 = t;
  y_32 :
  if(match_cons(z_32, sym_AC_1))
    {
      a_33 = ATgetArgument(z_32, 0);
      t = not_null(a_33);
    }
  else
    {
      if(match_cons(z_32, sym_AR_1))
        {
          a_33 = ATgetArgument(z_32, 0);
          t = not_null(a_33);
        }
      else
        {
          if(match_cons(z_32, sym_AL_1))
            {
              a_33 = ATgetArgument(z_32, 0);
              t = not_null(a_33);
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
  ATerm o_33 = NULL;
  ATerm q_33 = NULL,r_33 = NULL,s_33 = NULL;
  o_33 = t;
  {
    ATerm t_33 = NULL;
    ATerm v_33 = NULL,w_33 = NULL,x_33 = NULL,y_33 = NULL,z_33 = NULL,b_34 = NULL,c_34 = NULL;
    t = not_null(o_33);
    {
      t_33 = t;
      {
        t = SSL_explode_term(not_null(t_33));
        {
          v_33 = t;
          k_33 :
          if(match_cons(v_33, sym__2))
            {
              w_33 = ATgetArgument(v_33, 0);
              x_33 = ATgetArgument(v_33, 1);
              l_33 :
              if(match_string(w_33, ""))
                {
                  m_33 :
                  if(((ATgetType(x_33) == AT_LIST) && !(ATisEmpty(x_33))))
                    {
                      y_33 = ATgetFirst((ATermList) x_33);
                      z_33 = (ATerm) ATgetNext((ATermList) x_33);
                      n_33 :
                      if(((ATgetType(z_33) == AT_LIST) && !(ATisEmpty(z_33))))
                        {
                          b_34 = ATgetFirst((ATermList) z_33);
                          c_34 = (ATerm) ATgetNext((ATermList) z_33);
                          {
                            if(((q_33 != NULL) && (q_33 != y_33)))
                              _fail(y_33);
                            else
                              q_33 = y_33;
                            {
                              if(((s_33 != NULL) && (s_33 != b_34)))
                                _fail(b_34);
                              else
                                s_33 = b_34;
                              if(((r_33 != NULL) && (r_33 != c_34)))
                                _fail(c_34);
                              else
                                r_33 = c_34;
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
    t = not_null(s_33);
  }
  return(t);
}
ATerm max_0 (ATerm t)
{
  ATerm b_14 = t;
  int e_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = gt_0(t);
      LocalPopChoice(e_14);
      t = Fst_0(t);
    }
  else
    {
      t = b_14;
      t = Snd_0(t);
    }
  return(t);
}
ATerm Hd_0 (ATerm t)
{
  ATerm n_34 = NULL,o_34 = NULL,p_34 = NULL;
  n_34 = t;
  j_34 :
  if(((ATgetType(n_34) == AT_LIST) && !(ATisEmpty(n_34))))
    {
      o_34 = ATgetFirst((ATermList) n_34);
      p_34 = (ATerm) ATgetNext((ATermList) n_34);
      t = not_null(o_34);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm list_accum_1 (ATerm t, ATerm b_90 (ATerm))
{
  ATerm u_34 = NULL,w_34 = NULL;
  ATerm f_14;
  f_14 = t;
  {
    ATerm v_34 = NULL;
    t = Tl_0(t);
    {
      v_34 = t;
      if(((u_34 != NULL) && (u_34 != v_34)))
        _fail(v_34);
      else
        u_34 = v_34;
    }
  }
  t = f_14;
  {
    ATerm x_34 = NULL;
    t = Hd_0(t);
    {
      x_34 = t;
      if(((w_34 != NULL) && (w_34 != x_34)))
        _fail(x_34);
      else
        w_34 = x_34;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(u_34), not_null(w_34));
      t = foldl_1(t, b_90);
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
  ATerm h_35 = NULL,i_35 = NULL,q_35 = NULL;
  h_35 = t;
  b_35 :
  if(match_cons(h_35, sym__2))
    {
      i_35 = ATgetArgument(h_35, 0);
      q_35 = ATgetArgument(h_35, 1);
      t = (ATerm) ATinsert(CheckATermList(not_null(q_35)), not_null(i_35));
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
    ATerm k_14 = t;
    int l_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = _2(t, is_list_0, _id);
        LocalPopChoice(l_14);
        t = conc_two_lists_0(t);
      }
    else
      {
        t = k_14;
        t = MkCons_0(t);
      }
    return(t);
  }
  ATerm k_1 (ATerm t)
  {
    ATerm m_14 = t;
    int n_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        LocalPopChoice(n_14);
        t = flatten_list_0(t);
      }
    else
      {
        t = m_14;
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
  ATerm y_35 = NULL,z_35 = NULL,a_36 = NULL,b_36 = NULL,c_36 = NULL,d_36 = NULL,h_36 = NULL;
  y_35 = t;
  v_35 :
  if(match_cons(y_35, sym__2))
    {
      z_35 = ATgetArgument(y_35, 0);
      c_36 = ATgetArgument(y_35, 1);
      w_35 :
      if(match_cons(z_35, sym__2))
        {
          a_36 = ATgetArgument(z_35, 0);
          b_36 = ATgetArgument(z_35, 1);
          x_35 :
          if(match_cons(c_36, sym__2))
            {
              d_36 = ATgetArgument(c_36, 0);
              h_36 = ATgetArgument(c_36, 1);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(d_36)), not_null(a_36)), (ATerm) ATinsert(CheckATermList(not_null(h_36)), not_null(b_36)));
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
  ATerm p_36 = NULL,q_36 = NULL,t_36 = NULL;
  p_36 = t;
  o_36 :
  if(((ATgetType(p_36) == AT_LIST) && !(ATisEmpty(p_36))))
    {
      q_36 = ATgetFirst((ATermList) p_36);
      t_36 = (ATerm) ATgetNext((ATermList) p_36);
      t = (ATerm) ATmakeAppl(sym__2, not_null(q_36), not_null(t_36));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm UnZip1_0 (ATerm t)
{
  ATerm z_36 = NULL;
  z_36 = t;
  y_36 :
  if(((ATgetType(z_36) == AT_LIST) && ATisEmpty(z_36)))
    {
      t = term_t_14;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm unzip_1 (ATerm t, ATerm y_73 (ATerm))
{
  t = genzip_4(t, UnZip1_0, UnZip3_0, UnZip2_0, y_73);
  return(t);
}
ATerm unzip_0 (ATerm t)
{
  t = unzip_1(t, _id);
  return(t);
}
ATerm do_A_column_0 (ATerm t)
{
  ATerm p_38 = NULL,q_38 = NULL,r_38 = NULL,s_38 = NULL,t_38 = NULL,u_38 = NULL,v_38 = NULL,w_38 = NULL,x_38 = NULL;
  p_38 = t;
  k_38 :
  if(match_cons(p_38, sym__2))
    {
      q_38 = ATgetArgument(p_38, 0);
      v_38 = ATgetArgument(p_38, 1);
      l_38 :
      if(match_cons(q_38, sym__2))
        {
          r_38 = ATgetArgument(q_38, 0);
          s_38 = ATgetArgument(q_38, 1);
          m_38 :
          if(match_cons(s_38, sym__2))
            {
              t_38 = ATgetArgument(s_38, 0);
              u_38 = ATgetArgument(s_38, 1);
              o_38 :
              if(match_cons(v_38, sym__2))
                {
                  w_38 = ATgetArgument(v_38, 0);
                  x_38 = ATgetArgument(v_38, 1);
                  {
                    ATerm d_39 = NULL,e_39 = NULL,f_39 = NULL,g_39 = NULL,h_39 = NULL,u_39 = NULL;
                    ATerm u_14;
                    u_14 = t;
                    {
                      ATerm k_39 = NULL,l_39 = NULL,m_39 = NULL;
                      t = not_null(u_38);
                      {
                        ATerm l_1 (ATerm t)
                        {
                          ATerm i_39 = NULL;
                          ATerm j_39 = NULL;
                          j_39 = t;
                          if(((i_39 != NULL) && (i_39 != j_39)))
                            _fail(j_39);
                          else
                            i_39 = j_39;
                          {
                            t = (ATerm) ATmakeAppl(sym__2, not_null(i_39), not_null(w_38));
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
                              k_39 = t;
                              g_38 :
                              if(match_cons(k_39, sym__2))
                                {
                                  l_39 = ATgetArgument(k_39, 0);
                                  m_39 = ATgetArgument(k_39, 1);
                                  {
                                    ATerm n_39 = NULL;
                                    if(((e_39 != NULL) && (e_39 != l_39)))
                                      _fail(l_39);
                                    else
                                      e_39 = l_39;
                                    {
                                      if(((d_39 != NULL) && (d_39 != m_39)))
                                        _fail(m_39);
                                      else
                                        d_39 = m_39;
                                      {
                                        t = (ATerm) ATmakeAppl(sym__2, not_null(d_39), not_null(w_38));
                                        {
                                          ATerm o_39 = NULL;
                                          t = subt_0(t);
                                          {
                                            n_39 = t;
                                            {
                                              if(((f_39 != NULL) && (f_39 != n_39)))
                                                _fail(n_39);
                                              else
                                                f_39 = n_39;
                                              {
                                                ATerm t_39 = NULL;
                                                ATerm v_14 = t;
                                                int w_14 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = (ATerm) ATmakeAppl(sym__2, not_null(t_38), term_e_9);
                                                    t = gt_0(t);
                                                    LocalPopChoice(w_14);
                                                    {
                                                      t = not_null(r_38);
                                                      {
                                                        t = SOpts_of_alignment_0(t);
                                                        t = hs_text_0(t);
                                                      }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = v_14;
                                                    t = term_u_13;
                                                  }
                                                {
                                                  o_39 = t;
                                                  {
                                                    if(((g_39 != NULL) && (g_39 != o_39)))
                                                      _fail(o_39);
                                                    else
                                                      g_39 = o_39;
                                                    {
                                                      t = not_null(e_39);
                                                      {
                                                        ATerm q_1 (ATerm t)
                                                        {
                                                          ATerm p_39 = NULL,r_39 = NULL;
                                                          ATerm q_39 = NULL;
                                                          q_39 = t;
                                                          if(((p_39 != NULL) && (p_39 != q_39)))
                                                            _fail(q_39);
                                                          else
                                                            p_39 = q_39;
                                                          {
                                                            t = (ATerm) ATmakeAppl(sym__3, not_null(t_38), not_null(r_38), (ATerm) ATmakeAppl(sym__3, term_f_9, not_null(p_39), not_null(f_39)));
                                                            {
                                                              t = align_column_0(t);
                                                              {
                                                                ATerm s_39 = NULL;
                                                                s_39 = t;
                                                                if(((r_39 != NULL) && (r_39 != s_39)))
                                                                  _fail(s_39);
                                                                else
                                                                  r_39 = s_39;
                                                                {
                                                                  t = (ATerm) ATmakeAppl(sym__2, not_null(r_39), not_null(g_39));
                                                                  t = conc_strings_0(t);
                                                                }
                                                              }
                                                            }
                                                          }
                                                          return(t);
                                                        }
                                                        t = map_1(t, q_1);
                                                        {
                                                          t_39 = t;
                                                          if(((h_39 != NULL) && (h_39 != t_39)))
                                                            _fail(t_39);
                                                          else
                                                            h_39 = t_39;
                                                        }
                                                      }
                                                    }
                                                  }
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
                    t = u_14;
                    {
                      ATerm v_39 = NULL,x_39 = NULL;
                      ATerm w_39 = NULL;
                      t = not_null(g_39);
                      {
                        t = string_length_0(t);
                        {
                          w_39 = t;
                          if(((v_39 != NULL) && (v_39 != w_39)))
                            _fail(w_39);
                          else
                            v_39 = w_39;
                        }
                      }
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(v_39), not_null(d_39));
                        {
                          t = add_0(t);
                          {
                            x_39 = t;
                            if(((u_39 != NULL) && (u_39 != x_39)))
                              _fail(x_39);
                            else
                              u_39 = x_39;
                          }
                        }
                      }
                      t = (ATerm) ATmakeAppl(sym__2, not_null(u_39), (ATerm) ATinsert(CheckATermList(not_null(x_38)), not_null(h_39)));
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
  ATerm k_40 = NULL,l_40 = NULL,m_40 = NULL;
  k_40 = t;
  j_40 :
  if(match_cons(k_40, sym__2))
    {
      l_40 = ATgetArgument(k_40, 0);
      m_40 = ATgetArgument(k_40, 1);
      t = (ATerm) ATinsert(CheckATermList(not_null(m_40)), not_null(l_40));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Zip2_0 (ATerm t)
{
  ATerm u_40 = NULL,v_40 = NULL,w_40 = NULL,x_40 = NULL,y_40 = NULL,z_40 = NULL,a_41 = NULL;
  u_40 = t;
  r_40 :
  if(match_cons(u_40, sym__2))
    {
      v_40 = ATgetArgument(u_40, 0);
      y_40 = ATgetArgument(u_40, 1);
      s_40 :
      if(((ATgetType(v_40) == AT_LIST) && !(ATisEmpty(v_40))))
        {
          w_40 = ATgetFirst((ATermList) v_40);
          x_40 = (ATerm) ATgetNext((ATermList) v_40);
          t_40 :
          if(((ATgetType(y_40) == AT_LIST) && !(ATisEmpty(y_40))))
            {
              z_40 = ATgetFirst((ATermList) y_40);
              a_41 = (ATerm) ATgetNext((ATermList) y_40);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(w_40), not_null(z_40)), (ATerm) ATmakeAppl(sym__2, not_null(x_40), not_null(a_41)));
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
  ATerm k_41 = NULL,l_41 = NULL,m_41 = NULL;
  k_41 = t;
  h_41 :
  if(match_cons(k_41, sym__2))
    {
      l_41 = ATgetArgument(k_41, 0);
      m_41 = ATgetArgument(k_41, 1);
      i_41 :
      if(((ATgetType(l_41) == AT_LIST) && ATisEmpty(l_41)))
        {
          j_41 :
          if(((ATgetType(m_41) == AT_LIST) && ATisEmpty(m_41)))
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
ATerm genzip_4 (ATerm t, ATerm o_73 (ATerm), ATerm p_73 (ATerm), ATerm q_73 (ATerm), ATerm r_73 (ATerm))
{
  ATerm p_41 (ATerm t)
  {
    ATerm x_14 = t;
    int h_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_73(t);
        ;
        LocalPopChoice(h_15);
      }
    else
      {
        t = x_14;
        {
          t = p_73(t);
          {
            t = _2(t, r_73, p_41);
            t = q_73(t);
          }
        }
      }
    return(t);
  }
  t = p_41(t);
  return(t);
}
ATerm zip_1 (ATerm t, ATerm t_73 (ATerm))
{
  t = genzip_4(t, Zip1_0, Zip2_0, Zip3_0, t_73);
  return(t);
}
ATerm zip_0 (ATerm t)
{
  t = zip_1(t, _id);
  return(t);
}
ATerm inc_0 (ATerm t)
{
  ATerm r_41 = NULL;
  ATerm s_41 = NULL;
  s_41 = t;
  if(((r_41 != NULL) && (r_41 != s_41)))
    _fail(s_41);
  else
    r_41 = s_41;
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(r_41), term_e_9);
    t = add_0(t);
  }
  return(t);
}
ATerm map_with_index_1 (ATerm t, ATerm d_93 (ATerm))
{
  ATerm c_42 = NULL;
  ATerm d_42 = NULL;
  d_42 = t;
  if(((c_42 != NULL) && (c_42 != d_42)))
    _fail(d_42);
  else
    c_42 = d_42;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_e_9, not_null(c_42));
    {
      ATerm v_42 (ATerm t)
      {
        ATerm e_42 = NULL,f_42 = NULL,g_42 = NULL,h_42 = NULL,i_42 = NULL;
        e_42 = t;
        a_42 :
        if(match_cons(e_42, sym__2))
          {
            f_42 = ATgetArgument(e_42, 0);
            g_42 = ATgetArgument(e_42, 1);
            b_42 :
            if(((ATgetType(g_42) == AT_LIST) && ATisEmpty(g_42)))
              {
                t = (ATerm) ATempty;
              }
            else
              {
                if(((ATgetType(g_42) == AT_LIST) && !(ATisEmpty(g_42))))
                  {
                    h_42 = ATgetFirst((ATermList) g_42);
                    i_42 = (ATerm) ATgetNext((ATermList) g_42);
                    {
                      ATerm m_42 = NULL,o_42 = NULL;
                      ATerm i_15;
                      i_15 = t;
                      {
                        ATerm n_42 = NULL;
                        t = (ATerm) ATmakeAppl(sym__2, not_null(f_42), not_null(h_42));
                        {
                          t = d_93(t);
                          {
                            n_42 = t;
                            if(((m_42 != NULL) && (m_42 != n_42)))
                              _fail(n_42);
                            else
                              m_42 = n_42;
                          }
                        }
                      }
                      t = i_15;
                      {
                        ATerm p_42 = NULL,t_42 = NULL;
                        ATerm q_42 = NULL;
                        t = not_null(f_42);
                        {
                          t = inc_0(t);
                          {
                            q_42 = t;
                            if(((p_42 != NULL) && (p_42 != q_42)))
                              _fail(q_42);
                            else
                              p_42 = q_42;
                          }
                        }
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(p_42), not_null(i_42));
                          {
                            t = v_42(t);
                            {
                              t_42 = t;
                              if(((o_42 != NULL) && (o_42 != t_42)))
                                _fail(t_42);
                              else
                                o_42 = t_42;
                            }
                          }
                        }
                        t = (ATerm) ATinsert(CheckATermList(not_null(o_42)), not_null(m_42));
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
      t = v_42(t);
    }
  }
  return(t);
}
ATerm add_indices_0 (ATerm t)
{
  t = map_with_index_1(t, _id);
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
ATerm HdMember_p__2 (ATerm t, ATerm k_77 (ATerm), ATerm l_77 (ATerm))
{
  ATerm g_43 = NULL,h_43 = NULL,j_43 = NULL;
  g_43 = t;
  f_43 :
  if(((ATgetType(g_43) == AT_LIST) && !(ATisEmpty(g_43))))
    {
      h_43 = ATgetFirst((ATermList) g_43);
      j_43 = (ATerm) ATgetNext((ATermList) g_43);
      {
        t = l_77(t);
        {
          ATerm t_1 (ATerm t)
          {
            ATerm r_43 = NULL;
            r_43 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(h_43), not_null(r_43));
              t = k_77(t);
            }
            return(t);
          }
          t = fetch_1(t, t_1);
        }
        t = not_null(j_43);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm union_1 (ATerm t, ATerm g_77 (ATerm))
{
  ATerm x_43 = NULL,c_44 = NULL,d_44 = NULL;
  x_43 = t;
  w_43 :
  if(match_cons(x_43, sym__2))
    {
      c_44 = ATgetArgument(x_43, 0);
      d_44 = ATgetArgument(x_43, 1);
      {
        t = not_null(c_44);
        {
          ATerm h_44 (ATerm t)
          {
            ATerm j_15 = t;
            int u_15 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(d_44);
                ;
                LocalPopChoice(u_15);
              }
            else
              {
                t = j_15;
                {
                  ATerm v_15 = t;
                  int w_15 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm u_1 (ATerm t)
                      {
                        t = not_null(d_44);
                        return(t);
                      }
                      t = HdMember_p__2(t, g_77, u_1);
                      t = h_44(t);
                      ;
                      LocalPopChoice(w_15);
                    }
                  else
                    {
                      t = v_15;
                      t = Cons_2(t, _id, h_44);
                    }
                }
              }
            return(t);
          }
          t = h_44(t);
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
ATerm foldr_3 (ATerm t, ATerm z_77 (ATerm), ATerm a_78 (ATerm), ATerm b_78 (ATerm))
{
  ATerm y_15 = t;
  int z_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = z_77(t);
      ;
      LocalPopChoice(z_15);
    }
  else
    {
      t = y_15;
      {
        ATerm m_44 = NULL,n_44 = NULL,o_44 = NULL;
        m_44 = t;
        l_44 :
        if(((ATgetType(m_44) == AT_LIST) && !(ATisEmpty(m_44))))
          {
            n_44 = ATgetFirst((ATermList) m_44);
            o_44 = (ATerm) ATgetNext((ATermList) m_44);
            {
              ATerm r_44 = NULL,t_44 = NULL;
              ATerm a_16;
              a_16 = t;
              {
                ATerm s_44 = NULL;
                t = not_null(n_44);
                {
                  t = b_78(t);
                  {
                    s_44 = t;
                    if(((r_44 != NULL) && (r_44 != s_44)))
                      _fail(s_44);
                    else
                      r_44 = s_44;
                  }
                }
              }
              t = a_16;
              {
                ATerm u_44 = NULL;
                t = not_null(o_44);
                {
                  t = foldr_3(t, z_77, a_78, b_78);
                  {
                    u_44 = t;
                    if(((t_44 != NULL) && (t_44 != u_44)))
                      _fail(u_44);
                    else
                      t_44 = u_44;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(r_44), not_null(t_44));
                  t = a_78(t);
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
    ATerm z_44 = NULL;
    ATerm a_45 = NULL;
    a_45 = t;
    if(((z_44 != NULL) && (z_44 != a_45)))
      _fail(a_45);
    else
      z_44 = a_45;
    t = (ATerm) ATinsert(ATempty, not_null(z_44));
    return(t);
  }
  t = foldr_3(t, w_1, union_0, x_1);
  return(t);
}
ATerm warn_not_matrix_0 (ATerm t)
{
  ATerm b_16;
  b_16 = t;
  {
    ATerm c_16 = t;
    int h_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_45 = NULL;
        t = map_1(t, length_0);
        {
          t = make_set_0(t);
          {
            t = length_0(t);
            {
              d_45 = t;
              c_45 :
              if(!(match_int(d_45, 1)))
                {
                  _fail(t);
                }
            }
          }
        }
        LocalPopChoice(h_16);
        {
        }
      }
    else
      {
        t = c_16;
        {
          t = (ATerm) ATinsert(ATempty, term_i_16);
          t = fatal_error_0(t);
        }
      }
  }
  t = b_16;
  return(t);
}
ATerm R_2 (ATerm t, ATerm j_59 (ATerm), ATerm k_59 (ATerm))
{
  ATerm k_45 = NULL,l_45 = NULL,m_45 = NULL;
  k_45 = t;
  j_45 :
  if(match_cons(k_45, sym_R_2))
    {
      l_45 = ATgetArgument(k_45, 0);
      m_45 = ATgetArgument(k_45, 1);
      {
        ATerm q_45 = NULL,s_45 = NULL;
        ATerm r_45 = NULL;
        t = SSLgetAnnotations(not_null(k_45));
        {
          r_45 = t;
          if(((q_45 != NULL) && (q_45 != r_45)))
            _fail(r_45);
          else
            q_45 = r_45;
        }
        {
          t = not_null(l_45);
          {
            ATerm u_45 = NULL;
            t = j_59(t);
            {
              s_45 = t;
              {
                t = not_null(m_45);
                {
                  ATerm w_45 = NULL;
                  t = k_59(t);
                  {
                    u_45 = t;
                    {
                      ATerm x_45 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_R_2, not_null(s_45), not_null(u_45)), not_null(q_45));
                      {
                        x_45 = t;
                        if(((w_45 != NULL) && (w_45 != x_45)))
                          _fail(x_45);
                        else
                          w_45 = x_45;
                      }
                      t = not_null(w_45);
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
ATerm split_2 (ATerm t, ATerm x_70 (ATerm), ATerm y_70 (ATerm))
{
  ATerm f_46 = NULL,h_46 = NULL;
  ATerm j_16;
  j_16 = t;
  {
    ATerm g_46 = NULL;
    t = x_70(t);
    {
      g_46 = t;
      if(((f_46 != NULL) && (f_46 != g_46)))
        _fail(g_46);
      else
        f_46 = g_46;
    }
  }
  t = j_16;
  {
    ATerm i_46 = NULL;
    t = y_70(t);
    {
      i_46 = t;
      if(((h_46 != NULL) && (h_46 != i_46)))
        _fail(i_46);
      else
        h_46 = i_46;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(f_46), not_null(h_46));
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
    ATerm t_47 (ATerm t)
    {
      ATerm u_46 = NULL,v_46 = NULL,w_46 = NULL,x_46 = NULL,y_46 = NULL,z_46 = NULL,a_47 = NULL;
      ATerm w_47 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(z_46), (ATerm) ATinsert(CheckATermList(not_null(a_47)), not_null(y_46)));
        t = t_47(t);
        return(t);
      }
      w_46 = t;
      r_46 :
      if(match_cons(w_46, sym__2))
        {
          x_46 = ATgetArgument(w_46, 0);
          a_47 = ATgetArgument(w_46, 1);
          s_46 :
          if(((ATgetType(x_46) == AT_LIST) && ATisEmpty(x_46)))
            {
              {
                ATerm f_47 = NULL;
                ATerm g_47 = NULL;
                t = not_null(a_47);
                {
                  t = reverse_0(t);
                  {
                    g_47 = t;
                    if(((f_47 != NULL) && (f_47 != g_47)))
                      _fail(g_47);
                    else
                      f_47 = g_47;
                  }
                }
                t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_R_2, (ATerm)ATempty, not_null(f_47)));
              }
            }
          else
            {
              if(((ATgetType(x_46) == AT_LIST) && !(ATisEmpty(x_46))))
                {
                  y_46 = ATgetFirst((ATermList) x_46);
                  z_46 = (ATerm) ATgetNext((ATermList) x_46);
                  t_46 :
                  if(match_cons(y_46, sym_R_2))
                    {
                      u_46 = ATgetArgument(y_46, 0);
                      v_46 = ATgetArgument(y_46, 1);
                      {
                        ATerm n_16 = t;
                        int p_16 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm l_47 = NULL,n_47 = NULL;
                            ATerm s_16;
                            s_16 = t;
                            {
                              ATerm m_47 = NULL;
                              t = not_null(a_47);
                              {
                                t = reverse_0(t);
                                {
                                  m_47 = t;
                                  if(((l_47 != NULL) && (l_47 != m_47)))
                                    _fail(m_47);
                                  else
                                    l_47 = m_47;
                                }
                              }
                            }
                            t = s_16;
                            {
                              ATerm o_47 = NULL;
                              t = (ATerm) ATmakeAppl(sym__2, not_null(z_46), (ATerm) ATempty);
                              {
                                t = t_47(t);
                                {
                                  o_47 = t;
                                  if(((n_47 != NULL) && (n_47 != o_47)))
                                    _fail(o_47);
                                  else
                                    n_47 = o_47;
                                }
                              }
                              t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(n_47)), (ATerm) ATmakeAppl(sym_R_2, not_null(u_46), not_null(v_46))), (ATerm) ATmakeAppl(sym_R_2, (ATerm)ATempty, not_null(l_47)));
                            }
                            ;
                            LocalPopChoice(p_16);
                          }
                        else
                          {
                            t = n_16;
                            t = w_47(t);
                          }
                      }
                    }
                  else
                    {
                      t = w_47(t);
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
    t = t_47(t);
    {
      ATerm z_1 (ATerm t)
      {
        ATerm t_16 = t;
        if((PushChoice() == 0))
          {
            t = R_2(t, _id, Nil_0);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = t_16;
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
  ATerm d_48 = NULL,e_48 = NULL,f_48 = NULL;
  d_48 = t;
  b_48 :
  if(((ATgetType(d_48) == AT_LIST) && !(ATisEmpty(d_48))))
    {
      e_48 = ATgetFirst((ATermList) d_48);
      f_48 = (ATerm) ATgetNext((ATermList) d_48);
      c_48 :
      if(((ATgetType(f_48) == AT_LIST) && ATisEmpty(f_48)))
        {
          t = not_null(e_48);
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
  ATerm u_16 = t;
  int v_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Last_0(t);
      ;
      LocalPopChoice(v_16);
    }
  else
    {
      t = u_16;
      {
        t = Tl_0(t);
        t = last_0(t);
      }
    }
  return(t);
}
ATerm eq_0 (ATerm t)
{
  ATerm l_48 = NULL,m_48 = NULL,n_48 = NULL;
  l_48 = t;
  k_48 :
  if(match_cons(l_48, sym__2))
    {
      m_48 = ATgetArgument(l_48, 0);
      n_48 = ATgetArgument(l_48, 1);
      if(((m_48 != NULL) && (m_48 != n_48)))
        _fail(n_48);
      else
        m_48 = n_48;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm elem_1 (ATerm t, ATerm d_72 (ATerm))
{
  ATerm t_48 = NULL,u_48 = NULL,v_48 = NULL;
  t_48 = t;
  s_48 :
  if(match_cons(t_48, sym__2))
    {
      u_48 = ATgetArgument(t_48, 0);
      v_48 = ATgetArgument(t_48, 1);
      {
        t = not_null(v_48);
        {
          ATerm d_2 (ATerm t)
          {
            ATerm w_16;
            w_16 = t;
            {
              ATerm y_48 = NULL;
              ATerm z_48 = NULL;
              z_48 = t;
              if(((y_48 != NULL) && (y_48 != z_48)))
                _fail(z_48);
              else
                y_48 = z_48;
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(u_48), not_null(y_48));
                t = d_72(t);
              }
            }
            t = w_16;
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
ATerm at_suffix_1 (ATerm t, ATerm o_72 (ATerm))
{
  ATerm f_49 (ATerm t)
  {
    ATerm x_16 = t;
    int c_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_72(t);
        ;
        LocalPopChoice(c_17);
      }
    else
      {
        t = x_16;
        t = Cons_2(t, _id, f_49);
      }
    return(t);
  }
  t = f_49(t);
  return(t);
}
ATerm split_fetch_1 (ATerm t, ATerm h_72 (ATerm))
{
  ATerm i_49 = NULL,k_49 = NULL;
  ATerm e_2 (ATerm t)
  {
    t = Cons_2(t, h_72, _id);
    {
      ATerm f_2 (ATerm t)
      {
        ATerm j_49 = NULL;
        j_49 = t;
        if(((i_49 != NULL) && (i_49 != j_49)))
          _fail(j_49);
        else
          i_49 = j_49;
        return(t);
      }
      t = Cons_2(t, _id, f_2);
      t = (ATerm) ATempty;
    }
    return(t);
  }
  t = at_suffix_1(t, e_2);
  {
    ATerm l_49 = NULL;
    l_49 = t;
    if(((k_49 != NULL) && (k_49 != l_49)))
      _fail(l_49);
    else
      k_49 = l_49;
    t = (ATerm) ATmakeAppl(sym__2, not_null(k_49), not_null(i_49));
  }
  return(t);
}
ATerm list_tokenize_1 (ATerm t, ATerm w_93 (ATerm))
{
  ATerm a_50 = NULL,b_50 = NULL,c_50 = NULL,d_50 = NULL,e_50 = NULL,f_50 = NULL,g_50 = NULL;
  ATerm d_17 = t;
  int e_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = split_fetch_1(t, w_93);
      ;
      LocalPopChoice(e_17);
    }
  else
    {
      t = d_17;
      {
        ATerm y_49 = NULL;
        ATerm z_49 = NULL;
        z_49 = t;
        if(((y_49 != NULL) && (y_49 != z_49)))
          _fail(z_49);
        else
          y_49 = z_49;
        t = (ATerm) ATmakeAppl(sym__2, not_null(y_49), (ATerm) ATempty);
      }
    }
  {
    a_50 = t;
    u_49 :
    if(match_cons(a_50, sym__2))
      {
        b_50 = ATgetArgument(a_50, 0);
        e_50 = ATgetArgument(a_50, 1);
        v_49 :
        if(((ATgetType(b_50) == AT_LIST) && ATisEmpty(b_50)))
          {
            w_49 :
            if(((ATgetType(e_50) == AT_LIST) && ATisEmpty(e_50)))
              {
                t = (ATerm) ATempty;
              }
            else
              {
                if(((ATgetType(e_50) == AT_LIST) && !(ATisEmpty(e_50))))
                  {
                    f_50 = ATgetFirst((ATermList) e_50);
                    g_50 = (ATerm) ATgetNext((ATermList) e_50);
                    {
                      t = not_null(e_50);
                      t = list_tokenize_1(t, w_93);
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
            if(((ATgetType(b_50) == AT_LIST) && !(ATisEmpty(b_50))))
              {
                c_50 = ATgetFirst((ATermList) b_50);
                d_50 = (ATerm) ATgetNext((ATermList) b_50);
                x_49 :
                if(((ATgetType(e_50) == AT_LIST) && ATisEmpty(e_50)))
                  {
                    t = (ATerm) ATinsert(ATempty, not_null(b_50));
                  }
                else
                  {
                    if(((ATgetType(e_50) == AT_LIST) && !(ATisEmpty(e_50))))
                      {
                        f_50 = ATgetFirst((ATermList) e_50);
                        g_50 = (ATerm) ATgetNext((ATermList) e_50);
                        {
                          ATerm l_50 = NULL;
                          ATerm m_50 = NULL;
                          t = not_null(e_50);
                          {
                            t = list_tokenize_1(t, w_93);
                            {
                              m_50 = t;
                              if(((l_50 != NULL) && (l_50 != m_50)))
                                _fail(m_50);
                              else
                                l_50 = m_50;
                            }
                          }
                          t = (ATerm) ATinsert(CheckATermList(not_null(l_50)), not_null(b_50));
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
  ATerm w_50 = NULL,x_50 = NULL,y_50 = NULL;
  t = _2(t, _id, explode_string_0);
  {
    w_50 = t;
    v_50 :
    if(match_cons(w_50, sym__2))
      {
        x_50 = ATgetArgument(w_50, 0);
        y_50 = ATgetArgument(w_50, 1);
        {
          t = not_null(y_50);
          {
            ATerm g_2 (ATerm t)
            {
              ATerm b_51 = NULL;
              ATerm c_51 = NULL;
              c_51 = t;
              if(((b_51 != NULL) && (b_51 != c_51)))
                _fail(c_51);
              else
                b_51 = c_51;
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(b_51), not_null(x_50));
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
  ATerm m_51 = NULL,n_51 = NULL,o_51 = NULL;
  m_51 = t;
  l_51 :
  if(match_cons(m_51, sym__2))
    {
      n_51 = ATgetArgument(m_51, 0);
      o_51 = ATgetArgument(m_51, 1);
      {
        ATerm r_51 = NULL;
        ATerm y_51 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, term_v_10, not_null(n_51));
        {
          t = string_tokenize_0(t);
          {
            ATerm f_17 = t;
            int g_17 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm s_51 = NULL,t_51 = NULL,u_51 = NULL;
                s_51 = t;
                h_51 :
                if(((ATgetType(s_51) == AT_LIST) && !(ATisEmpty(s_51))))
                  {
                    t_51 = ATgetFirst((ATermList) s_51);
                    u_51 = (ATerm) ATgetNext((ATermList) s_51);
                    i_51 :
                    if(((ATgetType(u_51) == AT_LIST) && ATisEmpty(u_51)))
                      {
                        {
                          t = not_null(t_51);
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
                ;
                LocalPopChoice(g_17);
              }
            else
              {
                t = f_17;
                {
                  ATerm w_51 = NULL;
                  ATerm x_51 = NULL;
                  t = last_0(t);
                  {
                    t = string_length_0(t);
                    {
                      x_51 = t;
                      if(((w_51 != NULL) && (w_51 != x_51)))
                        _fail(x_51);
                      else
                        w_51 = x_51;
                    }
                  }
                  {
                    t = (ATerm) ATmakeAppl(sym__2, not_null(w_51), not_null(o_51));
                    t = subt_0(t);
                  }
                }
              }
            {
              y_51 = t;
              if(((r_51 != NULL) && (r_51 != y_51)))
                _fail(y_51);
              else
                r_51 = y_51;
            }
          }
        }
        t = not_null(r_51);
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
  ATerm m_17 = t;
  if((PushChoice() == 0))
    {
      t = gt_0(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = m_17;
    }
  return(t);
}
ATerm get_width_0 (ATerm t)
{
  ATerm n_17 = t;
  int o_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_t_17;
      t = get_config_0(t);
      ;
      LocalPopChoice(o_17);
    }
  else
    {
      t = n_17;
      t = term_u_17;
    }
  return(t);
}
ATerm abox2text_0 (ATerm t)
{
  ATerm l_55 = NULL,m_55 = NULL,o_55 = NULL,p_55 = NULL,q_55 = NULL,r_55 = NULL,u_55 = NULL,v_55 = NULL,w_55 = NULL,x_55 = NULL;
  r_55 = t;
  e_55 :
  if(match_cons(r_55, sym__2))
    {
      u_55 = ATgetArgument(r_55, 0);
      x_55 = ATgetArgument(r_55, 1);
      f_55 :
      if(((ATgetType(u_55) == AT_LIST) && ATisEmpty(u_55)))
        {
          t = (ATerm) ATmakeAppl(sym__2, term_u_13, not_null(x_55));
        }
      else
        {
          if(((ATgetType(u_55) == AT_LIST) && !(ATisEmpty(u_55))))
            {
              v_55 = ATgetFirst((ATermList) u_55);
              w_55 = (ATerm) ATgetNext((ATermList) u_55);
              g_55 :
              if(((ATgetType(w_55) == AT_LIST) && ATisEmpty(w_55)))
                {
                  {
                    t = (ATerm) ATmakeAppl(sym__2, not_null(v_55), not_null(x_55));
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
              if(match_cons(u_55, sym_ALT_2))
                {
                  v_55 = ATgetArgument(u_55, 0);
                  w_55 = ATgetArgument(u_55, 1);
                  {
                    ATerm g_56 = NULL,h_56 = NULL,i_56 = NULL;
                    ATerm v_17;
                    v_17 = t;
                    {
                      ATerm j_56 = NULL,m_56 = NULL,n_56 = NULL;
                      t = (ATerm) ATmakeAppl(sym__2, not_null(v_55), not_null(x_55));
                      {
                        t = try_abox2text_0(t);
                        {
                          j_56 = t;
                          q_53 :
                          if(match_cons(j_56, sym__2))
                            {
                              m_56 = ATgetArgument(j_56, 0);
                              n_56 = ATgetArgument(j_56, 1);
                              {
                                if(((g_56 != NULL) && (g_56 != j_56)))
                                  _fail(j_56);
                                else
                                  g_56 = j_56;
                                {
                                  if(((h_56 != NULL) && (h_56 != m_56)))
                                    _fail(m_56);
                                  else
                                    h_56 = m_56;
                                  if(((i_56 != NULL) && (i_56 != n_56)))
                                    _fail(n_56);
                                  else
                                    i_56 = n_56;
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
                          ATerm o_56 = NULL;
                          ATerm p_56 = NULL;
                          t = get_width_0(t);
                          {
                            p_56 = t;
                            if(((o_56 != NULL) && (o_56 != p_56)))
                              _fail(p_56);
                            else
                              o_56 = p_56;
                          }
                          {
                            t = (ATerm) ATmakeAppl(sym__2, not_null(i_56), not_null(o_56));
                            t = leq_0(t);
                          }
                          LocalPopChoice(x_17);
                          t = not_null(g_56);
                        }
                      else
                        {
                          t = w_17;
                          {
                            t = (ATerm) ATmakeAppl(sym__2, not_null(w_55), not_null(x_55));
                            t = try_abox2text_0(t);
                          }
                        }
                    }
                  }
                }
              else
                {
                  if(match_cons(u_55, sym_R_2))
                    {
                      v_55 = ATgetArgument(u_55, 0);
                      w_55 = ATgetArgument(u_55, 1);
                      {
                        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_HV_2, not_null(v_55), not_null(w_55)), not_null(x_55));
                        t = try_abox2text_0(t);
                      }
                    }
                  else
                    {
                      if(match_cons(u_55, sym_FBOX_2))
                        {
                          v_55 = ATgetArgument(u_55, 0);
                          w_55 = ATgetArgument(u_55, 1);
                          {
                            t = (ATerm) ATmakeAppl(sym__2, not_null(w_55), not_null(x_55));
                            t = try_abox2text_0(t);
                          }
                        }
                      else
                        {
                          if(match_cons(u_55, sym_C_2))
                            {
                              v_55 = ATgetArgument(u_55, 0);
                              w_55 = ATgetArgument(u_55, 1);
                              h_55 :
                              if(((ATgetType(w_55) == AT_LIST) && !(ATisEmpty(w_55))))
                                {
                                  l_55 = ATgetFirst((ATermList) w_55);
                                  o_55 = (ATerm) ATgetNext((ATermList) w_55);
                                  i_55 :
                                  if(match_cons(l_55, sym_S_1))
                                    {
                                      m_55 = ATgetArgument(l_55, 0);
                                      j_55 :
                                      if(((ATgetType(o_55) == AT_LIST) && ATisEmpty(o_55)))
                                        {
                                          t = (ATerm) ATmakeAppl(sym__2, not_null(m_55), not_null(x_55));
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
                              if(match_cons(u_55, sym_S_1))
                                {
                                  v_55 = ATgetArgument(u_55, 0);
                                  {
                                    ATerm g_57 = NULL;
                                    ATerm h_57 = NULL,j_57 = NULL;
                                    ATerm i_57 = NULL;
                                    t = (ATerm) ATmakeAppl(sym__2, not_null(v_55), not_null(x_55));
                                    {
                                      t = rel_string_length_0(t);
                                      {
                                        i_57 = t;
                                        if(((h_57 != NULL) && (h_57 != i_57)))
                                          _fail(i_57);
                                        else
                                          h_57 = i_57;
                                      }
                                    }
                                    {
                                      t = (ATerm) ATmakeAppl(sym__2, not_null(x_55), not_null(h_57));
                                      {
                                        t = add_0(t);
                                        {
                                          j_57 = t;
                                          if(((g_57 != NULL) && (g_57 != j_57)))
                                            _fail(j_57);
                                          else
                                            g_57 = j_57;
                                        }
                                      }
                                    }
                                    t = (ATerm) ATmakeAppl(sym__2, not_null(v_55), not_null(g_57));
                                  }
                                }
                              else
                                {
                                  if(match_cons(u_55, sym_A_3))
                                    {
                                      v_55 = ATgetArgument(u_55, 0);
                                      w_55 = ATgetArgument(u_55, 1);
                                      q_55 = ATgetArgument(u_55, 2);
                                      k_55 :
                                      if(match_cons(v_55, sym_AOPTIONS_1))
                                        {
                                          p_55 = ATgetArgument(v_55, 0);
                                          {
                                            ATerm r_57 = NULL,s_57 = NULL,t_57 = NULL,u_57 = NULL,v_57 = NULL,w_57 = NULL;
                                            ATerm b_58 = NULL;
                                            t = not_null(q_55);
                                            {
                                              t = construct_rows_0(t);
                                              {
                                                ATerm h_2 (ATerm t)
                                                {
                                                  ATerm x_57 = NULL,y_57 = NULL,z_57 = NULL;
                                                  x_57 = t;
                                                  v_53 :
                                                  if(match_cons(x_57, sym_R_2))
                                                    {
                                                      y_57 = ATgetArgument(x_57, 0);
                                                      z_57 = ATgetArgument(x_57, 1);
                                                      t = not_null(z_57);
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
                                                    t = matrix_transpose_0(t);
                                                    {
                                                      t = reverse_0(t);
                                                      {
                                                        t = add_indices_0(t);
                                                        {
                                                          ATerm c_58 = NULL;
                                                          t = reverse_0(t);
                                                          {
                                                            b_58 = t;
                                                            {
                                                              if(((r_57 != NULL) && (r_57 != b_58)))
                                                                _fail(b_58);
                                                              else
                                                                r_57 = b_58;
                                                              {
                                                                t = (ATerm) ATmakeAppl(sym__2, not_null(p_55), not_null(r_57));
                                                                {
                                                                  ATerm d_58 = NULL,e_58 = NULL,f_58 = NULL;
                                                                  t = zip_0(t);
                                                                  {
                                                                    c_58 = t;
                                                                    {
                                                                      if(((s_57 != NULL) && (s_57 != c_58)))
                                                                        _fail(c_58);
                                                                      else
                                                                        s_57 = c_58;
                                                                      {
                                                                        t = (ATerm) ATmakeAppl(sym__2, not_null(s_57), (ATerm) ATmakeAppl(sym__2, not_null(x_55), (ATerm) ATempty));
                                                                        {
                                                                          t = foldl_1(t, do_A_column_0);
                                                                          {
                                                                            d_58 = t;
                                                                            d_54 :
                                                                            if(match_cons(d_58, sym__2))
                                                                              {
                                                                                e_58 = ATgetArgument(d_58, 0);
                                                                                f_58 = ATgetArgument(d_58, 1);
                                                                                {
                                                                                  ATerm g_58 = NULL;
                                                                                  if(((u_57 != NULL) && (u_57 != e_58)))
                                                                                    _fail(e_58);
                                                                                  else
                                                                                    u_57 = e_58;
                                                                                  {
                                                                                    if(((t_57 != NULL) && (t_57 != f_58)))
                                                                                      _fail(f_58);
                                                                                    else
                                                                                      t_57 = f_58;
                                                                                    {
                                                                                      t = not_null(t_57);
                                                                                      {
                                                                                        t = reverse_0(t);
                                                                                        {
                                                                                          ATerm h_58 = NULL,n_58 = NULL;
                                                                                          t = matrix_transpose_0(t);
                                                                                          {
                                                                                            g_58 = t;
                                                                                            {
                                                                                              if(((v_57 != NULL) && (v_57 != g_58)))
                                                                                                _fail(g_58);
                                                                                              else
                                                                                                v_57 = g_58;
                                                                                              {
                                                                                                ATerm m_58 = NULL;
                                                                                                t = not_null(v_57);
                                                                                                {
                                                                                                  ATerm i_2 (ATerm t)
                                                                                                  {
                                                                                                    ATerm i_58 = NULL;
                                                                                                    ATerm l_58 = NULL;
                                                                                                    l_58 = t;
                                                                                                    if(((i_58 != NULL) && (i_58 != l_58)))
                                                                                                      _fail(l_58);
                                                                                                    else
                                                                                                      i_58 = l_58;
                                                                                                    t = (ATerm) ATmakeAppl(sym__2, not_null(i_58), not_null(u_57));
                                                                                                    return(t);
                                                                                                  }
                                                                                                  t = map_1(t, i_2);
                                                                                                  {
                                                                                                    m_58 = t;
                                                                                                    if(((h_58 != NULL) && (h_58 != m_58)))
                                                                                                      _fail(m_58);
                                                                                                    else
                                                                                                      h_58 = m_58;
                                                                                                  }
                                                                                                }
                                                                                                {
                                                                                                  t = (ATerm) ATmakeAppl(sym__3, not_null(w_55), not_null(h_58), not_null(x_55));
                                                                                                  {
                                                                                                    t = format_vbox_0(t);
                                                                                                    {
                                                                                                      n_58 = t;
                                                                                                      if(((w_57 != NULL) && (w_57 != n_58)))
                                                                                                        _fail(n_58);
                                                                                                      else
                                                                                                        w_57 = n_58;
                                                                                                    }
                                                                                                  }
                                                                                                }
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
                                            t = not_null(w_57);
                                          }
                                        }
                                      else
                                        {
                                          _fail(t);
                                        }
                                    }
                                  else
                                    {
                                      if(match_cons(u_55, sym_V_2))
                                        {
                                          v_55 = ATgetArgument(u_55, 0);
                                          w_55 = ATgetArgument(u_55, 1);
                                          {
                                            ATerm r_58 = NULL,s_58 = NULL,t_58 = NULL;
                                            ATerm u_58 = NULL,w_58 = NULL;
                                            ATerm v_58 = NULL;
                                            t = not_null(v_55);
                                            {
                                              t = is_length_0(t);
                                              {
                                                v_58 = t;
                                                if(((u_58 != NULL) && (u_58 != v_58)))
                                                  _fail(v_58);
                                                else
                                                  u_58 = v_58;
                                              }
                                            }
                                            {
                                              t = (ATerm) ATmakeAppl(sym__2, not_null(x_55), not_null(u_58));
                                              {
                                                ATerm x_58 = NULL;
                                                t = add_0(t);
                                                {
                                                  w_58 = t;
                                                  {
                                                    if(((s_58 != NULL) && (s_58 != w_58)))
                                                      _fail(w_58);
                                                    else
                                                      s_58 = w_58;
                                                    {
                                                      t = not_null(w_55);
                                                      {
                                                        ATerm d_59 = NULL;
                                                        t = filter_1(t, is_real_vbox_0);
                                                        {
                                                          x_58 = t;
                                                          {
                                                            if(((r_58 != NULL) && (r_58 != x_58)))
                                                              _fail(x_58);
                                                            else
                                                              r_58 = x_58;
                                                            {
                                                              t = not_null(r_58);
                                                              {
                                                                ATerm y_17 = t;
                                                                int a_18 = stack_ptr;
                                                                if((PushChoice() == 0))
                                                                  {
                                                                    ATerm y_58 = NULL;
                                                                    y_58 = t;
                                                                    h_54 :
                                                                    if(((ATgetType(y_58) == AT_LIST) && ATisEmpty(y_58)))
                                                                      {
                                                                        {
                                                                        }
                                                                      }
                                                                    else
                                                                      {
                                                                        _fail(t);
                                                                      }
                                                                    LocalPopChoice(a_18);
                                                                    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, not_null(x_55));
                                                                  }
                                                                else
                                                                  {
                                                                    t = y_17;
                                                                    {
                                                                      ATerm z_58 = NULL,b_59 = NULL;
                                                                      ATerm a_59 = NULL;
                                                                      a_59 = t;
                                                                      if(((z_58 != NULL) && (z_58 != a_59)))
                                                                        _fail(a_59);
                                                                      else
                                                                        z_58 = a_59;
                                                                      {
                                                                        t = (ATerm) ATmakeAppl(sym__3, not_null(x_55), not_null(s_58), not_null(z_58));
                                                                        {
                                                                          t = do_vbox_children_0(t);
                                                                          {
                                                                            ATerm c_59 = NULL;
                                                                            c_59 = t;
                                                                            if(((b_59 != NULL) && (b_59 != c_59)))
                                                                              _fail(c_59);
                                                                            else
                                                                              b_59 = c_59;
                                                                            {
                                                                              t = (ATerm) ATmakeAppl(sym__3, not_null(v_55), not_null(b_59), not_null(x_55));
                                                                              t = format_vbox_0(t);
                                                                            }
                                                                          }
                                                                        }
                                                                      }
                                                                    }
                                                                  }
                                                                {
                                                                  d_59 = t;
                                                                  if(((t_58 != NULL) && (t_58 != d_59)))
                                                                    _fail(d_59);
                                                                  else
                                                                    t_58 = d_59;
                                                                }
                                                              }
                                                            }
                                                          }
                                                        }
                                                      }
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                            t = not_null(t_58);
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(u_55, sym_H_2))
                                            {
                                              v_55 = ATgetArgument(u_55, 0);
                                              w_55 = ATgetArgument(u_55, 1);
                                              {
                                                ATerm h_59 = NULL,i_59 = NULL,l_59 = NULL,m_59 = NULL;
                                                ATerm n_59 = NULL;
                                                t = not_null(v_55);
                                                {
                                                  ATerm o_59 = NULL;
                                                  t = hs_text_0(t);
                                                  {
                                                    n_59 = t;
                                                    {
                                                      if(((i_59 != NULL) && (i_59 != n_59)))
                                                        _fail(n_59);
                                                      else
                                                        i_59 = n_59;
                                                      {
                                                        t = not_null(i_59);
                                                        {
                                                          ATerm p_59 = NULL;
                                                          t = string_length_0(t);
                                                          {
                                                            o_59 = t;
                                                            {
                                                              if(((l_59 != NULL) && (l_59 != o_59)))
                                                                _fail(o_59);
                                                              else
                                                                l_59 = o_59;
                                                              {
                                                                t = not_null(w_55);
                                                                {
                                                                  ATerm q_59 = NULL,c_60 = NULL;
                                                                  t = filter_1(t, is_real_hbox_0);
                                                                  {
                                                                    p_59 = t;
                                                                    {
                                                                      if(((h_59 != NULL) && (h_59 != p_59)))
                                                                        _fail(p_59);
                                                                      else
                                                                        h_59 = p_59;
                                                                      {
                                                                        t = not_null(h_59);
                                                                        {
                                                                          ATerm t_59 = NULL;
                                                                          t_59 = t;
                                                                          if(((q_59 != NULL) && (q_59 != t_59)))
                                                                            _fail(t_59);
                                                                          else
                                                                            q_59 = t_59;
                                                                          {
                                                                            t = (ATerm) ATmakeAppl(sym__2, not_null(q_59), not_null(x_55));
                                                                            {
                                                                              ATerm j_2 (ATerm t)
                                                                              {
                                                                                t = try_abox2text_0(t);
                                                                                {
                                                                                  ATerm k_2 (ATerm t)
                                                                                  {
                                                                                    ATerm u_59 = NULL;
                                                                                    ATerm v_59 = NULL;
                                                                                    v_59 = t;
                                                                                    if(((u_59 != NULL) && (u_59 != v_59)))
                                                                                      _fail(v_59);
                                                                                    else
                                                                                      u_59 = v_59;
                                                                                    {
                                                                                      t = (ATerm) ATmakeAppl(sym__2, not_null(l_59), not_null(u_59));
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
                                                                                  ATerm w_59 = NULL;
                                                                                  ATerm z_59 = NULL;
                                                                                  z_59 = t;
                                                                                  if(((w_59 != NULL) && (w_59 != z_59)))
                                                                                    _fail(z_59);
                                                                                  else
                                                                                    w_59 = z_59;
                                                                                  {
                                                                                    t = (ATerm) ATmakeAppl(sym__2, not_null(i_59), not_null(w_59));
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
                                                                                      ATerm b_18 = t;
                                                                                      if((PushChoice() == 0))
                                                                                        {
                                                                                          t = Nil_0(t);
                                                                                          PopChoice();
                                                                                          _fail(t);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = b_18;
                                                                                        }
                                                                                      return(t);
                                                                                    }
                                                                                    ATerm o_2 (ATerm t)
                                                                                    {
                                                                                      ATerm a_60 = NULL;
                                                                                      ATerm b_60 = NULL;
                                                                                      b_60 = t;
                                                                                      if(((a_60 != NULL) && (a_60 != b_60)))
                                                                                        _fail(b_60);
                                                                                      else
                                                                                        a_60 = b_60;
                                                                                      {
                                                                                        t = (ATerm) ATmakeAppl(sym__2, not_null(a_60), not_null(l_59));
                                                                                        t = subt_0(t);
                                                                                      }
                                                                                      return(t);
                                                                                    }
                                                                                    t = _2(t, n_2, o_2);
                                                                                    return(t);
                                                                                  }
                                                                                  t = try_1(t, m_2);
                                                                                  {
                                                                                    c_60 = t;
                                                                                    if(((m_59 != NULL) && (m_59 != c_60)))
                                                                                      _fail(c_60);
                                                                                    else
                                                                                      m_59 = c_60;
                                                                                  }
                                                                                }
                                                                              }
                                                                            }
                                                                          }
                                                                        }
                                                                      }
                                                                    }
                                                                  }
                                                                }
                                                              }
                                                            }
                                                          }
                                                        }
                                                      }
                                                    }
                                                  }
                                                }
                                                t = not_null(m_59);
                                              }
                                            }
                                          else
                                            {
                                              if(match_cons(u_55, sym_HV_2))
                                                {
                                                  v_55 = ATgetArgument(u_55, 0);
                                                  w_55 = ATgetArgument(u_55, 1);
                                                  {
                                                    ATerm g_60 = NULL,h_60 = NULL,i_60 = NULL,j_60 = NULL,k_60 = NULL;
                                                    ATerm l_60 = NULL;
                                                    t = not_null(v_55);
                                                    {
                                                      ATerm m_60 = NULL;
                                                      t = hs_text_0(t);
                                                      {
                                                        l_60 = t;
                                                        {
                                                          if(((j_60 != NULL) && (j_60 != l_60)))
                                                            _fail(l_60);
                                                          else
                                                            j_60 = l_60;
                                                          {
                                                            t = not_null(v_55);
                                                            {
                                                              ATerm n_60 = NULL;
                                                              t = vs_text_0(t);
                                                              {
                                                                m_60 = t;
                                                                {
                                                                  if(((g_60 != NULL) && (g_60 != m_60)))
                                                                    _fail(m_60);
                                                                  else
                                                                    g_60 = m_60;
                                                                  {
                                                                    t = not_null(j_60);
                                                                    {
                                                                      ATerm o_60 = NULL,q_60 = NULL;
                                                                      t = string_length_0(t);
                                                                      {
                                                                        n_60 = t;
                                                                        {
                                                                          if(((h_60 != NULL) && (h_60 != n_60)))
                                                                            _fail(n_60);
                                                                          else
                                                                            h_60 = n_60;
                                                                          {
                                                                            ATerm p_60 = NULL;
                                                                            t = not_null(v_55);
                                                                            {
                                                                              t = is_length_0(t);
                                                                              {
                                                                                p_60 = t;
                                                                                if(((o_60 != NULL) && (o_60 != p_60)))
                                                                                  _fail(p_60);
                                                                                else
                                                                                  o_60 = p_60;
                                                                              }
                                                                            }
                                                                            {
                                                                              t = (ATerm) ATmakeAppl(sym__2, not_null(x_55), not_null(o_60));
                                                                              {
                                                                                ATerm t_60 = NULL,v_60 = NULL;
                                                                                t = add_0(t);
                                                                                {
                                                                                  q_60 = t;
                                                                                  {
                                                                                    if(((i_60 != NULL) && (i_60 != q_60)))
                                                                                      _fail(q_60);
                                                                                    else
                                                                                      i_60 = q_60;
                                                                                    {
                                                                                      t = (ATerm) ATmakeAppl(sym__2, not_null(w_55), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, not_null(x_55))));
                                                                                      {
                                                                                        ATerm p_2 (ATerm t)
                                                                                        {
                                                                                          ATerm d_18 = t;
                                                                                          int h_18 = stack_ptr;
                                                                                          if((PushChoice() == 0))
                                                                                            {
                                                                                              ATerm q_2 (ATerm t)
                                                                                              {
                                                                                                t = not_null(h_60);
                                                                                                return(t);
                                                                                              }
                                                                                              t = hv_add_to_hbox_1(t, q_2);
                                                                                              ;
                                                                                              LocalPopChoice(h_18);
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              t = d_18;
                                                                                              {
                                                                                                ATerm r_2 (ATerm t)
                                                                                                {
                                                                                                  t = not_null(h_60);
                                                                                                  return(t);
                                                                                                }
                                                                                                ATerm s_2 (ATerm t)
                                                                                                {
                                                                                                  t = not_null(i_60);
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
                                                                                                  ATerm r_60 = NULL;
                                                                                                  ATerm s_60 = NULL;
                                                                                                  s_60 = t;
                                                                                                  if(((r_60 != NULL) && (r_60 != s_60)))
                                                                                                    _fail(s_60);
                                                                                                  else
                                                                                                    r_60 = s_60;
                                                                                                  {
                                                                                                    t = (ATerm) ATmakeAppl(sym__2, not_null(j_60), not_null(r_60));
                                                                                                    t = separate_by_0(t);
                                                                                                  }
                                                                                                  return(t);
                                                                                                }
                                                                                                t = _2(t, v_2, _id);
                                                                                                return(t);
                                                                                              }
                                                                                              t = map_1(t, u_2);
                                                                                              {
                                                                                                ATerm u_60 = NULL;
                                                                                                u_60 = t;
                                                                                                if(((t_60 != NULL) && (t_60 != u_60)))
                                                                                                  _fail(u_60);
                                                                                                else
                                                                                                  t_60 = u_60;
                                                                                                {
                                                                                                  t = (ATerm) ATmakeAppl(sym__3, not_null(v_55), not_null(t_60), not_null(x_55));
                                                                                                  {
                                                                                                    t = format_vbox_0(t);
                                                                                                    {
                                                                                                      v_60 = t;
                                                                                                      if(((k_60 != NULL) && (k_60 != v_60)))
                                                                                                        _fail(v_60);
                                                                                                      else
                                                                                                        k_60 = v_60;
                                                                                                    }
                                                                                                  }
                                                                                                }
                                                                                              }
                                                                                            }
                                                                                          }
                                                                                        }
                                                                                      }
                                                                                    }
                                                                                  }
                                                                                }
                                                                              }
                                                                            }
                                                                          }
                                                                        }
                                                                      }
                                                                    }
                                                                  }
                                                                }
                                                              }
                                                            }
                                                          }
                                                        }
                                                      }
                                                    }
                                                    t = not_null(k_60);
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
  ATerm p_18 = t;
  int q_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = abox2text_0(t);
      ;
      LocalPopChoice(q_18);
    }
  else
    {
      t = p_18;
      {
        ATerm t_62 = NULL;
        ATerm u_62 = NULL;
        u_62 = t;
        if(((t_62 != NULL) && (t_62 != u_62)))
          _fail(u_62);
        else
          t_62 = u_62;
        {
          t = (ATerm) ATinsert(ATinsert(ATempty, not_null(t_62)), term_r_18);
          t = fatal_error_0(t);
        }
      }
    }
  return(t);
}
ATerm ReadFromFile_0 (ATerm t)
{
  ATerm x_62 = NULL;
  ATerm s_18 = t;
  int t_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_62 = NULL;
      y_62 = t;
      {
        if(((x_62 != NULL) && (x_62 != y_62)))
          _fail(y_62);
        else
          x_62 = y_62;
        t = SSL_ReadFromFile(not_null(x_62));
      }
      ;
      LocalPopChoice(t_18);
    }
  else
    {
      t = s_18;
      {
        ATerm w_2 (ATerm t)
        {
          t = term_u_18;
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
  ATerm c_63 = NULL;
  ATerm e_63 = NULL;
  c_63 = t;
  {
    ATerm z_18;
    z_18 = t;
    {
      ATerm f_63 = NULL;
      t = term_a_19;
      {
        f_63 = t;
        if(((e_63 != NULL) && (e_63 != f_63)))
          _fail(f_63);
        else
          e_63 = f_63;
      }
    }
    t = z_18;
    {
      t = SSL_open_file(not_null(c_63), not_null(e_63));
      t = SSL_close_file(not_null(c_63));
    }
  }
  return(t);
}
ATerm read_from_0 (ATerm t)
{
  ATerm n_63 = NULL,o_63 = NULL;
  n_63 = t;
  m_63 :
  if(match_cons(n_63, sym_stdin_0))
    {
      ATerm p_63 = NULL;
      ATerm q_63 = NULL;
      t = term_b_19;
      {
        t = ReadFromFile_0(t);
        {
          q_63 = t;
          if(((p_63 != NULL) && (p_63 != q_63)))
            _fail(q_63);
          else
            p_63 = q_63;
        }
      }
      t = not_null(p_63);
    }
  else
    {
      if(match_cons(n_63, sym_FILE_1))
        {
          o_63 = ATgetArgument(n_63, 0);
          {
            ATerm s_63 = NULL;
            ATerm t_63 = NULL;
            t = not_null(o_63);
            {
              t = file_exists_0(t);
              {
                t = ReadFromFile_0(t);
                {
                  t_63 = t;
                  if(((s_63 != NULL) && (s_63 != t_63)))
                    _fail(t_63);
                  else
                    s_63 = t_63;
                }
              }
            }
            t = not_null(s_63);
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
  ATerm a_64 = NULL,b_64 = NULL,c_64 = NULL;
  a_64 = t;
  z_63 :
  if(match_cons(a_64, sym__2))
    {
      b_64 = ATgetArgument(a_64, 0);
      c_64 = ATgetArgument(a_64, 1);
      t = SSL_copy(not_null(b_64), not_null(c_64));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm stderr_0 (ATerm t)
{
  ATerm k_64 = NULL;
  k_64 = t;
  j_64 :
  if(match_cons(k_64, sym_stderr_0))
    {
      ATerm m_64 = NULL,o_64 = NULL;
      ATerm e_19;
      e_19 = t;
      {
        ATerm n_64 = NULL;
        t = SSLgetAnnotations(not_null(k_64));
        {
          n_64 = t;
          if(((m_64 != NULL) && (m_64 != n_64)))
            _fail(n_64);
          else
            m_64 = n_64;
        }
      }
      t = e_19;
      {
        ATerm p_64 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stderr_0), not_null(m_64));
        {
          p_64 = t;
          if(((o_64 != NULL) && (o_64 != p_64)))
            _fail(p_64);
          else
            o_64 = p_64;
        }
        t = not_null(o_64);
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
  ATerm x_64 = NULL;
  x_64 = t;
  w_64 :
  if(match_cons(x_64, sym_stdout_0))
    {
      ATerm z_64 = NULL,b_65 = NULL;
      ATerm f_19;
      f_19 = t;
      {
        ATerm a_65 = NULL;
        t = SSLgetAnnotations(not_null(x_64));
        {
          a_65 = t;
          if(((z_64 != NULL) && (z_64 != a_65)))
            _fail(a_65);
          else
            z_64 = a_65;
        }
      }
      t = f_19;
      {
        ATerm c_65 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stdout_0), not_null(z_64));
        {
          c_65 = t;
          if(((b_65 != NULL) && (b_65 != c_65)))
            _fail(c_65);
          else
            b_65 = c_65;
        }
        t = not_null(b_65);
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
  ATerm o_65 = NULL,p_65 = NULL;
  o_65 = t;
  n_65 :
  if(match_cons(o_65, sym_FILE_1))
    {
      p_65 = ATgetArgument(o_65, 0);
      {
        ATerm l_19 = t;
        int m_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_65 = NULL;
            ATerm s_65 = NULL;
            t = m_0(t);
            {
              s_65 = t;
              {
                if(((r_65 != NULL) && (r_65 != s_65)))
                  _fail(s_65);
                else
                  r_65 = s_65;
                {
                  ATerm n_19 = t;
                  int q_19 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = stdout_0(t);
                      ;
                      LocalPopChoice(q_19);
                    }
                  else
                    {
                      t = n_19;
                      t = stderr_0(t);
                    }
                  {
                    t = (ATerm) ATmakeAppl(sym__2, not_null(p_65), not_null(r_65));
                    t = copy_file_0(t);
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(p_65));
            ;
            LocalPopChoice(m_19);
          }
        else
          {
            t = l_19;
            {
              ATerm r_19 = t;
              int s_19 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm z_65 = NULL;
                  ATerm a_66 = NULL;
                  t = m_0(t);
                  {
                    a_66 = t;
                    {
                      if(((z_65 != NULL) && (z_65 != a_66)))
                        _fail(a_66);
                      else
                        z_65 = a_66;
                      {
                        ATerm u_19 = t;
                        if((PushChoice() == 0))
                          {
                            ATerm v_19 = t;
                            int w_19 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = stdout_0(t);
                                ;
                                LocalPopChoice(w_19);
                              }
                            else
                              {
                                t = v_19;
                                {
                                  ATerm b_20 = t;
                                  int c_20 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = stderr_0(t);
                                      ;
                                      LocalPopChoice(c_20);
                                    }
                                  else
                                    {
                                      t = b_20;
                                      {
                                        ATerm b_66 = NULL;
                                        b_66 = t;
                                        if(((p_65 != NULL) && (p_65 != b_66)))
                                          _fail(b_66);
                                        else
                                          p_65 = b_66;
                                      }
                                    }
                                }
                              }
                            PopChoice();
                            _fail(t);
                          }
                        else
                          {
                            t = u_19;
                          }
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(p_65), not_null(z_65));
                          t = copy_file_0(t);
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(p_65));
                  ;
                  LocalPopChoice(s_19);
                }
              else
                {
                  t = r_19;
                  {
                    ATerm d_66 = NULL;
                    t = m_0(t);
                    {
                      d_66 = t;
                      if(((p_65 != NULL) && (p_65 != d_66)))
                        _fail(d_66);
                      else
                        p_65 = d_66;
                    }
                    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(p_65));
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
  ATerm p_66 = NULL,q_66 = NULL,r_66 = NULL;
  p_66 = t;
  o_66 :
  if(((ATgetType(p_66) == AT_LIST) && !(ATisEmpty(p_66))))
    {
      q_66 = ATgetFirst((ATermList) p_66);
      r_66 = (ATerm) ATgetNext((ATermList) p_66);
      t = not_null(r_66);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_pop_0 (ATerm t)
{
  ATerm x_66 = NULL,y_66 = NULL,z_66 = NULL;
  x_66 = t;
  w_66 :
  if(match_cons(x_66, sym__2))
    {
      y_66 = ATgetArgument(x_66, 0);
      z_66 = ATgetArgument(x_66, 1);
      {
        ATerm d_20;
        d_20 = t;
        {
          ATerm c_67 = NULL;
          ATerm d_67 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(y_66), not_null(z_66));
          {
            ATerm e_20 = t;
            int h_20 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                t = Tl_0(t);
                ;
                LocalPopChoice(h_20);
              }
            else
              {
                t = e_20;
                t = (ATerm) ATempty;
              }
            {
              d_67 = t;
              if(((c_67 != NULL) && (c_67 != d_67)))
                _fail(d_67);
              else
                c_67 = d_67;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(y_66), not_null(z_66), not_null(c_67));
            t = table_put_0(t);
          }
        }
        t = d_20;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm end_scope_1 (ATerm t, ATerm f_81 (ATerm))
{
  ATerm k_67 = NULL,m_67 = NULL,n_67 = NULL;
  ATerm i_20;
  i_20 = t;
  {
    ATerm o_67 = NULL;
    ATerm p_67 = NULL,q_67 = NULL,r_67 = NULL;
    t = f_81(t);
    {
      o_67 = t;
      {
        if(((n_67 != NULL) && (n_67 != o_67)))
          _fail(o_67);
        else
          n_67 = o_67;
        {
          ATerm l_20 = t;
          int m_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(n_67), term_y_7);
              t = table_get_0(t);
              ;
              LocalPopChoice(m_20);
            }
          else
            {
              t = l_20;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
            }
          {
            p_67 = t;
            j_67 :
            if(((ATgetType(p_67) == AT_LIST) && !(ATisEmpty(p_67))))
              {
                q_67 = ATgetFirst((ATermList) p_67);
                r_67 = (ATerm) ATgetNext((ATermList) p_67);
                {
                  if(((m_67 != NULL) && (m_67 != q_67)))
                    _fail(q_67);
                  else
                    m_67 = q_67;
                  {
                    if(((k_67 != NULL) && (k_67 != r_67)))
                      _fail(r_67);
                    else
                      k_67 = r_67;
                    {
                      t = (ATerm) ATmakeAppl(sym__3, not_null(n_67), term_y_7, not_null(k_67));
                      {
                        t = table_put_0(t);
                        {
                          t = not_null(m_67);
                          {
                            ATerm x_2 (ATerm t)
                            {
                              ATerm s_67 = NULL;
                              s_67 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(n_67), not_null(s_67));
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
  t = i_20;
  return(t);
}
ATerm remove_file_0 (ATerm t)
{
  ATerm y_67 = NULL;
  y_67 = t;
  t = SSL_remove(not_null(y_67));
  return(t);
}
ATerm restore_always_2 (ATerm t, ATerm s_70 (ATerm), ATerm t_70 (ATerm))
{
  ATerm r_20 = t;
  int s_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = s_70(t);
      t = t_70(t);
      ;
      LocalPopChoice(s_20);
    }
  else
    {
      t = r_20;
      {
        t = t_70(t);
        _fail(t);
      }
    }
  return(t);
}
ATerm begin_scope_1 (ATerm t, ATerm e_81 (ATerm))
{
  ATerm d_68 = NULL;
  ATerm t_20;
  t_20 = t;
  {
    ATerm e_68 = NULL;
    ATerm f_68 = NULL;
    t = e_81(t);
    {
      e_68 = t;
      {
        if(((d_68 != NULL) && (d_68 != e_68)))
          _fail(e_68);
        else
          d_68 = e_68;
        {
          ATerm g_68 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(d_68), term_y_7);
          {
            ATerm u_20 = t;
            int z_20 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                ;
                LocalPopChoice(z_20);
              }
            else
              {
                t = u_20;
                t = (ATerm) ATempty;
              }
            {
              g_68 = t;
              if(((f_68 != NULL) && (f_68 != g_68)))
                _fail(g_68);
              else
                f_68 = g_68;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(d_68), term_y_7, (ATerm) ATinsert(CheckATermList(not_null(f_68)), (ATerm) ATempty));
            t = table_put_0(t);
          }
        }
      }
    }
  }
  t = t_20;
  return(t);
}
ATerm xtc_temp_files_1 (ATerm t, ATerm g_66 (ATerm))
{
  ATerm l_68 = NULL,m_68 = NULL;
  ATerm y_2 (ATerm t)
  {
    t = term_x_8;
    return(t);
  }
  t = begin_scope_1(t, y_2);
  {
    ATerm z_2 (ATerm t)
    {
      ATerm a_21;
      a_21 = t;
      {
        ATerm n_68 = NULL,o_68 = NULL,p_68 = NULL;
        ATerm b_21 = t;
        int c_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_d_21;
            t = table_get_0(t);
            ;
            LocalPopChoice(c_21);
          }
        else
          {
            t = b_21;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
          }
        {
          n_68 = t;
          k_68 :
          if(((ATgetType(n_68) == AT_LIST) && !(ATisEmpty(n_68))))
            {
              o_68 = ATgetFirst((ATermList) n_68);
              p_68 = (ATerm) ATgetNext((ATermList) n_68);
              {
                if(((m_68 != NULL) && (m_68 != o_68)))
                  _fail(o_68);
                else
                  m_68 = o_68;
                {
                  if(((l_68 != NULL) && (l_68 != p_68)))
                    _fail(p_68);
                  else
                    l_68 = p_68;
                  {
                    t = not_null(m_68);
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
      t = a_21;
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
    t = restore_always_2(t, g_66, z_2);
  }
  return(t);
}
ATerm xtc_io_1 (ATerm t, ATerm h_66 (ATerm))
{
  ATerm c_3 (ATerm t)
  {
    ATerm e_21 = t;
    int f_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_68 = NULL;
        ATerm t_68 = NULL;
        t = term_g_21;
        {
          t = get_config_0(t);
          {
            t_68 = t;
            if(((s_68 != NULL) && (s_68 != t_68)))
              _fail(t_68);
            else
              s_68 = t_68;
          }
        }
        t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(s_68));
        ;
        LocalPopChoice(f_21);
      }
    else
      {
        t = e_21;
        t = term_b_19;
      }
    {
      t = h_66(t);
      {
        ATerm d_3 (ATerm t)
        {
          ATerm h_21 = t;
          int l_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = term_m_21;
              t = get_config_0(t);
              ;
              LocalPopChoice(l_21);
            }
          else
            {
              t = h_21;
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
  ATerm w_68 = NULL;
  w_68 = t;
  t = SSL_string_to_int(not_null(w_68));
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm e_69 = NULL,f_69 = NULL,g_69 = NULL,h_69 = NULL,i_69 = NULL;
  e_69 = t;
  c_69 :
  if(match_string(e_69, "register-usage-info"))
    {
      t = register_usage_1(t, l_0);
    }
  else
    {
      if(((ATgetType(e_69) == AT_LIST) && !(ATisEmpty(e_69))))
        {
          f_69 = ATgetFirst((ATermList) e_69);
          g_69 = (ATerm) ATgetNext((ATermList) e_69);
          d_69 :
          if(((ATgetType(g_69) == AT_LIST) && !(ATisEmpty(g_69))))
            {
              h_69 = ATgetFirst((ATermList) g_69);
              i_69 = (ATerm) ATgetNext((ATermList) g_69);
              {
                ATerm m_69 = NULL;
                ATerm o_21;
                o_21 = t;
                {
                  t = not_null(f_69);
                  t = j_0(t);
                }
                t = o_21;
                {
                  ATerm n_69 = NULL;
                  t = not_null(h_69);
                  {
                    t = k_0(t);
                    {
                      n_69 = t;
                      if(((m_69 != NULL) && (m_69 != n_69)))
                        _fail(n_69);
                      else
                        m_69 = n_69;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(i_69)), not_null(m_69));
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
    ATerm s_69 = NULL;
    s_69 = t;
    r_69 :
    if(!(match_string(s_69, "-v")))
      {
        if(!(match_string(s_69, "--version")))
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
    ATerm v_69 = NULL;
    v_69 = t;
    t_69 :
    if(!(match_string(v_69, "-k")))
      {
        if(!(match_string(v_69, "--keep")))
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
        t = (ATerm) ATmakeAppl(sym__2, term_u_21, not_null(w_69));
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
        ATerm f_70 = NULL;
        f_70 = t;
        z_69 :
        if(!(match_string(f_70, "-S")))
          {
            if(!(match_string(f_70, "--silent")))
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
      ;
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
              ATerm g_70 = NULL;
              g_70 = t;
              a_70 :
              if(!(match_string(g_70, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm o_3 (ATerm t)
            {
              ATerm j_70 = NULL;
              ATerm e_22;
              e_22 = t;
              {
                ATerm h_70 = NULL;
                ATerm i_70 = NULL;
                t = string_to_int_0(t);
                {
                  i_70 = t;
                  if(((h_70 != NULL) && (h_70 != i_70)))
                    _fail(i_70);
                  else
                    h_70 = i_70;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_y_21, not_null(h_70));
                  t = set_config_0(t);
                }
              }
              t = e_22;
              {
                ATerm k_70 = NULL;
                k_70 = t;
                if(((j_70 != NULL) && (j_70 != k_70)))
                  _fail(k_70);
                else
                  j_70 = k_70;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(j_70));
              }
              return(t);
            }
            ATerm p_3 (ATerm t)
            {
              t = term_f_22;
              return(t);
            }
            t = ArgOption_3(t, n_3, o_3, p_3);
            ;
            LocalPopChoice(d_22);
          }
        else
          {
            t = c_22;
            {
              ATerm v_3 (ATerm t)
              {
                ATerm l_70 = NULL;
                l_70 = t;
                e_70 :
                if(!(match_string(l_70, "-s")))
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
      ;
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
            ;
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
    ATerm r_70 = NULL;
    r_70 = t;
    o_70 :
    if(!(match_string(r_70, "-o")))
      {
        if(!(match_string(r_70, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm g_4 (ATerm t)
  {
    ATerm w_70 = NULL;
    ATerm o_22;
    o_22 = t;
    {
      ATerm u_70 = NULL;
      ATerm v_70 = NULL;
      v_70 = t;
      if(((u_70 != NULL) && (u_70 != v_70)))
        _fail(v_70);
      else
        u_70 = v_70;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_m_21, not_null(u_70));
        t = set_config_0(t);
      }
    }
    t = o_22;
    {
      ATerm z_70 = NULL;
      z_70 = t;
      if(((w_70 != NULL) && (w_70 != z_70)))
        _fail(z_70);
      else
        w_70 = z_70;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(w_70));
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
      ;
      LocalPopChoice(r_22);
    }
  else
    {
      t = q_22;
      {
        ATerm j_4 (ATerm t)
        {
          ATerm d_71 = NULL;
          d_71 = t;
          c_71 :
          if(!(match_string(d_71, "-b")))
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
    ATerm h_71 = NULL;
    h_71 = t;
    e_71 :
    if(!(match_string(h_71, "-i")))
      {
        if(!(match_string(h_71, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm v_4 (ATerm t)
  {
    ATerm k_71 = NULL;
    ATerm w_22;
    w_22 = t;
    {
      ATerm i_71 = NULL;
      ATerm j_71 = NULL;
      j_71 = t;
      if(((i_71 != NULL) && (i_71 != j_71)))
        _fail(j_71);
      else
        i_71 = j_71;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_g_21, not_null(i_71));
        t = set_config_0(t);
      }
    }
    t = w_22;
    {
      ATerm l_71 = NULL;
      l_71 = t;
      if(((k_71 != NULL) && (k_71 != l_71)))
        _fail(l_71);
      else
        k_71 = l_71;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(k_71));
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
      ;
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
            ;
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
      ;
      LocalPopChoice(d_23);
    }
  else
    {
      t = c_23;
      {
        ATerm a_5 (ATerm t)
        {
          ATerm r_71 = NULL;
          r_71 = t;
          o_71 :
          if(!(match_string(r_71, "-w")))
            {
              if(!(match_string(r_71, "--width")))
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
            ATerm s_71 = NULL;
            ATerm u_71 = NULL;
            t = string_to_int_0(t);
            {
              u_71 = t;
              if(((s_71 != NULL) && (s_71 != u_71)))
                _fail(u_71);
              else
                s_71 = u_71;
            }
            {
              t = (ATerm) ATmakeAppl(sym__2, term_t_17, not_null(s_71));
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
  ATerm a_72 = NULL;
  ATerm g_23;
  g_23 = t;
  {
    ATerm e_5 (ATerm t)
    {
      ATerm b_72 = NULL,c_72 = NULL;
      b_72 = t;
      z_71 :
      if(match_cons(b_72, sym_Program_1))
        {
          c_72 = ATgetArgument(b_72, 0);
          if(((a_72 != NULL) && (a_72 != c_72)))
            _fail(c_72);
          else
            a_72 = c_72;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = option_defined_1(t, e_5);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_c_9, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_i_23), not_null(a_72)), term_h_23));
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
  ATerm j_72 = NULL;
  j_72 = t;
  t = SSL_TicksToSeconds(not_null(j_72));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm s_72 = NULL,t_72 = NULL,u_72 = NULL;
  s_72 = t;
  r_72 :
  if(match_cons(s_72, sym__2))
    {
      t_72 = ATgetArgument(s_72, 0);
      u_72 = ATgetArgument(s_72, 1);
      {
        ATerm k_23 = t;
        int l_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(t_72), not_null(u_72));
            ;
            LocalPopChoice(l_23);
          }
        else
          {
            t = k_23;
            t = SSL_addr(not_null(t_72), not_null(u_72));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm x_77 (ATerm), ATerm y_77 (ATerm))
{
  ATerm m_23 = t;
  int n_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = x_77(t);
      ;
      LocalPopChoice(n_23);
    }
  else
    {
      t = m_23;
      {
        ATerm b_73 = NULL,c_73 = NULL,d_73 = NULL;
        b_73 = t;
        a_73 :
        if(((ATgetType(b_73) == AT_LIST) && !(ATisEmpty(b_73))))
          {
            c_73 = ATgetFirst((ATermList) b_73);
            d_73 = (ATerm) ATgetNext((ATermList) b_73);
            {
              ATerm g_73 = NULL;
              ATerm h_73 = NULL;
              t = not_null(d_73);
              {
                t = foldr_2(t, x_77, y_77);
                {
                  h_73 = t;
                  if(((g_73 != NULL) && (g_73 != h_73)))
                    _fail(h_73);
                  else
                    g_73 = h_73;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(c_73), not_null(g_73));
                t = y_77(t);
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
ATerm crush_2 (ATerm t, ATerm v_76 (ATerm), ATerm w_76 (ATerm))
{
  ATerm u_73 = NULL;
  ATerm w_73 = NULL;
  u_73 = t;
  {
    ATerm x_73 = NULL;
    ATerm a_74 = NULL,b_74 = NULL,c_74 = NULL;
    t = not_null(u_73);
    {
      x_73 = t;
      {
        t = SSL_explode_term(not_null(x_73));
        {
          a_74 = t;
          n_73 :
          if(match_cons(a_74, sym__2))
            {
              b_74 = ATgetArgument(a_74, 0);
              c_74 = ATgetArgument(a_74, 1);
              if(((w_73 != NULL) && (w_73 != c_74)))
                _fail(c_74);
              else
                w_73 = c_74;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(w_73);
      t = foldr_2(t, v_76, w_76);
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
  ATerm i_74 = NULL,j_74 = NULL,k_74 = NULL;
  i_74 = t;
  h_74 :
  if(match_cons(i_74, sym__2))
    {
      j_74 = ATgetArgument(i_74, 0);
      k_74 = ATgetArgument(i_74, 1);
      {
        ATerm o_23;
        o_23 = t;
        {
          ATerm p_23 = t;
          int q_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(j_74), not_null(k_74));
              ;
              LocalPopChoice(q_23);
            }
          else
            {
              t = p_23;
              t = SSL_gtr(not_null(j_74), not_null(k_74));
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
  ATerm q_74 = NULL;
  ATerm r_23 = t;
  int s_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_74 = NULL,s_74 = NULL,t_74 = NULL;
      r_74 = t;
      p_74 :
      if(match_cons(r_74, sym__2))
        {
          s_74 = ATgetArgument(r_74, 0);
          t_74 = ATgetArgument(r_74, 1);
          {
            if(((q_74 != NULL) && (q_74 != s_74)))
              _fail(s_74);
            else
              q_74 = s_74;
            if(((q_74 != NULL) && (q_74 != t_74)))
              _fail(t_74);
            else
              q_74 = t_74;
          }
        }
      else
        {
          _fail(t);
        }
      ;
      LocalPopChoice(s_23);
    }
  else
    {
      t = r_23;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm a_80 (ATerm))
{
  ATerm g_5 (ATerm t)
  {
    ATerm t_23;
    t_23 = t;
    {
      ATerm w_74 = NULL;
      ATerm x_74 = NULL;
      t = term_y_21;
      {
        t = get_config_0(t);
        {
          x_74 = t;
          if(((w_74 != NULL) && (w_74 != x_74)))
            _fail(x_74);
          else
            w_74 = x_74;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(w_74), term_e_9);
        t = geq_0(t);
      }
    }
    t = t_23;
    t = a_80(t);
    return(t);
  }
  t = try_1(t, g_5);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm h_5 (ATerm t)
  {
    ATerm b_75 = NULL,d_75 = NULL;
    ATerm u_23;
    u_23 = t;
    {
      ATerm c_75 = NULL;
      t = run_time_0(t);
      {
        c_75 = t;
        if(((b_75 != NULL) && (b_75 != c_75)))
          _fail(c_75);
        else
          b_75 = c_75;
      }
    }
    t = u_23;
    {
      ATerm e_75 = NULL;
      t = term_v_23;
      {
        t = get_config_0(t);
        {
          e_75 = t;
          if(((d_75 != NULL) && (d_75 != e_75)))
            _fail(e_75);
          else
            d_75 = e_75;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_c_9, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_x_23), not_null(b_75)), term_w_23), not_null(d_75)));
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
  ATerm l_75 = NULL;
  l_75 = t;
  k_75 :
  if(match_cons(l_75, sym_Version_0))
    {
      ATerm n_75 = NULL,p_75 = NULL;
      ATerm y_23;
      y_23 = t;
      {
        ATerm o_75 = NULL;
        t = SSLgetAnnotations(not_null(l_75));
        {
          o_75 = t;
          if(((n_75 != NULL) && (n_75 != o_75)))
            _fail(o_75);
          else
            n_75 = o_75;
        }
      }
      t = y_23;
      {
        ATerm q_75 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(n_75));
        {
          q_75 = t;
          if(((p_75 != NULL) && (p_75 != q_75)))
            _fail(q_75);
          else
            p_75 = q_75;
        }
        t = not_null(p_75);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm p_83 (ATerm))
{
  ATerm j_5 (ATerm t)
  {
    ATerm z_23 = t;
    int a_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        ;
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
              ;
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
  t = p_83(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm v_75 = NULL;
  v_75 = t;
  t = SSL_table_create(not_null(v_75));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm z_75 = NULL;
  z_75 = t;
  {
    ATerm d_24;
    d_24 = t;
    {
      t = term_e_24;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_e_24, term_f_24, not_null(z_75));
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
  ATerm d_76 = NULL;
  d_76 = t;
  t = SSL_table_destroy(not_null(d_76));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm h_76 = NULL;
  h_76 = t;
  t = SSL_exit(not_null(h_76));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm l_76 = NULL,m_76 = NULL,n_76 = NULL;
  l_76 = t;
  k_76 :
  if(((ATgetType(l_76) == AT_LIST) && ATisEmpty(l_76)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(l_76) == AT_LIST) && !(ATisEmpty(l_76))))
        {
          m_76 = ATgetFirst((ATermList) l_76);
          n_76 = (ATerm) ATgetNext((ATermList) l_76);
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
    ATerm q_76 = NULL;
    ATerm t_76 = NULL;
    ATerm h_24 = t;
    int i_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        ;
        LocalPopChoice(i_24);
      }
    else
      {
        t = h_24;
        {
          ATerm r_76 = NULL;
          ATerm s_76 = NULL;
          s_76 = t;
          if(((r_76 != NULL) && (r_76 != s_76)))
            _fail(s_76);
          else
            r_76 = s_76;
          t = (ATerm) ATinsert(ATempty, not_null(r_76));
        }
      }
    {
      t_76 = t;
      if(((q_76 != NULL) && (q_76 != t_76)))
        _fail(t_76);
      else
        q_76 = t_76;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_n_21, not_null(q_76));
      t = printnl_0(t);
    }
  }
  t = g_24;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm x_85 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm g_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm e_77 = NULL,f_77 = NULL,i_77 = NULL;
  i_77 = t;
  d_77 :
  if(((ATgetType(i_77) == AT_LIST) && !(ATisEmpty(i_77))))
    {
      e_77 = ATgetFirst((ATermList) i_77);
      f_77 = (ATerm) ATgetNext((ATermList) i_77);
      {
        ATerm n_77 = NULL;
        t = not_null(f_77);
        {
          ATerm j_24;
          j_24 = t;
          {
            ATerm o_77 = NULL,q_77 = NULL,s_77 = NULL;
            ATerm k_24;
            k_24 = t;
            {
              ATerm p_77 = NULL;
              t = i_0(t);
              {
                p_77 = t;
                if(((o_77 != NULL) && (o_77 != p_77)))
                  _fail(p_77);
                else
                  o_77 = p_77;
              }
            }
            t = k_24;
            {
              ATerm r_77 = NULL;
              t = not_null(e_77);
              {
                t = g_0(t);
                {
                  r_77 = t;
                  if(((q_77 != NULL) && (q_77 != r_77)))
                    _fail(r_77);
                  else
                    q_77 = r_77;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(o_77)), not_null(q_77));
                {
                  s_77 = t;
                  if(((n_77 != NULL) && (n_77 != s_77)))
                    _fail(s_77);
                  else
                    n_77 = s_77;
                }
              }
            }
          }
          t = j_24;
          {
            ATerm o_5 (ATerm t)
            {
              t = not_null(n_77);
              return(t);
            }
            t = reverse_acc_2(t, g_0, o_5);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(i_77) == AT_LIST) && ATisEmpty(i_77)))
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
ATerm short_description_1 (ATerm t, ATerm w_85 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm g_61 (ATerm))
{
  ATerm k_78 = NULL,m_78 = NULL;
  k_78 = t;
  j_78 :
  if(match_cons(k_78, sym_Program_1))
    {
      m_78 = ATgetArgument(k_78, 0);
      {
        ATerm r_78 = NULL,t_78 = NULL;
        ATerm s_78 = NULL;
        t = SSLgetAnnotations(not_null(k_78));
        {
          s_78 = t;
          if(((r_78 != NULL) && (r_78 != s_78)))
            _fail(s_78);
          else
            r_78 = s_78;
        }
        {
          t = not_null(m_78);
          {
            ATerm v_78 = NULL;
            t = g_61(t);
            {
              t_78 = t;
              {
                ATerm w_78 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(t_78)), not_null(r_78));
                {
                  w_78 = t;
                  if(((v_78 != NULL) && (v_78 != w_78)))
                    _fail(w_78);
                  else
                    v_78 = w_78;
                }
                t = not_null(v_78);
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
  ATerm h_79 = NULL;
  ATerm l_24 = t;
  int m_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_79 = NULL;
      t = term_v_23;
      {
        t = get_config_0(t);
        {
          i_79 = t;
          if(((h_79 != NULL) && (h_79 != i_79)))
            _fail(i_79);
          else
            h_79 = i_79;
        }
      }
      ;
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
            ATerm j_79 = NULL;
            j_79 = t;
            if(((h_79 != NULL) && (h_79 != j_79)))
              _fail(j_79);
            else
              h_79 = j_79;
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
        t = not_null(h_79);
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
                  ATerm k_79 = NULL;
                  ATerm l_79 = NULL;
                  l_79 = t;
                  if(((k_79 != NULL) && (k_79 != l_79)))
                    _fail(l_79);
                  else
                    k_79 = l_79;
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(k_79)), term_r_24);
                    t = echo_0(t);
                  }
                  return(t);
                }
                t = map_1(t, y_5);
                {
                  ATerm c_6 (ATerm t)
                  {
                    ATerm m_79 = NULL;
                    ATerm n_79 = NULL;
                    ATerm i_6 (ATerm t)
                    {
                      t = not_null(h_79);
                      return(t);
                    }
                    t = long_description_1(t, i_6);
                    {
                      n_79 = t;
                      if(((m_79 != NULL) && (m_79 != n_79)))
                        _fail(n_79);
                      else
                        m_79 = n_79;
                    }
                    {
                      t = (ATerm) ATinsert(CheckATermList(not_null(m_79)), term_s_24);
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
    ATerm t_79 = NULL;
    ATerm u_79 = NULL;
    u_79 = t;
    if(((t_79 != NULL) && (t_79 != u_79)))
      _fail(u_79);
    else
      t_79 = u_79;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_c_9, (ATerm) ATinsert(ATempty, not_null(t_79)));
      t = printnl_0(t);
    }
  }
  t = t_24;
  return(t);
}
ATerm say_1 (ATerm t, ATerm q_81 (ATerm))
{
  ATerm u_24;
  u_24 = t;
  {
    t = q_81(t);
    t = debug_0(t);
  }
  t = u_24;
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm h_61 (ATerm))
{
  ATerm c_80 = NULL,d_80 = NULL;
  c_80 = t;
  b_80 :
  if(match_cons(c_80, sym_Undefined_1))
    {
      d_80 = ATgetArgument(c_80, 0);
      {
        ATerm g_80 = NULL,i_80 = NULL;
        ATerm h_80 = NULL;
        t = SSLgetAnnotations(not_null(c_80));
        {
          h_80 = t;
          if(((g_80 != NULL) && (g_80 != h_80)))
            _fail(h_80);
          else
            g_80 = h_80;
        }
        {
          t = not_null(d_80);
          {
            ATerm k_80 = NULL;
            t = h_61(t);
            {
              i_80 = t;
              {
                ATerm l_80 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(i_80)), not_null(g_80));
                {
                  l_80 = t;
                  if(((k_80 != NULL) && (k_80 != l_80)))
                    _fail(l_80);
                  else
                    k_80 = l_80;
                }
                t = not_null(k_80);
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
ATerm fetch_1 (ATerm t, ATerm e_72 (ATerm))
{
  ATerm q_80 (ATerm t)
  {
    ATerm v_24 = t;
    int w_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, e_72, _id);
        ;
        LocalPopChoice(w_24);
      }
    else
      {
        t = v_24;
        t = Cons_2(t, _id, q_80);
      }
    return(t);
  }
  t = q_80(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm w_84 (ATerm))
{
  t = fetch_1(t, w_84);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm v_80 = NULL;
  v_80 = t;
  u_80 :
  if(match_cons(v_80, sym_Help_0))
    {
      ATerm x_80 = NULL,z_80 = NULL;
      ATerm x_24;
      x_24 = t;
      {
        ATerm y_80 = NULL;
        t = SSLgetAnnotations(not_null(v_80));
        {
          y_80 = t;
          if(((x_80 != NULL) && (x_80 != y_80)))
            _fail(y_80);
          else
            x_80 = y_80;
        }
      }
      t = x_24;
      {
        ATerm a_81 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(x_80));
        {
          a_81 = t;
          if(((z_80 != NULL) && (z_80 != a_81)))
            _fail(a_81);
          else
            z_80 = a_81;
        }
        t = not_null(z_80);
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
  ATerm h_81 = NULL;
  h_81 = t;
  t = SSL_implode_string(not_null(h_81));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm y_24 = t;
  int z_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      ;
      LocalPopChoice(z_24);
    }
  else
    {
      t = y_24;
      {
        ATerm o_81 = NULL,r_81 = NULL,s_81 = NULL;
        o_81 = t;
        n_81 :
        if(((ATgetType(o_81) == AT_LIST) && !(ATisEmpty(o_81))))
          {
            r_81 = ATgetFirst((ATermList) o_81);
            s_81 = (ATerm) ATgetNext((ATermList) o_81);
            {
              t = not_null(r_81);
              {
                ATerm j_6 (ATerm t)
                {
                  t = not_null(s_81);
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
  ATerm d_82 = NULL;
  ATerm f_82 = NULL;
  d_82 = t;
  {
    ATerm g_82 = NULL;
    ATerm i_82 = NULL,j_82 = NULL,k_82 = NULL;
    t = not_null(d_82);
    {
      g_82 = t;
      {
        t = SSL_explode_term(not_null(g_82));
        {
          i_82 = t;
          b_82 :
          if(match_cons(i_82, sym__2))
            {
              j_82 = ATgetArgument(i_82, 0);
              k_82 = ATgetArgument(i_82, 1);
              c_82 :
              if(match_string(j_82, ""))
                {
                  if(((f_82 != NULL) && (f_82 != k_82)))
                    _fail(k_82);
                  else
                    f_82 = k_82;
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
      t = not_null(f_82);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm k_72 (ATerm))
{
  ATerm o_82 (ATerm t)
  {
    ATerm a_25 = t;
    int b_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, o_82);
        ;
        LocalPopChoice(b_25);
      }
    else
      {
        t = a_25;
        {
          t = Nil_0(t);
          t = k_72(t);
        }
      }
    return(t);
  }
  t = o_82(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm r_82 = NULL,s_82 = NULL,t_82 = NULL;
  r_82 = t;
  q_82 :
  if(match_cons(r_82, sym__2))
    {
      s_82 = ATgetArgument(r_82, 0);
      t_82 = ATgetArgument(r_82, 1);
      {
        t = not_null(s_82);
        {
          ATerm k_6 (ATerm t)
          {
            t = not_null(t_82);
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
      ;
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
  ATerm y_82 = NULL;
  y_82 = t;
  t = SSL_explode_string(not_null(y_82));
  return(t);
}
ATerm _2 (ATerm t, ATerm a_57 (ATerm), ATerm b_57 (ATerm))
{
  ATerm h_83 = NULL,i_83 = NULL,j_83 = NULL;
  h_83 = t;
  g_83 :
  if(match_cons(h_83, sym__2))
    {
      i_83 = ATgetArgument(h_83, 0);
      j_83 = ATgetArgument(h_83, 1);
      {
        ATerm n_83 = NULL,q_83 = NULL;
        ATerm o_83 = NULL;
        t = SSLgetAnnotations(not_null(h_83));
        {
          o_83 = t;
          if(((n_83 != NULL) && (n_83 != o_83)))
            _fail(o_83);
          else
            n_83 = o_83;
        }
        {
          t = not_null(i_83);
          {
            ATerm s_83 = NULL;
            t = a_57(t);
            {
              q_83 = t;
              {
                t = not_null(j_83);
                {
                  ATerm u_83 = NULL;
                  t = b_57(t);
                  {
                    s_83 = t;
                    {
                      ATerm b_84 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(q_83), not_null(s_83)), not_null(n_83));
                      {
                        b_84 = t;
                        if(((u_83 != NULL) && (u_83 != b_84)))
                          _fail(b_84);
                        else
                          u_83 = b_84;
                      }
                      t = not_null(u_83);
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
  ATerm j_84 = NULL,k_84 = NULL,l_84 = NULL;
  j_84 = t;
  i_84 :
  if(match_cons(j_84, sym__2))
    {
      k_84 = ATgetArgument(j_84, 0);
      l_84 = ATgetArgument(j_84, 1);
      {
        ATerm e_25;
        e_25 = t;
        t = SSL_printnl(not_null(k_84), not_null(l_84));
        t = e_25;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm p_81 (ATerm))
{
  ATerm f_25;
  f_25 = t;
  {
    ATerm r_84 = NULL,t_84 = NULL;
    ATerm g_25;
    g_25 = t;
    {
      ATerm s_84 = NULL;
      t = p_81(t);
      {
        s_84 = t;
        if(((r_84 != NULL) && (r_84 != s_84)))
          _fail(s_84);
        else
          r_84 = s_84;
      }
    }
    t = g_25;
    {
      ATerm u_84 = NULL;
      u_84 = t;
      if(((t_84 != NULL) && (t_84 != u_84)))
        _fail(u_84);
      else
        t_84 = u_84;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_c_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(t_84)), not_null(r_84)));
        t = printnl_0(t);
      }
    }
  }
  t = f_25;
  return(t);
}
ATerm map_1 (ATerm t, ATerm v_71 (ATerm))
{
  ATerm y_84 (ATerm t)
  {
    ATerm h_25 = t;
    int i_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        ;
        LocalPopChoice(i_25);
      }
    else
      {
        t = h_25;
        t = Cons_2(t, v_71, y_84);
      }
    return(t);
  }
  t = y_84(t);
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm a_85 = NULL;
  a_85 = t;
  t = SSL_is_string(not_null(a_85));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm j_25 = t;
  int n_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      ;
      LocalPopChoice(n_25);
    }
  else
    {
      t = j_25;
      {
        ATerm o_25 = t;
        int p_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_6 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, l_6);
            ;
            LocalPopChoice(p_25);
          }
        else
          {
            t = o_25;
            {
              ATerm j_85 = NULL,k_85 = NULL,l_85 = NULL;
              j_85 = t;
              i_85 :
              if(match_cons(j_85, sym_Path_1))
                {
                  k_85 = ATgetArgument(j_85, 0);
                  t = not_null(k_85);
                }
              else
                {
                  if(match_cons(j_85, sym_Var_1))
                    {
                      k_85 = ATgetArgument(j_85, 0);
                      {
                        t = not_null(k_85);
                        {
                          ATerm u_25 = t;
                          int v_25 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              ;
                              LocalPopChoice(v_25);
                            }
                          else
                            {
                              t = u_25;
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
                      if(match_cons(j_85, sym_Prefix_2))
                        {
                          k_85 = ATgetArgument(j_85, 0);
                          l_85 = ATgetArgument(j_85, 1);
                          {
                            ATerm q_85 = NULL,s_85 = NULL;
                            ATerm x_25;
                            x_25 = t;
                            {
                              ATerm r_85 = NULL;
                              t = not_null(k_85);
                              {
                                t = eval_config_0(t);
                                {
                                  r_85 = t;
                                  if(((q_85 != NULL) && (q_85 != r_85)))
                                    _fail(r_85);
                                  else
                                    q_85 = r_85;
                                }
                              }
                            }
                            t = x_25;
                            {
                              ATerm t_85 = NULL;
                              t = not_null(l_85);
                              {
                                t = eval_config_0(t);
                                {
                                  t_85 = t;
                                  if(((s_85 != NULL) && (s_85 != t_85)))
                                    _fail(t_85);
                                  else
                                    s_85 = t_85;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(q_85), not_null(s_85));
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
  ATerm h_86 = NULL;
  h_86 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_y_25, not_null(h_86));
    {
      t = table_get_0(t);
      {
        ATerm p_6 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm z_25;
            z_25 = t;
            {
              ATerm j_86 = NULL;
              ATerm k_86 = NULL;
              k_86 = t;
              if(((j_86 != NULL) && (j_86 != k_86)))
                _fail(k_86);
              else
                j_86 = k_86;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_y_25, not_null(h_86), not_null(j_86));
                t = table_put_0(t);
              }
            }
            t = z_25;
          }
          return(t);
        }
        t = try_1(t, p_6);
      }
    }
  }
  return(t);
}
ATerm try_1 (ATerm t, ATerm d_70 (ATerm))
{
  ATerm a_26 = t;
  int b_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = d_70(t);
      ;
      LocalPopChoice(b_26);
    }
  else
    {
      t = a_26;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm p_86 = NULL,q_86 = NULL,r_86 = NULL;
  p_86 = t;
  o_86 :
  if(match_cons(p_86, sym__2))
    {
      q_86 = ATgetArgument(p_86, 0);
      r_86 = ATgetArgument(p_86, 1);
      t = SSL_table_get(not_null(q_86), not_null(r_86));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm e_87 = NULL,f_87 = NULL,g_87 = NULL,h_87 = NULL;
  e_87 = t;
  d_87 :
  if(match_cons(e_87, sym__3))
    {
      f_87 = ATgetArgument(e_87, 0);
      g_87 = ATgetArgument(e_87, 1);
      h_87 = ATgetArgument(e_87, 2);
      {
        ATerm i_26;
        i_26 = t;
        {
          ATerm l_87 = NULL;
          ATerm m_87 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(f_87), not_null(g_87));
          {
            ATerm k_26 = t;
            int l_26 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                ;
                LocalPopChoice(l_26);
              }
            else
              {
                t = k_26;
                t = (ATerm) ATempty;
              }
            {
              m_87 = t;
              if(((l_87 != NULL) && (l_87 != m_87)))
                _fail(m_87);
              else
                l_87 = m_87;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(f_87), not_null(g_87), (ATerm) ATinsert(CheckATermList(not_null(l_87)), not_null(h_87)));
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
ATerm register_usage_1 (ATerm t, ATerm b_86 (ATerm))
{
  ATerm q_87 = NULL;
  ATerm r_87 = NULL;
  t = term_q_8;
  {
    t = b_86(t);
    {
      r_87 = t;
      if(((q_87 != NULL) && (q_87 != r_87)))
        _fail(r_87);
      else
        q_87 = r_87;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_o_24, term_p_24, not_null(q_87));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm))
{
  ATerm x_87 = NULL,y_87 = NULL,z_87 = NULL;
  x_87 = t;
  w_87 :
  if(match_string(x_87, "register-usage-info"))
    {
      t = register_usage_1(t, d_0);
    }
  else
    {
      if(((ATgetType(x_87) == AT_LIST) && !(ATisEmpty(x_87))))
        {
          y_87 = ATgetFirst((ATermList) x_87);
          z_87 = (ATerm) ATgetNext((ATermList) x_87);
          {
            ATerm c_88 = NULL;
            ATerm s_26;
            s_26 = t;
            {
              t = not_null(y_87);
              t = a_0(t);
            }
            t = s_26;
            {
              ATerm d_88 = NULL;
              t = term_q_8;
              {
                t = c_0(t);
                {
                  d_88 = t;
                  if(((c_88 != NULL) && (c_88 != d_88)))
                    _fail(d_88);
                  else
                    c_88 = d_88;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(z_87)), not_null(c_88));
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
    ATerm i_88 = NULL;
    i_88 = t;
    h_88 :
    if(!(match_string(i_88, "--help")))
      {
        if(!(match_string(i_88, "-h")))
          {
            if(!(match_string(i_88, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm t_6 (ATerm t)
  {
    t = term_u_26;
    {
      t = set_config_0(t);
      t = term_v_26;
    }
    return(t);
  }
  ATerm u_6 (ATerm t)
  {
    t = term_w_26;
    return(t);
  }
  t = Option_3(t, s_6, t_6, u_6);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm l_88 = NULL,m_88 = NULL,n_88 = NULL;
  l_88 = t;
  k_88 :
  if(((ATgetType(l_88) == AT_LIST) && !(ATisEmpty(l_88))))
    {
      m_88 = ATgetFirst((ATermList) l_88);
      n_88 = (ATerm) ATgetNext((ATermList) l_88);
      t = (ATerm) ATinsert(CheckATermList(not_null(n_88)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(m_88)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm j_58 (ATerm), ATerm k_58 (ATerm))
{
  ATerm x_88 = NULL,y_88 = NULL,z_88 = NULL;
  x_88 = t;
  w_88 :
  if(((ATgetType(x_88) == AT_LIST) && !(ATisEmpty(x_88))))
    {
      y_88 = ATgetFirst((ATermList) x_88);
      z_88 = (ATerm) ATgetNext((ATermList) x_88);
      {
        ATerm d_89 = NULL,f_89 = NULL;
        ATerm e_89 = NULL;
        t = SSLgetAnnotations(not_null(x_88));
        {
          e_89 = t;
          if(((d_89 != NULL) && (d_89 != e_89)))
            _fail(e_89);
          else
            d_89 = e_89;
        }
        {
          t = not_null(y_88);
          {
            ATerm h_89 = NULL;
            t = j_58(t);
            {
              f_89 = t;
              {
                t = not_null(z_88);
                {
                  ATerm j_89 = NULL;
                  t = k_58(t);
                  {
                    h_89 = t;
                    {
                      ATerm k_89 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(h_89)), not_null(f_89)), not_null(d_89));
                      {
                        k_89 = t;
                        if(((j_89 != NULL) && (j_89 != k_89)))
                          _fail(k_89);
                        else
                          j_89 = k_89;
                      }
                      t = not_null(j_89);
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
  ATerm u_89 = NULL;
  u_89 = t;
  t_89 :
  if(((ATgetType(u_89) == AT_LIST) && ATisEmpty(u_89)))
    {
      {
        ATerm w_89 = NULL,y_89 = NULL;
        ATerm x_26;
        x_26 = t;
        {
          ATerm x_89 = NULL;
          t = SSLgetAnnotations(not_null(u_89));
          {
            x_89 = t;
            if(((w_89 != NULL) && (w_89 != x_89)))
              _fail(x_89);
            else
              w_89 = x_89;
          }
        }
        t = x_26;
        {
          ATerm z_89 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(w_89));
          {
            z_89 = t;
            if(((y_89 != NULL) && (y_89 != z_89)))
              _fail(z_89);
            else
              y_89 = z_89;
          }
          t = not_null(y_89);
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
  ATerm g_90 = NULL,h_90 = NULL,i_90 = NULL;
  g_90 = t;
  f_90 :
  if(match_cons(g_90, sym__2))
    {
      h_90 = ATgetArgument(g_90, 0);
      i_90 = ATgetArgument(g_90, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_y_25, not_null(h_90), not_null(i_90));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm z_85 (ATerm))
{
  ATerm y_26;
  y_26 = t;
  {
    ATerm v_6 (ATerm t)
    {
      t = term_z_26;
      t = z_85(t);
      return(t);
    }
    t = try_1(t, v_6);
  }
  t = y_26;
  {
    ATerm w_6 (ATerm t)
    {
      ATerm q_90 = NULL;
      ATerm a_27;
      a_27 = t;
      {
        ATerm o_90 = NULL;
        ATerm p_90 = NULL;
        p_90 = t;
        if(((o_90 != NULL) && (o_90 != p_90)))
          _fail(p_90);
        else
          o_90 = p_90;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_v_23, not_null(o_90));
          t = set_config_0(t);
        }
      }
      t = a_27;
      {
        ATerm r_90 = NULL;
        r_90 = t;
        if(((q_90 != NULL) && (q_90 != r_90)))
          _fail(r_90);
        else
          q_90 = r_90;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(q_90));
      }
      return(t);
    }
    ATerm b_7 (ATerm t)
    {
      ATerm b_27 = t;
      int c_27 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm d_27 = t;
          int e_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              ;
              LocalPopChoice(e_27);
            }
          else
            {
              t = d_27;
              {
                t = z_85(t);
                t = Cons_2(t, _id, b_7);
              }
            }
          ;
          LocalPopChoice(c_27);
        }
      else
        {
          t = b_27;
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
  ATerm x_90 = NULL,y_90 = NULL,z_90 = NULL;
  ATerm g_27;
  g_27 = t;
  {
    ATerm a_91 = NULL,b_91 = NULL,c_91 = NULL,d_91 = NULL;
    a_91 = t;
    w_90 :
    if(match_cons(a_91, sym__3))
      {
        b_91 = ATgetArgument(a_91, 0);
        c_91 = ATgetArgument(a_91, 1);
        d_91 = ATgetArgument(a_91, 2);
        {
          if(((x_90 != NULL) && (x_90 != b_91)))
            _fail(b_91);
          else
            x_90 = b_91;
          {
            if(((y_90 != NULL) && (y_90 != c_91)))
              _fail(c_91);
            else
              y_90 = c_91;
            {
              if(((z_90 != NULL) && (z_90 != d_91)))
                _fail(d_91);
              else
                z_90 = d_91;
              t = SSL_table_put(not_null(x_90), not_null(y_90), not_null(z_90));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = g_27;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm y_85 (ATerm))
{
  ATerm g_91 = NULL;
  ATerm i_27;
  i_27 = t;
  {
    t = term_l_27;
    t = table_put_0(t);
  }
  t = i_27;
  {
    ATerm c_7 (ATerm t)
    {
      ATerm m_27 = t;
      int r_27 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = y_85(t);
          ;
          LocalPopChoice(r_27);
        }
      else
        {
          t = m_27;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, c_7);
    {
      ATerm j_7 (ATerm t)
      {
        ATerm s_27 = t;
        int x_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_27;
            y_27 = t;
            {
              ATerm d_28 = t;
              int e_28 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_t_26;
                  t = get_config_0(t);
                  ;
                  LocalPopChoice(e_28);
                }
              else
                {
                  t = d_28;
                  t = option_defined_1(t, Help_0);
                }
            }
            t = y_27;
            {
              t = system_usage_0(t);
              {
                t = term_h_10;
                t = exit_0(t);
              }
            }
            ;
            LocalPopChoice(x_27);
          }
        else
          {
            t = s_27;
            {
              ATerm k_7 (ATerm t)
              {
                ATerm l_7 (ATerm t)
                {
                  ATerm h_91 = NULL;
                  h_91 = t;
                  if(((g_91 != NULL) && (g_91 != h_91)))
                    _fail(h_91);
                  else
                    g_91 = h_91;
                  return(t);
                }
                t = Undefined_1(t, l_7);
                return(t);
              }
              t = option_defined_1(t, k_7);
              {
                ATerm m_7 (ATerm t)
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(g_91)), term_f_28);
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
        ATerm i_28;
        i_28 = t;
        {
          t = term_o_24;
          t = table_destroy_0(t);
        }
        t = i_28;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm v_83 (ATerm), ATerm w_83 (ATerm), ATerm x_83 (ATerm), ATerm y_83 (ATerm))
{
  t = parse_options_1(t, v_83);
  {
    t = store_options_0(t);
    {
      t = x_83(t);
      {
        ATerm j_28 = t;
        int k_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, w_83);
            ;
            LocalPopChoice(k_28);
          }
        else
          {
            t = j_28;
            {
              ATerm l_28 = t;
              int m_28 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = y_83(t);
                  t = report_success_0(t);
                  ;
                  LocalPopChoice(m_28);
                }
              else
                {
                  t = l_28;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm option_wrap_2 (ATerm t, ATerm z_83 (ATerm), ATerm a_84 (ATerm))
{
  t = option_wrap_4(t, z_83, default_usage_0, _id, a_84);
  return(t);
}
ATerm io_Abox_2_text_0 (ATerm t)
{
  ATerm n_7 (ATerm t)
  {
    ATerm o_7 (ATerm t)
    {
      ATerm l_91 = NULL,n_91 = NULL;
      t = read_from_0(t);
      {
        ATerm m_91 = NULL;
        m_91 = t;
        if(((l_91 != NULL) && (l_91 != m_91)))
          _fail(m_91);
        else
          l_91 = m_91;
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(l_91), term_h_10);
          {
            t = try_abox2text_0(t);
            {
              t = Fst_0(t);
              {
                ATerm o_91 = NULL;
                o_91 = t;
                if(((n_91 != NULL) && (n_91 != o_91)))
                  _fail(o_91);
                else
                  n_91 = o_91;
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(n_91), term_s_24);
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
