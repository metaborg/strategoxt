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
Symbol sym_Tool_1;
Symbol sym_Repository_0;
Symbol sym_Import_0;
Symbol sym_Imported_1;
Symbol sym_XTC_0;
Symbol sym_WaitStatus_3;
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
Symbol sym_None_0;
Symbol sym_Some_1;
Symbol sym_Signal_3;
Symbol sym_UnknownSignal_1;
Symbol sym_Var_1;
Symbol sym_Path_1;
Symbol sym_Prefix_2;
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
Symbol sym_FILE_1;
Symbol sym_DIR_1;
Symbol sym_TEMP_0;
Symbol sym_TempFiles_0;
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
  sym_WaitStatus_3 = ATmakeSymbol("WaitStatus", 3, ATfalse);
  ATprotectSymbol(sym_WaitStatus_3);
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
  sym_None_0 = ATmakeSymbol("None", 0, ATfalse);
  ATprotectSymbol(sym_None_0);
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
  sym_Signal_3 = ATmakeSymbol("Signal", 3, ATfalse);
  ATprotectSymbol(sym_Signal_3);
  sym_UnknownSignal_1 = ATmakeSymbol("UnknownSignal", 1, ATfalse);
  ATprotectSymbol(sym_UnknownSignal_1);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
  sym_Prefix_2 = ATmakeSymbol("Prefix", 2, ATfalse);
  ATprotectSymbol(sym_Prefix_2);
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
  sym_FILE_1 = ATmakeSymbol("FILE", 1, ATfalse);
  ATprotectSymbol(sym_FILE_1);
  sym_DIR_1 = ATmakeSymbol("DIR", 1, ATfalse);
  ATprotectSymbol(sym_DIR_1);
  sym_TEMP_0 = ATmakeSymbol("TEMP", 0, ATfalse);
  ATprotectSymbol(sym_TEMP_0);
  sym_TempFiles_0 = ATmakeSymbol("TempFiles", 0, ATfalse);
  ATprotectSymbol(sym_TempFiles_0);
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
  init_constant_terms();
}
ATerm term_p_36;
ATerm term_y_35;
ATerm term_n_35;
ATerm term_z_34;
ATerm term_s_34;
ATerm term_p_34;
ATerm term_o_34;
ATerm term_x_33;
ATerm term_q_33;
ATerm term_g_32;
ATerm term_d_32;
ATerm term_c_32;
ATerm term_b_32;
ATerm term_v_31;
ATerm term_u_31;
ATerm term_g_31;
ATerm term_f_31;
ATerm term_v_30;
ATerm term_k_30;
ATerm term_e_29;
ATerm term_x_28;
ATerm term_w_28;
ATerm term_v_28;
ATerm term_k_28;
ATerm term_h_28;
ATerm term_x_27;
ATerm term_w_27;
ATerm term_v_27;
ATerm term_q_27;
ATerm term_c_27;
ATerm term_b_27;
ATerm term_a_27;
ATerm term_z_26;
ATerm term_y_26;
ATerm term_u_26;
ATerm term_t_26;
ATerm term_s_26;
ATerm term_r_26;
ATerm term_j_26;
ATerm term_h_26;
ATerm term_c_26;
ATerm term_b_26;
ATerm term_a_26;
ATerm term_z_25;
ATerm term_u_25;
ATerm term_e_24;
ATerm term_b_24;
ATerm term_z_23;
ATerm term_p_23;
ATerm term_m_23;
ATerm term_i_23;
ATerm term_d_23;
ATerm term_c_23;
ATerm term_b_23;
ATerm term_y_22;
ATerm term_s_22;
ATerm term_o_22;
ATerm term_c_22;
ATerm term_s_21;
ATerm term_r_21;
ATerm term_q_21;
ATerm term_p_21;
ATerm term_o_21;
ATerm term_n_21;
ATerm term_m_21;
ATerm term_l_21;
ATerm term_k_21;
ATerm term_j_21;
ATerm term_h_21;
ATerm term_g_21;
ATerm term_f_21;
ATerm term_e_21;
ATerm term_d_21;
ATerm term_c_21;
ATerm term_b_21;
ATerm term_a_21;
ATerm term_z_20;
ATerm term_y_20;
ATerm term_v_20;
ATerm term_u_20;
ATerm term_t_20;
ATerm term_s_20;
ATerm term_p_20;
ATerm term_o_20;
ATerm term_n_20;
ATerm term_m_20;
ATerm term_h_20;
ATerm term_e_20;
ATerm term_d_20;
ATerm term_z_19;
ATerm term_t_19;
ATerm term_s_19;
ATerm term_r_19;
ATerm term_q_19;
ATerm term_p_19;
ATerm term_o_19;
ATerm term_g_19;
ATerm term_f_19;
ATerm term_z_18;
ATerm term_y_18;
ATerm term_x_18;
ATerm term_w_18;
ATerm term_v_18;
ATerm term_q_18;
ATerm term_p_18;
ATerm term_o_18;
ATerm term_n_18;
ATerm term_m_18;
ATerm term_h_18;
ATerm term_g_18;
ATerm term_f_18;
ATerm term_a_18;
ATerm term_s_17;
ATerm term_r_17;
ATerm term_q_17;
ATerm term_p_17;
ATerm term_o_17;
ATerm term_m_17;
ATerm term_k_17;
ATerm term_h_17;
ATerm term_g_17;
ATerm term_f_17;
ATerm term_e_17;
ATerm term_d_17;
ATerm term_b_17;
ATerm term_a_17;
ATerm term_z_16;
ATerm term_v_16;
ATerm term_p_16;
ATerm term_n_16;
ATerm term_m_16;
ATerm term_l_16;
ATerm term_g_16;
ATerm term_d_16;
ATerm term_c_16;
ATerm term_b_16;
ATerm term_y_15;
ATerm term_x_15;
ATerm term_w_15;
ATerm term_v_15;
ATerm term_u_15;
ATerm term_r_15;
ATerm term_q_15;
ATerm term_p_15;
ATerm term_m_15;
ATerm term_g_15;
ATerm term_f_15;
ATerm term_e_15;
ATerm term_d_15;
ATerm term_c_15;
ATerm term_b_15;
ATerm term_z_14;
ATerm term_y_14;
ATerm term_x_14;
ATerm term_w_14;
ATerm term_r_14;
ATerm term_q_14;
ATerm term_p_14;
ATerm term_n_14;
ATerm term_m_14;
ATerm term_l_14;
ATerm term_i_14;
ATerm term_g_14;
ATerm term_f_14;
ATerm term_e_14;
ATerm term_x_13;
ATerm term_w_13;
ATerm term_r_13;
ATerm term_q_13;
ATerm term_p_13;
ATerm term_b_13;
ATerm term_u_12;
ATerm term_q_12;
ATerm term_j_12;
ATerm term_i_12;
ATerm term_h_12;
ATerm term_c_12;
ATerm term_x_11;
ATerm term_w_11;
ATerm term_o_11;
ATerm term_n_11;
ATerm term_e_11;
ATerm term_a_11;
ATerm term_z_10;
ATerm term_y_10;
ATerm term_x_10;
ATerm term_r_10;
ATerm term_q_10;
ATerm term_n_10;
ATerm term_b_10;
ATerm term_m_9;
ATerm term_g_9;
ATerm term_w_8;
ATerm term_v_8;
ATerm term_l_8;
ATerm term_k_8;
ATerm term_g_8;
ATerm term_e_8;
ATerm term_d_8;
ATerm term_y_7;
ATerm term_x_7;
ATerm term_p_7;
void init_constant_terms (void)
{
  ATprotect(&(term_p_7));
  term_p_7 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_x_7));
  term_x_7 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_y_7));
  term_y_7 = (ATerm) ATmakeAppl(ATmakeSymbol("implode-asfix", 0, ATtrue));
  ATprotect(&(term_d_8));
  term_d_8 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_e_8));
  term_e_8 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_g_8));
  term_g_8 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_k_8));
  term_k_8 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_l_8));
  term_l_8 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_v_8));
  term_v_8 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_w_8));
  term_w_8 = (ATerm) ATmakeAppl(sym__2, term_l_8, term_v_8);
  ATprotect(&(term_g_9));
  term_g_9 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_m_9));
  term_m_9 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_q_10));
  term_q_10 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_r_10));
  term_r_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_z_10));
  term_z_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_a_11));
  term_a_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeAppl(sym__2, term_l_8, term_x_10);
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_b_13));
  term_b_13 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_g_14));
  term_g_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_14, term_x_7, term_f_14);
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_14, term_l_14, term_m_14);
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_14, term_d_8, term_q_14);
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_14, term_m_9, term_x_14);
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_14, term_b_15, term_c_15);
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_15, term_f_15, term_g_15);
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_15, term_q_15, term_r_15);
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_15, term_w_15, term_x_15);
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_16, term_c_16, term_d_16);
  ATprotect(&(term_l_16));
  term_l_16 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_16, term_m_16, term_n_16);
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_a_17));
  term_a_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_b_17));
  term_b_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_16, term_z_16, term_a_17);
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_17, term_g_9, term_e_17);
  ATprotect(&(term_g_17));
  term_g_17 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_h_17));
  term_h_17 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_k_17));
  term_k_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_m_17));
  term_m_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_17, term_h_17, term_k_17);
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_q_17));
  term_q_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_r_17));
  term_r_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_17, term_p_17, term_q_17);
  ATprotect(&(term_s_17));
  term_s_17 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_a_18));
  term_a_18 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_f_18));
  term_f_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_g_18));
  term_g_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_17, term_a_18, term_f_18);
  ATprotect(&(term_h_18));
  term_h_18 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_m_18));
  term_m_18 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_n_18));
  term_n_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_o_18));
  term_o_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_18, term_m_18, term_n_18);
  ATprotect(&(term_p_18));
  term_p_18 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_q_18));
  term_q_18 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_v_18));
  term_v_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_w_18));
  term_w_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_18, term_q_18, term_v_18);
  ATprotect(&(term_x_18));
  term_x_18 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_y_18));
  term_y_18 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_z_18));
  term_z_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_f_19));
  term_f_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_18, term_y_18, term_z_18);
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_o_19));
  term_o_19 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_p_19));
  term_p_19 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_q_19));
  term_q_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_19, term_o_19, term_p_19);
  ATprotect(&(term_r_19));
  term_r_19 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_s_19));
  term_s_19 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_t_19));
  term_t_19 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_z_19));
  term_z_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_19, term_s_19, term_t_19);
  ATprotect(&(term_d_20));
  term_d_20 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_e_20));
  term_e_20 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_h_20));
  term_h_20 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_m_20));
  term_m_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_20, term_e_20, term_h_20);
  ATprotect(&(term_n_20));
  term_n_20 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_o_20));
  term_o_20 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_p_20));
  term_p_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_s_20));
  term_s_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_20, term_o_20, term_p_20);
  ATprotect(&(term_t_20));
  term_t_20 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_u_20));
  term_u_20 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_v_20));
  term_v_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_y_20));
  term_y_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_20, term_u_20, term_v_20);
  ATprotect(&(term_z_20));
  term_z_20 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_a_21));
  term_a_21 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_b_21));
  term_b_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_c_21));
  term_c_21 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_20, term_a_21, term_b_21);
  ATprotect(&(term_d_21));
  term_d_21 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_e_21));
  term_e_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_f_21));
  term_f_21 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_21, term_g_8, term_e_21);
  ATprotect(&(term_g_21));
  term_g_21 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_h_21));
  term_h_21 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_j_21));
  term_j_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_21, term_h_21, term_j_21);
  ATprotect(&(term_l_21));
  term_l_21 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_m_21));
  term_m_21 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_n_21));
  term_n_21 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_o_21));
  term_o_21 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_21, term_m_21, term_n_21);
  ATprotect(&(term_p_21));
  term_p_21 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_q_21));
  term_q_21 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_r_21));
  term_r_21 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_s_21));
  term_s_21 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_21, term_q_21, term_r_21);
  ATprotect(&(term_c_22));
  term_c_22 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_o_22));
  term_o_22 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_s_22));
  term_s_22 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_y_22));
  term_y_22 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file> (file, mode)", 0, ATtrue));
  ATprotect(&(term_b_23));
  term_b_23 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_c_23));
  term_c_23 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_d_23));
  term_d_23 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_i_23));
  term_i_23 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_m_23));
  term_m_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_p_23));
  term_p_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_z_23));
  term_z_23 = (ATerm) ATmakeAppl(ATmakeSymbol("sglr", 0, ATtrue));
  ATprotect(&(term_b_24));
  term_b_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-2tA", 0, ATtrue));
  ATprotect(&(term_e_24));
  term_e_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_u_25));
  term_u_25 = (ATerm) ATmakeAppl(sym__2, term_i_23, term_o_22);
  ATprotect(&(term_z_25));
  term_z_25 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_a_26));
  term_a_26 = (ATerm) ATmakeAppl(sym__2, term_e_8, term_c_23);
  ATprotect(&(term_b_26));
  term_b_26 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_c_26));
  term_c_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_h_26));
  term_h_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_j_26));
  term_j_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_r_26));
  term_r_26 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_s_26));
  term_s_26 = (ATerm) ATmakeAppl(sym__2, term_p_7, term_r_26);
  ATprotect(&(term_t_26));
  term_t_26 = (ATerm) ATmakeAppl(sym_Verbose_1, term_r_26);
  ATprotect(&(term_u_26));
  term_u_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_y_26));
  term_y_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_z_26));
  term_z_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_a_27));
  term_a_27 = (ATerm) ATmakeAppl(sym__2, term_z_26, term_c_23);
  ATprotect(&(term_b_27));
  term_b_27 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_c_27));
  term_c_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_q_27));
  term_q_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_v_27));
  term_v_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_w_27));
  term_w_27 = (ATerm) ATmakeAppl(sym__2, term_v_27, term_c_23);
  ATprotect(&(term_x_27));
  term_x_27 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_h_28));
  term_h_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_k_28));
  term_k_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_v_28));
  term_v_28 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_w_28));
  term_w_28 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_x_28));
  term_x_28 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_e_29));
  term_e_29 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_k_30));
  term_k_30 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_v_30));
  term_v_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_f_31));
  term_f_31 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_g_31));
  term_g_31 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_u_31));
  term_u_31 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_v_31));
  term_v_31 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_b_32));
  term_b_32 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_c_32));
  term_c_32 = (ATerm) ATmakeAppl(sym__2, term_v_31, term_b_32);
  ATprotect(&(term_d_32));
  term_d_32 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_g_32));
  term_g_32 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_q_33));
  term_q_33 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_x_33));
  term_x_33 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_o_34));
  term_o_34 = (ATerm) ATmakeAppl(sym__2, term_v_30, term_c_23);
  ATprotect(&(term_p_34));
  term_p_34 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_s_34));
  term_s_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_z_34));
  term_z_34 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_n_35));
  term_n_35 = (ATerm) ATmakeAppl(sym__3, term_v_31, term_b_32, (ATerm) ATempty);
  ATprotect(&(term_y_35));
  term_y_35 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_p_36));
  term_p_36 = (ATerm) ATmakeAppl(ATmakeSymbol("Box.tbl", 0, ATtrue));
}
ATerm subt_0 (ATerm);
ATerm pass_verbose_0 (ATerm);
ATerm xtc_implode_asfix_0 (ATerm);
ATerm if_verbose3_1 (ATerm, ATerm h_80 (ATerm));
ATerm pass_v_verbose_0 (ATerm);
ATerm table_keys_0 (ATerm);
ATerm table_getlist_0 (ATerm);
ATerm if_verbose5_1 (ATerm, ATerm j_80 (ATerm));
ATerm error_0 (ATerm);
ATerm xtc_find_loc_0 (ATerm);
ATerm xtc_find_version_loc_0 (ATerm);
ATerm filter_1 (ATerm, ATerm k_76 (ATerm));
ATerm repeat_1 (ATerm, ATerm e_78 (ATerm));
ATerm xtc_import_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm s_64 (ATerm));
ATerm if_verbose4_1 (ATerm, ATerm i_80 (ATerm));
ATerm if_verbose6_1 (ATerm, ATerm k_80 (ATerm));
ATerm set_0 (ATerm);
ATerm eq_0 (ATerm);
ATerm HdMember_p__2 (ATerm, ATerm y_72 (ATerm), ATerm z_72 (ATerm));
ATerm union_1 (ATerm, ATerm u_72 (ATerm));
ATerm union_0 (ATerm);
ATerm get_0 (ATerm);
ATerm table_append_0 (ATerm);
ATerm table_putlist_1 (ATerm, ATerm t_80 (ATerm));
ATerm can_read_file_0 (ATerm);
ATerm read_repository_file_0 (ATerm);
ATerm xtc_read_0 (ATerm);
ATerm getenv_0 (ATerm);
ATerm xtc_location_0 (ATerm);
ATerm xtc_load_0 (ATerm);
ATerm xtc_find_0 (ATerm);
ATerm read_from_stream_0 (ATerm);
ATerm ReadFromFile_0 (ATerm);
ATerm read_from_0 (ATerm);
ATerm write_in_baf_to_stream_0 (ATerm);
ATerm fclose_0 (ATerm);
ATerm fopen_0 (ATerm);
ATerm stdin_stream_0 (ATerm);
ATerm stdout_stream_0 (ATerm);
ATerm stderr_stream_0 (ATerm);
ATerm stdio_stream_0 (ATerm);
ATerm Fst_0 (ATerm);
ATerm open_stream_0 (ATerm);
ATerm WriteToFile_1 (ATerm, ATerm c_65 (ATerm));
ATerm WriteToBinaryFile_0 (ATerm);
ATerm write_to_0 (ATerm);
ATerm xtc_transform_term_2 (ATerm, ATerm g_83 (ATerm), ATerm h_83 (ATerm));
ATerm close_file_0 (ATerm);
ATerm execvp_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm int_to_string_0 (ATerm);
ATerm signal_to_descr_0 (ATerm);
ATerm fetch_elem_1 (ATerm, ATerm g_69 (ATerm));
ATerm signal_from_number_0 (ATerm);
ATerm warn_ifsignaled_0 (ATerm);
ATerm waitpid_0 (ATerm);
ATerm fork_0 (ATerm);
ATerm fork_2 (ATerm, ATerm q_63 (ATerm), ATerm r_63 (ATerm));
ATerm fork_and_wait_1 (ATerm, ATerm s_63 (ATerm));
ATerm call_0 (ATerm);
ATerm xtc_find_warning_0 (ATerm);
ATerm xtc_command_1 (ATerm, ATerm x_82 (ATerm));
ATerm assert_1 (ATerm, ATerm i_79 (ATerm));
ATerm obsolete_1 (ATerm, ATerm v_64 (ATerm));
ATerm open_file_0 (ATerm);
ATerm access_0 (ATerm);
ATerm file_exists_0 (ATerm);
ATerm new_0 (ATerm);
ATerm new_file_0 (ATerm);
ATerm xtc_new_file_0 (ATerm);
ATerm xtc_transform_file_2 (ATerm, ATerm n_0 (ATerm), ATerm o_0 (ATerm));
ATerm stdin_0 (ATerm);
ATerm FILE_1 (ATerm, ATerm n_61 (ATerm));
ATerm xtc_transform_2 (ATerm, ATerm z_82 (ATerm), ATerm a_83 (ATerm));
ATerm xtc_sglr_1 (ATerm, ATerm r_92 (ATerm));
ATerm copy_file_0 (ATerm);
ATerm stderr_0 (ATerm);
ATerm stdout_0 (ATerm);
ATerm copy_to_1 (ATerm, ATerm m_0 (ATerm));
ATerm Tl_0 (ATerm);
ATerm table_pop_0 (ATerm);
ATerm end_scope_1 (ATerm, ATerm f_79 (ATerm));
ATerm remove_file_0 (ATerm);
ATerm restore_always_2 (ATerm, ATerm a_80 (ATerm), ATerm b_80 (ATerm));
ATerm begin_scope_1 (ATerm, ATerm e_79 (ATerm));
ATerm xtc_temp_files_1 (ATerm, ATerm j_82 (ATerm));
ATerm xtc_io_1 (ATerm, ATerm k_82 (ATerm));
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
ATerm default_usage_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm whoami_0 (ATerm);
ATerm ticks_to_seconds_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm h_75 (ATerm), ATerm i_75 (ATerm));
ATerm crush_2 (ATerm, ATerm f_73 (ATerm), ATerm g_73 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm f_80 (ATerm));
ATerm report_run_time_0 (ATerm);
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm l_84 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm h_86 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm g_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm g_86 (ATerm));
ATerm Program_1 (ATerm, ATerm u_61 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm v_61 (ATerm));
ATerm fetch_1 (ATerm, ATerm e_69 (ATerm));
ATerm option_defined_1 (ATerm, ATerm g_85 (ATerm));
ATerm Help_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm k_69 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm _2 (ATerm, ATerm e_55 (ATerm), ATerm f_55 (ATerm));
ATerm conc_strings_0 (ATerm);
ATerm debug_1 (ATerm, ATerm o_64 (ATerm));
ATerm map_1 (ATerm, ATerm v_68 (ATerm));
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm try_1 (ATerm, ATerm l_79 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm l_86 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm n_56 (ATerm), ATerm o_56 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm j_86 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm i_86 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm n_84 (ATerm), ATerm o_84 (ATerm), ATerm p_84 (ATerm), ATerm q_84 (ATerm));
ATerm option_wrap_2 (ATerm, ATerm r_84 (ATerm), ATerm s_84 (ATerm));
ATerm xtc_io_wrap_2 (ATerm, ATerm o_82 (ATerm), ATerm p_82 (ATerm));
ATerm xtc_io_wrap_1 (ATerm, ATerm n_82 (ATerm));
ATerm io_parse_box_0 (ATerm);
ATerm main_0 (ATerm);
ATerm subt_0 (ATerm t)
{
  ATerm f_0 = NULL,w_0 = NULL,x_0 = NULL;
  f_0 = t;
  e_0 :
  if(match_cons(f_0, sym__2))
    {
      w_0 = ATgetArgument(f_0, 0);
      x_0 = ATgetArgument(f_0, 1);
      {
        ATerm n_7 = t;
        int o_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_subti(not_null(w_0), not_null(x_0));
            ;
            LocalPopChoice(o_7);
          }
        else
          {
            t = n_7;
            t = SSL_subtr(not_null(w_0), not_null(x_0));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm pass_verbose_0 (ATerm t)
{
  ATerm j_1 = NULL;
  ATerm k_1 = NULL,z_1 = NULL;
  ATerm y_1 = NULL;
  t = term_p_7;
  {
    ATerm q_7 = t;
    int r_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0(t);
        ;
        LocalPopChoice(r_7);
      }
    else
      {
        t = q_7;
        t = term_x_7;
      }
    {
      y_1 = t;
      if(((k_1 != NULL) && (k_1 != y_1)))
        _fail(y_1);
      else
        k_1 = y_1;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(k_1), term_x_7);
    {
      t = subt_0(t);
      {
        t = int_to_string_0(t);
        {
          z_1 = t;
          if(((j_1 != NULL) && (j_1 != z_1)))
            _fail(z_1);
          else
            j_1 = z_1;
        }
      }
    }
  }
  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(j_1)), term_p_7);
  return(t);
}
ATerm xtc_implode_asfix_0 (ATerm t)
{
  ATerm c_0 (ATerm t)
  {
    t = term_y_7;
    return(t);
  }
  t = xtc_transform_2(t, c_0, pass_verbose_0);
  return(t);
}
ATerm if_verbose3_1 (ATerm t, ATerm h_80 (ATerm))
{
  ATerm h_0 (ATerm t)
  {
    ATerm c_8;
    c_8 = t;
    {
      ATerm u_2 = NULL;
      ATerm y_2 = NULL;
      t = term_p_7;
      {
        t = get_config_0(t);
        {
          y_2 = t;
          if(((u_2 != NULL) && (u_2 != y_2)))
            _fail(y_2);
          else
            u_2 = y_2;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(u_2), term_d_8);
        t = geq_0(t);
      }
    }
    t = c_8;
    t = h_80(t);
    return(t);
  }
  t = try_1(t, h_0);
  return(t);
}
ATerm pass_v_verbose_0 (ATerm t)
{
  t = (ATerm) ATempty;
  {
    ATerm p_0 (ATerm t)
    {
      t = (ATerm) ATinsert(ATempty, term_e_8);
      return(t);
    }
    t = if_verbose3_1(t, p_0);
  }
  return(t);
}
ATerm table_keys_0 (ATerm t)
{
  ATerm b_3 = NULL;
  b_3 = t;
  t = SSL_table_keys(not_null(b_3));
  return(t);
}
ATerm table_getlist_0 (ATerm t)
{
  ATerm h_3 = NULL;
  h_3 = t;
  {
    t = table_keys_0(t);
    {
      ATerm q_0 (ATerm t)
      {
        ATerm j_3 = NULL;
        ATerm l_3 = NULL;
        j_3 = t;
        {
          ATerm m_3 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(h_3), not_null(j_3));
          {
            t = table_get_0(t);
            {
              m_3 = t;
              if(((l_3 != NULL) && (l_3 != m_3)))
                _fail(m_3);
              else
                l_3 = m_3;
            }
          }
          t = (ATerm) ATmakeAppl(sym__2, not_null(j_3), not_null(l_3));
        }
        return(t);
      }
      t = map_1(t, q_0);
    }
  }
  return(t);
}
ATerm if_verbose5_1 (ATerm t, ATerm j_80 (ATerm))
{
  ATerm r_0 (ATerm t)
  {
    ATerm f_8;
    f_8 = t;
    {
      ATerm r_3 = NULL;
      ATerm s_3 = NULL;
      t = term_p_7;
      {
        t = get_config_0(t);
        {
          s_3 = t;
          if(((r_3 != NULL) && (r_3 != s_3)))
            _fail(s_3);
          else
            r_3 = s_3;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(r_3), term_g_8);
        t = geq_0(t);
      }
    }
    t = f_8;
    t = j_80(t);
    return(t);
  }
  t = try_1(t, r_0);
  return(t);
}
ATerm error_0 (ATerm t)
{
  ATerm j_8;
  j_8 = t;
  {
    ATerm v_3 = NULL;
    ATerm w_3 = NULL;
    w_3 = t;
    if(((v_3 != NULL) && (v_3 != w_3)))
      _fail(w_3);
    else
      v_3 = w_3;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_k_8, not_null(v_3));
      t = printnl_0(t);
    }
  }
  t = j_8;
  return(t);
}
ATerm xtc_find_loc_0 (ATerm t)
{
  ATerm c_4 = NULL;
  ATerm e_4 = NULL,f_4 = NULL;
  c_4 = t;
  {
    ATerm g_4 = NULL,h_4 = NULL,i_4 = NULL,j_4 = NULL,k_4 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, term_l_8, (ATerm) ATmakeAppl(sym_Tool_1, not_null(c_4)));
    {
      t = table_get_0(t);
      {
        g_4 = t;
        a_4 :
        if(((ATgetType(g_4) == AT_LIST) && !(ATisEmpty(g_4))))
          {
            h_4 = ATgetFirst((ATermList) g_4);
            k_4 = (ATerm) ATgetNext((ATermList) g_4);
            b_4 :
            if(match_cons(h_4, sym__2))
              {
                i_4 = ATgetArgument(h_4, 0);
                j_4 = ATgetArgument(h_4, 1);
                {
                  if(((e_4 != NULL) && (e_4 != i_4)))
                    _fail(i_4);
                  else
                    e_4 = i_4;
                  if(((f_4 != NULL) && (f_4 != j_4)))
                    _fail(j_4);
                  else
                    f_4 = j_4;
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
    t = not_null(f_4);
  }
  return(t);
}
ATerm xtc_find_version_loc_0 (ATerm t)
{
  ATerm r_4 = NULL,s_4 = NULL,t_4 = NULL;
  r_4 = t;
  q_4 :
  if(match_cons(r_4, sym__2))
    {
      s_4 = ATgetArgument(r_4, 0);
      t_4 = ATgetArgument(r_4, 1);
      {
        ATerm w_4 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, term_l_8, (ATerm) ATmakeAppl(sym_Tool_1, not_null(s_4)));
        {
          t = table_get_0(t);
          {
            ATerm s_0 (ATerm t)
            {
              ATerm x_4 = NULL,y_4 = NULL,z_4 = NULL;
              x_4 = t;
              p_4 :
              if(match_cons(x_4, sym__2))
                {
                  y_4 = ATgetArgument(x_4, 0);
                  z_4 = ATgetArgument(x_4, 1);
                  {
                    if(((t_4 != NULL) && (t_4 != y_4)))
                      _fail(y_4);
                    else
                      t_4 = y_4;
                    if(((w_4 != NULL) && (w_4 != z_4)))
                      _fail(z_4);
                    else
                      w_4 = z_4;
                  }
                }
              else
                {
                  _fail(t);
                }
              return(t);
            }
            t = fetch_1(t, s_0);
          }
        }
        t = not_null(w_4);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm filter_1 (ATerm t, ATerm k_76 (ATerm))
{
  ATerm n_8 = t;
  int q_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      ;
      LocalPopChoice(q_8);
    }
  else
    {
      t = n_8;
      {
        ATerm r_8 = t;
        int s_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_0 (ATerm t)
            {
              t = filter_1(t, k_76);
              return(t);
            }
            t = Cons_2(t, k_76, t_0);
            ;
            LocalPopChoice(s_8);
          }
        else
          {
            t = r_8;
            {
              ATerm e_5 = NULL,f_5 = NULL,g_5 = NULL;
              e_5 = t;
              d_5 :
              if(((ATgetType(e_5) == AT_LIST) && !(ATisEmpty(e_5))))
                {
                  f_5 = ATgetFirst((ATermList) e_5);
                  g_5 = (ATerm) ATgetNext((ATermList) e_5);
                  {
                    t = not_null(g_5);
                    t = filter_1(t, k_76);
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
ATerm repeat_1 (ATerm t, ATerm e_78 (ATerm))
{
  ATerm j_5 (ATerm t)
  {
    ATerm u_0 (ATerm t)
    {
      t = e_78(t);
      t = j_5(t);
      return(t);
    }
    t = try_1(t, u_0);
    return(t);
  }
  t = j_5(t);
  return(t);
}
ATerm xtc_import_0 (ATerm t)
{
  ATerm u_8;
  u_8 = t;
  {
    ATerm v_0 (ATerm t)
    {
      t = term_w_8;
      {
        t = table_get_0(t);
        {
          t = filter_1(t, xtc_read_0);
          {
            ATerm z_8 = t;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = z_8;
              }
          }
        }
      }
      return(t);
    }
    t = repeat_1(t, v_0);
  }
  t = u_8;
  return(t);
}
ATerm debug_0 (ATerm t)
{
  ATerm a_9;
  a_9 = t;
  {
    ATerm l_5 = NULL;
    ATerm m_5 = NULL;
    m_5 = t;
    if(((l_5 != NULL) && (l_5 != m_5)))
      _fail(m_5);
    else
      l_5 = m_5;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_k_8, (ATerm) ATinsert(ATempty, not_null(l_5)));
      t = printnl_0(t);
    }
  }
  t = a_9;
  return(t);
}
ATerm say_1 (ATerm t, ATerm s_64 (ATerm))
{
  ATerm e_9;
  e_9 = t;
  {
    t = s_64(t);
    t = debug_0(t);
  }
  t = e_9;
  return(t);
}
ATerm if_verbose4_1 (ATerm t, ATerm i_80 (ATerm))
{
  ATerm y_0 (ATerm t)
  {
    ATerm f_9;
    f_9 = t;
    {
      ATerm p_5 = NULL;
      ATerm q_5 = NULL;
      t = term_p_7;
      {
        t = get_config_0(t);
        {
          q_5 = t;
          if(((p_5 != NULL) && (p_5 != q_5)))
            _fail(q_5);
          else
            p_5 = q_5;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(p_5), term_g_9);
        t = geq_0(t);
      }
    }
    t = f_9;
    t = i_80(t);
    return(t);
  }
  t = try_1(t, y_0);
  return(t);
}
ATerm if_verbose6_1 (ATerm t, ATerm k_80 (ATerm))
{
  ATerm z_0 (ATerm t)
  {
    ATerm h_9;
    h_9 = t;
    {
      ATerm t_5 = NULL;
      ATerm u_5 = NULL;
      t = term_p_7;
      {
        t = get_config_0(t);
        {
          u_5 = t;
          if(((t_5 != NULL) && (t_5 != u_5)))
            _fail(u_5);
          else
            t_5 = u_5;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(t_5), term_m_9);
        t = geq_0(t);
      }
    }
    t = h_9;
    t = k_80(t);
    return(t);
  }
  t = try_1(t, z_0);
  return(t);
}
ATerm set_0 (ATerm t)
{
  t = table_put_0(t);
  return(t);
}
ATerm eq_0 (ATerm t)
{
  ATerm y_5 = NULL,z_5 = NULL,a_6 = NULL;
  y_5 = t;
  x_5 :
  if(match_cons(y_5, sym__2))
    {
      z_5 = ATgetArgument(y_5, 0);
      a_6 = ATgetArgument(y_5, 1);
      if(((z_5 != NULL) && (z_5 != a_6)))
        _fail(a_6);
      else
        z_5 = a_6;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm y_72 (ATerm), ATerm z_72 (ATerm))
{
  ATerm g_6 = NULL,h_6 = NULL,i_6 = NULL;
  g_6 = t;
  f_6 :
  if(((ATgetType(g_6) == AT_LIST) && !(ATisEmpty(g_6))))
    {
      h_6 = ATgetFirst((ATermList) g_6);
      i_6 = (ATerm) ATgetNext((ATermList) g_6);
      {
        t = z_72(t);
        {
          ATerm a_1 (ATerm t)
          {
            ATerm l_6 = NULL;
            l_6 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(h_6), not_null(l_6));
              t = y_72(t);
            }
            return(t);
          }
          t = fetch_1(t, a_1);
        }
        t = not_null(i_6);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm union_1 (ATerm t, ATerm u_72 (ATerm))
{
  ATerm r_6 = NULL,s_6 = NULL,t_6 = NULL;
  r_6 = t;
  q_6 :
  if(match_cons(r_6, sym__2))
    {
      s_6 = ATgetArgument(r_6, 0);
      t_6 = ATgetArgument(r_6, 1);
      {
        t = not_null(s_6);
        {
          ATerm x_6 (ATerm t)
          {
            ATerm n_9 = t;
            int o_9 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(t_6);
                ;
                LocalPopChoice(o_9);
              }
            else
              {
                t = n_9;
                {
                  ATerm p_9 = t;
                  int q_9 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm b_1 (ATerm t)
                      {
                        t = not_null(t_6);
                        return(t);
                      }
                      t = HdMember_p__2(t, u_72, b_1);
                      t = x_6(t);
                      ;
                      LocalPopChoice(q_9);
                    }
                  else
                    {
                      t = p_9;
                      t = Cons_2(t, _id, x_6);
                    }
                }
              }
            return(t);
          }
          t = x_6(t);
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
ATerm get_0 (ATerm t)
{
  t = table_get_0(t);
  return(t);
}
ATerm table_append_0 (ATerm t)
{
  ATerm c_7 = NULL,d_7 = NULL,e_7 = NULL,f_7 = NULL;
  c_7 = t;
  b_7 :
  if(match_cons(c_7, sym__3))
    {
      d_7 = ATgetArgument(c_7, 0);
      e_7 = ATgetArgument(c_7, 1);
      f_7 = ATgetArgument(c_7, 2);
      {
        ATerm r_9;
        r_9 = t;
        {
          ATerm j_7 = NULL;
          ATerm k_7 = NULL,m_7 = NULL;
          ATerm l_7 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(d_7), not_null(e_7));
          {
            ATerm x_9 = t;
            int a_10 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = get_0(t);
                ;
                LocalPopChoice(a_10);
              }
            else
              {
                t = x_9;
                t = (ATerm) ATempty;
              }
            {
              l_7 = t;
              if(((k_7 != NULL) && (k_7 != l_7)))
                _fail(l_7);
              else
                k_7 = l_7;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(k_7), not_null(f_7));
            {
              t = union_0(t);
              {
                m_7 = t;
                if(((j_7 != NULL) && (j_7 != m_7)))
                  _fail(m_7);
                else
                  j_7 = m_7;
              }
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(d_7), not_null(e_7), not_null(j_7));
            t = set_0(t);
          }
        }
        t = r_9;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_putlist_1 (ATerm t, ATerm t_80 (ATerm))
{
  ATerm u_7 = NULL,v_7 = NULL,w_7 = NULL;
  u_7 = t;
  t_7 :
  if(match_cons(u_7, sym__2))
    {
      v_7 = ATgetArgument(u_7, 0);
      w_7 = ATgetArgument(u_7, 1);
      {
        t = not_null(w_7);
        {
          ATerm c_1 (ATerm t)
          {
            ATerm z_7 = NULL,a_8 = NULL,b_8 = NULL;
            z_7 = t;
            s_7 :
            if(match_cons(z_7, sym__2))
              {
                a_8 = ATgetArgument(z_7, 0);
                b_8 = ATgetArgument(z_7, 1);
                {
                  t = (ATerm) ATmakeAppl(sym__3, not_null(v_7), not_null(a_8), not_null(b_8));
                  t = t_80(t);
                }
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = map_1(t, c_1);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm can_read_file_0 (ATerm t)
{
  ATerm h_8 = NULL;
  ATerm i_8 = NULL;
  i_8 = t;
  if(((h_8 != NULL) && (h_8 != i_8)))
    _fail(i_8);
  else
    h_8 = i_8;
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(h_8), (ATerm) ATinsert(ATempty, term_b_10));
    t = access_0(t);
  }
  return(t);
}
ATerm read_repository_file_0 (ATerm t)
{
  ATerm c_10 = t;
  int d_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = can_read_file_0(t);
      LocalPopChoice(d_10);
      t = ReadFromFile_0(t);
    }
  else
    {
      t = c_10;
      {
        ATerm e_10 = t;
        int f_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_10 = t;
            if((PushChoice() == 0))
              {
                t = file_exists_0(t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = m_10;
              }
            {
              ATerm d_1 (ATerm t)
              {
                t = term_n_10;
                return(t);
              }
              t = debug_1(t, d_1);
            }
            ;
            LocalPopChoice(f_10);
          }
        else
          {
            t = e_10;
            {
              ATerm e_1 (ATerm t)
              {
                t = term_q_10;
                return(t);
              }
              t = debug_1(t, e_1);
            }
          }
        t = (ATerm) ATempty;
      }
    }
  return(t);
}
ATerm xtc_read_0 (ATerm t)
{
  ATerm m_8 = NULL;
  ATerm o_8 = NULL;
  m_8 = t;
  {
    ATerm f_1 (ATerm t)
    {
      ATerm g_1 (ATerm t)
      {
        t = term_r_10;
        return(t);
      }
      t = debug_1(t, g_1);
      return(t);
    }
    t = if_verbose5_1(t, f_1);
    {
      ATerm s_10 = t;
      if((PushChoice() == 0))
        {
          t = (ATerm) ATmakeAppl(sym__2, term_l_8, (ATerm) ATmakeAppl(sym_Imported_1, not_null(m_8)));
          t = table_get_0(t);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = s_10;
        }
      {
        ATerm t_10;
        t_10 = t;
        {
          t = (ATerm) ATmakeAppl(sym__3, term_l_8, term_x_10, (ATerm) ATinsert(ATempty, not_null(m_8)));
          t = table_put_0(t);
        }
        t = t_10;
        {
          ATerm h_1 (ATerm t)
          {
            ATerm i_1 (ATerm t)
            {
              t = term_y_10;
              return(t);
            }
            t = debug_1(t, i_1);
            return(t);
          }
          t = if_verbose4_1(t, h_1);
          {
            t = read_repository_file_0(t);
            {
              ATerm l_1 (ATerm t)
              {
                ATerm m_1 (ATerm t)
                {
                  t = term_z_10;
                  return(t);
                }
                t = say_1(t, m_1);
                return(t);
              }
              t = if_verbose6_1(t, l_1);
              {
                ATerm p_8 = NULL;
                p_8 = t;
                if(((o_8 != NULL) && (o_8 != p_8)))
                  _fail(p_8);
                else
                  o_8 = p_8;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_l_8, not_null(o_8));
                  {
                    t = table_putlist_1(t, table_append_0);
                    {
                      ATerm n_1 (ATerm t)
                      {
                        ATerm o_1 (ATerm t)
                        {
                          t = term_a_11;
                          return(t);
                        }
                        t = say_1(t, o_1);
                        return(t);
                      }
                      t = if_verbose6_1(t, n_1);
                      {
                        t = (ATerm) ATmakeAppl(sym__3, term_l_8, (ATerm)ATmakeAppl(sym_Imported_1, not_null(m_8)), (ATerm) ATempty);
                        {
                          t = table_put_0(t);
                          {
                            ATerm p_1 (ATerm t)
                            {
                              ATerm q_1 (ATerm t)
                              {
                                t = term_z_10;
                                return(t);
                              }
                              t = say_1(t, q_1);
                              return(t);
                            }
                            t = if_verbose4_1(t, p_1);
                          }
                        }
                      }
                    }
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
ATerm getenv_0 (ATerm t)
{
  ATerm t_8 = NULL;
  t_8 = t;
  t = SSL_getenv(not_null(t_8));
  return(t);
}
ATerm xtc_location_0 (ATerm t)
{
  ATerm b_11 = t;
  int d_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_e_11;
      t = get_config_0(t);
      ;
      LocalPopChoice(d_11);
    }
  else
    {
      t = b_11;
      {
        ATerm j_11 = t;
        int k_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_n_11;
            t = getenv_0(t);
            ;
            LocalPopChoice(k_11);
          }
        else
          {
            t = j_11;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
ATerm xtc_load_0 (ATerm t)
{
  ATerm r_1 (ATerm t)
  {
    ATerm s_1 (ATerm t)
    {
      t = term_o_11;
      return(t);
    }
    t = debug_1(t, s_1);
    return(t);
  }
  t = if_verbose5_1(t, r_1);
  {
    ATerm p_11;
    p_11 = t;
    {
      ATerm s_11 = t;
      int t_11 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = term_w_11;
          t = table_get_0(t);
          ;
          LocalPopChoice(t_11);
        }
      else
        {
          t = s_11;
          {
            t = xtc_location_0(t);
            {
              t = xtc_read_0(t);
              t = xtc_import_0(t);
            }
          }
        }
    }
    t = p_11;
    {
      ATerm t_1 (ATerm t)
      {
        ATerm u_1 (ATerm t)
        {
          t = term_x_11;
          return(t);
        }
        t = debug_1(t, u_1);
        return(t);
      }
      t = if_verbose5_1(t, t_1);
    }
  }
  return(t);
}
ATerm xtc_find_0 (ATerm t)
{
  ATerm a_12 = t;
  int b_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_1 (ATerm t)
      {
        ATerm w_1 (ATerm t)
        {
          t = term_c_12;
          return(t);
        }
        t = debug_1(t, w_1);
        return(t);
      }
      t = if_verbose5_1(t, v_1);
      {
        t = xtc_load_0(t);
        {
          ATerm d_12 = t;
          int g_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = xtc_find_version_loc_0(t);
              ;
              LocalPopChoice(g_12);
            }
          else
            {
              t = d_12;
              t = xtc_find_loc_0(t);
            }
          {
            ATerm x_1 (ATerm t)
            {
              ATerm a_2 (ATerm t)
              {
                t = term_c_12;
                return(t);
              }
              t = debug_1(t, a_2);
              return(t);
            }
            t = if_verbose5_1(t, x_1);
          }
        }
      }
      ;
      LocalPopChoice(b_12);
    }
  else
    {
      t = a_12;
      {
        ATerm x_8 = NULL;
        ATerm y_8 = NULL;
        y_8 = t;
        if(((x_8 != NULL) && (x_8 != y_8)))
          _fail(y_8);
        else
          x_8 = y_8;
        {
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_i_12), not_null(x_8)), term_h_12);
          {
            t = error_0(t);
            {
              ATerm b_2 (ATerm t)
              {
                t = term_l_8;
                {
                  t = table_getlist_0(t);
                  {
                    ATerm c_2 (ATerm t)
                    {
                      t = term_j_12;
                      return(t);
                    }
                    t = debug_1(t, c_2);
                  }
                }
                return(t);
              }
              t = if_verbose5_1(t, b_2);
              _fail(t);
            }
          }
        }
      }
    }
  return(t);
}
ATerm read_from_stream_0 (ATerm t)
{
  ATerm c_9 = NULL,d_9 = NULL;
  c_9 = t;
  b_9 :
  if(match_cons(c_9, sym_Stream_1))
    {
      d_9 = ATgetArgument(c_9, 0);
      t = SSL_read_term_from_stream(not_null(d_9));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm ReadFromFile_0 (ATerm t)
{
  ATerm k_9 = NULL;
  ATerm k_12 = t;
  int l_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_9 = NULL;
      ATerm j_9 = NULL;
      j_9 = t;
      if(((i_9 != NULL) && (i_9 != j_9)))
        _fail(j_9);
      else
        i_9 = j_9;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(i_9), term_q_12);
        t = open_stream_0(t);
      }
      ;
      LocalPopChoice(l_12);
    }
  else
    {
      t = k_12;
      {
        ATerm d_2 (ATerm t)
        {
          t = term_u_12;
          return(t);
        }
        t = debug_1(t, d_2);
        _fail(t);
      }
    }
  {
    ATerm a_13;
    a_13 = t;
    {
      ATerm l_9 = NULL;
      t = read_from_stream_0(t);
      {
        l_9 = t;
        if(((k_9 != NULL) && (k_9 != l_9)))
          _fail(l_9);
        else
          k_9 = l_9;
      }
    }
    t = a_13;
    {
      t = fclose_0(t);
      t = not_null(k_9);
    }
  }
  return(t);
}
ATerm read_from_0 (ATerm t)
{
  ATerm t_9 = NULL,u_9 = NULL;
  t_9 = t;
  s_9 :
  if(match_cons(t_9, sym_stdin_0))
    {
      ATerm v_9 = NULL;
      ATerm w_9 = NULL;
      t = term_b_13;
      {
        t = ReadFromFile_0(t);
        {
          w_9 = t;
          if(((v_9 != NULL) && (v_9 != w_9)))
            _fail(w_9);
          else
            v_9 = w_9;
        }
      }
      t = not_null(v_9);
    }
  else
    {
      if(match_cons(t_9, sym_FILE_1))
        {
          u_9 = ATgetArgument(t_9, 0);
          {
            ATerm y_9 = NULL;
            ATerm z_9 = NULL;
            t = not_null(u_9);
            {
              t = file_exists_0(t);
              {
                t = ReadFromFile_0(t);
                {
                  z_9 = t;
                  if(((y_9 != NULL) && (y_9 != z_9)))
                    _fail(z_9);
                  else
                    y_9 = z_9;
                }
              }
            }
            t = not_null(y_9);
          }
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm write_in_baf_to_stream_0 (ATerm t)
{
  ATerm i_10 = NULL,j_10 = NULL,k_10 = NULL,l_10 = NULL;
  i_10 = t;
  g_10 :
  if(match_cons(i_10, sym__2))
    {
      j_10 = ATgetArgument(i_10, 0);
      l_10 = ATgetArgument(i_10, 1);
      h_10 :
      if(match_cons(j_10, sym_Stream_1))
        {
          k_10 = ATgetArgument(j_10, 0);
          {
            ATerm o_10 = NULL;
            t = SSL_write_term_to_stream_baf(not_null(k_10), not_null(l_10));
            {
              ATerm p_10 = NULL;
              p_10 = t;
              if(((o_10 != NULL) && (o_10 != p_10)))
                _fail(p_10);
              else
                o_10 = p_10;
              t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(o_10));
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
ATerm fclose_0 (ATerm t)
{
  ATerm v_10 = NULL,w_10 = NULL;
  ATerm c_11 (ATerm t)
  {
    t = SSL_fclose(not_null(w_10));
    return(t);
  }
  w_10 = t;
  u_10 :
  if(match_cons(w_10, sym_Stream_1))
    {
      v_10 = ATgetArgument(w_10, 0);
      {
        ATerm c_13 = t;
        int d_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(not_null(v_10));
            ;
            LocalPopChoice(d_13);
          }
        else
          {
            t = c_13;
            t = c_11(t);
          }
      }
    }
  else
    {
      t = c_11(t);
    }
  return(t);
}
ATerm fopen_0 (ATerm t)
{
  ATerm g_11 = NULL,h_11 = NULL,i_11 = NULL;
  g_11 = t;
  f_11 :
  if(match_cons(g_11, sym__2))
    {
      h_11 = ATgetArgument(g_11, 0);
      i_11 = ATgetArgument(g_11, 1);
      {
        ATerm l_11 = NULL;
        t = SSL_fopen(not_null(h_11), not_null(i_11));
        {
          ATerm m_11 = NULL;
          m_11 = t;
          if(((l_11 != NULL) && (l_11 != m_11)))
            _fail(m_11);
          else
            l_11 = m_11;
          t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(l_11));
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
  ATerm q_11 = NULL;
  t = SSL_stdin_stream();
  {
    ATerm r_11 = NULL;
    r_11 = t;
    if(((q_11 != NULL) && (q_11 != r_11)))
      _fail(r_11);
    else
      q_11 = r_11;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(q_11));
  }
  return(t);
}
ATerm stdout_stream_0 (ATerm t)
{
  ATerm u_11 = NULL;
  t = SSL_stdout_stream();
  {
    ATerm v_11 = NULL;
    v_11 = t;
    if(((u_11 != NULL) && (u_11 != v_11)))
      _fail(v_11);
    else
      u_11 = v_11;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(u_11));
  }
  return(t);
}
ATerm stderr_stream_0 (ATerm t)
{
  ATerm y_11 = NULL;
  t = SSL_stderr_stream();
  {
    ATerm z_11 = NULL;
    z_11 = t;
    if(((y_11 != NULL) && (y_11 != z_11)))
      _fail(z_11);
    else
      y_11 = z_11;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(y_11));
  }
  return(t);
}
ATerm stdio_stream_0 (ATerm t)
{
  ATerm f_12 = NULL;
  f_12 = t;
  e_12 :
  if(match_cons(f_12, sym_stderr_0))
    {
      t = stderr_stream_0(t);
    }
  else
    {
      if(match_cons(f_12, sym_stdout_0))
        {
          t = stdout_stream_0(t);
        }
      else
        {
          if(match_cons(f_12, sym_stdin_0))
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
  ATerm p_12 = NULL;
  ATerm r_12 = NULL,s_12 = NULL;
  p_12 = t;
  {
    ATerm t_12 = NULL;
    ATerm v_12 = NULL,w_12 = NULL,x_12 = NULL,y_12 = NULL,z_12 = NULL;
    t = not_null(p_12);
    {
      t_12 = t;
      {
        t = SSL_explode_term(not_null(t_12));
        {
          v_12 = t;
          m_12 :
          if(match_cons(v_12, sym__2))
            {
              w_12 = ATgetArgument(v_12, 0);
              x_12 = ATgetArgument(v_12, 1);
              n_12 :
              if(match_string(w_12, ""))
                {
                  o_12 :
                  if(((ATgetType(x_12) == AT_LIST) && !(ATisEmpty(x_12))))
                    {
                      y_12 = ATgetFirst((ATermList) x_12);
                      z_12 = (ATerm) ATgetNext((ATermList) x_12);
                      {
                        if(((s_12 != NULL) && (s_12 != y_12)))
                          _fail(y_12);
                        else
                          s_12 = y_12;
                        if(((r_12 != NULL) && (r_12 != z_12)))
                          _fail(z_12);
                        else
                          r_12 = z_12;
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
    t = not_null(s_12);
  }
  return(t);
}
ATerm open_stream_0 (ATerm t)
{
  ATerm h_13 = NULL,i_13 = NULL,j_13 = NULL;
  h_13 = t;
  g_13 :
  if(match_cons(h_13, sym__2))
    {
      i_13 = ATgetArgument(h_13, 0);
      j_13 = ATgetArgument(h_13, 1);
      {
        ATerm e_13 = t;
        int m_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Fst_0(t);
            t = stdio_stream_0(t);
            ;
            LocalPopChoice(m_13);
          }
        else
          {
            t = e_13;
            {
              ATerm n_13 = t;
              int o_13 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm e_2 (ATerm t)
                  {
                    ATerm k_13 = NULL,l_13 = NULL;
                    k_13 = t;
                    f_13 :
                    if(match_cons(k_13, sym_Path_1))
                      {
                        l_13 = ATgetArgument(k_13, 0);
                        t = not_null(l_13);
                      }
                    else
                      {
                        _fail(t);
                      }
                    return(t);
                  }
                  t = _2(t, e_2, _id);
                  t = fopen_0(t);
                  ;
                  LocalPopChoice(o_13);
                }
              else
                {
                  t = n_13;
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
ATerm WriteToFile_1 (ATerm t, ATerm c_65 (ATerm))
{
  ATerm t_13 = NULL,u_13 = NULL,v_13 = NULL;
  t_13 = t;
  s_13 :
  if(match_cons(t_13, sym__2))
    {
      u_13 = ATgetArgument(t_13, 0);
      v_13 = ATgetArgument(t_13, 1);
      {
        ATerm y_13 = NULL,a_14 = NULL;
        t = not_null(u_13);
        {
          ATerm z_13 = NULL;
          z_13 = t;
          if(((y_13 != NULL) && (y_13 != z_13)))
            _fail(z_13);
          else
            y_13 = z_13;
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(y_13), term_p_13);
            {
              t = open_stream_0(t);
              {
                ATerm b_14 = NULL;
                b_14 = t;
                if(((a_14 != NULL) && (a_14 != b_14)))
                  _fail(b_14);
                else
                  a_14 = b_14;
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(a_14), not_null(v_13));
                  {
                    t = c_65(t);
                    {
                      t = fclose_0(t);
                      t = not_null(v_13);
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
ATerm write_to_0 (ATerm t)
{
  ATerm h_14 = NULL;
  ATerm j_14 = NULL;
  h_14 = t;
  {
    ATerm k_14 = NULL;
    t = xtc_new_file_0(t);
    {
      k_14 = t;
      {
        if(((j_14 != NULL) && (j_14 != k_14)))
          _fail(k_14);
        else
          j_14 = k_14;
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(j_14), not_null(h_14));
          {
            t = WriteToBinaryFile_0(t);
            {
              t = not_null(j_14);
              t = close_file_0(t);
            }
          }
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(j_14));
  }
  return(t);
}
ATerm xtc_transform_term_2 (ATerm t, ATerm g_83 (ATerm), ATerm h_83 (ATerm))
{
  t = write_to_0(t);
  {
    t = xtc_transform_file_2(t, g_83, h_83);
    t = read_from_0(t);
  }
  return(t);
}
ATerm close_file_0 (ATerm t)
{
  ATerm o_14 = NULL;
  o_14 = t;
  t = SSL_close_file(not_null(o_14));
  return(t);
}
ATerm execvp_0 (ATerm t)
{
  ATerm t_14 = NULL,u_14 = NULL,v_14 = NULL;
  t_14 = t;
  s_14 :
  if(match_cons(t_14, sym__2))
    {
      u_14 = ATgetArgument(t_14, 0);
      v_14 = ATgetArgument(t_14, 1);
      t = SSL_execvp(not_null(u_14), not_null(v_14));
    }
  else
    {
      _fail(t);
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
ATerm int_to_string_0 (ATerm t)
{
  ATerm a_15 = NULL;
  a_15 = t;
  t = SSL_int_to_string(not_null(a_15));
  return(t);
}
ATerm signal_to_descr_0 (ATerm t)
{
  ATerm i_15 = NULL,j_15 = NULL,k_15 = NULL,l_15 = NULL;
  i_15 = t;
  h_15 :
  if(match_cons(i_15, sym_UnknownSignal_1))
    {
      j_15 = ATgetArgument(i_15, 0);
      {
        ATerm n_15 = NULL;
        ATerm o_15 = NULL;
        t = not_null(j_15);
        {
          t = int_to_string_0(t);
          {
            o_15 = t;
            if(((n_15 != NULL) && (n_15 != o_15)))
              _fail(o_15);
            else
              n_15 = o_15;
          }
        }
        {
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_r_13), not_null(n_15)), term_q_13);
          t = concat_strings_0(t);
        }
      }
    }
  else
    {
      if(match_cons(i_15, sym_Signal_3))
        {
          j_15 = ATgetArgument(i_15, 0);
          k_15 = ATgetArgument(i_15, 1);
          l_15 = ATgetArgument(i_15, 2);
          {
            ATerm s_15 = NULL;
            ATerm t_15 = NULL;
            t = not_null(k_15);
            {
              t = int_to_string_0(t);
              {
                t_15 = t;
                if(((s_15 != NULL) && (s_15 != t_15)))
                  _fail(t_15);
                else
                  s_15 = t_15;
              }
            }
            {
              t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(l_15)), term_x_13), not_null(s_15)), term_w_13), not_null(j_15));
              t = concat_strings_0(t);
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
ATerm fetch_elem_1 (ATerm t, ATerm g_69 (ATerm))
{
  ATerm z_15 = NULL;
  ATerm f_2 (ATerm t)
  {
    ATerm a_16 = NULL;
    t = g_69(t);
    {
      a_16 = t;
      if(((z_15 != NULL) && (z_15 != a_16)))
        _fail(a_16);
      else
        z_15 = a_16;
    }
    return(t);
  }
  t = fetch_1(t, f_2);
  t = not_null(z_15);
  return(t);
}
ATerm signal_from_number_0 (ATerm t)
{
  ATerm f_16 = NULL;
  f_16 = t;
  {
    ATerm c_14 = t;
    int d_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_s_21), term_o_21), term_k_21), term_f_21), term_c_21), term_y_20), term_s_20), term_m_20), term_z_19), term_q_19), term_f_19), term_w_18), term_o_18), term_g_18), term_r_17), term_m_17), term_f_17), term_b_17), term_p_16), term_g_16), term_y_15), term_u_15), term_m_15), term_d_15), term_y_14), term_r_14), term_n_14), term_g_14);
        {
          ATerm g_2 (ATerm t)
          {
            ATerm h_16 = NULL,i_16 = NULL,j_16 = NULL,k_16 = NULL;
            h_16 = t;
            e_16 :
            if(match_cons(h_16, sym_Signal_3))
              {
                i_16 = ATgetArgument(h_16, 0);
                j_16 = ATgetArgument(h_16, 1);
                k_16 = ATgetArgument(h_16, 2);
                if(((f_16 != NULL) && (f_16 != j_16)))
                  _fail(j_16);
                else
                  f_16 = j_16;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = fetch_elem_1(t, g_2);
        }
        ;
        LocalPopChoice(d_14);
      }
    else
      {
        t = c_14;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, not_null(f_16));
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0 (ATerm t)
{
  ATerm t_21;
  t_21 = t;
  {
    ATerm h_2 (ATerm t)
    {
      ATerm r_16 = NULL,s_16 = NULL,t_16 = NULL,u_16 = NULL;
      r_16 = t;
      q_16 :
      if(match_cons(r_16, sym_WaitStatus_3))
        {
          s_16 = ATgetArgument(r_16, 0);
          t_16 = ATgetArgument(r_16, 1);
          u_16 = ATgetArgument(r_16, 2);
          {
            ATerm x_16 = NULL;
            t = not_null(t_16);
            {
              ATerm u_21 = t;
              if((PushChoice() == 0))
                {
                  ATerm w_16 = NULL;
                  w_16 = t;
                  o_16 :
                  if(!(match_int(w_16, -1)))
                    {
                      _fail(t);
                    }
                  PopChoice();
                  _fail(t);
                }
              else
                {
                  t = u_21;
                }
              {
                t = signal_from_number_0(t);
                {
                  t = signal_to_descr_0(t);
                  {
                    ATerm y_16 = NULL;
                    y_16 = t;
                    if(((x_16 != NULL) && (x_16 != y_16)))
                      _fail(y_16);
                    else
                      x_16 = y_16;
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_k_8, (ATerm) ATinsert(ATinsert(ATempty, not_null(x_16)), term_c_22));
                      t = printnl_0(t);
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
    t = try_1(t, h_2);
  }
  t = t_21;
  return(t);
}
ATerm waitpid_0 (ATerm t)
{
  ATerm c_17 = NULL;
  c_17 = t;
  t = SSL_waitpid(not_null(c_17));
  return(t);
}
ATerm fork_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_2 (ATerm t, ATerm q_63 (ATerm), ATerm r_63 (ATerm))
{
  ATerm j_17 = NULL;
  ATerm l_17 = NULL;
  j_17 = t;
  {
    t = fork_0(t);
    {
      l_17 = t;
      {
        ATerm h_22 = t;
        int i_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_17 = NULL;
            n_17 = t;
            i_17 :
            if(match_int(n_17, 0))
              {
                t = not_null(j_17);
                t = q_63(t);
              }
            else
              {
                _fail(t);
              }
            ;
            LocalPopChoice(i_22);
          }
        else
          {
            t = h_22;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(l_17), not_null(j_17));
              t = r_63(t);
            }
          }
      }
    }
  }
  return(t);
}
ATerm fork_and_wait_1 (ATerm t, ATerm s_63 (ATerm))
{
  ATerm w_17 = NULL;
  ATerm i_2 (ATerm t)
  {
    ATerm x_17 = NULL,y_17 = NULL,z_17 = NULL;
    x_17 = t;
    v_17 :
    if(match_cons(x_17, sym__2))
      {
        y_17 = ATgetArgument(x_17, 0);
        z_17 = ATgetArgument(x_17, 1);
        {
          ATerm b_18 = NULL,c_18 = NULL,d_18 = NULL,e_18 = NULL;
          if(((w_17 != NULL) && (w_17 != z_17)))
            _fail(z_17);
          else
            w_17 = z_17;
          {
            t = not_null(y_17);
            {
              t = waitpid_0(t);
              {
                t = warn_ifsignaled_0(t);
                {
                  b_18 = t;
                  t_17 :
                  if(match_cons(b_18, sym_WaitStatus_3))
                    {
                      c_18 = ATgetArgument(b_18, 0);
                      d_18 = ATgetArgument(b_18, 1);
                      e_18 = ATgetArgument(b_18, 2);
                      u_17 :
                      if(match_int(c_18, 0))
                        {
                          t = not_null(w_17);
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
    else
      {
        _fail(t);
      }
    return(t);
  }
  t = fork_2(t, s_63, i_2);
  return(t);
}
ATerm call_0 (ATerm t)
{
  ATerm j_18 = NULL,k_18 = NULL,l_18 = NULL;
  j_18 = t;
  i_18 :
  if(match_cons(j_18, sym__2))
    {
      k_18 = ATgetArgument(j_18, 0);
      l_18 = ATgetArgument(j_18, 1);
      {
        ATerm j_2 (ATerm t)
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(k_18), not_null(l_18));
          t = execvp_0(t);
          return(t);
        }
        t = fork_and_wait_1(t, j_2);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm xtc_find_warning_0 (ATerm t)
{
  t = xtc_find_0(t);
  return(t);
}
ATerm xtc_command_1 (ATerm t, ATerm x_82 (ATerm))
{
  ATerm r_18 = NULL;
  ATerm j_22;
  j_22 = t;
  {
    ATerm s_18 = NULL;
    t = x_82(t);
    {
      t = xtc_find_warning_0(t);
      {
        s_18 = t;
        if(((r_18 != NULL) && (r_18 != s_18)))
          _fail(s_18);
        else
          r_18 = s_18;
      }
    }
  }
  t = j_22;
  {
    ATerm k_22;
    k_22 = t;
    {
      ATerm t_18 = NULL;
      ATerm u_18 = NULL;
      u_18 = t;
      if(((t_18 != NULL) && (t_18 != u_18)))
        _fail(u_18);
      else
        t_18 = u_18;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(r_18), not_null(t_18));
        t = call_0(t);
      }
    }
    t = k_22;
  }
  return(t);
}
ATerm assert_1 (ATerm t, ATerm i_79 (ATerm))
{
  ATerm c_19 = NULL,d_19 = NULL,e_19 = NULL;
  c_19 = t;
  b_19 :
  if(match_cons(c_19, sym__2))
    {
      d_19 = ATgetArgument(c_19, 0);
      e_19 = ATgetArgument(c_19, 1);
      {
        ATerm h_19 = NULL,i_19 = NULL,j_19 = NULL;
        ATerm l_22;
        l_22 = t;
        {
          ATerm k_19 = NULL;
          ATerm l_19 = NULL,m_19 = NULL,n_19 = NULL;
          t = i_79(t);
          {
            k_19 = t;
            {
              if(((h_19 != NULL) && (h_19 != k_19)))
                _fail(k_19);
              else
                h_19 = k_19;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(h_19), not_null(d_19), not_null(e_19));
                {
                  t = table_push_0(t);
                  {
                    ATerm m_22 = t;
                    int n_22 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(h_19), term_o_22);
                        t = table_get_0(t);
                        ;
                        LocalPopChoice(n_22);
                      }
                    else
                      {
                        t = m_22;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      l_19 = t;
                      a_19 :
                      if(((ATgetType(l_19) == AT_LIST) && !(ATisEmpty(l_19))))
                        {
                          m_19 = ATgetFirst((ATermList) l_19);
                          n_19 = (ATerm) ATgetNext((ATermList) l_19);
                          {
                            if(((i_19 != NULL) && (i_19 != m_19)))
                              _fail(m_19);
                            else
                              i_19 = m_19;
                            {
                              if(((j_19 != NULL) && (j_19 != n_19)))
                                _fail(n_19);
                              else
                                j_19 = n_19;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(h_19), term_o_22, (ATerm) ATinsert(CheckATermList(not_null(j_19)), (ATerm) ATinsert(CheckATermList(not_null(i_19)), not_null(d_19))));
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
        t = l_22;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm obsolete_1 (ATerm t, ATerm v_64 (ATerm))
{
  ATerm p_22;
  p_22 = t;
  {
    t = v_64(t);
    {
      ATerm k_2 (ATerm t)
      {
        t = term_s_22;
        return(t);
      }
      t = debug_1(t, k_2);
    }
  }
  t = p_22;
  return(t);
}
ATerm open_file_0 (ATerm t)
{
  ATerm w_19 = NULL,x_19 = NULL,y_19 = NULL;
  ATerm f_20 (ATerm t)
  {
    ATerm x_22 = t;
    if((PushChoice() == 0))
      {
        ATerm a_20 = NULL,b_20 = NULL,c_20 = NULL;
        a_20 = t;
        u_19 :
        if(match_cons(a_20, sym__2))
          {
            b_20 = ATgetArgument(a_20, 0);
            c_20 = ATgetArgument(a_20, 1);
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
        t = x_22;
      }
    {
      ATerm l_2 (ATerm t)
      {
        t = term_y_22;
        return(t);
      }
      t = obsolete_1(t, l_2);
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(w_19), term_p_13);
        t = open_file_0(t);
      }
    }
    return(t);
  }
  ATerm g_20 (ATerm t)
  {
    t = SSL_open_file(not_null(x_19), not_null(y_19));
    return(t);
  }
  w_19 = t;
  v_19 :
  if(match_cons(w_19, sym__2))
    {
      x_19 = ATgetArgument(w_19, 0);
      y_19 = ATgetArgument(w_19, 1);
      {
        ATerm z_22 = t;
        int a_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = f_20(t);
            ;
            LocalPopChoice(a_23);
          }
        else
          {
            t = z_22;
            t = g_20(t);
          }
      }
    }
  else
    {
      t = f_20(t);
    }
  return(t);
}
ATerm access_0 (ATerm t)
{
  ATerm j_20 = NULL,k_20 = NULL,l_20 = NULL;
  j_20 = t;
  i_20 :
  if(match_cons(j_20, sym__2))
    {
      k_20 = ATgetArgument(j_20, 0);
      l_20 = ATgetArgument(j_20, 1);
      t = SSL_access(not_null(k_20), not_null(l_20));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm file_exists_0 (ATerm t)
{
  ATerm q_20 = NULL;
  ATerm r_20 = NULL;
  r_20 = t;
  if(((q_20 != NULL) && (q_20 != r_20)))
    _fail(r_20);
  else
    q_20 = r_20;
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(q_20), (ATerm) ATinsert(ATempty, term_b_23));
    t = access_0(t);
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
  ATerm w_20 = NULL;
  ATerm x_20 = NULL;
  t = term_c_23;
  {
    t = new_0(t);
    {
      x_20 = t;
      if(((w_20 != NULL) && (w_20 != x_20)))
        _fail(x_20);
      else
        w_20 = x_20;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(w_20), term_d_23);
    {
      t = conc_strings_0(t);
      {
        ATerm m_2 (ATerm t)
        {
          t = file_exists_0(t);
          t = new_file_0(t);
          return(t);
        }
        t = try_1(t, m_2);
      }
    }
  }
  return(t);
}
ATerm xtc_new_file_0 (ATerm t)
{
  ATerm i_21 = NULL;
  t = new_file_0(t);
  {
    i_21 = t;
    {
      ATerm h_23;
      h_23 = t;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(i_21), term_p_13);
        {
          t = open_file_0(t);
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(i_21), term_c_23);
            {
              ATerm n_2 (ATerm t)
              {
                t = term_i_23;
                return(t);
              }
              t = assert_1(t, n_2);
            }
          }
        }
      }
      t = h_23;
    }
  }
  return(t);
}
ATerm xtc_transform_file_2 (ATerm t, ATerm n_0 (ATerm), ATerm o_0 (ATerm))
{
  ATerm w_21 = NULL,x_21 = NULL;
  w_21 = t;
  v_21 :
  if(match_cons(w_21, sym_stdin_0))
    {
      ATerm y_21 = NULL;
      ATerm z_21 = NULL;
      ATerm a_22 = NULL;
      t = xtc_new_file_0(t);
      {
        z_21 = t;
        {
          if(((y_21 != NULL) && (y_21 != z_21)))
            _fail(z_21);
          else
            y_21 = z_21;
          {
            ATerm b_22 = NULL;
            t = o_0(t);
            {
              b_22 = t;
              if(((a_22 != NULL) && (a_22 != b_22)))
                _fail(b_22);
              else
                a_22 = b_22;
            }
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(a_22), (ATerm) ATinsert(ATinsert(ATempty, not_null(y_21)), term_m_23));
              {
                t = conc_0(t);
                {
                  t = xtc_command_1(t, n_0);
                  {
                    t = not_null(y_21);
                    t = close_file_0(t);
                  }
                }
              }
            }
          }
        }
      }
      t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(y_21));
    }
  else
    {
      if(match_cons(w_21, sym_FILE_1))
        {
          x_21 = ATgetArgument(w_21, 0);
          {
            ATerm d_22 = NULL;
            ATerm e_22 = NULL;
            t = not_null(x_21);
            {
              ATerm f_22 = NULL;
              t = xtc_new_file_0(t);
              {
                e_22 = t;
                {
                  if(((d_22 != NULL) && (d_22 != e_22)))
                    _fail(e_22);
                  else
                    d_22 = e_22;
                  {
                    ATerm g_22 = NULL;
                    t = o_0(t);
                    {
                      g_22 = t;
                      if(((f_22 != NULL) && (f_22 != g_22)))
                        _fail(g_22);
                      else
                        f_22 = g_22;
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, not_null(f_22), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(d_22)), term_m_23), not_null(x_21)), term_p_23));
                      {
                        t = conc_0(t);
                        {
                          t = xtc_command_1(t, n_0);
                          {
                            t = not_null(d_22);
                            t = close_file_0(t);
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(d_22));
          }
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm stdin_0 (ATerm t)
{
  ATerm r_22 = NULL;
  r_22 = t;
  q_22 :
  if(match_cons(r_22, sym_stdin_0))
    {
      ATerm t_22 = NULL,v_22 = NULL;
      ATerm q_23;
      q_23 = t;
      {
        ATerm u_22 = NULL;
        t = SSLgetAnnotations(not_null(r_22));
        {
          u_22 = t;
          if(((t_22 != NULL) && (t_22 != u_22)))
            _fail(u_22);
          else
            t_22 = u_22;
        }
      }
      t = q_23;
      {
        ATerm w_22 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stdin_0), not_null(t_22));
        {
          w_22 = t;
          if(((v_22 != NULL) && (v_22 != w_22)))
            _fail(w_22);
          else
            v_22 = w_22;
        }
        t = not_null(v_22);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm FILE_1 (ATerm t, ATerm n_61 (ATerm))
{
  ATerm f_23 = NULL,g_23 = NULL;
  f_23 = t;
  e_23 :
  if(match_cons(f_23, sym_FILE_1))
    {
      g_23 = ATgetArgument(f_23, 0);
      {
        ATerm j_23 = NULL,l_23 = NULL;
        ATerm k_23 = NULL;
        t = SSLgetAnnotations(not_null(f_23));
        {
          k_23 = t;
          if(((j_23 != NULL) && (j_23 != k_23)))
            _fail(k_23);
          else
            j_23 = k_23;
        }
        {
          t = not_null(g_23);
          {
            ATerm n_23 = NULL;
            t = n_61(t);
            {
              l_23 = t;
              {
                ATerm o_23 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FILE_1, not_null(l_23)), not_null(j_23));
                {
                  o_23 = t;
                  if(((n_23 != NULL) && (n_23 != o_23)))
                    _fail(o_23);
                  else
                    n_23 = o_23;
                }
                t = not_null(n_23);
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
ATerm xtc_transform_2 (ATerm t, ATerm z_82 (ATerm), ATerm a_83 (ATerm))
{
  ATerm r_23 = t;
  int s_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_23 = t;
      int u_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = FILE_1(t, _id);
          ;
          LocalPopChoice(u_23);
        }
      else
        {
          t = t_23;
          t = stdin_0(t);
        }
      LocalPopChoice(s_23);
      t = xtc_transform_file_2(t, z_82, a_83);
    }
  else
    {
      t = r_23;
      t = xtc_transform_term_2(t, z_82, a_83);
    }
  return(t);
}
ATerm xtc_sglr_1 (ATerm t, ATerm r_92 (ATerm))
{
  ATerm o_2 (ATerm t)
  {
    t = term_z_23;
    return(t);
  }
  ATerm p_2 (ATerm t)
  {
    ATerm v_23 = NULL,x_23 = NULL;
    ATerm a_24;
    a_24 = t;
    {
      ATerm w_23 = NULL;
      t = term_c_23;
      {
        t = r_92(t);
        {
          t = xtc_find_0(t);
          {
            w_23 = t;
            if(((v_23 != NULL) && (v_23 != w_23)))
              _fail(w_23);
            else
              v_23 = w_23;
          }
        }
      }
    }
    t = a_24;
    {
      ATerm y_23 = NULL;
      t = term_c_23;
      {
        t = pass_v_verbose_0(t);
        {
          y_23 = t;
          if(((x_23 != NULL) && (x_23 != y_23)))
            _fail(y_23);
          else
            x_23 = y_23;
        }
      }
      t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(not_null(x_23)), not_null(v_23)), term_e_24), term_b_24);
    }
    return(t);
  }
  t = xtc_transform_2(t, o_2, p_2);
  return(t);
}
ATerm copy_file_0 (ATerm t)
{
  ATerm d_24 = NULL,i_24 = NULL,j_24 = NULL;
  d_24 = t;
  c_24 :
  if(match_cons(d_24, sym__2))
    {
      i_24 = ATgetArgument(d_24, 0);
      j_24 = ATgetArgument(d_24, 1);
      t = SSL_copy(not_null(i_24), not_null(j_24));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm stderr_0 (ATerm t)
{
  ATerm u_24 = NULL;
  u_24 = t;
  t_24 :
  if(match_cons(u_24, sym_stderr_0))
    {
      ATerm w_24 = NULL,y_24 = NULL;
      ATerm f_24;
      f_24 = t;
      {
        ATerm x_24 = NULL;
        t = SSLgetAnnotations(not_null(u_24));
        {
          x_24 = t;
          if(((w_24 != NULL) && (w_24 != x_24)))
            _fail(x_24);
          else
            w_24 = x_24;
        }
      }
      t = f_24;
      {
        ATerm z_24 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stderr_0), not_null(w_24));
        {
          z_24 = t;
          if(((y_24 != NULL) && (y_24 != z_24)))
            _fail(z_24);
          else
            y_24 = z_24;
        }
        t = not_null(y_24);
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
  ATerm j_25 = NULL;
  j_25 = t;
  i_25 :
  if(match_cons(j_25, sym_stdout_0))
    {
      ATerm l_25 = NULL,n_25 = NULL;
      ATerm g_24;
      g_24 = t;
      {
        ATerm m_25 = NULL;
        t = SSLgetAnnotations(not_null(j_25));
        {
          m_25 = t;
          if(((l_25 != NULL) && (l_25 != m_25)))
            _fail(m_25);
          else
            l_25 = m_25;
        }
      }
      t = g_24;
      {
        ATerm o_25 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stdout_0), not_null(l_25));
        {
          o_25 = t;
          if(((n_25 != NULL) && (n_25 != o_25)))
            _fail(o_25);
          else
            n_25 = o_25;
        }
        t = not_null(n_25);
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
  ATerm f_26 = NULL,g_26 = NULL;
  f_26 = t;
  e_26 :
  if(match_cons(f_26, sym_FILE_1))
    {
      g_26 = ATgetArgument(f_26, 0);
      {
        ATerm h_24 = t;
        int k_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_26 = NULL;
            ATerm k_26 = NULL;
            t = m_0(t);
            {
              k_26 = t;
              {
                if(((i_26 != NULL) && (i_26 != k_26)))
                  _fail(k_26);
                else
                  i_26 = k_26;
                {
                  ATerm l_24 = t;
                  int m_24 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = stdout_0(t);
                      ;
                      LocalPopChoice(m_24);
                    }
                  else
                    {
                      t = l_24;
                      t = stderr_0(t);
                    }
                  {
                    t = (ATerm) ATmakeAppl(sym__2, not_null(g_26), not_null(i_26));
                    t = copy_file_0(t);
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(g_26));
            ;
            LocalPopChoice(k_24);
          }
        else
          {
            t = h_24;
            {
              ATerm n_24 = t;
              int o_24 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm m_26 = NULL;
                  ATerm n_26 = NULL;
                  t = m_0(t);
                  {
                    n_26 = t;
                    {
                      if(((m_26 != NULL) && (m_26 != n_26)))
                        _fail(n_26);
                      else
                        m_26 = n_26;
                      {
                        ATerm p_24 = t;
                        if((PushChoice() == 0))
                          {
                            ATerm q_24 = t;
                            int r_24 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = stdout_0(t);
                                ;
                                LocalPopChoice(r_24);
                              }
                            else
                              {
                                t = q_24;
                                {
                                  ATerm s_24 = t;
                                  int v_24 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = stderr_0(t);
                                      ;
                                      LocalPopChoice(v_24);
                                    }
                                  else
                                    {
                                      t = s_24;
                                      {
                                        ATerm o_26 = NULL;
                                        o_26 = t;
                                        if(((g_26 != NULL) && (g_26 != o_26)))
                                          _fail(o_26);
                                        else
                                          g_26 = o_26;
                                      }
                                    }
                                }
                              }
                            PopChoice();
                            _fail(t);
                          }
                        else
                          {
                            t = p_24;
                          }
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(g_26), not_null(m_26));
                          t = copy_file_0(t);
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(g_26));
                  ;
                  LocalPopChoice(o_24);
                }
              else
                {
                  t = n_24;
                  {
                    ATerm q_26 = NULL;
                    t = m_0(t);
                    {
                      q_26 = t;
                      if(((g_26 != NULL) && (g_26 != q_26)))
                        _fail(q_26);
                      else
                        g_26 = q_26;
                    }
                    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(g_26));
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
  ATerm e_27 = NULL,f_27 = NULL,g_27 = NULL;
  e_27 = t;
  d_27 :
  if(((ATgetType(e_27) == AT_LIST) && !(ATisEmpty(e_27))))
    {
      f_27 = ATgetFirst((ATermList) e_27);
      g_27 = (ATerm) ATgetNext((ATermList) e_27);
      t = not_null(g_27);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_pop_0 (ATerm t)
{
  ATerm m_27 = NULL,n_27 = NULL,o_27 = NULL;
  m_27 = t;
  l_27 :
  if(match_cons(m_27, sym__2))
    {
      n_27 = ATgetArgument(m_27, 0);
      o_27 = ATgetArgument(m_27, 1);
      {
        ATerm a_25;
        a_25 = t;
        {
          ATerm r_27 = NULL;
          ATerm s_27 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(n_27), not_null(o_27));
          {
            ATerm b_25 = t;
            int c_25 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                t = Tl_0(t);
                ;
                LocalPopChoice(c_25);
              }
            else
              {
                t = b_25;
                t = (ATerm) ATempty;
              }
            {
              s_27 = t;
              if(((r_27 != NULL) && (r_27 != s_27)))
                _fail(s_27);
              else
                r_27 = s_27;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(n_27), not_null(o_27), not_null(r_27));
            t = table_put_0(t);
          }
        }
        t = a_25;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm end_scope_1 (ATerm t, ATerm f_79 (ATerm))
{
  ATerm z_27 = NULL,a_28 = NULL,b_28 = NULL;
  ATerm d_25;
  d_25 = t;
  {
    ATerm c_28 = NULL;
    ATerm d_28 = NULL,e_28 = NULL,f_28 = NULL;
    t = f_79(t);
    {
      c_28 = t;
      {
        if(((b_28 != NULL) && (b_28 != c_28)))
          _fail(c_28);
        else
          b_28 = c_28;
        {
          ATerm e_25 = t;
          int f_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(b_28), term_o_22);
              t = table_get_0(t);
              ;
              LocalPopChoice(f_25);
            }
          else
            {
              t = e_25;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
            }
          {
            d_28 = t;
            y_27 :
            if(((ATgetType(d_28) == AT_LIST) && !(ATisEmpty(d_28))))
              {
                e_28 = ATgetFirst((ATermList) d_28);
                f_28 = (ATerm) ATgetNext((ATermList) d_28);
                {
                  if(((a_28 != NULL) && (a_28 != e_28)))
                    _fail(e_28);
                  else
                    a_28 = e_28;
                  {
                    if(((z_27 != NULL) && (z_27 != f_28)))
                      _fail(f_28);
                    else
                      z_27 = f_28;
                    {
                      t = (ATerm) ATmakeAppl(sym__3, not_null(b_28), term_o_22, not_null(z_27));
                      {
                        t = table_put_0(t);
                        {
                          t = not_null(a_28);
                          {
                            ATerm q_2 (ATerm t)
                            {
                              ATerm g_28 = NULL;
                              g_28 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(b_28), not_null(g_28));
                                t = table_pop_0(t);
                              }
                              return(t);
                            }
                            t = map_1(t, q_2);
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
  t = d_25;
  return(t);
}
ATerm remove_file_0 (ATerm t)
{
  ATerm m_28 = NULL;
  m_28 = t;
  t = SSL_remove(not_null(m_28));
  return(t);
}
ATerm restore_always_2 (ATerm t, ATerm a_80 (ATerm), ATerm b_80 (ATerm))
{
  ATerm g_25 = t;
  int h_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = a_80(t);
      t = b_80(t);
      ;
      LocalPopChoice(h_25);
    }
  else
    {
      t = g_25;
      {
        t = b_80(t);
        _fail(t);
      }
    }
  return(t);
}
ATerm begin_scope_1 (ATerm t, ATerm e_79 (ATerm))
{
  ATerm r_28 = NULL;
  ATerm k_25;
  k_25 = t;
  {
    ATerm s_28 = NULL;
    ATerm t_28 = NULL;
    t = e_79(t);
    {
      s_28 = t;
      {
        if(((r_28 != NULL) && (r_28 != s_28)))
          _fail(s_28);
        else
          r_28 = s_28;
        {
          ATerm u_28 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(r_28), term_o_22);
          {
            ATerm p_25 = t;
            int q_25 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                ;
                LocalPopChoice(q_25);
              }
            else
              {
                t = p_25;
                t = (ATerm) ATempty;
              }
            {
              u_28 = t;
              if(((t_28 != NULL) && (t_28 != u_28)))
                _fail(u_28);
              else
                t_28 = u_28;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(r_28), term_o_22, (ATerm) ATinsert(CheckATermList(not_null(t_28)), (ATerm) ATempty));
            t = table_put_0(t);
          }
        }
      }
    }
  }
  t = k_25;
  return(t);
}
ATerm xtc_temp_files_1 (ATerm t, ATerm j_82 (ATerm))
{
  ATerm z_28 = NULL,a_29 = NULL;
  ATerm r_2 (ATerm t)
  {
    t = term_i_23;
    return(t);
  }
  t = begin_scope_1(t, r_2);
  {
    ATerm s_2 (ATerm t)
    {
      ATerm r_25;
      r_25 = t;
      {
        ATerm b_29 = NULL,c_29 = NULL,d_29 = NULL;
        ATerm s_25 = t;
        int t_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_u_25;
            t = table_get_0(t);
            ;
            LocalPopChoice(t_25);
          }
        else
          {
            t = s_25;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
          }
        {
          b_29 = t;
          y_28 :
          if(((ATgetType(b_29) == AT_LIST) && !(ATisEmpty(b_29))))
            {
              c_29 = ATgetFirst((ATermList) b_29);
              d_29 = (ATerm) ATgetNext((ATermList) b_29);
              {
                if(((a_29 != NULL) && (a_29 != c_29)))
                  _fail(c_29);
                else
                  a_29 = c_29;
                {
                  if(((z_28 != NULL) && (z_28 != d_29)))
                    _fail(d_29);
                  else
                    z_28 = d_29;
                  {
                    t = not_null(a_29);
                    {
                      ATerm t_2 (ATerm t)
                      {
                        t = try_1(t, remove_file_0);
                        return(t);
                      }
                      t = map_1(t, t_2);
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
      t = r_25;
      {
        ATerm v_2 (ATerm t)
        {
          t = term_i_23;
          return(t);
        }
        t = end_scope_1(t, v_2);
      }
      return(t);
    }
    t = restore_always_2(t, j_82, s_2);
  }
  return(t);
}
ATerm xtc_io_1 (ATerm t, ATerm k_82 (ATerm))
{
  ATerm w_2 (ATerm t)
  {
    ATerm v_25 = t;
    int w_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_29 = NULL;
        ATerm h_29 = NULL;
        t = term_p_23;
        {
          t = get_config_0(t);
          {
            h_29 = t;
            if(((g_29 != NULL) && (g_29 != h_29)))
              _fail(h_29);
            else
              g_29 = h_29;
          }
        }
        t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(g_29));
        ;
        LocalPopChoice(w_25);
      }
    else
      {
        t = v_25;
        t = term_b_13;
      }
    {
      t = k_82(t);
      {
        ATerm x_2 (ATerm t)
        {
          ATerm x_25 = t;
          int y_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = term_m_23;
              t = get_config_0(t);
              ;
              LocalPopChoice(y_25);
            }
          else
            {
              t = x_25;
              t = term_z_25;
            }
          return(t);
        }
        t = copy_to_1(t, x_2);
      }
    }
    return(t);
  }
  t = xtc_temp_files_1(t, w_2);
  return(t);
}
ATerm version_option_0 (ATerm t)
{
  ATerm z_2 (ATerm t)
  {
    ATerm k_29 = NULL;
    k_29 = t;
    j_29 :
    if(!(match_string(k_29, "-v")))
      {
        if(!(match_string(k_29, "--version")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm a_3 (ATerm t)
  {
    t = term_a_26;
    t = set_config_0(t);
    t = term_b_26;
    return(t);
  }
  ATerm c_3 (ATerm t)
  {
    t = term_c_26;
    return(t);
  }
  t = Option_3(t, z_2, a_3, c_3);
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm d_3 (ATerm t)
  {
    ATerm n_29 = NULL;
    n_29 = t;
    l_29 :
    if(!(match_string(n_29, "-k")))
      {
        if(!(match_string(n_29, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm e_3 (ATerm t)
  {
    ATerm d_26;
    d_26 = t;
    {
      ATerm o_29 = NULL;
      ATerm p_29 = NULL;
      t = string_to_int_0(t);
      {
        p_29 = t;
        if(((o_29 != NULL) && (o_29 != p_29)))
          _fail(p_29);
        else
          o_29 = p_29;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_h_26, not_null(o_29));
        t = set_config_0(t);
      }
    }
    t = d_26;
    return(t);
  }
  ATerm f_3 (ATerm t)
  {
    t = term_j_26;
    return(t);
  }
  t = ArgOption_3(t, d_3, e_3, f_3);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm s_29 = NULL;
  s_29 = t;
  t = SSL_string_to_int(not_null(s_29));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm l_26 = t;
  int p_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_3 (ATerm t)
      {
        ATerm a_30 = NULL;
        a_30 = t;
        v_29 :
        if(!(match_string(a_30, "-S")))
          {
            if(!(match_string(a_30, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm i_3 (ATerm t)
      {
        t = term_s_26;
        t = set_config_0(t);
        t = term_t_26;
        return(t);
      }
      ATerm k_3 (ATerm t)
      {
        t = term_u_26;
        return(t);
      }
      t = Option_3(t, g_3, i_3, k_3);
      ;
      LocalPopChoice(p_26);
    }
  else
    {
      t = l_26;
      {
        ATerm v_26 = t;
        int w_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_3 (ATerm t)
            {
              ATerm b_30 = NULL;
              b_30 = t;
              w_29 :
              if(!(match_string(b_30, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm o_3 (ATerm t)
            {
              ATerm e_30 = NULL;
              ATerm x_26;
              x_26 = t;
              {
                ATerm c_30 = NULL;
                ATerm d_30 = NULL;
                t = string_to_int_0(t);
                {
                  d_30 = t;
                  if(((c_30 != NULL) && (c_30 != d_30)))
                    _fail(d_30);
                  else
                    c_30 = d_30;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_p_7, not_null(c_30));
                  t = set_config_0(t);
                }
              }
              t = x_26;
              {
                ATerm f_30 = NULL;
                f_30 = t;
                if(((e_30 != NULL) && (e_30 != f_30)))
                  _fail(f_30);
                else
                  e_30 = f_30;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(e_30));
              }
              return(t);
            }
            ATerm p_3 (ATerm t)
            {
              t = term_y_26;
              return(t);
            }
            t = ArgOption_3(t, n_3, o_3, p_3);
            ;
            LocalPopChoice(w_26);
          }
        else
          {
            t = v_26;
            {
              ATerm q_3 (ATerm t)
              {
                ATerm g_30 = NULL;
                g_30 = t;
                z_29 :
                if(!(match_string(g_30, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm t_3 (ATerm t)
              {
                t = term_a_27;
                t = set_config_0(t);
                t = term_b_27;
                return(t);
              }
              ATerm u_3 (ATerm t)
              {
                t = term_c_27;
                return(t);
              }
              t = Option_3(t, q_3, t_3, u_3);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0 (ATerm t)
{
  ATerm h_27 = t;
  int i_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      ;
      LocalPopChoice(i_27);
    }
  else
    {
      t = h_27;
      {
        ATerm j_27 = t;
        int k_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = keep_option_0(t);
            ;
            LocalPopChoice(k_27);
          }
        else
          {
            t = j_27;
            t = version_option_0(t);
          }
      }
    }
  return(t);
}
ATerm output_option_0 (ATerm t)
{
  ATerm x_3 (ATerm t)
  {
    ATerm m_30 = NULL;
    m_30 = t;
    j_30 :
    if(!(match_string(m_30, "-o")))
      {
        if(!(match_string(m_30, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm y_3 (ATerm t)
  {
    ATerm p_30 = NULL;
    ATerm p_27;
    p_27 = t;
    {
      ATerm n_30 = NULL;
      ATerm o_30 = NULL;
      o_30 = t;
      if(((n_30 != NULL) && (n_30 != o_30)))
        _fail(o_30);
      else
        n_30 = o_30;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_m_23, not_null(n_30));
        t = set_config_0(t);
      }
    }
    t = p_27;
    {
      ATerm q_30 = NULL;
      q_30 = t;
      if(((p_30 != NULL) && (p_30 != q_30)))
        _fail(q_30);
      else
        p_30 = q_30;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(p_30));
    }
    return(t);
  }
  ATerm z_3 (ATerm t)
  {
    t = term_q_27;
    return(t);
  }
  t = ArgOption_3(t, x_3, y_3, z_3);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm t_27 = t;
  int u_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      ;
      LocalPopChoice(u_27);
    }
  else
    {
      t = t_27;
      {
        ATerm d_4 (ATerm t)
        {
          ATerm u_30 = NULL;
          u_30 = t;
          t_30 :
          if(!(match_string(u_30, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm l_4 (ATerm t)
        {
          t = term_w_27;
          t = set_config_0(t);
          t = term_x_27;
          return(t);
        }
        ATerm m_4 (ATerm t)
        {
          t = term_h_28;
          return(t);
        }
        t = Option_3(t, d_4, l_4, m_4);
      }
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm c_31 = NULL,d_31 = NULL,h_31 = NULL,j_31 = NULL,k_31 = NULL;
  c_31 = t;
  y_30 :
  if(match_string(c_31, "register-usage-info"))
    {
      t = register_usage_1(t, l_0);
    }
  else
    {
      if(((ATgetType(c_31) == AT_LIST) && !(ATisEmpty(c_31))))
        {
          d_31 = ATgetFirst((ATermList) c_31);
          h_31 = (ATerm) ATgetNext((ATermList) c_31);
          z_30 :
          if(((ATgetType(h_31) == AT_LIST) && !(ATisEmpty(h_31))))
            {
              j_31 = ATgetFirst((ATermList) h_31);
              k_31 = (ATerm) ATgetNext((ATermList) h_31);
              {
                ATerm o_31 = NULL;
                ATerm i_28;
                i_28 = t;
                {
                  t = not_null(d_31);
                  t = j_0(t);
                }
                t = i_28;
                {
                  ATerm p_31 = NULL;
                  t = not_null(j_31);
                  {
                    t = k_0(t);
                    {
                      p_31 = t;
                      if(((o_31 != NULL) && (o_31 != p_31)))
                        _fail(p_31);
                      else
                        o_31 = p_31;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(k_31)), not_null(o_31));
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
  ATerm n_4 (ATerm t)
  {
    ATerm w_31 = NULL;
    w_31 = t;
    t_31 :
    if(!(match_string(w_31, "-i")))
      {
        if(!(match_string(w_31, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm o_4 (ATerm t)
  {
    ATerm z_31 = NULL;
    ATerm j_28;
    j_28 = t;
    {
      ATerm x_31 = NULL;
      ATerm y_31 = NULL;
      y_31 = t;
      if(((x_31 != NULL) && (x_31 != y_31)))
        _fail(y_31);
      else
        x_31 = y_31;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_p_23, not_null(x_31));
        t = set_config_0(t);
      }
    }
    t = j_28;
    {
      ATerm a_32 = NULL;
      a_32 = t;
      if(((z_31 != NULL) && (z_31 != a_32)))
        _fail(a_32);
      else
        z_31 = a_32;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(z_31));
    }
    return(t);
  }
  ATerm u_4 (ATerm t)
  {
    t = term_k_28;
    return(t);
  }
  t = ArgOption_3(t, n_4, o_4, u_4);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm l_28 = t;
  int n_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      ;
      LocalPopChoice(n_28);
    }
  else
    {
      t = l_28;
      {
        ATerm o_28 = t;
        int p_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0(t);
            ;
            LocalPopChoice(p_28);
          }
        else
          {
            t = o_28;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm default_usage_0 (ATerm t)
{
  ATerm q_28;
  q_28 = t;
  {
    ATerm e_32 = NULL;
    ATerm f_32 = NULL;
    t = term_c_23;
    {
      t = whoami_0(t);
      {
        f_32 = t;
        if(((e_32 != NULL) && (e_32 != f_32)))
          _fail(f_32);
        else
          e_32 = f_32;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_k_8, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_w_28), not_null(e_32)), term_v_28));
      {
        t = printnl_0(t);
        {
          t = term_x_7;
          t = exit_0(t);
        }
      }
    }
  }
  t = q_28;
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  ATerm i_32 = NULL;
  t = report_run_time_0(t);
  {
    ATerm j_32 = NULL;
    t = term_c_23;
    {
      t = whoami_0(t);
      {
        j_32 = t;
        if(((i_32 != NULL) && (i_32 != j_32)))
          _fail(j_32);
        else
          i_32 = j_32;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_k_8, (ATerm) ATinsert(ATinsert(ATempty, term_x_28), not_null(i_32)));
      {
        t = printnl_0(t);
        {
          t = term_x_7;
          t = exit_0(t);
        }
      }
    }
  }
  return(t);
}
ATerm whoami_0 (ATerm t)
{
  t = term_e_29;
  t = get_config_0(t);
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm o_32 = NULL;
  o_32 = t;
  t = SSL_TicksToSeconds(not_null(o_32));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm t_32 = NULL,u_32 = NULL,v_32 = NULL;
  t_32 = t;
  s_32 :
  if(match_cons(t_32, sym__2))
    {
      u_32 = ATgetArgument(t_32, 0);
      v_32 = ATgetArgument(t_32, 1);
      {
        ATerm f_29 = t;
        int i_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(u_32), not_null(v_32));
            ;
            LocalPopChoice(i_29);
          }
        else
          {
            t = f_29;
            t = SSL_addr(not_null(u_32), not_null(v_32));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm h_75 (ATerm), ATerm i_75 (ATerm))
{
  ATerm m_29 = t;
  int q_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = h_75(t);
      ;
      LocalPopChoice(q_29);
    }
  else
    {
      t = m_29;
      {
        ATerm c_33 = NULL,d_33 = NULL,e_33 = NULL;
        c_33 = t;
        b_33 :
        if(((ATgetType(c_33) == AT_LIST) && !(ATisEmpty(c_33))))
          {
            d_33 = ATgetFirst((ATermList) c_33);
            e_33 = (ATerm) ATgetNext((ATermList) c_33);
            {
              ATerm h_33 = NULL;
              ATerm i_33 = NULL;
              t = not_null(e_33);
              {
                t = foldr_2(t, h_75, i_75);
                {
                  i_33 = t;
                  if(((h_33 != NULL) && (h_33 != i_33)))
                    _fail(i_33);
                  else
                    h_33 = i_33;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(d_33), not_null(h_33));
                t = i_75(t);
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
ATerm crush_2 (ATerm t, ATerm f_73 (ATerm), ATerm g_73 (ATerm))
{
  ATerm p_33 = NULL;
  ATerm r_33 = NULL;
  p_33 = t;
  {
    ATerm s_33 = NULL;
    ATerm u_33 = NULL,v_33 = NULL,w_33 = NULL;
    t = not_null(p_33);
    {
      s_33 = t;
      {
        t = SSL_explode_term(not_null(s_33));
        {
          u_33 = t;
          o_33 :
          if(match_cons(u_33, sym__2))
            {
              v_33 = ATgetArgument(u_33, 0);
              w_33 = ATgetArgument(u_33, 1);
              if(((r_33 != NULL) && (r_33 != w_33)))
                _fail(w_33);
              else
                r_33 = w_33;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(r_33);
      t = foldr_2(t, f_73, g_73);
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
    ATerm v_4 (ATerm t)
    {
      t = term_r_26;
      return(t);
    }
    t = crush_2(t, v_4, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm c_34 = NULL,d_34 = NULL,e_34 = NULL;
  c_34 = t;
  b_34 :
  if(match_cons(c_34, sym__2))
    {
      d_34 = ATgetArgument(c_34, 0);
      e_34 = ATgetArgument(c_34, 1);
      {
        ATerm r_29;
        r_29 = t;
        {
          ATerm t_29 = t;
          int u_29 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(d_34), not_null(e_34));
              ;
              LocalPopChoice(u_29);
            }
          else
            {
              t = t_29;
              t = SSL_gtr(not_null(d_34), not_null(e_34));
            }
        }
        t = r_29;
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
  ATerm k_34 = NULL;
  ATerm x_29 = t;
  int y_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_34 = NULL,m_34 = NULL,n_34 = NULL;
      l_34 = t;
      j_34 :
      if(match_cons(l_34, sym__2))
        {
          m_34 = ATgetArgument(l_34, 0);
          n_34 = ATgetArgument(l_34, 1);
          {
            if(((k_34 != NULL) && (k_34 != m_34)))
              _fail(m_34);
            else
              k_34 = m_34;
            if(((k_34 != NULL) && (k_34 != n_34)))
              _fail(n_34);
            else
              k_34 = n_34;
          }
        }
      else
        {
          _fail(t);
        }
      ;
      LocalPopChoice(y_29);
    }
  else
    {
      t = x_29;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm f_80 (ATerm))
{
  ATerm a_5 (ATerm t)
  {
    ATerm h_30;
    h_30 = t;
    {
      ATerm q_34 = NULL;
      ATerm r_34 = NULL;
      t = term_p_7;
      {
        t = get_config_0(t);
        {
          r_34 = t;
          if(((q_34 != NULL) && (q_34 != r_34)))
            _fail(r_34);
          else
            q_34 = r_34;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(q_34), term_x_7);
        t = geq_0(t);
      }
    }
    t = h_30;
    t = f_80(t);
    return(t);
  }
  t = try_1(t, a_5);
  return(t);
}
ATerm report_run_time_0 (ATerm t)
{
  ATerm b_5 (ATerm t)
  {
    ATerm v_34 = NULL,x_34 = NULL;
    ATerm i_30;
    i_30 = t;
    {
      ATerm w_34 = NULL;
      t = run_time_0(t);
      {
        w_34 = t;
        if(((v_34 != NULL) && (v_34 != w_34)))
          _fail(w_34);
        else
          v_34 = w_34;
      }
    }
    t = i_30;
    {
      ATerm y_34 = NULL;
      t = term_c_23;
      {
        t = whoami_0(t);
        {
          y_34 = t;
          if(((x_34 != NULL) && (x_34 != y_34)))
            _fail(y_34);
          else
            x_34 = y_34;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_k_8, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_k_30), not_null(v_34)), term_w_13), not_null(x_34)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, b_5);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  t = report_run_time_0(t);
  {
    t = term_r_26;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm f_35 = NULL;
  f_35 = t;
  e_35 :
  if(match_cons(f_35, sym_Version_0))
    {
      ATerm h_35 = NULL,j_35 = NULL;
      ATerm l_30;
      l_30 = t;
      {
        ATerm i_35 = NULL;
        t = SSLgetAnnotations(not_null(f_35));
        {
          i_35 = t;
          if(((h_35 != NULL) && (h_35 != i_35)))
            _fail(i_35);
          else
            h_35 = i_35;
        }
      }
      t = l_30;
      {
        ATerm k_35 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(h_35));
        {
          k_35 = t;
          if(((j_35 != NULL) && (j_35 != k_35)))
            _fail(k_35);
          else
            j_35 = k_35;
        }
        t = not_null(j_35);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm l_84 (ATerm))
{
  ATerm r_30 = t;
  int s_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_v_30;
      t = get_config_0(t);
      ;
      LocalPopChoice(s_30);
    }
  else
    {
      t = r_30;
      {
        ATerm c_5 (ATerm t)
        {
          ATerm w_30 = t;
          int x_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Help_0(t);
              ;
              LocalPopChoice(x_30);
            }
          else
            {
              t = w_30;
              {
                ATerm a_31 = t;
                int b_31 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Undefined_1(t, _id);
                    ;
                    LocalPopChoice(b_31);
                  }
                else
                  {
                    t = a_31;
                    t = Version_0(t);
                  }
              }
            }
          return(t);
        }
        t = option_defined_1(t, c_5);
      }
    }
  t = l_84(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm p_35 = NULL;
  p_35 = t;
  t = SSL_table_create(not_null(p_35));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm t_35 = NULL;
  t_35 = t;
  {
    ATerm e_31;
    e_31 = t;
    {
      t = term_f_31;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_f_31, term_g_31, not_null(t_35));
          t = table_put_0(t);
        }
      }
    }
    t = e_31;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm x_35 = NULL;
  x_35 = t;
  t = SSL_table_destroy(not_null(x_35));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm b_36 = NULL;
  b_36 = t;
  t = SSL_exit(not_null(b_36));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm f_36 = NULL,g_36 = NULL,h_36 = NULL;
  f_36 = t;
  e_36 :
  if(((ATgetType(f_36) == AT_LIST) && ATisEmpty(f_36)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(f_36) == AT_LIST) && !(ATisEmpty(f_36))))
        {
          g_36 = ATgetFirst((ATermList) f_36);
          h_36 = (ATerm) ATgetNext((ATermList) f_36);
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
  ATerm i_31;
  i_31 = t;
  {
    ATerm k_36 = NULL;
    ATerm n_36 = NULL;
    ATerm l_31 = t;
    int m_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        ;
        LocalPopChoice(m_31);
      }
    else
      {
        t = l_31;
        {
          ATerm l_36 = NULL;
          ATerm m_36 = NULL;
          m_36 = t;
          if(((l_36 != NULL) && (l_36 != m_36)))
            _fail(m_36);
          else
            l_36 = m_36;
          t = (ATerm) ATinsert(ATempty, not_null(l_36));
        }
      }
    {
      n_36 = t;
      if(((k_36 != NULL) && (k_36 != n_36)))
        _fail(n_36);
      else
        k_36 = n_36;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_z_25, not_null(k_36));
      t = printnl_0(t);
    }
  }
  t = i_31;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm h_86 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm g_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm w_36 = NULL,x_36 = NULL,y_36 = NULL;
  y_36 = t;
  v_36 :
  if(((ATgetType(y_36) == AT_LIST) && !(ATisEmpty(y_36))))
    {
      w_36 = ATgetFirst((ATermList) y_36);
      x_36 = (ATerm) ATgetNext((ATermList) y_36);
      {
        ATerm b_37 = NULL;
        t = not_null(x_36);
        {
          ATerm n_31;
          n_31 = t;
          {
            ATerm c_37 = NULL,e_37 = NULL,g_37 = NULL;
            ATerm q_31;
            q_31 = t;
            {
              ATerm d_37 = NULL;
              t = i_0(t);
              {
                d_37 = t;
                if(((c_37 != NULL) && (c_37 != d_37)))
                  _fail(d_37);
                else
                  c_37 = d_37;
              }
            }
            t = q_31;
            {
              ATerm f_37 = NULL;
              t = not_null(w_36);
              {
                t = g_0(t);
                {
                  f_37 = t;
                  if(((e_37 != NULL) && (e_37 != f_37)))
                    _fail(f_37);
                  else
                    e_37 = f_37;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(c_37)), not_null(e_37));
                {
                  g_37 = t;
                  if(((b_37 != NULL) && (b_37 != g_37)))
                    _fail(g_37);
                  else
                    b_37 = g_37;
                }
              }
            }
          }
          t = n_31;
          {
            ATerm h_5 (ATerm t)
            {
              t = not_null(b_37);
              return(t);
            }
            t = reverse_acc_2(t, g_0, h_5);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(y_36) == AT_LIST) && ATisEmpty(y_36)))
        {
          {
            t = term_c_23;
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
  ATerm i_5 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, i_5);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm g_86 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm u_61 (ATerm))
{
  ATerm r_37 = NULL,s_37 = NULL;
  r_37 = t;
  q_37 :
  if(match_cons(r_37, sym_Program_1))
    {
      s_37 = ATgetArgument(r_37, 0);
      {
        ATerm v_37 = NULL,x_37 = NULL;
        ATerm w_37 = NULL;
        t = SSLgetAnnotations(not_null(r_37));
        {
          w_37 = t;
          if(((v_37 != NULL) && (v_37 != w_37)))
            _fail(w_37);
          else
            v_37 = w_37;
        }
        {
          t = not_null(s_37);
          {
            ATerm z_37 = NULL;
            t = u_61(t);
            {
              x_37 = t;
              {
                ATerm a_38 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(x_37)), not_null(v_37));
                {
                  a_38 = t;
                  if(((z_37 != NULL) && (z_37 != a_38)))
                    _fail(a_38);
                  else
                    z_37 = a_38;
                }
                t = not_null(z_37);
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
  ATerm m_38 = NULL;
  ATerm r_31 = t;
  int s_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_38 = NULL;
      t = term_e_29;
      {
        t = get_config_0(t);
        {
          n_38 = t;
          if(((m_38 != NULL) && (m_38 != n_38)))
            _fail(n_38);
          else
            m_38 = n_38;
        }
      }
      ;
      LocalPopChoice(s_31);
    }
  else
    {
      t = r_31;
      {
        ATerm k_5 (ATerm t)
        {
          ATerm n_5 (ATerm t)
          {
            ATerm o_38 = NULL;
            o_38 = t;
            if(((m_38 != NULL) && (m_38 != o_38)))
              _fail(o_38);
            else
              m_38 = o_38;
            return(t);
          }
          t = Program_1(t, n_5);
          return(t);
        }
        t = option_defined_1(t, k_5);
      }
    }
  {
    ATerm o_5 (ATerm t)
    {
      ATerm r_5 (ATerm t)
      {
        t = not_null(m_38);
        return(t);
      }
      t = short_description_1(t, r_5);
      t = echo_0(t);
      return(t);
    }
    t = try_1(t, o_5);
    {
      t = term_u_31;
      {
        t = echo_0(t);
        {
          t = term_c_32;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm s_5 (ATerm t)
                {
                  ATerm p_38 = NULL;
                  ATerm q_38 = NULL;
                  q_38 = t;
                  if(((p_38 != NULL) && (p_38 != q_38)))
                    _fail(q_38);
                  else
                    p_38 = q_38;
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(p_38)), term_d_32);
                    t = echo_0(t);
                  }
                  return(t);
                }
                t = map_1(t, s_5);
                {
                  ATerm v_5 (ATerm t)
                  {
                    ATerm r_38 = NULL;
                    ATerm s_38 = NULL;
                    ATerm w_5 (ATerm t)
                    {
                      t = not_null(m_38);
                      return(t);
                    }
                    t = long_description_1(t, w_5);
                    {
                      s_38 = t;
                      if(((r_38 != NULL) && (r_38 != s_38)))
                        _fail(s_38);
                      else
                        r_38 = s_38;
                    }
                    {
                      t = (ATerm) ATinsert(CheckATermList(not_null(r_38)), term_g_32);
                      t = echo_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, v_5);
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
  ATerm z_38 = NULL,a_39 = NULL,b_39 = NULL;
  z_38 = t;
  y_38 :
  if(match_cons(z_38, sym__2))
    {
      a_39 = ATgetArgument(z_38, 0);
      b_39 = ATgetArgument(z_38, 1);
      {
        ATerm h_32;
        h_32 = t;
        t = SSL_printnl(not_null(a_39), not_null(b_39));
        t = h_32;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm v_61 (ATerm))
{
  ATerm o_39 = NULL,p_39 = NULL;
  o_39 = t;
  n_39 :
  if(match_cons(o_39, sym_Undefined_1))
    {
      p_39 = ATgetArgument(o_39, 0);
      {
        ATerm u_39 = NULL,w_39 = NULL;
        ATerm v_39 = NULL;
        t = SSLgetAnnotations(not_null(o_39));
        {
          v_39 = t;
          if(((u_39 != NULL) && (u_39 != v_39)))
            _fail(v_39);
          else
            u_39 = v_39;
        }
        {
          t = not_null(p_39);
          {
            ATerm y_39 = NULL;
            t = v_61(t);
            {
              w_39 = t;
              {
                ATerm z_39 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(w_39)), not_null(u_39));
                {
                  z_39 = t;
                  if(((y_39 != NULL) && (y_39 != z_39)))
                    _fail(z_39);
                  else
                    y_39 = z_39;
                }
                t = not_null(y_39);
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
ATerm fetch_1 (ATerm t, ATerm e_69 (ATerm))
{
  ATerm e_40 (ATerm t)
  {
    ATerm k_32 = t;
    int l_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, e_69, _id);
        ;
        LocalPopChoice(l_32);
      }
    else
      {
        t = k_32;
        t = Cons_2(t, _id, e_40);
      }
    return(t);
  }
  t = e_40(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm g_85 (ATerm))
{
  t = fetch_1(t, g_85);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm j_40 = NULL;
  j_40 = t;
  i_40 :
  if(match_cons(j_40, sym_Help_0))
    {
      ATerm n_40 = NULL,p_40 = NULL;
      ATerm m_32;
      m_32 = t;
      {
        ATerm o_40 = NULL;
        t = SSLgetAnnotations(not_null(j_40));
        {
          o_40 = t;
          if(((n_40 != NULL) && (n_40 != o_40)))
            _fail(o_40);
          else
            n_40 = o_40;
        }
      }
      t = m_32;
      {
        ATerm b_41 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(n_40));
        {
          b_41 = t;
          if(((p_40 != NULL) && (p_40 != b_41)))
            _fail(b_41);
          else
            p_40 = b_41;
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
ATerm implode_string_0 (ATerm t)
{
  ATerm i_41 = NULL;
  i_41 = t;
  t = SSL_implode_string(not_null(i_41));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm n_32 = t;
  int p_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      ;
      LocalPopChoice(p_32);
    }
  else
    {
      t = n_32;
      {
        ATerm w_41 = NULL,x_41 = NULL,y_41 = NULL;
        w_41 = t;
        v_41 :
        if(((ATgetType(w_41) == AT_LIST) && !(ATisEmpty(w_41))))
          {
            x_41 = ATgetFirst((ATermList) w_41);
            y_41 = (ATerm) ATgetNext((ATermList) w_41);
            {
              t = not_null(x_41);
              {
                ATerm b_6 (ATerm t)
                {
                  t = not_null(y_41);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, b_6);
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
  ATerm i_42 = NULL;
  ATerm p_42 = NULL;
  i_42 = t;
  {
    ATerm q_42 = NULL;
    ATerm w_42 = NULL,x_42 = NULL,f_43 = NULL;
    t = not_null(i_42);
    {
      q_42 = t;
      {
        t = SSL_explode_term(not_null(q_42));
        {
          w_42 = t;
          g_42 :
          if(match_cons(w_42, sym__2))
            {
              x_42 = ATgetArgument(w_42, 0);
              f_43 = ATgetArgument(w_42, 1);
              h_42 :
              if(match_string(x_42, ""))
                {
                  if(((p_42 != NULL) && (p_42 != f_43)))
                    _fail(f_43);
                  else
                    p_42 = f_43;
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
      t = not_null(p_42);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm k_69 (ATerm))
{
  ATerm k_43 (ATerm t)
  {
    ATerm q_32 = t;
    int r_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, k_43);
        ;
        LocalPopChoice(r_32);
      }
    else
      {
        t = q_32;
        {
          t = Nil_0(t);
          t = k_69(t);
        }
      }
    return(t);
  }
  t = k_43(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm p_43 = NULL,q_43 = NULL,r_43 = NULL;
  p_43 = t;
  o_43 :
  if(match_cons(p_43, sym__2))
    {
      q_43 = ATgetArgument(p_43, 0);
      r_43 = ATgetArgument(p_43, 1);
      {
        t = not_null(q_43);
        {
          ATerm c_6 (ATerm t)
          {
            t = not_null(r_43);
            return(t);
          }
          t = at_end_1(t, c_6);
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
  ATerm w_32 = t;
  int x_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      ;
      LocalPopChoice(x_32);
    }
  else
    {
      t = w_32;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm b_44 = NULL;
  b_44 = t;
  t = SSL_explode_string(not_null(b_44));
  return(t);
}
ATerm _2 (ATerm t, ATerm e_55 (ATerm), ATerm f_55 (ATerm))
{
  ATerm o_44 = NULL,p_44 = NULL,q_44 = NULL;
  o_44 = t;
  n_44 :
  if(match_cons(o_44, sym__2))
    {
      p_44 = ATgetArgument(o_44, 0);
      q_44 = ATgetArgument(o_44, 1);
      {
        ATerm w_44 = NULL,y_44 = NULL;
        ATerm x_44 = NULL;
        t = SSLgetAnnotations(not_null(o_44));
        {
          x_44 = t;
          if(((w_44 != NULL) && (w_44 != x_44)))
            _fail(x_44);
          else
            w_44 = x_44;
        }
        {
          t = not_null(p_44);
          {
            ATerm a_45 = NULL;
            t = e_55(t);
            {
              y_44 = t;
              {
                t = not_null(q_44);
                {
                  ATerm g_45 = NULL;
                  t = f_55(t);
                  {
                    a_45 = t;
                    {
                      ATerm h_45 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(y_44), not_null(a_45)), not_null(w_44));
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
ATerm debug_1 (ATerm t, ATerm o_64 (ATerm))
{
  ATerm y_32;
  y_32 = t;
  {
    ATerm p_45 = NULL,r_45 = NULL;
    ATerm z_32;
    z_32 = t;
    {
      ATerm q_45 = NULL;
      t = o_64(t);
      {
        q_45 = t;
        if(((p_45 != NULL) && (p_45 != q_45)))
          _fail(q_45);
        else
          p_45 = q_45;
      }
    }
    t = z_32;
    {
      ATerm c_46 = NULL;
      c_46 = t;
      if(((r_45 != NULL) && (r_45 != c_46)))
        _fail(c_46);
      else
        r_45 = c_46;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_k_8, (ATerm) ATinsert(ATinsert(ATempty, not_null(r_45)), not_null(p_45)));
        t = printnl_0(t);
      }
    }
  }
  t = y_32;
  return(t);
}
ATerm map_1 (ATerm t, ATerm v_68 (ATerm))
{
  ATerm f_46 (ATerm t)
  {
    ATerm a_33 = t;
    int f_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        ;
        LocalPopChoice(f_33);
      }
    else
      {
        t = a_33;
        t = Cons_2(t, v_68, f_46);
      }
    return(t);
  }
  t = f_46(t);
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm k_46 = NULL;
  k_46 = t;
  t = SSL_is_string(not_null(k_46));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm g_33 = t;
  int j_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      ;
      LocalPopChoice(j_33);
    }
  else
    {
      t = g_33;
      {
        ATerm k_33 = t;
        int l_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_6 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, d_6);
            ;
            LocalPopChoice(l_33);
          }
        else
          {
            t = k_33;
            {
              ATerm x_46 = NULL,y_46 = NULL,z_46 = NULL;
              x_46 = t;
              w_46 :
              if(match_cons(x_46, sym_Path_1))
                {
                  y_46 = ATgetArgument(x_46, 0);
                  t = not_null(y_46);
                }
              else
                {
                  if(match_cons(x_46, sym_Var_1))
                    {
                      y_46 = ATgetArgument(x_46, 0);
                      {
                        t = not_null(y_46);
                        {
                          ATerm m_33 = t;
                          int n_33 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              ;
                              LocalPopChoice(n_33);
                            }
                          else
                            {
                              t = m_33;
                              {
                                ATerm e_6 (ATerm t)
                                {
                                  t = term_q_33;
                                  return(t);
                                }
                                t = debug_1(t, e_6);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(x_46, sym_Prefix_2))
                        {
                          y_46 = ATgetArgument(x_46, 0);
                          z_46 = ATgetArgument(x_46, 1);
                          {
                            ATerm k_47 = NULL,m_47 = NULL;
                            ATerm t_33;
                            t_33 = t;
                            {
                              ATerm l_47 = NULL;
                              t = not_null(y_46);
                              {
                                t = eval_config_0(t);
                                {
                                  l_47 = t;
                                  if(((k_47 != NULL) && (k_47 != l_47)))
                                    _fail(l_47);
                                  else
                                    k_47 = l_47;
                                }
                              }
                            }
                            t = t_33;
                            {
                              ATerm n_47 = NULL;
                              t = not_null(z_46);
                              {
                                t = eval_config_0(t);
                                {
                                  n_47 = t;
                                  if(((m_47 != NULL) && (m_47 != n_47)))
                                    _fail(n_47);
                                  else
                                    m_47 = n_47;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(k_47), not_null(m_47));
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
  ATerm z_47 = NULL;
  z_47 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_x_33, not_null(z_47));
    {
      t = table_get_0(t);
      {
        ATerm j_6 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm y_33;
            y_33 = t;
            {
              ATerm b_48 = NULL;
              ATerm c_48 = NULL;
              c_48 = t;
              if(((b_48 != NULL) && (b_48 != c_48)))
                _fail(c_48);
              else
                b_48 = c_48;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_x_33, not_null(z_47), not_null(b_48));
                t = table_put_0(t);
              }
            }
            t = y_33;
          }
          return(t);
        }
        t = try_1(t, j_6);
      }
    }
  }
  return(t);
}
ATerm try_1 (ATerm t, ATerm l_79 (ATerm))
{
  ATerm z_33 = t;
  int a_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = l_79(t);
      ;
      LocalPopChoice(a_34);
    }
  else
    {
      t = z_33;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm h_48 = NULL,i_48 = NULL,j_48 = NULL;
  h_48 = t;
  g_48 :
  if(match_cons(h_48, sym__2))
    {
      i_48 = ATgetArgument(h_48, 0);
      j_48 = ATgetArgument(h_48, 1);
      t = SSL_table_get(not_null(i_48), not_null(j_48));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm q_48 = NULL,r_48 = NULL,s_48 = NULL,t_48 = NULL;
  q_48 = t;
  p_48 :
  if(match_cons(q_48, sym__3))
    {
      r_48 = ATgetArgument(q_48, 0);
      s_48 = ATgetArgument(q_48, 1);
      t_48 = ATgetArgument(q_48, 2);
      {
        ATerm f_34;
        f_34 = t;
        {
          ATerm x_48 = NULL;
          ATerm y_48 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(r_48), not_null(s_48));
          {
            ATerm g_34 = t;
            int h_34 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                ;
                LocalPopChoice(h_34);
              }
            else
              {
                t = g_34;
                t = (ATerm) ATempty;
              }
            {
              y_48 = t;
              if(((x_48 != NULL) && (x_48 != y_48)))
                _fail(y_48);
              else
                x_48 = y_48;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(r_48), not_null(s_48), (ATerm) ATinsert(CheckATermList(not_null(x_48)), not_null(t_48)));
            t = table_put_0(t);
          }
        }
        t = f_34;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm l_86 (ATerm))
{
  ATerm c_49 = NULL;
  ATerm d_49 = NULL;
  t = term_c_23;
  {
    t = l_86(t);
    {
      d_49 = t;
      if(((c_49 != NULL) && (c_49 != d_49)))
        _fail(d_49);
      else
        c_49 = d_49;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_v_31, term_b_32, not_null(c_49));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm))
{
  ATerm j_49 = NULL,k_49 = NULL,l_49 = NULL;
  j_49 = t;
  i_49 :
  if(match_string(j_49, "register-usage-info"))
    {
      t = register_usage_1(t, d_0);
    }
  else
    {
      if(((ATgetType(j_49) == AT_LIST) && !(ATisEmpty(j_49))))
        {
          k_49 = ATgetFirst((ATermList) j_49);
          l_49 = (ATerm) ATgetNext((ATermList) j_49);
          {
            ATerm o_49 = NULL;
            ATerm i_34;
            i_34 = t;
            {
              t = not_null(k_49);
              t = a_0(t);
            }
            t = i_34;
            {
              ATerm p_49 = NULL;
              t = term_c_23;
              {
                t = b_0(t);
                {
                  p_49 = t;
                  if(((o_49 != NULL) && (o_49 != p_49)))
                    _fail(p_49);
                  else
                    o_49 = p_49;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(l_49)), not_null(o_49));
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
  ATerm k_6 (ATerm t)
  {
    ATerm u_49 = NULL;
    u_49 = t;
    t_49 :
    if(!(match_string(u_49, "--help")))
      {
        if(!(match_string(u_49, "-h")))
          {
            if(!(match_string(u_49, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm m_6 (ATerm t)
  {
    t = term_o_34;
    {
      t = set_config_0(t);
      t = term_p_34;
    }
    return(t);
  }
  ATerm n_6 (ATerm t)
  {
    t = term_s_34;
    return(t);
  }
  t = Option_3(t, k_6, m_6, n_6);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm x_49 = NULL,y_49 = NULL,z_49 = NULL;
  x_49 = t;
  w_49 :
  if(((ATgetType(x_49) == AT_LIST) && !(ATisEmpty(x_49))))
    {
      y_49 = ATgetFirst((ATermList) x_49);
      z_49 = (ATerm) ATgetNext((ATermList) x_49);
      t = (ATerm) ATinsert(CheckATermList(not_null(z_49)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(y_49)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm n_56 (ATerm), ATerm o_56 (ATerm))
{
  ATerm j_50 = NULL,k_50 = NULL,l_50 = NULL;
  j_50 = t;
  i_50 :
  if(((ATgetType(j_50) == AT_LIST) && !(ATisEmpty(j_50))))
    {
      k_50 = ATgetFirst((ATermList) j_50);
      l_50 = (ATerm) ATgetNext((ATermList) j_50);
      {
        ATerm p_50 = NULL,r_50 = NULL;
        ATerm q_50 = NULL;
        t = SSLgetAnnotations(not_null(j_50));
        {
          q_50 = t;
          if(((p_50 != NULL) && (p_50 != q_50)))
            _fail(q_50);
          else
            p_50 = q_50;
        }
        {
          t = not_null(k_50);
          {
            ATerm t_50 = NULL;
            t = n_56(t);
            {
              r_50 = t;
              {
                t = not_null(l_50);
                {
                  ATerm v_50 = NULL;
                  t = o_56(t);
                  {
                    t_50 = t;
                    {
                      ATerm w_50 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(t_50)), not_null(r_50)), not_null(p_50));
                      {
                        w_50 = t;
                        if(((v_50 != NULL) && (v_50 != w_50)))
                          _fail(w_50);
                        else
                          v_50 = w_50;
                      }
                      t = not_null(v_50);
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
  ATerm g_51 = NULL;
  g_51 = t;
  f_51 :
  if(((ATgetType(g_51) == AT_LIST) && ATisEmpty(g_51)))
    {
      {
        ATerm i_51 = NULL,k_51 = NULL;
        ATerm t_34;
        t_34 = t;
        {
          ATerm j_51 = NULL;
          t = SSLgetAnnotations(not_null(g_51));
          {
            j_51 = t;
            if(((i_51 != NULL) && (i_51 != j_51)))
              _fail(j_51);
            else
              i_51 = j_51;
          }
        }
        t = t_34;
        {
          ATerm l_51 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(i_51));
          {
            l_51 = t;
            if(((k_51 != NULL) && (k_51 != l_51)))
              _fail(l_51);
            else
              k_51 = l_51;
          }
          t = not_null(k_51);
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
  ATerm r_51 = NULL,s_51 = NULL,t_51 = NULL;
  r_51 = t;
  q_51 :
  if(match_cons(r_51, sym__2))
    {
      s_51 = ATgetArgument(r_51, 0);
      t_51 = ATgetArgument(r_51, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_x_33, not_null(s_51), not_null(t_51));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm j_86 (ATerm))
{
  ATerm u_34;
  u_34 = t;
  {
    ATerm o_6 (ATerm t)
    {
      t = term_z_34;
      t = j_86(t);
      return(t);
    }
    t = try_1(t, o_6);
  }
  t = u_34;
  {
    ATerm p_6 (ATerm t)
    {
      ATerm b_52 = NULL;
      ATerm a_35;
      a_35 = t;
      {
        ATerm z_51 = NULL;
        ATerm a_52 = NULL;
        a_52 = t;
        if(((z_51 != NULL) && (z_51 != a_52)))
          _fail(a_52);
        else
          z_51 = a_52;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_e_29, not_null(z_51));
          t = set_config_0(t);
        }
      }
      t = a_35;
      {
        ATerm c_52 = NULL;
        c_52 = t;
        if(((b_52 != NULL) && (b_52 != c_52)))
          _fail(c_52);
        else
          b_52 = c_52;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(b_52));
      }
      return(t);
    }
    ATerm u_6 (ATerm t)
    {
      ATerm b_35 = t;
      int c_35 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm d_35 = t;
          int g_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              ;
              LocalPopChoice(g_35);
            }
          else
            {
              t = d_35;
              {
                t = j_86(t);
                t = Cons_2(t, _id, u_6);
              }
            }
          ;
          LocalPopChoice(c_35);
        }
      else
        {
          t = b_35;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, p_6, u_6);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm i_52 = NULL,k_52 = NULL,l_52 = NULL;
  ATerm l_35;
  l_35 = t;
  {
    ATerm m_52 = NULL,n_52 = NULL,o_52 = NULL,p_52 = NULL;
    m_52 = t;
    h_52 :
    if(match_cons(m_52, sym__3))
      {
        n_52 = ATgetArgument(m_52, 0);
        o_52 = ATgetArgument(m_52, 1);
        p_52 = ATgetArgument(m_52, 2);
        {
          if(((i_52 != NULL) && (i_52 != n_52)))
            _fail(n_52);
          else
            i_52 = n_52;
          {
            if(((k_52 != NULL) && (k_52 != o_52)))
              _fail(o_52);
            else
              k_52 = o_52;
            {
              if(((l_52 != NULL) && (l_52 != p_52)))
                _fail(p_52);
              else
                l_52 = p_52;
              t = SSL_table_put(not_null(i_52), not_null(k_52), not_null(l_52));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = l_35;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm i_86 (ATerm))
{
  ATerm s_52 = NULL;
  ATerm m_35;
  m_35 = t;
  {
    t = term_n_35;
    t = table_put_0(t);
  }
  t = m_35;
  {
    ATerm v_6 (ATerm t)
    {
      ATerm o_35 = t;
      int q_35 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = i_86(t);
          ;
          LocalPopChoice(q_35);
        }
      else
        {
          t = o_35;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, v_6);
    {
      ATerm w_6 (ATerm t)
      {
        ATerm r_35 = t;
        int s_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_35;
            u_35 = t;
            {
              ATerm v_35 = t;
              int w_35 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_v_30;
                  t = get_config_0(t);
                  ;
                  LocalPopChoice(w_35);
                }
              else
                {
                  t = v_35;
                  t = option_defined_1(t, Help_0);
                }
            }
            t = u_35;
            {
              t = system_usage_0(t);
              {
                t = term_r_26;
                t = exit_0(t);
              }
            }
            ;
            LocalPopChoice(s_35);
          }
        else
          {
            t = r_35;
            {
              ATerm y_6 (ATerm t)
              {
                ATerm z_6 (ATerm t)
                {
                  ATerm t_52 = NULL;
                  t_52 = t;
                  if(((s_52 != NULL) && (s_52 != t_52)))
                    _fail(t_52);
                  else
                    s_52 = t_52;
                  return(t);
                }
                t = Undefined_1(t, z_6);
                return(t);
              }
              t = option_defined_1(t, y_6);
              {
                t = (ATerm) ATmakeAppl(sym__2, term_k_8, (ATerm) ATinsert(ATinsert(ATempty, not_null(s_52)), term_y_35));
                {
                  t = printnl_0(t);
                  {
                    t = system_usage_0(t);
                    {
                      t = term_x_7;
                      t = exit_0(t);
                    }
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, w_6);
      {
        ATerm z_35;
        z_35 = t;
        {
          t = term_v_31;
          t = table_destroy_0(t);
        }
        t = z_35;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm n_84 (ATerm), ATerm o_84 (ATerm), ATerm p_84 (ATerm), ATerm q_84 (ATerm))
{
  t = parse_options_1(t, n_84);
  {
    t = store_options_0(t);
    {
      t = p_84(t);
      {
        ATerm a_36 = t;
        int c_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, o_84);
            ;
            LocalPopChoice(c_36);
          }
        else
          {
            t = a_36;
            {
              ATerm d_36 = t;
              int i_36 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = q_84(t);
                  t = report_success_0(t);
                  ;
                  LocalPopChoice(i_36);
                }
              else
                {
                  t = d_36;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm option_wrap_2 (ATerm t, ATerm r_84 (ATerm), ATerm s_84 (ATerm))
{
  t = option_wrap_4(t, r_84, default_usage_0, _id, s_84);
  return(t);
}
ATerm xtc_io_wrap_2 (ATerm t, ATerm o_82 (ATerm), ATerm p_82 (ATerm))
{
  ATerm a_7 (ATerm t)
  {
    ATerm j_36 = t;
    int o_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_82(t);
        ;
        LocalPopChoice(o_36);
      }
    else
      {
        t = j_36;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm g_7 (ATerm t)
  {
    t = xtc_io_1(t, p_82);
    return(t);
  }
  t = option_wrap_2(t, a_7, g_7);
  return(t);
}
ATerm xtc_io_wrap_1 (ATerm t, ATerm n_82 (ATerm))
{
  t = xtc_io_wrap_2(t, _fail, n_82);
  return(t);
}
ATerm io_parse_box_0 (ATerm t)
{
  ATerm h_7 (ATerm t)
  {
    ATerm i_7 (ATerm t)
    {
      t = term_p_36;
      return(t);
    }
    t = xtc_sglr_1(t, i_7);
    t = xtc_implode_asfix_0(t);
    return(t);
  }
  t = xtc_io_wrap_1(t, h_7);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = io_parse_box_0(t);
  return(t);
}
